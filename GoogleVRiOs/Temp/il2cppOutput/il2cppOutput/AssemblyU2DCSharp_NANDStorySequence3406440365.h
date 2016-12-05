#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.Transform[]
struct TransformU5BU5D_t3792884695;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.AudioClip
struct AudioClip_t794140988;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048;
// VertexAnimation
struct VertexAnimation_t4191345184;
// VertexAnimation[]
struct VertexAnimationU5BU5D_t2829637985;
// DisplayTextUIController
struct DisplayTextUIController_t1271036863;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NANDStorySequence
struct  NANDStorySequence_t3406440365  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform NANDStorySequence::StructureParent
	Transform_t1659122786 * ___StructureParent_2;
	// UnityEngine.Transform NANDStorySequence::Step1CutPos
	Transform_t1659122786 * ___Step1CutPos_3;
	// UnityEngine.Transform NANDStorySequence::Step3CutPos
	Transform_t1659122786 * ___Step3CutPos_4;
	// UnityEngine.Transform NANDStorySequence::Step4ACutPos
	Transform_t1659122786 * ___Step4ACutPos_5;
	// UnityEngine.Transform NANDStorySequence::Step4BCutPos
	Transform_t1659122786 * ___Step4BCutPos_6;
	// UnityEngine.Transform NANDStorySequence::Step5CutPos
	Transform_t1659122786 * ___Step5CutPos_7;
	// UnityEngine.Transform NANDStorySequence::Step6CutPos
	Transform_t1659122786 * ___Step6CutPos_8;
	// UnityEngine.Transform[] NANDStorySequence::CameraFlyByPoints
	TransformU5BU5D_t3792884695* ___CameraFlyByPoints_9;
	// UnityEngine.GameObject NANDStorySequence::MainCamera
	GameObject_t3674682005 * ___MainCamera_10;
	// UnityEngine.GameObject NANDStorySequence::OneLayer
	GameObject_t3674682005 * ___OneLayer_11;
	// UnityEngine.GameObject NANDStorySequence::ChannelHoleCylinder
	GameObject_t3674682005 * ___ChannelHoleCylinder_12;
	// UnityEngine.GameObject NANDStorySequence::StoryModeUIGameobject
	GameObject_t3674682005 * ___StoryModeUIGameobject_13;
	// UnityEngine.GameObject NANDStorySequence::DisplayTextUI
	GameObject_t3674682005 * ___DisplayTextUI_14;
	// UnityEngine.Material NANDStorySequence::SiliconSubstrateMat
	Material_t3870600107 * ___SiliconSubstrateMat_15;
	// UnityEngine.Material NANDStorySequence::OxideMat
	Material_t3870600107 * ___OxideMat_16;
	// UnityEngine.Material NANDStorySequence::NitrideMat
	Material_t3870600107 * ___NitrideMat_17;
	// UnityEngine.Material NANDStorySequence::ChannelHoleHardMaskMat
	Material_t3870600107 * ___ChannelHoleHardMaskMat_18;
	// UnityEngine.Material NANDStorySequence::ChannelHolesMat
	Material_t3870600107 * ___ChannelHolesMat_19;
	// UnityEngine.Material NANDStorySequence::StaircaseHardMaskMat
	Material_t3870600107 * ___StaircaseHardMaskMat_20;
	// UnityEngine.Material NANDStorySequence::TrenchHardMaskMat
	Material_t3870600107 * ___TrenchHardMaskMat_21;
	// UnityEngine.Material NANDStorySequence::WMat
	Material_t3870600107 * ___WMat_22;
	// UnityEngine.Material NANDStorySequence::WTransMat
	Material_t3870600107 * ___WTransMat_23;
	// UnityEngine.Material NANDStorySequence::StaircaseContactMat
	Material_t3870600107 * ___StaircaseContactMat_24;
	// UnityEngine.Material NANDStorySequence::StaircaseContactHardMaskMat
	Material_t3870600107 * ___StaircaseContactHardMaskMat_25;
	// UnityEngine.Material NANDStorySequence::StaircaseContactChannelMat
	Material_t3870600107 * ___StaircaseContactChannelMat_26;
	// System.Int32 NANDStorySequence::NumberOfLayers
	int32_t ___NumberOfLayers_27;
	// System.Single NANDStorySequence::MasterWidth
	float ___MasterWidth_28;
	// System.Single NANDStorySequence::MasterDepth
	float ___MasterDepth_29;
	// System.Single NANDStorySequence::SiliconSubtrateThickness
	float ___SiliconSubtrateThickness_30;
	// System.Single NANDStorySequence::OxideThickness
	float ___OxideThickness_31;
	// System.Single NANDStorySequence::NitrideThickness
	float ___NitrideThickness_32;
	// System.Single NANDStorySequence::StairCaseStepWidth
	float ___StairCaseStepWidth_33;
	// System.Single NANDStorySequence::StairCaseHardMaskThickness
	float ___StairCaseHardMaskThickness_34;
	// System.Single NANDStorySequence::ChannelHoleCylinderDia
	float ___ChannelHoleCylinderDia_35;
	// System.Single NANDStorySequence::ChannelHoleHardMaskThickness
	float ___ChannelHoleHardMaskThickness_36;
	// System.Single NANDStorySequence::TrenchHardMaskThickness
	float ___TrenchHardMaskThickness_37;
	// System.Single NANDStorySequence::StairCaseContactThickness
	float ___StairCaseContactThickness_38;
	// System.Single NANDStorySequence::stairCaseContactHardMaskThickness
	float ___stairCaseContactHardMaskThickness_39;
	// System.Single NANDStorySequence::stairCaseChannelGap
	float ___stairCaseChannelGap_40;
	// System.Single NANDStorySequence::stairCaseChannelHoleDia
	float ___stairCaseChannelHoleDia_41;
	// System.Single NANDStorySequence::wFillThickness
	float ___wFillThickness_42;
	// UnityEngine.AudioClip NANDStorySequence::WelcomeClip
	AudioClip_t794140988 * ___WelcomeClip_43;
	// UnityEngine.AudioClip NANDStorySequence::Step1Clip
	AudioClip_t794140988 * ___Step1Clip_44;
	// UnityEngine.AudioClip NANDStorySequence::Step2Clip
	AudioClip_t794140988 * ___Step2Clip_45;
	// UnityEngine.AudioClip NANDStorySequence::Step3Clip
	AudioClip_t794140988 * ___Step3Clip_46;
	// UnityEngine.AudioClip NANDStorySequence::Step4Clip
	AudioClip_t794140988 * ___Step4Clip_47;
	// UnityEngine.AudioClip NANDStorySequence::Step5Clip
	AudioClip_t794140988 * ___Step5Clip_48;
	// UnityEngine.AudioClip NANDStorySequence::Step6Clip
	AudioClip_t794140988 * ___Step6Clip_49;
	// UnityEngine.AudioClip NANDStorySequence::ClosingClip
	AudioClip_t794140988 * ___ClosingClip_50;
	// UnityEngine.AudioSource NANDStorySequence::NANDAudio
	AudioSource_t1740077639 * ___NANDAudio_51;
	// UnityEngine.GameObject NANDStorySequence::_siliconSubstrate
	GameObject_t3674682005 * ____siliconSubstrate_52;
	// UnityEngine.GameObject[] NANDStorySequence::_nitrideLayers
	GameObjectU5BU5D_t2662109048* ____nitrideLayers_53;
	// UnityEngine.GameObject[] NANDStorySequence::_oxideLayers
	GameObjectU5BU5D_t2662109048* ____oxideLayers_54;
	// UnityEngine.GameObject NANDStorySequence::_channelHoleMask
	GameObject_t3674682005 * ____channelHoleMask_55;
	// UnityEngine.GameObject NANDStorySequence::_staircaseHardMask
	GameObject_t3674682005 * ____staircaseHardMask_56;
	// UnityEngine.GameObject NANDStorySequence::_channelHoleCylndr
	GameObject_t3674682005 * ____channelHoleCylndr_57;
	// UnityEngine.GameObject NANDStorySequence::_channelHoleClndrParent
	GameObject_t3674682005 * ____channelHoleClndrParent_58;
	// UnityEngine.GameObject NANDStorySequence::_trenchHardMask
	GameObject_t3674682005 * ____trenchHardMask_59;
	// UnityEngine.GameObject NANDStorySequence::_frontHalf
	GameObject_t3674682005 * ____frontHalf_60;
	// UnityEngine.GameObject NANDStorySequence::_middleHalf
	GameObject_t3674682005 * ____middleHalf_61;
	// UnityEngine.GameObject NANDStorySequence::_backHalf
	GameObject_t3674682005 * ____backHalf_62;
	// UnityEngine.GameObject[] NANDStorySequence::_rowCylndrs
	GameObjectU5BU5D_t2662109048* ____rowCylndrs_63;
	// UnityEngine.GameObject NANDStorySequence::_wTrench1_1
	GameObject_t3674682005 * ____wTrench1_1_64;
	// UnityEngine.GameObject NANDStorySequence::_wTrench1_2
	GameObject_t3674682005 * ____wTrench1_2_65;
	// UnityEngine.GameObject NANDStorySequence::_wTrench2_1
	GameObject_t3674682005 * ____wTrench2_1_66;
	// UnityEngine.GameObject NANDStorySequence::_wTrench2_2
	GameObject_t3674682005 * ____wTrench2_2_67;
	// UnityEngine.GameObject NANDStorySequence::_wTrench3
	GameObject_t3674682005 * ____wTrench3_68;
	// UnityEngine.GameObject NANDStorySequence::_staircaseContact
	GameObject_t3674682005 * ____staircaseContact_69;
	// UnityEngine.GameObject NANDStorySequence::_staircaseContactHardMask
	GameObject_t3674682005 * ____staircaseContactHardMask_70;
	// UnityEngine.GameObject[] NANDStorySequence::_staircaseContacts
	GameObjectU5BU5D_t2662109048* ____staircaseContacts_71;
	// UnityEngine.GameObject[] NANDStorySequence::_staircaseContactHardMasks
	GameObjectU5BU5D_t2662109048* ____staircaseContactHardMasks_72;
	// UnityEngine.GameObject NANDStorySequence::_wFill
	GameObject_t3674682005 * ____wFill_73;
	// UnityEngine.Vector3 NANDStorySequence::_animTopStartPos
	Vector3_t4282066566  ____animTopStartPos_74;
	// UnityEngine.Vector3 NANDStorySequence::_animBottomStartPos
	Vector3_t4282066566  ____animBottomStartPos_75;
	// UnityEngine.Vector3 NANDStorySequence::_mainCamStartPos
	Vector3_t4282066566  ____mainCamStartPos_76;
	// System.Single NANDStorySequence::_siSubAnimTime
	float ____siSubAnimTime_77;
	// System.Single NANDStorySequence::_oxNiAnimTime
	float ____oxNiAnimTime_78;
	// System.Single NANDStorySequence::_stairCaseHardMaskAnimTime
	float ____stairCaseHardMaskAnimTime_79;
	// System.Single NANDStorySequence::_stairFormAnimTime
	float ____stairFormAnimTime_80;
	// System.Single NANDStorySequence::_channelHoleHardMaskAnimTime
	float ____channelHoleHardMaskAnimTime_81;
	// System.Single NANDStorySequence::_channelHoleCylinderDepositAnimTime
	float ____channelHoleCylinderDepositAnimTime_82;
	// System.Single NANDStorySequence::_channelHoleEtchAnimTime
	float ____channelHoleEtchAnimTime_83;
	// System.Single NANDStorySequence::_trenchHardMaskAnimTime
	float ____trenchHardMaskAnimTime_84;
	// System.Single NANDStorySequence::_trenchMaskFadeTime
	float ____trenchMaskFadeTime_85;
	// System.Single NANDStorySequence::_trenchFormAnimTime
	float ____trenchFormAnimTime_86;
	// System.Single NANDStorySequence::_nitrideRemovalAnimTime
	float ____nitrideRemovalAnimTime_87;
	// System.Single NANDStorySequence::_tungRecessAnimTime
	float ____tungRecessAnimTime_88;
	// System.Single NANDStorySequence::_stairCaseContactDepositAnimTime
	float ____stairCaseContactDepositAnimTime_89;
	// System.Single NANDStorySequence::_stairCaseContactHardMaskDepositTime
	float ____stairCaseContactHardMaskDepositTime_90;
	// System.Single NANDStorySequence::_staircaseContactMaskEtchAnimTime
	float ____staircaseContactMaskEtchAnimTime_91;
	// System.Single NANDStorySequence::_staircaseContactEtchAnimTime
	float ____staircaseContactEtchAnimTime_92;
	// System.Single NANDStorySequence::_wRecessAnimTime
	float ____wRecessAnimTime_93;
	// System.Single NANDStorySequence::_wFillAnimTime
	float ____wFillAnimTime_94;
	// System.Single NANDStorySequence::_triNiDepositOnChannelAnimTime
	float ____triNiDepositOnChannelAnimTime_95;
	// System.Single NANDStorySequence::_flyByTime
	float ____flyByTime_96;
	// System.Single NANDStorySequence::_targetY
	float ____targetY_97;
	// System.Single NANDStorySequence::_staircaseHardMaskYoffset
	float ____staircaseHardMaskYoffset_98;
	// VertexAnimation NANDStorySequence::_staircaseHardMaskVertAnimComp
	VertexAnimation_t4191345184 * ____staircaseHardMaskVertAnimComp_99;
	// VertexAnimation[] NANDStorySequence::_oxideVertexComp
	VertexAnimationU5BU5D_t2829637985* ____oxideVertexComp_100;
	// VertexAnimation[] NANDStorySequence::_nitrideVertexComp
	VertexAnimationU5BU5D_t2829637985* ____nitrideVertexComp_101;
	// DisplayTextUIController NANDStorySequence::_displayTextUIController
	DisplayTextUIController_t1271036863 * ____displayTextUIController_102;
	// System.Single NANDStorySequence::delay
	float ___delay_103;
	// System.Single NANDStorySequence::scaleOffset
	float ___scaleOffset_104;
	// System.Single NANDStorySequence::frontOffset
	float ___frontOffset_105;
	// System.Single NANDStorySequence::middleOffset
	float ___middleOffset_106;
	// System.Single NANDStorySequence::toonShaderOutlineWidth
	float ___toonShaderOutlineWidth_107;
	// System.Single NANDStorySequence::trenchDepth
	float ___trenchDepth_108;

public:
	inline static int32_t get_offset_of_StructureParent_2() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___StructureParent_2)); }
	inline Transform_t1659122786 * get_StructureParent_2() const { return ___StructureParent_2; }
	inline Transform_t1659122786 ** get_address_of_StructureParent_2() { return &___StructureParent_2; }
	inline void set_StructureParent_2(Transform_t1659122786 * value)
	{
		___StructureParent_2 = value;
		Il2CppCodeGenWriteBarrier(&___StructureParent_2, value);
	}

	inline static int32_t get_offset_of_Step1CutPos_3() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___Step1CutPos_3)); }
	inline Transform_t1659122786 * get_Step1CutPos_3() const { return ___Step1CutPos_3; }
	inline Transform_t1659122786 ** get_address_of_Step1CutPos_3() { return &___Step1CutPos_3; }
	inline void set_Step1CutPos_3(Transform_t1659122786 * value)
	{
		___Step1CutPos_3 = value;
		Il2CppCodeGenWriteBarrier(&___Step1CutPos_3, value);
	}

	inline static int32_t get_offset_of_Step3CutPos_4() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___Step3CutPos_4)); }
	inline Transform_t1659122786 * get_Step3CutPos_4() const { return ___Step3CutPos_4; }
	inline Transform_t1659122786 ** get_address_of_Step3CutPos_4() { return &___Step3CutPos_4; }
	inline void set_Step3CutPos_4(Transform_t1659122786 * value)
	{
		___Step3CutPos_4 = value;
		Il2CppCodeGenWriteBarrier(&___Step3CutPos_4, value);
	}

	inline static int32_t get_offset_of_Step4ACutPos_5() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___Step4ACutPos_5)); }
	inline Transform_t1659122786 * get_Step4ACutPos_5() const { return ___Step4ACutPos_5; }
	inline Transform_t1659122786 ** get_address_of_Step4ACutPos_5() { return &___Step4ACutPos_5; }
	inline void set_Step4ACutPos_5(Transform_t1659122786 * value)
	{
		___Step4ACutPos_5 = value;
		Il2CppCodeGenWriteBarrier(&___Step4ACutPos_5, value);
	}

	inline static int32_t get_offset_of_Step4BCutPos_6() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___Step4BCutPos_6)); }
	inline Transform_t1659122786 * get_Step4BCutPos_6() const { return ___Step4BCutPos_6; }
	inline Transform_t1659122786 ** get_address_of_Step4BCutPos_6() { return &___Step4BCutPos_6; }
	inline void set_Step4BCutPos_6(Transform_t1659122786 * value)
	{
		___Step4BCutPos_6 = value;
		Il2CppCodeGenWriteBarrier(&___Step4BCutPos_6, value);
	}

	inline static int32_t get_offset_of_Step5CutPos_7() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___Step5CutPos_7)); }
	inline Transform_t1659122786 * get_Step5CutPos_7() const { return ___Step5CutPos_7; }
	inline Transform_t1659122786 ** get_address_of_Step5CutPos_7() { return &___Step5CutPos_7; }
	inline void set_Step5CutPos_7(Transform_t1659122786 * value)
	{
		___Step5CutPos_7 = value;
		Il2CppCodeGenWriteBarrier(&___Step5CutPos_7, value);
	}

	inline static int32_t get_offset_of_Step6CutPos_8() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___Step6CutPos_8)); }
	inline Transform_t1659122786 * get_Step6CutPos_8() const { return ___Step6CutPos_8; }
	inline Transform_t1659122786 ** get_address_of_Step6CutPos_8() { return &___Step6CutPos_8; }
	inline void set_Step6CutPos_8(Transform_t1659122786 * value)
	{
		___Step6CutPos_8 = value;
		Il2CppCodeGenWriteBarrier(&___Step6CutPos_8, value);
	}

	inline static int32_t get_offset_of_CameraFlyByPoints_9() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___CameraFlyByPoints_9)); }
	inline TransformU5BU5D_t3792884695* get_CameraFlyByPoints_9() const { return ___CameraFlyByPoints_9; }
	inline TransformU5BU5D_t3792884695** get_address_of_CameraFlyByPoints_9() { return &___CameraFlyByPoints_9; }
	inline void set_CameraFlyByPoints_9(TransformU5BU5D_t3792884695* value)
	{
		___CameraFlyByPoints_9 = value;
		Il2CppCodeGenWriteBarrier(&___CameraFlyByPoints_9, value);
	}

	inline static int32_t get_offset_of_MainCamera_10() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___MainCamera_10)); }
	inline GameObject_t3674682005 * get_MainCamera_10() const { return ___MainCamera_10; }
	inline GameObject_t3674682005 ** get_address_of_MainCamera_10() { return &___MainCamera_10; }
	inline void set_MainCamera_10(GameObject_t3674682005 * value)
	{
		___MainCamera_10 = value;
		Il2CppCodeGenWriteBarrier(&___MainCamera_10, value);
	}

	inline static int32_t get_offset_of_OneLayer_11() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___OneLayer_11)); }
	inline GameObject_t3674682005 * get_OneLayer_11() const { return ___OneLayer_11; }
	inline GameObject_t3674682005 ** get_address_of_OneLayer_11() { return &___OneLayer_11; }
	inline void set_OneLayer_11(GameObject_t3674682005 * value)
	{
		___OneLayer_11 = value;
		Il2CppCodeGenWriteBarrier(&___OneLayer_11, value);
	}

	inline static int32_t get_offset_of_ChannelHoleCylinder_12() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___ChannelHoleCylinder_12)); }
	inline GameObject_t3674682005 * get_ChannelHoleCylinder_12() const { return ___ChannelHoleCylinder_12; }
	inline GameObject_t3674682005 ** get_address_of_ChannelHoleCylinder_12() { return &___ChannelHoleCylinder_12; }
	inline void set_ChannelHoleCylinder_12(GameObject_t3674682005 * value)
	{
		___ChannelHoleCylinder_12 = value;
		Il2CppCodeGenWriteBarrier(&___ChannelHoleCylinder_12, value);
	}

	inline static int32_t get_offset_of_StoryModeUIGameobject_13() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___StoryModeUIGameobject_13)); }
	inline GameObject_t3674682005 * get_StoryModeUIGameobject_13() const { return ___StoryModeUIGameobject_13; }
	inline GameObject_t3674682005 ** get_address_of_StoryModeUIGameobject_13() { return &___StoryModeUIGameobject_13; }
	inline void set_StoryModeUIGameobject_13(GameObject_t3674682005 * value)
	{
		___StoryModeUIGameobject_13 = value;
		Il2CppCodeGenWriteBarrier(&___StoryModeUIGameobject_13, value);
	}

	inline static int32_t get_offset_of_DisplayTextUI_14() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___DisplayTextUI_14)); }
	inline GameObject_t3674682005 * get_DisplayTextUI_14() const { return ___DisplayTextUI_14; }
	inline GameObject_t3674682005 ** get_address_of_DisplayTextUI_14() { return &___DisplayTextUI_14; }
	inline void set_DisplayTextUI_14(GameObject_t3674682005 * value)
	{
		___DisplayTextUI_14 = value;
		Il2CppCodeGenWriteBarrier(&___DisplayTextUI_14, value);
	}

	inline static int32_t get_offset_of_SiliconSubstrateMat_15() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___SiliconSubstrateMat_15)); }
	inline Material_t3870600107 * get_SiliconSubstrateMat_15() const { return ___SiliconSubstrateMat_15; }
	inline Material_t3870600107 ** get_address_of_SiliconSubstrateMat_15() { return &___SiliconSubstrateMat_15; }
	inline void set_SiliconSubstrateMat_15(Material_t3870600107 * value)
	{
		___SiliconSubstrateMat_15 = value;
		Il2CppCodeGenWriteBarrier(&___SiliconSubstrateMat_15, value);
	}

	inline static int32_t get_offset_of_OxideMat_16() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___OxideMat_16)); }
	inline Material_t3870600107 * get_OxideMat_16() const { return ___OxideMat_16; }
	inline Material_t3870600107 ** get_address_of_OxideMat_16() { return &___OxideMat_16; }
	inline void set_OxideMat_16(Material_t3870600107 * value)
	{
		___OxideMat_16 = value;
		Il2CppCodeGenWriteBarrier(&___OxideMat_16, value);
	}

	inline static int32_t get_offset_of_NitrideMat_17() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___NitrideMat_17)); }
	inline Material_t3870600107 * get_NitrideMat_17() const { return ___NitrideMat_17; }
	inline Material_t3870600107 ** get_address_of_NitrideMat_17() { return &___NitrideMat_17; }
	inline void set_NitrideMat_17(Material_t3870600107 * value)
	{
		___NitrideMat_17 = value;
		Il2CppCodeGenWriteBarrier(&___NitrideMat_17, value);
	}

	inline static int32_t get_offset_of_ChannelHoleHardMaskMat_18() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___ChannelHoleHardMaskMat_18)); }
	inline Material_t3870600107 * get_ChannelHoleHardMaskMat_18() const { return ___ChannelHoleHardMaskMat_18; }
	inline Material_t3870600107 ** get_address_of_ChannelHoleHardMaskMat_18() { return &___ChannelHoleHardMaskMat_18; }
	inline void set_ChannelHoleHardMaskMat_18(Material_t3870600107 * value)
	{
		___ChannelHoleHardMaskMat_18 = value;
		Il2CppCodeGenWriteBarrier(&___ChannelHoleHardMaskMat_18, value);
	}

	inline static int32_t get_offset_of_ChannelHolesMat_19() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___ChannelHolesMat_19)); }
	inline Material_t3870600107 * get_ChannelHolesMat_19() const { return ___ChannelHolesMat_19; }
	inline Material_t3870600107 ** get_address_of_ChannelHolesMat_19() { return &___ChannelHolesMat_19; }
	inline void set_ChannelHolesMat_19(Material_t3870600107 * value)
	{
		___ChannelHolesMat_19 = value;
		Il2CppCodeGenWriteBarrier(&___ChannelHolesMat_19, value);
	}

	inline static int32_t get_offset_of_StaircaseHardMaskMat_20() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___StaircaseHardMaskMat_20)); }
	inline Material_t3870600107 * get_StaircaseHardMaskMat_20() const { return ___StaircaseHardMaskMat_20; }
	inline Material_t3870600107 ** get_address_of_StaircaseHardMaskMat_20() { return &___StaircaseHardMaskMat_20; }
	inline void set_StaircaseHardMaskMat_20(Material_t3870600107 * value)
	{
		___StaircaseHardMaskMat_20 = value;
		Il2CppCodeGenWriteBarrier(&___StaircaseHardMaskMat_20, value);
	}

	inline static int32_t get_offset_of_TrenchHardMaskMat_21() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___TrenchHardMaskMat_21)); }
	inline Material_t3870600107 * get_TrenchHardMaskMat_21() const { return ___TrenchHardMaskMat_21; }
	inline Material_t3870600107 ** get_address_of_TrenchHardMaskMat_21() { return &___TrenchHardMaskMat_21; }
	inline void set_TrenchHardMaskMat_21(Material_t3870600107 * value)
	{
		___TrenchHardMaskMat_21 = value;
		Il2CppCodeGenWriteBarrier(&___TrenchHardMaskMat_21, value);
	}

	inline static int32_t get_offset_of_WMat_22() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___WMat_22)); }
	inline Material_t3870600107 * get_WMat_22() const { return ___WMat_22; }
	inline Material_t3870600107 ** get_address_of_WMat_22() { return &___WMat_22; }
	inline void set_WMat_22(Material_t3870600107 * value)
	{
		___WMat_22 = value;
		Il2CppCodeGenWriteBarrier(&___WMat_22, value);
	}

	inline static int32_t get_offset_of_WTransMat_23() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___WTransMat_23)); }
	inline Material_t3870600107 * get_WTransMat_23() const { return ___WTransMat_23; }
	inline Material_t3870600107 ** get_address_of_WTransMat_23() { return &___WTransMat_23; }
	inline void set_WTransMat_23(Material_t3870600107 * value)
	{
		___WTransMat_23 = value;
		Il2CppCodeGenWriteBarrier(&___WTransMat_23, value);
	}

	inline static int32_t get_offset_of_StaircaseContactMat_24() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___StaircaseContactMat_24)); }
	inline Material_t3870600107 * get_StaircaseContactMat_24() const { return ___StaircaseContactMat_24; }
	inline Material_t3870600107 ** get_address_of_StaircaseContactMat_24() { return &___StaircaseContactMat_24; }
	inline void set_StaircaseContactMat_24(Material_t3870600107 * value)
	{
		___StaircaseContactMat_24 = value;
		Il2CppCodeGenWriteBarrier(&___StaircaseContactMat_24, value);
	}

	inline static int32_t get_offset_of_StaircaseContactHardMaskMat_25() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___StaircaseContactHardMaskMat_25)); }
	inline Material_t3870600107 * get_StaircaseContactHardMaskMat_25() const { return ___StaircaseContactHardMaskMat_25; }
	inline Material_t3870600107 ** get_address_of_StaircaseContactHardMaskMat_25() { return &___StaircaseContactHardMaskMat_25; }
	inline void set_StaircaseContactHardMaskMat_25(Material_t3870600107 * value)
	{
		___StaircaseContactHardMaskMat_25 = value;
		Il2CppCodeGenWriteBarrier(&___StaircaseContactHardMaskMat_25, value);
	}

	inline static int32_t get_offset_of_StaircaseContactChannelMat_26() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___StaircaseContactChannelMat_26)); }
	inline Material_t3870600107 * get_StaircaseContactChannelMat_26() const { return ___StaircaseContactChannelMat_26; }
	inline Material_t3870600107 ** get_address_of_StaircaseContactChannelMat_26() { return &___StaircaseContactChannelMat_26; }
	inline void set_StaircaseContactChannelMat_26(Material_t3870600107 * value)
	{
		___StaircaseContactChannelMat_26 = value;
		Il2CppCodeGenWriteBarrier(&___StaircaseContactChannelMat_26, value);
	}

	inline static int32_t get_offset_of_NumberOfLayers_27() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___NumberOfLayers_27)); }
	inline int32_t get_NumberOfLayers_27() const { return ___NumberOfLayers_27; }
	inline int32_t* get_address_of_NumberOfLayers_27() { return &___NumberOfLayers_27; }
	inline void set_NumberOfLayers_27(int32_t value)
	{
		___NumberOfLayers_27 = value;
	}

	inline static int32_t get_offset_of_MasterWidth_28() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___MasterWidth_28)); }
	inline float get_MasterWidth_28() const { return ___MasterWidth_28; }
	inline float* get_address_of_MasterWidth_28() { return &___MasterWidth_28; }
	inline void set_MasterWidth_28(float value)
	{
		___MasterWidth_28 = value;
	}

	inline static int32_t get_offset_of_MasterDepth_29() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___MasterDepth_29)); }
	inline float get_MasterDepth_29() const { return ___MasterDepth_29; }
	inline float* get_address_of_MasterDepth_29() { return &___MasterDepth_29; }
	inline void set_MasterDepth_29(float value)
	{
		___MasterDepth_29 = value;
	}

	inline static int32_t get_offset_of_SiliconSubtrateThickness_30() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___SiliconSubtrateThickness_30)); }
	inline float get_SiliconSubtrateThickness_30() const { return ___SiliconSubtrateThickness_30; }
	inline float* get_address_of_SiliconSubtrateThickness_30() { return &___SiliconSubtrateThickness_30; }
	inline void set_SiliconSubtrateThickness_30(float value)
	{
		___SiliconSubtrateThickness_30 = value;
	}

	inline static int32_t get_offset_of_OxideThickness_31() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___OxideThickness_31)); }
	inline float get_OxideThickness_31() const { return ___OxideThickness_31; }
	inline float* get_address_of_OxideThickness_31() { return &___OxideThickness_31; }
	inline void set_OxideThickness_31(float value)
	{
		___OxideThickness_31 = value;
	}

	inline static int32_t get_offset_of_NitrideThickness_32() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___NitrideThickness_32)); }
	inline float get_NitrideThickness_32() const { return ___NitrideThickness_32; }
	inline float* get_address_of_NitrideThickness_32() { return &___NitrideThickness_32; }
	inline void set_NitrideThickness_32(float value)
	{
		___NitrideThickness_32 = value;
	}

	inline static int32_t get_offset_of_StairCaseStepWidth_33() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___StairCaseStepWidth_33)); }
	inline float get_StairCaseStepWidth_33() const { return ___StairCaseStepWidth_33; }
	inline float* get_address_of_StairCaseStepWidth_33() { return &___StairCaseStepWidth_33; }
	inline void set_StairCaseStepWidth_33(float value)
	{
		___StairCaseStepWidth_33 = value;
	}

	inline static int32_t get_offset_of_StairCaseHardMaskThickness_34() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___StairCaseHardMaskThickness_34)); }
	inline float get_StairCaseHardMaskThickness_34() const { return ___StairCaseHardMaskThickness_34; }
	inline float* get_address_of_StairCaseHardMaskThickness_34() { return &___StairCaseHardMaskThickness_34; }
	inline void set_StairCaseHardMaskThickness_34(float value)
	{
		___StairCaseHardMaskThickness_34 = value;
	}

	inline static int32_t get_offset_of_ChannelHoleCylinderDia_35() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___ChannelHoleCylinderDia_35)); }
	inline float get_ChannelHoleCylinderDia_35() const { return ___ChannelHoleCylinderDia_35; }
	inline float* get_address_of_ChannelHoleCylinderDia_35() { return &___ChannelHoleCylinderDia_35; }
	inline void set_ChannelHoleCylinderDia_35(float value)
	{
		___ChannelHoleCylinderDia_35 = value;
	}

	inline static int32_t get_offset_of_ChannelHoleHardMaskThickness_36() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___ChannelHoleHardMaskThickness_36)); }
	inline float get_ChannelHoleHardMaskThickness_36() const { return ___ChannelHoleHardMaskThickness_36; }
	inline float* get_address_of_ChannelHoleHardMaskThickness_36() { return &___ChannelHoleHardMaskThickness_36; }
	inline void set_ChannelHoleHardMaskThickness_36(float value)
	{
		___ChannelHoleHardMaskThickness_36 = value;
	}

	inline static int32_t get_offset_of_TrenchHardMaskThickness_37() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___TrenchHardMaskThickness_37)); }
	inline float get_TrenchHardMaskThickness_37() const { return ___TrenchHardMaskThickness_37; }
	inline float* get_address_of_TrenchHardMaskThickness_37() { return &___TrenchHardMaskThickness_37; }
	inline void set_TrenchHardMaskThickness_37(float value)
	{
		___TrenchHardMaskThickness_37 = value;
	}

	inline static int32_t get_offset_of_StairCaseContactThickness_38() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___StairCaseContactThickness_38)); }
	inline float get_StairCaseContactThickness_38() const { return ___StairCaseContactThickness_38; }
	inline float* get_address_of_StairCaseContactThickness_38() { return &___StairCaseContactThickness_38; }
	inline void set_StairCaseContactThickness_38(float value)
	{
		___StairCaseContactThickness_38 = value;
	}

	inline static int32_t get_offset_of_stairCaseContactHardMaskThickness_39() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___stairCaseContactHardMaskThickness_39)); }
	inline float get_stairCaseContactHardMaskThickness_39() const { return ___stairCaseContactHardMaskThickness_39; }
	inline float* get_address_of_stairCaseContactHardMaskThickness_39() { return &___stairCaseContactHardMaskThickness_39; }
	inline void set_stairCaseContactHardMaskThickness_39(float value)
	{
		___stairCaseContactHardMaskThickness_39 = value;
	}

	inline static int32_t get_offset_of_stairCaseChannelGap_40() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___stairCaseChannelGap_40)); }
	inline float get_stairCaseChannelGap_40() const { return ___stairCaseChannelGap_40; }
	inline float* get_address_of_stairCaseChannelGap_40() { return &___stairCaseChannelGap_40; }
	inline void set_stairCaseChannelGap_40(float value)
	{
		___stairCaseChannelGap_40 = value;
	}

	inline static int32_t get_offset_of_stairCaseChannelHoleDia_41() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___stairCaseChannelHoleDia_41)); }
	inline float get_stairCaseChannelHoleDia_41() const { return ___stairCaseChannelHoleDia_41; }
	inline float* get_address_of_stairCaseChannelHoleDia_41() { return &___stairCaseChannelHoleDia_41; }
	inline void set_stairCaseChannelHoleDia_41(float value)
	{
		___stairCaseChannelHoleDia_41 = value;
	}

	inline static int32_t get_offset_of_wFillThickness_42() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___wFillThickness_42)); }
	inline float get_wFillThickness_42() const { return ___wFillThickness_42; }
	inline float* get_address_of_wFillThickness_42() { return &___wFillThickness_42; }
	inline void set_wFillThickness_42(float value)
	{
		___wFillThickness_42 = value;
	}

	inline static int32_t get_offset_of_WelcomeClip_43() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___WelcomeClip_43)); }
	inline AudioClip_t794140988 * get_WelcomeClip_43() const { return ___WelcomeClip_43; }
	inline AudioClip_t794140988 ** get_address_of_WelcomeClip_43() { return &___WelcomeClip_43; }
	inline void set_WelcomeClip_43(AudioClip_t794140988 * value)
	{
		___WelcomeClip_43 = value;
		Il2CppCodeGenWriteBarrier(&___WelcomeClip_43, value);
	}

	inline static int32_t get_offset_of_Step1Clip_44() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___Step1Clip_44)); }
	inline AudioClip_t794140988 * get_Step1Clip_44() const { return ___Step1Clip_44; }
	inline AudioClip_t794140988 ** get_address_of_Step1Clip_44() { return &___Step1Clip_44; }
	inline void set_Step1Clip_44(AudioClip_t794140988 * value)
	{
		___Step1Clip_44 = value;
		Il2CppCodeGenWriteBarrier(&___Step1Clip_44, value);
	}

	inline static int32_t get_offset_of_Step2Clip_45() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___Step2Clip_45)); }
	inline AudioClip_t794140988 * get_Step2Clip_45() const { return ___Step2Clip_45; }
	inline AudioClip_t794140988 ** get_address_of_Step2Clip_45() { return &___Step2Clip_45; }
	inline void set_Step2Clip_45(AudioClip_t794140988 * value)
	{
		___Step2Clip_45 = value;
		Il2CppCodeGenWriteBarrier(&___Step2Clip_45, value);
	}

	inline static int32_t get_offset_of_Step3Clip_46() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___Step3Clip_46)); }
	inline AudioClip_t794140988 * get_Step3Clip_46() const { return ___Step3Clip_46; }
	inline AudioClip_t794140988 ** get_address_of_Step3Clip_46() { return &___Step3Clip_46; }
	inline void set_Step3Clip_46(AudioClip_t794140988 * value)
	{
		___Step3Clip_46 = value;
		Il2CppCodeGenWriteBarrier(&___Step3Clip_46, value);
	}

	inline static int32_t get_offset_of_Step4Clip_47() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___Step4Clip_47)); }
	inline AudioClip_t794140988 * get_Step4Clip_47() const { return ___Step4Clip_47; }
	inline AudioClip_t794140988 ** get_address_of_Step4Clip_47() { return &___Step4Clip_47; }
	inline void set_Step4Clip_47(AudioClip_t794140988 * value)
	{
		___Step4Clip_47 = value;
		Il2CppCodeGenWriteBarrier(&___Step4Clip_47, value);
	}

	inline static int32_t get_offset_of_Step5Clip_48() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___Step5Clip_48)); }
	inline AudioClip_t794140988 * get_Step5Clip_48() const { return ___Step5Clip_48; }
	inline AudioClip_t794140988 ** get_address_of_Step5Clip_48() { return &___Step5Clip_48; }
	inline void set_Step5Clip_48(AudioClip_t794140988 * value)
	{
		___Step5Clip_48 = value;
		Il2CppCodeGenWriteBarrier(&___Step5Clip_48, value);
	}

	inline static int32_t get_offset_of_Step6Clip_49() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___Step6Clip_49)); }
	inline AudioClip_t794140988 * get_Step6Clip_49() const { return ___Step6Clip_49; }
	inline AudioClip_t794140988 ** get_address_of_Step6Clip_49() { return &___Step6Clip_49; }
	inline void set_Step6Clip_49(AudioClip_t794140988 * value)
	{
		___Step6Clip_49 = value;
		Il2CppCodeGenWriteBarrier(&___Step6Clip_49, value);
	}

	inline static int32_t get_offset_of_ClosingClip_50() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___ClosingClip_50)); }
	inline AudioClip_t794140988 * get_ClosingClip_50() const { return ___ClosingClip_50; }
	inline AudioClip_t794140988 ** get_address_of_ClosingClip_50() { return &___ClosingClip_50; }
	inline void set_ClosingClip_50(AudioClip_t794140988 * value)
	{
		___ClosingClip_50 = value;
		Il2CppCodeGenWriteBarrier(&___ClosingClip_50, value);
	}

	inline static int32_t get_offset_of_NANDAudio_51() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___NANDAudio_51)); }
	inline AudioSource_t1740077639 * get_NANDAudio_51() const { return ___NANDAudio_51; }
	inline AudioSource_t1740077639 ** get_address_of_NANDAudio_51() { return &___NANDAudio_51; }
	inline void set_NANDAudio_51(AudioSource_t1740077639 * value)
	{
		___NANDAudio_51 = value;
		Il2CppCodeGenWriteBarrier(&___NANDAudio_51, value);
	}

	inline static int32_t get_offset_of__siliconSubstrate_52() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____siliconSubstrate_52)); }
	inline GameObject_t3674682005 * get__siliconSubstrate_52() const { return ____siliconSubstrate_52; }
	inline GameObject_t3674682005 ** get_address_of__siliconSubstrate_52() { return &____siliconSubstrate_52; }
	inline void set__siliconSubstrate_52(GameObject_t3674682005 * value)
	{
		____siliconSubstrate_52 = value;
		Il2CppCodeGenWriteBarrier(&____siliconSubstrate_52, value);
	}

	inline static int32_t get_offset_of__nitrideLayers_53() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____nitrideLayers_53)); }
	inline GameObjectU5BU5D_t2662109048* get__nitrideLayers_53() const { return ____nitrideLayers_53; }
	inline GameObjectU5BU5D_t2662109048** get_address_of__nitrideLayers_53() { return &____nitrideLayers_53; }
	inline void set__nitrideLayers_53(GameObjectU5BU5D_t2662109048* value)
	{
		____nitrideLayers_53 = value;
		Il2CppCodeGenWriteBarrier(&____nitrideLayers_53, value);
	}

	inline static int32_t get_offset_of__oxideLayers_54() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____oxideLayers_54)); }
	inline GameObjectU5BU5D_t2662109048* get__oxideLayers_54() const { return ____oxideLayers_54; }
	inline GameObjectU5BU5D_t2662109048** get_address_of__oxideLayers_54() { return &____oxideLayers_54; }
	inline void set__oxideLayers_54(GameObjectU5BU5D_t2662109048* value)
	{
		____oxideLayers_54 = value;
		Il2CppCodeGenWriteBarrier(&____oxideLayers_54, value);
	}

	inline static int32_t get_offset_of__channelHoleMask_55() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____channelHoleMask_55)); }
	inline GameObject_t3674682005 * get__channelHoleMask_55() const { return ____channelHoleMask_55; }
	inline GameObject_t3674682005 ** get_address_of__channelHoleMask_55() { return &____channelHoleMask_55; }
	inline void set__channelHoleMask_55(GameObject_t3674682005 * value)
	{
		____channelHoleMask_55 = value;
		Il2CppCodeGenWriteBarrier(&____channelHoleMask_55, value);
	}

	inline static int32_t get_offset_of__staircaseHardMask_56() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____staircaseHardMask_56)); }
	inline GameObject_t3674682005 * get__staircaseHardMask_56() const { return ____staircaseHardMask_56; }
	inline GameObject_t3674682005 ** get_address_of__staircaseHardMask_56() { return &____staircaseHardMask_56; }
	inline void set__staircaseHardMask_56(GameObject_t3674682005 * value)
	{
		____staircaseHardMask_56 = value;
		Il2CppCodeGenWriteBarrier(&____staircaseHardMask_56, value);
	}

	inline static int32_t get_offset_of__channelHoleCylndr_57() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____channelHoleCylndr_57)); }
	inline GameObject_t3674682005 * get__channelHoleCylndr_57() const { return ____channelHoleCylndr_57; }
	inline GameObject_t3674682005 ** get_address_of__channelHoleCylndr_57() { return &____channelHoleCylndr_57; }
	inline void set__channelHoleCylndr_57(GameObject_t3674682005 * value)
	{
		____channelHoleCylndr_57 = value;
		Il2CppCodeGenWriteBarrier(&____channelHoleCylndr_57, value);
	}

	inline static int32_t get_offset_of__channelHoleClndrParent_58() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____channelHoleClndrParent_58)); }
	inline GameObject_t3674682005 * get__channelHoleClndrParent_58() const { return ____channelHoleClndrParent_58; }
	inline GameObject_t3674682005 ** get_address_of__channelHoleClndrParent_58() { return &____channelHoleClndrParent_58; }
	inline void set__channelHoleClndrParent_58(GameObject_t3674682005 * value)
	{
		____channelHoleClndrParent_58 = value;
		Il2CppCodeGenWriteBarrier(&____channelHoleClndrParent_58, value);
	}

	inline static int32_t get_offset_of__trenchHardMask_59() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____trenchHardMask_59)); }
	inline GameObject_t3674682005 * get__trenchHardMask_59() const { return ____trenchHardMask_59; }
	inline GameObject_t3674682005 ** get_address_of__trenchHardMask_59() { return &____trenchHardMask_59; }
	inline void set__trenchHardMask_59(GameObject_t3674682005 * value)
	{
		____trenchHardMask_59 = value;
		Il2CppCodeGenWriteBarrier(&____trenchHardMask_59, value);
	}

	inline static int32_t get_offset_of__frontHalf_60() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____frontHalf_60)); }
	inline GameObject_t3674682005 * get__frontHalf_60() const { return ____frontHalf_60; }
	inline GameObject_t3674682005 ** get_address_of__frontHalf_60() { return &____frontHalf_60; }
	inline void set__frontHalf_60(GameObject_t3674682005 * value)
	{
		____frontHalf_60 = value;
		Il2CppCodeGenWriteBarrier(&____frontHalf_60, value);
	}

	inline static int32_t get_offset_of__middleHalf_61() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____middleHalf_61)); }
	inline GameObject_t3674682005 * get__middleHalf_61() const { return ____middleHalf_61; }
	inline GameObject_t3674682005 ** get_address_of__middleHalf_61() { return &____middleHalf_61; }
	inline void set__middleHalf_61(GameObject_t3674682005 * value)
	{
		____middleHalf_61 = value;
		Il2CppCodeGenWriteBarrier(&____middleHalf_61, value);
	}

	inline static int32_t get_offset_of__backHalf_62() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____backHalf_62)); }
	inline GameObject_t3674682005 * get__backHalf_62() const { return ____backHalf_62; }
	inline GameObject_t3674682005 ** get_address_of__backHalf_62() { return &____backHalf_62; }
	inline void set__backHalf_62(GameObject_t3674682005 * value)
	{
		____backHalf_62 = value;
		Il2CppCodeGenWriteBarrier(&____backHalf_62, value);
	}

	inline static int32_t get_offset_of__rowCylndrs_63() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____rowCylndrs_63)); }
	inline GameObjectU5BU5D_t2662109048* get__rowCylndrs_63() const { return ____rowCylndrs_63; }
	inline GameObjectU5BU5D_t2662109048** get_address_of__rowCylndrs_63() { return &____rowCylndrs_63; }
	inline void set__rowCylndrs_63(GameObjectU5BU5D_t2662109048* value)
	{
		____rowCylndrs_63 = value;
		Il2CppCodeGenWriteBarrier(&____rowCylndrs_63, value);
	}

	inline static int32_t get_offset_of__wTrench1_1_64() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____wTrench1_1_64)); }
	inline GameObject_t3674682005 * get__wTrench1_1_64() const { return ____wTrench1_1_64; }
	inline GameObject_t3674682005 ** get_address_of__wTrench1_1_64() { return &____wTrench1_1_64; }
	inline void set__wTrench1_1_64(GameObject_t3674682005 * value)
	{
		____wTrench1_1_64 = value;
		Il2CppCodeGenWriteBarrier(&____wTrench1_1_64, value);
	}

	inline static int32_t get_offset_of__wTrench1_2_65() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____wTrench1_2_65)); }
	inline GameObject_t3674682005 * get__wTrench1_2_65() const { return ____wTrench1_2_65; }
	inline GameObject_t3674682005 ** get_address_of__wTrench1_2_65() { return &____wTrench1_2_65; }
	inline void set__wTrench1_2_65(GameObject_t3674682005 * value)
	{
		____wTrench1_2_65 = value;
		Il2CppCodeGenWriteBarrier(&____wTrench1_2_65, value);
	}

	inline static int32_t get_offset_of__wTrench2_1_66() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____wTrench2_1_66)); }
	inline GameObject_t3674682005 * get__wTrench2_1_66() const { return ____wTrench2_1_66; }
	inline GameObject_t3674682005 ** get_address_of__wTrench2_1_66() { return &____wTrench2_1_66; }
	inline void set__wTrench2_1_66(GameObject_t3674682005 * value)
	{
		____wTrench2_1_66 = value;
		Il2CppCodeGenWriteBarrier(&____wTrench2_1_66, value);
	}

	inline static int32_t get_offset_of__wTrench2_2_67() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____wTrench2_2_67)); }
	inline GameObject_t3674682005 * get__wTrench2_2_67() const { return ____wTrench2_2_67; }
	inline GameObject_t3674682005 ** get_address_of__wTrench2_2_67() { return &____wTrench2_2_67; }
	inline void set__wTrench2_2_67(GameObject_t3674682005 * value)
	{
		____wTrench2_2_67 = value;
		Il2CppCodeGenWriteBarrier(&____wTrench2_2_67, value);
	}

	inline static int32_t get_offset_of__wTrench3_68() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____wTrench3_68)); }
	inline GameObject_t3674682005 * get__wTrench3_68() const { return ____wTrench3_68; }
	inline GameObject_t3674682005 ** get_address_of__wTrench3_68() { return &____wTrench3_68; }
	inline void set__wTrench3_68(GameObject_t3674682005 * value)
	{
		____wTrench3_68 = value;
		Il2CppCodeGenWriteBarrier(&____wTrench3_68, value);
	}

	inline static int32_t get_offset_of__staircaseContact_69() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____staircaseContact_69)); }
	inline GameObject_t3674682005 * get__staircaseContact_69() const { return ____staircaseContact_69; }
	inline GameObject_t3674682005 ** get_address_of__staircaseContact_69() { return &____staircaseContact_69; }
	inline void set__staircaseContact_69(GameObject_t3674682005 * value)
	{
		____staircaseContact_69 = value;
		Il2CppCodeGenWriteBarrier(&____staircaseContact_69, value);
	}

	inline static int32_t get_offset_of__staircaseContactHardMask_70() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____staircaseContactHardMask_70)); }
	inline GameObject_t3674682005 * get__staircaseContactHardMask_70() const { return ____staircaseContactHardMask_70; }
	inline GameObject_t3674682005 ** get_address_of__staircaseContactHardMask_70() { return &____staircaseContactHardMask_70; }
	inline void set__staircaseContactHardMask_70(GameObject_t3674682005 * value)
	{
		____staircaseContactHardMask_70 = value;
		Il2CppCodeGenWriteBarrier(&____staircaseContactHardMask_70, value);
	}

	inline static int32_t get_offset_of__staircaseContacts_71() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____staircaseContacts_71)); }
	inline GameObjectU5BU5D_t2662109048* get__staircaseContacts_71() const { return ____staircaseContacts_71; }
	inline GameObjectU5BU5D_t2662109048** get_address_of__staircaseContacts_71() { return &____staircaseContacts_71; }
	inline void set__staircaseContacts_71(GameObjectU5BU5D_t2662109048* value)
	{
		____staircaseContacts_71 = value;
		Il2CppCodeGenWriteBarrier(&____staircaseContacts_71, value);
	}

	inline static int32_t get_offset_of__staircaseContactHardMasks_72() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____staircaseContactHardMasks_72)); }
	inline GameObjectU5BU5D_t2662109048* get__staircaseContactHardMasks_72() const { return ____staircaseContactHardMasks_72; }
	inline GameObjectU5BU5D_t2662109048** get_address_of__staircaseContactHardMasks_72() { return &____staircaseContactHardMasks_72; }
	inline void set__staircaseContactHardMasks_72(GameObjectU5BU5D_t2662109048* value)
	{
		____staircaseContactHardMasks_72 = value;
		Il2CppCodeGenWriteBarrier(&____staircaseContactHardMasks_72, value);
	}

	inline static int32_t get_offset_of__wFill_73() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____wFill_73)); }
	inline GameObject_t3674682005 * get__wFill_73() const { return ____wFill_73; }
	inline GameObject_t3674682005 ** get_address_of__wFill_73() { return &____wFill_73; }
	inline void set__wFill_73(GameObject_t3674682005 * value)
	{
		____wFill_73 = value;
		Il2CppCodeGenWriteBarrier(&____wFill_73, value);
	}

	inline static int32_t get_offset_of__animTopStartPos_74() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____animTopStartPos_74)); }
	inline Vector3_t4282066566  get__animTopStartPos_74() const { return ____animTopStartPos_74; }
	inline Vector3_t4282066566 * get_address_of__animTopStartPos_74() { return &____animTopStartPos_74; }
	inline void set__animTopStartPos_74(Vector3_t4282066566  value)
	{
		____animTopStartPos_74 = value;
	}

	inline static int32_t get_offset_of__animBottomStartPos_75() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____animBottomStartPos_75)); }
	inline Vector3_t4282066566  get__animBottomStartPos_75() const { return ____animBottomStartPos_75; }
	inline Vector3_t4282066566 * get_address_of__animBottomStartPos_75() { return &____animBottomStartPos_75; }
	inline void set__animBottomStartPos_75(Vector3_t4282066566  value)
	{
		____animBottomStartPos_75 = value;
	}

	inline static int32_t get_offset_of__mainCamStartPos_76() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____mainCamStartPos_76)); }
	inline Vector3_t4282066566  get__mainCamStartPos_76() const { return ____mainCamStartPos_76; }
	inline Vector3_t4282066566 * get_address_of__mainCamStartPos_76() { return &____mainCamStartPos_76; }
	inline void set__mainCamStartPos_76(Vector3_t4282066566  value)
	{
		____mainCamStartPos_76 = value;
	}

	inline static int32_t get_offset_of__siSubAnimTime_77() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____siSubAnimTime_77)); }
	inline float get__siSubAnimTime_77() const { return ____siSubAnimTime_77; }
	inline float* get_address_of__siSubAnimTime_77() { return &____siSubAnimTime_77; }
	inline void set__siSubAnimTime_77(float value)
	{
		____siSubAnimTime_77 = value;
	}

	inline static int32_t get_offset_of__oxNiAnimTime_78() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____oxNiAnimTime_78)); }
	inline float get__oxNiAnimTime_78() const { return ____oxNiAnimTime_78; }
	inline float* get_address_of__oxNiAnimTime_78() { return &____oxNiAnimTime_78; }
	inline void set__oxNiAnimTime_78(float value)
	{
		____oxNiAnimTime_78 = value;
	}

	inline static int32_t get_offset_of__stairCaseHardMaskAnimTime_79() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____stairCaseHardMaskAnimTime_79)); }
	inline float get__stairCaseHardMaskAnimTime_79() const { return ____stairCaseHardMaskAnimTime_79; }
	inline float* get_address_of__stairCaseHardMaskAnimTime_79() { return &____stairCaseHardMaskAnimTime_79; }
	inline void set__stairCaseHardMaskAnimTime_79(float value)
	{
		____stairCaseHardMaskAnimTime_79 = value;
	}

	inline static int32_t get_offset_of__stairFormAnimTime_80() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____stairFormAnimTime_80)); }
	inline float get__stairFormAnimTime_80() const { return ____stairFormAnimTime_80; }
	inline float* get_address_of__stairFormAnimTime_80() { return &____stairFormAnimTime_80; }
	inline void set__stairFormAnimTime_80(float value)
	{
		____stairFormAnimTime_80 = value;
	}

	inline static int32_t get_offset_of__channelHoleHardMaskAnimTime_81() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____channelHoleHardMaskAnimTime_81)); }
	inline float get__channelHoleHardMaskAnimTime_81() const { return ____channelHoleHardMaskAnimTime_81; }
	inline float* get_address_of__channelHoleHardMaskAnimTime_81() { return &____channelHoleHardMaskAnimTime_81; }
	inline void set__channelHoleHardMaskAnimTime_81(float value)
	{
		____channelHoleHardMaskAnimTime_81 = value;
	}

	inline static int32_t get_offset_of__channelHoleCylinderDepositAnimTime_82() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____channelHoleCylinderDepositAnimTime_82)); }
	inline float get__channelHoleCylinderDepositAnimTime_82() const { return ____channelHoleCylinderDepositAnimTime_82; }
	inline float* get_address_of__channelHoleCylinderDepositAnimTime_82() { return &____channelHoleCylinderDepositAnimTime_82; }
	inline void set__channelHoleCylinderDepositAnimTime_82(float value)
	{
		____channelHoleCylinderDepositAnimTime_82 = value;
	}

	inline static int32_t get_offset_of__channelHoleEtchAnimTime_83() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____channelHoleEtchAnimTime_83)); }
	inline float get__channelHoleEtchAnimTime_83() const { return ____channelHoleEtchAnimTime_83; }
	inline float* get_address_of__channelHoleEtchAnimTime_83() { return &____channelHoleEtchAnimTime_83; }
	inline void set__channelHoleEtchAnimTime_83(float value)
	{
		____channelHoleEtchAnimTime_83 = value;
	}

	inline static int32_t get_offset_of__trenchHardMaskAnimTime_84() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____trenchHardMaskAnimTime_84)); }
	inline float get__trenchHardMaskAnimTime_84() const { return ____trenchHardMaskAnimTime_84; }
	inline float* get_address_of__trenchHardMaskAnimTime_84() { return &____trenchHardMaskAnimTime_84; }
	inline void set__trenchHardMaskAnimTime_84(float value)
	{
		____trenchHardMaskAnimTime_84 = value;
	}

	inline static int32_t get_offset_of__trenchMaskFadeTime_85() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____trenchMaskFadeTime_85)); }
	inline float get__trenchMaskFadeTime_85() const { return ____trenchMaskFadeTime_85; }
	inline float* get_address_of__trenchMaskFadeTime_85() { return &____trenchMaskFadeTime_85; }
	inline void set__trenchMaskFadeTime_85(float value)
	{
		____trenchMaskFadeTime_85 = value;
	}

	inline static int32_t get_offset_of__trenchFormAnimTime_86() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____trenchFormAnimTime_86)); }
	inline float get__trenchFormAnimTime_86() const { return ____trenchFormAnimTime_86; }
	inline float* get_address_of__trenchFormAnimTime_86() { return &____trenchFormAnimTime_86; }
	inline void set__trenchFormAnimTime_86(float value)
	{
		____trenchFormAnimTime_86 = value;
	}

	inline static int32_t get_offset_of__nitrideRemovalAnimTime_87() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____nitrideRemovalAnimTime_87)); }
	inline float get__nitrideRemovalAnimTime_87() const { return ____nitrideRemovalAnimTime_87; }
	inline float* get_address_of__nitrideRemovalAnimTime_87() { return &____nitrideRemovalAnimTime_87; }
	inline void set__nitrideRemovalAnimTime_87(float value)
	{
		____nitrideRemovalAnimTime_87 = value;
	}

	inline static int32_t get_offset_of__tungRecessAnimTime_88() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____tungRecessAnimTime_88)); }
	inline float get__tungRecessAnimTime_88() const { return ____tungRecessAnimTime_88; }
	inline float* get_address_of__tungRecessAnimTime_88() { return &____tungRecessAnimTime_88; }
	inline void set__tungRecessAnimTime_88(float value)
	{
		____tungRecessAnimTime_88 = value;
	}

	inline static int32_t get_offset_of__stairCaseContactDepositAnimTime_89() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____stairCaseContactDepositAnimTime_89)); }
	inline float get__stairCaseContactDepositAnimTime_89() const { return ____stairCaseContactDepositAnimTime_89; }
	inline float* get_address_of__stairCaseContactDepositAnimTime_89() { return &____stairCaseContactDepositAnimTime_89; }
	inline void set__stairCaseContactDepositAnimTime_89(float value)
	{
		____stairCaseContactDepositAnimTime_89 = value;
	}

	inline static int32_t get_offset_of__stairCaseContactHardMaskDepositTime_90() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____stairCaseContactHardMaskDepositTime_90)); }
	inline float get__stairCaseContactHardMaskDepositTime_90() const { return ____stairCaseContactHardMaskDepositTime_90; }
	inline float* get_address_of__stairCaseContactHardMaskDepositTime_90() { return &____stairCaseContactHardMaskDepositTime_90; }
	inline void set__stairCaseContactHardMaskDepositTime_90(float value)
	{
		____stairCaseContactHardMaskDepositTime_90 = value;
	}

	inline static int32_t get_offset_of__staircaseContactMaskEtchAnimTime_91() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____staircaseContactMaskEtchAnimTime_91)); }
	inline float get__staircaseContactMaskEtchAnimTime_91() const { return ____staircaseContactMaskEtchAnimTime_91; }
	inline float* get_address_of__staircaseContactMaskEtchAnimTime_91() { return &____staircaseContactMaskEtchAnimTime_91; }
	inline void set__staircaseContactMaskEtchAnimTime_91(float value)
	{
		____staircaseContactMaskEtchAnimTime_91 = value;
	}

	inline static int32_t get_offset_of__staircaseContactEtchAnimTime_92() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____staircaseContactEtchAnimTime_92)); }
	inline float get__staircaseContactEtchAnimTime_92() const { return ____staircaseContactEtchAnimTime_92; }
	inline float* get_address_of__staircaseContactEtchAnimTime_92() { return &____staircaseContactEtchAnimTime_92; }
	inline void set__staircaseContactEtchAnimTime_92(float value)
	{
		____staircaseContactEtchAnimTime_92 = value;
	}

	inline static int32_t get_offset_of__wRecessAnimTime_93() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____wRecessAnimTime_93)); }
	inline float get__wRecessAnimTime_93() const { return ____wRecessAnimTime_93; }
	inline float* get_address_of__wRecessAnimTime_93() { return &____wRecessAnimTime_93; }
	inline void set__wRecessAnimTime_93(float value)
	{
		____wRecessAnimTime_93 = value;
	}

	inline static int32_t get_offset_of__wFillAnimTime_94() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____wFillAnimTime_94)); }
	inline float get__wFillAnimTime_94() const { return ____wFillAnimTime_94; }
	inline float* get_address_of__wFillAnimTime_94() { return &____wFillAnimTime_94; }
	inline void set__wFillAnimTime_94(float value)
	{
		____wFillAnimTime_94 = value;
	}

	inline static int32_t get_offset_of__triNiDepositOnChannelAnimTime_95() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____triNiDepositOnChannelAnimTime_95)); }
	inline float get__triNiDepositOnChannelAnimTime_95() const { return ____triNiDepositOnChannelAnimTime_95; }
	inline float* get_address_of__triNiDepositOnChannelAnimTime_95() { return &____triNiDepositOnChannelAnimTime_95; }
	inline void set__triNiDepositOnChannelAnimTime_95(float value)
	{
		____triNiDepositOnChannelAnimTime_95 = value;
	}

	inline static int32_t get_offset_of__flyByTime_96() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____flyByTime_96)); }
	inline float get__flyByTime_96() const { return ____flyByTime_96; }
	inline float* get_address_of__flyByTime_96() { return &____flyByTime_96; }
	inline void set__flyByTime_96(float value)
	{
		____flyByTime_96 = value;
	}

	inline static int32_t get_offset_of__targetY_97() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____targetY_97)); }
	inline float get__targetY_97() const { return ____targetY_97; }
	inline float* get_address_of__targetY_97() { return &____targetY_97; }
	inline void set__targetY_97(float value)
	{
		____targetY_97 = value;
	}

	inline static int32_t get_offset_of__staircaseHardMaskYoffset_98() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____staircaseHardMaskYoffset_98)); }
	inline float get__staircaseHardMaskYoffset_98() const { return ____staircaseHardMaskYoffset_98; }
	inline float* get_address_of__staircaseHardMaskYoffset_98() { return &____staircaseHardMaskYoffset_98; }
	inline void set__staircaseHardMaskYoffset_98(float value)
	{
		____staircaseHardMaskYoffset_98 = value;
	}

	inline static int32_t get_offset_of__staircaseHardMaskVertAnimComp_99() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____staircaseHardMaskVertAnimComp_99)); }
	inline VertexAnimation_t4191345184 * get__staircaseHardMaskVertAnimComp_99() const { return ____staircaseHardMaskVertAnimComp_99; }
	inline VertexAnimation_t4191345184 ** get_address_of__staircaseHardMaskVertAnimComp_99() { return &____staircaseHardMaskVertAnimComp_99; }
	inline void set__staircaseHardMaskVertAnimComp_99(VertexAnimation_t4191345184 * value)
	{
		____staircaseHardMaskVertAnimComp_99 = value;
		Il2CppCodeGenWriteBarrier(&____staircaseHardMaskVertAnimComp_99, value);
	}

	inline static int32_t get_offset_of__oxideVertexComp_100() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____oxideVertexComp_100)); }
	inline VertexAnimationU5BU5D_t2829637985* get__oxideVertexComp_100() const { return ____oxideVertexComp_100; }
	inline VertexAnimationU5BU5D_t2829637985** get_address_of__oxideVertexComp_100() { return &____oxideVertexComp_100; }
	inline void set__oxideVertexComp_100(VertexAnimationU5BU5D_t2829637985* value)
	{
		____oxideVertexComp_100 = value;
		Il2CppCodeGenWriteBarrier(&____oxideVertexComp_100, value);
	}

	inline static int32_t get_offset_of__nitrideVertexComp_101() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____nitrideVertexComp_101)); }
	inline VertexAnimationU5BU5D_t2829637985* get__nitrideVertexComp_101() const { return ____nitrideVertexComp_101; }
	inline VertexAnimationU5BU5D_t2829637985** get_address_of__nitrideVertexComp_101() { return &____nitrideVertexComp_101; }
	inline void set__nitrideVertexComp_101(VertexAnimationU5BU5D_t2829637985* value)
	{
		____nitrideVertexComp_101 = value;
		Il2CppCodeGenWriteBarrier(&____nitrideVertexComp_101, value);
	}

	inline static int32_t get_offset_of__displayTextUIController_102() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____displayTextUIController_102)); }
	inline DisplayTextUIController_t1271036863 * get__displayTextUIController_102() const { return ____displayTextUIController_102; }
	inline DisplayTextUIController_t1271036863 ** get_address_of__displayTextUIController_102() { return &____displayTextUIController_102; }
	inline void set__displayTextUIController_102(DisplayTextUIController_t1271036863 * value)
	{
		____displayTextUIController_102 = value;
		Il2CppCodeGenWriteBarrier(&____displayTextUIController_102, value);
	}

	inline static int32_t get_offset_of_delay_103() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___delay_103)); }
	inline float get_delay_103() const { return ___delay_103; }
	inline float* get_address_of_delay_103() { return &___delay_103; }
	inline void set_delay_103(float value)
	{
		___delay_103 = value;
	}

	inline static int32_t get_offset_of_scaleOffset_104() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___scaleOffset_104)); }
	inline float get_scaleOffset_104() const { return ___scaleOffset_104; }
	inline float* get_address_of_scaleOffset_104() { return &___scaleOffset_104; }
	inline void set_scaleOffset_104(float value)
	{
		___scaleOffset_104 = value;
	}

	inline static int32_t get_offset_of_frontOffset_105() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___frontOffset_105)); }
	inline float get_frontOffset_105() const { return ___frontOffset_105; }
	inline float* get_address_of_frontOffset_105() { return &___frontOffset_105; }
	inline void set_frontOffset_105(float value)
	{
		___frontOffset_105 = value;
	}

	inline static int32_t get_offset_of_middleOffset_106() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___middleOffset_106)); }
	inline float get_middleOffset_106() const { return ___middleOffset_106; }
	inline float* get_address_of_middleOffset_106() { return &___middleOffset_106; }
	inline void set_middleOffset_106(float value)
	{
		___middleOffset_106 = value;
	}

	inline static int32_t get_offset_of_toonShaderOutlineWidth_107() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___toonShaderOutlineWidth_107)); }
	inline float get_toonShaderOutlineWidth_107() const { return ___toonShaderOutlineWidth_107; }
	inline float* get_address_of_toonShaderOutlineWidth_107() { return &___toonShaderOutlineWidth_107; }
	inline void set_toonShaderOutlineWidth_107(float value)
	{
		___toonShaderOutlineWidth_107 = value;
	}

	inline static int32_t get_offset_of_trenchDepth_108() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___trenchDepth_108)); }
	inline float get_trenchDepth_108() const { return ___trenchDepth_108; }
	inline float* get_address_of_trenchDepth_108() { return &___trenchDepth_108; }
	inline void set_trenchDepth_108(float value)
	{
		___trenchDepth_108 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
