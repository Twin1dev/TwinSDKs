#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Prj_Athena_CoolCarpet.B_Prj_Athena_CoolCarpet_C
// (Actor)

class UClass* AB_Prj_Athena_CoolCarpet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Prj_Athena_CoolCarpet_C");

	return Clss;
}


// B_Prj_Athena_CoolCarpet_C B_Prj_Athena_CoolCarpet.Default__B_Prj_Athena_CoolCarpet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Prj_Athena_CoolCarpet_C* AB_Prj_Athena_CoolCarpet_C::GetDefaultObj()
{
	static class AB_Prj_Athena_CoolCarpet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Prj_Athena_CoolCarpet_C*>(AB_Prj_Athena_CoolCarpet_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_Prj_Athena_CoolCarpet.B_Prj_Athena_CoolCarpet_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Prj_Athena_CoolCarpet_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Prj_Athena_CoolCarpet_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Prj_Athena_CoolCarpet.B_Prj_Athena_CoolCarpet_C.ExecuteUbergraph_B_Prj_Athena_CoolCarpet
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Athena_CoolCarpet_C::ExecuteUbergraph_B_Prj_Athena_CoolCarpet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Prj_Athena_CoolCarpet_C", "ExecuteUbergraph_B_Prj_Athena_CoolCarpet");

	Params::AB_Prj_Athena_CoolCarpet_C_ExecuteUbergraph_B_Prj_Athena_CoolCarpet_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


