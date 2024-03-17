#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x23C8 (0x27E0 - 0x418)
// AnimBlueprintGeneratedClass M_MED_Cat_Burglar_Human_FaceAcc_AnimBP.M_MED_Cat_Burglar_Human_FaceAcc_AnimBP_C
class UM_MED_Cat_Burglar_Human_FaceAcc_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	uint8                                        Pad_71C6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x428(0x30)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh;                    // 0x458(0x140)(ContainsInstancedReference)
	uint8                                        Pad_71C7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_7;                      // 0x5A0(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_6;                      // 0x9E0(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_5;                      // 0xE20(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_4;                      // 0x1260(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_3;                      // 0x16A0(0x440)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x1AE0(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x1B00(0x20)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_2;                      // 0x1B20(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_1;                      // 0x1F60(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics;                        // 0x23A0(0x440)(None)

	static class UClass* StaticClass();
	static class UM_MED_Cat_Burglar_Human_FaceAcc_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_M_MED_Cat_Burglar_Human_FaceAcc_AnimBP(int32 EntryPoint);
};

}


