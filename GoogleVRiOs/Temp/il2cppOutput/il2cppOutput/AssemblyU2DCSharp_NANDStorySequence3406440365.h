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
	// UnityEngine.GameObject NANDStorySequence::TeleportationSystem
	GameObject_t3674682005 * ___TeleportationSystem_15;
	// UnityEngine.Material NANDStorySequence::SiliconSubstrateMat
	Material_t3870600107 * ___SiliconSubstrateMat_16;
	// UnityEngine.Material NANDStorySequence::OxideMat
	Material_t3870600107 * ___OxideMat_17;
	// UnityEngine.Material NANDStorySequence::NitrideMat
	Material_t3870600107 * ___NitrideMat_18;
	// UnityEngine.Material NANDStorySequence::ChannelHoleHardMaskMat
	Material_t3870600107 * ___ChannelHoleHardMaskMat_19;
	// UnityEngine.Material NANDStorySequence::ChannelHolesMat
	Material_t3870600107 * ___ChannelHolesMat_20;
	// UnityEngine.Material NANDStorySequence::StaircaseHardMaskMat
	Material_t3870600107 * ___StaircaseHardMaskMat_21;
	// UnityEngine.Material NANDStorySequence::TrenchHardMaskMat
	Material_t3870600107 * ___TrenchHardMaskMat_22;
	// UnityEngine.Material NANDStorySequence::WMat
	Material_t3870600107 * ___WMat_23;
	// UnityEngine.Material NANDStorySequence::WTransMat
	Material_t3870600107 * ___WTransMat_24;
	// UnityEngine.Material NANDStorySequence::StaircaseContactMat
	Material_t3870600107 * ___StaircaseContactMat_25;
	// UnityEngine.Material NANDStorySequence::StaircaseContactHardMaskMat
	Material_t3870600107 * ___StaircaseContactHardMaskMat_26;
	// UnityEngine.Material NANDStorySequence::StaircaseContactChannelMat
	Material_t3870600107 * ___StaircaseContactChannelMat_27;
	// System.Int32 NANDStorySequence::NumberOfLayers
	int32_t ___NumberOfLayers_28;
	// System.Single NANDStorySequence::MasterWidth
	float ___MasterWidth_29;
	// System.Single NANDStorySequence::MasterDepth
	float ___MasterDepth_30;
	// System.Single NANDStorySequence::SiliconSubtrateThickness
	float ___SiliconSubtrateThickness_31;
	// System.Single NANDStorySequence::OxideThickness
	float ___OxideThickness_32;
	// System.Single NANDStorySequence::NitrideThickness
	float ___NitrideThickness_33;
	// System.Single NANDStorySequence::StairCaseStepWidth
	float ___StairCaseStepWidth_34;
	// System.Single NANDStorySequence::StairCaseHardMaskThickness
	float ___StairCaseHardMaskThickness_35;
	// System.Single NANDStorySequence::ChannelHoleCylinderDia
	float ___ChannelHoleCylinderDia_36;
	// System.Single NANDStorySequence::ChannelHoleHardMaskThickness
	float ___ChannelHoleHardMaskThickness_37;
	// System.Single NANDStorySequence::TrenchHardMaskThickness
	float ___TrenchHardMaskThickness_38;
	// System.Single NANDStorySequence::StairCaseContactThickness
	float ___StairCaseContactThickness_39;
	// System.Single NANDStorySequence::stairCaseContactHardMaskThickness
	float ___stairCaseContactHardMaskThickness_40;
	// System.Single NANDStorySequence::stairCaseChannelGap
	float ___stairCaseChannelGap_41;
	// System.Single NANDStorySequence::stairCaseChannelHoleDia
	float ___stairCaseChannelHoleDia_42;
	// System.Single NANDStorySequence::wFillThickness
	float ___wFillThickness_43;
	// UnityEngine.AudioClip NANDStorySequence::WelcomeClip
	AudioClip_t794140988 * ___WelcomeClip_44;
	// UnityEngine.AudioClip NANDStorySequence::Step1Clip
	AudioClip_t794140988 * ___Step1Clip_45;
	// UnityEngine.AudioClip NANDStorySequence::Step2Clip
	AudioClip_t794140988 * ___Step2Clip_46;
	// UnityEngine.AudioClip NANDStorySequence::Step3Clip
	AudioClip_t794140988 * ___Step3Clip_47;
	// UnityEngine.AudioClip NANDStorySequence::Step4AClip
	AudioClip_t794140988 * ___Step4AClip_48;
	// UnityEngine.AudioClip NANDStorySequence::Step4BClip
	AudioClip_t794140988 * ___Step4BClip_49;
	// UnityEngine.AudioClip NANDStorySequence::Step5AClip
	AudioClip_t794140988 * ___Step5AClip_50;
	// UnityEngine.AudioClip NANDStorySequence::Step5BClip
	AudioClip_t794140988 * ___Step5BClip_51;
	// UnityEngine.AudioClip NANDStorySequence::Step6Clip
	AudioClip_t794140988 * ___Step6Clip_52;
	// UnityEngine.AudioClip NANDStorySequence::ClosingClip
	AudioClip_t794140988 * ___ClosingClip_53;
	// UnityEngine.AudioSource NANDStorySequence::NANDAudio
	AudioSource_t1740077639 * ___NANDAudio_54;
	// UnityEngine.GameObject NANDStorySequence::_siliconSubstrate
	GameObject_t3674682005 * ____siliconSubstrate_55;
	// UnityEngine.GameObject[] NANDStorySequence::_nitrideLayers
	GameObjectU5BU5D_t2662109048* ____nitrideLayers_56;
	// UnityEngine.GameObject[] NANDStorySequence::_oxideLayers
	GameObjectU5BU5D_t2662109048* ____oxideLayers_57;
	// UnityEngine.GameObject NANDStorySequence::_channelHoleMask
	GameObject_t3674682005 * ____channelHoleMask_58;
	// UnityEngine.GameObject NANDStorySequence::_staircaseHardMask
	GameObject_t3674682005 * ____staircaseHardMask_59;
	// UnityEngine.GameObject NANDStorySequence::_channelHoleCylndr
	GameObject_t3674682005 * ____channelHoleCylndr_60;
	// UnityEngine.GameObject NANDStorySequence::_channelHoleClndrParent
	GameObject_t3674682005 * ____channelHoleClndrParent_61;
	// UnityEngine.GameObject NANDStorySequence::_trenchHardMask
	GameObject_t3674682005 * ____trenchHardMask_62;
	// UnityEngine.GameObject NANDStorySequence::_frontHalf
	GameObject_t3674682005 * ____frontHalf_63;
	// UnityEngine.GameObject NANDStorySequence::_middleHalf
	GameObject_t3674682005 * ____middleHalf_64;
	// UnityEngine.GameObject NANDStorySequence::_backHalf
	GameObject_t3674682005 * ____backHalf_65;
	// UnityEngine.GameObject[] NANDStorySequence::_rowCylndrs
	GameObjectU5BU5D_t2662109048* ____rowCylndrs_66;
	// UnityEngine.GameObject NANDStorySequence::_wTrench1_1
	GameObject_t3674682005 * ____wTrench1_1_67;
	// UnityEngine.GameObject NANDStorySequence::_wTrench1_2
	GameObject_t3674682005 * ____wTrench1_2_68;
	// UnityEngine.GameObject NANDStorySequence::_wTrench2_1
	GameObject_t3674682005 * ____wTrench2_1_69;
	// UnityEngine.GameObject NANDStorySequence::_wTrench2_2
	GameObject_t3674682005 * ____wTrench2_2_70;
	// UnityEngine.GameObject NANDStorySequence::_wTrench3
	GameObject_t3674682005 * ____wTrench3_71;
	// UnityEngine.GameObject NANDStorySequence::_staircaseContact
	GameObject_t3674682005 * ____staircaseContact_72;
	// UnityEngine.GameObject NANDStorySequence::_staircaseContactHardMask
	GameObject_t3674682005 * ____staircaseContactHardMask_73;
	// UnityEngine.GameObject[] NANDStorySequence::_staircaseContactChannelsFront
	GameObjectU5BU5D_t2662109048* ____staircaseContactChannelsFront_74;
	// UnityEngine.GameObject[] NANDStorySequence::_staircaseContactChannelsMiddle
	GameObjectU5BU5D_t2662109048* ____staircaseContactChannelsMiddle_75;
	// UnityEngine.GameObject[] NANDStorySequence::_staircaseContactChannelsBack
	GameObjectU5BU5D_t2662109048* ____staircaseContactChannelsBack_76;
	// UnityEngine.GameObject[] NANDStorySequence::_staircaseContacts
	GameObjectU5BU5D_t2662109048* ____staircaseContacts_77;
	// UnityEngine.GameObject[] NANDStorySequence::_staircaseContactHardMasks
	GameObjectU5BU5D_t2662109048* ____staircaseContactHardMasks_78;
	// UnityEngine.GameObject NANDStorySequence::_wFill
	GameObject_t3674682005 * ____wFill_79;
	// UnityEngine.Vector3 NANDStorySequence::_animTopStartPos
	Vector3_t4282066566  ____animTopStartPos_80;
	// UnityEngine.Vector3 NANDStorySequence::_animBottomStartPos
	Vector3_t4282066566  ____animBottomStartPos_81;
	// UnityEngine.Vector3 NANDStorySequence::_mainCamStartPos
	Vector3_t4282066566  ____mainCamStartPos_82;
	// System.Single NANDStorySequence::_siSubAnimTime
	float ____siSubAnimTime_83;
	// System.Single NANDStorySequence::_oxNiAnimTime
	float ____oxNiAnimTime_84;
	// System.Single NANDStorySequence::_stairCaseHardMaskAnimTime
	float ____stairCaseHardMaskAnimTime_85;
	// System.Single NANDStorySequence::_stairFormAnimTime
	float ____stairFormAnimTime_86;
	// System.Single NANDStorySequence::_channelHoleHardMaskAnimTime
	float ____channelHoleHardMaskAnimTime_87;
	// System.Single NANDStorySequence::_channelHoleCylinderDepositAnimTime
	float ____channelHoleCylinderDepositAnimTime_88;
	// System.Single NANDStorySequence::_channelHoleEtchAnimTime
	float ____channelHoleEtchAnimTime_89;
	// System.Single NANDStorySequence::_trenchHardMaskAnimTime
	float ____trenchHardMaskAnimTime_90;
	// System.Single NANDStorySequence::_trenchMaskFadeTime
	float ____trenchMaskFadeTime_91;
	// System.Single NANDStorySequence::_trenchFormAnimTime
	float ____trenchFormAnimTime_92;
	// System.Single NANDStorySequence::_nitrideRemovalAnimTime
	float ____nitrideRemovalAnimTime_93;
	// System.Single NANDStorySequence::_triNiBarrierDepAnimTime
	float ____triNiBarrierDepAnimTime_94;
	// System.Single NANDStorySequence::_tungFillInTrenchAnimTime
	float ____tungFillInTrenchAnimTime_95;
	// System.Single NANDStorySequence::_tungRecessOuterLayerAnimTime
	float ____tungRecessOuterLayerAnimTime_96;
	// System.Single NANDStorySequence::_tungRecessAnimTime
	float ____tungRecessAnimTime_97;
	// System.Single NANDStorySequence::_tungRecessFinalizeAnimTime
	float ____tungRecessFinalizeAnimTime_98;
	// System.Single NANDStorySequence::_stairCaseContactDepositAnimTime
	float ____stairCaseContactDepositAnimTime_99;
	// System.Single NANDStorySequence::_stairCaseContactHardMaskDepositTime
	float ____stairCaseContactHardMaskDepositTime_100;
	// System.Single NANDStorySequence::_staircaseContactMaskEtchAnimTime
	float ____staircaseContactMaskEtchAnimTime_101;
	// System.Single NANDStorySequence::_staircaseContactEtchAnimTime
	float ____staircaseContactEtchAnimTime_102;
	// System.Single NANDStorySequence::_wRecessAnimTime
	float ____wRecessAnimTime_103;
	// System.Single NANDStorySequence::_wFillAnimTime
	float ____wFillAnimTime_104;
	// System.Single NANDStorySequence::_triNiDepositOnChannelAnimTime
	float ____triNiDepositOnChannelAnimTime_105;
	// System.Single NANDStorySequence::_flyByTime
	float ____flyByTime_106;
	// System.Single NANDStorySequence::_targetY
	float ____targetY_107;
	// System.Single NANDStorySequence::_staircaseHardMaskYoffset
	float ____staircaseHardMaskYoffset_108;
	// VertexAnimation NANDStorySequence::_staircaseHardMaskVertAnimComp
	VertexAnimation_t4191345184 * ____staircaseHardMaskVertAnimComp_109;
	// VertexAnimation[] NANDStorySequence::_oxideVertexComp
	VertexAnimationU5BU5D_t2829637985* ____oxideVertexComp_110;
	// VertexAnimation[] NANDStorySequence::_nitrideVertexComp
	VertexAnimationU5BU5D_t2829637985* ____nitrideVertexComp_111;
	// DisplayTextUIController NANDStorySequence::_displayTextUIController
	DisplayTextUIController_t1271036863 * ____displayTextUIController_112;
	// System.Single NANDStorySequence::delay
	float ___delay_113;
	// System.Single NANDStorySequence::scaleOffset
	float ___scaleOffset_114;
	// System.Single NANDStorySequence::frontOffset
	float ___frontOffset_115;
	// System.Single NANDStorySequence::middleOffset
	float ___middleOffset_116;
	// System.Single NANDStorySequence::toonShaderOutlineWidth
	float ___toonShaderOutlineWidth_117;
	// System.Single NANDStorySequence::trenchDepth
	float ___trenchDepth_118;
	// System.Single NANDStorySequence::totalTrenchEtchTime
	float ___totalTrenchEtchTime_119;

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

	inline static int32_t get_offset_of_TeleportationSystem_15() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___TeleportationSystem_15)); }
	inline GameObject_t3674682005 * get_TeleportationSystem_15() const { return ___TeleportationSystem_15; }
	inline GameObject_t3674682005 ** get_address_of_TeleportationSystem_15() { return &___TeleportationSystem_15; }
	inline void set_TeleportationSystem_15(GameObject_t3674682005 * value)
	{
		___TeleportationSystem_15 = value;
		Il2CppCodeGenWriteBarrier(&___TeleportationSystem_15, value);
	}

	inline static int32_t get_offset_of_SiliconSubstrateMat_16() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___SiliconSubstrateMat_16)); }
	inline Material_t3870600107 * get_SiliconSubstrateMat_16() const { return ___SiliconSubstrateMat_16; }
	inline Material_t3870600107 ** get_address_of_SiliconSubstrateMat_16() { return &___SiliconSubstrateMat_16; }
	inline void set_SiliconSubstrateMat_16(Material_t3870600107 * value)
	{
		___SiliconSubstrateMat_16 = value;
		Il2CppCodeGenWriteBarrier(&___SiliconSubstrateMat_16, value);
	}

	inline static int32_t get_offset_of_OxideMat_17() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___OxideMat_17)); }
	inline Material_t3870600107 * get_OxideMat_17() const { return ___OxideMat_17; }
	inline Material_t3870600107 ** get_address_of_OxideMat_17() { return &___OxideMat_17; }
	inline void set_OxideMat_17(Material_t3870600107 * value)
	{
		___OxideMat_17 = value;
		Il2CppCodeGenWriteBarrier(&___OxideMat_17, value);
	}

	inline static int32_t get_offset_of_NitrideMat_18() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___NitrideMat_18)); }
	inline Material_t3870600107 * get_NitrideMat_18() const { return ___NitrideMat_18; }
	inline Material_t3870600107 ** get_address_of_NitrideMat_18() { return &___NitrideMat_18; }
	inline void set_NitrideMat_18(Material_t3870600107 * value)
	{
		___NitrideMat_18 = value;
		Il2CppCodeGenWriteBarrier(&___NitrideMat_18, value);
	}

	inline static int32_t get_offset_of_ChannelHoleHardMaskMat_19() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___ChannelHoleHardMaskMat_19)); }
	inline Material_t3870600107 * get_ChannelHoleHardMaskMat_19() const { return ___ChannelHoleHardMaskMat_19; }
	inline Material_t3870600107 ** get_address_of_ChannelHoleHardMaskMat_19() { return &___ChannelHoleHardMaskMat_19; }
	inline void set_ChannelHoleHardMaskMat_19(Material_t3870600107 * value)
	{
		___ChannelHoleHardMaskMat_19 = value;
		Il2CppCodeGenWriteBarrier(&___ChannelHoleHardMaskMat_19, value);
	}

	inline static int32_t get_offset_of_ChannelHolesMat_20() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___ChannelHolesMat_20)); }
	inline Material_t3870600107 * get_ChannelHolesMat_20() const { return ___ChannelHolesMat_20; }
	inline Material_t3870600107 ** get_address_of_ChannelHolesMat_20() { return &___ChannelHolesMat_20; }
	inline void set_ChannelHolesMat_20(Material_t3870600107 * value)
	{
		___ChannelHolesMat_20 = value;
		Il2CppCodeGenWriteBarrier(&___ChannelHolesMat_20, value);
	}

	inline static int32_t get_offset_of_StaircaseHardMaskMat_21() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___StaircaseHardMaskMat_21)); }
	inline Material_t3870600107 * get_StaircaseHardMaskMat_21() const { return ___StaircaseHardMaskMat_21; }
	inline Material_t3870600107 ** get_address_of_StaircaseHardMaskMat_21() { return &___StaircaseHardMaskMat_21; }
	inline void set_StaircaseHardMaskMat_21(Material_t3870600107 * value)
	{
		___StaircaseHardMaskMat_21 = value;
		Il2CppCodeGenWriteBarrier(&___StaircaseHardMaskMat_21, value);
	}

	inline static int32_t get_offset_of_TrenchHardMaskMat_22() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___TrenchHardMaskMat_22)); }
	inline Material_t3870600107 * get_TrenchHardMaskMat_22() const { return ___TrenchHardMaskMat_22; }
	inline Material_t3870600107 ** get_address_of_TrenchHardMaskMat_22() { return &___TrenchHardMaskMat_22; }
	inline void set_TrenchHardMaskMat_22(Material_t3870600107 * value)
	{
		___TrenchHardMaskMat_22 = value;
		Il2CppCodeGenWriteBarrier(&___TrenchHardMaskMat_22, value);
	}

	inline static int32_t get_offset_of_WMat_23() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___WMat_23)); }
	inline Material_t3870600107 * get_WMat_23() const { return ___WMat_23; }
	inline Material_t3870600107 ** get_address_of_WMat_23() { return &___WMat_23; }
	inline void set_WMat_23(Material_t3870600107 * value)
	{
		___WMat_23 = value;
		Il2CppCodeGenWriteBarrier(&___WMat_23, value);
	}

	inline static int32_t get_offset_of_WTransMat_24() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___WTransMat_24)); }
	inline Material_t3870600107 * get_WTransMat_24() const { return ___WTransMat_24; }
	inline Material_t3870600107 ** get_address_of_WTransMat_24() { return &___WTransMat_24; }
	inline void set_WTransMat_24(Material_t3870600107 * value)
	{
		___WTransMat_24 = value;
		Il2CppCodeGenWriteBarrier(&___WTransMat_24, value);
	}

	inline static int32_t get_offset_of_StaircaseContactMat_25() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___StaircaseContactMat_25)); }
	inline Material_t3870600107 * get_StaircaseContactMat_25() const { return ___StaircaseContactMat_25; }
	inline Material_t3870600107 ** get_address_of_StaircaseContactMat_25() { return &___StaircaseContactMat_25; }
	inline void set_StaircaseContactMat_25(Material_t3870600107 * value)
	{
		___StaircaseContactMat_25 = value;
		Il2CppCodeGenWriteBarrier(&___StaircaseContactMat_25, value);
	}

	inline static int32_t get_offset_of_StaircaseContactHardMaskMat_26() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___StaircaseContactHardMaskMat_26)); }
	inline Material_t3870600107 * get_StaircaseContactHardMaskMat_26() const { return ___StaircaseContactHardMaskMat_26; }
	inline Material_t3870600107 ** get_address_of_StaircaseContactHardMaskMat_26() { return &___StaircaseContactHardMaskMat_26; }
	inline void set_StaircaseContactHardMaskMat_26(Material_t3870600107 * value)
	{
		___StaircaseContactHardMaskMat_26 = value;
		Il2CppCodeGenWriteBarrier(&___StaircaseContactHardMaskMat_26, value);
	}

	inline static int32_t get_offset_of_StaircaseContactChannelMat_27() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___StaircaseContactChannelMat_27)); }
	inline Material_t3870600107 * get_StaircaseContactChannelMat_27() const { return ___StaircaseContactChannelMat_27; }
	inline Material_t3870600107 ** get_address_of_StaircaseContactChannelMat_27() { return &___StaircaseContactChannelMat_27; }
	inline void set_StaircaseContactChannelMat_27(Material_t3870600107 * value)
	{
		___StaircaseContactChannelMat_27 = value;
		Il2CppCodeGenWriteBarrier(&___StaircaseContactChannelMat_27, value);
	}

	inline static int32_t get_offset_of_NumberOfLayers_28() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___NumberOfLayers_28)); }
	inline int32_t get_NumberOfLayers_28() const { return ___NumberOfLayers_28; }
	inline int32_t* get_address_of_NumberOfLayers_28() { return &___NumberOfLayers_28; }
	inline void set_NumberOfLayers_28(int32_t value)
	{
		___NumberOfLayers_28 = value;
	}

	inline static int32_t get_offset_of_MasterWidth_29() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___MasterWidth_29)); }
	inline float get_MasterWidth_29() const { return ___MasterWidth_29; }
	inline float* get_address_of_MasterWidth_29() { return &___MasterWidth_29; }
	inline void set_MasterWidth_29(float value)
	{
		___MasterWidth_29 = value;
	}

	inline static int32_t get_offset_of_MasterDepth_30() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___MasterDepth_30)); }
	inline float get_MasterDepth_30() const { return ___MasterDepth_30; }
	inline float* get_address_of_MasterDepth_30() { return &___MasterDepth_30; }
	inline void set_MasterDepth_30(float value)
	{
		___MasterDepth_30 = value;
	}

	inline static int32_t get_offset_of_SiliconSubtrateThickness_31() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___SiliconSubtrateThickness_31)); }
	inline float get_SiliconSubtrateThickness_31() const { return ___SiliconSubtrateThickness_31; }
	inline float* get_address_of_SiliconSubtrateThickness_31() { return &___SiliconSubtrateThickness_31; }
	inline void set_SiliconSubtrateThickness_31(float value)
	{
		___SiliconSubtrateThickness_31 = value;
	}

	inline static int32_t get_offset_of_OxideThickness_32() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___OxideThickness_32)); }
	inline float get_OxideThickness_32() const { return ___OxideThickness_32; }
	inline float* get_address_of_OxideThickness_32() { return &___OxideThickness_32; }
	inline void set_OxideThickness_32(float value)
	{
		___OxideThickness_32 = value;
	}

	inline static int32_t get_offset_of_NitrideThickness_33() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___NitrideThickness_33)); }
	inline float get_NitrideThickness_33() const { return ___NitrideThickness_33; }
	inline float* get_address_of_NitrideThickness_33() { return &___NitrideThickness_33; }
	inline void set_NitrideThickness_33(float value)
	{
		___NitrideThickness_33 = value;
	}

	inline static int32_t get_offset_of_StairCaseStepWidth_34() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___StairCaseStepWidth_34)); }
	inline float get_StairCaseStepWidth_34() const { return ___StairCaseStepWidth_34; }
	inline float* get_address_of_StairCaseStepWidth_34() { return &___StairCaseStepWidth_34; }
	inline void set_StairCaseStepWidth_34(float value)
	{
		___StairCaseStepWidth_34 = value;
	}

	inline static int32_t get_offset_of_StairCaseHardMaskThickness_35() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___StairCaseHardMaskThickness_35)); }
	inline float get_StairCaseHardMaskThickness_35() const { return ___StairCaseHardMaskThickness_35; }
	inline float* get_address_of_StairCaseHardMaskThickness_35() { return &___StairCaseHardMaskThickness_35; }
	inline void set_StairCaseHardMaskThickness_35(float value)
	{
		___StairCaseHardMaskThickness_35 = value;
	}

	inline static int32_t get_offset_of_ChannelHoleCylinderDia_36() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___ChannelHoleCylinderDia_36)); }
	inline float get_ChannelHoleCylinderDia_36() const { return ___ChannelHoleCylinderDia_36; }
	inline float* get_address_of_ChannelHoleCylinderDia_36() { return &___ChannelHoleCylinderDia_36; }
	inline void set_ChannelHoleCylinderDia_36(float value)
	{
		___ChannelHoleCylinderDia_36 = value;
	}

	inline static int32_t get_offset_of_ChannelHoleHardMaskThickness_37() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___ChannelHoleHardMaskThickness_37)); }
	inline float get_ChannelHoleHardMaskThickness_37() const { return ___ChannelHoleHardMaskThickness_37; }
	inline float* get_address_of_ChannelHoleHardMaskThickness_37() { return &___ChannelHoleHardMaskThickness_37; }
	inline void set_ChannelHoleHardMaskThickness_37(float value)
	{
		___ChannelHoleHardMaskThickness_37 = value;
	}

	inline static int32_t get_offset_of_TrenchHardMaskThickness_38() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___TrenchHardMaskThickness_38)); }
	inline float get_TrenchHardMaskThickness_38() const { return ___TrenchHardMaskThickness_38; }
	inline float* get_address_of_TrenchHardMaskThickness_38() { return &___TrenchHardMaskThickness_38; }
	inline void set_TrenchHardMaskThickness_38(float value)
	{
		___TrenchHardMaskThickness_38 = value;
	}

	inline static int32_t get_offset_of_StairCaseContactThickness_39() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___StairCaseContactThickness_39)); }
	inline float get_StairCaseContactThickness_39() const { return ___StairCaseContactThickness_39; }
	inline float* get_address_of_StairCaseContactThickness_39() { return &___StairCaseContactThickness_39; }
	inline void set_StairCaseContactThickness_39(float value)
	{
		___StairCaseContactThickness_39 = value;
	}

	inline static int32_t get_offset_of_stairCaseContactHardMaskThickness_40() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___stairCaseContactHardMaskThickness_40)); }
	inline float get_stairCaseContactHardMaskThickness_40() const { return ___stairCaseContactHardMaskThickness_40; }
	inline float* get_address_of_stairCaseContactHardMaskThickness_40() { return &___stairCaseContactHardMaskThickness_40; }
	inline void set_stairCaseContactHardMaskThickness_40(float value)
	{
		___stairCaseContactHardMaskThickness_40 = value;
	}

	inline static int32_t get_offset_of_stairCaseChannelGap_41() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___stairCaseChannelGap_41)); }
	inline float get_stairCaseChannelGap_41() const { return ___stairCaseChannelGap_41; }
	inline float* get_address_of_stairCaseChannelGap_41() { return &___stairCaseChannelGap_41; }
	inline void set_stairCaseChannelGap_41(float value)
	{
		___stairCaseChannelGap_41 = value;
	}

	inline static int32_t get_offset_of_stairCaseChannelHoleDia_42() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___stairCaseChannelHoleDia_42)); }
	inline float get_stairCaseChannelHoleDia_42() const { return ___stairCaseChannelHoleDia_42; }
	inline float* get_address_of_stairCaseChannelHoleDia_42() { return &___stairCaseChannelHoleDia_42; }
	inline void set_stairCaseChannelHoleDia_42(float value)
	{
		___stairCaseChannelHoleDia_42 = value;
	}

	inline static int32_t get_offset_of_wFillThickness_43() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___wFillThickness_43)); }
	inline float get_wFillThickness_43() const { return ___wFillThickness_43; }
	inline float* get_address_of_wFillThickness_43() { return &___wFillThickness_43; }
	inline void set_wFillThickness_43(float value)
	{
		___wFillThickness_43 = value;
	}

	inline static int32_t get_offset_of_WelcomeClip_44() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___WelcomeClip_44)); }
	inline AudioClip_t794140988 * get_WelcomeClip_44() const { return ___WelcomeClip_44; }
	inline AudioClip_t794140988 ** get_address_of_WelcomeClip_44() { return &___WelcomeClip_44; }
	inline void set_WelcomeClip_44(AudioClip_t794140988 * value)
	{
		___WelcomeClip_44 = value;
		Il2CppCodeGenWriteBarrier(&___WelcomeClip_44, value);
	}

	inline static int32_t get_offset_of_Step1Clip_45() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___Step1Clip_45)); }
	inline AudioClip_t794140988 * get_Step1Clip_45() const { return ___Step1Clip_45; }
	inline AudioClip_t794140988 ** get_address_of_Step1Clip_45() { return &___Step1Clip_45; }
	inline void set_Step1Clip_45(AudioClip_t794140988 * value)
	{
		___Step1Clip_45 = value;
		Il2CppCodeGenWriteBarrier(&___Step1Clip_45, value);
	}

	inline static int32_t get_offset_of_Step2Clip_46() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___Step2Clip_46)); }
	inline AudioClip_t794140988 * get_Step2Clip_46() const { return ___Step2Clip_46; }
	inline AudioClip_t794140988 ** get_address_of_Step2Clip_46() { return &___Step2Clip_46; }
	inline void set_Step2Clip_46(AudioClip_t794140988 * value)
	{
		___Step2Clip_46 = value;
		Il2CppCodeGenWriteBarrier(&___Step2Clip_46, value);
	}

	inline static int32_t get_offset_of_Step3Clip_47() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___Step3Clip_47)); }
	inline AudioClip_t794140988 * get_Step3Clip_47() const { return ___Step3Clip_47; }
	inline AudioClip_t794140988 ** get_address_of_Step3Clip_47() { return &___Step3Clip_47; }
	inline void set_Step3Clip_47(AudioClip_t794140988 * value)
	{
		___Step3Clip_47 = value;
		Il2CppCodeGenWriteBarrier(&___Step3Clip_47, value);
	}

	inline static int32_t get_offset_of_Step4AClip_48() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___Step4AClip_48)); }
	inline AudioClip_t794140988 * get_Step4AClip_48() const { return ___Step4AClip_48; }
	inline AudioClip_t794140988 ** get_address_of_Step4AClip_48() { return &___Step4AClip_48; }
	inline void set_Step4AClip_48(AudioClip_t794140988 * value)
	{
		___Step4AClip_48 = value;
		Il2CppCodeGenWriteBarrier(&___Step4AClip_48, value);
	}

	inline static int32_t get_offset_of_Step4BClip_49() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___Step4BClip_49)); }
	inline AudioClip_t794140988 * get_Step4BClip_49() const { return ___Step4BClip_49; }
	inline AudioClip_t794140988 ** get_address_of_Step4BClip_49() { return &___Step4BClip_49; }
	inline void set_Step4BClip_49(AudioClip_t794140988 * value)
	{
		___Step4BClip_49 = value;
		Il2CppCodeGenWriteBarrier(&___Step4BClip_49, value);
	}

	inline static int32_t get_offset_of_Step5AClip_50() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___Step5AClip_50)); }
	inline AudioClip_t794140988 * get_Step5AClip_50() const { return ___Step5AClip_50; }
	inline AudioClip_t794140988 ** get_address_of_Step5AClip_50() { return &___Step5AClip_50; }
	inline void set_Step5AClip_50(AudioClip_t794140988 * value)
	{
		___Step5AClip_50 = value;
		Il2CppCodeGenWriteBarrier(&___Step5AClip_50, value);
	}

	inline static int32_t get_offset_of_Step5BClip_51() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___Step5BClip_51)); }
	inline AudioClip_t794140988 * get_Step5BClip_51() const { return ___Step5BClip_51; }
	inline AudioClip_t794140988 ** get_address_of_Step5BClip_51() { return &___Step5BClip_51; }
	inline void set_Step5BClip_51(AudioClip_t794140988 * value)
	{
		___Step5BClip_51 = value;
		Il2CppCodeGenWriteBarrier(&___Step5BClip_51, value);
	}

	inline static int32_t get_offset_of_Step6Clip_52() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___Step6Clip_52)); }
	inline AudioClip_t794140988 * get_Step6Clip_52() const { return ___Step6Clip_52; }
	inline AudioClip_t794140988 ** get_address_of_Step6Clip_52() { return &___Step6Clip_52; }
	inline void set_Step6Clip_52(AudioClip_t794140988 * value)
	{
		___Step6Clip_52 = value;
		Il2CppCodeGenWriteBarrier(&___Step6Clip_52, value);
	}

	inline static int32_t get_offset_of_ClosingClip_53() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___ClosingClip_53)); }
	inline AudioClip_t794140988 * get_ClosingClip_53() const { return ___ClosingClip_53; }
	inline AudioClip_t794140988 ** get_address_of_ClosingClip_53() { return &___ClosingClip_53; }
	inline void set_ClosingClip_53(AudioClip_t794140988 * value)
	{
		___ClosingClip_53 = value;
		Il2CppCodeGenWriteBarrier(&___ClosingClip_53, value);
	}

	inline static int32_t get_offset_of_NANDAudio_54() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___NANDAudio_54)); }
	inline AudioSource_t1740077639 * get_NANDAudio_54() const { return ___NANDAudio_54; }
	inline AudioSource_t1740077639 ** get_address_of_NANDAudio_54() { return &___NANDAudio_54; }
	inline void set_NANDAudio_54(AudioSource_t1740077639 * value)
	{
		___NANDAudio_54 = value;
		Il2CppCodeGenWriteBarrier(&___NANDAudio_54, value);
	}

	inline static int32_t get_offset_of__siliconSubstrate_55() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____siliconSubstrate_55)); }
	inline GameObject_t3674682005 * get__siliconSubstrate_55() const { return ____siliconSubstrate_55; }
	inline GameObject_t3674682005 ** get_address_of__siliconSubstrate_55() { return &____siliconSubstrate_55; }
	inline void set__siliconSubstrate_55(GameObject_t3674682005 * value)
	{
		____siliconSubstrate_55 = value;
		Il2CppCodeGenWriteBarrier(&____siliconSubstrate_55, value);
	}

	inline static int32_t get_offset_of__nitrideLayers_56() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____nitrideLayers_56)); }
	inline GameObjectU5BU5D_t2662109048* get__nitrideLayers_56() const { return ____nitrideLayers_56; }
	inline GameObjectU5BU5D_t2662109048** get_address_of__nitrideLayers_56() { return &____nitrideLayers_56; }
	inline void set__nitrideLayers_56(GameObjectU5BU5D_t2662109048* value)
	{
		____nitrideLayers_56 = value;
		Il2CppCodeGenWriteBarrier(&____nitrideLayers_56, value);
	}

	inline static int32_t get_offset_of__oxideLayers_57() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____oxideLayers_57)); }
	inline GameObjectU5BU5D_t2662109048* get__oxideLayers_57() const { return ____oxideLayers_57; }
	inline GameObjectU5BU5D_t2662109048** get_address_of__oxideLayers_57() { return &____oxideLayers_57; }
	inline void set__oxideLayers_57(GameObjectU5BU5D_t2662109048* value)
	{
		____oxideLayers_57 = value;
		Il2CppCodeGenWriteBarrier(&____oxideLayers_57, value);
	}

	inline static int32_t get_offset_of__channelHoleMask_58() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____channelHoleMask_58)); }
	inline GameObject_t3674682005 * get__channelHoleMask_58() const { return ____channelHoleMask_58; }
	inline GameObject_t3674682005 ** get_address_of__channelHoleMask_58() { return &____channelHoleMask_58; }
	inline void set__channelHoleMask_58(GameObject_t3674682005 * value)
	{
		____channelHoleMask_58 = value;
		Il2CppCodeGenWriteBarrier(&____channelHoleMask_58, value);
	}

	inline static int32_t get_offset_of__staircaseHardMask_59() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____staircaseHardMask_59)); }
	inline GameObject_t3674682005 * get__staircaseHardMask_59() const { return ____staircaseHardMask_59; }
	inline GameObject_t3674682005 ** get_address_of__staircaseHardMask_59() { return &____staircaseHardMask_59; }
	inline void set__staircaseHardMask_59(GameObject_t3674682005 * value)
	{
		____staircaseHardMask_59 = value;
		Il2CppCodeGenWriteBarrier(&____staircaseHardMask_59, value);
	}

	inline static int32_t get_offset_of__channelHoleCylndr_60() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____channelHoleCylndr_60)); }
	inline GameObject_t3674682005 * get__channelHoleCylndr_60() const { return ____channelHoleCylndr_60; }
	inline GameObject_t3674682005 ** get_address_of__channelHoleCylndr_60() { return &____channelHoleCylndr_60; }
	inline void set__channelHoleCylndr_60(GameObject_t3674682005 * value)
	{
		____channelHoleCylndr_60 = value;
		Il2CppCodeGenWriteBarrier(&____channelHoleCylndr_60, value);
	}

	inline static int32_t get_offset_of__channelHoleClndrParent_61() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____channelHoleClndrParent_61)); }
	inline GameObject_t3674682005 * get__channelHoleClndrParent_61() const { return ____channelHoleClndrParent_61; }
	inline GameObject_t3674682005 ** get_address_of__channelHoleClndrParent_61() { return &____channelHoleClndrParent_61; }
	inline void set__channelHoleClndrParent_61(GameObject_t3674682005 * value)
	{
		____channelHoleClndrParent_61 = value;
		Il2CppCodeGenWriteBarrier(&____channelHoleClndrParent_61, value);
	}

	inline static int32_t get_offset_of__trenchHardMask_62() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____trenchHardMask_62)); }
	inline GameObject_t3674682005 * get__trenchHardMask_62() const { return ____trenchHardMask_62; }
	inline GameObject_t3674682005 ** get_address_of__trenchHardMask_62() { return &____trenchHardMask_62; }
	inline void set__trenchHardMask_62(GameObject_t3674682005 * value)
	{
		____trenchHardMask_62 = value;
		Il2CppCodeGenWriteBarrier(&____trenchHardMask_62, value);
	}

	inline static int32_t get_offset_of__frontHalf_63() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____frontHalf_63)); }
	inline GameObject_t3674682005 * get__frontHalf_63() const { return ____frontHalf_63; }
	inline GameObject_t3674682005 ** get_address_of__frontHalf_63() { return &____frontHalf_63; }
	inline void set__frontHalf_63(GameObject_t3674682005 * value)
	{
		____frontHalf_63 = value;
		Il2CppCodeGenWriteBarrier(&____frontHalf_63, value);
	}

	inline static int32_t get_offset_of__middleHalf_64() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____middleHalf_64)); }
	inline GameObject_t3674682005 * get__middleHalf_64() const { return ____middleHalf_64; }
	inline GameObject_t3674682005 ** get_address_of__middleHalf_64() { return &____middleHalf_64; }
	inline void set__middleHalf_64(GameObject_t3674682005 * value)
	{
		____middleHalf_64 = value;
		Il2CppCodeGenWriteBarrier(&____middleHalf_64, value);
	}

	inline static int32_t get_offset_of__backHalf_65() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____backHalf_65)); }
	inline GameObject_t3674682005 * get__backHalf_65() const { return ____backHalf_65; }
	inline GameObject_t3674682005 ** get_address_of__backHalf_65() { return &____backHalf_65; }
	inline void set__backHalf_65(GameObject_t3674682005 * value)
	{
		____backHalf_65 = value;
		Il2CppCodeGenWriteBarrier(&____backHalf_65, value);
	}

	inline static int32_t get_offset_of__rowCylndrs_66() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____rowCylndrs_66)); }
	inline GameObjectU5BU5D_t2662109048* get__rowCylndrs_66() const { return ____rowCylndrs_66; }
	inline GameObjectU5BU5D_t2662109048** get_address_of__rowCylndrs_66() { return &____rowCylndrs_66; }
	inline void set__rowCylndrs_66(GameObjectU5BU5D_t2662109048* value)
	{
		____rowCylndrs_66 = value;
		Il2CppCodeGenWriteBarrier(&____rowCylndrs_66, value);
	}

	inline static int32_t get_offset_of__wTrench1_1_67() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____wTrench1_1_67)); }
	inline GameObject_t3674682005 * get__wTrench1_1_67() const { return ____wTrench1_1_67; }
	inline GameObject_t3674682005 ** get_address_of__wTrench1_1_67() { return &____wTrench1_1_67; }
	inline void set__wTrench1_1_67(GameObject_t3674682005 * value)
	{
		____wTrench1_1_67 = value;
		Il2CppCodeGenWriteBarrier(&____wTrench1_1_67, value);
	}

	inline static int32_t get_offset_of__wTrench1_2_68() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____wTrench1_2_68)); }
	inline GameObject_t3674682005 * get__wTrench1_2_68() const { return ____wTrench1_2_68; }
	inline GameObject_t3674682005 ** get_address_of__wTrench1_2_68() { return &____wTrench1_2_68; }
	inline void set__wTrench1_2_68(GameObject_t3674682005 * value)
	{
		____wTrench1_2_68 = value;
		Il2CppCodeGenWriteBarrier(&____wTrench1_2_68, value);
	}

	inline static int32_t get_offset_of__wTrench2_1_69() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____wTrench2_1_69)); }
	inline GameObject_t3674682005 * get__wTrench2_1_69() const { return ____wTrench2_1_69; }
	inline GameObject_t3674682005 ** get_address_of__wTrench2_1_69() { return &____wTrench2_1_69; }
	inline void set__wTrench2_1_69(GameObject_t3674682005 * value)
	{
		____wTrench2_1_69 = value;
		Il2CppCodeGenWriteBarrier(&____wTrench2_1_69, value);
	}

	inline static int32_t get_offset_of__wTrench2_2_70() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____wTrench2_2_70)); }
	inline GameObject_t3674682005 * get__wTrench2_2_70() const { return ____wTrench2_2_70; }
	inline GameObject_t3674682005 ** get_address_of__wTrench2_2_70() { return &____wTrench2_2_70; }
	inline void set__wTrench2_2_70(GameObject_t3674682005 * value)
	{
		____wTrench2_2_70 = value;
		Il2CppCodeGenWriteBarrier(&____wTrench2_2_70, value);
	}

	inline static int32_t get_offset_of__wTrench3_71() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____wTrench3_71)); }
	inline GameObject_t3674682005 * get__wTrench3_71() const { return ____wTrench3_71; }
	inline GameObject_t3674682005 ** get_address_of__wTrench3_71() { return &____wTrench3_71; }
	inline void set__wTrench3_71(GameObject_t3674682005 * value)
	{
		____wTrench3_71 = value;
		Il2CppCodeGenWriteBarrier(&____wTrench3_71, value);
	}

	inline static int32_t get_offset_of__staircaseContact_72() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____staircaseContact_72)); }
	inline GameObject_t3674682005 * get__staircaseContact_72() const { return ____staircaseContact_72; }
	inline GameObject_t3674682005 ** get_address_of__staircaseContact_72() { return &____staircaseContact_72; }
	inline void set__staircaseContact_72(GameObject_t3674682005 * value)
	{
		____staircaseContact_72 = value;
		Il2CppCodeGenWriteBarrier(&____staircaseContact_72, value);
	}

	inline static int32_t get_offset_of__staircaseContactHardMask_73() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____staircaseContactHardMask_73)); }
	inline GameObject_t3674682005 * get__staircaseContactHardMask_73() const { return ____staircaseContactHardMask_73; }
	inline GameObject_t3674682005 ** get_address_of__staircaseContactHardMask_73() { return &____staircaseContactHardMask_73; }
	inline void set__staircaseContactHardMask_73(GameObject_t3674682005 * value)
	{
		____staircaseContactHardMask_73 = value;
		Il2CppCodeGenWriteBarrier(&____staircaseContactHardMask_73, value);
	}

	inline static int32_t get_offset_of__staircaseContactChannelsFront_74() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____staircaseContactChannelsFront_74)); }
	inline GameObjectU5BU5D_t2662109048* get__staircaseContactChannelsFront_74() const { return ____staircaseContactChannelsFront_74; }
	inline GameObjectU5BU5D_t2662109048** get_address_of__staircaseContactChannelsFront_74() { return &____staircaseContactChannelsFront_74; }
	inline void set__staircaseContactChannelsFront_74(GameObjectU5BU5D_t2662109048* value)
	{
		____staircaseContactChannelsFront_74 = value;
		Il2CppCodeGenWriteBarrier(&____staircaseContactChannelsFront_74, value);
	}

	inline static int32_t get_offset_of__staircaseContactChannelsMiddle_75() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____staircaseContactChannelsMiddle_75)); }
	inline GameObjectU5BU5D_t2662109048* get__staircaseContactChannelsMiddle_75() const { return ____staircaseContactChannelsMiddle_75; }
	inline GameObjectU5BU5D_t2662109048** get_address_of__staircaseContactChannelsMiddle_75() { return &____staircaseContactChannelsMiddle_75; }
	inline void set__staircaseContactChannelsMiddle_75(GameObjectU5BU5D_t2662109048* value)
	{
		____staircaseContactChannelsMiddle_75 = value;
		Il2CppCodeGenWriteBarrier(&____staircaseContactChannelsMiddle_75, value);
	}

	inline static int32_t get_offset_of__staircaseContactChannelsBack_76() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____staircaseContactChannelsBack_76)); }
	inline GameObjectU5BU5D_t2662109048* get__staircaseContactChannelsBack_76() const { return ____staircaseContactChannelsBack_76; }
	inline GameObjectU5BU5D_t2662109048** get_address_of__staircaseContactChannelsBack_76() { return &____staircaseContactChannelsBack_76; }
	inline void set__staircaseContactChannelsBack_76(GameObjectU5BU5D_t2662109048* value)
	{
		____staircaseContactChannelsBack_76 = value;
		Il2CppCodeGenWriteBarrier(&____staircaseContactChannelsBack_76, value);
	}

	inline static int32_t get_offset_of__staircaseContacts_77() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____staircaseContacts_77)); }
	inline GameObjectU5BU5D_t2662109048* get__staircaseContacts_77() const { return ____staircaseContacts_77; }
	inline GameObjectU5BU5D_t2662109048** get_address_of__staircaseContacts_77() { return &____staircaseContacts_77; }
	inline void set__staircaseContacts_77(GameObjectU5BU5D_t2662109048* value)
	{
		____staircaseContacts_77 = value;
		Il2CppCodeGenWriteBarrier(&____staircaseContacts_77, value);
	}

	inline static int32_t get_offset_of__staircaseContactHardMasks_78() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____staircaseContactHardMasks_78)); }
	inline GameObjectU5BU5D_t2662109048* get__staircaseContactHardMasks_78() const { return ____staircaseContactHardMasks_78; }
	inline GameObjectU5BU5D_t2662109048** get_address_of__staircaseContactHardMasks_78() { return &____staircaseContactHardMasks_78; }
	inline void set__staircaseContactHardMasks_78(GameObjectU5BU5D_t2662109048* value)
	{
		____staircaseContactHardMasks_78 = value;
		Il2CppCodeGenWriteBarrier(&____staircaseContactHardMasks_78, value);
	}

	inline static int32_t get_offset_of__wFill_79() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____wFill_79)); }
	inline GameObject_t3674682005 * get__wFill_79() const { return ____wFill_79; }
	inline GameObject_t3674682005 ** get_address_of__wFill_79() { return &____wFill_79; }
	inline void set__wFill_79(GameObject_t3674682005 * value)
	{
		____wFill_79 = value;
		Il2CppCodeGenWriteBarrier(&____wFill_79, value);
	}

	inline static int32_t get_offset_of__animTopStartPos_80() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____animTopStartPos_80)); }
	inline Vector3_t4282066566  get__animTopStartPos_80() const { return ____animTopStartPos_80; }
	inline Vector3_t4282066566 * get_address_of__animTopStartPos_80() { return &____animTopStartPos_80; }
	inline void set__animTopStartPos_80(Vector3_t4282066566  value)
	{
		____animTopStartPos_80 = value;
	}

	inline static int32_t get_offset_of__animBottomStartPos_81() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____animBottomStartPos_81)); }
	inline Vector3_t4282066566  get__animBottomStartPos_81() const { return ____animBottomStartPos_81; }
	inline Vector3_t4282066566 * get_address_of__animBottomStartPos_81() { return &____animBottomStartPos_81; }
	inline void set__animBottomStartPos_81(Vector3_t4282066566  value)
	{
		____animBottomStartPos_81 = value;
	}

	inline static int32_t get_offset_of__mainCamStartPos_82() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____mainCamStartPos_82)); }
	inline Vector3_t4282066566  get__mainCamStartPos_82() const { return ____mainCamStartPos_82; }
	inline Vector3_t4282066566 * get_address_of__mainCamStartPos_82() { return &____mainCamStartPos_82; }
	inline void set__mainCamStartPos_82(Vector3_t4282066566  value)
	{
		____mainCamStartPos_82 = value;
	}

	inline static int32_t get_offset_of__siSubAnimTime_83() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____siSubAnimTime_83)); }
	inline float get__siSubAnimTime_83() const { return ____siSubAnimTime_83; }
	inline float* get_address_of__siSubAnimTime_83() { return &____siSubAnimTime_83; }
	inline void set__siSubAnimTime_83(float value)
	{
		____siSubAnimTime_83 = value;
	}

	inline static int32_t get_offset_of__oxNiAnimTime_84() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____oxNiAnimTime_84)); }
	inline float get__oxNiAnimTime_84() const { return ____oxNiAnimTime_84; }
	inline float* get_address_of__oxNiAnimTime_84() { return &____oxNiAnimTime_84; }
	inline void set__oxNiAnimTime_84(float value)
	{
		____oxNiAnimTime_84 = value;
	}

	inline static int32_t get_offset_of__stairCaseHardMaskAnimTime_85() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____stairCaseHardMaskAnimTime_85)); }
	inline float get__stairCaseHardMaskAnimTime_85() const { return ____stairCaseHardMaskAnimTime_85; }
	inline float* get_address_of__stairCaseHardMaskAnimTime_85() { return &____stairCaseHardMaskAnimTime_85; }
	inline void set__stairCaseHardMaskAnimTime_85(float value)
	{
		____stairCaseHardMaskAnimTime_85 = value;
	}

	inline static int32_t get_offset_of__stairFormAnimTime_86() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____stairFormAnimTime_86)); }
	inline float get__stairFormAnimTime_86() const { return ____stairFormAnimTime_86; }
	inline float* get_address_of__stairFormAnimTime_86() { return &____stairFormAnimTime_86; }
	inline void set__stairFormAnimTime_86(float value)
	{
		____stairFormAnimTime_86 = value;
	}

	inline static int32_t get_offset_of__channelHoleHardMaskAnimTime_87() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____channelHoleHardMaskAnimTime_87)); }
	inline float get__channelHoleHardMaskAnimTime_87() const { return ____channelHoleHardMaskAnimTime_87; }
	inline float* get_address_of__channelHoleHardMaskAnimTime_87() { return &____channelHoleHardMaskAnimTime_87; }
	inline void set__channelHoleHardMaskAnimTime_87(float value)
	{
		____channelHoleHardMaskAnimTime_87 = value;
	}

	inline static int32_t get_offset_of__channelHoleCylinderDepositAnimTime_88() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____channelHoleCylinderDepositAnimTime_88)); }
	inline float get__channelHoleCylinderDepositAnimTime_88() const { return ____channelHoleCylinderDepositAnimTime_88; }
	inline float* get_address_of__channelHoleCylinderDepositAnimTime_88() { return &____channelHoleCylinderDepositAnimTime_88; }
	inline void set__channelHoleCylinderDepositAnimTime_88(float value)
	{
		____channelHoleCylinderDepositAnimTime_88 = value;
	}

	inline static int32_t get_offset_of__channelHoleEtchAnimTime_89() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____channelHoleEtchAnimTime_89)); }
	inline float get__channelHoleEtchAnimTime_89() const { return ____channelHoleEtchAnimTime_89; }
	inline float* get_address_of__channelHoleEtchAnimTime_89() { return &____channelHoleEtchAnimTime_89; }
	inline void set__channelHoleEtchAnimTime_89(float value)
	{
		____channelHoleEtchAnimTime_89 = value;
	}

	inline static int32_t get_offset_of__trenchHardMaskAnimTime_90() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____trenchHardMaskAnimTime_90)); }
	inline float get__trenchHardMaskAnimTime_90() const { return ____trenchHardMaskAnimTime_90; }
	inline float* get_address_of__trenchHardMaskAnimTime_90() { return &____trenchHardMaskAnimTime_90; }
	inline void set__trenchHardMaskAnimTime_90(float value)
	{
		____trenchHardMaskAnimTime_90 = value;
	}

	inline static int32_t get_offset_of__trenchMaskFadeTime_91() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____trenchMaskFadeTime_91)); }
	inline float get__trenchMaskFadeTime_91() const { return ____trenchMaskFadeTime_91; }
	inline float* get_address_of__trenchMaskFadeTime_91() { return &____trenchMaskFadeTime_91; }
	inline void set__trenchMaskFadeTime_91(float value)
	{
		____trenchMaskFadeTime_91 = value;
	}

	inline static int32_t get_offset_of__trenchFormAnimTime_92() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____trenchFormAnimTime_92)); }
	inline float get__trenchFormAnimTime_92() const { return ____trenchFormAnimTime_92; }
	inline float* get_address_of__trenchFormAnimTime_92() { return &____trenchFormAnimTime_92; }
	inline void set__trenchFormAnimTime_92(float value)
	{
		____trenchFormAnimTime_92 = value;
	}

	inline static int32_t get_offset_of__nitrideRemovalAnimTime_93() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____nitrideRemovalAnimTime_93)); }
	inline float get__nitrideRemovalAnimTime_93() const { return ____nitrideRemovalAnimTime_93; }
	inline float* get_address_of__nitrideRemovalAnimTime_93() { return &____nitrideRemovalAnimTime_93; }
	inline void set__nitrideRemovalAnimTime_93(float value)
	{
		____nitrideRemovalAnimTime_93 = value;
	}

	inline static int32_t get_offset_of__triNiBarrierDepAnimTime_94() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____triNiBarrierDepAnimTime_94)); }
	inline float get__triNiBarrierDepAnimTime_94() const { return ____triNiBarrierDepAnimTime_94; }
	inline float* get_address_of__triNiBarrierDepAnimTime_94() { return &____triNiBarrierDepAnimTime_94; }
	inline void set__triNiBarrierDepAnimTime_94(float value)
	{
		____triNiBarrierDepAnimTime_94 = value;
	}

	inline static int32_t get_offset_of__tungFillInTrenchAnimTime_95() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____tungFillInTrenchAnimTime_95)); }
	inline float get__tungFillInTrenchAnimTime_95() const { return ____tungFillInTrenchAnimTime_95; }
	inline float* get_address_of__tungFillInTrenchAnimTime_95() { return &____tungFillInTrenchAnimTime_95; }
	inline void set__tungFillInTrenchAnimTime_95(float value)
	{
		____tungFillInTrenchAnimTime_95 = value;
	}

	inline static int32_t get_offset_of__tungRecessOuterLayerAnimTime_96() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____tungRecessOuterLayerAnimTime_96)); }
	inline float get__tungRecessOuterLayerAnimTime_96() const { return ____tungRecessOuterLayerAnimTime_96; }
	inline float* get_address_of__tungRecessOuterLayerAnimTime_96() { return &____tungRecessOuterLayerAnimTime_96; }
	inline void set__tungRecessOuterLayerAnimTime_96(float value)
	{
		____tungRecessOuterLayerAnimTime_96 = value;
	}

	inline static int32_t get_offset_of__tungRecessAnimTime_97() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____tungRecessAnimTime_97)); }
	inline float get__tungRecessAnimTime_97() const { return ____tungRecessAnimTime_97; }
	inline float* get_address_of__tungRecessAnimTime_97() { return &____tungRecessAnimTime_97; }
	inline void set__tungRecessAnimTime_97(float value)
	{
		____tungRecessAnimTime_97 = value;
	}

	inline static int32_t get_offset_of__tungRecessFinalizeAnimTime_98() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____tungRecessFinalizeAnimTime_98)); }
	inline float get__tungRecessFinalizeAnimTime_98() const { return ____tungRecessFinalizeAnimTime_98; }
	inline float* get_address_of__tungRecessFinalizeAnimTime_98() { return &____tungRecessFinalizeAnimTime_98; }
	inline void set__tungRecessFinalizeAnimTime_98(float value)
	{
		____tungRecessFinalizeAnimTime_98 = value;
	}

	inline static int32_t get_offset_of__stairCaseContactDepositAnimTime_99() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____stairCaseContactDepositAnimTime_99)); }
	inline float get__stairCaseContactDepositAnimTime_99() const { return ____stairCaseContactDepositAnimTime_99; }
	inline float* get_address_of__stairCaseContactDepositAnimTime_99() { return &____stairCaseContactDepositAnimTime_99; }
	inline void set__stairCaseContactDepositAnimTime_99(float value)
	{
		____stairCaseContactDepositAnimTime_99 = value;
	}

	inline static int32_t get_offset_of__stairCaseContactHardMaskDepositTime_100() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____stairCaseContactHardMaskDepositTime_100)); }
	inline float get__stairCaseContactHardMaskDepositTime_100() const { return ____stairCaseContactHardMaskDepositTime_100; }
	inline float* get_address_of__stairCaseContactHardMaskDepositTime_100() { return &____stairCaseContactHardMaskDepositTime_100; }
	inline void set__stairCaseContactHardMaskDepositTime_100(float value)
	{
		____stairCaseContactHardMaskDepositTime_100 = value;
	}

	inline static int32_t get_offset_of__staircaseContactMaskEtchAnimTime_101() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____staircaseContactMaskEtchAnimTime_101)); }
	inline float get__staircaseContactMaskEtchAnimTime_101() const { return ____staircaseContactMaskEtchAnimTime_101; }
	inline float* get_address_of__staircaseContactMaskEtchAnimTime_101() { return &____staircaseContactMaskEtchAnimTime_101; }
	inline void set__staircaseContactMaskEtchAnimTime_101(float value)
	{
		____staircaseContactMaskEtchAnimTime_101 = value;
	}

	inline static int32_t get_offset_of__staircaseContactEtchAnimTime_102() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____staircaseContactEtchAnimTime_102)); }
	inline float get__staircaseContactEtchAnimTime_102() const { return ____staircaseContactEtchAnimTime_102; }
	inline float* get_address_of__staircaseContactEtchAnimTime_102() { return &____staircaseContactEtchAnimTime_102; }
	inline void set__staircaseContactEtchAnimTime_102(float value)
	{
		____staircaseContactEtchAnimTime_102 = value;
	}

	inline static int32_t get_offset_of__wRecessAnimTime_103() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____wRecessAnimTime_103)); }
	inline float get__wRecessAnimTime_103() const { return ____wRecessAnimTime_103; }
	inline float* get_address_of__wRecessAnimTime_103() { return &____wRecessAnimTime_103; }
	inline void set__wRecessAnimTime_103(float value)
	{
		____wRecessAnimTime_103 = value;
	}

	inline static int32_t get_offset_of__wFillAnimTime_104() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____wFillAnimTime_104)); }
	inline float get__wFillAnimTime_104() const { return ____wFillAnimTime_104; }
	inline float* get_address_of__wFillAnimTime_104() { return &____wFillAnimTime_104; }
	inline void set__wFillAnimTime_104(float value)
	{
		____wFillAnimTime_104 = value;
	}

	inline static int32_t get_offset_of__triNiDepositOnChannelAnimTime_105() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____triNiDepositOnChannelAnimTime_105)); }
	inline float get__triNiDepositOnChannelAnimTime_105() const { return ____triNiDepositOnChannelAnimTime_105; }
	inline float* get_address_of__triNiDepositOnChannelAnimTime_105() { return &____triNiDepositOnChannelAnimTime_105; }
	inline void set__triNiDepositOnChannelAnimTime_105(float value)
	{
		____triNiDepositOnChannelAnimTime_105 = value;
	}

	inline static int32_t get_offset_of__flyByTime_106() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____flyByTime_106)); }
	inline float get__flyByTime_106() const { return ____flyByTime_106; }
	inline float* get_address_of__flyByTime_106() { return &____flyByTime_106; }
	inline void set__flyByTime_106(float value)
	{
		____flyByTime_106 = value;
	}

	inline static int32_t get_offset_of__targetY_107() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____targetY_107)); }
	inline float get__targetY_107() const { return ____targetY_107; }
	inline float* get_address_of__targetY_107() { return &____targetY_107; }
	inline void set__targetY_107(float value)
	{
		____targetY_107 = value;
	}

	inline static int32_t get_offset_of__staircaseHardMaskYoffset_108() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____staircaseHardMaskYoffset_108)); }
	inline float get__staircaseHardMaskYoffset_108() const { return ____staircaseHardMaskYoffset_108; }
	inline float* get_address_of__staircaseHardMaskYoffset_108() { return &____staircaseHardMaskYoffset_108; }
	inline void set__staircaseHardMaskYoffset_108(float value)
	{
		____staircaseHardMaskYoffset_108 = value;
	}

	inline static int32_t get_offset_of__staircaseHardMaskVertAnimComp_109() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____staircaseHardMaskVertAnimComp_109)); }
	inline VertexAnimation_t4191345184 * get__staircaseHardMaskVertAnimComp_109() const { return ____staircaseHardMaskVertAnimComp_109; }
	inline VertexAnimation_t4191345184 ** get_address_of__staircaseHardMaskVertAnimComp_109() { return &____staircaseHardMaskVertAnimComp_109; }
	inline void set__staircaseHardMaskVertAnimComp_109(VertexAnimation_t4191345184 * value)
	{
		____staircaseHardMaskVertAnimComp_109 = value;
		Il2CppCodeGenWriteBarrier(&____staircaseHardMaskVertAnimComp_109, value);
	}

	inline static int32_t get_offset_of__oxideVertexComp_110() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____oxideVertexComp_110)); }
	inline VertexAnimationU5BU5D_t2829637985* get__oxideVertexComp_110() const { return ____oxideVertexComp_110; }
	inline VertexAnimationU5BU5D_t2829637985** get_address_of__oxideVertexComp_110() { return &____oxideVertexComp_110; }
	inline void set__oxideVertexComp_110(VertexAnimationU5BU5D_t2829637985* value)
	{
		____oxideVertexComp_110 = value;
		Il2CppCodeGenWriteBarrier(&____oxideVertexComp_110, value);
	}

	inline static int32_t get_offset_of__nitrideVertexComp_111() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____nitrideVertexComp_111)); }
	inline VertexAnimationU5BU5D_t2829637985* get__nitrideVertexComp_111() const { return ____nitrideVertexComp_111; }
	inline VertexAnimationU5BU5D_t2829637985** get_address_of__nitrideVertexComp_111() { return &____nitrideVertexComp_111; }
	inline void set__nitrideVertexComp_111(VertexAnimationU5BU5D_t2829637985* value)
	{
		____nitrideVertexComp_111 = value;
		Il2CppCodeGenWriteBarrier(&____nitrideVertexComp_111, value);
	}

	inline static int32_t get_offset_of__displayTextUIController_112() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ____displayTextUIController_112)); }
	inline DisplayTextUIController_t1271036863 * get__displayTextUIController_112() const { return ____displayTextUIController_112; }
	inline DisplayTextUIController_t1271036863 ** get_address_of__displayTextUIController_112() { return &____displayTextUIController_112; }
	inline void set__displayTextUIController_112(DisplayTextUIController_t1271036863 * value)
	{
		____displayTextUIController_112 = value;
		Il2CppCodeGenWriteBarrier(&____displayTextUIController_112, value);
	}

	inline static int32_t get_offset_of_delay_113() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___delay_113)); }
	inline float get_delay_113() const { return ___delay_113; }
	inline float* get_address_of_delay_113() { return &___delay_113; }
	inline void set_delay_113(float value)
	{
		___delay_113 = value;
	}

	inline static int32_t get_offset_of_scaleOffset_114() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___scaleOffset_114)); }
	inline float get_scaleOffset_114() const { return ___scaleOffset_114; }
	inline float* get_address_of_scaleOffset_114() { return &___scaleOffset_114; }
	inline void set_scaleOffset_114(float value)
	{
		___scaleOffset_114 = value;
	}

	inline static int32_t get_offset_of_frontOffset_115() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___frontOffset_115)); }
	inline float get_frontOffset_115() const { return ___frontOffset_115; }
	inline float* get_address_of_frontOffset_115() { return &___frontOffset_115; }
	inline void set_frontOffset_115(float value)
	{
		___frontOffset_115 = value;
	}

	inline static int32_t get_offset_of_middleOffset_116() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___middleOffset_116)); }
	inline float get_middleOffset_116() const { return ___middleOffset_116; }
	inline float* get_address_of_middleOffset_116() { return &___middleOffset_116; }
	inline void set_middleOffset_116(float value)
	{
		___middleOffset_116 = value;
	}

	inline static int32_t get_offset_of_toonShaderOutlineWidth_117() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___toonShaderOutlineWidth_117)); }
	inline float get_toonShaderOutlineWidth_117() const { return ___toonShaderOutlineWidth_117; }
	inline float* get_address_of_toonShaderOutlineWidth_117() { return &___toonShaderOutlineWidth_117; }
	inline void set_toonShaderOutlineWidth_117(float value)
	{
		___toonShaderOutlineWidth_117 = value;
	}

	inline static int32_t get_offset_of_trenchDepth_118() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___trenchDepth_118)); }
	inline float get_trenchDepth_118() const { return ___trenchDepth_118; }
	inline float* get_address_of_trenchDepth_118() { return &___trenchDepth_118; }
	inline void set_trenchDepth_118(float value)
	{
		___trenchDepth_118 = value;
	}

	inline static int32_t get_offset_of_totalTrenchEtchTime_119() { return static_cast<int32_t>(offsetof(NANDStorySequence_t3406440365, ___totalTrenchEtchTime_119)); }
	inline float get_totalTrenchEtchTime_119() const { return ___totalTrenchEtchTime_119; }
	inline float* get_address_of_totalTrenchEtchTime_119() { return &___totalTrenchEtchTime_119; }
	inline void set_totalTrenchEtchTime_119(float value)
	{
		___totalTrenchEtchTime_119 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
