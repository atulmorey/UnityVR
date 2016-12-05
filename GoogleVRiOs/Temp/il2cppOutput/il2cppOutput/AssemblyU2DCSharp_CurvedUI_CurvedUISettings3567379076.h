#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Canvas
struct Canvas_t2727140764;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_CurvedUI_CurvedUISettings_Curved3261387610.h"
#include "AssemblyU2DCSharp_CurvedUI_CurvedUISettings_Curved3288943491.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Ray3134616544.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CurvedUI.CurvedUISettings
struct  CurvedUISettings_t3567379076  : public MonoBehaviour_t667441552
{
public:
	// CurvedUI.CurvedUISettings/CurvedUIShape CurvedUI.CurvedUISettings::shape
	int32_t ___shape_2;
	// CurvedUI.CurvedUISettings/CurvedUIController CurvedUI.CurvedUISettings::controller
	int32_t ___controller_3;
	// System.Single CurvedUI.CurvedUISettings::quality
	float ___quality_4;
	// System.Boolean CurvedUI.CurvedUISettings::interactable
	bool ___interactable_5;
	// System.Boolean CurvedUI.CurvedUISettings::blocksRaycasts
	bool ___blocksRaycasts_6;
	// System.Boolean CurvedUI.CurvedUISettings::raycastMyLayerOnly
	bool ___raycastMyLayerOnly_7;
	// System.Int32 CurvedUI.CurvedUISettings::angle
	int32_t ___angle_8;
	// System.Boolean CurvedUI.CurvedUISettings::preserveAspect
	bool ___preserveAspect_9;
	// System.Int32 CurvedUI.CurvedUISettings::vertAngle
	int32_t ___vertAngle_10;
	// System.Single CurvedUI.CurvedUISettings::ringFill
	float ___ringFill_11;
	// System.Int32 CurvedUI.CurvedUISettings::ringExternalDiamater
	int32_t ___ringExternalDiamater_12;
	// System.Boolean CurvedUI.CurvedUISettings::ringFlipVertical
	bool ___ringFlipVertical_13;
	// System.Int32 CurvedUI.CurvedUISettings::baseCircleSegments
	int32_t ___baseCircleSegments_14;
	// UnityEngine.Vector2 CurvedUI.CurvedUISettings::savedRectSize
	Vector2_t4282066565  ___savedRectSize_15;
	// System.Single CurvedUI.CurvedUISettings::savedRadius
	float ___savedRadius_16;
	// UnityEngine.Canvas CurvedUI.CurvedUISettings::myCanvas
	Canvas_t2727140764 * ___myCanvas_17;
	// UnityEngine.Ray CurvedUI.CurvedUISettings::customControllerRay
	Ray_t3134616544  ___customControllerRay_18;
	// UnityEngine.Vector3 CurvedUI.CurvedUISettings::lastMouseOnScreenPos
	Vector3_t4282066566  ___lastMouseOnScreenPos_19;
	// UnityEngine.Vector2 CurvedUI.CurvedUISettings::worldSpaceMouseInCanvasSpace
	Vector2_t4282066565  ___worldSpaceMouseInCanvasSpace_20;
	// UnityEngine.Vector2 CurvedUI.CurvedUISettings::lastWorldSpaceMouseOnCanvas
	Vector2_t4282066565  ___lastWorldSpaceMouseOnCanvas_21;
	// UnityEngine.Vector2 CurvedUI.CurvedUISettings::worldSpaceMouseOnCanvasDelta
	Vector2_t4282066565  ___worldSpaceMouseOnCanvasDelta_22;
	// System.Single CurvedUI.CurvedUISettings::worldSpaceMouseSensitivity
	float ___worldSpaceMouseSensitivity_23;

public:
	inline static int32_t get_offset_of_shape_2() { return static_cast<int32_t>(offsetof(CurvedUISettings_t3567379076, ___shape_2)); }
	inline int32_t get_shape_2() const { return ___shape_2; }
	inline int32_t* get_address_of_shape_2() { return &___shape_2; }
	inline void set_shape_2(int32_t value)
	{
		___shape_2 = value;
	}

	inline static int32_t get_offset_of_controller_3() { return static_cast<int32_t>(offsetof(CurvedUISettings_t3567379076, ___controller_3)); }
	inline int32_t get_controller_3() const { return ___controller_3; }
	inline int32_t* get_address_of_controller_3() { return &___controller_3; }
	inline void set_controller_3(int32_t value)
	{
		___controller_3 = value;
	}

	inline static int32_t get_offset_of_quality_4() { return static_cast<int32_t>(offsetof(CurvedUISettings_t3567379076, ___quality_4)); }
	inline float get_quality_4() const { return ___quality_4; }
	inline float* get_address_of_quality_4() { return &___quality_4; }
	inline void set_quality_4(float value)
	{
		___quality_4 = value;
	}

	inline static int32_t get_offset_of_interactable_5() { return static_cast<int32_t>(offsetof(CurvedUISettings_t3567379076, ___interactable_5)); }
	inline bool get_interactable_5() const { return ___interactable_5; }
	inline bool* get_address_of_interactable_5() { return &___interactable_5; }
	inline void set_interactable_5(bool value)
	{
		___interactable_5 = value;
	}

	inline static int32_t get_offset_of_blocksRaycasts_6() { return static_cast<int32_t>(offsetof(CurvedUISettings_t3567379076, ___blocksRaycasts_6)); }
	inline bool get_blocksRaycasts_6() const { return ___blocksRaycasts_6; }
	inline bool* get_address_of_blocksRaycasts_6() { return &___blocksRaycasts_6; }
	inline void set_blocksRaycasts_6(bool value)
	{
		___blocksRaycasts_6 = value;
	}

	inline static int32_t get_offset_of_raycastMyLayerOnly_7() { return static_cast<int32_t>(offsetof(CurvedUISettings_t3567379076, ___raycastMyLayerOnly_7)); }
	inline bool get_raycastMyLayerOnly_7() const { return ___raycastMyLayerOnly_7; }
	inline bool* get_address_of_raycastMyLayerOnly_7() { return &___raycastMyLayerOnly_7; }
	inline void set_raycastMyLayerOnly_7(bool value)
	{
		___raycastMyLayerOnly_7 = value;
	}

	inline static int32_t get_offset_of_angle_8() { return static_cast<int32_t>(offsetof(CurvedUISettings_t3567379076, ___angle_8)); }
	inline int32_t get_angle_8() const { return ___angle_8; }
	inline int32_t* get_address_of_angle_8() { return &___angle_8; }
	inline void set_angle_8(int32_t value)
	{
		___angle_8 = value;
	}

	inline static int32_t get_offset_of_preserveAspect_9() { return static_cast<int32_t>(offsetof(CurvedUISettings_t3567379076, ___preserveAspect_9)); }
	inline bool get_preserveAspect_9() const { return ___preserveAspect_9; }
	inline bool* get_address_of_preserveAspect_9() { return &___preserveAspect_9; }
	inline void set_preserveAspect_9(bool value)
	{
		___preserveAspect_9 = value;
	}

	inline static int32_t get_offset_of_vertAngle_10() { return static_cast<int32_t>(offsetof(CurvedUISettings_t3567379076, ___vertAngle_10)); }
	inline int32_t get_vertAngle_10() const { return ___vertAngle_10; }
	inline int32_t* get_address_of_vertAngle_10() { return &___vertAngle_10; }
	inline void set_vertAngle_10(int32_t value)
	{
		___vertAngle_10 = value;
	}

	inline static int32_t get_offset_of_ringFill_11() { return static_cast<int32_t>(offsetof(CurvedUISettings_t3567379076, ___ringFill_11)); }
	inline float get_ringFill_11() const { return ___ringFill_11; }
	inline float* get_address_of_ringFill_11() { return &___ringFill_11; }
	inline void set_ringFill_11(float value)
	{
		___ringFill_11 = value;
	}

	inline static int32_t get_offset_of_ringExternalDiamater_12() { return static_cast<int32_t>(offsetof(CurvedUISettings_t3567379076, ___ringExternalDiamater_12)); }
	inline int32_t get_ringExternalDiamater_12() const { return ___ringExternalDiamater_12; }
	inline int32_t* get_address_of_ringExternalDiamater_12() { return &___ringExternalDiamater_12; }
	inline void set_ringExternalDiamater_12(int32_t value)
	{
		___ringExternalDiamater_12 = value;
	}

	inline static int32_t get_offset_of_ringFlipVertical_13() { return static_cast<int32_t>(offsetof(CurvedUISettings_t3567379076, ___ringFlipVertical_13)); }
	inline bool get_ringFlipVertical_13() const { return ___ringFlipVertical_13; }
	inline bool* get_address_of_ringFlipVertical_13() { return &___ringFlipVertical_13; }
	inline void set_ringFlipVertical_13(bool value)
	{
		___ringFlipVertical_13 = value;
	}

	inline static int32_t get_offset_of_baseCircleSegments_14() { return static_cast<int32_t>(offsetof(CurvedUISettings_t3567379076, ___baseCircleSegments_14)); }
	inline int32_t get_baseCircleSegments_14() const { return ___baseCircleSegments_14; }
	inline int32_t* get_address_of_baseCircleSegments_14() { return &___baseCircleSegments_14; }
	inline void set_baseCircleSegments_14(int32_t value)
	{
		___baseCircleSegments_14 = value;
	}

	inline static int32_t get_offset_of_savedRectSize_15() { return static_cast<int32_t>(offsetof(CurvedUISettings_t3567379076, ___savedRectSize_15)); }
	inline Vector2_t4282066565  get_savedRectSize_15() const { return ___savedRectSize_15; }
	inline Vector2_t4282066565 * get_address_of_savedRectSize_15() { return &___savedRectSize_15; }
	inline void set_savedRectSize_15(Vector2_t4282066565  value)
	{
		___savedRectSize_15 = value;
	}

	inline static int32_t get_offset_of_savedRadius_16() { return static_cast<int32_t>(offsetof(CurvedUISettings_t3567379076, ___savedRadius_16)); }
	inline float get_savedRadius_16() const { return ___savedRadius_16; }
	inline float* get_address_of_savedRadius_16() { return &___savedRadius_16; }
	inline void set_savedRadius_16(float value)
	{
		___savedRadius_16 = value;
	}

	inline static int32_t get_offset_of_myCanvas_17() { return static_cast<int32_t>(offsetof(CurvedUISettings_t3567379076, ___myCanvas_17)); }
	inline Canvas_t2727140764 * get_myCanvas_17() const { return ___myCanvas_17; }
	inline Canvas_t2727140764 ** get_address_of_myCanvas_17() { return &___myCanvas_17; }
	inline void set_myCanvas_17(Canvas_t2727140764 * value)
	{
		___myCanvas_17 = value;
		Il2CppCodeGenWriteBarrier(&___myCanvas_17, value);
	}

	inline static int32_t get_offset_of_customControllerRay_18() { return static_cast<int32_t>(offsetof(CurvedUISettings_t3567379076, ___customControllerRay_18)); }
	inline Ray_t3134616544  get_customControllerRay_18() const { return ___customControllerRay_18; }
	inline Ray_t3134616544 * get_address_of_customControllerRay_18() { return &___customControllerRay_18; }
	inline void set_customControllerRay_18(Ray_t3134616544  value)
	{
		___customControllerRay_18 = value;
	}

	inline static int32_t get_offset_of_lastMouseOnScreenPos_19() { return static_cast<int32_t>(offsetof(CurvedUISettings_t3567379076, ___lastMouseOnScreenPos_19)); }
	inline Vector3_t4282066566  get_lastMouseOnScreenPos_19() const { return ___lastMouseOnScreenPos_19; }
	inline Vector3_t4282066566 * get_address_of_lastMouseOnScreenPos_19() { return &___lastMouseOnScreenPos_19; }
	inline void set_lastMouseOnScreenPos_19(Vector3_t4282066566  value)
	{
		___lastMouseOnScreenPos_19 = value;
	}

	inline static int32_t get_offset_of_worldSpaceMouseInCanvasSpace_20() { return static_cast<int32_t>(offsetof(CurvedUISettings_t3567379076, ___worldSpaceMouseInCanvasSpace_20)); }
	inline Vector2_t4282066565  get_worldSpaceMouseInCanvasSpace_20() const { return ___worldSpaceMouseInCanvasSpace_20; }
	inline Vector2_t4282066565 * get_address_of_worldSpaceMouseInCanvasSpace_20() { return &___worldSpaceMouseInCanvasSpace_20; }
	inline void set_worldSpaceMouseInCanvasSpace_20(Vector2_t4282066565  value)
	{
		___worldSpaceMouseInCanvasSpace_20 = value;
	}

	inline static int32_t get_offset_of_lastWorldSpaceMouseOnCanvas_21() { return static_cast<int32_t>(offsetof(CurvedUISettings_t3567379076, ___lastWorldSpaceMouseOnCanvas_21)); }
	inline Vector2_t4282066565  get_lastWorldSpaceMouseOnCanvas_21() const { return ___lastWorldSpaceMouseOnCanvas_21; }
	inline Vector2_t4282066565 * get_address_of_lastWorldSpaceMouseOnCanvas_21() { return &___lastWorldSpaceMouseOnCanvas_21; }
	inline void set_lastWorldSpaceMouseOnCanvas_21(Vector2_t4282066565  value)
	{
		___lastWorldSpaceMouseOnCanvas_21 = value;
	}

	inline static int32_t get_offset_of_worldSpaceMouseOnCanvasDelta_22() { return static_cast<int32_t>(offsetof(CurvedUISettings_t3567379076, ___worldSpaceMouseOnCanvasDelta_22)); }
	inline Vector2_t4282066565  get_worldSpaceMouseOnCanvasDelta_22() const { return ___worldSpaceMouseOnCanvasDelta_22; }
	inline Vector2_t4282066565 * get_address_of_worldSpaceMouseOnCanvasDelta_22() { return &___worldSpaceMouseOnCanvasDelta_22; }
	inline void set_worldSpaceMouseOnCanvasDelta_22(Vector2_t4282066565  value)
	{
		___worldSpaceMouseOnCanvasDelta_22 = value;
	}

	inline static int32_t get_offset_of_worldSpaceMouseSensitivity_23() { return static_cast<int32_t>(offsetof(CurvedUISettings_t3567379076, ___worldSpaceMouseSensitivity_23)); }
	inline float get_worldSpaceMouseSensitivity_23() const { return ___worldSpaceMouseSensitivity_23; }
	inline float* get_address_of_worldSpaceMouseSensitivity_23() { return &___worldSpaceMouseSensitivity_23; }
	inline void set_worldSpaceMouseSensitivity_23(float value)
	{
		___worldSpaceMouseSensitivity_23 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
