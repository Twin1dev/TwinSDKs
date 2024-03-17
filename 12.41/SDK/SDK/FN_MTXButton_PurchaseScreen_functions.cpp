#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MTXButton_PurchaseScreen.MTXButton_PurchaseScreen_C
// (None)

class UClass* UMTXButton_PurchaseScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MTXButton_PurchaseScreen_C");

	return Clss;
}


// MTXButton_PurchaseScreen_C MTXButton_PurchaseScreen.Default__MTXButton_PurchaseScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMTXButton_PurchaseScreen_C* UMTXButton_PurchaseScreen_C::GetDefaultObj()
{
	static class UMTXButton_PurchaseScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMTXButton_PurchaseScreen_C*>(UMTXButton_PurchaseScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MTXButton_PurchaseScreen.MTXButton_PurchaseScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMTXButton_PurchaseScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MTXButton_PurchaseScreen_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MTXButton_PurchaseScreen.MTXButton_PurchaseScreen_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMTXButton_PurchaseScreen_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MTXButton_PurchaseScreen_C", "BP_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MTXButton_PurchaseScreen.MTXButton_PurchaseScreen_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMTXButton_PurchaseScreen_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MTXButton_PurchaseScreen_C", "BP_OnUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MTXButton_PurchaseScreen.MTXButton_PurchaseScreen_C.ExecuteUbergraph_MTXButton_PurchaseScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMTXButton_PurchaseScreen_C::ExecuteUbergraph_MTXButton_PurchaseScreen(int32 EntryPoint, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool CallFunc_IsMobileGame_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MTXButton_PurchaseScreen_C", "ExecuteUbergraph_MTXButton_PurchaseScreen");

	Params::UMTXButton_PurchaseScreen_C_ExecuteUbergraph_MTXButton_PurchaseScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


