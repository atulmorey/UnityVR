using UnityEngine;
using System.Collections;

public class BootLoader : MonoBehaviour 
{
    public GameObject GameManagerObj;


    void Awake()
    {
        if (GameManager.Instance == null)
        {
            Load();


           
        }

      
    }

    public void Load()
    {
        Instantiate(GameManagerObj);
       
    }

   
}
