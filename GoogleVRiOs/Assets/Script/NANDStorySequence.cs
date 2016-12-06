using UnityEngine;
using System.Collections;

public class NANDStorySequence : MonoBehaviour 
{

    [Header("Transforms")]
    public Transform StructureParent;
    public Transform Step1CutPos;
    public Transform Step3CutPos;
    public Transform Step4ACutPos;
    public Transform Step4BCutPos;
    public Transform Step5CutPos;
    public Transform Step6CutPos;
    public Transform[] CameraFlyByPoints;

    [Header("GameObjects")]
    public GameObject MainCamera;
    public GameObject OneLayer;
    public GameObject ChannelHoleCylinder;
    public GameObject StoryModeUIGameobject;
    public GameObject DisplayTextUI;
    public GameObject TeleportationSystem;

    [Header("Materials")]
    public Material SiliconSubstrateMat;
    public Material OxideMat;
    public Material NitrideMat;
    public Material ChannelHoleHardMaskMat;
    public Material ChannelHolesMat;
    public Material StaircaseHardMaskMat;
    public Material TrenchHardMaskMat;
    public Material WMat;
    public Material WTransMat;
    public Material StaircaseContactMat;
    public Material StaircaseContactHardMaskMat;
    public Material StaircaseContactChannelMat;

    [Header("Values")]
    public int NumberOfLayers = 32;
    public float MasterWidth = 5f;
    public float MasterDepth = 3f;

    public float SiliconSubtrateThickness = 1.7f;
    public float OxideThickness = 0.3f;
    public float NitrideThickness = 0.3f;
    public float StairCaseStepWidth = 5f;
    public float StairCaseHardMaskThickness = 50f;
    public float ChannelHoleCylinderDia = 1.2f;
    public float ChannelHoleHardMaskThickness = 25f;
    public float TrenchHardMaskThickness = 25f;
    public float StairCaseContactThickness = 5f;
    public float stairCaseContactHardMaskThickness = 5f;
    public float stairCaseChannelGap = 5f;
    public float stairCaseChannelHoleDia = 2f;
    public float wFillThickness = 7f;

    [Header("Audio")]
    public AudioClip WelcomeClip;
    public AudioClip Step1Clip;
    public AudioClip Step2Clip;
    public AudioClip Step3Clip;
    public AudioClip Step4Clip;
    public AudioClip Step5Clip;
    public AudioClip Step6Clip;
    public AudioClip ClosingClip;
    AudioSource NANDAudio;

    //private
    private GameObject _siliconSubstrate;
    private GameObject[] _nitrideLayers;
    private GameObject[] _oxideLayers;
    private GameObject _channelHoleMask;
    private GameObject _staircaseHardMask;
    private GameObject _channelHoleCylndr;
    private GameObject _channelHoleClndrParent;
    private GameObject _trenchHardMask;
    private GameObject _frontHalf;
    private GameObject _middleHalf;
    private GameObject _backHalf;
    private GameObject[] _rowCylndrs;
    private GameObject _wTrench1_1;
    private GameObject _wTrench1_2;
    private GameObject _wTrench2_1;
    private GameObject _wTrench2_2;
    private GameObject _wTrench3;

    private GameObject _staircaseContact;
    private GameObject _staircaseContactHardMask;
    private GameObject[] _staircaseContactChannelsFront; 
    private GameObject[] _staircaseContactChannelsMiddle;
    private GameObject[] _staircaseContactChannelsBack;

    private GameObject[] _staircaseContacts;
    private GameObject[] _staircaseContactHardMasks;
    private GameObject _wFill;

    private Vector3 _animTopStartPos = new Vector3 (0,1000,0);
    private Vector3 _animBottomStartPos = new Vector3 (0,-1000,0);
    private Vector3 _mainCamStartPos;

    //animTimes
//    private float _siSubAnimTime = 1f;
//    private float _oxNiAnimTime = 0.1f;
//    private float _stairCaseHardMaskAnimTime = 1f;
//    private float _stairFormAnimTime = 0.1f;
//    private float _channelHoleHardMaskAnimTime = 1f;
//    private float _channelHoleCylinderDepositAnimTime = 2f;
//    private float _channelHoleEtchAnimTime = 2f;
//    private float _trenchHardMaskAnimTime = 3f;
//    private float _trenchMaskFadeTime = 7f;
//    private float _trenchFormAnimTime = 7f;
//    private float _nitrideRemovalAnimTime = 5f;
//    private float _tungRecessAnimTime = 3f;
//    private float _stairCaseContactDepositAnimTime = 2f;
//    private float _stairCaseContactHardMaskDepositTime = 1f;
//    private float _staircaseContactMaskEtchAnimTime = 6f;
//    private float _staircaseContactEtchAnimTime = 2f;
//    private float _wRecessAnimTime = 7f;
//    private float _wFillAnimTime = 7f;
//    private float _triNiDepositOnChannelAnimTime = 7f;
//    private float _flyByTime = 30f;

    //animTimes
    private float _siSubAnimTime = 0.25f;
    private float _oxNiAnimTime = 0.1f;
    private float _stairCaseHardMaskAnimTime = 1f;
    private float _stairFormAnimTime = 0.25f;
    private float _channelHoleHardMaskAnimTime = 2f;
    private float _channelHoleCylinderDepositAnimTime = 2f;
    private float _channelHoleEtchAnimTime = 10f;
    private float _trenchHardMaskAnimTime = 2f;
    private float _trenchMaskFadeTime = 2f;
    private float _trenchFormAnimTime = 10f;
    private float _nitrideRemovalAnimTime = 5f;
    private float _tungRecessAnimTime = 10f;
    private float _stairCaseContactDepositAnimTime = 2f;
    private float _stairCaseContactHardMaskDepositTime = 2f;
    private float _staircaseContactMaskEtchAnimTime = 10f;
    private float _staircaseContactEtchAnimTime = 10f;
    private float _wRecessAnimTime = 10f;
    private float _wFillAnimTime = 10f;
    private float _triNiDepositOnChannelAnimTime = 5f;
    private float _flyByTime = 30f;
//
    //distances

    private float _targetY = 0f;
    private float _staircaseHardMaskYoffset = 0f;

    //Script components
    private VertexAnimation _staircaseHardMaskVertAnimComp;
    private VertexAnimation[] _oxideVertexComp;
    private VertexAnimation[] _nitrideVertexComp;
    private DisplayTextUIController _displayTextUIController;


    float delay = 0.1f; //Keep if equal to animtime as a start
    float scaleOffset = 1f;
    float frontOffset = 0.8f;
    float middleOffset = 0.3f;
    float toonShaderOutlineWidth = 3f;
    float trenchDepth;

    public enum Mode {Story, Step1, Step2, Step3, Step4, Step5, Step6, Step7};

    // Use this for initialization
    void Start () 
    {
        Initializer();    
    }

    public void Initializer()
    {
        //CAMERA
        _mainCamStartPos = MainCamera.transform.position;

        //AUDIO
        NANDAudio = GetComponent<AudioSource>();

        //Play Welcome clip
//        NANDAudio.PlayOneShot(WelcomeClip);
        Debug.Assert(NANDAudio != null, "There is no Audio Source attached!");

        ResetMaterials();

        //UI 
        //Make sure UI is off by default
        DisableStoryModeUI();

        DisplayTextUI.SetActive(true);

        if (NANDAudio.isPlaying)
        {
            //Run a blank Tween tilll the clip is playing
            LeanTween.value(gameObject, 0f, 1f, WelcomeClip.length).setOnComplete(DepostiSiliconSubstrate);

        }
        else
        {
            DepostiSiliconSubstrate();
        }

        _displayTextUIController = DisplayTextUI.GetComponent<DisplayTextUIController>();
        Debug.Assert(_displayTextUIController != null, "Display Text UI Controller component is missing");
        _displayTextUIController.DisplayString("");

    }
        

    void ResetMaterials()
    {
        Color temp; 

        //MATERILS
        //Make sure toon shaders are set correctly
        OxideMat.SetFloat("_Outline", 0f);

        //Nitride
        NitrideMat.color = NANDUtils.AppExLightYellow;
        NitrideMat.shader = Shader.Find("Standard");

        ChannelHolesMat.shader = Shader.Find("Legacy Shaders/Transparent/Diffuse");   
        ChannelHolesMat.color = NANDUtils.AppExLightLightGrayTrans;   

//        StaircaseContactChannelMat.shader = Shader.Find("Standard"); 
        StaircaseContactChannelMat.color = NANDUtils.AppExLightLightGray;  

        StaircaseContactMat.shader = Shader.Find("Legacy Shaders/Transparent/Diffuse"); 
        temp = StaircaseContactMat.color;
        temp.a = 1f;
        StaircaseContactMat.color = temp;

        StaircaseContactHardMaskMat.shader = Shader.Find("Legacy Shaders/Transparent/Diffuse"); 
        temp = StaircaseContactHardMaskMat.color;
        temp.a = 1f;
        StaircaseContactHardMaskMat.color = temp;

        WMat.shader = Shader.Find("Legacy Shaders/Transparent/Diffuse");  

        WTransMat.shader = Shader.Find("Legacy Shaders/Transparent/Diffuse");  
        temp = WTransMat.color;
        temp.a = 1f;
        WTransMat.color = temp;
       
        
    }

    void DepostiSiliconSubstrate()
    {
        //Play Step1
//        NANDAudio.PlayOneShot(Step1Clip);
        
        //Silicon substrate
        _targetY = SiliconSubtrateThickness / 2f;

        _siliconSubstrate = GameObject.Instantiate(OneLayer);
        _siliconSubstrate.name = "SiliconSubstrate";
        _siliconSubstrate.transform.parent = StructureParent;
        _siliconSubstrate.transform.localScale = new Vector3(MasterDepth,SiliconSubtrateThickness,MasterWidth);

        _siliconSubstrate.GetComponent<Renderer>().material = SiliconSubstrateMat;

        _siliconSubstrate.transform.localPosition = _animTopStartPos;

        LeanTween.moveLocalY (_siliconSubstrate, _targetY, _siSubAnimTime).setOnComplete(DepositeOxideNitrideLayers);
    }

    void DepositeOxideNitrideLayers()
    {

        //Oxide first FIRST
        _oxideLayers = new GameObject[NumberOfLayers];
        _nitrideLayers = new GameObject[NumberOfLayers];


        //Calculate anim time using clip length
        //        _oxNiAnimTime = (Step1Clip.length - _siSubAnimTime) / (2 * NumberOfLayers);

        delay = 0f;

        for(int i=0; i < NumberOfLayers; i++)
        {
            //Oxide
            _oxideLayers[i] = GameObject.Instantiate(OneLayer);
            _oxideLayers[i].name = "OxideLayer"+i.ToString();
            _oxideLayers[i].tag = "Oxide";
            _oxideLayers[i].transform.parent = StructureParent;
            _oxideLayers[i].transform.localScale = new Vector3(MasterDepth, NitrideThickness,MasterWidth);
            _oxideLayers[i].GetComponent<Renderer>().material = OxideMat;
            _oxideLayers[i].transform.localPosition = _animTopStartPos;

            _targetY = SiliconSubtrateThickness + (OxideThickness * i) + (NitrideThickness * i ) + (NitrideThickness / 2f)  ;
            LeanTween.moveLocalY (_oxideLayers[i], _targetY, _oxNiAnimTime).setDelay(delay);
            delay += _oxNiAnimTime;

            //Nitride
            _nitrideLayers[i] = GameObject.Instantiate(OneLayer);
            _nitrideLayers[i].name = "NitrideLayer"+i.ToString();
            _nitrideLayers[i].tag = "Nitride";
            _nitrideLayers[i].transform.parent = StructureParent;   
            _nitrideLayers[i].transform.localScale = new Vector3(MasterDepth, OxideThickness, MasterWidth);
            _nitrideLayers[i].GetComponent<Renderer>().material = NitrideMat;
            _nitrideLayers[i].transform.localPosition = _animTopStartPos;

            _targetY = SiliconSubtrateThickness + (OxideThickness * i) + (NitrideThickness* (i + 1)) + + (OxideThickness / 2f) ;

            //Trigger next event when reached last layer
            LeanTween.moveLocalY (_nitrideLayers[i], _targetY, _oxNiAnimTime).setDelay(delay);

            if ( i == NumberOfLayers-1)
            {
                LeanTween.moveLocalY (_nitrideLayers[i], _targetY, _oxNiAnimTime).setDelay(delay).setOnComplete(DepositStairCaseHardMask);
            }
            else
            {
                LeanTween.moveLocalY (_nitrideLayers[i], _targetY, _oxNiAnimTime).setDelay(delay);

                if (LeanTween.isTweening(MainCamera) == false)
                {
                    LeanTween.move(MainCamera, Step1CutPos.position, _oxNiAnimTime * NumberOfLayers).setDelay(delay).setOnComplete(DisplayStackFormationText);
                }
            }
            delay += _oxNiAnimTime;

        }
    }

    void DisplayStackFormationText()
    {
        //Display string
        _displayTextUIController.DisplayString("STACK DEPOSITION");
    }

/*
//    THIS IS OLD SEQUENCE WHERE NITRIDE HAPPENS FIRST
//    void DepositeOxideNitrideLayers()
//    {
//        //Nitride FIRST
//        _nitrideLayers = new GameObject[NumberOfLayers];
//        _oxideLayers = new GameObject[NumberOfLayers];
//
//        //Calculate anim time using clip length
////        _oxNiAnimTime = (Step1Clip.length - _siSubAnimTime) / (2 * NumberOfLayers);
//
//        delay = 0f;
//
//        for(int i=0; i < NumberOfLayers; i++)
//        {
//            //Nitride
//            _nitrideLayers[i] = GameObject.Instantiate(OneLayer);
//            _nitrideLayers[i].name = "NitrideLayer"+i.ToString();
//            _nitrideLayers[i].tag = "Nitride";
//            _nitrideLayers[i].transform.parent = StructureParent;   
//            _nitrideLayers[i].transform.localScale = new Vector3(MasterDepth, OxideThickness, MasterWidth);
//            _nitrideLayers[i].GetComponent<Renderer>().material = NitrideMat;
//            _nitrideLayers[i].transform.localPosition = _animTopStartPos;
//
//      
//            _targetY = SiliconSubtrateThickness + (NitrideThickness * i) + (OxideThickness * i ) + (OxideThickness / 2f)  ;
//            LeanTween.moveLocalY (_nitrideLayers[i], _targetY, _oxNiAnimTime).setDelay(delay);
//
//
//
//            delay += _oxNiAnimTime;
//
//            //Oxide
//            _oxideLayers[i] = GameObject.Instantiate(OneLayer);
//            _oxideLayers[i].name = "OxideLayer"+i.ToString();
//            _oxideLayers[i].tag = "Oxide";
//            _oxideLayers[i].transform.parent = StructureParent;
//            _oxideLayers[i].transform.localScale = new Vector3(MasterDepth, NitrideThickness,MasterWidth);
//            _oxideLayers[i].GetComponent<Renderer>().material = OxideMat;
//            _oxideLayers[i].transform.localPosition = _animTopStartPos;
//
//
//            _targetY = SiliconSubtrateThickness + (NitrideThickness * i) + (OxideThickness* (i + 1)) + + (NitrideThickness / 2f) ;
//
//
//            //Trigger next event when reached last layer
//            if ( i == NumberOfLayers-1)
//            {
//                LeanTween.moveLocalY (_oxideLayers[i], _targetY, _oxNiAnimTime).setDelay(delay).setOnComplete(DepositStairCaseHardMask);
//            }
//            else
//            {
//                LeanTween.moveLocalY (_oxideLayers[i], _targetY, _oxNiAnimTime).setDelay(delay);
//
//                if (LeanTween.isTweening(MainCamera) == false)
//                {
//                    LeanTween.move(MainCamera, Step1CutPos.position, _oxNiAnimTime * NumberOfLayers).setDelay(delay);
//                }
//            }
//
//            delay += _oxNiAnimTime;
//
//        }
//    }
    */
        
    void DepositStairCaseHardMask()
    {
        //Display string
        _displayTextUIController.DisplayString("PR MASK");

        //Play Step2
//        NANDAudio.PlayOneShot(Step2Clip);

        _targetY = SiliconSubtrateThickness + (NumberOfLayers * OxideThickness) + (NumberOfLayers * NitrideThickness) + (StairCaseHardMaskThickness / 2f);
     
        _staircaseHardMask = GameObject.Instantiate(OneLayer);
        _staircaseHardMask.name = "StaircaseHardMask";
        _staircaseHardMask.transform.parent = StructureParent;
        _staircaseHardMask.transform.localScale = new Vector3(MasterDepth, StairCaseHardMaskThickness, MasterWidth);
        _staircaseHardMask.GetComponent<Renderer>().material = StaircaseHardMaskMat;
        _staircaseHardMask.transform.localPosition = _animTopStartPos;       

        LeanTween.moveLocalY (_staircaseHardMask, _targetY, _stairCaseHardMaskAnimTime).setOnComplete(BeginStaircaseFormation);

    }

    #region StairCaseFormation

    void BeginStaircaseFormation()
    {
        _displayTextUIController.DisplayString("STAIRCASE FORMATION");

        //Calculate anim time using clip length
//        _stairFormAnimTime = (Step2Clip.length - _stairCaseHardMaskAnimTime) / (2 * NumberOfLayers);

        _staircaseHardMaskVertAnimComp = _staircaseHardMask.GetComponent<VertexAnimation>();

        _oxideVertexComp = new VertexAnimation[NumberOfLayers];
        _nitrideVertexComp = new VertexAnimation[NumberOfLayers];

        _staircaseHardMaskYoffset = 1f / NumberOfLayers;

        for (int i=0; i < NumberOfLayers; i++)
        {
            _oxideVertexComp[i] = _nitrideLayers[i].GetComponent<VertexAnimation>();
            _nitrideVertexComp[i] = _oxideLayers[i].GetComponent<VertexAnimation>();
        }

        //staircase hardmask 2
        _staircaseHardMaskVertAnimComp.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateLeftFaceWithCallBack(_stairFormAnimTime, 1f, TriggerOxNiStair1);
    }   

    void TriggerOxNiStair1()
    {
        
        //HardMask reduction
        _staircaseHardMaskVertAnimComp.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateTopFace(_stairFormAnimTime,0);

        //Oxide
        _oxideVertexComp[NumberOfLayers - 1].OffsetDist = StairCaseStepWidth;
        _oxideVertexComp[NumberOfLayers - 1].DebugCurrentMesh();
        _oxideVertexComp[NumberOfLayers - 1].AnimateLeftFace(_stairFormAnimTime, 0f);

        //Nitride
        _nitrideVertexComp[NumberOfLayers - 1].OffsetDist = StairCaseStepWidth;
        _nitrideVertexComp[NumberOfLayers - 1].DebugCurrentMesh();
        _nitrideVertexComp[NumberOfLayers - 1].AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask2);

    }

    void TriggerSiHardMask2()
    {
        //staircase hardmask 2
        _staircaseHardMaskVertAnimComp.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair2);
    }

    void TriggerOxNiStair2()
    {
        int passNum = 2;

        //HardMask reduction
        _staircaseHardMaskVertAnimComp.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            _oxideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //Nitride
            _nitrideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask3);
            }
            else
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask3()
    {
        

        //staircase hardmask
        _staircaseHardMaskVertAnimComp.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair3);
    }

    void TriggerOxNiStair3()
    {
        int passNum = 3;

        //HardMask reduction
        _staircaseHardMaskVertAnimComp.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            _oxideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //Nitride
            _nitrideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask4);
            }
            else
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask4()
    {
        //staircase
        _staircaseHardMaskVertAnimComp.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair4);

    }

    void TriggerOxNiStair4()
    {
        int passNum = 4;

        //HardMask reduction
        _staircaseHardMaskVertAnimComp.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            _oxideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //Nitride
            _nitrideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask5);
            }
            else
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask5()
    {
//        _stairFormAnimTime = 0.1f;

        //staircase hardmask
        _staircaseHardMaskVertAnimComp.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair5);
    }

    void TriggerOxNiStair5()
    {
        int passNum = 5;

        //HardMask reduction
        _staircaseHardMaskVertAnimComp.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            _oxideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //Nitride
            _nitrideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask6);
            }
            else
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask6()
    {
        //staircase hardmask
        _staircaseHardMaskVertAnimComp.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair6);
    }

    void TriggerOxNiStair6()
    {
        int passNum = 6;

        //HardMask reduction
        _staircaseHardMaskVertAnimComp.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            _oxideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //Nitride
            _nitrideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask7);
            }
            else
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask7()
    {
        //staircase hardmask
        _staircaseHardMaskVertAnimComp.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair7);
    }

    void TriggerOxNiStair7()
    {
        int passNum = 7;

        //HardMask reduction
        _staircaseHardMaskVertAnimComp.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            _oxideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //Nitride
            _nitrideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask8);
//                _nitrideVertexComp2[NumberOfLayers - i].AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, FinalizeStaircase);
            }
            else
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);
            }
        }

    }

/// <summary>
/// /END OF 8 LAYER STRUCTURE
/// </summary>

    void TriggerSiHardMask8()
    {
        //staircase hardmask 
        _staircaseHardMaskVertAnimComp.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair8);
    }

    void TriggerOxNiStair8()
    {
        int passNum = 8;

        //HardMask reduction
        _staircaseHardMaskVertAnimComp.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            _oxideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //Nitride
            _nitrideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask9);
            }
            else
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask9()
    {
        //staircase hardmask 
        _staircaseHardMaskVertAnimComp.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair9);
    }

    void TriggerOxNiStair9()
    {
        int passNum = 9;

        //HardMask reduction
        _staircaseHardMaskVertAnimComp.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            _oxideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //Nitride
            _nitrideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask10);
            }
            else
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask10()
    {
        //staircase hardmask
        _staircaseHardMaskVertAnimComp.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair10);
    }

    void TriggerOxNiStair10()
    {
        int passNum = 10;

        //HardMask reduction
        _staircaseHardMaskVertAnimComp.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            _oxideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //Nitride
            _nitrideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask11);
            }
            else
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask11()
    {
        //staircase hardmask 
        _staircaseHardMaskVertAnimComp.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair11);
    }

    void TriggerOxNiStair11()
    {
        int passNum = 11;

        //HardMask reduction
        _staircaseHardMaskVertAnimComp.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            _oxideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //Nitride
            _nitrideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask12);
            }
            else
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask12()
    {
        //staircase hardmask 
        _staircaseHardMaskVertAnimComp.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair12);
    }

    void TriggerOxNiStair12()
    {
        int passNum = 12;

        //HardMask reduction
        _staircaseHardMaskVertAnimComp.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            _oxideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //Nitride
            _nitrideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask13);
            }
            else
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask13()
    {
        //staircase hardmask
        _staircaseHardMaskVertAnimComp.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair13);
    }

    void TriggerOxNiStair13()
    {
        int passNum = 13;

        //HardMask reduction
        _staircaseHardMaskVertAnimComp.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            _oxideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //Nitride
            _nitrideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask14);
            }
            else
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask14()
    {
        //staircase hardmask
        _staircaseHardMaskVertAnimComp.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair14);
    }

    void TriggerOxNiStair14()
    {
        int passNum = 14;

        //HardMask reduction
        _staircaseHardMaskVertAnimComp.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            _oxideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //Nitride
            _nitrideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask15);
            }
            else
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask15()
    {
        //staircase hardmask 
        _staircaseHardMaskVertAnimComp.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair15);
    }

    void TriggerOxNiStair15()
    {
        int passNum = 15;

        //HardMask reduction
        _staircaseHardMaskVertAnimComp.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            _oxideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //Nitride
            _nitrideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask16);
            }
            else
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask16()
    {
        //staircase hardmask 
        _staircaseHardMaskVertAnimComp.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair16);
    }

    void TriggerOxNiStair16()
    {
        int passNum = 16;

        //HardMask reduction
        _staircaseHardMaskVertAnimComp.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            _oxideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //Nitride
            _nitrideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask17);
            }
            else
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask17()
    {
        //staircase hardmask
        _staircaseHardMaskVertAnimComp.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair17);
    }

    void TriggerOxNiStair17()
    {
        int passNum = 17;

        //HardMask reduction
        _staircaseHardMaskVertAnimComp.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            _oxideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //Nitride
            _nitrideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask18);
            }
            else
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask18()
    {
        //staircase hardmask 
        _staircaseHardMaskVertAnimComp.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair18);
    }

    void TriggerOxNiStair18()
    {
        int passNum = 18;

        //HardMask reduction
        _staircaseHardMaskVertAnimComp.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            _oxideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //Nitride
            _nitrideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask19);
            }
            else
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask19()
    {
        //staircase hardmask
        _staircaseHardMaskVertAnimComp.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair19);
    }

    void TriggerOxNiStair19()
    {
        int passNum = 19;

        //HardMask reduction
        _staircaseHardMaskVertAnimComp.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            _oxideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //Nitride
            _nitrideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask20);
            }
            else
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask20()
    {
        //staircase hardmask 
        _staircaseHardMaskVertAnimComp.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair20);
    }

    void TriggerOxNiStair20()
    {
        int passNum = 20;

        //HardMask reduction
        _staircaseHardMaskVertAnimComp.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            _oxideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //Nitride
            _nitrideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask21);
            }
            else
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);
            }
        }

    }  

    void TriggerSiHardMask21()
    {
        //staircase hardmask
        _staircaseHardMaskVertAnimComp.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair21);
    }

    void TriggerOxNiStair21()
    {
        int passNum = 21;

        //HardMask reduction
        _staircaseHardMaskVertAnimComp.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            _oxideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //Nitride
            _nitrideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask22);
            }
            else
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask22()
    {
        //staircase hardmask 
        _staircaseHardMaskVertAnimComp.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair22);
    }

    void TriggerOxNiStair22()
    {
        int passNum = 22;

        //HardMask reduction
        _staircaseHardMaskVertAnimComp.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            _oxideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //Nitride
            _nitrideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask23);
            }
            else
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask23()
    {
        //staircase hardmask 
        _staircaseHardMaskVertAnimComp.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair23);
    }

    void TriggerOxNiStair23()
    {
        int passNum = 23;

        //HardMask reduction
        _staircaseHardMaskVertAnimComp.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            _oxideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //Nitride
            _nitrideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask24);
            }
            else
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask24()
    {
        //staircase hardmask 
        _staircaseHardMaskVertAnimComp.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair24);
    }

    void TriggerOxNiStair24()
    {
        int passNum = 24;

        //HardMask reduction
        _staircaseHardMaskVertAnimComp.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            _oxideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //Nitride
            _nitrideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask25);
            }
            else
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask25()
    {
        //staircase hardmask 
        _staircaseHardMaskVertAnimComp.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair25);
    }

    void TriggerOxNiStair25()
    {
        int passNum = 25;

        //HardMask reduction
        _staircaseHardMaskVertAnimComp.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            _oxideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //Nitride
            _nitrideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask26);
            }
            else
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask26()
    {
        //staircase hardmask 
        _staircaseHardMaskVertAnimComp.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair26);
    }

    void TriggerOxNiStair26()
    {
        int passNum = 26;

        //HardMask reduction
        _staircaseHardMaskVertAnimComp.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            _oxideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //Nitride
            _nitrideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask27);
            }
            else
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask27()
    {
        //staircase hardmask 
        _staircaseHardMaskVertAnimComp.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair27);
    }

    void TriggerOxNiStair27()
    {
        int passNum = 27;

        //HardMask reduction
        _staircaseHardMaskVertAnimComp.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            _oxideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //Nitride
            _nitrideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask28);
            }
            else
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask28()
    {
        //staircase hardmask 
        _staircaseHardMaskVertAnimComp.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair28);
    }

    void TriggerOxNiStair28()
    {
        int passNum = 28;

        //HardMask reduction
        _staircaseHardMaskVertAnimComp.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            _oxideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //Nitride
            _nitrideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask29);
            }
            else
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask29()
    {
        //staircase hardmask 
        _staircaseHardMaskVertAnimComp.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair29);
    }

    void TriggerOxNiStair29()
    {
        int passNum = 29;

        //HardMask reduction
        _staircaseHardMaskVertAnimComp.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            _oxideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //Nitride
            _nitrideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask30);
            }
            else
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask30()
    {
        //staircase hardmask
        _staircaseHardMaskVertAnimComp.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair30);
    }

    void TriggerOxNiStair30()
    {
        int passNum = 30;

        //HardMask reduction
        _staircaseHardMaskVertAnimComp.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            _oxideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //Nitride
            _nitrideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask31);
            }
            else
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask31()
    {
        //staircase hardmask 
        _staircaseHardMaskVertAnimComp.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair31);
    }

    void TriggerOxNiStair31()
    {
        int passNum = 31;

        //HardMask reduction
        _staircaseHardMaskVertAnimComp.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            _oxideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //Nitride
            _nitrideVertexComp[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFaceWithCallBack(_stairFormAnimTime, 0f, FinalizeStaircase);
            }
            else
            {
                _nitrideVertexComp[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);
            }
        }

    }

    #endregion

    void FinalizeStaircase()
    {
        //Destroy Staircase hard mask
        GameObject.Destroy(_staircaseHardMask);

        DepositChannelHoleHardMask();

    }

    void DepositChannelHoleHardMask()
    { 
        _displayTextUIController.DisableDisplay();
        
//        NANDAudio.PlayOneShot(Step3Clip);

        //Move camera 
        LeanTween.move(MainCamera, Step3CutPos.position, _channelHoleHardMaskAnimTime+_channelHoleCylinderDepositAnimTime);


        float thickness = ChannelHoleHardMaskThickness + (OxideThickness * NumberOfLayers) + (NitrideThickness * NumberOfLayers);
        _targetY = SiliconSubtrateThickness + (thickness / 2f);

        _channelHoleMask = GameObject.Instantiate(OneLayer);
        _channelHoleMask.name = "ChannelHoleHardMask";
        _channelHoleMask.transform.parent = StructureParent;
        _channelHoleMask.transform.localScale = new Vector3(MasterDepth - scaleOffset, thickness, MasterWidth + scaleOffset);
        _channelHoleMask.GetComponent<Renderer>().material = ChannelHoleHardMaskMat;
        _channelHoleMask.transform.localPosition = _animTopStartPos;  

        LeanTween.moveLocalY (_channelHoleMask, _targetY, _channelHoleHardMaskAnimTime).setOnComplete(DepositChannelHoleCylinders); 
    }
        
    void DepositChannelHoleCylinders()
    {   
        _channelHoleClndrParent = new GameObject("ChannelHoleCylinderParent");
        _channelHoleClndrParent.transform.parent = transform;

        //one row has 5 cylinders
        //there are 10 rows
        int cylinderNumInOneRow = 5;
        int rowNum = 9;

        float posOffset = MasterDepth / (rowNum-1);
        int offsetMultiplier = 1;

        GameObject[] cylndrs = new GameObject[cylinderNumInOneRow];
        _rowCylndrs = new GameObject[rowNum];

        _rowCylndrs[0] = new GameObject ("CylinderRow");
        _rowCylndrs[0].transform.parent = _channelHoleClndrParent.transform;

        //First, create one row of cylinders with correct diameter
        //Create copies of row in later stage
        for (int i=0; i < cylndrs.Length; i++)
        {
            cylndrs[i] = GameObject.Instantiate(ChannelHoleCylinder);
            cylndrs[i].name = "ChannelHole"+i;
            cylndrs[i].tag = "Channel";
            cylndrs[i].transform.parent = _rowCylndrs[0].transform;
            cylndrs[i].GetComponent<Renderer>().material = ChannelHolesMat;
            cylndrs[i].transform.localScale = new Vector3(ChannelHoleCylinderDia, 1f, ChannelHoleCylinderDia);
            cylndrs[i].transform.localPosition = new Vector3(0,0, -i * offsetMultiplier * posOffset);

        }

        for (int j=1; j < _rowCylndrs.Length; j++)
        {
            //DO NOT CREATE ROWS FOR j = 2 AND 6

            if ((j != 2) && (j != 6))
            {
                _rowCylndrs[j] = GameObject.Instantiate(_rowCylndrs[0]);
                _rowCylndrs[j].transform.parent = _channelHoleClndrParent.transform;

                if(j%2 != 0)
                {
                    _rowCylndrs[j].transform.position = new Vector3( posOffset * j, 0, -posOffset * 0.5f * offsetMultiplier);
                }
                else
                {
                    _rowCylndrs[j].transform.position = new Vector3( posOffset * j, 0, 0);
                }
            }
        }

        float startY = SiliconSubtrateThickness + ChannelHoleHardMaskThickness + (OxideThickness * NumberOfLayers) + (NitrideThickness * NumberOfLayers);
        float targetPosY = SiliconSubtrateThickness + (OxideThickness * NumberOfLayers) + (NitrideThickness * NumberOfLayers) + ChannelHoleHardMaskThickness / 2f;
        float targetScaleY = ChannelHoleHardMaskThickness / 2f;

        _channelHoleClndrParent.transform.position = new Vector3(-MasterDepth/2f , startY, MasterWidth / 2f - posOffset);

        LeanTween.moveLocalY(_channelHoleClndrParent, targetPosY, _channelHoleCylinderDepositAnimTime);
        LeanTween.scaleY(_channelHoleClndrParent, targetScaleY, _channelHoleCylinderDepositAnimTime).setOnComplete(BeginChannelHoleEtching);

    }
        

    void BeginChannelHoleEtching()
    {
        //Display string
        _displayTextUIController.DisplayString("CHANNNEL HOLE");

        //Calculate anim time using clip length
//        _channelHoleEtchAnimTime = (Step3Clip.length - _channelHoleHardMaskAnimTime - _channelHoleCylinderDepositAnimTime);
        
        float channelHole1TargetYPos = SiliconSubtrateThickness + (NumberOfLayers * OxideThickness + NumberOfLayers * NitrideThickness)  / 2f + 0.1f;
        float channelHole1TargetYScale =  (NumberOfLayers * OxideThickness + NumberOfLayers * NitrideThickness)  / 2f;

        //MOVE AND SCALE THE CHANNEL HOLE CYLINDERS
        LeanTween.moveLocalY (_channelHoleClndrParent, channelHole1TargetYPos, _channelHoleEtchAnimTime);
        LeanTween.scaleY (_channelHoleClndrParent, channelHole1TargetYScale, _channelHoleEtchAnimTime);

        //MASK REDUCTION 
//
        VertexAnimation channelHoleMaskVertAnimComp = _channelHoleMask.GetComponent<VertexAnimation>();

        float totalThickness = ChannelHoleHardMaskThickness + (OxideThickness * NumberOfLayers) + (NitrideThickness * NumberOfLayers);
        float offset = (totalThickness - ChannelHoleHardMaskThickness) / totalThickness;

        channelHoleMaskVertAnimComp.OffsetDist = -(1f - offset);
        channelHoleMaskVertAnimComp.DebugCurrentMesh();
        channelHoleMaskVertAnimComp.AnimateTopFace(_channelHoleEtchAnimTime,0);

        //+ MASK FADE
        LeanTween.value(gameObject, 1f, 0.5f, _channelHoleEtchAnimTime).setOnUpdate((float val) =>
            {
                Color temp = ChannelHoleHardMaskMat.color;
                temp.a = val;
                ChannelHoleHardMaskMat.color = temp;
            }).setOnComplete(FinalizeChannelHoleEtch);

    }

    void FinalizeChannelHoleEtch()
    {
        //Display string
        _displayTextUIController.DisableDisplay();

        GameObject.Destroy(_channelHoleMask);

        //Reset ChannelHoleHardMaskMat
        Color temp = ChannelHoleHardMaskMat.color;
        temp.a = 1f;
        ChannelHoleHardMaskMat.color = temp;

        DepositTrenchHardMask();
    }

    void DepositTrenchHardMask()
    {
//        NANDAudio.PlayOneShot(Step4Clip);

        //Display string
        _displayTextUIController.DisplayString("CHANNNEL HOLE");

        float thickness = TrenchHardMaskThickness + (OxideThickness * NumberOfLayers) + (NitrideThickness * NumberOfLayers);
        _targetY = SiliconSubtrateThickness + (thickness / 2f);
         
        _trenchHardMask = GameObject.Instantiate(OneLayer);
        _trenchHardMask.name = "TrenchHardMask2";
        _trenchHardMask.transform.parent = StructureParent;
        _trenchHardMask.transform.localScale = new Vector3(MasterDepth + scaleOffset, thickness, MasterWidth + scaleOffset);
        _trenchHardMask.GetComponent<Renderer>().material = TrenchHardMaskMat;
        _trenchHardMask.transform.localPosition = _animTopStartPos;   


        LeanTween.moveLocalY (_trenchHardMask, _targetY, _trenchHardMaskAnimTime).setOnComplete(MoveCameraBeforeTrenchEtching); 

    }

    void MoveCameraBeforeTrenchEtching()
    {
        _displayTextUIController.DisableDisplay();

        //Move camera before Step 4
        LeanTween.move(MainCamera, Step4ACutPos.position, 2f).setOnComplete(BeginTrenchEtching);

    }

    void BeginTrenchEtching()
    {
        //Display string
        _displayTextUIController.DisplayString("TRENCH ISOLATION");

        _trenchHardMask.transform.parent = transform;
        _siliconSubstrate.transform.parent = transform;

        //Create two more copies of First Second Half Gameobjects
        //Rename existing First Second Half by First_front and Second_front
        _frontHalf = StructureParent.gameObject;
        _frontHalf.name = "FrontHalf";
//        StructureParent.gameObject = null;

        _middleHalf = GameObject.Instantiate(_frontHalf);
        _middleHalf.name = "MiddleHalf";
        _middleHalf.transform.parent = transform;

        _backHalf = GameObject.Instantiate(_frontHalf);
        _backHalf.name = "BackHalf";
        _backHalf.transform.parent = transform;

        float delayFactor = 0.05f;
        //Animate Front 
        int i = NumberOfLayers * 2;

        float totalTime = (NumberOfLayers * 2  * delayFactor) + _trenchFormAnimTime;
        LeanTween.move(MainCamera, Step4BCutPos.position, totalTime).setDelay(totalTime/ 2f).setOnComplete(FinalizeTrench);

        foreach(Transform child in _frontHalf.transform)
        { 
            child.gameObject.GetComponent<VertexAnimation>().OffsetDist = frontOffset;
            child.gameObject.GetComponent<VertexAnimation>().DebugCurrentMesh();
            child.gameObject.GetComponent<VertexAnimation>().AnimateBackFace(_trenchFormAnimTime, Mathf.Abs(i*delayFactor - delayFactor));
            i--;
        }

        //Animate middle
        int j=NumberOfLayers * 2;
        foreach(Transform child in _middleHalf.transform)
        {
            child.gameObject.GetComponent<VertexAnimation>().OffsetDist = middleOffset;
            child.gameObject.GetComponent<VertexAnimation>().DebugCurrentMesh();
            child.gameObject.GetComponent<VertexAnimation>().AnimateBackFace(_trenchFormAnimTime, Mathf.Abs(j*delayFactor - delayFactor));

            child.gameObject.GetComponent<VertexAnimation>().OffsetDist = -middleOffset;
            child.gameObject.GetComponent<VertexAnimation>().DebugCurrentMesh();
            child.gameObject.GetComponent<VertexAnimation>().AnimateFrontFace(_trenchFormAnimTime, Mathf.Abs(j*delayFactor - delayFactor));
            j--;
        }

        //Animate Back
        int k=NumberOfLayers * 2;
        foreach(Transform child in _backHalf.transform)
        {
            child.gameObject.GetComponent<VertexAnimation>().OffsetDist = -frontOffset;
            child.gameObject.GetComponent<VertexAnimation>().DebugCurrentMesh();   
            child.gameObject.GetComponent<VertexAnimation>().AnimateFrontFace(_trenchFormAnimTime, Mathf.Abs(k*delayFactor - delayFactor));
            k--;

        }

        //Fade out Trench Hard Mask
        LeanTween.value(1f,0.1f,_trenchMaskFadeTime).setOnUpdate((float val) =>
            {
                Color temp = TrenchHardMaskMat.color;
                temp.a = val;
                TrenchHardMaskMat.color = temp;

            });

                
    }

    void FinalizeTrench()
    {
        _displayTextUIController.DisableDisplay();

        //reset alpha on TrenchHardMaskMat
        Color temp = TrenchHardMaskMat.color;
        temp.a = 1f;
        TrenchHardMaskMat.color = temp;
            
        GameObject.Destroy(_trenchHardMask);

        TriggerNitrideRemoval();
    }

    void TriggerNitrideRemoval()
    {
        //Display string
        _displayTextUIController.DisplayString("NITRIDE REMOVAL");

        //Calculate anim time using clip length
//        _trenchFormAnimTime = Step4Clip.length - _trenchHardMaskAnimTime - _trenchFormAnimTime;
        
        //Before removal, make the ChannelHoleMat to solid shader
        ChannelHolesMat.shader = Shader.Find("Standard");

        //Change NitrideMat shader to transperant
        NitrideMat.shader = Shader.Find("Legacy Shaders/Transparent/Diffuse");

        //Animate Alpha to zero
        LeanTween.value(1f,0f,_nitrideRemovalAnimTime).setOnUpdate((float val) =>
            {
                Color temp = NitrideMat.color;
                temp.a = val;
                NitrideMat.color = temp;

            }).setOnComplete(FinalizeNitrideRemoval);

    }

    void FinalizeNitrideRemoval()
    { 
        _displayTextUIController.DisableDisplay();

        //Find all gameobjects with tag = Nitride
        //and disable 
        foreach(Transform t in _frontHalf.transform)
        {
            if (t.gameObject.tag == "Nitride")
                t.gameObject.SetActive(false);
        }

        foreach(Transform t in _middleHalf.transform)
        {
            if (t.gameObject.tag == "Nitride")
                t.gameObject.SetActive(false);
        }

        foreach(Transform t in _backHalf.transform)
        {
            if (t.gameObject.tag == "Nitride")
                t.gameObject.SetActive(false);
        }

        //Reset NitrideMat
        Color temp = NitrideMat.color;
        temp.a = 1f;
        NitrideMat.color = temp;

        NitrideMat.shader = Shader.Find("Mobile/Diffuse");    
       

        //Move Camera to step 5
        LeanTween.move(MainCamera, Step5CutPos.position, 2f).setOnComplete(TriggerTiNBarrier);

        //As Nitride is removed, make the cylinder solid 
        //Animate alpha to 1
        LeanTween.value(gameObject, ChannelHolesMat.color.a, 1f, 2f).setOnUpdate((float val) => {
            Color channelHoleTempCol = ChannelHolesMat.color;
            channelHoleTempCol.a = val;
            ChannelHolesMat.color = channelHoleTempCol;
        });

 

    }

    void TriggerTiNBarrier()
    {
//        NANDAudio.PlayOneShot(Step5Clip);

        float delay = 1f;
//        _tungRecessAnimTime = delay = _wRecessAnimTime = Step5Clip.length / 3f;


        //Animate Color of ChannelHoles from existing to Nitride Blue
        Color currentColor = ChannelHolesMat.color;
//        currentColor.a = 1f;
        ChannelHolesMat.color = currentColor;

        LeanTween.value(gameObject, currentColor, NANDUtils.AppExLightBrightBlue, _tungRecessAnimTime).setOnUpdate((Color col) =>{
            ChannelHolesMat.color = col;
        });

        Vector3 targetScale = new Vector3(1.4f, 1f, 1.4f);

        //Scale the cylinders at the same time
        for (int j=0; j < _rowCylndrs.Length; j++)
        {
            if(_rowCylndrs[j] != null) 
            {
                foreach(Transform child in _rowCylndrs[j].transform)
                {
                    LeanTween.scale(child.gameObject, targetScale, _tungRecessAnimTime);
                 }
            }
        }

        //Oxide Toon shader will have blue outline
        LeanTween.value(gameObject, 0f, 0.5f, _tungRecessAnimTime).setOnUpdate((float val) =>{
            OxideMat.SetFloat("_Outline", val);
        }).setOnComplete(TriggerWDeposition);

    } 

    void TriggerWDeposition()
    {
        //Display string
        _displayTextUIController.DisplayString("TUNGSTEN FILL");

        //Make the ChannelHole mat shader diffuse
//        ChannelHolesMat.shader = Shader.Find("Legacy Shaders/Diffuse Fast");         

        //1: Replace Nitride layers Material
        //2: SetActive nitrides to true
        foreach(Transform t in _frontHalf.transform)
        {
            if (t.gameObject.tag == "Nitride")
            {
                t.gameObject.GetComponent<Renderer>().material = WMat;
                t.gameObject.SetActive(true);

            }
        }

        foreach(Transform t in _middleHalf.transform)
        {
            if (t.gameObject.tag == "Nitride")
            {
                t.gameObject.GetComponent<Renderer>().material = WMat;
                t.gameObject.SetActive(true);
            }
        }

        foreach(Transform t in _backHalf.transform)
        {
            if (t.gameObject.tag == "Nitride")
            {
                t.gameObject.GetComponent<Renderer>().material = WMat;
                t.gameObject.SetActive(true);
            }
        }

        //Make sure WMAT has the transparent shader
        WMat.shader = Shader.Find("Legacy Shaders/Transparent/Diffuse");

        //Set Alpha to Zero then animate to 1
        Color temp = WMat.color;
        temp.a = 0f;
        WMat.color = temp;

        LeanTween.value(gameObject, 0f, 1f, _wRecessAnimTime).setOnUpdate((float val) =>{
            temp = WMat.color;
            temp.a = val;
            WMat.color = temp;
        }).setOnComplete(MoveCameraBeforeWDepositInTrench);



    }

    void MoveCameraBeforeWDepositInTrench()
    {
        _displayTextUIController.DisableDisplay();

        //Move Camera back to step4 for better view
        LeanTween.move(MainCamera, Step4BCutPos.position, 2f).setOnComplete(TriggerWDepositionInTrench);
    }


    void TriggerWDepositionInTrench()
    {
        
        //3: Create 4 W cubes, 2 per trench to filll the trench 
        //create one cube at the edge facing camera
        float wTrenchThichkness = (OxideThickness * NumberOfLayers) + (NitrideThickness * NumberOfLayers);

        trenchDepth = MasterDepth / 10f;
        float trench1CenterX = MasterDepth / 4f;
        float trench2CenterX = -MasterDepth / 4f;

        _wTrench1_1 = GameObject.Instantiate(OneLayer);
        _wTrench1_1.name = "WTrench1_1";
        _wTrench1_1.transform.parent = transform;
        _wTrench1_1.transform.localScale = new Vector3(trenchDepth / 2f,wTrenchThichkness,MasterWidth);
        _wTrench1_1.transform.position = new Vector3(trench1CenterX + trenchDepth / 4f, SiliconSubtrateThickness + wTrenchThichkness / 2f, 0f);
        _wTrench1_1.GetComponent<Renderer>().material = WMat;

        _wTrench1_2 = GameObject.Instantiate(OneLayer);
        _wTrench1_2.name = "WTrench1_2";
        _wTrench1_2.transform.parent = transform;
        _wTrench1_2.transform.localScale = new Vector3(trenchDepth / 2f,wTrenchThichkness,MasterWidth);
        _wTrench1_2.transform.position = new Vector3(trench1CenterX - trenchDepth / 4f, SiliconSubtrateThickness + wTrenchThichkness / 2f, 0f);
        _wTrench1_2.GetComponent<Renderer>().material = WMat;

        _wTrench2_1 = GameObject.Instantiate(OneLayer);
        _wTrench2_1.name = "WTrench2_1";
        _wTrench2_1.transform.parent = transform;
        _wTrench2_1.transform.localScale = new Vector3(trenchDepth / 2f,wTrenchThichkness,MasterWidth);
        _wTrench2_1.transform.position = new Vector3(trench2CenterX + trenchDepth / 4f, SiliconSubtrateThickness + wTrenchThichkness / 2f, 0f);
        _wTrench2_1.GetComponent<Renderer>().material = WMat;

        _wTrench2_2 = GameObject.Instantiate(OneLayer);
        _wTrench2_2.name = "WTrench2_2";
        _wTrench2_2.transform.parent = transform;
        _wTrench2_2.transform.localScale = new Vector3(trenchDepth / 2f,wTrenchThichkness,MasterWidth);
        _wTrench2_2.transform.position = new Vector3(trench2CenterX - trenchDepth / 4f, SiliconSubtrateThickness + wTrenchThichkness / 2f, 0f);
        _wTrench2_2.GetComponent<Renderer>().material = WMat;

        _wTrench3 = GameObject.Instantiate(OneLayer);
        _wTrench3.name = "WTrench3";
        _wTrench3.transform.parent = transform;
        _wTrench3.transform.localScale = new Vector3(MasterDepth, wTrenchThichkness, 0.1f);
        _wTrench3.transform.position = new Vector3(0f, SiliconSubtrateThickness + wTrenchThichkness / 2f, MasterWidth / 2f);
        _wTrench3.GetComponent<Renderer>().material = WTransMat;


        //Aniamte alpha pn _wTrench3 to 0
        LeanTween.value(gameObject, WTransMat.color.a, 0f, 5f).setOnUpdate((float val) => {
            Color temp = WTransMat.color;
            temp.a = val;
            WTransMat.color = temp;
        }).setOnComplete(BeginWRecess);

    }

    void BeginWRecess()
    {
        //Display string
        _displayTextUIController.DisplayString("TUNGSTEN RECESS");

        //4: Animate _wTrench 11 12 21 22
        delay = 0f;

        _wTrench1_1.GetComponent<VertexAnimation>().OffsetDist = trenchDepth/2f;
        _wTrench1_1.GetComponent<VertexAnimation>().DebugCurrentMesh();
        _wTrench1_1.GetComponent<VertexAnimation>().AnimateBackFace(_wRecessAnimTime, delay);

        _wTrench1_2.GetComponent<VertexAnimation>().OffsetDist = -trenchDepth/2f;
        _wTrench1_2.GetComponent<VertexAnimation>().DebugCurrentMesh();
        _wTrench1_2.GetComponent<VertexAnimation>().AnimateFrontFace(_wRecessAnimTime, delay);

        _wTrench2_1.GetComponent<VertexAnimation>().OffsetDist = trenchDepth/2f;
        _wTrench2_1.GetComponent<VertexAnimation>().DebugCurrentMesh();
        _wTrench2_1.GetComponent<VertexAnimation>().AnimateBackFace(_wRecessAnimTime, delay);

        _wTrench2_2.GetComponent<VertexAnimation>().OffsetDist = -trenchDepth/2f;
        _wTrench2_2.GetComponent<VertexAnimation>().DebugCurrentMesh();
        _wTrench2_2.GetComponent<VertexAnimation>().AnimateFrontFaceWithCallBack(_wRecessAnimTime, delay, finalizeWRecess); 

    }

    void finalizeWRecess()
    {
        _displayTextUIController.DisableDisplay();

        if (_wTrench1_1 != null) GameObject.Destroy(_wTrench1_1);
        if (_wTrench1_2 != null) GameObject.Destroy(_wTrench1_2);
        if (_wTrench2_1 != null) GameObject.Destroy(_wTrench2_1);
        if (_wTrench2_2 != null) GameObject.Destroy(_wTrench2_2);
        if (_wTrench3 != null) GameObject.Destroy(_wTrench3);

        //Reset toon shader
        OxideMat.SetFloat("_Outline", 0f);


        //Move camera to Step3Cutpos for better veiew
        LeanTween.move(MainCamera, Step3CutPos.position, 2f).setOnComplete(BeginStaircaseContactDeposit);

        //Change shader on wMAT
        WMat.shader = Shader.Find("Standard");
        WMat.SetFloat("_Mode",0f);

    }

    void BeginStaircaseContactDeposit()
    {
        float thickness = (NumberOfLayers * OxideThickness)+ (NumberOfLayers * NitrideThickness) + StairCaseContactThickness;
        _targetY = SiliconSubtrateThickness + thickness / 2;

        _staircaseContact = GameObject.Instantiate(OneLayer);
        _staircaseContact.name = "StaircaseContact";
        _staircaseContact.transform.parent = StructureParent;
        _staircaseContact.transform.localScale = new Vector3(MasterDepth - scaleOffset, thickness, MasterWidth + scaleOffset);
        _staircaseContact.GetComponent<Renderer>().material = StaircaseContactMat;
        _staircaseContact.transform.localPosition = _animTopStartPos;  

        LeanTween.moveLocalY (_staircaseContact, _targetY, _stairCaseContactDepositAnimTime).setOnComplete(BeginStaircaseContactHardMaskDeposit); 
    }

    void BeginStaircaseContactHardMaskDeposit()
    {        
        _targetY = SiliconSubtrateThickness + (NumberOfLayers * OxideThickness)+ (NumberOfLayers * NitrideThickness) + StairCaseContactThickness + (stairCaseContactHardMaskThickness / 2f);

        _staircaseContactHardMask = GameObject.Instantiate(OneLayer);
        _staircaseContactHardMask.name = "StaircaseContactHardMask";
        _staircaseContactHardMask.transform.parent = StructureParent;
        _staircaseContactHardMask.transform.localScale = new Vector3(MasterDepth - scaleOffset, stairCaseContactHardMaskThickness, MasterWidth + scaleOffset);
        _staircaseContactHardMask.GetComponent<Renderer>().material = StaircaseContactHardMaskMat;
        _staircaseContactHardMask.transform.localPosition = _animTopStartPos;  

        LeanTween.moveLocalY (_staircaseContactHardMask, _targetY, _stairCaseContactHardMaskDepositTime).setOnComplete(BeginStaircaseContactFading); 

    }

    void BeginStaircaseContactFading()
    {
        LeanTween.value(gameObject, StaircaseContactMat.color.a, 0.5f, 2f).setOnUpdate((float val) =>{
            Color temp = StaircaseContactMat.color;
            temp.a = val;
            StaircaseContactMat.color = temp;
        });

        LeanTween.value(gameObject, StaircaseContactHardMaskMat.color.a, 0.5f, 2f).setOnUpdate((float val) =>{
            Color temp = StaircaseContactHardMaskMat.color;
            temp.a = val;
            StaircaseContactHardMaskMat.color = temp;
        }).setOnComplete(BeginStaircaseContactChannelEtching);
    } 

    void BeginStaircaseContactChannelEtching()
    {
        //Display string
        _displayTextUIController.DisplayString("CONTACT HOLE");

        _staircaseContactChannelsFront = new GameObject[NumberOfLayers]; 
        _staircaseContactChannelsMiddle = new GameObject[NumberOfLayers];
        _staircaseContactChannelsBack = new GameObject[NumberOfLayers];

        //Front X = 13
        //Middle X = 0
        //Back X = -13

        float xOffset = 13f;

        float startY = SiliconSubtrateThickness + (NumberOfLayers * OxideThickness)+ (NumberOfLayers * NitrideThickness) + StairCaseContactThickness + stairCaseContactHardMaskThickness;

        float channelHole1TargetYPos = SiliconSubtrateThickness + NumberOfLayers * OxideThickness + NumberOfLayers * NitrideThickness + StairCaseContactThickness + stairCaseContactHardMaskThickness / 2f;
        float channelHole1TargetYScale =  stairCaseContactHardMaskThickness / 2f;

        //front
        for(int i = 0; i < _staircaseContactChannelsFront.Length - 1; i++)
        {
            _staircaseContactChannelsFront[i] = GameObject.Instantiate(ChannelHoleCylinder);
            _staircaseContactChannelsFront[i].name = "ContactHole"+i;
            _staircaseContactChannelsFront[i].tag = "Channel";
            _staircaseContactChannelsFront[i].transform.parent =_frontHalf.transform;
            _staircaseContactChannelsFront[i].GetComponent<Renderer>().material = StaircaseContactChannelMat;
            _staircaseContactChannelsFront[i].transform.localScale = new Vector3(stairCaseChannelHoleDia, 1f, stairCaseChannelHoleDia);
            _staircaseContactChannelsFront[i].transform.localPosition = new Vector3(xOffset,startY, -MasterWidth / 2f + (i +1) * stairCaseChannelGap+ i * stairCaseChannelGap);

            //MOVE AND SCALE THE CHANNEL HOLE CYLINDERS
            LeanTween.moveLocalY (_staircaseContactChannelsFront[i], channelHole1TargetYPos, _staircaseContactEtchAnimTime);
            LeanTween.scaleY (_staircaseContactChannelsFront[i], channelHole1TargetYScale, _staircaseContactEtchAnimTime);
        }

        //middle
        for(int i = 0; i < _staircaseContactChannelsMiddle.Length  - 1; i++)
        {
            _staircaseContactChannelsMiddle[i] = GameObject.Instantiate(ChannelHoleCylinder);
            _staircaseContactChannelsMiddle[i].name = "ChannelHole"+i;
            _staircaseContactChannelsMiddle[i].tag = "Channel";
            _staircaseContactChannelsMiddle[i].transform.parent =_middleHalf.transform;
            _staircaseContactChannelsMiddle[i].GetComponent<Renderer>().material = StaircaseContactChannelMat;
            _staircaseContactChannelsMiddle[i].transform.localScale = new Vector3(stairCaseChannelHoleDia, 1f, stairCaseChannelHoleDia);
            _staircaseContactChannelsMiddle[i].transform.localPosition = new Vector3(0f,startY, -MasterWidth / 2f + (i +1) * stairCaseChannelGap+ i * stairCaseChannelGap);

            //MOVE AND SCALE THE CHANNEL HOLE CYLINDERS
            LeanTween.moveLocalY (_staircaseContactChannelsMiddle[i], channelHole1TargetYPos, _staircaseContactEtchAnimTime);
            LeanTween.scaleY (_staircaseContactChannelsMiddle[i], channelHole1TargetYScale, _staircaseContactEtchAnimTime);
        }

        //Back
        for(int i = 0; i < _staircaseContactChannelsBack.Length - 1; i++)
        {
            _staircaseContactChannelsBack[i] = GameObject.Instantiate(ChannelHoleCylinder);
            _staircaseContactChannelsBack[i].name = "ChannelHole"+i;
            _staircaseContactChannelsBack[i].tag = "Channel";
            _staircaseContactChannelsBack[i].transform.parent =_backHalf.transform;
            _staircaseContactChannelsBack[i].GetComponent<Renderer>().material = StaircaseContactChannelMat;
            _staircaseContactChannelsBack[i].transform.localScale = new Vector3(stairCaseChannelHoleDia, 1f, stairCaseChannelHoleDia);
            _staircaseContactChannelsBack[i].transform.localPosition = new Vector3(-xOffset,startY, -MasterWidth / 2f + (i +1) * stairCaseChannelGap+ i * stairCaseChannelGap);

            //MOVE AND SCALE THE CHANNEL HOLE CYLINDERS
            LeanTween.moveLocalY (_staircaseContactChannelsBack[i], channelHole1TargetYPos, _staircaseContactEtchAnimTime);
            if (i == _staircaseContactChannelsBack.Length - 2)
            {
                LeanTween.scaleY (_staircaseContactChannelsBack[i], channelHole1TargetYScale, _staircaseContactEtchAnimTime).setOnComplete(MoveCameraBeforeFinalizeStaircaseContactEtching);
            }
            else
            {
                LeanTween.scaleY (_staircaseContactChannelsBack[i], channelHole1TargetYScale, _staircaseContactEtchAnimTime);
            }
        }       

    }

    void MoveCameraBeforeFinalizeStaircaseContactEtching()
    {
        float channelHole1TargetYPos = SiliconSubtrateThickness + StairCaseContactThickness+ (NumberOfLayers * OxideThickness + NumberOfLayers * NitrideThickness )  / 2f + 0.1f;
        float channelHole1TargetYScale =  (NumberOfLayers * OxideThickness + NumberOfLayers * NitrideThickness)  / 2f;

        //HardMask reduction_staircaseContactHardMask
        VertexAnimation staircaseHardMaskVertAnimComp = _staircaseContactHardMask.GetComponent<VertexAnimation>();

        staircaseHardMaskVertAnimComp.OffsetDist = -1f;
        staircaseHardMaskVertAnimComp.DebugCurrentMesh();
        staircaseHardMaskVertAnimComp.AnimateTopFace(_staircaseContactEtchAnimTime,0);

        //front
        for(int i = 0; i < _staircaseContactChannelsFront.Length - 1; i++)
        {
            //MOVE AND SCALE THE CHANNEL HOLE CYLINDERS
            LeanTween.moveLocalY (_staircaseContactChannelsFront[i], channelHole1TargetYPos, _staircaseContactEtchAnimTime);
            LeanTween.scaleY (_staircaseContactChannelsFront[i], channelHole1TargetYScale, _staircaseContactEtchAnimTime);
        }

        //middle
        for(int i = 0; i < _staircaseContactChannelsMiddle.Length  - 1; i++)
        {
            //MOVE AND SCALE THE CHANNEL HOLE CYLINDERS
            LeanTween.moveLocalY (_staircaseContactChannelsMiddle[i], channelHole1TargetYPos, _staircaseContactEtchAnimTime);
            LeanTween.scaleY (_staircaseContactChannelsMiddle[i], channelHole1TargetYScale, _staircaseContactEtchAnimTime);
        }

        //Back
        for(int i = 0; i < _staircaseContactChannelsBack.Length - 1; i++)
        {
            //MOVE AND SCALE THE CHANNEL HOLE CYLINDERS
            LeanTween.moveLocalY (_staircaseContactChannelsBack[i], channelHole1TargetYPos, _staircaseContactEtchAnimTime);
            if (i == _staircaseContactChannelsBack.Length - 2)
            {
                LeanTween.scaleY (_staircaseContactChannelsBack[i], channelHole1TargetYScale, _staircaseContactEtchAnimTime).setOnComplete(FinalizeStaircaseContactEtching);
            }
            else
            {
                LeanTween.scaleY (_staircaseContactChannelsBack[i], channelHole1TargetYScale, _staircaseContactEtchAnimTime);
            }
        }

        //Begin Staircase channel etching


        _displayTextUIController.DisableDisplay();
        
        LeanTween.move(MainCamera, Step6CutPos.position, 2f);
    }

    void FinalizeStaircaseContactEtching()
    {
        GameObject.Destroy(_staircaseContactHardMask);

        BeginTriNiDepositOnContact();
    }

    void BeginTriNiDepositOnContact()
    {
        //Animate Color of ChannelHoles from existing to Nitride Blue
        Color currentColor = StaircaseContactChannelMat.color;

        LeanTween.value(gameObject, currentColor, NANDUtils.AppExLightBrightBlue, _triNiDepositOnChannelAnimTime).setOnUpdate((Color col) =>{
            StaircaseContactChannelMat.color = col;
        }).setOnComplete(MoveCameraBeforeTungstonFill);
    }

    void MoveCameraBeforeTungstonFill()
    {
        //Change Shader for StaircaseContactChannel
//        StaircaseContactChannelMat.shader = Shader.Find("Standard");
        
        LeanTween.move(MainCamera, _mainCamStartPos, 5f).setOnComplete(FillTungstonInStaircaseContactHoles);
    }

    void FillTungstonInStaircaseContactHoles()
    {

        //Display string
        _displayTextUIController.DisplayString("TUNGSTEN FILL");

        //Animate Color of StaircaseContactChannelMat from existing to Tungston orange
        Color currentColor = StaircaseContactChannelMat.color;

        //Display string
        _displayTextUIController.DisplayString("TUNGSTEN FILL");

        LeanTween.value(gameObject, currentColor, NANDUtils.AppExLightOrange, _triNiDepositOnChannelAnimTime).setOnUpdate((Color col) =>{
            StaircaseContactChannelMat.color = col;
        }).setOnComplete(BegineCameraFlyBy);
    }

    void BegineCameraFlyBy()
    {
        //Display string
        _displayTextUIController.DisableDisplay();

        _displayTextUIController.DisableDisplay();

        Vector3[] splinePoints = new Vector3[CameraFlyByPoints.Length];

        for (int i=0; i < splinePoints.Length; i++)
        {
            splinePoints[i] = CameraFlyByPoints[i].position;
        }

        LeanTween.moveSpline(MainCamera, splinePoints, _flyByTime).setOnComplete(FinalizeCameraFlyBy);

    }

    void FinalizeCameraFlyBy()
    {
        EnableStoryModeUI();
    }
    

    void OnDestroy()
    {
        ResetMaterials();
    }

    public void Replay()
    {
        DisableStoryModeUI();

        TeleportationSystem.SetActive(false);

        //Destroy previous structure
        foreach(Transform child in _frontHalf.transform)
        {
            if(child.gameObject != null)
                GameObject.Destroy(child.gameObject);
            
        }

        _frontHalf.gameObject.name = "StructureParent";

        if(_middleHalf != null) GameObject.Destroy(_middleHalf);
        if(_backHalf != null) GameObject.Destroy(_backHalf);
        if(_siliconSubstrate != null) GameObject.Destroy(_siliconSubstrate);
        if(_channelHoleClndrParent != null) GameObject.Destroy(_channelHoleClndrParent);
        if(_wFill != null) GameObject.Destroy(_wFill);

        Initializer();

    }

    void EnableStoryModeUI()
    {
        StoryModeUIGameobject.SetActive(true);
    }

    void DisableStoryModeUI()
    {
        StoryModeUIGameobject.SetActive(false);
    }
        
}
