#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SpatialCustomizationCategories.SpatialCustomizationCategories_C
// (None)

class UClass* USpatialCustomizationCategories_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpatialCustomizationCategories_C");

	return Clss;
}


// SpatialCustomizationCategories_C SpatialCustomizationCategories.Default__SpatialCustomizationCategories_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USpatialCustomizationCategories_C* USpatialCustomizationCategories_C::GetDefaultObj()
{
	static class USpatialCustomizationCategories_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USpatialCustomizationCategories_C*>(USpatialCustomizationCategories_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SpatialCustomizationCategories.SpatialCustomizationCategories_C.UpdateCompletionText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FinalizedCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicFontMaterial_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void USpatialCustomizationCategories_C::UpdateCompletionText(int32 FinalizedCount, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialCustomizationCategories_C", "UpdateCompletionText");

	Params::USpatialCustomizationCategories_C_UpdateCompletionText_Params Parms{};

	Parms.FinalizedCount = FinalizedCount;
	Parms.CallFunc_GetDynamicFontMaterial_ReturnValue = CallFunc_GetDynamicFontMaterial_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpatialCustomizationCategories.SpatialCustomizationCategories_C.InitializeCategories
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UAthenaSpatialCustomizationCategoryEntry*>K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaSpatialCustomizationCategoryEntry*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void USpatialCustomizationCategories_C::InitializeCategories(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UAthenaSpatialCustomizationCategoryEntry*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, class UAthenaSpatialCustomizationCategoryEntry* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialCustomizationCategories_C", "InitializeCategories");

	Params::USpatialCustomizationCategories_C_InitializeCategories_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpatialCustomizationCategories.SpatialCustomizationCategories_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USpatialCustomizationCategories_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialCustomizationCategories_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpatialCustomizationCategories.SpatialCustomizationCategories_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void USpatialCustomizationCategories_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialCustomizationCategories_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpatialCustomizationCategories.SpatialCustomizationCategories_C.Animation Playing Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USpatialCustomizationCategories_C::Animation_Playing_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialCustomizationCategories_C", "Animation Playing Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpatialCustomizationCategories.SpatialCustomizationCategories_C.BP_OnCategoriesSetup
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NumCategoriesFinalized                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpatialCustomizationCategories_C::BP_OnCategoriesSetup(int32 NumCategoriesFinalized)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialCustomizationCategories_C", "BP_OnCategoriesSetup");

	Params::USpatialCustomizationCategories_C_BP_OnCategoriesSetup_Params Parms{};

	Parms.NumCategoriesFinalized = NumCategoriesFinalized;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpatialCustomizationCategories.SpatialCustomizationCategories_C.ExecuteUbergraph_SpatialCustomizationCategories
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_NumCategoriesFinalized                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlayingForward_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void USpatialCustomizationCategories_C::ExecuteUbergraph_SpatialCustomizationCategories(int32 EntryPoint, int32 K2Node_Event_NumCategoriesFinalized, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_IsAnimationPlayingForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialCustomizationCategories_C", "ExecuteUbergraph_SpatialCustomizationCategories");

	Params::USpatialCustomizationCategories_C_ExecuteUbergraph_SpatialCustomizationCategories_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NumCategoriesFinalized = K2Node_Event_NumCategoriesFinalized;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_IsAnimationPlayingForward_ReturnValue = CallFunc_IsAnimationPlayingForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


