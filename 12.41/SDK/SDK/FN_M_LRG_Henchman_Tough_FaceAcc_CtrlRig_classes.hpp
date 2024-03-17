#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA30 (0xD70 - 0x340)
// ControlRigBlueprintGeneratedClass M_LRG_Henchman_Tough_FaceAcc_CtrlRig.M_LRG_Henchman_Tough_FaceAcc_CtrlRig_C
class UM_LRG_Henchman_Tough_FaceAcc_CtrlRig_C : public UControlRig
{
public:
	struct FRigUnit_BeginExecution               BeginExecution;                                    // 0x340(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_71A3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_AimBone                      AimBone;                                           // 0x370(0xF0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform;                                  // 0x460(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform_0;                                // 0x4D0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetInitialBoneTransform      GetInitialBoneTransform;                           // 0x540(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetInitialBoneTransform      GetInitialBoneTransform_0;                         // 0x5B0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform_1;                                // 0x620(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform_2;                                // 0x690(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathTransformInverse         MathTransformInverse;                              // 0x700(0x80)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathTransformInverse         MathTransformInverse_0;                            // 0x780(0x80)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathTransformMul             MathTransformMul;                                  // 0x800(0xB0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathTransformMul             MathTransformMul_0;                                // 0x8B0(0xB0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathFloatMin                 MathFloatMin;                                      // 0x960(0x30)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathFloatMax                 MathFloatMax;                                      // 0x990(0x30)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_AddBoneTransform             AddBoneTransform;                                  // 0x9C0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetInitialBoneTransform      GetInitialBoneTransform_1;                         // 0xA30(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform_1_0;                              // 0xAA0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathTransformInverse         MathTransformInverse_0_0;                          // 0xB10(0x80)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathTransformMul             MathTransformMul_1;                                // 0xB90(0xB0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathFloatMin                 MathFloatMin_0;                                    // 0xC40(0x30)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_AddBoneTransform             AddBoneTransform_0;                                // 0xC70(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathFloatMax                 MathFloatMax_0;                                    // 0xCE0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathFloatMul                 MathFloatMul;                                      // 0xD10(0x30)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathFloatMul                 MathFloatMul_0;                                    // 0xD40(0x30)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UM_LRG_Henchman_Tough_FaceAcc_CtrlRig_C* GetDefaultObj();

};

}


