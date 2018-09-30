using System;
using System.Collections.Generic;

namespace UnityEngine.XR.iOS
{
	public class PlacenoteARGeneratePlane : MonoBehaviour
	{
		public GameObject planePrefab;
		public GameObject meshPrefab;
        private PlacenoteARAnchorManager placenoteARAnchorManager;

		// Use this for initialization
		public void StartPlaneDetection () {
			
			if (UnityARSessionNativeInterface.IsARKit_1_5_Supported ()) {
				PlacenotePlaneUtility.InitializePlanePrefab (meshPrefab);
			} else {
				PlacenotePlaneUtility.InitializePlanePrefab (planePrefab);
			}

			placenoteARAnchorManager = new PlacenoteARAnchorManager();
				
		}

		public void ClearPlanes() {
			if(placenoteARAnchorManager != null)
				placenoteARAnchorManager.Destroy();
		}

		void OnDestroy(){
			if(placenoteARAnchorManager != null)
      			placenoteARAnchorManager.Destroy ();
    	}
	}
}
