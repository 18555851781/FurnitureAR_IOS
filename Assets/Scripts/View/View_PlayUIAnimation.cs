using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using Control;

namespace View
{
    public class View_PlayUIAnimation : MonoBehaviour
    {
        public static View_PlayUIAnimation Instance;
        private GameObject Goods_Plane ;
        private GameObject Menu_Plane ;
        private GameObject Order_Plane;
        private GameObject Checklane_Plane;
        private Slider slider;
        private float times;

        //  单例赋值
        private void Awake()
        {
            Instance = this;
        }

        private void Start()
        {
            //  获取视图中的物体
            Goods_Plane = View_FindUI.Instance.Goods_Plane;
            Menu_Plane = View_FindUI.Instance.Menu_Plane;
            Order_Plane = View_FindUI.Instance.Order_Plane;
            Checklane_Plane = View_FindUI.Instance.CheckPlane_Plane;
            GameTool.ActiveExchange(Menu_Plane);
        }

        private void Update()
        {
            //  播放UI加载动画方法
            Mask_UIAnimation();
            //  判断点击位置去移动GoodsPlane方法
            UI_PlaneMove();
            //  检测地面方法
            Mask_CheckPlane();
        }

        //  播放遮罩的动画以及计时
        public void Mask_UIAnimation()
        {

            if(EventSystem.current.currentSelectedGameObject != null && EventSystem.current.currentSelectedGameObject.tag != "Menu"&& EventSystem.current.currentSelectedGameObject.tag != "Order"&& EventSystem.current.currentSelectedGameObject.tag != "Type" )
            {
                GameObject InputButton = EventSystem.current.currentSelectedGameObject;

                times += Time.deltaTime;

                slider = InputButton.transform.GetChild(1).GetComponent<Slider>();

                slider.value += Time.deltaTime;

                if(slider.value >= 2)
                {
                    slider.value = 0;
                    slider.gameObject.SetActive(false);
                    InputButton.transform.GetChild(0).GetComponent<Text>().color = Color.black;
                }else
                {
                    if(Input.touchCount >=1)
                    {
                        return;
                    }
                }
            }
        }

        private void UI_PlaneMove()
        {
            //  判断点击屏幕的位置

            if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
            {
                if (!EventSystem.current.IsPointerOverGameObject(Input.GetTouch(0).fingerId))
                {
                    GameTool.PlaneMove(Goods_Plane, GameTool.GoodsPlane_Undisplay);

                    Order_Plane.SetActive(false);
                }
            }

        }

        //  检测是否检测到地面
        private void Mask_CheckPlane()
        {
            if(GameObject.FindWithTag("ARPlane") && Checklane_Plane.activeSelf == true)
            {
                Checklane_Plane.SetActive(false);

                GameTool.ActiveExchange(Menu_Plane);
            }
        }
    }
}
