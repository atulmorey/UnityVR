using UnityEngine;
using System.Collections;
using UnityEngine.UI;


public class UISlider : MonoBehaviour 
{
    private Image _fillImage;
    private Text _sceneTitle;

    private bool _isGazeOnButton = false;
    private float _fillAmount = 0f;
    private float _startTime;


	// Use this for initialization
	void Start () 
    {
        _fillImage = this.GetComponent<Image>();
        _sceneTitle = this.GetComponentInChildren<Text>();
	
	}
	
	// Update is called once per frame
	void Update () 
    {
        if (_isGazeOnButton)
        {
            if (Time.time <= (_startTime + 2f))
            {
                _fillImage.fillAmount += 0.01f;
            }
        }
        else
        {
            if (Time.time <= (_startTime + 2f))
            {
                _fillImage.fillAmount -= 0.01f;
            }

        }

        //DO following when Fill is completed
        if (_fillImage.fillAmount >= 1.0f)
        {
            HandleOnFillComplete();
        }
	
	}

    public void HandleOnEnter()
    {
        _isGazeOnButton = true; 
        _startTime = Time.time;

    }

    public void HandleOnExit()
    {
        _isGazeOnButton = false;
        _startTime = Time.time;

    }

    private void HandleOnFillComplete()
    {
        _fillImage.fillAmount = 0f;

        //Transition to new scene
        GameManager.Instance.LoadScene("Scene 1");



    }
}
