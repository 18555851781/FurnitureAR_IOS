using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;

namespace Control
{
    public class Control_DeleteObj : MonoBehaviour
    {
        public static Control_DeleteObj Instance;

        private void Awake()
        {
            Instance = this;
        }

        public void DeleteObj()
        {
            //  删除物体的同时将物体从数组中移除

            for (int i = 0; i < Model_Data.Instance.Model_Clone.Count; i++)
            {
                if (Model_Data.Instance.Model_Clone[i].GetComponent<UnityARHitTestExample>().enabled == true)
                {
                    Destroy(Model_Data.Instance.Model_Clone[i]);

                    Model_Data.Instance.Model_Clone.Remove(Model_Data.Instance.Model_Clone[i]);
                }
            }
        }

    }
}
