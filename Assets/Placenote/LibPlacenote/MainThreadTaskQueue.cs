using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;
using System.Collections.Generic;

public class MainThreadTaskQueue: MonoBehaviour
{
	public delegate void Delegate ();

	private static MainThreadTaskQueue sInstance;
	private List<Delegate> delegates = new List<Delegate> ();

	void Awake ()
	{
		sInstance = this;
	}

	void Update ()
	{
		while (delegates.Count > 0) {
			try {
				delegates [0].Invoke ();
			} catch (System.Exception e) {
				Debug.LogException (e);
			}

			lock (delegates) {
				delegates.RemoveAt (0);
			}
		}
	}


	public static void InvokeOnMainThread (Delegate d)
	{
		if (sInstance == null) {
			Debug.LogError ("MainThreadTaskQueue not initialized, please attach it to an active game object enabled.");
			return;
		}

		lock (sInstance.delegates) {
			sInstance.delegates.Add (d);
		}
	}
}

