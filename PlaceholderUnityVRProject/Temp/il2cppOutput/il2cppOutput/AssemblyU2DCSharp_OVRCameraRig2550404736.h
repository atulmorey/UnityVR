#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Camera
struct Camera_t189460977;
// System.Action`1<OVRCameraRig>
struct Action_1_t2352204118;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OVRCameraRig
struct  OVRCameraRig_t2550404736  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean OVRCameraRig::usePerEyeCameras
	bool ___usePerEyeCameras_2;
	// System.String OVRCameraRig::trackingSpaceName
	String_t* ___trackingSpaceName_3;
	// System.String OVRCameraRig::trackerAnchorName
	String_t* ___trackerAnchorName_4;
	// System.String OVRCameraRig::eyeAnchorName
	String_t* ___eyeAnchorName_5;
	// System.String OVRCameraRig::handAnchorName
	String_t* ___handAnchorName_6;
	// System.String OVRCameraRig::legacyEyeAnchorName
	String_t* ___legacyEyeAnchorName_7;
	// UnityEngine.Camera OVRCameraRig::_centerEyeCamera
	Camera_t189460977 * ____centerEyeCamera_8;
	// UnityEngine.Camera OVRCameraRig::_leftEyeCamera
	Camera_t189460977 * ____leftEyeCamera_9;
	// UnityEngine.Camera OVRCameraRig::_rightEyeCamera
	Camera_t189460977 * ____rightEyeCamera_10;
	// System.Action`1<OVRCameraRig> OVRCameraRig::UpdatedAnchors
	Action_1_t2352204118 * ___UpdatedAnchors_11;
	// UnityEngine.Transform OVRCameraRig::<trackingSpace>k__BackingField
	Transform_t3275118058 * ___U3CtrackingSpaceU3Ek__BackingField_12;
	// UnityEngine.Transform OVRCameraRig::<leftEyeAnchor>k__BackingField
	Transform_t3275118058 * ___U3CleftEyeAnchorU3Ek__BackingField_13;
	// UnityEngine.Transform OVRCameraRig::<centerEyeAnchor>k__BackingField
	Transform_t3275118058 * ___U3CcenterEyeAnchorU3Ek__BackingField_14;
	// UnityEngine.Transform OVRCameraRig::<rightEyeAnchor>k__BackingField
	Transform_t3275118058 * ___U3CrightEyeAnchorU3Ek__BackingField_15;
	// UnityEngine.Transform OVRCameraRig::<leftHandAnchor>k__BackingField
	Transform_t3275118058 * ___U3CleftHandAnchorU3Ek__BackingField_16;
	// UnityEngine.Transform OVRCameraRig::<rightHandAnchor>k__BackingField
	Transform_t3275118058 * ___U3CrightHandAnchorU3Ek__BackingField_17;
	// UnityEngine.Transform OVRCameraRig::<trackerAnchor>k__BackingField
	Transform_t3275118058 * ___U3CtrackerAnchorU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_usePerEyeCameras_2() { return static_cast<int32_t>(offsetof(OVRCameraRig_t2550404736, ___usePerEyeCameras_2)); }
	inline bool get_usePerEyeCameras_2() const { return ___usePerEyeCameras_2; }
	inline bool* get_address_of_usePerEyeCameras_2() { return &___usePerEyeCameras_2; }
	inline void set_usePerEyeCameras_2(bool value)
	{
		___usePerEyeCameras_2 = value;
	}

	inline static int32_t get_offset_of_trackingSpaceName_3() { return static_cast<int32_t>(offsetof(OVRCameraRig_t2550404736, ___trackingSpaceName_3)); }
	inline String_t* get_trackingSpaceName_3() const { return ___trackingSpaceName_3; }
	inline String_t** get_address_of_trackingSpaceName_3() { return &___trackingSpaceName_3; }
	inline void set_trackingSpaceName_3(String_t* value)
	{
		___trackingSpaceName_3 = value;
		Il2CppCodeGenWriteBarrier(&___trackingSpaceName_3, value);
	}

	inline static int32_t get_offset_of_trackerAnchorName_4() { return static_cast<int32_t>(offsetof(OVRCameraRig_t2550404736, ___trackerAnchorName_4)); }
	inline String_t* get_trackerAnchorName_4() const { return ___trackerAnchorName_4; }
	inline String_t** get_address_of_trackerAnchorName_4() { return &___trackerAnchorName_4; }
	inline void set_trackerAnchorName_4(String_t* value)
	{
		___trackerAnchorName_4 = value;
		Il2CppCodeGenWriteBarrier(&___trackerAnchorName_4, value);
	}

	inline static int32_t get_offset_of_eyeAnchorName_5() { return static_cast<int32_t>(offsetof(OVRCameraRig_t2550404736, ___eyeAnchorName_5)); }
	inline String_t* get_eyeAnchorName_5() const { return ___eyeAnchorName_5; }
	inline String_t** get_address_of_eyeAnchorName_5() { return &___eyeAnchorName_5; }
	inline void set_eyeAnchorName_5(String_t* value)
	{
		___eyeAnchorName_5 = value;
		Il2CppCodeGenWriteBarrier(&___eyeAnchorName_5, value);
	}

	inline static int32_t get_offset_of_handAnchorName_6() { return static_cast<int32_t>(offsetof(OVRCameraRig_t2550404736, ___handAnchorName_6)); }
	inline String_t* get_handAnchorName_6() const { return ___handAnchorName_6; }
	inline String_t** get_address_of_handAnchorName_6() { return &___handAnchorName_6; }
	inline void set_handAnchorName_6(String_t* value)
	{
		___handAnchorName_6 = value;
		Il2CppCodeGenWriteBarrier(&___handAnchorName_6, value);
	}

	inline static int32_t get_offset_of_legacyEyeAnchorName_7() { return static_cast<int32_t>(offsetof(OVRCameraRig_t2550404736, ___legacyEyeAnchorName_7)); }
	inline String_t* get_legacyEyeAnchorName_7() const { return ___legacyEyeAnchorName_7; }
	inline String_t** get_address_of_legacyEyeAnchorName_7() { return &___legacyEyeAnchorName_7; }
	inline void set_legacyEyeAnchorName_7(String_t* value)
	{
		___legacyEyeAnchorName_7 = value;
		Il2CppCodeGenWriteBarrier(&___legacyEyeAnchorName_7, value);
	}

	inline static int32_t get_offset_of__centerEyeCamera_8() { return static_cast<int32_t>(offsetof(OVRCameraRig_t2550404736, ____centerEyeCamera_8)); }
	inline Camera_t189460977 * get__centerEyeCamera_8() const { return ____centerEyeCamera_8; }
	inline Camera_t189460977 ** get_address_of__centerEyeCamera_8() { return &____centerEyeCamera_8; }
	inline void set__centerEyeCamera_8(Camera_t189460977 * value)
	{
		____centerEyeCamera_8 = value;
		Il2CppCodeGenWriteBarrier(&____centerEyeCamera_8, value);
	}

	inline static int32_t get_offset_of__leftEyeCamera_9() { return static_cast<int32_t>(offsetof(OVRCameraRig_t2550404736, ____leftEyeCamera_9)); }
	inline Camera_t189460977 * get__leftEyeCamera_9() const { return ____leftEyeCamera_9; }
	inline Camera_t189460977 ** get_address_of__leftEyeCamera_9() { return &____leftEyeCamera_9; }
	inline void set__leftEyeCamera_9(Camera_t189460977 * value)
	{
		____leftEyeCamera_9 = value;
		Il2CppCodeGenWriteBarrier(&____leftEyeCamera_9, value);
	}

	inline static int32_t get_offset_of__rightEyeCamera_10() { return static_cast<int32_t>(offsetof(OVRCameraRig_t2550404736, ____rightEyeCamera_10)); }
	inline Camera_t189460977 * get__rightEyeCamera_10() const { return ____rightEyeCamera_10; }
	inline Camera_t189460977 ** get_address_of__rightEyeCamera_10() { return &____rightEyeCamera_10; }
	inline void set__rightEyeCamera_10(Camera_t189460977 * value)
	{
		____rightEyeCamera_10 = value;
		Il2CppCodeGenWriteBarrier(&____rightEyeCamera_10, value);
	}

	inline static int32_t get_offset_of_UpdatedAnchors_11() { return static_cast<int32_t>(offsetof(OVRCameraRig_t2550404736, ___UpdatedAnchors_11)); }
	inline Action_1_t2352204118 * get_UpdatedAnchors_11() const { return ___UpdatedAnchors_11; }
	inline Action_1_t2352204118 ** get_address_of_UpdatedAnchors_11() { return &___UpdatedAnchors_11; }
	inline void set_UpdatedAnchors_11(Action_1_t2352204118 * value)
	{
		___UpdatedAnchors_11 = value;
		Il2CppCodeGenWriteBarrier(&___UpdatedAnchors_11, value);
	}

	inline static int32_t get_offset_of_U3CtrackingSpaceU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(OVRCameraRig_t2550404736, ___U3CtrackingSpaceU3Ek__BackingField_12)); }
	inline Transform_t3275118058 * get_U3CtrackingSpaceU3Ek__BackingField_12() const { return ___U3CtrackingSpaceU3Ek__BackingField_12; }
	inline Transform_t3275118058 ** get_address_of_U3CtrackingSpaceU3Ek__BackingField_12() { return &___U3CtrackingSpaceU3Ek__BackingField_12; }
	inline void set_U3CtrackingSpaceU3Ek__BackingField_12(Transform_t3275118058 * value)
	{
		___U3CtrackingSpaceU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CtrackingSpaceU3Ek__BackingField_12, value);
	}

	inline static int32_t get_offset_of_U3CleftEyeAnchorU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(OVRCameraRig_t2550404736, ___U3CleftEyeAnchorU3Ek__BackingField_13)); }
	inline Transform_t3275118058 * get_U3CleftEyeAnchorU3Ek__BackingField_13() const { return ___U3CleftEyeAnchorU3Ek__BackingField_13; }
	inline Transform_t3275118058 ** get_address_of_U3CleftEyeAnchorU3Ek__BackingField_13() { return &___U3CleftEyeAnchorU3Ek__BackingField_13; }
	inline void set_U3CleftEyeAnchorU3Ek__BackingField_13(Transform_t3275118058 * value)
	{
		___U3CleftEyeAnchorU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CleftEyeAnchorU3Ek__BackingField_13, value);
	}

	inline static int32_t get_offset_of_U3CcenterEyeAnchorU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(OVRCameraRig_t2550404736, ___U3CcenterEyeAnchorU3Ek__BackingField_14)); }
	inline Transform_t3275118058 * get_U3CcenterEyeAnchorU3Ek__BackingField_14() const { return ___U3CcenterEyeAnchorU3Ek__BackingField_14; }
	inline Transform_t3275118058 ** get_address_of_U3CcenterEyeAnchorU3Ek__BackingField_14() { return &___U3CcenterEyeAnchorU3Ek__BackingField_14; }
	inline void set_U3CcenterEyeAnchorU3Ek__BackingField_14(Transform_t3275118058 * value)
	{
		___U3CcenterEyeAnchorU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CcenterEyeAnchorU3Ek__BackingField_14, value);
	}

	inline static int32_t get_offset_of_U3CrightEyeAnchorU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(OVRCameraRig_t2550404736, ___U3CrightEyeAnchorU3Ek__BackingField_15)); }
	inline Transform_t3275118058 * get_U3CrightEyeAnchorU3Ek__BackingField_15() const { return ___U3CrightEyeAnchorU3Ek__BackingField_15; }
	inline Transform_t3275118058 ** get_address_of_U3CrightEyeAnchorU3Ek__BackingField_15() { return &___U3CrightEyeAnchorU3Ek__BackingField_15; }
	inline void set_U3CrightEyeAnchorU3Ek__BackingField_15(Transform_t3275118058 * value)
	{
		___U3CrightEyeAnchorU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CrightEyeAnchorU3Ek__BackingField_15, value);
	}

	inline static int32_t get_offset_of_U3CleftHandAnchorU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(OVRCameraRig_t2550404736, ___U3CleftHandAnchorU3Ek__BackingField_16)); }
	inline Transform_t3275118058 * get_U3CleftHandAnchorU3Ek__BackingField_16() const { return ___U3CleftHandAnchorU3Ek__BackingField_16; }
	inline Transform_t3275118058 ** get_address_of_U3CleftHandAnchorU3Ek__BackingField_16() { return &___U3CleftHandAnchorU3Ek__BackingField_16; }
	inline void set_U3CleftHandAnchorU3Ek__BackingField_16(Transform_t3275118058 * value)
	{
		___U3CleftHandAnchorU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CleftHandAnchorU3Ek__BackingField_16, value);
	}

	inline static int32_t get_offset_of_U3CrightHandAnchorU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(OVRCameraRig_t2550404736, ___U3CrightHandAnchorU3Ek__BackingField_17)); }
	inline Transform_t3275118058 * get_U3CrightHandAnchorU3Ek__BackingField_17() const { return ___U3CrightHandAnchorU3Ek__BackingField_17; }
	inline Transform_t3275118058 ** get_address_of_U3CrightHandAnchorU3Ek__BackingField_17() { return &___U3CrightHandAnchorU3Ek__BackingField_17; }
	inline void set_U3CrightHandAnchorU3Ek__BackingField_17(Transform_t3275118058 * value)
	{
		___U3CrightHandAnchorU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CrightHandAnchorU3Ek__BackingField_17, value);
	}

	inline static int32_t get_offset_of_U3CtrackerAnchorU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(OVRCameraRig_t2550404736, ___U3CtrackerAnchorU3Ek__BackingField_18)); }
	inline Transform_t3275118058 * get_U3CtrackerAnchorU3Ek__BackingField_18() const { return ___U3CtrackerAnchorU3Ek__BackingField_18; }
	inline Transform_t3275118058 ** get_address_of_U3CtrackerAnchorU3Ek__BackingField_18() { return &___U3CtrackerAnchorU3Ek__BackingField_18; }
	inline void set_U3CtrackerAnchorU3Ek__BackingField_18(Transform_t3275118058 * value)
	{
		___U3CtrackerAnchorU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CtrackerAnchorU3Ek__BackingField_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
