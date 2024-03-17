#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SpatialHenchmanFactionDetails.SpatialHenchmanFactionDetails_C
// (None)

class UClass* USpatialHenchmanFactionDetails_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpatialHenchmanFactionDetails_C");

	return Clss;
}


// SpatialHenchmanFactionDetails_C SpatialHenchmanFactionDetails.Default__SpatialHenchmanFactionDetails_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USpatialHenchmanFactionDetails_C* USpatialHenchmanFactionDetails_C::GetDefaultObj()
{
	static class USpatialHenchmanFactionDetails_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USpatialHenchmanFactionDetails_C*>(USpatialHenchmanFactionDetails_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SpatialHenchmanFactionDetails.SpatialHenchmanFactionDetails_C.SetVisualStateComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USpatialHenchmanFactionDetails_C::SetVisualStateComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialHenchmanFactionDetails_C", "SetVisualStateComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpatialHenchmanFactionDetails.SpatialHenchmanFactionDetails_C.SetVisualStateActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USpatialHenchmanFactionDetails_C::SetVisualStateActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialHenchmanFactionDetails_C", "SetVisualStateActive");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpatialHenchmanFactionDetails.SpatialHenchmanFactionDetails_C.SetVisualStateClassified
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USpatialHenchmanFactionDetails_C::SetVisualStateClassified()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialHenchmanFactionDetails_C", "SetVisualStateClassified");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpatialHenchmanFactionDetails.SpatialHenchmanFactionDetails_C.UpdateVisualState
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EMissionState           MissionState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         DefaultItem                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         RewardItem                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsAlter                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USpatialHenchmanFactionDetails_C::UpdateVisualState(enum class EMissionState MissionState, class UFortItemDefinition* DefaultItem, class UFortItemDefinition* RewardItem, bool bIsAlter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialHenchmanFactionDetails_C", "UpdateVisualState");

	Params::USpatialHenchmanFactionDetails_C_UpdateVisualState_Params Parms{};

	Parms.MissionState = MissionState;
	Parms.DefaultItem = DefaultItem;
	Parms.RewardItem = RewardItem;
	Parms.bIsAlter = bIsAlter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpatialHenchmanFactionDetails.SpatialHenchmanFactionDetails_C.AddLockedReason
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Reason                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bCompleted                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              NeededCount                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentCount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpatialHenchmanFactionDetails_C::AddLockedReason(class FText& Reason, bool bCompleted, int32 NeededCount, int32 CurrentCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialHenchmanFactionDetails_C", "AddLockedReason");

	Params::USpatialHenchmanFactionDetails_C_AddLockedReason_Params Parms{};

	Parms.Reason = Reason;
	Parms.bCompleted = bCompleted;
	Parms.NeededCount = NeededCount;
	Parms.CurrentCount = CurrentCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpatialHenchmanFactionDetails.SpatialHenchmanFactionDetails_C.ClearLockedReasons
// (Event, Public, BlueprintEvent)
// Parameters:

void USpatialHenchmanFactionDetails_C::ClearLockedReasons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialHenchmanFactionDetails_C", "ClearLockedReasons");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpatialHenchmanFactionDetails.SpatialHenchmanFactionDetails_C.BndEvt__Button_ActivateMission_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpatialHenchmanFactionDetails_C::BndEvt__Button_ActivateMission_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialHenchmanFactionDetails_C", "BndEvt__Button_ActivateMission_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::USpatialHenchmanFactionDetails_C_BndEvt__Button_ActivateMission_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpatialHenchmanFactionDetails.SpatialHenchmanFactionDetails_C.ExecuteUbergraph_SpatialHenchmanFactionDetails
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionState           K2Node_Event_MissionState                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         K2Node_Event_DefaultItem                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         K2Node_Event_RewardItem                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsAlter                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Event_Reason                                              (ConstParm)
// bool                               K2Node_Event_bCompleted                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_NeededCount                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_CurrentCount                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              (None)
// class FText                        CallFunc_GetDisplayName_ReturnValue_1                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class UUserWidget*                 CallFunc_BP_CreateEntry_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USpatialHenchmenListEntry_C* K2Node_DynamicCast_AsSpatial_Henchmen_List_Entry                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionState           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_1                                          (ConstParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)

void USpatialHenchmanFactionDetails_C::ExecuteUbergraph_SpatialHenchmanFactionDetails(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, enum class EMissionState K2Node_Event_MissionState, class UFortItemDefinition* K2Node_Event_DefaultItem, class UFortItemDefinition* K2Node_Event_RewardItem, bool K2Node_Event_bIsAlter, class FText K2Node_Event_Reason, bool K2Node_Event_bCompleted, int32 K2Node_Event_NeededCount, int32 K2Node_Event_CurrentCount, class FText CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class UUserWidget* CallFunc_BP_CreateEntry_ReturnValue, class USpatialHenchmenListEntry_C* K2Node_DynamicCast_AsSpatial_Henchmen_List_Entry, bool K2Node_DynamicCast_bSuccess, enum class EMissionState Temp_byte_Variable, int32 K2Node_Select_Default, bool Temp_bool_Variable, class UCommonButton* K2Node_ComponentBoundEvent_Button, class FText K2Node_Select_Default_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialHenchmanFactionDetails_C", "ExecuteUbergraph_SpatialHenchmanFactionDetails");

	Params::USpatialHenchmanFactionDetails_C_ExecuteUbergraph_SpatialHenchmanFactionDetails_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.K2Node_Event_MissionState = K2Node_Event_MissionState;
	Parms.K2Node_Event_DefaultItem = K2Node_Event_DefaultItem;
	Parms.K2Node_Event_RewardItem = K2Node_Event_RewardItem;
	Parms.K2Node_Event_bIsAlter = K2Node_Event_bIsAlter;
	Parms.K2Node_Event_Reason = K2Node_Event_Reason;
	Parms.K2Node_Event_bCompleted = K2Node_Event_bCompleted;
	Parms.K2Node_Event_NeededCount = K2Node_Event_NeededCount;
	Parms.K2Node_Event_CurrentCount = K2Node_Event_CurrentCount;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue_1 = CallFunc_GetDisplayName_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_BP_CreateEntry_ReturnValue = CallFunc_BP_CreateEntry_ReturnValue;
	Parms.K2Node_DynamicCast_AsSpatial_Henchmen_List_Entry = K2Node_DynamicCast_AsSpatial_Henchmen_List_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpatialHenchmanFactionDetails.SpatialHenchmanFactionDetails_C.OnPlayAcceptedMissionAnim__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void USpatialHenchmanFactionDetails_C::OnPlayAcceptedMissionAnim__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialHenchmanFactionDetails_C", "OnPlayAcceptedMissionAnim__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


