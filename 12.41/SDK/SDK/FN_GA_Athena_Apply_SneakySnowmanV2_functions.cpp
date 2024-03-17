#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Athena_Apply_SneakySnowmanV2.GA_Athena_Apply_SneakySnowmanV2_C
// (None)

class UClass* UGA_Athena_Apply_SneakySnowmanV2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Athena_Apply_SneakySnowmanV2_C");

	return Clss;
}


// GA_Athena_Apply_SneakySnowmanV2_C GA_Athena_Apply_SneakySnowmanV2.Default__GA_Athena_Apply_SneakySnowmanV2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Athena_Apply_SneakySnowmanV2_C* UGA_Athena_Apply_SneakySnowmanV2_C::GetDefaultObj()
{
	static class UGA_Athena_Apply_SneakySnowmanV2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Athena_Apply_SneakySnowmanV2_C*>(UGA_Athena_Apply_SneakySnowmanV2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Athena_Apply_SneakySnowmanV2.GA_Athena_Apply_SneakySnowmanV2_C.CheckForExistingSnowman
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAttachedActors_OutActors                             (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AAthena_Player_SneakySnowmanV2_C*K2Node_DynamicCast_AsAthena_Player_Sneaky_Snowman_V2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_Apply_SneakySnowmanV2_C::CheckForExistingSnowman(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class AAthena_Player_SneakySnowmanV2_C* K2Node_DynamicCast_AsAthena_Player_Sneaky_Snowman_V2, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Apply_SneakySnowmanV2_C", "CheckForExistingSnowman");

	Params::UGA_Athena_Apply_SneakySnowmanV2_C_CheckForExistingSnowman_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAttachedActors_OutActors = CallFunc_GetAttachedActors_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Player_Sneaky_Snowman_V2 = K2Node_DynamicCast_AsAthena_Player_Sneaky_Snowman_V2;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Apply_SneakySnowmanV2.GA_Athena_Apply_SneakySnowmanV2_C.QuestUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*       FortPC                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SendComplexCustomStatEvent_QuestActive                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SendComplexCustomStatEvent_QuestCompleted               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_Apply_SneakySnowmanV2_C::QuestUpdate(class AFortPlayerController* FortPC, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_SendComplexCustomStatEvent_QuestActive, bool CallFunc_SendComplexCustomStatEvent_QuestCompleted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Apply_SneakySnowmanV2_C", "QuestUpdate");

	Params::UGA_Athena_Apply_SneakySnowmanV2_C_QuestUpdate_Params Parms{};

	Parms.FortPC = FortPC;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_SendComplexCustomStatEvent_QuestActive = CallFunc_SendComplexCustomStatEvent_QuestActive;
	Parms.CallFunc_SendComplexCustomStatEvent_QuestCompleted = CallFunc_SendComplexCustomStatEvent_QuestCompleted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Apply_SneakySnowmanV2.GA_Athena_Apply_SneakySnowmanV2_C.K2_CanActivateAbility
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo   ActorInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayTagContainer       RelevantTags                                                     (Parm, OutParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AFortPlayerPawnAthena*       K2Node_DynamicCast_AsFort_Player_Pawn_Athena                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UGA_Athena_Apply_SneakySnowmanV2_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Apply_SneakySnowmanV2_C", "K2_CanActivateAbility");

	Params::UGA_Athena_Apply_SneakySnowmanV2_C_K2_CanActivateAbility_Params Parms{};

	Parms.ActorInfo = ActorInfo;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn_Athena = K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (RelevantTags != nullptr)
		*RelevantTags = std::move(Parms.RelevantTags);

	return Parms.ReturnValue;

}


// Function GA_Athena_Apply_SneakySnowmanV2.GA_Athena_Apply_SneakySnowmanV2_C.Completed_CE7C38B64BB38F782A7B5C9AA8EC9A22
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Apply_SneakySnowmanV2_C::Completed_CE7C38B64BB38F782A7B5C9AA8EC9A22(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Apply_SneakySnowmanV2_C", "Completed_CE7C38B64BB38F782A7B5C9AA8EC9A22");

	Params::UGA_Athena_Apply_SneakySnowmanV2_C_Completed_CE7C38B64BB38F782A7B5C9AA8EC9A22_Params Parms{};

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Apply_SneakySnowmanV2.GA_Athena_Apply_SneakySnowmanV2_C.Cancelled_CE7C38B64BB38F782A7B5C9AA8EC9A22
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Apply_SneakySnowmanV2_C::Cancelled_CE7C38B64BB38F782A7B5C9AA8EC9A22(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Apply_SneakySnowmanV2_C", "Cancelled_CE7C38B64BB38F782A7B5C9AA8EC9A22");

	Params::UGA_Athena_Apply_SneakySnowmanV2_C_Cancelled_CE7C38B64BB38F782A7B5C9AA8EC9A22_Params Parms{};

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Apply_SneakySnowmanV2.GA_Athena_Apply_SneakySnowmanV2_C.Triggered_CE7C38B64BB38F782A7B5C9AA8EC9A22
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Apply_SneakySnowmanV2_C::Triggered_CE7C38B64BB38F782A7B5C9AA8EC9A22(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Apply_SneakySnowmanV2_C", "Triggered_CE7C38B64BB38F782A7B5C9AA8EC9A22");

	Params::UGA_Athena_Apply_SneakySnowmanV2_C_Triggered_CE7C38B64BB38F782A7B5C9AA8EC9A22_Params Parms{};

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Apply_SneakySnowmanV2.GA_Athena_Apply_SneakySnowmanV2_C.Completed_ACD4F56F4B8982FA9DEBFE80654DED8C
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Apply_SneakySnowmanV2_C::Completed_ACD4F56F4B8982FA9DEBFE80654DED8C(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Apply_SneakySnowmanV2_C", "Completed_ACD4F56F4B8982FA9DEBFE80654DED8C");

	Params::UGA_Athena_Apply_SneakySnowmanV2_C_Completed_ACD4F56F4B8982FA9DEBFE80654DED8C_Params Parms{};

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Apply_SneakySnowmanV2.GA_Athena_Apply_SneakySnowmanV2_C.Cancelled_ACD4F56F4B8982FA9DEBFE80654DED8C
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Apply_SneakySnowmanV2_C::Cancelled_ACD4F56F4B8982FA9DEBFE80654DED8C(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Apply_SneakySnowmanV2_C", "Cancelled_ACD4F56F4B8982FA9DEBFE80654DED8C");

	Params::UGA_Athena_Apply_SneakySnowmanV2_C_Cancelled_ACD4F56F4B8982FA9DEBFE80654DED8C_Params Parms{};

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Apply_SneakySnowmanV2.GA_Athena_Apply_SneakySnowmanV2_C.Triggered_ACD4F56F4B8982FA9DEBFE80654DED8C
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Apply_SneakySnowmanV2_C::Triggered_ACD4F56F4B8982FA9DEBFE80654DED8C(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Apply_SneakySnowmanV2_C", "Triggered_ACD4F56F4B8982FA9DEBFE80654DED8C");

	Params::UGA_Athena_Apply_SneakySnowmanV2_C_Triggered_ACD4F56F4B8982FA9DEBFE80654DED8C_Params Parms{};

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Apply_SneakySnowmanV2.GA_Athena_Apply_SneakySnowmanV2_C.EventReceived_7FDF769A4D03D913013F08BD0D869056
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Apply_SneakySnowmanV2_C::EventReceived_7FDF769A4D03D913013F08BD0D869056(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Apply_SneakySnowmanV2_C", "EventReceived_7FDF769A4D03D913013F08BD0D869056");

	Params::UGA_Athena_Apply_SneakySnowmanV2_C_EventReceived_7FDF769A4D03D913013F08BD0D869056_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Apply_SneakySnowmanV2.GA_Athena_Apply_SneakySnowmanV2_C.EventReceived_46D1CDD34CE2F1ED61BFEC8ED3490CB8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Apply_SneakySnowmanV2_C::EventReceived_46D1CDD34CE2F1ED61BFEC8ED3490CB8(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Apply_SneakySnowmanV2_C", "EventReceived_46D1CDD34CE2F1ED61BFEC8ED3490CB8");

	Params::UGA_Athena_Apply_SneakySnowmanV2_C_EventReceived_46D1CDD34CE2F1ED61BFEC8ED3490CB8_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Apply_SneakySnowmanV2.GA_Athena_Apply_SneakySnowmanV2_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Athena_Apply_SneakySnowmanV2_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Apply_SneakySnowmanV2_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_Apply_SneakySnowmanV2.GA_Athena_Apply_SneakySnowmanV2_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_Apply_SneakySnowmanV2_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Apply_SneakySnowmanV2_C", "K2_OnEndAbility");

	Params::UGA_Athena_Apply_SneakySnowmanV2_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Apply_SneakySnowmanV2.GA_Athena_Apply_SneakySnowmanV2_C.OnFInishedJumpingIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Apply_SneakySnowmanV2_C::OnFInishedJumpingIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Apply_SneakySnowmanV2_C", "OnFInishedJumpingIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_Apply_SneakySnowmanV2.GA_Athena_Apply_SneakySnowmanV2_C.HolsterWeapon_
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Apply_SneakySnowmanV2_C::HolsterWeapon_()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Apply_SneakySnowmanV2_C", "HolsterWeapon_");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_Apply_SneakySnowmanV2.GA_Athena_Apply_SneakySnowmanV2_C.UnholsterWeapon_
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Apply_SneakySnowmanV2_C::UnholsterWeapon_()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Apply_SneakySnowmanV2_C", "UnholsterWeapon_");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_Apply_SneakySnowmanV2.GA_Athena_Apply_SneakySnowmanV2_C.UpdateHolster
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Apply_SneakySnowmanV2_C::UpdateHolster()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Apply_SneakySnowmanV2_C", "UpdateHolster");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_Apply_SneakySnowmanV2.GA_Athena_Apply_SneakySnowmanV2_C.UpdatePropRef
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAthena_Player_SneakySnowmanV2_C*PlayerSnowman                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Apply_SneakySnowmanV2_C::UpdatePropRef(class AAthena_Player_SneakySnowmanV2_C* PlayerSnowman)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Apply_SneakySnowmanV2_C", "UpdatePropRef");

	Params::UGA_Athena_Apply_SneakySnowmanV2_C_UpdatePropRef_Params Parms{};

	Parms.PlayerSnowman = PlayerSnowman;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Apply_SneakySnowmanV2.GA_Athena_Apply_SneakySnowmanV2_C.SetMatInt
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Apply_SneakySnowmanV2_C::SetMatInt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Apply_SneakySnowmanV2_C", "SetMatInt");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_Apply_SneakySnowmanV2.GA_Athena_Apply_SneakySnowmanV2_C.SetPlayerSnowman
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAthena_Player_SneakySnowmanV2_C*PlayerSnowman                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Apply_SneakySnowmanV2_C::SetPlayerSnowman(class AAthena_Player_SneakySnowmanV2_C* PlayerSnowman)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Apply_SneakySnowmanV2_C", "SetPlayerSnowman");

	Params::UGA_Athena_Apply_SneakySnowmanV2_C_SetPlayerSnowman_Params Parms{};

	Parms.PlayerSnowman = PlayerSnowman;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Apply_SneakySnowmanV2.GA_Athena_Apply_SneakySnowmanV2_C.ExecuteUbergraph_GA_Athena_Apply_SneakySnowmanV2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData_1                                  (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag_1                              (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData                                    (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag                                (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleTemp_struct_Variable_1                                           (None)
// struct FGameplayEventData          K2Node_CustomEvent_Payload_1                                     (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// struct FGameplayEventData          Temp_struct_Variable_2                                           (None)
// class UAbilityTask_WaitGameplayEvent*CallFunc_WaitGameplayEvent_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortWeapon*                 K2Node_DynamicCast_AsFort_Weapon                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AB_SneakySnowmanV2_Athena_C* K2Node_DynamicCast_AsB_Sneaky_Snowman_V2_Athena                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortWeaponItemDefinition*   CallFunc_GetWeaponData_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEventData          K2Node_CustomEvent_Payload                                       (None)
// struct FGameplayEventData          Temp_struct_Variable_3                                           (None)
// class UAbilityTask_WaitGameplayEvent*CallFunc_WaitGameplayEvent_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData_5                                  (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag_5                              (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData_2                                  (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag_2                              (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class UFortAbilityTask_PlayMontageWaitTarget*CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      CallFunc_MakeGameplayCueParameters_ReturnValue                   (ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortAthenaAIBotController*  K2Node_DynamicCast_AsFort_Athena_AIBot_Controller                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAbilityTask_PlayMontageWaitTarget*CallFunc_PlayMontageWaitTarget_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetPlayLength_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityActorInfo   CallFunc_GetActorInfo_ReturnValue                                (ContainsInstancedReference)
// struct FGameplayEffectContextHandleCallFunc_GetGrantedByEffectContext_ReturnValue                   (None)
// struct FGameplayEffectContextHandleCallFunc_GetGrantedByEffectContext_ReturnValue_1                 (None)
// class AActor*                      CallFunc_EffectContextGetEffectCauser_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_EffectContextGetEffectCauser_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IAthena_IGiveSneakySnowman_C>K2Node_DynamicCast_AsAthena_IGive_Sneaky_Snowman                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IAthena_IGiveSneakySnowman_C>K2Node_DynamicCast_AsAthena_IGive_Sneaky_Snowman_1               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetNewSnowmanTransform_Transform                        (IsPlainOldData, NoDestructor)
// class AAthena_Prop_SneakySnowmanV2_C*K2Node_DynamicCast_AsAthena_Prop_Sneaky_Snowman_V2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEffectContextHandleCallFunc_GetGrantedByEffectContext_ReturnValue_2                 (None)
// class AActor*                      CallFunc_EffectContextGetEffectCauser_ReturnValue_2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IAthena_IGiveSneakySnowman_C>K2Node_DynamicCast_AsAthena_IGive_Sneaky_Snowman_2               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IAthena_IGiveSneakySnowman_C>K2Node_DynamicCast_AsAthena_IGive_Sneaky_Snowman_3               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IAthena_IGiveSneakySnowman_C>K2Node_DynamicCast_AsAthena_IGive_Sneaky_Snowman_4               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_K2_RemoveItemFromPlayer_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumInStack_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_K2_RemoveFortItemFromPlayer_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityActorInfo   CallFunc_GetActorInfo_ReturnValue_1                              (ContainsInstancedReference)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromActor_ReturnValue                  (None)
// TArray<struct FActiveGameplayEffectHandle>CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue              (ZeroConstructor, ReferenceParm)
// struct FGameplayAbilityTargetDataHandleTemp_struct_Variable_4                                           (None)
// struct FGameplayTag                Temp_struct_Variable_5                                           (NoDestructor, HasGetValueTypeHash)
// class AAthena_Player_SneakySnowmanV2_C*K2Node_CustomEvent_PlayerSnowman_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorRelativeRotation_SweepHitResult              (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData_3                                  (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag_3                              (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              (None)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAthena_Player_SneakySnowmanV2_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAthena_Player_SneakySnowmanV2_C*CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// struct FGameplayEffectContextHandleCallFunc_GetGrantedByEffectContext_ReturnValue_3                 (None)
// class AAthena_Player_CoolCarpet_C* K2Node_DynamicCast_AsAthena_Player_Cool_Carpet                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_EffectContextGetEffectCauser_ReturnValue_3              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IAthena_IGiveSneakySnowman_C>K2Node_DynamicCast_AsAthena_IGive_Sneaky_Snowman_5               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetMaterialInt_MatInt                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAthena_Player_SneakySnowmanV2_C*K2Node_CustomEvent_PlayerSnowman                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_CommitAbility_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AB_SneakySnowmanV2_Athena_C* K2Node_DynamicCast_AsB_Sneaky_Snowman_V2_Athena_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortWeaponItemDefinition*   CallFunc_GetWeaponData_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AB_SneakySnowmanV2_Athena_C* K2Node_DynamicCast_AsB_Sneaky_Snowman_V2_Athena_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_15                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortWeaponItemDefinition*   CallFunc_GetWeaponData_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasTag_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AB_SneakySnowmanV2_Athena_C* K2Node_DynamicCast_AsB_Sneaky_Snowman_V2_Athena_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_16                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortWeaponItemDefinition*   CallFunc_GetWeaponData_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1             (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData_4                                  (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag_4                              (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAthena_Player_SneakySnowmanV2_C*CallFunc_FinishSpawningActor_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Apply_SneakySnowmanV2_C::ExecuteUbergraph_GA_Athena_Apply_SneakySnowmanV2(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable_1, const struct FGameplayEventData& K2Node_CustomEvent_Payload_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FGameplayEventData& Temp_struct_Variable_2, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFortWeapon* K2Node_DynamicCast_AsFort_Weapon, bool K2Node_DynamicCast_bSuccess, class AB_SneakySnowmanV2_Athena_C* K2Node_DynamicCast_AsB_Sneaky_Snowman_V2_Athena, bool K2Node_DynamicCast_bSuccess_1, class UFortWeaponItemDefinition* CallFunc_GetWeaponData_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_HasTag_ReturnValue, const struct FGameplayEventData& K2Node_CustomEvent_Payload, const struct FGameplayEventData& Temp_struct_Variable_3, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_5, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_2, int32 Temp_int_Array_Index_Variable, bool CallFunc_K2_CommitAbility_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, bool K2Node_Event_bWasCancelled, bool CallFunc_IsValid_ReturnValue_3, class AController* CallFunc_GetController_ReturnValue, class AFortAthenaAIBotController* K2Node_DynamicCast_AsFort_Athena_AIBot_Controller, bool K2Node_DynamicCast_bSuccess_2, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess_3, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, bool Temp_bool_Variable, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWaitTarget_ReturnValue, float CallFunc_GetPlayLength_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool Temp_bool_Variable_1, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, const struct FGameplayEffectContextHandle& CallFunc_GetGrantedByEffectContext_ReturnValue, const struct FGameplayEffectContextHandle& CallFunc_GetGrantedByEffectContext_ReturnValue_1, class AActor* CallFunc_EffectContextGetEffectCauser_ReturnValue, class AActor* CallFunc_EffectContextGetEffectCauser_ReturnValue_1, TScriptInterface<class IAthena_IGiveSneakySnowman_C> K2Node_DynamicCast_AsAthena_IGive_Sneaky_Snowman, bool K2Node_DynamicCast_bSuccess_4, TScriptInterface<class IAthena_IGiveSneakySnowman_C> K2Node_DynamicCast_AsAthena_IGive_Sneaky_Snowman_1, bool K2Node_DynamicCast_bSuccess_5, const struct FTransform& CallFunc_GetNewSnowmanTransform_Transform, class AAthena_Prop_SneakySnowmanV2_C* K2Node_DynamicCast_AsAthena_Prop_Sneaky_Snowman_V2, bool K2Node_DynamicCast_bSuccess_6, const struct FGameplayEffectContextHandle& CallFunc_GetGrantedByEffectContext_ReturnValue_2, class AActor* CallFunc_EffectContextGetEffectCauser_ReturnValue_2, TScriptInterface<class IAthena_IGiveSneakySnowman_C> K2Node_DynamicCast_AsAthena_IGive_Sneaky_Snowman_2, bool K2Node_DynamicCast_bSuccess_7, TScriptInterface<class IAthena_IGiveSneakySnowman_C> K2Node_DynamicCast_AsAthena_IGive_Sneaky_Snowman_3, bool K2Node_DynamicCast_bSuccess_8, TScriptInterface<class IAthena_IGiveSneakySnowman_C> K2Node_DynamicCast_AsAthena_IGive_Sneaky_Snowman_4, bool K2Node_DynamicCast_bSuccess_9, bool CallFunc_IsDedicatedServer_ReturnValue, class UFortItem* CallFunc_Array_Get_Item, int32 CallFunc_K2_RemoveItemFromPlayer_ReturnValue, int32 CallFunc_GetNumInStack_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_10, int32 CallFunc_K2_RemoveFortItemFromPlayer_ReturnValue, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue_1, bool Temp_bool_Variable_2, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_11, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable_4, const struct FGameplayTag& Temp_struct_Variable_5, class AAthena_Player_SneakySnowmanV2_C* K2Node_CustomEvent_PlayerSnowman_1, const struct FHitResult& CallFunc_K2_SetActorRelativeRotation_SweepHitResult, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_3, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_3, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_6, bool Temp_bool_Variable_3, bool K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class AAthena_Player_SneakySnowmanV2_C* CallFunc_FinishSpawningActor_ReturnValue, class AAthena_Player_SneakySnowmanV2_C* CallFunc_FinishSpawningActor_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct FGameplayEffectContextHandle& CallFunc_GetGrantedByEffectContext_ReturnValue_3, class AAthena_Player_CoolCarpet_C* K2Node_DynamicCast_AsAthena_Player_Cool_Carpet, bool K2Node_DynamicCast_bSuccess_12, class AActor* CallFunc_EffectContextGetEffectCauser_ReturnValue_3, TScriptInterface<class IAthena_IGiveSneakySnowman_C> K2Node_DynamicCast_AsAthena_IGive_Sneaky_Snowman_5, bool K2Node_DynamicCast_bSuccess_13, int32 CallFunc_GetMaterialInt_MatInt, int32 CallFunc_RandomInteger_ReturnValue, class AAthena_Player_SneakySnowmanV2_C* K2Node_CustomEvent_PlayerSnowman, bool CallFunc_K2_CommitAbility_ReturnValue_1, class AB_SneakySnowmanV2_Athena_C* K2Node_DynamicCast_AsB_Sneaky_Snowman_V2_Athena_1, bool K2Node_DynamicCast_bSuccess_14, class UFortWeaponItemDefinition* CallFunc_GetWeaponData_ReturnValue_1, bool CallFunc_HasTag_ReturnValue_1, class AB_SneakySnowmanV2_Athena_C* K2Node_DynamicCast_AsB_Sneaky_Snowman_V2_Athena_2, bool K2Node_DynamicCast_bSuccess_15, bool K2Node_Select_Default_1, class UFortWeaponItemDefinition* CallFunc_GetWeaponData_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_HasTag_ReturnValue_2, bool K2Node_Select_Default_2, bool CallFunc_Not_PreBool_ReturnValue_2, class AB_SneakySnowmanV2_Athena_C* K2Node_DynamicCast_AsB_Sneaky_Snowman_V2_Athena_3, bool K2Node_DynamicCast_bSuccess_16, class UFortWeaponItemDefinition* CallFunc_GetWeaponData_ReturnValue_3, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1, bool CallFunc_HasTag_ReturnValue_3, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_4, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_4, bool K2Node_Select_Default_3, bool CallFunc_Not_PreBool_ReturnValue_3, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2, class AAthena_Player_SneakySnowmanV2_C* CallFunc_FinishSpawningActor_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Apply_SneakySnowmanV2_C", "ExecuteUbergraph_GA_Athena_Apply_SneakySnowmanV2");

	Params::UGA_Athena_Apply_SneakySnowmanV2_C_ExecuteUbergraph_GA_Athena_Apply_SneakySnowmanV2_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_TargetData_1 = K2Node_CustomEvent_TargetData_1;
	Parms.K2Node_CustomEvent_ApplicationTag_1 = K2Node_CustomEvent_ApplicationTag_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_TargetData = K2Node_CustomEvent_TargetData;
	Parms.K2Node_CustomEvent_ApplicationTag = K2Node_CustomEvent_ApplicationTag;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_CustomEvent_Payload_1 = K2Node_CustomEvent_Payload_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.CallFunc_WaitGameplayEvent_ReturnValue = CallFunc_WaitGameplayEvent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Weapon = K2Node_DynamicCast_AsFort_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsB_Sneaky_Snowman_V2_Athena = K2Node_DynamicCast_AsB_Sneaky_Snowman_V2_Athena;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetWeaponData_ReturnValue = CallFunc_GetWeaponData_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.K2Node_CustomEvent_Payload = K2Node_CustomEvent_Payload;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.CallFunc_WaitGameplayEvent_ReturnValue_1 = CallFunc_WaitGameplayEvent_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_TargetData_5 = K2Node_CustomEvent_TargetData_5;
	Parms.K2Node_CustomEvent_ApplicationTag_5 = K2Node_CustomEvent_ApplicationTag_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_TargetData_2 = K2Node_CustomEvent_TargetData_2;
	Parms.K2Node_CustomEvent_ApplicationTag_2 = K2Node_CustomEvent_ApplicationTag_2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue = CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue = CallFunc_MakeGameplayCueParameters_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Athena_AIBot_Controller = K2Node_DynamicCast_AsFort_Athena_AIBot_Controller;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_PlayMontageWaitTarget_ReturnValue = CallFunc_PlayMontageWaitTarget_ReturnValue;
	Parms.CallFunc_GetPlayLength_ReturnValue = CallFunc_GetPlayLength_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetActorInfo_ReturnValue = CallFunc_GetActorInfo_ReturnValue;
	Parms.CallFunc_GetGrantedByEffectContext_ReturnValue = CallFunc_GetGrantedByEffectContext_ReturnValue;
	Parms.CallFunc_GetGrantedByEffectContext_ReturnValue_1 = CallFunc_GetGrantedByEffectContext_ReturnValue_1;
	Parms.CallFunc_EffectContextGetEffectCauser_ReturnValue = CallFunc_EffectContextGetEffectCauser_ReturnValue;
	Parms.CallFunc_EffectContextGetEffectCauser_ReturnValue_1 = CallFunc_EffectContextGetEffectCauser_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsAthena_IGive_Sneaky_Snowman = K2Node_DynamicCast_AsAthena_IGive_Sneaky_Snowman;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsAthena_IGive_Sneaky_Snowman_1 = K2Node_DynamicCast_AsAthena_IGive_Sneaky_Snowman_1;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetNewSnowmanTransform_Transform = CallFunc_GetNewSnowmanTransform_Transform;
	Parms.K2Node_DynamicCast_AsAthena_Prop_Sneaky_Snowman_V2 = K2Node_DynamicCast_AsAthena_Prop_Sneaky_Snowman_V2;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_GetGrantedByEffectContext_ReturnValue_2 = CallFunc_GetGrantedByEffectContext_ReturnValue_2;
	Parms.CallFunc_EffectContextGetEffectCauser_ReturnValue_2 = CallFunc_EffectContextGetEffectCauser_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsAthena_IGive_Sneaky_Snowman_2 = K2Node_DynamicCast_AsAthena_IGive_Sneaky_Snowman_2;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.K2Node_DynamicCast_AsAthena_IGive_Sneaky_Snowman_3 = K2Node_DynamicCast_AsAthena_IGive_Sneaky_Snowman_3;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.K2Node_DynamicCast_AsAthena_IGive_Sneaky_Snowman_4 = K2Node_DynamicCast_AsAthena_IGive_Sneaky_Snowman_4;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_K2_RemoveItemFromPlayer_ReturnValue = CallFunc_K2_RemoveItemFromPlayer_ReturnValue;
	Parms.CallFunc_GetNumInStack_ReturnValue = CallFunc_GetNumInStack_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_1 = K2Node_DynamicCast_AsFort_Player_Controller_1;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.CallFunc_K2_RemoveFortItemFromPlayer_ReturnValue = CallFunc_K2_RemoveFortItemFromPlayer_ReturnValue;
	Parms.CallFunc_GetActorInfo_ReturnValue_1 = CallFunc_GetActorInfo_ReturnValue_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.CallFunc_AbilityTargetDataFromActor_ReturnValue = CallFunc_AbilityTargetDataFromActor_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue = CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.K2Node_CustomEvent_PlayerSnowman_1 = K2Node_CustomEvent_PlayerSnowman_1;
	Parms.CallFunc_K2_SetActorRelativeRotation_SweepHitResult = CallFunc_K2_SetActorRelativeRotation_SweepHitResult;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.K2Node_CustomEvent_TargetData_3 = K2Node_CustomEvent_TargetData_3;
	Parms.K2Node_CustomEvent_ApplicationTag_3 = K2Node_CustomEvent_ApplicationTag_3;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_GetGrantedByEffectContext_ReturnValue_3 = CallFunc_GetGrantedByEffectContext_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsAthena_Player_Cool_Carpet = K2Node_DynamicCast_AsAthena_Player_Cool_Carpet;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.CallFunc_EffectContextGetEffectCauser_ReturnValue_3 = CallFunc_EffectContextGetEffectCauser_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsAthena_IGive_Sneaky_Snowman_5 = K2Node_DynamicCast_AsAthena_IGive_Sneaky_Snowman_5;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;
	Parms.CallFunc_GetMaterialInt_MatInt = CallFunc_GetMaterialInt_MatInt;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.K2Node_CustomEvent_PlayerSnowman = K2Node_CustomEvent_PlayerSnowman;
	Parms.CallFunc_K2_CommitAbility_ReturnValue_1 = CallFunc_K2_CommitAbility_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsB_Sneaky_Snowman_V2_Athena_1 = K2Node_DynamicCast_AsB_Sneaky_Snowman_V2_Athena_1;
	Parms.K2Node_DynamicCast_bSuccess_14 = K2Node_DynamicCast_bSuccess_14;
	Parms.CallFunc_GetWeaponData_ReturnValue_1 = CallFunc_GetWeaponData_ReturnValue_1;
	Parms.CallFunc_HasTag_ReturnValue_1 = CallFunc_HasTag_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsB_Sneaky_Snowman_V2_Athena_2 = K2Node_DynamicCast_AsB_Sneaky_Snowman_V2_Athena_2;
	Parms.K2Node_DynamicCast_bSuccess_15 = K2Node_DynamicCast_bSuccess_15;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetWeaponData_ReturnValue_2 = CallFunc_GetWeaponData_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_HasTag_ReturnValue_2 = CallFunc_HasTag_ReturnValue_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsB_Sneaky_Snowman_V2_Athena_3 = K2Node_DynamicCast_AsB_Sneaky_Snowman_V2_Athena_3;
	Parms.K2Node_DynamicCast_bSuccess_16 = K2Node_DynamicCast_bSuccess_16;
	Parms.CallFunc_GetWeaponData_ReturnValue_3 = CallFunc_GetWeaponData_ReturnValue_3;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1 = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1;
	Parms.CallFunc_HasTag_ReturnValue_3 = CallFunc_HasTag_ReturnValue_3;
	Parms.K2Node_CustomEvent_TargetData_4 = K2Node_CustomEvent_TargetData_4;
	Parms.K2Node_CustomEvent_ApplicationTag_4 = K2Node_CustomEvent_ApplicationTag_4;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_2 = CallFunc_FinishSpawningActor_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


