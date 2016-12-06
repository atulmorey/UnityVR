using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class StoryModeUIController : MonoBehaviour 
{
    public GameObject ReplayGameObject;
    public Image ReplayImageComp;

    public GameObject ExploreGameObject;
    public Image ExploreImageComp;

    public GameObject QuitGameObject;
    public Image QuitImageComp;

    public NANDStorySequence NANDStorySequenceComp;
    public GameObject TeleportationSystem;

    private float _gazeHoldTimer = 2f;

    private int _quiteTweenID;
    private int _replayTweenID;
    private int _exploreTweenID;

	// Use this for initialization
	void Start () 
    {
        Debug.Assert(NANDStorySequenceComp != null, "NANDStorySequenceComp is missing");

        //Make sure teleport is off
        TeleportationSystem.SetActive(false);
	
	}   

    //Replay
    public void HandleOnReplayEnter()
    {
        _replayTweenID = LeanTween.value(gameObject, 1f, 0f, _gazeHoldTimer).setOnUpdate((float val) =>{
            ReplayImageComp.fillAmount = val;
        }).setOnComplete(HandleOnReplayClicked).id;

    }

    public void HandleOnReplayExit()
    {
        if(LeanTween.isTweening(_replayTweenID))
        {
            LeanTween.cancel(_replayTweenID);
            ReplayImageComp.fillAmount = 1f;
        }
    }

    public void HandleOnReplayClicked()
    {
        NANDStorySequenceComp.Replay();
        ReplayImageComp.fillAmount = 1f;
    }

    //Quit
    public void HandleOnQuitEnter()
    {
        _quiteTweenID = LeanTween.value(gameObject, 1f, 0f, _gazeHoldTimer).setOnUpdate((float val) =>
            {
                QuitImageComp.fillAmount = val;
            }).setOnComplete(HandleOnQuitClicked).id;
    }

    public void HandleOnQuitExit()
    {
        if(LeanTween.isTweening(_quiteTweenID))
        {
            LeanTween.cancel(_quiteTweenID);
            QuitImageComp.fillAmount = 1f;
        }
    }

    public void HandleOnQuitClicked()
    {
        Application.Quit();
        QuitImageComp.fillAmount = 1f;
    }

    public void HandleOnExploreEnter()
    {
        _exploreTweenID = LeanTween.value(gameObject, 1f, 0f, _gazeHoldTimer).setOnUpdate((float val) =>
            {
                ExploreImageComp.fillAmount = val;
            }).setOnComplete(HandleOnExploreClicked).id;
    }

    public void HandleOnExploreExit()
    {
        if(LeanTween.isTweening(_exploreTweenID))
        {
            LeanTween.cancel(_exploreTweenID);
            ExploreImageComp.fillAmount = 1f;
        }

    }

    public void HandleOnExploreClicked()
    {
        //TO DO: Explore mode here
        TeleportationSystem.SetActive(true);
        TeleportationSystem.GetComponent<TeleportationSystemController>().EnableExploreMode();

        ExploreImageComp.fillAmount = 1f;
    }
}
