using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class KeyboardMover : MonoBehaviour {

	[SerializeField] float translateSpeed = 2.0f;
	[SerializeField] float rotateSpeed = 90f;
	[SerializeField] float randomOffset = 0.01f;
 	[SerializeField] bool enableSimulatedHandshake = false;

	void Awake () {
		#if UNITY_EDITOR
		enabled = true;
		#else
		enabled = false;
		#endif
	}

	void Update () {
		if (Input.GetKey(KeyCode.W)) {
			transform.Translate (Vector3.forward * translateSpeed * Time.deltaTime);
		}
		if (Input.GetKey(KeyCode.A))	{
			transform.Translate (Vector3.left * translateSpeed * Time.deltaTime);
		}
		if (Input.GetKey(KeyCode.S))	{
			transform.Translate (Vector3.back * translateSpeed * Time.deltaTime);
		}
		if (Input.GetKey(KeyCode.D)) {
			transform.Translate (Vector3.right * translateSpeed * Time.deltaTime);
		}
		if (Input.GetKey(KeyCode.R)) {
			transform.Translate (Vector3.up * translateSpeed * Time.deltaTime);
		}
		if (Input.GetKey(KeyCode.F)) {
			transform.Translate (Vector3.down * translateSpeed * Time.deltaTime);
		}
		/*
		if (Input.GetKey(KeyCode.UpArrow)) {
			transform.Rotate (Vector3.left * rotateSpeed * Time.deltaTime);
		}
		if (Input.GetKey(KeyCode.DownArrow))	{
			transform.Rotate (Vector3.right * rotateSpeed * Time.deltaTime);
		}
		*/
		
		if (Input.GetKey(KeyCode.RightArrow)) {
			transform.Rotate (Vector3.up * rotateSpeed * Time.deltaTime);
		}
		if (Input.GetKey(KeyCode.LeftArrow))	{
			transform.Rotate (Vector3.down * rotateSpeed * Time.deltaTime);
		}

		if (enableSimulatedHandshake)
		    transform.Translate (Random.onUnitSphere * Random.Range (0f, randomOffset));

		transform.eulerAngles = Vector3.Scale (transform.eulerAngles, new Vector3 (1, 1, 0));
	}
}
