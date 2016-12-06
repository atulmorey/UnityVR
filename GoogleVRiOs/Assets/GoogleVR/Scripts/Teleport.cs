// Copyright 2014 Google Inc. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

using UnityEngine;
using System.Collections;

[RequireComponent (typeof(Collider))]
public class Teleport : MonoBehaviour, IGvrGazeResponder
{
    public GameObject MainCamera;
    public bool isTriggered = false;

    private Vector3 _cubeStartingPos;
    private Vector3 _mainCamStartingPos;
    private float _portSpeed = 50f;

    private GameManager _gameManager;
    private ScreenFader _screenFader;
    private float _camFadeTime = 1f;

    private Material _currentMat;
    private Color _currentCol;
    private int _tweenID;
    private float _gazeTimer = 2f; //In SECONDS



    void Start ()
    {
        _cubeStartingPos = transform.localPosition;

        _mainCamStartingPos = MainCamera.transform.localPosition;

        _currentMat = GetComponent<Renderer>().material;
        _currentCol = _currentMat.color;

        isTriggered = false;
        SetGazedAt (false);

        _gameManager = GameManager.Instance;
        _screenFader = MainCamera.GetComponent<ScreenFader>();

        if (_screenFader == null) Debug.LogError("Screen fader component is missing from Main Camera");



    }

    void LateUpdate ()
    {
        GvrViewer.Instance.UpdateState ();
        if (GvrViewer.Instance.BackButtonPressed) {
            Application.Quit ();

        }
    }

    void SetVisualEffect()
    {
//        Color currentColor = _currentMat.color;
//        Color targetColor = NANDUtils.AppExLightOrange;
//        
//        _tweenID = LeanTween.value(gameObject, currentColor, targetColor, 2f).setLoopPingPong().setOnUpdate((Color col)=>{
//            _currentMat.color = col;
//        }).id;
//


    }

    void DisableThisGameobject()
    {
        gameObject.SetActive(false);
    }

    public void SetGazedAt (bool gazedAt)
    {
        //Make the cube turn green in 2 seconds when set gaze on
        //Once complete, do the trigger


        if (gazedAt)
        {
            Color currentColor = _currentMat.color;
            Color targetColor = NANDUtils.AppExLightOrange;

            _tweenID = LeanTween.value(gameObject, currentColor, targetColor, _gazeTimer).setOnUpdate((Color col)=>{
                _currentMat.color = col;
            }).setOnComplete(OnGazeTrigger).id;

        }

         
    }

    public void Reset ()
    {
        transform.localPosition = _cubeStartingPos;
        MainCamera.transform.localPosition = _mainCamStartingPos;
    }

    public void ToggleVRMode ()
    {
        GvrViewer.Instance.VRModeEnabled = !GvrViewer.Instance.VRModeEnabled;
    }

    public void ToggleDistortionCorrection ()
    {
        GvrViewer.Instance.DistortionCorrectionEnabled =
      !GvrViewer.Instance.DistortionCorrectionEnabled;
    }

    #if !UNITY_HAS_GOOGLEVR || UNITY_EDITOR
    public void ToggleDirectRender ()
    {
        GvrViewer.Controller.directRender = !GvrViewer.Controller.directRender;
    }
    #endif  //  !UNITY_HAS_GOOGLEVR || UNITY_EDITOR


    public void TeleportToTarget()
    {       

        float time = Vector3.Distance(MainCamera.transform.position, transform.position) / _portSpeed;
//        DisableThisGameobject();

        //Option 1: Animate
        this.gameObject.SetActive(false);
        LeanTween.move(MainCamera, transform.position, time).setOnComplete(TriggerTeleportEvent);

        //Reset material
        _currentMat.color = _currentCol;

    }   

    void TriggerTeleportEvent()
    {
        //Create an teleport event trigger

        EventManager.TriggerEvent ("teleport");

    }

    void FadeIn()
    {
        _screenFader.fadeTime = _camFadeTime;

        _screenFader.fadeIn = !_screenFader.fadeIn;
    }

    #region IGvrGazeResponder implementation

    /// Called when the user is looking on a GameObject with this script,
    /// as long as it is set to an appropriate layer (see GvrGaze).
    public void OnGazeEnter ()
    {
        SetGazedAt (true);
    }

    /// Called when the user stops looking on the GameObject, after OnGazeEnter
    /// was already called.
    public void OnGazeExit ()
    {
        SetGazedAt (false);

        //Cancel tween and reset the color
        LeanTween.cancel(_tweenID);
        _currentMat.color = NANDUtils.AppExLightGreen;
    }

    /// Called when the viewer's trigger is used, between OnGazeEnter and OnGazeExit.
    public void OnGazeTrigger ()
    {        
        TeleportToTarget();
    }

    #endregion
}
