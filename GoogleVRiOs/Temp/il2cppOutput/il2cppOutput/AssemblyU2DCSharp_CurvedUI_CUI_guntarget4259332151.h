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
// UnityEngine.ParticleSystem
struct ParticleSystem_t381473177;
// UnityEngine.CanvasGroup
struct CanvasGroup_t3702418109;
// CurvedUI.CUI_PerlinNoisePosition
struct CUI_PerlinNoisePosition_t2777826293;
// UnityEngine.UI.Text
struct Text_t9039225;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CurvedUI.CUI_guntarget
struct  CUI_guntarget_t4259332151  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject CurvedUI.CUI_guntarget::Model
	GameObject_t3674682005 * ___Model_2;
	// UnityEngine.ParticleSystem CurvedUI.CUI_guntarget::emitter
	ParticleSystem_t381473177 * ___emitter_3;
	// UnityEngine.CanvasGroup CurvedUI.CUI_guntarget::cgroup
	CanvasGroup_t3702418109 * ___cgroup_4;
	// CurvedUI.CUI_PerlinNoisePosition CurvedUI.CUI_guntarget::perlinPos
	CUI_PerlinNoisePosition_t2777826293 * ___perlinPos_5;
	// UnityEngine.UI.Text CurvedUI.CUI_guntarget::scoreLabel
	Text_t9039225 * ___scoreLabel_6;
	// System.Int32 CurvedUI.CUI_guntarget::score
	int32_t ___score_7;
	// System.Boolean CurvedUI.CUI_guntarget::dead
	bool ___dead_8;

public:
	inline static int32_t get_offset_of_Model_2() { return static_cast<int32_t>(offsetof(CUI_guntarget_t4259332151, ___Model_2)); }
	inline GameObject_t3674682005 * get_Model_2() const { return ___Model_2; }
	inline GameObject_t3674682005 ** get_address_of_Model_2() { return &___Model_2; }
	inline void set_Model_2(GameObject_t3674682005 * value)
	{
		___Model_2 = value;
		Il2CppCodeGenWriteBarrier(&___Model_2, value);
	}

	inline static int32_t get_offset_of_emitter_3() { return static_cast<int32_t>(offsetof(CUI_guntarget_t4259332151, ___emitter_3)); }
	inline ParticleSystem_t381473177 * get_emitter_3() const { return ___emitter_3; }
	inline ParticleSystem_t381473177 ** get_address_of_emitter_3() { return &___emitter_3; }
	inline void set_emitter_3(ParticleSystem_t381473177 * value)
	{
		___emitter_3 = value;
		Il2CppCodeGenWriteBarrier(&___emitter_3, value);
	}

	inline static int32_t get_offset_of_cgroup_4() { return static_cast<int32_t>(offsetof(CUI_guntarget_t4259332151, ___cgroup_4)); }
	inline CanvasGroup_t3702418109 * get_cgroup_4() const { return ___cgroup_4; }
	inline CanvasGroup_t3702418109 ** get_address_of_cgroup_4() { return &___cgroup_4; }
	inline void set_cgroup_4(CanvasGroup_t3702418109 * value)
	{
		___cgroup_4 = value;
		Il2CppCodeGenWriteBarrier(&___cgroup_4, value);
	}

	inline static int32_t get_offset_of_perlinPos_5() { return static_cast<int32_t>(offsetof(CUI_guntarget_t4259332151, ___perlinPos_5)); }
	inline CUI_PerlinNoisePosition_t2777826293 * get_perlinPos_5() const { return ___perlinPos_5; }
	inline CUI_PerlinNoisePosition_t2777826293 ** get_address_of_perlinPos_5() { return &___perlinPos_5; }
	inline void set_perlinPos_5(CUI_PerlinNoisePosition_t2777826293 * value)
	{
		___perlinPos_5 = value;
		Il2CppCodeGenWriteBarrier(&___perlinPos_5, value);
	}

	inline static int32_t get_offset_of_scoreLabel_6() { return static_cast<int32_t>(offsetof(CUI_guntarget_t4259332151, ___scoreLabel_6)); }
	inline Text_t9039225 * get_scoreLabel_6() const { return ___scoreLabel_6; }
	inline Text_t9039225 ** get_address_of_scoreLabel_6() { return &___scoreLabel_6; }
	inline void set_scoreLabel_6(Text_t9039225 * value)
	{
		___scoreLabel_6 = value;
		Il2CppCodeGenWriteBarrier(&___scoreLabel_6, value);
	}

	inline static int32_t get_offset_of_score_7() { return static_cast<int32_t>(offsetof(CUI_guntarget_t4259332151, ___score_7)); }
	inline int32_t get_score_7() const { return ___score_7; }
	inline int32_t* get_address_of_score_7() { return &___score_7; }
	inline void set_score_7(int32_t value)
	{
		___score_7 = value;
	}

	inline static int32_t get_offset_of_dead_8() { return static_cast<int32_t>(offsetof(CUI_guntarget_t4259332151, ___dead_8)); }
	inline bool get_dead_8() const { return ___dead_8; }
	inline bool* get_address_of_dead_8() { return &___dead_8; }
	inline void set_dead_8(bool value)
	{
		___dead_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
