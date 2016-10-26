#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Version
struct Version_t1755874712;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Guid2533601593.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OVRPlugin
struct  OVRPlugin_t970045666  : public Il2CppObject
{
public:

public:
};

struct OVRPlugin_t970045666_StaticFields
{
public:
	// System.Version OVRPlugin::wrapperVersion
	Version_t1755874712 * ___wrapperVersion_2;
	// System.Version OVRPlugin::_version
	Version_t1755874712 * ____version_3;
	// System.Version OVRPlugin::_nativeSDKVersion
	Version_t1755874712 * ____nativeSDKVersion_4;
	// System.Guid OVRPlugin::_cachedAudioOutGuid
	Guid_t2533601593  ____cachedAudioOutGuid_5;
	// System.String OVRPlugin::_cachedAudioOutString
	String_t* ____cachedAudioOutString_6;
	// System.Guid OVRPlugin::_cachedAudioInGuid
	Guid_t2533601593  ____cachedAudioInGuid_7;
	// System.String OVRPlugin::_cachedAudioInString
	String_t* ____cachedAudioInString_8;

public:
	inline static int32_t get_offset_of_wrapperVersion_2() { return static_cast<int32_t>(offsetof(OVRPlugin_t970045666_StaticFields, ___wrapperVersion_2)); }
	inline Version_t1755874712 * get_wrapperVersion_2() const { return ___wrapperVersion_2; }
	inline Version_t1755874712 ** get_address_of_wrapperVersion_2() { return &___wrapperVersion_2; }
	inline void set_wrapperVersion_2(Version_t1755874712 * value)
	{
		___wrapperVersion_2 = value;
		Il2CppCodeGenWriteBarrier(&___wrapperVersion_2, value);
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(OVRPlugin_t970045666_StaticFields, ____version_3)); }
	inline Version_t1755874712 * get__version_3() const { return ____version_3; }
	inline Version_t1755874712 ** get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(Version_t1755874712 * value)
	{
		____version_3 = value;
		Il2CppCodeGenWriteBarrier(&____version_3, value);
	}

	inline static int32_t get_offset_of__nativeSDKVersion_4() { return static_cast<int32_t>(offsetof(OVRPlugin_t970045666_StaticFields, ____nativeSDKVersion_4)); }
	inline Version_t1755874712 * get__nativeSDKVersion_4() const { return ____nativeSDKVersion_4; }
	inline Version_t1755874712 ** get_address_of__nativeSDKVersion_4() { return &____nativeSDKVersion_4; }
	inline void set__nativeSDKVersion_4(Version_t1755874712 * value)
	{
		____nativeSDKVersion_4 = value;
		Il2CppCodeGenWriteBarrier(&____nativeSDKVersion_4, value);
	}

	inline static int32_t get_offset_of__cachedAudioOutGuid_5() { return static_cast<int32_t>(offsetof(OVRPlugin_t970045666_StaticFields, ____cachedAudioOutGuid_5)); }
	inline Guid_t2533601593  get__cachedAudioOutGuid_5() const { return ____cachedAudioOutGuid_5; }
	inline Guid_t2533601593 * get_address_of__cachedAudioOutGuid_5() { return &____cachedAudioOutGuid_5; }
	inline void set__cachedAudioOutGuid_5(Guid_t2533601593  value)
	{
		____cachedAudioOutGuid_5 = value;
	}

	inline static int32_t get_offset_of__cachedAudioOutString_6() { return static_cast<int32_t>(offsetof(OVRPlugin_t970045666_StaticFields, ____cachedAudioOutString_6)); }
	inline String_t* get__cachedAudioOutString_6() const { return ____cachedAudioOutString_6; }
	inline String_t** get_address_of__cachedAudioOutString_6() { return &____cachedAudioOutString_6; }
	inline void set__cachedAudioOutString_6(String_t* value)
	{
		____cachedAudioOutString_6 = value;
		Il2CppCodeGenWriteBarrier(&____cachedAudioOutString_6, value);
	}

	inline static int32_t get_offset_of__cachedAudioInGuid_7() { return static_cast<int32_t>(offsetof(OVRPlugin_t970045666_StaticFields, ____cachedAudioInGuid_7)); }
	inline Guid_t2533601593  get__cachedAudioInGuid_7() const { return ____cachedAudioInGuid_7; }
	inline Guid_t2533601593 * get_address_of__cachedAudioInGuid_7() { return &____cachedAudioInGuid_7; }
	inline void set__cachedAudioInGuid_7(Guid_t2533601593  value)
	{
		____cachedAudioInGuid_7 = value;
	}

	inline static int32_t get_offset_of__cachedAudioInString_8() { return static_cast<int32_t>(offsetof(OVRPlugin_t970045666_StaticFields, ____cachedAudioInString_8)); }
	inline String_t* get__cachedAudioInString_8() const { return ____cachedAudioInString_8; }
	inline String_t** get_address_of__cachedAudioInString_8() { return &____cachedAudioInString_8; }
	inline void set__cachedAudioInString_8(String_t* value)
	{
		____cachedAudioInString_8 = value;
		Il2CppCodeGenWriteBarrier(&____cachedAudioInString_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
