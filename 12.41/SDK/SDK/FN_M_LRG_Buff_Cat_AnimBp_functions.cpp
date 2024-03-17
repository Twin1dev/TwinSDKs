#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass M_LRG_Buff_Cat_AnimBp.M_LRG_Buff_Cat_AnimBp_C
// (None)

class UClass* UM_LRG_Buff_Cat_AnimBp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("M_LRG_Buff_Cat_AnimBp_C");

	return Clss;
}


// M_LRG_Buff_Cat_AnimBp_C M_LRG_Buff_Cat_AnimBp.Default__M_LRG_Buff_Cat_AnimBp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UM_LRG_Buff_Cat_AnimBp_C* UM_LRG_Buff_Cat_AnimBp_C::GetDefaultObj()
{
	static class UM_LRG_Buff_Cat_AnimBp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UM_LRG_Buff_Cat_AnimBp_C*>(UM_LRG_Buff_Cat_AnimBp_C::StaticClass()->DefaultObject);

	return Default;
}


// Function M_LRG_Buff_Cat_AnimBp.M_LRG_Buff_Cat_AnimBp_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UM_LRG_Buff_Cat_AnimBp_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M_LRG_Buff_Cat_AnimBp_C", "AnimGraph");

	Params::UM_LRG_Buff_Cat_AnimBp_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function M_LRG_Buff_Cat_AnimBp.M_LRG_Buff_Cat_AnimBp_C.OnNotifyPartsStarted
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                        Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UM_LRG_Buff_Cat_AnimBp_C::OnNotifyPartsStarted(class FName Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M_LRG_Buff_Cat_AnimBp_C", "OnNotifyPartsStarted");

	Params::UM_LRG_Buff_Cat_AnimBp_C_OnNotifyPartsStarted_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function M_LRG_Buff_Cat_AnimBp.M_LRG_Buff_Cat_AnimBp_C.OnNotifyPartsStopped
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                        Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UM_LRG_Buff_Cat_AnimBp_C::OnNotifyPartsStopped(class FName Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M_LRG_Buff_Cat_AnimBp_C", "OnNotifyPartsStopped");

	Params::UM_LRG_Buff_Cat_AnimBp_C_OnNotifyPartsStopped_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function M_LRG_Buff_Cat_AnimBp.M_LRG_Buff_Cat_AnimBp_C.ExecuteUbergraph_M_LRG_Buff_Cat_AnimBp
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_Context_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_Context                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UM_LRG_Buff_Cat_AnimBp_C::ExecuteUbergraph_M_LRG_Buff_Cat_AnimBp(int32 EntryPoint, class FName K2Node_Event_Context_1, class FName K2Node_Event_Context, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M_LRG_Buff_Cat_AnimBp_C", "ExecuteUbergraph_M_LRG_Buff_Cat_AnimBp");

	Params::UM_LRG_Buff_Cat_AnimBp_C_ExecuteUbergraph_M_LRG_Buff_Cat_AnimBp_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Context_1 = K2Node_Event_Context_1;
	Parms.K2Node_Event_Context = K2Node_Event_Context;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


