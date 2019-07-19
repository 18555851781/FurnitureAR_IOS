using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.iOS;

namespace View
{
    public class View_FindUI : MonoBehaviour
    {
        public static View_FindUI Instance;
        public GameObject MainCanvas;           //  UI主视图
        public GameObject Goods_Plane;          //  商品界面Plane
        public GameObject Menu_Plane;           //  功能按钮Plane
        public GameObject Order_Plane;          //  订单Plane
        public GameObject CheckPlane_Plane;     //  检查地面遮罩
        public GameObject Order_GoodsPlane;     //  订单页面中商品的父物体

        public Button ShopButton;               //  打开商品界面按钮
        public Button DeleteButton;             //  删除按钮
        public Button OrderButton;              //  打开订单界面按钮
        public Button ExitButton;               //  退出Windos按钮

        public Text Goods_AllMoney;             //  订单页面下方总金额
        public Button Button_Balance;            //  订单页面下方结算按钮
        public Toggle Button_AllGoods;          //  订单页面下方全选按钮


        private void Awake()
        {
            Instance = this;

            //  获取视图中的物体
            MainCanvas = GameObject.Find("Canvas");
            Goods_Plane = GameObject.Find("Panel_Goods");
            Menu_Plane = GameObject.Find("Panel_Menu");
            Order_Plane = GameObject.Find("Panel_Order");
            CheckPlane_Plane = GameObject.Find("Panel_Check");
            Order_GoodsPlane = GameObject.Find("Goods_Order");

            Goods_AllMoney = GameObject.Find("Goods_AllMoney").GetComponent<Text>();
            Button_Balance = GameObject.Find("Button_Balance").GetComponent<Button>();
            Button_AllGoods = GameObject.Find("Button_AllGoods").GetComponent<Toggle>();

            ShopButton = Menu_Plane.transform.GetChild(0).GetComponent<Button>();
            DeleteButton = Menu_Plane.transform.GetChild(1).GetComponent<Button>();
            OrderButton = Menu_Plane.transform.GetChild(2).GetComponent<Button>();
            ExitButton = Menu_Plane.transform.GetChild(3).GetComponent<Button>();


            ////  判断IOS设备型号  初始化各版本UI数据

            //var IOS = Device.generation;
            //if(IOS == DeviceGeneration.iPhoneX)
            //{
            //    GameTool.GoodsPlane_Display = new Vector2(-400, 0);
            //    GameTool.GoodsPlane_Undisplay = new Vector2(200, 0);
            //}
            //else if(IOS == DeviceGeneration.iPhone6SPlus || IOS == DeviceGeneration.iPhone6S || IOS==DeviceGeneration.iPhone7||IOS == DeviceGeneration.iPhone7Plus ||IOS == DeviceGeneration.iPhone8 || IOS == DeviceGeneration.iPhone8Plus)
            //{
            //    GameTool.GoodsPlane_Display = new Vector2(-640, 0);
            //    GameTool.GoodsPlane_Undisplay = new Vector2(0, 0);

            //}
        }
    }
}
