using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


/// <summary>
/// Singleton to show toast messages
/// </summary>
public class ToastManager : MonoBehaviour {
	[SerializeField] Text toastText;
	private static ToastManager sInstance;

	void Awake() {
		sInstance = this;
	}

	// Use this for initialization
	void Start () {
		gameObject.SetActive (false);
	}

	// Update is called once per frame
	void Update () {
		
	}

	public static void ShowToast(string message, float duration) {
		sInstance.gameObject.SetActive (true);
		sInstance.toastText.text = message;
		sInstance.Invoke ("HideToast", duration);
	}

	void HideToast() {
		gameObject.SetActive (false);
	}
}
