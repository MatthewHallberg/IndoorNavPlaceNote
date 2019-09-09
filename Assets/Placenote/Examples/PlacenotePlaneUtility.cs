using System;
using System.Collections.Generic;
using System.Linq;
using Collections.Hybrid.Generic;
using UnityEngine.XR.iOS;
using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using System.Runtime.InteropServices;
using System.IO;
using Newtonsoft.Json.Linq;
using Newtonsoft.Json;

namespace ARKitPlaneSaver
{
    public class PlacenotePlaneUtility
    {
        private MeshCollider meshCollider; //declared to avoid code stripping of class
        private MeshFilter meshFilter; //declared to avoid code stripping of class
        private static GameObject planePrefab = null;

        public static void InitializePlanePrefab(GameObject go)
        {
            planePrefab = go;
        }

        public static GameObject CreatePlaneInScene(ARPlaneAnchor arPlaneAnchor)
        {
            GameObject plane;
            
            if (planePrefab != null)
            {
                plane = GameObject.Instantiate(planePrefab);
            }
            else
            {
                plane = new GameObject(); //put in a blank gameObject to get at least a transform to manipulate
            }

            plane.name = arPlaneAnchor.identifier;

            PlacenotePlaneMeshRender ppmr = plane.GetComponent<PlacenotePlaneMeshRender>();
            if (ppmr != null)
            {
                ppmr.InitiliazeMesh(arPlaneAnchor);
            }

            return UpdatePlaneWithAnchorTransform(plane, arPlaneAnchor);
        }

        public static GameObject CreatePlaneInScene(ARPlaneMesh arPlane)
        {
            GameObject plane;
            if (planePrefab != null)
            {
                plane = GameObject.Instantiate(planePrefab);

            }
            else
            {
                plane = new GameObject(); //put in a blank gameObject to get at least a transform to manipulate
            }

            plane.name = arPlane.id;

            PlacenotePlaneMeshRender ppmr = plane.GetComponent<PlacenotePlaneMeshRender>();
            if (ppmr != null)
            {
                ppmr.InitializeMesh(arPlane);
            }

            return UpdatePlaneWithAnchorTransform(plane, arPlane);

        }


        public static GameObject UpdatePlaneWithAnchorTransform(GameObject plane, ARPlaneAnchor arPlaneAnchor)
        {

            //do coordinate conversion from ARKit to Unity
            plane.transform.position = UnityARMatrixOps.GetPosition(arPlaneAnchor.transform);
            plane.transform.rotation = UnityARMatrixOps.GetRotation(arPlaneAnchor.transform);

            PlacenotePlaneMeshRender ppmr = plane.GetComponent<PlacenotePlaneMeshRender>();
            if (ppmr != null)
            {
                ppmr.UpdateMesh(arPlaneAnchor);
            }


            MeshFilter mf = plane.GetComponentInChildren<MeshFilter>();

            if (mf != null)
            {
                if (ppmr == null)
                {
                    //since our plane mesh is actually 10mx10m in the world, we scale it here by 0.1f
                    mf.gameObject.transform.localScale = new Vector3(arPlaneAnchor.extent.x * 0.1f, arPlaneAnchor.extent.y * 0.1f, arPlaneAnchor.extent.z * 0.1f);

                    //convert our center position to unity coords
                    mf.gameObject.transform.localPosition = new Vector3(arPlaneAnchor.center.x, arPlaneAnchor.center.y, -arPlaneAnchor.center.z);
                }

            }
            return plane;
        }

        public static GameObject UpdatePlaneWithAnchorTransform(GameObject plane, ARPlaneMesh arPlane)
        {

            plane.transform.position = UnityARMatrixOps.GetPosition(arPlane.transform);
            plane.transform.rotation = UnityARMatrixOps.GetRotation(arPlane.transform);

            PlacenotePlaneMeshRender ppmr = plane.GetComponent<PlacenotePlaneMeshRender>();
            if (ppmr != null)
            {
                ppmr.UpdateMesh(arPlane);
            }


            MeshFilter mf = plane.GetComponentInChildren<MeshFilter>();

            if (mf != null)
            {
                if (ppmr == null)
                {

                    //since our plane mesh is actually 10mx10m in the world, we scale it here by 0.1f
                    mf.gameObject.transform.localScale = new Vector3(arPlane.extent.x * 0.1f, arPlane.extent.y * 0.1f, arPlane.extent.z * 0.1f);

                    //convert our center position to unity coords
                    mf.gameObject.transform.localPosition = new Vector3(arPlane.center.x, arPlane.center.y, -arPlane.center.z);
                }

            }

            return plane;
        }



    }
}
