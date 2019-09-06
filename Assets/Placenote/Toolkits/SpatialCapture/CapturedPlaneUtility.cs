using System;
using System.Runtime.InteropServices;
using UnityEngine.XR.iOS;
using UnityEngine;


namespace SpatialCapture
{
    public class CapturedPlaneUtility
    {
		private MeshCollider meshCollider; //declared to avoid code stripping of class
		private MeshFilter meshFilter; //declared to avoid code stripping of class
		private static GameObject planePrefab = null;

		public static void InitializePlanePrefab(GameObject go)
		{
			planePrefab = go;
		}

		public static GameObject CreatePlaneInScene(SpatialCapture.ARPlaneMesh arPlane)
		{
			GameObject plane;	
			if (planePrefab != null) {
				plane = GameObject.Instantiate(planePrefab);
			} else {
				plane = new GameObject (); //put in a blank gameObject to get at least a transform to manipulate
			}

			plane.name = arPlane.id;

			CapturedPlaneMeshRender ppmr = plane.GetComponent<CapturedPlaneMeshRender> ();
			if (ppmr != null) {
				ppmr.InitializeMesh (arPlane);
			}

			return UpdatePlaneWithAnchorTransform(plane, arPlane);

		}
			
		public static GameObject UpdatePlaneWithAnchorTransform(GameObject plane, ARPlaneMesh arPlane)
		{

			plane.transform.position = UnityARMatrixOps.GetPosition (arPlane.transform);
			plane.transform.rotation = UnityARMatrixOps.GetRotation (arPlane.transform);

			CapturedPlaneMeshRender ppmr = plane.GetComponent<CapturedPlaneMeshRender> ();
			if (ppmr != null) {
				ppmr.UpdateMesh (arPlane);
			}


			MeshFilter mf = plane.GetComponentInChildren<MeshFilter> ();

			if (mf != null) {
				if (ppmr == null) {
					//since our plane mesh is actually 10mx10m in the world, we scale it here by 0.1f
					mf.gameObject.transform.localScale = new Vector3 (arPlane.extent.x * 0.1f, arPlane.extent.y * 0.1f, arPlane.extent.z * 0.1f);

					//convert our center position to unity coords
					mf.gameObject.transform.localPosition = new Vector3(arPlane.center.x, arPlane.center.y, -arPlane.center.z);
				}

			}

			return plane;
		}



    }
}
