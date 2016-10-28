using System;
using UnityEngine;
using System.Collections;

namespace VRStandardAssets.Utils
{
    // This class works similarly to the SelectionRadial class except
    // it has a physical manifestation in the scene.  This can be
    // either a UI slider or a mesh with the SlidingUV shader.  The
    // functions as a bar that fills up whilst the user looks at it
    // and holds down the Fire1 button.
    public class Teleport : MonoBehaviour
    {
        [SerializeField] private VRInput m_VRInput;                         // Reference to the VRInput to detect button presses.
        [SerializeField] private GameObject m_CameraObject;                         // Reference to the VRInput to detect button presses.


        void OnEnable()
        {
            m_VRInput.OnClick += DoTeleport;
        }

        void OnDisable()
        {
            m_VRInput.OnClick -= DoTeleport;
        }

        void DoTeleport()
        {
            Vector3 teleTarget = new Vector3(this.transform.position.x, m_CameraObject.transform.localPosition.y, this.transform.position.z);

            m_CameraObject.transform.localPosition = teleTarget;

        }
    }
}
