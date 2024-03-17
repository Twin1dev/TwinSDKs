#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CosmeticLoadoutScreen.CosmeticLoadoutScreen_C
// (None)

class UClass* UCosmeticLoadoutScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CosmeticLoadoutScreen_C");

	return Clss;
}


// CosmeticLoadoutScreen_C CosmeticLoadoutScreen.Default__CosmeticLoadoutScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCosmeticLoadoutScreen_C* UCosmeticLoadoutScreen_C::GetDefaultObj()
{
	static class UCosmeticLoadoutScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCosmeticLoadoutScreen_C*>(UCosmeticLoadoutScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CosmeticLoadoutScreen.CosmeticLoadoutScreen_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCosmeticLoadoutScreen_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticLoadoutScreen_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CosmeticLoadoutScreen.CosmeticLoadoutScreen_C.OnPreviewTile
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFortLoadoutCardType    CardType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCosmeticLoadoutScreen_C::OnPreviewTile(enum class EFortLoadoutCardType CardType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticLoadoutScreen_C", "OnPreviewTile");

	Params::UCosmeticLoadoutScreen_C_OnPreviewTile_Params Parms{};

	Parms.CardType = CardType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CosmeticLoadoutScreen.CosmeticLoadoutScreen_C.ExecuteUbergraph_CosmeticLoadoutScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortLoadoutCardType    K2Node_Event_CardType                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCosmeticLoadoutScreen_C::ExecuteUbergraph_CosmeticLoadoutScreen(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class EFortLoadoutCardType K2Node_Event_CardType, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticLoadoutScreen_C", "ExecuteUbergraph_CosmeticLoadoutScreen");

	Params::UCosmeticLoadoutScreen_C_ExecuteUbergraph_CosmeticLoadoutScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_CardType = K2Node_Event_CardType;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


