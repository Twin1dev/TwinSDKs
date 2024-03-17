#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C
// (None)

class UClass* UAthenaCustomizationSlotButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaCustomizationSlotButton_C");

	return Clss;
}


// AthenaCustomizationSlotButton_C AthenaCustomizationSlotButton.Default__AthenaCustomizationSlotButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaCustomizationSlotButton_C* UAthenaCustomizationSlotButton_C::GetDefaultObj()
{
	static class UAthenaCustomizationSlotButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaCustomizationSlotButton_C*>(UAthenaCustomizationSlotButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.GetSlotDebugName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

class FString UAthenaCustomizationSlotButton_C::GetSlotDebugName(const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaCustomizationSlotButton_C", "GetSlotDebugName");

	Params::UAthenaCustomizationSlotButton_C_GetSlotDebugName_Params Parms{};

	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.HandleActiveStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CosmeticAvailable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSlotFilled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaCustomizationSlotButton_C::HandleActiveStateChanged(bool CosmeticAvailable, bool Active, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, bool CallFunc_BooleanAND_ReturnValue, class UMaterialInterface* K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsSlotFilled_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaCustomizationSlotButton_C", "HandleActiveStateChanged");

	Params::UAthenaCustomizationSlotButton_C_HandleActiveStateChanged_Params Parms{};

	Parms.CosmeticAvailable = CosmeticAvailable;
	Parms.Active = Active;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_IsSlotFilled_ReturnValue = CallFunc_IsSlotFilled_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaCustomizationSlotButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaCustomizationSlotButton_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.OnCustomizationSlotActiveStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bInAttachableCosmeticAvailable                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bInActive                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaCustomizationSlotButton_C::OnCustomizationSlotActiveStateChanged(bool bInAttachableCosmeticAvailable, bool bInActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaCustomizationSlotButton_C", "OnCustomizationSlotActiveStateChanged");

	Params::UAthenaCustomizationSlotButton_C_OnCustomizationSlotActiveStateChanged_Params Parms{};

	Parms.bInAttachableCosmeticAvailable = bInAttachableCosmeticAvailable;
	Parms.bInActive = bInActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.OnImageSizeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsBeyondLargeAssetThreshold                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaCustomizationSlotButton_C::OnImageSizeChanged(bool bIsBeyondLargeAssetThreshold)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaCustomizationSlotButton_C", "OnImageSizeChanged");

	Params::UAthenaCustomizationSlotButton_C_OnImageSizeChanged_Params Parms{};

	Parms.bIsBeyondLargeAssetThreshold = bIsBeyondLargeAssetThreshold;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.Save State Updated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSaved                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaCustomizationSlotButton_C::Save_State_Updated(bool bSaved)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaCustomizationSlotButton_C", "Save State Updated");

	Params::UAthenaCustomizationSlotButton_C_Save_State_Updated_Params Parms{};

	Parms.bSaved = bSaved;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.set_emptyImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  ItemIcon                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaCustomizationSlotButton_C::Set_emptyImage(class UTexture2D* ItemIcon, float Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaCustomizationSlotButton_C", "set_emptyImage");

	Params::UAthenaCustomizationSlotButton_C_Set_emptyImage_Params Parms{};

	Parms.ItemIcon = ItemIcon;
	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.ExecuteUbergraph_AthenaCustomizationSlotButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   Temp_struct_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bInAttachableCosmeticAvailable                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bInActive                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetCustomizationSlotActiveState_bOutAttachableCosmeticAvailable(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetCustomizationSlotActiveState_bOutActive              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsBeyondLargeAssetThreshold                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_Select_Default_1                                          (None)
// struct FVector2D                   Temp_struct_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSaved                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_CustomEvent_ItemIcon                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Scale                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)

void UAthenaCustomizationSlotButton_C::ExecuteUbergraph_AthenaCustomizationSlotButton(int32 EntryPoint, bool Temp_bool_Variable, const struct FVector2D& Temp_struct_Variable, bool Temp_bool_Variable_1, const struct FVector2D& Temp_struct_Variable_1, const struct FVector2D& Temp_struct_Variable_2, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_3, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable_4, const struct FVector2D& Temp_struct_Variable_3, const struct FVector2D& Temp_struct_Variable_4, bool K2Node_Event_bInAttachableCosmeticAvailable, bool K2Node_Event_bInActive, bool CallFunc_GetCustomizationSlotActiveState_bOutAttachableCosmeticAvailable, bool CallFunc_GetCustomizationSlotActiveState_bOutActive, bool K2Node_Event_bIsBeyondLargeAssetThreshold, const struct FVector2D& K2Node_Select_Default, const struct FSlateBrush& K2Node_Select_Default_1, const struct FVector2D& Temp_struct_Variable_5, bool K2Node_CustomEvent_bSaved, class UTexture2D* K2Node_CustomEvent_ItemIcon, float K2Node_CustomEvent_Scale, enum class ESlateVisibility K2Node_Select_Default_2, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 K2Node_Select_Default_3, const struct FVector2D& K2Node_Select_Default_4, float CallFunc_SelectFloat_ReturnValue, bool Temp_bool_Variable_5, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FVector2D& K2Node_Select_Default_5, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaCustomizationSlotButton_C", "ExecuteUbergraph_AthenaCustomizationSlotButton");

	Params::UAthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.K2Node_Event_bInAttachableCosmeticAvailable = K2Node_Event_bInAttachableCosmeticAvailable;
	Parms.K2Node_Event_bInActive = K2Node_Event_bInActive;
	Parms.CallFunc_GetCustomizationSlotActiveState_bOutAttachableCosmeticAvailable = CallFunc_GetCustomizationSlotActiveState_bOutAttachableCosmeticAvailable;
	Parms.CallFunc_GetCustomizationSlotActiveState_bOutActive = CallFunc_GetCustomizationSlotActiveState_bOutActive;
	Parms.K2Node_Event_bIsBeyondLargeAssetThreshold = K2Node_Event_bIsBeyondLargeAssetThreshold;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.K2Node_CustomEvent_bSaved = K2Node_CustomEvent_bSaved;
	Parms.K2Node_CustomEvent_ItemIcon = K2Node_CustomEvent_ItemIcon;
	Parms.K2Node_CustomEvent_Scale = K2Node_CustomEvent_Scale;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;

	UObject::ProcessEvent(Func, &Parms);

}

}


