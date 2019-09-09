using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;
using System.IO;
using UnityEngine.UI;

using UnityEngine.XR.iOS; // Import ARKit Library


public class SaveAndLoadAMap : MonoBehaviour, PlacenoteListener
{
    // Unity ARKit Session handler
    private UnityARSessionNativeInterface mSession;

    // UI game object references
    public GameObject saveMapButton;
    public GameObject loadMapButton;
    public GameObject newMapButton;
    public Text notifications;

    // to hold the last saved MapID
    private string savedMapID;

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
        notifications.text = "Scan and click Save Map when complete";
        newMapButton.SetActive(false);
        saveMapButton.SetActive(true);
        loadMapButton.SetActive(false);
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
        saveMapButton.SetActive(false);
        loadMapButton.SetActive(true);
        newMapButton.SetActive(true);

        if (!LibPlacenote.Instance.Initialized())
        {
            notifications.text = "SDK not yet initialized";
            return;
        }

        //mLabelText.text = "Saving...";
        LibPlacenote.Instance.SaveMap(
        (mapId) =>
        {
            savedMapID = mapId;
            LibPlacenote.Instance.StopSession();
            WriteMapIDToFile(mapId);
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

    // Load map and relocalize. Check OnStatusChange function for behaviour upon relocalization
    public void OnLoadMapClicked()
    {
        if (!LibPlacenote.Instance.Initialized())
        {
            notifications.text = "SDK not yet initialized";
            return;
        }

        // Reading the last saved MapID from file
        savedMapID = ReadMapIDFromFile();

        if (savedMapID == null)
        {
            notifications.text = "You haven't saved a map yet";
            return;
        }

        newMapButton.SetActive(false);
        saveMapButton.SetActive(false);

        LibPlacenote.Instance.LoadMap(savedMapID, 
        (completed, faulted, percentage) =>    
        {
            if (completed) {

                LibPlacenote.Instance.StartSession();
                notifications.text = "Trying to Localize Map: " + savedMapID;
            }
            else if (faulted) {
                notifications.text = "Failed to load ID: " + savedMapID;
            }
            else {
                notifications.text = "Download Progress: " + percentage.ToString("F2") + "/1.0)";
            }
        }
                                      
        );
    }

    // Runs when a new pose is received from Placenote.    
    public void OnPose(Matrix4x4 outputPose, Matrix4x4 arkitPose) { }

    // Runs when LibPlacenote sends a status change message like Localized!
    public void OnStatusChange(LibPlacenote.MappingStatus prevStatus, LibPlacenote.MappingStatus currStatus)
    {
        if (currStatus == LibPlacenote.MappingStatus.RUNNING && prevStatus == LibPlacenote.MappingStatus.LOST)
        {
            notifications.text = "Localized!";
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
        Debug.Log(path);

        if (System.IO.File.Exists(path))
        {
            StreamReader reader = new StreamReader(path);
            string returnValue = reader.ReadLine();

            Debug.Log(returnValue);
            reader.Close();

            return returnValue;
        }
        else
        {
            return null;
        }


    }
}

