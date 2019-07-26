using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;
using View;

namespace Control
{
    public class Control_Exit : MonoBehaviour
    {
        public static Control_Exit Instance;
        private void Awake()
        {
            Instance = this;
        }

        //[DllImport("__Internal")]
        //private static extern void QuitUnity();

        public void Exit()
        {
            //  清空数组 数值归零
            GameTool.ClearList(Model_Data.Instance.Model_Clone);
            GameTool.ClearList(Model_Data.Instance.List_OrderObj);
            Model_Data.Instance.List_JsonMap.Clear();
            View_FindUI.Instance.Goods_AllMoney.text = "0";
            //QuitUnity();
        }
    }
}
