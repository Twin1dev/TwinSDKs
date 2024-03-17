#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass S12_Elevator_ToBuffcatRoom.SequenceDirector_C
// (None)

class UClass* USequenceDirector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SequenceDirector_C");

	return Clss;
}


// SequenceDirector_C S12_Elevator_ToBuffcatRoom.Default__SequenceDirector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USequenceDirector_C* USequenceDirector_C::GetDefaultObj()
{
	static class USequenceDirector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USequenceDirector_C*>(USequenceDirector_C::StaticClass()->DefaultObject);

	return Default;
}


// Function S12_Elevator_ToBuffcatRoom.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFrontend_EventLevel_Camera_C*Camera_Root_Movement                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_2(class AFrontend_EventLevel_Camera_C* Camera_Root_Movement)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_2");

	Params::USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_2_Params Parms{};

	Parms.Camera_Root_Movement = Camera_Root_Movement;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_Elevator_ToBuffcatRoom.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFrontend_EventLevel_Camera_C*Camera_Root_Movement                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_1(class AFrontend_EventLevel_Camera_C* Camera_Root_Movement)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_1");

	Params::USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_1_Params Parms{};

	Parms.Camera_Root_Movement = Camera_Root_Movement;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_Elevator_ToBuffcatRoom.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function S12_Elevator_ToBuffcatRoom.SequenceDirector_C.BP_Elevator_Transition_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Elevator_Transition_Event_0(class ABP_Elevator_Transition_C* BP_Elevator_Transition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Elevator_Transition_Event_0");

	Params::USequenceDirector_C_BP_Elevator_Transition_Event_0_Params Parms{};

	Parms.BP_Elevator_Transition = BP_Elevator_Transition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_Elevator_ToBuffcatRoom.SequenceDirector_C.BP_Elevator_Transition_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Elevator_Transition_Event_1(class ABP_Elevator_Transition_C* BP_Elevator_Transition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Elevator_Transition_Event_1");

	Params::USequenceDirector_C_BP_Elevator_Transition_Event_1_Params Parms{};

	Parms.BP_Elevator_Transition = BP_Elevator_Transition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_Elevator_ToBuffcatRoom.SequenceDirector_C.BP_Elevator_Transition_Event_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Elevator_Transition_Event_2(class ABP_Elevator_Transition_C* BP_Elevator_Transition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Elevator_Transition_Event_2");

	Params::USequenceDirector_C_BP_Elevator_Transition_Event_2_Params Parms{};

	Parms.BP_Elevator_Transition = BP_Elevator_Transition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_Elevator_ToBuffcatRoom.SequenceDirector_C.BP_Elevator_Transition3_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition3                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Elevator_Transition3_Event_0(class ABP_Elevator_Transition_C* BP_Elevator_Transition3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Elevator_Transition3_Event_0");

	Params::USequenceDirector_C_BP_Elevator_Transition3_Event_0_Params Parms{};

	Parms.BP_Elevator_Transition3 = BP_Elevator_Transition3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_Elevator_ToBuffcatRoom.SequenceDirector_C.BP_Elevator_Transition3_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition3                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Elevator_Transition3_Event_1(class ABP_Elevator_Transition_C* BP_Elevator_Transition3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Elevator_Transition3_Event_1");

	Params::USequenceDirector_C_BP_Elevator_Transition3_Event_1_Params Parms{};

	Parms.BP_Elevator_Transition3 = BP_Elevator_Transition3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_Elevator_ToBuffcatRoom.SequenceDirector_C.BP_Elevator_Transition_Event_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Elevator_Transition_Event_3(class ABP_Elevator_Transition_C* BP_Elevator_Transition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Elevator_Transition_Event_3");

	Params::USequenceDirector_C_BP_Elevator_Transition_Event_3_Params Parms{};

	Parms.BP_Elevator_Transition = BP_Elevator_Transition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_Elevator_ToBuffcatRoom.SequenceDirector_C.BP_Elevator_Transition_Event_4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Elevator_Transition_Event_4(class ABP_Elevator_Transition_C* BP_Elevator_Transition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Elevator_Transition_Event_4");

	Params::USequenceDirector_C_BP_Elevator_Transition_Event_4_Params Parms{};

	Parms.BP_Elevator_Transition = BP_Elevator_Transition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_Elevator_ToBuffcatRoom.SequenceDirector_C.BP_Elevator_Transition3_Event_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition3                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Elevator_Transition3_Event_2(class ABP_Elevator_Transition_C* BP_Elevator_Transition3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Elevator_Transition3_Event_2");

	Params::USequenceDirector_C_BP_Elevator_Transition3_Event_2_Params Parms{};

	Parms.BP_Elevator_Transition3 = BP_Elevator_Transition3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_Elevator_ToBuffcatRoom.SequenceDirector_C.BP_Elevator_Transition3_Event_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition3                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Elevator_Transition3_Event_3(class ABP_Elevator_Transition_C* BP_Elevator_Transition3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Elevator_Transition3_Event_3");

	Params::USequenceDirector_C_BP_Elevator_Transition3_Event_3_Params Parms{};

	Parms.BP_Elevator_Transition3 = BP_Elevator_Transition3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_Elevator_ToBuffcatRoom.SequenceDirector_C.BP_Elevator_Transition3_Event_4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition3                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Elevator_Transition3_Event_4(class ABP_Elevator_Transition_C* BP_Elevator_Transition3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Elevator_Transition3_Event_4");

	Params::USequenceDirector_C_BP_Elevator_Transition3_Event_4_Params Parms{};

	Parms.BP_Elevator_Transition3 = BP_Elevator_Transition3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_Elevator_ToBuffcatRoom.SequenceDirector_C.BP_Elevator_Transition3_Event_5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition3                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Elevator_Transition3_Event_5(class ABP_Elevator_Transition_C* BP_Elevator_Transition3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Elevator_Transition3_Event_5");

	Params::USequenceDirector_C_BP_Elevator_Transition3_Event_5_Params Parms{};

	Parms.BP_Elevator_Transition3 = BP_Elevator_Transition3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_Elevator_ToBuffcatRoom.SequenceDirector_C.BP_Battlepass_LightSwitcher_Maproom_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Battlepass_LightSwitcher_C*BP_Battlepass_LightSwitcher_Maproom                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Battlepass_LightSwitcher_Maproom_Event_0(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher_Maproom)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Battlepass_LightSwitcher_Maproom_Event_0");

	Params::USequenceDirector_C_BP_Battlepass_LightSwitcher_Maproom_Event_0_Params Parms{};

	Parms.BP_Battlepass_LightSwitcher_Maproom = BP_Battlepass_LightSwitcher_Maproom;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_Elevator_ToBuffcatRoom.SequenceDirector_C.BP_Battlepass_LightSwitcher_Hench_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Battlepass_LightSwitcher_C*BP_Battlepass_LightSwitcher_Hench                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Battlepass_LightSwitcher_Hench_Event_0(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher_Hench)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Battlepass_LightSwitcher_Hench_Event_0");

	Params::USequenceDirector_C_BP_Battlepass_LightSwitcher_Hench_Event_0_Params Parms{};

	Parms.BP_Battlepass_LightSwitcher_Hench = BP_Battlepass_LightSwitcher_Hench;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_Elevator_ToBuffcatRoom.SequenceDirector_C.Audio Camera Move Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::Audio_Camera_Move_Event(class USoundBase* Sound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "Audio Camera Move Event");

	Params::USequenceDirector_C_Audio_Camera_Move_Event_Params Parms{};

	Parms.Sound = Sound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_Elevator_ToBuffcatRoom.SequenceDirector_C.BP_Elevator_Transition_Event_5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Elevator_Transition_Event_5(class ABP_Elevator_Transition_C* BP_Elevator_Transition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Elevator_Transition_Event_5");

	Params::USequenceDirector_C_BP_Elevator_Transition_Event_5_Params Parms{};

	Parms.BP_Elevator_Transition = BP_Elevator_Transition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_Elevator_ToBuffcatRoom.SequenceDirector_C.BP_Elevator_Transition_Event_6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Elevator_Transition_Event_6(class ABP_Elevator_Transition_C* BP_Elevator_Transition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Elevator_Transition_Event_6");

	Params::USequenceDirector_C_BP_Elevator_Transition_Event_6_Params Parms{};

	Parms.BP_Elevator_Transition = BP_Elevator_Transition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_Elevator_ToBuffcatRoom.SequenceDirector_C.BP_Elevator_Transition_Event_7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Elevator_Transition_Event_7(class ABP_Elevator_Transition_C* BP_Elevator_Transition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Elevator_Transition_Event_7");

	Params::USequenceDirector_C_BP_Elevator_Transition_Event_7_Params Parms{};

	Parms.BP_Elevator_Transition = BP_Elevator_Transition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_Elevator_ToBuffcatRoom.SequenceDirector_C.BP_Battlepass_LightSwitcher_TNTINA_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Battlepass_LightSwitcher_C*BP_Battlepass_LightSwitcher_TNTINA                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Battlepass_LightSwitcher_TNTINA_Event_0(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher_TNTINA)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Battlepass_LightSwitcher_TNTINA_Event_0");

	Params::USequenceDirector_C_BP_Battlepass_LightSwitcher_TNTINA_Event_0_Params Parms{};

	Parms.BP_Battlepass_LightSwitcher_TNTINA = BP_Battlepass_LightSwitcher_TNTINA;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_Elevator_ToBuffcatRoom.SequenceDirector_C.BP_Battlepass_LightSwitcher_Maproom_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Battlepass_LightSwitcher_C*BP_Battlepass_LightSwitcher_Maproom                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Battlepass_LightSwitcher_Maproom_Event_1(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher_Maproom)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Battlepass_LightSwitcher_Maproom_Event_1");

	Params::USequenceDirector_C_BP_Battlepass_LightSwitcher_Maproom_Event_1_Params Parms{};

	Parms.BP_Battlepass_LightSwitcher_Maproom = BP_Battlepass_LightSwitcher_Maproom;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_Elevator_ToBuffcatRoom.SequenceDirector_C.Camera_Root_Movement_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFrontend_EventLevel_Camera_C*Camera_Root_Movement                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bStreamIn                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USequenceDirector_C::Camera_Root_Movement_Event_0(class AFrontend_EventLevel_Camera_C* Camera_Root_Movement, bool bStreamIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "Camera_Root_Movement_Event_0");

	Params::USequenceDirector_C_Camera_Root_Movement_Event_0_Params Parms{};

	Parms.Camera_Root_Movement = Camera_Root_Movement;
	Parms.bStreamIn = bStreamIn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_Elevator_ToBuffcatRoom.SequenceDirector_C.Camera_Root_Movement_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFrontend_EventLevel_Camera_C*Camera_Root_Movement                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bStreamIn                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USequenceDirector_C::Camera_Root_Movement_Event_1(class AFrontend_EventLevel_Camera_C* Camera_Root_Movement, bool bStreamIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "Camera_Root_Movement_Event_1");

	Params::USequenceDirector_C_Camera_Root_Movement_Event_1_Params Parms{};

	Parms.Camera_Root_Movement = Camera_Root_Movement;
	Parms.bStreamIn = bStreamIn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_Elevator_ToBuffcatRoom.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFrontend_EventLevel_Camera_C*K2Node_CustomEvent_Camera_Root_Movement                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bStreamIn                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition_7                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition_6                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition_5                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition3_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition3_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition3_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition3_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition3_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Battlepass_LightSwitcher_C*K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Maproom_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Battlepass_LightSwitcher_C*K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Hench             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_CustomEvent_Sound                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Battlepass_LightSwitcher_C*K2Node_CustomEvent_BP_Battlepass_LightSwitcher_TNTINA            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Battlepass_LightSwitcher_C*K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Maproom           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsReversed_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFrontend_EventLevel_Camera_C*K2Node_CustomEvent_Camera_Root_Movement_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bStreamIn_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsReversed_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void USequenceDirector_C::ExecuteUbergraph_SequenceDirector(int32 EntryPoint, class AFrontend_EventLevel_Camera_C* K2Node_CustomEvent_Camera_Root_Movement, bool K2Node_CustomEvent_bStreamIn, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition_7, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition_6, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition_5, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition3_5, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition3_4, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition_4, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition_3, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition3_3, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition3_2, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition3_1, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition3, class ABP_Battlepass_LightSwitcher_C* K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Maproom_1, class ABP_Battlepass_LightSwitcher_C* K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Hench, class USoundBase* K2Node_CustomEvent_Sound, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition_2, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition_1, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition, class ABP_Battlepass_LightSwitcher_C* K2Node_CustomEvent_BP_Battlepass_LightSwitcher_TNTINA, class ABP_Battlepass_LightSwitcher_C* K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Maproom, bool CallFunc_IsReversed_ReturnValue, class AFrontend_EventLevel_Camera_C* K2Node_CustomEvent_Camera_Root_Movement_1, bool K2Node_CustomEvent_bStreamIn_1, bool CallFunc_IsReversed_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "ExecuteUbergraph_SequenceDirector");

	Params::USequenceDirector_C_ExecuteUbergraph_SequenceDirector_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Camera_Root_Movement = K2Node_CustomEvent_Camera_Root_Movement;
	Parms.K2Node_CustomEvent_bStreamIn = K2Node_CustomEvent_bStreamIn;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition_7 = K2Node_CustomEvent_BP_Elevator_Transition_7;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition_6 = K2Node_CustomEvent_BP_Elevator_Transition_6;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition_5 = K2Node_CustomEvent_BP_Elevator_Transition_5;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition3_5 = K2Node_CustomEvent_BP_Elevator_Transition3_5;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition3_4 = K2Node_CustomEvent_BP_Elevator_Transition3_4;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition_4 = K2Node_CustomEvent_BP_Elevator_Transition_4;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition_3 = K2Node_CustomEvent_BP_Elevator_Transition_3;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition3_3 = K2Node_CustomEvent_BP_Elevator_Transition3_3;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition3_2 = K2Node_CustomEvent_BP_Elevator_Transition3_2;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition3_1 = K2Node_CustomEvent_BP_Elevator_Transition3_1;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition3 = K2Node_CustomEvent_BP_Elevator_Transition3;
	Parms.K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Maproom_1 = K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Maproom_1;
	Parms.K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Hench = K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Hench;
	Parms.K2Node_CustomEvent_Sound = K2Node_CustomEvent_Sound;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition_2 = K2Node_CustomEvent_BP_Elevator_Transition_2;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition_1 = K2Node_CustomEvent_BP_Elevator_Transition_1;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition = K2Node_CustomEvent_BP_Elevator_Transition;
	Parms.K2Node_CustomEvent_BP_Battlepass_LightSwitcher_TNTINA = K2Node_CustomEvent_BP_Battlepass_LightSwitcher_TNTINA;
	Parms.K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Maproom = K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Maproom;
	Parms.CallFunc_IsReversed_ReturnValue = CallFunc_IsReversed_ReturnValue;
	Parms.K2Node_CustomEvent_Camera_Root_Movement_1 = K2Node_CustomEvent_Camera_Root_Movement_1;
	Parms.K2Node_CustomEvent_bStreamIn_1 = K2Node_CustomEvent_bStreamIn_1;
	Parms.CallFunc_IsReversed_ReturnValue_1 = CallFunc_IsReversed_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


