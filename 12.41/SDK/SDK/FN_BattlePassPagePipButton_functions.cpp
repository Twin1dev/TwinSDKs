#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BattlePassPagePipButton.BattlePassPagePipButton_C
// (None)

class UClass* UBattlePassPagePipButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattlePassPagePipButton_C");

	return Clss;
}


// BattlePassPagePipButton_C BattlePassPagePipButton.Default__BattlePassPagePipButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattlePassPagePipButton_C* UBattlePassPagePipButton_C::GetDefaultObj()
{
	static class UBattlePassPagePipButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattlePassPagePipButton_C*>(UBattlePassPagePipButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattlePassPagePipButton.BattlePassPagePipButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattlePassPagePipButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassPagePipButton_C", "PreConstruct");

	Params::UBattlePassPagePipButton_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPagePipButton.BattlePassPagePipButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBattlePassPagePipButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassPagePipButton_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePassPagePipButton.BattlePassPagePipButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassPagePipButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassPagePipButton_C", "BP_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePassPagePipButton.BattlePassPagePipButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassPagePipButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassPagePipButton_C", "BP_OnUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePassPagePipButton.BattlePassPagePipButton_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassPagePipButton_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassPagePipButton_C", "BP_OnClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePassPagePipButton.BattlePassPagePipButton_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassPagePipButton_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassPagePipButton_C", "BP_OnSelected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePassPagePipButton.BattlePassPagePipButton_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassPagePipButton_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassPagePipButton_C", "BP_OnDeselected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePassPagePipButton.BattlePassPagePipButton_C.ExecuteUbergraph_BattlePassPagePipButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassPagePipButton_C::ExecuteUbergraph_BattlePassPagePipButton(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassPagePipButton_C", "ExecuteUbergraph_BattlePassPagePipButton");

	Params::UBattlePassPagePipButton_C_ExecuteUbergraph_BattlePassPagePipButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


