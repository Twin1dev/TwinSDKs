#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x558 (0x7C0 - 0x268)
// AnimBlueprintGeneratedClass Flopper_Gadget_AnimBP.Flopper_Gadget_AnimBP_C
class UFlopper_Gadget_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_62D5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose;                        // 0x278(0x18)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x290(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x2B0(0x20)(None)
	struct FAnimNode_Trail                       AnimGraphNode_Trail_1;                             // 0x2D0(0x260)(None)
	struct FAnimNode_Trail                       AnimGraphNode_Trail;                               // 0x530(0x260)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x790(0x30)(None)

	static class UClass* StaticClass();
	static class UFlopper_Gadget_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Flopper_Gadget_AnimBP(int32 EntryPoint);
};

}


