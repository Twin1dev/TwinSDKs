#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Elevator_Transition.BP_Elevator_Transition_C
// (Actor)

class UClass* ABP_Elevator_Transition_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Elevator_Transition_C");

	return Clss;
}


// BP_Elevator_Transition_C BP_Elevator_Transition.Default__BP_Elevator_Transition_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Elevator_Transition_C* ABP_Elevator_Transition_C::GetDefaultObj()
{
	static class ABP_Elevator_Transition_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Elevator_Transition_C*>(ABP_Elevator_Transition_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Elevator_Transition.BP_Elevator_Transition_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Elevator_Transition_C::UserConstructionScript(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Elevator_Transition_C", "UserConstructionScript");

	Params::ABP_Elevator_Transition_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Elevator_Transition.BP_Elevator_Transition_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Elevator_Transition_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Elevator_Transition_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Elevator_Transition.BP_Elevator_Transition_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Elevator_Transition_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Elevator_Transition_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Elevator_Transition.BP_Elevator_Transition_C.Timeline_1__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Elevator_Transition_C::Timeline_1__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Elevator_Transition_C", "Timeline_1__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Elevator_Transition.BP_Elevator_Transition_C.Timeline_1__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Elevator_Transition_C::Timeline_1__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Elevator_Transition_C", "Timeline_1__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Elevator_Transition.BP_Elevator_Transition_C.Timeline_2__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Elevator_Transition_C::Timeline_2__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Elevator_Transition_C", "Timeline_2__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Elevator_Transition.BP_Elevator_Transition_C.Timeline_2__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Elevator_Transition_C::Timeline_2__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Elevator_Transition_C", "Timeline_2__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Elevator_Transition.BP_Elevator_Transition_C.Output Camera Position
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Elevator_Transition_C::Output_Camera_Position()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Elevator_Transition_C", "Output Camera Position");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Elevator_Transition.BP_Elevator_Transition_C.Open Doors
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Elevator_Transition_C::Open_Doors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Elevator_Transition_C", "Open Doors");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Elevator_Transition.BP_Elevator_Transition_C.CloseDoors
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Elevator_Transition_C::CloseDoors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Elevator_Transition_C", "CloseDoors");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Elevator_Transition.BP_Elevator_Transition_C.StartMoveUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Elevator_Transition_C::StartMoveUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Elevator_Transition_C", "StartMoveUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Elevator_Transition.BP_Elevator_Transition_C.StopMoveUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Elevator_Transition_C::StopMoveUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Elevator_Transition_C", "StopMoveUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Elevator_Transition.BP_Elevator_Transition_C.StartMoveDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Elevator_Transition_C::StartMoveDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Elevator_Transition_C", "StartMoveDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Elevator_Transition.BP_Elevator_Transition_C.StopMoveDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Elevator_Transition_C::StopMoveDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Elevator_Transition_C", "StopMoveDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Elevator_Transition.BP_Elevator_Transition_C.OpenInstant
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Elevator_Transition_C::OpenInstant()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Elevator_Transition_C", "OpenInstant");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Elevator_Transition.BP_Elevator_Transition_C.CloseInstant
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Elevator_Transition_C::CloseInstant()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Elevator_Transition_C", "CloseInstant");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Elevator_Transition.BP_Elevator_Transition_C.ExecuteUbergraph_BP_Elevator_Transition
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Elevator_Transition_C::ExecuteUbergraph_BP_Elevator_Transition(int32 EntryPoint, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Elevator_Transition_C", "ExecuteUbergraph_BP_Elevator_Transition");

	Params::ABP_Elevator_Transition_C_ExecuteUbergraph_BP_Elevator_Transition_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.CallFunc_SpawnSound2D_ReturnValue_1 = CallFunc_SpawnSound2D_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


