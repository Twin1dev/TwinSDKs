#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Earpiece_Gadget_AnimBP.Earpiece_Gadget_AnimBP_C
// (None)

class UClass* UEarpiece_Gadget_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Earpiece_Gadget_AnimBP_C");

	return Clss;
}


// Earpiece_Gadget_AnimBP_C Earpiece_Gadget_AnimBP.Default__Earpiece_Gadget_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEarpiece_Gadget_AnimBP_C* UEarpiece_Gadget_AnimBP_C::GetDefaultObj()
{
	static class UEarpiece_Gadget_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEarpiece_Gadget_AnimBP_C*>(UEarpiece_Gadget_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Earpiece_Gadget_AnimBP.Earpiece_Gadget_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UEarpiece_Gadget_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Earpiece_Gadget_AnimBP_C", "AnimGraph");

	Params::UEarpiece_Gadget_AnimBP_C_AnimGraph_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Earpiece_Gadget_AnimBP.Earpiece_Gadget_AnimBP_C.ExecuteUbergraph_Earpiece_Gadget_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEarpiece_Gadget_AnimBP_C::ExecuteUbergraph_Earpiece_Gadget_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Earpiece_Gadget_AnimBP_C", "ExecuteUbergraph_Earpiece_Gadget_AnimBP");

	Params::UEarpiece_Gadget_AnimBP_C_ExecuteUbergraph_Earpiece_Gadget_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


