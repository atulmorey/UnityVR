#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// OVRPlugin/GUID
struct GUID_t893919490;
struct GUID_t893919490_marshaled_pinvoke;
struct GUID_t893919490_marshaled_com;

#include "codegen/il2cpp-codegen.h"


// Methods for marshaling
struct GUID_t893919490;
struct GUID_t893919490_marshaled_pinvoke;

extern "C" void GUID_t893919490_marshal_pinvoke(const GUID_t893919490& unmarshaled, GUID_t893919490_marshaled_pinvoke& marshaled);
extern "C" void GUID_t893919490_marshal_pinvoke_back(const GUID_t893919490_marshaled_pinvoke& marshaled, GUID_t893919490& unmarshaled);
extern "C" void GUID_t893919490_marshal_pinvoke_cleanup(GUID_t893919490_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct GUID_t893919490;
struct GUID_t893919490_marshaled_com;

extern "C" void GUID_t893919490_marshal_com(const GUID_t893919490& unmarshaled, GUID_t893919490_marshaled_com& marshaled);
extern "C" void GUID_t893919490_marshal_com_back(const GUID_t893919490_marshaled_com& marshaled, GUID_t893919490& unmarshaled);
extern "C" void GUID_t893919490_marshal_com_cleanup(GUID_t893919490_marshaled_com& marshaled);
