using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour 
{
    public static GameManager Instance = null;

    public float FadeTime = 0f;

    private GameObject _sequenceManagerObj;

    private ScreenFader _screenFader;


    void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
            _screenFader = GetComponent<ScreenFader>();

            if (_screenFader == null) Debug.LogError("Screen Fader component is missing from GameManager");
            FadeTime = _screenFader.fadeTime;
        }
        else if (Instance != null)
            Destroy(gameObject);

        DontDestroyOnLoad(gameObject);

    }

    //Load the new scene
    public void LoadScene(string sceneName)
    {
        SceneManager.LoadScene(sceneName);

        //Load
        GameObject.Find("BootLoader").GetComponent<BootLoader>().Load();

        TrigeerBootSceneIntroSequence();
    }

    public void TrigeerBootSceneIntroSequence()
    {
        //Find Sequence Manager in the scene
        _sequenceManagerObj = GameObject.Find("SequenceManager");

        //Trigget the intro cam
        if (_sequenceManagerObj !=  null)
        {
            _sequenceManagerObj.GetComponent<SequenceManager>().TriggerIntroCam();

            //Make the SequenceManager null for the next instance
            _sequenceManagerObj = null;
        }
        else
        {
            Debug.LogError("SequenceManager game object is missing from the scene");
        }
    }

    public void CameraFade()
    {
        _screenFader.fadeIn = !_screenFader.fadeIn;

    }
}
