using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using Model;
using Control;

namespace View
{
    public class View_GoodsButton : MonoBehaviour
    {
        private GameObject Goods_Plane;
        private List<GameObject> Goods_Button = new List<GameObject>();
        private List<string> Goods_Name = new List<string>();

        void Awake()
        {
            //  遍历子物体  然后加入到数组之中
            Goods_Button = GameTool.AddChildToList("Content_Goods");

        }

        //  按钮绑定加载事件

        private void Start()
        { 
            Goods_Plane = View_FindUI.Instance.Goods_Plane;

            foreach (var item in Goods_Button)
            {
                item.GetComponent<Button>().onClick.AddListener(delegate ()
                {
                    if (IsButtonInput())
                    {
                        Debug.Log("资源加载！！！");
                        //  开始加载方法
                        Model_Load.Instance.StartLoad();
                        //  播放加载Mask遮挡动画
                        View_PlayUIAnimation.Instance.Mask_UIAnimation();

                    }
                    else
                    {
                        //  克隆下载的物体
                        Control_CloneObj.Instance.CloneObj();
                        //  点击按钮之后收缩GoodsPlane
                        GameTool.PlaneMove(Goods_Plane, GameTool.GoodsPlane_Undisplay);
                    }
                });
            }
        }

        //  判断按钮是否第一次按下
        private bool IsButtonInput()
        {
            if(Goods_Name.Contains(EventSystem.current.currentSelectedGameObject.name))
            {
      
                return false;
            }
            else
            {
                Goods_Name.Add(EventSystem.current.currentSelectedGameObject.name);

                return true;
            }
        }

    }
}
