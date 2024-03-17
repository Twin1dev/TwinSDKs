#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DailyChallengeStickyNoteWidget.DailyChallengeStickyNoteWidget_C
// (None)

class UClass* UDailyChallengeStickyNoteWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DailyChallengeStickyNoteWidget_C");

	return Clss;
}


// DailyChallengeStickyNoteWidget_C DailyChallengeStickyNoteWidget.Default__DailyChallengeStickyNoteWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDailyChallengeStickyNoteWidget_C* UDailyChallengeStickyNoteWidget_C::GetDefaultObj()
{
	static class UDailyChallengeStickyNoteWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDailyChallengeStickyNoteWidget_C*>(UDailyChallengeStickyNoteWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DailyChallengeStickyNoteWidget.DailyChallengeStickyNoteWidget_C.HandleHasChallengeUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bHasChallenge                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default_1                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDailyChallengeStickyNoteWidget_C::HandleHasChallengeUpdated(bool bHasChallenge, bool Temp_bool_Variable, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, class UWidget* K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DailyChallengeStickyNoteWidget_C", "HandleHasChallengeUpdated");

	Params::UDailyChallengeStickyNoteWidget_C_HandleHasChallengeUpdated_Params Parms{};

	Parms.bHasChallenge = bHasChallenge;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DailyChallengeStickyNoteWidget.DailyChallengeStickyNoteWidget_C.OnReplaceConfirmationClosed
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bAcceptedReroll                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDailyChallengeStickyNoteWidget_C::OnReplaceConfirmationClosed(bool bAcceptedReroll)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DailyChallengeStickyNoteWidget_C", "OnReplaceConfirmationClosed");

	Params::UDailyChallengeStickyNoteWidget_C_OnReplaceConfirmationClosed_Params Parms{};

	Parms.bAcceptedReroll = bAcceptedReroll;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DailyChallengeStickyNoteWidget.DailyChallengeStickyNoteWidget_C.OnHasChallengeUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bHasAssignedChallenge                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDailyChallengeStickyNoteWidget_C::OnHasChallengeUpdated(bool bHasAssignedChallenge)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DailyChallengeStickyNoteWidget_C", "OnHasChallengeUpdated");

	Params::UDailyChallengeStickyNoteWidget_C_OnHasChallengeUpdated_Params Parms{};

	Parms.bHasAssignedChallenge = bHasAssignedChallenge;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DailyChallengeStickyNoteWidget.DailyChallengeStickyNoteWidget_C.ExecuteUbergraph_DailyChallengeStickyNoteWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bHasAssignedChallenge                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bAcceptedReroll                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDailyChallengeStickyNoteWidget_C::ExecuteUbergraph_DailyChallengeStickyNoteWidget(int32 EntryPoint, bool K2Node_Event_bHasAssignedChallenge, bool K2Node_Event_bAcceptedReroll)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DailyChallengeStickyNoteWidget_C", "ExecuteUbergraph_DailyChallengeStickyNoteWidget");

	Params::UDailyChallengeStickyNoteWidget_C_ExecuteUbergraph_DailyChallengeStickyNoteWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bHasAssignedChallenge = K2Node_Event_bHasAssignedChallenge;
	Parms.K2Node_Event_bAcceptedReroll = K2Node_Event_bAcceptedReroll;

	UObject::ProcessEvent(Func, &Parms);

}

}


