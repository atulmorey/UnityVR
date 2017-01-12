#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t3230847821;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NormalSolver/VertexEntry
struct  VertexEntry_t4108156537  : public Il2CppObject
{
public:
	// System.Int32[] NormalSolver/VertexEntry::TriangleIndex
	Int32U5BU5D_t3230847821* ___TriangleIndex_0;
	// System.Int32[] NormalSolver/VertexEntry::VertexIndex
	Int32U5BU5D_t3230847821* ___VertexIndex_1;
	// System.Int32 NormalSolver/VertexEntry::_reserved
	int32_t ____reserved_2;
	// System.Int32 NormalSolver/VertexEntry::_count
	int32_t ____count_3;

public:
	inline static int32_t get_offset_of_TriangleIndex_0() { return static_cast<int32_t>(offsetof(VertexEntry_t4108156537, ___TriangleIndex_0)); }
	inline Int32U5BU5D_t3230847821* get_TriangleIndex_0() const { return ___TriangleIndex_0; }
	inline Int32U5BU5D_t3230847821** get_address_of_TriangleIndex_0() { return &___TriangleIndex_0; }
	inline void set_TriangleIndex_0(Int32U5BU5D_t3230847821* value)
	{
		___TriangleIndex_0 = value;
		Il2CppCodeGenWriteBarrier(&___TriangleIndex_0, value);
	}

	inline static int32_t get_offset_of_VertexIndex_1() { return static_cast<int32_t>(offsetof(VertexEntry_t4108156537, ___VertexIndex_1)); }
	inline Int32U5BU5D_t3230847821* get_VertexIndex_1() const { return ___VertexIndex_1; }
	inline Int32U5BU5D_t3230847821** get_address_of_VertexIndex_1() { return &___VertexIndex_1; }
	inline void set_VertexIndex_1(Int32U5BU5D_t3230847821* value)
	{
		___VertexIndex_1 = value;
		Il2CppCodeGenWriteBarrier(&___VertexIndex_1, value);
	}

	inline static int32_t get_offset_of__reserved_2() { return static_cast<int32_t>(offsetof(VertexEntry_t4108156537, ____reserved_2)); }
	inline int32_t get__reserved_2() const { return ____reserved_2; }
	inline int32_t* get_address_of__reserved_2() { return &____reserved_2; }
	inline void set__reserved_2(int32_t value)
	{
		____reserved_2 = value;
	}

	inline static int32_t get_offset_of__count_3() { return static_cast<int32_t>(offsetof(VertexEntry_t4108156537, ____count_3)); }
	inline int32_t get__count_3() const { return ____count_3; }
	inline int32_t* get_address_of__count_3() { return &____count_3; }
	inline void set__count_3(int32_t value)
	{
		____count_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
