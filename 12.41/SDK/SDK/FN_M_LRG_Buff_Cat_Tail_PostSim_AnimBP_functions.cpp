#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass M_LRG_Buff_Cat_Tail_PostSim_AnimBP.M_LRG_Buff_Cat_Tail_PostSim_AnimBP_C
// (None)

class UClass* UM_LRG_Buff_Cat_Tail_PostSim_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("M_LRG_Buff_Cat_Tail_PostSim_AnimBP_C");

	return Clss;
}


// M_LRG_Buff_Cat_Tail_PostSim_AnimBP_C M_LRG_Buff_Cat_Tail_PostSim_AnimBP.Default__M_LRG_Buff_Cat_Tail_PostSim_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UM_LRG_Buff_Cat_Tail_PostSim_AnimBP_C* UM_LRG_Buff_Cat_Tail_PostSim_AnimBP_C::GetDefaultObj()
{
	static class UM_LRG_Buff_Cat_Tail_PostSim_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UM_LRG_Buff_Cat_Tail_PostSim_AnimBP_C*>(UM_LRG_Buff_Cat_Tail_PostSim_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function M_LRG_Buff_Cat_Tail_PostSim_AnimBP.M_LRG_Buff_Cat_Tail_PostSim_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UM_LRG_Buff_Cat_Tail_PostSim_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M_LRG_Buff_Cat_Tail_PostSim_AnimBP_C", "AnimGraph");

	Params::UM_LRG_Buff_Cat_Tail_PostSim_AnimBP_C_AnimGraph_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function M_LRG_Buff_Cat_Tail_PostSim_AnimBP.M_LRG_Buff_Cat_Tail_PostSim_AnimBP_C.OnCharacterCustomizationLoaded
// (Event, Public, BlueprintEvent)
// Parameters:

void UM_LRG_Buff_Cat_Tail_PostSim_AnimBP_C::OnCharacterCustomizationLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M_LRG_Buff_Cat_Tail_PostSim_AnimBP_C", "OnCharacterCustomizationLoaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function M_LRG_Buff_Cat_Tail_PostSim_AnimBP.M_LRG_Buff_Cat_Tail_PostSim_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UM_LRG_Buff_Cat_Tail_PostSim_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M_LRG_Buff_Cat_Tail_PostSim_AnimBP_C", "BlueprintUpdateAnimation");

	Params::UM_LRG_Buff_Cat_Tail_PostSim_AnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function M_LRG_Buff_Cat_Tail_PostSim_AnimBP.M_LRG_Buff_Cat_Tail_PostSim_AnimBP_C.ExecuteUbergraph_M_LRG_Buff_Cat_Tail_PostSim_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckForBackbling_bIsWearingBackbling                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckForBackbling_bIsBackblingLong                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetPartSkeletalMeshComponent_ReturnValue                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetOwnerDirection_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UM_LRG_Buff_Cat_Tail_PostSim_AnimBP_C::ExecuteUbergraph_M_LRG_Buff_Cat_Tail_PostSim_AnimBP(int32 EntryPoint, float K2Node_Event_DeltaTimeX, bool CallFunc_CheckForBackbling_bIsWearingBackbling, bool CallFunc_CheckForBackbling_bIsBackblingLong, class USkeletalMeshComponent* CallFunc_GetPartSkeletalMeshComponent_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_GetOwnerDirection_ReturnValue, float CallFunc_Abs_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M_LRG_Buff_Cat_Tail_PostSim_AnimBP_C", "ExecuteUbergraph_M_LRG_Buff_Cat_Tail_PostSim_AnimBP");

	Params::UM_LRG_Buff_Cat_Tail_PostSim_AnimBP_C_ExecuteUbergraph_M_LRG_Buff_Cat_Tail_PostSim_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_CheckForBackbling_bIsWearingBackbling = CallFunc_CheckForBackbling_bIsWearingBackbling;
	Parms.CallFunc_CheckForBackbling_bIsBackblingLong = CallFunc_CheckForBackbling_bIsBackblingLong;
	Parms.CallFunc_GetPartSkeletalMeshComponent_ReturnValue = CallFunc_GetPartSkeletalMeshComponent_ReturnValue;
	Parms.CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue = CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetOwnerDirection_ReturnValue = CallFunc_GetOwnerDirection_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


