using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System;
using System.Collections.Generic;


public class SceneTeleport : MonoBehaviour 
{
    public string TargetScene = "";

    private Image _fillImage;
    private Text _sceneTitle;

    private bool _isGazeOnButton = false;
    private float _fillAmount = 0f;
    private float _startTime;

    private float _timerInSec = 2f;

    private int _tweenID; //USE this to cancel the tween animations


	// Use this for initialization
	void Start () 
    {
        _fillImage = this.GetComponent<Image>();
        _sceneTitle = this.GetComponentInChildren<Text>();
	
	}
	

    public void HandleOnEnter()
    {
        _isGazeOnButton = true; 
        _startTime = Time.time;

        //Animate the fill amount using LeanTween
        //Cache the ID to cancel this tween if needed
        _tweenID = 
        LeanTween.value(this.gameObject, 0f, 1f, _timerInSec).setOnUpdate((float val) =>
            {
                _fillImage.fillAmount = val;
            }
            ).setOnComplete(LoadTargetScene).id;

    }

    public void HandleOnExit()
    {
        _isGazeOnButton = false;

        if(LeanTween.isTweening( _tweenID))
        {
            LeanTween.cancel(_tweenID);
        }

        LeanTween.value(this.gameObject, _fillImage.fillAmount, 0f, 1f).setOnUpdate((float val) =>
            {
                _fillImage.fillAmount = val;
            }
        );
    }

    public void LoadTargetScene()
    {
        //Transition to new scene
        GameManager.Instance.LoadScene(TargetScene);

    }


}
