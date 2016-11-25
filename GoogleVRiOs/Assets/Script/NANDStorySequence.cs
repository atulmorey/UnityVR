using UnityEngine;
using System.Collections;

public class NANDStorySequence : MonoBehaviour 
{

    [Header("Transforms")]
    public Transform Half1;
    public Transform Half2;
    public Transform StructureParent;
    public Transform CamFirstCutPos;
    public Transform CamSecondCutPos;
    public Transform CamThirdCutPos;
    public Transform CamForthCutPos;

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

    [Header("Values")]
    public int NumberOfLayers = 32;
    public float MasterWidth = 5f;
    public float MasterDepth = 3f;

    public float SiliconSubtrateThickness = 1.7f;
    public float OxideThickness = 0.3f;
    public float NitrideThickness = 0.3f;
    public float StairCaseStepWidth = 0.25f;
    public float StairCaseHardMaskThickness = 50f;
    public float ChannelHoleCylinderDia = 1.2f;
    public float ChannelHoleHardMaskThickness = 25f;
    public float TrenchHardMaskThickness = 25f;

    //private
    private GameObject _siliconSubstrate;
    private GameObject[] _oxideLayers;
    private GameObject[] _nitrideLayers;
    private GameObject _hardMaskLayer1;
    private GameObject _staircaseHardMask1;
    private GameObject _channelHolesCylndrs1;
    private GameObject _trenchHardMask1;
    private GameObject _frontHalf1;
    private GameObject _middleHalf1;
    private GameObject _backHalf1;

//    private GameObject _siliconSubstrate2;
    private GameObject[] _oxideLayers2;
    private GameObject[] _nitrideLayers2;
    private GameObject _hardMaskLayer2;
    private GameObject _channelHoleMask;
    private GameObject _staircaseHardMask;
    private GameObject _channelHoleCylndr;
    private GameObject _channelHoleClndrParent;
    private GameObject _trenchHardMask2;
    private GameObject _frontHalf2;
    private GameObject _middleHalf2;
    private GameObject _backHalf2;


    private Vector3 _animStartPos = new Vector3 (0,1000,0);

    float layerOffsetDistanceY = 1.6f; //Offset distance between Oxide and Nitride layer

    //animTimes
    private float _siSubAnimTime = 0f;
    private float _oxNiAnimTime = 0.1f;
    private float _stairCaseHardMaskAnimTime = 0.5f;
    private float _stairFormAnimTime = 1f;
    private float _channelHoleHardMaskAnimTime = 1f;
    private float _channelHoleCylinderDepositAnimTime = 2f;
    private float _channelHoleEtchAnimTime = 2f;
    private float _trenchHardMaskAnimTime = 2f;
    private float _trenchMaskFadeTime = 7f;
    private float _trenchFormAnimTime = 7f;

    //distances
    private float _targetY = 0f;
    private float _staircaseHardMaskYoffset = 0f;

    private VertexAnimation _staircaseHardMaskVertAnimComp;
    private VertexAnimation[] _oxideVertexComp;
    private VertexAnimation[] _nitrideVertexComp;

    float delay = 0.1f; //Keep if equal to animtime as a start
    float scaleOffset = 1f;

    // Use this for initialization
    void Start () 
    {
        Teleport.SetActive(false);
//        DepostiSiliconSubstrate();

        DepositChannelHoleCylinders();
    
    }

    void DepostiSiliconSubstrate()
    {
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
        _oxideLayers = new GameObject[NumberOfLayers];
        _nitrideLayers = new GameObject[NumberOfLayers];


        delay = 0f;

        for(int i=0; i < NumberOfLayers; i++)
        {
            //Oxide
            _oxideLayers[i] = GameObject.Instantiate(OneLayer);
            _oxideLayers[i].name = "OxideLayer"+i.ToString();
            _oxideLayers[i].transform.parent = StructureParent;   
            _oxideLayers[i].transform.localScale = new Vector3(MasterDepth, OxideThickness, MasterWidth);
            _oxideLayers[i].GetComponent<Renderer>().material = OxideMat;
            _oxideLayers[i].transform.localPosition = _animStartPos;

      
            _targetY = SiliconSubtrateThickness + (NitrideThickness * i) + (OxideThickness * i ) + (OxideThickness / 2f)  ;
            LeanTween.moveLocalY (_oxideLayers[i], _targetY, _oxNiAnimTime).setDelay(delay);

            delay += _oxNiAnimTime;

            //Nitride
            _nitrideLayers[i] = GameObject.Instantiate(OneLayer);
            _nitrideLayers[i].name = "NitrideLayer"+i.ToString();
            _nitrideLayers[i].transform.parent = StructureParent;
            _nitrideLayers[i].transform.localScale = new Vector3(MasterDepth, NitrideThickness,MasterWidth);
            _nitrideLayers[i].GetComponent<Renderer>().material = NitrideMat;
            _nitrideLayers[i].transform.localPosition = _animStartPos;


            _targetY = SiliconSubtrateThickness + (NitrideThickness * i) + (OxideThickness* (i + 1)) + + (NitrideThickness / 2f) ;


            //Trigger next event when reached last layer
            if ( i == NumberOfLayers-1)
            {
                LeanTween.moveLocalY (_nitrideLayers[i], _targetY, _oxNiAnimTime).setDelay(delay).setOnComplete(DepositStairCaseHardMask);
            }
            else
            {
                LeanTween.moveLocalY (_nitrideLayers[i], _targetY, _oxNiAnimTime).setDelay(delay);
            }

            delay += _oxNiAnimTime;

        }
    }
        

    void DepositStairCaseHardMask()
    {
        //Camera Tween
//        LeanTween.move(MainCamera, CamFirstCutPos.position, 2f).setEase(LeanTweenType.easeInCubic);

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
        _staircaseHardMaskVertAnimComp = _staircaseHardMask.GetComponent<VertexAnimation>();

        _oxideVertexComp = new VertexAnimation[NumberOfLayers];
        _nitrideVertexComp = new VertexAnimation[NumberOfLayers];

        _staircaseHardMaskYoffset = 1f / NumberOfLayers;

        for (int i=0; i < NumberOfLayers; i++)
        {
            _oxideVertexComp[i] = _oxideLayers[i].GetComponent<VertexAnimation>();
            _nitrideVertexComp[i] = _nitrideLayers[i].GetComponent<VertexAnimation>();
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
        _stairFormAnimTime = 0.1f;

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
        ChannelHoleHardMaskThickness += (OxideThickness * NumberOfLayers) + (NitrideThickness * NumberOfLayers);
        _targetY = SiliconSubtrateThickness + (ChannelHoleHardMaskThickness / 2f);

        _channelHoleMask = GameObject.Instantiate(OneLayer);
        _channelHoleMask.name = "ChannelHoleHardMask";
        _channelHoleMask.transform.parent = StructureParent;
        _channelHoleMask.transform.localScale = new Vector3(MasterDepth - scaleOffset, ChannelHoleHardMaskThickness, MasterWidth);
        _channelHoleMask.GetComponent<Renderer>().material = ChannelHardMaskMat;
        _channelHoleMask.transform.localPosition = _animStartPos;  

        LeanTween.moveLocalY (_channelHoleMask, _targetY, _channelHoleHardMaskAnimTime).setOnComplete(Nothing); 
    }

    void Nothing()
    {

    }

    void DepositChannelHoleCylinders()
    {
        int CylinderNum = 30;
        _targetY = SiliconSubtrateThickness + ChannelHoleHardMaskThickness;

        _channelHoleClndrParent = new GameObject("ChannelHoleCylinderParent");
        _channelHoleClndrParent.transform.parent = transform;

//        _channelHoleCylndr = GameObject.Instantiate(ChannelHoleCylinder);
//        _channelHoleCylndr.name = "ChannelHole";
//        _channelHoleCylndr.transform.parent = _channelHoleClndrParent;   

        //one row has 5 cylinders
        //there are 10 rows
        int cylinderNumInOneRow = 5;
        int rowNum = 10;

        GameObject _cylndrRowHolder = new GameObject ("CylinderRow");
        _cylndrRowHolder.transform.parent = _channelHoleClndrParent.transform;

        GameObject[] cylndrs = new GameObject[cylinderNumInOneRow];
        GameObject[] rowCylndrs = new GameObject[rowNum];

        for (int i=0; i < cylndrs.Length; i++)
        {
            cylndrs[i] = GameObject.Instantiate(ChannelHoleCylinder);
            cylndrs[i].name = "ChannelHole"+i;
            cylndrs[i].transform.parent = _cylndrRowHolder.transform;

            cylndrs[i].transform.localScale = new Vector3(ChannelHoleCylinderDia, 1f, ChannelHoleCylinderDia);
            cylndrs[i].transform.localPosition = new Vector3(0,0, -i * (2f * ChannelHoleCylinderDia));

        }

        float startZ = -MasterDepth / 2f;
        float offsetZ = Mathf.Abs (MasterDepth / rowNum);  


//        for (int j=0; j < rowCylndrs.Length; j++)
//        {
//            rowCylndrs[j] = GameObject.Instantiate(_cylndrRowHolder);
//        }

       

    }

    void BeginChannelHoleEtching()
    {
        float channelHole1TargetYPos = (SiliconSubtrateThickness + (NumberOfLayers * OxideThickness) + (NumberOfLayers * NitrideThickness) ) / 2f + 0.1f;
        float channelHole1TargetYScale = (SiliconSubtrateThickness + (NumberOfLayers * OxideThickness) + (NumberOfLayers * NitrideThickness) ) / 2f;

        //MOVE AND SCALE THE CHANNEL HOLE CYLINDERS
        LeanTween.moveLocalY (_channelHolesCylndrs1, channelHole1TargetYPos, _channelHoleEtchAnimTime);
        LeanTween.scaleY (_channelHolesCylndrs1, channelHole1TargetYScale, _channelHoleEtchAnimTime);

        LeanTween.moveLocalY (_channelHoleCylndr, channelHole1TargetYPos, _channelHoleEtchAnimTime);
        LeanTween.scaleY (_channelHoleCylndr, channelHole1TargetYScale, _channelHoleEtchAnimTime);

        //FADE OUT HARD MASK
        LeanTween.alpha(_channelHoleMask, 0.5f, _channelHoleEtchAnimTime).setOnComplete(FinalizeEtch);

    }

    void FinalizeEtch()
    {
        GameObject.Destroy(_channelHoleMask);

        _channelHolesCylndrs1.transform.parent = transform;
        _channelHoleCylndr.transform.parent = transform;

        DepositTrenchHardMask();

    }

    void DepositTrenchHardMask()
    {
        LeanTween.move(MainCamera, CamSecondCutPos.position, 2f).setEase(LeanTweenType.easeInCubic);

        TrenchHardMaskThickness += (OxideThickness * NumberOfLayers) + (NitrideThickness * NumberOfLayers);
        _targetY = SiliconSubtrateThickness + (TrenchHardMaskThickness / 2f);

        //FIRST HALF
        _trenchHardMask1 = GameObject.Instantiate(OneLayer);
        _trenchHardMask1.name = "TrenchHardMask1";
        _trenchHardMask1.transform.parent = Half1;
        _trenchHardMask1.transform.localScale = new Vector3(MasterDepth - scaleOffset, TrenchHardMaskThickness, MasterWidth);
        _trenchHardMask1.GetComponent<Renderer>().material = TrenchHardMaskMat;
        _trenchHardMask1.transform.localPosition = _animStartPos;   

//        VertexAnimation trenchMaskVertAnimComp1 = _trenchHardMask1.GetComponent<VertexAnimation>();
//        trenchMaskVertAnimComp1.OffsetDist = trenchHardMaskSideFaceOffset;
//        trenchMaskVertAnimComp1.DebugCurrentMesh();
//        trenchMaskVertAnimComp1.AnimateLeftFace(0,0);

        LeanTween.moveLocalY (_trenchHardMask1, _targetY, _trenchHardMaskAnimTime); 

        //Second HALF
        _trenchHardMask2 = GameObject.Instantiate(OneLayer);
        _trenchHardMask2.name = "TrenchHardMask2";
        _trenchHardMask2.transform.parent = Half2;
        _trenchHardMask2.transform.localScale = new Vector3(MasterDepth - scaleOffset, TrenchHardMaskThickness, MasterWidth);
        _trenchHardMask2.GetComponent<Renderer>().material = TrenchHardMaskMat;
        _trenchHardMask2.transform.localPosition = _animStartPos;   

//        VertexAnimation trenchMaskVertAnimComp2 = _trenchHardMask2.GetComponent<VertexAnimation>();
//        trenchMaskVertAnimComp2.OffsetDist = -trenchHardMaskSideFaceOffset;
//        trenchMaskVertAnimComp2.DebugCurrentMesh();
//        trenchMaskVertAnimComp2.AnimateLeftFace(0,0);

        LeanTween.moveLocalY (_trenchHardMask2, _targetY, _trenchHardMaskAnimTime).setOnComplete(BeginTrenchEtching); 

    }

    void BeginTrenchEtching()
    {
        _trenchHardMask1.transform.parent = transform;
        _trenchHardMask2.transform.parent = transform;

        _siliconSubstrate.transform.parent = transform;
//        _siliconSubstrate2.transform.parent = transform;
        
        //Create two more copies of First Second Half Gameobjects
        //Rename existing First Second Half by First_front and Second_front
        _frontHalf1 = Half1.gameObject;
        _frontHalf2 = Half2.gameObject;

        _frontHalf1.name = "FrontHalf1";
        _frontHalf2.name = "FrontHalf2";

        _middleHalf1 = GameObject.Instantiate(_frontHalf1);
        _middleHalf2 = GameObject.Instantiate(_frontHalf2);

        _middleHalf1.name = "MiddleHalf1";
        _middleHalf1.transform.parent = transform;
        _middleHalf2.name = "MiddleHalf2";
        _middleHalf2.transform.parent = transform;

        _backHalf1 = GameObject.Instantiate(_frontHalf1);
        _backHalf2 = GameObject.Instantiate(_frontHalf2);

        _backHalf1.name = "BackHalf1";
        _backHalf1.transform.parent = transform;
        _backHalf2.name = "BackHalf2";
        _backHalf2.transform.parent = transform;


        float frontOffset = 0.8f;
        //Animate Front 
        foreach(Transform child in _frontHalf1.transform)
        {
            Debug.Log("child : "+child.name);
            
            if((child.name != "ChannelHole") || (child.name != "SiliconSubstrate"))
            {
                child.gameObject.GetComponent<VertexAnimation>().OffsetDist = frontOffset;
                child.gameObject.GetComponent<VertexAnimation>().DebugCurrentMesh();
                child.gameObject.GetComponent<VertexAnimation>().AnimateBackFace(_trenchFormAnimTime, 0f);
            }

        }

        foreach(Transform child in _frontHalf2.transform)
        {
            if((child.name != "ChannelHole") || (child.name != "SiliconSubstrate"))
            {
                child.gameObject.GetComponent<VertexAnimation>().OffsetDist = frontOffset;
                child.gameObject.GetComponent<VertexAnimation>().DebugCurrentMesh();
                child.gameObject.GetComponent<VertexAnimation>().AnimateBackFace(_trenchFormAnimTime, 0f);
            }

        }

        //Animate middle
        float middleOffset = 0.35f;
        foreach(Transform child in _middleHalf1.transform)
        {
            if((child.name != "ChannelHole") || (child.name != "SiliconSubstrate"))
            {
                child.gameObject.GetComponent<VertexAnimation>().OffsetDist = middleOffset;
                child.gameObject.GetComponent<VertexAnimation>().DebugCurrentMesh();
                child.gameObject.GetComponent<VertexAnimation>().AnimateBackFace(_trenchFormAnimTime, 0f);

                child.gameObject.GetComponent<VertexAnimation>().OffsetDist = -middleOffset;
                child.gameObject.GetComponent<VertexAnimation>().DebugCurrentMesh();
                child.gameObject.GetComponent<VertexAnimation>().AnimateFrontFace(_trenchFormAnimTime, 0f);
            }

        }

        foreach(Transform child in _middleHalf2.transform)
        {
            if((child.name != "ChannelHole") || (child.name != "SiliconSubstrate"))
            {
                child.gameObject.GetComponent<VertexAnimation>().OffsetDist = middleOffset;
                child.gameObject.GetComponent<VertexAnimation>().DebugCurrentMesh();
                child.gameObject.GetComponent<VertexAnimation>().AnimateBackFace(_trenchFormAnimTime, 0f);

                child.gameObject.GetComponent<VertexAnimation>().OffsetDist = -middleOffset;
                child.gameObject.GetComponent<VertexAnimation>().DebugCurrentMesh();
                child.gameObject.GetComponent<VertexAnimation>().AnimateFrontFace(_trenchFormAnimTime, 0f);
            }

        }

        //Animate Back
        foreach(Transform child in _backHalf1.transform)
        {
            if((child.name != "ChannelHole") || (child.name != "SiliconSubstrate"))
            {
                child.gameObject.GetComponent<VertexAnimation>().OffsetDist = -frontOffset;
                child.gameObject.GetComponent<VertexAnimation>().DebugCurrentMesh();
                child.gameObject.GetComponent<VertexAnimation>().AnimateFrontFace(1f, 0f);
            }

        }

        foreach(Transform child in _backHalf2.transform)
        {
            if((child.name != "ChannelHole") || (child.name != "SiliconSubstrate"))
            {
                child.gameObject.GetComponent<VertexAnimation>().OffsetDist = -frontOffset;
                child.gameObject.GetComponent<VertexAnimation>().DebugCurrentMesh();
                child.gameObject.GetComponent<VertexAnimation>().AnimateFrontFace(1f, 0f);
            }

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
            
        GameObject.Destroy(_trenchHardMask1);
        GameObject.Destroy(_trenchHardMask2);

//        Teleport.SetActive(true);

        LeanTween.move(MainCamera, CamThirdCutPos.position, 7f).setEase(LeanTweenType.easeInCubic).setDelay(1f).setOnComplete(CamDollyShot);
    }

    void CamDollyShot()
    {
        LeanTween.move(MainCamera, CamForthCutPos.position, 15f).setEase(LeanTweenType.easeInCubic).setDelay(1f);

    }
 

}
