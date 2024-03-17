#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SpatialHenchmanFactionComplete.SpatialHenchmanFactionComplete_C
// (None)

class UClass* USpatialHenchmanFactionComplete_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpatialHenchmanFactionComplete_C");

	return Clss;
}


// SpatialHenchmanFactionComplete_C SpatialHenchmanFactionComplete.Default__SpatialHenchmanFactionComplete_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USpatialHenchmanFactionComplete_C* USpatialHenchmanFactionComplete_C::GetDefaultObj()
{
	static class USpatialHenchmanFactionComplete_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USpatialHenchmanFactionComplete_C*>(USpatialHenchmanFactionComplete_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SpatialHenchmanFactionComplete.SpatialHenchmanFactionComplete_C.InitCompletedInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsAlter                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItemDefinition*         RewardItem                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpatialHenchmanFactionComplete_C::InitCompletedInfo(bool bIsAlter, class UFortItemDefinition* RewardItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialHenchmanFactionComplete_C", "InitCompletedInfo");

	Params::USpatialHenchmanFactionComplete_C_InitCompletedInfo_Params Parms{};

	Parms.bIsAlter = bIsAlter;
	Parms.RewardItem = RewardItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpatialHenchmanFactionComplete.SpatialHenchmanFactionComplete_C.ExecuteUbergraph_SpatialHenchmanFactionComplete
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bIsAlter                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItemDefinition*         K2Node_CustomEvent_RewardItem                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void USpatialHenchmanFactionComplete_C::ExecuteUbergraph_SpatialHenchmanFactionComplete(int32 EntryPoint, bool Temp_bool_Variable, bool K2Node_CustomEvent_bIsAlter, class UFortItemDefinition* K2Node_CustomEvent_RewardItem, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialHenchmanFactionComplete_C", "ExecuteUbergraph_SpatialHenchmanFactionComplete");

	Params::USpatialHenchmanFactionComplete_C_ExecuteUbergraph_SpatialHenchmanFactionComplete_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CustomEvent_bIsAlter = K2Node_CustomEvent_bIsAlter;
	Parms.K2Node_CustomEvent_RewardItem = K2Node_CustomEvent_RewardItem;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


