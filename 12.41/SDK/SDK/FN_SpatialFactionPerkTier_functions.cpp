#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SpatialFactionPerkTier.SpatialFactionPerkTier_C
// (None)

class UClass* USpatialFactionPerkTier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpatialFactionPerkTier_C");

	return Clss;
}


// SpatialFactionPerkTier_C SpatialFactionPerkTier.Default__SpatialFactionPerkTier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USpatialFactionPerkTier_C* USpatialFactionPerkTier_C::GetDefaultObj()
{
	static class USpatialFactionPerkTier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USpatialFactionPerkTier_C*>(USpatialFactionPerkTier_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SpatialFactionPerkTier.SpatialFactionPerkTier_C.OnInitializePerkTier
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              PerkLevel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsRevealed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              PerkIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpatialFactionPerkTier_C::OnInitializePerkTier(int32 PerkLevel, bool bIsRevealed, int32 PerkIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialFactionPerkTier_C", "OnInitializePerkTier");

	Params::USpatialFactionPerkTier_C_OnInitializePerkTier_Params Parms{};

	Parms.PerkLevel = PerkLevel;
	Parms.bIsRevealed = bIsRevealed;
	Parms.PerkIndex = PerkIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpatialFactionPerkTier.SpatialFactionPerkTier_C.OnFactionSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsCurrentFactionEarned                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsRevealed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              FactionNumber                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpatialFactionPerkTier_C::OnFactionSet(bool bIsCurrentFactionEarned, bool bIsRevealed, int32 FactionNumber)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialFactionPerkTier_C", "OnFactionSet");

	Params::USpatialFactionPerkTier_C_OnFactionSet_Params Parms{};

	Parms.bIsCurrentFactionEarned = bIsCurrentFactionEarned;
	Parms.bIsRevealed = bIsRevealed;
	Parms.FactionNumber = FactionNumber;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpatialFactionPerkTier.SpatialFactionPerkTier_C.ExecuteUbergraph_SpatialFactionPerkTier
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_PerkLevel                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsRevealed_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_PerkIndex                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// bool                               K2Node_Event_bIsCurrentFactionEarned                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsRevealed                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_FactionNumber                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_3                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_4                                   (None)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_Select_Default_1                                          (None)

void USpatialFactionPerkTier_C::ExecuteUbergraph_SpatialFactionPerkTier(int32 EntryPoint, int32 K2Node_Event_PerkLevel, bool K2Node_Event_bIsRevealed_1, int32 K2Node_Event_PerkIndex, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, enum class ESlateVisibility Temp_byte_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool K2Node_Event_bIsCurrentFactionEarned, bool K2Node_Event_bIsRevealed, int32 K2Node_Event_FactionNumber, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor_4, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool Temp_bool_Variable_1, const struct FSlateColor& K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialFactionPerkTier_C", "ExecuteUbergraph_SpatialFactionPerkTier");

	Params::USpatialFactionPerkTier_C_ExecuteUbergraph_SpatialFactionPerkTier_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_PerkLevel = K2Node_Event_PerkLevel;
	Parms.K2Node_Event_bIsRevealed_1 = K2Node_Event_bIsRevealed_1;
	Parms.K2Node_Event_PerkIndex = K2Node_Event_PerkIndex;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_Event_bIsCurrentFactionEarned = K2Node_Event_bIsCurrentFactionEarned;
	Parms.K2Node_Event_bIsRevealed = K2Node_Event_bIsRevealed;
	Parms.K2Node_Event_FactionNumber = K2Node_Event_FactionNumber;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;
	Parms.K2Node_MakeStruct_SlateColor_3 = K2Node_MakeStruct_SlateColor_3;
	Parms.K2Node_MakeStruct_SlateColor_4 = K2Node_MakeStruct_SlateColor_4;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


