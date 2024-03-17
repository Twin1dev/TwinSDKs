#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Photographer_Intro_Animation.SequenceDirector_C
// (None)

class UClass* USequenceDirector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SequenceDirector_C");

	return Clss;
}


// SequenceDirector_C Photographer_Intro_Animation.Default__SequenceDirector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USequenceDirector_C* USequenceDirector_C::GetDefaultObj()
{
	static class USequenceDirector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USequenceDirector_C*>(USequenceDirector_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Photographer_Intro_Animation.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Battlepass_LightSwitcher_C*BP_Battlepass_LightSwitcher_Maproom                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_2(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher_Maproom)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_2");

	Params::USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_2_Params Parms{};

	Parms.BP_Battlepass_LightSwitcher_Maproom = BP_Battlepass_LightSwitcher_Maproom;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Photographer_Intro_Animation.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Battlepass_LightSwitcher_C*BP_Battlepass_LightSwitcher_Adventure                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_1(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher_Adventure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_1");

	Params::USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_1_Params Parms{};

	Parms.BP_Battlepass_LightSwitcher_Adventure = BP_Battlepass_LightSwitcher_Adventure;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Photographer_Intro_Animation.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFrontend_EventLevel_Camera_C*Camera_Root_Movement__Setting_Nav_Camera_for_once_Sequence_Completes_(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_0(class AFrontend_EventLevel_Camera_C* Camera_Root_Movement__Setting_Nav_Camera_for_once_Sequence_Completes_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_0");

	Params::USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_0_Params Parms{};

	Parms.Camera_Root_Movement__Setting_Nav_Camera_for_once_Sequence_Completes_ = Camera_Root_Movement__Setting_Nav_Camera_for_once_Sequence_Completes_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Photographer_Intro_Animation.SequenceDirector_C.Camera_Root_Movement_(Setting_Nav_Camera_for_once_Sequence_Completes)_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFrontend_EventLevel_Camera_C*Camera_Root_Movement__Setting_Nav_Camera_for_once_Sequence_Completes_(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bStreamIn                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USequenceDirector_C::Camera_Root_Movement__Setting_Nav_Camera_for_once_Sequence_Completes__Event_0(class AFrontend_EventLevel_Camera_C* Camera_Root_Movement__Setting_Nav_Camera_for_once_Sequence_Completes_, bool bStreamIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "Camera_Root_Movement_(Setting_Nav_Camera_for_once_Sequence_Completes)_Event_0");

	Params::USequenceDirector_C_Camera_Root_Movement__Setting_Nav_Camera_for_once_Sequence_Completes__Event_0_Params Parms{};

	Parms.Camera_Root_Movement__Setting_Nav_Camera_for_once_Sequence_Completes_ = Camera_Root_Movement__Setting_Nav_Camera_for_once_Sequence_Completes_;
	Parms.bStreamIn = bStreamIn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Photographer_Intro_Animation.SequenceDirector_C.BP_Battlepass_LightSwitcher_Adventure_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Battlepass_LightSwitcher_C*BP_Battlepass_LightSwitcher_Adventure                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Battlepass_LightSwitcher_Adventure_Event_0(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher_Adventure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Battlepass_LightSwitcher_Adventure_Event_0");

	Params::USequenceDirector_C_BP_Battlepass_LightSwitcher_Adventure_Event_0_Params Parms{};

	Parms.BP_Battlepass_LightSwitcher_Adventure = BP_Battlepass_LightSwitcher_Adventure;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Photographer_Intro_Animation.SequenceDirector_C.BP_Battlepass_LightSwitcher_Maproom_Event_0
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


// Function Photographer_Intro_Animation.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Battlepass_LightSwitcher_C*K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Maproom           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFrontend_EventLevel_Camera_C*K2Node_CustomEvent_Camera_Root_Movement__Setting_Nav_Camera_for_once_Sequence_Completes_(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bStreamIn                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Battlepass_LightSwitcher_C*K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Adventure         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::ExecuteUbergraph_SequenceDirector(int32 EntryPoint, class ABP_Battlepass_LightSwitcher_C* K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Maproom, class AFrontend_EventLevel_Camera_C* K2Node_CustomEvent_Camera_Root_Movement__Setting_Nav_Camera_for_once_Sequence_Completes_, bool K2Node_CustomEvent_bStreamIn, class ABP_Battlepass_LightSwitcher_C* K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Adventure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "ExecuteUbergraph_SequenceDirector");

	Params::USequenceDirector_C_ExecuteUbergraph_SequenceDirector_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Maproom = K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Maproom;
	Parms.K2Node_CustomEvent_Camera_Root_Movement__Setting_Nav_Camera_for_once_Sequence_Completes_ = K2Node_CustomEvent_Camera_Root_Movement__Setting_Nav_Camera_for_once_Sequence_Completes_;
	Parms.K2Node_CustomEvent_bStreamIn = K2Node_CustomEvent_bStreamIn;
	Parms.K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Adventure = K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Adventure;

	UObject::ProcessEvent(Func, &Parms);

}

}


