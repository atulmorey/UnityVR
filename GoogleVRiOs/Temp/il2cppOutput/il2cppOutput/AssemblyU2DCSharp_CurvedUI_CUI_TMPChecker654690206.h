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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CurvedUI.CUI_TMPChecker
struct  CUI_TMPChecker_t654690206  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject CurvedUI.CUI_TMPChecker::testMsg
	GameObject_t3674682005 * ___testMsg_2;
	// UnityEngine.GameObject CurvedUI.CUI_TMPChecker::enabledMsg
	GameObject_t3674682005 * ___enabledMsg_3;
	// UnityEngine.GameObject CurvedUI.CUI_TMPChecker::disabledMsg
	GameObject_t3674682005 * ___disabledMsg_4;

public:
	inline static int32_t get_offset_of_testMsg_2() { return static_cast<int32_t>(offsetof(CUI_TMPChecker_t654690206, ___testMsg_2)); }
	inline GameObject_t3674682005 * get_testMsg_2() const { return ___testMsg_2; }
	inline GameObject_t3674682005 ** get_address_of_testMsg_2() { return &___testMsg_2; }
	inline void set_testMsg_2(GameObject_t3674682005 * value)
	{
		___testMsg_2 = value;
		Il2CppCodeGenWriteBarrier(&___testMsg_2, value);
	}

	inline static int32_t get_offset_of_enabledMsg_3() { return static_cast<int32_t>(offsetof(CUI_TMPChecker_t654690206, ___enabledMsg_3)); }
	inline GameObject_t3674682005 * get_enabledMsg_3() const { return ___enabledMsg_3; }
	inline GameObject_t3674682005 ** get_address_of_enabledMsg_3() { return &___enabledMsg_3; }
	inline void set_enabledMsg_3(GameObject_t3674682005 * value)
	{
		___enabledMsg_3 = value;
		Il2CppCodeGenWriteBarrier(&___enabledMsg_3, value);
	}

	inline static int32_t get_offset_of_disabledMsg_4() { return static_cast<int32_t>(offsetof(CUI_TMPChecker_t654690206, ___disabledMsg_4)); }
	inline GameObject_t3674682005 * get_disabledMsg_4() const { return ___disabledMsg_4; }
	inline GameObject_t3674682005 ** get_address_of_disabledMsg_4() { return &___disabledMsg_4; }
	inline void set_disabledMsg_4(GameObject_t3674682005 * value)
	{
		___disabledMsg_4 = value;
		Il2CppCodeGenWriteBarrier(&___disabledMsg_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
