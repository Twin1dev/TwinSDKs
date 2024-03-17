#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HardcoreModifierListEntry.HardcoreModifierListEntry_C
// (None)

class UClass* UHardcoreModifierListEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HardcoreModifierListEntry_C");

	return Clss;
}


// HardcoreModifierListEntry_C HardcoreModifierListEntry.Default__HardcoreModifierListEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHardcoreModifierListEntry_C* UHardcoreModifierListEntry_C::GetDefaultObj()
{
	static class UHardcoreModifierListEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHardcoreModifierListEntry_C*>(UHardcoreModifierListEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HardcoreModifierListEntry.HardcoreModifierListEntry_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UHardcoreModifierListEntry_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HardcoreModifierListEntry_C", "OnMouseEnter");

	Params::UHardcoreModifierListEntry_C_OnMouseEnter_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HardcoreModifierListEntry.HardcoreModifierListEntry_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UHardcoreModifierListEntry_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HardcoreModifierListEntry_C", "OnMouseLeave");

	Params::UHardcoreModifierListEntry_C_OnMouseLeave_Params Parms{};

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HardcoreModifierListEntry.HardcoreModifierListEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHardcoreModifierListEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HardcoreModifierListEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HardcoreModifierListEntry.HardcoreModifierListEntry_C.HandleModifierEnabled
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bModifierEnabled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHardcoreModifierListEntry_C::HandleModifierEnabled(bool bModifierEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HardcoreModifierListEntry_C", "HandleModifierEnabled");

	Params::UHardcoreModifierListEntry_C_HandleModifierEnabled_Params Parms{};

	Parms.bModifierEnabled = bModifierEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HardcoreModifierListEntry.HardcoreModifierListEntry_C.SetMaxLevelCompleted
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              MaxLevel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHardcoreModifierListEntry_C::SetMaxLevelCompleted(int32 MaxLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HardcoreModifierListEntry_C", "SetMaxLevelCompleted");

	Params::UHardcoreModifierListEntry_C_SetMaxLevelCompleted_Params Parms{};

	Parms.MaxLevel = MaxLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HardcoreModifierListEntry.HardcoreModifierListEntry_C.ExecuteUbergraph_HardcoreModifierListEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent_1                                        (ConstParm)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bModifierEnabled                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_MaxLevel                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InRange_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UImage*>              K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// class UImage*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHardcoreModifierListEntry_C::ExecuteUbergraph_HardcoreModifierListEntry(int32 EntryPoint, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable_1, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent, int32 Temp_int_Variable, bool K2Node_Event_bModifierEnabled, int32 CallFunc_Add_IntInt_ReturnValue, int32 K2Node_Event_MaxLevel, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_InRange_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, bool Temp_bool_Variable, TArray<class UImage*>& K2Node_MakeArray_Array, class UImage* CallFunc_Array_Get_Item, class UClass* K2Node_Select_Default, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HardcoreModifierListEntry_C", "ExecuteUbergraph_HardcoreModifierListEntry");

	Params::UHardcoreModifierListEntry_C_ExecuteUbergraph_HardcoreModifierListEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent_1 = K2Node_Event_MouseEvent_1;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Event_bModifierEnabled = K2Node_Event_bModifierEnabled;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_MaxLevel = K2Node_Event_MaxLevel;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_InRange_IntInt_ReturnValue = CallFunc_InRange_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_LinearColor_1 = K2Node_MakeStruct_LinearColor_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


