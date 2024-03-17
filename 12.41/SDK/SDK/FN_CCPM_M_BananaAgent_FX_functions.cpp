#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CCPM_M_BananaAgent_FX.CCPM_M_BananaAgent_FX_C
// (Actor)

class UClass* ACCPM_M_BananaAgent_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CCPM_M_BananaAgent_FX_C");

	return Clss;
}


// CCPM_M_BananaAgent_FX_C CCPM_M_BananaAgent_FX.Default__CCPM_M_BananaAgent_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACCPM_M_BananaAgent_FX_C* ACCPM_M_BananaAgent_FX_C::GetDefaultObj()
{
	static class ACCPM_M_BananaAgent_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACCPM_M_BananaAgent_FX_C*>(ACCPM_M_BananaAgent_FX_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CCPM_M_BananaAgent_FX.CCPM_M_BananaAgent_FX_C.ApplyLevelParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*              CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACCPM_M_BananaAgent_FX_C::ApplyLevelParam(int32 Level, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_M_BananaAgent_FX_C", "ApplyLevelParam");

	Params::ACCPM_M_BananaAgent_FX_C_ApplyLevelParam_Params Parms{};

	Parms.Level = Level;
	Parms.CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue = CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CCPM_M_BananaAgent_FX.CCPM_M_BananaAgent_FX_C.ApplyOverrideToItems
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortItem*>           Array                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetItemGuid_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerAthena* CallFunc_GetAssociatedAthenaController_AsFort_Player_Controller_Athena(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACCPM_M_BananaAgent_FX_C::ApplyOverrideToItems(TArray<class UFortItem*>& Array, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UFortItem* CallFunc_Array_Get_Item, const struct FGuid& CallFunc_GetItemGuid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AFortPlayerControllerAthena* CallFunc_GetAssociatedAthenaController_AsFort_Player_Controller_Athena, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_M_BananaAgent_FX_C", "ApplyOverrideToItems");

	Params::ACCPM_M_BananaAgent_FX_C_ApplyOverrideToItems_Params Parms{};

	Parms.Array = Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetItemGuid_ReturnValue = CallFunc_GetItemGuid_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAssociatedAthenaController_AsFort_Player_Controller_Athena = CallFunc_GetAssociatedAthenaController_AsFort_Player_Controller_Athena;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CCPM_M_BananaAgent_FX.CCPM_M_BananaAgent_FX_C.GetAssociatedAthenaController
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerControllerAthena* AsFort_Player_Controller_Athena                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetAssociatedPlayerPawn_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetVehicleActor_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       K2Node_DynamicCast_AsPawn                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACCPM_M_BananaAgent_FX_C::GetAssociatedAthenaController(class AFortPlayerControllerAthena** AsFort_Player_Controller_Athena, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AActor* CallFunc_GetVehicleActor_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess_1, class AController* CallFunc_GetController_ReturnValue_1, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena_1, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_M_BananaAgent_FX_C", "GetAssociatedAthenaController");

	Params::ACCPM_M_BananaAgent_FX_C_GetAssociatedAthenaController_Params Parms{};

	Parms.CallFunc_GetAssociatedPlayerPawn_ReturnValue = CallFunc_GetAssociatedPlayerPawn_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetVehicleActor_ReturnValue = CallFunc_GetVehicleActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Athena = K2Node_DynamicCast_AsFort_Player_Controller_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsPawn = K2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Athena_1 = K2Node_DynamicCast_AsFort_Player_Controller_Athena_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

	if (AsFort_Player_Controller_Athena != nullptr)
		*AsFort_Player_Controller_Athena = Parms.AsFort_Player_Controller_Athena;

}


// Function CCPM_M_BananaAgent_FX.CCPM_M_BananaAgent_FX_C.Death Check
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class AFortPlayerPawn*             CallFunc_GetAssociatedPlayerPawn_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerPawn_Athena_C*        K2Node_DynamicCast_AsPlayer_Pawn_Athena                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             CallFunc_GetAssociatedPlayerPawn_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACCPM_M_BananaAgent_FX_C::Death_Check(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_M_BananaAgent_FX_C", "Death Check");

	Params::ACCPM_M_BananaAgent_FX_C_Death_Check_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetAssociatedPlayerPawn_ReturnValue = CallFunc_GetAssociatedPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Athena = K2Node_DynamicCast_AsPlayer_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAssociatedPlayerPawn_ReturnValue_1 = CallFunc_GetAssociatedPlayerPawn_ReturnValue_1;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CCPM_M_BananaAgent_FX.CCPM_M_BananaAgent_FX_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*              CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACCPM_M_BananaAgent_FX_C::UserConstructionScript(float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_M_BananaAgent_FX_C", "UserConstructionScript");

	Params::ACCPM_M_BananaAgent_FX_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue = CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CCPM_M_BananaAgent_FX.CCPM_M_BananaAgent_FX_C.OnStatChanged_DDE851C6461A5199871D5D9D90BEE575
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        StatName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              StatValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACCPM_M_BananaAgent_FX_C::OnStatChanged_DDE851C6461A5199871D5D9D90BEE575(class FName StatName, int32 StatValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_M_BananaAgent_FX_C", "OnStatChanged_DDE851C6461A5199871D5D9D90BEE575");

	Params::ACCPM_M_BananaAgent_FX_C_OnStatChanged_DDE851C6461A5199871D5D9D90BEE575_Params Parms{};

	Parms.StatName = StatName;
	Parms.StatValue = StatValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CCPM_M_BananaAgent_FX.CCPM_M_BananaAgent_FX_C.OnPawnAndPartChanged
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ACCPM_M_BananaAgent_FX_C::OnPawnAndPartChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_M_BananaAgent_FX_C", "OnPawnAndPartChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CCPM_M_BananaAgent_FX.CCPM_M_BananaAgent_FX_C.OnActualStatChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACCPM_M_BananaAgent_FX_C::OnActualStatChange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_M_BananaAgent_FX_C", "OnActualStatChange");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CCPM_M_BananaAgent_FX.CCPM_M_BananaAgent_FX_C.HackyWorkaroundRefreshTimerGuy
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACCPM_M_BananaAgent_FX_C::HackyWorkaroundRefreshTimerGuy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_M_BananaAgent_FX_C", "HackyWorkaroundRefreshTimerGuy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CCPM_M_BananaAgent_FX.CCPM_M_BananaAgent_FX_C.ResetSafetyGate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACCPM_M_BananaAgent_FX_C::ResetSafetyGate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_M_BananaAgent_FX_C", "ResetSafetyGate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CCPM_M_BananaAgent_FX.CCPM_M_BananaAgent_FX_C.OnPostResIn
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ACCPM_M_BananaAgent_FX_C::OnPostResIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_M_BananaAgent_FX_C", "OnPostResIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CCPM_M_BananaAgent_FX.CCPM_M_BananaAgent_FX_C.InitializeVariabels
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACCPM_M_BananaAgent_FX_C::InitializeVariabels()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_M_BananaAgent_FX_C", "InitializeVariabels");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CCPM_M_BananaAgent_FX.CCPM_M_BananaAgent_FX_C.ExecuteUbergraph_CCPM_M_BananaAgent_FX
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*              CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetAssociatedPlayerPawn_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_CosmeticAdaptiveStatWatcher*CallFunc_WatchCosmeticStat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMeshComponent*              CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_1(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*              CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_2(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*              CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_3(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_StatName                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_StatValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*              CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_4(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)

void ACCPM_M_BananaAgent_FX_C::ExecuteUbergraph_CCPM_M_BananaAgent_FX(int32 EntryPoint, float CallFunc_Conv_IntToFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, float CallFunc_GetGameTimeInSeconds_ReturnValue, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue, class UFortAsyncAction_CosmeticAdaptiveStatWatcher* CallFunc_WatchCosmeticStat_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_IsClosed_Variable_1, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_1, class FName Temp_name_Variable, int32 Temp_int_Variable, int32 CallFunc_Max_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_2, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_2, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_3, bool CallFunc_K2_AttachToComponent_ReturnValue, class FName K2Node_CustomEvent_StatName, int32 K2Node_CustomEvent_StatValue, float CallFunc_Conv_IntToFloat_ReturnValue_3, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_4, float CallFunc_Conv_IntToFloat_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_M_BananaAgent_FX_C", "ExecuteUbergraph_CCPM_M_BananaAgent_FX");

	Params::ACCPM_M_BananaAgent_FX_C_ExecuteUbergraph_CCPM_M_BananaAgent_FX_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue = CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue;
	Parms.CallFunc_GetAssociatedPlayerPawn_ReturnValue = CallFunc_GetAssociatedPlayerPawn_ReturnValue;
	Parms.CallFunc_WatchCosmeticStat_ReturnValue = CallFunc_WatchCosmeticStat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_1 = CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_1;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;
	Parms.CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_2 = CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_2;
	Parms.CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_3 = CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_3;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.K2Node_CustomEvent_StatName = K2Node_CustomEvent_StatName;
	Parms.K2Node_CustomEvent_StatValue = K2Node_CustomEvent_StatValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_3 = CallFunc_Conv_IntToFloat_ReturnValue_3;
	Parms.CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_4 = CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_4;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_4 = CallFunc_Conv_IntToFloat_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


