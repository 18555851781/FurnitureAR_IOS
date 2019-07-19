using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using View;
using UnityEngine.UI;
using System;

namespace Control
{
    public class Control_OrederObj : MonoBehaviour
    {
        public static Control_OrederObj Instance;
        private GameObject Order_Plane;
        private GameObject Order_GoodsPlane;
        private Text Goods_AllMoney;             //  订单页面下方总金额
        private Toggle Button_AllGoods;          //  订单页面下方全选按钮
        private float MoneyAll;                  //  记录当前总价

        private void Awake()
        {
            Instance = this;
        }
        private void Start()
        {
            Order_Plane = View_FindUI.Instance.Order_Plane;
            Order_GoodsPlane = View_FindUI.Instance.Order_GoodsPlane;
            Goods_AllMoney = View_FindUI.Instance.Goods_AllMoney;
            Button_AllGoods = View_FindUI.Instance.Button_AllGoods;

            //  计算总价按钮勾选  方法注册
            Button_AllGoods.onValueChanged.AddListener(CheckAllMoney);
           
        }

        //  Order按钮按下时执行的方法
        public void OrderButtonInput()
        {
            if (Order_Plane.activeSelf == true)
            {
                //  将家具的Order信息Load出来
                foreach (var ModelObj in Model_Data.Instance.Model_Clone)
                {
                    if (!GameTool.OrderIsIncludeObj(Order_GoodsPlane,ModelObj.transform.tag + "_Order"))
                    {
                        GameObject Goods_Order = Instantiate(Resources.Load<GameObject>("Prefab_OrderGoods"));
                        Goods_Order.transform.name = ModelObj.transform.tag + "_Order";
                        //  初始化order信息
                        ResetInformation(Goods_Order,ModelObj);

                        Model_Data.Instance.List_OrderObj.Add(Goods_Order);
                    }
                    else
                    {
                        GameObject.Find(ModelObj.transform.tag + "_Order").transform.GetChild(2).GetComponent<Text>().text = GameTool.FindGameObjNumWithTag(ModelObj.transform.tag).ToString();
                    }
                }

                //  删除不必要的家具订单

                for (int i = 0; i < Model_Data.Instance.List_OrderObj.Count; i++)
                {
                    if (GameObject.FindWithTag(Model_Data.Instance.List_OrderObj[i].name.Substring(0, Model_Data.Instance.List_OrderObj[i].name.Length - 6)) == null)
                    {
                        Destroy(Model_Data.Instance.List_OrderObj[i]);

                        Model_Data.Instance.List_OrderObj.Remove(Model_Data.Instance.List_OrderObj[i]);
                    }
                }
            }
        }

        //  初始化Order信息
        private void ResetInformation(GameObject order,GameObject Modelobj)
        {
            order.transform.GetChild(3).GetComponent<Toggle>().onValueChanged.AddListener(CountAllMoney);
            order.transform.SetParent(Order_GoodsPlane.transform,false);
            order.transform.localScale = new Vector3(1, 1, 1);
            order.transform.GetChild(0).GetComponent<Text>().text = Modelobj.transform.tag;
            order.transform.GetChild(1).GetComponent<Text>().text = Model_Data.Instance.List_GoodsInformation[Modelobj.transform.tag].ToString();
            order.transform.GetChild(2).GetComponent<Text>().text = GameTool.FindGameObjNumWithTag(Modelobj.transform.tag).ToString();
        }

        //  计算总价金额
        public void CountAllMoney(bool active)
        {

            if (Order_Plane.activeSelf == true)
            {
                foreach (var item in Model_Data.Instance.List_OrderObj)
                {
                    //  从字段得到单价和数量
                    float num = Convert.ToSingle(item.transform.GetChild(1).GetComponent<Text>().text);
                    float money = Convert.ToSingle(item.transform.GetChild(2).GetComponent<Text>().text);
                    if (item.transform.GetChild(3).GetComponent<Toggle>().isOn)
                    {
                        MoneyAll += num * money;
                    }
                    //  计算总价
                    Goods_AllMoney.text = MoneyAll.ToString();

                }
            }
            MoneyAll = 0;
        }

        //  全选商品时价格
        public void CheckAllMoney(bool active)
        {
            active = Button_AllGoods.isOn;
            //  遍历订单数组将状态改变  同时计算总金额
            foreach (var item in Model_Data.Instance.List_OrderObj)
            {
                if (active)
                {
                    item.transform.GetChild(3).GetComponent<Toggle>().isOn = true;
                    //  计算总体金额
                    CountAllMoney(true);
                }
                else
                {
                    item.transform.GetChild(3).GetComponent<Toggle>().isOn = false;
                    //  初始化金额
                    Goods_AllMoney.text = "0";
                }
            }
        }


    }
}
