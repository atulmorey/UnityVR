#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// NormalSolver/VertexEntry
struct VertexEntry_t4108156537;

#include "mscorlib_System_ValueType1744280289.h"
#include "AssemblyU2DCSharp_NormalSolver_VertexKey1434446374.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<NormalSolver/VertexKey,NormalSolver/VertexEntry>
struct  KeyValuePair_2_t365807448 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	VertexKey_t1434446374  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	VertexEntry_t4108156537 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t365807448, ___key_0)); }
	inline VertexKey_t1434446374  get_key_0() const { return ___key_0; }
	inline VertexKey_t1434446374 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(VertexKey_t1434446374  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t365807448, ___value_1)); }
	inline VertexEntry_t4108156537 * get_value_1() const { return ___value_1; }
	inline VertexEntry_t4108156537 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(VertexEntry_t4108156537 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
