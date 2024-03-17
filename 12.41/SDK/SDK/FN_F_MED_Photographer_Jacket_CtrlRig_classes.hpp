#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xFF0 (0x1330 - 0x340)
// ControlRigBlueprintGeneratedClass F_MED_Photographer_Jacket_CtrlRig.F_MED_Photographer_Jacket_CtrlRig_C
class UF_MED_Photographer_Jacket_CtrlRig_C : public UControlRig
{
public:
	struct FRigUnit_BeginExecution               BeginExecution;                                    // 0x340(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_469B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_GetRelativeBoneTransform     GetRelativeBoneTransform;                          // 0x370(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionToEuler        MathQuaternionToEuler_0_0_0_0;                     // 0x3E0(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathFloatAbs                 MathFloatAbs;                                      // 0x420(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathFloatRemap               MathFloatRemap_0_0_0_0_0_0;                        // 0x448(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_469F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_MathQuaternionFromEuler      MathQuaternionFromEuler_1;                         // 0x490(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetRelativeBoneTransform     GetRelativeBoneTransform_0;                        // 0x4D0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionToEuler        MathQuaternionToEuler_0_0_0_0_0;                   // 0x540(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathFloatRemap               MathFloatRemap_0_0_0_0_0_0_0;                      // 0x580(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathFloatAbs                 MathFloatAbs_0;                                    // 0x5C0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_ModifyBoneTransforms         ModifyBoneTransforms;                              // 0x5E8(0x58)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_ModifyBoneTransforms         ModifyBoneTransforms_0;                            // 0x640(0x58)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_46A1[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_MathQuaternionFromEuler      MathQuaternionFromEuler_1_0;                       // 0x6A0(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_ModifyBoneTransforms         ModifyBoneTransforms_0_0;                          // 0x6E0(0x58)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_46A2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_MathQuaternionFromEuler      MathQuaternionFromEuler_1_0_0;                     // 0x740(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetRelativeBoneTransform     GetRelativeBoneTransform_0_0;                      // 0x780(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionToEuler        MathQuaternionToEuler_0_0_0_0_0_0;                 // 0x7F0(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathFloatRemap               MathFloatRemap_0_0_0_0_0_0_0_0;                    // 0x830(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathFloatAbs                 MathFloatAbs_0_0;                                  // 0x870(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_ModifyBoneTransforms         ModifyBoneTransforms_0_0_0;                        // 0x898(0x58)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionFromEuler      MathQuaternionFromEuler_1_0_0_0;                   // 0x8F0(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathVectorAdd                MathVectorAdd;                                     // 0x930(0x48)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        Crouching;                                         // 0x978(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46A3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_MathVectorMul                MathVectorMul;                                     // 0x980(0x48)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathVectorMul                MathVectorMul_0;                                   // 0x9C8(0x48)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathVectorAdd                MathVectorAdd_0;                                   // 0xA10(0x48)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_ModifyBoneTransforms         ModifyBoneTransforms_1;                            // 0xA58(0x58)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionFromEuler      MathQuaternionFromEuler_1_1;                       // 0xAB0(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionFromEuler      MathQuaternionFromEuler_1_0_0_0_0;                 // 0xAF0(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        NotDancing;                                        // 0xB30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46A4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_MathFloatMul                 MathFloatMul;                                      // 0xB38(0x30)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_46A5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_GetBoneTransform             GetBoneTransform_1_0_0_0;                          // 0xB70(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform_0_0_0_0;                          // 0xBE0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionGetAxis        MathQuaternionGetAxis_0_1_0_0;                     // 0xC50(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathVectorSub                MathVectorSub_0_1_0_0;                             // 0xC90(0x48)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_46A7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_MathQuaternionFromTwoVectors MathQuaternionFromTwoVectors_0_1_0_0;              // 0xCE0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionMul            MathQuaternionMul_0_1_0_0;                         // 0xD30(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_SetBoneRotation              SetBoneRotation_0_1_0_0;                           // 0xD80(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathTransformTransformVector MathTransformTransformVector_0_1_0_0;              // 0xDD0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathVectorNegate             MathVectorNegate_0_0;                              // 0xE40(0x38)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_46A8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_DebugTransformMutable        DebugTransformMutable;                             // 0xE80(0xD0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform_1_0_0_0_0;                        // 0xF50(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform_0_0_0_0_0;                        // 0xFC0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionGetAxis        MathQuaternionGetAxis_0_1_0_0_0;                   // 0x1030(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathVectorSub                MathVectorSub_0_1_0_0_0;                           // 0x1070(0x48)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_46AA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_MathQuaternionFromTwoVectors MathQuaternionFromTwoVectors_0_1_0_0_0;            // 0x10C0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionMul            MathQuaternionMul_0_1_0_0_0;                       // 0x1110(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_SetBoneRotation              SetBoneRotation_0_1_0_0_0;                         // 0x1160(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathTransformTransformVector MathTransformTransformVector_0_1_0_0_0;            // 0x11B0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathVectorNegate             MathVectorNegate_0_0_0;                            // 0x1220(0x38)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_46AB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_DebugTransformMutable        DebugTransformMutable_0;                           // 0x1260(0xD0)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UF_MED_Photographer_Jacket_CtrlRig_C* GetDefaultObj();

};

}


