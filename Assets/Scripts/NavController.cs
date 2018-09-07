using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class NavController : MonoBehaviour {

	private Transform destination;

	/// <summary>
	/// Returns the closest node to the given position.
	/// </summary>
	/// <returns>The closest node.</returns>
	/// <param name="point">Point.</param>
	Transform ReturnClosestTransform (List<Transform> nodes,Vector3 point) {
		float minDist = Mathf.Infinity;
		Transform closestNode = null;
		foreach (Transform node in nodes) {
			float dist = Vector3.Distance (node.position, point);
			if (dist < minDist) {
				closestNode = node;
				minDist = dist;
			}
		}
		return closestNode;
	}

	public void InitializeNavigation () {
		//get destination node
		destination = FindObjectOfType<DiamondBehavior> ().transform;
		if (destination == null) {
			Debug.Log ("DESTINATION NOT FOUND!!");
			return;
		}
		//get all nodes
		List<Transform> nodes = new List<Transform> ();
		foreach (Node node in FindObjectsOfType<Node>())
			nodes.Add (node.transform);
		//find closest node to camera and activate
		Transform closestNodeToCam = ReturnClosestTransform (nodes,transform.position);
		closestNodeToCam.GetComponent<WayPointBehavior> ().SetState (WayPointBehavior.NavMode.NAVIGATING);
	}

	private void OnTriggerEnter (Collider other) {
		if (other.CompareTag ("waypoint") && other.GetComponent<WayPointBehavior> () != null) {
			other.GetComponent<WayPointBehavior> ().SetState (WayPointBehavior.NavMode.NAVIGATING);
			other.GetComponent<Node> ().ActivateNeighbor ();
		}
	}

	private void OnTriggerExit (Collider other) {
		if (other.CompareTag ("waypoint") && other.GetComponent<WayPointBehavior> () != null) {
			other.GetComponent<WayPointBehavior> ().SetState (WayPointBehavior.NavMode.NONE);
			other.GetComponent<Node> ().ActivateNeighbor ();
		}
	}
}
