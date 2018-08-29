using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Sets background to skybox instead of green YUVMaterial while in Unity Editor mode
/// </summary>
public class SimulatorSetSkybox : MonoBehaviour {

    public Camera mCamera;

    void Start (){
        #if UNITY_EDITOR
        mCamera = GetComponentInParent<Camera> ();
        mCamera.clearFlags = CameraClearFlags.Skybox;
        #endif
    }
}
