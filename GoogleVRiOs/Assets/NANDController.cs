using UnityEngine;
using System.Collections;

public class NANDController : MonoBehaviour 
{
    public GameObject MainCamera;
    public Transform CameraTarget;

    public GameObject Nitride1;
    public GameObject Nitride2;
    public Material Nitride1Mat;
    public Material Nitride2Mat;

    public GameObject Oxide1;
    public GameObject Oxide2;
    public Material OxideMat;

    public GameObject Silicon;
    public GameObject SiliconEtched;
    public Material SiliconMat;

    public GameObject PolySilicon;
    public Material PolySiliconMat;

    public GameObject Sip;
    public Material SipMat;

    public GameObject[] TeleportCubes;

    private Color _tempCol;
    private Color _targetCol;
    private float _alpha0 = 0f;
    private float _alpha1 = 1f;

    private float _stepAnimTime = 3f;

    private Shader _transShader;
    private Shader _diffuseShader;

   
    void Start()
    {
        Debug.Log("START");

        foreach (GameObject go in TeleportCubes)
        {
            go.SetActive(false);
        }

        _transShader = Shader.Find("Legacy Shaders/Transparent/Diffuse");
        _diffuseShader = Shader.Find("Legacy Shaders/Diffuse");

        if (_transShader == null)
        {
            Debug.LogError("Trans shader is null");
        }

        if (_diffuseShader == null)
        {
            Debug.LogError("Trans shader is null");
        }


        //Apply transparent shader to all 
        Nitride1Mat.shader = _transShader;
        OxideMat.shader = _transShader;
        SiliconMat.shader = _transShader;
        PolySiliconMat.shader = _transShader;

        //Alpha of all Mats is zero by default
        _tempCol = Nitride1Mat.color;
        _tempCol.a = _alpha0;
        Nitride1Mat.color = _tempCol;

        _tempCol = OxideMat.color;
        _tempCol.a = _alpha0;
        OxideMat.color = _tempCol;

        _tempCol = SipMat.color;
        _tempCol.a = _alpha0;
        SipMat.color = _tempCol;

        _tempCol = SiliconMat.color;
        _tempCol.a = _alpha0;
        SiliconMat.color = _tempCol;


        //Make sure all the gameobjects are inactive by default
        bool debugStatus = false;

        Nitride1.SetActive(debugStatus);
        Nitride2.SetActive(debugStatus);
        Oxide1.SetActive(debugStatus);
        Oxide2.SetActive(debugStatus);
        Silicon.SetActive(debugStatus);
        SiliconEtched.SetActive(debugStatus);
        PolySilicon.SetActive(debugStatus);
        Sip.SetActive(debugStatus);

        Setp1Silicon();

    }

    //1. Silicon 
    //Make Silicon fade In then change rendering mode to opaque
    void Setp1Silicon()
    {
        Debug.Log("Setp1Silicon");

        Silicon.SetActive(true);

        LeanTween.alpha(Silicon, _alpha1, _stepAnimTime).setOnComplete(Step2APolySilicon);

    }

    void Step2APolySilicon()
    {
        Debug.Log("Step2APolySilicon");


        PolySilicon.SetActive(true);
        LeanTween.alpha(PolySilicon, _alpha1, _stepAnimTime).setOnComplete(Step2BPolySilicon);

    }

    void Step2BPolySilicon()
    {
        Debug.Log("Step2BPolySilicon");

        SiliconMat.shader = _diffuseShader;

        LeanTween.moveLocalZ(PolySilicon, 0.00201f, _stepAnimTime).setOnComplete(Step2CSilicon);
    }

    void Step2CSilicon()
    {

        Debug.Log("Step2CSilicon");

        PolySiliconMat.shader = _diffuseShader;

        Silicon.SetActive(false);

        _tempCol = SiliconMat.color;
        _tempCol.a = _alpha1;
        SiliconMat.color = _tempCol;

        SiliconEtched.SetActive(true);

        UpdateCameraStep2();
    }

    void UpdateCameraStep2()
    {
        LeanTween.move(MainCamera, CameraTarget.position, _stepAnimTime).setOnComplete(Step3SiliconEtch);
    }

    void Step3SiliconEtch()
    {
        SiliconMat.shader = _transShader;

        LeanTween.alpha(SiliconEtched, 0.5f, _stepAnimTime).setOnComplete(Step4Sip);


    }

    void Step4Sip()
    {
        Sip.SetActive(true);

        SipMat.shader = _transShader;
        LeanTween.alpha(Sip, _alpha1, _stepAnimTime).setOnComplete(Step5SiliconEtch);

    }

    void Step5SiliconEtch()
    {
        foreach(Transform child in Sip.transform)
        {
            child.gameObject.GetComponent<MeshRenderer>().materials[0].shader = _diffuseShader;
        }

        SiliconMat.shader = _transShader;

        LeanTween.alpha(SiliconEtched, _alpha0, _stepAnimTime).setOnComplete(Step6Nitride1n2);

    }

    void Step6Nitride1n2()
    {
        SiliconEtched.SetActive(false);

        foreach(Transform child in Nitride1.transform)
        {
            child.gameObject.GetComponent<MeshRenderer>().materials[0].shader = _transShader;
        }

        foreach(Transform child in Nitride2.transform)
        {
            child.gameObject.GetComponent<MeshRenderer>().materials[0].shader = _transShader;
        }


        Nitride2.SetActive(true);
        Nitride1.SetActive(true);

        LeanTween.alpha(Nitride1, _alpha1, _stepAnimTime).setOnComplete(Step7Oxide1n2);
        LeanTween.alpha(Nitride2, _alpha1, _stepAnimTime);


    }

    void Step7Oxide1n2()
    {
        foreach(Transform child in Nitride1.transform)
        {
            child.gameObject.GetComponent<MeshRenderer>().materials[0].shader = _diffuseShader;
        }

        foreach(Transform child in Nitride2.transform)
        {
            child.gameObject.GetComponent<MeshRenderer>().materials[0].shader = _diffuseShader;
        }

        OxideMat.shader = _transShader;

        Oxide1.SetActive(true);
        Oxide2.SetActive(true);

        LeanTween.alpha(Oxide1, 0.5f, _stepAnimTime).setOnComplete(Step8Oxide1n2);


    }

    void Step8Oxide1n2()
    {
        Debug.Log("STORY MODE END");


        PolySilicon.SetActive(false);


        foreach(Transform child in Oxide1.transform)
        {
            Material m = child.gameObject.GetComponent<MeshRenderer>().materials[0];

            m.shader = _transShader;

            _tempCol = m.color;
            _tempCol.a = 0.5f;
            m.color = _tempCol;
        }

        foreach(Transform child in Oxide2.transform)
        {
            Material m = child.gameObject.GetComponent<MeshRenderer>().materials[0];

            m.shader = _transShader;

            _tempCol = m.color;
            _tempCol.a = 0.5f;
            m.color = _tempCol;
        } 

        foreach (GameObject go in TeleportCubes)
        {
            go.SetActive(true);
        }
    }

   

}
