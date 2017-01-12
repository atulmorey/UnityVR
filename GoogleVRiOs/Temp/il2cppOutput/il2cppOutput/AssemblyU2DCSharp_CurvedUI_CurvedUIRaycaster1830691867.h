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
// CurvedUI.CurvedUISettings
struct CurvedUISettings_t3567379076;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t747900261;

#include "UnityEngine_UI_UnityEngine_UI_GraphicRaycaster911782554.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CurvedUI.CurvedUIRaycaster
struct  CurvedUIRaycaster_t1830691867  : public GraphicRaycaster_t911782554
{
public:
	// System.Boolean CurvedUI.CurvedUIRaycaster::showDebug
	bool ___showDebug_10;
	// UnityEngine.Canvas CurvedUI.CurvedUIRaycaster::myCanvas
	Canvas_t2727140764 * ___myCanvas_11;
	// CurvedUI.CurvedUISettings CurvedUI.CurvedUIRaycaster::mySettings
	CurvedUISettings_t3567379076 * ___mySettings_12;
	// UnityEngine.Vector3 CurvedUI.CurvedUIRaycaster::cyllinderMidPoint
	Vector3_t4282066566  ___cyllinderMidPoint_13;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> CurvedUI.CurvedUIRaycaster::lastHovered
	List_1_t747900261 * ___lastHovered_14;
	// UnityEngine.Vector2 CurvedUI.CurvedUIRaycaster::lastCanvasPos
	Vector2_t4282066565  ___lastCanvasPos_15;

public:
	inline static int32_t get_offset_of_showDebug_10() { return static_cast<int32_t>(offsetof(CurvedUIRaycaster_t1830691867, ___showDebug_10)); }
	inline bool get_showDebug_10() const { return ___showDebug_10; }
	inline bool* get_address_of_showDebug_10() { return &___showDebug_10; }
	inline void set_showDebug_10(bool value)
	{
		___showDebug_10 = value;
	}

	inline static int32_t get_offset_of_myCanvas_11() { return static_cast<int32_t>(offsetof(CurvedUIRaycaster_t1830691867, ___myCanvas_11)); }
	inline Canvas_t2727140764 * get_myCanvas_11() const { return ___myCanvas_11; }
	inline Canvas_t2727140764 ** get_address_of_myCanvas_11() { return &___myCanvas_11; }
	inline void set_myCanvas_11(Canvas_t2727140764 * value)
	{
		___myCanvas_11 = value;
		Il2CppCodeGenWriteBarrier(&___myCanvas_11, value);
	}

	inline static int32_t get_offset_of_mySettings_12() { return static_cast<int32_t>(offsetof(CurvedUIRaycaster_t1830691867, ___mySettings_12)); }
	inline CurvedUISettings_t3567379076 * get_mySettings_12() const { return ___mySettings_12; }
	inline CurvedUISettings_t3567379076 ** get_address_of_mySettings_12() { return &___mySettings_12; }
	inline void set_mySettings_12(CurvedUISettings_t3567379076 * value)
	{
		___mySettings_12 = value;
		Il2CppCodeGenWriteBarrier(&___mySettings_12, value);
	}

	inline static int32_t get_offset_of_cyllinderMidPoint_13() { return static_cast<int32_t>(offsetof(CurvedUIRaycaster_t1830691867, ___cyllinderMidPoint_13)); }
	inline Vector3_t4282066566  get_cyllinderMidPoint_13() const { return ___cyllinderMidPoint_13; }
	inline Vector3_t4282066566 * get_address_of_cyllinderMidPoint_13() { return &___cyllinderMidPoint_13; }
	inline void set_cyllinderMidPoint_13(Vector3_t4282066566  value)
	{
		___cyllinderMidPoint_13 = value;
	}

	inline static int32_t get_offset_of_lastHovered_14() { return static_cast<int32_t>(offsetof(CurvedUIRaycaster_t1830691867, ___lastHovered_14)); }
	inline List_1_t747900261 * get_lastHovered_14() const { return ___lastHovered_14; }
	inline List_1_t747900261 ** get_address_of_lastHovered_14() { return &___lastHovered_14; }
	inline void set_lastHovered_14(List_1_t747900261 * value)
	{
		___lastHovered_14 = value;
		Il2CppCodeGenWriteBarrier(&___lastHovered_14, value);
	}

	inline static int32_t get_offset_of_lastCanvasPos_15() { return static_cast<int32_t>(offsetof(CurvedUIRaycaster_t1830691867, ___lastCanvasPos_15)); }
	inline Vector2_t4282066565  get_lastCanvasPos_15() const { return ___lastCanvasPos_15; }
	inline Vector2_t4282066565 * get_address_of_lastCanvasPos_15() { return &___lastCanvasPos_15; }
	inline void set_lastCanvasPos_15(Vector2_t4282066565  value)
	{
		___lastCanvasPos_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
