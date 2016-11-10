using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour 
{
    public static GameManager Instance = null;

    private GameObject _sequenceManagerObj;

    void Awake()
    {
        if (Instance == null)
            Instance = this;
        else if (Instance != null)
            Destroy(gameObject);

        DontDestroyOnLoad(gameObject);

    }

    //Load the new scene
    public void LoadScene(string sceneName)
    {
        SceneManager.LoadScene(sceneName);

        //Load
        GameObject.Find("Loader").GetComponent<BootLoader>().Load();

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
}
