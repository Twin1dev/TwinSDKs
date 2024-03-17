#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x141 (0xB71 - 0xA30)
// BlueprintGeneratedClass GA_Uncle_Brolly_Block.GA_Uncle_Brolly_Block_C
class UGA_Uncle_Brolly_Block_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA30(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortAbilitySystemComponent*           Pawn_AbilitySystem;                                // 0xA38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0xA40(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_Blocking;                                       // 0xA48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                ActorClass_BlockCollision;                         // 0xA50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BlockStartTime;                                    // 0xA58(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinBlockDuration;                                  // 0xA5C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BlockCollisionActorAttachZOffset;                  // 0xA60(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BlockCollisionActorAttachXOffset;                  // 0xA64(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          T_DodgeEvent;                                      // 0xA68(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          EndAbilityTimerHandle;                             // 0xA70(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         HasBlockCollision;                                 // 0xA78(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         WasBlockCollisionHit;                              // 0xA79(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         BlockInputReleased;                                // 0xA7A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6AAC[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FActiveGameplayEffectHandle           BlockingEffectHandle;                              // 0xA7C(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6AAD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AB_UncleBrolly_C*                      BP_UncleWeapon;                                    // 0xA88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_Uncle_Brolly_Block_Collision_C*     BP_UncleBlockingActor;                             // 0xA90(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_FloatTag;                                       // 0xA98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_FloatFallingTag;                                // 0xAA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FloatResourceDepleted;                             // 0xAA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6AAE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FloatingMaxAcceleration;                           // 0xAAC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FloatingMaxLateralSpeed;                           // 0xAB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FloatingLateralFriction;                           // 0xAB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FloatTimerInterval;                                // 0xAB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FloatVerticalImpulse;                              // 0xABC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FloatingDuration;                                  // 0xAC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FloatingGravityScalar;                             // 0xAC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BaseFloatDuration;                                 // 0xAC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinFloatDuration;                                  // 0xACC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GC_FloatFallingStart;                              // 0xAD0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               FallingImpulse;                                    // 0xAD8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6AAF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          H_FloatTimer;                                      // 0xAE8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           H_FloatTag;                                        // 0xAF0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           H_FallingTag;                                      // 0xAF8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UObject*                               FloatTask;                                         // 0xB00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GC_OpenUncle;                                      // 0xB08(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GC_CloseUncle;                                     // 0xB10(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        FloatTimeWarningThreshold;                         // 0xB18(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6AB0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 GT_FloatAbility;                                   // 0xB20(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          GT_FloatingAction;                                 // 0xB40(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GT_FallingAction;                                  // 0xB48(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        DashMinHoldTime;                                   // 0xB50(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         EndedByDodge;                                      // 0xB70(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UGA_Uncle_Brolly_Block_C* GetDefaultObj();

	void HideOrShowReticleStatus(bool K2Node_SwitchEnum_CmpSuccess);
	bool CheckHasFloatingTags(class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_1, bool CallFunc_HasMatchingGameplayTag_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void OnRep_ChargeTime();
	void CheckMinInputHeldDuration(bool* Success, float* MinDurationRemainder, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	bool CheckShouldFloat(TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_1, bool CallFunc_HasMatchingGameplayTag_ReturnValue_1, const class FString& CallFunc_Conv_BoolToString_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue);
	void ResetFloatingParams();
	void HandleWeaponToggles(bool Hide, class AFortWeapon* CallFunc_GetCurrentSourceWeapon_ReturnValue, class AB_UncleBrolly_C* K2Node_DynamicCast_AsB_Uncle_Brolly, bool K2Node_DynamicCast_bSuccess);
	void CachePawnAndAbilitySystem(class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess);
	void EndAbilityCleanup(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3);
	void EnableBlockingCollision(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, class AActor* CallFunc_Array_Get_Item, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, class AB_Uncle_Brolly_Block_Collision_C* K2Node_DynamicCast_AsB_Uncle_Brolly_Block_Collision, bool K2Node_DynamicCast_bSuccess, class AB_Uncle_Brolly_Block_Collision_C* K2Node_DynamicCast_AsB_Uncle_Brolly_Block_Collision_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void InitAbility(bool CallFunc_IsFalling_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, class AFortWeapon* CallFunc_GetCurrentSourceWeapon_ReturnValue, class AB_UncleBrolly_C* K2Node_DynamicCast_AsB_Uncle_Brolly, bool K2Node_DynamicCast_bSuccess);
	void Added_0B139ADF4EE02BC4BCEA24B642CF54D3();
	void Added_2C8AD2D14C7DF39B64C3C7A0ED0BD07D();
	void Added_7E78D0CD41CB88E53D20C29554BFA2FE();
	void Added_9FD32A6A493FB3608E1AAD90A143F196();
	void Added_186AA6D046EAC0B3175F1FB97B4CC1EB();
	void EventReceived_B232DF744F9B5B3563AFBBAA89EC49C0(const struct FGameplayEventData& Payload);
	void EventReceived_F0D49DEF4CABD7D2970EE482332B97F3(const struct FGameplayEventData& Payload);
	void EventReceived_D93809AD482D8DB8DECD5BBB2CD338B9(const struct FGameplayEventData& Payload);
	void Added_5D87F495442E33847EB0E9A15A7F6216();
	void Added_119C99CD4B7288CA0C23B5B3F4C728B6();
	void Added_7B839F2F4FB71A01B782D9B9D0D92607();
	void Removed_4AA6FA984D57405A70F4AF95E61AE04C();
	void EventReceived_649012DE4C5ACF44569293894A96AFD2(const struct FGameplayEventData& Payload);
	void OnSync_53D666E34CF1A124BC9B20A69E9CD5AD();
	void Added_B4FD3AAE47D662CFD1C6C6814831FCAA();
	void ActivateFloat();
	void BindDash();
	void K2_ActivateAbility();
	void TriggerDash();
	void CheckShouldEndAbility();
	void OnAbilityInputReleased();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_Uncle_Brolly_Block(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayEventData& K2Node_CustomEvent_Payload_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FGameplayEventData& Temp_struct_Variable, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FGameplayEventData& K2Node_CustomEvent_Payload_2, const struct FGameplayEventData& Temp_struct_Variable_1, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FGameplayEventData& K2Node_CustomEvent_Payload_1, const struct FGameplayEventData& Temp_struct_Variable_2, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, const struct FGameplayEventData& K2Node_CustomEvent_Payload, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, const struct FGameplayEventData& Temp_struct_Variable_3, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class UAbilityTask_NetworkSyncPoint* CallFunc_WaitNetSync_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, bool CallFunc_IsValid_ReturnValue_4, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, bool CallFunc_CheckMinInputHeldDuration_Success, float CallFunc_CheckMinInputHeldDuration_MinDurationRemainder, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue_1, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue_3, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_9, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue_5, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_IsValid_ReturnValue_11, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, bool K2Node_SwitchEnum_CmpSuccess, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UAbilityTask_WaitGameplayTagRemoved* CallFunc_WaitGameplayTagRemove_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, bool CallFunc_IsValid_ReturnValue_13, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, bool CallFunc_IsValid_ReturnValue_14, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, bool CallFunc_CheckHasFloatingTags_ReturnValue, bool CallFunc_CheckHasFloatingTags_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_Event_bWasCancelled, bool CallFunc_IsLocallyControlled_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1);
};

}


