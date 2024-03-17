#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Frontend_EventLevel_NavObject_BPDoors.BP_Frontend_EventLevel_NavObject_BPDoors_C
// (Actor)

class UClass* ABP_Frontend_EventLevel_NavObject_BPDoors_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Frontend_EventLevel_NavObject_BPDoors_C");

	return Clss;
}


// BP_Frontend_EventLevel_NavObject_BPDoors_C BP_Frontend_EventLevel_NavObject_BPDoors.Default__BP_Frontend_EventLevel_NavObject_BPDoors_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Frontend_EventLevel_NavObject_BPDoors_C* ABP_Frontend_EventLevel_NavObject_BPDoors_C::GetDefaultObj()
{
	static class ABP_Frontend_EventLevel_NavObject_BPDoors_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Frontend_EventLevel_NavObject_BPDoors_C*>(ABP_Frontend_EventLevel_NavObject_BPDoors_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Frontend_EventLevel_NavObject_BPDoors.BP_Frontend_EventLevel_NavObject_BPDoors_C.SetBattlePassVisualState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Purchased                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Frontend_EventLevel_NavObject_BPDoors_C::SetBattlePassVisualState(bool Purchased)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_BPDoors_C", "SetBattlePassVisualState");

	Params::ABP_Frontend_EventLevel_NavObject_BPDoors_C_SetBattlePassVisualState_Params Parms{};

	Parms.Purchased = Purchased;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frontend_EventLevel_NavObject_BPDoors.BP_Frontend_EventLevel_NavObject_BPDoors_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_3             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_4             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Frontend_EventLevel_NavObject_BPDoors_C::UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_BPDoors_C", "UserConstructionScript");

	Params::ABP_Frontend_EventLevel_NavObject_BPDoors_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_2;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_3 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_3;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_4 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frontend_EventLevel_NavObject_BPDoors.BP_Frontend_EventLevel_NavObject_BPDoors_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Frontend_EventLevel_NavObject_BPDoors_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_BPDoors_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_EventLevel_NavObject_BPDoors.BP_Frontend_EventLevel_NavObject_BPDoors_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Frontend_EventLevel_NavObject_BPDoors_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_BPDoors_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_EventLevel_NavObject_BPDoors.BP_Frontend_EventLevel_NavObject_BPDoors_C.FadeGlint__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Frontend_EventLevel_NavObject_BPDoors_C::FadeGlint__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_BPDoors_C", "FadeGlint__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_EventLevel_NavObject_BPDoors.BP_Frontend_EventLevel_NavObject_BPDoors_C.FadeGlint__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Frontend_EventLevel_NavObject_BPDoors_C::FadeGlint__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_BPDoors_C", "FadeGlint__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_EventLevel_NavObject_BPDoors.BP_Frontend_EventLevel_NavObject_BPDoors_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Frontend_EventLevel_NavObject_BPDoors_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_BPDoors_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_EventLevel_NavObject_BPDoors.BP_Frontend_EventLevel_NavObject_BPDoors_C.ReceiveActorBeginCursorOver
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Frontend_EventLevel_NavObject_BPDoors_C::ReceiveActorBeginCursorOver()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_BPDoors_C", "ReceiveActorBeginCursorOver");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_EventLevel_NavObject_BPDoors.BP_Frontend_EventLevel_NavObject_BPDoors_C.ReceiveActorEndCursorOver
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Frontend_EventLevel_NavObject_BPDoors_C::ReceiveActorEndCursorOver()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_BPDoors_C", "ReceiveActorEndCursorOver");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_EventLevel_NavObject_BPDoors.BP_Frontend_EventLevel_NavObject_BPDoors_C.ReceiveActorOnClicked
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FKey                        ButtonPressed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_Frontend_EventLevel_NavObject_BPDoors_C::ReceiveActorOnClicked(const struct FKey& ButtonPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_BPDoors_C", "ReceiveActorOnClicked");

	Params::ABP_Frontend_EventLevel_NavObject_BPDoors_C_ReceiveActorOnClicked_Params Parms{};

	Parms.ButtonPressed = ButtonPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frontend_EventLevel_NavObject_BPDoors.BP_Frontend_EventLevel_NavObject_BPDoors_C.UpdateVisuals
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Frontend_EventLevel_NavObject_BPDoors_C::UpdateVisuals()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_BPDoors_C", "UpdateVisuals");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_EventLevel_NavObject_BPDoors.BP_Frontend_EventLevel_NavObject_BPDoors_C.Open Door Sound
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Frontend_EventLevel_NavObject_BPDoors_C::Open_Door_Sound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_BPDoors_C", "Open Door Sound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_EventLevel_NavObject_BPDoors.BP_Frontend_EventLevel_NavObject_BPDoors_C.Close Door Sound
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Frontend_EventLevel_NavObject_BPDoors_C::Close_Door_Sound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_BPDoors_C", "Close Door Sound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_EventLevel_NavObject_BPDoors.BP_Frontend_EventLevel_NavObject_BPDoors_C.OnInitializeForPlayer
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Frontend_EventLevel_NavObject_BPDoors_C::OnInitializeForPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_BPDoors_C", "OnInitializeForPlayer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_EventLevel_NavObject_BPDoors.BP_Frontend_EventLevel_NavObject_BPDoors_C.ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_BPDoors
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_Event_ButtonPressed                                       (HasGetValueTypeHash)
// bool                               CallFunc_HasPurchasedSeasonBook_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAtLocation_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAtLocation_ReturnValue_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Frontend_EventLevel_NavObject_BPDoors_C::ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_BPDoors(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, const struct FKey& K2Node_Event_ButtonPressed, bool CallFunc_HasPurchasedSeasonBook_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_BPDoors_C", "ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_BPDoors");

	Params::ABP_Frontend_EventLevel_NavObject_BPDoors_C_ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_BPDoors_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_Event_ButtonPressed = K2Node_Event_ButtonPressed;
	Parms.CallFunc_HasPurchasedSeasonBook_ReturnValue = CallFunc_HasPurchasedSeasonBook_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_SpawnSoundAtLocation_ReturnValue = CallFunc_SpawnSoundAtLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_SpawnSoundAtLocation_ReturnValue_1 = CallFunc_SpawnSoundAtLocation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


