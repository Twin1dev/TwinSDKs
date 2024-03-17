#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Wumba_Gadget_AnimBP.Wumba_Gadget_AnimBP_C
// (None)

class UClass* UWumba_Gadget_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Wumba_Gadget_AnimBP_C");

	return Clss;
}


// Wumba_Gadget_AnimBP_C Wumba_Gadget_AnimBP.Default__Wumba_Gadget_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWumba_Gadget_AnimBP_C* UWumba_Gadget_AnimBP_C::GetDefaultObj()
{
	static class UWumba_Gadget_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWumba_Gadget_AnimBP_C*>(UWumba_Gadget_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Wumba_Gadget_AnimBP.Wumba_Gadget_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UWumba_Gadget_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Wumba_Gadget_AnimBP_C", "AnimGraph");

	Params::UWumba_Gadget_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Wumba_Gadget_AnimBP.Wumba_Gadget_AnimBP_C.UpdateUpgradingVisuals
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWumba_Gadget_AnimBP_C::UpdateUpgradingVisuals(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Wumba_Gadget_AnimBP_C", "UpdateUpgradingVisuals");

	Params::UWumba_Gadget_AnimBP_C_UpdateUpgradingVisuals_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Wumba_Gadget_AnimBP.Wumba_Gadget_AnimBP_C.ExecuteUbergraph_Wumba_Gadget_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_NewValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWumba_Gadget_AnimBP_C::ExecuteUbergraph_Wumba_Gadget_AnimBP(int32 EntryPoint, bool K2Node_CustomEvent_NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Wumba_Gadget_AnimBP_C", "ExecuteUbergraph_Wumba_Gadget_AnimBP");

	Params::UWumba_Gadget_AnimBP_C_ExecuteUbergraph_Wumba_Gadget_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NewValue = K2Node_CustomEvent_NewValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


