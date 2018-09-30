using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;
using UnityEngine.UI;
using UnityEngine.XR.iOS;
using System.IO;
using System.Threading;
using AOT;
using Newtonsoft.Json.Linq;
using Newtonsoft.Json;



/// <summary>
/// Class that contains parameter and buffer for a YUV 420 image from ARKit
/// </summary>
public class UnityARImageFrameData
{
	public UnityARImage y;
	public UnityARImage vu;

	public struct UnityARImage
	{
		public IntPtr data;
		public UInt64 width;
		public UInt64 height;
		public UInt64 stride;
	}
}


/// <summary>
/// Singleton class that acts as a C# wrapper to the C LibPlacenote library
/// </summary>

public class LibPlacenote : MonoBehaviour
{
	/// <summary>
	/// Delegate template for a callback to return results of REST API calls such as PNInitialize
	/// </summary>
	/// <param name="result">
	/// Struct that contains the success indicator and string message from the API call
	/// </param>
	/// <param name="context">
	/// Pointer used to pass C# context to/from the C environment, since C callback function can't capture external states
	/// </param>
	public delegate void PNResultCallback (ref PNCallbackResultUnity result, IntPtr context);

	/// <summary>
	/// Delegate template for a callback to return file transfer status of map files to Placenote Cloud
	/// </summary>
	/// <param name="status">
	/// Struct that contains file transfer status, can be used to indicate success, faults, and progress of the transfer
	/// </param>
	/// <param name="context">
	/// Pointer used to pass C# context to/from the C environment, since C callback function can't capture external states
	/// </param>
	public delegate void PNTransferMapCallback (ref PNTransferStatusUnity status, IntPtr context);

	/// <summary>
	/// Delegate template for a callback to return the camera pose computed by LibPlacenote
	/// </summary>
	/// <param name="placenotePose">
	/// Contains the camera pose with respect to the map in the current LibPlacenote mapping/localization session
	/// </param>
	/// <param name="arkitPose">
	/// Contains the arkit pose that corresponds in time with placenotePose
	/// </param>
	/// <param name="context">
	/// Pointer used to pass C# context to/from the C environment, since C callback function can't capture external states
	/// </param>
	public delegate void PNPoseCallback (ref PNTransformUnity placenotePose,
		ref PNTransformUnity arkitPose, IntPtr context);

	/// <summary>
	/// Struct that captures the intrinsic calibration parameters of a pinhole model camera.
	/// </summary>
	[StructLayout (LayoutKind.Sequential)]
	public struct PNCameraInstrinsicsUnity
	{
		public int width;
		public int height;
		public double fx;
		public double fy;
		public double cx;
		public double cy;
		public double k1;
		public double k2;
		public double p1;
		public double p2;
	}

	/// <summary>
	/// Struct that contains configuration parameters for PNInitialize function, which initializes LibPlacenote SDK
	/// </summary>
	[StructLayout (LayoutKind.Sequential)]
	public struct PNInitParamsUnity
	{
		[MarshalAs (UnmanagedType.LPStr)]
		public String apiKey;
		[MarshalAs (UnmanagedType.LPStr)]
		public String appBasePath;
		[MarshalAs (UnmanagedType.LPStr)]
		public String mapPath;
	}

	/// <summary>
	/// Struct that contains results for REST API calls to Placenote Cloud.
	/// </summary>
	[StructLayout (LayoutKind.Sequential)]
	public struct PNCallbackResultUnity
	{
		[MarshalAs(UnmanagedType.I1)]
		public bool success;
		[MarshalAs (UnmanagedType.LPStr)]
		public String msg;
	}

	/// <summary>
	/// Struct that decribes a 3-D float vector
	/// </summary>
	[StructLayout (LayoutKind.Sequential)]
	public struct PNVector3Unity
	{
		public float x;
		public float y;
		public float z;
	}

	/// <summary>
	/// Struct that decribes a rotation quaternion
	/// </summary>
	[StructLayout (LayoutKind.Sequential)]
	public struct PNQuaternionUnity
	{
		public float x;
		public float y;
		public float z;
		public float w;
	}

	/// <summary>
	/// Struct that captures information about a feature point created by a Placenote mapping session
	/// </summary>
	[StructLayout (LayoutKind.Sequential)]
	public struct PNFeaturePointUnity
	{
		public int idx;
		public int measCount;
		public float maxViewAngle;
		public PNVector3Unity point;
	}

	/// <summary>
	/// Struct that decribes a 6-DOF rigid body transformation
	/// </summary>
	[StructLayout (LayoutKind.Sequential)]
	public struct PNTransformUnity
	{
		public PNVector3Unity position;
		public PNQuaternionUnity rotation;
	}


	/// <summary>
	/// Struct that contains parameters and the pixel buffer of a single channel image
	/// </summary>
	[StructLayout (LayoutKind.Sequential)]
	public struct PNImagePlaneUnity
	{
		public IntPtr buf;
		public int width;
		public int height;
		public int stride;
	}


	/// <summary>
	/// Struct that captures the status and progress of a map file transfer between client app and the Placenote Cloud
	/// </summary>
	[StructLayout (LayoutKind.Sequential, CharSet = CharSet.Ansi)]
	public struct PNTransferStatusUnity
	{
		[MarshalAs (UnmanagedType.LPStr)]
		public String mapId;
		[MarshalAs(UnmanagedType.I1)]
		public bool completed;
		[MarshalAs(UnmanagedType.I1)]
		public bool faulted;
		public int bytesTransferred;
		public int bytesTotal;
	}


	/// <summary>
	/// Enums that indicates the status of the LibPlacenote mapping module
	/// </summary>
	public enum MappingStatus
	{
		/// <summary>
		/// WAITING indicates that no mapping/localization session is running at the moment
		/// </summary>
		WAITING = 0,
		/// <summary>
		/// RUNNING indicates that a mapping/localization session is currently running
		/// </summary>
		RUNNING,
		/// <summary>
		/// LOST indicates that a localization session is not successful at relocalizing against a map
		/// </summary>
		LOST
	}

	/// <summary>
	/// Struct that contains location data for the map. All fields are required.
	/// </summary>
	[System.Serializable]
	public class MapLocation
	{
		/// <summary>
		/// The GPS latitude
		/// </summary>
		public float latitude;
		/// <summary>
		/// The GPS longitude
		/// </summary>
		public float longitude;
		/// <summary>
		/// The GPS altitude
		/// </summary>
		public float altitude;
	}

	/// <summary>
	/// Struct for searching maps by location. All fields are required.
	/// </summary>
	[System.Serializable]
	public class MapLocationSearch
	{
		/// <summary>
		/// The GPS latitude for the center of the search circle.
		/// </summary>
		public float latitude;
		/// <summary>
		/// The GPS longitude for the center of the search circle.
		/// </summary>
		public float longitude;
		/// <summary>
		/// The radius (in meters) of the search circle.
		/// </summary>
		public float radius;
	}

	/// <summary>
	/// Struct for setting map metadata. All fields are optional.
	/// </summary>
	[System.Serializable]
	public class MapMetadataSettable
	{
		/// <summary>
		/// The map name.
		/// </summary>
		public string name;
		/// <summary>
		/// The map location information.
		/// </summary>
		public MapLocation location;
		/// <summary>
		/// Arbitrary user data, in JSON form.
		/// </summary>
		public JToken userdata;

		#if UNITY_EDITOR
		public SimCameraPoses simulatedMap;
		#endif
	}

	private static DateTime EPOCH = new DateTime(1970, 1, 1);

	/// <summary>
	/// Struct for getting map metatada.
	/// </summary>
	[System.Serializable]
	public class MapMetadata : MapMetadataSettable
	{
		/// <summary>
		/// The creation time of the map (in milliseconds since EPOCH).
		/// </summary>
		public long created;

		/// <summary>
		/// Get the map creation time as a DateTime.
		/// </summary>
		public DateTime Created() {
			return EPOCH.AddMilliseconds(created);
		}
	}

	/// <summary>
	/// The map info return as the result of ListMaps or SearchMaps
	/// </summary>
	[System.Serializable]
	public class MapInfo
	{
		/// <summary>
		/// The map ID
		/// </summary>
		public string placeId;
		/// <summary>
		/// The map metadata
		/// </summary>
		public MapMetadata metadata;
	}

	/// <summary>
	/// Class as a container for the JSON that contains information for a list of maps
	/// </summary>
	[System.Serializable]
	public class MapList
	{
		public MapInfo[] places = null;
	}

	/// <summary>
	/// Structure used for searching your maps. All fields are optional.
	/// When multiple fields are set the search condition is logically ANDed,
	/// returning a smaller list of maps.
	/// </summary>
	[System.Serializable]
	public class MapSearch
	{
		/// <summary>
		/// The map name to search for. The search is case insensitive and will match
		/// and map that's name included the search name.
		/// </summary>
		public string name;
		/// <summary>
		/// The location to search for maps in. Maps without location data will
		/// not be returned if this is set.
		/// </summary>
		public MapLocationSearch location;
		/// <summary>
		/// Only return maps newer than this (in milliseconds since EPOCH)
		/// </summary>
		public double newerThan;
		/// <summary>
		/// Only return maps older than this (in milliseconds since EPOCH)
		/// </summary>
		public double olderThan;
		/// <summary>
		/// Filter maps based on this query, which is run via json-query:
		/// https://www.npmjs.com/package/json-query
		/// The filter will match if the query return a valid.
		/// 
		/// For a simple example, to match only maps that have a 'shapeList'
		/// in the userdata object, simply pass 'shapeList'.
		/// 
		/// For other help, contact us on Slack.
		/// </summary>
		public string userdataQuery;

		/// <summary>
		/// Helper function for setting newerThan via a DateTime
		/// </summary>
		public void SetNewerThan(DateTime dt) {
			newerThan = (dt - new DateTime (1970, 1, 1)).TotalMilliseconds;
		}

		/// <summary>
		/// Helper function for setting olderThan via a DateTime
		/// </summary>
		public void SetOlderThan(DateTime dt) {
			olderThan = (dt - new DateTime (1970, 1, 1)).TotalMilliseconds;
		}
	}

	/// <summary>
	/// For Unity Simulator
	/// TODO Add comment
	/// Unity camera poses.
	/// </summary>
	[System.Serializable]
	public struct SimCameraPoses
	{
		public List<PNTransformUnity> cameraPoses;
	}

	private static LibPlacenote sInstance;
	private List<PlacenoteListener> listeners = new List<PlacenoteListener> ();
	private string mMapPath;
	private MappingStatus mPrevStatus = MappingStatus.WAITING;
	private bool mInitialized = false;
	private List<Action<MapInfo[]>> mapListCbs = new List<Action<MapInfo[]>> ();
	private Matrix4x4? mCurrentTransform = null;

	/// For the Unity Simulator

	/// The Current Map status and current localization status that is used
	private MappingStatus mCurrStatus = MappingStatus.WAITING;
	private bool mLocalization = false;

	/// The thresholds that define when a new camera pose should be saved
	private float SIM_MAP_DISTANCE_THRESHOLD = 0.4f;
	private float SIM_MAP_ANGLE_THRESHOLD = 20f;
	/// The thresholds that define a when the camera should localize
	private float SIM_LOCAL_DISTANCE_THRESHOLD = 0.5f;
	private float SIM_LOCAL_ANGLE_THRESHOLD = 30f;

	private MapInfo simMap = new MapInfo();
	private SimCameraPoses simCameraPoses = new SimCameraPoses();

	/// File info for writing JSON maps
	private string simMapFileName = "/jsonMaps.json";

	/// End for Unity Simulator

	// Fill in API Key here
	public String apiKey;

	/// <summary>
	/// Get accessor for the LibPlacenote singleton
	/// </summary>
	/// <value>The singleton instance</value>
	public static LibPlacenote Instance {
		get {
			return sInstance;
		}
	}


	public void Awake () {
		sInstance = this;

		Init ();
	}


	/// <summary>
	/// Register a listener to events published by LibPlacenote
	/// </summary>
	/// <param name="listener">A listener to be added to the subscriber list.</param>
	public void RegisterListener (PlacenoteListener listener)
	{
		listeners.Add (listener);
	}


	/// <summary>
	/// Remove a listener to events published by LibPlacenote
	/// </summary>
	/// <param name="listener">A listener to be removed to the subscriber list.</param>
	public void RemoveListener (PlacenoteListener listener)
	{
		listeners.Remove (listener);
	}


	/// <summary>
	/// Raises the initialized event that indicates the status of the <see cref="PNInitialize"/> call
	/// </summary>
	/// <param name="result">
	/// Result of the PNInitialize call which contains a bool that indicates success/failure
	/// and corresponding message.
	/// </param>
	/// <param name="context">Context passed from C to capture states required by this function</param>
	[MonoPInvokeCallback (typeof(PNResultCallback))]
	static void OnInitialized (ref PNCallbackResultUnity result, IntPtr context)
	{
		bool success = result.success;

		if (success) {
			Debug.Log ("Initialized SDK!");
			Instance.mInitialized = true;
		} else {
			Debug.Log ("Failed to initialize SDK!");
			Debug.Log ("error message: " + result.msg);
		}
	}

	/// <summary>
	/// Initializes the LibPlacenote SDK singleton class.
	/// </summary>
	private void Init ()
	{
		#if UNITY_EDITOR
		mInitialized = true;
		simMap.metadata = new MapMetadata ();
		#endif

		PNInitParamsUnity initParams = new PNInitParamsUnity ();

		// Fill in your API Key here
		initParams.apiKey = apiKey;
		initParams.appBasePath = Application.streamingAssetsPath + "/Placenote";
		initParams.mapPath = Application.persistentDataPath;

        	#if !UNITY_EDITOR
		PNInitialize (ref initParams, OnInitialized, IntPtr.Zero);
		#endif
	}


	/// <summary>
	/// Shutdown the Placenote SDK, especially all mapping threads
	/// </summary>
	public void Shutdown ()
	{
		#if UNITY_EDITOR
		mInitialized = false;
		StopSession();
		#endif

		#if !UNITY_EDITOR
		PNShutdown();
		#endif
	}


	/// <summary>
	/// Indicates whether the LibPlacenote SDK is successful
	/// </summary>
	/// <returns>if LibPlacenote is initialized</returns>
	public bool Initialized ()
	{
		return mInitialized;
	}

	/// <summary>
	/// Sends an image frame and its corresponding camera pose to LibPlacenote mapping/localization module
	/// </summary>
	/// <param name="frameData">Image frame data.</param>
	/// <param name="position">Position of the camera at the time frameData is captured</param>
	/// <param name="rotation">Quaternion of the camera at the time frameData is captured.</param>
	/// <param name="screenOrientation">
	/// Fill in this parameter with screenOrientation from the current UnityVideoParams structure.
	/// Used to correct for the extra rotation applied by the Unity ARKit Plugin on the ARKit pose transform.
	/// </param>
	public void SendARFrame (UnityARImageFrameData frameData, Vector3 position, Quaternion rotation, int screenOrientation)
	{
		Matrix4x4 orientRemovalMat = Matrix4x4.zero;
		orientRemovalMat.m22 = orientRemovalMat.m33 = 1;
		switch (screenOrientation) {
		// portrait
		case 1:
			orientRemovalMat.m01 = 1;
			orientRemovalMat.m10 = -1;
			break;
		case 2:
			orientRemovalMat.m01 = -1;
			orientRemovalMat.m10 = 1;
			break;
		// landscape
		case 3:
		// do nothing
			orientRemovalMat = Matrix4x4.identity;
			break;
		case 4:
			orientRemovalMat.m00 = -1;
			orientRemovalMat.m11 = -1;
			break;
		default:
			Debug.LogError ("Unrecognized screen orientation");
			return;
		}

		Matrix4x4 rotationMat = Matrix4x4.TRS (new Vector3 (0, 0, 0), rotation, new Vector3 (1, 1, 1));
		rotationMat = rotationMat * orientRemovalMat;
		rotation = PNUtility.MatrixOps.QuaternionFromMatrix (rotationMat);

		PNTransformUnity pose = new PNTransformUnity ();
		pose.position.x = position.x;
		pose.position.y = position.y;
		pose.position.z = position.z;
		pose.rotation.x = rotation.x;
		pose.rotation.y = rotation.y;
		pose.rotation.z = rotation.z;
		pose.rotation.w = rotation.w;

		PNImagePlaneUnity yPlane = new PNImagePlaneUnity ();
		yPlane.width = (int)frameData.y.width;
		yPlane.height = (int)frameData.y.height;
		yPlane.stride = (int)frameData.y.stride;
		yPlane.buf = frameData.y.data;

		PNImagePlaneUnity vuPlane = new PNImagePlaneUnity ();
		vuPlane.width = (int)frameData.vu.width;
		vuPlane.height = (int)frameData.vu.height;
		vuPlane.stride = (int)frameData.vu.stride;
		vuPlane.buf = frameData.vu.data;

		#if !UNITY_EDITOR
		PNSetFrame (ref yPlane, ref vuPlane, ref pose);
		#endif
	}

	/// <summary>
	/// Gets the current pose computed by the mapping session
	/// </summary>
	/// <returns>The current pose computed by the mapping session</returns>
	public PNTransformUnity GetPose ()
	{
		PNTransformUnity result = new PNTransformUnity ();
		#if !UNITY_EDITOR
		PNGetPose (ref result);

		#else

		/// Manually setting result to current Unity camera pose
		result.position.x = Camera.main.gameObject.transform.position.x;
		result.position.y = Camera.main.gameObject.transform.position.y;
		result.position.z = Camera.main.gameObject.transform.position.z;
		result.rotation.x = Camera.main.gameObject.transform.rotation.x;
		result.rotation.y = Camera.main.gameObject.transform.rotation.y;
		result.rotation.z = Camera.main.gameObject.transform.rotation.z;
		result.rotation.w = Camera.main.gameObject.transform.rotation.w;

		#endif
		return result;
	}


	/// <summary>
	/// Gets the status of the mapping session
	/// </summary>
	/// <returns>The status of the mapping session.</returns>
	public MappingStatus GetStatus ()
	{
		#if !UNITY_EDITOR
		MappingStatus status = (MappingStatus)PNGetStatus ();
		return status;
		#else
		return mCurrStatus;
		#endif
	}


	/// <summary>
	/// Callback used to publish the computed poses along with its corresponding ARKit pose to listeners
	/// </summary>
	/// <param name="outputPose">Output pose of the LibPlacenote mapping session</param>
	/// <param name="arkitPose">ARKit pose that corresponds with the output pose.</param>
	/// <param name="context">Context passed from C to capture states required by this function.</param>
	[MonoPInvokeCallback (typeof(PNPoseCallback))]
	static void OnPose (ref PNTransformUnity outputPose, ref PNTransformUnity arkitPose, IntPtr context)
	{
		Matrix4x4 outputPoseMat = PNUtility.MatrixOps.PNPose2Matrix4x4 (outputPose);
		Matrix4x4 arkitPoseMat = PNUtility.MatrixOps.PNPose2Matrix4x4 (arkitPose);

		MappingStatus status = Instance.GetStatus();

		var listeners = Instance.listeners;
		if (status == MappingStatus.RUNNING) {
			MainThreadTaskQueue.InvokeOnMainThread (() => {
				foreach (var listener in listeners) {
					listener.OnPose (outputPoseMat, arkitPoseMat);
				}
			});
			Instance.mCurrentTransform = outputPoseMat * arkitPoseMat.inverse;
		}

		if (status != Instance.mPrevStatus) {
			MainThreadTaskQueue.InvokeOnMainThread (() => {
				foreach (var listener in listeners) {
					listener.OnStatusChange (Instance.mPrevStatus, status);
				}
				Instance.mPrevStatus = status;
			});
		}
	}


	/// <summary>
	/// Return a transform in the current ARKit frame transformed into the inertial frame w.r.t the current Placenote Map. Will return null
	/// mapping is not initialized
	/// </summary>
	/// <param name="status">Transform in the ARKit frame of reference (e.g: acquired from a screen touch)</param>
	public Matrix4x4? ProcessPose(Matrix4x4 poseInARKit) {
		if (mCurrentTransform == null) {
			return null;
		}
		return (mCurrentTransform * poseInARKit);
	}


	/// <summary>
	/// Starts a mapping/localization session. If a map is loaded before <see cref="StartSession"/> is called,
	/// the session will operate in localization mode, and will not add more points. If a map
	/// is not loaded, a mapping session will be started to create a map that can be saved with <see cref="SaveMap"/>
	/// </summary>
	/// <param name="extend">
	/// Boolean that governs whether Placenote will keep extending the map after localization. One can save the extended
	/// map as a seperate map with a different map ID.
	/// </param>
	public void StartSession (bool extend = false)
	{
		#if !UNITY_EDITOR
		PNStartSession (OnPose, extend, IntPtr.Zero);
		#else

		if(mLocalization) {
			/// Set MappingStatus to LOST if status is localization
			mCurrStatus = MappingStatus.LOST;
			/// Stops the relocalization (checkLocalization) or the mapping (saving cameraPoses) invoke
			sInstance.CancelInvoke();
			/// Start checking for localization
			sInstance.InvokeRepeating ("checkLocalization", 0f, 0.5f);
		} else {
			/// Set MappingStatus to RUNNING if status is mapping (ie. not localization)
			mCurrStatus = MappingStatus.RUNNING;
			/// Stops the relocalization (checkLocalization) or the mapping (saving cameraPoses) invoke
			sInstance.CancelInvoke();
			/// Start saving camera poses to create a map
			simCameraPoses.cameraPoses = new List<PNTransformUnity> ();
			sInstance.InvokeRepeating ("SaveCameraPose", 0f, 0.5f);
		}

		/// A coroutine that simulates the InvokeRepeating of OnPose
		StartCoroutine(OnPoseInvokeRepeat());

		#endif
	}

	/// <summary>
	/// For Unity Simulator
	/// A coroutine that calls OnPose with in 0.5s intervals
	/// Designed to mimick the behaviour of Invoke Repeating
	/// </summary>
	IEnumerator OnPoseInvokeRepeat()
	{
		while (true) {
			PNTransformUnity currCameraPose =  GetPose();
			OnPose(ref currCameraPose,ref currCameraPose,IntPtr.Zero);
			yield return new WaitForSeconds (0.5f);
		}
	}

	/// <summary>
	/// For Unity Simulator
	/// Saves the current camera pose into the struct simCameraPoses
	/// if the current pose is different (above threshold) from the previous pose
	/// </summary>
	/// <param name="currCameraPose">Curr camera pose.</param>
	public void SaveCameraPose()
	{
		PNTransformUnity currCameraPose = GetPose();
		/// Converts PNTransformUnity back into Vector3 and Quaternion
		Vector3 currPosition = new Vector3 (currCameraPose.position.x, currCameraPose.position.y, currCameraPose.position.z);
		Quaternion currRotation = new Quaternion (currCameraPose.rotation.x, currCameraPose.rotation.y,
			currCameraPose.rotation.z, currCameraPose.rotation.w);

		/// If the cameraPoses list is empty
		if (simCameraPoses.cameraPoses.Count == 0) {
			simCameraPoses.cameraPoses.Add (currCameraPose);
		} else {
			/// Get previous cameraPose from list
			PNTransformUnity prevCameraPose = simCameraPoses.cameraPoses[simCameraPoses.cameraPoses.Count - 1];
			Vector3 prevPosition = new Vector3 (prevCameraPose.position.x, prevCameraPose.position.y, prevCameraPose.position.z);
			Quaternion prevRotation = new Quaternion (prevCameraPose.rotation.x, prevCameraPose.rotation.y,
				prevCameraPose.rotation.z, prevCameraPose.rotation.w);

			float positionDiffNorm = Vector3.Distance (currPosition, prevPosition);
			float angleDiffNorm = Quaternion.Angle(prevRotation, currRotation);

			// Save current cameraPose as new pose if above distance and angle threshold
			if (positionDiffNorm > SIM_MAP_DISTANCE_THRESHOLD || angleDiffNorm > SIM_MAP_ANGLE_THRESHOLD) {
				simCameraPoses.cameraPoses.Add (currCameraPose);
			}
		}
	}

	/// <summary>
	/// For Unity Simulator
	/// Checks if the current camera pose is within the range for localization.
	/// </summary>
	public void checkLocalization()
	{
		PNTransformUnity currCameraPose = GetPose();
		Vector3 currPosition = new Vector3 (currCameraPose.position.x, currCameraPose.position.y, currCameraPose.position.z);
		Quaternion currRotation = new Quaternion (currCameraPose.rotation.x, currCameraPose.rotation.y,
			currCameraPose.rotation.z, currCameraPose.rotation.w);

		/// Iterate through each saved cameraPose in the map to find the one that matches
		/// the current cameraPose.
		for (int i = 0; i < simCameraPoses.cameraPoses.Count; i++) {
			PNTransformUnity localizeCameraPose = simCameraPoses.cameraPoses[i];
			Vector3 localizePosition = new Vector3 (localizeCameraPose.position.x, localizeCameraPose.position.y, localizeCameraPose.position.z);
			Quaternion localizeRotation = new Quaternion (localizeCameraPose.rotation.x, localizeCameraPose.rotation.y,
				localizeCameraPose.rotation.z, localizeCameraPose.rotation.w);
			float positionDiffNorm = Vector3.Distance (currPosition, localizePosition);
			float angleDiffNorm = Quaternion.Angle(localizeRotation, currRotation);

			if (positionDiffNorm < SIM_LOCAL_DISTANCE_THRESHOLD && angleDiffNorm < SIM_LOCAL_ANGLE_THRESHOLD) {
				mCurrStatus = MappingStatus.RUNNING;
				break;
			} else {
				mCurrStatus = MappingStatus.LOST;
			}
		}
	}

	/// <summary>
	/// Stops the running mapping/localization session.
	/// </summary>
	public void StopSession ()
	{
		mCurrentTransform = null; //transform is again, meaningless
		#if !UNITY_EDITOR
		PNStopSession ();
		#else
		/// Stops the current OnPose coroutine
		StopCoroutine(OnPoseInvokeRepeat());

		/// Stops the relocalization or the mapping (saving cameraPoses) invoke
		sInstance.CancelInvoke ();

		mCurrStatus = MappingStatus.WAITING;
		mLocalization = false;
		#endif
	}

	/// <summary>
	/// Raises the dataset upload progress event to listeners
	/// </summary>
	/// <param name="status">Status of the upload</param>
	/// <param name="contextPtr">
	/// Context pointer to capture progressCb passed the <see cref="StartRecordDataset"/> parameters
	/// </param>
	[MonoPInvokeCallback (typeof(PNTransferMapCallback))]
	static void OnDatasetUpload (ref PNTransferStatusUnity status, IntPtr contextPtr)
	{
		GCHandle handle = GCHandle.FromIntPtr (contextPtr);
		Action<bool, bool, float> uploadProgressCb = handle.Target as Action<bool, bool, float>;

		PNTransferStatusUnity statusClone = status;
		MainThreadTaskQueue.InvokeOnMainThread (() => {
			if (statusClone.completed) {
				Debug.Log ("Dataset uploaded!");
				uploadProgressCb (true, false, 1);
				handle.Free ();
			} else if (statusClone.faulted) {
				Debug.Log ("Failed to upload dataset!");
				uploadProgressCb (false, true, 0);
				handle.Free ();
			} else {
				Debug.Log ("Uploading dataset!");
				uploadProgressCb (false, false, (float)(statusClone.bytesTransferred) / statusClone.bytesTotal);
			}
		});
	}

	/// <summary>
	/// Tell Placenote to record this session to a dataset, and upload it for analysis.
	/// </summary>
	/// <param name="uploadProgressCb">Callback to publish the progress of the dataset upload.</param>
	public void StartRecordDataset (Action<bool, bool, float> uploadProgressCb)
	{
		#if !UNITY_EDITOR
		IntPtr cSharpContext = GCHandle.ToIntPtr (GCHandle.Alloc (uploadProgressCb));
		PNStartRecordDataset (OnDatasetUpload, cSharpContext);
		#else
		uploadProgressCb (true, false, 1.0f);
		#endif
	}

	/// <summary>
	/// Callback to return the map metadata fetched by <see cref="GetMetadata"/> function call.
	/// </summary>
	/// <param name="result">
	/// Result that contains the map metadata if GetMetadata call is successful.
	/// If not successful, it returns the error message via <see cref="PNCallbackResultUnity"/>
	/// </param>
	/// <param name="context">Context.</param>
	[MonoPInvokeCallback (typeof(PNResultCallback))]
	static void OnGetMetadata (ref PNCallbackResultUnity result, IntPtr context)
	{
		GCHandle handle = GCHandle.FromIntPtr (context);
		Action<MapMetadata> metadataCb = handle.Target as Action<MapMetadata>;

		PNCallbackResultUnity resultClone = result;
		MainThreadTaskQueue.InvokeOnMainThread (() => {
			if (resultClone.success) {
				String data = resultClone.msg;
				MapInfo mapInfo = JsonConvert.DeserializeObject<MapInfo> (data);
				metadataCb (mapInfo.metadata);
			} else {
				Debug.LogError ("Failed to fetch map list, error: " + resultClone.msg);
				metadataCb (null);
			}

			handle.Free ();
		});
	}

	/// <summary>
	/// Get the metadata for the given ma.
	/// </summary>
	/// <param name="mapId">ID of the map</param>
	/// <param name="metadata">Map metadata</param>
	public bool GetMetadata (string mapId, Action<MapMetadata> metadataCb)
	{
		#if !UNITY_EDITOR
		IntPtr cSharpContext = GCHandle.ToIntPtr (GCHandle.Alloc (metadataCb));
		return PNGetMetadata (mapId, OnGetMetadata, cSharpContext) == 0;
		#else

		/// If the file does not exist
		if (!File.Exists(Application.dataPath + simMapFileName)) {
			Debug.Log("There are no maps. Please create a new map to setMetadata.");
		} else {
			/// Reads maps from file as JSON
			string mapData = File.ReadAllText(Application.dataPath + simMapFileName);
			MapInfo[] mapList = JsonConvert.DeserializeObject<MapInfo[]> (mapData);
			foreach (var mapInfo in mapList) {
				if (mapInfo.placeId == mapId) {
					metadataCb(mapInfo.metadata);
					return true;
				}
			}
		}

		metadataCb(null);
		return false;
		#endif
	}


	/// <summary>
	/// Callback to indicate success of a <see cref="SetMetadata"/> function call.
	/// </summary>
	/// <param name="result">
	/// Result that contains a boolean that indicates if SetMetadata call is successful.
	/// If not successful, it returns the error message via <see cref="PNCallbackResultUnity"/>
	/// </param>
	/// <param name="context">Context.</param>
	[MonoPInvokeCallback (typeof(PNResultCallback))]
	static void OnSetMetadata (ref PNCallbackResultUnity result, IntPtr context)
	{
		GCHandle handle = GCHandle.FromIntPtr (context);
		Action<bool> metadataSavedCb = handle.Target as Action<bool>;

		PNCallbackResultUnity resultClone = result;
		MainThreadTaskQueue.InvokeOnMainThread (() => {
			if (resultClone.success) {
				metadataSavedCb (true);
			} else {
				Debug.LogError ("Failed to fetch map list, error: " + resultClone.msg);
				metadataSavedCb (false);
			}

			handle.Free ();
		});
	}

	/// <summary>
	/// Set the metadata for the given map, which will be returned in the MapList when
	/// you call <see cref="ListMaps"/> or <see cref="SearchMaps"/>.
	/// </summary>
	/// <param name="mapId">ID of the map</param>
	/// <param name="metadata">Map metadata</param>
	public bool SetMetadata (string mapId, MapMetadataSettable metadata, Action<bool> metaDataSavedCb = null)
	{
		#if !UNITY_EDITOR
		IntPtr cSharpContext = GCHandle.ToIntPtr (GCHandle.Alloc (metaDataSavedCb));
		int retCode = PNSetMetadata (mapId, JsonConvert.SerializeObject (metadata), OnSetMetadata, cSharpContext);
		return retCode == 0;
		#else

		/// If the file does not exist
		if (!File.Exists(Application.dataPath + simMapFileName)) {
			Debug.Log("There are no maps. Please create a new map to setMetadata.");
		} else {
			/// Reads maps from file as JSON
			string mapData = File.ReadAllText(Application.dataPath + simMapFileName);
			MapInfo[] mapList = JsonConvert.DeserializeObject<MapInfo[]> (mapData);
			foreach (var mapInfo in mapList) {
				if (mapInfo.placeId == mapId) {

					mapInfo.metadata.location = metadata.location;
					mapInfo.metadata.name = metadata.name;
					mapInfo.metadata.userdata = metadata.userdata;

					var convertedJson = JsonConvert.SerializeObject(mapList);
					File.WriteAllText(Application.dataPath + simMapFileName, convertedJson );
					metaDataSavedCb(true);
					return true;
				}
			}
		}

		metaDataSavedCb(false);
		return false;
		#endif
	}

	/// <summary>
	/// Callback to return the map list fetched by <see cref="ListMaps"/> function call.
	/// </summary>
	/// <param name="result">
	/// Result that contains the list of maps if ListMaps call is successful.
	/// If not successful, it returns the error message via <see cref="PNCallbackResultUnity"/>
	/// </param>
	/// <param name="context">Context.</param>
	[MonoPInvokeCallback (typeof(PNResultCallback))]
	static void OnMapList (ref PNCallbackResultUnity result, IntPtr context)
	{
		GCHandle handle = GCHandle.FromIntPtr (context);
		Action<MapInfo[]> listCb = handle.Target as Action<MapInfo[]>;

		PNCallbackResultUnity resultClone = result;
		MainThreadTaskQueue.InvokeOnMainThread (() => {
			if (resultClone.success) {
				String listJson = resultClone.msg;
				MapList mapIdList = JsonConvert.DeserializeObject<MapList> (listJson);
				listCb (mapIdList.places);
			} else {
				Debug.LogError ("Failed to fetch map list, error: " + resultClone.msg);
				listCb (null);
			}

			handle.Free ();
		});
	}

	/// <summary>
	/// Fetch a list of maps associated with a API Key
	/// </summary>
	/// <param name="listCb">Asynchronous callback to return the fetched map list</param>
	public void ListMaps (Action<MapInfo[]> listCb)
	{
		mapListCbs.Add (listCb);

		#if !UNITY_EDITOR
		IntPtr cSharpContext = GCHandle.ToIntPtr (GCHandle.Alloc (listCb));
		PNListMaps(OnMapList, cSharpContext);
		#else

		/// If the file does not exist
		if(!File.Exists(Application.dataPath + simMapFileName)){
			Debug.Log("There are no maps. Please create a new map.");
		}else{
			/// Reads maps from file as JSON
			string mapData = File.ReadAllText(Application.dataPath + simMapFileName);
			MapInfo[] mapList = JsonConvert.DeserializeObject<MapInfo[]> (mapData);
			listCb (mapList);
		}
		#endif
	}

	/// <summary>
	/// Fetch a list of maps which include the given name.
	/// </summary>
	/// <param name="name">Only return maps which include this name</param>
	/// <param name="listCb">Asynchronous callback to return the fetched map list</param>
	public void SearchMaps(string name, Action<MapInfo[]> listCb)
	{
		MapSearch ms = new MapSearch ();
		ms.name = name;
		SearchMaps (ms, listCb);
	}
		
	/// <summary>
	/// Fetch a list of maps in the given location.
	/// </summary>
	/// <param name="latitude">The GPS latitude for the center of the search circle</param>
	/// <param name="longitude">The GPS longitude for the center of the search circle</param>
	/// <param name="radius">The radius (in meters) of the search circle</param>
	/// <param name="listCb">Asynchronous callback to return the fetched map list</param>
	public void SearchMaps(float latitude, float longitude, float radius, Action<MapInfo[]> listCb)
	{
		MapSearch ms = new MapSearch ();
		ms.location = new MapLocationSearch ();
		ms.location.latitude = latitude;
		ms.location.longitude = longitude;
		ms.location.radius = radius;
		SearchMaps (ms, listCb);
	}

	/// <summary>
	/// Fetch a list of maps created in the given time window.
	/// </summary>
	/// <param name="newerThan">Only return maps created since this date. Pass in DateTime.MinValue to effectively disable this.</param>
	/// <param name="olderThan">Only return maps created before this date. Pass in DateTime.MaxValue to effectively disable this.</param>
	/// <param name="listCb">Asynchronous callback to return the fetched map list</param>
	public void SearchMaps(DateTime newerThan, DateTime olderThan, Action<MapInfo[]> listCb)
	{
		MapSearch ms = new MapSearch ();
		ms.SetNewerThan (newerThan);
		ms.SetOlderThan (olderThan);
		SearchMaps (ms, listCb);
	}

	/// <summary>
	/// Fetch a list of maps filtered by a userdata query.
	/// </summary>
	/// <param name="userdataQuery">See <see cref="MapSearch.userdataQuery"/> for details.</param>
	/// <param name="listCb">Asynchronous callback to return the fetched map list</param>
	public void SearchMapsByUserData(string userdataQuery, Action<MapInfo[]> listCb)
	{
		MapSearch ms = new MapSearch ();
		ms.userdataQuery = userdataQuery;
		SearchMaps (ms, listCb);
	}

	/// <summary>
	/// Fetch a list of maps filtered by some search parameters.
	/// </summary>
	/// <param name="search">See <see cref="MapSearch"/> for details.</param>
	/// <param name="listCb">Asynchronous callback to return the fetched map list</param>
	public void SearchMaps (MapSearch search, Action<MapInfo[]> listCb)
	{
		mapListCbs.Add (listCb);

		#if !UNITY_EDITOR
		IntPtr cSharpContext = GCHandle.ToIntPtr (GCHandle.Alloc (listCb));
		PNSearchMaps(JsonConvert.SerializeObject(search), OnMapList, cSharpContext);
		#else

		/// If the file does not exist
		if(!File.Exists(Application.dataPath + simMapFileName)){
			Debug.Log("There are no maps. Please create a new map.");
		}else{
			/// Reads maps from file as JSON
			string mapData = File.ReadAllText(Application.dataPath + simMapFileName);
			MapInfo[] mapList = JsonConvert.DeserializeObject<MapInfo[]> (mapData);
			listCb (mapList);
		}
		#endif
	}

	/// <summary>
	/// A class to casted as context to be passed to <see cref="OnMapSaved"/>
	/// and <see cref="OnMapUploaded"/> functions to capture external states
	/// </summary>
	private class SaveLoadContext
	{
		public Action<String> savedCb;
		public Action<bool, bool, float> progressCb;
	}


	/// <summary>
	/// Raises the map upload progress event to listeners
	/// </summary>
	/// <param name="status">Status of the upload</param>
	/// <param name="contextPtr">
	/// Context pointer to capture progressCb passed the <see cref="SaveMap"/> parameters
	/// </param>
	[MonoPInvokeCallback (typeof(PNTransferMapCallback))]
	static void OnMapUploaded (ref PNTransferStatusUnity status, IntPtr contextPtr)
	{
		GCHandle handle = GCHandle.FromIntPtr (contextPtr);
		SaveLoadContext context = handle.Target as SaveLoadContext;
		Action<bool, bool, float> progressCb = context.progressCb;

		PNTransferStatusUnity statusClone = status;
		Debug.Log (String.Format ("mapId {0} completed {1} faulted {2} bytesTransferred {3} bytesTotal {4}",
			status.mapId, status.completed, status.faulted, status.bytesTransferred, status.bytesTotal)
		);
		MainThreadTaskQueue.InvokeOnMainThread (() => {
			if (statusClone.completed) {
				Debug.Log ("Uploaded map!");
				progressCb (true, false, 1);
				handle.Free ();
			} else if (statusClone.faulted) {
				Debug.Log ("Failed to upload map!");
				progressCb (false, true, 0);
				handle.Free ();
			} else {
				Debug.Log ("Uploading map!");
				progressCb (false, false, (float)(statusClone.bytesTransferred) / statusClone.bytesTotal);
			}
		});

	}


	/// <summary>
	/// Raises the map saved event to listeners
	/// </summary>
	/// <param name="result">Result of the save map request</param>
	/// <param name="contextPtr">
	/// Context pointer to capture savedCb passed the <see cref="SaveMap"/> parameters
	/// </param>
	[MonoPInvokeCallback (typeof(PNResultCallback))]
	static void OnMapSaved (ref PNCallbackResultUnity result, IntPtr contextPtr)
	{
		GCHandle handle = GCHandle.FromIntPtr (contextPtr);
		SaveLoadContext context = handle.Target as SaveLoadContext;
		Action<String> savedCb = context.savedCb;

		PNCallbackResultUnity resultClone = result;
		MainThreadTaskQueue.InvokeOnMainThread (() => {
			if (resultClone.success) {
				String mapId = resultClone.msg;
				Debug.Log ("Added a record to map db with id " + mapId);
				PNSaveMap (mapId, OnMapUploaded, contextPtr);
				savedCb (mapId);
			} else {
				Debug.Log (String.Format ("Failed to add the map! Error msg: %s", resultClone.msg));
				savedCb (null);
				handle.Free ();
			}
		});
	}


	/// <summary>
	/// Saves the map being created by the running mapping session
	/// </summary>
	/// <param name="savedCb">Callback to publish a event upon the map being saved.</param>
	/// <param name="progressCb">Callback to publish the progress of the map upload.</param>
	public void SaveMap (Action<String> savedCb, Action<bool, bool, float> progressCb)
	{
		SaveLoadContext context = new SaveLoadContext ();
		context.savedCb = savedCb;
		context.progressCb = progressCb;

		#if !UNITY_EDITOR
		IntPtr cSharpContext = GCHandle.ToIntPtr (GCHandle.Alloc (context));
		PNAddMap (OnMapSaved, cSharpContext);
		#else

		/// Setting map Id
		simMap.placeId =  Guid.NewGuid().ToString();
		/// Setting saved camera poses
		simMap.metadata.simulatedMap = simCameraPoses;
		string jsonMap = JsonConvert.SerializeObject(simMap);

		/// The file does not exist yet OR The file exists but does not contain '[]'
		if( !File.Exists(Application.dataPath + simMapFileName) || File.ReadAllText(Application.dataPath + simMapFileName).ToString() == "") {
			File.WriteAllText(Application.dataPath + simMapFileName, "[" + jsonMap +"]");
		} else {
			string currMapData = File.ReadAllText(Application.dataPath + simMapFileName);
			var mapInfoList = JsonConvert.DeserializeObject<List<MapInfo>>(currMapData);
			/// The file exists but has no maps
			if (mapInfoList == null){
				File.WriteAllText(Application.dataPath + simMapFileName, jsonMap);
			} else { /// If there is already more than 1 item in the file
				mapInfoList.Add(simMap);
				var convertedJson = JsonConvert.SerializeObject(mapInfoList);
				File.WriteAllText(Application.dataPath + simMapFileName, convertedJson );
			}
		}

		savedCb (simMap.placeId);
		progressCb (true, false, 1.0f);
		#endif
	}


	/// <summary>
	/// Raises the event that indicate that the map is successfully downloaded and loaded for a localization session
	/// </summary>
	/// <param name="status">Status.</param>
	/// <param name="contextPtr">Context that captures loadProgressCb passed in to <see cref="LoadMap"/>.</param>
	[MonoPInvokeCallback (typeof(PNTransferMapCallback))]
	static void OnMapLoaded (ref PNTransferStatusUnity status, IntPtr contextPtr)
	{
		GCHandle handle = GCHandle.FromIntPtr (contextPtr);
		Action<bool, bool, float> loadProgressCb = handle.Target as Action<bool, bool, float>;

		PNTransferStatusUnity statusClone = status;
		MainThreadTaskQueue.InvokeOnMainThread (() => {
			if (statusClone.completed) {
				Debug.Log ("Loaded map!");
				loadProgressCb (true, false, 1);
				handle.Free ();
			} else if (statusClone.faulted) {
				Debug.Log ("Failed to downloading map!");
				loadProgressCb (false, true, 0);
				handle.Free ();
			} else {
				Debug.Log ("Downloading map!");
				loadProgressCb (false, false, (float)(statusClone.bytesTransferred) / statusClone.bytesTotal);
			}
		});
	}


	/// <summary>
	/// Load a map file for a localization session. The localization session
	/// will compute the pose of the camera w.r.t the loaded map.
	/// </summary>
	/// <param name="mapId">Unique identifier of the map to be loaded</param>
	/// <param name="loadProgressCb">
	/// Callback to publish map download progress event to listeners registered.
	/// </param>
	public void LoadMap (String mapId, Action<bool, bool, float> loadProgressCb)
	{
		#if !UNITY_EDITOR
		IntPtr cSharpContext = GCHandle.ToIntPtr (GCHandle.Alloc (loadProgressCb));
		PNLoadMap (mapId, OnMapLoaded, cSharpContext);
		#else
		mLocalization = true;
		// Reads maps from file as JSON
		string mapData = File.ReadAllText(Application.dataPath + simMapFileName);
		MapInfo[] mapList = JsonConvert.DeserializeObject<MapInfo[]> (mapData);
		for(int i = 0; i < mapList.Length; i++){
			if (mapId == mapList[i].placeId)
				simMap = mapList[i];
		}

		simCameraPoses = simMap.metadata.simulatedMap;
		loadProgressCb (true, false, 1.0f);
		#endif

	}


	/// <summary>
	/// Callback to indicate that the map is deleted after request via <see cref="DeleteMap"/>
	/// </summary>
	/// <param name="result">
	/// Result of the <see cref="DeleteMap"/> call, that indicate success/failure and corresponding errorMsg
	/// </param>
	/// <param name="context">Context that captures deletedCb passed into <see cref="DeleteMap"/>.</param>
	[MonoPInvokeCallback (typeof(PNResultCallback))]
	private static void OnMapDeleted (ref PNCallbackResultUnity result, IntPtr context)
	{
		GCHandle handle = GCHandle.FromIntPtr (context);
		Action<bool, string> deletedCb = handle.Target as Action<bool, string>;

		bool deleted = result.success;
		string errorMsg = result.msg;
		MainThreadTaskQueue.InvokeOnMainThread (() => {
			if (deleted) {
				deletedCb (true, "Success");
			} else {
				deletedCb (true, "Failed to delete, error: " + errorMsg);
			}

			handle.Free ();
		});
	}


	/// <summary>
	/// Delete a map given its ID
	/// </summary>
	/// <param name="mapId">Identifier of the map to be deleted.</param>
	/// <param name="deletedCb">
	/// Asynchronous callback to indicate whether the map has been deleted.
	/// </param>
	public void DeleteMap (String mapId, Action<bool, string> deletedCb)
	{
		#if !UNITY_EDITOR
		IntPtr cSharpContext = GCHandle.ToIntPtr (GCHandle.Alloc (deletedCb));
		PNDeleteMap (mapId, OnMapDeleted, cSharpContext);
		#else
		// Reading map
		string mapData = File.ReadAllText(Application.dataPath + simMapFileName);
		MapInfo[] mapList = JsonConvert.DeserializeObject<MapInfo[]> (mapData);
		if(mapList.Length == 1){
			/// Reseting brackets for array in json file
			File.WriteAllText(Application.dataPath + simMapFileName, "[]" );
		} else {
			for(int i = 0; i < mapList.Length; i++){
				if (mapId == mapList[i].placeId){
					/// Delete map from array
					for (int j = i; j < mapList.Length-1; j++)
						mapList[j] = mapList[j+1];
					Array.Resize(ref mapList, mapList.Length - 1);
					break;
				}
			}

			/// Resaving map
			var convertedJson = JsonConvert.SerializeObject(mapList);
			File.WriteAllText(Application.dataPath + simMapFileName, convertedJson);
		}

		deletedCb (true, "Success");
		#endif
	}


	/// <summary>
	/// Return the map created by a mapping session, or the current map used by a localization session
	/// </summary>
	/// <returns>
	/// The map that contains all 3D feature points created by a mapping session,
	/// or contained in a loaded map during a localization session
	/// </returns>
	public PNFeaturePointUnity[] GetMap ()
	{
		
		PNFeaturePointUnity[] map = new PNFeaturePointUnity [1];

		#if !UNITY_EDITOR
		int lmSize = 0;
		lmSize = PNGetAllLandmarks (map, 0);

		if (lmSize == 0) {
			Debug.Log ("Empty landmarks, probably tried to fail");
			return null;
		}

		Array.Resize (ref map, lmSize);
		PNGetAllLandmarks (map, lmSize);
		#endif

		return map;
	}


	/// <summary>
	/// Return an array of feature points measured by the mapping/localization session.
	/// This collection of points is a subset of the map returned by <see cref="GetMap"/>
	/// </summary>
	/// <returns>
	/// The map, which is a array of 3D feature points currently measured by the mapping/localization session
	/// </returns>
	public PNFeaturePointUnity[] GetTrackedFeatures ()
	{
		int lmSize = 0;
		PNFeaturePointUnity[] map = new PNFeaturePointUnity [1];

		#if !UNITY_EDITOR
		lmSize = PNGetTrackedLandmarks (map, 0);
		#endif

		if (lmSize == 0) {
			Debug.Log ("Empty landmarks, probably tried to fail");
			return null;
		}

		#if !UNITY_EDITOR
		Array.Resize (ref map, lmSize);
		PNGetTrackedLandmarks (map, lmSize);
		#endif

		return map;
	}

	// Native function headers
	[DllImport ("__Internal")]
	[return: MarshalAs (UnmanagedType.I4)]
	private static extern int PNInitialize (
		ref PNInitParamsUnity initParams, PNResultCallback cb, IntPtr context
	);

	[DllImport ("__Internal")]
	[return: MarshalAs (UnmanagedType.I4)]
	private static extern int PNGetStatus ();

	[DllImport ("__Internal")]
	[return: MarshalAs (UnmanagedType.I4)]
	private static extern void PNSetFrame (
		ref PNImagePlaneUnity yPlane, ref PNImagePlaneUnity vuPlane, ref PNTransformUnity pose
	);

	[DllImport ("__Internal")]
	[return: MarshalAs (UnmanagedType.I4)]
	private static extern int PNListMaps (PNResultCallback cb, IntPtr context);

	[DllImport ("__Internal")]
	[return: MarshalAs (UnmanagedType.I4)]
	private static extern int PNSearchMaps (string searchJson, PNResultCallback cb, IntPtr context);

	[DllImport ("__Internal")]
	[return: MarshalAs (UnmanagedType.I4)]
	private static extern int PNAddMap (PNResultCallback cb, IntPtr context);

	[DllImport ("__Internal")]
	[return: MarshalAs (UnmanagedType.I4)]
	private static extern int PNSaveMap (string mapId, PNTransferMapCallback cb, IntPtr context);

	[DllImport ("__Internal")]
	[return: MarshalAs (UnmanagedType.I4)]
	private static extern int PNLoadMap (string mapId, PNTransferMapCallback cb, IntPtr context);

	[DllImport ("__Internal")]
	[return: MarshalAs (UnmanagedType.I4)]
	private static extern int PNDeleteMap (string mapId, PNResultCallback cb, IntPtr context);

	[DllImport ("__Internal")]
	[return: MarshalAs (UnmanagedType.I4)]
	private static extern int PNGetTrackedLandmarks ([In, Out] PNFeaturePointUnity[] lmArrayPtr, int lmSize);

	[DllImport ("__Internal")]
	[return: MarshalAs (UnmanagedType.I4)]
	private static extern int PNGetAllLandmarks ([In, Out] PNFeaturePointUnity[] lmArrayPtr, int lmSize);

	[DllImport ("__Internal")]
	[return: MarshalAs (UnmanagedType.I4)]
	private static extern int PNGetPose (ref PNTransformUnity pose);

	[DllImport ("__Internal")]
	[return: MarshalAs (UnmanagedType.I4)]
	private static extern int PNStartSession (PNPoseCallback cb, bool extend, IntPtr context);

	[DllImport ("__Internal")]
	[return: MarshalAs (UnmanagedType.I4)]
	private static extern int PNStopSession ();

	[DllImport ("__Internal")]
	[return: MarshalAs (UnmanagedType.I4)]
	private static extern int PNStartRecordDataset (PNTransferMapCallback cb, IntPtr context);

	[DllImport ("__Internal")]
	[return: MarshalAs (UnmanagedType.I4)]
	private static extern int PNGetMetadata (string mapId, PNResultCallback cb, IntPtr context);

	[DllImport ("__Internal")]
	[return: MarshalAs (UnmanagedType.I4)]
	private static extern int PNSetMetadata (string mapId, string metadataJson, PNResultCallback cb, IntPtr context);

	[DllImport ("__Internal")]
	[return: MarshalAs (UnmanagedType.I4)]
	private static extern int PNShutdown ();
}
