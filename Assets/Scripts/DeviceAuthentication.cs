using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class DeviceAuthentication : MonoBehaviour {
	/// <summary>
	/// Authenticates our device with GameSparks. Once authenticated, we show the UI
	/// and load initial messages. 
	/// </summary>

	public UnityEvent authenticatedEvent;
	public UnityEvent failureEvent;

	void Start () {
		StartCoroutine (DelayAuthenticateRoutine ());
	}

	IEnumerator DelayAuthenticateRoutine () {

		yield return new WaitForSeconds (1f);

		new GameSparks.Api.Requests.DeviceAuthenticationRequest ().Send ((response) => {
			if (!response.HasErrors) {
				Debug.Log ("Device Authenticated...");
				//enable UI if authenticated
				authenticatedEvent.Invoke ();
			} else {
				Debug.Log ("Error Authenticating Device...");
				failureEvent.Invoke ();
			}
		});
	}
}
