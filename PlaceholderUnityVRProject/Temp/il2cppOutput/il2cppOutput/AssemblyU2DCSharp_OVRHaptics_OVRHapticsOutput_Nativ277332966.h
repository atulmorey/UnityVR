#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OVRHaptics/OVRHapticsOutput/NativeBuffer
struct  NativeBuffer_t277332966  : public Il2CppObject
{
public:
	// System.Int32 OVRHaptics/OVRHapticsOutput/NativeBuffer::m_numBytes
	int32_t ___m_numBytes_0;
	// System.IntPtr OVRHaptics/OVRHapticsOutput/NativeBuffer::m_ptr
	IntPtr_t ___m_ptr_1;

public:
	inline static int32_t get_offset_of_m_numBytes_0() { return static_cast<int32_t>(offsetof(NativeBuffer_t277332966, ___m_numBytes_0)); }
	inline int32_t get_m_numBytes_0() const { return ___m_numBytes_0; }
	inline int32_t* get_address_of_m_numBytes_0() { return &___m_numBytes_0; }
	inline void set_m_numBytes_0(int32_t value)
	{
		___m_numBytes_0 = value;
	}

	inline static int32_t get_offset_of_m_ptr_1() { return static_cast<int32_t>(offsetof(NativeBuffer_t277332966, ___m_ptr_1)); }
	inline IntPtr_t get_m_ptr_1() const { return ___m_ptr_1; }
	inline IntPtr_t* get_address_of_m_ptr_1() { return &___m_ptr_1; }
	inline void set_m_ptr_1(IntPtr_t value)
	{
		___m_ptr_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
