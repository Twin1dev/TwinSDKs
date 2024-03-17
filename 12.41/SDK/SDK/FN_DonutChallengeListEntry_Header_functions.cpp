#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DonutChallengeListEntry_Header.DonutChallengeListEntry_Header_C
// (None)

class UClass* UDonutChallengeListEntry_Header_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DonutChallengeListEntry_Header_C");

	return Clss;
}


// DonutChallengeListEntry_Header_C DonutChallengeListEntry_Header.Default__DonutChallengeListEntry_Header_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDonutChallengeListEntry_Header_C* UDonutChallengeListEntry_Header_C::GetDefaultObj()
{
	static class UDonutChallengeListEntry_Header_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDonutChallengeListEntry_Header_C*>(UDonutChallengeListEntry_Header_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DonutChallengeListEntry_Header.DonutChallengeListEntry_Header_C.BPUpdateTitle
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              InWeek                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDonutChallengeListEntry_Header_C::BPUpdateTitle(int32 InWeek)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DonutChallengeListEntry_Header_C", "BPUpdateTitle");

	Params::UDonutChallengeListEntry_Header_C_BPUpdateTitle_Params Parms{};

	Parms.InWeek = InWeek;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DonutChallengeListEntry_Header.DonutChallengeListEntry_Header_C.ExecuteUbergraph_DonutChallengeListEntry_Header
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_InWeek                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UDonutChallengeListEntry_Header_C::ExecuteUbergraph_DonutChallengeListEntry_Header(int32 EntryPoint, int32 K2Node_Event_InWeek, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DonutChallengeListEntry_Header_C", "ExecuteUbergraph_DonutChallengeListEntry_Header");

	Params::UDonutChallengeListEntry_Header_C_ExecuteUbergraph_DonutChallengeListEntry_Header_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_InWeek = K2Node_Event_InWeek;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


