using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
#endif
using System.Collections;
using GameSparks.Core;
using System.Collections.Generic;
using System;
using System.Text.RegularExpressions;

namespace GameSparks.Platforms
{
#if UNITY_EDITOR
	[InitializeOnLoad]
	public class StopPlayingOnRecompile
	{
		static StopPlayingOnRecompile()
		{
			EditorApplication.update -= StopPlayingIfRecompiling;
			EditorApplication.update += StopPlayingIfRecompiling;
		}

		static void StopPlayingIfRecompiling()
		{
			if (EditorApplication.isCompiling && EditorApplication.isPlaying)
			{
				GS.Disconnect ();

				EditorApplication.isPlaying = false;
			}
		}
	}
#endif

	/// <summary>
	/// This is the base class for all platform specific implementations.
	/// Depending on your BuildTarget in Unity, GameSparks will automatically determine
	/// which implementation to use for platform specific code.
	/// </summary>
	public abstract class PlatformBase : MonoBehaviour, GameSparks.Core.IGSPlatform {

		static string PLAYER_PREF_AUTHTOKEN_KEY = "gamesparks.authtoken";
		static string PLAYER_PREF_USERID_KEY = "gamesparks.userid";
        static string PLAYER_PREF_DEVICEID_KEY = "gamesparks.deviceid";


		virtual protected void Start()
		{

			DeviceName = SystemInfo.deviceName.ToString();
			DeviceType = SystemInfo.deviceType.ToString();
#if UNITY_ANDROID && !UNITY_EDITOR && UNITY_5_3
			if (true)
#elif UNITY_5_4_OR_NEWER 
			if (Application.platform == RuntimePlatform.PS4 || Application.platform == RuntimePlatform.XboxOne ||
				SystemInfo.unsupportedIdentifier == SystemInfo.deviceUniqueIdentifier)
#else
			if (Application.platform == RuntimePlatform.PS4 || Application.platform == RuntimePlatform.XboxOne)
#endif
			{
#if GS_DONT_USE_PLAYER_PREFS || UNITY_SWITCH
	#if UNITY_5_4_OR_NEWER
				if (SystemInfo.unsupportedIdentifier == SystemInfo.deviceUniqueIdentifier) {
					DeviceId = System.Guid.NewGuid().ToString();
				} else {
					DeviceId = SystemInfo.deviceUniqueIdentifier.ToString();
				}
	#else 
				DeviceId = System.Guid.NewGuid().ToString();
	#endif
#else
				DeviceId = PlayerPrefs.GetString(PLAYER_PREF_DEVICEID_KEY);
				if (DeviceId.Equals(""))
				{
					DeviceId = System.Guid.NewGuid().ToString();

					PlayerPrefs.SetString(PLAYER_PREF_DEVICEID_KEY, DeviceId);
					PlayerPrefs.Save();
				}
#endif
            }
            else
            {
				DeviceId = SystemInfo.deviceUniqueIdentifier.ToString ();
            }

			char[] delimiterChars = { ' ', ',', '.', ':', '-', '_', '(', ')' };
			int cpuCores = SystemInfo.processorCount;
			string manufacturer = "Unknown";
			string model = SystemInfo.deviceModel;
			string memory = SystemInfo.systemMemorySize + " MB";
			string osName = SystemInfo.operatingSystem;
			string osVersion = SystemInfo.operatingSystem;
			string cpuVendor = SystemInfo.processorType;
			string resolution = Screen.width + "x" + Screen.height;
			string gssdk = GameSparks.Core.GS.Version;
			string engine = SDK;
			string engineVersion = Application.unityVersion;
			string[] listStrings; 

			switch (DeviceOS) {
				case "MACOS":
				case "IOS":
				case "TVOS":
					manufacturer = "Apple";
					listStrings = SystemInfo.operatingSystem.Split (delimiterChars);
					if (DeviceOS.Equals ("MACOS")) {
						osName = listStrings [0] + " " + listStrings [1] + " " + listStrings[2];
						osVersion = listStrings [3] + "." + listStrings [4] + "." + listStrings[5];
					} else {
						//if (listStrings[0].Equals("iOS")) {
							osName = listStrings [0];
							osVersion = listStrings [1] + "." + listStrings [2];
						//} else {
						//	osName = listStrings [0] + " " + listStrings [1];
						//	osVersion = listStrings [2] + "." + listStrings [3];
						//}
					}

					break;

				case "WINDOWS":
				case "WSA":
				case "XBOXONE":
					manufacturer = "Microsoft";
					if (DeviceOS.Equals ("XBOXONE")) {
						model = "Xbox One";
						memory = (SystemInfo.systemMemorySize / 1000) + " MB";
						osVersion = "Unknown";
					} else {
						model = "PC";
						listStrings = SystemInfo.operatingSystem.Split (delimiterChars, StringSplitOptions.RemoveEmptyEntries);
						osName = listStrings [0] + " " + listStrings [1];
						osVersion = listStrings [2] + "." + listStrings [3] + "." + listStrings[4];
					}
                    cpuVendor += " " + SystemInfo.processorFrequency.ToString() + "MHz";

                    RegexOptions options = RegexOptions.None;
                    Regex regex = new Regex("[ ]{2,}", options);

                    cpuVendor = regex.Replace(cpuVendor, " ");
            
                    break;

				case "ANDROID":
					listStrings = SystemInfo.deviceModel.Split (delimiterChars);
					manufacturer = listStrings [0];
					model = SystemInfo.deviceModel.Replace (manufacturer, "").Substring(1);
					listStrings = SystemInfo.operatingSystem.Split (delimiterChars);
					osName = listStrings [0] + " " + listStrings [1];
					osVersion = listStrings [7];
					cpuVendor += " " + SystemInfo.processorFrequency + "MHz";
					
					break;

#if !UNITY_2017_3_OR_NEWER
				case "SAMSUNGTV":
					manufacturer = "Samsung";
					
					break;
#endif

				case "WIIU":
					manufacturer = "Nintendo";
					model = "WiiU";
					
					break;

                case "SWITCH":
                    manufacturer = "Nintendo";
                    model = "Switch";
                    osVersion = "Unknown";

                    break;

                case "PS4":
					manufacturer = "Sony";
					model = "PS4";
					memory = (SystemInfo.systemMemorySize / 1000000) + " MB";
					listStrings = SystemInfo.operatingSystem.Split (delimiterChars);
					osName = listStrings [0];
					osVersion = listStrings [1] + "." + listStrings [2] + "." + listStrings[3];
					cpuVendor += " " + SystemInfo.processorFrequency + "MHz";

					break;

				case "TIZEN":
					manufacturer = "Tizen";
					
					break;

				case "WEBGL":
					listStrings = SystemInfo.deviceModel.Split (delimiterChars);
					model = listStrings [0];
					listStrings = SystemInfo.operatingSystem.Split (delimiterChars);
					osName = listStrings [0];
					if (osName.Equals ("Mac")) {
						osName += " " + listStrings [1] + " " + listStrings [2];
						osVersion = listStrings [3] + "." + listStrings [4] + "." + listStrings [5];
					} else {
						osVersion = listStrings [1];
					}

                    break;
			}

			Dictionary<string, object> data = new Dictionary<string, object> ();

			data.Add ("manufacturer", manufacturer);
			data.Add ("model", model);
			data.Add ("memory", memory);
			data.Add ("os.name", osName);
			data.Add ("os.version", osVersion);
			data.Add ("cpu.cores", cpuCores.ToString());
			data.Add ("cpu.vendor", cpuVendor);
			data.Add ("resolution", resolution);
			data.Add ("gssdk", gssdk);
			data.Add ("engine", engine);
			data.Add ("engine.version", engineVersion);

			DeviceStats = new GSData (data);

            /*Debug.Log (DeviceStats.GetString ("manufacturer"));
			Debug.Log (DeviceStats.GetString ("model"));
			Debug.Log (DeviceStats.GetString ("memory"));
			Debug.Log (DeviceStats.GetString ("os.name"));
			Debug.Log (DeviceStats.GetString ("os.version"));
			Debug.Log (DeviceStats.GetString ("cpu.cores"));
			Debug.Log (DeviceStats.GetString ("cpu.vendor"));
			Debug.Log (DeviceStats.GetString ("resolution"));
			Debug.Log (DeviceStats.GetString ("gssdk"));
			Debug.Log (DeviceStats.GetString ("engine"));
			Debug.Log (DeviceStats.GetString ("engine.version"));*/

#if !GS_DONT_USE_PLAYER_PREFS && !UNITY_SWITCH
            AuthToken = PlayerPrefs.GetString(PLAYER_PREF_AUTHTOKEN_KEY);
			UserId = PlayerPrefs.GetString(PLAYER_PREF_USERID_KEY);
#endif
			Platform = Application.platform.ToString();

			var gameSparksUnity = GetComponent<GameSparksUnity>();
			GameSparksSettings.SetInstance(gameSparksUnity.settings);
			
			ExtraDebug = GameSparksSettings.DebugBuild;

#if !UNITY_WEBPLAYER && !UNITY_SWITCH
            PersistentDataPath = Application.persistentDataPath;
#endif
         
			GS.Initialise(this);

			DontDestroyOnLoad (this);

#if UNITY_EDITOR
	#if UNITY_2017_2_OR_NEWER
			EditorApplication.playModeStateChanged += HandlePlayModeStateChanged;
	#else
			EditorApplication.playmodeStateChanged += HandlePlayModeStateChanged;
	#endif
#endif
		}
		
		private List<Action> _actions = new List<Action>();
		List<Action> _currentActions = new List<Action>();

		/// <summary>
		/// Executes the given Action the on main thread of Unity.
		/// </summary>
		public void ExecuteOnMainThread(Action action){
			lock(_actions){
				_actions.Add(action);
			}
		}

		virtual protected void Update(){
			lock (_actions)
			{
				if (_actions.Count > 0) {
					_currentActions.AddRange (_actions);
					_actions.Clear ();
				}
			}
			var count = _currentActions.Count;

			if (count > 0) {
				for (var index = 0; index < count; ++index) {
					var a = _currentActions [index];
					if (a != null) {
						try {
							a ();
						} catch (Exception e) {
							if (ExceptionReporter != null) {
								ExceptionReporter (e);
							} else {
								Debug.Log (e);
							}
						}
					}
				}

				_currentActions.Clear ();
			}
		}

		virtual protected void OnApplicationPause(bool paused)
		{
			if(paused)
			{
#if UNITY_EDITOR
				GS.Disconnect();
#endif
			}
			else
			{
				try{
					GS.Reconnect();
				}catch(Exception e) {
					if(ExceptionReporter != null) {
						ExceptionReporter(e);
					}
				}
			}
		}

#if UNITY_EDITOR
	#if UNITY_2017_2_OR_NEWER
		void HandlePlayModeStateChanged(PlayModeStateChange state)
		{
			if (state == PlayModeStateChange.ExitingPlayMode)
			{
				GS.Disconnect ();
			}
		}
	#else
		void HandlePlayModeStateChanged()
		{
			if (!EditorApplication.isCompiling && !EditorApplication.isUpdating && 
				!EditorApplication.isPlaying && !EditorApplication.isPlayingOrWillChangePlaymode)
			{
				GS.Disconnect ();
			}
		}
	#endif
#else
		private bool _allowQuitting = false;

		virtual protected void OnApplicationQuit(){
			GS.ShutDown();
		
            StartCoroutine("DelayedQuit");

			if (!_allowQuitting)
			{
				Application.CancelQuit();
			}
		}

		IEnumerator DelayedQuit()
		{
        	yield return new WaitForSeconds(1.0f);
			
			while (GS.Available) 
			{
				yield return new WaitForSeconds(0.1f);
			}

			_allowQuitting = true;

			Application.Quit(); 
		}
#endif

		public String DeviceOS {
			get{
                switch (Application.platform)
                {
                    case RuntimePlatform.OSXEditor:
                    case RuntimePlatform.OSXPlayer:
#if !UNITY_2017_1_OR_NEWER
                    case RuntimePlatform.OSXDashboardPlayer:             
                        return "MACOS";
#endif

                    case RuntimePlatform.WindowsPlayer:
                    case RuntimePlatform.WindowsEditor:
                        return "WINDOWS";

                    case RuntimePlatform.IPhonePlayer:
                        return "IOS";         

                    case RuntimePlatform.Android:
                        return "ANDROID";

                    case RuntimePlatform.LinuxPlayer:
                        return "LINUX";

                    case RuntimePlatform.WebGLPlayer:
                        return "WEBGL";

                    case RuntimePlatform.WSAPlayerX86:
                    case RuntimePlatform.WSAPlayerX64:
                    case RuntimePlatform.WSAPlayerARM:
                        return "WSA";

                    case RuntimePlatform.TizenPlayer:
                        return "TIZEN";

                    case RuntimePlatform.PS4:
                        return "PS4";

                    case RuntimePlatform.XboxOne:
                        return "XBOXONE";

#if !UNITY_2017_3_OR_NEWER
                    case RuntimePlatform.SamsungTVPlayer:
                        return "SAMSUNGTV";
#endif

                    case RuntimePlatform.WiiU:
                        return "WIIU";

                    case RuntimePlatform.tvOS:
                        return "TVOS";

                    #if UNITY_SWITCH
                    case RuntimePlatform.Switch:
                        return "SWITCH";
                    #endif

                    default:
                        return "UNKNOWN";
                }
			}
		}

		public String DeviceName  {get; private set;}
		public String DeviceType {get; private set;}
		public GSData DeviceStats {get; private set;}
		public virtual String DeviceId  {get; private set;}
		public String Platform {get; private set;}

		/// <summary>
		/// Allow for extra debug output. To set it use the GameSparksSettings editor window. <see cref="GameSparksSettings.DebugBuild"/>
		/// </summary>
		public bool ExtraDebug {get; private set;}

		public string ApiKey { get {
				return GameSparksSettings.ApiKey;
			}
		}

		public string ApiSecret { get {
				return GameSparksSettings.ApiSecret;
			}
		}

		public string ApiCredential { get {
				return GameSparksSettings.Credential;
			}
		}

		public string ApiStage { get {
				return GameSparksSettings.PreviewBuild ? "preview" : "live";
			}
		}

		public String ApiDomain { get { return null; } }

		public String PersistentDataPath{get; private set;}


		/// <summary>
		/// Logs the given string to the Unity debug console.
		/// </summary>
		public void DebugMsg(String message){
			ExecuteOnMainThread(() => {
				if (GameSparksSettings.DebugBuild)
				{
					if (message.Length < 1500)
					{
						Debug.Log("GS: " + message);
					} else
					{
						Debug.Log("GS: " + message.Substring(0, 1500) + "...");
					}
				}
			});
		}

		public String SDK{get { return "Unity"; } }

		private String m_authToken="0";

		public String AuthToken {
			get {return m_authToken;}
			set {
				m_authToken = value;
#if !GS_DONT_USE_PLAYER_PREFS && !UNITY_SWITCH
                PlayerPrefs.SetString(PLAYER_PREF_AUTHTOKEN_KEY, value);
#endif
			}
		}

		private String m_userId="";

		public String UserId {
			get {return m_userId;}
			set {
				m_userId = value;
#if !GS_DONT_USE_PLAYER_PREFS && !UNITY_SWITCH
				PlayerPrefs.SetString(PLAYER_PREF_USERID_KEY, value);
#endif
            }
        }

		public Action<Exception> ExceptionReporter {
			get;
			set;
		}

		/// <summary>
		/// Returns a (platform specific) timer implementation.
		/// </summary>
		/// <returns>The timer.</returns>
		public abstract IGameSparksTimer GetTimer();

		/// <summary>
		/// Returns a hmac created with SHA-256 based on the given parameters.
		/// </summary>
		public abstract string MakeHmac(string stringToHmac, string secret);

		/// <summary>
		/// Creates a (platform specific) Websocket and returns the instance.
		/// </summary>
		public abstract IGameSparksWebSocket GetSocket(string url, Action<string> messageReceived, Action closed, Action opened, Action<string> error);
	}

}
