#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass M_MED_BananaAgent_FaceAcc_AnimBP.M_MED_BananaAgent_FaceAcc_AnimBP_C
// (None)

class UClass* UM_MED_BananaAgent_FaceAcc_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("M_MED_BananaAgent_FaceAcc_AnimBP_C");

	return Clss;
}


// M_MED_BananaAgent_FaceAcc_AnimBP_C M_MED_BananaAgent_FaceAcc_AnimBP.Default__M_MED_BananaAgent_FaceAcc_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UM_MED_BananaAgent_FaceAcc_AnimBP_C* UM_MED_BananaAgent_FaceAcc_AnimBP_C::GetDefaultObj()
{
	static class UM_MED_BananaAgent_FaceAcc_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UM_MED_BananaAgent_FaceAcc_AnimBP_C*>(UM_MED_BananaAgent_FaceAcc_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function M_MED_BananaAgent_FaceAcc_AnimBP.M_MED_BananaAgent_FaceAcc_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UM_MED_BananaAgent_FaceAcc_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M_MED_BananaAgent_FaceAcc_AnimBP_C", "AnimGraph");

	Params::UM_MED_BananaAgent_FaceAcc_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function M_MED_BananaAgent_FaceAcc_AnimBP.M_MED_BananaAgent_FaceAcc_AnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UM_MED_BananaAgent_FaceAcc_AnimBP_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M_MED_BananaAgent_FaceAcc_AnimBP_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function M_MED_BananaAgent_FaceAcc_AnimBP.M_MED_BananaAgent_FaceAcc_AnimBP_C.OnBeginTargeting
// (Event, Public, BlueprintEvent)
// Parameters:

void UM_MED_BananaAgent_FaceAcc_AnimBP_C::OnBeginTargeting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M_MED_BananaAgent_FaceAcc_AnimBP_C", "OnBeginTargeting");



	UObject::ProcessEvent(Func, nullptr);

}


// Function M_MED_BananaAgent_FaceAcc_AnimBP.M_MED_BananaAgent_FaceAcc_AnimBP_C.OnEndTargeting
// (Event, Public, BlueprintEvent)
// Parameters:

void UM_MED_BananaAgent_FaceAcc_AnimBP_C::OnEndTargeting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M_MED_BananaAgent_FaceAcc_AnimBP_C", "OnEndTargeting");



	UObject::ProcessEvent(Func, nullptr);

}


// Function M_MED_BananaAgent_FaceAcc_AnimBP.M_MED_BananaAgent_FaceAcc_AnimBP_C.OnBeginPlayingEmote
// (Event, Public, BlueprintEvent)
// Parameters:

void UM_MED_BananaAgent_FaceAcc_AnimBP_C::OnBeginPlayingEmote()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M_MED_BananaAgent_FaceAcc_AnimBP_C", "OnBeginPlayingEmote");



	UObject::ProcessEvent(Func, nullptr);

}


// Function M_MED_BananaAgent_FaceAcc_AnimBP.M_MED_BananaAgent_FaceAcc_AnimBP_C.OnEndPlayingEmote
// (Event, Public, BlueprintEvent)
// Parameters:

void UM_MED_BananaAgent_FaceAcc_AnimBP_C::OnEndPlayingEmote()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M_MED_BananaAgent_FaceAcc_AnimBP_C", "OnEndPlayingEmote");



	UObject::ProcessEvent(Func, nullptr);

}


// Function M_MED_BananaAgent_FaceAcc_AnimBP.M_MED_BananaAgent_FaceAcc_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UM_MED_BananaAgent_FaceAcc_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M_MED_BananaAgent_FaceAcc_AnimBP_C", "BlueprintUpdateAnimation");

	Params::UM_MED_BananaAgent_FaceAcc_AnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function M_MED_BananaAgent_FaceAcc_AnimBP.M_MED_BananaAgent_FaceAcc_AnimBP_C.ExecuteUbergraph_M_MED_BananaAgent_FaceAcc_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerPawn_Athena_C*        K2Node_DynamicCast_AsPlayer_Pawn_Athena                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetPartSkeletalMeshComponent_ReturnValue                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetPartSkeletalMeshComponent_ReturnValue_1              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMeshForPartType_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UM_MED_BananaAgent_FaceAcc_AnimBP_C::ExecuteUbergraph_M_MED_BananaAgent_FaceAcc_AnimBP(int32 EntryPoint, float K2Node_Event_DeltaTimeX, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, class USkeletalMeshComponent* CallFunc_GetPartSkeletalMeshComponent_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_SelectFloat_ReturnValue, class USkeletalMeshComponent* CallFunc_GetPartSkeletalMeshComponent_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M_MED_BananaAgent_FaceAcc_AnimBP_C", "ExecuteUbergraph_M_MED_BananaAgent_FaceAcc_AnimBP");

	Params::UM_MED_BananaAgent_FaceAcc_AnimBP_C_ExecuteUbergraph_M_MED_BananaAgent_FaceAcc_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue = CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Athena = K2Node_DynamicCast_AsPlayer_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_GetPartSkeletalMeshComponent_ReturnValue = CallFunc_GetPartSkeletalMeshComponent_ReturnValue;
	Parms.CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue = CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_GetPartSkeletalMeshComponent_ReturnValue_1 = CallFunc_GetPartSkeletalMeshComponent_ReturnValue_1;
	Parms.CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue_1 = CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue_1;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue = CallFunc_GetSkeletalMeshForPartType_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


