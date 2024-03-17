#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Frontend_EventLevel_NavObject_Doors.BP_Frontend_EventLevel_NavObject_Doors_C
// (Actor)

class UClass* ABP_Frontend_EventLevel_NavObject_Doors_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Frontend_EventLevel_NavObject_Doors_C");

	return Clss;
}


// BP_Frontend_EventLevel_NavObject_Doors_C BP_Frontend_EventLevel_NavObject_Doors.Default__BP_Frontend_EventLevel_NavObject_Doors_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Frontend_EventLevel_NavObject_Doors_C* ABP_Frontend_EventLevel_NavObject_Doors_C::GetDefaultObj()
{
	static class ABP_Frontend_EventLevel_NavObject_Doors_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Frontend_EventLevel_NavObject_Doors_C*>(ABP_Frontend_EventLevel_NavObject_Doors_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Frontend_EventLevel_NavObject_Doors.BP_Frontend_EventLevel_NavObject_Doors_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Frontend_EventLevel_NavObject_Doors_C::UserConstructionScript(bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInterface* K2Node_Select_Default, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_Doors_C", "UserConstructionScript");

	Params::ABP_Frontend_EventLevel_NavObject_Doors_C_UserConstructionScript_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frontend_EventLevel_NavObject_Doors.BP_Frontend_EventLevel_NavObject_Doors_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Frontend_EventLevel_NavObject_Doors_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_Doors_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_EventLevel_NavObject_Doors.BP_Frontend_EventLevel_NavObject_Doors_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Frontend_EventLevel_NavObject_Doors_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_Doors_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_EventLevel_NavObject_Doors.BP_Frontend_EventLevel_NavObject_Doors_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Frontend_EventLevel_NavObject_Doors_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_Doors_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_EventLevel_NavObject_Doors.BP_Frontend_EventLevel_NavObject_Doors_C.ReceiveActorBeginCursorOver
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Frontend_EventLevel_NavObject_Doors_C::ReceiveActorBeginCursorOver()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_Doors_C", "ReceiveActorBeginCursorOver");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_EventLevel_NavObject_Doors.BP_Frontend_EventLevel_NavObject_Doors_C.ReceiveActorEndCursorOver
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Frontend_EventLevel_NavObject_Doors_C::ReceiveActorEndCursorOver()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_Doors_C", "ReceiveActorEndCursorOver");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_EventLevel_NavObject_Doors.BP_Frontend_EventLevel_NavObject_Doors_C.ReceiveActorOnClicked
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FKey                        ButtonPressed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_Frontend_EventLevel_NavObject_Doors_C::ReceiveActorOnClicked(const struct FKey& ButtonPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_Doors_C", "ReceiveActorOnClicked");

	Params::ABP_Frontend_EventLevel_NavObject_Doors_C_ReceiveActorOnClicked_Params Parms{};

	Parms.ButtonPressed = ButtonPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frontend_EventLevel_NavObject_Doors.BP_Frontend_EventLevel_NavObject_Doors_C.Open Door Sound
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Frontend_EventLevel_NavObject_Doors_C::Open_Door_Sound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_Doors_C", "Open Door Sound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_EventLevel_NavObject_Doors.BP_Frontend_EventLevel_NavObject_Doors_C.Close Door Sound
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Frontend_EventLevel_NavObject_Doors_C::Close_Door_Sound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_Doors_C", "Close Door Sound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_EventLevel_NavObject_Doors.BP_Frontend_EventLevel_NavObject_Doors_C.ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_Doors
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_Event_ButtonPressed                                       (HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAtLocation_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAtLocation_ReturnValue_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Frontend_EventLevel_NavObject_Doors_C::ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_Doors(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool Temp_bool_Variable, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable_1, bool Temp_bool_Variable_1, class USoundBase* Temp_object_Variable_2, class USoundBase* Temp_object_Variable_3, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, const struct FKey& K2Node_Event_ButtonPressed, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class USoundBase* K2Node_Select_Default, class USoundBase* K2Node_Select_Default_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_Doors_C", "ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_Doors");

	Params::ABP_Frontend_EventLevel_NavObject_Doors_C_ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_Doors_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_Event_ButtonPressed = K2Node_Event_ButtonPressed;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_SpawnSoundAtLocation_ReturnValue = CallFunc_SpawnSoundAtLocation_ReturnValue;
	Parms.CallFunc_SpawnSoundAtLocation_ReturnValue_1 = CallFunc_SpawnSoundAtLocation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


