using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class VertexAnimation : MonoBehaviour 
{
    public float OffsetDist = 10f;              //Positive means Z positive direction

    private Mesh _mesh;
    private Vector3[] _vertices;

    private List<int> _leftFaceVert;
    private List<int> _rightFaceVert;
    private Vector3 _targetVect;

    private float _maxZ, _minZ = 0f;

	// Use this for initialization
	void Start () 
    {
        
        DebugCurrentMesh();
	
	}

    void DebugCurrentMesh()
    {
        Mesh cubeMesh = GetComponent<MeshFilter>().mesh;

        Vector3[] cubeVertices = cubeMesh.vertices;
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
        float[] zValues = new float[cubeVertices.Length];

        int zInd;
        for (zInd = 0; zInd < zValues.Length; zInd++)
        {
            zValues[zInd] = cubeVertices[zInd].z;
        }

        _maxZ = Mathf.Max(zValues);
        _minZ = Mathf.Min(zValues);

        Debug.Log("maxZ: "+_maxZ);
        Debug.Log("minZ: "+_minZ);


        //Capture index of vertices that are going to be animated
        _leftFaceVert = new List<int>();
        _rightFaceVert = new List<int>();

        for (zInd = 0; zInd < zValues.Length; zInd++)
        {
            if (zValues[zInd] == _minZ) 
            {
                _leftFaceVert.Add(zInd);
            }

            if (zValues[zInd] == _maxZ)
            {
                _rightFaceVert.Add(zInd);
            }
                
        }

//        Debug.Log("**** animVertsInd ********"+ _animVertsInd.Count);
//        for (int n=0; n<_animVertsInd.Count; n++)
//        {
//            Debug.Log("Index: "+_animVertsInd[n]);
//
//        }

//        AnimateLeftFace();
        AnimateRightFace();



     
    }

    public void AnimateLeftFace()
    {
        float targetZ = 0f;  
        targetZ = _minZ + OffsetDist;       

        Debug.Log("TargetZ: "+targetZ);
        
        LeanTween.value(_minZ, targetZ, 10f).setOnUpdate((float val) => 
        {
            UpdateLeftFaceInZ(val);
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

    public void AnimateRightFace()
    {
        float targetZ = 0f;  
        targetZ = _maxZ + OffsetDist;       

        Debug.Log("TargetZ: "+targetZ);

        LeanTween.value(_maxZ, targetZ, 10f).setOnUpdate((float val) => 
            {
                UpdateRightFaceInZ(val);
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

}
