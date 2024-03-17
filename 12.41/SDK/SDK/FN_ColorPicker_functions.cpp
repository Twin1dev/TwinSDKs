#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ColorPicker.ColorPicker_C
// (None)

class UClass* UColorPicker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ColorPicker_C");

	return Clss;
}


// ColorPicker_C ColorPicker.Default__ColorPicker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UColorPicker_C* UColorPicker_C::GetDefaultObj()
{
	static class UColorPicker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UColorPicker_C*>(UColorPicker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ColorPicker.ColorPicker_C.OnSetupColorPicker
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EColorPickerType        InColorPickerType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UColorPicker_C::OnSetupColorPicker(enum class EColorPickerType InColorPickerType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorPicker_C", "OnSetupColorPicker");

	Params::UColorPicker_C_OnSetupColorPicker_Params Parms{};

	Parms.InColorPickerType = InColorPickerType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ColorPicker.ColorPicker_C.BP_OnSwapColorPickerType
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bToSwatch                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UColorPicker_C::BP_OnSwapColorPickerType(bool bToSwatch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorPicker_C", "BP_OnSwapColorPickerType");

	Params::UColorPicker_C_BP_OnSwapColorPickerType_Params Parms{};

	Parms.bToSwatch = bToSwatch;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ColorPicker.ColorPicker_C.ExecuteUbergraph_ColorPicker
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bToSwatch                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EColorPickerType        K2Node_Event_InColorPickerType                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EColorPickerType        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default_1                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UColorPicker_C::ExecuteUbergraph_ColorPicker(int32 EntryPoint, bool K2Node_Event_bToSwatch, enum class EColorPickerType K2Node_Event_InColorPickerType, bool Temp_bool_Variable, enum class EColorPickerType Temp_byte_Variable, class UWidget* K2Node_Select_Default, class UWidget* K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorPicker_C", "ExecuteUbergraph_ColorPicker");

	Params::UColorPicker_C_ExecuteUbergraph_ColorPicker_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bToSwatch = K2Node_Event_bToSwatch;
	Parms.K2Node_Event_InColorPickerType = K2Node_Event_InColorPickerType;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


