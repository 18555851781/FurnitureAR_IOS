using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;

public class Model_IsRingActive : MonoBehaviour
{
    
	void Update () 
    {
        if(GetComponent<UnityARHitTestExample>().enabled == true)
        {
            this.transform.GetChild(1).gameObject.SetActive(true);
        }else
        {
            this.transform.GetChild(1).gameObject.SetActive(false);
        }
	}
}
