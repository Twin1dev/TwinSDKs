#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass S12_MainRoom_ToChangingRoom.SequenceDirector_C
// (None)

class UClass* USequenceDirector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SequenceDirector_C");

	return Clss;
}


// SequenceDirector_C S12_MainRoom_ToChangingRoom.Default__SequenceDirector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USequenceDirector_C* USequenceDirector_C::GetDefaultObj()
{
	static class USequenceDirector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USequenceDirector_C*>(USequenceDirector_C::StaticClass()->DefaultObject);

	return Default;
}


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_17
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_17()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_17");



	UObject::ProcessEvent(Func, nullptr);

}


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_16
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_16()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_16");



	UObject::ProcessEvent(Func, nullptr);

}


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_15
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Battlepass_LightSwitcher_C*BP_Battlepass_LightSwitcher_Maproom                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_15(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher_Maproom)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_15");

	Params::USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_15_Params Parms{};

	Parms.BP_Battlepass_LightSwitcher_Maproom = BP_Battlepass_LightSwitcher_Maproom;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_14
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Battlepass_LightSwitcher_C*BP_Battlepass_LightSwitcher2                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_14(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_14");

	Params::USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_14_Params Parms{};

	Parms.BP_Battlepass_LightSwitcher2 = BP_Battlepass_LightSwitcher2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_13
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition4                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_13(class ABP_Elevator_Transition_C* BP_Elevator_Transition4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_13");

	Params::USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_13_Params Parms{};

	Parms.BP_Elevator_Transition4 = BP_Elevator_Transition4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_12
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition4                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_12(class ABP_Elevator_Transition_C* BP_Elevator_Transition4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_12");

	Params::USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_12_Params Parms{};

	Parms.BP_Elevator_Transition4 = BP_Elevator_Transition4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_11
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition4                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_11(class ABP_Elevator_Transition_C* BP_Elevator_Transition4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_11");

	Params::USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_11_Params Parms{};

	Parms.BP_Elevator_Transition4 = BP_Elevator_Transition4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_10
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition4                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_10(class ABP_Elevator_Transition_C* BP_Elevator_Transition4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_10");

	Params::USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_10_Params Parms{};

	Parms.BP_Elevator_Transition4 = BP_Elevator_Transition4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_9
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition4                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_9(class ABP_Elevator_Transition_C* BP_Elevator_Transition4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_9");

	Params::USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_9_Params Parms{};

	Parms.BP_Elevator_Transition4 = BP_Elevator_Transition4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_8
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition4                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_8(class ABP_Elevator_Transition_C* BP_Elevator_Transition4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_8");

	Params::USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_8_Params Parms{};

	Parms.BP_Elevator_Transition4 = BP_Elevator_Transition4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_7
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition2                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_7(class ABP_Elevator_Transition_C* BP_Elevator_Transition2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_7");

	Params::USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_7_Params Parms{};

	Parms.BP_Elevator_Transition2 = BP_Elevator_Transition2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_6
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition2                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_6(class ABP_Elevator_Transition_C* BP_Elevator_Transition2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_6");

	Params::USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_6_Params Parms{};

	Parms.BP_Elevator_Transition2 = BP_Elevator_Transition2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_5
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_4
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition2                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_4(class ABP_Elevator_Transition_C* BP_Elevator_Transition2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_4");

	Params::USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_4_Params Parms{};

	Parms.BP_Elevator_Transition2 = BP_Elevator_Transition2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_3
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition2                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_3(class ABP_Elevator_Transition_C* BP_Elevator_Transition2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_3");

	Params::USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_3_Params Parms{};

	Parms.BP_Elevator_Transition2 = BP_Elevator_Transition2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition2                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_2(class ABP_Elevator_Transition_C* BP_Elevator_Transition2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_2");

	Params::USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_2_Params Parms{};

	Parms.BP_Elevator_Transition2 = BP_Elevator_Transition2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition2                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_1(class ABP_Elevator_Transition_C* BP_Elevator_Transition2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_1");

	Params::USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_1_Params Parms{};

	Parms.BP_Elevator_Transition2 = BP_Elevator_Transition2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition2                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_0(class ABP_Elevator_Transition_C* BP_Elevator_Transition2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_0");

	Params::USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_0_Params Parms{};

	Parms.BP_Elevator_Transition2 = BP_Elevator_Transition2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.BP_Elevator_Transition4_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition4                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Elevator_Transition4_Event_0(class ABP_Elevator_Transition_C* BP_Elevator_Transition4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Elevator_Transition4_Event_0");

	Params::USequenceDirector_C_BP_Elevator_Transition4_Event_0_Params Parms{};

	Parms.BP_Elevator_Transition4 = BP_Elevator_Transition4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.BP_Elevator_Transition4_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition4                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Elevator_Transition4_Event_1(class ABP_Elevator_Transition_C* BP_Elevator_Transition4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Elevator_Transition4_Event_1");

	Params::USequenceDirector_C_BP_Elevator_Transition4_Event_1_Params Parms{};

	Parms.BP_Elevator_Transition4 = BP_Elevator_Transition4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.BP_Elevator_Transition4_Event_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition4                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Elevator_Transition4_Event_2(class ABP_Elevator_Transition_C* BP_Elevator_Transition4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Elevator_Transition4_Event_2");

	Params::USequenceDirector_C_BP_Elevator_Transition4_Event_2_Params Parms{};

	Parms.BP_Elevator_Transition4 = BP_Elevator_Transition4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.BP_Elevator_Transition4_Event_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition4                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Elevator_Transition4_Event_3(class ABP_Elevator_Transition_C* BP_Elevator_Transition4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Elevator_Transition4_Event_3");

	Params::USequenceDirector_C_BP_Elevator_Transition4_Event_3_Params Parms{};

	Parms.BP_Elevator_Transition4 = BP_Elevator_Transition4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.BP_Elevator_Transition4_Event_4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition4                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Elevator_Transition4_Event_4(class ABP_Elevator_Transition_C* BP_Elevator_Transition4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Elevator_Transition4_Event_4");

	Params::USequenceDirector_C_BP_Elevator_Transition4_Event_4_Params Parms{};

	Parms.BP_Elevator_Transition4 = BP_Elevator_Transition4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.BP_Elevator_Transition2_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition2                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Elevator_Transition2_Event_0(class ABP_Elevator_Transition_C* BP_Elevator_Transition2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Elevator_Transition2_Event_0");

	Params::USequenceDirector_C_BP_Elevator_Transition2_Event_0_Params Parms{};

	Parms.BP_Elevator_Transition2 = BP_Elevator_Transition2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.BP_Elevator_Transition2_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition2                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Elevator_Transition2_Event_1(class ABP_Elevator_Transition_C* BP_Elevator_Transition2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Elevator_Transition2_Event_1");

	Params::USequenceDirector_C_BP_Elevator_Transition2_Event_1_Params Parms{};

	Parms.BP_Elevator_Transition2 = BP_Elevator_Transition2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.BP_Elevator_Transition2_Event_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition2                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Elevator_Transition2_Event_2(class ABP_Elevator_Transition_C* BP_Elevator_Transition2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Elevator_Transition2_Event_2");

	Params::USequenceDirector_C_BP_Elevator_Transition2_Event_2_Params Parms{};

	Parms.BP_Elevator_Transition2 = BP_Elevator_Transition2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.BP_Elevator_Transition4_Event_5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition4                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Elevator_Transition4_Event_5(class ABP_Elevator_Transition_C* BP_Elevator_Transition4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Elevator_Transition4_Event_5");

	Params::USequenceDirector_C_BP_Elevator_Transition4_Event_5_Params Parms{};

	Parms.BP_Elevator_Transition4 = BP_Elevator_Transition4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.BP_Elevator_Transition4_Event_6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition4                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Elevator_Transition4_Event_6(class ABP_Elevator_Transition_C* BP_Elevator_Transition4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Elevator_Transition4_Event_6");

	Params::USequenceDirector_C_BP_Elevator_Transition4_Event_6_Params Parms{};

	Parms.BP_Elevator_Transition4 = BP_Elevator_Transition4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.BP_Elevator_Transition4_Event_7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition4                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Elevator_Transition4_Event_7(class ABP_Elevator_Transition_C* BP_Elevator_Transition4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Elevator_Transition4_Event_7");

	Params::USequenceDirector_C_BP_Elevator_Transition4_Event_7_Params Parms{};

	Parms.BP_Elevator_Transition4 = BP_Elevator_Transition4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.BP_Elevator_Transition4_Event_8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition4                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Elevator_Transition4_Event_8(class ABP_Elevator_Transition_C* BP_Elevator_Transition4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Elevator_Transition4_Event_8");

	Params::USequenceDirector_C_BP_Elevator_Transition4_Event_8_Params Parms{};

	Parms.BP_Elevator_Transition4 = BP_Elevator_Transition4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.BP_Elevator_Transition2_Event_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition2                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Elevator_Transition2_Event_3(class ABP_Elevator_Transition_C* BP_Elevator_Transition2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Elevator_Transition2_Event_3");

	Params::USequenceDirector_C_BP_Elevator_Transition2_Event_3_Params Parms{};

	Parms.BP_Elevator_Transition2 = BP_Elevator_Transition2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.BP_Elevator_Transition2_Event_4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition2                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Elevator_Transition2_Event_4(class ABP_Elevator_Transition_C* BP_Elevator_Transition2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Elevator_Transition2_Event_4");

	Params::USequenceDirector_C_BP_Elevator_Transition2_Event_4_Params Parms{};

	Parms.BP_Elevator_Transition2 = BP_Elevator_Transition2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.BP_Elevator_Transition2_Event_5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition2                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Elevator_Transition2_Event_5(class ABP_Elevator_Transition_C* BP_Elevator_Transition2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Elevator_Transition2_Event_5");

	Params::USequenceDirector_C_BP_Elevator_Transition2_Event_5_Params Parms{};

	Parms.BP_Elevator_Transition2 = BP_Elevator_Transition2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.BP_Elevator_Transition2_Event_6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition2                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Elevator_Transition2_Event_6(class ABP_Elevator_Transition_C* BP_Elevator_Transition2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Elevator_Transition2_Event_6");

	Params::USequenceDirector_C_BP_Elevator_Transition2_Event_6_Params Parms{};

	Parms.BP_Elevator_Transition2 = BP_Elevator_Transition2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.BP_Elevator_Transition2_Event_7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition2                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Elevator_Transition2_Event_7(class ABP_Elevator_Transition_C* BP_Elevator_Transition2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Elevator_Transition2_Event_7");

	Params::USequenceDirector_C_BP_Elevator_Transition2_Event_7_Params Parms{};

	Parms.BP_Elevator_Transition2 = BP_Elevator_Transition2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.BP_Elevator_Transition2_Event_8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition2                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Elevator_Transition2_Event_8(class ABP_Elevator_Transition_C* BP_Elevator_Transition2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Elevator_Transition2_Event_8");

	Params::USequenceDirector_C_BP_Elevator_Transition2_Event_8_Params Parms{};

	Parms.BP_Elevator_Transition2 = BP_Elevator_Transition2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.BP_Elevator_Transition4_Event_9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition4                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Elevator_Transition4_Event_9(class ABP_Elevator_Transition_C* BP_Elevator_Transition4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Elevator_Transition4_Event_9");

	Params::USequenceDirector_C_BP_Elevator_Transition4_Event_9_Params Parms{};

	Parms.BP_Elevator_Transition4 = BP_Elevator_Transition4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.BP_Elevator_Transition4_Event_10
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition4                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Elevator_Transition4_Event_10(class ABP_Elevator_Transition_C* BP_Elevator_Transition4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Elevator_Transition4_Event_10");

	Params::USequenceDirector_C_BP_Elevator_Transition4_Event_10_Params Parms{};

	Parms.BP_Elevator_Transition4 = BP_Elevator_Transition4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.BP_Elevator_Transition4_Event_11
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition4                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Elevator_Transition4_Event_11(class ABP_Elevator_Transition_C* BP_Elevator_Transition4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Elevator_Transition4_Event_11");

	Params::USequenceDirector_C_BP_Elevator_Transition4_Event_11_Params Parms{};

	Parms.BP_Elevator_Transition4 = BP_Elevator_Transition4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.BP_Elevator_Transition4_Event_12
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition4                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Elevator_Transition4_Event_12(class ABP_Elevator_Transition_C* BP_Elevator_Transition4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Elevator_Transition4_Event_12");

	Params::USequenceDirector_C_BP_Elevator_Transition4_Event_12_Params Parms{};

	Parms.BP_Elevator_Transition4 = BP_Elevator_Transition4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.BP_Elevator_Transition4_Event_13
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition4                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Elevator_Transition4_Event_13(class ABP_Elevator_Transition_C* BP_Elevator_Transition4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Elevator_Transition4_Event_13");

	Params::USequenceDirector_C_BP_Elevator_Transition4_Event_13_Params Parms{};

	Parms.BP_Elevator_Transition4 = BP_Elevator_Transition4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.BP_Elevator_Transition4_Event_14
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_Transition_C*   BP_Elevator_Transition4                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Elevator_Transition4_Event_14(class ABP_Elevator_Transition_C* BP_Elevator_Transition4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Elevator_Transition4_Event_14");

	Params::USequenceDirector_C_BP_Elevator_Transition4_Event_14_Params Parms{};

	Parms.BP_Elevator_Transition4 = BP_Elevator_Transition4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.BP_Battlepass_LightSwitcher2_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Battlepass_LightSwitcher_C*BP_Battlepass_LightSwitcher2                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Battlepass_LightSwitcher2_Event_0(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Battlepass_LightSwitcher2_Event_0");

	Params::USequenceDirector_C_BP_Battlepass_LightSwitcher2_Event_0_Params Parms{};

	Parms.BP_Battlepass_LightSwitcher2 = BP_Battlepass_LightSwitcher2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.BP_Battlepass_LightSwitcher2_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Battlepass_LightSwitcher_C*BP_Battlepass_LightSwitcher2                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Battlepass_LightSwitcher2_Event_1(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Battlepass_LightSwitcher2_Event_1");

	Params::USequenceDirector_C_BP_Battlepass_LightSwitcher2_Event_1_Params Parms{};

	Parms.BP_Battlepass_LightSwitcher2 = BP_Battlepass_LightSwitcher2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.BP_Battlepass_LightSwitcher2_Event_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Battlepass_LightSwitcher_C*BP_Battlepass_LightSwitcher2                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Battlepass_LightSwitcher2_Event_2(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Battlepass_LightSwitcher2_Event_2");

	Params::USequenceDirector_C_BP_Battlepass_LightSwitcher2_Event_2_Params Parms{};

	Parms.BP_Battlepass_LightSwitcher2 = BP_Battlepass_LightSwitcher2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.BP_Battlepass_LightSwitcher2_Event_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Battlepass_LightSwitcher_C*BP_Battlepass_LightSwitcher2                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Battlepass_LightSwitcher2_Event_3(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Battlepass_LightSwitcher2_Event_3");

	Params::USequenceDirector_C_BP_Battlepass_LightSwitcher2_Event_3_Params Parms{};

	Parms.BP_Battlepass_LightSwitcher2 = BP_Battlepass_LightSwitcher2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.BP_Battlepass_LightSwitcher_Maproom_Event_0
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


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.BP_Battlepass_LightSwitcher_Maproom_Event_1
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


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.BP_Battlepass_LightSwitcher2_Event_4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Battlepass_LightSwitcher_C*BP_Battlepass_LightSwitcher2                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Battlepass_LightSwitcher2_Event_4(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "BP_Battlepass_LightSwitcher2_Event_4");

	Params::USequenceDirector_C_BP_Battlepass_LightSwitcher2_Event_4_Params Parms{};

	Parms.BP_Battlepass_LightSwitcher2 = BP_Battlepass_LightSwitcher2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.Audio Camera Movemt Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::Audio_Camera_Movemt_Event(class USoundBase* Sound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "Audio Camera Movemt Event");

	Params::USequenceDirector_C_Audio_Camera_Movemt_Event_Params Parms{};

	Parms.Sound = Sound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.Camera_Root_Movement_Event_0
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


// Function S12_MainRoom_ToChangingRoom.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFrontend_EventLevel_Camera_C*K2Node_CustomEvent_Camera_Root_Movement                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bStreamIn                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition4_14                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition4_13                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition4_12                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition4_11                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition4_10                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition2_8                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition2_7                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition2_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition4_9                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition4_8                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition4_7                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition4_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition2_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition2_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition2_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition2_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition2_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition4_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition4_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition4_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition4_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition4_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Elevator_Transition_C*   K2Node_CustomEvent_BP_Elevator_Transition4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Battlepass_LightSwitcher_C*K2Node_CustomEvent_BP_Battlepass_LightSwitcher2_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Battlepass_LightSwitcher_C*K2Node_CustomEvent_BP_Battlepass_LightSwitcher2_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Battlepass_LightSwitcher_C*K2Node_CustomEvent_BP_Battlepass_LightSwitcher2_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Battlepass_LightSwitcher_C*K2Node_CustomEvent_BP_Battlepass_LightSwitcher2_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Battlepass_LightSwitcher_C*K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Maproom_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Battlepass_LightSwitcher_C*K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Maproom           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Battlepass_LightSwitcher_C*K2Node_CustomEvent_BP_Battlepass_LightSwitcher2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_CustomEvent_Sound                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsReversed_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsReversed_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void USequenceDirector_C::ExecuteUbergraph_SequenceDirector(int32 EntryPoint, class AFrontend_EventLevel_Camera_C* K2Node_CustomEvent_Camera_Root_Movement, bool K2Node_CustomEvent_bStreamIn, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition4_14, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition4_13, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition4_12, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition4_11, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition4_10, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition2_8, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition2_7, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition2_6, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition4_9, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition4_8, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition4_7, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition4_6, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition2_5, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition2_4, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition2_3, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition2_2, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition2_1, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition2, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition4_5, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition4_4, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition4_3, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition4_2, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition4_1, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition4, class ABP_Battlepass_LightSwitcher_C* K2Node_CustomEvent_BP_Battlepass_LightSwitcher2_4, class ABP_Battlepass_LightSwitcher_C* K2Node_CustomEvent_BP_Battlepass_LightSwitcher2_3, class ABP_Battlepass_LightSwitcher_C* K2Node_CustomEvent_BP_Battlepass_LightSwitcher2_2, class ABP_Battlepass_LightSwitcher_C* K2Node_CustomEvent_BP_Battlepass_LightSwitcher2_1, class ABP_Battlepass_LightSwitcher_C* K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Maproom_1, class ABP_Battlepass_LightSwitcher_C* K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Maproom, class ABP_Battlepass_LightSwitcher_C* K2Node_CustomEvent_BP_Battlepass_LightSwitcher2, class USoundBase* K2Node_CustomEvent_Sound, bool CallFunc_IsReversed_ReturnValue, bool CallFunc_IsReversed_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "ExecuteUbergraph_SequenceDirector");

	Params::USequenceDirector_C_ExecuteUbergraph_SequenceDirector_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Camera_Root_Movement = K2Node_CustomEvent_Camera_Root_Movement;
	Parms.K2Node_CustomEvent_bStreamIn = K2Node_CustomEvent_bStreamIn;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition4_14 = K2Node_CustomEvent_BP_Elevator_Transition4_14;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition4_13 = K2Node_CustomEvent_BP_Elevator_Transition4_13;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition4_12 = K2Node_CustomEvent_BP_Elevator_Transition4_12;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition4_11 = K2Node_CustomEvent_BP_Elevator_Transition4_11;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition4_10 = K2Node_CustomEvent_BP_Elevator_Transition4_10;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition2_8 = K2Node_CustomEvent_BP_Elevator_Transition2_8;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition2_7 = K2Node_CustomEvent_BP_Elevator_Transition2_7;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition2_6 = K2Node_CustomEvent_BP_Elevator_Transition2_6;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition4_9 = K2Node_CustomEvent_BP_Elevator_Transition4_9;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition4_8 = K2Node_CustomEvent_BP_Elevator_Transition4_8;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition4_7 = K2Node_CustomEvent_BP_Elevator_Transition4_7;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition4_6 = K2Node_CustomEvent_BP_Elevator_Transition4_6;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition2_5 = K2Node_CustomEvent_BP_Elevator_Transition2_5;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition2_4 = K2Node_CustomEvent_BP_Elevator_Transition2_4;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition2_3 = K2Node_CustomEvent_BP_Elevator_Transition2_3;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition2_2 = K2Node_CustomEvent_BP_Elevator_Transition2_2;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition2_1 = K2Node_CustomEvent_BP_Elevator_Transition2_1;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition2 = K2Node_CustomEvent_BP_Elevator_Transition2;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition4_5 = K2Node_CustomEvent_BP_Elevator_Transition4_5;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition4_4 = K2Node_CustomEvent_BP_Elevator_Transition4_4;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition4_3 = K2Node_CustomEvent_BP_Elevator_Transition4_3;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition4_2 = K2Node_CustomEvent_BP_Elevator_Transition4_2;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition4_1 = K2Node_CustomEvent_BP_Elevator_Transition4_1;
	Parms.K2Node_CustomEvent_BP_Elevator_Transition4 = K2Node_CustomEvent_BP_Elevator_Transition4;
	Parms.K2Node_CustomEvent_BP_Battlepass_LightSwitcher2_4 = K2Node_CustomEvent_BP_Battlepass_LightSwitcher2_4;
	Parms.K2Node_CustomEvent_BP_Battlepass_LightSwitcher2_3 = K2Node_CustomEvent_BP_Battlepass_LightSwitcher2_3;
	Parms.K2Node_CustomEvent_BP_Battlepass_LightSwitcher2_2 = K2Node_CustomEvent_BP_Battlepass_LightSwitcher2_2;
	Parms.K2Node_CustomEvent_BP_Battlepass_LightSwitcher2_1 = K2Node_CustomEvent_BP_Battlepass_LightSwitcher2_1;
	Parms.K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Maproom_1 = K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Maproom_1;
	Parms.K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Maproom = K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Maproom;
	Parms.K2Node_CustomEvent_BP_Battlepass_LightSwitcher2 = K2Node_CustomEvent_BP_Battlepass_LightSwitcher2;
	Parms.K2Node_CustomEvent_Sound = K2Node_CustomEvent_Sound;
	Parms.CallFunc_IsReversed_ReturnValue = CallFunc_IsReversed_ReturnValue;
	Parms.CallFunc_IsReversed_ReturnValue_1 = CallFunc_IsReversed_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


