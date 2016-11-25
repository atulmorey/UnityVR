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
    private List<int> _bottomeFaceVert;

    private List<int> _frontFaceVert;
    private List<int> _backFaceVert;

    private Vector3 _targetVect;
    private int _numVerts = 0;

    private float _maxX, _minX = 0f;
    private float _maxY, _minY = 0f;
    private float _maxZ, _minZ = 0f;

	// Use this for initialization
	void Start () 
    {
        
//        DebugCurrentMesh();
//        AnimateFrontFace(1,0);
//        AnimateBackFace(1,0);

//        AnimateLeftFace(1f, 0f);
//        AnimateRightFace(2f, 0f);

//        ResetCurrentMeshParameters();
//        AnimateTopFace(1f, 0f);

//        AnimateColor();


	
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
            yValues[ind] = cubeVertices[ind].y;
            zValues[ind] = cubeVertices[ind].z;
        }

        _maxX = Mathf.Max(xValues);
        _minX = Mathf.Min(xValues);

        _maxY = Mathf.Max(yValues);
        _minY = Mathf.Min(yValues);

        _maxZ = Mathf.Max(zValues);
        _minZ = Mathf.Min(zValues);


        //Capture index of vertices that are going to be animated
        _leftFaceVert = new List<int>();
        _rightFaceVert = new List<int>();

        _topFaceVert = new List<int>();
        _bottomeFaceVert = new List<int>();

        _frontFaceVert = new List<int>();
        _backFaceVert = new List<int>();

        for (ind = 0; ind < _numVerts; ind++)
        {
            if (xValues[ind] == _minX)
            {
                _backFaceVert.Add(ind);
            }

            if(xValues[ind] == _maxX)
            {
                _frontFaceVert.Add(ind);
            }

            if(yValues[ind] == _minY)
            {
                _bottomeFaceVert.Add(ind);
            }

            if(yValues[ind] == _maxY)
            {
                _topFaceVert.Add(ind);
            }

            if (zValues[ind] == _minZ) 
            {
                _leftFaceVert.Add(ind);
            }

            if (zValues[ind] == _maxZ)
            {
                _rightFaceVert.Add(ind);
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
                    ResetCurrentMeshParameters();
                    callBackAction();

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

//        Debug.Log("TargetZ: "+targetZ);

        LeanTween.value(_maxZ, targetZ, animTime).setDelay(delay).setOnUpdate((float val) => 
            {
                UpdateRightFaceInZ(val);
            }).setOnComplete(ResetCurrentMeshParameters);

    }

    public void AnimateRightFaceWithCallBack(float animTime, float delay, System.Action callBackAction)
    {
        float targetZ = 0f;  
        targetZ = _maxZ + OffsetDist;       

//        Debug.Log("TargetZ: "+targetZ);

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
            });

    }


    //+ Y means modifying mesh in positive Z direction
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
            _targetVect.y = updatedVal;
            _vertices[index] = _targetVect;
            i++;
        }

        _mesh.vertices = _vertices;
    }

    //Y ANIMATION FUNCTIONS
    public void AnimateFrontFace(float animTime, float delay)
    {
        float targetX = 0f;  
        targetX = _maxX + OffsetDist;       

        LeanTween.value(_maxX, targetX, animTime).setDelay(delay).setOnUpdate((float val) => 
            {
                UpdateFrontFaceInX(val);
            }).setOnComplete(ResetCurrentMeshParameters);

    }


    //+ X means modifying mesh in positive Z direction
    void UpdateFrontFaceInX(float updatedVal)
    {
        _mesh = GetComponent<MeshFilter>().mesh;
        _vertices = _mesh.vertices;

        int i = 0;
        int index;
        while (i < _frontFaceVert.Count) 
        {

            index = _frontFaceVert[i];
            _targetVect = _vertices[index];
            _targetVect.x = updatedVal;
            _vertices[index] = _targetVect;
            i++;
        }

        _mesh.vertices = _vertices;
    }

    public void AnimateBackFace(float animTime, float delay)
    {
        float targetX = 0f;  
        targetX = _minX + OffsetDist;       

        LeanTween.value(_minX, targetX, animTime).setDelay(delay).setOnUpdate((float val) => 
            {
                UpdateBackFaceInX(val);
            }).setOnComplete(ResetCurrentMeshParameters);

    }


    //+ X means modifying mesh in positive Z direction
    void UpdateBackFaceInX(float updatedVal)
    {
        _mesh = GetComponent<MeshFilter>().mesh;
        _vertices = _mesh.vertices;

        int i = 0;
        int index;
        while (i < _backFaceVert.Count) 
        {

            index = _backFaceVert[i];
            _targetVect = _vertices[index];
            _targetVect.x = updatedVal;
            _vertices[index] = _targetVect;
            i++;
        }

        _mesh.vertices = _vertices;
    }


    void AnimateColor()
    {
//        MeshFilter viewedModelFilter = (MeshFilter)GetComponent("MeshFilter");
//        Mesh mesh = viewedModelFilter.mesh;
//        Color[] colors = new Color[mesh.vertices.Length];
//        Color BottomColor = Color.red;
//        Color TopColor = Color.blue;
//        colors[0] = BottomColor;
//        colors[1] = TopColor;
//        colors[2] = BottomColor;
//        colors[3] = TopColor;
//        mesh.colors = colors;
//
        _mesh = GetComponent<MeshFilter>().mesh;
        _vertices = _mesh.vertices;
        Color[] meshColors = new Color[_mesh.vertices.Length];



        int index;
        for (int i=0; i< _topFaceVert.Count; i++)
        {
            index = _topFaceVert[i];
            meshColors[index] = Color.red;
            
        }

        for (int j=0; j < _bottomeFaceVert.Count; j++)
        {
            index = _bottomeFaceVert[j];
            meshColors[index] = Color.blue;
        }

        _mesh.colors = meshColors;
    }


}
