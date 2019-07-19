using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Control;

namespace View
{
    public class View_MenuButton : MonoBehaviour
    {

        private GameObject GoodsButton_Plane;
        private GameObject OrderButton_Plane;

        private  Button ShopButton;           //  商品按钮
        private  Button DeleteButton;         //  删除按钮
        private  Button OrderButton;          //  订单按钮
        private Button ExitButton;

        //  按钮绑定加载事件

        private void Start()
        {
            GoodsButton_Plane = View_FindUI.Instance.Goods_Plane;
            OrderButton_Plane = View_FindUI.Instance.Order_Plane;
            ShopButton = View_FindUI.Instance.ShopButton;
            DeleteButton = View_FindUI.Instance.DeleteButton;
            OrderButton = View_FindUI.Instance.OrderButton;       //  获取订单按钮
            ExitButton = View_FindUI.Instance.ExitButton;
 
            //  绑定商品菜单和订单菜单的显示和消失事件
            ShopButton.onClick.AddListener(delegate ()
            {
                //  Shop页面弹出时关闭其他页面
                GameTool.PlaneMove(GoodsButton_Plane, GameTool.GoodsPlane_Display);
                OrderButton_Plane.SetActive(false);
                //  清除未被移动的物体
                Control_CloneObj.Instance.ClearNotMoveObj();
            });

            //  绑定订单按钮需要的事件
            OrderButton.onClick.AddListener(delegate ()
            {
                //  将Order的状态改变
                OrderButton_Plane.SetActive(!OrderButton_Plane.activeSelf);
                //  进行初次价格计算以及订单初始化
                Control_OrederObj.Instance.OrderButtonInput();
                Control_OrederObj.Instance.CountAllMoney(true);
            });

            //  绑定删除物体事件
            DeleteButton.onClick.AddListener(delegate ()
            {
                Control_DeleteObj.Instance.DeleteObj();
            });

            ExitButton.onClick.AddListener(delegate ()
            {
                Control_Exit.Instance.Exit();
            });

        }
    }
}
