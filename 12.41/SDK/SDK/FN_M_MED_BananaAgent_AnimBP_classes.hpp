#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xBB0 (0xFC8 - 0x418)
// AnimBlueprintGeneratedClass M_MED_BananaAgent_AnimBP.M_MED_BananaAgent_AnimBP_C
class UM_MED_BananaAgent_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	uint8                                        Pad_718A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x428(0x30)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh;                    // 0x458(0x140)(ContainsInstancedReference)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig;                          // 0x598(0x348)(None)
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody;                           // 0x8E0(0x5A0)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0xE80(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0xEA0(0x20)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint;                          // 0xEC0(0x108)(None)

	static class UClass* StaticClass();
	static class UM_MED_BananaAgent_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_M_MED_BananaAgent_AnimBP(int32 EntryPoint);
};

}


