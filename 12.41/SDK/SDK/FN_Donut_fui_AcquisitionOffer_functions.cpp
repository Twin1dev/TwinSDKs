#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Donut_fui_AcquisitionOffer.Donut_fui_AcquisitionOffer_C
// (None)

class UClass* UDonut_fui_AcquisitionOffer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Donut_fui_AcquisitionOffer_C");

	return Clss;
}


// Donut_fui_AcquisitionOffer_C Donut_fui_AcquisitionOffer.Default__Donut_fui_AcquisitionOffer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDonut_fui_AcquisitionOffer_C* UDonut_fui_AcquisitionOffer_C::GetDefaultObj()
{
	static class UDonut_fui_AcquisitionOffer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDonut_fui_AcquisitionOffer_C*>(UDonut_fui_AcquisitionOffer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Donut_fui_AcquisitionOffer.Donut_fui_AcquisitionOffer_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDonut_fui_AcquisitionOffer_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Donut_fui_AcquisitionOffer_C", "PreConstruct");

	Params::UDonut_fui_AcquisitionOffer_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Donut_fui_AcquisitionOffer.Donut_fui_AcquisitionOffer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UDonut_fui_AcquisitionOffer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Donut_fui_AcquisitionOffer_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Donut_fui_AcquisitionOffer.Donut_fui_AcquisitionOffer_C.Refresh
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDonut_fui_AcquisitionOffer_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Donut_fui_AcquisitionOffer_C", "Refresh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Donut_fui_AcquisitionOffer.Donut_fui_AcquisitionOffer_C.ExecuteUbergraph_Donut_fui_AcquisitionOffer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortColorPalette           CallFunc_BPGetRarityColorPalette_ReturnValue                     (NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDonut_fui_AcquisitionOffer_C::ExecuteUbergraph_Donut_fui_AcquisitionOffer(int32 EntryPoint, int32 Temp_int_Variable, bool K2Node_Event_IsDesignTime, int32 Temp_int_Variable_1, class FText CallFunc_Conv_IntToText_ReturnValue, bool Temp_bool_Variable, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, int32 K2Node_Select_Default, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, const struct FFortColorPalette& CallFunc_BPGetRarityColorPalette_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Donut_fui_AcquisitionOffer_C", "ExecuteUbergraph_Donut_fui_AcquisitionOffer");

	Params::UDonut_fui_AcquisitionOffer_C_ExecuteUbergraph_Donut_fui_AcquisitionOffer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.CallFunc_BPGetRarityColorPalette_ReturnValue = CallFunc_BPGetRarityColorPalette_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_2 = CallFunc_GetDynamicMaterial_ReturnValue_2;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_3 = CallFunc_GetDynamicMaterial_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


