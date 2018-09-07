using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Node : MonoBehaviour {
	
	[HideInInspector]
	public WayPointBehavior wayPointNeighbor;

	private Transform destination;
	private Transform closest;
	private bool activateDestination = false;
	// Use this for initialization
	void Awake () {
		if (GetComponent<DiamondBehavior> () != null)
			return;
		destination = FindObjectOfType<DiamondBehavior> ().transform;
		//find all neighbors
		List<Transform> neighbors = new List<Transform> ();
		Collider [] hitColliders = Physics.OverlapSphere (transform.position, 1.1f);
		int i = 0;
		while (i < hitColliders.Length) {
			if (hitColliders [i].CompareTag ("waypoint") && hitColliders [i].name != this.name) {
				neighbors.Add (hitColliders [i].transform);
			}
			i++;
		}
		//find closest neighbor to destination
		closest = ClosestNeighborToDestination (neighbors);
		wayPointNeighbor = closest.GetComponent<WayPointBehavior> ();
		if (wayPointNeighbor != null) {
			transform.LookAt (closest);
		} else if (closest == destination) {
			transform.LookAt (destination);
			activateDestination = true;
		}
	}

	public void ActivateNeighbor () {
		if (wayPointNeighbor != null) {
			wayPointNeighbor.SetState (WayPointBehavior.NavMode.NAVIGATING);
		} else if (activateDestination){
			GetComponent<WayPointBehavior> ().SetState (WayPointBehavior.NavMode.NAVIGATING);
			destination.GetComponent<DiamondBehavior> ().Activate ();
		}
	}

	Transform ClosestNeighborToDestination (List<Transform> nodes) {
		float minDist = Mathf.Infinity;
		Transform closestNode = null;
		foreach (Transform node in nodes) {
			if (node == destination) {
				return node;
			}
			float dist = Vector3.Distance (node.position, destination.position);
			 if (dist < minDist) {
				closestNode = node;
				minDist = dist;
			}
		}
		return closestNode;
	}
}
