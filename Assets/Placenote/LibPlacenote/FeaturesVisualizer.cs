using System.Collections;
using System.Collections.Generic;
using UnityEngine;


/// <summary>
/// Class that constructs a pointcloud mesh from the map retrieved from a LibPlacenote mapping/localization session
/// </summary>
public class FeaturesVisualizer : MonoBehaviour, PlacenoteListener
{
	private static FeaturesVisualizer sInstance;
	[SerializeField] Material mPtCloudMat;
	[SerializeField] GameObject mMap;

	void Awake ()
	{
		sInstance = this;
	}

	void Start ()
	{
        // This is required for OnPose and OnStatusChange to be triggered
        LibPlacenote.Instance.RegisterListener (this);
	}

	void Update ()
	{
	}

	/// <summary>
	/// Enable rendering of pointclouds collected from LibPlacenote for every half second
	/// </summary>
	/// <remarks>
	/// NOTE: to avoid the static instance being null, please call this in Start() function in your MonoBehaviour
	/// </remarks>
	public static void EnablePointcloud ()
	{
		if (sInstance.mMap == null) {
			Debug.LogWarning (
				"Map game object reference is null, please initialize in editor.Skipping pointcloud visualization"
			);
			return;
		}
		sInstance.InvokeRepeating ("DrawMap", 0f, 0.1f);
	}

	/// <summary>
	/// Disable rendering of pointclouds collected from LibPlacenote
	/// </summary>
	public static void DisablePointcloud ()
	{
		sInstance.CancelInvoke ();
		clearPointcloud ();
	}


	/// <summary>
	///  Clear currently rendering feature/landmark pointcloud
	/// </summary>
	public static void clearPointcloud() 
	{
		MeshFilter mf = sInstance.mMap.GetComponent<MeshFilter> ();
		mf.mesh.Clear ();
	}

	public void OnPose (Matrix4x4 outputPose, Matrix4x4 arkitPose)
	{
	}

	public void OnStatusChange (LibPlacenote.MappingStatus prevStatus, LibPlacenote.MappingStatus currStatus)
	{
		if (currStatus == LibPlacenote.MappingStatus.WAITING) {
			Debug.Log ("Session stopped, resetting pointcloud mesh.");
			clearPointcloud ();
		}
	}

	public void DrawMap ()
	{
		if (LibPlacenote.Instance.GetStatus () != LibPlacenote.MappingStatus.RUNNING) {
			return;
		}

		LibPlacenote.PNFeaturePointUnity[] map = LibPlacenote.Instance.GetMap ();
		if (map == null) {
			return;
		}

		Vector3[] points = new Vector3[map.Length];
		Color[] colors = new Color[map.Length];
		for (int i = 0; i < map.Length; ++i) {

			points [i].x = map [i].point.x;
			points [i].y = map [i].point.y;
			points [i].z = -map [i].point.z;
			colors [i].r = 1 - map [i].measCount / 10f;
			colors [i].b = 0;
			colors [i].g = map [i].measCount / 10f;

			if (map [i].measCount < 4) {
				colors [i].a = 0;
			} else {
				colors [i].a = 0.2f + 0.8f * (map [i].measCount / 10f);
			}
		}

		// Need to update indicies too!
		int[] indices = new int[map.Length];
		for (int i = 0; i < map.Length; ++i) {
			indices [i] = i;
		}

		// Create GameObject container with mesh components for the loaded mesh.
		Mesh mesh = new Mesh ();
		mesh.vertices = points;
		mesh.colors = colors;
		mesh.SetIndices (indices, MeshTopology.Points, 0);

		MeshFilter mf = mMap.GetComponent<MeshFilter> ();
		if (mf == null) {
			mf = mMap.AddComponent<MeshFilter> ();
		} 
		mf.mesh = mesh;

		MeshRenderer mr = mMap.GetComponent<MeshRenderer> ();
		if (mr == null) {
			mr = mMap.AddComponent<MeshRenderer> ();
		} 

		mr.material = mPtCloudMat;
	}
}
