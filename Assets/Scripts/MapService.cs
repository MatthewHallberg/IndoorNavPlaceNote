
	using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GameSparks.Core;

public class MapService : MonoBehaviour {

	/// <summary>
	/// This class handles communication with gamesparks for
	/// removing, loading, and writing new messages. New Message
	/// objects are instantiated here.
	/// </summary>
	private static MapService _instance;
	public static MapService Instance { get { return _instance; } } 

	public Transform mapRootTransform;

	public GameObject messagePrefabAR;

	void Awake(){
		//this object is not destroyed
		_instance = this;
	}

	IEnumerator Start () {
		yield return new WaitForSeconds (1f);
//		SaveMap ("blah", "tits");
//		yield return new WaitForSeconds (2f);
//		LoadMap ("blah");
	}

	public void LoadMap(string name){
		new GameSparks.Api.Requests.LogEventRequest()
		              
		     .SetEventKey("LOAD_MAP")
		     .SetEventAttribute ("NAME", name)
			 .Send((response) => {
			
			if (!response.HasErrors) {
				Debug.Log("Received Player Data From GameSparks...");
				string data = response.ScriptData.GetString ("PLACENOTE_ID");
				Debug.Log ("MAP: " + data);
			} else {
				Debug.Log("Error Loading Message Data...");
			}
		});
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
