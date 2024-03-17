#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IronDoor_Transition1.BP_IronDoor_Transition1_C
// (Actor)

class UClass* ABP_IronDoor_Transition1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IronDoor_Transition1_C");

	return Clss;
}


// BP_IronDoor_Transition1_C BP_IronDoor_Transition1.Default__BP_IronDoor_Transition1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_IronDoor_Transition1_C* ABP_IronDoor_Transition1_C::GetDefaultObj()
{
	static class ABP_IronDoor_Transition1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_IronDoor_Transition1_C*>(ABP_IronDoor_Transition1_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_IronDoor_Transition1.BP_IronDoor_Transition1_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)

void ABP_IronDoor_Transition1_C::UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IronDoor_Transition1_C", "UserConstructionScript");

	Params::ABP_IronDoor_Transition1_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IronDoor_Transition1.BP_IronDoor_Transition1_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_IronDoor_Transition1_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IronDoor_Transition1_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IronDoor_Transition1.BP_IronDoor_Transition1_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_IronDoor_Transition1_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IronDoor_Transition1_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IronDoor_Transition1.BP_IronDoor_Transition1_C.Timeline_1__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_IronDoor_Transition1_C::Timeline_1__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IronDoor_Transition1_C", "Timeline_1__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IronDoor_Transition1.BP_IronDoor_Transition1_C.Timeline_1__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_IronDoor_Transition1_C::Timeline_1__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IronDoor_Transition1_C", "Timeline_1__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IronDoor_Transition1.BP_IronDoor_Transition1_C.Timeline_2__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_IronDoor_Transition1_C::Timeline_2__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IronDoor_Transition1_C", "Timeline_2__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IronDoor_Transition1.BP_IronDoor_Transition1_C.Timeline_2__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_IronDoor_Transition1_C::Timeline_2__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IronDoor_Transition1_C", "Timeline_2__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IronDoor_Transition1.BP_IronDoor_Transition1_C.Output Camera Position
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IronDoor_Transition1_C::Output_Camera_Position()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IronDoor_Transition1_C", "Output Camera Position");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IronDoor_Transition1.BP_IronDoor_Transition1_C.Open Doors
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IronDoor_Transition1_C::Open_Doors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IronDoor_Transition1_C", "Open Doors");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IronDoor_Transition1.BP_IronDoor_Transition1_C.CloseDoors
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IronDoor_Transition1_C::CloseDoors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IronDoor_Transition1_C", "CloseDoors");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IronDoor_Transition1.BP_IronDoor_Transition1_C.StartMoveUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IronDoor_Transition1_C::StartMoveUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IronDoor_Transition1_C", "StartMoveUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IronDoor_Transition1.BP_IronDoor_Transition1_C.StopMoveUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IronDoor_Transition1_C::StopMoveUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IronDoor_Transition1_C", "StopMoveUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IronDoor_Transition1.BP_IronDoor_Transition1_C.StartMoveDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IronDoor_Transition1_C::StartMoveDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IronDoor_Transition1_C", "StartMoveDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IronDoor_Transition1.BP_IronDoor_Transition1_C.StopMoveDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IronDoor_Transition1_C::StopMoveDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IronDoor_Transition1_C", "StopMoveDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IronDoor_Transition1.BP_IronDoor_Transition1_C.OpenInstant
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IronDoor_Transition1_C::OpenInstant()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IronDoor_Transition1_C", "OpenInstant");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IronDoor_Transition1.BP_IronDoor_Transition1_C.CloseInstant
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IronDoor_Transition1_C::CloseInstant()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IronDoor_Transition1_C", "CloseInstant");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IronDoor_Transition1.BP_IronDoor_Transition1_C.ExecuteUbergraph_BP_IronDoor_Transition1
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)

void ABP_IronDoor_Transition1_C::ExecuteUbergraph_BP_IronDoor_Transition1(int32 EntryPoint, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IronDoor_Transition1_C", "ExecuteUbergraph_BP_IronDoor_Transition1");

	Params::ABP_IronDoor_Transition1_C_ExecuteUbergraph_BP_IronDoor_Transition1_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


