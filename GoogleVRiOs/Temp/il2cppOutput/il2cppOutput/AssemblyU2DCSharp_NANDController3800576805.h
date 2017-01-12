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
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048;
// UnityEngine.Shader
struct Shader_t3191267369;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NANDController
struct  NANDController_t3800576805  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject NANDController::MainCamera
	GameObject_t3674682005 * ___MainCamera_2;
	// UnityEngine.Transform NANDController::CameraTarget
	Transform_t1659122786 * ___CameraTarget_3;
	// UnityEngine.GameObject NANDController::Nitride1
	GameObject_t3674682005 * ___Nitride1_4;
	// UnityEngine.GameObject NANDController::Nitride2
	GameObject_t3674682005 * ___Nitride2_5;
	// UnityEngine.Material NANDController::Nitride1Mat
	Material_t3870600107 * ___Nitride1Mat_6;
	// UnityEngine.Material NANDController::Nitride2Mat
	Material_t3870600107 * ___Nitride2Mat_7;
	// UnityEngine.GameObject NANDController::Oxide1
	GameObject_t3674682005 * ___Oxide1_8;
	// UnityEngine.GameObject NANDController::Oxide2
	GameObject_t3674682005 * ___Oxide2_9;
	// UnityEngine.Material NANDController::OxideMat
	Material_t3870600107 * ___OxideMat_10;
	// UnityEngine.GameObject NANDController::Silicon
	GameObject_t3674682005 * ___Silicon_11;
	// UnityEngine.GameObject NANDController::SiliconEtched
	GameObject_t3674682005 * ___SiliconEtched_12;
	// UnityEngine.Material NANDController::SiliconMat
	Material_t3870600107 * ___SiliconMat_13;
	// UnityEngine.GameObject NANDController::PolySilicon
	GameObject_t3674682005 * ___PolySilicon_14;
	// UnityEngine.Material NANDController::PolySiliconMat
	Material_t3870600107 * ___PolySiliconMat_15;
	// UnityEngine.GameObject NANDController::Sip
	GameObject_t3674682005 * ___Sip_16;
	// UnityEngine.Material NANDController::SipMat
	Material_t3870600107 * ___SipMat_17;
	// UnityEngine.GameObject[] NANDController::TeleportCubes
	GameObjectU5BU5D_t2662109048* ___TeleportCubes_18;
	// UnityEngine.Color NANDController::_tempCol
	Color_t4194546905  ____tempCol_19;
	// UnityEngine.Color NANDController::_targetCol
	Color_t4194546905  ____targetCol_20;
	// System.Single NANDController::_alpha0
	float ____alpha0_21;
	// System.Single NANDController::_alpha1
	float ____alpha1_22;
	// System.Single NANDController::_stepAnimTime
	float ____stepAnimTime_23;
	// UnityEngine.Shader NANDController::_transShader
	Shader_t3191267369 * ____transShader_24;
	// UnityEngine.Shader NANDController::_diffuseShader
	Shader_t3191267369 * ____diffuseShader_25;

public:
	inline static int32_t get_offset_of_MainCamera_2() { return static_cast<int32_t>(offsetof(NANDController_t3800576805, ___MainCamera_2)); }
	inline GameObject_t3674682005 * get_MainCamera_2() const { return ___MainCamera_2; }
	inline GameObject_t3674682005 ** get_address_of_MainCamera_2() { return &___MainCamera_2; }
	inline void set_MainCamera_2(GameObject_t3674682005 * value)
	{
		___MainCamera_2 = value;
		Il2CppCodeGenWriteBarrier(&___MainCamera_2, value);
	}

	inline static int32_t get_offset_of_CameraTarget_3() { return static_cast<int32_t>(offsetof(NANDController_t3800576805, ___CameraTarget_3)); }
	inline Transform_t1659122786 * get_CameraTarget_3() const { return ___CameraTarget_3; }
	inline Transform_t1659122786 ** get_address_of_CameraTarget_3() { return &___CameraTarget_3; }
	inline void set_CameraTarget_3(Transform_t1659122786 * value)
	{
		___CameraTarget_3 = value;
		Il2CppCodeGenWriteBarrier(&___CameraTarget_3, value);
	}

	inline static int32_t get_offset_of_Nitride1_4() { return static_cast<int32_t>(offsetof(NANDController_t3800576805, ___Nitride1_4)); }
	inline GameObject_t3674682005 * get_Nitride1_4() const { return ___Nitride1_4; }
	inline GameObject_t3674682005 ** get_address_of_Nitride1_4() { return &___Nitride1_4; }
	inline void set_Nitride1_4(GameObject_t3674682005 * value)
	{
		___Nitride1_4 = value;
		Il2CppCodeGenWriteBarrier(&___Nitride1_4, value);
	}

	inline static int32_t get_offset_of_Nitride2_5() { return static_cast<int32_t>(offsetof(NANDController_t3800576805, ___Nitride2_5)); }
	inline GameObject_t3674682005 * get_Nitride2_5() const { return ___Nitride2_5; }
	inline GameObject_t3674682005 ** get_address_of_Nitride2_5() { return &___Nitride2_5; }
	inline void set_Nitride2_5(GameObject_t3674682005 * value)
	{
		___Nitride2_5 = value;
		Il2CppCodeGenWriteBarrier(&___Nitride2_5, value);
	}

	inline static int32_t get_offset_of_Nitride1Mat_6() { return static_cast<int32_t>(offsetof(NANDController_t3800576805, ___Nitride1Mat_6)); }
	inline Material_t3870600107 * get_Nitride1Mat_6() const { return ___Nitride1Mat_6; }
	inline Material_t3870600107 ** get_address_of_Nitride1Mat_6() { return &___Nitride1Mat_6; }
	inline void set_Nitride1Mat_6(Material_t3870600107 * value)
	{
		___Nitride1Mat_6 = value;
		Il2CppCodeGenWriteBarrier(&___Nitride1Mat_6, value);
	}

	inline static int32_t get_offset_of_Nitride2Mat_7() { return static_cast<int32_t>(offsetof(NANDController_t3800576805, ___Nitride2Mat_7)); }
	inline Material_t3870600107 * get_Nitride2Mat_7() const { return ___Nitride2Mat_7; }
	inline Material_t3870600107 ** get_address_of_Nitride2Mat_7() { return &___Nitride2Mat_7; }
	inline void set_Nitride2Mat_7(Material_t3870600107 * value)
	{
		___Nitride2Mat_7 = value;
		Il2CppCodeGenWriteBarrier(&___Nitride2Mat_7, value);
	}

	inline static int32_t get_offset_of_Oxide1_8() { return static_cast<int32_t>(offsetof(NANDController_t3800576805, ___Oxide1_8)); }
	inline GameObject_t3674682005 * get_Oxide1_8() const { return ___Oxide1_8; }
	inline GameObject_t3674682005 ** get_address_of_Oxide1_8() { return &___Oxide1_8; }
	inline void set_Oxide1_8(GameObject_t3674682005 * value)
	{
		___Oxide1_8 = value;
		Il2CppCodeGenWriteBarrier(&___Oxide1_8, value);
	}

	inline static int32_t get_offset_of_Oxide2_9() { return static_cast<int32_t>(offsetof(NANDController_t3800576805, ___Oxide2_9)); }
	inline GameObject_t3674682005 * get_Oxide2_9() const { return ___Oxide2_9; }
	inline GameObject_t3674682005 ** get_address_of_Oxide2_9() { return &___Oxide2_9; }
	inline void set_Oxide2_9(GameObject_t3674682005 * value)
	{
		___Oxide2_9 = value;
		Il2CppCodeGenWriteBarrier(&___Oxide2_9, value);
	}

	inline static int32_t get_offset_of_OxideMat_10() { return static_cast<int32_t>(offsetof(NANDController_t3800576805, ___OxideMat_10)); }
	inline Material_t3870600107 * get_OxideMat_10() const { return ___OxideMat_10; }
	inline Material_t3870600107 ** get_address_of_OxideMat_10() { return &___OxideMat_10; }
	inline void set_OxideMat_10(Material_t3870600107 * value)
	{
		___OxideMat_10 = value;
		Il2CppCodeGenWriteBarrier(&___OxideMat_10, value);
	}

	inline static int32_t get_offset_of_Silicon_11() { return static_cast<int32_t>(offsetof(NANDController_t3800576805, ___Silicon_11)); }
	inline GameObject_t3674682005 * get_Silicon_11() const { return ___Silicon_11; }
	inline GameObject_t3674682005 ** get_address_of_Silicon_11() { return &___Silicon_11; }
	inline void set_Silicon_11(GameObject_t3674682005 * value)
	{
		___Silicon_11 = value;
		Il2CppCodeGenWriteBarrier(&___Silicon_11, value);
	}

	inline static int32_t get_offset_of_SiliconEtched_12() { return static_cast<int32_t>(offsetof(NANDController_t3800576805, ___SiliconEtched_12)); }
	inline GameObject_t3674682005 * get_SiliconEtched_12() const { return ___SiliconEtched_12; }
	inline GameObject_t3674682005 ** get_address_of_SiliconEtched_12() { return &___SiliconEtched_12; }
	inline void set_SiliconEtched_12(GameObject_t3674682005 * value)
	{
		___SiliconEtched_12 = value;
		Il2CppCodeGenWriteBarrier(&___SiliconEtched_12, value);
	}

	inline static int32_t get_offset_of_SiliconMat_13() { return static_cast<int32_t>(offsetof(NANDController_t3800576805, ___SiliconMat_13)); }
	inline Material_t3870600107 * get_SiliconMat_13() const { return ___SiliconMat_13; }
	inline Material_t3870600107 ** get_address_of_SiliconMat_13() { return &___SiliconMat_13; }
	inline void set_SiliconMat_13(Material_t3870600107 * value)
	{
		___SiliconMat_13 = value;
		Il2CppCodeGenWriteBarrier(&___SiliconMat_13, value);
	}

	inline static int32_t get_offset_of_PolySilicon_14() { return static_cast<int32_t>(offsetof(NANDController_t3800576805, ___PolySilicon_14)); }
	inline GameObject_t3674682005 * get_PolySilicon_14() const { return ___PolySilicon_14; }
	inline GameObject_t3674682005 ** get_address_of_PolySilicon_14() { return &___PolySilicon_14; }
	inline void set_PolySilicon_14(GameObject_t3674682005 * value)
	{
		___PolySilicon_14 = value;
		Il2CppCodeGenWriteBarrier(&___PolySilicon_14, value);
	}

	inline static int32_t get_offset_of_PolySiliconMat_15() { return static_cast<int32_t>(offsetof(NANDController_t3800576805, ___PolySiliconMat_15)); }
	inline Material_t3870600107 * get_PolySiliconMat_15() const { return ___PolySiliconMat_15; }
	inline Material_t3870600107 ** get_address_of_PolySiliconMat_15() { return &___PolySiliconMat_15; }
	inline void set_PolySiliconMat_15(Material_t3870600107 * value)
	{
		___PolySiliconMat_15 = value;
		Il2CppCodeGenWriteBarrier(&___PolySiliconMat_15, value);
	}

	inline static int32_t get_offset_of_Sip_16() { return static_cast<int32_t>(offsetof(NANDController_t3800576805, ___Sip_16)); }
	inline GameObject_t3674682005 * get_Sip_16() const { return ___Sip_16; }
	inline GameObject_t3674682005 ** get_address_of_Sip_16() { return &___Sip_16; }
	inline void set_Sip_16(GameObject_t3674682005 * value)
	{
		___Sip_16 = value;
		Il2CppCodeGenWriteBarrier(&___Sip_16, value);
	}

	inline static int32_t get_offset_of_SipMat_17() { return static_cast<int32_t>(offsetof(NANDController_t3800576805, ___SipMat_17)); }
	inline Material_t3870600107 * get_SipMat_17() const { return ___SipMat_17; }
	inline Material_t3870600107 ** get_address_of_SipMat_17() { return &___SipMat_17; }
	inline void set_SipMat_17(Material_t3870600107 * value)
	{
		___SipMat_17 = value;
		Il2CppCodeGenWriteBarrier(&___SipMat_17, value);
	}

	inline static int32_t get_offset_of_TeleportCubes_18() { return static_cast<int32_t>(offsetof(NANDController_t3800576805, ___TeleportCubes_18)); }
	inline GameObjectU5BU5D_t2662109048* get_TeleportCubes_18() const { return ___TeleportCubes_18; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_TeleportCubes_18() { return &___TeleportCubes_18; }
	inline void set_TeleportCubes_18(GameObjectU5BU5D_t2662109048* value)
	{
		___TeleportCubes_18 = value;
		Il2CppCodeGenWriteBarrier(&___TeleportCubes_18, value);
	}

	inline static int32_t get_offset_of__tempCol_19() { return static_cast<int32_t>(offsetof(NANDController_t3800576805, ____tempCol_19)); }
	inline Color_t4194546905  get__tempCol_19() const { return ____tempCol_19; }
	inline Color_t4194546905 * get_address_of__tempCol_19() { return &____tempCol_19; }
	inline void set__tempCol_19(Color_t4194546905  value)
	{
		____tempCol_19 = value;
	}

	inline static int32_t get_offset_of__targetCol_20() { return static_cast<int32_t>(offsetof(NANDController_t3800576805, ____targetCol_20)); }
	inline Color_t4194546905  get__targetCol_20() const { return ____targetCol_20; }
	inline Color_t4194546905 * get_address_of__targetCol_20() { return &____targetCol_20; }
	inline void set__targetCol_20(Color_t4194546905  value)
	{
		____targetCol_20 = value;
	}

	inline static int32_t get_offset_of__alpha0_21() { return static_cast<int32_t>(offsetof(NANDController_t3800576805, ____alpha0_21)); }
	inline float get__alpha0_21() const { return ____alpha0_21; }
	inline float* get_address_of__alpha0_21() { return &____alpha0_21; }
	inline void set__alpha0_21(float value)
	{
		____alpha0_21 = value;
	}

	inline static int32_t get_offset_of__alpha1_22() { return static_cast<int32_t>(offsetof(NANDController_t3800576805, ____alpha1_22)); }
	inline float get__alpha1_22() const { return ____alpha1_22; }
	inline float* get_address_of__alpha1_22() { return &____alpha1_22; }
	inline void set__alpha1_22(float value)
	{
		____alpha1_22 = value;
	}

	inline static int32_t get_offset_of__stepAnimTime_23() { return static_cast<int32_t>(offsetof(NANDController_t3800576805, ____stepAnimTime_23)); }
	inline float get__stepAnimTime_23() const { return ____stepAnimTime_23; }
	inline float* get_address_of__stepAnimTime_23() { return &____stepAnimTime_23; }
	inline void set__stepAnimTime_23(float value)
	{
		____stepAnimTime_23 = value;
	}

	inline static int32_t get_offset_of__transShader_24() { return static_cast<int32_t>(offsetof(NANDController_t3800576805, ____transShader_24)); }
	inline Shader_t3191267369 * get__transShader_24() const { return ____transShader_24; }
	inline Shader_t3191267369 ** get_address_of__transShader_24() { return &____transShader_24; }
	inline void set__transShader_24(Shader_t3191267369 * value)
	{
		____transShader_24 = value;
		Il2CppCodeGenWriteBarrier(&____transShader_24, value);
	}

	inline static int32_t get_offset_of__diffuseShader_25() { return static_cast<int32_t>(offsetof(NANDController_t3800576805, ____diffuseShader_25)); }
	inline Shader_t3191267369 * get__diffuseShader_25() const { return ____diffuseShader_25; }
	inline Shader_t3191267369 ** get_address_of__diffuseShader_25() { return &____diffuseShader_25; }
	inline void set__diffuseShader_25(Shader_t3191267369 * value)
	{
		____diffuseShader_25 = value;
		Il2CppCodeGenWriteBarrier(&____diffuseShader_25, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
