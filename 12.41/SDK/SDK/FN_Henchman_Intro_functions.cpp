#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Henchman_Intro.SequenceDirector_C
// (None)

class UClass* USequenceDirector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SequenceDirector_C");

	return Clss;
}


// SequenceDirector_C Henchman_Intro.Default__SequenceDirector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USequenceDirector_C* USequenceDirector_C::GetDefaultObj()
{
	static class USequenceDirector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USequenceDirector_C*>(USequenceDirector_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Henchman_Intro.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_4
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFrontend_EventLevel_Camera_C*Camera_Root_Movement                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_4(class AFrontend_EventLevel_Camera_C* Camera_Root_Movement)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_4");

	Params::USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_4_Params Parms{};

	Parms.Camera_Root_Movement = Camera_Root_Movement;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Henchman_Intro.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_3
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFrontend_EventLevel_Camera_C*Camera_Root_Movement                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_3(class AFrontend_EventLevel_Camera_C* Camera_Root_Movement)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_3");

	Params::USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_3_Params Parms{};

	Parms.Camera_Root_Movement = Camera_Root_Movement;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Henchman_Intro.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Battlepass_LightSwitcher_C*BP_Battlepass_LightSwitcher_Hench                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_2(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher_Hench)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_2");

	Params::USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_2_Params Parms{};

	Parms.BP_Battlepass_LightSwitcher_Hench = BP_Battlepass_LightSwitcher_Hench;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Henchman_Intro.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Battlepass_LightSwitcher_C*BP_Battlepass_LightSwitcher_Hench                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_1(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher_Hench)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_1");

	Params::USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_1_Params Parms{};

	Parms.BP_Battlepass_LightSwitcher_Hench = BP_Battlepass_LightSwitcher_Hench;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Henchman_Intro.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Battlepass_LightSwitcher_C*BP_Battlepass_LightSwitcher_Maproom                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_0(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher_Maproom)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_0");

	Params::USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_0_Params Parms{};

	Parms.BP_Battlepass_LightSwitcher_Maproom = BP_Battlepass_LightSwitcher_Maproom;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Henchman_Intro.SequenceDirector_C.BP_Battlepass_LightSwitcher_Maproom_Event_0
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


// Function Henchman_Intro.SequenceDirector_C.BP_Battlepass_LightSwitcher_Hench_Event_0
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


// Function Henchman_Intro.SequenceDirector_C.BP_Battlepass_LightSwitcher_Hench_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Battlepass_LightSwitcher_C*BP_Battlepass_LightSwitcher_Hench                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Battlepass_LightSwitcher_Hench_Event_1(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher_Hench)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Battlepass_LightSwitcher_Hench_Event_1");

	Params::USequenceDirector_C_BP_Battlepass_LightSwitcher_Hench_Event_1_Params Parms{};

	Parms.BP_Battlepass_LightSwitcher_Hench = BP_Battlepass_LightSwitcher_Hench;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Henchman_Intro.SequenceDirector_C.BP_Battlepass_LightSwitcher_Hench_Event_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Battlepass_LightSwitcher_C*BP_Battlepass_LightSwitcher_Hench                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Battlepass_LightSwitcher_Hench_Event_2(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher_Hench)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Battlepass_LightSwitcher_Hench_Event_2");

	Params::USequenceDirector_C_BP_Battlepass_LightSwitcher_Hench_Event_2_Params Parms{};

	Parms.BP_Battlepass_LightSwitcher_Hench = BP_Battlepass_LightSwitcher_Hench;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Henchman_Intro.SequenceDirector_C.Camera_Root_Movement_Event_0
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


// Function Henchman_Intro.SequenceDirector_C.Camera_Root_Movement_Event_1
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


// Function Henchman_Intro.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFrontend_EventLevel_Camera_C*K2Node_CustomEvent_Camera_Root_Movement                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bStreamIn                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Battlepass_LightSwitcher_C*K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Maproom           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Battlepass_LightSwitcher_C*K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Hench_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Battlepass_LightSwitcher_C*K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Hench_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Battlepass_LightSwitcher_C*K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Hench             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFrontend_EventLevel_Camera_C*K2Node_CustomEvent_Camera_Root_Movement_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bStreamIn_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void USequenceDirector_C::ExecuteUbergraph_SequenceDirector(int32 EntryPoint, class AFrontend_EventLevel_Camera_C* K2Node_CustomEvent_Camera_Root_Movement, bool K2Node_CustomEvent_bStreamIn, class ABP_Battlepass_LightSwitcher_C* K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Maproom, class ABP_Battlepass_LightSwitcher_C* K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Hench_2, class ABP_Battlepass_LightSwitcher_C* K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Hench_1, class ABP_Battlepass_LightSwitcher_C* K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Hench, class AFrontend_EventLevel_Camera_C* K2Node_CustomEvent_Camera_Root_Movement_1, bool K2Node_CustomEvent_bStreamIn_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "ExecuteUbergraph_SequenceDirector");

	Params::USequenceDirector_C_ExecuteUbergraph_SequenceDirector_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Camera_Root_Movement = K2Node_CustomEvent_Camera_Root_Movement;
	Parms.K2Node_CustomEvent_bStreamIn = K2Node_CustomEvent_bStreamIn;
	Parms.K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Maproom = K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Maproom;
	Parms.K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Hench_2 = K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Hench_2;
	Parms.K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Hench_1 = K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Hench_1;
	Parms.K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Hench = K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Hench;
	Parms.K2Node_CustomEvent_Camera_Root_Movement_1 = K2Node_CustomEvent_Camera_Root_Movement_1;
	Parms.K2Node_CustomEvent_bStreamIn_1 = K2Node_CustomEvent_bStreamIn_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


