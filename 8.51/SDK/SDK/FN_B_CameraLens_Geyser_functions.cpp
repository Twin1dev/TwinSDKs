#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_CameraLens_Geyser.B_CameraLens_Geyser_C
// (Actor)

class UClass* AB_CameraLens_Geyser_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_CameraLens_Geyser_C");

	return Clss;
}


// B_CameraLens_Geyser_C B_CameraLens_Geyser.Default__B_CameraLens_Geyser_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_CameraLens_Geyser_C* AB_CameraLens_Geyser_C::GetDefaultObj()
{
	static class AB_CameraLens_Geyser_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_CameraLens_Geyser_C*>(AB_CameraLens_Geyser_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_CameraLens_Geyser.B_CameraLens_Geyser_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_CameraLens_Geyser_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CameraLens_Geyser_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_CameraLens_Geyser.B_CameraLens_Geyser_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_CameraLens_Geyser_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CameraLens_Geyser_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_CameraLens_Geyser.B_CameraLens_Geyser_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_CameraLens_Geyser_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CameraLens_Geyser_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_CameraLens_Geyser.B_CameraLens_Geyser_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_CameraLens_Geyser_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CameraLens_Geyser_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_CameraLens_Geyser.B_CameraLens_Geyser_C.ExecuteUbergraph_B_CameraLens_Geyser
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRenderingDetailMode_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_CameraLens_Geyser_C::ExecuteUbergraph_B_CameraLens_Geyser(int32 EntryPoint, int32 CallFunc_GetRenderingDetailMode_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CameraLens_Geyser_C", "ExecuteUbergraph_B_CameraLens_Geyser");

	Params::AB_CameraLens_Geyser_C_ExecuteUbergraph_B_CameraLens_Geyser_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetRenderingDetailMode_ReturnValue = CallFunc_GetRenderingDetailMode_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


