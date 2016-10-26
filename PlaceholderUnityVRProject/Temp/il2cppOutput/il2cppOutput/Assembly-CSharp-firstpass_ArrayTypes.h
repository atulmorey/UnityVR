#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// LTDescr
struct LTDescr_t1981209097;
// LTDescrImpl
struct LTDescrImpl_t279532253;
// LTBezier
struct LTBezier_t3622621193;
// LTRect
struct LTRect_t2720449186;

#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LTDescrImpl279532253.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LTBezier3622621193.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LTRect2720449186.h"

#pragma once
// LTDescr[]
struct LTDescrU5BU5D_t1682978740  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Il2CppObject * m_Items[1];

public:
	inline Il2CppObject * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Il2CppObject ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Il2CppObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// LTDescrImpl[]
struct LTDescrImplU5BU5D_t2132524304  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) LTDescrImpl_t279532253 * m_Items[1];

public:
	inline LTDescrImpl_t279532253 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline LTDescrImpl_t279532253 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, LTDescrImpl_t279532253 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// LTBezier[]
struct LTBezierU5BU5D_t3087378868  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) LTBezier_t3622621193 * m_Items[1];

public:
	inline LTBezier_t3622621193 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline LTBezier_t3622621193 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, LTBezier_t3622621193 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// LTRect[]
struct LTRectU5BU5D_t143066263  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) LTRect_t2720449186 * m_Items[1];

public:
	inline LTRect_t2720449186 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline LTRect_t2720449186 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, LTRect_t2720449186 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
