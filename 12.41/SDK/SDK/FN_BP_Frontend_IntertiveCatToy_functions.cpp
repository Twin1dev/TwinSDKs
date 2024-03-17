#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Frontend_IntertiveCatToy.BP_Frontend_IntertiveCatToy_C
// (Actor)

class UClass* ABP_Frontend_IntertiveCatToy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Frontend_IntertiveCatToy_C");

	return Clss;
}


// BP_Frontend_IntertiveCatToy_C BP_Frontend_IntertiveCatToy.Default__BP_Frontend_IntertiveCatToy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Frontend_IntertiveCatToy_C* ABP_Frontend_IntertiveCatToy_C::GetDefaultObj()
{
	static class ABP_Frontend_IntertiveCatToy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Frontend_IntertiveCatToy_C*>(ABP_Frontend_IntertiveCatToy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Frontend_IntertiveCatToy.BP_Frontend_IntertiveCatToy_C.CanCommitNavigationRequest
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_Frontend_IntertiveCatToy_C::CanCommitNavigationRequest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_IntertiveCatToy_C", "CanCommitNavigationRequest");

	Params::ABP_Frontend_IntertiveCatToy_C_CanCommitNavigationRequest_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Frontend_IntertiveCatToy.BP_Frontend_IntertiveCatToy_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Frontend_IntertiveCatToy_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_IntertiveCatToy_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_IntertiveCatToy.BP_Frontend_IntertiveCatToy_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Frontend_IntertiveCatToy_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_IntertiveCatToy_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_IntertiveCatToy.BP_Frontend_IntertiveCatToy_C.Timeline_2__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Frontend_IntertiveCatToy_C::Timeline_2__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_IntertiveCatToy_C", "Timeline_2__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_IntertiveCatToy.BP_Frontend_IntertiveCatToy_C.Timeline_2__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Frontend_IntertiveCatToy_C::Timeline_2__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_IntertiveCatToy_C", "Timeline_2__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_IntertiveCatToy.BP_Frontend_IntertiveCatToy_C.Push3__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Frontend_IntertiveCatToy_C::Push3__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_IntertiveCatToy_C", "Push3__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_IntertiveCatToy.BP_Frontend_IntertiveCatToy_C.Push3__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Frontend_IntertiveCatToy_C::Push3__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_IntertiveCatToy_C", "Push3__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_IntertiveCatToy.BP_Frontend_IntertiveCatToy_C.Timeline_3__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Frontend_IntertiveCatToy_C::Timeline_3__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_IntertiveCatToy_C", "Timeline_3__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_IntertiveCatToy.BP_Frontend_IntertiveCatToy_C.Timeline_3__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Frontend_IntertiveCatToy_C::Timeline_3__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_IntertiveCatToy_C", "Timeline_3__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_IntertiveCatToy.BP_Frontend_IntertiveCatToy_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Frontend_IntertiveCatToy_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_IntertiveCatToy_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_IntertiveCatToy.BP_Frontend_IntertiveCatToy_C.Commit_OnSpecialInteraction
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Frontend_IntertiveCatToy_C::Commit_OnSpecialInteraction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_IntertiveCatToy_C", "Commit_OnSpecialInteraction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_IntertiveCatToy.BP_Frontend_IntertiveCatToy_C.HandleObjectSpecialInteraction
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGameplayTag                ActionTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CameraTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_Frontend_IntertiveCatToy_C::HandleObjectSpecialInteraction(const struct FGameplayTag& ActionTag, const struct FGameplayTag& CameraTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_IntertiveCatToy_C", "HandleObjectSpecialInteraction");

	Params::ABP_Frontend_IntertiveCatToy_C_HandleObjectSpecialInteraction_Params Parms{};

	Parms.ActionTag = ActionTag;
	Parms.CameraTag = CameraTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frontend_IntertiveCatToy.BP_Frontend_IntertiveCatToy_C.ExecuteUbergraph_BP_Frontend_IntertiveCatToy
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_RLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_RLerp_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_RLerp_ReturnValue_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_RLerp_ReturnValue_3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Event_ActionTag                                           (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Event_CameraTag                                           (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult        (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_VLerp_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_1      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_VLerp_ReturnValue_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_2      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_VLerp_ReturnValue_3                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_3      (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_Frontend_IntertiveCatToy_C::ExecuteUbergraph_BP_Frontend_IntertiveCatToy(int32 EntryPoint, const struct FRotator& CallFunc_RLerp_ReturnValue, const struct FRotator& CallFunc_RLerp_ReturnValue_1, const struct FRotator& CallFunc_RLerp_ReturnValue_2, const struct FRotator& CallFunc_RLerp_ReturnValue_3, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, const struct FGameplayTag& K2Node_Event_ActionTag, const struct FGameplayTag& K2Node_Event_CameraTag, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult, const struct FVector& CallFunc_VLerp_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_1, const struct FVector& CallFunc_VLerp_ReturnValue_2, const struct FHitResult& CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_2, const struct FVector& CallFunc_VLerp_ReturnValue_3, const struct FHitResult& CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_IntertiveCatToy_C", "ExecuteUbergraph_BP_Frontend_IntertiveCatToy");

	Params::ABP_Frontend_IntertiveCatToy_C_ExecuteUbergraph_BP_Frontend_IntertiveCatToy_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RLerp_ReturnValue = CallFunc_RLerp_ReturnValue;
	Parms.CallFunc_RLerp_ReturnValue_1 = CallFunc_RLerp_ReturnValue_1;
	Parms.CallFunc_RLerp_ReturnValue_2 = CallFunc_RLerp_ReturnValue_2;
	Parms.CallFunc_RLerp_ReturnValue_3 = CallFunc_RLerp_ReturnValue_3;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.K2Node_Event_ActionTag = K2Node_Event_ActionTag;
	Parms.K2Node_Event_CameraTag = K2Node_Event_CameraTag;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;
	Parms.CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult = CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult;
	Parms.CallFunc_VLerp_ReturnValue_1 = CallFunc_VLerp_ReturnValue_1;
	Parms.CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_1 = CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_1;
	Parms.CallFunc_VLerp_ReturnValue_2 = CallFunc_VLerp_ReturnValue_2;
	Parms.CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_2 = CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_2;
	Parms.CallFunc_VLerp_ReturnValue_3 = CallFunc_VLerp_ReturnValue_3;
	Parms.CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_3 = CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frontend_IntertiveCatToy.BP_Frontend_IntertiveCatToy_C.FinalPushDone__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Frontend_IntertiveCatToy_C::FinalPushDone__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_IntertiveCatToy_C", "FinalPushDone__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


