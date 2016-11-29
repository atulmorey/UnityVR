using UnityEngine;
using System.Collections;

public class NANDStorySequence : MonoBehaviour 
{

    [Header("Transforms")]
    public Transform StructureParent;
    public Transform Step3CutPos;
    public Transform Step4CutPos;
    public Transform Step5CutPos;


    [Header("GameObjects")]
    public GameObject MainCamera;
    public GameObject OneLayer;
    public GameObject ChannelHoleCylinder;
    public GameObject Teleport;

    [Header("Materials")]
    public Material SiliconSubstrateMat;
    public Material OxideMat;
    public Material NitrideMat;
    public Material ChannelHardMaskMat;
    public Material ChannelHolesMat;
    public Material StaircaseHardMaskMat;
    public Material TrenchHardMaskMat;
    public Material WOxideMat;
    public Material WChannelMat;
    public Material WMat;
    public Material StaircaseContactMat;
    public Material StaircaseContactHardMaskMat;

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
    private GameObject[] _staircaseContacts;
    private GameObject[] _staircaseContactHardMasks;
    private GameObject _wFill;

    private Vector3 _animStartPos = new Vector3 (0,1000,0);
    private Vector3 _mainCamStartPos;


    //animTimes
    private float _siSubAnimTime = 1f;
    private float _oxNiAnimTime = 1f;
    private float _stairCaseHardMaskAnimTime = 1f;
    private float _stairFormAnimTime = 1f;
    private float _channelHoleHardMaskAnimTime = 1f;
    private float _channelHoleCylinderDepositAnimTime = 2f;
    private float _channelHoleEtchAnimTime = 2f;
    private float _trenchHardMaskAnimTime = 3f;
    private float _trenchMaskFadeTime = 7f;
    private float _trenchFormAnimTime = 7f;
    private float _nitrideRemovalAnimTime = 5f;
    private float _tungRecessAnimTime = 3f;
    private float _staircaseContactMaskEtchAnimTime = 2f;
    private float _staircaseContactEtchAnimTime = 2f;
    private float _wRecessAnimTime = 3f;
    private float _wFillAnimTime = 3f;

    //distances
    private float _targetY = 0f;
    private float _staircaseHardMaskYoffset = 0f;

    private VertexAnimation _staircaseHardMaskVertAnimComp;
    private VertexAnimation[] _oxideVertexComp;
    private VertexAnimation[] _nitrideVertexComp;

    float delay = 0.1f; //Keep if equal to animtime as a start
    float scaleOffset = 1f;
    float frontOffset = 0.8f;
    float middleOffset = 0.3f;

    /// <Trench Documentation>
    /// Thickness of front and back quadrant is 285 nM
    /// Thickness of middle quadrant is (
    /// </summary>

    // Use this for initialization
    void Start () 
    {
        _mainCamStartPos = MainCamera.transform.position;

        NANDAudio = GetComponent<AudioSource>();

        //Play Welcome clip
        NANDAudio.PlayOneShot(WelcomeClip);

        Debug.Assert(NANDAudio != null, "There is no Audio Source attached!");
        
        Teleport.SetActive(false);

        if (NANDAudio.isPlaying)
        {
            //Run a blank Tween tilll the clip is playing
            LeanTween.value(gameObject, 0f, 1f, WelcomeClip.length).setOnComplete(DepostiSiliconSubstrate);

        }
        else
        {
            DepostiSiliconSubstrate();
        }

    
    }

    void DepostiSiliconSubstrate()
    {
        //Play Step1
        NANDAudio.PlayOneShot(Step1Clip);
        
        
        //Silicon substrate
        _targetY = SiliconSubtrateThickness / 2f;

        _siliconSubstrate = GameObject.Instantiate(OneLayer);
        _siliconSubstrate.name = "SiliconSubstrate";
        _siliconSubstrate.transform.parent = StructureParent;
        _siliconSubstrate.transform.localScale = new Vector3(MasterDepth,SiliconSubtrateThickness,MasterWidth);

        _siliconSubstrate.GetComponent<Renderer>().material = SiliconSubstrateMat;

        _siliconSubstrate.transform.localPosition = _animStartPos;

        LeanTween.moveLocalY (_siliconSubstrate, _targetY, _siSubAnimTime).setOnComplete(DepositeOxideNitrideLayers);
    }

    void DepositeOxideNitrideLayers()
    {
        //Nitride FIRST
        _nitrideLayers = new GameObject[NumberOfLayers];
        _oxideLayers = new GameObject[NumberOfLayers];

        //Calculate anim time using clip length
        _oxNiAnimTime = (Step1Clip.length - _siSubAnimTime) / (2 * NumberOfLayers);

        delay = 0f;

        for(int i=0; i < NumberOfLayers; i++)
        {
            //Nitride
            _nitrideLayers[i] = GameObject.Instantiate(OneLayer);
            _nitrideLayers[i].name = "NitrideLayer"+i.ToString();
            _nitrideLayers[i].tag = "Nitride";
            _nitrideLayers[i].transform.parent = StructureParent;   
            _nitrideLayers[i].transform.localScale = new Vector3(MasterDepth, OxideThickness, MasterWidth);
            _nitrideLayers[i].GetComponent<Renderer>().material = NitrideMat;
            _nitrideLayers[i].transform.localPosition = _animStartPos;

      
            _targetY = SiliconSubtrateThickness + (NitrideThickness * i) + (OxideThickness * i ) + (OxideThickness / 2f)  ;
            LeanTween.moveLocalY (_nitrideLayers[i], _targetY, _oxNiAnimTime).setDelay(delay);



            delay += _oxNiAnimTime;

            //Oxide
            _oxideLayers[i] = GameObject.Instantiate(OneLayer);
            _oxideLayers[i].name = "OxideLayer"+i.ToString();
            _oxideLayers[i].tag = "Oxide";
            _oxideLayers[i].transform.parent = StructureParent;
            _oxideLayers[i].transform.localScale = new Vector3(MasterDepth, NitrideThickness,MasterWidth);
            _oxideLayers[i].GetComponent<Renderer>().material = OxideMat;
            _oxideLayers[i].transform.localPosition = _animStartPos;


            _targetY = SiliconSubtrateThickness + (NitrideThickness * i) + (OxideThickness* (i + 1)) + + (NitrideThickness / 2f) ;


            //Trigger next event when reached last layer
            if ( i == NumberOfLayers-1)
            {
                LeanTween.moveLocalY (_oxideLayers[i], _targetY, _oxNiAnimTime).setDelay(delay).setOnComplete(DepositStairCaseHardMask);
            }
            else
            {
                LeanTween.moveLocalY (_oxideLayers[i], _targetY, _oxNiAnimTime).setDelay(delay);

                if (LeanTween.isTweening(MainCamera) == false)
                {
                    //Move camera
                    float currentY = MainCamera.transform.position.y;
                    float targetY = currentY + OxideThickness * NumberOfLayers;
                    LeanTween.moveLocalY(MainCamera, targetY, _oxNiAnimTime * NumberOfLayers).setDelay(delay);
                }
            }

            delay += _oxNiAnimTime;

        }
    }
        

    void DepositStairCaseHardMask()
    {
        //Play Step2
        NANDAudio.PlayOneShot(Step2Clip);

        _targetY = SiliconSubtrateThickness + (NumberOfLayers * OxideThickness) + (NumberOfLayers * NitrideThickness) + (StairCaseHardMaskThickness / 2f);
     
        _staircaseHardMask = GameObject.Instantiate(OneLayer);
        _staircaseHardMask.name = "StaircaseHardMask";
        _staircaseHardMask.transform.parent = StructureParent;
        _staircaseHardMask.transform.localScale = new Vector3(MasterDepth, StairCaseHardMaskThickness, MasterWidth);
        _staircaseHardMask.GetComponent<Renderer>().material = StaircaseHardMaskMat;
        _staircaseHardMask.transform.localPosition = _animStartPos;       

        LeanTween.moveLocalY (_staircaseHardMask, _targetY, _stairCaseHardMaskAnimTime).setOnComplete(BeginStaircaseFormation);

    }

    #region StairCaseFormation

    void BeginStaircaseFormation()
    {
        //Calculate anim time using clip length
        _stairFormAnimTime = (Step2Clip.length - _stairCaseHardMaskAnimTime) / (2 * NumberOfLayers);

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
        int passNum = 1;

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
        NANDAudio.PlayOneShot(Step3Clip);

        //Move camera 
        LeanTween.move(MainCamera, Step3CutPos.position, _channelHoleHardMaskAnimTime+_channelHoleCylinderDepositAnimTime);


        ChannelHoleHardMaskThickness += (OxideThickness * NumberOfLayers) + (NitrideThickness * NumberOfLayers);
        _targetY = SiliconSubtrateThickness + (ChannelHoleHardMaskThickness / 2f);

        _channelHoleMask = GameObject.Instantiate(OneLayer);
        _channelHoleMask.name = "ChannelHoleHardMask";
        _channelHoleMask.transform.parent = StructureParent;
        _channelHoleMask.transform.localScale = new Vector3(MasterDepth - scaleOffset, ChannelHoleHardMaskThickness, MasterWidth + scaleOffset);
        _channelHoleMask.GetComponent<Renderer>().material = ChannelHardMaskMat;
        _channelHoleMask.transform.localPosition = _animStartPos;  

        LeanTween.moveLocalY (_channelHoleMask, _targetY, _channelHoleHardMaskAnimTime).setOnComplete(DepositChannelHoleCylinders); 
    }
        

    void DepositChannelHoleCylinders()
    {        
        _targetY = SiliconSubtrateThickness + ChannelHoleHardMaskThickness;

        _channelHoleClndrParent = new GameObject("ChannelHoleCylinderParent");
        _channelHoleClndrParent.transform.parent = transform;

        //one row has 5 cylinders
        //there are 10 rows
        int cylinderNumInOneRow = 5;
        int rowNum = 9;

        float posOffset = MasterDepth / (rowNum-1);
        int offsetMultiplier = 3;

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

            cylndrs[i].transform.localScale = new Vector3(ChannelHoleCylinderDia, 1f, ChannelHoleCylinderDia);
            cylndrs[i].transform.localPosition = new Vector3(0,0, -i * offsetMultiplier * posOffset);

        }

        float startZ = -MasterDepth / 2f;
        float offsetZ = Mathf.Abs (MasterDepth / rowNum);  


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

        Vector3 channelHoleTargetPos = new Vector3 (-MasterDepth/2f, _targetY, MasterWidth / 2f - posOffset);

        _channelHoleClndrParent.transform.position = _animStartPos;

        LeanTween.move(_channelHoleClndrParent, channelHoleTargetPos, _channelHoleCylinderDepositAnimTime).setOnComplete(BeginChannelHoleEtching);       

    }

    void BeginChannelHoleEtching()
    {
        //Calculate anim time using clip length
        _channelHoleEtchAnimTime = (Step3Clip.length - _channelHoleHardMaskAnimTime - _channelHoleCylinderDepositAnimTime);
        
        float channelHole1TargetYPos = (SiliconSubtrateThickness + (NumberOfLayers * OxideThickness) + (NumberOfLayers * NitrideThickness) ) / 2f + 0.1f;
        float channelHole1TargetYScale = (SiliconSubtrateThickness + (NumberOfLayers * OxideThickness) + (NumberOfLayers * NitrideThickness) ) / 2f;

        //Move camera
        float targetY = 100f;
        LeanTween.moveLocalY(MainCamera, targetY, _channelHoleEtchAnimTime);

        //MOVE AND SCALE THE CHANNEL HOLE CYLINDERS
        LeanTween.moveLocalY (_channelHoleClndrParent, channelHole1TargetYPos, _channelHoleEtchAnimTime);
        LeanTween.scaleY (_channelHoleClndrParent, channelHole1TargetYScale, _channelHoleEtchAnimTime);

        //FADE OUT HARD MASK
        LeanTween.alpha(_channelHoleMask, 0.5f, _channelHoleEtchAnimTime).setOnComplete(FinalizeEtch);

    }

    void FinalizeEtch()
    {
        GameObject.Destroy(_channelHoleMask);

        DepositTrenchHardMask();

    }

    void DepositTrenchHardMask()
    {
        NANDAudio.PlayOneShot(Step4Clip);

        //Move Camera
        LeanTween.move(MainCamera, Step4CutPos.position, _trenchHardMaskAnimTime);

        TrenchHardMaskThickness += (OxideThickness * NumberOfLayers) + (NitrideThickness * NumberOfLayers);
        _targetY = SiliconSubtrateThickness + (TrenchHardMaskThickness / 2f);
         
        _trenchHardMask = GameObject.Instantiate(OneLayer);
        _trenchHardMask.name = "TrenchHardMask2";
        _trenchHardMask.transform.parent = StructureParent;
        _trenchHardMask.transform.localScale = new Vector3(MasterDepth - scaleOffset, TrenchHardMaskThickness, MasterWidth + scaleOffset);
        _trenchHardMask.GetComponent<Renderer>().material = TrenchHardMaskMat;
        _trenchHardMask.transform.localPosition = _animStartPos;   


        LeanTween.moveLocalY (_trenchHardMask, _targetY, _trenchHardMaskAnimTime).setOnComplete(BeginTrenchEtching); 

    }

    void BeginTrenchEtching()
    {
        _trenchHardMask.transform.parent = transform;
        _siliconSubstrate.transform.parent = transform;

        //Create two more copies of First Second Half Gameobjects
        //Rename existing First Second Half by First_front and Second_front
        _frontHalf = StructureParent.gameObject;
        _frontHalf.name = "FrontHalf";

        _middleHalf = GameObject.Instantiate(_frontHalf);
        _middleHalf.name = "MiddleHalf";
        _middleHalf.transform.parent = transform;

        _backHalf = GameObject.Instantiate(_frontHalf);
        _backHalf.name = "BackHalf";
        _backHalf.transform.parent = transform;

        //Animate Front 
        foreach(Transform child in _frontHalf.transform)
        { 
            child.gameObject.GetComponent<VertexAnimation>().OffsetDist = frontOffset;
            child.gameObject.GetComponent<VertexAnimation>().DebugCurrentMesh();
            child.gameObject.GetComponent<VertexAnimation>().AnimateBackFace(_trenchFormAnimTime, 0f);
        }

        //Animate middle
        foreach(Transform child in _middleHalf.transform)
        {
            child.gameObject.GetComponent<VertexAnimation>().OffsetDist = middleOffset;
            child.gameObject.GetComponent<VertexAnimation>().DebugCurrentMesh();
            child.gameObject.GetComponent<VertexAnimation>().AnimateBackFace(_trenchFormAnimTime, 0f);

            child.gameObject.GetComponent<VertexAnimation>().OffsetDist = -middleOffset;
            child.gameObject.GetComponent<VertexAnimation>().DebugCurrentMesh();
            child.gameObject.GetComponent<VertexAnimation>().AnimateFrontFace(_trenchFormAnimTime, 0f);
        }

        //Animate Back
        foreach(Transform child in _backHalf.transform)
        {
            child.gameObject.GetComponent<VertexAnimation>().OffsetDist = -frontOffset;
            child.gameObject.GetComponent<VertexAnimation>().DebugCurrentMesh();
            child.gameObject.GetComponent<VertexAnimation>().AnimateFrontFace(_trenchFormAnimTime, 0f);

        }

        LeanTween.value(1f,0.1f,_trenchMaskFadeTime).setOnUpdate((float val) =>
            {
                Color temp = TrenchHardMaskMat.color;
                temp.a = val;
                TrenchHardMaskMat.color = temp;

            }).setOnComplete(FinalizeTrench);
                
    }

    void FinalizeTrench()
    {
        //reset alpha on TrenchHardMaskMat
        Color temp = TrenchHardMaskMat.color;
        temp.a = 1f;
        TrenchHardMaskMat.color = temp;
            
        GameObject.Destroy(_trenchHardMask);

//        Teleport.SetActive(true);

        //CAMERA MOVE
//        LeanTween.move(MainCamera, CamThirdCutPos.position, 7f).setEase(LeanTweenType.easeInCubic).setDelay(1f).setOnComplete(DoNothing);

        TriggerNitrideRemoval();
    }



    void TriggerNitrideRemoval()
    {
        //Calculate anim time using clip length
        _trenchFormAnimTime = Step4Clip.length - _trenchHardMaskAnimTime - _trenchFormAnimTime;
        
        //Change NitrideMat shader to transperant
        NitrideMat.shader = Shader.Find("Legacy Shaders/Transparent/Diffuse");

        //Animate Alpha to zero

        LeanTween.value(1f,0.1f,_nitrideRemovalAnimTime).setOnUpdate((float val) =>
            {
                Color temp = NitrideMat.color;
                temp.a = val;
                NitrideMat.color = temp;

            }).setOnComplete(FinalizeNitrideRemoval);

    }

    void FinalizeNitrideRemoval()
    {        
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

 

    }

    void TriggerTiNBarrier()
    {
        NANDAudio.PlayOneShot(Step5Clip);

        float outlineWidth = 2f;

        //Apply toon shader to Oxide and Channel
        foreach(Transform t in _frontHalf.transform)
        {
            if (t.gameObject.tag == "Oxide")
                t.gameObject.GetComponent<Renderer>().material = WOxideMat;
        }

        foreach(Transform t in _middleHalf.transform)
        {
            if (t.gameObject.tag == "Oxide")
                t.gameObject.GetComponent<Renderer>().material = WOxideMat;
        }

        foreach(Transform t in _backHalf.transform)
        {
            if (t.gameObject.tag == "Oxide")
                t.gameObject.GetComponent<Renderer>().material = WOxideMat;
        }

        foreach (Transform child in _channelHoleClndrParent.transform)
        {
            foreach(Transform t in child)
            {
                if (t.gameObject.tag == "Channel")
                    t.gameObject.GetComponent<Renderer>().material = WChannelMat; 
            }
        }

        float delay;

        _tungRecessAnimTime = delay = _wRecessAnimTime = Step5Clip.length / 3f;

        //Animate Shader Property "Outline Width"
        LeanTween.value(gameObject, 0f, outlineWidth, _tungRecessAnimTime).setOnUpdate((float val) =>
            {
                WOxideMat.SetFloat("_Outline", val);
                WChannelMat.SetFloat("_Outline", val);

            });

        //Move Camera back to step4 for better view
        LeanTween.move(MainCamera, Step4CutPos.position, 2f).setDelay(delay).setOnComplete(TriggerWDeposition);

    } 

    void TriggerWDeposition()
    {
        

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

        //3: Create two W cubes to fill the trench 
        float wTrenchThichkness = SiliconSubtrateThickness + (OxideThickness * NumberOfLayers) + (NitrideThickness * NumberOfLayers);

        float trenchDepth = 1.4f;
        float trench1CenterX = 3.6f;
        float trench2CenterX = -3.6f;

        _wTrench1_1 = GameObject.Instantiate(OneLayer);
        _wTrench1_1.name = "WTrench1_1";
        _wTrench1_1.transform.parent = transform;
        _wTrench1_1.transform.localScale = new Vector3(trenchDepth / 2f,wTrenchThichkness,MasterWidth);
        _wTrench1_1.transform.position = new Vector3(trench1CenterX + trenchDepth / 4f, wTrenchThichkness / 2f, 0f);
        _wTrench1_1.GetComponent<Renderer>().material = WMat;

        _wTrench1_2 = GameObject.Instantiate(OneLayer);
        _wTrench1_2.name = "WTrench1_2";
        _wTrench1_2.transform.parent = transform;
        _wTrench1_2.transform.localScale = new Vector3(trenchDepth / 2f,wTrenchThichkness,MasterWidth);
        _wTrench1_2.transform.position = new Vector3(trench1CenterX - trenchDepth / 4f, wTrenchThichkness / 2f, 0f);
        _wTrench1_2.GetComponent<Renderer>().material = WMat;

        _wTrench2_1 = GameObject.Instantiate(OneLayer);
        _wTrench2_1.name = "WTrench2_1";
        _wTrench2_1.transform.parent = transform;
        _wTrench2_1.transform.localScale = new Vector3(trenchDepth / 2f,wTrenchThichkness,MasterWidth);
        _wTrench2_1.transform.position = new Vector3(trench2CenterX + trenchDepth / 4f, wTrenchThichkness / 2f, 0f);
        _wTrench2_1.GetComponent<Renderer>().material = WMat;

        _wTrench2_2 = GameObject.Instantiate(OneLayer);
        _wTrench2_2.name = "WTrench2_2";
        _wTrench2_2.transform.parent = transform;
        _wTrench2_2.transform.localScale = new Vector3(trenchDepth / 2f,wTrenchThichkness,MasterWidth);
        _wTrench2_2.transform.position = new Vector3(trench2CenterX - trenchDepth / 4f, wTrenchThichkness / 2f, 0f);
        _wTrench2_2.GetComponent<Renderer>().material = WMat;

        //4: Animate _wTrench 11 12 21 22
        delay = 0f;

        _wTrench1_1.GetComponent<VertexAnimation>().OffsetDist = trenchDepth;
        _wTrench1_1.GetComponent<VertexAnimation>().DebugCurrentMesh();
        _wTrench1_1.GetComponent<VertexAnimation>().AnimateBackFace(_wRecessAnimTime, delay);

        _wTrench1_2.GetComponent<VertexAnimation>().OffsetDist = -trenchDepth;
        _wTrench1_2.GetComponent<VertexAnimation>().DebugCurrentMesh();
        _wTrench1_2.GetComponent<VertexAnimation>().AnimateFrontFace(_wRecessAnimTime, delay);

        _wTrench2_1.GetComponent<VertexAnimation>().OffsetDist = trenchDepth;
        _wTrench2_1.GetComponent<VertexAnimation>().DebugCurrentMesh();
        _wTrench2_1.GetComponent<VertexAnimation>().AnimateBackFace(_wRecessAnimTime, delay);

        _wTrench2_2.GetComponent<VertexAnimation>().OffsetDist = -trenchDepth;
        _wTrench2_2.GetComponent<VertexAnimation>().DebugCurrentMesh();
        _wTrench2_2.GetComponent<VertexAnimation>().AnimateFrontFaceWithCallBack(_wRecessAnimTime, delay, finalizeWRecess); 

    }

    void finalizeWRecess()
    {
        GameObject.Destroy(_wTrench1_1);
        GameObject.Destroy(_wTrench1_2);
        GameObject.Destroy(_wTrench2_1);
        GameObject.Destroy(_wTrench2_2);

        //Move camera to cut 3 for better view
        LeanTween.move(MainCamera, Step3CutPos.position, 4f).setOnComplete(TriggerStaircaseContact);
//        TriggerStaircaseContact();

    }

    void TriggerStaircaseContact()
    {
        NANDAudio.PlayOneShot(Step6Clip);

        _wFillAnimTime = _staircaseContactMaskEtchAnimTime = _staircaseContactEtchAnimTime = Step6Clip.length / 3f;

        //1. Add 32 cubes each on a step 
        //2. Add hard mask to start etching

        _staircaseContacts = new GameObject[NumberOfLayers+ 1];
        _staircaseContactHardMasks = new GameObject[NumberOfLayers+ 1];



        //staircase contact settings
        float staircaseContactWidth = 5.5f;
        StairCaseContactThickness += SiliconSubtrateThickness + (OxideThickness * NumberOfLayers) + (NitrideThickness * NumberOfLayers);
        float staircaseContactDepth = MasterDepth - scaleOffset;

        //staircase hard mask settings
        float staircaseContactHardMaskY =  StairCaseContactThickness + (stairCaseContactHardMaskThickness / 2f);



        for (int i=0; i < NumberOfLayers + 1; i++)
        {   

            if (i == NumberOfLayers)
            {
                //staircase contacts hard mask
                _staircaseContactHardMasks[i] = GameObject.Instantiate(OneLayer);
                _staircaseContactHardMasks[i].name = "StaircaseContactHardMasks"+i;
                _staircaseContactHardMasks[i].transform.parent = transform;
                _staircaseContactHardMasks[i].transform.localScale = new Vector3(staircaseContactDepth,stairCaseContactHardMaskThickness, 5*staircaseContactWidth);
                _staircaseContactHardMasks[i].transform.position = new Vector3(0f, staircaseContactHardMaskY, 87f);
                _staircaseContactHardMasks[i].GetComponent<Renderer>().material = StaircaseContactHardMaskMat;

                //staircase contacts
                _staircaseContacts[i] = GameObject.Instantiate(OneLayer);
                _staircaseContacts[i].name = "StaircaseContacts_"+i;
                _staircaseContacts[i].transform.parent = transform;
                _staircaseContacts[i].transform.localScale = new Vector3(staircaseContactDepth,StairCaseContactThickness, 5*staircaseContactWidth);
                _staircaseContacts[i].transform.position = new Vector3(0f, StairCaseContactThickness / 2f, 87f);
                _staircaseContacts[i].GetComponent<Renderer>().material = StaircaseContactMat;

            }
            else
            {
                //staircase contact hard mask
                _staircaseContactHardMasks[i] = GameObject.Instantiate(OneLayer);
                _staircaseContactHardMasks[i].name = "StaircaseContactHardMasks_"+i;
                _staircaseContactHardMasks[i].transform.parent = transform;
                _staircaseContactHardMasks[i].transform.localScale = new Vector3(staircaseContactDepth,stairCaseContactHardMaskThickness, staircaseContactWidth);
                _staircaseContactHardMasks[i].transform.position = new Vector3(0f, staircaseContactHardMaskY, -MasterWidth/2f + (i*staircaseContactWidth));
                _staircaseContactHardMasks[i].GetComponent<Renderer>().material = StaircaseContactHardMaskMat;

                
                //staircase contacts
                _staircaseContacts[i] = GameObject.Instantiate(OneLayer);
                _staircaseContacts[i].name = "StaircaseContacts_"+i;
                _staircaseContacts[i].transform.parent = transform;
                _staircaseContacts[i].transform.localScale = new Vector3(staircaseContactDepth,StairCaseContactThickness, staircaseContactWidth);
                _staircaseContacts[i].transform.position = new Vector3(0f, StairCaseContactThickness / 2f, -MasterWidth/2f + (i*staircaseContactWidth));
                _staircaseContacts[i].GetComponent<Renderer>().material = StaircaseContactMat;
            }
        }

        TriggerStairCaseContactHardMaskEtching();
    }

    void TriggerStairCaseContactHardMaskEtching()
    {
        for (int i=0; i < _staircaseContactHardMasks.Length - 1; i++)
        {
            if ( i == _staircaseContactHardMasks.Length - 2)
            {
                LeanTween.scaleZ(_staircaseContactHardMasks[i], 2f, _staircaseContactMaskEtchAnimTime).setOnComplete(TriggerStaircaseContactEtching);
            }
            else
            {
                LeanTween.scaleZ(_staircaseContactHardMasks[i], 2f, _staircaseContactMaskEtchAnimTime);
            }
        }


    }

    void TriggerStaircaseContactEtching()
    {     
        
        for (int i=0; i < _staircaseContacts.Length - 1; i++)
        {
            if( i == _staircaseContacts.Length - 2)
            {
                LeanTween.scaleZ(_staircaseContacts[i], 2f, _staircaseContactEtchAnimTime).setOnComplete(FinalizeStaircaseContactEtching);
            }
            else
            {
                LeanTween.scaleZ(_staircaseContacts[i], 2f, _staircaseContactEtchAnimTime);
            }
        }
    }

    void FinalizeStaircaseContactEtching()
    {
        foreach(GameObject go in _staircaseContactHardMasks)
        {
            GameObject.Destroy(go);
        }

        TriggerWFill();
    }

    void TriggerWFill()
    {
        wFillThickness += SiliconSubtrateThickness + (OxideThickness * NumberOfLayers) + (NitrideThickness * NumberOfLayers);
        _targetY = 2 * SiliconSubtrateThickness + wFillThickness/2f;

        _wFill = GameObject.Instantiate(OneLayer);
        _wFill.name = "wFill";
        _wFill.transform.parent = transform;
        _wFill.transform.localScale = new Vector3(MasterDepth - 2 * scaleOffset, wFillThickness, MasterWidth + scaleOffset);
        _wFill.GetComponent<Renderer>().material = WMat;

        _wFill.transform.localPosition = _animStartPos;   

        LeanTween.moveLocalY (_wFill, _targetY, _wFillAnimTime).setOnComplete(BeginClosing); 

    }

    void BeginClosing()
    {
        LeanTween.move(MainCamera, _mainCamStartPos, 3f).setOnComplete(FinalizeClosing);

    }

    void FinalizeClosing()
    {
        NANDAudio.PlayOneShot(ClosingClip);
    }

}
