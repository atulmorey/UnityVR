using UnityEngine;
using UnityEngine.Events;
using System.Collections;

public class TeleportationSystemController : MonoBehaviour 
{
    public Teleport[] TeleportPoints;
    public GameObject StoryModeUICanvas;
    public GameObject MainCamera;

    //Add Event listner
    private UnityAction _teleportListner;

    private int counter = 0;

    void Awake ()
    {
        _teleportListner = new UnityAction (CallBackOnTeleportTrigger);
    }

    void OnEnable ()
    {
        EventManager.StartListening ("teleport", _teleportListner);

    }

    void OnDisable ()
    {
        EventManager.StopListening ("teleport", _teleportListner);

    }

	// Use this for initialization
	void Start () 
    {
//        counter = 0;
//        
//        //Disable all except TeleportPoints[0]
//        foreach(Teleport t in TeleportPoints)
//        {
//            t.gameObject.SetActive(false);
//        }
//
//        TeleportPoints[0].gameObject.SetActive(true);
//
//        //Make sure Story Mode UI is Disabled
//        StoryModeUICanvas.SetActive(false);
	
	}

    public void EnableExploreMode()
    {        
        counter = 0;

        //Disable all except TeleportPoints[0]
        foreach(Teleport t in TeleportPoints)
        {
            
            t.gameObject.SetActive(false);
        }
        TeleportPoints[0].transform.LookAt(MainCamera.transform);
        TeleportPoints[0].gameObject.SetActive(true);

        //Make sure Story Mode UI is Disabled
        StoryModeUICanvas.SetActive(false);
    }

    void CallBackOnTeleportTrigger()
    {
        Debug.Log ( "CallBackOnTeleportTrigger is called");

        counter ++ ;

        //Get the instance of teleport where it is coming from
        if (counter < TeleportPoints.Length )
        {
            foreach(Teleport t in TeleportPoints)
            {
                t.gameObject.SetActive(false);
            }
            TeleportPoints[counter].gameObject.SetActive(true);
            TeleportPoints[counter].transform.LookAt(MainCamera.transform);

            if(StoryModeUICanvas.activeSelf)
            {
                StoryModeUICanvas.SetActive(false);
            }
        }
        else
        {
            counter = 0;
            foreach(Teleport t in TeleportPoints)
            {
                t.gameObject.SetActive(false);
            }
            TeleportPoints[counter].transform.LookAt(MainCamera.transform);
            TeleportPoints[counter].gameObject.SetActive(true);
            StoryModeUICanvas.SetActive(true);
        }



    }
	
}
