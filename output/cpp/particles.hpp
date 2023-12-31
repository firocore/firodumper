#pragma once

#include <cstddef>

using namespace std;

namespace C_OP_ColorInterpolateRandom {

   constexpr ptrdiff_t m_ColorFadeMin = 0x1c0;
   constexpr ptrdiff_t m_ColorFadeMax = 0x1dc;
   constexpr ptrdiff_t m_flFadeStartTime = 0x1ec;
   constexpr ptrdiff_t m_flFadeEndTime = 0x1f0;
   constexpr ptrdiff_t m_nFieldOutput = 0x1f4;
   constexpr ptrdiff_t m_bEaseInOut = 0x1f8;

}

namespace C_OP_PositionLock {

   constexpr ptrdiff_t m_TransformInput = 0x1c0;
   constexpr ptrdiff_t m_flStartTime_min = 0x228;
   constexpr ptrdiff_t m_flStartTime_max = 0x22c;
   constexpr ptrdiff_t m_flStartTime_exp = 0x230;
   constexpr ptrdiff_t m_flEndTime_min = 0x234;
   constexpr ptrdiff_t m_flEndTime_max = 0x238;
   constexpr ptrdiff_t m_flEndTime_exp = 0x23c;
   constexpr ptrdiff_t m_flRange = 0x240;
   constexpr ptrdiff_t m_flRangeBias = 0x248;
   constexpr ptrdiff_t m_flJumpThreshold = 0x3a0;
   constexpr ptrdiff_t m_flPrevPosScale = 0x3a4;
   constexpr ptrdiff_t m_bLockRot = 0x3a8;
   constexpr ptrdiff_t m_vecScale = 0x3b0;
   constexpr ptrdiff_t m_nFieldOutput = 0xa08;
   constexpr ptrdiff_t m_nFieldOutputPrev = 0xa0c;

}

namespace C_OP_ControlpointLight {

   constexpr ptrdiff_t m_flScale = 0x1c0;
   constexpr ptrdiff_t m_nControlPoint1 = 0x690;
   constexpr ptrdiff_t m_nControlPoint2 = 0x694;
   constexpr ptrdiff_t m_nControlPoint3 = 0x698;
   constexpr ptrdiff_t m_nControlPoint4 = 0x69c;
   constexpr ptrdiff_t m_vecCPOffset1 = 0x6a0;
   constexpr ptrdiff_t m_vecCPOffset2 = 0x6ac;
   constexpr ptrdiff_t m_vecCPOffset3 = 0x6b8;
   constexpr ptrdiff_t m_vecCPOffset4 = 0x6c4;
   constexpr ptrdiff_t m_LightFiftyDist1 = 0x6d0;
   constexpr ptrdiff_t m_LightZeroDist1 = 0x6d4;
   constexpr ptrdiff_t m_LightFiftyDist2 = 0x6d8;
   constexpr ptrdiff_t m_LightZeroDist2 = 0x6dc;
   constexpr ptrdiff_t m_LightFiftyDist3 = 0x6e0;
   constexpr ptrdiff_t m_LightZeroDist3 = 0x6e4;
   constexpr ptrdiff_t m_LightFiftyDist4 = 0x6e8;
   constexpr ptrdiff_t m_LightZeroDist4 = 0x6ec;
   constexpr ptrdiff_t m_LightColor1 = 0x6f0;
   constexpr ptrdiff_t m_LightColor2 = 0x6f4;
   constexpr ptrdiff_t m_LightColor3 = 0x6f8;
   constexpr ptrdiff_t m_LightColor4 = 0x6fc;
   constexpr ptrdiff_t m_bLightType1 = 0x700;
   constexpr ptrdiff_t m_bLightType2 = 0x701;
   constexpr ptrdiff_t m_bLightType3 = 0x702;
   constexpr ptrdiff_t m_bLightType4 = 0x703;
   constexpr ptrdiff_t m_bLightDynamic1 = 0x704;
   constexpr ptrdiff_t m_bLightDynamic2 = 0x705;
   constexpr ptrdiff_t m_bLightDynamic3 = 0x706;
   constexpr ptrdiff_t m_bLightDynamic4 = 0x707;
   constexpr ptrdiff_t m_bUseNormal = 0x708;
   constexpr ptrdiff_t m_bUseHLambert = 0x709;
   constexpr ptrdiff_t m_bClampLowerRange = 0x70e;
   constexpr ptrdiff_t m_bClampUpperRange = 0x70f;

}

namespace C_OP_GlobalLight {

   constexpr ptrdiff_t m_flScale = 0x1c0;
   constexpr ptrdiff_t m_bClampLowerRange = 0x1c4;
   constexpr ptrdiff_t m_bClampUpperRange = 0x1c5;

}

namespace C_OP_SetChildControlPoints {

   constexpr ptrdiff_t m_nChildGroupID = 0x1c0;
   constexpr ptrdiff_t m_nFirstControlPoint = 0x1c4;
   constexpr ptrdiff_t m_nNumControlPoints = 0x1c8;
   constexpr ptrdiff_t m_nFirstSourcePoint = 0x1d0;
   constexpr ptrdiff_t m_bReverse = 0x328;
   constexpr ptrdiff_t m_bSetOrientation = 0x329;

}

namespace C_OP_SetControlPointsToParticle {

   constexpr ptrdiff_t m_nChildGroupID = 0x1c0;
   constexpr ptrdiff_t m_nFirstControlPoint = 0x1c4;
   constexpr ptrdiff_t m_nNumControlPoints = 0x1c8;
   constexpr ptrdiff_t m_nFirstSourcePoint = 0x1cc;
   constexpr ptrdiff_t m_bSetOrientation = 0x1d0;
   constexpr ptrdiff_t m_nOrientationMode = 0x1d4;
   constexpr ptrdiff_t m_nSetParent = 0x1d8;

}

namespace C_OP_SetControlPointsToModelParticles {

   constexpr ptrdiff_t m_HitboxSetName = 0x1c0;
   constexpr ptrdiff_t m_AttachmentName = 0x240;
   constexpr ptrdiff_t m_nFirstControlPoint = 0x2c0;
   constexpr ptrdiff_t m_nNumControlPoints = 0x2c4;
   constexpr ptrdiff_t m_nFirstSourcePoint = 0x2c8;
   constexpr ptrdiff_t m_bSkin = 0x2cc;
   constexpr ptrdiff_t m_bAttachment = 0x2cd;

}

namespace C_OP_SetPerChildControlPoint {

   constexpr ptrdiff_t m_nChildGroupID = 0x1c0;
   constexpr ptrdiff_t m_nFirstControlPoint = 0x1c4;
   constexpr ptrdiff_t m_nNumControlPoints = 0x1c8;
   constexpr ptrdiff_t m_nParticleIncrement = 0x1d0;
   constexpr ptrdiff_t m_nFirstSourcePoint = 0x328;
   constexpr ptrdiff_t m_bSetOrientation = 0x480;
   constexpr ptrdiff_t m_nOrientationField = 0x484;
   constexpr ptrdiff_t m_bNumBasedOnParticleCount = 0x488;

}

namespace C_OP_SetPerChildControlPointFromAttribute {

   constexpr ptrdiff_t m_nChildGroupID = 0x1c0;
   constexpr ptrdiff_t m_nFirstControlPoint = 0x1c4;
   constexpr ptrdiff_t m_nNumControlPoints = 0x1c8;
   constexpr ptrdiff_t m_nParticleIncrement = 0x1cc;
   constexpr ptrdiff_t m_nFirstSourcePoint = 0x1d0;
   constexpr ptrdiff_t m_bNumBasedOnParticleCount = 0x1d4;
   constexpr ptrdiff_t m_nAttributeToRead = 0x1d8;
   constexpr ptrdiff_t m_nCPField = 0x1dc;

}

namespace C_OP_RemapTransformOrientationToYaw {

   constexpr ptrdiff_t m_TransformInput = 0x1c0;
   constexpr ptrdiff_t m_nFieldOutput = 0x228;
   constexpr ptrdiff_t m_flRotOffset = 0x22c;
   constexpr ptrdiff_t m_flSpinStrength = 0x230;

}

namespace C_OP_DampenToCP {

   constexpr ptrdiff_t m_nControlPointNumber = 0x1c0;
   constexpr ptrdiff_t m_flRange = 0x1c4;
   constexpr ptrdiff_t m_flScale = 0x1c8;

}

namespace C_OP_SetToCP {

   constexpr ptrdiff_t m_nControlPointNumber = 0x1c0;
   constexpr ptrdiff_t m_vecOffset = 0x1c4;
   constexpr ptrdiff_t m_bOffsetLocal = 0x1d0;

}

namespace C_OP_PinParticleToCP {

   constexpr ptrdiff_t m_nControlPointNumber = 0x1c0;
   constexpr ptrdiff_t m_vecOffset = 0x1c8;
   constexpr ptrdiff_t m_bOffsetLocal = 0x820;
   constexpr ptrdiff_t m_nParticleSelection = 0x824;
   constexpr ptrdiff_t m_nParticleNumber = 0x828;
   constexpr ptrdiff_t m_nPinBreakType = 0x980;
   constexpr ptrdiff_t m_flBreakDistance = 0x988;
   constexpr ptrdiff_t m_flBreakSpeed = 0xae0;
   constexpr ptrdiff_t m_flAge = 0xc38;
   constexpr ptrdiff_t m_nBreakControlPointNumber = 0xd90;
   constexpr ptrdiff_t m_nBreakControlPointNumber2 = 0xd94;
   constexpr ptrdiff_t m_flBreakValue = 0xd98;
   constexpr ptrdiff_t m_flInterpolation = 0xef0;

}

namespace C_OP_MovementRigidAttachToCP {

   constexpr ptrdiff_t m_nControlPointNumber = 0x1c0;
   constexpr ptrdiff_t m_nScaleControlPoint = 0x1c4;
   constexpr ptrdiff_t m_nScaleCPField = 0x1c8;
   constexpr ptrdiff_t m_nFieldInput = 0x1cc;
   constexpr ptrdiff_t m_nFieldOutput = 0x1d0;
   constexpr ptrdiff_t m_bOffsetLocal = 0x1d4;

}

namespace C_OP_LerpToInitialPosition {

   constexpr ptrdiff_t m_nControlPointNumber = 0x1c0;
   constexpr ptrdiff_t m_flInterpolation = 0x1c8;
   constexpr ptrdiff_t m_nCacheField = 0x320;
   constexpr ptrdiff_t m_flScale = 0x328;
   constexpr ptrdiff_t m_vecScale = 0x480;

}

namespace C_OP_DistanceBetweenTransforms {

   constexpr ptrdiff_t m_nFieldOutput = 0x1c0;
   constexpr ptrdiff_t m_TransformStart = 0x1c8;
   constexpr ptrdiff_t m_TransformEnd = 0x230;
   constexpr ptrdiff_t m_flInputMin = 0x298;
   constexpr ptrdiff_t m_flInputMax = 0x3f0;
   constexpr ptrdiff_t m_flOutputMin = 0x548;
   constexpr ptrdiff_t m_flOutputMax = 0x6a0;
   constexpr ptrdiff_t m_flMaxTraceLength = 0x7f8;
   constexpr ptrdiff_t m_flLOSScale = 0x7fc;
   constexpr ptrdiff_t m_CollisionGroupName = 0x800;
   constexpr ptrdiff_t m_nTraceSet = 0x880;
   constexpr ptrdiff_t m_bLOS = 0x884;
   constexpr ptrdiff_t m_nSetMethod = 0x888;

}

namespace C_OP_PercentageBetweenTransforms {

   constexpr ptrdiff_t m_nFieldOutput = 0x1c0;
   constexpr ptrdiff_t m_flInputMin = 0x1c4;
   constexpr ptrdiff_t m_flInputMax = 0x1c8;
   constexpr ptrdiff_t m_flOutputMin = 0x1cc;
   constexpr ptrdiff_t m_flOutputMax = 0x1d0;
   constexpr ptrdiff_t m_TransformStart = 0x1d8;
   constexpr ptrdiff_t m_TransformEnd = 0x240;
   constexpr ptrdiff_t m_nSetMethod = 0x2a8;
   constexpr ptrdiff_t m_bActiveRange = 0x2ac;
   constexpr ptrdiff_t m_bRadialCheck = 0x2ad;

}

namespace C_OP_PercentageBetweenTransformsVector {

   constexpr ptrdiff_t m_nFieldOutput = 0x1c0;
   constexpr ptrdiff_t m_flInputMin = 0x1c4;
   constexpr ptrdiff_t m_flInputMax = 0x1c8;
   constexpr ptrdiff_t m_vecOutputMin = 0x1cc;
   constexpr ptrdiff_t m_vecOutputMax = 0x1d8;
   constexpr ptrdiff_t m_TransformStart = 0x1e8;
   constexpr ptrdiff_t m_TransformEnd = 0x250;
   constexpr ptrdiff_t m_nSetMethod = 0x2b8;
   constexpr ptrdiff_t m_bActiveRange = 0x2bc;
   constexpr ptrdiff_t m_bRadialCheck = 0x2bd;

}

namespace C_OP_PercentageBetweenTransformLerpCPs {

   constexpr ptrdiff_t m_nFieldOutput = 0x1c0;
   constexpr ptrdiff_t m_flInputMin = 0x1c4;
   constexpr ptrdiff_t m_flInputMax = 0x1c8;
   constexpr ptrdiff_t m_TransformStart = 0x1d0;
   constexpr ptrdiff_t m_TransformEnd = 0x238;
   constexpr ptrdiff_t m_nOutputStartCP = 0x2a0;
   constexpr ptrdiff_t m_nOutputStartField = 0x2a4;
   constexpr ptrdiff_t m_nOutputEndCP = 0x2a8;
   constexpr ptrdiff_t m_nOutputEndField = 0x2ac;
   constexpr ptrdiff_t m_nSetMethod = 0x2b0;
   constexpr ptrdiff_t m_bActiveRange = 0x2b4;
   constexpr ptrdiff_t m_bRadialCheck = 0x2b5;

}

namespace C_OP_DistanceBetweenVecs {

   constexpr ptrdiff_t m_nFieldOutput = 0x1c0;
   constexpr ptrdiff_t m_vecPoint1 = 0x1c8;
   constexpr ptrdiff_t m_vecPoint2 = 0x820;
   constexpr ptrdiff_t m_flInputMin = 0xe78;
   constexpr ptrdiff_t m_flInputMax = 0xfd0;
   constexpr ptrdiff_t m_flOutputMin = 0x1128;
   constexpr ptrdiff_t m_flOutputMax = 0x1280;
   constexpr ptrdiff_t m_nSetMethod = 0x13d8;
   constexpr ptrdiff_t m_bDeltaTime = 0x13dc;

}

namespace C_OP_DirectionBetweenVecsToVec {

   constexpr ptrdiff_t m_nFieldOutput = 0x1c0;
   constexpr ptrdiff_t m_vecPoint1 = 0x1c8;
   constexpr ptrdiff_t m_vecPoint2 = 0x820;

}

namespace C_OP_DistanceToTransform {

   constexpr ptrdiff_t m_nFieldOutput = 0x1c0;
   constexpr ptrdiff_t m_flInputMin = 0x1c8;
   constexpr ptrdiff_t m_flInputMax = 0x320;
   constexpr ptrdiff_t m_flOutputMin = 0x478;
   constexpr ptrdiff_t m_flOutputMax = 0x5d0;
   constexpr ptrdiff_t m_TransformStart = 0x728;
   constexpr ptrdiff_t m_bLOS = 0x790;
   constexpr ptrdiff_t m_CollisionGroupName = 0x791;
   constexpr ptrdiff_t m_nTraceSet = 0x814;
   constexpr ptrdiff_t m_flMaxTraceLength = 0x818;
   constexpr ptrdiff_t m_flLOSScale = 0x81c;
   constexpr ptrdiff_t m_nSetMethod = 0x820;
   constexpr ptrdiff_t m_bActiveRange = 0x824;
   constexpr ptrdiff_t m_bAdditive = 0x825;
   constexpr ptrdiff_t m_vecComponentScale = 0x828;

}

namespace C_OP_CylindricalDistanceToTransform {

   constexpr ptrdiff_t m_nFieldOutput = 0x1c0;
   constexpr ptrdiff_t m_flInputMin = 0x1c8;
   constexpr ptrdiff_t m_flInputMax = 0x320;
   constexpr ptrdiff_t m_flOutputMin = 0x478;
   constexpr ptrdiff_t m_flOutputMax = 0x5d0;
   constexpr ptrdiff_t m_TransformStart = 0x728;
   constexpr ptrdiff_t m_TransformEnd = 0x790;
   constexpr ptrdiff_t m_nSetMethod = 0x7f8;
   constexpr ptrdiff_t m_bActiveRange = 0x7fc;
   constexpr ptrdiff_t m_bAdditive = 0x7fd;
   constexpr ptrdiff_t m_bCapsule = 0x7fe;

}

namespace C_OP_RtEnvCull {

   constexpr ptrdiff_t m_vecTestDir = 0x1c0;
   constexpr ptrdiff_t m_vecTestNormal = 0x1cc;
   constexpr ptrdiff_t m_bCullOnMiss = 0x1d8;
   constexpr ptrdiff_t m_bStickInsteadOfCull = 0x1d9;
   constexpr ptrdiff_t m_RtEnvName = 0x1da;
   constexpr ptrdiff_t m_nRTEnvCP = 0x25c;
   constexpr ptrdiff_t m_nComponent = 0x260;

}

namespace C_OP_MovementLoopInsideSphere {

   constexpr ptrdiff_t m_nCP = 0x1c0;
   constexpr ptrdiff_t m_flDistance = 0x1c8;
   constexpr ptrdiff_t m_vecScale = 0x320;
   constexpr ptrdiff_t m_nDistSqrAttr = 0x978;

}

namespace C_OP_MoveToHitbox {

   constexpr ptrdiff_t m_modelInput = 0x1c0;
   constexpr ptrdiff_t m_transformInput = 0x220;
   constexpr ptrdiff_t m_flLifeTimeLerpStart = 0x28c;
   constexpr ptrdiff_t m_flLifeTimeLerpEnd = 0x290;
   constexpr ptrdiff_t m_flPrevPosScale = 0x294;
   constexpr ptrdiff_t m_HitboxSetName = 0x298;
   constexpr ptrdiff_t m_bUseBones = 0x318;
   constexpr ptrdiff_t m_nLerpType = 0x31c;
   constexpr ptrdiff_t m_flInterpolation = 0x320;

}

namespace C_OP_LockToBone {

   constexpr ptrdiff_t m_modelInput = 0x1c0;
   constexpr ptrdiff_t m_transformInput = 0x220;
   constexpr ptrdiff_t m_flLifeTimeFadeStart = 0x288;
   constexpr ptrdiff_t m_flLifeTimeFadeEnd = 0x28c;
   constexpr ptrdiff_t m_flJumpThreshold = 0x290;
   constexpr ptrdiff_t m_flPrevPosScale = 0x294;
   constexpr ptrdiff_t m_HitboxSetName = 0x298;
   constexpr ptrdiff_t m_bRigid = 0x318;
   constexpr ptrdiff_t m_bUseBones = 0x319;
   constexpr ptrdiff_t m_nFieldOutput = 0x31c;
   constexpr ptrdiff_t m_nFieldOutputPrev = 0x320;
   constexpr ptrdiff_t m_nRotationSetType = 0x324;
   constexpr ptrdiff_t m_bRigidRotationLock = 0x328;
   constexpr ptrdiff_t m_vecRotation = 0x330;
   constexpr ptrdiff_t m_flRotLerp = 0x988;

}

namespace C_OP_SnapshotRigidSkinToBones {

   constexpr ptrdiff_t m_bTransformNormals = 0x1c0;
   constexpr ptrdiff_t m_bTransformRadii = 0x1c1;
   constexpr ptrdiff_t m_nControlPointNumber = 0x1c4;

}

namespace C_OP_SnapshotSkinToBones {

   constexpr ptrdiff_t m_bTransformNormals = 0x1c0;
   constexpr ptrdiff_t m_bTransformRadii = 0x1c1;
   constexpr ptrdiff_t m_nControlPointNumber = 0x1c4;
   constexpr ptrdiff_t m_flLifeTimeFadeStart = 0x1c8;
   constexpr ptrdiff_t m_flLifeTimeFadeEnd = 0x1cc;
   constexpr ptrdiff_t m_flJumpThreshold = 0x1d0;
   constexpr ptrdiff_t m_flPrevPosScale = 0x1d4;

}

namespace C_OP_CPOffsetToPercentageBetweenCPs {

   constexpr ptrdiff_t m_flInputMin = 0x1c0;
   constexpr ptrdiff_t m_flInputMax = 0x1c4;
   constexpr ptrdiff_t m_flInputBias = 0x1c8;
   constexpr ptrdiff_t m_nStartCP = 0x1cc;
   constexpr ptrdiff_t m_nEndCP = 0x1d0;
   constexpr ptrdiff_t m_nOffsetCP = 0x1d4;
   constexpr ptrdiff_t m_nOuputCP = 0x1d8;
   constexpr ptrdiff_t m_nInputCP = 0x1dc;
   constexpr ptrdiff_t m_bRadialCheck = 0x1e0;
   constexpr ptrdiff_t m_bScaleOffset = 0x1e1;
   constexpr ptrdiff_t m_vecOffset = 0x1e4;

}

namespace C_OP_PlaneCull {

   constexpr ptrdiff_t m_nPlaneControlPoint = 0x1c0;
   constexpr ptrdiff_t m_vecPlaneDirection = 0x1c4;
   constexpr ptrdiff_t m_bLocalSpace = 0x1d0;
   constexpr ptrdiff_t m_flPlaneOffset = 0x1d4;

}

namespace C_OP_DistanceCull {

   constexpr ptrdiff_t m_nControlPoint = 0x1c0;
   constexpr ptrdiff_t m_vecPointOffset = 0x1c4;
   constexpr ptrdiff_t m_flDistance = 0x1d0;
   constexpr ptrdiff_t m_bCullInside = 0x1d4;

}

namespace C_OP_ModelCull {

   constexpr ptrdiff_t m_nControlPointNumber = 0x1c0;
   constexpr ptrdiff_t m_bBoundBox = 0x1c4;
   constexpr ptrdiff_t m_bCullOutside = 0x1c5;
   constexpr ptrdiff_t m_bUseBones = 0x1c6;
   constexpr ptrdiff_t m_HitboxSetName = 0x1c7;

}

namespace C_OP_ModelDampenMovement {

   constexpr ptrdiff_t m_nControlPointNumber = 0x1c0;
   constexpr ptrdiff_t m_bBoundBox = 0x1c4;
   constexpr ptrdiff_t m_bOutside = 0x1c5;
   constexpr ptrdiff_t m_bUseBones = 0x1c6;
   constexpr ptrdiff_t m_HitboxSetName = 0x1c7;
   constexpr ptrdiff_t m_vecPosOffset = 0x248;
   constexpr ptrdiff_t m_fDrag = 0x8a0;

}

namespace C_OP_SequenceFromModel {

   constexpr ptrdiff_t m_nControlPointNumber = 0x1c0;
   constexpr ptrdiff_t m_nFieldOutput = 0x1c4;
   constexpr ptrdiff_t m_nFieldOutputAnim = 0x1c8;
   constexpr ptrdiff_t m_flInputMin = 0x1cc;
   constexpr ptrdiff_t m_flInputMax = 0x1d0;
   constexpr ptrdiff_t m_flOutputMin = 0x1d4;
   constexpr ptrdiff_t m_flOutputMax = 0x1d8;
   constexpr ptrdiff_t m_nSetMethod = 0x1dc;

}

namespace C_OP_VelocityMatchingForce {

   constexpr ptrdiff_t m_flDirScale = 0x1c0;
   constexpr ptrdiff_t m_flSpdScale = 0x1c4;
   constexpr ptrdiff_t m_nCPBroadcast = 0x1c8;

}

namespace C_OP_MovementMaintainOffset {

   constexpr ptrdiff_t m_vecOffset = 0x1c0;
   constexpr ptrdiff_t m_nCP = 0x1cc;
   constexpr ptrdiff_t m_bRadiusScale = 0x1d0;

}

namespace C_OP_MovementPlaceOnGround {

   constexpr ptrdiff_t m_flOffset = 0x1c0;
   constexpr ptrdiff_t m_flMaxTraceLength = 0x318;
   constexpr ptrdiff_t m_flTolerance = 0x31c;
   constexpr ptrdiff_t m_flTraceOffset = 0x320;
   constexpr ptrdiff_t m_flLerpRate = 0x324;
   constexpr ptrdiff_t m_CollisionGroupName = 0x328;
   constexpr ptrdiff_t m_nTraceSet = 0x3a8;
   constexpr ptrdiff_t m_nRefCP1 = 0x3ac;
   constexpr ptrdiff_t m_nRefCP2 = 0x3b0;
   constexpr ptrdiff_t m_nLerpCP = 0x3b4;
   constexpr ptrdiff_t m_nTraceMissBehavior = 0x3c0;
   constexpr ptrdiff_t m_bIncludeShotHull = 0x3c4;
   constexpr ptrdiff_t m_bIncludeWater = 0x3c5;
   constexpr ptrdiff_t m_bSetNormal = 0x3c8;
   constexpr ptrdiff_t m_bScaleOffset = 0x3c9;
   constexpr ptrdiff_t m_nPreserveOffsetCP = 0x3cc;
   constexpr ptrdiff_t m_nIgnoreCP = 0x3d0;

}

namespace C_OP_InheritFromParentParticles {

   constexpr ptrdiff_t m_flScale = 0x1c0;
   constexpr ptrdiff_t m_nFieldOutput = 0x1c4;
   constexpr ptrdiff_t m_nIncrement = 0x1c8;
   constexpr ptrdiff_t m_bRandomDistribution = 0x1cc;

}

namespace C_OP_InheritFromParentParticlesV2 {

   constexpr ptrdiff_t m_flScale = 0x1c0;
   constexpr ptrdiff_t m_nFieldOutput = 0x1c4;
   constexpr ptrdiff_t m_nIncrement = 0x1c8;
   constexpr ptrdiff_t m_bRandomDistribution = 0x1cc;
   constexpr ptrdiff_t m_nMissingParentBehavior = 0x1d0;

}

namespace C_OP_ReadFromNeighboringParticle {

   constexpr ptrdiff_t m_nFieldInput = 0x1c0;
   constexpr ptrdiff_t m_nFieldOutput = 0x1c4;
   constexpr ptrdiff_t m_nIncrement = 0x1c8;
   constexpr ptrdiff_t m_DistanceCheck = 0x1d0;
   constexpr ptrdiff_t m_flInterpolation = 0x328;

}

namespace C_OP_InheritFromPeerSystem {

   constexpr ptrdiff_t m_nFieldOutput = 0x1c0;
   constexpr ptrdiff_t m_nFieldInput = 0x1c4;
   constexpr ptrdiff_t m_nIncrement = 0x1c8;
   constexpr ptrdiff_t m_nGroupID = 0x1cc;

}

namespace C_OP_RemapVectorComponentToScalar {

   constexpr ptrdiff_t m_nFieldInput = 0x1c0;
   constexpr ptrdiff_t m_nFieldOutput = 0x1c4;
   constexpr ptrdiff_t m_nComponent = 0x1c8;

}

namespace C_OP_OrientTo2dDirection {

   constexpr ptrdiff_t m_flRotOffset = 0x1c0;
   constexpr ptrdiff_t m_flSpinStrength = 0x1c4;
   constexpr ptrdiff_t m_nFieldOutput = 0x1c8;

}

namespace C_OP_RestartAfterDuration {

   constexpr ptrdiff_t m_flDurationMin = 0x1c0;
   constexpr ptrdiff_t m_flDurationMax = 0x1c4;
   constexpr ptrdiff_t m_nCP = 0x1c8;
   constexpr ptrdiff_t m_nCPField = 0x1cc;
   constexpr ptrdiff_t m_nChildGroupID = 0x1d0;
   constexpr ptrdiff_t m_bOnlyChildren = 0x1d4;

}

namespace C_OP_Orient2DRelToCP {

   constexpr ptrdiff_t m_flRotOffset = 0x1c0;
   constexpr ptrdiff_t m_flSpinStrength = 0x1c4;
   constexpr ptrdiff_t m_nCP = 0x1c8;
   constexpr ptrdiff_t m_nFieldOutput = 0x1cc;

}

namespace C_OP_MovementRotateParticleAroundAxis {

   constexpr ptrdiff_t m_vecRotAxis = 0x1c0;
   constexpr ptrdiff_t m_flRotRate = 0x818;
   constexpr ptrdiff_t m_TransformInput = 0x970;
   constexpr ptrdiff_t m_bLocalSpace = 0x9d8;

}

namespace C_OP_RotateVector {

   constexpr ptrdiff_t m_nFieldOutput = 0x1c0;
   constexpr ptrdiff_t m_vecRotAxisMin = 0x1c4;
   constexpr ptrdiff_t m_vecRotAxisMax = 0x1d0;
   constexpr ptrdiff_t m_flRotRateMin = 0x1dc;
   constexpr ptrdiff_t m_flRotRateMax = 0x1e0;
   constexpr ptrdiff_t m_bNormalize = 0x1e4;
   constexpr ptrdiff_t m_flScale = 0x1e8;

}

namespace C_OP_MaxVelocity {

   constexpr ptrdiff_t m_flMaxVelocity = 0x1c0;
   constexpr ptrdiff_t m_flMinVelocity = 0x1c4;
   constexpr ptrdiff_t m_nOverrideCP = 0x1c8;
   constexpr ptrdiff_t m_nOverrideCPField = 0x1cc;

}

namespace C_OP_LagCompensation {

   constexpr ptrdiff_t m_nDesiredVelocityCP = 0x1c0;
   constexpr ptrdiff_t m_nLatencyCP = 0x1c4;
   constexpr ptrdiff_t m_nLatencyCPField = 0x1c8;
   constexpr ptrdiff_t m_nDesiredVelocityCPField = 0x1cc;

}

namespace C_OP_MaintainSequentialPath {

   constexpr ptrdiff_t m_fMaxDistance = 0x1c0;
   constexpr ptrdiff_t m_flNumToAssign = 0x1c4;
   constexpr ptrdiff_t m_flCohesionStrength = 0x1c8;
   constexpr ptrdiff_t m_flTolerance = 0x1cc;
   constexpr ptrdiff_t m_bLoop = 0x1d0;
   constexpr ptrdiff_t m_bUseParticleCount = 0x1d1;
   constexpr ptrdiff_t m_PathParams = 0x1e0;

}

namespace C_OP_LockToSavedSequentialPathV2 {

   constexpr ptrdiff_t m_flFadeStart = 0x1c0;
   constexpr ptrdiff_t m_flFadeEnd = 0x1c4;
   constexpr ptrdiff_t m_bCPPairs = 0x1c8;
   constexpr ptrdiff_t m_PathParams = 0x1d0;

}

namespace C_OP_LockToSavedSequentialPath {

   constexpr ptrdiff_t m_flFadeStart = 0x1c4;
   constexpr ptrdiff_t m_flFadeEnd = 0x1c8;
   constexpr ptrdiff_t m_bCPPairs = 0x1cc;
   constexpr ptrdiff_t m_PathParams = 0x1d0;

}

namespace C_OP_RemapDotProductToScalar {

   constexpr ptrdiff_t m_nInputCP1 = 0x1c0;
   constexpr ptrdiff_t m_nInputCP2 = 0x1c4;
   constexpr ptrdiff_t m_nFieldOutput = 0x1c8;
   constexpr ptrdiff_t m_flInputMin = 0x1cc;
   constexpr ptrdiff_t m_flInputMax = 0x1d0;
   constexpr ptrdiff_t m_flOutputMin = 0x1d4;
   constexpr ptrdiff_t m_flOutputMax = 0x1d8;
   constexpr ptrdiff_t m_bUseParticleVelocity = 0x1dc;
   constexpr ptrdiff_t m_nSetMethod = 0x1e0;
   constexpr ptrdiff_t m_bActiveRange = 0x1e4;
   constexpr ptrdiff_t m_bUseParticleNormal = 0x1e5;

}

namespace C_OP_RemapCPtoScalar {

   constexpr ptrdiff_t m_nCPInput = 0x1c0;
   constexpr ptrdiff_t m_nFieldOutput = 0x1c4;
   constexpr ptrdiff_t m_nField = 0x1c8;
   constexpr ptrdiff_t m_flInputMin = 0x1cc;
   constexpr ptrdiff_t m_flInputMax = 0x1d0;
   constexpr ptrdiff_t m_flOutputMin = 0x1d4;
   constexpr ptrdiff_t m_flOutputMax = 0x1d8;
   constexpr ptrdiff_t m_flStartTime = 0x1dc;
   constexpr ptrdiff_t m_flEndTime = 0x1e0;
   constexpr ptrdiff_t m_flInterpRate = 0x1e4;
   constexpr ptrdiff_t m_nSetMethod = 0x1e8;

}

namespace C_OP_NormalLock {

   constexpr ptrdiff_t m_nControlPointNumber = 0x1c0;

}

namespace C_OP_RemapCPtoVector {

   constexpr ptrdiff_t m_nCPInput = 0x1c0;
   constexpr ptrdiff_t m_nFieldOutput = 0x1c4;
   constexpr ptrdiff_t m_nLocalSpaceCP = 0x1c8;
   constexpr ptrdiff_t m_vInputMin = 0x1cc;
   constexpr ptrdiff_t m_vInputMax = 0x1d8;
   constexpr ptrdiff_t m_vOutputMin = 0x1e4;
   constexpr ptrdiff_t m_vOutputMax = 0x1f0;
   constexpr ptrdiff_t m_flStartTime = 0x1fc;
   constexpr ptrdiff_t m_flEndTime = 0x200;
   constexpr ptrdiff_t m_flInterpRate = 0x204;
   constexpr ptrdiff_t m_nSetMethod = 0x208;
   constexpr ptrdiff_t m_bOffset = 0x20c;
   constexpr ptrdiff_t m_bAccelerate = 0x20d;

}

namespace C_OP_SetCPtoVector {

   constexpr ptrdiff_t m_nCPInput = 0x1c0;
   constexpr ptrdiff_t m_nFieldOutput = 0x1c4;

}

namespace C_OP_RemapTransformToVelocity {

   constexpr ptrdiff_t m_TransformInput = 0x1c0;

}

namespace C_OP_RemapVelocityToVector {

   constexpr ptrdiff_t m_nFieldOutput = 0x1c0;
   constexpr ptrdiff_t m_flScale = 0x1c4;
   constexpr ptrdiff_t m_bNormalize = 0x1c8;

}

namespace C_OP_RemapCPVelocityToVector {

   constexpr ptrdiff_t m_nControlPoint = 0x1c0;
   constexpr ptrdiff_t m_nFieldOutput = 0x1c4;
   constexpr ptrdiff_t m_flScale = 0x1c8;
   constexpr ptrdiff_t m_bNormalize = 0x1cc;

}

namespace C_OP_SetCPOrientationToDirection {

   constexpr ptrdiff_t m_nInputControlPoint = 0x1c0;
   constexpr ptrdiff_t m_nOutputControlPoint = 0x1c4;

}

namespace C_OP_RemapDirectionToCPToVector {

   constexpr ptrdiff_t m_nCP = 0x1c0;
   constexpr ptrdiff_t m_nFieldOutput = 0x1c4;
   constexpr ptrdiff_t m_flScale = 0x1c8;
   constexpr ptrdiff_t m_flOffsetRot = 0x1cc;
   constexpr ptrdiff_t m_vecOffsetAxis = 0x1d0;
   constexpr ptrdiff_t m_bNormalize = 0x1dc;
   constexpr ptrdiff_t m_nFieldStrength = 0x1e0;

}

namespace C_OP_RemapCrossProductOfTwoVectorsToVector {

   constexpr ptrdiff_t m_InputVec1 = 0x1c0;
   constexpr ptrdiff_t m_InputVec2 = 0x818;
   constexpr ptrdiff_t m_nFieldOutput = 0xe70;
   constexpr ptrdiff_t m_bNormalize = 0xe74;

}

namespace C_OP_NormalizeVector {

   constexpr ptrdiff_t m_nFieldOutput = 0x1c0;
   constexpr ptrdiff_t m_flScale = 0x1c4;

}

namespace C_OP_RemapControlPointDirectionToVector {

   constexpr ptrdiff_t m_nFieldOutput = 0x1c0;
   constexpr ptrdiff_t m_flScale = 0x1c4;
   constexpr ptrdiff_t m_nControlPointNumber = 0x1c8;

}

namespace C_OP_SetCPOrientationToGroundNormal {

   constexpr ptrdiff_t m_flInterpRate = 0x1c0;
   constexpr ptrdiff_t m_flMaxTraceLength = 0x1c4;
   constexpr ptrdiff_t m_flTolerance = 0x1c8;
   constexpr ptrdiff_t m_flTraceOffset = 0x1cc;
   constexpr ptrdiff_t m_CollisionGroupName = 0x1d0;
   constexpr ptrdiff_t m_nTraceSet = 0x250;
   constexpr ptrdiff_t m_nInputCP = 0x254;
   constexpr ptrdiff_t m_nOutputCP = 0x258;
   constexpr ptrdiff_t m_bIncludeWater = 0x268;

}

namespace C_OP_RemapTransformOrientationToRotations {

   constexpr ptrdiff_t m_TransformInput = 0x1c0;
   constexpr ptrdiff_t m_vecRotation = 0x228;
   constexpr ptrdiff_t m_bUseQuat = 0x234;
   constexpr ptrdiff_t m_bWriteNormal = 0x235;

}

namespace C_OP_RemapControlPointOrientationToRotation {

   constexpr ptrdiff_t m_nCP = 0x1c0;
   constexpr ptrdiff_t m_nFieldOutput = 0x1c4;
   constexpr ptrdiff_t m_flOffsetRot = 0x1c8;
   constexpr ptrdiff_t m_nComponent = 0x1cc;

}

namespace C_OP_LockToPointList {

   constexpr ptrdiff_t m_nFieldOutput = 0x1c0;
   constexpr ptrdiff_t m_pointList = 0x1c8;
   constexpr ptrdiff_t m_bPlaceAlongPath = 0x1e0;
   constexpr ptrdiff_t m_bClosedLoop = 0x1e1;
   constexpr ptrdiff_t m_nNumPointsAlongPath = 0x1e4;

}

namespace C_OP_RemapNamedModelElementOnceTimed {

   constexpr ptrdiff_t m_hModel = 0x1c0;
   constexpr ptrdiff_t m_inNames = 0x1c8;
   constexpr ptrdiff_t m_outNames = 0x1e0;
   constexpr ptrdiff_t m_fallbackNames = 0x1f8;
   constexpr ptrdiff_t m_bModelFromRenderer = 0x210;
   constexpr ptrdiff_t m_bProportional = 0x211;
   constexpr ptrdiff_t m_nFieldInput = 0x214;
   constexpr ptrdiff_t m_nFieldOutput = 0x218;
   constexpr ptrdiff_t m_flRemapTime = 0x21c;

}

namespace C_OP_RemapNamedModelElementEndCap {

   constexpr ptrdiff_t m_hModel = 0x1c0;
   constexpr ptrdiff_t m_inNames = 0x1c8;
   constexpr ptrdiff_t m_outNames = 0x1e0;
   constexpr ptrdiff_t m_fallbackNames = 0x1f8;
   constexpr ptrdiff_t m_bModelFromRenderer = 0x210;
   constexpr ptrdiff_t m_nFieldInput = 0x214;
   constexpr ptrdiff_t m_nFieldOutput = 0x218;

}

namespace C_OP_SetFromCPSnapshot {

   constexpr ptrdiff_t m_nControlPointNumber = 0x1c0;
   constexpr ptrdiff_t m_nAttributeToRead = 0x1c4;
   constexpr ptrdiff_t m_nAttributeToWrite = 0x1c8;
   constexpr ptrdiff_t m_nLocalSpaceCP = 0x1cc;
   constexpr ptrdiff_t m_bRandom = 0x1d0;
   constexpr ptrdiff_t m_bReverse = 0x1d1;
   constexpr ptrdiff_t m_nRandomSeed = 0x1d4;
   constexpr ptrdiff_t m_nSnapShotStartPoint = 0x1d8;
   constexpr ptrdiff_t m_nSnapShotIncrement = 0x330;
   constexpr ptrdiff_t m_flInterpolation = 0x488;
   constexpr ptrdiff_t m_bSubSample = 0x5e0;

}

namespace C_OP_VectorFieldSnapshot {

   constexpr ptrdiff_t m_nControlPointNumber = 0x1c0;
   constexpr ptrdiff_t m_nAttributeToWrite = 0x1c4;
   constexpr ptrdiff_t m_nLocalSpaceCP = 0x1c8;
   constexpr ptrdiff_t m_flInterpolation = 0x1d0;
   constexpr ptrdiff_t m_vecScale = 0x328;
   constexpr ptrdiff_t m_flBoundaryDampening = 0x980;
   constexpr ptrdiff_t m_bSetVelocity = 0x984;
   constexpr ptrdiff_t m_bLockToSurface = 0x985;
   constexpr ptrdiff_t m_flGridSpacing = 0x988;

}

namespace C_OP_SetAttributeToScalarExpression {

   constexpr ptrdiff_t m_nExpression = 0x1c0;
   constexpr ptrdiff_t m_flInput1 = 0x1c8;
   constexpr ptrdiff_t m_flInput2 = 0x320;
   constexpr ptrdiff_t m_nOutputField = 0x478;
   constexpr ptrdiff_t m_nSetMethod = 0x47c;

}

namespace C_OP_SetVectorAttributeToVectorExpression {

   constexpr ptrdiff_t m_nExpression = 0x1c0;
   constexpr ptrdiff_t m_vInput1 = 0x1c8;
   constexpr ptrdiff_t m_vInput2 = 0x820;
   constexpr ptrdiff_t m_nOutputField = 0xe78;
   constexpr ptrdiff_t m_nSetMethod = 0xe7c;
   constexpr ptrdiff_t m_bNormalizedOutput = 0xe80;

}

namespace C_OP_SetFloatAttributeToVectorExpression {

   constexpr ptrdiff_t m_nExpression = 0x1c0;
   constexpr ptrdiff_t m_vInput1 = 0x1c8;
   constexpr ptrdiff_t m_vInput2 = 0x820;
   constexpr ptrdiff_t m_flOutputRemap = 0xe78;
   constexpr ptrdiff_t m_nOutputField = 0xfd0;
   constexpr ptrdiff_t m_nSetMethod = 0xfd4;

}

namespace C_OP_MovementSkinnedPositionFromCPSnapshot {

   constexpr ptrdiff_t m_nSnapshotControlPointNumber = 0x1c0;
   constexpr ptrdiff_t m_nControlPointNumber = 0x1c4;
   constexpr ptrdiff_t m_bRandom = 0x1c8;
   constexpr ptrdiff_t m_nRandomSeed = 0x1cc;
   constexpr ptrdiff_t m_bSetNormal = 0x1d0;
   constexpr ptrdiff_t m_bSetRadius = 0x1d1;
   constexpr ptrdiff_t m_flIncrement = 0x1d8;
   constexpr ptrdiff_t m_nFullLoopIncrement = 0x330;
   constexpr ptrdiff_t m_nSnapShotStartPoint = 0x488;
   constexpr ptrdiff_t m_flInterpolation = 0x5e0;

}

namespace C_OP_MovementMoveAlongSkinnedCPSnapshot {

   constexpr ptrdiff_t m_nControlPointNumber = 0x1c0;
   constexpr ptrdiff_t m_nSnapshotControlPointNumber = 0x1c4;
   constexpr ptrdiff_t m_bSetNormal = 0x1c8;
   constexpr ptrdiff_t m_bSetRadius = 0x1c9;
   constexpr ptrdiff_t m_flInterpolation = 0x1d0;
   constexpr ptrdiff_t m_flTValue = 0x328;

}

namespace C_OP_QuantizeFloat {

   constexpr ptrdiff_t m_InputValue = 0x1c0;
   constexpr ptrdiff_t m_nOutputField = 0x318;

}

namespace C_OP_SetFloatCollection {

   constexpr ptrdiff_t m_InputValue = 0x1c0;
   constexpr ptrdiff_t m_nOutputField = 0x318;
   constexpr ptrdiff_t m_nSetMethod = 0x31c;
   constexpr ptrdiff_t m_Lerp = 0x320;

}

namespace C_OP_SetFloat {

   constexpr ptrdiff_t m_InputValue = 0x1c0;
   constexpr ptrdiff_t m_nOutputField = 0x318;
   constexpr ptrdiff_t m_nSetMethod = 0x31c;
   constexpr ptrdiff_t m_Lerp = 0x320;
   constexpr ptrdiff_t m_bUseNewCode = 0x478;

}

namespace C_OP_SetVec {

   constexpr ptrdiff_t m_InputValue = 0x1c0;
   constexpr ptrdiff_t m_nOutputField = 0x818;
   constexpr ptrdiff_t m_nSetMethod = 0x81c;
   constexpr ptrdiff_t m_Lerp = 0x820;
   constexpr ptrdiff_t m_bNormalizedOutput = 0x978;

}

namespace C_OP_DragRelativeToPlane {

   constexpr ptrdiff_t m_flDragAtPlane = 0x1c0;
   constexpr ptrdiff_t m_flFalloff = 0x318;
   constexpr ptrdiff_t m_bDirectional = 0x470;
   constexpr ptrdiff_t m_vecPlaneNormal = 0x478;
   constexpr ptrdiff_t m_nControlPointNumber = 0xad0;

}

namespace C_OP_RemapDensityGradientToVectorAttribute {

   constexpr ptrdiff_t m_flRadiusScale = 0x1c0;
   constexpr ptrdiff_t m_nFieldOutput = 0x1c4;

}

namespace C_OP_LockPoints {

   constexpr ptrdiff_t m_nMinCol = 0x1c0;
   constexpr ptrdiff_t m_nMaxCol = 0x1c4;
   constexpr ptrdiff_t m_nMinRow = 0x1c8;
   constexpr ptrdiff_t m_nMaxRow = 0x1cc;
   constexpr ptrdiff_t m_nControlPoint = 0x1d0;
   constexpr ptrdiff_t m_flBlendValue = 0x1d4;

}

namespace C_OP_RemapDistanceToLineSegmentBase {

   constexpr ptrdiff_t m_nCP0 = 0x1c0;
   constexpr ptrdiff_t m_nCP1 = 0x1c4;
   constexpr ptrdiff_t m_flMinInputValue = 0x1c8;
   constexpr ptrdiff_t m_flMaxInputValue = 0x1cc;
   constexpr ptrdiff_t m_bInfiniteLine = 0x1d0;

}

namespace C_OP_RemapDistanceToLineSegmentToScalar {

   constexpr ptrdiff_t m_nFieldOutput = 0x1e0;
   constexpr ptrdiff_t m_flMinOutputValue = 0x1e4;
   constexpr ptrdiff_t m_flMaxOutputValue = 0x1e8;

}

namespace C_OP_RemapDistanceToLineSegmentToVector {

   constexpr ptrdiff_t m_nFieldOutput = 0x1e0;
   constexpr ptrdiff_t m_vMinOutputValue = 0x1e4;
   constexpr ptrdiff_t m_vMaxOutputValue = 0x1f0;

}

namespace C_OP_TeleportBeam {

   constexpr ptrdiff_t m_nCPPosition = 0x1c0;
   constexpr ptrdiff_t m_nCPVelocity = 0x1c4;
   constexpr ptrdiff_t m_nCPMisc = 0x1c8;
   constexpr ptrdiff_t m_nCPColor = 0x1cc;
   constexpr ptrdiff_t m_nCPInvalidColor = 0x1d0;
   constexpr ptrdiff_t m_nCPExtraArcData = 0x1d4;
   constexpr ptrdiff_t m_vGravity = 0x1d8;
   constexpr ptrdiff_t m_flArcMaxDuration = 0x1e4;
   constexpr ptrdiff_t m_flSegmentBreak = 0x1e8;
   constexpr ptrdiff_t m_flArcSpeed = 0x1ec;
   constexpr ptrdiff_t m_flAlpha = 0x1f0;

}

namespace C_OP_CycleScalar {

   constexpr ptrdiff_t m_nDestField = 0x1c0;
   constexpr ptrdiff_t m_flStartValue = 0x1c4;
   constexpr ptrdiff_t m_flEndValue = 0x1c8;
   constexpr ptrdiff_t m_flCycleTime = 0x1cc;
   constexpr ptrdiff_t m_bDoNotRepeatCycle = 0x1d0;
   constexpr ptrdiff_t m_bSynchronizeParticles = 0x1d1;
   constexpr ptrdiff_t m_nCPScale = 0x1d4;
   constexpr ptrdiff_t m_nCPFieldMin = 0x1d8;
   constexpr ptrdiff_t m_nCPFieldMax = 0x1dc;
   constexpr ptrdiff_t m_nSetMethod = 0x1e0;

}

namespace C_OP_CalculateVectorAttribute {

   constexpr ptrdiff_t m_vStartValue = 0x1c0;
   constexpr ptrdiff_t m_nFieldInput1 = 0x1cc;
   constexpr ptrdiff_t m_flInputScale1 = 0x1d0;
   constexpr ptrdiff_t m_nFieldInput2 = 0x1d4;
   constexpr ptrdiff_t m_flInputScale2 = 0x1d8;
   constexpr ptrdiff_t m_nControlPointInput1 = 0x1dc;
   constexpr ptrdiff_t m_flControlPointScale1 = 0x1f0;
   constexpr ptrdiff_t m_nControlPointInput2 = 0x1f4;
   constexpr ptrdiff_t m_flControlPointScale2 = 0x208;
   constexpr ptrdiff_t m_nFieldOutput = 0x20c;
   constexpr ptrdiff_t m_vFinalOutputScale = 0x210;

}

namespace C_OP_ColorAdjustHSL {

   constexpr ptrdiff_t m_flHueAdjust = 0x1c0;
   constexpr ptrdiff_t m_flSaturationAdjust = 0x318;
   constexpr ptrdiff_t m_flLightnessAdjust = 0x470;

}

namespace C_OP_ConnectParentParticleToNearest {

   constexpr ptrdiff_t m_nFirstControlPoint = 0x1c0;
   constexpr ptrdiff_t m_nSecondControlPoint = 0x1c4;

}

namespace C_OP_UpdateLightSource {

   constexpr ptrdiff_t m_vColorTint = 0x1c0;
   constexpr ptrdiff_t m_flBrightnessScale = 0x1c4;
   constexpr ptrdiff_t m_flRadiusScale = 0x1c8;
   constexpr ptrdiff_t m_flMinimumLightingRadius = 0x1cc;
   constexpr ptrdiff_t m_flMaximumLightingRadius = 0x1d0;
   constexpr ptrdiff_t m_flPositionDampingConstant = 0x1d4;

}

namespace C_OP_RemapSpeedtoCP {

   constexpr ptrdiff_t m_nInControlPointNumber = 0x1d0;
   constexpr ptrdiff_t m_nOutControlPointNumber = 0x1d4;
   constexpr ptrdiff_t m_nField = 0x1d8;
   constexpr ptrdiff_t m_flInputMin = 0x1dc;
   constexpr ptrdiff_t m_flInputMax = 0x1e0;
   constexpr ptrdiff_t m_flOutputMin = 0x1e4;
   constexpr ptrdiff_t m_flOutputMax = 0x1e8;
   constexpr ptrdiff_t m_bUseDeltaV = 0x1ec;

}

namespace C_OP_RemapAverageHitboxSpeedtoCP {

   constexpr ptrdiff_t m_nInControlPointNumber = 0x1d0;
   constexpr ptrdiff_t m_nOutControlPointNumber = 0x1d4;
   constexpr ptrdiff_t m_nField = 0x1d8;
   constexpr ptrdiff_t m_nHitboxDataType = 0x1dc;
   constexpr ptrdiff_t m_flInputMin = 0x1e0;
   constexpr ptrdiff_t m_flInputMax = 0x338;
   constexpr ptrdiff_t m_flOutputMin = 0x490;
   constexpr ptrdiff_t m_flOutputMax = 0x5e8;
   constexpr ptrdiff_t m_nHeightControlPointNumber = 0x740;
   constexpr ptrdiff_t m_vecComparisonVelocity = 0x748;
   constexpr ptrdiff_t m_HitboxSetName = 0xda0;

}

namespace C_OP_RemapDotProductToCP {

   constexpr ptrdiff_t m_nInputCP1 = 0x1d0;
   constexpr ptrdiff_t m_nInputCP2 = 0x1d4;
   constexpr ptrdiff_t m_nOutputCP = 0x1d8;
   constexpr ptrdiff_t m_nOutVectorField = 0x1dc;
   constexpr ptrdiff_t m_flInputMin = 0x1e0;
   constexpr ptrdiff_t m_flInputMax = 0x338;
   constexpr ptrdiff_t m_flOutputMin = 0x490;
   constexpr ptrdiff_t m_flOutputMax = 0x5e8;

}

namespace C_OP_SetControlPointFieldToScalarExpression {

   constexpr ptrdiff_t m_nExpression = 0x1d0;
   constexpr ptrdiff_t m_flInput1 = 0x1d8;
   constexpr ptrdiff_t m_flInput2 = 0x330;
   constexpr ptrdiff_t m_flOutputRemap = 0x488;
   constexpr ptrdiff_t m_nOutputCP = 0x5e0;
   constexpr ptrdiff_t m_nOutVectorField = 0x5e4;

}

namespace C_OP_SetControlPointFieldFromVectorExpression {

   constexpr ptrdiff_t m_nExpression = 0x1d0;
   constexpr ptrdiff_t m_vecInput1 = 0x1d8;
   constexpr ptrdiff_t m_vecInput2 = 0x830;
   constexpr ptrdiff_t m_flOutputRemap = 0xe88;
   constexpr ptrdiff_t m_nOutputCP = 0xfe0;
   constexpr ptrdiff_t m_nOutVectorField = 0xfe4;

}

namespace C_OP_SetControlPointToVectorExpression {

   constexpr ptrdiff_t m_nExpression = 0x1d0;
   constexpr ptrdiff_t m_nOutputCP = 0x1d4;
   constexpr ptrdiff_t m_vInput1 = 0x1d8;
   constexpr ptrdiff_t m_vInput2 = 0x830;
   constexpr ptrdiff_t m_bNormalizedOutput = 0xe88;

}

namespace C_OP_RemapModelVolumetoCP {

   constexpr ptrdiff_t m_nBBoxType = 0x1d0;
   constexpr ptrdiff_t m_nInControlPointNumber = 0x1d4;
   constexpr ptrdiff_t m_nOutControlPointNumber = 0x1d8;
   constexpr ptrdiff_t m_nOutControlPointMaxNumber = 0x1dc;
   constexpr ptrdiff_t m_nField = 0x1e0;
   constexpr ptrdiff_t m_flInputMin = 0x1e4;
   constexpr ptrdiff_t m_flInputMax = 0x1e8;
   constexpr ptrdiff_t m_flOutputMin = 0x1ec;
   constexpr ptrdiff_t m_flOutputMax = 0x1f0;

}

namespace C_OP_RemapBoundingVolumetoCP {

   constexpr ptrdiff_t m_nOutControlPointNumber = 0x1d0;
   constexpr ptrdiff_t m_flInputMin = 0x1d4;
   constexpr ptrdiff_t m_flInputMax = 0x1d8;
   constexpr ptrdiff_t m_flOutputMin = 0x1dc;
   constexpr ptrdiff_t m_flOutputMax = 0x1e0;

}

namespace C_OP_RemapAverageScalarValuetoCP {

   constexpr ptrdiff_t m_nOutControlPointNumber = 0x1d0;
   constexpr ptrdiff_t m_nOutVectorField = 0x1d4;
   constexpr ptrdiff_t m_nField = 0x1d8;
   constexpr ptrdiff_t m_flInputMin = 0x1dc;
   constexpr ptrdiff_t m_flInputMax = 0x1e0;
   constexpr ptrdiff_t m_flOutputMin = 0x1e4;
   constexpr ptrdiff_t m_flOutputMax = 0x1e8;

}

namespace C_OP_RampCPLinearRandom {

   constexpr ptrdiff_t m_nOutControlPointNumber = 0x1d0;
   constexpr ptrdiff_t m_vecRateMin = 0x1d4;
   constexpr ptrdiff_t m_vecRateMax = 0x1e0;

}

namespace C_OP_SetParentControlPointsToChildCP {

   constexpr ptrdiff_t m_nChildGroupID = 0x1d0;
   constexpr ptrdiff_t m_nChildControlPoint = 0x1d4;
   constexpr ptrdiff_t m_nNumControlPoints = 0x1d8;
   constexpr ptrdiff_t m_nFirstSourcePoint = 0x1dc;
   constexpr ptrdiff_t m_bSetOrientation = 0x1e0;

}

namespace C_OP_SetVariable {

   constexpr ptrdiff_t m_variableReference = 0x1d0;
   constexpr ptrdiff_t m_transformInput = 0x210;
   constexpr ptrdiff_t m_positionOffset = 0x278;
   constexpr ptrdiff_t m_rotationOffset = 0x284;
   constexpr ptrdiff_t m_vecInput = 0x290;
   constexpr ptrdiff_t m_floatInput = 0x8e8;

}

namespace C_OP_SetControlPointPositions {

   constexpr ptrdiff_t m_bUseWorldLocation = 0x1d0;
   constexpr ptrdiff_t m_bOrient = 0x1d1;
   constexpr ptrdiff_t m_bSetOnce = 0x1d2;
   constexpr ptrdiff_t m_nCP1 = 0x1d4;
   constexpr ptrdiff_t m_nCP2 = 0x1d8;
   constexpr ptrdiff_t m_nCP3 = 0x1dc;
   constexpr ptrdiff_t m_nCP4 = 0x1e0;
   constexpr ptrdiff_t m_vecCP1Pos = 0x1e4;
   constexpr ptrdiff_t m_vecCP2Pos = 0x1f0;
   constexpr ptrdiff_t m_vecCP3Pos = 0x1fc;
   constexpr ptrdiff_t m_vecCP4Pos = 0x208;
   constexpr ptrdiff_t m_nHeadLocation = 0x214;

}

namespace C_OP_SetSingleControlPointPosition {

   constexpr ptrdiff_t m_bSetOnce = 0x1d0;
   constexpr ptrdiff_t m_nCP1 = 0x1d4;
   constexpr ptrdiff_t m_vecCP1Pos = 0x1d8;
   constexpr ptrdiff_t m_transformInput = 0x830;

}

namespace C_OP_SetControlPointPositionToRandomActiveCP {

   constexpr ptrdiff_t m_nCP1 = 0x1d0;
   constexpr ptrdiff_t m_nHeadLocationMin = 0x1d4;
   constexpr ptrdiff_t m_nHeadLocationMax = 0x1d8;
   constexpr ptrdiff_t m_flResetRate = 0x1e0;

}

namespace C_OP_SetRandomControlPointPosition {

   constexpr ptrdiff_t m_bUseWorldLocation = 0x1d0;
   constexpr ptrdiff_t m_bOrient = 0x1d1;
   constexpr ptrdiff_t m_nCP1 = 0x1d4;
   constexpr ptrdiff_t m_nHeadLocation = 0x1d8;
   constexpr ptrdiff_t m_flReRandomRate = 0x1e0;
   constexpr ptrdiff_t m_vecCPMinPos = 0x338;
   constexpr ptrdiff_t m_vecCPMaxPos = 0x344;
   constexpr ptrdiff_t m_flInterpolation = 0x350;

}

namespace C_OP_SetControlPointOrientation {

   constexpr ptrdiff_t m_bUseWorldLocation = 0x1d0;
   constexpr ptrdiff_t m_bRandomize = 0x1d2;
   constexpr ptrdiff_t m_bSetOnce = 0x1d3;
   constexpr ptrdiff_t m_nCP = 0x1d4;
   constexpr ptrdiff_t m_nHeadLocation = 0x1d8;
   constexpr ptrdiff_t m_vecRotation = 0x1dc;
   constexpr ptrdiff_t m_vecRotationB = 0x1e8;
   constexpr ptrdiff_t m_flInterpolation = 0x1f8;

}

namespace C_OP_SetControlPointFromObjectScale {

   constexpr ptrdiff_t m_nCPInput = 0x1d0;
   constexpr ptrdiff_t m_nCPOutput = 0x1d4;

}

namespace C_OP_DistanceBetweenCPsToCP {

   constexpr ptrdiff_t m_nStartCP = 0x1d0;
   constexpr ptrdiff_t m_nEndCP = 0x1d4;
   constexpr ptrdiff_t m_nOutputCP = 0x1d8;
   constexpr ptrdiff_t m_nOutputCPField = 0x1dc;
   constexpr ptrdiff_t m_bSetOnce = 0x1e0;
   constexpr ptrdiff_t m_flInputMin = 0x1e4;
   constexpr ptrdiff_t m_flInputMax = 0x1e8;
   constexpr ptrdiff_t m_flOutputMin = 0x1ec;
   constexpr ptrdiff_t m_flOutputMax = 0x1f0;
   constexpr ptrdiff_t m_flMaxTraceLength = 0x1f4;
   constexpr ptrdiff_t m_flLOSScale = 0x1f8;
   constexpr ptrdiff_t m_bLOS = 0x1fc;
   constexpr ptrdiff_t m_CollisionGroupName = 0x1fd;
   constexpr ptrdiff_t m_nTraceSet = 0x280;
   constexpr ptrdiff_t m_nSetParent = 0x284;

}

namespace C_OP_SetControlPointToPlayer {

   constexpr ptrdiff_t m_nCP1 = 0x1d0;
   constexpr ptrdiff_t m_vecCP1Pos = 0x1d4;
   constexpr ptrdiff_t m_bOrientToEyes = 0x1e0;

}

namespace C_OP_SetControlPointToHand {

   constexpr ptrdiff_t m_nCP1 = 0x1d0;
   constexpr ptrdiff_t m_nHand = 0x1d4;
   constexpr ptrdiff_t m_vecCP1Pos = 0x1d8;
   constexpr ptrdiff_t m_bOrientToHand = 0x1e4;

}

namespace C_OP_SetControlPointToHMD {

   constexpr ptrdiff_t m_nCP1 = 0x1d0;
   constexpr ptrdiff_t m_vecCP1Pos = 0x1d4;
   constexpr ptrdiff_t m_bOrientToHMD = 0x1e0;

}

namespace C_OP_SetControlPointPositionToTimeOfDayValue {

   constexpr ptrdiff_t m_nControlPointNumber = 0x1d0;
   constexpr ptrdiff_t m_pszTimeOfDayParameter = 0x1d4;
   constexpr ptrdiff_t m_vecDefaultValue = 0x254;

}

namespace C_OP_SetControlPointToCenter {

   constexpr ptrdiff_t m_nCP1 = 0x1d0;
   constexpr ptrdiff_t m_vecCP1Pos = 0x1d4;
   constexpr ptrdiff_t m_nSetParent = 0x1e0;

}

namespace C_OP_SetControlPointToCPVelocity {

   constexpr ptrdiff_t m_nCPInput = 0x1d0;
   constexpr ptrdiff_t m_nCPOutputVel = 0x1d4;
   constexpr ptrdiff_t m_bNormalize = 0x1d8;
   constexpr ptrdiff_t m_nCPOutputMag = 0x1dc;
   constexpr ptrdiff_t m_nCPField = 0x1e0;
   constexpr ptrdiff_t m_vecComparisonVelocity = 0x1e8;

}

namespace C_OP_SetControlPointOrientationToCPVelocity {

   constexpr ptrdiff_t m_nCPInput = 0x1d0;
   constexpr ptrdiff_t m_nCPOutput = 0x1d4;

}

namespace C_OP_StopAfterCPDuration {

   constexpr ptrdiff_t m_flDuration = 0x1d0;
   constexpr ptrdiff_t m_bDestroyImmediately = 0x328;
   constexpr ptrdiff_t m_bPlayEndCap = 0x329;

}

namespace C_OP_SetControlPointRotation {

   constexpr ptrdiff_t m_vecRotAxis = 0x1d0;
   constexpr ptrdiff_t m_flRotRate = 0x828;
   constexpr ptrdiff_t m_nCP = 0x980;
   constexpr ptrdiff_t m_nLocalCP = 0x984;

}

namespace C_OP_RemapCPtoCP {

   constexpr ptrdiff_t m_nInputControlPoint = 0x1d0;
   constexpr ptrdiff_t m_nOutputControlPoint = 0x1d4;
   constexpr ptrdiff_t m_nInputField = 0x1d8;
   constexpr ptrdiff_t m_nOutputField = 0x1dc;
   constexpr ptrdiff_t m_flInputMin = 0x1e0;
   constexpr ptrdiff_t m_flInputMax = 0x1e4;
   constexpr ptrdiff_t m_flOutputMin = 0x1e8;
   constexpr ptrdiff_t m_flOutputMax = 0x1ec;
   constexpr ptrdiff_t m_bDerivative = 0x1f0;
   constexpr ptrdiff_t m_flInterpRate = 0x1f4;

}

namespace C_OP_HSVShiftToCP {

   constexpr ptrdiff_t m_nColorCP = 0x1d0;
   constexpr ptrdiff_t m_nColorGemEnableCP = 0x1d4;
   constexpr ptrdiff_t m_nOutputCP = 0x1d8;
   constexpr ptrdiff_t m_DefaultHSVColor = 0x1dc;

}

namespace C_OP_SetControlPointToImpactPoint {

   constexpr ptrdiff_t m_nCPOut = 0x1d0;
   constexpr ptrdiff_t m_nCPIn = 0x1d4;
   constexpr ptrdiff_t m_flUpdateRate = 0x1d8;
   constexpr ptrdiff_t m_flTraceLength = 0x1e0;
   constexpr ptrdiff_t m_flStartOffset = 0x338;
   constexpr ptrdiff_t m_flOffset = 0x33c;
   constexpr ptrdiff_t m_vecTraceDir = 0x340;
   constexpr ptrdiff_t m_CollisionGroupName = 0x34c;
   constexpr ptrdiff_t m_nTraceSet = 0x3cc;
   constexpr ptrdiff_t m_bSetToEndpoint = 0x3d0;
   constexpr ptrdiff_t m_bTraceToClosestSurface = 0x3d1;
   constexpr ptrdiff_t m_bIncludeWater = 0x3d2;

}

namespace C_OP_SetCPOrientationToPointAtCP {

   constexpr ptrdiff_t m_nInputCP = 0x1d0;
   constexpr ptrdiff_t m_nOutputCP = 0x1d4;
   constexpr ptrdiff_t m_flInterpolation = 0x1d8;
   constexpr ptrdiff_t m_b2DOrientation = 0x330;
   constexpr ptrdiff_t m_bAvoidSingularity = 0x331;
   constexpr ptrdiff_t m_bPointAway = 0x332;

}

namespace C_OP_EnableChildrenFromParentParticleCount {

   constexpr ptrdiff_t m_nChildGroupID = 0x1d0;
   constexpr ptrdiff_t m_nFirstChild = 0x1d4;
   constexpr ptrdiff_t m_nNumChildrenToEnable = 0x1d8;
   constexpr ptrdiff_t m_bDisableChildren = 0x330;
   constexpr ptrdiff_t m_bPlayEndcapOnStop = 0x331;
   constexpr ptrdiff_t m_bDestroyImmediately = 0x332;

}

namespace C_OP_SelectivelyEnableChildren {

   constexpr ptrdiff_t m_nChildGroupID = 0x1d0;
   constexpr ptrdiff_t m_nFirstChild = 0x328;
   constexpr ptrdiff_t m_nNumChildrenToEnable = 0x480;
   constexpr ptrdiff_t m_bPlayEndcapOnStop = 0x5d8;
   constexpr ptrdiff_t m_bDestroyImmediately = 0x5d9;

}

namespace C_OP_PlayEndCapWhenFinished {

   constexpr ptrdiff_t m_bFireOnEmissionEnd = 0x1d0;
   constexpr ptrdiff_t m_bIncludeChildren = 0x1d1;

}

namespace C_OP_ForceControlPointStub {

   constexpr ptrdiff_t m_ControlPoint = 0x1d0;

}

namespace C_OP_DriveCPFromGlobalSoundFloat {

   constexpr ptrdiff_t m_nOutputControlPoint = 0x1d0;
   constexpr ptrdiff_t m_nOutputField = 0x1d4;
   constexpr ptrdiff_t m_flInputMin = 0x1d8;
   constexpr ptrdiff_t m_flInputMax = 0x1dc;
   constexpr ptrdiff_t m_flOutputMin = 0x1e0;
   constexpr ptrdiff_t m_flOutputMax = 0x1e4;
   constexpr ptrdiff_t m_StackName = 0x1e8;
   constexpr ptrdiff_t m_OperatorName = 0x1f0;
   constexpr ptrdiff_t m_FieldName = 0x1f8;

}

namespace C_OP_SetControlPointFieldToWater {

   constexpr ptrdiff_t m_nSourceCP = 0x1d0;
   constexpr ptrdiff_t m_nDestCP = 0x1d4;
   constexpr ptrdiff_t m_nCPField = 0x1d8;

}

namespace C_OP_SetControlPointToWaterSurface {

   constexpr ptrdiff_t m_nSourceCP = 0x1d0;
   constexpr ptrdiff_t m_nDestCP = 0x1d4;
   constexpr ptrdiff_t m_nFlowCP = 0x1d8;
   constexpr ptrdiff_t m_nActiveCP = 0x1dc;
   constexpr ptrdiff_t m_nActiveCPField = 0x1e0;
   constexpr ptrdiff_t m_flRetestRate = 0x1e8;
   constexpr ptrdiff_t m_bAdaptiveThreshold = 0x340;

}

namespace C_OP_RepeatedTriggerChildGroup {

   constexpr ptrdiff_t m_nChildGroupID = 0x1d0;
   constexpr ptrdiff_t m_flClusterRefireTime = 0x1d8;
   constexpr ptrdiff_t m_flClusterSize = 0x330;
   constexpr ptrdiff_t m_flClusterCooldown = 0x488;
   constexpr ptrdiff_t m_bLimitChildCount = 0x5e0;

}

namespace C_OP_ChooseRandomChildrenInGroup {

   constexpr ptrdiff_t m_nChildGroupID = 0x1d0;
   constexpr ptrdiff_t m_flNumberOfChildren = 0x1d8;

}

namespace C_OP_SetSimulationRate {

   constexpr ptrdiff_t m_flSimulationScale = 0x1d0;

}

namespace C_OP_ControlPointToRadialScreenSpace {

   constexpr ptrdiff_t m_nCPIn = 0x1d0;
   constexpr ptrdiff_t m_vecCP1Pos = 0x1d4;
   constexpr ptrdiff_t m_nCPOut = 0x1e0;
   constexpr ptrdiff_t m_nCPOutField = 0x1e4;
   constexpr ptrdiff_t m_nCPSSPosOut = 0x1e8;

}

namespace C_OP_LightningSnapshotGenerator {

   constexpr ptrdiff_t m_nCPSnapshot = 0x1d0;
   constexpr ptrdiff_t m_nCPStartPnt = 0x1d4;
   constexpr ptrdiff_t m_nCPEndPnt = 0x1d8;
   constexpr ptrdiff_t m_flSegments = 0x1e0;
   constexpr ptrdiff_t m_flOffset = 0x338;
   constexpr ptrdiff_t m_flOffsetDecay = 0x490;
   constexpr ptrdiff_t m_flRecalcRate = 0x5e8;
   constexpr ptrdiff_t m_flUVScale = 0x740;
   constexpr ptrdiff_t m_flUVOffset = 0x898;
   constexpr ptrdiff_t m_flSplitRate = 0x9f0;
   constexpr ptrdiff_t m_flBranchTwist = 0xb48;
   constexpr ptrdiff_t m_nBranchBehavior = 0xca0;
   constexpr ptrdiff_t m_flRadiusStart = 0xca8;
   constexpr ptrdiff_t m_flRadiusEnd = 0xe00;
   constexpr ptrdiff_t m_flDedicatedPool = 0xf58;

}

namespace C_OP_RemapExternalWindToCP {

   constexpr ptrdiff_t m_nCP = 0x1d0;
   constexpr ptrdiff_t m_nCPOutput = 0x1d4;
   constexpr ptrdiff_t m_vecScale = 0x1d8;
   constexpr ptrdiff_t m_bSetMagnitude = 0x830;
   constexpr ptrdiff_t m_nOutVectorField = 0x834;

}

namespace C_OP_SetGravityToCP {

   constexpr ptrdiff_t m_nCPInput = 0x1d0;
   constexpr ptrdiff_t m_nCPOutput = 0x1d4;
   constexpr ptrdiff_t m_flScale = 0x1d8;
   constexpr ptrdiff_t m_bSetOrientation = 0x330;
   constexpr ptrdiff_t m_bSetZDown = 0x331;

}

namespace C_OP_QuantizeCPComponent {

   constexpr ptrdiff_t m_flInputValue = 0x1d0;
   constexpr ptrdiff_t m_nCPOutput = 0x328;
   constexpr ptrdiff_t m_nOutVectorField = 0x32c;
   constexpr ptrdiff_t m_flQuantizeValue = 0x330;

}

namespace C_OP_RenderPoints {

   constexpr ptrdiff_t m_hMaterial = 0x200;

}

namespace CBaseTrailRenderer {

   constexpr ptrdiff_t m_nOrientationType = 0x2470;
   constexpr ptrdiff_t m_nOrientationControlPoint = 0x2474;
   constexpr ptrdiff_t m_flMinSize = 0x2478;
   constexpr ptrdiff_t m_flMaxSize = 0x247c;
   constexpr ptrdiff_t m_flStartFadeSize = 0x2480;
   constexpr ptrdiff_t m_flEndFadeSize = 0x25d8;
   constexpr ptrdiff_t m_bClampV = 0x2730;

}

namespace C_OP_RenderTrails {

   constexpr ptrdiff_t m_bEnableFadingAndClamping = 0x2740;
   constexpr ptrdiff_t m_flStartFadeDot = 0x2744;
   constexpr ptrdiff_t m_flEndFadeDot = 0x2748;
   constexpr ptrdiff_t m_nPrevPntSource = 0x274c;
   constexpr ptrdiff_t m_flMaxLength = 0x2750;
   constexpr ptrdiff_t m_flMinLength = 0x2754;
   constexpr ptrdiff_t m_bIgnoreDT = 0x2758;
   constexpr ptrdiff_t m_flConstrainRadiusToLengthRatio = 0x275c;
   constexpr ptrdiff_t m_flLengthScale = 0x2760;
   constexpr ptrdiff_t m_flLengthFadeInTime = 0x2764;
   constexpr ptrdiff_t m_flRadiusHeadTaper = 0x2768;
   constexpr ptrdiff_t m_vecHeadColorScale = 0x28c0;
   constexpr ptrdiff_t m_flHeadAlphaScale = 0x2f18;
   constexpr ptrdiff_t m_flRadiusTaper = 0x3070;
   constexpr ptrdiff_t m_vecTailColorScale = 0x31c8;
   constexpr ptrdiff_t m_flTailAlphaScale = 0x3820;
   constexpr ptrdiff_t m_nHorizCropField = 0x3978;
   constexpr ptrdiff_t m_nVertCropField = 0x397c;
   constexpr ptrdiff_t m_flForwardShift = 0x3980;
   constexpr ptrdiff_t m_bFlipUVBasedOnPitchYaw = 0x3984;

}

namespace C_OP_RenderRopes {

   constexpr ptrdiff_t m_bEnableFadingAndClamping = 0x2470;
   constexpr ptrdiff_t m_flMinSize = 0x2474;
   constexpr ptrdiff_t m_flMaxSize = 0x2478;
   constexpr ptrdiff_t m_flStartFadeSize = 0x247c;
   constexpr ptrdiff_t m_flEndFadeSize = 0x2480;
   constexpr ptrdiff_t m_flStartFadeDot = 0x2484;
   constexpr ptrdiff_t m_flEndFadeDot = 0x2488;
   constexpr ptrdiff_t m_flRadiusTaper = 0x248c;
   constexpr ptrdiff_t m_nMinTesselation = 0x2490;
   constexpr ptrdiff_t m_nMaxTesselation = 0x2494;
   constexpr ptrdiff_t m_flTessScale = 0x2498;
   constexpr ptrdiff_t m_flTextureVWorldSize = 0x24a0;
   constexpr ptrdiff_t m_flTextureVScrollRate = 0x25f8;
   constexpr ptrdiff_t m_flTextureVOffset = 0x2750;
   constexpr ptrdiff_t m_nTextureVParamsCP = 0x28a8;
   constexpr ptrdiff_t m_bClampV = 0x28ac;
   constexpr ptrdiff_t m_nScaleCP1 = 0x28b0;
   constexpr ptrdiff_t m_nScaleCP2 = 0x28b4;
   constexpr ptrdiff_t m_flScaleVSizeByControlPointDistance = 0x28b8;
   constexpr ptrdiff_t m_flScaleVScrollByControlPointDistance = 0x28bc;
   constexpr ptrdiff_t m_flScaleVOffsetByControlPointDistance = 0x28c0;
   constexpr ptrdiff_t m_bUseScalarForTextureCoordinate = 0x28c5;
   constexpr ptrdiff_t m_nScalarFieldForTextureCoordinate = 0x28c8;
   constexpr ptrdiff_t m_flScalarAttributeTextureCoordScale = 0x28cc;
   constexpr ptrdiff_t m_bReverseOrder = 0x28d0;
   constexpr ptrdiff_t m_bClosedLoop = 0x28d1;
   constexpr ptrdiff_t m_nOrientationType = 0x28d4;
   constexpr ptrdiff_t m_nVectorFieldForOrientation = 0x28d8;
   constexpr ptrdiff_t m_bDrawAsOpaque = 0x28dc;
   constexpr ptrdiff_t m_bGenerateNormals = 0x28dd;

}

namespace C_OP_RenderAsModels {

   constexpr ptrdiff_t m_ModelList = 0x200;
   constexpr ptrdiff_t m_flModelScale = 0x21c;
   constexpr ptrdiff_t m_bFitToModelSize = 0x220;
   constexpr ptrdiff_t m_bNonUniformScaling = 0x221;
   constexpr ptrdiff_t m_nXAxisScalingAttribute = 0x224;
   constexpr ptrdiff_t m_nYAxisScalingAttribute = 0x228;
   constexpr ptrdiff_t m_nZAxisScalingAttribute = 0x22c;
   constexpr ptrdiff_t m_nSizeCullBloat = 0x230;

}

namespace C_OP_RenderLights {

   constexpr ptrdiff_t m_flAnimationRate = 0x210;
   constexpr ptrdiff_t m_nAnimationType = 0x214;
   constexpr ptrdiff_t m_bAnimateInFPS = 0x218;
   constexpr ptrdiff_t m_flMinSize = 0x21c;
   constexpr ptrdiff_t m_flMaxSize = 0x220;
   constexpr ptrdiff_t m_flStartFadeSize = 0x224;
   constexpr ptrdiff_t m_flEndFadeSize = 0x228;

}

namespace C_OP_RenderBlobs {

   constexpr ptrdiff_t m_cubeWidth = 0x200;
   constexpr ptrdiff_t m_cutoffRadius = 0x358;
   constexpr ptrdiff_t m_renderRadius = 0x4b0;
   constexpr ptrdiff_t m_nScaleCP = 0x608;
   constexpr ptrdiff_t m_MaterialVars = 0x610;
   constexpr ptrdiff_t m_hMaterial = 0x640;

}

namespace C_OP_RenderGpuImplicit {

   constexpr ptrdiff_t m_bUsePerParticleRadius = 0x200;
   constexpr ptrdiff_t m_fGridSize = 0x208;
   constexpr ptrdiff_t m_fRadiusScale = 0x360;
   constexpr ptrdiff_t m_fIsosurfaceThreshold = 0x4b8;
   constexpr ptrdiff_t m_nScaleCP = 0x610;
   constexpr ptrdiff_t m_hMaterial = 0x618;

}

namespace C_OP_RenderScreenVelocityRotate {

   constexpr ptrdiff_t m_flRotateRateDegrees = 0x200;
   constexpr ptrdiff_t m_flForwardDegrees = 0x204;

}

namespace C_OP_RenderModels {

   constexpr ptrdiff_t m_bOnlyRenderInEffectsBloomPass = 0x200;
   constexpr ptrdiff_t m_bOnlyRenderInEffectsWaterPass = 0x201;
   constexpr ptrdiff_t m_bUseMixedResolutionRendering = 0x202;
   constexpr ptrdiff_t m_bOnlyRenderInEffecsGameOverlay = 0x203;
   constexpr ptrdiff_t m_ModelList = 0x208;
   constexpr ptrdiff_t m_nBodyGroupField = 0x224;
   constexpr ptrdiff_t m_nSubModelField = 0x228;
   constexpr ptrdiff_t m_bIgnoreNormal = 0x22c;
   constexpr ptrdiff_t m_bOrientZ = 0x22d;
   constexpr ptrdiff_t m_bCenterOffset = 0x22e;
   constexpr ptrdiff_t m_vecLocalOffset = 0x230;
   constexpr ptrdiff_t m_vecLocalRotation = 0x888;
   constexpr ptrdiff_t m_bIgnoreRadius = 0xee0;
   constexpr ptrdiff_t m_nModelScaleCP = 0xee4;
   constexpr ptrdiff_t m_vecComponentScale = 0xee8;
   constexpr ptrdiff_t m_bLocalScale = 0x1540;
   constexpr ptrdiff_t m_nSizeCullBloat = 0x1544;
   constexpr ptrdiff_t m_bAnimated = 0x1548;
   constexpr ptrdiff_t m_flAnimationRate = 0x154c;
   constexpr ptrdiff_t m_bScaleAnimationRate = 0x1550;
   constexpr ptrdiff_t m_bForceLoopingAnimation = 0x1551;
   constexpr ptrdiff_t m_bResetAnimOnStop = 0x1552;
   constexpr ptrdiff_t m_bManualAnimFrame = 0x1553;
   constexpr ptrdiff_t m_nAnimationScaleField = 0x1554;
   constexpr ptrdiff_t m_nAnimationField = 0x1558;
   constexpr ptrdiff_t m_nManualFrameField = 0x155c;
   constexpr ptrdiff_t m_ActivityName = 0x1560;
   constexpr ptrdiff_t m_SequenceName = 0x1660;
   constexpr ptrdiff_t m_bEnableClothSimulation = 0x1760;
   constexpr ptrdiff_t m_hOverrideMaterial = 0x1768;
   constexpr ptrdiff_t m_bOverrideTranslucentMaterials = 0x1770;
   constexpr ptrdiff_t m_nSkin = 0x1778;
   constexpr ptrdiff_t m_MaterialVars = 0x18d0;
   constexpr ptrdiff_t m_modelInput = 0x18e8;
   constexpr ptrdiff_t m_nLOD = 0x1948;
   constexpr ptrdiff_t m_EconSlotName = 0x194c;
   constexpr ptrdiff_t m_bOriginalModel = 0x1a4c;
   constexpr ptrdiff_t m_bSuppressTint = 0x1a4d;
   constexpr ptrdiff_t m_bUseRawMeshGroup = 0x1a4e;
   constexpr ptrdiff_t m_bDisableShadows = 0x1a4f;
   constexpr ptrdiff_t m_bAcceptsDecals = 0x1a50;
   constexpr ptrdiff_t m_bForceDrawInterlevedWithSiblings = 0x1a51;
   constexpr ptrdiff_t m_bDoNotDrawInParticlePass = 0x1a52;
   constexpr ptrdiff_t m_szRenderAttribute = 0x1a53;
   constexpr ptrdiff_t m_flRadiusScale = 0x1b58;
   constexpr ptrdiff_t m_flAlphaScale = 0x1cb0;
   constexpr ptrdiff_t m_flRollScale = 0x1e08;
   constexpr ptrdiff_t m_nAlpha2Field = 0x1f60;
   constexpr ptrdiff_t m_vecColorScale = 0x1f68;
   constexpr ptrdiff_t m_nColorBlendType = 0x25c0;

}

namespace C_OP_RenderMaterialProxy {

   constexpr ptrdiff_t m_nMaterialControlPoint = 0x200;
   constexpr ptrdiff_t m_nProxyType = 0x204;
   constexpr ptrdiff_t m_MaterialVars = 0x208;
   constexpr ptrdiff_t m_hOverrideMaterial = 0x220;
   constexpr ptrdiff_t m_flMaterialOverrideEnabled = 0x228;
   constexpr ptrdiff_t m_vecColorScale = 0x380;
   constexpr ptrdiff_t m_flAlpha = 0x9d8;
   constexpr ptrdiff_t m_nColorBlendType = 0xb30;

}

namespace C_OP_RenderProjected {

   constexpr ptrdiff_t m_bProjectCharacter = 0x200;
   constexpr ptrdiff_t m_bProjectWorld = 0x201;
   constexpr ptrdiff_t m_bProjectWater = 0x202;
   constexpr ptrdiff_t m_bFlipHorizontal = 0x203;
   constexpr ptrdiff_t m_bEnableProjectedDepthControls = 0x204;
   constexpr ptrdiff_t m_flMinProjectionDepth = 0x208;
   constexpr ptrdiff_t m_flMaxProjectionDepth = 0x20c;
   constexpr ptrdiff_t m_hProjectedMaterial = 0x210;
   constexpr ptrdiff_t m_flAnimationTimeScale = 0x218;
   constexpr ptrdiff_t m_bOrientToNormal = 0x21c;
   constexpr ptrdiff_t m_MaterialVars = 0x220;

}

namespace C_OP_RenderDeferredLight {

   constexpr ptrdiff_t m_bUseAlphaTestWindow = 0x200;
   constexpr ptrdiff_t m_bUseTexture = 0x201;
   constexpr ptrdiff_t m_flRadiusScale = 0x204;
   constexpr ptrdiff_t m_flAlphaScale = 0x208;
   constexpr ptrdiff_t m_nAlpha2Field = 0x20c;
   constexpr ptrdiff_t m_vecColorScale = 0x210;
   constexpr ptrdiff_t m_nColorBlendType = 0x868;
   constexpr ptrdiff_t m_flLightDistance = 0x86c;
   constexpr ptrdiff_t m_flStartFalloff = 0x870;
   constexpr ptrdiff_t m_flDistanceFalloff = 0x874;
   constexpr ptrdiff_t m_flSpotFoV = 0x878;
   constexpr ptrdiff_t m_nAlphaTestPointField = 0x87c;
   constexpr ptrdiff_t m_nAlphaTestRangeField = 0x880;
   constexpr ptrdiff_t m_nAlphaTestSharpnessField = 0x884;
   constexpr ptrdiff_t m_hTexture = 0x888;
   constexpr ptrdiff_t m_nHSVShiftControlPoint = 0x890;

}

namespace C_OP_RenderStandardLight {

   constexpr ptrdiff_t m_nLightType = 0x200;
   constexpr ptrdiff_t m_vecColorScale = 0x208;
   constexpr ptrdiff_t m_nColorBlendType = 0x860;
   constexpr ptrdiff_t m_flIntensity = 0x868;
   constexpr ptrdiff_t m_bCastShadows = 0x9c0;
   constexpr ptrdiff_t m_flTheta = 0x9c8;
   constexpr ptrdiff_t m_flPhi = 0xb20;
   constexpr ptrdiff_t m_flRadiusMultiplier = 0xc78;
   constexpr ptrdiff_t m_nAttenuationStyle = 0xdd0;
   constexpr ptrdiff_t m_flFalloffLinearity = 0xdd8;
   constexpr ptrdiff_t m_flFiftyPercentFalloff = 0xf30;
   constexpr ptrdiff_t m_flZeroPercentFalloff = 0x1088;
   constexpr ptrdiff_t m_bRenderDiffuse = 0x11e0;
   constexpr ptrdiff_t m_bRenderSpecular = 0x11e1;
   constexpr ptrdiff_t m_lightCookie = 0x11e8;
   constexpr ptrdiff_t m_nPriority = 0x11f0;
   constexpr ptrdiff_t m_nFogLightingMode = 0x11f4;
   constexpr ptrdiff_t m_flFogContribution = 0x11f8;
   constexpr ptrdiff_t m_nCapsuleLightBehavior = 0x1350;
   constexpr ptrdiff_t m_flCapsuleLength = 0x1354;
   constexpr ptrdiff_t m_bReverseOrder = 0x1358;
   constexpr ptrdiff_t m_bClosedLoop = 0x1359;
   constexpr ptrdiff_t m_nPrevPntSource = 0x135c;
   constexpr ptrdiff_t m_flMaxLength = 0x1360;
   constexpr ptrdiff_t m_flMinLength = 0x1364;
   constexpr ptrdiff_t m_bIgnoreDT = 0x1368;
   constexpr ptrdiff_t m_flConstrainRadiusToLengthRatio = 0x136c;
   constexpr ptrdiff_t m_flLengthScale = 0x1370;
   constexpr ptrdiff_t m_flLengthFadeInTime = 0x1374;

}

namespace C_OP_RenderOmni2Light {

   constexpr ptrdiff_t m_nLightType = 0x200;
   constexpr ptrdiff_t m_vColorBlend = 0x208;
   constexpr ptrdiff_t m_nColorBlendType = 0x860;
   constexpr ptrdiff_t m_nBrightnessUnit = 0x864;
   constexpr ptrdiff_t m_flBrightnessLumens = 0x868;
   constexpr ptrdiff_t m_flBrightnessCandelas = 0x9c0;
   constexpr ptrdiff_t m_bCastShadows = 0xb18;
   constexpr ptrdiff_t m_flLuminaireRadius = 0xb20;
   constexpr ptrdiff_t m_flSkirt = 0xc78;
   constexpr ptrdiff_t m_flRange = 0xdd0;
   constexpr ptrdiff_t m_flInnerConeAngle = 0xf28;
   constexpr ptrdiff_t m_flOuterConeAngle = 0x1080;
   constexpr ptrdiff_t m_hLightCookie = 0x11d8;
   constexpr ptrdiff_t m_bSphericalCookie = 0x11e0;

}

namespace C_OP_RenderLightBeam {

   constexpr ptrdiff_t m_vColorBlend = 0x200;
   constexpr ptrdiff_t m_nColorBlendType = 0x858;
   constexpr ptrdiff_t m_flBrightnessLumensPerMeter = 0x860;
   constexpr ptrdiff_t m_bCastShadows = 0x9b8;
   constexpr ptrdiff_t m_flSkirt = 0x9c0;
   constexpr ptrdiff_t m_flRange = 0xb18;
   constexpr ptrdiff_t m_flThickness = 0xc70;

}

namespace C_OP_RenderScreenShake {

   constexpr ptrdiff_t m_flDurationScale = 0x200;
   constexpr ptrdiff_t m_flRadiusScale = 0x204;
   constexpr ptrdiff_t m_flFrequencyScale = 0x208;
   constexpr ptrdiff_t m_flAmplitudeScale = 0x20c;
   constexpr ptrdiff_t m_nRadiusField = 0x210;
   constexpr ptrdiff_t m_nDurationField = 0x214;
   constexpr ptrdiff_t m_nFrequencyField = 0x218;
   constexpr ptrdiff_t m_nAmplitudeField = 0x21c;
   constexpr ptrdiff_t m_nFilterCP = 0x220;

}

namespace C_OP_RenderTonemapController {

   constexpr ptrdiff_t m_flTonemapLevel = 0x200;
   constexpr ptrdiff_t m_flTonemapWeight = 0x204;
   constexpr ptrdiff_t m_nTonemapLevelField = 0x208;
   constexpr ptrdiff_t m_nTonemapWeightField = 0x20c;

}

namespace C_OP_RenderPostProcessing {

   constexpr ptrdiff_t m_flPostProcessStrength = 0x200;
   constexpr ptrdiff_t m_hPostTexture = 0x358;
   constexpr ptrdiff_t m_nPriority = 0x360;

}

namespace C_OP_RenderSound {

   constexpr ptrdiff_t m_flDurationScale = 0x200;
   constexpr ptrdiff_t m_flSndLvlScale = 0x204;
   constexpr ptrdiff_t m_flPitchScale = 0x208;
   constexpr ptrdiff_t m_flVolumeScale = 0x20c;
   constexpr ptrdiff_t m_nSndLvlField = 0x210;
   constexpr ptrdiff_t m_nDurationField = 0x214;
   constexpr ptrdiff_t m_nPitchField = 0x218;
   constexpr ptrdiff_t m_nVolumeField = 0x21c;
   constexpr ptrdiff_t m_nChannel = 0x220;
   constexpr ptrdiff_t m_nCPReference = 0x224;
   constexpr ptrdiff_t m_pszSoundName = 0x228;
   constexpr ptrdiff_t m_bSuppressStopSoundEvent = 0x328;

}

namespace C_OP_RenderStatusEffect {

   constexpr ptrdiff_t m_pTextureColorWarp = 0x200;
   constexpr ptrdiff_t m_pTextureDetail2 = 0x208;
   constexpr ptrdiff_t m_pTextureDiffuseWarp = 0x210;
   constexpr ptrdiff_t m_pTextureFresnelColorWarp = 0x218;
   constexpr ptrdiff_t m_pTextureFresnelWarp = 0x220;
   constexpr ptrdiff_t m_pTextureSpecularWarp = 0x228;
   constexpr ptrdiff_t m_pTextureEnvMap = 0x230;

}

namespace C_OP_RenderStatusEffectCitadel {

   constexpr ptrdiff_t m_pTextureColorWarp = 0x200;
   constexpr ptrdiff_t m_pTextureNormal = 0x208;
   constexpr ptrdiff_t m_pTextureMetalness = 0x210;
   constexpr ptrdiff_t m_pTextureRoughness = 0x218;
   constexpr ptrdiff_t m_pTextureSelfIllum = 0x220;
   constexpr ptrdiff_t m_pTextureDetail = 0x228;

}

namespace C_OP_RenderFlattenGrass {

   constexpr ptrdiff_t m_flFlattenStrength = 0x200;
   constexpr ptrdiff_t m_nStrengthFieldOverride = 0x204;
   constexpr ptrdiff_t m_flRadiusScale = 0x208;

}

namespace C_OP_RenderTreeShake {

   constexpr ptrdiff_t m_flPeakStrength = 0x200;
   constexpr ptrdiff_t m_nPeakStrengthFieldOverride = 0x204;
   constexpr ptrdiff_t m_flRadius = 0x208;
   constexpr ptrdiff_t m_nRadiusFieldOverride = 0x20c;
   constexpr ptrdiff_t m_flShakeDuration = 0x210;
   constexpr ptrdiff_t m_flTransitionTime = 0x214;
   constexpr ptrdiff_t m_flTwistAmount = 0x218;
   constexpr ptrdiff_t m_flRadialAmount = 0x21c;
   constexpr ptrdiff_t m_flControlPointOrientationAmount = 0x220;
   constexpr ptrdiff_t m_nControlPointForLinearDirection = 0x224;

}

namespace C_OP_RenderText {

   constexpr ptrdiff_t m_OutlineColor = 0x200;
   constexpr ptrdiff_t m_DefaultText = 0x208;

}

namespace C_OP_RenderVRHapticEvent {

   constexpr ptrdiff_t m_nHand = 0x200;
   constexpr ptrdiff_t m_nOutputHandCP = 0x204;
   constexpr ptrdiff_t m_nOutputField = 0x208;
   constexpr ptrdiff_t m_flAmplitude = 0x210;

}

namespace C_OP_RemapSDFDistanceToScalarAttribute {

   constexpr ptrdiff_t m_nFieldOutput = 0x1c0;
   constexpr ptrdiff_t m_nVectorFieldInput = 0x1c4;
   constexpr ptrdiff_t m_flMinDistance = 0x1c8;
   constexpr ptrdiff_t m_flMaxDistance = 0x320;
   constexpr ptrdiff_t m_flValueBelowMin = 0x478;
   constexpr ptrdiff_t m_flValueAtMin = 0x5d0;
   constexpr ptrdiff_t m_flValueAtMax = 0x728;
   constexpr ptrdiff_t m_flValueAboveMax = 0x880;

}

namespace C_OP_RemapSDFDistanceToVectorAttribute {

   constexpr ptrdiff_t m_nVectorFieldOutput = 0x1c0;
   constexpr ptrdiff_t m_nVectorFieldInput = 0x1c4;
   constexpr ptrdiff_t m_flMinDistance = 0x1c8;
   constexpr ptrdiff_t m_flMaxDistance = 0x320;
   constexpr ptrdiff_t m_vValueBelowMin = 0x478;
   constexpr ptrdiff_t m_vValueAtMin = 0x484;
   constexpr ptrdiff_t m_vValueAtMax = 0x490;
   constexpr ptrdiff_t m_vValueAboveMax = 0x49c;

}

namespace C_OP_SDFForce {

   constexpr ptrdiff_t m_flForceScale = 0x1d0;

}

namespace C_OP_RemapSDFGradientToVectorAttribute {

   constexpr ptrdiff_t m_nFieldOutput = 0x1c0;

}

namespace C_OP_SDFLighting {

   constexpr ptrdiff_t m_vLightingDir = 0x1c0;
   constexpr ptrdiff_t m_vTint_0 = 0x1cc;
   constexpr ptrdiff_t m_vTint_1 = 0x1d8;

}

namespace C_OP_SDFConstraint {

   constexpr ptrdiff_t m_flMinDist = 0x1c0;
   constexpr ptrdiff_t m_flMaxDist = 0x318;
   constexpr ptrdiff_t m_nMaxIterations = 0x470;

}

namespace C_OP_ParticlePhysics {

   constexpr ptrdiff_t m_Gravity = 0x1c0;
   constexpr ptrdiff_t m_fDrag = 0x818;
   constexpr ptrdiff_t m_nMaxConstraintPasses = 0x970;

}

namespace CRandomNumberGeneratorParameters {

   constexpr ptrdiff_t m_bDistributeEvenly = 0x0;
   constexpr ptrdiff_t m_nSeed = 0x4;

}

namespace MaterialVariable_t {

   constexpr ptrdiff_t m_strVariable = 0x0;
   constexpr ptrdiff_t m_nVariableField = 0x8;
   constexpr ptrdiff_t m_flScale = 0xc;

}

namespace ParticleAttributeIndex_t {

   constexpr ptrdiff_t m_Value = 0x0;

}

namespace ParticlePreviewBodyGroup_t {

   constexpr ptrdiff_t m_bodyGroupName = 0x0;
   constexpr ptrdiff_t m_nValue = 0x8;

}

namespace ParticlePreviewState_t {

   constexpr ptrdiff_t m_previewModel = 0x0;
   constexpr ptrdiff_t m_nModSpecificData = 0x8;
   constexpr ptrdiff_t m_groundType = 0xc;
   constexpr ptrdiff_t m_sequenceName = 0x10;
   constexpr ptrdiff_t m_nFireParticleOnSequenceFrame = 0x18;
   constexpr ptrdiff_t m_hitboxSetName = 0x20;
   constexpr ptrdiff_t m_materialGroupName = 0x28;
   constexpr ptrdiff_t m_vecBodyGroups = 0x30;
   constexpr ptrdiff_t m_flPlaybackSpeed = 0x48;
   constexpr ptrdiff_t m_flParticleSimulationRate = 0x4c;
   constexpr ptrdiff_t m_bShouldDrawHitboxes = 0x50;
   constexpr ptrdiff_t m_bShouldDrawAttachments = 0x51;
   constexpr ptrdiff_t m_bShouldDrawAttachmentNames = 0x52;
   constexpr ptrdiff_t m_bShouldDrawControlPointAxes = 0x53;
   constexpr ptrdiff_t m_bAnimationNonLooping = 0x54;
   constexpr ptrdiff_t m_vecPreviewGravity = 0x58;

}

namespace ParticleControlPointDriver_t {

   constexpr ptrdiff_t m_iControlPoint = 0x0;
   constexpr ptrdiff_t m_iAttachType = 0x4;
   constexpr ptrdiff_t m_attachmentName = 0x8;
   constexpr ptrdiff_t m_vecOffset = 0x10;
   constexpr ptrdiff_t m_angOffset = 0x1c;
   constexpr ptrdiff_t m_entityName = 0x28;

}

namespace ParticleControlPointConfiguration_t {

   constexpr ptrdiff_t m_name = 0x0;
   constexpr ptrdiff_t m_drivers = 0x8;
   constexpr ptrdiff_t m_previewState = 0x20;

}

namespace CParticleVisibilityInputs {

   constexpr ptrdiff_t m_flCameraBias = 0x0;
   constexpr ptrdiff_t m_nCPin = 0x4;
   constexpr ptrdiff_t m_flProxyRadius = 0x8;
   constexpr ptrdiff_t m_flInputMin = 0xc;
   constexpr ptrdiff_t m_flInputMax = 0x10;
   constexpr ptrdiff_t m_flNoPixelVisibilityFallback = 0x14;
   constexpr ptrdiff_t m_flDistanceInputMin = 0x18;
   constexpr ptrdiff_t m_flDistanceInputMax = 0x1c;
   constexpr ptrdiff_t m_flDotInputMin = 0x20;
   constexpr ptrdiff_t m_flDotInputMax = 0x24;
   constexpr ptrdiff_t m_bDotCPAngles = 0x28;
   constexpr ptrdiff_t m_bDotCameraAngles = 0x29;
   constexpr ptrdiff_t m_flAlphaScaleMin = 0x2c;
   constexpr ptrdiff_t m_flAlphaScaleMax = 0x30;
   constexpr ptrdiff_t m_flRadiusScaleMin = 0x34;
   constexpr ptrdiff_t m_flRadiusScaleMax = 0x38;
   constexpr ptrdiff_t m_flRadiusScaleFOVBase = 0x3c;
   constexpr ptrdiff_t m_bRightEye = 0x40;

}

namespace CPathParameters {

   constexpr ptrdiff_t m_nStartControlPointNumber = 0x0;
   constexpr ptrdiff_t m_nEndControlPointNumber = 0x4;
   constexpr ptrdiff_t m_nBulgeControl = 0x8;
   constexpr ptrdiff_t m_flBulge = 0xc;
   constexpr ptrdiff_t m_flMidPoint = 0x10;
   constexpr ptrdiff_t m_vStartPointOffset = 0x14;
   constexpr ptrdiff_t m_vMidPointOffset = 0x20;
   constexpr ptrdiff_t m_vEndOffset = 0x2c;

}

namespace ParticleChildrenInfo_t {

   constexpr ptrdiff_t m_ChildRef = 0x0;
   constexpr ptrdiff_t m_flDelay = 0x8;
   constexpr ptrdiff_t m_bEndCap = 0xc;
   constexpr ptrdiff_t m_bDisableChild = 0xd;
   constexpr ptrdiff_t m_nDetailLevel = 0x10;

}

namespace ControlPointReference_t {

   constexpr ptrdiff_t m_controlPointNameString = 0x0;
   constexpr ptrdiff_t m_vOffsetFromControlPoint = 0x4;
   constexpr ptrdiff_t m_bOffsetInLocalSpace = 0x10;

}

namespace ModelReference_t {

   constexpr ptrdiff_t m_model = 0x0;
   constexpr ptrdiff_t m_flRelativeProbabilityOfSpawn = 0x8;

}

namespace SequenceWeightedList_t {

   constexpr ptrdiff_t m_nSequence = 0x0;
   constexpr ptrdiff_t m_flRelativeWeight = 0x4;

}

namespace CollisionGroupContext_t {

   constexpr ptrdiff_t m_nCollisionGroupNumber = 0x0;

}

namespace PointDefinition_t {

   constexpr ptrdiff_t m_nControlPoint = 0x0;
   constexpr ptrdiff_t m_bLocalCoords = 0x4;
   constexpr ptrdiff_t m_vOffset = 0x8;

}

namespace PointDefinitionWithTimeValues_t {

   constexpr ptrdiff_t m_flTimeDuration = 0x14;

}

namespace CParticleSystemDefinition {

   constexpr ptrdiff_t m_nBehaviorVersion = 0x8;
   constexpr ptrdiff_t m_PreEmissionOperators = 0x10;
   constexpr ptrdiff_t m_Emitters = 0x28;
   constexpr ptrdiff_t m_Initializers = 0x40;
   constexpr ptrdiff_t m_Operators = 0x58;
   constexpr ptrdiff_t m_ForceGenerators = 0x70;
   constexpr ptrdiff_t m_Constraints = 0x88;
   constexpr ptrdiff_t m_Renderers = 0xa0;
   constexpr ptrdiff_t m_Children = 0xb8;
   constexpr ptrdiff_t m_nFirstMultipleOverride_BackwardCompat = 0x178;
   constexpr ptrdiff_t m_nInitialParticles = 0x210;
   constexpr ptrdiff_t m_nMaxParticles = 0x214;
   constexpr ptrdiff_t m_nGroupID = 0x218;
   constexpr ptrdiff_t m_BoundingBoxMin = 0x21c;
   constexpr ptrdiff_t m_BoundingBoxMax = 0x228;
   constexpr ptrdiff_t m_flDepthSortBias = 0x234;
   constexpr ptrdiff_t m_nSortOverridePositionCP = 0x238;
   constexpr ptrdiff_t m_bInfiniteBounds = 0x23c;
   constexpr ptrdiff_t m_bEnableNamedValues = 0x23d;
   constexpr ptrdiff_t m_NamedValueDomain = 0x240;
   constexpr ptrdiff_t m_NamedValueLocals = 0x248;
   constexpr ptrdiff_t m_ConstantColor = 0x260;
   constexpr ptrdiff_t m_ConstantNormal = 0x264;
   constexpr ptrdiff_t m_flConstantRadius = 0x270;
   constexpr ptrdiff_t m_flConstantRotation = 0x274;
   constexpr ptrdiff_t m_flConstantRotationSpeed = 0x278;
   constexpr ptrdiff_t m_flConstantLifespan = 0x27c;
   constexpr ptrdiff_t m_nConstantSequenceNumber = 0x280;
   constexpr ptrdiff_t m_nConstantSequenceNumber1 = 0x284;
   constexpr ptrdiff_t m_nSnapshotControlPoint = 0x288;
   constexpr ptrdiff_t m_hSnapshot = 0x290;
   constexpr ptrdiff_t m_pszCullReplacementName = 0x298;
   constexpr ptrdiff_t m_flCullRadius = 0x2a0;
   constexpr ptrdiff_t m_flCullFillCost = 0x2a4;
   constexpr ptrdiff_t m_nCullControlPoint = 0x2a8;
   constexpr ptrdiff_t m_hFallback = 0x2b0;
   constexpr ptrdiff_t m_nFallbackMaxCount = 0x2b8;
   constexpr ptrdiff_t m_hLowViolenceDef = 0x2c0;
   constexpr ptrdiff_t m_hReferenceReplacement = 0x2c8;
   constexpr ptrdiff_t m_flPreSimulationTime = 0x2d0;
   constexpr ptrdiff_t m_flStopSimulationAfterTime = 0x2d4;
   constexpr ptrdiff_t m_flMaximumTimeStep = 0x2d8;
   constexpr ptrdiff_t m_flMaximumSimTime = 0x2dc;
   constexpr ptrdiff_t m_flMinimumSimTime = 0x2e0;
   constexpr ptrdiff_t m_flMinimumTimeStep = 0x2e4;
   constexpr ptrdiff_t m_nMinimumFrames = 0x2e8;
   constexpr ptrdiff_t m_nMinCPULevel = 0x2ec;
   constexpr ptrdiff_t m_nMinGPULevel = 0x2f0;
   constexpr ptrdiff_t m_flNoDrawTimeToGoToSleep = 0x2f4;
   constexpr ptrdiff_t m_flMaxDrawDistance = 0x2f8;
   constexpr ptrdiff_t m_flStartFadeDistance = 0x2fc;
   constexpr ptrdiff_t m_flMaxCreationDistance = 0x300;
   constexpr ptrdiff_t m_nAggregationMinAvailableParticles = 0x304;
   constexpr ptrdiff_t m_flAggregateRadius = 0x308;
   constexpr ptrdiff_t m_bShouldBatch = 0x30c;
   constexpr ptrdiff_t m_bShouldHitboxesFallbackToRenderBounds = 0x30d;
   constexpr ptrdiff_t m_bShouldHitboxesFallbackToSnapshot = 0x30e;
   constexpr ptrdiff_t m_nViewModelEffect = 0x310;
   constexpr ptrdiff_t m_bScreenSpaceEffect = 0x314;
   constexpr ptrdiff_t m_pszTargetLayerID = 0x318;
   constexpr ptrdiff_t m_nSkipRenderControlPoint = 0x320;
   constexpr ptrdiff_t m_nAllowRenderControlPoint = 0x324;
   constexpr ptrdiff_t m_bShouldSort = 0x328;
   constexpr ptrdiff_t m_controlPointConfigurations = 0x370;

}

namespace CParticleFunction {

   constexpr ptrdiff_t m_flOpStrength = 0x8;
   constexpr ptrdiff_t m_nOpEndCapState = 0x160;
   constexpr ptrdiff_t m_flOpStartFadeInTime = 0x164;
   constexpr ptrdiff_t m_flOpEndFadeInTime = 0x168;
   constexpr ptrdiff_t m_flOpStartFadeOutTime = 0x16c;
   constexpr ptrdiff_t m_flOpEndFadeOutTime = 0x170;
   constexpr ptrdiff_t m_flOpFadeOscillatePeriod = 0x174;
   constexpr ptrdiff_t m_bNormalizeToStopTime = 0x178;
   constexpr ptrdiff_t m_flOpTimeOffsetMin = 0x17c;
   constexpr ptrdiff_t m_flOpTimeOffsetMax = 0x180;
   constexpr ptrdiff_t m_nOpTimeOffsetSeed = 0x184;
   constexpr ptrdiff_t m_nOpTimeScaleSeed = 0x188;
   constexpr ptrdiff_t m_flOpTimeScaleMin = 0x18c;
   constexpr ptrdiff_t m_flOpTimeScaleMax = 0x190;
   constexpr ptrdiff_t m_bDisableOperator = 0x196;
   constexpr ptrdiff_t m_Notes = 0x198;

}

namespace CParticleFunctionInitializer {

   constexpr ptrdiff_t m_nAssociatedEmitterIndex = 0x1b8;

}

namespace CParticleFunctionEmitter {

   constexpr ptrdiff_t m_nEmitterIndex = 0x1b8;

}

namespace CParticleFunctionPreEmission {

   constexpr ptrdiff_t m_bRunOnce = 0x1c0;

}

namespace CParticleFunctionRenderer {

   constexpr ptrdiff_t VisibilityInputs = 0x1b8;
   constexpr ptrdiff_t m_bCannotBeRefracted = 0x1fc;
   constexpr ptrdiff_t m_bSkipRenderingOnMobile = 0x1fd;

}

namespace TextureControls_t {

   constexpr ptrdiff_t m_flFinalTextureScaleU = 0x0;
   constexpr ptrdiff_t m_flFinalTextureScaleV = 0x158;
   constexpr ptrdiff_t m_flFinalTextureOffsetU = 0x2b0;
   constexpr ptrdiff_t m_flFinalTextureOffsetV = 0x408;
   constexpr ptrdiff_t m_flFinalTextureUVRotation = 0x560;
   constexpr ptrdiff_t m_flZoomScale = 0x6b8;
   constexpr ptrdiff_t m_flDistortion = 0x810;
   constexpr ptrdiff_t m_bRandomizeOffsets = 0x968;
   constexpr ptrdiff_t m_bClampUVs = 0x969;
   constexpr ptrdiff_t m_nPerParticleBlend = 0x96c;
   constexpr ptrdiff_t m_nPerParticleScale = 0x970;
   constexpr ptrdiff_t m_nPerParticleOffsetU = 0x974;
   constexpr ptrdiff_t m_nPerParticleOffsetV = 0x978;
   constexpr ptrdiff_t m_nPerParticleRotation = 0x97c;
   constexpr ptrdiff_t m_nPerParticleZoom = 0x980;
   constexpr ptrdiff_t m_nPerParticleDistortion = 0x984;

}

namespace TextureGroup_t {

   constexpr ptrdiff_t m_bEnabled = 0x0;
   constexpr ptrdiff_t m_bReplaceTextureWithGradient = 0x1;
   constexpr ptrdiff_t m_hTexture = 0x8;
   constexpr ptrdiff_t m_Gradient = 0x10;
   constexpr ptrdiff_t m_nTextureType = 0x28;
   constexpr ptrdiff_t m_nTextureChannels = 0x2c;
   constexpr ptrdiff_t m_nTextureBlendMode = 0x30;
   constexpr ptrdiff_t m_flTextureBlend = 0x38;
   constexpr ptrdiff_t m_TextureControls = 0x190;

}

namespace CBaseRendererSource2 {

   constexpr ptrdiff_t m_flRadiusScale = 0x200;
   constexpr ptrdiff_t m_flAlphaScale = 0x358;
   constexpr ptrdiff_t m_flRollScale = 0x4b0;
   constexpr ptrdiff_t m_nAlpha2Field = 0x608;
   constexpr ptrdiff_t m_vecColorScale = 0x610;
   constexpr ptrdiff_t m_nColorBlendType = 0xc68;
   constexpr ptrdiff_t m_nShaderType = 0xc6c;
   constexpr ptrdiff_t m_strShaderOverride = 0xc70;
   constexpr ptrdiff_t m_flCenterXOffset = 0xc78;
   constexpr ptrdiff_t m_flCenterYOffset = 0xdd0;
   constexpr ptrdiff_t m_flBumpStrength = 0xf28;
   constexpr ptrdiff_t m_nCropTextureOverride = 0xf2c;
   constexpr ptrdiff_t m_vecTexturesInput = 0xf30;
   constexpr ptrdiff_t m_flAnimationRate = 0xf48;
   constexpr ptrdiff_t m_nAnimationType = 0xf4c;
   constexpr ptrdiff_t m_bAnimateInFPS = 0xf50;
   constexpr ptrdiff_t m_flSelfIllumAmount = 0xf58;
   constexpr ptrdiff_t m_flDiffuseAmount = 0x10b0;
   constexpr ptrdiff_t m_nLightingControlPoint = 0x1208;
   constexpr ptrdiff_t m_nSelfIllumPerParticle = 0x120c;
   constexpr ptrdiff_t m_nOutputBlendMode = 0x1210;
   constexpr ptrdiff_t m_bGammaCorrectVertexColors = 0x1214;
   constexpr ptrdiff_t m_bSaturateColorPreAlphaBlend = 0x1215;
   constexpr ptrdiff_t m_flAddSelfAmount = 0x1218;
   constexpr ptrdiff_t m_flDesaturation = 0x1370;
   constexpr ptrdiff_t m_flOverbrightFactor = 0x14c8;
   constexpr ptrdiff_t m_nHSVShiftControlPoint = 0x1620;
   constexpr ptrdiff_t m_nFogType = 0x1624;
   constexpr ptrdiff_t m_flFogAmount = 0x1628;
   constexpr ptrdiff_t m_bTintByFOW = 0x1780;
   constexpr ptrdiff_t m_bTintByGlobalLight = 0x1781;
   constexpr ptrdiff_t m_nPerParticleAlphaReference = 0x1784;
   constexpr ptrdiff_t m_nPerParticleAlphaRefWindow = 0x1788;
   constexpr ptrdiff_t m_nAlphaReferenceType = 0x178c;
   constexpr ptrdiff_t m_flAlphaReferenceSoftness = 0x1790;
   constexpr ptrdiff_t m_flSourceAlphaValueToMapToZero = 0x18e8;
   constexpr ptrdiff_t m_flSourceAlphaValueToMapToOne = 0x1a40;
   constexpr ptrdiff_t m_bRefract = 0x1b98;
   constexpr ptrdiff_t m_bRefractSolid = 0x1b99;
   constexpr ptrdiff_t m_flRefractAmount = 0x1ba0;
   constexpr ptrdiff_t m_nRefractBlurRadius = 0x1cf8;
   constexpr ptrdiff_t m_nRefractBlurType = 0x1cfc;
   constexpr ptrdiff_t m_bOnlyRenderInEffectsBloomPass = 0x1d00;
   constexpr ptrdiff_t m_bOnlyRenderInEffectsWaterPass = 0x1d01;
   constexpr ptrdiff_t m_bUseMixedResolutionRendering = 0x1d02;
   constexpr ptrdiff_t m_bOnlyRenderInEffecsGameOverlay = 0x1d03;
   constexpr ptrdiff_t m_stencilTestID = 0x1d04;
   constexpr ptrdiff_t m_bStencilTestExclude = 0x1d84;
   constexpr ptrdiff_t m_stencilWriteID = 0x1d85;
   constexpr ptrdiff_t m_bWriteStencilOnDepthPass = 0x1e05;
   constexpr ptrdiff_t m_bWriteStencilOnDepthFail = 0x1e06;
   constexpr ptrdiff_t m_bReverseZBuffering = 0x1e07;
   constexpr ptrdiff_t m_bDisableZBuffering = 0x1e08;
   constexpr ptrdiff_t m_nFeatheringMode = 0x1e0c;
   constexpr ptrdiff_t m_flFeatheringMinDist = 0x1e10;
   constexpr ptrdiff_t m_flFeatheringMaxDist = 0x1f68;
   constexpr ptrdiff_t m_flFeatheringFilter = 0x20c0;
   constexpr ptrdiff_t m_flDepthBias = 0x2218;
   constexpr ptrdiff_t m_nSortMethod = 0x221c;
   constexpr ptrdiff_t m_bBlendFramesSeq0 = 0x2220;
   constexpr ptrdiff_t m_bMaxLuminanceBlendingSequence0 = 0x2221;

}

namespace C_OP_RenderSprites {

   constexpr ptrdiff_t m_nSequenceOverride = 0x2470;
   constexpr ptrdiff_t m_nOrientationType = 0x25c8;
   constexpr ptrdiff_t m_nOrientationControlPoint = 0x25cc;
   constexpr ptrdiff_t m_bUseYawWithNormalAligned = 0x25d0;
   constexpr ptrdiff_t m_flMinSize = 0x25d4;
   constexpr ptrdiff_t m_flMaxSize = 0x25d8;
   constexpr ptrdiff_t m_flAlphaAdjustWithSizeAdjust = 0x25dc;
   constexpr ptrdiff_t m_flStartFadeSize = 0x25e0;
   constexpr ptrdiff_t m_flEndFadeSize = 0x2738;
   constexpr ptrdiff_t m_flStartFadeDot = 0x2890;
   constexpr ptrdiff_t m_flEndFadeDot = 0x2894;
   constexpr ptrdiff_t m_bDistanceAlpha = 0x2898;
   constexpr ptrdiff_t m_bSoftEdges = 0x2899;
   constexpr ptrdiff_t m_flEdgeSoftnessStart = 0x289c;
   constexpr ptrdiff_t m_flEdgeSoftnessEnd = 0x28a0;
   constexpr ptrdiff_t m_bOutline = 0x28a4;
   constexpr ptrdiff_t m_OutlineColor = 0x28a5;
   constexpr ptrdiff_t m_nOutlineAlpha = 0x28ac;
   constexpr ptrdiff_t m_flOutlineStart0 = 0x28b0;
   constexpr ptrdiff_t m_flOutlineStart1 = 0x28b4;
   constexpr ptrdiff_t m_flOutlineEnd0 = 0x28b8;
   constexpr ptrdiff_t m_flOutlineEnd1 = 0x28bc;
   constexpr ptrdiff_t m_nLightingMode = 0x28c0;
   constexpr ptrdiff_t m_flLightingTessellation = 0x28c8;
   constexpr ptrdiff_t m_flLightingDirectionality = 0x2a20;
   constexpr ptrdiff_t m_bParticleShadows = 0x2b78;
   constexpr ptrdiff_t m_flShadowDensity = 0x2b7c;

}

namespace FloatInputMaterialVariable_t {

   constexpr ptrdiff_t m_strVariable = 0x0;
   constexpr ptrdiff_t m_flInput = 0x8;

}

namespace VecInputMaterialVariable_t {

   constexpr ptrdiff_t m_strVariable = 0x0;
   constexpr ptrdiff_t m_vecInput = 0x8;

}

namespace C_OP_RenderCables {

   constexpr ptrdiff_t m_flRadiusScale = 0x200;
   constexpr ptrdiff_t m_flAlphaScale = 0x358;
   constexpr ptrdiff_t m_vecColorScale = 0x4b0;
   constexpr ptrdiff_t m_nColorBlendType = 0xb08;
   constexpr ptrdiff_t m_hMaterial = 0xb10;
   constexpr ptrdiff_t m_nTextureRepetitionMode = 0xb18;
   constexpr ptrdiff_t m_flTextureRepeatsPerSegment = 0xb20;
   constexpr ptrdiff_t m_flTextureRepeatsCircumference = 0xc78;
   constexpr ptrdiff_t m_flColorMapOffsetV = 0xdd0;
   constexpr ptrdiff_t m_flColorMapOffsetU = 0xf28;
   constexpr ptrdiff_t m_flNormalMapOffsetV = 0x1080;
   constexpr ptrdiff_t m_flNormalMapOffsetU = 0x11d8;
   constexpr ptrdiff_t m_bDrawCableCaps = 0x1330;
   constexpr ptrdiff_t m_flCapRoundness = 0x1334;
   constexpr ptrdiff_t m_flCapOffsetAmount = 0x1338;
   constexpr ptrdiff_t m_flTessScale = 0x133c;
   constexpr ptrdiff_t m_nMinTesselation = 0x1340;
   constexpr ptrdiff_t m_nMaxTesselation = 0x1344;
   constexpr ptrdiff_t m_nRoundness = 0x1348;
   constexpr ptrdiff_t m_LightingTransform = 0x1350;
   constexpr ptrdiff_t m_MaterialFloatVars = 0x13b8;
   constexpr ptrdiff_t m_MaterialVecVars = 0x13e8;

}

namespace CParticleFloatInput {

   constexpr ptrdiff_t m_nType = 0x10;
   constexpr ptrdiff_t m_nMapType = 0x14;
   constexpr ptrdiff_t m_flLiteralValue = 0x18;
   constexpr ptrdiff_t m_NamedValue = 0x20;
   constexpr ptrdiff_t m_nControlPoint = 0x60;
   constexpr ptrdiff_t m_nScalarAttribute = 0x64;
   constexpr ptrdiff_t m_nVectorAttribute = 0x68;
   constexpr ptrdiff_t m_nVectorComponent = 0x6c;
   constexpr ptrdiff_t m_flRandomMin = 0x70;
   constexpr ptrdiff_t m_flRandomMax = 0x74;
   constexpr ptrdiff_t m_bHasRandomSignFlip = 0x78;
   constexpr ptrdiff_t m_nRandomSeed = 0x7c;
   constexpr ptrdiff_t m_nRandomMode = 0x80;
   constexpr ptrdiff_t m_flLOD0 = 0x88;
   constexpr ptrdiff_t m_flLOD1 = 0x8c;
   constexpr ptrdiff_t m_flLOD2 = 0x90;
   constexpr ptrdiff_t m_flLOD3 = 0x94;
   constexpr ptrdiff_t m_nNoiseInputVectorAttribute = 0x98;
   constexpr ptrdiff_t m_flNoiseOutputMin = 0x9c;
   constexpr ptrdiff_t m_flNoiseOutputMax = 0xa0;
   constexpr ptrdiff_t m_flNoiseScale = 0xa4;
   constexpr ptrdiff_t m_vecNoiseOffsetRate = 0xa8;
   constexpr ptrdiff_t m_flNoiseOffset = 0xb4;
   constexpr ptrdiff_t m_nNoiseOctaves = 0xb8;
   constexpr ptrdiff_t m_nNoiseTurbulence = 0xbc;
   constexpr ptrdiff_t m_nNoiseType = 0xc0;
   constexpr ptrdiff_t m_nNoiseModifier = 0xc4;
   constexpr ptrdiff_t m_flNoiseTurbulenceScale = 0xc8;
   constexpr ptrdiff_t m_flNoiseTurbulenceMix = 0xcc;
   constexpr ptrdiff_t m_flNoiseImgPreviewScale = 0xd0;
   constexpr ptrdiff_t m_bNoiseImgPreviewLive = 0xd4;
   constexpr ptrdiff_t m_flNoCameraFallback = 0xe0;
   constexpr ptrdiff_t m_bUseBoundsCenter = 0xe4;
   constexpr ptrdiff_t m_nInputMode = 0xe8;
   constexpr ptrdiff_t m_flMultFactor = 0xec;
   constexpr ptrdiff_t m_flInput0 = 0xf0;
   constexpr ptrdiff_t m_flInput1 = 0xf4;
   constexpr ptrdiff_t m_flOutput0 = 0xf8;
   constexpr ptrdiff_t m_flOutput1 = 0xfc;
   constexpr ptrdiff_t m_flNotchedRangeMin = 0x100;
   constexpr ptrdiff_t m_flNotchedRangeMax = 0x104;
   constexpr ptrdiff_t m_flNotchedOutputOutside = 0x108;
   constexpr ptrdiff_t m_flNotchedOutputInside = 0x10c;
   constexpr ptrdiff_t m_nBiasType = 0x110;
   constexpr ptrdiff_t m_flBiasParameter = 0x114;
   constexpr ptrdiff_t m_Curve = 0x118;

}

namespace CParticleTransformInput {

   constexpr ptrdiff_t m_nType = 0x10;
   constexpr ptrdiff_t m_NamedValue = 0x18;
   constexpr ptrdiff_t m_bFollowNamedValue = 0x58;
   constexpr ptrdiff_t m_bSupportsDisabled = 0x59;
   constexpr ptrdiff_t m_bUseOrientation = 0x5a;
   constexpr ptrdiff_t m_nControlPoint = 0x5c;
   constexpr ptrdiff_t m_nControlPointRangeMax = 0x60;
   constexpr ptrdiff_t m_flEndCPGrowthTime = 0x64;

}

namespace CParticleModelInput {

   constexpr ptrdiff_t m_nType = 0x10;
   constexpr ptrdiff_t m_NamedValue = 0x18;
   constexpr ptrdiff_t m_nControlPoint = 0x58;

}

namespace CParticleVecInput {

   constexpr ptrdiff_t m_nType = 0x10;
   constexpr ptrdiff_t m_vLiteralValue = 0x14;
   constexpr ptrdiff_t m_LiteralColor = 0x20;
   constexpr ptrdiff_t m_NamedValue = 0x28;
   constexpr ptrdiff_t m_bFollowNamedValue = 0x68;
   constexpr ptrdiff_t m_nVectorAttribute = 0x6c;
   constexpr ptrdiff_t m_vVectorAttributeScale = 0x70;
   constexpr ptrdiff_t m_nControlPoint = 0x7c;
   constexpr ptrdiff_t m_nDeltaControlPoint = 0x80;
   constexpr ptrdiff_t m_vCPValueScale = 0x84;
   constexpr ptrdiff_t m_vCPRelativePosition = 0x90;
   constexpr ptrdiff_t m_vCPRelativeDir = 0x9c;
   constexpr ptrdiff_t m_FloatComponentX = 0xa8;
   constexpr ptrdiff_t m_FloatComponentY = 0x200;
   constexpr ptrdiff_t m_FloatComponentZ = 0x358;
   constexpr ptrdiff_t m_FloatInterp = 0x4b0;
   constexpr ptrdiff_t m_flInterpInput0 = 0x608;
   constexpr ptrdiff_t m_flInterpInput1 = 0x60c;
   constexpr ptrdiff_t m_vInterpOutput0 = 0x610;
   constexpr ptrdiff_t m_vInterpOutput1 = 0x61c;
   constexpr ptrdiff_t m_Gradient = 0x628;
   constexpr ptrdiff_t m_vRandomMin = 0x640;
   constexpr ptrdiff_t m_vRandomMax = 0x64c;

}

namespace PARTICLE_EHANDLE__ {

   constexpr ptrdiff_t unused = 0x0;

}

namespace PARTICLE_WORLD_HANDLE__ {

   constexpr ptrdiff_t unused = 0x0;

}

namespace ParticleNamedValueConfiguration_t {

   constexpr ptrdiff_t m_ConfigName = 0x0;
   constexpr ptrdiff_t m_ConfigValue = 0x8;
   constexpr ptrdiff_t m_iAttachType = 0x18;
   constexpr ptrdiff_t m_BoundEntityPath = 0x20;
   constexpr ptrdiff_t m_strEntityScope = 0x28;
   constexpr ptrdiff_t m_strAttachmentName = 0x30;

}

namespace ParticleNamedValueSource_t {

   constexpr ptrdiff_t m_Name = 0x0;
   constexpr ptrdiff_t m_IsPublic = 0x8;
   constexpr ptrdiff_t m_ValueType = 0xc;
   constexpr ptrdiff_t m_DefaultConfig = 0x10;
   constexpr ptrdiff_t m_NamedConfigs = 0x48;

}

namespace CParticleVariableRef {

   constexpr ptrdiff_t m_variableName = 0x0;
   constexpr ptrdiff_t m_variableType = 0x38;

}

namespace CNewParticleEffect {

   constexpr ptrdiff_t m_pNext = 0x10;
   constexpr ptrdiff_t m_pPrev = 0x18;
   constexpr ptrdiff_t m_pParticles = 0x20;
   constexpr ptrdiff_t m_pDebugName = 0x28;
   constexpr ptrdiff_t m_bDontRemove = 0x0;
   constexpr ptrdiff_t m_bRemove = 0x0;
   constexpr ptrdiff_t m_bNeedsBBoxUpdate = 0x0;
   constexpr ptrdiff_t m_bIsFirstFrame = 0x0;
   constexpr ptrdiff_t m_bAutoUpdateBBox = 0x0;
   constexpr ptrdiff_t m_bAllocated = 0x0;
   constexpr ptrdiff_t m_bSimulate = 0x0;
   constexpr ptrdiff_t m_bShouldPerformCullCheck = 0x0;
   constexpr ptrdiff_t m_bForceNoDraw = 0x0;
   constexpr ptrdiff_t m_bShouldSave = 0x0;
   constexpr ptrdiff_t m_bDisableAggregation = 0x0;
   constexpr ptrdiff_t m_bShouldSimulateDuringGamePaused = 0x0;
   constexpr ptrdiff_t m_bShouldCheckFoW = 0x0;
   constexpr ptrdiff_t m_vSortOrigin = 0x40;
   constexpr ptrdiff_t m_flScale = 0x4c;
   constexpr ptrdiff_t m_hOwner = 0x50;
   constexpr ptrdiff_t m_pOwningParticleProperty = 0x58;
   constexpr ptrdiff_t m_flFreezeTransitionStart = 0x70;
   constexpr ptrdiff_t m_flFreezeTransitionDuration = 0x74;
   constexpr ptrdiff_t m_flFreezeTransitionOverride = 0x78;
   constexpr ptrdiff_t m_bFreezeTransitionActive = 0x7c;
   constexpr ptrdiff_t m_bFreezeTargetState = 0x7d;
   constexpr ptrdiff_t m_bCanFreeze = 0x7e;
   constexpr ptrdiff_t m_LastMin = 0x80;
   constexpr ptrdiff_t m_LastMax = 0x8c;
   constexpr ptrdiff_t m_nSplitScreenUser = 0x98;
   constexpr ptrdiff_t m_vecAggregationCenter = 0x9c;
   constexpr ptrdiff_t m_RefCount = 0xc0;

}

namespace C_OP_ConstrainDistance {

   constexpr ptrdiff_t m_fMinDistance = 0x1c0;
   constexpr ptrdiff_t m_fMaxDistance = 0x318;
   constexpr ptrdiff_t m_nControlPointNumber = 0x470;
   constexpr ptrdiff_t m_CenterOffset = 0x474;
   constexpr ptrdiff_t m_bGlobalCenter = 0x480;

}

namespace C_OP_CollideWithSelf {

   constexpr ptrdiff_t m_flRadiusScale = 0x1c0;
   constexpr ptrdiff_t m_flMinimumSpeed = 0x318;

}

namespace C_OP_CollideWithParentParticles {

   constexpr ptrdiff_t m_flParentRadiusScale = 0x1c0;
   constexpr ptrdiff_t m_flRadiusScale = 0x318;

}

namespace C_OP_ConstrainDistanceToPath {

   constexpr ptrdiff_t m_fMinDistance = 0x1c0;
   constexpr ptrdiff_t m_flMaxDistance0 = 0x1c4;
   constexpr ptrdiff_t m_flMaxDistanceMid = 0x1c8;
   constexpr ptrdiff_t m_flMaxDistance1 = 0x1cc;
   constexpr ptrdiff_t m_PathParameters = 0x1d0;
   constexpr ptrdiff_t m_flTravelTime = 0x210;
   constexpr ptrdiff_t m_nFieldScale = 0x214;
   constexpr ptrdiff_t m_nManualTField = 0x218;

}

namespace C_OP_ConstrainDistanceToUserSpecifiedPath {

   constexpr ptrdiff_t m_fMinDistance = 0x1c0;
   constexpr ptrdiff_t m_flMaxDistance = 0x1c4;
   constexpr ptrdiff_t m_flTimeScale = 0x1c8;
   constexpr ptrdiff_t m_bLoopedPath = 0x1cc;
   constexpr ptrdiff_t m_pointList = 0x1d0;

}

namespace C_OP_PlanarConstraint {

   constexpr ptrdiff_t m_PointOnPlane = 0x1c0;
   constexpr ptrdiff_t m_PlaneNormal = 0x1cc;
   constexpr ptrdiff_t m_nControlPointNumber = 0x1d8;
   constexpr ptrdiff_t m_bGlobalOrigin = 0x1dc;
   constexpr ptrdiff_t m_bGlobalNormal = 0x1dd;
   constexpr ptrdiff_t m_flRadiusScale = 0x1e0;
   constexpr ptrdiff_t m_flMaximumDistanceToCP = 0x338;

}

namespace C_OP_WorldTraceConstraint {

   constexpr ptrdiff_t m_nCP = 0x1c0;
   constexpr ptrdiff_t m_vecCpOffset = 0x1c4;
   constexpr ptrdiff_t m_nCollisionMode = 0x1d0;
   constexpr ptrdiff_t m_nCollisionModeMin = 0x1d4;
   constexpr ptrdiff_t m_nTraceSet = 0x1d8;
   constexpr ptrdiff_t m_CollisionGroupName = 0x1dc;
   constexpr ptrdiff_t m_bWorldOnly = 0x25c;
   constexpr ptrdiff_t m_bBrushOnly = 0x25d;
   constexpr ptrdiff_t m_bIncludeWater = 0x25e;
   constexpr ptrdiff_t m_nIgnoreCP = 0x260;
   constexpr ptrdiff_t m_flCpMovementTolerance = 0x264;
   constexpr ptrdiff_t m_flRetestRate = 0x268;
   constexpr ptrdiff_t m_flTraceTolerance = 0x26c;
   constexpr ptrdiff_t m_flCollisionConfirmationSpeed = 0x270;
   constexpr ptrdiff_t m_nMaxTracesPerFrame = 0x274;
   constexpr ptrdiff_t m_flRadiusScale = 0x278;
   constexpr ptrdiff_t m_flBounceAmount = 0x3d0;
   constexpr ptrdiff_t m_flSlideAmount = 0x528;
   constexpr ptrdiff_t m_flRandomDirScale = 0x680;
   constexpr ptrdiff_t m_bDecayBounce = 0x7d8;
   constexpr ptrdiff_t m_bKillonContact = 0x7d9;
   constexpr ptrdiff_t m_flMinSpeed = 0x7dc;
   constexpr ptrdiff_t m_bSetNormal = 0x7e0;
   constexpr ptrdiff_t m_nStickOnCollisionField = 0x7e4;
   constexpr ptrdiff_t m_flStopSpeed = 0x7e8;
   constexpr ptrdiff_t m_nEntityStickDataField = 0x940;
   constexpr ptrdiff_t m_nEntityStickNormalField = 0x944;

}

namespace C_OP_BoxConstraint {

   constexpr ptrdiff_t m_vecMin = 0x1c0;
   constexpr ptrdiff_t m_vecMax = 0x818;
   constexpr ptrdiff_t m_nCP = 0xe70;
   constexpr ptrdiff_t m_bLocalSpace = 0xe74;
   constexpr ptrdiff_t m_bAccountForRadius = 0xe75;

}

namespace C_OP_ShapeMatchingConstraint {

   constexpr ptrdiff_t m_flShapeRestorationTime = 0x1c0;

}

namespace C_OP_RopeSpringConstraint {

   constexpr ptrdiff_t m_flRestLength = 0x1c0;
   constexpr ptrdiff_t m_flMinDistance = 0x318;
   constexpr ptrdiff_t m_flMaxDistance = 0x470;
   constexpr ptrdiff_t m_flAdjustmentScale = 0x5c8;
   constexpr ptrdiff_t m_flInitialRestingLength = 0x5d0;

}

namespace C_OP_SpringToVectorConstraint {

   constexpr ptrdiff_t m_flRestLength = 0x1c0;
   constexpr ptrdiff_t m_flMinDistance = 0x318;
   constexpr ptrdiff_t m_flMaxDistance = 0x470;
   constexpr ptrdiff_t m_flRestingLength = 0x5c8;
   constexpr ptrdiff_t m_vecAnchorVector = 0x720;

}

namespace C_OP_ConstrainLineLength {

   constexpr ptrdiff_t m_flMinDistance = 0x1c0;
   constexpr ptrdiff_t m_flMaxDistance = 0x1c4;

}

namespace C_INIT_RingWave {

   constexpr ptrdiff_t m_TransformInput = 0x1c0;
   constexpr ptrdiff_t m_flParticlesPerOrbit = 0x228;
   constexpr ptrdiff_t m_flInitialRadius = 0x380;
   constexpr ptrdiff_t m_flThickness = 0x4d8;
   constexpr ptrdiff_t m_flInitialSpeedMin = 0x630;
   constexpr ptrdiff_t m_flInitialSpeedMax = 0x788;
   constexpr ptrdiff_t m_flRoll = 0x8e0;
   constexpr ptrdiff_t m_flPitch = 0xa38;
   constexpr ptrdiff_t m_flYaw = 0xb90;
   constexpr ptrdiff_t m_bEvenDistribution = 0xce8;
   constexpr ptrdiff_t m_bXYVelocityOnly = 0xce9;

}

namespace C_INIT_CreateSpiralSphere {

   constexpr ptrdiff_t m_nControlPointNumber = 0x1c0;
   constexpr ptrdiff_t m_nOverrideCP = 0x1c4;
   constexpr ptrdiff_t m_nDensity = 0x1c8;
   constexpr ptrdiff_t m_flInitialRadius = 0x1cc;
   constexpr ptrdiff_t m_flInitialSpeedMin = 0x1d0;
   constexpr ptrdiff_t m_flInitialSpeedMax = 0x1d4;
   constexpr ptrdiff_t m_bUseParticleCount = 0x1d8;

}

namespace C_INIT_CreateInEpitrochoid {

   constexpr ptrdiff_t m_nComponent1 = 0x1c0;
   constexpr ptrdiff_t m_nComponent2 = 0x1c4;
   constexpr ptrdiff_t m_TransformInput = 0x1c8;
   constexpr ptrdiff_t m_flParticleDensity = 0x230;
   constexpr ptrdiff_t m_flOffset = 0x388;
   constexpr ptrdiff_t m_flRadius1 = 0x4e0;
   constexpr ptrdiff_t m_flRadius2 = 0x638;
   constexpr ptrdiff_t m_bUseCount = 0x790;
   constexpr ptrdiff_t m_bUseLocalCoords = 0x791;
   constexpr ptrdiff_t m_bOffsetExistingPos = 0x792;

}

namespace C_INIT_CreatePhyllotaxis {

   constexpr ptrdiff_t m_nControlPointNumber = 0x1c0;
   constexpr ptrdiff_t m_nScaleCP = 0x1c4;
   constexpr ptrdiff_t m_nComponent = 0x1c8;
   constexpr ptrdiff_t m_fRadCentCore = 0x1cc;
   constexpr ptrdiff_t m_fRadPerPoint = 0x1d0;
   constexpr ptrdiff_t m_fRadPerPointTo = 0x1d4;
   constexpr ptrdiff_t m_fpointAngle = 0x1d8;
   constexpr ptrdiff_t m_fsizeOverall = 0x1dc;
   constexpr ptrdiff_t m_fRadBias = 0x1e0;
   constexpr ptrdiff_t m_fMinRad = 0x1e4;
   constexpr ptrdiff_t m_fDistBias = 0x1e8;
   constexpr ptrdiff_t m_bUseLocalCoords = 0x1ec;
   constexpr ptrdiff_t m_bUseWithContEmit = 0x1ed;
   constexpr ptrdiff_t m_bUseOrigRadius = 0x1ee;

}

namespace C_INIT_CreateOnModel {

   constexpr ptrdiff_t m_modelInput = 0x1c0;
   constexpr ptrdiff_t m_transformInput = 0x220;
   constexpr ptrdiff_t m_nForceInModel = 0x288;
   constexpr ptrdiff_t m_nDesiredHitbox = 0x28c;
   constexpr ptrdiff_t m_nHitboxValueFromControlPointIndex = 0x290;
   constexpr ptrdiff_t m_vecHitBoxScale = 0x298;
   constexpr ptrdiff_t m_flBoneVelocity = 0x8f0;
   constexpr ptrdiff_t m_flMaxBoneVelocity = 0x8f4;
   constexpr ptrdiff_t m_vecDirectionBias = 0x8f8;
   constexpr ptrdiff_t m_HitboxSetName = 0xf50;
   constexpr ptrdiff_t m_bLocalCoords = 0xfd0;
   constexpr ptrdiff_t m_bUseBones = 0xfd1;
   constexpr ptrdiff_t m_flShellSize = 0xfd8;

}

namespace C_INIT_CreateOnModelAtHeight {

   constexpr ptrdiff_t m_bUseBones = 0x1c0;
   constexpr ptrdiff_t m_bForceZ = 0x1c1;
   constexpr ptrdiff_t m_nControlPointNumber = 0x1c4;
   constexpr ptrdiff_t m_nHeightCP = 0x1c8;
   constexpr ptrdiff_t m_bUseWaterHeight = 0x1cc;
   constexpr ptrdiff_t m_flDesiredHeight = 0x1d0;
   constexpr ptrdiff_t m_vecHitBoxScale = 0x328;
   constexpr ptrdiff_t m_vecDirectionBias = 0x980;
   constexpr ptrdiff_t m_nBiasType = 0xfd8;
   constexpr ptrdiff_t m_bLocalCoords = 0xfdc;
   constexpr ptrdiff_t m_bPreferMovingBoxes = 0xfdd;
   constexpr ptrdiff_t m_HitboxSetName = 0xfde;
   constexpr ptrdiff_t m_flHitboxVelocityScale = 0x1060;
   constexpr ptrdiff_t m_flMaxBoneVelocity = 0x11b8;

}

namespace C_INIT_SetHitboxToClosest {

   constexpr ptrdiff_t m_nControlPointNumber = 0x1c0;
   constexpr ptrdiff_t m_nDesiredHitbox = 0x1c4;
   constexpr ptrdiff_t m_vecHitBoxScale = 0x1c8;
   constexpr ptrdiff_t m_HitboxSetName = 0x820;
   constexpr ptrdiff_t m_bUseBones = 0x8a0;
   constexpr ptrdiff_t m_bUseClosestPointOnHitbox = 0x8a1;
   constexpr ptrdiff_t m_nTestType = 0x8a4;
   constexpr ptrdiff_t m_flHybridRatio = 0x8a8;
   constexpr ptrdiff_t m_bUpdatePosition = 0xa00;

}

namespace C_INIT_SetHitboxToModel {

   constexpr ptrdiff_t m_nControlPointNumber = 0x1c0;
   constexpr ptrdiff_t m_nForceInModel = 0x1c4;
   constexpr ptrdiff_t m_nDesiredHitbox = 0x1c8;
   constexpr ptrdiff_t m_vecHitBoxScale = 0x1d0;
   constexpr ptrdiff_t m_vecDirectionBias = 0x828;
   constexpr ptrdiff_t m_bMaintainHitbox = 0x834;
   constexpr ptrdiff_t m_bUseBones = 0x835;
   constexpr ptrdiff_t m_HitboxSetName = 0x836;
   constexpr ptrdiff_t m_flShellSize = 0x8b8;

}

namespace C_INIT_CreateWithinSphereTransform {

   constexpr ptrdiff_t m_fRadiusMin = 0x1c0;
   constexpr ptrdiff_t m_fRadiusMax = 0x318;
   constexpr ptrdiff_t m_vecDistanceBias = 0x470;
   constexpr ptrdiff_t m_vecDistanceBiasAbs = 0xac8;
   constexpr ptrdiff_t m_TransformInput = 0xad8;
   constexpr ptrdiff_t m_fSpeedMin = 0xb40;
   constexpr ptrdiff_t m_fSpeedMax = 0xc98;
   constexpr ptrdiff_t m_fSpeedRandExp = 0xdf0;
   constexpr ptrdiff_t m_bLocalCoords = 0xdf4;
   constexpr ptrdiff_t m_flEndCPGrowthTime = 0xdf8;
   constexpr ptrdiff_t m_LocalCoordinateSystemSpeedMin = 0xe00;
   constexpr ptrdiff_t m_LocalCoordinateSystemSpeedMax = 0x1458;
   constexpr ptrdiff_t m_nFieldOutput = 0x1ab0;
   constexpr ptrdiff_t m_nFieldVelocity = 0x1ab4;

}

namespace C_INIT_CreateWithinBox {

   constexpr ptrdiff_t m_vecMin = 0x1c0;
   constexpr ptrdiff_t m_vecMax = 0x818;
   constexpr ptrdiff_t m_nControlPointNumber = 0xe70;
   constexpr ptrdiff_t m_bLocalSpace = 0xe74;
   constexpr ptrdiff_t m_randomnessParameters = 0xe78;

}

namespace C_INIT_CreateOnGrid {

   constexpr ptrdiff_t m_nXCount = 0x1c0;
   constexpr ptrdiff_t m_nYCount = 0x318;
   constexpr ptrdiff_t m_nZCount = 0x470;
   constexpr ptrdiff_t m_nXSpacing = 0x5c8;
   constexpr ptrdiff_t m_nYSpacing = 0x720;
   constexpr ptrdiff_t m_nZSpacing = 0x878;
   constexpr ptrdiff_t m_nControlPointNumber = 0x9d0;
   constexpr ptrdiff_t m_bLocalSpace = 0x9d4;
   constexpr ptrdiff_t m_bCenter = 0x9d5;
   constexpr ptrdiff_t m_bHollow = 0x9d6;

}

namespace C_INIT_PositionOffset {

   constexpr ptrdiff_t m_OffsetMin = 0x1c0;
   constexpr ptrdiff_t m_OffsetMax = 0x818;
   constexpr ptrdiff_t m_TransformInput = 0xe70;
   constexpr ptrdiff_t m_bLocalCoords = 0xed8;
   constexpr ptrdiff_t m_bProportional = 0xed9;
   constexpr ptrdiff_t m_randomnessParameters = 0xedc;

}

namespace C_INIT_PositionOffsetToCP {

   constexpr ptrdiff_t m_nControlPointNumberStart = 0x1c0;
   constexpr ptrdiff_t m_nControlPointNumberEnd = 0x1c4;
   constexpr ptrdiff_t m_bLocalCoords = 0x1c8;

}

namespace C_INIT_PositionPlaceOnGround {

   constexpr ptrdiff_t m_flOffset = 0x1c0;
   constexpr ptrdiff_t m_flMaxTraceLength = 0x318;
   constexpr ptrdiff_t m_CollisionGroupName = 0x470;
   constexpr ptrdiff_t m_nTraceSet = 0x4f0;
   constexpr ptrdiff_t m_nTraceMissBehavior = 0x500;
   constexpr ptrdiff_t m_bIncludeWater = 0x504;
   constexpr ptrdiff_t m_bSetNormal = 0x505;
   constexpr ptrdiff_t m_bSetPXYZOnly = 0x506;
   constexpr ptrdiff_t m_bTraceAlongNormal = 0x507;
   constexpr ptrdiff_t m_bOffsetonColOnly = 0x508;
   constexpr ptrdiff_t m_flOffsetByRadiusFactor = 0x50c;
   constexpr ptrdiff_t m_nPreserveOffsetCP = 0x510;
   constexpr ptrdiff_t m_nIgnoreCP = 0x514;

}

namespace C_INIT_VelocityFromNormal {

   constexpr ptrdiff_t m_fSpeedMin = 0x1c0;
   constexpr ptrdiff_t m_fSpeedMax = 0x1c4;
   constexpr ptrdiff_t m_bIgnoreDt = 0x1c8;

}

namespace C_INIT_VelocityRandom {

   constexpr ptrdiff_t m_nControlPointNumber = 0x1c0;
   constexpr ptrdiff_t m_fSpeedMin = 0x1c8;
   constexpr ptrdiff_t m_fSpeedMax = 0x320;
   constexpr ptrdiff_t m_LocalCoordinateSystemSpeedMin = 0x478;
   constexpr ptrdiff_t m_LocalCoordinateSystemSpeedMax = 0xad0;
   constexpr ptrdiff_t m_bIgnoreDT = 0x1128;
   constexpr ptrdiff_t m_randomnessParameters = 0x112c;

}

namespace C_INIT_InitialVelocityNoise {

   constexpr ptrdiff_t m_vecAbsVal = 0x1c0;
   constexpr ptrdiff_t m_vecAbsValInv = 0x1cc;
   constexpr ptrdiff_t m_vecOffsetLoc = 0x1d8;
   constexpr ptrdiff_t m_flOffset = 0x830;
   constexpr ptrdiff_t m_vecOutputMin = 0x988;
   constexpr ptrdiff_t m_vecOutputMax = 0xfe0;
   constexpr ptrdiff_t m_flNoiseScale = 0x1638;
   constexpr ptrdiff_t m_flNoiseScaleLoc = 0x1790;
   constexpr ptrdiff_t m_TransformInput = 0x18e8;
   constexpr ptrdiff_t m_bIgnoreDt = 0x1950;

}

namespace C_INIT_InitialVelocityFromHitbox {

   constexpr ptrdiff_t m_flVelocityMin = 0x1c0;
   constexpr ptrdiff_t m_flVelocityMax = 0x1c4;
   constexpr ptrdiff_t m_nControlPointNumber = 0x1c8;
   constexpr ptrdiff_t m_HitboxSetName = 0x1cc;
   constexpr ptrdiff_t m_bUseBones = 0x24c;

}

namespace C_INIT_VelocityRadialRandom {

   constexpr ptrdiff_t m_nControlPointNumber = 0x1c0;
   constexpr ptrdiff_t m_fSpeedMin = 0x1c4;
   constexpr ptrdiff_t m_fSpeedMax = 0x1c8;
   constexpr ptrdiff_t m_vecLocalCoordinateSystemSpeedScale = 0x1cc;
   constexpr ptrdiff_t m_bIgnoreDelta = 0x1d9;

}

namespace C_INIT_RandomLifeTime {

   constexpr ptrdiff_t m_fLifetimeMin = 0x1c0;
   constexpr ptrdiff_t m_fLifetimeMax = 0x1c4;
   constexpr ptrdiff_t m_fLifetimeRandExponent = 0x1c8;

}

namespace C_INIT_RandomScalar {

   constexpr ptrdiff_t m_flMin = 0x1c0;
   constexpr ptrdiff_t m_flMax = 0x1c4;
   constexpr ptrdiff_t m_flExponent = 0x1c8;
   constexpr ptrdiff_t m_nFieldOutput = 0x1cc;

}

namespace C_INIT_RandomVector {

   constexpr ptrdiff_t m_vecMin = 0x1c0;
   constexpr ptrdiff_t m_vecMax = 0x1cc;
   constexpr ptrdiff_t m_nFieldOutput = 0x1d8;
   constexpr ptrdiff_t m_randomnessParameters = 0x1dc;

}

namespace C_INIT_RandomVectorComponent {

   constexpr ptrdiff_t m_flMin = 0x1c0;
   constexpr ptrdiff_t m_flMax = 0x1c4;
   constexpr ptrdiff_t m_nFieldOutput = 0x1c8;
   constexpr ptrdiff_t m_nComponent = 0x1cc;

}

namespace C_INIT_AddVectorToVector {

   constexpr ptrdiff_t m_vecScale = 0x1c0;
   constexpr ptrdiff_t m_nFieldOutput = 0x1cc;
   constexpr ptrdiff_t m_nFieldInput = 0x1d0;
   constexpr ptrdiff_t m_vOffsetMin = 0x1d4;
   constexpr ptrdiff_t m_vOffsetMax = 0x1e0;
   constexpr ptrdiff_t m_randomnessParameters = 0x1ec;

}

namespace C_INIT_RandomAlphaWindowThreshold {

   constexpr ptrdiff_t m_flMin = 0x1c0;
   constexpr ptrdiff_t m_flMax = 0x1c4;
   constexpr ptrdiff_t m_flExponent = 0x1c8;

}

namespace C_INIT_RandomRadius {

   constexpr ptrdiff_t m_flRadiusMin = 0x1c0;
   constexpr ptrdiff_t m_flRadiusMax = 0x1c4;
   constexpr ptrdiff_t m_flRadiusRandExponent = 0x1c8;

}

namespace C_INIT_RandomAlpha {

   constexpr ptrdiff_t m_nFieldOutput = 0x1c0;
   constexpr ptrdiff_t m_nAlphaMin = 0x1c4;
   constexpr ptrdiff_t m_nAlphaMax = 0x1c8;
   constexpr ptrdiff_t m_flAlphaRandExponent = 0x1d4;

}

namespace CGeneralRandomRotation {

   constexpr ptrdiff_t m_nFieldOutput = 0x1c0;
   constexpr ptrdiff_t m_flDegrees = 0x1c4;
   constexpr ptrdiff_t m_flDegreesMin = 0x1c8;
   constexpr ptrdiff_t m_flDegreesMax = 0x1cc;
   constexpr ptrdiff_t m_flRotationRandExponent = 0x1d0;
   constexpr ptrdiff_t m_bRandomlyFlipDirection = 0x1d4;

}

namespace C_INIT_Orient2DRelToCP {

   constexpr ptrdiff_t m_nCP = 0x1c0;
   constexpr ptrdiff_t m_nFieldOutput = 0x1c4;
   constexpr ptrdiff_t m_flRotOffset = 0x1c8;

}

namespace C_INIT_RandomColor {

   constexpr ptrdiff_t m_ColorMin = 0x1dc;
   constexpr ptrdiff_t m_ColorMax = 0x1e0;
   constexpr ptrdiff_t m_TintMin = 0x1e4;
   constexpr ptrdiff_t m_TintMax = 0x1e8;
   constexpr ptrdiff_t m_flTintPerc = 0x1ec;
   constexpr ptrdiff_t m_flUpdateThreshold = 0x1f0;
   constexpr ptrdiff_t m_nTintCP = 0x1f4;
   constexpr ptrdiff_t m_nFieldOutput = 0x1f8;
   constexpr ptrdiff_t m_nTintBlendMode = 0x1fc;
   constexpr ptrdiff_t m_flLightAmplification = 0x200;

}

namespace C_INIT_ColorLitPerParticle {

   constexpr ptrdiff_t m_ColorMin = 0x1d8;
   constexpr ptrdiff_t m_ColorMax = 0x1dc;
   constexpr ptrdiff_t m_TintMin = 0x1e0;
   constexpr ptrdiff_t m_TintMax = 0x1e4;
   constexpr ptrdiff_t m_flTintPerc = 0x1e8;
   constexpr ptrdiff_t m_nTintBlendMode = 0x1ec;
   constexpr ptrdiff_t m_flLightAmplification = 0x1f0;

}

namespace C_INIT_RandomTrailLength {

   constexpr ptrdiff_t m_flMinLength = 0x1c0;
   constexpr ptrdiff_t m_flMaxLength = 0x1c4;
   constexpr ptrdiff_t m_flLengthRandExponent = 0x1c8;

}

namespace C_INIT_RandomSequence {

   constexpr ptrdiff_t m_nSequenceMin = 0x1c0;
   constexpr ptrdiff_t m_nSequenceMax = 0x1c4;
   constexpr ptrdiff_t m_bShuffle = 0x1c8;
   constexpr ptrdiff_t m_bLinear = 0x1c9;
   constexpr ptrdiff_t m_WeightedList = 0x1d0;

}

namespace C_INIT_SequenceFromCP {

   constexpr ptrdiff_t m_bKillUnused = 0x1c0;
   constexpr ptrdiff_t m_bRadiusScale = 0x1c1;
   constexpr ptrdiff_t m_nCP = 0x1c4;
   constexpr ptrdiff_t m_vecOffset = 0x1c8;

}

namespace C_INIT_RandomModelSequence {

   constexpr ptrdiff_t m_ActivityName = 0x1c0;
   constexpr ptrdiff_t m_SequenceName = 0x2c0;
   constexpr ptrdiff_t m_hModel = 0x3c0;

}

namespace C_INIT_ScaleVelocity {

   constexpr ptrdiff_t m_vecScale = 0x1c0;

}

namespace C_INIT_PositionWarp {

   constexpr ptrdiff_t m_vecWarpMin = 0x1c0;
   constexpr ptrdiff_t m_vecWarpMax = 0x818;
   constexpr ptrdiff_t m_nScaleControlPointNumber = 0xe70;
   constexpr ptrdiff_t m_nControlPointNumber = 0xe74;
   constexpr ptrdiff_t m_nRadiusComponent = 0xe78;
   constexpr ptrdiff_t m_flWarpTime = 0xe7c;
   constexpr ptrdiff_t m_flWarpStartTime = 0xe80;
   constexpr ptrdiff_t m_flPrevPosScale = 0xe84;
   constexpr ptrdiff_t m_bInvertWarp = 0xe88;
   constexpr ptrdiff_t m_bUseCount = 0xe89;

}

namespace C_INIT_PositionWarpScalar {

   constexpr ptrdiff_t m_vecWarpMin = 0x1c0;
   constexpr ptrdiff_t m_vecWarpMax = 0x1cc;
   constexpr ptrdiff_t m_InputValue = 0x1d8;
   constexpr ptrdiff_t m_flPrevPosScale = 0x330;
   constexpr ptrdiff_t m_nScaleControlPointNumber = 0x334;
   constexpr ptrdiff_t m_nControlPointNumber = 0x338;

}

namespace C_INIT_CreationNoise {

   constexpr ptrdiff_t m_nFieldOutput = 0x1c0;
   constexpr ptrdiff_t m_bAbsVal = 0x1c4;
   constexpr ptrdiff_t m_bAbsValInv = 0x1c5;
   constexpr ptrdiff_t m_flOffset = 0x1c8;
   constexpr ptrdiff_t m_flOutputMin = 0x1cc;
   constexpr ptrdiff_t m_flOutputMax = 0x1d0;
   constexpr ptrdiff_t m_flNoiseScale = 0x1d4;
   constexpr ptrdiff_t m_flNoiseScaleLoc = 0x1d8;
   constexpr ptrdiff_t m_vecOffsetLoc = 0x1dc;
   constexpr ptrdiff_t m_flWorldTimeScale = 0x1e8;

}

namespace C_INIT_CreateAlongPath {

   constexpr ptrdiff_t m_fMaxDistance = 0x1c0;
   constexpr ptrdiff_t m_PathParams = 0x1d0;
   constexpr ptrdiff_t m_bUseRandomCPs = 0x210;
   constexpr ptrdiff_t m_vEndOffset = 0x214;
   constexpr ptrdiff_t m_bSaveOffset = 0x220;

}

namespace C_INIT_MoveBetweenPoints {

   constexpr ptrdiff_t m_flSpeedMin = 0x1c0;
   constexpr ptrdiff_t m_flSpeedMax = 0x318;
   constexpr ptrdiff_t m_flEndSpread = 0x470;
   constexpr ptrdiff_t m_flStartOffset = 0x5c8;
   constexpr ptrdiff_t m_flEndOffset = 0x720;
   constexpr ptrdiff_t m_nEndControlPointNumber = 0x878;
   constexpr ptrdiff_t m_bTrailBias = 0x87c;

}

namespace C_INIT_RemapScalar {

   constexpr ptrdiff_t m_nFieldInput = 0x1c0;
   constexpr ptrdiff_t m_nFieldOutput = 0x1c4;
   constexpr ptrdiff_t m_flInputMin = 0x1c8;
   constexpr ptrdiff_t m_flInputMax = 0x1cc;
   constexpr ptrdiff_t m_flOutputMin = 0x1d0;
   constexpr ptrdiff_t m_flOutputMax = 0x1d4;
   constexpr ptrdiff_t m_flStartTime = 0x1d8;
   constexpr ptrdiff_t m_flEndTime = 0x1dc;
   constexpr ptrdiff_t m_nSetMethod = 0x1e0;
   constexpr ptrdiff_t m_bActiveRange = 0x1e4;
   constexpr ptrdiff_t m_flRemapBias = 0x1e8;

}

namespace C_INIT_RemapParticleCountToScalar {

   constexpr ptrdiff_t m_nFieldOutput = 0x1c0;
   constexpr ptrdiff_t m_nInputMin = 0x1c4;
   constexpr ptrdiff_t m_nInputMax = 0x1c8;
   constexpr ptrdiff_t m_nScaleControlPoint = 0x1cc;
   constexpr ptrdiff_t m_nScaleControlPointField = 0x1d0;
   constexpr ptrdiff_t m_flOutputMin = 0x1d4;
   constexpr ptrdiff_t m_flOutputMax = 0x1d8;
   constexpr ptrdiff_t m_nSetMethod = 0x1dc;
   constexpr ptrdiff_t m_bActiveRange = 0x1e0;
   constexpr ptrdiff_t m_bInvert = 0x1e1;
   constexpr ptrdiff_t m_bWrap = 0x1e2;
   constexpr ptrdiff_t m_flRemapBias = 0x1e4;

}

namespace C_INIT_RemapParticleCountToNamedModelElementScalar {

   constexpr ptrdiff_t m_hModel = 0x1f0;
   constexpr ptrdiff_t m_outputMinName = 0x1f8;
   constexpr ptrdiff_t m_outputMaxName = 0x200;
   constexpr ptrdiff_t m_bModelFromRenderer = 0x208;

}

namespace C_INIT_InheritVelocity {

   constexpr ptrdiff_t m_nControlPointNumber = 0x1c0;
   constexpr ptrdiff_t m_flVelocityScale = 0x1c4;

}

namespace C_INIT_VelocityFromCP {

   constexpr ptrdiff_t m_velocityInput = 0x1c0;
   constexpr ptrdiff_t m_transformInput = 0x818;
   constexpr ptrdiff_t m_flVelocityScale = 0x880;
   constexpr ptrdiff_t m_bDirectionOnly = 0x884;

}

namespace C_INIT_AgeNoise {

   constexpr ptrdiff_t m_bAbsVal = 0x1c0;
   constexpr ptrdiff_t m_bAbsValInv = 0x1c1;
   constexpr ptrdiff_t m_flOffset = 0x1c4;
   constexpr ptrdiff_t m_flAgeMin = 0x1c8;
   constexpr ptrdiff_t m_flAgeMax = 0x1cc;
   constexpr ptrdiff_t m_flNoiseScale = 0x1d0;
   constexpr ptrdiff_t m_flNoiseScaleLoc = 0x1d4;
   constexpr ptrdiff_t m_vecOffsetLoc = 0x1d8;

}

namespace C_INIT_SequenceLifeTime {

   constexpr ptrdiff_t m_flFramerate = 0x1c0;

}

namespace C_INIT_RemapScalarToVector {

   constexpr ptrdiff_t m_nFieldInput = 0x1c0;
   constexpr ptrdiff_t m_nFieldOutput = 0x1c4;
   constexpr ptrdiff_t m_flInputMin = 0x1c8;
   constexpr ptrdiff_t m_flInputMax = 0x1cc;
   constexpr ptrdiff_t m_vecOutputMin = 0x1d0;
   constexpr ptrdiff_t m_vecOutputMax = 0x1dc;
   constexpr ptrdiff_t m_flStartTime = 0x1e8;
   constexpr ptrdiff_t m_flEndTime = 0x1ec;
   constexpr ptrdiff_t m_nSetMethod = 0x1f0;
   constexpr ptrdiff_t m_nControlPointNumber = 0x1f4;
   constexpr ptrdiff_t m_bLocalCoords = 0x1f8;
   constexpr ptrdiff_t m_flRemapBias = 0x1fc;

}

namespace C_INIT_OffsetVectorToVector {

   constexpr ptrdiff_t m_nFieldInput = 0x1c0;
   constexpr ptrdiff_t m_nFieldOutput = 0x1c4;
   constexpr ptrdiff_t m_vecOutputMin = 0x1c8;
   constexpr ptrdiff_t m_vecOutputMax = 0x1d4;
   constexpr ptrdiff_t m_randomnessParameters = 0x1e0;

}

namespace C_INIT_CreateSequentialPathV2 {

   constexpr ptrdiff_t m_fMaxDistance = 0x1c0;
   constexpr ptrdiff_t m_flNumToAssign = 0x318;
   constexpr ptrdiff_t m_bLoop = 0x470;
   constexpr ptrdiff_t m_bCPPairs = 0x471;
   constexpr ptrdiff_t m_bSaveOffset = 0x472;
   constexpr ptrdiff_t m_PathParams = 0x480;

}

namespace C_INIT_CreateSequentialPath {

   constexpr ptrdiff_t m_fMaxDistance = 0x1c0;
   constexpr ptrdiff_t m_flNumToAssign = 0x1c4;
   constexpr ptrdiff_t m_bLoop = 0x1c8;
   constexpr ptrdiff_t m_bCPPairs = 0x1c9;
   constexpr ptrdiff_t m_bSaveOffset = 0x1ca;
   constexpr ptrdiff_t m_PathParams = 0x1d0;

}

namespace C_INIT_InitialRepulsionVelocity {

   constexpr ptrdiff_t m_CollisionGroupName = 0x1c0;
   constexpr ptrdiff_t m_nTraceSet = 0x240;
   constexpr ptrdiff_t m_vecOutputMin = 0x244;
   constexpr ptrdiff_t m_vecOutputMax = 0x250;
   constexpr ptrdiff_t m_nControlPointNumber = 0x25c;
   constexpr ptrdiff_t m_bPerParticle = 0x260;
   constexpr ptrdiff_t m_bTranslate = 0x261;
   constexpr ptrdiff_t m_bProportional = 0x262;
   constexpr ptrdiff_t m_flTraceLength = 0x264;
   constexpr ptrdiff_t m_bPerParticleTR = 0x268;
   constexpr ptrdiff_t m_bInherit = 0x269;
   constexpr ptrdiff_t m_nChildCP = 0x26c;
   constexpr ptrdiff_t m_nChildGroupID = 0x270;

}

namespace C_INIT_RandomYawFlip {

   constexpr ptrdiff_t m_flPercent = 0x1c0;

}

namespace C_INIT_RandomSecondSequence {

   constexpr ptrdiff_t m_nSequenceMin = 0x1c0;
   constexpr ptrdiff_t m_nSequenceMax = 0x1c4;

}

namespace C_INIT_RemapCPtoScalar {

   constexpr ptrdiff_t m_nCPInput = 0x1c0;
   constexpr ptrdiff_t m_nFieldOutput = 0x1c4;
   constexpr ptrdiff_t m_nField = 0x1c8;
   constexpr ptrdiff_t m_flInputMin = 0x1cc;
   constexpr ptrdiff_t m_flInputMax = 0x1d0;
   constexpr ptrdiff_t m_flOutputMin = 0x1d4;
   constexpr ptrdiff_t m_flOutputMax = 0x1d8;
   constexpr ptrdiff_t m_flStartTime = 0x1dc;
   constexpr ptrdiff_t m_flEndTime = 0x1e0;
   constexpr ptrdiff_t m_nSetMethod = 0x1e4;
   constexpr ptrdiff_t m_flRemapBias = 0x1e8;

}

namespace C_INIT_RemapTransformToVector {

   constexpr ptrdiff_t m_nFieldOutput = 0x1c0;
   constexpr ptrdiff_t m_vInputMin = 0x1c4;
   constexpr ptrdiff_t m_vInputMax = 0x1d0;
   constexpr ptrdiff_t m_vOutputMin = 0x1dc;
   constexpr ptrdiff_t m_vOutputMax = 0x1e8;
   constexpr ptrdiff_t m_TransformInput = 0x1f8;
   constexpr ptrdiff_t m_LocalSpaceTransform = 0x260;
   constexpr ptrdiff_t m_flStartTime = 0x2c8;
   constexpr ptrdiff_t m_flEndTime = 0x2cc;
   constexpr ptrdiff_t m_nSetMethod = 0x2d0;
   constexpr ptrdiff_t m_bOffset = 0x2d4;
   constexpr ptrdiff_t m_bAccelerate = 0x2d5;
   constexpr ptrdiff_t m_flRemapBias = 0x2d8;

}

namespace C_INIT_ChaoticAttractor {

   constexpr ptrdiff_t m_flAParm = 0x1c0;
   constexpr ptrdiff_t m_flBParm = 0x1c4;
   constexpr ptrdiff_t m_flCParm = 0x1c8;
   constexpr ptrdiff_t m_flDParm = 0x1cc;
   constexpr ptrdiff_t m_flScale = 0x1d0;
   constexpr ptrdiff_t m_flSpeedMin = 0x1d4;
   constexpr ptrdiff_t m_flSpeedMax = 0x1d8;
   constexpr ptrdiff_t m_nBaseCP = 0x1dc;
   constexpr ptrdiff_t m_bUniformSpeed = 0x1e0;

}

namespace C_INIT_CreateFromParentParticles {

   constexpr ptrdiff_t m_flVelocityScale = 0x1c0;
   constexpr ptrdiff_t m_flIncrement = 0x1c4;
   constexpr ptrdiff_t m_bRandomDistribution = 0x1c8;
   constexpr ptrdiff_t m_nRandomSeed = 0x1cc;
   constexpr ptrdiff_t m_bSubFrame = 0x1d0;

}

namespace C_INIT_InheritFromParentParticles {

   constexpr ptrdiff_t m_flScale = 0x1c0;
   constexpr ptrdiff_t m_nFieldOutput = 0x1c4;
   constexpr ptrdiff_t m_nIncrement = 0x1c8;
   constexpr ptrdiff_t m_bRandomDistribution = 0x1cc;
   constexpr ptrdiff_t m_nRandomSeed = 0x1d0;

}

namespace C_INIT_CreateFromCPs {

   constexpr ptrdiff_t m_nIncrement = 0x1c0;
   constexpr ptrdiff_t m_nMinCP = 0x1c4;
   constexpr ptrdiff_t m_nMaxCP = 0x1c8;
   constexpr ptrdiff_t m_nDynamicCPCount = 0x1d0;

}

namespace C_INIT_DistanceToCPInit {

   constexpr ptrdiff_t m_nFieldOutput = 0x1c0;
   constexpr ptrdiff_t m_flInputMin = 0x1c8;
   constexpr ptrdiff_t m_flInputMax = 0x320;
   constexpr ptrdiff_t m_flOutputMin = 0x478;
   constexpr ptrdiff_t m_flOutputMax = 0x5d0;
   constexpr ptrdiff_t m_nStartCP = 0x728;
   constexpr ptrdiff_t m_bLOS = 0x72c;
   constexpr ptrdiff_t m_CollisionGroupName = 0x72d;
   constexpr ptrdiff_t m_nTraceSet = 0x7b0;
   constexpr ptrdiff_t m_flMaxTraceLength = 0x7b8;
   constexpr ptrdiff_t m_flLOSScale = 0x910;
   constexpr ptrdiff_t m_nSetMethod = 0x914;
   constexpr ptrdiff_t m_bActiveRange = 0x918;
   constexpr ptrdiff_t m_vecDistanceScale = 0x91c;
   constexpr ptrdiff_t m_flRemapBias = 0x928;

}

namespace C_INIT_LifespanFromVelocity {

   constexpr ptrdiff_t m_vecComponentScale = 0x1c0;
   constexpr ptrdiff_t m_flTraceOffset = 0x1cc;
   constexpr ptrdiff_t m_flMaxTraceLength = 0x1d0;
   constexpr ptrdiff_t m_flTraceTolerance = 0x1d4;
   constexpr ptrdiff_t m_nMaxPlanes = 0x1d8;
   constexpr ptrdiff_t m_CollisionGroupName = 0x1e0;
   constexpr ptrdiff_t m_nTraceSet = 0x260;
   constexpr ptrdiff_t m_bIncludeWater = 0x270;

}

namespace C_INIT_CreateFromPlaneCache {

   constexpr ptrdiff_t m_vecOffsetMin = 0x1c0;
   constexpr ptrdiff_t m_vecOffsetMax = 0x1cc;
   constexpr ptrdiff_t m_bUseNormal = 0x1d9;

}

namespace C_INIT_ModelCull {

   constexpr ptrdiff_t m_nControlPointNumber = 0x1c0;
   constexpr ptrdiff_t m_bBoundBox = 0x1c4;
   constexpr ptrdiff_t m_bCullOutside = 0x1c5;
   constexpr ptrdiff_t m_bUseBones = 0x1c6;
   constexpr ptrdiff_t m_HitboxSetName = 0x1c7;

}

namespace C_INIT_DistanceCull {

   constexpr ptrdiff_t m_nControlPoint = 0x1c0;
   constexpr ptrdiff_t m_flDistance = 0x1c8;
   constexpr ptrdiff_t m_bCullInside = 0x320;

}

namespace C_INIT_PlaneCull {

   constexpr ptrdiff_t m_nControlPoint = 0x1c0;
   constexpr ptrdiff_t m_flDistance = 0x1c8;
   constexpr ptrdiff_t m_bCullInside = 0x320;

}

namespace C_INIT_DistanceToNeighborCull {

   constexpr ptrdiff_t m_flDistance = 0x1c0;

}

namespace C_INIT_RtEnvCull {

   constexpr ptrdiff_t m_vecTestDir = 0x1c0;
   constexpr ptrdiff_t m_vecTestNormal = 0x1cc;
   constexpr ptrdiff_t m_bUseVelocity = 0x1d8;
   constexpr ptrdiff_t m_bCullOnMiss = 0x1d9;
   constexpr ptrdiff_t m_bLifeAdjust = 0x1da;
   constexpr ptrdiff_t m_RtEnvName = 0x1db;
   constexpr ptrdiff_t m_nRTEnvCP = 0x25c;
   constexpr ptrdiff_t m_nComponent = 0x260;

}

namespace C_INIT_NormalAlignToCP {

   constexpr ptrdiff_t m_transformInput = 0x1c0;
   constexpr ptrdiff_t m_nControlPointAxis = 0x228;

}

namespace C_INIT_NormalOffset {

   constexpr ptrdiff_t m_OffsetMin = 0x1c0;
   constexpr ptrdiff_t m_OffsetMax = 0x1cc;
   constexpr ptrdiff_t m_nControlPointNumber = 0x1d8;
   constexpr ptrdiff_t m_bLocalCoords = 0x1dc;
   constexpr ptrdiff_t m_bNormalize = 0x1dd;

}

namespace C_INIT_RemapSpeedToScalar {

   constexpr ptrdiff_t m_nFieldOutput = 0x1c0;
   constexpr ptrdiff_t m_nControlPointNumber = 0x1c4;
   constexpr ptrdiff_t m_flStartTime = 0x1c8;
   constexpr ptrdiff_t m_flEndTime = 0x1cc;
   constexpr ptrdiff_t m_flInputMin = 0x1d0;
   constexpr ptrdiff_t m_flInputMax = 0x1d4;
   constexpr ptrdiff_t m_flOutputMin = 0x1d8;
   constexpr ptrdiff_t m_flOutputMax = 0x1dc;
   constexpr ptrdiff_t m_nSetMethod = 0x1e0;
   constexpr ptrdiff_t m_bPerParticle = 0x1e4;

}

namespace C_INIT_InitFromCPSnapshot {

   constexpr ptrdiff_t m_nControlPointNumber = 0x1c0;
   constexpr ptrdiff_t m_nAttributeToRead = 0x1c4;
   constexpr ptrdiff_t m_nAttributeToWrite = 0x1c8;
   constexpr ptrdiff_t m_nLocalSpaceCP = 0x1cc;
   constexpr ptrdiff_t m_bRandom = 0x1d0;
   constexpr ptrdiff_t m_bReverse = 0x1d1;
   constexpr ptrdiff_t m_nSnapShotIncrement = 0x1d8;
   constexpr ptrdiff_t m_nManualSnapshotIndex = 0x330;
   constexpr ptrdiff_t m_nRandomSeed = 0x488;
   constexpr ptrdiff_t m_bLocalSpaceAngles = 0x48c;

}

namespace C_INIT_InitSkinnedPositionFromCPSnapshot {

   constexpr ptrdiff_t m_nSnapshotControlPointNumber = 0x1c0;
   constexpr ptrdiff_t m_nControlPointNumber = 0x1c4;
   constexpr ptrdiff_t m_bRandom = 0x1c8;
   constexpr ptrdiff_t m_nRandomSeed = 0x1cc;
   constexpr ptrdiff_t m_bRigid = 0x1d0;
   constexpr ptrdiff_t m_bSetNormal = 0x1d1;
   constexpr ptrdiff_t m_bIgnoreDt = 0x1d2;
   constexpr ptrdiff_t m_flMinNormalVelocity = 0x1d4;
   constexpr ptrdiff_t m_flMaxNormalVelocity = 0x1d8;
   constexpr ptrdiff_t m_flIncrement = 0x1dc;
   constexpr ptrdiff_t m_nFullLoopIncrement = 0x1e0;
   constexpr ptrdiff_t m_nSnapShotStartPoint = 0x1e4;
   constexpr ptrdiff_t m_flBoneVelocity = 0x1e8;
   constexpr ptrdiff_t m_flBoneVelocityMax = 0x1ec;
   constexpr ptrdiff_t m_bCopyColor = 0x1f0;
   constexpr ptrdiff_t m_bCopyAlpha = 0x1f1;
   constexpr ptrdiff_t m_bSetRadius = 0x1f2;

}

namespace C_INIT_InitFromParentKilled {

   constexpr ptrdiff_t m_nAttributeToCopy = 0x1c0;

}

namespace C_INIT_InitFromVectorFieldSnapshot {

   constexpr ptrdiff_t m_nControlPointNumber = 0x1c0;
   constexpr ptrdiff_t m_nLocalSpaceCP = 0x1c4;
   constexpr ptrdiff_t m_nWeightUpdateCP = 0x1c8;
   constexpr ptrdiff_t m_bUseVerticalVelocity = 0x1cc;
   constexpr ptrdiff_t m_vecScale = 0x1d0;

}

namespace C_INIT_RemapInitialDirectionToTransformToVector {

   constexpr ptrdiff_t m_TransformInput = 0x1c0;
   constexpr ptrdiff_t m_nFieldOutput = 0x228;
   constexpr ptrdiff_t m_flScale = 0x22c;
   constexpr ptrdiff_t m_flOffsetRot = 0x230;
   constexpr ptrdiff_t m_vecOffsetAxis = 0x234;
   constexpr ptrdiff_t m_bNormalize = 0x240;

}

namespace C_INIT_RemapInitialTransformDirectionToRotation {

   constexpr ptrdiff_t m_TransformInput = 0x1c0;
   constexpr ptrdiff_t m_nFieldOutput = 0x228;
   constexpr ptrdiff_t m_flOffsetRot = 0x22c;
   constexpr ptrdiff_t m_nComponent = 0x230;

}

namespace C_INIT_RemapQAnglesToRotation {

   constexpr ptrdiff_t m_TransformInput = 0x1c0;

}

namespace C_INIT_RemapTransformOrientationToRotations {

   constexpr ptrdiff_t m_TransformInput = 0x1c0;
   constexpr ptrdiff_t m_vecRotation = 0x228;
   constexpr ptrdiff_t m_bUseQuat = 0x234;
   constexpr ptrdiff_t m_bWriteNormal = 0x235;

}

namespace C_INIT_SetRigidAttachment {

   constexpr ptrdiff_t m_nControlPointNumber = 0x1c0;
   constexpr ptrdiff_t m_nFieldInput = 0x1c4;
   constexpr ptrdiff_t m_nFieldOutput = 0x1c8;
   constexpr ptrdiff_t m_bLocalSpace = 0x1cc;

}

namespace C_INIT_RemapInitialVisibilityScalar {

   constexpr ptrdiff_t m_nFieldOutput = 0x1c4;
   constexpr ptrdiff_t m_flInputMin = 0x1c8;
   constexpr ptrdiff_t m_flInputMax = 0x1cc;
   constexpr ptrdiff_t m_flOutputMin = 0x1d0;
   constexpr ptrdiff_t m_flOutputMax = 0x1d4;

}

namespace C_INIT_RadiusFromCPObject {

   constexpr ptrdiff_t m_nControlPoint = 0x1c0;

}

namespace C_INIT_InitialSequenceFromModel {

   constexpr ptrdiff_t m_nControlPointNumber = 0x1c0;
   constexpr ptrdiff_t m_nFieldOutput = 0x1c4;
   constexpr ptrdiff_t m_nFieldOutputAnim = 0x1c8;
   constexpr ptrdiff_t m_flInputMin = 0x1cc;
   constexpr ptrdiff_t m_flInputMax = 0x1d0;
   constexpr ptrdiff_t m_flOutputMin = 0x1d4;
   constexpr ptrdiff_t m_flOutputMax = 0x1d8;
   constexpr ptrdiff_t m_nSetMethod = 0x1dc;

}

namespace C_INIT_GlobalScale {

   constexpr ptrdiff_t m_flScale = 0x1c0;
   constexpr ptrdiff_t m_nScaleControlPointNumber = 0x1c4;
   constexpr ptrdiff_t m_nControlPointNumber = 0x1c8;
   constexpr ptrdiff_t m_bScaleRadius = 0x1cc;
   constexpr ptrdiff_t m_bScalePosition = 0x1cd;
   constexpr ptrdiff_t m_bScaleVelocity = 0x1ce;

}

namespace C_INIT_PointList {

   constexpr ptrdiff_t m_nFieldOutput = 0x1c0;
   constexpr ptrdiff_t m_pointList = 0x1c8;
   constexpr ptrdiff_t m_bPlaceAlongPath = 0x1e0;
   constexpr ptrdiff_t m_bClosedLoop = 0x1e1;
   constexpr ptrdiff_t m_nNumPointsAlongPath = 0x1e4;

}

namespace C_INIT_RandomNamedModelElement {

   constexpr ptrdiff_t m_hModel = 0x1c0;
   constexpr ptrdiff_t m_names = 0x1c8;
   constexpr ptrdiff_t m_bShuffle = 0x1e0;
   constexpr ptrdiff_t m_bLinear = 0x1e1;
   constexpr ptrdiff_t m_bModelFromRenderer = 0x1e2;
   constexpr ptrdiff_t m_nFieldOutput = 0x1e4;

}

namespace C_INIT_RemapNamedModelElementToScalar {

   constexpr ptrdiff_t m_hModel = 0x1c0;
   constexpr ptrdiff_t m_names = 0x1c8;
   constexpr ptrdiff_t m_values = 0x1e0;
   constexpr ptrdiff_t m_nFieldInput = 0x1f8;
   constexpr ptrdiff_t m_nFieldOutput = 0x1fc;
   constexpr ptrdiff_t m_nSetMethod = 0x200;
   constexpr ptrdiff_t m_bModelFromRenderer = 0x204;

}

namespace C_INIT_StatusEffect {

   constexpr ptrdiff_t m_nDetail2Combo = 0x1c0;
   constexpr ptrdiff_t m_flDetail2Rotation = 0x1c4;
   constexpr ptrdiff_t m_flDetail2Scale = 0x1c8;
   constexpr ptrdiff_t m_flDetail2BlendFactor = 0x1cc;
   constexpr ptrdiff_t m_flColorWarpIntensity = 0x1d0;
   constexpr ptrdiff_t m_flDiffuseWarpBlendToFull = 0x1d4;
   constexpr ptrdiff_t m_flEnvMapIntensity = 0x1d8;
   constexpr ptrdiff_t m_flAmbientScale = 0x1dc;
   constexpr ptrdiff_t m_specularColor = 0x1e0;
   constexpr ptrdiff_t m_flSpecularScale = 0x1e4;
   constexpr ptrdiff_t m_flSpecularExponent = 0x1e8;
   constexpr ptrdiff_t m_flSpecularExponentBlendToFull = 0x1ec;
   constexpr ptrdiff_t m_flSpecularBlendToFull = 0x1f0;
   constexpr ptrdiff_t m_rimLightColor = 0x1f4;
   constexpr ptrdiff_t m_flRimLightScale = 0x1f8;
   constexpr ptrdiff_t m_flReflectionsTintByBaseBlendToNone = 0x1fc;
   constexpr ptrdiff_t m_flMetalnessBlendToFull = 0x200;
   constexpr ptrdiff_t m_flSelfIllumBlendToFull = 0x204;

}

namespace C_INIT_StatusEffectCitadel {

   constexpr ptrdiff_t m_flSFXColorWarpAmount = 0x1c0;
   constexpr ptrdiff_t m_flSFXNormalAmount = 0x1c4;
   constexpr ptrdiff_t m_flSFXMetalnessAmount = 0x1c8;
   constexpr ptrdiff_t m_flSFXRoughnessAmount = 0x1cc;
   constexpr ptrdiff_t m_flSFXSelfIllumAmount = 0x1d0;
   constexpr ptrdiff_t m_flSFXSScale = 0x1d4;
   constexpr ptrdiff_t m_flSFXSScrollX = 0x1d8;
   constexpr ptrdiff_t m_flSFXSScrollY = 0x1dc;
   constexpr ptrdiff_t m_flSFXSScrollZ = 0x1e0;
   constexpr ptrdiff_t m_flSFXSOffsetX = 0x1e4;
   constexpr ptrdiff_t m_flSFXSOffsetY = 0x1e8;
   constexpr ptrdiff_t m_flSFXSOffsetZ = 0x1ec;
   constexpr ptrdiff_t m_nDetailCombo = 0x1f0;
   constexpr ptrdiff_t m_flSFXSDetailAmount = 0x1f4;
   constexpr ptrdiff_t m_flSFXSDetailScale = 0x1f8;
   constexpr ptrdiff_t m_flSFXSDetailScrollX = 0x1fc;
   constexpr ptrdiff_t m_flSFXSDetailScrollY = 0x200;
   constexpr ptrdiff_t m_flSFXSDetailScrollZ = 0x204;
   constexpr ptrdiff_t m_flSFXSUseModelUVs = 0x208;

}

namespace C_INIT_CreateParticleImpulse {

   constexpr ptrdiff_t m_InputRadius = 0x1c0;
   constexpr ptrdiff_t m_InputMagnitude = 0x318;
   constexpr ptrdiff_t m_nFalloffFunction = 0x470;
   constexpr ptrdiff_t m_InputFalloffExp = 0x478;
   constexpr ptrdiff_t m_nImpulseType = 0x5d0;

}

namespace C_INIT_QuantizeFloat {

   constexpr ptrdiff_t m_InputValue = 0x1c0;
   constexpr ptrdiff_t m_nOutputField = 0x318;

}

namespace C_INIT_SetVectorAttributeToVectorExpression {

   constexpr ptrdiff_t m_nExpression = 0x1c0;
   constexpr ptrdiff_t m_vInput1 = 0x1c8;
   constexpr ptrdiff_t m_vInput2 = 0x820;
   constexpr ptrdiff_t m_nOutputField = 0xe78;
   constexpr ptrdiff_t m_nSetMethod = 0xe7c;
   constexpr ptrdiff_t m_bNormalizedOutput = 0xe80;

}

namespace C_INIT_InitFloatCollection {

   constexpr ptrdiff_t m_InputValue = 0x1c0;
   constexpr ptrdiff_t m_nOutputField = 0x318;

}

namespace C_INIT_InitFloat {

   constexpr ptrdiff_t m_InputValue = 0x1c0;
   constexpr ptrdiff_t m_nOutputField = 0x318;
   constexpr ptrdiff_t m_nSetMethod = 0x31c;
   constexpr ptrdiff_t m_InputStrength = 0x320;

}

namespace C_INIT_InitVecCollection {

   constexpr ptrdiff_t m_InputValue = 0x1c0;
   constexpr ptrdiff_t m_nOutputField = 0x818;

}

namespace C_INIT_InitVec {

   constexpr ptrdiff_t m_InputValue = 0x1c0;
   constexpr ptrdiff_t m_nOutputField = 0x818;
   constexpr ptrdiff_t m_nSetMethod = 0x81c;
   constexpr ptrdiff_t m_bNormalizedOutput = 0x820;
   constexpr ptrdiff_t m_bWritePreviousPosition = 0x821;

}

namespace C_OP_InstantaneousEmitter {

   constexpr ptrdiff_t m_nParticlesToEmit = 0x1c0;
   constexpr ptrdiff_t m_flStartTime = 0x318;
   constexpr ptrdiff_t m_flInitFromKilledParentParticles = 0x470;
   constexpr ptrdiff_t m_flParentParticleScale = 0x478;
   constexpr ptrdiff_t m_nMaxEmittedPerFrame = 0x5d0;
   constexpr ptrdiff_t m_nSnapshotControlPoint = 0x5d4;

}

namespace C_OP_ContinuousEmitter {

   constexpr ptrdiff_t m_flEmissionDuration = 0x1c0;
   constexpr ptrdiff_t m_flStartTime = 0x318;
   constexpr ptrdiff_t m_flEmitRate = 0x470;
   constexpr ptrdiff_t m_flEmissionScale = 0x5c8;
   constexpr ptrdiff_t m_flScalePerParentParticle = 0x5cc;
   constexpr ptrdiff_t m_bInitFromKilledParentParticles = 0x5d0;
   constexpr ptrdiff_t m_nSnapshotControlPoint = 0x5d4;
   constexpr ptrdiff_t m_nLimitPerUpdate = 0x5d8;
   constexpr ptrdiff_t m_bForceEmitOnFirstUpdate = 0x5dc;
   constexpr ptrdiff_t m_bForceEmitOnLastUpdate = 0x5dd;

}

namespace C_OP_NoiseEmitter {

   constexpr ptrdiff_t m_flEmissionDuration = 0x1c0;
   constexpr ptrdiff_t m_flStartTime = 0x1c4;
   constexpr ptrdiff_t m_flEmissionScale = 0x1c8;
   constexpr ptrdiff_t m_nScaleControlPoint = 0x1cc;
   constexpr ptrdiff_t m_nScaleControlPointField = 0x1d0;
   constexpr ptrdiff_t m_nWorldNoisePoint = 0x1d4;
   constexpr ptrdiff_t m_bAbsVal = 0x1d8;
   constexpr ptrdiff_t m_bAbsValInv = 0x1d9;
   constexpr ptrdiff_t m_flOffset = 0x1dc;
   constexpr ptrdiff_t m_flOutputMin = 0x1e0;
   constexpr ptrdiff_t m_flOutputMax = 0x1e4;
   constexpr ptrdiff_t m_flNoiseScale = 0x1e8;
   constexpr ptrdiff_t m_flWorldNoiseScale = 0x1ec;
   constexpr ptrdiff_t m_vecOffsetLoc = 0x1f0;
   constexpr ptrdiff_t m_flWorldTimeScale = 0x1fc;

}

namespace C_OP_MaintainEmitter {

   constexpr ptrdiff_t m_nParticlesToMaintain = 0x1c0;
   constexpr ptrdiff_t m_flStartTime = 0x318;
   constexpr ptrdiff_t m_flEmissionDuration = 0x320;
   constexpr ptrdiff_t m_flEmissionRate = 0x478;
   constexpr ptrdiff_t m_nSnapshotControlPoint = 0x47c;
   constexpr ptrdiff_t m_bEmitInstantaneously = 0x480;
   constexpr ptrdiff_t m_bFinalEmitOnStop = 0x481;
   constexpr ptrdiff_t m_flScale = 0x488;

}

namespace C_OP_RandomForce {

   constexpr ptrdiff_t m_MinForce = 0x1d0;
   constexpr ptrdiff_t m_MaxForce = 0x1dc;

}

namespace C_OP_CPVelocityForce {

   constexpr ptrdiff_t m_nControlPointNumber = 0x1d0;
   constexpr ptrdiff_t m_flScale = 0x1d8;

}

namespace C_OP_ParentVortices {

   constexpr ptrdiff_t m_flForceScale = 0x1d0;
   constexpr ptrdiff_t m_vecTwistAxis = 0x1d4;
   constexpr ptrdiff_t m_bFlipBasedOnYaw = 0x1e0;

}

namespace C_OP_TwistAroundAxis {

   constexpr ptrdiff_t m_fForceAmount = 0x1d0;
   constexpr ptrdiff_t m_TwistAxis = 0x1d4;
   constexpr ptrdiff_t m_bLocalSpace = 0x1e0;
   constexpr ptrdiff_t m_nControlPointNumber = 0x1e4;

}

namespace C_OP_AttractToControlPoint {

   constexpr ptrdiff_t m_vecComponentScale = 0x1d0;
   constexpr ptrdiff_t m_fForceAmount = 0x1e0;
   constexpr ptrdiff_t m_fFalloffPower = 0x338;
   constexpr ptrdiff_t m_TransformInput = 0x340;
   constexpr ptrdiff_t m_fForceAmountMin = 0x3a8;
   constexpr ptrdiff_t m_bApplyMinForce = 0x500;

}

namespace C_OP_ForceBasedOnDistanceToPlane {

   constexpr ptrdiff_t m_flMinDist = 0x1d0;
   constexpr ptrdiff_t m_vecForceAtMinDist = 0x1d4;
   constexpr ptrdiff_t m_flMaxDist = 0x1e0;
   constexpr ptrdiff_t m_vecForceAtMaxDist = 0x1e4;
   constexpr ptrdiff_t m_vecPlaneNormal = 0x1f0;
   constexpr ptrdiff_t m_nControlPointNumber = 0x1fc;
   constexpr ptrdiff_t m_flExponent = 0x200;

}

namespace C_OP_TimeVaryingForce {

   constexpr ptrdiff_t m_flStartLerpTime = 0x1d0;
   constexpr ptrdiff_t m_StartingForce = 0x1d4;
   constexpr ptrdiff_t m_flEndLerpTime = 0x1e0;
   constexpr ptrdiff_t m_EndingForce = 0x1e4;

}

namespace C_OP_TurbulenceForce {

   constexpr ptrdiff_t m_flNoiseCoordScale0 = 0x1d0;
   constexpr ptrdiff_t m_flNoiseCoordScale1 = 0x1d4;
   constexpr ptrdiff_t m_flNoiseCoordScale2 = 0x1d8;
   constexpr ptrdiff_t m_flNoiseCoordScale3 = 0x1dc;
   constexpr ptrdiff_t m_vecNoiseAmount0 = 0x1e0;
   constexpr ptrdiff_t m_vecNoiseAmount1 = 0x1ec;
   constexpr ptrdiff_t m_vecNoiseAmount2 = 0x1f8;
   constexpr ptrdiff_t m_vecNoiseAmount3 = 0x204;

}

namespace C_OP_CurlNoiseForce {

   constexpr ptrdiff_t m_nNoiseType = 0x1d0;
   constexpr ptrdiff_t m_vecNoiseFreq = 0x1d8;
   constexpr ptrdiff_t m_vecNoiseScale = 0x830;
   constexpr ptrdiff_t m_vecOffset = 0xe88;
   constexpr ptrdiff_t m_vecOffsetRate = 0x14e0;
   constexpr ptrdiff_t m_flWorleySeed = 0x1b38;
   constexpr ptrdiff_t m_flWorleyJitter = 0x1c90;

}

namespace C_OP_PerParticleForce {

   constexpr ptrdiff_t m_flForceScale = 0x1d0;
   constexpr ptrdiff_t m_vForce = 0x328;
   constexpr ptrdiff_t m_nCP = 0x980;

}

namespace C_OP_WindForce {

   constexpr ptrdiff_t m_vForce = 0x1d0;

}

namespace C_OP_ExternalWindForce {

   constexpr ptrdiff_t m_vecSamplePosition = 0x1d0;
   constexpr ptrdiff_t m_vecScale = 0x828;
   constexpr ptrdiff_t m_bSampleWind = 0xe80;
   constexpr ptrdiff_t m_bSampleWater = 0xe81;
   constexpr ptrdiff_t m_bDampenNearWaterPlane = 0xe82;
   constexpr ptrdiff_t m_bSampleGravity = 0xe83;
   constexpr ptrdiff_t m_vecGravityForce = 0xe88;
   constexpr ptrdiff_t m_bUseBasicMovementGravity = 0x14e0;
   constexpr ptrdiff_t m_flLocalGravityScale = 0x14e8;
   constexpr ptrdiff_t m_flLocalBuoyancyScale = 0x1640;
   constexpr ptrdiff_t m_vecBuoyancyForce = 0x1798;

}

namespace C_OP_ExternalGameImpulseForce {

   constexpr ptrdiff_t m_flForceScale = 0x1d0;
   constexpr ptrdiff_t m_bRopes = 0x328;
   constexpr ptrdiff_t m_bRopesZOnly = 0x329;
   constexpr ptrdiff_t m_bExplosions = 0x32a;
   constexpr ptrdiff_t m_bParticles = 0x32b;

}

namespace C_OP_LocalAccelerationForce {

   constexpr ptrdiff_t m_nCP = 0x1d0;
   constexpr ptrdiff_t m_nScaleCP = 0x1d4;
   constexpr ptrdiff_t m_vecAccel = 0x1d8;

}

namespace C_OP_DensityForce {

   constexpr ptrdiff_t m_flRadiusScale = 0x1d0;
   constexpr ptrdiff_t m_flForceScale = 0x1d4;
   constexpr ptrdiff_t m_flTargetDensity = 0x1d8;

}

namespace C_OP_BasicMovement {

   constexpr ptrdiff_t m_Gravity = 0x1c0;
   constexpr ptrdiff_t m_fDrag = 0x818;
   constexpr ptrdiff_t m_nMaxConstraintPasses = 0x970;

}

namespace C_OP_FadeAndKill {

   constexpr ptrdiff_t m_flStartFadeInTime = 0x1c0;
   constexpr ptrdiff_t m_flEndFadeInTime = 0x1c4;
   constexpr ptrdiff_t m_flStartFadeOutTime = 0x1c8;
   constexpr ptrdiff_t m_flEndFadeOutTime = 0x1cc;
   constexpr ptrdiff_t m_flStartAlpha = 0x1d0;
   constexpr ptrdiff_t m_flEndAlpha = 0x1d4;
   constexpr ptrdiff_t m_bForcePreserveParticleOrder = 0x1d8;

}

namespace C_OP_FadeAndKillForTracers {

   constexpr ptrdiff_t m_flStartFadeInTime = 0x1c0;
   constexpr ptrdiff_t m_flEndFadeInTime = 0x1c4;
   constexpr ptrdiff_t m_flStartFadeOutTime = 0x1c8;
   constexpr ptrdiff_t m_flEndFadeOutTime = 0x1cc;
   constexpr ptrdiff_t m_flStartAlpha = 0x1d0;
   constexpr ptrdiff_t m_flEndAlpha = 0x1d4;

}

namespace C_OP_FadeIn {

   constexpr ptrdiff_t m_flFadeInTimeMin = 0x1c0;
   constexpr ptrdiff_t m_flFadeInTimeMax = 0x1c4;
   constexpr ptrdiff_t m_flFadeInTimeExp = 0x1c8;
   constexpr ptrdiff_t m_bProportional = 0x1cc;

}

namespace C_OP_FadeOut {

   constexpr ptrdiff_t m_flFadeOutTimeMin = 0x1c0;
   constexpr ptrdiff_t m_flFadeOutTimeMax = 0x1c4;
   constexpr ptrdiff_t m_flFadeOutTimeExp = 0x1c8;
   constexpr ptrdiff_t m_flFadeBias = 0x1cc;
   constexpr ptrdiff_t m_bProportional = 0x200;
   constexpr ptrdiff_t m_bEaseInAndOut = 0x201;

}

namespace C_OP_FadeInSimple {

   constexpr ptrdiff_t m_flFadeInTime = 0x1c0;
   constexpr ptrdiff_t m_nFieldOutput = 0x1c4;

}

namespace C_OP_FadeOutSimple {

   constexpr ptrdiff_t m_flFadeOutTime = 0x1c0;
   constexpr ptrdiff_t m_nFieldOutput = 0x1c4;

}

namespace C_OP_ClampScalar {

   constexpr ptrdiff_t m_nFieldOutput = 0x1c0;
   constexpr ptrdiff_t m_flOutputMin = 0x1c8;
   constexpr ptrdiff_t m_flOutputMax = 0x320;

}

namespace C_OP_ClampVector {

   constexpr ptrdiff_t m_nFieldOutput = 0x1c0;
   constexpr ptrdiff_t m_vecOutputMin = 0x1c8;
   constexpr ptrdiff_t m_vecOutputMax = 0x820;

}

namespace C_OP_OscillateScalar {

   constexpr ptrdiff_t m_RateMin = 0x1c0;
   constexpr ptrdiff_t m_RateMax = 0x1c4;
   constexpr ptrdiff_t m_FrequencyMin = 0x1c8;
   constexpr ptrdiff_t m_FrequencyMax = 0x1cc;
   constexpr ptrdiff_t m_nField = 0x1d0;
   constexpr ptrdiff_t m_bProportional = 0x1d4;
   constexpr ptrdiff_t m_bProportionalOp = 0x1d5;
   constexpr ptrdiff_t m_flStartTime_min = 0x1d8;
   constexpr ptrdiff_t m_flStartTime_max = 0x1dc;
   constexpr ptrdiff_t m_flEndTime_min = 0x1e0;
   constexpr ptrdiff_t m_flEndTime_max = 0x1e4;
   constexpr ptrdiff_t m_flOscMult = 0x1e8;
   constexpr ptrdiff_t m_flOscAdd = 0x1ec;

}

namespace C_OP_OscillateScalarSimple {

   constexpr ptrdiff_t m_Rate = 0x1c0;
   constexpr ptrdiff_t m_Frequency = 0x1c4;
   constexpr ptrdiff_t m_nField = 0x1c8;
   constexpr ptrdiff_t m_flOscMult = 0x1cc;
   constexpr ptrdiff_t m_flOscAdd = 0x1d0;

}

namespace C_OP_OscillateVector {

   constexpr ptrdiff_t m_RateMin = 0x1c0;
   constexpr ptrdiff_t m_RateMax = 0x1cc;
   constexpr ptrdiff_t m_FrequencyMin = 0x1d8;
   constexpr ptrdiff_t m_FrequencyMax = 0x1e4;
   constexpr ptrdiff_t m_nField = 0x1f0;
   constexpr ptrdiff_t m_bProportional = 0x1f4;
   constexpr ptrdiff_t m_bProportionalOp = 0x1f5;
   constexpr ptrdiff_t m_bOffset = 0x1f6;
   constexpr ptrdiff_t m_flStartTime_min = 0x1f8;
   constexpr ptrdiff_t m_flStartTime_max = 0x1fc;
   constexpr ptrdiff_t m_flEndTime_min = 0x200;
   constexpr ptrdiff_t m_flEndTime_max = 0x204;
   constexpr ptrdiff_t m_flOscMult = 0x208;
   constexpr ptrdiff_t m_flOscAdd = 0x360;
   constexpr ptrdiff_t m_flRateScale = 0x4b8;

}

namespace C_OP_OscillateVectorSimple {

   constexpr ptrdiff_t m_Rate = 0x1c0;
   constexpr ptrdiff_t m_Frequency = 0x1cc;
   constexpr ptrdiff_t m_nField = 0x1d8;
   constexpr ptrdiff_t m_flOscMult = 0x1dc;
   constexpr ptrdiff_t m_flOscAdd = 0x1e0;
   constexpr ptrdiff_t m_bOffset = 0x1e4;

}

namespace C_OP_DifferencePreviousParticle {

   constexpr ptrdiff_t m_nFieldInput = 0x1c0;
   constexpr ptrdiff_t m_nFieldOutput = 0x1c4;
   constexpr ptrdiff_t m_flInputMin = 0x1c8;
   constexpr ptrdiff_t m_flInputMax = 0x1cc;
   constexpr ptrdiff_t m_flOutputMin = 0x1d0;
   constexpr ptrdiff_t m_flOutputMax = 0x1d4;
   constexpr ptrdiff_t m_nSetMethod = 0x1d8;
   constexpr ptrdiff_t m_bActiveRange = 0x1dc;
   constexpr ptrdiff_t m_bSetPreviousParticle = 0x1dd;

}

namespace C_OP_PointVectorAtNextParticle {

   constexpr ptrdiff_t m_nFieldOutput = 0x1c0;
   constexpr ptrdiff_t m_flInterpolation = 0x1c8;

}

namespace C_OP_RemapScalar {

   constexpr ptrdiff_t m_nFieldInput = 0x1c0;
   constexpr ptrdiff_t m_nFieldOutput = 0x1c4;
   constexpr ptrdiff_t m_flInputMin = 0x1c8;
   constexpr ptrdiff_t m_flInputMax = 0x1cc;
   constexpr ptrdiff_t m_flOutputMin = 0x1d0;
   constexpr ptrdiff_t m_flOutputMax = 0x1d4;
   constexpr ptrdiff_t m_bOldCode = 0x1d8;

}

namespace C_OP_RemapDensityToVector {

   constexpr ptrdiff_t m_flRadiusScale = 0x1c0;
   constexpr ptrdiff_t m_nFieldOutput = 0x1c4;
   constexpr ptrdiff_t m_flDensityMin = 0x1c8;
   constexpr ptrdiff_t m_flDensityMax = 0x1cc;
   constexpr ptrdiff_t m_vecOutputMin = 0x1d0;
   constexpr ptrdiff_t m_vecOutputMax = 0x1dc;
   constexpr ptrdiff_t m_bUseParentDensity = 0x1e8;
   constexpr ptrdiff_t m_nVoxelGridResolution = 0x1ec;

}

namespace C_OP_Diffusion {

   constexpr ptrdiff_t m_flRadiusScale = 0x1c0;
   constexpr ptrdiff_t m_nFieldOutput = 0x1c4;
   constexpr ptrdiff_t m_nVoxelGridResolution = 0x1c8;

}

namespace C_OP_RemapScalarEndCap {

   constexpr ptrdiff_t m_nFieldInput = 0x1c0;
   constexpr ptrdiff_t m_nFieldOutput = 0x1c4;
   constexpr ptrdiff_t m_flInputMin = 0x1c8;
   constexpr ptrdiff_t m_flInputMax = 0x1cc;
   constexpr ptrdiff_t m_flOutputMin = 0x1d0;
   constexpr ptrdiff_t m_flOutputMax = 0x1d4;

}

namespace C_OP_ReinitializeScalarEndCap {

   constexpr ptrdiff_t m_nFieldOutput = 0x1c0;
   constexpr ptrdiff_t m_flOutputMin = 0x1c4;
   constexpr ptrdiff_t m_flOutputMax = 0x1c8;

}

namespace C_OP_RemapScalarOnceTimed {

   constexpr ptrdiff_t m_bProportional = 0x1c0;
   constexpr ptrdiff_t m_nFieldInput = 0x1c4;
   constexpr ptrdiff_t m_nFieldOutput = 0x1c8;
   constexpr ptrdiff_t m_flInputMin = 0x1cc;
   constexpr ptrdiff_t m_flInputMax = 0x1d0;
   constexpr ptrdiff_t m_flOutputMin = 0x1d4;
   constexpr ptrdiff_t m_flOutputMax = 0x1d8;
   constexpr ptrdiff_t m_flRemapTime = 0x1dc;

}

namespace C_OP_RemapParticleCountOnScalarEndCap {

   constexpr ptrdiff_t m_nFieldOutput = 0x1c0;
   constexpr ptrdiff_t m_nInputMin = 0x1c4;
   constexpr ptrdiff_t m_nInputMax = 0x1c8;
   constexpr ptrdiff_t m_flOutputMin = 0x1cc;
   constexpr ptrdiff_t m_flOutputMax = 0x1d0;
   constexpr ptrdiff_t m_bBackwards = 0x1d4;
   constexpr ptrdiff_t m_nSetMethod = 0x1d8;

}

namespace C_OP_RemapParticleCountToScalar {

   constexpr ptrdiff_t m_nFieldOutput = 0x1c0;
   constexpr ptrdiff_t m_nInputMin = 0x1c8;
   constexpr ptrdiff_t m_nInputMax = 0x320;
   constexpr ptrdiff_t m_flOutputMin = 0x478;
   constexpr ptrdiff_t m_flOutputMax = 0x5d0;
   constexpr ptrdiff_t m_bActiveRange = 0x728;
   constexpr ptrdiff_t m_nSetMethod = 0x72c;

}

namespace C_OP_RemapVisibilityScalar {

   constexpr ptrdiff_t m_nFieldInput = 0x1c0;
   constexpr ptrdiff_t m_nFieldOutput = 0x1c4;
   constexpr ptrdiff_t m_flInputMin = 0x1c8;
   constexpr ptrdiff_t m_flInputMax = 0x1cc;
   constexpr ptrdiff_t m_flOutputMin = 0x1d0;
   constexpr ptrdiff_t m_flOutputMax = 0x1d4;
   constexpr ptrdiff_t m_flRadiusScale = 0x1d8;

}

namespace C_OP_RemapTransformVisibilityToScalar {

   constexpr ptrdiff_t m_nSetMethod = 0x1c0;
   constexpr ptrdiff_t m_TransformInput = 0x1c8;
   constexpr ptrdiff_t m_nFieldOutput = 0x230;
   constexpr ptrdiff_t m_flInputMin = 0x234;
   constexpr ptrdiff_t m_flInputMax = 0x238;
   constexpr ptrdiff_t m_flOutputMin = 0x23c;
   constexpr ptrdiff_t m_flOutputMax = 0x240;
   constexpr ptrdiff_t m_flRadius = 0x244;

}

namespace C_OP_RemapTransformVisibilityToVector {

   constexpr ptrdiff_t m_nSetMethod = 0x1c0;
   constexpr ptrdiff_t m_TransformInput = 0x1c8;
   constexpr ptrdiff_t m_nFieldOutput = 0x230;
   constexpr ptrdiff_t m_flInputMin = 0x234;
   constexpr ptrdiff_t m_flInputMax = 0x238;
   constexpr ptrdiff_t m_vecOutputMin = 0x23c;
   constexpr ptrdiff_t m_vecOutputMax = 0x248;
   constexpr ptrdiff_t m_flRadius = 0x254;

}

namespace C_OP_LerpScalar {

   constexpr ptrdiff_t m_nFieldOutput = 0x1c0;
   constexpr ptrdiff_t m_flOutput = 0x1c8;
   constexpr ptrdiff_t m_flStartTime = 0x320;
   constexpr ptrdiff_t m_flEndTime = 0x324;

}

namespace C_OP_LerpEndCapScalar {

   constexpr ptrdiff_t m_nFieldOutput = 0x1c0;
   constexpr ptrdiff_t m_flOutput = 0x1c4;
   constexpr ptrdiff_t m_flLerpTime = 0x1c8;

}

namespace C_OP_LerpEndCapVector {

   constexpr ptrdiff_t m_nFieldOutput = 0x1c0;
   constexpr ptrdiff_t m_vecOutput = 0x1c4;
   constexpr ptrdiff_t m_flLerpTime = 0x1d0;

}

namespace C_OP_LerpVector {

   constexpr ptrdiff_t m_nFieldOutput = 0x1c0;
   constexpr ptrdiff_t m_vecOutput = 0x1c4;
   constexpr ptrdiff_t m_flStartTime = 0x1d0;
   constexpr ptrdiff_t m_flEndTime = 0x1d4;
   constexpr ptrdiff_t m_nSetMethod = 0x1d8;

}

namespace C_OP_LerpToOtherAttribute {

   constexpr ptrdiff_t m_flInterpolation = 0x1c0;
   constexpr ptrdiff_t m_nFieldInputFrom = 0x318;
   constexpr ptrdiff_t m_nFieldInput = 0x31c;
   constexpr ptrdiff_t m_nFieldOutput = 0x320;

}

namespace C_OP_RemapSpeed {

   constexpr ptrdiff_t m_nFieldOutput = 0x1c0;
   constexpr ptrdiff_t m_flInputMin = 0x1c4;
   constexpr ptrdiff_t m_flInputMax = 0x1c8;
   constexpr ptrdiff_t m_flOutputMin = 0x1cc;
   constexpr ptrdiff_t m_flOutputMax = 0x1d0;
   constexpr ptrdiff_t m_nSetMethod = 0x1d4;
   constexpr ptrdiff_t m_bIgnoreDelta = 0x1d8;

}

namespace C_OP_RemapVectortoCP {

   constexpr ptrdiff_t m_nOutControlPointNumber = 0x1c0;
   constexpr ptrdiff_t m_nFieldInput = 0x1c4;
   constexpr ptrdiff_t m_nParticleNumber = 0x1c8;

}

namespace C_OP_RampScalarLinear {

   constexpr ptrdiff_t m_RateMin = 0x1c0;
   constexpr ptrdiff_t m_RateMax = 0x1c4;
   constexpr ptrdiff_t m_flStartTime_min = 0x1c8;
   constexpr ptrdiff_t m_flStartTime_max = 0x1cc;
   constexpr ptrdiff_t m_flEndTime_min = 0x1d0;
   constexpr ptrdiff_t m_flEndTime_max = 0x1d4;
   constexpr ptrdiff_t m_nField = 0x200;
   constexpr ptrdiff_t m_bProportionalOp = 0x204;

}

namespace C_OP_RampScalarSpline {

   constexpr ptrdiff_t m_RateMin = 0x1c0;
   constexpr ptrdiff_t m_RateMax = 0x1c4;
   constexpr ptrdiff_t m_flStartTime_min = 0x1c8;
   constexpr ptrdiff_t m_flStartTime_max = 0x1cc;
   constexpr ptrdiff_t m_flEndTime_min = 0x1d0;
   constexpr ptrdiff_t m_flEndTime_max = 0x1d4;
   constexpr ptrdiff_t m_flBias = 0x1d8;
   constexpr ptrdiff_t m_nField = 0x200;
   constexpr ptrdiff_t m_bProportionalOp = 0x204;
   constexpr ptrdiff_t m_bEaseOut = 0x205;

}

namespace C_OP_RampScalarLinearSimple {

   constexpr ptrdiff_t m_Rate = 0x1c0;
   constexpr ptrdiff_t m_flStartTime = 0x1c4;
   constexpr ptrdiff_t m_flEndTime = 0x1c8;
   constexpr ptrdiff_t m_nField = 0x1f0;

}

namespace C_OP_RampScalarSplineSimple {

   constexpr ptrdiff_t m_Rate = 0x1c0;
   constexpr ptrdiff_t m_flStartTime = 0x1c4;
   constexpr ptrdiff_t m_flEndTime = 0x1c8;
   constexpr ptrdiff_t m_nField = 0x1f0;
   constexpr ptrdiff_t m_bEaseOut = 0x1f4;

}

namespace C_OP_ChladniWave {

   constexpr ptrdiff_t m_nFieldOutput = 0x1c0;
   constexpr ptrdiff_t m_flInputMin = 0x1c8;
   constexpr ptrdiff_t m_flInputMax = 0x320;
   constexpr ptrdiff_t m_flOutputMin = 0x478;
   constexpr ptrdiff_t m_flOutputMax = 0x5d0;
   constexpr ptrdiff_t m_vecWaveLength = 0x728;
   constexpr ptrdiff_t m_vecHarmonics = 0xd80;
   constexpr ptrdiff_t m_nSetMethod = 0x13d8;
   constexpr ptrdiff_t m_nLocalSpaceControlPoint = 0x13dc;
   constexpr ptrdiff_t m_b3D = 0x13e0;

}

namespace C_OP_Noise {

   constexpr ptrdiff_t m_nFieldOutput = 0x1c0;
   constexpr ptrdiff_t m_flOutputMin = 0x1c4;
   constexpr ptrdiff_t m_flOutputMax = 0x1c8;
   constexpr ptrdiff_t m_fl4NoiseScale = 0x1cc;
   constexpr ptrdiff_t m_bAdditive = 0x1d0;
   constexpr ptrdiff_t m_flNoiseAnimationTimeScale = 0x1d4;

}

namespace C_OP_VectorNoise {

   constexpr ptrdiff_t m_nFieldOutput = 0x1c0;
   constexpr ptrdiff_t m_vecOutputMin = 0x1c4;
   constexpr ptrdiff_t m_vecOutputMax = 0x1d0;
   constexpr ptrdiff_t m_fl4NoiseScale = 0x1dc;
   constexpr ptrdiff_t m_bAdditive = 0x1e0;
   constexpr ptrdiff_t m_bOffset = 0x1e1;
   constexpr ptrdiff_t m_flNoiseAnimationTimeScale = 0x1e4;

}

namespace C_OP_Decay {

   constexpr ptrdiff_t m_bRopeDecay = 0x1c0;
   constexpr ptrdiff_t m_bForcePreserveParticleOrder = 0x1c1;

}

namespace C_OP_DecayOffscreen {

   constexpr ptrdiff_t m_flOffscreenTime = 0x1c0;

}

namespace C_OP_EndCapTimedFreeze {

   constexpr ptrdiff_t m_flFreezeTime = 0x1c0;

}

namespace C_OP_EndCapTimedDecay {

   constexpr ptrdiff_t m_flDecayTime = 0x1c0;

}

namespace C_OP_VelocityDecay {

   constexpr ptrdiff_t m_flMinVelocity = 0x1c0;

}

namespace C_OP_AlphaDecay {

   constexpr ptrdiff_t m_flMinAlpha = 0x1c0;

}

namespace C_OP_RadiusDecay {

   constexpr ptrdiff_t m_flMinRadius = 0x1c0;

}

namespace C_OP_DecayMaintainCount {

   constexpr ptrdiff_t m_nParticlesToMaintain = 0x1c0;
   constexpr ptrdiff_t m_flDecayDelay = 0x1c4;
   constexpr ptrdiff_t m_nSnapshotControlPoint = 0x1c8;
   constexpr ptrdiff_t m_bLifespanDecay = 0x1cc;
   constexpr ptrdiff_t m_flScale = 0x1d0;
   constexpr ptrdiff_t m_bKillNewest = 0x328;

}

namespace C_OP_DecayClampCount {

   constexpr ptrdiff_t m_nCount = 0x1c0;

}

namespace C_OP_Cull {

   constexpr ptrdiff_t m_flCullPerc = 0x1c0;
   constexpr ptrdiff_t m_flCullStart = 0x1c4;
   constexpr ptrdiff_t m_flCullEnd = 0x1c8;
   constexpr ptrdiff_t m_flCullExp = 0x1cc;

}

namespace CGeneralSpin {

   constexpr ptrdiff_t m_nSpinRateDegrees = 0x1c0;
   constexpr ptrdiff_t m_nSpinRateMinDegrees = 0x1c4;
   constexpr ptrdiff_t m_fSpinRateStopTime = 0x1cc;

}

namespace C_OP_InterpolateRadius {

   constexpr ptrdiff_t m_flStartTime = 0x1c0;
   constexpr ptrdiff_t m_flEndTime = 0x1c4;
   constexpr ptrdiff_t m_flStartScale = 0x1c8;
   constexpr ptrdiff_t m_flEndScale = 0x1cc;
   constexpr ptrdiff_t m_bEaseInAndOut = 0x1d0;
   constexpr ptrdiff_t m_flBias = 0x1d4;

}

namespace C_OP_ColorInterpolate {

   constexpr ptrdiff_t m_ColorFade = 0x1c0;
   constexpr ptrdiff_t m_flFadeStartTime = 0x1d0;
   constexpr ptrdiff_t m_flFadeEndTime = 0x1d4;
   constexpr ptrdiff_t m_nFieldOutput = 0x1d8;
   constexpr ptrdiff_t m_bEaseInOut = 0x1dc;
   constexpr ptrdiff_t m_bUseNewCode = 0x1dd;

}

