#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SpatialFactionComingSoonScreen.SpatialFactionComingSoonScreen_C
// (None)

class UClass* USpatialFactionComingSoonScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpatialFactionComingSoonScreen_C");

	return Clss;
}


// SpatialFactionComingSoonScreen_C SpatialFactionComingSoonScreen.Default__SpatialFactionComingSoonScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USpatialFactionComingSoonScreen_C* USpatialFactionComingSoonScreen_C::GetDefaultObj()
{
	static class USpatialFactionComingSoonScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USpatialFactionComingSoonScreen_C*>(USpatialFactionComingSoonScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SpatialFactionComingSoonScreen.SpatialFactionComingSoonScreen_C.OnActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USpatialFactionComingSoonScreen_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialFactionComingSoonScreen_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpatialFactionComingSoonScreen.SpatialFactionComingSoonScreen_C.ExecuteUbergraph_SpatialFactionComingSoonScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpatialFactionComingSoonScreen_C::ExecuteUbergraph_SpatialFactionComingSoonScreen(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialFactionComingSoonScreen_C", "ExecuteUbergraph_SpatialFactionComingSoonScreen");

	Params::USpatialFactionComingSoonScreen_C_ExecuteUbergraph_SpatialFactionComingSoonScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


