using System;
using System.Collections.Generic;
using Newtonsoft.Json.Linq;
using Newtonsoft.Json;
using UnityEngine.XR.iOS;
using System.Collections;
using UnityEngine;
using System.Runtime.InteropServices;
using System.IO;

namespace SpatialCapture
{
	[System.Serializable]
	public class ARPlaneMesh
	{
		public Matrix4x4 transform;
		public Vector3[] vertices;
		public Vector3[] boundaryVertices; //We don't need boundaryCount because boundaryCount = boundaryVertices.length
		public Vector2[] texture;
		public Vector3 extent;
		public Vector3 center;
		public int[] trIndices;
		public string id;
	}

	[System.Serializable]
	public class PNLandmark{
		//PNFeaturePointUnity but unwrapped so they can be serialized (JSON.NET had trouble de-serializing PNFeaturePointUnity)
		public int idx;
		public int measCount;
		public float maxViewAngle;
		public Vector3 point;
	}

	[System.Serializable]
	public class PlaneMeshList
	{
		public ARPlaneMesh[] meshList;
		public PNLandmark[] landmarkList;
	}

}

namespace SpatialCapture
{
    public class CapturedARGeneratePlane : MonoBehaviour
    {
        public GameObject planePrefab;
        public GameObject meshPrefab;
        private LinkedList<GameObject> loadedPlaneList;

        // Use this for initialization
        void Start()
        {
            loadedPlaneList = new LinkedList<GameObject>();

            if (UnityARSessionNativeInterface.IsARKit_1_5_Supported())
            {
                CapturedPlaneUtility.InitializePlanePrefab(meshPrefab);
            }
            else
            {
                CapturedPlaneUtility.InitializePlanePrefab(planePrefab);
            }
        }
			
        public void LoadPlaneList(JToken mapMetadata)
        {
            if (loadedPlaneList.Count > 0)
            {
                foreach (var planeGo in loadedPlaneList)
                {
                    Destroy(planeGo);
                }
                loadedPlaneList.Clear();
            }


            if (mapMetadata is JObject && mapMetadata["planes"] is JObject)
            {
                PlaneMeshList planeList = mapMetadata["planes"].ToObject<PlaneMeshList>();
                if (planeList == null)
                {
                    Debug.Log("Empty list of planes in metadata");
                    return;
                }
                Debug.Log("Loading + " + planeList.meshList.Length.ToString() + " planes");
                foreach (var plane in planeList.meshList)
                {
					GameObject go = CapturedPlaneUtility.CreatePlaneInScene(plane);
                    go.AddComponent<DontDestroyOnLoad>();  //this is so these GOs persist across scene loads
                    loadedPlaneList.AddLast(go);
                }

            }
            else
            {
                Debug.Log("No plane metadata available");
                return;
            }
        }
    }
}
