#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// OVRCameraRig
struct OVRCameraRig_t2550404736;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_KeyCode2283395152.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OVRGridCube
struct  OVRGridCube_t3910038612  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.KeyCode OVRGridCube::GridKey
	int32_t ___GridKey_2;
	// UnityEngine.GameObject OVRGridCube::CubeGrid
	GameObject_t1756533147 * ___CubeGrid_3;
	// System.Boolean OVRGridCube::CubeGridOn
	bool ___CubeGridOn_4;
	// System.Boolean OVRGridCube::CubeSwitchColorOld
	bool ___CubeSwitchColorOld_5;
	// System.Boolean OVRGridCube::CubeSwitchColor
	bool ___CubeSwitchColor_6;
	// System.Int32 OVRGridCube::gridSizeX
	int32_t ___gridSizeX_7;
	// System.Int32 OVRGridCube::gridSizeY
	int32_t ___gridSizeY_8;
	// System.Int32 OVRGridCube::gridSizeZ
	int32_t ___gridSizeZ_9;
	// System.Single OVRGridCube::gridScale
	float ___gridScale_10;
	// System.Single OVRGridCube::cubeScale
	float ___cubeScale_11;
	// OVRCameraRig OVRGridCube::CameraController
	OVRCameraRig_t2550404736 * ___CameraController_12;

public:
	inline static int32_t get_offset_of_GridKey_2() { return static_cast<int32_t>(offsetof(OVRGridCube_t3910038612, ___GridKey_2)); }
	inline int32_t get_GridKey_2() const { return ___GridKey_2; }
	inline int32_t* get_address_of_GridKey_2() { return &___GridKey_2; }
	inline void set_GridKey_2(int32_t value)
	{
		___GridKey_2 = value;
	}

	inline static int32_t get_offset_of_CubeGrid_3() { return static_cast<int32_t>(offsetof(OVRGridCube_t3910038612, ___CubeGrid_3)); }
	inline GameObject_t1756533147 * get_CubeGrid_3() const { return ___CubeGrid_3; }
	inline GameObject_t1756533147 ** get_address_of_CubeGrid_3() { return &___CubeGrid_3; }
	inline void set_CubeGrid_3(GameObject_t1756533147 * value)
	{
		___CubeGrid_3 = value;
		Il2CppCodeGenWriteBarrier(&___CubeGrid_3, value);
	}

	inline static int32_t get_offset_of_CubeGridOn_4() { return static_cast<int32_t>(offsetof(OVRGridCube_t3910038612, ___CubeGridOn_4)); }
	inline bool get_CubeGridOn_4() const { return ___CubeGridOn_4; }
	inline bool* get_address_of_CubeGridOn_4() { return &___CubeGridOn_4; }
	inline void set_CubeGridOn_4(bool value)
	{
		___CubeGridOn_4 = value;
	}

	inline static int32_t get_offset_of_CubeSwitchColorOld_5() { return static_cast<int32_t>(offsetof(OVRGridCube_t3910038612, ___CubeSwitchColorOld_5)); }
	inline bool get_CubeSwitchColorOld_5() const { return ___CubeSwitchColorOld_5; }
	inline bool* get_address_of_CubeSwitchColorOld_5() { return &___CubeSwitchColorOld_5; }
	inline void set_CubeSwitchColorOld_5(bool value)
	{
		___CubeSwitchColorOld_5 = value;
	}

	inline static int32_t get_offset_of_CubeSwitchColor_6() { return static_cast<int32_t>(offsetof(OVRGridCube_t3910038612, ___CubeSwitchColor_6)); }
	inline bool get_CubeSwitchColor_6() const { return ___CubeSwitchColor_6; }
	inline bool* get_address_of_CubeSwitchColor_6() { return &___CubeSwitchColor_6; }
	inline void set_CubeSwitchColor_6(bool value)
	{
		___CubeSwitchColor_6 = value;
	}

	inline static int32_t get_offset_of_gridSizeX_7() { return static_cast<int32_t>(offsetof(OVRGridCube_t3910038612, ___gridSizeX_7)); }
	inline int32_t get_gridSizeX_7() const { return ___gridSizeX_7; }
	inline int32_t* get_address_of_gridSizeX_7() { return &___gridSizeX_7; }
	inline void set_gridSizeX_7(int32_t value)
	{
		___gridSizeX_7 = value;
	}

	inline static int32_t get_offset_of_gridSizeY_8() { return static_cast<int32_t>(offsetof(OVRGridCube_t3910038612, ___gridSizeY_8)); }
	inline int32_t get_gridSizeY_8() const { return ___gridSizeY_8; }
	inline int32_t* get_address_of_gridSizeY_8() { return &___gridSizeY_8; }
	inline void set_gridSizeY_8(int32_t value)
	{
		___gridSizeY_8 = value;
	}

	inline static int32_t get_offset_of_gridSizeZ_9() { return static_cast<int32_t>(offsetof(OVRGridCube_t3910038612, ___gridSizeZ_9)); }
	inline int32_t get_gridSizeZ_9() const { return ___gridSizeZ_9; }
	inline int32_t* get_address_of_gridSizeZ_9() { return &___gridSizeZ_9; }
	inline void set_gridSizeZ_9(int32_t value)
	{
		___gridSizeZ_9 = value;
	}

	inline static int32_t get_offset_of_gridScale_10() { return static_cast<int32_t>(offsetof(OVRGridCube_t3910038612, ___gridScale_10)); }
	inline float get_gridScale_10() const { return ___gridScale_10; }
	inline float* get_address_of_gridScale_10() { return &___gridScale_10; }
	inline void set_gridScale_10(float value)
	{
		___gridScale_10 = value;
	}

	inline static int32_t get_offset_of_cubeScale_11() { return static_cast<int32_t>(offsetof(OVRGridCube_t3910038612, ___cubeScale_11)); }
	inline float get_cubeScale_11() const { return ___cubeScale_11; }
	inline float* get_address_of_cubeScale_11() { return &___cubeScale_11; }
	inline void set_cubeScale_11(float value)
	{
		___cubeScale_11 = value;
	}

	inline static int32_t get_offset_of_CameraController_12() { return static_cast<int32_t>(offsetof(OVRGridCube_t3910038612, ___CameraController_12)); }
	inline OVRCameraRig_t2550404736 * get_CameraController_12() const { return ___CameraController_12; }
	inline OVRCameraRig_t2550404736 ** get_address_of_CameraController_12() { return &___CameraController_12; }
	inline void set_CameraController_12(OVRCameraRig_t2550404736 * value)
	{
		___CameraController_12 = value;
		Il2CppCodeGenWriteBarrier(&___CameraController_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
