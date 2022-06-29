using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GetUserName : MonoBehaviour
{
    public Text MyName;
    public Text FriendName;
    public 

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }


    public void OnClickStartButton()
    {
        SampleScript.myname = MyName.text;
        SampleScript.friendname = FriendName.text;

        Debug.Log(SampleScript.myname);
        Debug.Log(SampleScript.friendname);

        SceneManager.LoadScene("ARLocationSharing");
    }
}
