#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0xA78 - 0xA30)
// BlueprintGeneratedClass GA_Athena_Track_DangerGrape.GA_Athena_Track_DangerGrape_C
class UGA_Athena_Track_DangerGrape_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA30(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0xA38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          TrackGroupTag;                                     // 0xA40(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        SpawnedDecoys;                                     // 0xA48(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FScalableFloat                        MaxActorsInWorld;                                  // 0xA58(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UGA_Athena_Track_DangerGrape_C* GetDefaultObj();

	void OnRep_SnowmenActors();
	void EventReceived_CECFA813476EFF4163BB1EAFBFD4E985(const struct FGameplayEventData& Payload);
	void EventReceived_13B4A7014CFACBC3914C3BA737F355B3(const struct FGameplayEventData& Payload);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnPlayerDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void ExecuteUbergraph_GA_Athena_Track_DangerGrape(int32 EntryPoint, const struct FGameplayEventData& K2Node_CustomEvent_Payload, const struct FGameplayEventData& Temp_struct_Variable, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_1, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, bool K2Node_Event_bWasCancelled, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_LessEqual_IntInt_ReturnValue, class ABP_Pawn_DangerGrape_C* K2Node_DynamicCast_AsBP_Pawn_Danger_Grape, bool K2Node_DynamicCast_bSuccess_2, const struct FGameplayEventData& Temp_struct_Variable_1, int32 CallFunc_Array_Find_ReturnValue, class AActor* K2Node_DynamicCast_AsActor_1, bool K2Node_DynamicCast_bSuccess_3, class AActor* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Add_ReturnValue, class ABP_Pawn_DangerGrape_C* K2Node_DynamicCast_AsBP_Pawn_Danger_Grape_1, bool K2Node_DynamicCast_bSuccess_4, const struct FGameplayEventData& K2Node_CustomEvent_Payload_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage, class AController* K2Node_CustomEvent_InstigatedBy, class AActor* K2Node_CustomEvent_DamageCauser, const struct FVector& K2Node_CustomEvent_HitLocation, class UPrimitiveComponent* K2Node_CustomEvent_FHitComponent, class FName K2Node_CustomEvent_BoneName, const struct FVector& K2Node_CustomEvent_Momentum, class AActor* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, class ABP_Pawn_DangerGrape_C* K2Node_DynamicCast_AsBP_Pawn_Danger_Grape_2, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_Less_IntInt_ReturnValue);
};

}


