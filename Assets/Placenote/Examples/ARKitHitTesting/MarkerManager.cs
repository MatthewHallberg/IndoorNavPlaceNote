using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.XR.iOS;
using Newtonsoft.Json.Linq;
using Newtonsoft.Json;

namespace ARKitHitTesting
{

    // Classes to hold model information

    [System.Serializable]
    public class ModelInfo
    {
        public float px; //position.x
        public float py; //position.y 
        public float pz; //position.z 
    }

    [System.Serializable]
    public class ModelList
    {
        public ModelInfo[] models;
    }


     // Main Class for Managing Models

    public class MarkerManager : MonoBehaviour
    {

        public GameObject modelPrefab; // 3 prefabs are attached in the inspector

        public List<ModelInfo> ModelInfoList = new List<ModelInfo>();
        public List<GameObject> ModelObjList = new List<GameObject>();


        // Functions for adding and deleting models

        // Update function checks for hittest

        void Update()
        {

            // Check if the screen is touched

            #if UNITY_EDITOR

            // for simulation in the editor

            if (Input.GetMouseButtonDown(0))
            {
                RaycastHit hit;
                var ray = Camera.main.ScreenPointToRay(Input.mousePosition);

                if (Physics.Raycast(ray, out hit))
                {
                 
                       // create model info object
                    ModelInfo modelInfo = new ModelInfo();
                    modelInfo.px = hit.point.x;
                    modelInfo.py = hit.point.y;
                    modelInfo.pz = hit.point.z;

                    AddModel(modelInfo);

                }
            }

            #else

            // for hit testing on the device

            if (Input.touchCount > 0)
            {
                var touch = Input.GetTouch(0);
                if (touch.phase == TouchPhase.Ended)
                {
                    if (EventSystem.current.currentSelectedGameObject == null)
                    {

                        Debug.Log("Not touching a UI button. Moving on.");

                        // add new shape
                        var screenPosition = Camera.main.ScreenToViewportPoint(touch.position);
                        ARPoint point = new ARPoint
                        {
                            x = screenPosition.x,
                            y = screenPosition.y
                        };

                        // prioritize reults types
                        ARHitTestResultType[] resultTypes = {
                        ARHitTestResultType.ARHitTestResultTypeExistingPlaneUsingExtent,
                        //ARHitTestResultType.ARHitTestResultTypeExistingPlane,
                        //ARHitTestResultType.ARHitTestResultTypeEstimatedHorizontalPlane,
                        //ARHitTestResultType.ARHitTestResultTypeEstimatedVerticalPlane,
                        ARHitTestResultType.ARHitTestResultTypeFeaturePoint
                    };

                        foreach (ARHitTestResultType resultType in resultTypes)
                        {
                            if (HitTestWithResultType(point, resultType))
                            {
                                Debug.Log("Found a hit test result");
                                return;
                            }
                        }
                    }
                }
            }
            #endif
        }

        // The HitTest to Add a Marker

        bool HitTestWithResultType(ARPoint point, ARHitTestResultType resultTypes)
        {
            List<ARHitTestResult> hitResults = UnityARSessionNativeInterface.GetARSessionNativeInterface().HitTest(point, resultTypes);

            if (hitResults.Count > 0)
            {
                foreach (var hitResult in hitResults)
                {

                    Debug.Log("Got hit!");

                    Vector3 position = UnityARMatrixOps.GetPosition(hitResult.worldTransform);
                    Quaternion rotation = UnityARMatrixOps.GetRotation(hitResult.worldTransform);

                    //Transform to placenote frame of reference (planes are detected in ARKit frame of reference)
                    Matrix4x4 worldTransform = Matrix4x4.TRS(position, rotation, Vector3.one);
                    Matrix4x4? placenoteTransform = LibPlacenote.Instance.ProcessPose(worldTransform);

                    Vector3 hitPosition = PNUtility.MatrixOps.GetPosition(placenoteTransform.Value);
                    Quaternion hitRotation = PNUtility.MatrixOps.GetRotation(placenoteTransform.Value);

                    // create model info object
                    ModelInfo modelInfo = new ModelInfo();
                    modelInfo.px = hitPosition.x;
                    modelInfo.py = hitPosition.y;
                    modelInfo.pz = hitPosition.z;

                    AddModel(modelInfo);

                    return true;
                }
            }
            return false;
        }


        public void AddModel(ModelInfo modelInfo)
        {
            ModelInfoList.Add(modelInfo);

            GameObject newModel = Instantiate(modelPrefab);

            newModel.transform.position = new Vector3(modelInfo.px, modelInfo.py, modelInfo.pz);

            ModelObjList.Add(newModel);
        }

        public void ClearModels()
        {
            foreach (var obj in ModelObjList)
            {
                Destroy(obj);
            }
            ModelObjList.Clear();
            ModelInfoList.Clear();
        }


        // Helper Functions to convert models to and from JSON

        public JObject Models2JSON()
        {
            ModelList modelList = new ModelList();
            modelList.models = new ModelInfo[ModelInfoList.Count];
            for (int i = 0; i < ModelInfoList.Count; i++)
            {
                modelList.models[i] = ModelInfoList[i];
            }

            return JObject.FromObject(modelList);
        }

        public void LoadModelsFromJSON(JToken mapMetadata)
        {
            ClearModels();

            if (mapMetadata is JObject && mapMetadata["modelList"] is JObject)
            {
                ModelList modelList = mapMetadata["modelList"].ToObject<ModelList>();
                if (modelList.models == null)
                {
                    Debug.Log("no models added");
                    return;
                }

                foreach (var modelInfo in modelList.models)
                {
                    AddModel(modelInfo);
                }
            }

        }


    }

}