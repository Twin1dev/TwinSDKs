#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE28 (0x1168 - 0x340)
// ControlRigBlueprintGeneratedClass F_MED_Photographer_FaceAcc_CtrlRig.F_MED_Photographer_FaceAcc_CtrlRig_C
class UF_MED_Photographer_FaceAcc_CtrlRig_C : public UControlRig
{
public:
	struct FRigUnit_BeginExecution               BeginExecution;                                    // 0x340(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_71AC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_MathQuaternionGetAxis        MathQuaternionGetAxis_0;                           // 0x370(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathVectorSub                MathVectorSub_0;                                   // 0x3B0(0x48)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_71AD[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_MathQuaternionFromTwoVectors MathQuaternionFromTwoVectors_0;                    // 0x400(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionMul            MathQuaternionMul_0;                               // 0x450(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform_1;                                // 0x4A0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform_0;                                // 0x510(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathTransformTransformVector MathTransformTransformVector_0;                    // 0x580(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_SetBoneRotation              SetBoneRotation_0;                                 // 0x5F0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_DebugTransformMutable        DebugTransformMutable_0;                           // 0x640(0xD0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathVectorAdd                MathVectorAdd;                                     // 0x710(0x48)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_71AE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_SetBoneTransform             SetBoneTransform;                                  // 0x760(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform;                                  // 0x7D0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionToEuler        MathQuaternionToEuler;                             // 0x840(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathFloatMul                 MathFloatMul;                                      // 0x880(0x30)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionFromEuler      MathQuaternionFromEuler;                           // 0x8B0(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_DebugTransformMutable        DebugTransformMutable_0_0;                         // 0x8F0(0xD0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_SetBoneTransform             SetBoneTransform_0;                                // 0x9C0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionGetAxis        MathQuaternionGetAxis_0_0;                         // 0xA30(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathVectorSub                MathVectorSub_0_0;                                 // 0xA70(0x48)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_71B0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_MathQuaternionFromTwoVectors MathQuaternionFromTwoVectors_0_0;                  // 0xAC0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionMul            MathQuaternionMul_0_0;                             // 0xB10(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform_1_0;                              // 0xB60(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform_0_0;                              // 0xBD0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathTransformTransformVector MathTransformTransformVector_0_0;                  // 0xC40(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_SetBoneRotation              SetBoneRotation_0_0;                               // 0xCB0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathVectorAdd                MathVectorAdd_0;                                   // 0xD00(0x48)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_71B1[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_GetRelativeBoneTransform     GetRelativeBoneTransform;                          // 0xD50(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionToEuler        MathQuaternionToEuler_0;                           // 0xDC0(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionFromEuler      MathQuaternionFromEuler_0;                         // 0xE00(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathFloatRemap               MathFloatRemap;                                    // 0xE40(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_ModifyBoneTransforms         ModifyBoneTransforms;                              // 0xE80(0x58)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_71B7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_GetRelativeBoneTransform     GetRelativeBoneTransform_0;                        // 0xEE0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionToEuler        MathQuaternionToEuler_0_0;                         // 0xF50(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathFloatRemap               MathFloatRemap_0;                                  // 0xF90(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathFloatMul                 MathFloatMul_0;                                    // 0xFD0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathFloatAdd                 MathFloatAdd;                                      // 0x1000(0x30)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_ModifyBoneTransforms         ModifyBoneTransforms_0;                            // 0x1030(0x58)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_71B9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_MathQuaternionFromEuler      MathQuaternionFromEuler_0_0;                       // 0x1090(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_ModifyBoneTransforms         ModifyBoneTransforms_0_0;                          // 0x10D0(0x58)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathFloatRemap               MathFloatRemap_1;                                  // 0x1128(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UF_MED_Photographer_FaceAcc_CtrlRig_C* GetDefaultObj();

};

}


