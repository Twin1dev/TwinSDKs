#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LeaderboardListViewWrapper.LeaderboardListViewWrapper_C
// (None)

class UClass* ULeaderboardListViewWrapper_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeaderboardListViewWrapper_C");

	return Clss;
}


// LeaderboardListViewWrapper_C LeaderboardListViewWrapper.Default__LeaderboardListViewWrapper_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeaderboardListViewWrapper_C* ULeaderboardListViewWrapper_C::GetDefaultObj()
{
	static class ULeaderboardListViewWrapper_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeaderboardListViewWrapper_C*>(ULeaderboardListViewWrapper_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LeaderboardListViewWrapper.LeaderboardListViewWrapper_C.Set Bar Color
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeaderboardListViewWrapper_C::Set_Bar_Color(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LeaderboardListViewWrapper_C", "Set Bar Color");

	Params::ULeaderboardListViewWrapper_C_Set_Bar_Color_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaderboardListViewWrapper.LeaderboardListViewWrapper_C.Set Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      EventId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      EventWindowId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ULeaderboardListViewWrapper_C::Set_Event(const class FString& EventId, const class FString& EventWindowId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LeaderboardListViewWrapper_C", "Set Event");

	Params::ULeaderboardListViewWrapper_C_Set_Event_Params Parms{};

	Parms.EventId = EventId;
	Parms.EventWindowId = EventWindowId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaderboardListViewWrapper.LeaderboardListViewWrapper_C.ExecuteUbergraph_LeaderboardListViewWrapper
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_Color                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_EventId                                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_EventWindowId                                 (ZeroConstructor, HasGetValueTypeHash)

void ULeaderboardListViewWrapper_C::ExecuteUbergraph_LeaderboardListViewWrapper(int32 EntryPoint, const struct FLinearColor& K2Node_CustomEvent_Color, const class FString& K2Node_CustomEvent_EventId, const class FString& K2Node_CustomEvent_EventWindowId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LeaderboardListViewWrapper_C", "ExecuteUbergraph_LeaderboardListViewWrapper");

	Params::ULeaderboardListViewWrapper_C_ExecuteUbergraph_LeaderboardListViewWrapper_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Color = K2Node_CustomEvent_Color;
	Parms.K2Node_CustomEvent_EventId = K2Node_CustomEvent_EventId;
	Parms.K2Node_CustomEvent_EventWindowId = K2Node_CustomEvent_EventWindowId;

	UObject::ProcessEvent(Func, &Parms);

}

}


