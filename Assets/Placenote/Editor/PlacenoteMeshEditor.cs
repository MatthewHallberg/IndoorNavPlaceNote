#if UNITY_EDITOR
using UnityEngine;
using System.Collections;
using System.IO;
using UnityEditor;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;

namespace EditorCoroutines 
{
	[System.Serializable]
	public class Pose {
		public Vector3 position;
		public Vector4 rotation;
	}

	[System.Serializable]
	public class DatasetPt {
		public string filename;
		public int sec;
		public int nsec;
		public Pose odomPose;
		public Pose mapPose;
		public int status;
		public int mode;
	}

	[System.Serializable]
	public class PtColor {
		public int b;
		public int g;
		public int r;
	}
		
	[System.Serializable]
	public class Point {
		public PtColor color;
		public Vector3 position;
	}

	[System.Serializable]
	public class ColorizedDensePointCloud {
		public Point point;
	}
		
	[CustomEditor(typeof(PlaceMesh))]
	public class PlaceMeshEditor : Editor
	{
		PlacenoteWebAPI mWebAPI = new PlacenoteWebAPI();

		override public void OnInspectorGUI()
		{
			PlaceMesh mesh = (PlaceMesh)target;

			mesh.APIKey = EditorGUILayout.TextField("Enter API Key Here", mesh.APIKey);

			if(GUILayout.Button("Print Map IDs in the Console"))
			{
				mWebAPI.PrintMapList(mesh.APIKey);
			}

			mesh.MapID = EditorGUILayout.TextField("Map ID", mesh.MapID);

			mesh.planePrefab = (GameObject)EditorGUILayout.ObjectField ("Plane Mesh", mesh.planePrefab, typeof(GameObject), false);

			if(GUILayout.Button("Add Planes and PointCloud"))
			{
				if (mesh.planePrefab == null) {
					Debug.LogWarning ("Plane prefab not set. You won't see any planes. Sample one in Placenote/Prefabs/ARKitPlaneGeometry");
				}
				mWebAPI.AddMesh (mesh.APIKey, mesh.MapID, mesh.planePrefab, mesh.transform);
			}
		}
	}
}
#endif