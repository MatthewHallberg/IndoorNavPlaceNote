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

public class ReadMap : MonoBehaviour, PlacenoteListener {

    private const string MAP_NAME = "GenericMap";

    private UnityARSessionNativeInterface mSession;
    private bool mARInit = false;

    private LibPlacenote.MapMetadataSettable mCurrMapDetails;

    string currMapID = String.Empty;

    private LibPlacenote.MapInfo mSelectedMapInfo;
    private string mSelectedMapId {
        get {
            return mSelectedMapInfo != null ? mSelectedMapInfo.placeId : null;
        }
    }

    // Use this for initialization
    void Start() {
        Input.location.Start();

        mSession = UnityARSessionNativeInterface.GetARSessionNativeInterface();
        StartARKit();
        FeaturesVisualizer.EnablePointcloud();
        LibPlacenote.Instance.RegisterListener(this);
    }

    void OnDisable() {
    }

    // Update is called once per frame
    void Update() {
        if (!mARInit && LibPlacenote.Instance.Initialized())
        {
            Debug.Log("Ready to Start!");
            mARInit = true;

            // Load Map
            FindMap();
        }
    }

    void FindMap() {
        //get metadata
        LibPlacenote.Instance.SearchMaps(MAP_NAME, (LibPlacenote.MapInfo[] obj) => {
            foreach (LibPlacenote.MapInfo map in obj) {
                if (map.metadata.name == MAP_NAME) {
                    mSelectedMapInfo = map;
                    Debug.Log("FOUND MAP: " + mSelectedMapInfo.placeId);
                    LoadMap();
                    return;
                }
            }
        });
    }

    void LoadMap() {
        ConfigureSession(false);

        LibPlacenote.Instance.LoadMap(mSelectedMapInfo.placeId,
            (completed, faulted, percentage) => {
                if (completed) {
                    Debug.Log("Loaded ID: " + mSelectedMapInfo.placeId + "...Starting session");

                    LibPlacenote.Instance.StartSession();

                } else if (faulted) {
                    Debug.Log("Failed to load ID: " + mSelectedMapInfo.placeId);
                } else {
                    Debug.Log("Map Download: " + percentage.ToString("F2") + "/1.0");
                }
            }
        );
    }

    private void StartARKit() {
        Debug.Log("Initializing ARKit");
        Application.targetFrameRate = 60;
        ConfigureSession(false);
    }

    private void ConfigureSession(bool clearPlanes) {
#if !UNITY_EDITOR
		ARKitWorldTrackingSessionConfiguration config = new ARKitWorldTrackingSessionConfiguration ();
		config.planeDetection = UnityARPlaneDetection.None;
		config.alignment = UnityARAlignment.UnityARAlignmentGravity;
		config.getPointCloudData = true;
		config.enableLightEstimation = true;
		mSession.RunWithConfig (config);
#endif
    }

    public void OnPose(Matrix4x4 outputPose, Matrix4x4 arkitPose) { }

    public void OnStatusChange(LibPlacenote.MappingStatus prevStatus, LibPlacenote.MappingStatus currStatus) {
        Debug.Log("prevStatus: " + prevStatus.ToString() + " currStatus: " + currStatus.ToString());
        if (currStatus == LibPlacenote.MappingStatus.RUNNING && prevStatus == LibPlacenote.MappingStatus.LOST) {
            Debug.Log("Localized: " + mSelectedMapInfo.metadata.name);
            GetComponent<CustomShapeManager>().LoadShapesJSON(mSelectedMapInfo.metadata.userdata);
            FeaturesVisualizer.DisablePointcloud();
        } else if (currStatus == LibPlacenote.MappingStatus.RUNNING && prevStatus == LibPlacenote.MappingStatus.WAITING) {
            Debug.Log("Mapping");
        } else if (currStatus == LibPlacenote.MappingStatus.LOST) {
            Debug.Log("Searching for position lock");
        } else if (currStatus == LibPlacenote.MappingStatus.WAITING) {
            if (GetComponent<CustomShapeManager>().shapeObjList.Count != 0) {
                //GetComponent<CustomShapeManager>().ClearShapes();
            }
        }
    }
}
