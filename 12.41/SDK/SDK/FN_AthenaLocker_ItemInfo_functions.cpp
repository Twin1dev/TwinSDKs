#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaLocker_ItemInfo.AthenaLocker_ItemInfo_C
// (None)

class UClass* UAthenaLocker_ItemInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaLocker_ItemInfo_C");

	return Clss;
}


// AthenaLocker_ItemInfo_C AthenaLocker_ItemInfo.Default__AthenaLocker_ItemInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaLocker_ItemInfo_C* UAthenaLocker_ItemInfo_C::GetDefaultObj()
{
	static class UAthenaLocker_ItemInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaLocker_ItemInfo_C*>(UAthenaLocker_ItemInfo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaLocker_ItemInfo.AthenaLocker_ItemInfo_C.Overide Item Info
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Description                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class EFortRarity             Rarity                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Hide_Rarity                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLocker_ItemInfo_C::Overide_Item_Info(class FText Name, class FText Type, class FText Description, enum class EFortRarity Rarity, bool Hide_Rarity, bool Temp_bool_Variable, class FText CallFunc_TextToUpper_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaLocker_ItemInfo_C", "Overide Item Info");

	Params::UAthenaLocker_ItemInfo_C_Overide_Item_Info_Params Parms{};

	Parms.Name = Name;
	Parms.Type = Type;
	Parms.Description = Description;
	Parms.Rarity = Rarity;
	Parms.Hide_Rarity = Hide_Rarity;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLocker_ItemInfo.AthenaLocker_ItemInfo_C.Set item definition
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItemDefinition*         _item_definition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLocker_ItemInfo_C::Set_item_definition(class UFortItemDefinition* _item_definition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaLocker_ItemInfo_C", "Set item definition");

	Params::UAthenaLocker_ItemInfo_C_Set_item_definition_Params Parms{};

	Parms._item_definition = _item_definition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLocker_ItemInfo.AthenaLocker_ItemInfo_C.Set item definition Invalid
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaLocker_ItemInfo_C::Set_item_definition_Invalid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaLocker_ItemInfo_C", "Set item definition Invalid");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaLocker_ItemInfo.AthenaLocker_ItemInfo_C.ExecuteUbergraph_AthenaLocker_ItemInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         K2Node_CustomEvent__item_definition                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsNullItem_Is_Null_Item                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsNullItem_Is_Null_Item_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsNullItem_Is_Null_Item_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortColorPalette           CallFunc_GetRarityOrSeriesColors_ReturnValue                     (NoDestructor)
// struct FLinearColor                K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLocker_ItemInfo_C::ExecuteUbergraph_AthenaLocker_ItemInfo(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default, class UFortItemDefinition* K2Node_CustomEvent__item_definition, bool Temp_bool_Variable_2, enum class EFortRarity CallFunc_GetRarity_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsNullItem_Is_Null_Item, bool CallFunc_IsNullItem_Is_Null_Item_1, bool CallFunc_IsNullItem_Is_Null_Item_2, const struct FFortColorPalette& CallFunc_GetRarityOrSeriesColors_ReturnValue, const struct FLinearColor& K2Node_Select_Default_1, const struct FLinearColor& K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaLocker_ItemInfo_C", "ExecuteUbergraph_AthenaLocker_ItemInfo");

	Params::UAthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent__item_definition = K2Node_CustomEvent__item_definition;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsNullItem_Is_Null_Item = CallFunc_IsNullItem_Is_Null_Item;
	Parms.CallFunc_IsNullItem_Is_Null_Item_1 = CallFunc_IsNullItem_Is_Null_Item_1;
	Parms.CallFunc_IsNullItem_Is_Null_Item_2 = CallFunc_IsNullItem_Is_Null_Item_2;
	Parms.CallFunc_GetRarityOrSeriesColors_ReturnValue = CallFunc_GetRarityOrSeriesColors_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


