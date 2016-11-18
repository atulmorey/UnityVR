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
    public int NumberOfLayers = 3;

    //private
    private GameObject _siliconSubstrate1;
    private GameObject[] _oxideLayers1;
    private GameObject[] _nitrideLayers1;
    private GameObject _hardMaskLayer1;
    private GameObject _channelHoles1;
    private GameObject[] _staircaseHardMask1;

    private GameObject _siliconSubstrate2;
    private GameObject[] _oxideLayers2;
    private GameObject[] _nitrideLayers2;
    private GameObject _hardMaskLayer2;
    private GameObject _channelHoles2;
    private GameObject[] _staircaseHardMask2;


    private Vector3 AnimStartPos = new Vector3 (0,200,0);

    float layerOffsetDistanceY = 1.6f; //Offset distance between Oxide and Nitride layer
    float targetY = 2.4f; //starting LocalY for first layer i.e. Oxide0

    float animTime = 0.1f;
    float delay = 0.1f; //Keep if equal to animtime as a start

	// Use this for initialization
	void Start () 
    {
        LaySiliconSubstrate();  
	
	}

    void LaySiliconSubstrate()
    {
        //FIRST HALF
        _siliconSubstrate1 = GameObject.Instantiate(OneLayer);
        _siliconSubstrate1.name = "SiliconSubstrate";
        _siliconSubstrate1.transform.parent = Half1;        

        _siliconSubstrate1.transform.localScale = new Vector3(1,2,1);
        _siliconSubstrate1.GetComponent<Renderer>().material = SiliconSubstrateMat1;

        _siliconSubstrate1.transform.localPosition = AnimStartPos;

        LeanTween.moveLocalY (_siliconSubstrate1, 0f, 1f);

        //SECOND HALF
        _siliconSubstrate2 = GameObject.Instantiate(OneLayer);
        _siliconSubstrate2.name = "SiliconSubstrate";
        _siliconSubstrate2.transform.parent = Half2;        

        _siliconSubstrate2.transform.localScale = new Vector3(1,2,1);
        _siliconSubstrate2.GetComponent<Renderer>().material = SiliconSubstrateMat2;

        _siliconSubstrate2.transform.localPosition = AnimStartPos;

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
            _oxideLayers1[i].transform.localPosition = AnimStartPos;

            _oxideLayers2[i] = GameObject.Instantiate(OneLayer);
            _oxideLayers2[i].name = "OxideLayer"+i.ToString();
            _oxideLayers2[i].transform.parent = Half2;           
            _oxideLayers2[i].GetComponent<Renderer>().material = OxideMat2;
            _oxideLayers2[i].transform.localPosition = AnimStartPos;


            LeanTween.moveLocalY (_oxideLayers1[i], targetY, animTime).setDelay(delay);
            LeanTween.moveLocalY (_oxideLayers2[i], targetY, animTime).setDelay(delay);

            targetY  +=layerOffsetDistanceY;
            delay += animTime;

            _nitrideLayers1[i] = GameObject.Instantiate(OneLayer);
            _nitrideLayers1[i].name = "NitrideLayer"+i.ToString();
            _nitrideLayers1[i].transform.parent = Half1;
            _nitrideLayers1[i].GetComponent<Renderer>().material = NitrideMat1;
            _nitrideLayers1[i].transform.localPosition = AnimStartPos;

            _nitrideLayers2[i] = GameObject.Instantiate(OneLayer);
            _nitrideLayers2[i].name = "NitrideLayer"+i.ToString();
            _nitrideLayers2[i].transform.parent = Half2;
            _nitrideLayers2[i].GetComponent<Renderer>().material = NitrideMat2;
            _nitrideLayers2[i].transform.localPosition = AnimStartPos;

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
        _hardMaskLayer1.transform.localPosition = AnimStartPos;
        targetY+=(0.5f * layerOffsetDistanceY); //Notice that the Y scale is 2 for hardmask, hence added offset
        LeanTween.moveLocalY (_hardMaskLayer1, targetY, hardMaskAnimtime); 

        //SECOND HALF
        _hardMaskLayer2 = GameObject.Instantiate(OneLayer);
        _hardMaskLayer2.name = "ChannelHardMask";
        _hardMaskLayer2.transform.parent = Half2;
        _hardMaskLayer2.GetComponent<Renderer>().material = ChannelHardMaskMat2;
        _hardMaskLayer2.transform.localScale = new Vector3(1,2,1);
        _hardMaskLayer2.transform.localPosition = AnimStartPos;
        LeanTween.moveLocalY (_hardMaskLayer2, targetY, hardMaskAnimtime).setOnComplete(BeginChannelHolesStep1); 
    }



    void BeginChannelHolesStep1()
    {
        float channelHoleTargetY = 107f;

        //FIRST HALF
        _channelHoles1 = GameObject.Instantiate(ChannelHolesHalf);
        _channelHoles1.name = "ChannelHole";
        _channelHoles1.transform.parent = Half1;    
        Vector3 channelHole1StartPos = AnimStartPos;
        channelHole1StartPos.z = 30f;
        _channelHoles1.transform.localPosition = channelHole1StartPos;

        LeanTween.moveLocalY (_channelHoles1, channelHoleTargetY, 1f);


        //SECOND HALF
        _channelHoles2 = GameObject.Instantiate(ChannelHolesHalf);
        _channelHoles2.name = "ChannelHole";
        _channelHoles2.transform.parent = Half2;   
        Vector3 channelHole2StartPos = AnimStartPos;
        channelHole2StartPos.z = -20.7f;
        _channelHoles2.transform.localPosition = channelHole2StartPos;
        LeanTween.moveLocalY (_channelHoles2, channelHoleTargetY, 1f).setOnComplete(ChannelHoleEtchStep2);

    }

    void ChannelHoleEtchStep2()
    {
        float etchAnimTime = 0.1f;

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

        float thickness = 0.3f;

        _staircaseHardMask1 = new GameObject[NumberOfLayers];
        _staircaseHardMask2 = new GameObject[NumberOfLayers];

        float firstLayerY = 104.242f;
        float offset = thickness * 1.5f;

        for(int st = 0; st < NumberOfLayers; st++)
        {

            //FIRST HALF
            _staircaseHardMask1[st] = GameObject.Instantiate(OneLayer);
            _staircaseHardMask1[st].name = "StaircaseHardMask"+st.ToString();
            _staircaseHardMask1[st].transform.parent = Half1;
            _staircaseHardMask1[st].GetComponent<Renderer>().material = StaircaseHardMaskMat;
            _staircaseHardMask1[st].transform.localScale = new Vector3(1,thickness,1);
            _staircaseHardMask1[st].transform.localPosition = AnimStartPos;
            targetY = firstLayerY + (st * thickness * 1.5f) + 0.1f; 
            LeanTween.moveLocalY (_staircaseHardMask1[st], targetY, CHMAnimTime); 

            //Second HALF
            _staircaseHardMask2[st] = GameObject.Instantiate(OneLayer);
            _staircaseHardMask2[st].name = "StaircaseHardMask";
            _staircaseHardMask2[st].transform.parent = Half2;
            _staircaseHardMask2[st].GetComponent<Renderer>().material = StaircaseHardMaskMat;
            _staircaseHardMask2[st].transform.localScale = new Vector3(1,thickness,1);
            _staircaseHardMask2[st].transform.localPosition = AnimStartPos;
            LeanTween.moveLocalY (_staircaseHardMask2[st], targetY, CHMAnimTime); 
        }

    }

}
