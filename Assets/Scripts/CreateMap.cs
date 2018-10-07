using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.UI;
using UnityEngine.XR.iOS;
using System.Runtime.InteropServices;
using System.IO;
using Newtonsoft.Json.Linq;
using Newtonsoft.Json;

[RequireComponent(typeof(CustomShapeManager))]
public class CreateMap : MonoBehaviour, PlacenoteListener {

    public Text debugText;

    private const string MAP_NAME = "GenericMap";

    private CustomShapeManager shapeManager;

    private bool shouldRecordWaypoints = false;
    private bool shouldSaveMap = true;

    private UnityARSessionNativeInterface mSession;
    private bool mFrameUpdated = false;
    private UnityARImageFrameData mImage = null;
    private UnityARCamera mARCamera;
    private bool mARKitInit = false;

    private LibPlacenote.MapMetadataSettable mCurrMapDetails;

    private bool mReportDebug = false;

    private BoxCollider mBoxColliderDummy;
    private SphereCollider mSphereColliderDummy;
    private CapsuleCollider mCapColliderDummy;

    // Use this for initialization
    void Start() {

        shapeManager = GetComponent<CustomShapeManager>();

        Input.location.Start();

        mSession = UnityARSessionNativeInterface.GetARSessionNativeInterface();
        UnityARSessionNativeInterface.ARFrameUpdatedEvent += ARFrameUpdated;
        StartARKit();
        FeaturesVisualizer.EnablePointcloud();
        LibPlacenote.Instance.RegisterListener(this);
    }

    void OnDisable() {
        UnityARSessionNativeInterface.ARFrameUpdatedEvent -= ARFrameUpdated;
    }

    private void ARFrameUpdated(UnityARCamera camera) {
        mFrameUpdated = true;
        mARCamera = camera;
    }


    private void InitARFrameBuffer() {
        mImage = new UnityARImageFrameData();

        int yBufSize = mARCamera.videoParams.yWidth * mARCamera.videoParams.yHeight;
        mImage.y.data = Marshal.AllocHGlobal(yBufSize);
        mImage.y.width = (ulong)mARCamera.videoParams.yWidth;
        mImage.y.height = (ulong)mARCamera.videoParams.yHeight;
        mImage.y.stride = (ulong)mARCamera.videoParams.yWidth;

        // This does assume the YUV_NV21 format
        int vuBufSize = mARCamera.videoParams.yWidth * mARCamera.videoParams.yWidth / 2;
        mImage.vu.data = Marshal.AllocHGlobal(vuBufSize);
        mImage.vu.width = (ulong)mARCamera.videoParams.yWidth / 2;
        mImage.vu.height = (ulong)mARCamera.videoParams.yHeight / 2;
        mImage.vu.stride = (ulong)mARCamera.videoParams.yWidth;

        mSession.SetCapturePixelData(true, mImage.y.data, mImage.vu.data);
    }

    // Update is called once per frame
    void Update() {
        if (mFrameUpdated) {
            mFrameUpdated = false;
            if (mImage == null) {
                InitARFrameBuffer();
            }

            if (mARCamera.trackingState == ARTrackingState.ARTrackingStateNotAvailable) {
                // ARKit pose is not yet initialized
                return;
            } else if (!mARKitInit && LibPlacenote.Instance.Initialized()) {
                mARKitInit = true;
                Debug.Log("ARKit + placenote Initialized");
                StartSavingMap();
            }

            Matrix4x4 matrix = mSession.GetCameraPose();

            Vector3 arkitPosition = PNUtility.MatrixOps.GetPosition(matrix);
            Quaternion arkitQuat = PNUtility.MatrixOps.GetRotation(matrix);

            LibPlacenote.Instance.SendARFrame(mImage, arkitPosition, arkitQuat, mARCamera.videoParams.screenOrientation);

            if (shouldRecordWaypoints) {
                Transform player = Camera.main.transform;
                //create waypoints if there are none around
                Collider[] hitColliders = Physics.OverlapSphere(player.position, 1f);
                int i = 0;
                while (i < hitColliders.Length) {
                    if (hitColliders[i].CompareTag("waypoint")) {
                        return;
                    }
                    i++;
                }
                Vector3 pos = player.position;
                Debug.Log(player.position);
                pos.y = -.5f;
                shapeManager.AddShape(pos, Quaternion.Euler(Vector3.zero), false);
            }
        }
    }

    public void CreateDestination() {
        shapeManager.AddDestinationShape();
    }

    void StartSavingMap() {
        ConfigureSession();

        if (!LibPlacenote.Instance.Initialized()) {
            Debug.Log("SDK not yet initialized");
            return;
        }

        Debug.Log("Started Session");
        LibPlacenote.Instance.StartSession();

        if (mReportDebug) {
            LibPlacenote.Instance.StartRecordDataset(
                (completed, faulted, percentage) => {
                    if (completed) {
                        Debug.Log("Dataset Upload Complete");
                    } else if (faulted) {
                        Debug.Log("Dataset Upload Faulted");
                    } else {
                        Debug.Log("Dataset Upload: (" + percentage.ToString("F2") + "/1.0)");
                    }
                });
            Debug.Log("Started Debug Report");
        }
    }

    private void StartARKit() {
        Debug.Log("Initializing ARKit");
        Application.targetFrameRate = 60;
        ConfigureSession();
    }


    private void ConfigureSession() {
#if !UNITY_EDITOR
		ARKitWorldTrackingSessionConfiguration config = new ARKitWorldTrackingSessionConfiguration ();

		if (UnityARSessionNativeInterface.IsARKit_1_5_Supported ()) {
			config.planeDetection = UnityARPlaneDetection.HorizontalAndVertical;
		} else {
			config.planeDetection = UnityARPlaneDetection.Horizontal;
		}

		config.alignment = UnityARAlignment.UnityARAlignmentGravity;
		config.getPointCloudData = true;
		config.enableLightEstimation = true;
		mSession.RunWithConfig (config);
#endif
    }

    public void OnStartNewClick() {
        //start drop waypoints
        Debug.Log("Dropping Waypoints!!");
        shouldRecordWaypoints = true;
    }

    public void OnSaveMapClick() {
        DeleteMaps();
    }

    void DeleteMaps() {
        if (!LibPlacenote.Instance.Initialized()) {
            Debug.Log("SDK not yet initialized");
            ToastManager.ShowToast("SDK not yet initialized", 2f);
            return;
        }
        //delete mAP
        LibPlacenote.Instance.SearchMaps(MAP_NAME, (LibPlacenote.MapInfo[] obj) => {
            bool foundMap = false;
            foreach (LibPlacenote.MapInfo map in obj) {
                if (map.metadata.name == MAP_NAME) {
                    foundMap = true;
                    LibPlacenote.Instance.DeleteMap(map.placeId, (deleted, errMsg) => {
                        if (deleted) {
                            Debug.Log("Deleted ID: " + map.placeId);
                            SaveCurrentMap();
                        } else {
                            Debug.Log("Failed to delete ID: " + map.placeId);
                        }
                    });
                }
            }
            if (!foundMap) {
                SaveCurrentMap();
            }
        });
    }

    void SaveCurrentMap() {
        if (shouldSaveMap) {
            shouldSaveMap = false;

            if (!LibPlacenote.Instance.Initialized()) {
                Debug.Log("SDK not yet initialized");
                ToastManager.ShowToast("SDK not yet initialized", 2f);
                return;
            }

            bool useLocation = Input.location.status == LocationServiceStatus.Running;
            LocationInfo locationInfo = Input.location.lastData;

            Debug.Log("Saving...");
            debugText.text = "uploading...";
            LibPlacenote.Instance.SaveMap(
                (mapId) => {
                    LibPlacenote.Instance.StopSession();

                    LibPlacenote.MapMetadataSettable metadata = new LibPlacenote.MapMetadataSettable();
                    metadata.name = MAP_NAME;
                    Debug.Log("Saved Map Name: " + metadata.name);

                    JObject userdata = new JObject();
                    metadata.userdata = userdata;

                    JObject shapeList = GetComponent<CustomShapeManager>().Shapes2JSON();

                    userdata["shapeList"] = shapeList;

                    if (useLocation) {
                        metadata.location = new LibPlacenote.MapLocation();
                        metadata.location.latitude = locationInfo.latitude;
                        metadata.location.longitude = locationInfo.longitude;
                        metadata.location.altitude = locationInfo.altitude;
                    }
                    LibPlacenote.Instance.SetMetadata(mapId, metadata);
                    mCurrMapDetails = metadata;
                },
                (completed, faulted, percentage) => {
                    if (completed) {
                        Debug.Log("Upload Complete:" + mCurrMapDetails.name);
                        debugText.text = "upload complete!!";
                    } else if (faulted) {
                        Debug.Log("Upload of Map Named: " + mCurrMapDetails.name + "faulted");
                    } else {
                        Debug.Log("Uploading Map Named: " + mCurrMapDetails.name + "(" + percentage.ToString("F2") + "/1.0)");
                    }
                }
            );
        }
    }

    public void OnPose(Matrix4x4 outputPose, Matrix4x4 arkitPose) { }

    public void OnStatusChange(LibPlacenote.MappingStatus prevStatus, LibPlacenote.MappingStatus currStatus) {
        Debug.Log("prevStatus: " + prevStatus.ToString() + " currStatus: " + currStatus.ToString());
        if (currStatus == LibPlacenote.MappingStatus.RUNNING && prevStatus == LibPlacenote.MappingStatus.LOST) {
            Debug.Log("Localized");
            //			GetComponent<ShapeManager> ().LoadShapesJSON (mSelectedMapInfo.metadata.userdata);
        } else if (currStatus == LibPlacenote.MappingStatus.RUNNING && prevStatus == LibPlacenote.MappingStatus.WAITING) {
            Debug.Log("Mapping");
        } else if (currStatus == LibPlacenote.MappingStatus.LOST) {
            Debug.Log("Searching for position lock");
        } else if (currStatus == LibPlacenote.MappingStatus.WAITING) {
            if (GetComponent<CustomShapeManager>().shapeObjList.Count != 0) {
                GetComponent<CustomShapeManager>().ClearShapes();
            }
        }
    }
}
