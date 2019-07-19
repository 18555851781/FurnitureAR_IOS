using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;
using Model;

namespace Control
{
    public class Control_ChooseObj : MonoBehaviour
    {

        void Update()
        {
            //  射线检测物体返回Gameobject
            if (Input.GetMouseButtonDown(0))
            {
                GameObject RayCastObj = GameTool.RayCastToTouch();

                if(RayCastObj!=null && RayCastObj.GetComponent<UnityARHitTestExample>().enabled == false)
                {
                    GameTool.ControlObj_Exchange(RayCastObj, Model_Data.Instance.Model_Clone);
                }
            }

        }

     }
}
