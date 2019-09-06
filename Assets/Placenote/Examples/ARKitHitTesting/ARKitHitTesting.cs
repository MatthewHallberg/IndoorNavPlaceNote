using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;
using System.IO;
using UnityEngine.UI;
using Newtonsoft.Json.Linq;
using Newtonsoft.Json;
using UnityEngine.XR.iOS; // Import ARKit Library

namespace ARKitHitTesting
{
    public class ARKitHitTesting : MonoBehaviour, PlacenoteListener
    {
        // Unity ARKit Session handler
        private UnityARSessionNativeInterface mSession;

        // UI game object references
        public GameObject initPanel;
        public GameObject mappingPanel;
        public GameObject localizedPanel;

        public Text notifications;

        // to hold the last saved MapID
        private string savedMapID;
        private LibPlacenote.MapMetadata downloadedMetaData;

        void Start()
        {
            // Start ARKit using the Unity ARKit Plugin
            mSession = UnityARSessionNativeInterface.GetARSessionNativeInterface();
            StartARKit();

            FeaturesVisualizer.EnablePointcloud(); // Optional - to see the point features
            LibPlacenote.Instance.RegisterListener(this); // Register listener for onStatusChange and OnPose
            notifications.text = "Click New Map to start";
        }


        // Add shape when button is clicked.
        public void OnNewMapClick()
        {
            notifications.text = "Mapping: Tap screen to add markers";

            initPanel.SetActive(false);
            mappingPanel.SetActive(true);
            localizedPanel.SetActive(false);

            LibPlacenote.Instance.StartSession();
        }

        // Initialize ARKit. This will be standard in all AR apps
        private void StartARKit()
        {
            Application.targetFrameRate = 60;
            ARKitWorldTrackingSessionConfiguration config = new ARKitWorldTrackingSessionConfiguration();
            config.planeDetection = UnityARPlaneDetection.Horizontal;
            config.alignment = UnityARAlignment.UnityARAlignmentGravity;
            config.getPointCloudData = true;
            config.enableLightEstimation = true;
            mSession.RunWithConfig(config);
        }

        // Save a map and upload it to Placenote cloud
        public void OnSaveMapClick()
        {
            mappingPanel.SetActive(false);
            initPanel.SetActive(true);
            localizedPanel.SetActive(false);

            FeaturesVisualizer.clearPointcloud();

            if (!LibPlacenote.Instance.Initialized())
            {
                notifications.text = "SDK not yet initialized";
                return;
            }

            LibPlacenote.Instance.SaveMap(
            (mapId) =>
            {
                savedMapID = mapId;
                LibPlacenote.Instance.StopSession();
                WriteMapIDToFile(mapId);

                LibPlacenote.MapMetadataSettable metadata = CreateMetaDataObject();

                LibPlacenote.Instance.SetMetadata(mapId, metadata, (success) => {
                    if (success) {
                        Debug.Log("Meta data successfully saved");
                    }
                    else {
                        Debug.Log("Meta data failed to save");
                    }
                });

                GetComponent<MarkerManager>().ClearModels();

            },
            (completed, faulted, percentage) =>
            {
                if (completed) {
                    notifications.text = "Upload Complete:" + savedMapID;

                }
                else if (faulted) {
                    notifications.text = "Upload of Map: " + savedMapID + " failed";
                }
                else {
                    notifications.text = "Upload Progress: " + percentage.ToString("F2") + "/1.0)";
                }
            }
            );


        }


        public LibPlacenote.MapMetadataSettable CreateMetaDataObject()
        {
            LibPlacenote.MapMetadataSettable metadata = new LibPlacenote.MapMetadataSettable();

            metadata.name = "My test map";

            // get GPS location of device to save with map
            bool useLocation = Input.location.status == LocationServiceStatus.Running;
            LocationInfo locationInfo = Input.location.lastData;
            if (useLocation)
            {
                metadata.location = new LibPlacenote.MapLocation();
                metadata.location.latitude = locationInfo.latitude;
                metadata.location.longitude = locationInfo.longitude;
                metadata.location.altitude = locationInfo.altitude;
            }

            JObject userdata = new JObject();
            JObject modelList = GetComponent<MarkerManager>().Models2JSON();
            userdata["modelList"] = modelList;

            metadata.userdata = userdata;
            return metadata;
        }
         

        // Load map and relocalize. Check OnStatusChange function for behaviour upon relocalization
        public void OnLoadMapClicked()
        {
            initPanel.SetActive(false);
            mappingPanel.SetActive(false);
            localizedPanel.SetActive(true);

            if (!LibPlacenote.Instance.Initialized())
            {
                notifications.text = "SDK not yet initialized";
                return;
            }

            // Reading the last saved MapID from file
            savedMapID = ReadMapIDFromFile();

            LibPlacenote.Instance.LoadMap(savedMapID,
            (completed, faulted, percentage) =>
            {
                if (completed)
                {
                    // Get the meta data as soon as the map is downloaded
                    LibPlacenote.Instance.GetMetadata(savedMapID,(LibPlacenote.MapMetadata obj) => 
                    {
                        if (obj!=null) {
                            downloadedMetaData = obj;
                        }
                        else {
                            notifications.text = "Failed to download meta data";
                            return;
                        }
                    });

                    // Now try to localize the map
                    LibPlacenote.Instance.StartSession();
                    notifications.text = "Trying to Localize Map: " + savedMapID;
                }
                else if (faulted)
                {
                    notifications.text = "Failed to load ID: " + savedMapID;
                }
                else
                {
                    notifications.text = "Download Progress: " + percentage.ToString("F2") + "/1.0)";
                }
            }

            );
        }

        public void OnExitClicked()
        {
            LibPlacenote.Instance.StopSession();
            FeaturesVisualizer.clearPointcloud();
            GetComponent<MarkerManager>().ClearModels();

            initPanel.SetActive(true);
            mappingPanel.SetActive(false);
            localizedPanel.SetActive(false);

        }

        // Runs when a new pose is received from Placenote.    
        public void OnPose(Matrix4x4 outputPose, Matrix4x4 arkitPose) { }

        // Runs when LibPlacenote sends a status change message like Localized!
        public void OnStatusChange(LibPlacenote.MappingStatus prevStatus, LibPlacenote.MappingStatus currStatus)
        {
            if (currStatus == LibPlacenote.MappingStatus.RUNNING && prevStatus == LibPlacenote.MappingStatus.LOST)
            {
                notifications.text = "Localized!";

                JToken modelData = downloadedMetaData.userdata;
                GetComponent<MarkerManager>().LoadModelsFromJSON(modelData);

                // Placenote will automatically correct the camera position on localization.
            }
        }

        private void WriteMapIDToFile(string mapID)
        {
            string path = Application.persistentDataPath + "/mapID.txt";
            Debug.Log(path);
            StreamWriter writer = new StreamWriter(path, false);
            writer.WriteLine(mapID);
            writer.Close();
        }

        private string ReadMapIDFromFile()
        {
            string path = Application.persistentDataPath + "/mapID.txt";
            StreamReader reader = new StreamReader(path);
            string returnValue = reader.ReadLine();
            Debug.Log(returnValue);
            reader.Close();

            return returnValue;
        }

    }
}
