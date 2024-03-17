#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DailyChallengeRerollButton.DailyChallengeRerollButton_C
// (None)

class UClass* UDailyChallengeRerollButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DailyChallengeRerollButton_C");

	return Clss;
}


// DailyChallengeRerollButton_C DailyChallengeRerollButton.Default__DailyChallengeRerollButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDailyChallengeRerollButton_C* UDailyChallengeRerollButton_C::GetDefaultObj()
{
	static class UDailyChallengeRerollButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDailyChallengeRerollButton_C*>(UDailyChallengeRerollButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DailyChallengeRerollButton.DailyChallengeRerollButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UDailyChallengeRerollButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DailyChallengeRerollButton_C", "BP_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DailyChallengeRerollButton.DailyChallengeRerollButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UDailyChallengeRerollButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DailyChallengeRerollButton_C", "BP_OnUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DailyChallengeRerollButton.DailyChallengeRerollButton_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UDailyChallengeRerollButton_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DailyChallengeRerollButton_C", "BP_OnClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DailyChallengeRerollButton.DailyChallengeRerollButton_C.ExecuteUbergraph_DailyChallengeRerollButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDailyChallengeRerollButton_C::ExecuteUbergraph_DailyChallengeRerollButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DailyChallengeRerollButton_C", "ExecuteUbergraph_DailyChallengeRerollButton");

	Params::UDailyChallengeRerollButton_C_ExecuteUbergraph_DailyChallengeRerollButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


