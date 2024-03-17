#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x148 (0xB78 - 0xA30)
// BlueprintGeneratedClass GA_Uncle_Brolly_Float.GA_Uncle_Brolly_Float_C
class UGA_Uncle_Brolly_Float_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA30(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0xA38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_FloatTag;                                       // 0xA40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           H_FloatTag;                                        // 0xA48(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           H_FallingTag;                                      // 0xA50(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        BaseFloatDuration;                                 // 0xA58(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FloatResourceDepleted;                             // 0xA5C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6A22[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               FallingImpulse;                                    // 0xA60(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GC_FloatFallingStart;                              // 0xA6C(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        FloatStartTime;                                    // 0xA74(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<enum class EObjectTypeQuery>          LineTraceObjectTypes;                              // 0xA78(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AB_Uncle_Brolly_Block_Collision_C*     BP_UncleBlockingActor;                             // 0xA88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  FallingBoostTaskName;                              // 0xA90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        MinFloatTime;                                      // 0xA98(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        FloatVerticalImpulse;                              // 0xAB8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        FloatDuration;                                     // 0xAD8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        FloatGravityScalar;                                // 0xAF8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        FloatingMaxAcceleration;                           // 0xB18(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        FloatingLateralFriction;                           // 0xB38(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        FloatingMaxLateralSpeed;                           // 0xB58(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UGA_Uncle_Brolly_Float_C* GetDefaultObj();

	void InitAbility(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsLocallyControlled_ReturnValue, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AB_Uncle_Brolly_Block_Collision_C* K2Node_DynamicCast_AsB_Uncle_Brolly_Block_Collision, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetGameTimeInSeconds_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_1);
	void EventReceived_A105E94C42D41462EB50A6A3FE424122(const struct FGameplayEventData& Payload);
	void EventReceived_849C01504C1370D90F7729BC44FF1CA7(const struct FGameplayEventData& Payload);
	void Removed_CDAC2EF140EDC60B1BF4319F62ACAA74();
	void OnFinish_EC33BF3745BE036EAB506C96FBB4324A();
	void FloatLimitReached();
	void FloatFailSafeCheck();
	void CheckShouldEndFloat();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_Uncle_Brolly_Float(int32 EntryPoint, int32 CallFunc_IncrementAnalyticMatchCount_ReturnValue, const struct FGameplayEventData& K2Node_CustomEvent_Payload_1, const struct FGameplayEventData& Temp_struct_Variable, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayEventData& K2Node_CustomEvent_Payload, const struct FGameplayEventData& Temp_struct_Variable_1, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UAbilityTask_WaitGameplayTagRemoved* CallFunc_WaitGameplayTagRemove_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool K2Node_Event_bWasCancelled, bool CallFunc_IsLocallyControlled_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_2, float CallFunc_GetValueAtLevel_ReturnValue_3, float CallFunc_GetValueAtLevel_ReturnValue_4, float CallFunc_GetValueAtLevel_ReturnValue_5, float CallFunc_GetValueAtLevel_ReturnValue_6, class UFortAbilityTask_ApplyRootMotionFallingBoostForce* CallFunc_ApplyRootMotionFallingBoostForce_ReturnValue, bool CallFunc_IsValid_ReturnValue_3);
};

}


