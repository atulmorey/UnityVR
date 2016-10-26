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

// OVRTracker/Frustum
struct Frustum_t783054090;
struct Frustum_t783054090_marshaled_pinvoke;
struct Frustum_t783054090_marshaled_com;

#include "codegen/il2cpp-codegen.h"


// Methods for marshaling
struct Frustum_t783054090;
struct Frustum_t783054090_marshaled_pinvoke;

extern "C" void Frustum_t783054090_marshal_pinvoke(const Frustum_t783054090& unmarshaled, Frustum_t783054090_marshaled_pinvoke& marshaled);
extern "C" void Frustum_t783054090_marshal_pinvoke_back(const Frustum_t783054090_marshaled_pinvoke& marshaled, Frustum_t783054090& unmarshaled);
extern "C" void Frustum_t783054090_marshal_pinvoke_cleanup(Frustum_t783054090_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Frustum_t783054090;
struct Frustum_t783054090_marshaled_com;

extern "C" void Frustum_t783054090_marshal_com(const Frustum_t783054090& unmarshaled, Frustum_t783054090_marshaled_com& marshaled);
extern "C" void Frustum_t783054090_marshal_com_back(const Frustum_t783054090_marshaled_com& marshaled, Frustum_t783054090& unmarshaled);
extern "C" void Frustum_t783054090_marshal_com_cleanup(Frustum_t783054090_marshaled_com& marshaled);
