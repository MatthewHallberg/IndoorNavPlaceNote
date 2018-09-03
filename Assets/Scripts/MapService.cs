using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GameSparks.Core;
using System;

public class MapService : MonoBehaviour {

	/// <summary>
	/// This class handles communication with gamesparks for
	/// removing, loading, and writing new messages. New Message
	/// objects are instantiated here.
	/// </summary>
	private static MapService _instance;
	public static MapService Instance { get { return _instance; } } 

	void Awake(){
		//this object is not destroyed
		_instance = this;
	}

	IEnumerator Start () {
		yield return new WaitForSeconds (1f);
	}

	public string LoadMap(string name, Action<String> callback){
		string mapID = string.Empty;
		new GameSparks.Api.Requests.LogEventRequest()
		              
		     .SetEventKey("LOAD_MAP")
		     .SetEventAttribute ("NAME", name)
			 .Send((response) => {
			
			if (!response.HasErrors) {
				Debug.Log("Received Player Data From GameSparks...");
				mapID = response.ScriptData.GetString ("PLACENOTE_ID");
				print ("ID FROM GAMESPARKS: " + mapID);
				callback (mapID);
			} else {
				Debug.Log("Error Loading Message Data...");
			}
		});
		return mapID;
	}

	public void SaveMap(string name, string placenoteID){
		new GameSparks.Api.Requests.LogEventRequest ()

			.SetEventKey ("SAVE_MAP")
		    .SetEventAttribute ("NAME", name)
		    .SetEventAttribute ("PLACENOTE_ID", placenoteID)
			.Send ((response) => {
			
			if (!response.HasErrors) {
				Debug.Log ("Map Name Saved To GameSparks...");
			} else {
				Debug.Log ("Error Saving Map Name...");
			}
		});
	}
}
