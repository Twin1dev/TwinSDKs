#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2FFC (0x342C - 0x430)
// AnimBlueprintGeneratedClass M_MED_Donut_AnimBP.M_MED_Donut_AnimBP_C
class UM_MED_Donut_AnimBP_C : public UCustomCharacterPartAnimInstance_HenchmanBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_4;                        // 0x438(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0x540(0x108)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x648(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x668(0x20)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_10;                       // 0x688(0x108)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_9;                        // 0x790(0x108)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_8;                        // 0x898(0x108)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_7;                        // 0x9A0(0x108)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_6;                        // 0xAA8(0x108)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_5;                        // 0xBB0(0x108)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_4;                        // 0xCB8(0x108)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_3;                        // 0xDC0(0x108)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_2;                        // 0xEC8(0x108)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_6;                      // 0xFD0(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_5;                      // 0x1410(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_4;                      // 0x1850(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_3;                      // 0x1C90(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_2;                      // 0x20D0(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_1;                      // 0x2510(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics;                        // 0x2950(0x440)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_1;                        // 0x2D90(0x108)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint;                          // 0x2E98(0x108)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh;                    // 0x2FA0(0x140)(ContainsInstancedReference)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x30E0(0x30)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x3110(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x3218(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x3320(0x108)(None)
	float                                        CrouchAlpha;                                       // 0x3428(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UM_MED_Donut_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void OnBeginCrouching();
	void OnEndCrouching();
	void ExecuteUbergraph_M_MED_Donut_AnimBP(int32 EntryPoint);
};

}


