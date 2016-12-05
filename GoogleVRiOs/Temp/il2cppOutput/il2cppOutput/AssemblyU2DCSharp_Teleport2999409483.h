#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Material
struct Material_t3870600107;
// GameManager
struct GameManager_t2369589051;
// ScreenFader
struct ScreenFader_t1601131594;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Teleport
struct  Teleport_t2999409483  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject Teleport::MainCamera
	GameObject_t3674682005 * ___MainCamera_2;
	// UnityEngine.Material Teleport::CubeDefaultMat
	Material_t3870600107 * ___CubeDefaultMat_3;
	// UnityEngine.Vector3 Teleport::_cubeStartingPos
	Vector3_t4282066566  ____cubeStartingPos_4;
	// UnityEngine.Vector3 Teleport::_mainCamStartingPos
	Vector3_t4282066566  ____mainCamStartingPos_5;
	// System.Single Teleport::_portSpeed
	float ____portSpeed_6;
	// GameManager Teleport::_gameManager
	GameManager_t2369589051 * ____gameManager_7;
	// ScreenFader Teleport::_screenFader
	ScreenFader_t1601131594 * ____screenFader_8;
	// System.Single Teleport::_camFadeTime
	float ____camFadeTime_9;

public:
	inline static int32_t get_offset_of_MainCamera_2() { return static_cast<int32_t>(offsetof(Teleport_t2999409483, ___MainCamera_2)); }
	inline GameObject_t3674682005 * get_MainCamera_2() const { return ___MainCamera_2; }
	inline GameObject_t3674682005 ** get_address_of_MainCamera_2() { return &___MainCamera_2; }
	inline void set_MainCamera_2(GameObject_t3674682005 * value)
	{
		___MainCamera_2 = value;
		Il2CppCodeGenWriteBarrier(&___MainCamera_2, value);
	}

	inline static int32_t get_offset_of_CubeDefaultMat_3() { return static_cast<int32_t>(offsetof(Teleport_t2999409483, ___CubeDefaultMat_3)); }
	inline Material_t3870600107 * get_CubeDefaultMat_3() const { return ___CubeDefaultMat_3; }
	inline Material_t3870600107 ** get_address_of_CubeDefaultMat_3() { return &___CubeDefaultMat_3; }
	inline void set_CubeDefaultMat_3(Material_t3870600107 * value)
	{
		___CubeDefaultMat_3 = value;
		Il2CppCodeGenWriteBarrier(&___CubeDefaultMat_3, value);
	}

	inline static int32_t get_offset_of__cubeStartingPos_4() { return static_cast<int32_t>(offsetof(Teleport_t2999409483, ____cubeStartingPos_4)); }
	inline Vector3_t4282066566  get__cubeStartingPos_4() const { return ____cubeStartingPos_4; }
	inline Vector3_t4282066566 * get_address_of__cubeStartingPos_4() { return &____cubeStartingPos_4; }
	inline void set__cubeStartingPos_4(Vector3_t4282066566  value)
	{
		____cubeStartingPos_4 = value;
	}

	inline static int32_t get_offset_of__mainCamStartingPos_5() { return static_cast<int32_t>(offsetof(Teleport_t2999409483, ____mainCamStartingPos_5)); }
	inline Vector3_t4282066566  get__mainCamStartingPos_5() const { return ____mainCamStartingPos_5; }
	inline Vector3_t4282066566 * get_address_of__mainCamStartingPos_5() { return &____mainCamStartingPos_5; }
	inline void set__mainCamStartingPos_5(Vector3_t4282066566  value)
	{
		____mainCamStartingPos_5 = value;
	}

	inline static int32_t get_offset_of__portSpeed_6() { return static_cast<int32_t>(offsetof(Teleport_t2999409483, ____portSpeed_6)); }
	inline float get__portSpeed_6() const { return ____portSpeed_6; }
	inline float* get_address_of__portSpeed_6() { return &____portSpeed_6; }
	inline void set__portSpeed_6(float value)
	{
		____portSpeed_6 = value;
	}

	inline static int32_t get_offset_of__gameManager_7() { return static_cast<int32_t>(offsetof(Teleport_t2999409483, ____gameManager_7)); }
	inline GameManager_t2369589051 * get__gameManager_7() const { return ____gameManager_7; }
	inline GameManager_t2369589051 ** get_address_of__gameManager_7() { return &____gameManager_7; }
	inline void set__gameManager_7(GameManager_t2369589051 * value)
	{
		____gameManager_7 = value;
		Il2CppCodeGenWriteBarrier(&____gameManager_7, value);
	}

	inline static int32_t get_offset_of__screenFader_8() { return static_cast<int32_t>(offsetof(Teleport_t2999409483, ____screenFader_8)); }
	inline ScreenFader_t1601131594 * get__screenFader_8() const { return ____screenFader_8; }
	inline ScreenFader_t1601131594 ** get_address_of__screenFader_8() { return &____screenFader_8; }
	inline void set__screenFader_8(ScreenFader_t1601131594 * value)
	{
		____screenFader_8 = value;
		Il2CppCodeGenWriteBarrier(&____screenFader_8, value);
	}

	inline static int32_t get_offset_of__camFadeTime_9() { return static_cast<int32_t>(offsetof(Teleport_t2999409483, ____camFadeTime_9)); }
	inline float get__camFadeTime_9() const { return ____camFadeTime_9; }
	inline float* get_address_of__camFadeTime_9() { return &____camFadeTime_9; }
	inline void set__camFadeTime_9(float value)
	{
		____camFadeTime_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
