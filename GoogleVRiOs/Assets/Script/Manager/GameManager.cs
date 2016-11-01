using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour 
{
    public static GameManager Instance = null;

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
        GameObject.Find("Loader").GetComponent<Loader>().Load();
    }
}
