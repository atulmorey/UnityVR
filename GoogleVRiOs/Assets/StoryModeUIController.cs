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

    private float _gazeHoldTimer = 2f;

    private int _quiteTweenID;
    private int _replayTweenID;
    private int _exploreTweenID;

	// Use this for initialization
	void Start () 
    {
        Debug.Assert(NANDStorySequenceComp != null, "NANDStorySequenceComp is missing");
	
	}   

    //Replay
    public void HandleOnReplayEnter()
    {
        _replayTweenID = LeanTween.value(gameObject, 1f, 0f, _gazeHoldTimer).setOnUpdate((float val) =>{
            ReplayImageComp.fillAmount = val;
        }).setOnComplete(NANDStorySequenceComp.Replay).id;

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
    }

    //Quit
    public void HandleOnQuitEnter()
    {
        _quiteTweenID = LeanTween.value(gameObject, 1f, 0f, _gazeHoldTimer).setOnUpdate((float val) =>
            {
                QuitImageComp.fillAmount = val;
            }).setOnComplete(Application.Quit).id;
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
    }	
}
