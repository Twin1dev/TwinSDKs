#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SpatialFaction_SwapButton.SpatialFaction_SwapButton_C
// (None)

class UClass* USpatialFaction_SwapButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpatialFaction_SwapButton_C");

	return Clss;
}


// SpatialFaction_SwapButton_C SpatialFaction_SwapButton.Default__SpatialFaction_SwapButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USpatialFaction_SwapButton_C* USpatialFaction_SwapButton_C::GetDefaultObj()
{
	static class USpatialFaction_SwapButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USpatialFaction_SwapButton_C*>(USpatialFaction_SwapButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SpatialFaction_SwapButton.SpatialFaction_SwapButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void USpatialFaction_SwapButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialFaction_SwapButton_C", "BP_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpatialFaction_SwapButton.SpatialFaction_SwapButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void USpatialFaction_SwapButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialFaction_SwapButton_C", "BP_OnUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpatialFaction_SwapButton.SpatialFaction_SwapButton_C.Go Up
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USpatialFaction_SwapButton_C::Go_Up()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialFaction_SwapButton_C", "Go Up");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpatialFaction_SwapButton.SpatialFaction_SwapButton_C.Go Down
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USpatialFaction_SwapButton_C::Go_Down()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialFaction_SwapButton_C", "Go Down");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpatialFaction_SwapButton.SpatialFaction_SwapButton_C.ExecuteUbergraph_SpatialFaction_SwapButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpatialFaction_SwapButton_C::ExecuteUbergraph_SpatialFaction_SwapButton(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialFaction_SwapButton_C", "ExecuteUbergraph_SpatialFaction_SwapButton");

	Params::USpatialFaction_SwapButton_C_ExecuteUbergraph_SpatialFaction_SwapButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue_1 = CallFunc_PlayAnimationReverse_ReturnValue_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


