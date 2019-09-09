using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;

#if UNITY_EDITOR
using UnityEditor;


namespace EditorCoroutines {

	[System.Serializable]
	public class WWWStatus
	{
		public bool status;
	}
		
	public class PlacenoteWebAPI {

		private string baseURL = "https://us-central1-placenote-sdk.cloudfunctions.net/";
		private string mkey;
		private string mMapID;
		private LibPlacenote.MapList mMapIDList;
		private bool mMapListUpdated;

		public void PrintMapList(string key) {
			mkey = key.Trim();
			mMapListUpdated = false;
			EditorCoroutines.StartCoroutine (GetMapListCoroutine (true), this);

		}

		IEnumerator GetMapListCoroutine(bool printList) {
			
			Dictionary<string, string> headers = new Dictionary<string, string>();
			headers.Add("APIKEY", mkey);

			using (WWW www = new WWW(baseURL + "apiKeyVerify", null, headers))
			{
				yield return www;
				WWWStatus ret_val = JsonConvert.DeserializeObject<WWWStatus>(www.text);
				if (ret_val.status == true) {
					Debug.Log ("API Key Verified.");
				} else {
					Debug.LogError ("API Key Not verified. Please get a key from developers.placenote.com and enter it under the GameObject Place Mesh in the Inspector");
					EditorCoroutines.StopAllCoroutines (this);
					yield break;
				}
			}

			using (WWW www = new WWW (baseURL + "searchPlaces", null, headers)) {
				Debug.Log ("Recalling Map List");
				yield return www;
				mMapIDList = JsonConvert.DeserializeObject<LibPlacenote.MapList> (www.text);
				mMapListUpdated = true; //tell any other co-routines waiting that map list is updated
				if (printList) {
					Debug.Log ("Available MapIDs w/ Plane Data");
					foreach (LibPlacenote.MapInfo map in mMapIDList.places) {
						if (map.metadata != null) {
							if (map.metadata.userdata != null) {
							 	if (map.metadata.userdata["planes"]!=null) {
									Debug.Log (map.placeId);
								}
							}
						} else {
							Debug.Log ("Metadata null");
						}
					}
				}
				yield break;
			}
		}

		public void AddMesh(string APIKey, string MapID, GameObject PlaneMesh, Transform MapParent=null) {
			mMapID = MapID.Trim ();
			mkey = APIKey.Trim ();
			mMapListUpdated = false;
			EditorCoroutines.StartCoroutine (GetMapListCoroutine (false), this);
			EditorCoroutines.StartCoroutine (AddMeshCoroutine (PlaneMesh, MapParent), this);
		}


		IEnumerator AddMeshCoroutine(GameObject PlaneMesh, Transform MapParent=null) {
			var m_index = -1;
			var index = 0;

			while (!mMapListUpdated) { //wait for maplist update co-routine to finish
				yield return new WaitForSeconds(0.2f);
			}

			foreach (LibPlacenote.MapInfo map in mMapIDList.places) {
				if (map.placeId == mMapID) {
					m_index = index;
					break;
				}
				index = index + 1;
			}

			if (m_index < 0) {
				Debug.Log ("Can't find this MapID, Blank it out to get full list again");
				yield break;
			}


			Debug.Log ("Extracting planes from " + mMapID);

			//UnityEngine.XR.iOS.SpatialCapture.CapturedPlaneUtility.InitializePlanePrefab (PlaneMesh);
			//UnityEngine.XR.iOS.PlacenotePlaneUtility.InitializePlanePrefab (PlaneMesh);
			SpatialCapture.CapturedPlaneUtility.InitializePlanePrefab (PlaneMesh);

			JToken planeMetaData = mMapIDList.places [m_index].metadata.userdata ["planes"];
			//UnityEngine.XR.iOS.SpatialCapture.PlaneMeshList meshList = planeMetaData.ToObject<UnityEngine.XR.iOS.SpatialCapture.PlaneMeshList> ();
			//UnityEngine.XR.iOS.PlaneMeshList meshList = planeMetaData.ToObject<UnityEngine.XR.iOS.PlaneMeshList> ();
			SpatialCapture.PlaneMeshList meshList = planeMetaData.ToObject<SpatialCapture.PlaneMeshList> ();
			Debug.Log ("first mesh center: " + meshList.meshList [1].center.ToString("F6"));

			GameObject MeshParent;
			MeshParent = new GameObject ("Mesh");
			if (MapParent!=null) {
				MeshParent.transform.SetParent (MapParent);
			}


			int planeNum=0;
			foreach (var mesh in meshList.meshList) {
				//GameObject plane = UnityEngine.XR.iOS.SpatialCapture.CapturedPlaneUtility.CreatePlaneInScene (mesh);
				//GameObject plane = UnityEngine.XR.iOS.PlacenotePlaneUtility.CreatePlaneInScene (mesh);
				GameObject plane = SpatialCapture.CapturedPlaneUtility.CreatePlaneInScene (mesh);
				plane.transform.SetParent (MeshParent.transform);
				plane.name = "Plane " + planeNum.ToString ();
				planeNum++;
			}
			FeaturesVisualizer.DrawMapEditor (meshList.landmarkList, MeshParent.transform);

		}
			
	}

}
	
#endif