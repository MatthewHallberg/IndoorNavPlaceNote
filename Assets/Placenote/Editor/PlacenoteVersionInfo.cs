using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;


public class PlacenoteVersionInfo : EditorWindow
{
	private string versionString = "v1.6.1";

	//Add a menu item to version output
	[MenuItem("Placenote/About Placenote...")]
	static void VersionOutput()
	{
		PlacenoteVersionInfo window = ScriptableObject.CreateInstance<PlacenoteVersionInfo>();
		window.position = new Rect(Screen.width / 2, Screen.height / 2, 450, 100);
		window.ShowPopup();
	}

	//Add a menu item to link to slack.
	[MenuItem("Placenote/Help...")]
	static void HelpOutput()
	{
		Application.OpenURL("https://vertical.us11.list-manage.com/track/click?u=b63923e54766af5486b0555d4&id=f8c5cd33ec&e=e427dca59e");
	}

	//Describ the window that pops up when you ask for the version. 
	void OnGUI()
	{
		EditorGUILayout.LabelField("www.placenote.com\nPlacenote Version " + versionString + "\n" +
			"", EditorStyles.wordWrappedLabel);

		GUILayout.Space(5);
		if (GUILayout.Button("Done")) this.Close();

		GUILayout.Space(5);
		if (GUILayout.Button("Details.."))  {
			this.Close ();
			Application.OpenURL("https://github.com/Placenote/PlacenoteSDK-Unity/releases");
		}
	}
}

