using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class VertexAnimation : MonoBehaviour 
{
    public float OffsetDist = 1f;              //Positive means Z positive direction

    private Mesh _mesh;
    private Vector3[] _vertices;
    private List<int> _leftFaceVert;
    private List<int> _rightFaceVert;

    private List<int> _topFaceVert;

    private Vector3 _targetVect;
    private int _numVerts = 0;

    private float _maxX, _minX = 0f;
    private float _maxY, _minY = 0f;
    private float _maxZ, _minZ = 0f;

	// Use this for initialization
	void Start () 
    {
        Debug.Log(GetComponent<Renderer>().bounds.size);
        
//        DebugCurrentMesh();

//        AnimateLeftFace(100f, 0f);
//        AnimateRightFace(50f, 0f);

//        ResetCurrentMeshParameters();
        AnimateTopFace(1f, 0f);
	
	}

    public void ResetCurrentMeshParameters()
    {
        _leftFaceVert.Clear();
        _rightFaceVert.Clear();       

    }

    public void DebugCurrentMesh()
    {
        Mesh cubeMesh = GetComponent<MeshFilter>().mesh;

        Vector3[] cubeVertices = cubeMesh.vertices;
        _numVerts = cubeVertices.Length;
        int[] cubeTriangles = cubeMesh.triangles;
        Vector3[] cubeNormals = cubeMesh.normals;
        Vector2[] cubeUvs = cubeMesh.uv;

//        Debug.Log("****VERTICES********"+ cubeVertices.Length);
//        for(int v=0; v < cubeVertices.Length; v++)
//        {
//            Debug.Log(v+": "+cubeVertices[v]);
//        }
//
//        Debug.Log("****Triangles********"+ cubeTriangles.Length);
//        for (int t=0; t<cubeTriangles.Length; t++)
//        {
//            Debug.Log(t+": "+cubeTriangles[t]);
//
//        }
//        Debug.Log("****NORMALS********"+ cubeNormals.Length);
//        for (int n=0; n<cubeNormals.Length; n++)
//        {
//            Debug.Log(n+": "+cubeNormals[n]);
//
//        }
//
//        Debug.Log("****UVS********"+ cubeUvs.Length);
//        int counter = 1;
//        for (int u =0; u < cubeUvs.Length; u++)
//        {
//            Debug.Log(u+": "+cubeUvs[u]);
//
//            if (counter % 4 == 0f) Debug.Log("**********");
//            counter++;
//        }

        //Create an int array for Z values
        float[] zValues = new float[_numVerts];
        float[] xValues = new float[_numVerts];
        float[] yValues = new float[_numVerts];

        int ind;
        for (ind = 0; ind < _numVerts; ind++)
        {
            xValues[ind] = cubeVertices[ind].x;
            yValues[ind] = cubeVertices[ind].x;
            zValues[ind] = cubeVertices[ind].z;
        }

        _maxX = Mathf.Max(xValues);
        _minX = Mathf.Min(xValues);

        _maxY = Mathf.Max(yValues);
        _minY = Mathf.Min(yValues);

        _maxZ = Mathf.Max(zValues);
        _minZ = Mathf.Min(zValues);

        Debug.Log("maxZ: "+_maxZ);
        Debug.Log("minZ: "+_minZ);


        //Capture index of vertices that are going to be animated
        _leftFaceVert = new List<int>();
        _rightFaceVert = new List<int>();
        _topFaceVert = new List<int>();

        for (ind = 0; ind < _numVerts; ind++)
        {
            if (zValues[ind] == _minZ) 
            {
                _leftFaceVert.Add(ind);
            }

            if (zValues[ind] == _maxZ)
            {
                _rightFaceVert.Add(ind);
            }

            if(yValues[ind] == _maxY)
            {
                _topFaceVert.Add(ind);
            }
                
        }

    
    }

    //Z ANIMATION FUNCTIONS
    public void AnimateLeftFace(float animTime, float delay)
    {
        float targetZ = 0f;  
        targetZ = _minZ + OffsetDist;       

//        Debug.Log("TargetZ: "+targetZ);
        
        LeanTween.value(_minZ, targetZ, animTime).setOnUpdate((float val) => 
        {
            UpdateLeftFaceInZ(val);
            }).setDelay(delay).setOnComplete(ResetCurrentMeshParameters);

    }

    public void AnimateLeftFaceWithCallBack(float animTime, float delay, System.Action callBackAction)
    {
        float targetZ = 0f;  
        targetZ = _minZ + OffsetDist;       

//        Debug.Log("TargetZ: "+targetZ);

        LeanTween.value(_minZ, targetZ, animTime).setOnUpdate((float val) => 
            {
                UpdateLeftFaceInZ(val);
            }).setDelay(delay).setOnComplete( () =>
                {
                    callBackAction();
                    ResetCurrentMeshParameters();

                });


    }       

    //+ Z means modifying mesh in positive Z direction
    void UpdateLeftFaceInZ(float updatedVal)
    {
        _mesh = GetComponent<MeshFilter>().mesh;
        _vertices = _mesh.vertices;

        int i = 0;
        int index;
        while (i < _leftFaceVert.Count) 
        {
            index = _leftFaceVert[i];
            _targetVect = _vertices[index];
            _targetVect.z = updatedVal;
            _vertices[index] = _targetVect;
            i++;
        }

        _mesh.vertices = _vertices;
    }

    public void AnimateRightFace(float animTime, float delay)
    {
        float targetZ = 0f;  
        targetZ = _maxZ + OffsetDist;       

        Debug.Log("TargetZ: "+targetZ);

        LeanTween.value(_maxZ, targetZ, animTime).setDelay(delay).setOnUpdate((float val) => 
            {
                UpdateRightFaceInZ(val);
            }).setOnComplete(ResetCurrentMeshParameters);;

    }

    public void AnimateRightFaceWithCallBack(float animTime, float delay, System.Action callBackAction)
    {
        float targetZ = 0f;  
        targetZ = _maxZ + OffsetDist;       

        Debug.Log("TargetZ: "+targetZ);

        LeanTween.value(_maxZ, targetZ, animTime).setDelay(delay).setOnUpdate((float val) => 
            {
                UpdateRightFaceInZ(val);
            }).setOnComplete(()=>
                {
                    callBackAction();
                    ResetCurrentMeshParameters();
                });

    }


    //+ Z means modifying mesh in positive Z direction
    void UpdateRightFaceInZ(float updatedVal)
    {
        _mesh = GetComponent<MeshFilter>().mesh;
        _vertices = _mesh.vertices;

        int i = 0;
        int index;
        while (i < _rightFaceVert.Count) 
        {
            index = _rightFaceVert[i];
            _targetVect = _vertices[index];
            _targetVect.z = updatedVal;
            _vertices[index] = _targetVect;
            i++;
        }

        _mesh.vertices = _vertices;
    }


    //Y ANIMATION FUNCTIONS
    public void AnimateTopFace(float animTime, float delay)
    {
        float targetY = 0f;  
        targetY = _maxY + OffsetDist;       


        LeanTween.value(_maxY, targetY, animTime).setDelay(delay).setOnUpdate((float val) => 
            {
                UpdateTopFaceInY(val);
            }).setOnComplete(ResetCurrentMeshParameters);;

    }


    //+ Z means modifying mesh in positive Z direction
    void UpdateTopFaceInY(float updatedVal)
    {
        _mesh = GetComponent<MeshFilter>().mesh;
        _vertices = _mesh.vertices;

        int i = 0;
        int index;
        while (i < _topFaceVert.Count) 
        {
            index = _topFaceVert[i];
            _targetVect = _vertices[index];
            _targetVect.z = updatedVal;
            _vertices[index] = _targetVect;
            i++;
        }

        _mesh.vertices = _vertices;
    }


}
