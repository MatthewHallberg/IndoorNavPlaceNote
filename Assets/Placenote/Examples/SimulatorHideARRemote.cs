using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;

/// <summary>
/// Disables ARKitRemoteConnection in Unity Editor.
/// Mostly useful just to hide the GUI message that says to connect player in console.
/// </summary>
public class SimulatorHideARRemote : MonoBehaviour {
    #if UNITY_EDITOR
    public bool DisableARRemote = true;
    bool runOnce = true;
    ARKitRemoteConnection[] ARKitWorldTrackingList;

    void Update (){
        if (runOnce && DisableARRemote)
        {
            runOnce = false;
            ARKitWorldTrackingList = Object.FindObjectsOfType<ARKitRemoteConnection> ();
            foreach (ARKitRemoteConnection ARKitWorldTracking in ARKitWorldTrackingList)
            {
                ARKitWorldTracking.gameObject.SetActive (false);
            } 
        }
    }
    #endif
}
