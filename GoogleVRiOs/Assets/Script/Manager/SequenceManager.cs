using UnityEngine;
using System.Collections;

public class SequenceManager : MonoBehaviour 
{
    public GameObject MainCam;

    [Header("Intro Sequence Attributes")]
    public Transform IntroStartTr;
    public Transform IntroEndTr;
    public float IntroTimeInSec = 3f;

    public void TriggerIntroCam()
    {
        //Place the Main cam to start position
        MainCam.transform.position = IntroStartTr.position;
        LeanTween.move(MainCam, IntroEndTr.position, IntroTimeInSec).setEase(LeanTweenType.easeOutCubic);
    }
}
