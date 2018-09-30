using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DiamondBehavior : MonoBehaviour {

    Vector3 rotate = new Vector3(0, 1, 0);
    public GameObject diamond;

    private void Awake() {
        Activate(false);
    }

    // Update is called once per frame
    void Update() {
        transform.eulerAngles += rotate;
    }

    public void Activate(bool active) {
        diamond.SetActive(active);
    }
}
