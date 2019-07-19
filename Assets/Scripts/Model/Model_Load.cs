using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.XR.iOS;
using UnityEngine.EventSystems;

namespace Model
{
    public class Model_Load : MonoBehaviour
    {
        public static Model_Load Instance;
        //  URL的前缀
        private string Path = "https://wwt.oss-cn-shanghai.aliyuncs.com/Seazure%20ARkit%20Project/";
        //  按下Button的名称
        private string ButtonName;

        private void Awake()
        {
            Instance = this;
        }

        //  开启加载的协程
        public void StartLoad()
        {
            //  获取按下按钮的名称  然后与URL进行组合  生成新的URL

            ButtonName = EventSystem.current.currentSelectedGameObject.name;

            string Load_Path = Path + ButtonName.ToLower();

            StartCoroutine(LoadAsset(ButtonName,Load_Path));
        }

        //  用于下载的协程
        IEnumerator LoadAsset(string InputButtonName,string URL)
        {
            UnityWebRequest request = UnityWebRequest.GetAssetBundle(URL);

            yield return request.SendWebRequest();

            AssetBundle bundle = DownloadHandlerAssetBundle.GetContent(request);

            GameObject LoadObj = bundle.LoadAsset<GameObject>(InputButtonName);

            Model_Data.Instance.List_LoadObj.Add(LoadObj);

            StopCoroutine("LoadAsset");
        }

    }
}
