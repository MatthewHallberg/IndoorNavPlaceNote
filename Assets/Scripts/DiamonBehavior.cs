using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DiamonBehavior : MonoBehaviour {

	Vector3 rotate = new Vector3 (0, 1, 0);
	
	// Update is called once per frame
	void Update () {
		transform.eulerAngles += rotate;
	}
}
