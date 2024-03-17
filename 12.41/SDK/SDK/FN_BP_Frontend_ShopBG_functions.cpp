#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Frontend_ShopBG.BP_Frontend_ShopBG_C
// (Actor)

class UClass* ABP_Frontend_ShopBG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Frontend_ShopBG_C");

	return Clss;
}


// BP_Frontend_ShopBG_C BP_Frontend_ShopBG.Default__BP_Frontend_ShopBG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Frontend_ShopBG_C* ABP_Frontend_ShopBG_C::GetDefaultObj()
{
	static class ABP_Frontend_ShopBG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Frontend_ShopBG_C*>(ABP_Frontend_ShopBG_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.DonutPushUI__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Frontend_ShopBG_C::DonutPushUI__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_ShopBG_C", "DonutPushUI__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.DonutPushUI__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Frontend_ShopBG_C::DonutPushUI__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_ShopBG_C", "DonutPushUI__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.DonutPushUI__Background__EventFunc
// (BlueprintEvent)
// Parameters:

void ABP_Frontend_ShopBG_C::DonutPushUI__Background__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_ShopBG_C", "DonutPushUI__Background__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.BackGroundKick__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Frontend_ShopBG_C::BackGroundKick__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_ShopBG_C", "BackGroundKick__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.BackGroundKick__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Frontend_ShopBG_C::BackGroundKick__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_ShopBG_C", "BackGroundKick__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Frontend_ShopBG_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_ShopBG_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.SetDynamicBG
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                    InTexture                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Frontend_ShopBG_C::SetDynamicBG(class UTexture* InTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_ShopBG_C", "SetDynamicBG");

	Params::ABP_Frontend_ShopBG_C_SetDynamicBG_Params Parms{};

	Parms.InTexture = InTexture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.EnableDynamicShopBG
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Frontend_ShopBG_C::EnableDynamicShopBG()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_ShopBG_C", "EnableDynamicShopBG");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.SetDynamicEnvironmentEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InPresetEnvName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_Frontend_ShopBG_C::SetDynamicEnvironmentEvent(const class FString& InPresetEnvName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_ShopBG_C", "SetDynamicEnvironmentEvent");

	Params::ABP_Frontend_ShopBG_C_SetDynamicEnvironmentEvent_Params Parms{};

	Parms.InPresetEnvName = InPresetEnvName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.DebugShopBG
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Frontend_ShopBG_C::DebugShopBG()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_ShopBG_C", "DebugShopBG");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.PlayDonutSequenceAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Frontend_ShopBG_C::PlayDonutSequenceAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_ShopBG_C", "PlayDonutSequenceAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.DonutSequenceHeartbeatOver
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Frontend_ShopBG_C::DonutSequenceHeartbeatOver()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_ShopBG_C", "DonutSequenceHeartbeatOver");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.HandleRequestHide
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Frontend_ShopBG_C::HandleRequestHide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_ShopBG_C", "HandleRequestHide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.HandleItemShopEntered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Frontend_ShopBG_C::HandleItemShopEntered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_ShopBG_C", "HandleItemShopEntered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.HandleStoreEntered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Frontend_ShopBG_C::HandleStoreEntered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_ShopBG_C", "HandleStoreEntered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.ResetDonut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Frontend_ShopBG_C::ResetDonut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_ShopBG_C", "ResetDonut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.ExecuteUbergraph_BP_Frontend_ShopBG
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    K2Node_CustomEvent_InTexture                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_InPresetEnvName                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerMannequin*        K2Node_DynamicCast_AsFort_Player_Mannequin                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPlayerMannequin*        K2Node_DynamicCast_AsFort_Player_Mannequin_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult        (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// TArray<class ACMSLobbyDirector_C*> CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// class ACMSLobbyDirector_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               K2Node_SwitchString_CmpSuccess_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_GetAllActorsWithTag_OutActors                           (ZeroConstructor, ReferenceParm)
// struct FHitResult                  CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_1      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AActor*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchString_CmpSuccess_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASkeletalMeshActor*          K2Node_DynamicCast_AsSkeletal_Mesh_Actor                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetHasDonutShopSequenceBeenSeen_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetHasDonutShopSequenceBeenSeen_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Frontend_ShopBG_C::ExecuteUbergraph_BP_Frontend_ShopBG(int32 EntryPoint, float CallFunc_Lerp_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, class UTexture* K2Node_CustomEvent_InTexture, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const class FString& K2Node_CustomEvent_InPresetEnvName, bool K2Node_SwitchString_CmpSuccess, class AFortPlayerMannequin* K2Node_DynamicCast_AsFort_Player_Mannequin, bool K2Node_DynamicCast_bSuccess, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Lerp_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, class AFortPlayerMannequin* K2Node_DynamicCast_AsFort_Player_Mannequin_1, bool K2Node_DynamicCast_bSuccess_1, const struct FHitResult& CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult, TArray<class ACMSLobbyDirector_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ACMSLobbyDirector_C* CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, float CallFunc_Lerp_ReturnValue_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, bool K2Node_SwitchString_CmpSuccess_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors, const struct FHitResult& CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_1, class AActor* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool K2Node_SwitchString_CmpSuccess_2, class ASkeletalMeshActor* K2Node_DynamicCast_AsSkeletal_Mesh_Actor, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_GetHasDonutShopSequenceBeenSeen_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_8, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_IsValid_ReturnValue_11, bool CallFunc_IsValid_ReturnValue_12, bool CallFunc_GetHasDonutShopSequenceBeenSeen_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_ShopBG_C", "ExecuteUbergraph_BP_Frontend_ShopBG");

	Params::ABP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue = CallFunc_Conv_FloatToVector_ReturnValue;
	Parms.K2Node_CustomEvent_InTexture = K2Node_CustomEvent_InTexture;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.K2Node_CustomEvent_InPresetEnvName = K2Node_CustomEvent_InPresetEnvName;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.K2Node_DynamicCast_AsFort_Player_Mannequin = K2Node_DynamicCast_AsFort_Player_Mannequin;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;
	Parms.K2Node_DynamicCast_AsFort_Player_Mannequin_1 = K2Node_DynamicCast_AsFort_Player_Mannequin_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult = CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.K2Node_SwitchString_CmpSuccess_1 = K2Node_SwitchString_CmpSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetAllActorsWithTag_OutActors = CallFunc_GetAllActorsWithTag_OutActors;
	Parms.CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_1 = CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.K2Node_SwitchString_CmpSuccess_2 = K2Node_SwitchString_CmpSuccess_2;
	Parms.K2Node_DynamicCast_AsSkeletal_Mesh_Actor = K2Node_DynamicCast_AsSkeletal_Mesh_Actor;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_GetHasDonutShopSequenceBeenSeen_ReturnValue = CallFunc_GetHasDonutShopSequenceBeenSeen_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.CallFunc_GetHasDonutShopSequenceBeenSeen_ReturnValue_1 = CallFunc_GetHasDonutShopSequenceBeenSeen_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


