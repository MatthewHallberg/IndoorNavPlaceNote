using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

public class GameSparksPopUp : EditorWindow {
	private static Texture2D logo;

	static public void Init()
	{
		GameSparksPopUp window = (GameSparksPopUp)EditorWindow.GetWindowWithRect(typeof(GameSparksPopUp), new Rect((Screen.width - 350) / 2, (Screen.height - 265) / 2, 350, 265), false, "GameSparksSDK");
	
		window.Focus();
	}

	void OnEnable()
	{
		logo = (Texture2D)Resources.Load("GameSparksLogo", typeof(Texture2D));
	}

	void OnGUI()
	{
		GUIStyle style = new GUIStyle(EditorStyles.wordWrappedLabel);

		style.alignment = TextAnchor.MiddleCenter;

		GUILayout.Label(logo);

		EditorGUILayout.LabelField("Welcome to GameSparks!", style);

		GUILayout.Space(20);

		EditorGUILayout.LabelField("To take advantage of this plugin, you must first register", style);
		EditorGUILayout.LabelField("on the GameSparks platform. Here you will be able to build", style);
		EditorGUILayout.LabelField("and configure your game.", style);

		GUILayout.Space(30);

		if (GUILayout.Button("Register Now")) {
			Close();

			Application.OpenURL("https://auth.gamesparks.net/register.htm?utm_source=Unity%20SDK&utm_medium=Unity%20Editor&utm_campaign=Unity%20Asset%20Store");
		}

		GUILayout.Space(10);
	}
}
