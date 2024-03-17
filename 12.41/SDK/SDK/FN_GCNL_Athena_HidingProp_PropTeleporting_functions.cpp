#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCNL_Athena_HidingProp_PropTeleporting.GCNL_Athena_HidingProp_PropTeleporting_C
// (Actor)

class UClass* AGCNL_Athena_HidingProp_PropTeleporting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCNL_Athena_HidingProp_PropTeleporting_C");

	return Clss;
}


// GCNL_Athena_HidingProp_PropTeleporting_C GCNL_Athena_HidingProp_PropTeleporting.Default__GCNL_Athena_HidingProp_PropTeleporting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCNL_Athena_HidingProp_PropTeleporting_C* AGCNL_Athena_HidingProp_PropTeleporting_C::GetDefaultObj()
{
	static class AGCNL_Athena_HidingProp_PropTeleporting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCNL_Athena_HidingProp_PropTeleporting_C*>(AGCNL_Athena_HidingProp_PropTeleporting_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GCNL_Athena_HidingProp_PropTeleporting.GCNL_Athena_HidingProp_PropTeleporting_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AGCNL_Athena_HidingProp_PropTeleporting_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCNL_Athena_HidingProp_PropTeleporting_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GCNL_Athena_HidingProp_PropTeleporting.GCNL_Athena_HidingProp_PropTeleporting_C.ExecuteUbergraph_GCNL_Athena_HidingProp_PropTeleporting
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_Athena_HidingProp_PropTeleporting_C::ExecuteUbergraph_GCNL_Athena_HidingProp_PropTeleporting(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCNL_Athena_HidingProp_PropTeleporting_C", "ExecuteUbergraph_GCNL_Athena_HidingProp_PropTeleporting");

	Params::AGCNL_Athena_HidingProp_PropTeleporting_C_ExecuteUbergraph_GCNL_Athena_HidingProp_PropTeleporting_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


