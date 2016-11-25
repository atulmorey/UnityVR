using UnityEngine;
using System.Collections;

public class NANDStorySequenceCopy : MonoBehaviour 
{

    [Header("Transforms")]
    public Transform Half1;
    public Transform Half2;
    public Transform CamFirstCutPos;
    public Transform CamSecondCutPos;
    public Transform CamThirdCutPos;
    public Transform CamForthCutPos;

    [Header("GameObjects")]
    public GameObject MainCamera;
    public GameObject OneLayer;
    public GameObject ChannelHolesHalf;
    public GameObject Teleport;

    [Header("Materials")]
    public Material SiliconSubstrateMat1;
    public Material SiliconSubstrateMat2;
    public Material OxideMat1;
    public Material OxideMat2;
    public Material NitrideMat1;
    public Material NitrideMat2;
    public Material ChannelHardMaskMat1;
    public Material ChannelHardMaskMat2;
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
    public float ChannelHoleHardMaskThickness = 25f;
    public float TrenchHardMaskThickness = 25f;

    //private
    private GameObject _siliconSubstrate1;
    private GameObject[] _oxideLayers1;
    private GameObject[] _nitrideLayers1;
    private GameObject _hardMaskLayer1;
    private GameObject _channelHoleMask1;
    private GameObject _staircaseHardMask1;
    private GameObject _channelHolesCylndrs1;
    private GameObject _trenchHardMask1;
    private GameObject _frontHalf1;
    private GameObject _middleHalf1;
    private GameObject _backHalf1;

    private GameObject _siliconSubstrate2;
    private GameObject[] _oxideLayers2;
    private GameObject[] _nitrideLayers2;
    private GameObject _hardMaskLayer2;
    private GameObject _channelHoleMask2;
    private GameObject _staircaseHardMask2;
    private GameObject _channelHolesCylndrs2;
    private GameObject _trenchHardMask2;
    private GameObject _frontHalf2;
    private GameObject _middleHalf2;
    private GameObject _backHalf2;


    private Vector3 _animStartPos = new Vector3 (0,1000,0);
    private float _halfWidth;

    float layerOffsetDistanceY = 1.6f; //Offset distance between Oxide and Nitride layer

    //animTimes
    private float _siSubAnimTime = 0.5f;
    private float _oxNiAnimTime = 0.1f;
    private float _stairCaseHardMaskAnimTime = 1f;
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

    private VertexAnimation _staircaseHardMaskVertAnimComp1;
    private VertexAnimation _staircaseHardMaskVertAnimComp2;

    private VertexAnimation[] _oxideVertexComp1;
    private VertexAnimation[] _oxideVertexComp2;

    private VertexAnimation[] _nitrideVertexComp1;
    private VertexAnimation[] _nitrideVertexComp2;


    float delay = 0.1f; //Keep if equal to animtime as a start
    float scaleOffset = 1f;

	// Use this for initialization
	void Start () 
    {
        Teleport.SetActive(false);
        
        _halfWidth = MasterWidth / 2f;

        //Place first half and second half transform
        Half1.transform.localPosition = new Vector3 (0,0, -_halfWidth/2f);
        Half2.transform.localPosition = new Vector3 (0,0, _halfWidth/2f);

//        LaySiliconSubstrate();
        DepostiSiliconSubstrate();
	
	}

    void DepostiSiliconSubstrate()
    {
        //Silicon substrate
        _targetY = SiliconSubtrateThickness / 2f;

        //FIRST HALF
        _siliconSubstrate1 = GameObject.Instantiate(OneLayer);
        _siliconSubstrate1.name = "SiliconSubstrate";
        _siliconSubstrate1.transform.parent = Half1;   
        _siliconSubstrate1.transform.localScale = new Vector3(MasterDepth,SiliconSubtrateThickness,_halfWidth);
        _siliconSubstrate1.GetComponent<Renderer>().material = SiliconSubstrateMat1;

        _siliconSubstrate1.transform.localPosition = _animStartPos;

        LeanTween.moveLocalY (_siliconSubstrate1, _targetY, _siSubAnimTime);

        //SECOND HALF
        _siliconSubstrate2 = GameObject.Instantiate(OneLayer);
        _siliconSubstrate2.name = "SiliconSubstrate";
        _siliconSubstrate2.transform.parent = Half2;   
        _siliconSubstrate2.transform.localScale = new Vector3(MasterDepth,SiliconSubtrateThickness,_halfWidth);
        _siliconSubstrate2.GetComponent<Renderer>().material = SiliconSubstrateMat2;

        _siliconSubstrate2.transform.localPosition = _animStartPos;

        LeanTween.moveLocalY (_siliconSubstrate2, _targetY, _siSubAnimTime).setOnComplete(DepositeOxideNitrideLayers);

    }

    void DepositeOxideNitrideLayers()
    {
        _oxideLayers1 = new GameObject[NumberOfLayers];
        _nitrideLayers1 = new GameObject[NumberOfLayers];
        _oxideLayers2 = new GameObject[NumberOfLayers];
        _nitrideLayers2 = new GameObject[NumberOfLayers];

        delay = 0f;

        for(int i=0; i < NumberOfLayers; i++)
        {
            //Oxide Half1
            _oxideLayers1[i] = GameObject.Instantiate(OneLayer);
            _oxideLayers1[i].name = "OxideLayer"+i.ToString();
            _oxideLayers1[i].transform.parent = Half1;   
            _oxideLayers1[i].transform.localScale = new Vector3(MasterDepth, OxideThickness,_halfWidth);
            _oxideLayers1[i].GetComponent<Renderer>().material = OxideMat1;
            _oxideLayers1[i].transform.localPosition = _animStartPos;

            _oxideLayers2[i] = GameObject.Instantiate(OneLayer);
            _oxideLayers2[i].name = "OxideLayer"+i.ToString();
            _oxideLayers2[i].transform.parent = Half2;   
            _oxideLayers2[i].transform.localScale = new Vector3(MasterDepth, OxideThickness,_halfWidth);
            _oxideLayers2[i].GetComponent<Renderer>().material = OxideMat2;
            _oxideLayers2[i].transform.localPosition = _animStartPos;
      
            _targetY = SiliconSubtrateThickness + (NitrideThickness * i) + (OxideThickness * i ) + (OxideThickness / 2f)  ;
            LeanTween.moveLocalY (_oxideLayers1[i], _targetY, _oxNiAnimTime).setDelay(delay);
            LeanTween.moveLocalY (_oxideLayers2[i], _targetY, _oxNiAnimTime).setDelay(delay);

            delay += _oxNiAnimTime;

            //Nitride Half1
            _nitrideLayers1[i] = GameObject.Instantiate(OneLayer);
            _nitrideLayers1[i].name = "NitrideLayer"+i.ToString();
            _nitrideLayers1[i].transform.parent = Half1;
            _nitrideLayers1[i].transform.localScale = new Vector3(MasterDepth, NitrideThickness,_halfWidth);
            _nitrideLayers1[i].GetComponent<Renderer>().material = NitrideMat1;
            _nitrideLayers1[i].transform.localPosition = _animStartPos;

            _nitrideLayers2[i] = GameObject.Instantiate(OneLayer);
            _nitrideLayers2[i].name = "NitrideLayer"+i.ToString();
            _nitrideLayers2[i].transform.parent = Half2;
            _nitrideLayers2[i].transform.localScale = new Vector3(MasterDepth, NitrideThickness,_halfWidth);
            _nitrideLayers2[i].GetComponent<Renderer>().material = NitrideMat2;
            _nitrideLayers2[i].transform.localPosition = _animStartPos;

            _targetY = SiliconSubtrateThickness + (NitrideThickness * i) + (OxideThickness* (i + 1)) + + (NitrideThickness / 2f) ;
            LeanTween.moveLocalY (_nitrideLayers1[i], _targetY, _oxNiAnimTime).setDelay(delay);

            //Trigger next event when reached last layer
            if ( i == NumberOfLayers-1)
            {
                LeanTween.moveLocalY (_nitrideLayers2[i], _targetY, _oxNiAnimTime).setDelay(delay).setOnComplete(DepositStairCaseHardMask);
            }
            else
            {
                LeanTween.moveLocalY (_nitrideLayers2[i], _targetY, _oxNiAnimTime).setDelay(delay);
            }

            delay += _oxNiAnimTime;

        }
    }
        

    void DepositStairCaseHardMask()
    {
        //Camera Tween
        LeanTween.move(MainCamera, CamFirstCutPos.position, 2f).setEase(LeanTweenType.easeInCubic);

        _targetY = SiliconSubtrateThickness + (NumberOfLayers * OxideThickness) + (NumberOfLayers * NitrideThickness) + (StairCaseHardMaskThickness / 2f);

        //FIRST HALF
        _staircaseHardMask1 = GameObject.Instantiate(OneLayer);
        _staircaseHardMask1.name = "StaircaseHardMask";
        _staircaseHardMask1.transform.parent = Half1;
        _staircaseHardMask1.transform.localScale = new Vector3(MasterDepth, StairCaseHardMaskThickness, _halfWidth);
        _staircaseHardMask1.GetComponent<Renderer>().material = StaircaseHardMaskMat;
        _staircaseHardMask1.transform.localPosition = _animStartPos;       
        LeanTween.moveLocalY (_staircaseHardMask1, _targetY, _stairCaseHardMaskAnimTime); 

        //Second HALF
        _staircaseHardMask2 = GameObject.Instantiate(OneLayer);
        _staircaseHardMask2.name = "StaircaseHardMask";
        _staircaseHardMask2.transform.parent = Half2;
        _staircaseHardMask2.transform.localScale = new Vector3(MasterDepth, StairCaseHardMaskThickness, _halfWidth);
        _staircaseHardMask2.GetComponent<Renderer>().material = StaircaseHardMaskMat;
        _staircaseHardMask2.transform.localPosition = _animStartPos;       
        LeanTween.moveLocalY (_staircaseHardMask2, _targetY, _stairCaseHardMaskAnimTime).setOnComplete(BeginStaircaseFormation);

    }

    #region StairCaseFormation

    void BeginStaircaseFormation()
    {
        _staircaseHardMaskVertAnimComp1 = _staircaseHardMask1.GetComponent<VertexAnimation>();
        _staircaseHardMaskVertAnimComp2 = _staircaseHardMask2.GetComponent<VertexAnimation>();

        _oxideVertexComp1 = new VertexAnimation[NumberOfLayers];
        _oxideVertexComp2 = new VertexAnimation[NumberOfLayers];

        _nitrideVertexComp1 = new VertexAnimation[NumberOfLayers];
        _nitrideVertexComp2 = new VertexAnimation[NumberOfLayers];

        _staircaseHardMaskYoffset = 1f / NumberOfLayers;

        for (int i=0; i < NumberOfLayers; i++)
        {
            _oxideVertexComp1[i] = _oxideLayers1[i].GetComponent<VertexAnimation>();
            _oxideVertexComp2[i] = _oxideLayers2[i].GetComponent<VertexAnimation>();

            _nitrideVertexComp1[i] = _nitrideLayers1[i].GetComponent<VertexAnimation>();
            _nitrideVertexComp2[i] = _nitrideLayers2[i].GetComponent<VertexAnimation>();
        }

        //staircase hardmask 1
        _staircaseHardMaskVertAnimComp1.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateLeftFace(_stairFormAnimTime, 1f);

        //staircase hardmask 2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateRightFaceWithCallBack(_stairFormAnimTime, 1f, TriggerOxNiStair1);
    }   

    void TriggerOxNiStair1()
    {
        int passNum = 1;

        //HardMask reduction
        //1
        _staircaseHardMaskVertAnimComp1.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateTopFace(_stairFormAnimTime,0);

        //2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateTopFace(_stairFormAnimTime,0);

        //Oxide
        //1
        _oxideVertexComp1[NumberOfLayers - 1].OffsetDist = StairCaseStepWidth;
        _oxideVertexComp1[NumberOfLayers - 1].DebugCurrentMesh();
        _oxideVertexComp1[NumberOfLayers - 1].AnimateLeftFace(_stairFormAnimTime, 0f);

        //2
        _oxideVertexComp2[NumberOfLayers - 1].OffsetDist = -StairCaseStepWidth;
        _oxideVertexComp2[NumberOfLayers - 1].DebugCurrentMesh();
        _oxideVertexComp2[NumberOfLayers - 1].AnimateRightFace(_stairFormAnimTime, 0f);

        //Nitride
        //1
        _nitrideVertexComp1[NumberOfLayers - 1].OffsetDist = StairCaseStepWidth;
        _nitrideVertexComp1[NumberOfLayers - 1].DebugCurrentMesh();
        _nitrideVertexComp1[NumberOfLayers - 1].AnimateLeftFace(_stairFormAnimTime, 0f);

        //2
        _nitrideVertexComp2[NumberOfLayers - 1].OffsetDist = -StairCaseStepWidth;
        _nitrideVertexComp2[NumberOfLayers - 1].DebugCurrentMesh();
        _nitrideVertexComp2[NumberOfLayers - 1].AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask2);

    }

    void TriggerSiHardMask2()
    {
        //staircase hardmask 1
        _staircaseHardMaskVertAnimComp1.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateLeftFace(_stairFormAnimTime, 0f);

        //staircase hardmask 2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair2);
    }

    void TriggerOxNiStair2()
    {
        int passNum = 2;

        //HardMask reduction
        //1
        _staircaseHardMaskVertAnimComp1.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateTopFace(_stairFormAnimTime,0);

        //2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            //1
            _oxideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //2
            _oxideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _oxideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);

            //Nitride
            //1
            _nitrideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _nitrideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);
            

            //2
            _nitrideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _nitrideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask3);
            }
            else
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask3()
    {
        //staircase hardmask 1
        _staircaseHardMaskVertAnimComp1.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateLeftFace(_stairFormAnimTime, 0f);

        //staircase hardmask 2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair3);
    }

    void TriggerOxNiStair3()
    {
        int passNum = 3;

        //HardMask reduction
        //1
        _staircaseHardMaskVertAnimComp1.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateTopFace(_stairFormAnimTime,0);

        //2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            //1
            _oxideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //2
            _oxideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _oxideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);

            //Nitride
            //1
            _nitrideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _nitrideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);


            //2
            _nitrideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _nitrideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask4);
            }
            else
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask4()
    {
        //staircase hardmask 1
        _staircaseHardMaskVertAnimComp1.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateLeftFace(_stairFormAnimTime, 0f);

        //staircase hardmask 2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair4);

    }

    void TriggerOxNiStair4()
    {
        int passNum = 4;

        //HardMask reduction
        //1
        _staircaseHardMaskVertAnimComp1.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateTopFace(_stairFormAnimTime,0);

        //2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            //1
            _oxideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //2
            _oxideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _oxideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);

            //Nitride
            //1
            _nitrideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _nitrideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);


            //2
            _nitrideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _nitrideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask5);
            }
            else
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask5()
    {
        _stairFormAnimTime = 0.1f;

        //staircase hardmask 1
        _staircaseHardMaskVertAnimComp1.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateLeftFace(_stairFormAnimTime, 0f);

        //staircase hardmask 2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair5);
    }

    void TriggerOxNiStair5()
    {
        int passNum = 5;

        //HardMask reduction
        //1
        _staircaseHardMaskVertAnimComp1.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateTopFace(_stairFormAnimTime,0);

        //2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            //Oxide
            //1
            _oxideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //2
            _oxideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _oxideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);

            //Nitride
            //1
            _nitrideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _nitrideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);


            //2
            _nitrideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _nitrideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask6);
            }
            else
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask6()
    {
        //staircase hardmask 1
        _staircaseHardMaskVertAnimComp1.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateLeftFace(_stairFormAnimTime, 0f);

        //staircase hardmask 2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair6);
    }

    void TriggerOxNiStair6()
    {
        int passNum = 6;

        //HardMask reduction
        //1
        _staircaseHardMaskVertAnimComp1.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateTopFace(_stairFormAnimTime,0);

        //2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            //1
            _oxideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //2
            _oxideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _oxideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);

            //Nitride
            //1
            _nitrideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _nitrideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);


            //2
            _nitrideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _nitrideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask7);
            }
            else
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask7()
    {
        //staircase hardmask 1
        _staircaseHardMaskVertAnimComp1.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateLeftFace(_stairFormAnimTime, 0f);

        //staircase hardmask 2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair7);
    }

    void TriggerOxNiStair7()
    {
        int passNum = 7;

        //HardMask reduction
        //1
        _staircaseHardMaskVertAnimComp1.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateTopFace(_stairFormAnimTime,0);

        //2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            //1
            _oxideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //2
            _oxideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _oxideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);

            //Nitride
            //1
            _nitrideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _nitrideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);


            //2
            _nitrideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _nitrideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask8);
//                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, FinalizeStaircase);
            }
            else
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);
            }
        }

    }

/// <summary>
/// /END OF 8 LAYER STRUCTURE
/// </summary>

    void TriggerSiHardMask8()
    {
        //staircase hardmask 1
        _staircaseHardMaskVertAnimComp1.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateLeftFace(_stairFormAnimTime, 0f);

        //staircase hardmask 2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair8);
    }

    void TriggerOxNiStair8()
    {
        int passNum = 8;

        //HardMask reduction
        //1
        _staircaseHardMaskVertAnimComp1.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateTopFace(_stairFormAnimTime,0);

        //2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            //1
            _oxideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //2
            _oxideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _oxideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);

            //Nitride
            //1
            _nitrideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _nitrideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);


            //2
            _nitrideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _nitrideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask9);
            }
            else
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask9()
    {
        //staircase hardmask 1
        _staircaseHardMaskVertAnimComp1.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateLeftFace(_stairFormAnimTime, 0f);

        //staircase hardmask 2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair9);
    }

    void TriggerOxNiStair9()
    {
        int passNum = 9;

        //HardMask reduction
        //1
        _staircaseHardMaskVertAnimComp1.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateTopFace(_stairFormAnimTime,0);

        //2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            //1
            _oxideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //2
            _oxideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _oxideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);

            //Nitride
            //1
            _nitrideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _nitrideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);


            //2
            _nitrideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _nitrideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask10);
            }
            else
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask10()
    {
        //staircase hardmask 1
        _staircaseHardMaskVertAnimComp1.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateLeftFace(_stairFormAnimTime, 0f);

        //staircase hardmask 2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair10);
    }

    void TriggerOxNiStair10()
    {
        int passNum = 10;

        //HardMask reduction
        //1
        _staircaseHardMaskVertAnimComp1.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateTopFace(_stairFormAnimTime,0);

        //2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            //1
            _oxideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //2
            _oxideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _oxideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);

            //Nitride
            //1
            _nitrideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _nitrideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);


            //2
            _nitrideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _nitrideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask11);
            }
            else
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask11()
    {
        //staircase hardmask 1
        _staircaseHardMaskVertAnimComp1.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateLeftFace(_stairFormAnimTime, 0f);

        //staircase hardmask 2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair11);
    }

    void TriggerOxNiStair11()
    {
        int passNum = 11;

        //HardMask reduction
        //1
        _staircaseHardMaskVertAnimComp1.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateTopFace(_stairFormAnimTime,0);

        //2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            //1
            _oxideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //2
            _oxideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _oxideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);

            //Nitride
            //1
            _nitrideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _nitrideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);


            //2
            _nitrideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _nitrideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask12);
            }
            else
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask12()
    {
        //staircase hardmask 1
        _staircaseHardMaskVertAnimComp1.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateLeftFace(_stairFormAnimTime, 0f);

        //staircase hardmask 2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair12);
    }

    void TriggerOxNiStair12()
    {
        int passNum = 12;

        //HardMask reduction
        //1
        _staircaseHardMaskVertAnimComp1.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateTopFace(_stairFormAnimTime,0);

        //2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            //1
            _oxideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //2
            _oxideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _oxideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);

            //Nitride
            //1
            _nitrideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _nitrideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);


            //2
            _nitrideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _nitrideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask13);
            }
            else
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask13()
    {
        //staircase hardmask 1
        _staircaseHardMaskVertAnimComp1.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateLeftFace(_stairFormAnimTime, 0f);

        //staircase hardmask 2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair13);
    }

    void TriggerOxNiStair13()
    {
        int passNum = 13;

        //HardMask reduction
        //1
        _staircaseHardMaskVertAnimComp1.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateTopFace(_stairFormAnimTime,0);

        //2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            //1
            _oxideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //2
            _oxideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _oxideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);

            //Nitride
            //1
            _nitrideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _nitrideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);


            //2
            _nitrideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _nitrideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask14);
            }
            else
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask14()
    {
        //staircase hardmask 1
        _staircaseHardMaskVertAnimComp1.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateLeftFace(_stairFormAnimTime, 0f);

        //staircase hardmask 2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair14);
    }

    void TriggerOxNiStair14()
    {
        int passNum = 14;

        //HardMask reduction
        //1
        _staircaseHardMaskVertAnimComp1.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateTopFace(_stairFormAnimTime,0);

        //2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            //1
            _oxideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //2
            _oxideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _oxideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);

            //Nitride
            //1
            _nitrideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _nitrideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);


            //2
            _nitrideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _nitrideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask15);
            }
            else
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask15()
    {
        //staircase hardmask 1
        _staircaseHardMaskVertAnimComp1.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateLeftFace(_stairFormAnimTime, 0f);

        //staircase hardmask 2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair15);
    }

    void TriggerOxNiStair15()
    {
        int passNum = 15;

        //HardMask reduction
        //1
        _staircaseHardMaskVertAnimComp1.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateTopFace(_stairFormAnimTime,0);

        //2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            //1
            _oxideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //2
            _oxideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _oxideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);

            //Nitride
            //1
            _nitrideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _nitrideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);


            //2
            _nitrideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _nitrideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask16);
            }
            else
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask16()
    {
        //staircase hardmask 1
        _staircaseHardMaskVertAnimComp1.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateLeftFace(_stairFormAnimTime, 0f);

        //staircase hardmask 2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair16);
    }

    void TriggerOxNiStair16()
    {
        int passNum = 16;

        //HardMask reduction
        //1
        _staircaseHardMaskVertAnimComp1.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateTopFace(_stairFormAnimTime,0);

        //2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            //1
            _oxideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //2
            _oxideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _oxideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);

            //Nitride
            //1
            _nitrideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _nitrideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);


            //2
            _nitrideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _nitrideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask17);
            }
            else
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask17()
    {
        //staircase hardmask 1
        _staircaseHardMaskVertAnimComp1.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateLeftFace(_stairFormAnimTime, 0f);

        //staircase hardmask 2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair17);
    }

    void TriggerOxNiStair17()
    {
        int passNum = 17;

        //HardMask reduction
        //1
        _staircaseHardMaskVertAnimComp1.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateTopFace(_stairFormAnimTime,0);

        //2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            //1
            _oxideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //2
            _oxideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _oxideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);

            //Nitride
            //1
            _nitrideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _nitrideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);


            //2
            _nitrideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _nitrideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask18);
            }
            else
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask18()
    {
        //staircase hardmask 1
        _staircaseHardMaskVertAnimComp1.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateLeftFace(_stairFormAnimTime, 0f);

        //staircase hardmask 2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair18);
    }

    void TriggerOxNiStair18()
    {
        int passNum = 18;

        //HardMask reduction
        //1
        _staircaseHardMaskVertAnimComp1.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateTopFace(_stairFormAnimTime,0);

        //2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            //1
            _oxideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //2
            _oxideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _oxideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);

            //Nitride
            //1
            _nitrideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _nitrideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);


            //2
            _nitrideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _nitrideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask19);
            }
            else
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask19()
    {
        //staircase hardmask 1
        _staircaseHardMaskVertAnimComp1.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateLeftFace(_stairFormAnimTime, 0f);

        //staircase hardmask 2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair19);
    }

    void TriggerOxNiStair19()
    {
        int passNum = 19;

        //HardMask reduction
        //1
        _staircaseHardMaskVertAnimComp1.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateTopFace(_stairFormAnimTime,0);

        //2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            //1
            _oxideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //2
            _oxideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _oxideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);

            //Nitride
            //1
            _nitrideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _nitrideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);


            //2
            _nitrideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _nitrideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask20);
            }
            else
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask20()
    {
        //staircase hardmask 1
        _staircaseHardMaskVertAnimComp1.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateLeftFace(_stairFormAnimTime, 0f);

        //staircase hardmask 2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair20);
    }

    void TriggerOxNiStair20()
    {
        int passNum = 20;

        //HardMask reduction
        //1
        _staircaseHardMaskVertAnimComp1.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateTopFace(_stairFormAnimTime,0);

        //2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            //1
            _oxideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //2
            _oxideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _oxideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);

            //Nitride
            //1
            _nitrideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _nitrideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);


            //2
            _nitrideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _nitrideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask21);
            }
            else
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);
            }
        }

    }  

    void TriggerSiHardMask21()
    {
        //staircase hardmask 1
        _staircaseHardMaskVertAnimComp1.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateLeftFace(_stairFormAnimTime, 0f);

        //staircase hardmask 2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair21);
    }

    void TriggerOxNiStair21()
    {
        int passNum = 21;

        //HardMask reduction
        //1
        _staircaseHardMaskVertAnimComp1.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateTopFace(_stairFormAnimTime,0);

        //2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            //1
            _oxideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //2
            _oxideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _oxideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);

            //Nitride
            //1
            _nitrideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _nitrideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);


            //2
            _nitrideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _nitrideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask22);
            }
            else
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask22()
    {
        //staircase hardmask 1
        _staircaseHardMaskVertAnimComp1.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateLeftFace(_stairFormAnimTime, 0f);

        //staircase hardmask 2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair22);
    }

    void TriggerOxNiStair22()
    {
        int passNum = 22;

        //HardMask reduction
        //1
        _staircaseHardMaskVertAnimComp1.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateTopFace(_stairFormAnimTime,0);

        //2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            //1
            _oxideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //2
            _oxideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _oxideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);

            //Nitride
            //1
            _nitrideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _nitrideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);


            //2
            _nitrideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _nitrideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask23);
            }
            else
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask23()
    {
        //staircase hardmask 1
        _staircaseHardMaskVertAnimComp1.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateLeftFace(_stairFormAnimTime, 0f);

        //staircase hardmask 2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair23);
    }

    void TriggerOxNiStair23()
    {
        int passNum = 23;

        //HardMask reduction
        //1
        _staircaseHardMaskVertAnimComp1.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateTopFace(_stairFormAnimTime,0);

        //2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            //1
            _oxideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //2
            _oxideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _oxideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);

            //Nitride
            //1
            _nitrideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _nitrideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);


            //2
            _nitrideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _nitrideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask24);
            }
            else
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask24()
    {
        //staircase hardmask 1
        _staircaseHardMaskVertAnimComp1.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateLeftFace(_stairFormAnimTime, 0f);

        //staircase hardmask 2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair24);
    }

    void TriggerOxNiStair24()
    {
        int passNum = 24;

        //HardMask reduction
        //1
        _staircaseHardMaskVertAnimComp1.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateTopFace(_stairFormAnimTime,0);

        //2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            //1
            _oxideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //2
            _oxideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _oxideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);

            //Nitride
            //1
            _nitrideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _nitrideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);


            //2
            _nitrideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _nitrideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask25);
            }
            else
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask25()
    {
        //staircase hardmask 1
        _staircaseHardMaskVertAnimComp1.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateLeftFace(_stairFormAnimTime, 0f);

        //staircase hardmask 2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair25);
    }

    void TriggerOxNiStair25()
    {
        int passNum = 25;

        //HardMask reduction
        //1
        _staircaseHardMaskVertAnimComp1.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateTopFace(_stairFormAnimTime,0);

        //2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            //1
            _oxideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //2
            _oxideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _oxideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);

            //Nitride
            //1
            _nitrideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _nitrideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);


            //2
            _nitrideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _nitrideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask26);
            }
            else
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask26()
    {
        //staircase hardmask 1
        _staircaseHardMaskVertAnimComp1.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateLeftFace(_stairFormAnimTime, 0f);

        //staircase hardmask 2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair26);
    }

    void TriggerOxNiStair26()
    {
        int passNum = 26;

        //HardMask reduction
        //1
        _staircaseHardMaskVertAnimComp1.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateTopFace(_stairFormAnimTime,0);

        //2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            //1
            _oxideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //2
            _oxideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _oxideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);

            //Nitride
            //1
            _nitrideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _nitrideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);


            //2
            _nitrideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _nitrideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask27);
            }
            else
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask27()
    {
        //staircase hardmask 1
        _staircaseHardMaskVertAnimComp1.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateLeftFace(_stairFormAnimTime, 0f);

        //staircase hardmask 2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair27);
    }

    void TriggerOxNiStair27()
    {
        int passNum = 27;

        //HardMask reduction
        //1
        _staircaseHardMaskVertAnimComp1.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateTopFace(_stairFormAnimTime,0);

        //2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            //1
            _oxideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //2
            _oxideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _oxideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);

            //Nitride
            //1
            _nitrideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _nitrideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);


            //2
            _nitrideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _nitrideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask28);
            }
            else
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask28()
    {
        //staircase hardmask 1
        _staircaseHardMaskVertAnimComp1.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateLeftFace(_stairFormAnimTime, 0f);

        //staircase hardmask 2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair28);
    }

    void TriggerOxNiStair28()
    {
        int passNum = 28;

        //HardMask reduction
        //1
        _staircaseHardMaskVertAnimComp1.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateTopFace(_stairFormAnimTime,0);

        //2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            //1
            _oxideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //2
            _oxideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _oxideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);

            //Nitride
            //1
            _nitrideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _nitrideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);


            //2
            _nitrideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _nitrideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask29);
            }
            else
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask29()
    {
        //staircase hardmask 1
        _staircaseHardMaskVertAnimComp1.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateLeftFace(_stairFormAnimTime, 0f);

        //staircase hardmask 2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair29);
    }

    void TriggerOxNiStair29()
    {
        int passNum = 29;

        //HardMask reduction
        //1
        _staircaseHardMaskVertAnimComp1.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateTopFace(_stairFormAnimTime,0);

        //2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            //1
            _oxideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //2
            _oxideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _oxideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);

            //Nitride
            //1
            _nitrideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _nitrideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);


            //2
            _nitrideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _nitrideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask30);
            }
            else
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask30()
    {
        //staircase hardmask 1
        _staircaseHardMaskVertAnimComp1.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateLeftFace(_stairFormAnimTime, 0f);

        //staircase hardmask 2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair30);
    }

    void TriggerOxNiStair30()
    {
        int passNum = 30;

        //HardMask reduction
        //1
        _staircaseHardMaskVertAnimComp1.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateTopFace(_stairFormAnimTime,0);

        //2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            //1
            _oxideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //2
            _oxideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _oxideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);

            //Nitride
            //1
            _nitrideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _nitrideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);


            //2
            _nitrideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _nitrideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerSiHardMask31);
            }
            else
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void TriggerSiHardMask31()
    {
        //staircase hardmask 1
        _staircaseHardMaskVertAnimComp1.OffsetDist = StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateLeftFace(_stairFormAnimTime, 0f);

        //staircase hardmask 2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair31);
    }

    void TriggerOxNiStair31()
    {
        int passNum = 31;

        //HardMask reduction
        //1
        _staircaseHardMaskVertAnimComp1.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp1.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp1.AnimateTopFace(_stairFormAnimTime,0);

        //2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -_staircaseHardMaskYoffset;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateTopFace(_stairFormAnimTime,0);

        for (int i=1; i<= passNum; i++)
        {
            //Oxide
            //1
            _oxideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _oxideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);

            //2
            _oxideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _oxideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();
            _oxideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);

            //Nitride
            //1
            _nitrideVertexComp1[NumberOfLayers - i].OffsetDist = StairCaseStepWidth;
            _nitrideVertexComp1[NumberOfLayers - i].DebugCurrentMesh();
            _nitrideVertexComp1[NumberOfLayers - i].AnimateLeftFace(_stairFormAnimTime, 0f);


            //2
            _nitrideVertexComp2[NumberOfLayers - i].OffsetDist = -StairCaseStepWidth;
            _nitrideVertexComp2[NumberOfLayers - i].DebugCurrentMesh();

            if (i == passNum)
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, FinalizeStaircase);
            }
            else
            {
                _nitrideVertexComp2[NumberOfLayers - i].AnimateRightFace(_stairFormAnimTime, 0f);
            }
        }

    }

    void FinalizeStaircase()
    {
        //Destroy Staircase hard mask
        GameObject.Destroy(_staircaseHardMask1);
        GameObject.Destroy(_staircaseHardMask2);

        DepositChannelHoleHardMask();

    }

    #endregion

    void DepositChannelHoleHardMask()
    {
//        _targetY = SiliconSubtrateThickness + (NumberOfLayers * OxideThickness) + (NumberOfLayers * NitrideThickness) + (ChannelHoleHardMaskThickness / 2f);

       
        ChannelHoleHardMaskThickness += (OxideThickness * NumberOfLayers) + (NitrideThickness * NumberOfLayers);
        _targetY = SiliconSubtrateThickness + (ChannelHoleHardMaskThickness / 2f);


//        float channelHoleHardMaskSideFaceOffset = StairCaseStepWidth * (NumberOfLayers-1);


        //FIRST HALF
        _channelHoleMask1 = GameObject.Instantiate(OneLayer);
        _channelHoleMask1.name = "ChannelHoleHardMask";
        _channelHoleMask1.transform.parent = Half1;
        _channelHoleMask1.transform.localScale = new Vector3(MasterDepth - scaleOffset, ChannelHoleHardMaskThickness, _halfWidth);
        _channelHoleMask1.GetComponent<Renderer>().material = ChannelHardMaskMat1;
        _channelHoleMask1.transform.localPosition = _animStartPos;   

//        VertexAnimation channelHoleMaskVertAnimComp1 = _channelHoleMask1.GetComponent<VertexAnimation>();
//        channelHoleMaskVertAnimComp1.OffsetDist = channelHoleHardMaskSideFaceOffset;
//        channelHoleMaskVertAnimComp1.DebugCurrentMesh();
//        channelHoleMaskVertAnimComp1.AnimateLeftFace(0,0);

        LeanTween.moveLocalY (_channelHoleMask1, _targetY, _channelHoleHardMaskAnimTime); 

        //Second HALF
        _channelHoleMask2 = GameObject.Instantiate(OneLayer);
        _channelHoleMask2.name = "ChannelHoleHardMask";
        _channelHoleMask2.transform.parent = Half2;
        _channelHoleMask2.transform.localScale = new Vector3(MasterDepth - scaleOffset, ChannelHoleHardMaskThickness, _halfWidth);
        _channelHoleMask2.GetComponent<Renderer>().material = ChannelHardMaskMat2;
        _channelHoleMask2.transform.localPosition = _animStartPos;  

//        VertexAnimation channelHoleMaskVertAnimComp2 = _channelHoleMask2.GetComponent<VertexAnimation>();
//        channelHoleMaskVertAnimComp2.OffsetDist = -channelHoleHardMaskSideFaceOffset;
//        channelHoleMaskVertAnimComp2.DebugCurrentMesh();
//        channelHoleMaskVertAnimComp2.AnimateRightFace(0,0);


        LeanTween.moveLocalY (_channelHoleMask2, _targetY, _channelHoleHardMaskAnimTime).setOnComplete(DepositChannelHoleCylinders); 


    }

    void DepositChannelHoleCylinders()
    {
        _targetY = SiliconSubtrateThickness + ChannelHoleHardMaskThickness;


        //FIRST HALF
        _channelHolesCylndrs1 = GameObject.Instantiate(ChannelHolesHalf);
        _channelHolesCylndrs1.name = "ChannelHole";
        _channelHolesCylndrs1.transform.parent = Half1;    

        Vector3 channelHole1StartPos = _animStartPos;
//        channelHole1StartPos.x = 0.8f;
        channelHole1StartPos.z = 118.42f;
        _channelHolesCylndrs1.transform.localPosition = channelHole1StartPos;

        LeanTween.moveLocalY (_channelHolesCylndrs1, _targetY, _channelHoleCylinderDepositAnimTime).setDelay(1f);

        //SECOND HALF
        _channelHolesCylndrs2 = GameObject.Instantiate(ChannelHolesHalf);
        _channelHolesCylndrs2.name = "ChannelHole";
        _channelHolesCylndrs2.transform.parent = Half2;   

        Vector3 channelHole2StartPos = _animStartPos;
//        channelHole1StartPos.x = 0.8f;
        channelHole2StartPos.z = -118.06f;

        _channelHolesCylndrs2.transform.localPosition = channelHole2StartPos;
        LeanTween.moveLocalY (_channelHolesCylndrs2, _targetY, _channelHoleCylinderDepositAnimTime).setDelay(1f).setOnComplete(BeginChannelHoleEtching);

    }

    void BeginChannelHoleEtching()
    {
        float channelHole1TargetYPos = (SiliconSubtrateThickness + (NumberOfLayers * OxideThickness) + (NumberOfLayers * NitrideThickness) ) / 2f + 0.1f;
        float channelHole1TargetYScale = (SiliconSubtrateThickness + (NumberOfLayers * OxideThickness) + (NumberOfLayers * NitrideThickness) ) / 2f;

        //MOVE AND SCALE THE CHANNEL HOLE CYLINDERS
        LeanTween.moveLocalY (_channelHolesCylndrs1, channelHole1TargetYPos, _channelHoleEtchAnimTime);
        LeanTween.scaleY (_channelHolesCylndrs1, channelHole1TargetYScale, _channelHoleEtchAnimTime);

        LeanTween.moveLocalY (_channelHolesCylndrs2, channelHole1TargetYPos, _channelHoleEtchAnimTime);
        LeanTween.scaleY (_channelHolesCylndrs2, channelHole1TargetYScale, _channelHoleEtchAnimTime);

        //FADE OUT HARD MASK
        LeanTween.alpha(_channelHoleMask1, 0.5f, _channelHoleEtchAnimTime);
        LeanTween.alpha(_channelHoleMask2, 0.5f, _channelHoleEtchAnimTime).setOnComplete(FinalizeEtch);

    }

    void FinalizeEtch()
    {
        GameObject.Destroy(_channelHoleMask1);
        GameObject.Destroy(_channelHoleMask2);

        _channelHolesCylndrs1.transform.parent = transform;
        _channelHolesCylndrs2.transform.parent = transform;

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
        _trenchHardMask1.transform.localScale = new Vector3(MasterDepth - scaleOffset, TrenchHardMaskThickness, _halfWidth);
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
        _trenchHardMask2.transform.localScale = new Vector3(MasterDepth - scaleOffset, TrenchHardMaskThickness, _halfWidth);
        _trenchHardMask2.GetComponent<Renderer>().material = TrenchHardMaskMat;
        _trenchHardMask2.transform.localPosition = _animStartPos;   

//        VertexAnimation trenchMaskVertAnimComp2 = _trenchHardMask2.GetComponent<VertexAnimation>();
//        trenchMaskVertAnimComp2.OffsetDist = -trenchHardMaskSideFaceOffset;
//        trenchMaskVertAnimComp2.DebugCurrentMesh();
//        trenchMaskVertAnimComp2.AnimateRightFace(0,0);

        LeanTween.moveLocalY (_trenchHardMask2, _targetY, _trenchHardMaskAnimTime).setOnComplete(BeginTrenchEtching); 

    }

    void BeginTrenchEtching()
    {
        _trenchHardMask1.transform.parent = transform;
        _trenchHardMask2.transform.parent = transform;

        _siliconSubstrate1.transform.parent = transform;
        _siliconSubstrate2.transform.parent = transform;
        
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
