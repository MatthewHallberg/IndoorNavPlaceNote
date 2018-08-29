using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;


/// <summary>
/// Class that manipulates the parent node of the ARKit controlled camera object to rotate the camera
/// to the coordinate frame of the LibPlacenote mapping/localization session
/// </summary>
public class PlacenoteCameraManager : MonoBehaviour, PlacenoteListener
{
	[SerializeField] Camera cameraChild;
	[SerializeField] GameObject cameraParent;

	void Start ()
	{
		if (cameraChild == null) {
			Debug.Log ("Camera reference is null, skipping creation of camera parent");
			return;
		}

		// This is required for OnPose and OnStatusChange to be triggered
		LibPlacenote.Instance.RegisterListener (this);
	}

	public void OnPose (Matrix4x4 outputPose, Matrix4x4 arkitPose)
	{
		if (cameraChild == null) {
			Debug.Log ("Camera reference is null, not controlling");
			return;
		}

		// Compute the transform of the camera parent so that camera pose ends up at outputPose
		Matrix4x4 camParentPose = outputPose * arkitPose.inverse;
		cameraParent.transform.position = PNUtility.MatrixOps.GetPosition (camParentPose);
		cameraParent.transform.rotation = PNUtility.MatrixOps.GetRotation (camParentPose);
	}

	public void OnStatusChange (LibPlacenote.MappingStatus prevStatus, LibPlacenote.MappingStatus currStatus)
	{
		
	}
}
