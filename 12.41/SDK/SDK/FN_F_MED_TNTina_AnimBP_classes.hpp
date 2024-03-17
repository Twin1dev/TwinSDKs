#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x26E8 (0x2B00 - 0x418)
// AnimBlueprintGeneratedClass F_MED_TNTina_AnimBP.F_MED_TNTina_AnimBP_C
class UF_MED_TNTina_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	uint8                                        Pad_6133[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x428(0x30)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh;                    // 0x458(0x140)(ContainsInstancedReference)
	uint8                                        Pad_6134[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_7;                      // 0x5A0(0x440)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x9E0(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0xA00(0x20)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_6;                      // 0xA20(0x440)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_2;                        // 0xE60(0x108)(None)
	uint8                                        Pad_6135[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_5;                      // 0xF70(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_4;                      // 0x13B0(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_3;                      // 0x17F0(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_2;                      // 0x1C30(0x440)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_1;                        // 0x2070(0x108)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint;                          // 0x2178(0x108)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_1;                      // 0x2280(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics;                        // 0x26C0(0x440)(None)

	static class UClass* StaticClass();
	static class UF_MED_TNTina_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_F_MED_TNTina_AnimBP(int32 EntryPoint);
};

}


