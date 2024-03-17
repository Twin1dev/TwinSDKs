#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_BlockADS.GA_BlockADS_C
// (None)

class UClass* UGA_BlockADS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_BlockADS_C");

	return Clss;
}


// GA_BlockADS_C GA_BlockADS.Default__GA_BlockADS_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_BlockADS_C* UGA_BlockADS_C::GetDefaultObj()
{
	static class UGA_BlockADS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_BlockADS_C*>(UGA_BlockADS_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_BlockADS.GA_BlockADS_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_BlockADS_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_BlockADS_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_BlockADS.GA_BlockADS_C.ExecuteUbergraph_GA_BlockADS
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_BlockADS_C::ExecuteUbergraph_GA_BlockADS(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_BlockADS_C", "ExecuteUbergraph_GA_BlockADS");

	Params::UGA_BlockADS_C_ExecuteUbergraph_GA_BlockADS_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


