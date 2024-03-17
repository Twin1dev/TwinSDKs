#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_CameraLens_Invulnerable.B_CameraLens_Invulnerable_C
// (Actor)

class UClass* AB_CameraLens_Invulnerable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_CameraLens_Invulnerable_C");

	return Clss;
}


// B_CameraLens_Invulnerable_C B_CameraLens_Invulnerable.Default__B_CameraLens_Invulnerable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_CameraLens_Invulnerable_C* AB_CameraLens_Invulnerable_C::GetDefaultObj()
{
	static class AB_CameraLens_Invulnerable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_CameraLens_Invulnerable_C*>(AB_CameraLens_Invulnerable_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_CameraLens_Invulnerable.B_CameraLens_Invulnerable_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_CameraLens_Invulnerable_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CameraLens_Invulnerable_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_CameraLens_Invulnerable.B_CameraLens_Invulnerable_C.ExecuteUbergraph_B_CameraLens_Invulnerable
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_CameraLens_Invulnerable_C::ExecuteUbergraph_B_CameraLens_Invulnerable(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CameraLens_Invulnerable_C", "ExecuteUbergraph_B_CameraLens_Invulnerable");

	Params::AB_CameraLens_Invulnerable_C_ExecuteUbergraph_B_CameraLens_Invulnerable_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


