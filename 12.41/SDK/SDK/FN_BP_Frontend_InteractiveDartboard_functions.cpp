#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Frontend_InteractiveDartboard.BP_Frontend_InteractiveDartboard_C
// (Actor)

class UClass* ABP_Frontend_InteractiveDartboard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Frontend_InteractiveDartboard_C");

	return Clss;
}


// BP_Frontend_InteractiveDartboard_C BP_Frontend_InteractiveDartboard.Default__BP_Frontend_InteractiveDartboard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Frontend_InteractiveDartboard_C* ABP_Frontend_InteractiveDartboard_C::GetDefaultObj()
{
	static class ABP_Frontend_InteractiveDartboard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Frontend_InteractiveDartboard_C*>(ABP_Frontend_InteractiveDartboard_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Frontend_InteractiveDartboard.BP_Frontend_InteractiveDartboard_C.CanCommitNavigationRequest
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_Frontend_InteractiveDartboard_C::CanCommitNavigationRequest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_InteractiveDartboard_C", "CanCommitNavigationRequest");

	Params::ABP_Frontend_InteractiveDartboard_C_CanCommitNavigationRequest_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Frontend_InteractiveDartboard.BP_Frontend_InteractiveDartboard_C.AnimateDart__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Frontend_InteractiveDartboard_C::AnimateDart__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_InteractiveDartboard_C", "AnimateDart__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_InteractiveDartboard.BP_Frontend_InteractiveDartboard_C.AnimateDart__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Frontend_InteractiveDartboard_C::AnimateDart__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_InteractiveDartboard_C", "AnimateDart__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_InteractiveDartboard.BP_Frontend_InteractiveDartboard_C.AnimateDart__DisableFX__EventFunc
// (BlueprintEvent)
// Parameters:

void ABP_Frontend_InteractiveDartboard_C::AnimateDart__DisableFX__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_InteractiveDartboard_C", "AnimateDart__DisableFX__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_InteractiveDartboard.BP_Frontend_InteractiveDartboard_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Frontend_InteractiveDartboard_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_InteractiveDartboard_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_InteractiveDartboard.BP_Frontend_InteractiveDartboard_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Frontend_InteractiveDartboard_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_InteractiveDartboard_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_InteractiveDartboard.BP_Frontend_InteractiveDartboard_C.Timeline_0__DisableFX__EventFunc
// (BlueprintEvent)
// Parameters:

void ABP_Frontend_InteractiveDartboard_C::Timeline_0__DisableFX__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_InteractiveDartboard_C", "Timeline_0__DisableFX__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_InteractiveDartboard.BP_Frontend_InteractiveDartboard_C.Timeline_1__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Frontend_InteractiveDartboard_C::Timeline_1__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_InteractiveDartboard_C", "Timeline_1__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_InteractiveDartboard.BP_Frontend_InteractiveDartboard_C.Timeline_1__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Frontend_InteractiveDartboard_C::Timeline_1__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_InteractiveDartboard_C", "Timeline_1__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_InteractiveDartboard.BP_Frontend_InteractiveDartboard_C.Timeline_1__DisableFX__EventFunc
// (BlueprintEvent)
// Parameters:

void ABP_Frontend_InteractiveDartboard_C::Timeline_1__DisableFX__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_InteractiveDartboard_C", "Timeline_1__DisableFX__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_InteractiveDartboard.BP_Frontend_InteractiveDartboard_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Frontend_InteractiveDartboard_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_InteractiveDartboard_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_InteractiveDartboard.BP_Frontend_InteractiveDartboard_C.Commit_OnSpecialInteraction
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Frontend_InteractiveDartboard_C::Commit_OnSpecialInteraction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_InteractiveDartboard_C", "Commit_OnSpecialInteraction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_InteractiveDartboard.BP_Frontend_InteractiveDartboard_C.HandleObjectSpecialInteraction
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGameplayTag                ActionTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CameraTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_Frontend_InteractiveDartboard_C::HandleObjectSpecialInteraction(const struct FGameplayTag& ActionTag, const struct FGameplayTag& CameraTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_InteractiveDartboard_C", "HandleObjectSpecialInteraction");

	Params::ABP_Frontend_InteractiveDartboard_C_HandleObjectSpecialInteraction_Params Parms{};

	Parms.ActionTag = ActionTag;
	Parms.CameraTag = CameraTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frontend_InteractiveDartboard.BP_Frontend_InteractiveDartboard_C.ResetAll
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Frontend_InteractiveDartboard_C::ResetAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_InteractiveDartboard_C", "ResetAll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_InteractiveDartboard.BP_Frontend_InteractiveDartboard_C.ExecuteUbergraph_BP_Frontend_InteractiveDartboard
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Event_ActionTag                                           (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Event_CameraTag                                           (NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult_1                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult_2                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_VLerp_ReturnValue_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult_3                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult_4                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult_5                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Frontend_InteractiveDartboard_C::ExecuteUbergraph_BP_Frontend_InteractiveDartboard(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FGameplayTag& K2Node_Event_ActionTag, const struct FGameplayTag& K2Node_Event_CameraTag, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_1, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue_2, const struct FVector& CallFunc_VLerp_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_2, const struct FVector& CallFunc_VLerp_ReturnValue_2, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_3, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_4, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_5, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_InteractiveDartboard_C", "ExecuteUbergraph_BP_Frontend_InteractiveDartboard");

	Params::ABP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_Event_ActionTag = K2Node_Event_ActionTag;
	Parms.K2Node_Event_CameraTag = K2Node_Event_CameraTag;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult_1 = CallFunc_K2_SetRelativeLocation_SweepHitResult_1;
	Parms.CallFunc_SpawnSound2D_ReturnValue_1 = CallFunc_SpawnSound2D_ReturnValue_1;
	Parms.CallFunc_SpawnSound2D_ReturnValue_2 = CallFunc_SpawnSound2D_ReturnValue_2;
	Parms.CallFunc_VLerp_ReturnValue_1 = CallFunc_VLerp_ReturnValue_1;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult_2 = CallFunc_K2_SetRelativeLocation_SweepHitResult_2;
	Parms.CallFunc_VLerp_ReturnValue_2 = CallFunc_VLerp_ReturnValue_2;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult_3 = CallFunc_K2_SetRelativeLocation_SweepHitResult_3;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult_4 = CallFunc_K2_SetRelativeLocation_SweepHitResult_4;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult_5 = CallFunc_K2_SetRelativeLocation_SweepHitResult_5;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


