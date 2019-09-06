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


public class PlacenoteSpatialCaptureSample : MonoBehaviour, PlacenoteListener {

	[SerializeField] Text mLabelText;
	[SerializeField] String mMapID;
	[SerializeField] GameObject mModelParent;

	private UnityARSessionNativeInterface mSession;
	private bool mARInit = false;
	private bool mPlacenoteInit = false;

	// Use this for initialization
	void Start ()
	{
		Input.location.Start ();
		mSession = UnityARSessionNativeInterface.GetARSessionNativeInterface ();
		
		StartARKit ();
		LibPlacenote.Instance.RegisterListener (this);
	}

	private void StartARKit ()
	{
		mLabelText.text = "Initializing ARKit";
		Application.targetFrameRate = 60;
		ARKitWorldTrackingSessionConfiguration config = new ARKitWorldTrackingSessionConfiguration ();
		config.planeDetection = UnityARPlaneDetection.Horizontal;
		config.alignment = UnityARAlignment.UnityARAlignmentGravity;
		config.getPointCloudData = true;
		config.enableLightEstimation = true;
		mSession.RunWithConfig (config);
	}

	void Update()
	{
        if (!mARInit && LibPlacenote.Instance.Initialized())
        {
            mARInit = true;
            mLabelText.text = "Ready to Load Scene!";
        }
	}

	public void LoadMap() {

        if (!mARInit) {
            mLabelText.text = "Placenote is not initialized. Try again";
			return;
		}

		if (mMapID != null) {
			mLabelText.text = "Loading Map " + mMapID;
			LibPlacenote.Instance.LoadMap (mMapID,
				(completed, faulted, percentage) => {
					if (completed) {
						LibPlacenote.Instance.StartSession ();
						mLabelText.text = "Loaded ID: " + mMapID;

					} else if (faulted) {
						mLabelText.text = "Failed to load ID: " + mMapID;
					} else {
						mLabelText.text = "Downloading " + mMapID + "(" + (percentage * 100).ToString ("F2") + ")";
					}
				}
			);
		}
	}

    public void OnLoadSceneClicked()
    {
        LoadMap();
    }

	public void OnPose (Matrix4x4 outputPose, Matrix4x4 arkitPose) {}

	public void OnStatusChange (LibPlacenote.MappingStatus prevStatus, LibPlacenote.MappingStatus currStatus)
	{
		Debug.Log ("prevStatus: " + prevStatus.ToString () + " currStatus: " + currStatus.ToString ());
		if (currStatus == LibPlacenote.MappingStatus.RUNNING && prevStatus == LibPlacenote.MappingStatus.LOST) {
			mLabelText.text = "Localized";
			mModelParent.SetActive (true);
		} else if (currStatus == LibPlacenote.MappingStatus.RUNNING && prevStatus == LibPlacenote.MappingStatus.WAITING) {
			mLabelText.text = "Mapping";
		} else if (currStatus == LibPlacenote.MappingStatus.LOST) {
			mLabelText.text = "Searching for position lock";
		} else if (currStatus == LibPlacenote.MappingStatus.WAITING) {
			mLabelText.text = "Waiting!";
		}
	}






}
