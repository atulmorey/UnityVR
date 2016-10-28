using UnityEngine;
using System.Collections;
using UnityEngine.VR;
using VRStandardAssets.Utils;

public class Teleport : MonoBehaviour
{
    public GameObject MainCameraGameObject;

    private VRInteractiveItem _vrInteractiveItem;

    void OnEnable()
    {
        _vrInteractiveItem.OnDoubleClick += DoTeleport;
    }

    void OnDisable()
    {
        _vrInteractiveItem.OnDoubleClick -= DoTeleport;
    }

    void DoTeleport()
    {
        Vector3 teleTarget = new Vector3(this.transform.position.x, MainCameraGameObject.transform.localPosition.y, this.transform.position.z);

        MainCameraGameObject.transform.localPosition = teleTarget;


    }
}
