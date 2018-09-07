using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WayPointBehavior : MonoBehaviour {

	public GameObject circle, arrow;

	public enum NavMode {
		NAVIGATING,
		CREATING_MAP,
		NONE
	}

	private void Awake () {
		SetState (NavMode.NONE);
	}

	public void SetState (NavMode mode) {
		if (mode == NavMode.CREATING_MAP) {
			circle.SetActive (true);
		} else if (mode == NavMode.NAVIGATING) {
			arrow.SetActive (true);
		} else {
			circle.SetActive (false);
			arrow.SetActive (false);
		}
	}
}
