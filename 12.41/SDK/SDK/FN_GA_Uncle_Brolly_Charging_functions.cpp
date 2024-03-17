#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Uncle_Brolly_Charging.GA_Uncle_Brolly_Charging_C
// (None)

class UClass* UGA_Uncle_Brolly_Charging_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Uncle_Brolly_Charging_C");

	return Clss;
}


// GA_Uncle_Brolly_Charging_C GA_Uncle_Brolly_Charging.Default__GA_Uncle_Brolly_Charging_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Uncle_Brolly_Charging_C* UGA_Uncle_Brolly_Charging_C::GetDefaultObj()
{
	static class UGA_Uncle_Brolly_Charging_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Uncle_Brolly_Charging_C*>(UGA_Uncle_Brolly_Charging_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Uncle_Brolly_Charging.GA_Uncle_Brolly_Charging_C.ManageChargeTags
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectContextHandleK2Node_MakeStruct_GameplayEffectContextHandle                    (None)
// struct FGameplayEffectContextHandleK2Node_MakeStruct_GameplayEffectContextHandle_1                  (None)
// struct FGameplayEffectContextHandleK2Node_MakeStruct_GameplayEffectContextHandle_2                  (None)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1             (NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_2             (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InRange_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InRange_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueAtLevel_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InRange_FloatFloat_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Uncle_Brolly_Charging_C::ManageChargeTags(const struct FGameplayEffectContextHandle& K2Node_MakeStruct_GameplayEffectContextHandle, const struct FGameplayEffectContextHandle& K2Node_MakeStruct_GameplayEffectContextHandle_1, const struct FGameplayEffectContextHandle& K2Node_MakeStruct_GameplayEffectContextHandle_2, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_2, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, bool CallFunc_InRange_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_InRange_FloatFloat_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_2, bool CallFunc_InRange_FloatFloat_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Uncle_Brolly_Charging_C", "ManageChargeTags");

	Params::UGA_Uncle_Brolly_Charging_C_ManageChargeTags_Params Parms{};

	Parms.K2Node_MakeStruct_GameplayEffectContextHandle = K2Node_MakeStruct_GameplayEffectContextHandle;
	Parms.K2Node_MakeStruct_GameplayEffectContextHandle_1 = K2Node_MakeStruct_GameplayEffectContextHandle_1;
	Parms.K2Node_MakeStruct_GameplayEffectContextHandle_2 = K2Node_MakeStruct_GameplayEffectContextHandle_2;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1 = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_2 = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_2;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_1 = CallFunc_GetValueAtLevel_ReturnValue_1;
	Parms.CallFunc_InRange_FloatFloat_ReturnValue = CallFunc_InRange_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_InRange_FloatFloat_ReturnValue_1 = CallFunc_InRange_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_2 = CallFunc_GetValueAtLevel_ReturnValue_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;
	Parms.CallFunc_InRange_FloatFloat_ReturnValue_2 = CallFunc_InRange_FloatFloat_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Uncle_Brolly_Charging.GA_Uncle_Brolly_Charging_C.OnRep_ChargeTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Uncle_Brolly_Charging_C::OnRep_ChargeTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Uncle_Brolly_Charging_C", "OnRep_ChargeTime");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Uncle_Brolly_Charging.GA_Uncle_Brolly_Charging_C.InitAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Uncle_Brolly_Charging_C::InitAbility(class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Uncle_Brolly_Charging_C", "InitAbility");

	Params::UGA_Uncle_Brolly_Charging_C_InitAbility_Params Parms{};

	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Uncle_Brolly_Charging.GA_Uncle_Brolly_Charging_C.EventReceived_07757B0D4CE517541CA873888A048F9F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Uncle_Brolly_Charging_C::EventReceived_07757B0D4CE517541CA873888A048F9F(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Uncle_Brolly_Charging_C", "EventReceived_07757B0D4CE517541CA873888A048F9F");

	Params::UGA_Uncle_Brolly_Charging_C_EventReceived_07757B0D4CE517541CA873888A048F9F_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Uncle_Brolly_Charging.GA_Uncle_Brolly_Charging_C.OnSync_4EB9328C4C254350FD94F8A758B1AD9D
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Uncle_Brolly_Charging_C::OnSync_4EB9328C4C254350FD94F8A758B1AD9D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Uncle_Brolly_Charging_C", "OnSync_4EB9328C4C254350FD94F8A758B1AD9D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Uncle_Brolly_Charging.GA_Uncle_Brolly_Charging_C.EventReceived_B0D835B84C86D6528F32F9A0C977480E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Uncle_Brolly_Charging_C::EventReceived_B0D835B84C86D6528F32F9A0C977480E(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Uncle_Brolly_Charging_C", "EventReceived_B0D835B84C86D6528F32F9A0C977480E");

	Params::UGA_Uncle_Brolly_Charging_C_EventReceived_B0D835B84C86D6528F32F9A0C977480E_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Uncle_Brolly_Charging.GA_Uncle_Brolly_Charging_C.Added_629BDAC94E184D6EB36977904544A44A
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Uncle_Brolly_Charging_C::Added_629BDAC94E184D6EB36977904544A44A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Uncle_Brolly_Charging_C", "Added_629BDAC94E184D6EB36977904544A44A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Uncle_Brolly_Charging.GA_Uncle_Brolly_Charging_C.OnVelocityChage_F94183CE4754FCC5407FF88439C83C5D
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Uncle_Brolly_Charging_C::OnVelocityChage_F94183CE4754FCC5407FF88439C83C5D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Uncle_Brolly_Charging_C", "OnVelocityChage_F94183CE4754FCC5407FF88439C83C5D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Uncle_Brolly_Charging.GA_Uncle_Brolly_Charging_C.Added_48528F3D4F89B7CD1F02D5B11711EE71
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Uncle_Brolly_Charging_C::Added_48528F3D4F89B7CD1F02D5B11711EE71()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Uncle_Brolly_Charging_C", "Added_48528F3D4F89B7CD1F02D5B11711EE71");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Uncle_Brolly_Charging.GA_Uncle_Brolly_Charging_C.Added_2FCD6D3B4DB08DDC6BD200AE160EC520
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Uncle_Brolly_Charging_C::Added_2FCD6D3B4DB08DDC6BD200AE160EC520()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Uncle_Brolly_Charging_C", "Added_2FCD6D3B4DB08DDC6BD200AE160EC520");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Uncle_Brolly_Charging.GA_Uncle_Brolly_Charging_C.Added_01B21BB5462B54DFD9A574B9AD2FC460
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Uncle_Brolly_Charging_C::Added_01B21BB5462B54DFD9A574B9AD2FC460()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Uncle_Brolly_Charging_C", "Added_01B21BB5462B54DFD9A574B9AD2FC460");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Uncle_Brolly_Charging.GA_Uncle_Brolly_Charging_C.Added_699882F2491BAED188914E8EA8E570A8
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Uncle_Brolly_Charging_C::Added_699882F2491BAED188914E8EA8E570A8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Uncle_Brolly_Charging_C", "Added_699882F2491BAED188914E8EA8E570A8");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Uncle_Brolly_Charging.GA_Uncle_Brolly_Charging_C.Added_FACBA42F41E6BBCEF934D58174081694
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Uncle_Brolly_Charging_C::Added_FACBA42F41E6BBCEF934D58174081694()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Uncle_Brolly_Charging_C", "Added_FACBA42F41E6BBCEF934D58174081694");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Uncle_Brolly_Charging.GA_Uncle_Brolly_Charging_C.Charge
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Uncle_Brolly_Charging_C::Charge()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Uncle_Brolly_Charging_C", "Charge");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Uncle_Brolly_Charging.GA_Uncle_Brolly_Charging_C.SendDashEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Uncle_Brolly_Charging_C::SendDashEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Uncle_Brolly_Charging_C", "SendDashEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Uncle_Brolly_Charging.GA_Uncle_Brolly_Charging_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Uncle_Brolly_Charging_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Uncle_Brolly_Charging_C", "K2_OnEndAbility");

	Params::UGA_Uncle_Brolly_Charging_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Uncle_Brolly_Charging.GA_Uncle_Brolly_Charging_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Uncle_Brolly_Charging_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Uncle_Brolly_Charging_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_Uncle_Brolly_Charging_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Uncle_Brolly_Charging.GA_Uncle_Brolly_Charging_C.ExecuteUbergraph_GA_Uncle_Brolly_Charging
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitGameplayEvent*CallFunc_WaitGameplayEvent_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEventData          K2Node_CustomEvent_Payload                                       (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FGameplayEventData          Temp_struct_Variable                                             (None)
// class UAbilityTask_WaitGameplayEvent*CallFunc_WaitGameplayEvent_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UAbilityTask_WaitGameplayTagAdded*CallFunc_WaitGameplayTagAdd_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilityTask_WaitVelocityChange*CallFunc_CreateWaitVelocityChange_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilityTask_WaitGameplayTagAdded*CallFunc_WaitGameplayTagAdd_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilityTask_WaitGameplayTagAdded*CallFunc_WaitGameplayTagAdd_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class UAbilityTask_WaitGameplayTagAdded*CallFunc_WaitGameplayTagAdd_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilityTask_WaitGameplayTagAdded*CallFunc_WaitGameplayTagAdd_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       CallFunc_GetFortPlayerControllerFromActor_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              (None)
// struct FGameplayEventData          Temp_struct_Variable_1                                           (None)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerController*       CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// class UAbilityTask_NetworkSyncPoint*CallFunc_WaitNetSync_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEventData          K2Node_CustomEvent_Payload_1                                     (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// class UAbilityTask_WaitGameplayTagAdded*CallFunc_WaitGameplayTagAdd_ReturnValue_5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Uncle_Brolly_Charging_C::ExecuteUbergraph_GA_Uncle_Brolly_Charging(int32 EntryPoint, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayEventData& K2Node_CustomEvent_Payload, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayEventData& Temp_struct_Variable, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_2, class UAbilityTask_WaitVelocityChange* CallFunc_CreateWaitVelocityChange_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue_3, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsValid_ReturnValue_4, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsValid_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_IsValid_ReturnValue_6, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, const struct FGameplayEventData& Temp_struct_Variable_1, bool CallFunc_IsLocallyControlled_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1, bool K2Node_Event_bWasCancelled, const struct FGameplayEventData& K2Node_Event_EventData, class UAbilityTask_NetworkSyncPoint* CallFunc_WaitNetSync_ReturnValue, bool CallFunc_IsValid_ReturnValue_8, const struct FGameplayEventData& K2Node_CustomEvent_Payload_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, bool CallFunc_IsValid_ReturnValue_9, float CallFunc_GetValueAtLevel_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Uncle_Brolly_Charging_C", "ExecuteUbergraph_GA_Uncle_Brolly_Charging");

	Params::UGA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_WaitGameplayEvent_ReturnValue = CallFunc_WaitGameplayEvent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_Payload = K2Node_CustomEvent_Payload;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_WaitGameplayEvent_ReturnValue_1 = CallFunc_WaitGameplayEvent_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_WaitGameplayTagAdd_ReturnValue = CallFunc_WaitGameplayTagAdd_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_CreateWaitVelocityChange_ReturnValue = CallFunc_CreateWaitVelocityChange_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_WaitGameplayTagAdd_ReturnValue_1 = CallFunc_WaitGameplayTagAdd_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_WaitGameplayTagAdd_ReturnValue_2 = CallFunc_WaitGameplayTagAdd_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_WaitGameplayTagAdd_ReturnValue_3 = CallFunc_WaitGameplayTagAdd_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_WaitGameplayTagAdd_ReturnValue_4 = CallFunc_WaitGameplayTagAdd_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetFortPlayerControllerFromActor_ReturnValue = CallFunc_GetFortPlayerControllerFromActor_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1 = CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_WaitNetSync_ReturnValue = CallFunc_WaitNetSync_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.K2Node_CustomEvent_Payload_1 = K2Node_CustomEvent_Payload_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_WaitGameplayTagAdd_ReturnValue_5 = CallFunc_WaitGameplayTagAdd_ReturnValue_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


