using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class DisplayTextUIController : MonoBehaviour 
{
    public Text DisplayTextComp;

	// Use this for initialization
	void Start () 
    {
        Debug.Assert(DisplayTextComp != null, "Text component is not assigned");	
	}
	
    public void DisplayString (string displayString)
    {
        if (!DisplayTextComp.gameObject.activeSelf) DisplayTextComp.gameObject.SetActive(true);

        DisplayTextComp.text = displayString;
    }

    public void DisableDisplay()
    {
        DisplayTextComp.gameObject.SetActive(false);
    }
}
