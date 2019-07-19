using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.XR.iOS;
using Model;

namespace Control
{
    

    public class Control_CloneObj : MonoBehaviour
    {
        public static Control_CloneObj Instance;

        GameObject LoadObj;

        private void Awake()
        {
            Instance = this;
        }

        //  通过按钮的名称去加载需要加载的物体

        public void CloneObj()
        {

            LoadObj = Model_Data.Instance.List_LoadObj.Find(delegate (GameObject Obj)
            {
                return Obj.name == EventSystem.current.currentSelectedGameObject.name;
            });

            if(LoadObj!=null)
            {
                GameObject InsObj = Instantiate(LoadObj, Vector3.zero, Quaternion.identity);

                //  将Clone出来的物体放入到数组中
                Model_Data.Instance.Model_Clone.Add(InsObj);

                //  遍历数组  将之前加载出来的物体上的控制脚本状态状态设为false 
                GameTool.ControlObj_Exchange(InsObj, Model_Data.Instance.Model_Clone);
            }
        }

        //  按钮按下时清除未被移动的物体

        public void ClearNotMoveObj()
        {
            //foreach (var item in Model_Data.Instance.Model_Clone)
            //{
            //    if(item != null)
            //    {
            //        if(item.transform.position == new Vector3(0,0,0))
            //        {
            //            Model_Data.Instance.Model_Clone.Remove(item);
            //            Destroy(item);
            //        }
            //    }
            //}

            for (int i = 0; i < Model_Data.Instance.Model_Clone.Count; i++)
            {

                if(Model_Data.Instance.Model_Clone[i]!=null)
                {

                    if(Model_Data.Instance.Model_Clone[i].transform.position == new Vector3(0, 0, 0))
                    {
                        Destroy(Model_Data.Instance.Model_Clone[i]);
                        Model_Data.Instance.Model_Clone.Remove(Model_Data.Instance.Model_Clone[i]);
                    }
                }
            }

        }
    }
}
