using System;
using System.Runtime.InteropServices;

namespace UnityEngine.XR.iOS
{
	public class PlacenotePlaneUtility
	{
		private MeshCollider meshCollider; //declared to avoid code stripping of class
		private MeshFilter meshFilter; //declared to avoid code stripping of class
		private static GameObject planePrefab = null;

		public static void InitializePlanePrefab(GameObject go)
		{
			planePrefab = go;
		}
		
		public static GameObject CreatePlaneInScene(ARPlaneAnchor arPlaneAnchor)
		{
			GameObject plane;
			if (planePrefab != null) {
				plane = GameObject.Instantiate(planePrefab);
			} else {
				plane = new GameObject (); //put in a blank gameObject to get at least a transform to manipulate
			}

			plane.name = arPlaneAnchor.identifier;

			PlacenotePlaneMeshRender ppmr = plane.GetComponent<PlacenotePlaneMeshRender> ();
			if (ppmr != null) {
				ppmr.InitiliazeMesh (arPlaneAnchor);
			}

			return UpdatePlaneWithAnchorTransform(plane, arPlaneAnchor);

		}

		public static GameObject UpdatePlaneWithAnchorTransform(GameObject plane, ARPlaneAnchor arPlaneAnchor)
		{

			//do coordinate conversion from ARKit to Unity
			Vector3 position =  UnityARMatrixOps.GetPosition (arPlaneAnchor.transform);
			Quaternion rotation = UnityARMatrixOps.GetRotation (arPlaneAnchor.transform);

			//Transform to placenote frame of reference (planes are detected in ARKit frame of reference)
			Matrix4x4 worldTransform = Matrix4x4.TRS (position, rotation, Vector3.one);
			Matrix4x4? placenoteTransform = LibPlacenote.Instance.ProcessPose (worldTransform);

			if (placenoteTransform == null) { //no map related transforms are appropriate
				placenoteTransform = worldTransform; 
			} 
				
			plane.transform.position = PNUtility.MatrixOps.GetPosition (placenoteTransform.Value);
			plane.transform.rotation = PNUtility.MatrixOps.GetRotation (placenoteTransform.Value);

			PlacenotePlaneMeshRender ppmr = plane.GetComponent<PlacenotePlaneMeshRender> ();
			if (ppmr != null) {
				ppmr.UpdateMesh (arPlaneAnchor);
			}


			MeshFilter mf = plane.GetComponentInChildren<MeshFilter> ();

			if (mf != null) {
				if (ppmr == null) {
					//since our plane mesh is actually 10mx10m in the world, we scale it here by 0.1f
					mf.gameObject.transform.localScale = new Vector3 (arPlaneAnchor.extent.x * 0.1f, arPlaneAnchor.extent.y * 0.1f, arPlaneAnchor.extent.z * 0.1f);

	                //convert our center position to unity coords
	                mf.gameObject.transform.localPosition = new Vector3(arPlaneAnchor.center.x,arPlaneAnchor.center.y, -arPlaneAnchor.center.z);
				}

			}

			return plane;
		}



	}
}

