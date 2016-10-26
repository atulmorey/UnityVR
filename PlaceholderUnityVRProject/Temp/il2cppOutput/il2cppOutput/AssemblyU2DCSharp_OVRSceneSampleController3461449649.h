#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture
struct Texture_t2243626319;
// OVRPlayerController
struct OVRPlayerController_t2265072820;
// OVRCameraRig
struct OVRCameraRig_t2550404736;
// System.String
struct String_t;
// OVRGridCube
struct OVRGridCube_t3910038612;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_KeyCode2283395152.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OVRSceneSampleController
struct  OVRSceneSampleController_t3461449649  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.KeyCode OVRSceneSampleController::quitKey
	int32_t ___quitKey_2;
	// UnityEngine.Texture OVRSceneSampleController::fadeInTexture
	Texture_t2243626319 * ___fadeInTexture_3;
	// System.Single OVRSceneSampleController::speedRotationIncrement
	float ___speedRotationIncrement_4;
	// OVRPlayerController OVRSceneSampleController::playerController
	OVRPlayerController_t2265072820 * ___playerController_5;
	// OVRCameraRig OVRSceneSampleController::cameraController
	OVRCameraRig_t2550404736 * ___cameraController_6;
	// System.String OVRSceneSampleController::layerName
	String_t* ___layerName_7;
	// System.Boolean OVRSceneSampleController::visionMode
	bool ___visionMode_8;
	// OVRGridCube OVRSceneSampleController::gridCube
	OVRGridCube_t3910038612 * ___gridCube_9;

public:
	inline static int32_t get_offset_of_quitKey_2() { return static_cast<int32_t>(offsetof(OVRSceneSampleController_t3461449649, ___quitKey_2)); }
	inline int32_t get_quitKey_2() const { return ___quitKey_2; }
	inline int32_t* get_address_of_quitKey_2() { return &___quitKey_2; }
	inline void set_quitKey_2(int32_t value)
	{
		___quitKey_2 = value;
	}

	inline static int32_t get_offset_of_fadeInTexture_3() { return static_cast<int32_t>(offsetof(OVRSceneSampleController_t3461449649, ___fadeInTexture_3)); }
	inline Texture_t2243626319 * get_fadeInTexture_3() const { return ___fadeInTexture_3; }
	inline Texture_t2243626319 ** get_address_of_fadeInTexture_3() { return &___fadeInTexture_3; }
	inline void set_fadeInTexture_3(Texture_t2243626319 * value)
	{
		___fadeInTexture_3 = value;
		Il2CppCodeGenWriteBarrier(&___fadeInTexture_3, value);
	}

	inline static int32_t get_offset_of_speedRotationIncrement_4() { return static_cast<int32_t>(offsetof(OVRSceneSampleController_t3461449649, ___speedRotationIncrement_4)); }
	inline float get_speedRotationIncrement_4() const { return ___speedRotationIncrement_4; }
	inline float* get_address_of_speedRotationIncrement_4() { return &___speedRotationIncrement_4; }
	inline void set_speedRotationIncrement_4(float value)
	{
		___speedRotationIncrement_4 = value;
	}

	inline static int32_t get_offset_of_playerController_5() { return static_cast<int32_t>(offsetof(OVRSceneSampleController_t3461449649, ___playerController_5)); }
	inline OVRPlayerController_t2265072820 * get_playerController_5() const { return ___playerController_5; }
	inline OVRPlayerController_t2265072820 ** get_address_of_playerController_5() { return &___playerController_5; }
	inline void set_playerController_5(OVRPlayerController_t2265072820 * value)
	{
		___playerController_5 = value;
		Il2CppCodeGenWriteBarrier(&___playerController_5, value);
	}

	inline static int32_t get_offset_of_cameraController_6() { return static_cast<int32_t>(offsetof(OVRSceneSampleController_t3461449649, ___cameraController_6)); }
	inline OVRCameraRig_t2550404736 * get_cameraController_6() const { return ___cameraController_6; }
	inline OVRCameraRig_t2550404736 ** get_address_of_cameraController_6() { return &___cameraController_6; }
	inline void set_cameraController_6(OVRCameraRig_t2550404736 * value)
	{
		___cameraController_6 = value;
		Il2CppCodeGenWriteBarrier(&___cameraController_6, value);
	}

	inline static int32_t get_offset_of_layerName_7() { return static_cast<int32_t>(offsetof(OVRSceneSampleController_t3461449649, ___layerName_7)); }
	inline String_t* get_layerName_7() const { return ___layerName_7; }
	inline String_t** get_address_of_layerName_7() { return &___layerName_7; }
	inline void set_layerName_7(String_t* value)
	{
		___layerName_7 = value;
		Il2CppCodeGenWriteBarrier(&___layerName_7, value);
	}

	inline static int32_t get_offset_of_visionMode_8() { return static_cast<int32_t>(offsetof(OVRSceneSampleController_t3461449649, ___visionMode_8)); }
	inline bool get_visionMode_8() const { return ___visionMode_8; }
	inline bool* get_address_of_visionMode_8() { return &___visionMode_8; }
	inline void set_visionMode_8(bool value)
	{
		___visionMode_8 = value;
	}

	inline static int32_t get_offset_of_gridCube_9() { return static_cast<int32_t>(offsetof(OVRSceneSampleController_t3461449649, ___gridCube_9)); }
	inline OVRGridCube_t3910038612 * get_gridCube_9() const { return ___gridCube_9; }
	inline OVRGridCube_t3910038612 ** get_address_of_gridCube_9() { return &___gridCube_9; }
	inline void set_gridCube_9(OVRGridCube_t3910038612 * value)
	{
		___gridCube_9 = value;
		Il2CppCodeGenWriteBarrier(&___gridCube_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
