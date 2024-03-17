#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x104A (0x1462 - 0x418)
// AnimBlueprintGeneratedClass F_MED_Photographer_FaceAcc_AnimBP.F_MED_Photographer_FaceAcc_AnimBP_C
class UF_MED_Photographer_FaceAcc_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	uint8                                        Pad_2141[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x428(0x30)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh;                    // 0x458(0x140)(ContainsInstancedReference)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig;                          // 0x598(0x348)(None)
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_1;                         // 0x8E0(0x5A0)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0xE80(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0xEA0(0x20)(None)
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody;                           // 0xEC0(0x5A0)(None)
	bool                                         PhotoTraverse;                                     // 0x1460(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PhotoTraverseINV;                                  // 0x1461(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UF_MED_Photographer_FaceAcc_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void OnNotifyPartsStarted(class FName Context);
	void OnNotifyPartsStopped(class FName Context);
	void OnParachuteClosed();
	void ExecuteUbergraph_F_MED_Photographer_FaceAcc_AnimBP(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Montage_IsActive_ReturnValue, float K2Node_Event_DeltaTimeX, class USkeletalMeshComponent* CallFunc_GetPartSkeletalMeshComponent_ReturnValue, class FName K2Node_Event_Context_1, bool K2Node_SwitchName_CmpSuccess, class FName K2Node_Event_Context, bool K2Node_SwitchName_CmpSuccess_1);
};

}


