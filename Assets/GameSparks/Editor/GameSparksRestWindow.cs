using UnityEditor;
using UnityEngine;
#if UNITY_2017_1_OR_NEWER
using UnityEditor.Build;
#endif

namespace GameSparks.Editor
{

	[InitializeOnLoad]
#if UNITY_2017_1_OR_NEWER
	public class GameSparksBuildSettings : IActiveBuildTargetChanged
#else
	public class GameSparksBuildSettings
#endif
	{
		static GameSparksBuildSettings()
		{
#if !UNITY_2017_1_OR_NEWER
			EditorUserBuildSettings.activeBuildTargetChanged += PlatformSwitch;
			PlatformSwitch();
#endif
		}

#if UNITY_2017_1_OR_NEWER
		public int callbackOrder
		{ 
			get 
			{ 
				return 0; 
			} 
		}

		public void OnActiveBuildTargetChanged(BuildTarget previousTarget, BuildTarget newTarget)
		{
			if (newTarget == BuildTarget.WSAPlayer)
			{
				PlayerSettings.WSA.SetCapability(PlayerSettings.WSACapability.InternetClientServer, true);
			}
		}
#else
		public  static void PlatformSwitch()
		{
			#if UNITY_5 || UNITY_5_3_OR_NEWER
			if (EditorUserBuildSettings.activeBuildTarget == BuildTarget.WSAPlayer)
			{
			PlayerSettings.WSA.SetCapability(PlayerSettings.WSACapability.InternetClientServer, true);
			}
			#else
			if (EditorUserBuildSettings.activeBuildTarget == BuildTarget.MetroPlayer)
			{
				PlayerSettings.Metro.SetCapability(PlayerSettings.MetroCapability.InternetClientServer, true);
			}
			#endif

		}
#endif
	}
	


    /// <summary>
    /// Editor class for <see cref="GameSparksRestApi"/>
    /// </summary>
    public class GameSparksRestWindow : EditorWindow
    {
    	string userName="";
    	string password="";
    	string shortCode="";
    	string fileName = "Select File";
    	string result="";

    	// Add menu item named "My Window" to the Window menu
    	/*[MenuItem("GameSparks/REST Api")]
    	public static void ShowWindow()
    	{
    		//Show existing window instance. If one doesn't exist, make one.
    		EditorWindow.GetWindow(typeof(GameSparksRestWindow));
    	}*/
    	
    	void OnGUI()
    	{
    		GUILayout.Label ("Binary Content", EditorStyles.boldLabel);
    		shortCode = EditorGUILayout.TextField ("ShortCode", shortCode);


    		EditorGUILayout.BeginHorizontal();
    			userName = EditorGUILayout.TextField ("User Name", userName);
    		password = EditorGUILayout.PasswordField ("Password", password);
    		EditorGUILayout.EndHorizontal();

    		EditorGUILayout.BeginHorizontal();

    		if(GUILayout.Button("GET")){
    			result = GameSparksRestApi.getDownloadable(GameSparksSettings.ApiKey, userName, password, shortCode);
    		}

    		if(GUILayout.Button("POST")){
    			result = GameSparksRestApi.setDownloadable(GameSparksSettings.ApiKey, userName, password, shortCode, fileName);
    		}

    		if(GUILayout.Button(fileName)){
    			fileName = EditorUtility.OpenFilePanel("Select file to upload", "", "");
    		}


    		EditorGUILayout.EndHorizontal();
    		GUILayout.Label ("REST Output", EditorStyles.label);
    		GUILayout.TextArea(result, EditorStyles.textField);
    	}
    }
}
