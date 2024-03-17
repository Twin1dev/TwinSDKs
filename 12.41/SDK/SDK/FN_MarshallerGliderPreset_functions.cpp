#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MarshallerGliderPreset.MarshallerGliderPreset_C
// (None)

class UClass* UMarshallerGliderPreset_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MarshallerGliderPreset_C");

	return Clss;
}


// MarshallerGliderPreset_C MarshallerGliderPreset.Default__MarshallerGliderPreset_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMarshallerGliderPreset_C* UMarshallerGliderPreset_C::GetDefaultObj()
{
	static class UMarshallerGliderPreset_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMarshallerGliderPreset_C*>(UMarshallerGliderPreset_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MarshallerGliderPreset.MarshallerGliderPreset_C.ExecuteUbergraph_MarshallerGliderPreset
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMarshallerGliderPreset_C::ExecuteUbergraph_MarshallerGliderPreset(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarshallerGliderPreset_C", "ExecuteUbergraph_MarshallerGliderPreset");

	Params::UMarshallerGliderPreset_C_ExecuteUbergraph_MarshallerGliderPreset_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


