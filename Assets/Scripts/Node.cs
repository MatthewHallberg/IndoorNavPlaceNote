using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class Node : MonoBehaviour {

	private Transform destination;
	private Vector3 pos;
	private bool visited = false;

	private void Awake () {
		Activate (false);
#if UNITY_EDITOR
		pos = transform.position;
#endif
	}

	public void Activate (bool active) {
		transform.GetChild (0).gameObject.SetActive (active);
		//if destination is not available return
		destination = FindObjectOfType<DiamondBehavior> ().transform;
		if (destination == null)
			return;
		//turn arrow to look at destination
		if (active) {
			Transform closest = GetNeighbor ();
			if (closest != null) {
				transform.LookAt (closest);
			} else {
				transform.LookAt (destination);
			}
		} 
	}

	public void SetPosition (Vector3 position) {
		pos = position;
	}

	public bool getVisited () {
		return visited;
	}

	public Vector3 GetPosition () {
		return pos;
	}

	public void ActivateNeighbor () {
		if (!visited) {
			visited = true;
			print ("ACtivating Neighbor: " + gameObject.name);
			//if this is destination node return
			if (GetComponent<DiamondBehavior> () != null)
				return;
			destination = FindObjectOfType<DiamondBehavior> ().transform;

			Transform closest = GetNeighbor ();

			//find closest neighbor to destination
			if (closest == destination) {
				destination.GetComponent<DiamondBehavior> ().Activate ();
			} else if (closest != null) {
				//activate neighbor arrow
				closest.GetComponent<Node> ().Activate (true);
			}
			//activate this arrow
			Activate (true);
		}
	}

	Transform GetNeighbor () {
		Transform closestArrow = null;
		//find all neighbors
		List<Transform> closestNeighbors = new List<Transform> ();
		foreach (Node node in FindObjectsOfType<Node> ()) {
			if (Vector3.Distance (node.GetPosition (), pos) < 1.2f && !node.getVisited ()) {
				closestNeighbors.Add (node.transform);
			}
		}
		//find closest neighbor to destination
		if (closestNeighbors.Contains (destination)) {
			closestArrow = destination;
		} else if (closestNeighbors.Count > 0) {
			closestArrow = ClosestNeighborToDestination (closestNeighbors);
		}
		return closestArrow;
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
