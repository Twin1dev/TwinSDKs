#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass S12_BuffCat_Faction_ToInspect02.SequenceDirector_C
// (None)

class UClass* USequenceDirector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SequenceDirector_C");

	return Clss;
}


// SequenceDirector_C S12_BuffCat_Faction_ToInspect02.Default__SequenceDirector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USequenceDirector_C* USequenceDirector_C::GetDefaultObj()
{
	static class USequenceDirector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USequenceDirector_C*>(USequenceDirector_C::StaticClass()->DefaultObject);

	return Default;
}


// Function S12_BuffCat_Faction_ToInspect02.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function S12_BuffCat_Faction_ToInspect02.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function S12_BuffCat_Faction_ToInspect02.SequenceDirector_C.BP_Elevator_Transition_Event_0
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


// Function S12_BuffCat_Faction_ToInspect02.SequenceDirector_C.BP_Elevator_Transition_Event_1
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


// Function S12_BuffCat_Faction_ToInspect02.SequenceDirector_C.BP_Elevator_Transition_Event_2
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


// Function S12_BuffCat_Faction_ToInspect02.SequenceDirector_C.BP_Elevator_Transition3_Event_0
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


// Function S12_BuffCat_Faction_ToInspect02.SequenceDirector_C.BP_Elevator_Transition3_Event_1
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


// Function S12_BuffCat_Faction_ToInspect02.SequenceDirector_C.BP_Elevator_Transition_Event_3
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


// Function S12_BuffCat_Faction_ToInspect02.SequenceDirector_C.BP_Elevator_Transition_Event_4
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


// Function S12_BuffCat_Faction_ToInspect02.SequenceDirector_C.BP_Elevator_Transition3_Event_2
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


// Function S12_BuffCat_Faction_ToInspect02.SequenceDirector_C.BP_Elevator_Transition3_Event_3
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


// Function S12_BuffCat_Faction_ToInspect02.SequenceDirector_C.BP_Elevator_Transition_Event_5
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


// Function S12_BuffCat_Faction_ToInspect02.SequenceDirector_C.BP_Elevator_Transition_Event_6
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


// Function S12_BuffCat_Faction_ToInspect02.SequenceDirector_C.BP_Elevator_Transition3_Event_4
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


// Function S12_BuffCat_Faction_ToInspect02.SequenceDirector_C.Audio Camera Move Event
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


// Function S12_BuffCat_Faction_ToInspect02.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_CustomEvent_Sound                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition_6                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition_5                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition3_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition3_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition3_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition3_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::ExecuteUbergraph_SequenceDirector(int32 EntryPoint, class USoundBase* K2Node_CustomEvent_Sound, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition_6, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition_5, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition_4, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition3_4, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition3_3, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition_3, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition_2, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition3_2, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition3_1, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition_1, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "ExecuteUbergraph_SequenceDirector");

	Params::USequenceDirector_C_ExecuteUbergraph_SequenceDirector_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Sound = K2Node_CustomEvent_Sound;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition_6 = K2Node_CustomEvent_BP_Elevator_Transition_6;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition_5 = K2Node_CustomEvent_BP_Elevator_Transition_5;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition_4 = K2Node_CustomEvent_BP_Elevator_Transition_4;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition3_4 = K2Node_CustomEvent_BP_Elevator_Transition3_4;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition3_3 = K2Node_CustomEvent_BP_Elevator_Transition3_3;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition_3 = K2Node_CustomEvent_BP_Elevator_Transition_3;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition_2 = K2Node_CustomEvent_BP_Elevator_Transition_2;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition3_2 = K2Node_CustomEvent_BP_Elevator_Transition3_2;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition3_1 = K2Node_CustomEvent_BP_Elevator_Transition3_1;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition_1 = K2Node_CustomEvent_BP_Elevator_Transition_1;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition = K2Node_CustomEvent_BP_Elevator_Transition;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition3 = K2Node_CustomEvent_BP_Elevator_Transition3;

	UObject::ProcessEvent(Func, &Parms);

}

}


