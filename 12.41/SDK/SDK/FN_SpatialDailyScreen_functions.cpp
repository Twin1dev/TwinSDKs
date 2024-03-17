#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SpatialDailyScreen.SpatialDailyScreen_C
// (None)

class UClass* USpatialDailyScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpatialDailyScreen_C");

	return Clss;
}


// SpatialDailyScreen_C SpatialDailyScreen.Default__SpatialDailyScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USpatialDailyScreen_C* USpatialDailyScreen_C::GetDefaultObj()
{
	static class USpatialDailyScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USpatialDailyScreen_C*>(USpatialDailyScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SpatialDailyScreen.SpatialDailyScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USpatialDailyScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialDailyScreen_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpatialDailyScreen.SpatialDailyScreen_C.ExecuteUbergraph_SpatialDailyScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpatialDailyScreen_C::ExecuteUbergraph_SpatialDailyScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialDailyScreen_C", "ExecuteUbergraph_SpatialDailyScreen");

	Params::USpatialDailyScreen_C_ExecuteUbergraph_SpatialDailyScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


