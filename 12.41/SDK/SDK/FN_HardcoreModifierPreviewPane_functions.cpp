#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HardcoreModifierPreviewPane.HardcoreModifierPreviewPane_C
// (None)

class UClass* UHardcoreModifierPreviewPane_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HardcoreModifierPreviewPane_C");

	return Clss;
}


// HardcoreModifierPreviewPane_C HardcoreModifierPreviewPane.Default__HardcoreModifierPreviewPane_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHardcoreModifierPreviewPane_C* UHardcoreModifierPreviewPane_C::GetDefaultObj()
{
	static class UHardcoreModifierPreviewPane_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHardcoreModifierPreviewPane_C*>(UHardcoreModifierPreviewPane_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HardcoreModifierPreviewPane.HardcoreModifierPreviewPane_C.BP_HandleModifierChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UHardcoreModifierPreviewPane_C::BP_HandleModifierChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HardcoreModifierPreviewPane_C", "BP_HandleModifierChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HardcoreModifierPreviewPane.HardcoreModifierPreviewPane_C.HandleMaxLevelCompleted
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHardcoreModifierPreviewPane_C::HandleMaxLevelCompleted(int32 Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HardcoreModifierPreviewPane_C", "HandleMaxLevelCompleted");

	Params::UHardcoreModifierPreviewPane_C_HandleMaxLevelCompleted_Params Parms{};

	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HardcoreModifierPreviewPane.HardcoreModifierPreviewPane_C.ExecuteUbergraph_HardcoreModifierPreviewPane
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Level                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InRange_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UImage*>              K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// class UImage*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHardcoreModifierPreviewPane_C::ExecuteUbergraph_HardcoreModifierPreviewPane(int32 EntryPoint, const struct FLinearColor& K2Node_MakeStruct_LinearColor, int32 K2Node_Event_Level, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_InRange_IntInt_ReturnValue, int32 Temp_int_Variable, TArray<class UImage*>& K2Node_MakeArray_Array, class UImage* CallFunc_Array_Get_Item, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HardcoreModifierPreviewPane_C", "ExecuteUbergraph_HardcoreModifierPreviewPane");

	Params::UHardcoreModifierPreviewPane_C_ExecuteUbergraph_HardcoreModifierPreviewPane_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.K2Node_Event_Level = K2Node_Event_Level;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_InRange_IntInt_ReturnValue = CallFunc_InRange_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_LinearColor_1 = K2Node_MakeStruct_LinearColor_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


