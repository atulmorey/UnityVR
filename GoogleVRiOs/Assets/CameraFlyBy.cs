using UnityEngine;
using System.Collections;

public class CameraFlyBy : MonoBehaviour 
{
    public GameObject MainCamera;
    public Transform[] CameraFlyByPoints;

    private float _flyByTime = 14f;

	// Use this for initialization
	void Start () 
    {
        BegineCameraFlyBy();	
	}
	
    void BegineCameraFlyBy()
    {
        Vector3[] splinePoints = new Vector3[CameraFlyByPoints.Length];

        for (int i=0; i < splinePoints.Length; i++)
        {
            splinePoints[i] = CameraFlyByPoints[i].position;
        }
        
        LeanTween.moveSpline(MainCamera, splinePoints, _flyByTime);

    }
}
