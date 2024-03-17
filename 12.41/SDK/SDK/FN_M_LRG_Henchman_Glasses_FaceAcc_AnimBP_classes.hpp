#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x821 (0xC39 - 0x418)
// AnimBlueprintGeneratedClass M_LRG_Henchman_Glasses_FaceAcc_AnimBP.M_LRG_Henchman_Glasses_FaceAcc_AnimBP_C
class UM_LRG_Henchman_Glasses_FaceAcc_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	uint8                                        Pad_7217[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x428(0x30)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh;                    // 0x458(0x140)(ContainsInstancedReference)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_2;                        // 0x598(0x108)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_1;                        // 0x6A0(0x108)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x7A8(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x7C8(0x20)(None)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig;                          // 0x7E8(0x348)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint;                          // 0xB30(0x108)(None)
	bool                                         IsLOD0;                                            // 0xC38(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UM_LRG_Henchman_Glasses_FaceAcc_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_M_LRG_Henchman_Glasses_FaceAcc_AnimBP(int32 EntryPoint, float K2Node_Event_DeltaTimeX, bool CallFunc_Conv_IntToBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
};

}


