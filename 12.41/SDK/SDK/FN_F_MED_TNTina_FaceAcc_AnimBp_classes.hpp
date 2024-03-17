#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1234 (0x164C - 0x418)
// AnimBlueprintGeneratedClass F_MED_TNTina_FaceAcc_AnimBp.F_MED_TNTina_FaceAcc_AnimBp_C
class UF_MED_TNTina_FaceAcc_AnimBp_C : public UCustomCharacterPartAnimInstance
{
public:
	uint8                                        Pad_1F6B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x428(0x30)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh;                    // 0x458(0x140)(ContainsInstancedReference)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x598(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x5B8(0x20)(None)
	uint8                                        Pad_1F6C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_1;                         // 0x5E0(0x5A0)(None)
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody;                           // 0xB80(0x5A0)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_1;                        // 0x1120(0x108)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint;                          // 0x1228(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x1330(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x1438(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x1540(0x108)(None)
	float                                        HeadRotBack;                                       // 0x1648(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UF_MED_TNTina_FaceAcc_AnimBp_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_F_MED_TNTina_FaceAcc_AnimBp(int32 EntryPoint, float K2Node_Event_DeltaTimeX);
};

}


