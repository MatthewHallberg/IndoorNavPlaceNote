using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class NavController : MonoBehaviour {

	public AStar AStar;
	private Transform destination;
	private bool _initialized = false;
	private List<Node> path = new List<Node> ();
	private int currNodeIndex = 0;

	private void Start () {
#if UNITY_EDITOR
		InitializeNavigation ();
#endif
	}

	/// <summary>
	/// Returns the closest node to the given position.
	/// </summary>
	/// <returns>The closest node.</returns>
	/// <param name="point">Point.</param>
	Node ReturnClosestNode (Node[] nodes,Vector3 point) {
		float minDist = Mathf.Infinity;
		Node closestNode = null;
		foreach (Node node in nodes) {
			float dist = Vector3.Distance (node.pos, point);
			if (dist < minDist) {
				closestNode = node;
				minDist = dist;
			}
		}
		return closestNode;
	}

	public void InitializeNavigation () {
		StartCoroutine (DelayNavigation ());
	}

	IEnumerator DelayNavigation () {
		yield return new WaitForSeconds (.5f);

		if (!_initialized) {
			_initialized = true;
			Node [] allNodes = FindObjectsOfType<Node> ();
			Node closestNode = ReturnClosestNode (allNodes, transform.position);
			Node target = FindObjectOfType<DiamondBehavior> ().GetComponent<Node> ();
			//set neighbor nodes for all nodes
			foreach (Node node in allNodes) {
				node.FindNeighbors ();
			}
			//get path from A* algorithm
			path = GetComponent<AStar> ().FindPath (closestNode, target, allNodes);

			//set next nodes 
			for (int i = 0; i < path.Count - 1; i++){
				path [i].NextInList = path [i + 1]; 
			}
			//activate first node
			path [0].Activate (true);
		}
	}

	private void OnTriggerEnter (Collider other) {
		if (other.CompareTag ("waypoint") && _initialized) {
			currNodeIndex = path.IndexOf (other.GetComponent<Node> ());
			if (currNodeIndex < path.Count - 1) {
				path [currNodeIndex + 1].Activate (true);
			}
		}
	}
}
