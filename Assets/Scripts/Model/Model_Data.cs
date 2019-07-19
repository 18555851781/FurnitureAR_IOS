using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Model_Data : MonoBehaviour
{
    public static Model_Data Instance;

    //  从预设体中Clone的物体数组
    public List<GameObject> Model_Clone = new List<GameObject>();

    //  从Asset中加载的预设体
    public List<GameObject> List_LoadObj = new List<GameObject>();

    //  订单页面加载出来的各个订单
    public List<GameObject> List_OrderObj = new List<GameObject>();

    //  Json数组
    public List<GoodsMessage> List_JsonMap = new List<GoodsMessage>();

    //  商品的价格信息
    public Dictionary<string, float> List_GoodsInformation = new Dictionary<string, float>();

    //  商品的编号信息
    public Dictionary<string, string> List_GoodsID = new Dictionary<string, string>();

    private void Awake()
    {
        Instance = this;

        List_GoodsInformation.Add("Chair", 300);
        List_GoodsInformation.Add("Table", 700);
        List_GoodsInformation.Add("Sofa", 900);

        List_GoodsID.Add("Chair", "1");
        List_GoodsID.Add("Table", "2");
        List_GoodsID.Add("Sofa", "3");
    }

}

[Serializable]
public class GoodsMessage
{
    public string uid;
    public string name;
    public string image;
    public double price;
    public int amount;
}

