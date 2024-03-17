#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HUD_InteractionPoint.HUD_InteractionPoint_C
// (None)

class UClass* UHUD_InteractionPoint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUD_InteractionPoint_C");

	return Clss;
}


// HUD_InteractionPoint_C HUD_InteractionPoint.Default__HUD_InteractionPoint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHUD_InteractionPoint_C* UHUD_InteractionPoint_C::GetDefaultObj()
{
	static class UHUD_InteractionPoint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHUD_InteractionPoint_C*>(UHUD_InteractionPoint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HUD_InteractionPoint.HUD_InteractionPoint_C.EventIntro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHUD_InteractionPoint_C::EventIntro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_InteractionPoint_C", "EventIntro");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_InteractionPoint.HUD_InteractionPoint_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHUD_InteractionPoint_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_InteractionPoint_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_InteractionPoint.HUD_InteractionPoint_C.EventOutro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHUD_InteractionPoint_C::EventOutro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_InteractionPoint_C", "EventOutro");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_InteractionPoint.HUD_InteractionPoint_C.EventSetText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        DetailText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UHUD_InteractionPoint_C::EventSetText(class FText DetailText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_InteractionPoint_C", "EventSetText");

	Params::UHUD_InteractionPoint_C_EventSetText_Params Parms{};

	Parms.DetailText = DetailText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_InteractionPoint.HUD_InteractionPoint_C.SetDistantIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                 Icon                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Default                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               HideArrow                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_InteractionPoint_C::SetDistantIcon(const struct FSlateBrush& Icon, bool Default, bool HideArrow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_InteractionPoint_C", "SetDistantIcon");

	Params::UHUD_InteractionPoint_C_SetDistantIcon_Params Parms{};

	Parms.Icon = Icon;
	Parms.Default = Default;
	Parms.HideArrow = HideArrow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_InteractionPoint.HUD_InteractionPoint_C.SetDetailIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                 Icon                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ShowWithText                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               HideArrow                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_InteractionPoint_C::SetDetailIcon(const struct FSlateBrush& Icon, bool ShowWithText, bool HideArrow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_InteractionPoint_C", "SetDetailIcon");

	Params::UHUD_InteractionPoint_C_SetDetailIcon_Params Parms{};

	Parms.Icon = Icon;
	Parms.ShowWithText = ShowWithText;
	Parms.HideArrow = HideArrow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_InteractionPoint.HUD_InteractionPoint_C.EventClamp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsClamped                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   Position                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_InteractionPoint_C::EventClamp(bool IsClamped, const struct FVector2D& Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_InteractionPoint_C", "EventClamp");

	Params::UHUD_InteractionPoint_C_EventClamp_Params Parms{};

	Parms.IsClamped = IsClamped;
	Parms.Position = Position;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_InteractionPoint.HUD_InteractionPoint_C.EventShowDetail
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowDetail                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_InteractionPoint_C::EventShowDetail(bool ShowDetail)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_InteractionPoint_C", "EventShowDetail");

	Params::UHUD_InteractionPoint_C_EventShowDetail_Params Parms{};

	Parms.ShowDetail = ShowDetail;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_InteractionPoint.HUD_InteractionPoint_C.ExecuteUbergraph_HUD_InteractionPoint
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_ShowDetail                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_DetailText                                    (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_LeftS                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_RightS                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Split_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_CustomEvent_Icon_1                                        (None)
// bool                               K2Node_CustomEvent_Default                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_HideArrow_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_CustomEvent_Icon                                          (None)
// bool                               K2Node_CustomEvent_ShowWithText                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_HideArrow                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_isClamped                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   K2Node_CustomEvent_Position                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_InteractionPoint_C::ExecuteUbergraph_HUD_InteractionPoint(int32 EntryPoint, bool K2Node_CustomEvent_ShowDetail, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_6, class FText K2Node_CustomEvent_DetailText, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_7, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool Temp_bool_Variable_4, const struct FSlateBrush& K2Node_CustomEvent_Icon_1, bool K2Node_CustomEvent_Default, bool K2Node_CustomEvent_HideArrow_1, const struct FSlateBrush& K2Node_CustomEvent_Icon, bool K2Node_CustomEvent_ShowWithText, bool K2Node_CustomEvent_HideArrow, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, int32 K2Node_Select_Default_2, enum class ESlateVisibility K2Node_Select_Default_3, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, bool Temp_bool_Variable_5, int32 K2Node_Select_Default_4, int32 Temp_int_Variable_4, int32 Temp_int_Variable_5, bool Temp_bool_Variable_6, bool K2Node_CustomEvent_isClamped, const struct FVector2D& K2Node_CustomEvent_Position, int32 K2Node_Select_Default_5, enum class ESlateVisibility K2Node_Select_Default_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_InteractionPoint_C", "ExecuteUbergraph_HUD_InteractionPoint");

	Params::UHUD_InteractionPoint_C_ExecuteUbergraph_HUD_InteractionPoint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_ShowDetail = K2Node_CustomEvent_ShowDetail;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.K2Node_CustomEvent_DetailText = K2Node_CustomEvent_DetailText;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.CallFunc_Split_LeftS = CallFunc_Split_LeftS;
	Parms.CallFunc_Split_RightS = CallFunc_Split_RightS;
	Parms.CallFunc_Split_ReturnValue = CallFunc_Split_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.K2Node_CustomEvent_Icon_1 = K2Node_CustomEvent_Icon_1;
	Parms.K2Node_CustomEvent_Default = K2Node_CustomEvent_Default;
	Parms.K2Node_CustomEvent_HideArrow_1 = K2Node_CustomEvent_HideArrow_1;
	Parms.K2Node_CustomEvent_Icon = K2Node_CustomEvent_Icon;
	Parms.K2Node_CustomEvent_ShowWithText = K2Node_CustomEvent_ShowWithText;
	Parms.K2Node_CustomEvent_HideArrow = K2Node_CustomEvent_HideArrow;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.Temp_int_Variable_5 = Temp_int_Variable_5;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.K2Node_CustomEvent_isClamped = K2Node_CustomEvent_isClamped;
	Parms.K2Node_CustomEvent_Position = K2Node_CustomEvent_Position;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;

	UObject::ProcessEvent(Func, &Parms);

}

}


