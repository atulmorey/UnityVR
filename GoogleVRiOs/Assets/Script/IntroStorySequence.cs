using UnityEngine;
using System.Collections;

public class IntroStorySequence : MonoBehaviour 
{
    [Header("GameObjects")]
    public GameObject MainCamera;
    public GameObject SamsungSSD;
    public GameObject SamsungPointLight;

    [Header("Transforms")]
    public Transform StandUpTr;
    public Transform WalkTr;


    //Private 
    private Light _samsungHighlight;
	
    // Use this for initialization
	void Start () 
    {
        StandUp();

        _samsungHighlight = SamsungPointLight.GetComponent<Light>();
        _samsungHighlight.intensity = 0f;
	
	}

    void StandUp()
    {
        LeanTween.move(MainCamera, StandUpTr.position, 1f).setEase(LeanTweenType.easeInOutBack).setDelay(2f).setOnComplete(WalkToSamsung);

    }
	
    void WalkToSamsung()
    {
        LeanTween.move(MainCamera, WalkTr.position, 2.5f).setEase(LeanTweenType.easeOutSine).setDelay(2f).setOnComplete(StartBlinkingSamsungLight);
    }

    void StartBlinkingSamsungLight()
    {
        LeanTween.value(SamsungPointLight, 0f, 8f, 1.5f).setLoopPingPong().setOnUpdate((float val) =>{
            _samsungHighlight.intensity = val;
        });


    }
}
