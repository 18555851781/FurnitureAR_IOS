using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Control;

namespace View
{
    public class View_OrderButton : MonoBehaviour
    {
        private GameObject Order_Plane;
        private GameObject Order_GoodsPlane;
        private Button Button_Balance;

        void Start()
        {
            Order_Plane = View_FindUI.Instance.Order_Plane;
            Order_GoodsPlane = View_FindUI.Instance.Order_GoodsPlane;
            Button_Balance = View_FindUI.Instance.Button_Balance;

            //  运行时关闭订单状态
            Order_Plane.SetActive(false);

            //  结算按钮注册方法
            Button_Balance.onClick.AddListener(delegate 
            {
                Control_SendMegToIOS.Instance.Control_AddListToShoppingCart();
            });
        }


    }
}
