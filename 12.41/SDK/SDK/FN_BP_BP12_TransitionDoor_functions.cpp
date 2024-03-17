#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BP12_TransitionDoor.BP_BP12_TransitionDoor_C
// (Actor)

class UClass* ABP_BP12_TransitionDoor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BP12_TransitionDoor_C");

	return Clss;
}


// BP_BP12_TransitionDoor_C BP_BP12_TransitionDoor.Default__BP_BP12_TransitionDoor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BP12_TransitionDoor_C* ABP_BP12_TransitionDoor_C::GetDefaultObj()
{
	static class ABP_BP12_TransitionDoor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BP12_TransitionDoor_C*>(ABP_BP12_TransitionDoor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BP12_TransitionDoor.BP_BP12_TransitionDoor_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_1                    (IsPlainOldData, NoDestructor)

void ABP_BP12_TransitionDoor_C::UserConstructionScript(const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BP12_TransitionDoor_C", "UserConstructionScript");

	Params::ABP_BP12_TransitionDoor_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_1 = CallFunc_K2_GetComponentToWorld_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BP12_TransitionDoor.BP_BP12_TransitionDoor_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_BP12_TransitionDoor_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BP12_TransitionDoor_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BP12_TransitionDoor.BP_BP12_TransitionDoor_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_BP12_TransitionDoor_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BP12_TransitionDoor_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BP12_TransitionDoor.BP_BP12_TransitionDoor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_BP12_TransitionDoor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BP12_TransitionDoor_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BP12_TransitionDoor.BP_BP12_TransitionDoor_C.ExecuteUbergraph_BP_BP12_TransitionDoor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Multiply_RotatorFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_AddLocalRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_BP12_TransitionDoor_C::ExecuteUbergraph_BP_BP12_TransitionDoor(int32 EntryPoint, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FRotator& CallFunc_Multiply_RotatorFloat_ReturnValue, const struct FHitResult& CallFunc_K2_AddLocalRotation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BP12_TransitionDoor_C", "ExecuteUbergraph_BP_BP12_TransitionDoor");

	Params::ABP_BP12_TransitionDoor_C_ExecuteUbergraph_BP_BP12_TransitionDoor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_Multiply_RotatorFloat_ReturnValue = CallFunc_Multiply_RotatorFloat_ReturnValue;
	Parms.CallFunc_K2_AddLocalRotation_SweepHitResult = CallFunc_K2_AddLocalRotation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}

}


