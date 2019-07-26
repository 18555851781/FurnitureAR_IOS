using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;
using LitJson;
using View;

namespace Control
{
    public class Control_SendMegToIOS : MonoBehaviour
    {
        public static Control_SendMegToIOS Instance;

        private void Awake()
        {
            Instance = this;
        }

        ////  Xcode调用的方法
        //[DllImport("__Internal")]
        //private static extern void AddListToShoppingCart(string Message);

        //  数据传递
        public void Control_AddListToShoppingCart()
        {
            foreach (var item in Model_Data.Instance.List_GoodsID.Keys)
            {
                GameTool.OrderMessageToJson(item);
            }
            //GameTool.OrderMessageToJson("Chair");
            //GameTool.OrderMessageToJson("Table");
            //GameTool.OrderMessageToJson("Sofa");

            string Json = JsonMapper.ToJson(Model_Data.Instance.List_JsonMap);
            //  清空数组 数值归零
            GameTool.ClearList(Model_Data.Instance.Model_Clone);
            GameTool.ClearList(Model_Data.Instance.List_OrderObj);
            Model_Data.Instance.List_JsonMap.Clear();
            View_FindUI.Instance.Goods_AllMoney.text = "0";

            Debug.Log(Json);
            //AddListToShoppingCart(Json);

        }

    }
}
