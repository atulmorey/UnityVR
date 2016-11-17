using UnityEngine;
using System.Collections;

public class VertexAnimationTest : MonoBehaviour {

	// Use this for initialization
	void Start () 
    {
        Mesh mesh = GetComponent<MeshFilter>().mesh;

        Vector3[] vertices = mesh.vertices;
        Vector3[] normals = mesh.normals;
        int[] triangles = mesh.triangles;
        Vector2[] uvs = mesh.uv;

//        foreach (int tri in triangles)
//        {
//            Debug.Log(tri.ToString());
//        }

        int i = 0;
        while (i < 4) 
        {
            vertices[i] += normals[i] * 15f;
            i++;
        }

//        mesh.Clear();

        mesh.vertices = vertices;
        mesh.normals = normals;
        mesh.triangles = triangles;
        mesh.uv = uvs;

	
	}
	
	// Update is called once per frame
    void Update() 
    {
//        Mesh mesh = GetComponent<MeshFilter>().mesh;
//        Vector3[] vertices = mesh.vertices;
//        Vector3[] normals = mesh.normals;
//        int i = 0;
//        while (i < vertices.Length) {
//            vertices[i] += normals[i] * Mathf.Sin(Time.time);
//            i++;
//        }
//        mesh.vertices = vertices;
    }
}
