#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.VertexHelper
struct VertexHelper_t3377436606;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t1317283468;
// UnityEngine.Canvas
struct Canvas_t2727140764;
// CurvedUI.CurvedUISettings
struct CurvedUISettings_t3567379076;
// UnityEngine.UI.Graphic
struct Graphic_t836799438;
// UnityEngine.UI.Image
struct Image_t538875265;
// UnityEngine.UI.Text
struct Text_t9039225;

#include "UnityEngine_UI_UnityEngine_UI_BaseMeshEffect2306480155.h"
#include "UnityEngine_UnityEngine_Matrix4x41651859333.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CurvedUI.CurvedUIVertexEffect
struct  CurvedUIVertexEffect_t1126288310  : public BaseMeshEffect_t2306480155
{
public:
	// UnityEngine.UI.VertexHelper CurvedUI.CurvedUIVertexEffect::SavedVertexHelper
	VertexHelper_t3377436606 * ___SavedVertexHelper_3;
	// System.Collections.Generic.List`1<UnityEngine.UIVertex> CurvedUI.CurvedUIVertexEffect::SavedVerteees
	List_1_t1317283468 * ___SavedVerteees_4;
	// System.Boolean CurvedUI.CurvedUIVertexEffect::DoNotTesselate
	bool ___DoNotTesselate_5;
	// System.Boolean CurvedUI.CurvedUIVertexEffect::tesselationRequired
	bool ___tesselationRequired_6;
	// System.Boolean CurvedUI.CurvedUIVertexEffect::curvingRequired
	bool ___curvingRequired_7;
	// System.Single CurvedUI.CurvedUIVertexEffect::angle
	float ___angle_8;
	// System.Boolean CurvedUI.CurvedUIVertexEffect::TransformMisaligned
	bool ___TransformMisaligned_9;
	// UnityEngine.Canvas CurvedUI.CurvedUIVertexEffect::myCanvas
	Canvas_t2727140764 * ___myCanvas_10;
	// CurvedUI.CurvedUISettings CurvedUI.CurvedUIVertexEffect::mySettings
	CurvedUISettings_t3567379076 * ___mySettings_11;
	// UnityEngine.Matrix4x4 CurvedUI.CurvedUIVertexEffect::CanvasToWorld
	Matrix4x4_t1651859333  ___CanvasToWorld_12;
	// UnityEngine.Matrix4x4 CurvedUI.CurvedUIVertexEffect::CanvasToLocal
	Matrix4x4_t1651859333  ___CanvasToLocal_13;
	// UnityEngine.Matrix4x4 CurvedUI.CurvedUIVertexEffect::MyToWorld
	Matrix4x4_t1651859333  ___MyToWorld_14;
	// UnityEngine.Matrix4x4 CurvedUI.CurvedUIVertexEffect::MyToLocal
	Matrix4x4_t1651859333  ___MyToLocal_15;
	// UnityEngine.Vector3 CurvedUI.CurvedUIVertexEffect::savedPos
	Vector3_t4282066566  ___savedPos_16;
	// UnityEngine.Vector3 CurvedUI.CurvedUIVertexEffect::savedUp
	Vector3_t4282066566  ___savedUp_17;
	// UnityEngine.Vector2 CurvedUI.CurvedUIVertexEffect::savedRectSize
	Vector2_t4282066565  ___savedRectSize_18;
	// UnityEngine.Color CurvedUI.CurvedUIVertexEffect::savedColor
	Color_t4194546905  ___savedColor_19;
	// UnityEngine.Vector2 CurvedUI.CurvedUIVertexEffect::savedTextUV0
	Vector2_t4282066565  ___savedTextUV0_20;
	// System.Single CurvedUI.CurvedUIVertexEffect::savedFill
	float ___savedFill_21;
	// System.Collections.Generic.List`1<UnityEngine.UIVertex> CurvedUI.CurvedUIVertexEffect::tesselatedVerts
	List_1_t1317283468 * ___tesselatedVerts_22;
	// UnityEngine.UI.Graphic CurvedUI.CurvedUIVertexEffect::myGraphic
	Graphic_t836799438 * ___myGraphic_23;
	// UnityEngine.UI.Image CurvedUI.CurvedUIVertexEffect::myImage
	Image_t538875265 * ___myImage_24;
	// UnityEngine.UI.Text CurvedUI.CurvedUIVertexEffect::myText
	Text_t9039225 * ___myText_25;

public:
	inline static int32_t get_offset_of_SavedVertexHelper_3() { return static_cast<int32_t>(offsetof(CurvedUIVertexEffect_t1126288310, ___SavedVertexHelper_3)); }
	inline VertexHelper_t3377436606 * get_SavedVertexHelper_3() const { return ___SavedVertexHelper_3; }
	inline VertexHelper_t3377436606 ** get_address_of_SavedVertexHelper_3() { return &___SavedVertexHelper_3; }
	inline void set_SavedVertexHelper_3(VertexHelper_t3377436606 * value)
	{
		___SavedVertexHelper_3 = value;
		Il2CppCodeGenWriteBarrier(&___SavedVertexHelper_3, value);
	}

	inline static int32_t get_offset_of_SavedVerteees_4() { return static_cast<int32_t>(offsetof(CurvedUIVertexEffect_t1126288310, ___SavedVerteees_4)); }
	inline List_1_t1317283468 * get_SavedVerteees_4() const { return ___SavedVerteees_4; }
	inline List_1_t1317283468 ** get_address_of_SavedVerteees_4() { return &___SavedVerteees_4; }
	inline void set_SavedVerteees_4(List_1_t1317283468 * value)
	{
		___SavedVerteees_4 = value;
		Il2CppCodeGenWriteBarrier(&___SavedVerteees_4, value);
	}

	inline static int32_t get_offset_of_DoNotTesselate_5() { return static_cast<int32_t>(offsetof(CurvedUIVertexEffect_t1126288310, ___DoNotTesselate_5)); }
	inline bool get_DoNotTesselate_5() const { return ___DoNotTesselate_5; }
	inline bool* get_address_of_DoNotTesselate_5() { return &___DoNotTesselate_5; }
	inline void set_DoNotTesselate_5(bool value)
	{
		___DoNotTesselate_5 = value;
	}

	inline static int32_t get_offset_of_tesselationRequired_6() { return static_cast<int32_t>(offsetof(CurvedUIVertexEffect_t1126288310, ___tesselationRequired_6)); }
	inline bool get_tesselationRequired_6() const { return ___tesselationRequired_6; }
	inline bool* get_address_of_tesselationRequired_6() { return &___tesselationRequired_6; }
	inline void set_tesselationRequired_6(bool value)
	{
		___tesselationRequired_6 = value;
	}

	inline static int32_t get_offset_of_curvingRequired_7() { return static_cast<int32_t>(offsetof(CurvedUIVertexEffect_t1126288310, ___curvingRequired_7)); }
	inline bool get_curvingRequired_7() const { return ___curvingRequired_7; }
	inline bool* get_address_of_curvingRequired_7() { return &___curvingRequired_7; }
	inline void set_curvingRequired_7(bool value)
	{
		___curvingRequired_7 = value;
	}

	inline static int32_t get_offset_of_angle_8() { return static_cast<int32_t>(offsetof(CurvedUIVertexEffect_t1126288310, ___angle_8)); }
	inline float get_angle_8() const { return ___angle_8; }
	inline float* get_address_of_angle_8() { return &___angle_8; }
	inline void set_angle_8(float value)
	{
		___angle_8 = value;
	}

	inline static int32_t get_offset_of_TransformMisaligned_9() { return static_cast<int32_t>(offsetof(CurvedUIVertexEffect_t1126288310, ___TransformMisaligned_9)); }
	inline bool get_TransformMisaligned_9() const { return ___TransformMisaligned_9; }
	inline bool* get_address_of_TransformMisaligned_9() { return &___TransformMisaligned_9; }
	inline void set_TransformMisaligned_9(bool value)
	{
		___TransformMisaligned_9 = value;
	}

	inline static int32_t get_offset_of_myCanvas_10() { return static_cast<int32_t>(offsetof(CurvedUIVertexEffect_t1126288310, ___myCanvas_10)); }
	inline Canvas_t2727140764 * get_myCanvas_10() const { return ___myCanvas_10; }
	inline Canvas_t2727140764 ** get_address_of_myCanvas_10() { return &___myCanvas_10; }
	inline void set_myCanvas_10(Canvas_t2727140764 * value)
	{
		___myCanvas_10 = value;
		Il2CppCodeGenWriteBarrier(&___myCanvas_10, value);
	}

	inline static int32_t get_offset_of_mySettings_11() { return static_cast<int32_t>(offsetof(CurvedUIVertexEffect_t1126288310, ___mySettings_11)); }
	inline CurvedUISettings_t3567379076 * get_mySettings_11() const { return ___mySettings_11; }
	inline CurvedUISettings_t3567379076 ** get_address_of_mySettings_11() { return &___mySettings_11; }
	inline void set_mySettings_11(CurvedUISettings_t3567379076 * value)
	{
		___mySettings_11 = value;
		Il2CppCodeGenWriteBarrier(&___mySettings_11, value);
	}

	inline static int32_t get_offset_of_CanvasToWorld_12() { return static_cast<int32_t>(offsetof(CurvedUIVertexEffect_t1126288310, ___CanvasToWorld_12)); }
	inline Matrix4x4_t1651859333  get_CanvasToWorld_12() const { return ___CanvasToWorld_12; }
	inline Matrix4x4_t1651859333 * get_address_of_CanvasToWorld_12() { return &___CanvasToWorld_12; }
	inline void set_CanvasToWorld_12(Matrix4x4_t1651859333  value)
	{
		___CanvasToWorld_12 = value;
	}

	inline static int32_t get_offset_of_CanvasToLocal_13() { return static_cast<int32_t>(offsetof(CurvedUIVertexEffect_t1126288310, ___CanvasToLocal_13)); }
	inline Matrix4x4_t1651859333  get_CanvasToLocal_13() const { return ___CanvasToLocal_13; }
	inline Matrix4x4_t1651859333 * get_address_of_CanvasToLocal_13() { return &___CanvasToLocal_13; }
	inline void set_CanvasToLocal_13(Matrix4x4_t1651859333  value)
	{
		___CanvasToLocal_13 = value;
	}

	inline static int32_t get_offset_of_MyToWorld_14() { return static_cast<int32_t>(offsetof(CurvedUIVertexEffect_t1126288310, ___MyToWorld_14)); }
	inline Matrix4x4_t1651859333  get_MyToWorld_14() const { return ___MyToWorld_14; }
	inline Matrix4x4_t1651859333 * get_address_of_MyToWorld_14() { return &___MyToWorld_14; }
	inline void set_MyToWorld_14(Matrix4x4_t1651859333  value)
	{
		___MyToWorld_14 = value;
	}

	inline static int32_t get_offset_of_MyToLocal_15() { return static_cast<int32_t>(offsetof(CurvedUIVertexEffect_t1126288310, ___MyToLocal_15)); }
	inline Matrix4x4_t1651859333  get_MyToLocal_15() const { return ___MyToLocal_15; }
	inline Matrix4x4_t1651859333 * get_address_of_MyToLocal_15() { return &___MyToLocal_15; }
	inline void set_MyToLocal_15(Matrix4x4_t1651859333  value)
	{
		___MyToLocal_15 = value;
	}

	inline static int32_t get_offset_of_savedPos_16() { return static_cast<int32_t>(offsetof(CurvedUIVertexEffect_t1126288310, ___savedPos_16)); }
	inline Vector3_t4282066566  get_savedPos_16() const { return ___savedPos_16; }
	inline Vector3_t4282066566 * get_address_of_savedPos_16() { return &___savedPos_16; }
	inline void set_savedPos_16(Vector3_t4282066566  value)
	{
		___savedPos_16 = value;
	}

	inline static int32_t get_offset_of_savedUp_17() { return static_cast<int32_t>(offsetof(CurvedUIVertexEffect_t1126288310, ___savedUp_17)); }
	inline Vector3_t4282066566  get_savedUp_17() const { return ___savedUp_17; }
	inline Vector3_t4282066566 * get_address_of_savedUp_17() { return &___savedUp_17; }
	inline void set_savedUp_17(Vector3_t4282066566  value)
	{
		___savedUp_17 = value;
	}

	inline static int32_t get_offset_of_savedRectSize_18() { return static_cast<int32_t>(offsetof(CurvedUIVertexEffect_t1126288310, ___savedRectSize_18)); }
	inline Vector2_t4282066565  get_savedRectSize_18() const { return ___savedRectSize_18; }
	inline Vector2_t4282066565 * get_address_of_savedRectSize_18() { return &___savedRectSize_18; }
	inline void set_savedRectSize_18(Vector2_t4282066565  value)
	{
		___savedRectSize_18 = value;
	}

	inline static int32_t get_offset_of_savedColor_19() { return static_cast<int32_t>(offsetof(CurvedUIVertexEffect_t1126288310, ___savedColor_19)); }
	inline Color_t4194546905  get_savedColor_19() const { return ___savedColor_19; }
	inline Color_t4194546905 * get_address_of_savedColor_19() { return &___savedColor_19; }
	inline void set_savedColor_19(Color_t4194546905  value)
	{
		___savedColor_19 = value;
	}

	inline static int32_t get_offset_of_savedTextUV0_20() { return static_cast<int32_t>(offsetof(CurvedUIVertexEffect_t1126288310, ___savedTextUV0_20)); }
	inline Vector2_t4282066565  get_savedTextUV0_20() const { return ___savedTextUV0_20; }
	inline Vector2_t4282066565 * get_address_of_savedTextUV0_20() { return &___savedTextUV0_20; }
	inline void set_savedTextUV0_20(Vector2_t4282066565  value)
	{
		___savedTextUV0_20 = value;
	}

	inline static int32_t get_offset_of_savedFill_21() { return static_cast<int32_t>(offsetof(CurvedUIVertexEffect_t1126288310, ___savedFill_21)); }
	inline float get_savedFill_21() const { return ___savedFill_21; }
	inline float* get_address_of_savedFill_21() { return &___savedFill_21; }
	inline void set_savedFill_21(float value)
	{
		___savedFill_21 = value;
	}

	inline static int32_t get_offset_of_tesselatedVerts_22() { return static_cast<int32_t>(offsetof(CurvedUIVertexEffect_t1126288310, ___tesselatedVerts_22)); }
	inline List_1_t1317283468 * get_tesselatedVerts_22() const { return ___tesselatedVerts_22; }
	inline List_1_t1317283468 ** get_address_of_tesselatedVerts_22() { return &___tesselatedVerts_22; }
	inline void set_tesselatedVerts_22(List_1_t1317283468 * value)
	{
		___tesselatedVerts_22 = value;
		Il2CppCodeGenWriteBarrier(&___tesselatedVerts_22, value);
	}

	inline static int32_t get_offset_of_myGraphic_23() { return static_cast<int32_t>(offsetof(CurvedUIVertexEffect_t1126288310, ___myGraphic_23)); }
	inline Graphic_t836799438 * get_myGraphic_23() const { return ___myGraphic_23; }
	inline Graphic_t836799438 ** get_address_of_myGraphic_23() { return &___myGraphic_23; }
	inline void set_myGraphic_23(Graphic_t836799438 * value)
	{
		___myGraphic_23 = value;
		Il2CppCodeGenWriteBarrier(&___myGraphic_23, value);
	}

	inline static int32_t get_offset_of_myImage_24() { return static_cast<int32_t>(offsetof(CurvedUIVertexEffect_t1126288310, ___myImage_24)); }
	inline Image_t538875265 * get_myImage_24() const { return ___myImage_24; }
	inline Image_t538875265 ** get_address_of_myImage_24() { return &___myImage_24; }
	inline void set_myImage_24(Image_t538875265 * value)
	{
		___myImage_24 = value;
		Il2CppCodeGenWriteBarrier(&___myImage_24, value);
	}

	inline static int32_t get_offset_of_myText_25() { return static_cast<int32_t>(offsetof(CurvedUIVertexEffect_t1126288310, ___myText_25)); }
	inline Text_t9039225 * get_myText_25() const { return ___myText_25; }
	inline Text_t9039225 ** get_address_of_myText_25() { return &___myText_25; }
	inline void set_myText_25(Text_t9039225 * value)
	{
		___myText_25 = value;
		Il2CppCodeGenWriteBarrier(&___myText_25, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
