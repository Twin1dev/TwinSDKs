#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x110 (0xB40 - 0xA30)
// BlueprintGeneratedClass GA_Uncle_Brolly_Charging.GA_Uncle_Brolly_Charging_C
class UGA_Uncle_Brolly_Charging_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA30(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0xA38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          H_ChargeTimer;                                     // 0xA40(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_ChargingGC;                                     // 0xA48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ChargeInterval;                                    // 0xA50(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ChargeTime;                                        // 0xA54(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         DashSent;                                          // 0xA58(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6A18[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FActiveGameplayEffectHandle           H_LoopingFX;                                       // 0xA5C(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6A19[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        ChargeTimeTier1Min;                                // 0xA68(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        ChargeTimeTier1Max;                                // 0xA88(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        ChargeTimeTier2Min;                                // 0xAA8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        ChargeTimeTier3Min;                                // 0xAC8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FActiveGameplayEffectHandle           H_GETier1Charge;                                   // 0xAE8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           H_GETier2Charge;                                   // 0xAF0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           H_GETier3Charge;                                   // 0xAF8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                BlockingCollisionActor;                            // 0xB00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GC_Tier1;                                          // 0xB08(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GC_Tier2;                                          // 0xB10(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GC_Tier3;                                          // 0xB18(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        MaxChargTime;                                      // 0xB20(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UGA_Uncle_Brolly_Charging_C* GetDefaultObj();

	void ManageChargeTags(const struct FGameplayEffectContextHandle& K2Node_MakeStruct_GameplayEffectContextHandle, const struct FGameplayEffectContextHandle& K2Node_MakeStruct_GameplayEffectContextHandle_1, const struct FGameplayEffectContextHandle& K2Node_MakeStruct_GameplayEffectContextHandle_2, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_2, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, bool CallFunc_InRange_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_InRange_FloatFloat_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_2, bool CallFunc_InRange_FloatFloat_ReturnValue_2);
	void OnRep_ChargeTime();
	void InitAbility(class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess);
	void EventReceived_07757B0D4CE517541CA873888A048F9F(const struct FGameplayEventData& Payload);
	void OnSync_4EB9328C4C254350FD94F8A758B1AD9D();
	void EventReceived_B0D835B84C86D6528F32F9A0C977480E(const struct FGameplayEventData& Payload);
	void Added_629BDAC94E184D6EB36977904544A44A();
	void OnVelocityChage_F94183CE4754FCC5407FF88439C83C5D();
	void Added_48528F3D4F89B7CD1F02D5B11711EE71();
	void Added_2FCD6D3B4DB08DDC6BD200AE160EC520();
	void Added_01B21BB5462B54DFD9A574B9AD2FC460();
	void Added_699882F2491BAED188914E8EA8E570A8();
	void Added_FACBA42F41E6BBCEF934D58174081694();
	void Charge();
	void SendDashEvent();
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Uncle_Brolly_Charging(int32 EntryPoint, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayEventData& K2Node_CustomEvent_Payload, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayEventData& Temp_struct_Variable, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_2, class UAbilityTask_WaitVelocityChange* CallFunc_CreateWaitVelocityChange_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue_3, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsValid_ReturnValue_4, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsValid_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_IsValid_ReturnValue_6, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, const struct FGameplayEventData& Temp_struct_Variable_1, bool CallFunc_IsLocallyControlled_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1, bool K2Node_Event_bWasCancelled, const struct FGameplayEventData& K2Node_Event_EventData, class UAbilityTask_NetworkSyncPoint* CallFunc_WaitNetSync_ReturnValue, bool CallFunc_IsValid_ReturnValue_8, const struct FGameplayEventData& K2Node_CustomEvent_Payload_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, bool CallFunc_IsValid_ReturnValue_9, float CallFunc_GetValueAtLevel_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
};

}


