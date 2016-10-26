using UnityEngine;
using System.Collections;

public class NANDStructureBase : MonoBehaviour
{
    
    public GameObject PFilmTemplate;
    public GameObject NFilmTemplate;
    public Transform StartPos;
    public int PNLayerNum = 6;

    private GameObject BaseFilmGO;
    private GameObject[] PNGOs;

    private float scaleZ = 0.5f;
    private float posY = 0.5f;
    private float posZ = 0.25f;


	// Use this for initialization
	void Start ()
    {
        BaseFilmGO = this.gameObject;
    }
	
	// Update is called once per frame
	void Update () {
	
	}

    public void TriggerFirstStage()
    {
        PNGOs = new GameObject[PNLayerNum];
        bool stageOneCompleted = false;

        GameObject targetTr = new GameObject("TargetTransform");

        for (int i = 0; i < PNLayerNum; i++)
        {
            targetTr.transform.position = new Vector3(BaseFilmGO.transform.position.x, BaseFilmGO.transform.position.y + ((i + 1) * posY), BaseFilmGO.transform.position.z);

            targetTr.transform.localScale = new Vector3(BaseFilmGO.transform.localScale.x, BaseFilmGO.transform.localScale.y, BaseFilmGO.transform.localScale.z - (i + 1) * scaleZ);

            if (i % 2 == 0f)
            {
                PNGOs[i] = (GameObject)Instantiate(PFilmTemplate, StartPos.position, Quaternion.identity);
                PNGOs[i].transform.localScale = BaseFilmGO.transform.localScale; //targetTr.transform.localScale;

                LeanTween.moveLocal(PNGOs[i], targetTr.transform.localPosition, 2f).setDelay(i).setOnComplete(() =>
                {
                    if (i == PNLayerNum - 1)
                    {
                        stageOneCompleted = true;
                    }
                });
            }
            else
            {
                PNGOs[i] = (GameObject)Instantiate(NFilmTemplate, StartPos.position, Quaternion.identity);
                PNGOs[i].transform.localScale = BaseFilmGO.transform.localScale;

                LeanTween.moveLocal(PNGOs[i], targetTr.transform.localPosition, 2f).setDelay(i).setOnComplete(() =>
                {
                    if (i == PNLayerNum - 1)
                    {
                        stageOneCompleted = true;
                    }

                });

            }
        }

    }

    public void TriggerSecondStage()
    {

    }
}
