#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BattlePassScreen_SideMessaging_NewTech.BattlePassScreen_SideMessaging_NewTech_C
// (None)

class UClass* UBattlePassScreen_SideMessaging_NewTech_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattlePassScreen_SideMessaging_NewTech_C");

	return Clss;
}


// BattlePassScreen_SideMessaging_NewTech_C BattlePassScreen_SideMessaging_NewTech.Default__BattlePassScreen_SideMessaging_NewTech_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattlePassScreen_SideMessaging_NewTech_C* UBattlePassScreen_SideMessaging_NewTech_C::GetDefaultObj()
{
	static class UBattlePassScreen_SideMessaging_NewTech_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattlePassScreen_SideMessaging_NewTech_C*>(UBattlePassScreen_SideMessaging_NewTech_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattlePassScreen_SideMessaging_NewTech.BattlePassScreen_SideMessaging_NewTech_C.SetTechText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasTag_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasTag_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasTag_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasTag_ReturnValue_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasTag_ReturnValue_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasTag_ReturnValue_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattlePassScreen_SideMessaging_NewTech_C::SetTechText(const struct FGameplayTagContainer& NewParam, bool CallFunc_HasTag_ReturnValue, bool CallFunc_HasTag_ReturnValue_1, bool CallFunc_HasTag_ReturnValue_2, bool CallFunc_HasTag_ReturnValue_3, bool CallFunc_HasTag_ReturnValue_4, bool CallFunc_HasTag_ReturnValue_5, bool CallFunc_HasTag_ReturnValue_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreen_SideMessaging_NewTech_C", "SetTechText");

	Params::UBattlePassScreen_SideMessaging_NewTech_C_SetTechText_Params Parms{};

	Parms.NewParam = NewParam;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue_1 = CallFunc_HasTag_ReturnValue_1;
	Parms.CallFunc_HasTag_ReturnValue_2 = CallFunc_HasTag_ReturnValue_2;
	Parms.CallFunc_HasTag_ReturnValue_3 = CallFunc_HasTag_ReturnValue_3;
	Parms.CallFunc_HasTag_ReturnValue_4 = CallFunc_HasTag_ReturnValue_4;
	Parms.CallFunc_HasTag_ReturnValue_5 = CallFunc_HasTag_ReturnValue_5;
	Parms.CallFunc_HasTag_ReturnValue_6 = CallFunc_HasTag_ReturnValue_6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreen_SideMessaging_NewTech.BattlePassScreen_SideMessaging_NewTech_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBattlePassScreen_SideMessaging_NewTech_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreen_SideMessaging_NewTech_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePassScreen_SideMessaging_NewTech.BattlePassScreen_SideMessaging_NewTech_C.HandleItemSet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItemDefinition*         NewItem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreen_SideMessaging_NewTech_C::HandleItemSet(class UFortItemDefinition* NewItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreen_SideMessaging_NewTech_C", "HandleItemSet");

	Params::UBattlePassScreen_SideMessaging_NewTech_C_HandleItemSet_Params Parms{};

	Parms.NewItem = NewItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreen_SideMessaging_NewTech.BattlePassScreen_SideMessaging_NewTech_C.HandleTrackShown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattlePassScreen_SideMessaging_NewTech_C::HandleTrackShown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreen_SideMessaging_NewTech_C", "HandleTrackShown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePassScreen_SideMessaging_NewTech.BattlePassScreen_SideMessaging_NewTech_C.HandleDetailsShown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattlePassScreen_SideMessaging_NewTech_C::HandleDetailsShown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreen_SideMessaging_NewTech_C", "HandleDetailsShown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePassScreen_SideMessaging_NewTech.BattlePassScreen_SideMessaging_NewTech_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattlePassScreen_SideMessaging_NewTech_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreen_SideMessaging_NewTech_C", "PreConstruct");

	Params::UBattlePassScreen_SideMessaging_NewTech_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreen_SideMessaging_NewTech.BattlePassScreen_SideMessaging_NewTech_C.ExecuteUbergraph_BattlePassScreen_SideMessaging_NewTech
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   Temp_struct_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_SlotAsHorizontalBoxSlot_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         K2Node_CustomEvent_NewItem                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreen_SideMessaging_NewTech_C::ExecuteUbergraph_BattlePassScreen_SideMessaging_NewTech(int32 EntryPoint, const struct FVector2D& Temp_struct_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FVector2D& Temp_struct_Variable_1, const struct FVector2D& Temp_struct_Variable_2, bool Temp_bool_Variable_2, const struct FVector2D& Temp_struct_Variable_3, const struct FVector2D& Temp_struct_Variable_4, const struct FVector2D& Temp_struct_Variable_5, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_MakeStruct_Margin_1, bool Temp_bool_Variable_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UFortItemDefinition* K2Node_CustomEvent_NewItem, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool CallFunc_HasTag_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FVector2D& K2Node_Select_Default, const struct FMargin& K2Node_Select_Default_1, const struct FVector2D& K2Node_Select_Default_2, const struct FVector2D& K2Node_Select_Default_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreen_SideMessaging_NewTech_C", "ExecuteUbergraph_BattlePassScreen_SideMessaging_NewTech");

	Params::UBattlePassScreen_SideMessaging_NewTech_C_ExecuteUbergraph_BattlePassScreen_SideMessaging_NewTech_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.CallFunc_SlotAsHorizontalBoxSlot_ReturnValue = CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_MakeStruct_Margin_1 = K2Node_MakeStruct_Margin_1;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CustomEvent_NewItem = K2Node_CustomEvent_NewItem;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


