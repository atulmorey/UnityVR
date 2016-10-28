using System;
using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using VRStandardAssets.Utils;
using VRStandardAssets.Maze;


// This class works similarly to the SelectionRadial class except
// it has a physical manifestation in the scene.  This can be
// either a UI slider or a mesh with the SlidingUV shader.  The
// functions as a bar that fills up whilst the user looks at it
// and holds down the Fire1 button.
public class Teleport : MonoBehaviour
{
    [SerializeField] private VRInput m_VRInput;                         // Reference to the VRInput to detect button presses.
    [SerializeField] private GameObject m_CameraObject;                         // Reference to the VRInput to detect button presses.
    [SerializeField] private Text m_Text;
    [SerializeField] private CameraOrbit m_CameraOrbit;

    void OnEnable()
    {
        m_VRInput.OnClick += TeleportOnClick;
        m_VRInput.OnDoubleClick += TeleportOnDoubleClick;
    }

    void OnDisable()
    {
        m_VRInput.OnClick -= TeleportOnClick;
        m_VRInput.OnDoubleClick -= TeleportOnDoubleClick;
    }

    void TeleportOnClick()
    {
        m_Text.text = "One Click";
    }

    void TeleportOnDoubleClick()
    {
        m_CameraObject.transform.position = transform.position;

        m_Text.text = "Double Click";

    }
}

