#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ChallengeCountdown_Elevator.ChallengeCountdown_Elevator_C
// (None)

class UClass* UChallengeCountdown_Elevator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChallengeCountdown_Elevator_C");

	return Clss;
}


// ChallengeCountdown_Elevator_C ChallengeCountdown_Elevator.Default__ChallengeCountdown_Elevator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallengeCountdown_Elevator_C* UChallengeCountdown_Elevator_C::GetDefaultObj()
{
	static class UChallengeCountdown_Elevator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallengeCountdown_Elevator_C*>(UChallengeCountdown_Elevator_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ChallengeCountdown_Elevator.ChallengeCountdown_Elevator_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallengeCountdown_Elevator_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeCountdown_Elevator_C", "PreConstruct");

	Params::UChallengeCountdown_Elevator_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeCountdown_Elevator.ChallengeCountdown_Elevator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UChallengeCountdown_Elevator_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeCountdown_Elevator_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChallengeCountdown_Elevator.ChallengeCountdown_Elevator_C.OnChallengeSet
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FTimerDisplayData           DisplayStyle                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UChallengeCountdown_Elevator_C::OnChallengeSet(struct FTimerDisplayData& DisplayStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeCountdown_Elevator_C", "OnChallengeSet");

	Params::UChallengeCountdown_Elevator_C_OnChallengeSet_Params Parms{};

	Parms.DisplayStyle = DisplayStyle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeCountdown_Elevator.ChallengeCountdown_Elevator_C.ExecuteUbergraph_ChallengeCountdown_Elevator
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerDisplayData           K2Node_Event_DisplayStyle                                        (ConstParm)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallengeCountdown_Elevator_C::ExecuteUbergraph_ChallengeCountdown_Elevator(int32 EntryPoint, const struct FTimerDisplayData& K2Node_Event_DisplayStyle, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeCountdown_Elevator_C", "ExecuteUbergraph_ChallengeCountdown_Elevator");

	Params::UChallengeCountdown_Elevator_C_ExecuteUbergraph_ChallengeCountdown_Elevator_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DisplayStyle = K2Node_Event_DisplayStyle;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


