#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;
// UnityEngine.Transform
struct Transform_t3275118058;
// LTRect
struct LTRect_t2720449186;
// LTBezierPath
struct LTBezierPath_t292484408;
// LTSpline
struct LTSpline_t3159710915;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;
// System.Action`1<System.Single>
struct Action_1_t1878309314;
// System.Action`2<System.Single,System.Single>
struct Action_2_t3216573049;
// System.Action`2<System.Single,System.Object>
struct Action_2_t3829512412;
// System.Action`1<UnityEngine.Vector2>
struct Action_1_t2045506961;
// System.Action`1<UnityEngine.Vector3>
struct Action_1_t2045506962;
// System.Action`2<UnityEngine.Vector3,System.Object>
struct Action_2_t129729484;
// System.Action`1<UnityEngine.Color>
struct Action_1_t1822191457;
// System.Action`2<UnityEngine.Color,System.Object>
struct Action_2_t3924735457;
// System.Action
struct Action_t3226471752;
// System.Action`1<System.Object>
struct Action_1_t2491248677;
// System.Object
struct Il2CppObject;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "AssemblyU2DCSharpU2Dfirstpass_TweenAction3330578889.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LeanTweenType1294766541.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LTDescrImpl
struct  LTDescrImpl_t279532253  : public Il2CppObject
{
public:
	// System.UInt32 LTDescrImpl::_id
	uint32_t ____id_0;
	// UnityEngine.Vector3 LTDescrImpl::fromInternal
	Vector3_t2243707580  ___fromInternal_1;
	// UnityEngine.Vector3 LTDescrImpl::toInternal
	Vector3_t2243707580  ___toInternal_2;
	// UnityEngine.Vector3 LTDescrImpl::diffInternal
	Vector3_t2243707580  ___diffInternal_3;
	// UnityEngine.RectTransform LTDescrImpl::rectTransform
	RectTransform_t3349966182 * ___rectTransform_4;
	// UnityEngine.UI.Text LTDescrImpl::uiText
	Text_t356221433 * ___uiText_5;
	// UnityEngine.UI.Image LTDescrImpl::uiImage
	Image_t2042527209 * ___uiImage_6;
	// UnityEngine.Sprite[] LTDescrImpl::sprites
	SpriteU5BU5D_t3359083662* ___sprites_7;
	// System.Boolean LTDescrImpl::<toggle>k__BackingField
	bool ___U3CtoggleU3Ek__BackingField_9;
	// System.Boolean LTDescrImpl::<useEstimatedTime>k__BackingField
	bool ___U3CuseEstimatedTimeU3Ek__BackingField_10;
	// System.Boolean LTDescrImpl::<useFrames>k__BackingField
	bool ___U3CuseFramesU3Ek__BackingField_11;
	// System.Boolean LTDescrImpl::<useManualTime>k__BackingField
	bool ___U3CuseManualTimeU3Ek__BackingField_12;
	// System.Boolean LTDescrImpl::<hasInitiliazed>k__BackingField
	bool ___U3ChasInitiliazedU3Ek__BackingField_13;
	// System.Boolean LTDescrImpl::<hasPhysics>k__BackingField
	bool ___U3ChasPhysicsU3Ek__BackingField_14;
	// System.Boolean LTDescrImpl::<onCompleteOnRepeat>k__BackingField
	bool ___U3ConCompleteOnRepeatU3Ek__BackingField_15;
	// System.Boolean LTDescrImpl::<onCompleteOnStart>k__BackingField
	bool ___U3ConCompleteOnStartU3Ek__BackingField_16;
	// System.Boolean LTDescrImpl::<useRecursion>k__BackingField
	bool ___U3CuseRecursionU3Ek__BackingField_17;
	// System.Single LTDescrImpl::<passed>k__BackingField
	float ___U3CpassedU3Ek__BackingField_18;
	// System.Single LTDescrImpl::<delay>k__BackingField
	float ___U3CdelayU3Ek__BackingField_19;
	// System.Single LTDescrImpl::<time>k__BackingField
	float ___U3CtimeU3Ek__BackingField_20;
	// System.Single LTDescrImpl::<speed>k__BackingField
	float ___U3CspeedU3Ek__BackingField_21;
	// System.Single LTDescrImpl::<lastVal>k__BackingField
	float ___U3ClastValU3Ek__BackingField_22;
	// System.Int32 LTDescrImpl::<loopCount>k__BackingField
	int32_t ___U3CloopCountU3Ek__BackingField_23;
	// System.UInt32 LTDescrImpl::<counter>k__BackingField
	uint32_t ___U3CcounterU3Ek__BackingField_24;
	// System.Single LTDescrImpl::<direction>k__BackingField
	float ___U3CdirectionU3Ek__BackingField_25;
	// System.Single LTDescrImpl::<directionLast>k__BackingField
	float ___U3CdirectionLastU3Ek__BackingField_26;
	// System.Single LTDescrImpl::<overshoot>k__BackingField
	float ___U3CovershootU3Ek__BackingField_27;
	// System.Single LTDescrImpl::<period>k__BackingField
	float ___U3CperiodU3Ek__BackingField_28;
	// System.Boolean LTDescrImpl::<destroyOnComplete>k__BackingField
	bool ___U3CdestroyOnCompleteU3Ek__BackingField_29;
	// UnityEngine.Transform LTDescrImpl::<trans>k__BackingField
	Transform_t3275118058 * ___U3CtransU3Ek__BackingField_30;
	// UnityEngine.Transform LTDescrImpl::<toTrans>k__BackingField
	Transform_t3275118058 * ___U3CtoTransU3Ek__BackingField_31;
	// LTRect LTDescrImpl::<ltRect>k__BackingField
	LTRect_t2720449186 * ___U3CltRectU3Ek__BackingField_32;
	// UnityEngine.Vector3 LTDescrImpl::<point>k__BackingField
	Vector3_t2243707580  ___U3CpointU3Ek__BackingField_33;
	// UnityEngine.Vector3 LTDescrImpl::<axis>k__BackingField
	Vector3_t2243707580  ___U3CaxisU3Ek__BackingField_34;
	// UnityEngine.Quaternion LTDescrImpl::<origRotation>k__BackingField
	Quaternion_t4030073918  ___U3CorigRotationU3Ek__BackingField_35;
	// LTBezierPath LTDescrImpl::<path>k__BackingField
	LTBezierPath_t292484408 * ___U3CpathU3Ek__BackingField_36;
	// LTSpline LTDescrImpl::<spline>k__BackingField
	LTSpline_t3159710915 * ___U3CsplineU3Ek__BackingField_37;
	// TweenAction LTDescrImpl::<type>k__BackingField
	int32_t ___U3CtypeU3Ek__BackingField_38;
	// LeanTweenType LTDescrImpl::<tweenType>k__BackingField
	int32_t ___U3CtweenTypeU3Ek__BackingField_39;
	// UnityEngine.AnimationCurve LTDescrImpl::<animationCurve>k__BackingField
	AnimationCurve_t3306541151 * ___U3CanimationCurveU3Ek__BackingField_40;
	// LeanTweenType LTDescrImpl::<loopType>k__BackingField
	int32_t ___U3CloopTypeU3Ek__BackingField_41;
	// System.Boolean LTDescrImpl::<hasUpdateCallback>k__BackingField
	bool ___U3ChasUpdateCallbackU3Ek__BackingField_42;
	// System.Action`1<System.Single> LTDescrImpl::<onUpdateFloat>k__BackingField
	Action_1_t1878309314 * ___U3ConUpdateFloatU3Ek__BackingField_43;
	// System.Action`2<System.Single,System.Single> LTDescrImpl::<onUpdateFloatRatio>k__BackingField
	Action_2_t3216573049 * ___U3ConUpdateFloatRatioU3Ek__BackingField_44;
	// System.Action`2<System.Single,System.Object> LTDescrImpl::<onUpdateFloatObject>k__BackingField
	Action_2_t3829512412 * ___U3ConUpdateFloatObjectU3Ek__BackingField_45;
	// System.Action`1<UnityEngine.Vector2> LTDescrImpl::<onUpdateVector2>k__BackingField
	Action_1_t2045506961 * ___U3ConUpdateVector2U3Ek__BackingField_46;
	// System.Action`1<UnityEngine.Vector3> LTDescrImpl::<onUpdateVector3>k__BackingField
	Action_1_t2045506962 * ___U3ConUpdateVector3U3Ek__BackingField_47;
	// System.Action`2<UnityEngine.Vector3,System.Object> LTDescrImpl::<onUpdateVector3Object>k__BackingField
	Action_2_t129729484 * ___U3ConUpdateVector3ObjectU3Ek__BackingField_48;
	// System.Action`1<UnityEngine.Color> LTDescrImpl::<onUpdateColor>k__BackingField
	Action_1_t1822191457 * ___U3ConUpdateColorU3Ek__BackingField_49;
	// System.Action`2<UnityEngine.Color,System.Object> LTDescrImpl::<onUpdateColorObject>k__BackingField
	Action_2_t3924735457 * ___U3ConUpdateColorObjectU3Ek__BackingField_50;
	// System.Action LTDescrImpl::<onComplete>k__BackingField
	Action_t3226471752 * ___U3ConCompleteU3Ek__BackingField_51;
	// System.Action`1<System.Object> LTDescrImpl::<onCompleteObject>k__BackingField
	Action_1_t2491248677 * ___U3ConCompleteObjectU3Ek__BackingField_52;
	// System.Object LTDescrImpl::<onCompleteParam>k__BackingField
	Il2CppObject * ___U3ConCompleteParamU3Ek__BackingField_53;
	// System.Object LTDescrImpl::<onUpdateParam>k__BackingField
	Il2CppObject * ___U3ConUpdateParamU3Ek__BackingField_54;
	// System.Action LTDescrImpl::<onStart>k__BackingField
	Action_t3226471752 * ___U3ConStartU3Ek__BackingField_55;
	// UnityEngine.SpriteRenderer LTDescrImpl::<spriteRen>k__BackingField
	SpriteRenderer_t1209076198 * ___U3CspriteRenU3Ek__BackingField_56;

public:
	inline static int32_t get_offset_of__id_0() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ____id_0)); }
	inline uint32_t get__id_0() const { return ____id_0; }
	inline uint32_t* get_address_of__id_0() { return &____id_0; }
	inline void set__id_0(uint32_t value)
	{
		____id_0 = value;
	}

	inline static int32_t get_offset_of_fromInternal_1() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___fromInternal_1)); }
	inline Vector3_t2243707580  get_fromInternal_1() const { return ___fromInternal_1; }
	inline Vector3_t2243707580 * get_address_of_fromInternal_1() { return &___fromInternal_1; }
	inline void set_fromInternal_1(Vector3_t2243707580  value)
	{
		___fromInternal_1 = value;
	}

	inline static int32_t get_offset_of_toInternal_2() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___toInternal_2)); }
	inline Vector3_t2243707580  get_toInternal_2() const { return ___toInternal_2; }
	inline Vector3_t2243707580 * get_address_of_toInternal_2() { return &___toInternal_2; }
	inline void set_toInternal_2(Vector3_t2243707580  value)
	{
		___toInternal_2 = value;
	}

	inline static int32_t get_offset_of_diffInternal_3() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___diffInternal_3)); }
	inline Vector3_t2243707580  get_diffInternal_3() const { return ___diffInternal_3; }
	inline Vector3_t2243707580 * get_address_of_diffInternal_3() { return &___diffInternal_3; }
	inline void set_diffInternal_3(Vector3_t2243707580  value)
	{
		___diffInternal_3 = value;
	}

	inline static int32_t get_offset_of_rectTransform_4() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___rectTransform_4)); }
	inline RectTransform_t3349966182 * get_rectTransform_4() const { return ___rectTransform_4; }
	inline RectTransform_t3349966182 ** get_address_of_rectTransform_4() { return &___rectTransform_4; }
	inline void set_rectTransform_4(RectTransform_t3349966182 * value)
	{
		___rectTransform_4 = value;
		Il2CppCodeGenWriteBarrier(&___rectTransform_4, value);
	}

	inline static int32_t get_offset_of_uiText_5() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___uiText_5)); }
	inline Text_t356221433 * get_uiText_5() const { return ___uiText_5; }
	inline Text_t356221433 ** get_address_of_uiText_5() { return &___uiText_5; }
	inline void set_uiText_5(Text_t356221433 * value)
	{
		___uiText_5 = value;
		Il2CppCodeGenWriteBarrier(&___uiText_5, value);
	}

	inline static int32_t get_offset_of_uiImage_6() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___uiImage_6)); }
	inline Image_t2042527209 * get_uiImage_6() const { return ___uiImage_6; }
	inline Image_t2042527209 ** get_address_of_uiImage_6() { return &___uiImage_6; }
	inline void set_uiImage_6(Image_t2042527209 * value)
	{
		___uiImage_6 = value;
		Il2CppCodeGenWriteBarrier(&___uiImage_6, value);
	}

	inline static int32_t get_offset_of_sprites_7() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___sprites_7)); }
	inline SpriteU5BU5D_t3359083662* get_sprites_7() const { return ___sprites_7; }
	inline SpriteU5BU5D_t3359083662** get_address_of_sprites_7() { return &___sprites_7; }
	inline void set_sprites_7(SpriteU5BU5D_t3359083662* value)
	{
		___sprites_7 = value;
		Il2CppCodeGenWriteBarrier(&___sprites_7, value);
	}

	inline static int32_t get_offset_of_U3CtoggleU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___U3CtoggleU3Ek__BackingField_9)); }
	inline bool get_U3CtoggleU3Ek__BackingField_9() const { return ___U3CtoggleU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CtoggleU3Ek__BackingField_9() { return &___U3CtoggleU3Ek__BackingField_9; }
	inline void set_U3CtoggleU3Ek__BackingField_9(bool value)
	{
		___U3CtoggleU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CuseEstimatedTimeU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___U3CuseEstimatedTimeU3Ek__BackingField_10)); }
	inline bool get_U3CuseEstimatedTimeU3Ek__BackingField_10() const { return ___U3CuseEstimatedTimeU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CuseEstimatedTimeU3Ek__BackingField_10() { return &___U3CuseEstimatedTimeU3Ek__BackingField_10; }
	inline void set_U3CuseEstimatedTimeU3Ek__BackingField_10(bool value)
	{
		___U3CuseEstimatedTimeU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CuseFramesU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___U3CuseFramesU3Ek__BackingField_11)); }
	inline bool get_U3CuseFramesU3Ek__BackingField_11() const { return ___U3CuseFramesU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CuseFramesU3Ek__BackingField_11() { return &___U3CuseFramesU3Ek__BackingField_11; }
	inline void set_U3CuseFramesU3Ek__BackingField_11(bool value)
	{
		___U3CuseFramesU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CuseManualTimeU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___U3CuseManualTimeU3Ek__BackingField_12)); }
	inline bool get_U3CuseManualTimeU3Ek__BackingField_12() const { return ___U3CuseManualTimeU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CuseManualTimeU3Ek__BackingField_12() { return &___U3CuseManualTimeU3Ek__BackingField_12; }
	inline void set_U3CuseManualTimeU3Ek__BackingField_12(bool value)
	{
		___U3CuseManualTimeU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3ChasInitiliazedU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___U3ChasInitiliazedU3Ek__BackingField_13)); }
	inline bool get_U3ChasInitiliazedU3Ek__BackingField_13() const { return ___U3ChasInitiliazedU3Ek__BackingField_13; }
	inline bool* get_address_of_U3ChasInitiliazedU3Ek__BackingField_13() { return &___U3ChasInitiliazedU3Ek__BackingField_13; }
	inline void set_U3ChasInitiliazedU3Ek__BackingField_13(bool value)
	{
		___U3ChasInitiliazedU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3ChasPhysicsU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___U3ChasPhysicsU3Ek__BackingField_14)); }
	inline bool get_U3ChasPhysicsU3Ek__BackingField_14() const { return ___U3ChasPhysicsU3Ek__BackingField_14; }
	inline bool* get_address_of_U3ChasPhysicsU3Ek__BackingField_14() { return &___U3ChasPhysicsU3Ek__BackingField_14; }
	inline void set_U3ChasPhysicsU3Ek__BackingField_14(bool value)
	{
		___U3ChasPhysicsU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3ConCompleteOnRepeatU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___U3ConCompleteOnRepeatU3Ek__BackingField_15)); }
	inline bool get_U3ConCompleteOnRepeatU3Ek__BackingField_15() const { return ___U3ConCompleteOnRepeatU3Ek__BackingField_15; }
	inline bool* get_address_of_U3ConCompleteOnRepeatU3Ek__BackingField_15() { return &___U3ConCompleteOnRepeatU3Ek__BackingField_15; }
	inline void set_U3ConCompleteOnRepeatU3Ek__BackingField_15(bool value)
	{
		___U3ConCompleteOnRepeatU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3ConCompleteOnStartU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___U3ConCompleteOnStartU3Ek__BackingField_16)); }
	inline bool get_U3ConCompleteOnStartU3Ek__BackingField_16() const { return ___U3ConCompleteOnStartU3Ek__BackingField_16; }
	inline bool* get_address_of_U3ConCompleteOnStartU3Ek__BackingField_16() { return &___U3ConCompleteOnStartU3Ek__BackingField_16; }
	inline void set_U3ConCompleteOnStartU3Ek__BackingField_16(bool value)
	{
		___U3ConCompleteOnStartU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CuseRecursionU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___U3CuseRecursionU3Ek__BackingField_17)); }
	inline bool get_U3CuseRecursionU3Ek__BackingField_17() const { return ___U3CuseRecursionU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CuseRecursionU3Ek__BackingField_17() { return &___U3CuseRecursionU3Ek__BackingField_17; }
	inline void set_U3CuseRecursionU3Ek__BackingField_17(bool value)
	{
		___U3CuseRecursionU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CpassedU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___U3CpassedU3Ek__BackingField_18)); }
	inline float get_U3CpassedU3Ek__BackingField_18() const { return ___U3CpassedU3Ek__BackingField_18; }
	inline float* get_address_of_U3CpassedU3Ek__BackingField_18() { return &___U3CpassedU3Ek__BackingField_18; }
	inline void set_U3CpassedU3Ek__BackingField_18(float value)
	{
		___U3CpassedU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CdelayU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___U3CdelayU3Ek__BackingField_19)); }
	inline float get_U3CdelayU3Ek__BackingField_19() const { return ___U3CdelayU3Ek__BackingField_19; }
	inline float* get_address_of_U3CdelayU3Ek__BackingField_19() { return &___U3CdelayU3Ek__BackingField_19; }
	inline void set_U3CdelayU3Ek__BackingField_19(float value)
	{
		___U3CdelayU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CtimeU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___U3CtimeU3Ek__BackingField_20)); }
	inline float get_U3CtimeU3Ek__BackingField_20() const { return ___U3CtimeU3Ek__BackingField_20; }
	inline float* get_address_of_U3CtimeU3Ek__BackingField_20() { return &___U3CtimeU3Ek__BackingField_20; }
	inline void set_U3CtimeU3Ek__BackingField_20(float value)
	{
		___U3CtimeU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CspeedU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___U3CspeedU3Ek__BackingField_21)); }
	inline float get_U3CspeedU3Ek__BackingField_21() const { return ___U3CspeedU3Ek__BackingField_21; }
	inline float* get_address_of_U3CspeedU3Ek__BackingField_21() { return &___U3CspeedU3Ek__BackingField_21; }
	inline void set_U3CspeedU3Ek__BackingField_21(float value)
	{
		___U3CspeedU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3ClastValU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___U3ClastValU3Ek__BackingField_22)); }
	inline float get_U3ClastValU3Ek__BackingField_22() const { return ___U3ClastValU3Ek__BackingField_22; }
	inline float* get_address_of_U3ClastValU3Ek__BackingField_22() { return &___U3ClastValU3Ek__BackingField_22; }
	inline void set_U3ClastValU3Ek__BackingField_22(float value)
	{
		___U3ClastValU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CloopCountU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___U3CloopCountU3Ek__BackingField_23)); }
	inline int32_t get_U3CloopCountU3Ek__BackingField_23() const { return ___U3CloopCountU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CloopCountU3Ek__BackingField_23() { return &___U3CloopCountU3Ek__BackingField_23; }
	inline void set_U3CloopCountU3Ek__BackingField_23(int32_t value)
	{
		___U3CloopCountU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CcounterU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___U3CcounterU3Ek__BackingField_24)); }
	inline uint32_t get_U3CcounterU3Ek__BackingField_24() const { return ___U3CcounterU3Ek__BackingField_24; }
	inline uint32_t* get_address_of_U3CcounterU3Ek__BackingField_24() { return &___U3CcounterU3Ek__BackingField_24; }
	inline void set_U3CcounterU3Ek__BackingField_24(uint32_t value)
	{
		___U3CcounterU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3CdirectionU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___U3CdirectionU3Ek__BackingField_25)); }
	inline float get_U3CdirectionU3Ek__BackingField_25() const { return ___U3CdirectionU3Ek__BackingField_25; }
	inline float* get_address_of_U3CdirectionU3Ek__BackingField_25() { return &___U3CdirectionU3Ek__BackingField_25; }
	inline void set_U3CdirectionU3Ek__BackingField_25(float value)
	{
		___U3CdirectionU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_U3CdirectionLastU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___U3CdirectionLastU3Ek__BackingField_26)); }
	inline float get_U3CdirectionLastU3Ek__BackingField_26() const { return ___U3CdirectionLastU3Ek__BackingField_26; }
	inline float* get_address_of_U3CdirectionLastU3Ek__BackingField_26() { return &___U3CdirectionLastU3Ek__BackingField_26; }
	inline void set_U3CdirectionLastU3Ek__BackingField_26(float value)
	{
		___U3CdirectionLastU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of_U3CovershootU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___U3CovershootU3Ek__BackingField_27)); }
	inline float get_U3CovershootU3Ek__BackingField_27() const { return ___U3CovershootU3Ek__BackingField_27; }
	inline float* get_address_of_U3CovershootU3Ek__BackingField_27() { return &___U3CovershootU3Ek__BackingField_27; }
	inline void set_U3CovershootU3Ek__BackingField_27(float value)
	{
		___U3CovershootU3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_U3CperiodU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___U3CperiodU3Ek__BackingField_28)); }
	inline float get_U3CperiodU3Ek__BackingField_28() const { return ___U3CperiodU3Ek__BackingField_28; }
	inline float* get_address_of_U3CperiodU3Ek__BackingField_28() { return &___U3CperiodU3Ek__BackingField_28; }
	inline void set_U3CperiodU3Ek__BackingField_28(float value)
	{
		___U3CperiodU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_U3CdestroyOnCompleteU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___U3CdestroyOnCompleteU3Ek__BackingField_29)); }
	inline bool get_U3CdestroyOnCompleteU3Ek__BackingField_29() const { return ___U3CdestroyOnCompleteU3Ek__BackingField_29; }
	inline bool* get_address_of_U3CdestroyOnCompleteU3Ek__BackingField_29() { return &___U3CdestroyOnCompleteU3Ek__BackingField_29; }
	inline void set_U3CdestroyOnCompleteU3Ek__BackingField_29(bool value)
	{
		___U3CdestroyOnCompleteU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_U3CtransU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___U3CtransU3Ek__BackingField_30)); }
	inline Transform_t3275118058 * get_U3CtransU3Ek__BackingField_30() const { return ___U3CtransU3Ek__BackingField_30; }
	inline Transform_t3275118058 ** get_address_of_U3CtransU3Ek__BackingField_30() { return &___U3CtransU3Ek__BackingField_30; }
	inline void set_U3CtransU3Ek__BackingField_30(Transform_t3275118058 * value)
	{
		___U3CtransU3Ek__BackingField_30 = value;
		Il2CppCodeGenWriteBarrier(&___U3CtransU3Ek__BackingField_30, value);
	}

	inline static int32_t get_offset_of_U3CtoTransU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___U3CtoTransU3Ek__BackingField_31)); }
	inline Transform_t3275118058 * get_U3CtoTransU3Ek__BackingField_31() const { return ___U3CtoTransU3Ek__BackingField_31; }
	inline Transform_t3275118058 ** get_address_of_U3CtoTransU3Ek__BackingField_31() { return &___U3CtoTransU3Ek__BackingField_31; }
	inline void set_U3CtoTransU3Ek__BackingField_31(Transform_t3275118058 * value)
	{
		___U3CtoTransU3Ek__BackingField_31 = value;
		Il2CppCodeGenWriteBarrier(&___U3CtoTransU3Ek__BackingField_31, value);
	}

	inline static int32_t get_offset_of_U3CltRectU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___U3CltRectU3Ek__BackingField_32)); }
	inline LTRect_t2720449186 * get_U3CltRectU3Ek__BackingField_32() const { return ___U3CltRectU3Ek__BackingField_32; }
	inline LTRect_t2720449186 ** get_address_of_U3CltRectU3Ek__BackingField_32() { return &___U3CltRectU3Ek__BackingField_32; }
	inline void set_U3CltRectU3Ek__BackingField_32(LTRect_t2720449186 * value)
	{
		___U3CltRectU3Ek__BackingField_32 = value;
		Il2CppCodeGenWriteBarrier(&___U3CltRectU3Ek__BackingField_32, value);
	}

	inline static int32_t get_offset_of_U3CpointU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___U3CpointU3Ek__BackingField_33)); }
	inline Vector3_t2243707580  get_U3CpointU3Ek__BackingField_33() const { return ___U3CpointU3Ek__BackingField_33; }
	inline Vector3_t2243707580 * get_address_of_U3CpointU3Ek__BackingField_33() { return &___U3CpointU3Ek__BackingField_33; }
	inline void set_U3CpointU3Ek__BackingField_33(Vector3_t2243707580  value)
	{
		___U3CpointU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CaxisU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___U3CaxisU3Ek__BackingField_34)); }
	inline Vector3_t2243707580  get_U3CaxisU3Ek__BackingField_34() const { return ___U3CaxisU3Ek__BackingField_34; }
	inline Vector3_t2243707580 * get_address_of_U3CaxisU3Ek__BackingField_34() { return &___U3CaxisU3Ek__BackingField_34; }
	inline void set_U3CaxisU3Ek__BackingField_34(Vector3_t2243707580  value)
	{
		___U3CaxisU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_U3CorigRotationU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___U3CorigRotationU3Ek__BackingField_35)); }
	inline Quaternion_t4030073918  get_U3CorigRotationU3Ek__BackingField_35() const { return ___U3CorigRotationU3Ek__BackingField_35; }
	inline Quaternion_t4030073918 * get_address_of_U3CorigRotationU3Ek__BackingField_35() { return &___U3CorigRotationU3Ek__BackingField_35; }
	inline void set_U3CorigRotationU3Ek__BackingField_35(Quaternion_t4030073918  value)
	{
		___U3CorigRotationU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_U3CpathU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___U3CpathU3Ek__BackingField_36)); }
	inline LTBezierPath_t292484408 * get_U3CpathU3Ek__BackingField_36() const { return ___U3CpathU3Ek__BackingField_36; }
	inline LTBezierPath_t292484408 ** get_address_of_U3CpathU3Ek__BackingField_36() { return &___U3CpathU3Ek__BackingField_36; }
	inline void set_U3CpathU3Ek__BackingField_36(LTBezierPath_t292484408 * value)
	{
		___U3CpathU3Ek__BackingField_36 = value;
		Il2CppCodeGenWriteBarrier(&___U3CpathU3Ek__BackingField_36, value);
	}

	inline static int32_t get_offset_of_U3CsplineU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___U3CsplineU3Ek__BackingField_37)); }
	inline LTSpline_t3159710915 * get_U3CsplineU3Ek__BackingField_37() const { return ___U3CsplineU3Ek__BackingField_37; }
	inline LTSpline_t3159710915 ** get_address_of_U3CsplineU3Ek__BackingField_37() { return &___U3CsplineU3Ek__BackingField_37; }
	inline void set_U3CsplineU3Ek__BackingField_37(LTSpline_t3159710915 * value)
	{
		___U3CsplineU3Ek__BackingField_37 = value;
		Il2CppCodeGenWriteBarrier(&___U3CsplineU3Ek__BackingField_37, value);
	}

	inline static int32_t get_offset_of_U3CtypeU3Ek__BackingField_38() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___U3CtypeU3Ek__BackingField_38)); }
	inline int32_t get_U3CtypeU3Ek__BackingField_38() const { return ___U3CtypeU3Ek__BackingField_38; }
	inline int32_t* get_address_of_U3CtypeU3Ek__BackingField_38() { return &___U3CtypeU3Ek__BackingField_38; }
	inline void set_U3CtypeU3Ek__BackingField_38(int32_t value)
	{
		___U3CtypeU3Ek__BackingField_38 = value;
	}

	inline static int32_t get_offset_of_U3CtweenTypeU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___U3CtweenTypeU3Ek__BackingField_39)); }
	inline int32_t get_U3CtweenTypeU3Ek__BackingField_39() const { return ___U3CtweenTypeU3Ek__BackingField_39; }
	inline int32_t* get_address_of_U3CtweenTypeU3Ek__BackingField_39() { return &___U3CtweenTypeU3Ek__BackingField_39; }
	inline void set_U3CtweenTypeU3Ek__BackingField_39(int32_t value)
	{
		___U3CtweenTypeU3Ek__BackingField_39 = value;
	}

	inline static int32_t get_offset_of_U3CanimationCurveU3Ek__BackingField_40() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___U3CanimationCurveU3Ek__BackingField_40)); }
	inline AnimationCurve_t3306541151 * get_U3CanimationCurveU3Ek__BackingField_40() const { return ___U3CanimationCurveU3Ek__BackingField_40; }
	inline AnimationCurve_t3306541151 ** get_address_of_U3CanimationCurveU3Ek__BackingField_40() { return &___U3CanimationCurveU3Ek__BackingField_40; }
	inline void set_U3CanimationCurveU3Ek__BackingField_40(AnimationCurve_t3306541151 * value)
	{
		___U3CanimationCurveU3Ek__BackingField_40 = value;
		Il2CppCodeGenWriteBarrier(&___U3CanimationCurveU3Ek__BackingField_40, value);
	}

	inline static int32_t get_offset_of_U3CloopTypeU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___U3CloopTypeU3Ek__BackingField_41)); }
	inline int32_t get_U3CloopTypeU3Ek__BackingField_41() const { return ___U3CloopTypeU3Ek__BackingField_41; }
	inline int32_t* get_address_of_U3CloopTypeU3Ek__BackingField_41() { return &___U3CloopTypeU3Ek__BackingField_41; }
	inline void set_U3CloopTypeU3Ek__BackingField_41(int32_t value)
	{
		___U3CloopTypeU3Ek__BackingField_41 = value;
	}

	inline static int32_t get_offset_of_U3ChasUpdateCallbackU3Ek__BackingField_42() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___U3ChasUpdateCallbackU3Ek__BackingField_42)); }
	inline bool get_U3ChasUpdateCallbackU3Ek__BackingField_42() const { return ___U3ChasUpdateCallbackU3Ek__BackingField_42; }
	inline bool* get_address_of_U3ChasUpdateCallbackU3Ek__BackingField_42() { return &___U3ChasUpdateCallbackU3Ek__BackingField_42; }
	inline void set_U3ChasUpdateCallbackU3Ek__BackingField_42(bool value)
	{
		___U3ChasUpdateCallbackU3Ek__BackingField_42 = value;
	}

	inline static int32_t get_offset_of_U3ConUpdateFloatU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___U3ConUpdateFloatU3Ek__BackingField_43)); }
	inline Action_1_t1878309314 * get_U3ConUpdateFloatU3Ek__BackingField_43() const { return ___U3ConUpdateFloatU3Ek__BackingField_43; }
	inline Action_1_t1878309314 ** get_address_of_U3ConUpdateFloatU3Ek__BackingField_43() { return &___U3ConUpdateFloatU3Ek__BackingField_43; }
	inline void set_U3ConUpdateFloatU3Ek__BackingField_43(Action_1_t1878309314 * value)
	{
		___U3ConUpdateFloatU3Ek__BackingField_43 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConUpdateFloatU3Ek__BackingField_43, value);
	}

	inline static int32_t get_offset_of_U3ConUpdateFloatRatioU3Ek__BackingField_44() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___U3ConUpdateFloatRatioU3Ek__BackingField_44)); }
	inline Action_2_t3216573049 * get_U3ConUpdateFloatRatioU3Ek__BackingField_44() const { return ___U3ConUpdateFloatRatioU3Ek__BackingField_44; }
	inline Action_2_t3216573049 ** get_address_of_U3ConUpdateFloatRatioU3Ek__BackingField_44() { return &___U3ConUpdateFloatRatioU3Ek__BackingField_44; }
	inline void set_U3ConUpdateFloatRatioU3Ek__BackingField_44(Action_2_t3216573049 * value)
	{
		___U3ConUpdateFloatRatioU3Ek__BackingField_44 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConUpdateFloatRatioU3Ek__BackingField_44, value);
	}

	inline static int32_t get_offset_of_U3ConUpdateFloatObjectU3Ek__BackingField_45() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___U3ConUpdateFloatObjectU3Ek__BackingField_45)); }
	inline Action_2_t3829512412 * get_U3ConUpdateFloatObjectU3Ek__BackingField_45() const { return ___U3ConUpdateFloatObjectU3Ek__BackingField_45; }
	inline Action_2_t3829512412 ** get_address_of_U3ConUpdateFloatObjectU3Ek__BackingField_45() { return &___U3ConUpdateFloatObjectU3Ek__BackingField_45; }
	inline void set_U3ConUpdateFloatObjectU3Ek__BackingField_45(Action_2_t3829512412 * value)
	{
		___U3ConUpdateFloatObjectU3Ek__BackingField_45 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConUpdateFloatObjectU3Ek__BackingField_45, value);
	}

	inline static int32_t get_offset_of_U3ConUpdateVector2U3Ek__BackingField_46() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___U3ConUpdateVector2U3Ek__BackingField_46)); }
	inline Action_1_t2045506961 * get_U3ConUpdateVector2U3Ek__BackingField_46() const { return ___U3ConUpdateVector2U3Ek__BackingField_46; }
	inline Action_1_t2045506961 ** get_address_of_U3ConUpdateVector2U3Ek__BackingField_46() { return &___U3ConUpdateVector2U3Ek__BackingField_46; }
	inline void set_U3ConUpdateVector2U3Ek__BackingField_46(Action_1_t2045506961 * value)
	{
		___U3ConUpdateVector2U3Ek__BackingField_46 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConUpdateVector2U3Ek__BackingField_46, value);
	}

	inline static int32_t get_offset_of_U3ConUpdateVector3U3Ek__BackingField_47() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___U3ConUpdateVector3U3Ek__BackingField_47)); }
	inline Action_1_t2045506962 * get_U3ConUpdateVector3U3Ek__BackingField_47() const { return ___U3ConUpdateVector3U3Ek__BackingField_47; }
	inline Action_1_t2045506962 ** get_address_of_U3ConUpdateVector3U3Ek__BackingField_47() { return &___U3ConUpdateVector3U3Ek__BackingField_47; }
	inline void set_U3ConUpdateVector3U3Ek__BackingField_47(Action_1_t2045506962 * value)
	{
		___U3ConUpdateVector3U3Ek__BackingField_47 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConUpdateVector3U3Ek__BackingField_47, value);
	}

	inline static int32_t get_offset_of_U3ConUpdateVector3ObjectU3Ek__BackingField_48() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___U3ConUpdateVector3ObjectU3Ek__BackingField_48)); }
	inline Action_2_t129729484 * get_U3ConUpdateVector3ObjectU3Ek__BackingField_48() const { return ___U3ConUpdateVector3ObjectU3Ek__BackingField_48; }
	inline Action_2_t129729484 ** get_address_of_U3ConUpdateVector3ObjectU3Ek__BackingField_48() { return &___U3ConUpdateVector3ObjectU3Ek__BackingField_48; }
	inline void set_U3ConUpdateVector3ObjectU3Ek__BackingField_48(Action_2_t129729484 * value)
	{
		___U3ConUpdateVector3ObjectU3Ek__BackingField_48 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConUpdateVector3ObjectU3Ek__BackingField_48, value);
	}

	inline static int32_t get_offset_of_U3ConUpdateColorU3Ek__BackingField_49() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___U3ConUpdateColorU3Ek__BackingField_49)); }
	inline Action_1_t1822191457 * get_U3ConUpdateColorU3Ek__BackingField_49() const { return ___U3ConUpdateColorU3Ek__BackingField_49; }
	inline Action_1_t1822191457 ** get_address_of_U3ConUpdateColorU3Ek__BackingField_49() { return &___U3ConUpdateColorU3Ek__BackingField_49; }
	inline void set_U3ConUpdateColorU3Ek__BackingField_49(Action_1_t1822191457 * value)
	{
		___U3ConUpdateColorU3Ek__BackingField_49 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConUpdateColorU3Ek__BackingField_49, value);
	}

	inline static int32_t get_offset_of_U3ConUpdateColorObjectU3Ek__BackingField_50() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___U3ConUpdateColorObjectU3Ek__BackingField_50)); }
	inline Action_2_t3924735457 * get_U3ConUpdateColorObjectU3Ek__BackingField_50() const { return ___U3ConUpdateColorObjectU3Ek__BackingField_50; }
	inline Action_2_t3924735457 ** get_address_of_U3ConUpdateColorObjectU3Ek__BackingField_50() { return &___U3ConUpdateColorObjectU3Ek__BackingField_50; }
	inline void set_U3ConUpdateColorObjectU3Ek__BackingField_50(Action_2_t3924735457 * value)
	{
		___U3ConUpdateColorObjectU3Ek__BackingField_50 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConUpdateColorObjectU3Ek__BackingField_50, value);
	}

	inline static int32_t get_offset_of_U3ConCompleteU3Ek__BackingField_51() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___U3ConCompleteU3Ek__BackingField_51)); }
	inline Action_t3226471752 * get_U3ConCompleteU3Ek__BackingField_51() const { return ___U3ConCompleteU3Ek__BackingField_51; }
	inline Action_t3226471752 ** get_address_of_U3ConCompleteU3Ek__BackingField_51() { return &___U3ConCompleteU3Ek__BackingField_51; }
	inline void set_U3ConCompleteU3Ek__BackingField_51(Action_t3226471752 * value)
	{
		___U3ConCompleteU3Ek__BackingField_51 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConCompleteU3Ek__BackingField_51, value);
	}

	inline static int32_t get_offset_of_U3ConCompleteObjectU3Ek__BackingField_52() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___U3ConCompleteObjectU3Ek__BackingField_52)); }
	inline Action_1_t2491248677 * get_U3ConCompleteObjectU3Ek__BackingField_52() const { return ___U3ConCompleteObjectU3Ek__BackingField_52; }
	inline Action_1_t2491248677 ** get_address_of_U3ConCompleteObjectU3Ek__BackingField_52() { return &___U3ConCompleteObjectU3Ek__BackingField_52; }
	inline void set_U3ConCompleteObjectU3Ek__BackingField_52(Action_1_t2491248677 * value)
	{
		___U3ConCompleteObjectU3Ek__BackingField_52 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConCompleteObjectU3Ek__BackingField_52, value);
	}

	inline static int32_t get_offset_of_U3ConCompleteParamU3Ek__BackingField_53() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___U3ConCompleteParamU3Ek__BackingField_53)); }
	inline Il2CppObject * get_U3ConCompleteParamU3Ek__BackingField_53() const { return ___U3ConCompleteParamU3Ek__BackingField_53; }
	inline Il2CppObject ** get_address_of_U3ConCompleteParamU3Ek__BackingField_53() { return &___U3ConCompleteParamU3Ek__BackingField_53; }
	inline void set_U3ConCompleteParamU3Ek__BackingField_53(Il2CppObject * value)
	{
		___U3ConCompleteParamU3Ek__BackingField_53 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConCompleteParamU3Ek__BackingField_53, value);
	}

	inline static int32_t get_offset_of_U3ConUpdateParamU3Ek__BackingField_54() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___U3ConUpdateParamU3Ek__BackingField_54)); }
	inline Il2CppObject * get_U3ConUpdateParamU3Ek__BackingField_54() const { return ___U3ConUpdateParamU3Ek__BackingField_54; }
	inline Il2CppObject ** get_address_of_U3ConUpdateParamU3Ek__BackingField_54() { return &___U3ConUpdateParamU3Ek__BackingField_54; }
	inline void set_U3ConUpdateParamU3Ek__BackingField_54(Il2CppObject * value)
	{
		___U3ConUpdateParamU3Ek__BackingField_54 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConUpdateParamU3Ek__BackingField_54, value);
	}

	inline static int32_t get_offset_of_U3ConStartU3Ek__BackingField_55() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___U3ConStartU3Ek__BackingField_55)); }
	inline Action_t3226471752 * get_U3ConStartU3Ek__BackingField_55() const { return ___U3ConStartU3Ek__BackingField_55; }
	inline Action_t3226471752 ** get_address_of_U3ConStartU3Ek__BackingField_55() { return &___U3ConStartU3Ek__BackingField_55; }
	inline void set_U3ConStartU3Ek__BackingField_55(Action_t3226471752 * value)
	{
		___U3ConStartU3Ek__BackingField_55 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConStartU3Ek__BackingField_55, value);
	}

	inline static int32_t get_offset_of_U3CspriteRenU3Ek__BackingField_56() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253, ___U3CspriteRenU3Ek__BackingField_56)); }
	inline SpriteRenderer_t1209076198 * get_U3CspriteRenU3Ek__BackingField_56() const { return ___U3CspriteRenU3Ek__BackingField_56; }
	inline SpriteRenderer_t1209076198 ** get_address_of_U3CspriteRenU3Ek__BackingField_56() { return &___U3CspriteRenU3Ek__BackingField_56; }
	inline void set_U3CspriteRenU3Ek__BackingField_56(SpriteRenderer_t1209076198 * value)
	{
		___U3CspriteRenU3Ek__BackingField_56 = value;
		Il2CppCodeGenWriteBarrier(&___U3CspriteRenU3Ek__BackingField_56, value);
	}
};

struct LTDescrImpl_t279532253_StaticFields
{
public:
	// System.UInt32 LTDescrImpl::global_counter
	uint32_t ___global_counter_8;

public:
	inline static int32_t get_offset_of_global_counter_8() { return static_cast<int32_t>(offsetof(LTDescrImpl_t279532253_StaticFields, ___global_counter_8)); }
	inline uint32_t get_global_counter_8() const { return ___global_counter_8; }
	inline uint32_t* get_address_of_global_counter_8() { return &___global_counter_8; }
	inline void set_global_counter_8(uint32_t value)
	{
		___global_counter_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
