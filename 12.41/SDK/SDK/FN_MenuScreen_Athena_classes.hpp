#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x17C0 (0x1B60 - 0x3A0)
// AnimBlueprintGeneratedClass MenuScreen_Athena.MenuScreen_Athena_C
class UMenuScreen_Athena_C : public UFrontendAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x3A8(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x420(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x498(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x510(0x78)(None)
	struct FAnimNode_BlendListByInt              AnimGraphNode_BlendListByInt_3;                    // 0x588(0xA0)(None)
	struct FAnimNode_BlendListByInt              AnimGraphNode_BlendListByInt_2;                    // 0x628(0xA0)(None)
	struct FAnimNode_LegIK                       AnimGraphNode_LegIK_2;                             // 0x6C8(0xF8)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x7C0(0x108)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_3;                              // 0x8C8(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x910(0xC0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x9D0(0xB8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0xA88(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0xAB0(0x28)(None)
	struct FAnimNode_LegIK                       AnimGraphNode_LegIK_1;                             // 0xAD8(0xF8)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_5;                          // 0xBD0(0xF0)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_4;                          // 0xCC0(0xF0)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_3;                          // 0xDB0(0xF0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_2;                              // 0xEA0(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0xEE8(0x48)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_2;                          // 0xF30(0xF0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x1020(0xB8)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_2;                   // 0x10D8(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x1188(0x48)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x11D0(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x11F0(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x1210(0x30)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x1240(0x28)(None)
	struct FAnimNode_LegIK                       AnimGraphNode_LegIK;                               // 0x1268(0xF8)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_1;                          // 0x1360(0xF0)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone;                            // 0x1450(0xF0)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x1540(0x108)(None)
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve;                         // 0x1648(0x58)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_1;                   // 0x16A0(0xB0)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum;                     // 0x1750(0xB0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x1800(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x1878(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x18F0(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x1968(0x78)(None)
	struct FAnimNode_BlendListByInt              AnimGraphNode_BlendListByInt_1;                    // 0x19E0(0xA0)(None)
	struct FAnimNode_BlendListByInt              AnimGraphNode_BlendListByInt;                      // 0x1A80(0xA0)(None)
	FMulticastInlineDelegateProperty_            MenuScreenDispatcher;                              // 0x1B20(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         HasBeenSelected;                                   // 0x1B30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5E95[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PoseInt;                                           // 0x1B34(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               OffsetTranslate;                                   // 0x1B38(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              OffsetRotate;                                      // 0x1B44(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class APlayerPawn_Athena_C*                  PawnOwner;                                         // 0x1B50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StartTime;                                         // 0x1B58(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PlayRate;                                          // 0x1B5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMenuScreen_Athena_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void AnimNotify_playFacialAnim();
	void UserFocus();
	void AnimNotify_LeftB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Athena_AnimGraphNode_LayeredBoneBlend_8D2B60D44BBADFD01AC9A6BF39472D0B();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void AnimNotify_LobbySkydive_Diving();
	void AnimNotify_LobbySkydive_Gliding();
	void ExecuteUbergraph_MenuScreen_Athena(int32 EntryPoint, float CallFunc_GetCurveValue_ReturnValue, float CallFunc_GetCurveValue_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_IsValid_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_DontCrossArms_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, const class FString& CallFunc_GetObjectName_ReturnValue, bool CallFunc_Contains_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class UAnimMontage* CallFunc_GetFrontendAnimMontageIdleOverride_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_Montage_IsActive_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_9, class UB_MasterPetAnimBP_C* K2Node_DynamicCast_AsB_Master_Pet_Anim_BP, bool K2Node_DynamicCast_bSuccess_1, class UB_MasterPetAnimBP_C* K2Node_DynamicCast_AsB_Master_Pet_Anim_BP_1, bool K2Node_DynamicCast_bSuccess_2, bool Temp_bool_IsClosed_Variable, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_Montage_Play_ReturnValue, bool CallFunc_IsSkydiving_ReturnValue, class UAnimMontage* CallFunc_GetFrontendAnimMontageIdleOverride_ReturnValue_1, float CallFunc_Montage_Play_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_Montage_IsActive_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void MenuScreenDispatcher__DelegateSignature();
};

}


