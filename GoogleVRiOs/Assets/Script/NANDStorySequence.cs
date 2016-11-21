using UnityEngine;
using System.Collections;

public class NANDStorySequence : MonoBehaviour 
{

    [Header("Transforms")]
    public Transform Half1;
    public Transform Half2;
    public Transform CamFirstCutPos;

    [Header("GameObjects")]
    public GameObject MainCamera;
    public GameObject OneLayer;
    public GameObject ChannelHolesHalf;

    [Header("Materials")]
    public Material SiliconSubstrateMat1;
    public Material SiliconSubstrateMat2;
    public Material OxideMat1;
    public Material OxideMat2;
    public Material NitrideMat1;
    public Material NitrideMat2;
    public Material ChannelHardMaskMat1;
    public Material ChannelHardMaskMat2;
    public Material ChennelHolesMat;
    public Material StaircaseHardMaskMat;

    [Header("Values")]
    public int NumberOfLayers = 32;
    public float MasterWidth = 5f;
    public float MasterDepth = 3f;

    public float SiliconSubtrateThickness = 1.7f;
    public float OxideThickness = 0.3f;
    public float NitrideThickness = 0.3f;
    public float StairCaseHardMaskThickness = 5f;
    public float StairCaseStepWidth = 0.25f;

    //private
    private GameObject _siliconSubstrate1;
    private GameObject[] _oxideLayers1;
    private GameObject[] _nitrideLayers1;
    private GameObject _hardMaskLayer1;
    private GameObject _channelHoles1;
    private GameObject _staircaseHardMask1;

    private GameObject _siliconSubstrate2;
    private GameObject[] _oxideLayers2;
    private GameObject[] _nitrideLayers2;
    private GameObject _hardMaskLayer2;
    private GameObject _channelHoles2;
    private GameObject _staircaseHardMask2;


    private Vector3 _animStartPos = new Vector3 (0,1000,0);
    private float _halfWidth;

    float layerOffsetDistanceY = 1.6f; //Offset distance between Oxide and Nitride layer

    //animTimes
    private float _siSubAnimTime = 0.1f;
    private float _oxNiAnimTime = 0.1f;
    private float _stairCaseHardMaskAnimTime = 0.1f;
    private float _staircaseHardmaskAnimTime = 1f;
    private float _stairFormAnimTime = 0.1f;

    private float _targetY = 0f;

    private VertexAnimation _staircaseHardMaskVertAnimComp1;
    private VertexAnimation _staircaseHardMaskVertAnimComp2;

    private VertexAnimation[] _oxideVertexComp1;
    private VertexAnimation[] _oxideVertexComp2;

    private VertexAnimation[] _nitrideVertexComp1;
    private VertexAnimation[] _nitrideVertexComp2;


    float delay = 0.1f; //Keep if equal to animtime as a start

	// Use this for initialization
	void Start () 
    {
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

        //FIRST HALF
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

    void BeginStaircaseFormation()
    {
        _staircaseHardMaskVertAnimComp1 = _staircaseHardMask1.GetComponent<VertexAnimation>();
        _staircaseHardMaskVertAnimComp2 = _staircaseHardMask2.GetComponent<VertexAnimation>();

        _oxideVertexComp1 = new VertexAnimation[NumberOfLayers];
        _oxideVertexComp2 = new VertexAnimation[NumberOfLayers];

        _nitrideVertexComp1 = new VertexAnimation[NumberOfLayers];
        _nitrideVertexComp2 = new VertexAnimation[NumberOfLayers];

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
        _staircaseHardMaskVertAnimComp1.AnimateLeftFace(_stairFormAnimTime, 0f);

        //staircase hardmask 2
        _staircaseHardMaskVertAnimComp2.OffsetDist = -StairCaseStepWidth;
        _staircaseHardMaskVertAnimComp2.DebugCurrentMesh();
        _staircaseHardMaskVertAnimComp2.AnimateRightFaceWithCallBack(_stairFormAnimTime, 0f, TriggerOxNiStair1);
    }   

    void TriggerOxNiStair1()
    {
        int passNum = 1;

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

    }

    /*
    void LaySiliconSubstrat
    {
        //FIRST HALF
        _siliconSubstrate1 = GameObject.Instantiate(OneLayer);
        _siliconSubstrate1.name = "SiliconSubstrate";
        _siliconSubstrate1.transform.parent = Half1;        

        _siliconSubstrate1.transform.localScale = new Vector3(1,2,1);
        _siliconSubstrate1.GetComponent<Renderer>().material = SiliconSubstrateMat1;

        _siliconSubstrate1.transform.localPosition = _animStartPos;

        LeanTween.moveLocalY (_siliconSubstrate1, 0f, 1f);

        //SECOND HALF
        _siliconSubstrate2 = GameObject.Instantiate(OneLayer);
        _siliconSubstrate2.name = "SiliconSubstrate";
        _siliconSubstrate2.transform.parent = Half2;        

        _siliconSubstrate2.transform.localScale = new Vector3(1,2,1);
        _siliconSubstrate2.GetComponent<Renderer>().material = SiliconSubstrateMat2;

        _siliconSubstrate2.transform.localPosition = _animStartPos;

        LeanTween.moveLocalY (_siliconSubstrate2, 0f, 1f).setOnComplete(() => {
            LayOxideNitrideDeposition();
        });

    }

    void LayOxideNitrideDeposition()
    {
        _oxideLayers1 = new GameObject[NumberOfLayers];
        _nitrideLayers1 = new GameObject[NumberOfLayers];
        _oxideLayers2 = new GameObject[NumberOfLayers];
        _nitrideLayers2 = new GameObject[NumberOfLayers];
              
        for(int i=0; i < NumberOfLayers; i++)
        {
                   
            _oxideLayers1[i] = GameObject.Instantiate(OneLayer);
            _oxideLayers1[i].name = "OxideLayer"+i.ToString();
            _oxideLayers1[i].transform.parent = Half1;           
            _oxideLayers1[i].GetComponent<Renderer>().material = OxideMat1;
            _oxideLayers1[i].transform.localPosition = _animStartPos;

            _oxideLayers2[i] = GameObject.Instantiate(OneLayer);
            _oxideLayers2[i].name = "OxideLayer"+i.ToString();
            _oxideLayers2[i].transform.parent = Half2;           
            _oxideLayers2[i].GetComponent<Renderer>().material = OxideMat2;
            _oxideLayers2[i].transform.localPosition = _animStartPos;


            LeanTween.moveLocalY (_oxideLayers1[i], targetY, animTime).setDelay(delay);
            LeanTween.moveLocalY (_oxideLayers2[i], targetY, animTime).setDelay(delay);

            targetY  +=layerOffsetDistanceY;
            delay += animTime;

            _nitrideLayers1[i] = GameObject.Instantiate(OneLayer);
            _nitrideLayers1[i].name = "NitrideLayer"+i.ToString();
            _nitrideLayers1[i].transform.parent = Half1;
            _nitrideLayers1[i].GetComponent<Renderer>().material = NitrideMat1;
            _nitrideLayers1[i].transform.localPosition = _animStartPos;

            _nitrideLayers2[i] = GameObject.Instantiate(OneLayer);
            _nitrideLayers2[i].name = "NitrideLayer"+i.ToString();
            _nitrideLayers2[i].transform.parent = Half2;
            _nitrideLayers2[i].GetComponent<Renderer>().material = NitrideMat2;
            _nitrideLayers2[i].transform.localPosition = _animStartPos;

            //Call hardmask deposition at the end
            if (i == (NumberOfLayers - 1))
            {
                LeanTween.moveLocalY (_nitrideLayers1[i], targetY, animTime).setDelay(delay); 
                LeanTween.moveLocalY (_nitrideLayers2[i], targetY, animTime).setDelay(delay).setOnComplete(MoveCameraToCut1); 
            }
            else
            {
                LeanTween.moveLocalY (_nitrideLayers1[i], targetY, animTime).setDelay(delay); 
                LeanTween.moveLocalY (_nitrideLayers2[i], targetY, animTime).setDelay(delay);
            }
            targetY+=layerOffsetDistanceY;
            delay += animTime;  


        }
    }

    void MoveCameraToCut1()
    {
        //Move Camera to the first cut
        LeanTween.move(MainCamera, CamFirstCutPos.position, 3f).setOnComplete(DepositChannelHoleHardMask);


    }

    void DepositChannelHoleHardMask()
    {
        float hardMaskAnimtime = 3f;

        //FIRST HALF
        _hardMaskLayer1 = GameObject.Instantiate(OneLayer);
        _hardMaskLayer1.name = "ChannelHardMask";
        _hardMaskLayer1.transform.parent = Half1;
        _hardMaskLayer1.GetComponent<Renderer>().material = ChannelHardMaskMat1;
        _hardMaskLayer1.transform.localScale = new Vector3(1,2,1);
        _hardMaskLayer1.transform.localPosition = _animStartPos;
        targetY+=(0.5f * layerOffsetDistanceY); //Notice that the Y scale is 2 for hardmask, hence added offset
        LeanTween.moveLocalY (_hardMaskLayer1, targetY, hardMaskAnimtime); 

        //SECOND HALF
        _hardMaskLayer2 = GameObject.Instantiate(OneLayer);
        _hardMaskLayer2.name = "ChannelHardMask";
        _hardMaskLayer2.transform.parent = Half2;
        _hardMaskLayer2.GetComponent<Renderer>().material = ChannelHardMaskMat2;
        _hardMaskLayer2.transform.localScale = new Vector3(1,2,1);
        _hardMaskLayer2.transform.localPosition = _animStartPos;
        LeanTween.moveLocalY (_hardMaskLayer2, targetY, hardMaskAnimtime).setOnComplete(BeginChannelHolesStep1); 
    }



    void BeginChannelHolesStep1()
    {
        float channelHoleTargetY = 107f;


        //FIRST HALF
        _channelHoles1 = GameObject.Instantiate(ChannelHolesHalf);
        _channelHoles1.name = "ChannelHole";
        _channelHoles1.transform.parent = Half1;    
        Vector3 channelHole1StartPos = _animStartPos;
        channelHole1StartPos.z = 30f;
        _channelHoles1.transform.localPosition = channelHole1StartPos;

        LeanTween.moveLocalY (_channelHoles1, channelHoleTargetY, 1f);


        //SECOND HALF
        _channelHoles2 = GameObject.Instantiate(ChannelHolesHalf);
        _channelHoles2.name = "ChannelHole";
        _channelHoles2.transform.parent = Half2;   
        Vector3 channelHole2StartPos = _animStartPos;
        channelHole2StartPos.z = -20.7f;
        _channelHoles2.transform.localPosition = channelHole2StartPos;
        LeanTween.moveLocalY (_channelHoles2, channelHoleTargetY, 1f).setOnComplete(ChannelHoleEtchStep2);

    }

    void ChannelHoleEtchStep2()
    {
        float etchAnimTime = 10f;

        float channelHole1TargetYPos = 52.25f;
        float channelHole1TargetYScale = 52f;

        //MOVE AND SCALE THE CHANNEL HOLE CYLINDERS
        LeanTween.moveLocalY (_channelHoles1, channelHole1TargetYPos, etchAnimTime);
        LeanTween.scaleY (_channelHoles1, channelHole1TargetYScale, etchAnimTime);

        LeanTween.moveLocalY (_channelHoles2, channelHole1TargetYPos, etchAnimTime);
        LeanTween.scaleY (_channelHoles2, channelHole1TargetYScale, etchAnimTime);

        //FADE OUT HARD MASK
        LeanTween.alpha(_hardMaskLayer1, 0f, etchAnimTime);
        LeanTween.alpha(_hardMaskLayer2, 0f, etchAnimTime).setOnComplete(FinalizeEtch);


    }

    void FinalizeEtch()
    {
        _hardMaskLayer1.SetActive(false);
        _hardMaskLayer2.SetActive(false);

        //BEGIN NEXT STEP i.e. DepositStairCaseHardMask()
        DepositStairCaseHardMask();

    }

    void FadeOutSecondHalf()
    {
        foreach (Transform child in Half2)
        {
            LeanTween.alpha(child.gameObject, 0f, 1f);
        }
    }

    void DepositStairCaseHardMask()
    {
        float CHMAnimTime = 3f;
        float thickness = 3.5f;
        float targetY = 106.76f;

        //FIRST HALF
        _staircaseHardMask1 = GameObject.Instantiate(OneLayer);
        _staircaseHardMask1.name = "StaircaseHardMask";
        _staircaseHardMask1.transform.parent = Half1;
        _staircaseHardMask1.GetComponent<Renderer>().material = StaircaseHardMaskMat;
        _staircaseHardMask1.transform.localScale = new Vector3(1,thickness,1);
        _staircaseHardMask1.transform.localPosition = _animStartPos;       
        LeanTween.moveLocalY (_staircaseHardMask1, targetY, CHMAnimTime); 

        //Second HALF
        _staircaseHardMask2 = GameObject.Instantiate(OneLayer);
        _staircaseHardMask2.name = "StaircaseHardMask";
        _staircaseHardMask2.transform.parent = Half2;
        _staircaseHardMask2.GetComponent<Renderer>().material = StaircaseHardMaskMat;
        _staircaseHardMask2.transform.localScale = new Vector3(1,thickness,1);
        _staircaseHardMask2.transform.localPosition = _animStartPos;       
        LeanTween.moveLocalY (_staircaseHardMask2, targetY, CHMAnimTime).setOnComplete(BeginStaircaseFormation);
     


    }

    void BeginStaircaseFormation()
    {
        VertexAnimation vertAnimSCHMComp1;
        VertexAnimation vertAnimSCHMComp2;

        VertexAnimation vertAnimSCOxiComp1;
        VertexAnimation vertAnimSCOxiComp2;

        VertexAnimation vertAnimSCNiComp1;
        VertexAnimation vertAnimSCNiComp2;

//        VertexAnimation vertexAnimationComp1;
//        VertexAnimation vertexAnimationComp2;

        float ultimateOffset = -45f;
        float eachStepOffset = ultimateOffset / NumberOfLayers;  

        float ultimateAnimTime = 30f;
        float eachLayerAnimTime = ultimateAnimTime / NumberOfLayers;

        vertAnimSCHMComp1 = _staircaseHardMask1.GetComponent<VertexAnimation>();
        vertAnimSCHMComp2 = _staircaseHardMask2.GetComponent<VertexAnimation>();

        float ultimateDelay = 1.1f;
        float eachLayerDelay = ultimateDelay / NumberOfLayers;

        //Animate Hard Mask     
        //Animate right face of second half staircase mask
        vertAnimSCHMComp2.enabled = true;
        vertAnimSCHMComp2.OffsetDist = ultimateOffset;

        vertAnimSCHMComp2.DebugCurrentMesh();
        vertAnimSCHMComp2.AnimateRightFace(ultimateAnimTime, 0f);


        for (int i=1; i <= NumberOfLayers; i++)
        {
            //Animate O-N
            _oxideLayers2[_oxideLayers2.Length - i].GetComponent<VertexAnimation>().enabled = true;
            _oxideLayers2[_oxideLayers2.Length - i].GetComponent<VertexAnimation>().OffsetDist = eachStepOffset * (_oxideLayers2.Length - i);
            _oxideLayers2[_oxideLayers2.Length - i].GetComponent<VertexAnimation>().DebugCurrentMesh();
            _oxideLayers2[_oxideLayers2.Length - i].GetComponent<VertexAnimation>().AnimateRightFace(ultimateAnimTime - eachLayerAnimTime * i, ultimateDelay - eachLayerDelay * i);

            _nitrideLayers2[_nitrideLayers2.Length - i].GetComponent<VertexAnimation>().enabled = true;
            _nitrideLayers2[_nitrideLayers2.Length - i].GetComponent<VertexAnimation>().OffsetDist = eachStepOffset * (_oxideLayers2.Length - i);
            _nitrideLayers2[_nitrideLayers2.Length - i].GetComponent<VertexAnimation>().DebugCurrentMesh();
            _nitrideLayers2[_nitrideLayers2.Length - i].GetComponent<VertexAnimation>().AnimateRightFace(ultimateAnimTime - eachLayerAnimTime * i, ultimateDelay - eachLayerDelay * i);

        }

    }

    void AnimateStaircaseHardMask()
    {

    }

    void AnimateStaircaseONLayers()
    {

    }
    */

}
