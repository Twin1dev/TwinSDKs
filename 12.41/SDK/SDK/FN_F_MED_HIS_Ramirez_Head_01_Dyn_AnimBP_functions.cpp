#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP.F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C
// (None)

class UClass* UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C");

	return Clss;
}


// F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP.Default__F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C* UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C::GetDefaultObj()
{
	static class UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C*>(UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP.F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C", "AnimGraph");

	Params::UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C_AnimGraph_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP.F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP.F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C", "BlueprintUpdateAnimation");

	Params::UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP.F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C.ExecuteUbergraph_F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAlphaFromReferenceTransformDelta_AlphaOutput         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAlphaFromReferenceTransformDelta_RawOutput           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPlaylistUsesCustomCharacterParts_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C::ExecuteUbergraph_F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP(int32 EntryPoint, float CallFunc_GetAlphaFromReferenceTransformDelta_AlphaOutput, float CallFunc_GetAlphaFromReferenceTransformDelta_RawOutput, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue, bool CallFunc_GetPlaylistUsesCustomCharacterParts_ReturnValue, float K2Node_Event_DeltaTimeX, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C", "ExecuteUbergraph_F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP");

	Params::UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C_ExecuteUbergraph_F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAlphaFromReferenceTransformDelta_AlphaOutput = CallFunc_GetAlphaFromReferenceTransformDelta_AlphaOutput;
	Parms.CallFunc_GetAlphaFromReferenceTransformDelta_RawOutput = CallFunc_GetAlphaFromReferenceTransformDelta_RawOutput;
	Parms.CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue = CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue;
	Parms.CallFunc_GetPlaylistUsesCustomCharacterParts_ReturnValue = CallFunc_GetPlaylistUsesCustomCharacterParts_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


