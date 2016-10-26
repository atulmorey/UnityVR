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

// OVRBoundary
struct OVRBoundary_t3841068229;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OVRBoundary_BoundaryTestResult3539197065.h"
#include "AssemblyU2DCSharp_OVRBoundary_Node1687095784.h"
#include "AssemblyU2DCSharp_OVRBoundary_BoundaryType2958381478.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_OVRBoundary_BoundaryLookAndFeel2257307450.h"

// System.Void OVRBoundary::.ctor()
extern "C"  void OVRBoundary__ctor_m1297856166 (OVRBoundary_t3841068229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRBoundary::GetConfigured()
extern "C"  bool OVRBoundary_GetConfigured_m3142700856 (OVRBoundary_t3841068229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRBoundary/BoundaryTestResult OVRBoundary::TestNode(OVRBoundary/Node,OVRBoundary/BoundaryType)
extern "C"  BoundaryTestResult_t3539197065  OVRBoundary_TestNode_m3568041718 (OVRBoundary_t3841068229 * __this, int32_t ___node0, int32_t ___boundaryType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRBoundary/BoundaryTestResult OVRBoundary::TestPoint(UnityEngine.Vector3,OVRBoundary/BoundaryType)
extern "C"  BoundaryTestResult_t3539197065  OVRBoundary_TestPoint_m2458202147 (OVRBoundary_t3841068229 * __this, Vector3_t2243707580  ___point0, int32_t ___boundaryType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRBoundary::SetLookAndFeel(OVRBoundary/BoundaryLookAndFeel)
extern "C"  void OVRBoundary_SetLookAndFeel_m3916048076 (OVRBoundary_t3841068229 * __this, BoundaryLookAndFeel_t2257307450  ___lookAndFeel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRBoundary::ResetLookAndFeel()
extern "C"  void OVRBoundary_ResetLookAndFeel_m4148133435 (OVRBoundary_t3841068229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] OVRBoundary::GetGeometry(OVRBoundary/BoundaryType)
extern "C"  Vector3U5BU5D_t1172311765* OVRBoundary_GetGeometry_m3269899502 (OVRBoundary_t3841068229 * __this, int32_t ___boundaryType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 OVRBoundary::GetDimensions(OVRBoundary/BoundaryType)
extern "C"  Vector3_t2243707580  OVRBoundary_GetDimensions_m604710075 (OVRBoundary_t3841068229 * __this, int32_t ___boundaryType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRBoundary::GetVisible()
extern "C"  bool OVRBoundary_GetVisible_m1580764484 (OVRBoundary_t3841068229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRBoundary::SetVisible(System.Boolean)
extern "C"  void OVRBoundary_SetVisible_m1776864399 (OVRBoundary_t3841068229 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
