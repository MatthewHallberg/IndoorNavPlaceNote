using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.XR.iOS;
using Newtonsoft.Json.Linq;
using Newtonsoft.Json;
using UnityEngine.SceneManagement;

/*========================================
 * Classes to hold shape information
======================================== */

[System.Serializable]
public class ShapeInfo
{
    public float px;
    public float py;
    public float pz;
    public float qx;
    public float qy;
    public float qz;
    public float qw;
    public int shapeType;
}

[System.Serializable]
public class ShapeList
{
    public ShapeInfo[] shapes;
}


/*========================================
 * Main Class for Managing Markers
======================================== */

public class ShapeManager : MonoBehaviour {

	public NavController navController;

	public List<GameObject> ShapePrefabs = new List<GameObject> ();
	[HideInInspector]
    public List<ShapeInfo> shapeInfoList = new List<ShapeInfo>();
	[HideInInspector]
    public List<GameObject> shapeObjList = new List<GameObject>();

	private GameObject lastShape;

	private bool shapesLoaded = false;
    //-------------------------------------------------
    // All shape management functions (add shapes, save shapes to metadata etc.
    //-------------------------------------------------

    public void AddShape(Vector3 shapePosition, Quaternion shapeRotation, bool isDestination)
    {
		int typeIndex = 0;//sphere
		if (isDestination) typeIndex = 1;//diamond

        ShapeInfo shapeInfo = new ShapeInfo();
        shapeInfo.px = shapePosition.x;
        shapeInfo.py = shapePosition.y;
        shapeInfo.pz = shapePosition.z;
        shapeInfo.qx = shapeRotation.x;
        shapeInfo.qy = shapeRotation.y;
        shapeInfo.qz = shapeRotation.z;
        shapeInfo.qw = shapeRotation.w;
		shapeInfo.shapeType = typeIndex.GetHashCode();
        shapeInfoList.Add(shapeInfo);

        GameObject shape = ShapeFromInfo(shapeInfo);
        shapeObjList.Add(shape);
    }

	public void AddDestinationShape () {
		//change last waypoint to diamond
		ShapeInfo lastInfo = shapeInfoList [shapeInfoList.Count - 1];
		lastInfo.shapeType = 1.GetHashCode ();
		GameObject shape = ShapeFromInfo(lastInfo);
		shape.GetComponent<DiamondBehavior> ().Activate ();
		//destroy last shape
		Destroy (shapeObjList [shapeObjList.Count - 1]);
		//add new shape
		shapeObjList.Add (shape);
	}

    public GameObject ShapeFromInfo(ShapeInfo info)
    {
		GameObject shape;
		Vector3 position = new Vector3 (info.px, info.py, info.pz);
		//if loading map, change waypoint to arrow
		if (SceneManager.GetActiveScene ().name == "ReadMap" && info.shapeType == 0) {
			shape = Instantiate (ShapePrefabs [2]);
			shape.GetComponent<Node> ().SetPosition (position);
		} else {
			shape = Instantiate (ShapePrefabs [info.shapeType]);
		}
		shape.tag = "waypoint";
		shape.transform.position = position;
		shape.transform.rotation = new Quaternion(info.qx, info.qy, info.qz, info.qw);
		shape.transform.localScale = new Vector3(.3f, .3f, .3f);

		return shape;
    }

    public void ClearShapes()
    {
        foreach (var obj in shapeObjList)
        {
            Destroy(obj);
        }
        shapeObjList.Clear();
        shapeInfoList.Clear();
    }


    public JObject Shapes2JSON()
    {
        ShapeList shapeList = new ShapeList();
        shapeList.shapes = new ShapeInfo[shapeInfoList.Count];
        for (int i = 0; i < shapeInfoList.Count; i++)
        {
            shapeList.shapes[i] = shapeInfoList[i];
        }

        return JObject.FromObject(shapeList);
    }

    public void LoadShapesJSON(JToken mapMetadata)
    {
		if (mapMetadata is JObject && mapMetadata ["shapeList"] is JObject) {
			ShapeList shapeList = mapMetadata ["shapeList"].ToObject<ShapeList> ();
			if (shapeList.shapes == null) {
				Debug.Log ("no shapes dropped");
				return;
			}
			if (!shapesLoaded) {
				shapesLoaded = true;
				Debug.Log ("SHAPES: " + shapeList.shapes.Length);
				foreach (var shapeInfo in shapeList.shapes) {
					shapeInfoList.Add (shapeInfo);
					GameObject shape = ShapeFromInfo (shapeInfo);
					shapeObjList.Add (shape);
				}
			}
			if (navController != null) {
				navController.InitializeNavigation ();
			}
		}
    }
}
