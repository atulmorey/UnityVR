using UnityEngine;
using System.Collections;

public class NANDController : MonoBehaviour 
{
    public GameObject Nitride1;
    public GameObject Nitride2;
    public Material NitrideMat;

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

    Color tempCol;
    float alpha0 = 0f;
    float alpha1 = 255f;
   
    void Start()
    {
        Debug.Log("START");

        //<Summary>
        //Rendering modes in standard shader
        /*
         * Property = "_Mode"
         * 0 = Opeque
         * 1 = Cutout
         * 2 = Fade
         * 3 = Transperant 
        */

        //Set rendering mode to Fade by default
        NitrideMat.SetFloat("_Mode",2f);
        OxideMat.SetFloat("_Mode",2f);

        SipMat.SetFloat("_Mode",2f);


        //Alpha of all Mats is zero by default

        tempCol = NitrideMat.color;
        tempCol.a = alpha0;
        NitrideMat.color = tempCol;

        tempCol = OxideMat.color;
        tempCol.a = alpha0;
        OxideMat.color = tempCol;



        tempCol = SipMat.color;
        tempCol.a = alpha0;
        SipMat.color = tempCol;



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

        SiliconMat.SetFloat("_Mode",2f); //rendering mode to Fade

        tempCol = SiliconMat.color;
        tempCol.a = alpha0;
        SiliconMat.color = tempCol;

        Silicon.SetActive(true);

        LeanTween.value(Silicon, alpha0, alpha1, 3f).setOnUpdate((float val) =>
            {
                tempCol = SiliconMat.color;
                tempCol.a = val;
                SiliconMat.color = tempCol;
            }).setOnComplete(()=>
            {
                //Set the rendering mode to Opaque
                SiliconMat.SetFloat("_Mode",0f);
                Step2APolySilicon();
             });

    }

    void Step2APolySilicon()
    {
        Debug.Log("Step2APolySilicon");

        PolySiliconMat.SetFloat("_Mode",2f); //rendering mode to fade

        tempCol = PolySiliconMat.color;
        tempCol.a = alpha0;
        PolySiliconMat.color = tempCol;
        
        PolySilicon.SetActive(true);

        LeanTween.value(PolySilicon, alpha0, alpha1, 3f).setOnUpdate((float val) =>
            {
                tempCol = PolySiliconMat.color;
                tempCol.a = val;
                PolySiliconMat.color = tempCol;
            }).setOnComplete(()=>
                {
                    //Set the rendering mode to Opaque
                    PolySiliconMat.SetFloat("_Mode",0f);
                });

    }
}
