using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class IntroStorySequence : MonoBehaviour 
{
    [Header("GameObjects")]
    public GameObject Room;
    public GameObject MainCamera;
    public GameObject SamsungSSD;
    public GameObject SamsungPointLight;
    public GameObject PlayCanvas;
    public GameObject PlayButton;
//    public GameObject HyperSpeedParticle;

    [Header("Transforms")]
    public Transform StandUpTr;
    public Transform WalkTr;
    public Transform SamsungPickUpTr;
    public Transform SamsungZoomInTr;

    [Header("AudioClips")]
    public AudioClip Clip1;
    public AudioClip Clip2;
    public AudioClip Clip3;

    //Private 
    private Light _samsungHighlight;
    private int _samsungHighlightTweenID;
    private ScreenFader _screenFader;

    AudioSource BootAudio;
	
    // Use this for initialization
	void Start () 
    {
//        StandUp();

        //EXAMPLE FOR PLAYING CLIP1
        if (Clip1 != null)  BootAudio.PlayOneShot(Clip1);

        _samsungHighlight = SamsungPointLight.GetComponent<Light>();
        _samsungHighlight.intensity = 0f;

        _screenFader = MainCamera.GetComponent<ScreenFader>();

//        HyperSpeedParticle.SetActive(false);

        _screenFader.fadeIn = true;
	
	}

    public void HandleOnPlayHit()
    {
        Image playBottomImg = PlayButton.GetComponent<Image>();
     
            LeanTween.value(PlayButton, 1f, 0f, 2f).setOnUpdate((float val) =>
                {
                playBottomImg.fillAmount = val;
                }
        ).setOnComplete(StandUp);


   
    }

    void StandUp()
    {
        PlayCanvas.SetActive(false);
        LeanTween.move(MainCamera, StandUpTr.position, 1f).setEase(LeanTweenType.easeInOutBack).setDelay(2f).setOnComplete(WalkToSamsung);

    }
	
    void WalkToSamsung()
    {
        LeanTween.move(MainCamera, WalkTr.position, 2.5f).setEase(LeanTweenType.easeOutSine).setDelay(2f).setOnComplete(StartBlinkingSamsungLight);
    }

    void StartBlinkingSamsungLight()
    {
        if (Clip2 != null) BootAudio.PlayOneShot(Clip2);

        _samsungHighlightTweenID = LeanTween.value(SamsungPointLight, 0f, 8f, 1.5f).setLoopPingPong().setOnUpdate((float val) =>{
            _samsungHighlight.intensity = val;
        }).id;
    }

    public void TriggerTeleportSequence()
    {
        LeanTween.cancel(_samsungHighlightTweenID);
        _samsungHighlight.intensity = 0f;

        PickUpSamsungSSD();

    }

    void PickUpSamsungSSD()
    {
        LeanTween.move(SamsungSSD, SamsungPickUpTr.position, 2f);
        LeanTween.rotate(SamsungSSD, new Vector3(90f, 0f, -180f), 2f).setOnComplete(ZoomInOnSamsungSSD);

    }

    void ZoomInOnSamsungSSD()
    {
        LeanTween.cancelAll();

        LeanTween.move(MainCamera, SamsungZoomInTr.position, 2f).setOnComplete(LoadScene);

        IEnumerator loadCoroutine = WaitAndLoad(4f);
        StartCoroutine(loadCoroutine);

    }

    void LoadScene()
    {
        float fadeTime = 1f;

        _screenFader.fadeTime = 1f;
        _screenFader.fadeColor = Color.black;
        _screenFader.fadeIn = false;
        _screenFader.DoFade();



    }

    private IEnumerator WaitAndLoad (float waitTime)
    {

        while(true)
        {
            yield return new WaitForSeconds(waitTime);
            GameManager.Instance.LoadScene("Scene 1");
        }
    }

    void OnDestroy()
    {
        LeanTween.cancelAll();
    }
       
}
