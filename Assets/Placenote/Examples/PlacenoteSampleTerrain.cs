using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlacenoteSampleTerrain : MonoBehaviour {

	/// <summary>
	/// Show the sample terrain when in Unity editor
	/// </summary>
	void Awake(){
		#if UNITY_EDITOR
		gameObject.transform.GetChild(0).gameObject.SetActive(true);
		gameObject.transform.GetChild(1).gameObject.SetActive(true);
		#else
		gameObject.transform.GetChild(0).gameObject.SetActive(false);
		gameObject.transform.GetChild(1).gameObject.SetActive(false);
		#endif
	}
}
