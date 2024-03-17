#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x7A0 (0xBB8 - 0x418)
// AnimBlueprintGeneratedClass Bucket_Old_Gadget_Skeleton_AnimBP.Bucket_Old_Gadget_Skeleton_AnimBP_C
class UBucket_Old_Gadget_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	uint8                                        Pad_5DB6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	uint8                                        Pad_5DB7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody;                           // 0x430(0x5A0)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x9D0(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x9F0(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_SubInput;                            // 0xA10(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0xA80(0x30)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0xAB0(0x108)(None)

	static class UClass* StaticClass();
	static class UBucket_Old_Gadget_Skeleton_AnimBP_C* GetDefaultObj();

	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Bucket_Old_Gadget_Skeleton_AnimBP(int32 EntryPoint);
};

}


