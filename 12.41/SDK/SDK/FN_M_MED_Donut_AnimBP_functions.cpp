#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass M_MED_Donut_AnimBP.M_MED_Donut_AnimBP_C
// (None)

class UClass* UM_MED_Donut_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("M_MED_Donut_AnimBP_C");

	return Clss;
}


// M_MED_Donut_AnimBP_C M_MED_Donut_AnimBP.Default__M_MED_Donut_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UM_MED_Donut_AnimBP_C* UM_MED_Donut_AnimBP_C::GetDefaultObj()
{
	static class UM_MED_Donut_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UM_MED_Donut_AnimBP_C*>(UM_MED_Donut_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function M_MED_Donut_AnimBP.M_MED_Donut_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UM_MED_Donut_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M_MED_Donut_AnimBP_C", "AnimGraph");

	Params::UM_MED_Donut_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function M_MED_Donut_AnimBP.M_MED_Donut_AnimBP_C.OnBeginCrouching
// (Event, Public, BlueprintEvent)
// Parameters:

void UM_MED_Donut_AnimBP_C::OnBeginCrouching()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M_MED_Donut_AnimBP_C", "OnBeginCrouching");



	UObject::ProcessEvent(Func, nullptr);

}


// Function M_MED_Donut_AnimBP.M_MED_Donut_AnimBP_C.OnEndCrouching
// (Event, Public, BlueprintEvent)
// Parameters:

void UM_MED_Donut_AnimBP_C::OnEndCrouching()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M_MED_Donut_AnimBP_C", "OnEndCrouching");



	UObject::ProcessEvent(Func, nullptr);

}


// Function M_MED_Donut_AnimBP.M_MED_Donut_AnimBP_C.ExecuteUbergraph_M_MED_Donut_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UM_MED_Donut_AnimBP_C::ExecuteUbergraph_M_MED_Donut_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M_MED_Donut_AnimBP_C", "ExecuteUbergraph_M_MED_Donut_AnimBP");

	Params::UM_MED_Donut_AnimBP_C_ExecuteUbergraph_M_MED_Donut_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


