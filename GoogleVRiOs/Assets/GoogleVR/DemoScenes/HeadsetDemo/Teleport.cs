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
    public Material CubeDefaultMat;

    private Vector3 _cubeStartingPos;
    private Quaternion _cubeStartingRot;
    private Vector3 _mainCamStartingPos;
    private float _portSpeed = 5f;
    private int _rotateTweenId;
    private int _scaleTweenId;

    private GameManager _gameManager;

    void Start ()
    {
        _cubeStartingPos = transform.localPosition;
        _cubeStartingRot = transform.localRotation;

        _mainCamStartingPos = MainCamera.transform.localPosition;

        //Set the default material
        GetComponent<Renderer>().material = CubeDefaultMat;

        SetVisualEffect();
        SetGazedAt (false);

        _gameManager = GameManager.Instance;



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
        //Force reset the material
        GetComponent<Renderer>().material = CubeDefaultMat;  

        _rotateTweenId = LeanTween.rotateY(gameObject, transform.localEulerAngles.y + 90f, 2f).setEase(LeanTweenType.easeInOutCubic).setLoopPingPong().id;

        float perctIncrease = 5f;
        Vector3 targetScale = new Vector3(perctIncrease * 0.01f / transform.localScale.x, perctIncrease * 0.01f / transform.localScale.y, perctIncrease * 0.01f / transform.localScale.z);

        _scaleTweenId = LeanTween.scale(gameObject, targetScale, 2f).setEase(LeanTweenType.easeInOutCubic).setLoopPingPong().id;

    }

    void DisableThisGameobject()
    {
        gameObject.SetActive(false);
    }

    public void SetGazedAt (bool gazedAt)
    {
        //Make the cube turn green in 2 seconds when set gaze on
        //Once complete, do the trigger

        Material thisMat = gameObject.GetComponent<Renderer>().material;
        if (gazedAt)
        {
            //Cancel tweens
            LeanTween.cancel(gameObject);       

            //Animate the emission on the material for 2 seconds
            thisMat.EnableKeyword("_EMISSION");
            thisMat.globalIlluminationFlags = MaterialGlobalIlluminationFlags.RealtimeEmissive;

            LeanTween.color(gameObject, Color.green, 2f).setOnUpdate((Color col) =>
                {
                    thisMat.SetColor("_EmissionColor", col);
                }).setOnComplete(OnGazeTrigger);
        }
        else
        {
            GetComponent<Renderer>().material = CubeDefaultMat;         
            SetVisualEffect();
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
//        LeanTween.move(MainCamera, transform.position, time).setOnComplete(SetVisualEffect);

        //Option 2: just teleport
//        MainCamera.transform.position = transform.position;


        //Option 3: Camera Fade
        float fadeTime = _gameManager.FadeTime;

        LeanTween.value(0f, 1f, fadeTime).setOnStart(_gameManager.CameraFade).setOnComplete(_gameManager.CameraFade);
        MainCamera.transform.position = transform.position;
      

        SetVisualEffect();

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
    }

    /// Called when the viewer's trigger is used, between OnGazeEnter and OnGazeExit.
    public void OnGazeTrigger ()
    {        
        TeleportToTarget();
    }

    #endregion
}
