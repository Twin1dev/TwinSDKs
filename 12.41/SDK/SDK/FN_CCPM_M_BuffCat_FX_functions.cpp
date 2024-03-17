#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CCPM_M_BuffCat_FX.CCPM_M_BuffCat_FX_C
// (Actor)

class UClass* ACCPM_M_BuffCat_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CCPM_M_BuffCat_FX_C");

	return Clss;
}


// CCPM_M_BuffCat_FX_C CCPM_M_BuffCat_FX.Default__CCPM_M_BuffCat_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACCPM_M_BuffCat_FX_C* ACCPM_M_BuffCat_FX_C::GetDefaultObj()
{
	static class ACCPM_M_BuffCat_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACCPM_M_BuffCat_FX_C*>(ACCPM_M_BuffCat_FX_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CCPM_M_BuffCat_FX.CCPM_M_BuffCat_FX_C.Death Check
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

void ACCPM_M_BuffCat_FX_C::Death_Check(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_M_BuffCat_FX_C", "Death Check");

	Params::ACCPM_M_BuffCat_FX_C_Death_Check_Params Parms{};

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


// Function CCPM_M_BuffCat_FX.CCPM_M_BuffCat_FX_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*              CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*              CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_1(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACCPM_M_BuffCat_FX_C::UserConstructionScript(float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_M_BuffCat_FX_C", "UserConstructionScript");

	Params::ACCPM_M_BuffCat_FX_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue = CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue;
	Parms.CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_1 = CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CCPM_M_BuffCat_FX.CCPM_M_BuffCat_FX_C.OnStatChanged_168684444EA6A0EA706C04B4FCB6F5DE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        StatName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              StatValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACCPM_M_BuffCat_FX_C::OnStatChanged_168684444EA6A0EA706C04B4FCB6F5DE(class FName StatName, int32 StatValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_M_BuffCat_FX_C", "OnStatChanged_168684444EA6A0EA706C04B4FCB6F5DE");

	Params::ACCPM_M_BuffCat_FX_C_OnStatChanged_168684444EA6A0EA706C04B4FCB6F5DE_Params Parms{};

	Parms.StatName = StatName;
	Parms.StatValue = StatValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CCPM_M_BuffCat_FX.CCPM_M_BuffCat_FX_C.OnStatChanged_54972B074DDF6ACBB3E4E18C62C90A22
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        StatName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              StatValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACCPM_M_BuffCat_FX_C::OnStatChanged_54972B074DDF6ACBB3E4E18C62C90A22(class FName StatName, int32 StatValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_M_BuffCat_FX_C", "OnStatChanged_54972B074DDF6ACBB3E4E18C62C90A22");

	Params::ACCPM_M_BuffCat_FX_C_OnStatChanged_54972B074DDF6ACBB3E4E18C62C90A22_Params Parms{};

	Parms.StatName = StatName;
	Parms.StatValue = StatValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CCPM_M_BuffCat_FX.CCPM_M_BuffCat_FX_C.Kill>=1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACCPM_M_BuffCat_FX_C::Kill__1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_M_BuffCat_FX_C", "Kill>=1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CCPM_M_BuffCat_FX.CCPM_M_BuffCat_FX_C.UpdateBasedOnKills
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACCPM_M_BuffCat_FX_C::UpdateBasedOnKills()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_M_BuffCat_FX_C", "UpdateBasedOnKills");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CCPM_M_BuffCat_FX.CCPM_M_BuffCat_FX_C.Kill>=2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACCPM_M_BuffCat_FX_C::Kill__2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_M_BuffCat_FX_C", "Kill>=2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CCPM_M_BuffCat_FX.CCPM_M_BuffCat_FX_C.Kill>=3
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACCPM_M_BuffCat_FX_C::Kill__3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_M_BuffCat_FX_C", "Kill>=3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CCPM_M_BuffCat_FX.CCPM_M_BuffCat_FX_C.Kill>=4
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACCPM_M_BuffCat_FX_C::Kill__4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_M_BuffCat_FX_C", "Kill>=4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CCPM_M_BuffCat_FX.CCPM_M_BuffCat_FX_C.Kill>=5
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACCPM_M_BuffCat_FX_C::Kill__5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_M_BuffCat_FX_C", "Kill>=5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CCPM_M_BuffCat_FX.CCPM_M_BuffCat_FX_C.OnPawnAndPartChanged
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ACCPM_M_BuffCat_FX_C::OnPawnAndPartChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_M_BuffCat_FX_C", "OnPawnAndPartChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CCPM_M_BuffCat_FX.CCPM_M_BuffCat_FX_C.ActivatingCosmeticState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              StageNumBeingActivated                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACCPM_M_BuffCat_FX_C::ActivatingCosmeticState(int32 StageNumBeingActivated)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_M_BuffCat_FX_C", "ActivatingCosmeticState");

	Params::ACCPM_M_BuffCat_FX_C_ActivatingCosmeticState_Params Parms{};

	Parms.StageNumBeingActivated = StageNumBeingActivated;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CCPM_M_BuffCat_FX.CCPM_M_BuffCat_FX_C.OnActualStatChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACCPM_M_BuffCat_FX_C::OnActualStatChange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_M_BuffCat_FX_C", "OnActualStatChange");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CCPM_M_BuffCat_FX.CCPM_M_BuffCat_FX_C.HackyWorkaroundRefreshTimerGuy
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACCPM_M_BuffCat_FX_C::HackyWorkaroundRefreshTimerGuy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_M_BuffCat_FX_C", "HackyWorkaroundRefreshTimerGuy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CCPM_M_BuffCat_FX.CCPM_M_BuffCat_FX_C.ResetSafetyGate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACCPM_M_BuffCat_FX_C::ResetSafetyGate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_M_BuffCat_FX_C", "ResetSafetyGate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CCPM_M_BuffCat_FX.CCPM_M_BuffCat_FX_C.OnPostResIn
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ACCPM_M_BuffCat_FX_C::OnPostResIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_M_BuffCat_FX_C", "OnPostResIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CCPM_M_BuffCat_FX.CCPM_M_BuffCat_FX_C.InitializeVariabels
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACCPM_M_BuffCat_FX_C::InitializeVariabels()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_M_BuffCat_FX_C", "InitializeVariabels");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CCPM_M_BuffCat_FX.CCPM_M_BuffCat_FX_C.ExecuteUbergraph_CCPM_M_BuffCat_FX
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_StatName                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_StatValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetAssociatedPlayerPawn_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UFortAsyncAction_CosmeticAdaptiveStatWatcher*CallFunc_WatchCosmeticStat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMeshComponent*              CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_StageNumBeingActivated                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*              CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_1(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetAssociatedPlayerPawn_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_CosmeticAdaptiveStatWatcher*CallFunc_WatchCosmeticStat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMeshComponent*              CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_2(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*              CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_3(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*              CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_4(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*              CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_5(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_StatName_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_StatValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACCPM_M_BuffCat_FX_C::ExecuteUbergraph_CCPM_M_BuffCat_FX(int32 EntryPoint, class FName K2Node_CustomEvent_StatName, int32 K2Node_CustomEvent_StatValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, class FName Temp_name_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UFortAsyncAction_CosmeticAdaptiveStatWatcher* CallFunc_WatchCosmeticStat_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, int32 K2Node_Event_StageNumBeingActivated, bool Temp_bool_Has_Been_Initd_Variable_1, bool CallFunc_K2_AttachToComponent_ReturnValue_1, float CallFunc_GetGameTimeInSeconds_ReturnValue, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_1, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue_1, class UFortAsyncAction_CosmeticAdaptiveStatWatcher* CallFunc_WatchCosmeticStat_ReturnValue_1, int32 CallFunc_Max_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_IsClosed_Variable, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_2, bool K2Node_SwitchInteger_CmpSuccess, bool Temp_bool_IsClosed_Variable_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_2, class FName Temp_name_Variable_1, int32 Temp_int_Variable_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_3, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_4, bool CallFunc_K2_AttachToComponent_ReturnValue_3, float CallFunc_Conv_IntToFloat_ReturnValue_3, float CallFunc_Conv_IntToFloat_ReturnValue_4, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_5, class FName K2Node_CustomEvent_StatName_1, int32 K2Node_CustomEvent_StatValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_M_BuffCat_FX_C", "ExecuteUbergraph_CCPM_M_BuffCat_FX");

	Params::ACCPM_M_BuffCat_FX_C_ExecuteUbergraph_CCPM_M_BuffCat_FX_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_StatName = K2Node_CustomEvent_StatName;
	Parms.K2Node_CustomEvent_StatValue = K2Node_CustomEvent_StatValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetAssociatedPlayerPawn_ReturnValue = CallFunc_GetAssociatedPlayerPawn_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_WatchCosmeticStat_ReturnValue = CallFunc_WatchCosmeticStat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue = CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_Event_StageNumBeingActivated = K2Node_Event_StageNumBeingActivated;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_1 = CallFunc_K2_AttachToComponent_ReturnValue_1;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_1 = CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_1;
	Parms.CallFunc_GetAssociatedPlayerPawn_ReturnValue_1 = CallFunc_GetAssociatedPlayerPawn_ReturnValue_1;
	Parms.CallFunc_WatchCosmeticStat_ReturnValue_1 = CallFunc_WatchCosmeticStat_ReturnValue_1;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_2 = CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_2;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_2 = CallFunc_K2_AttachToComponent_ReturnValue_2;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;
	Parms.CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_3 = CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_3;
	Parms.CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_4 = CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_4;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_3 = CallFunc_K2_AttachToComponent_ReturnValue_3;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_3 = CallFunc_Conv_IntToFloat_ReturnValue_3;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_4 = CallFunc_Conv_IntToFloat_ReturnValue_4;
	Parms.CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_5 = CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_5;
	Parms.K2Node_CustomEvent_StatName_1 = K2Node_CustomEvent_StatName_1;
	Parms.K2Node_CustomEvent_StatValue_1 = K2Node_CustomEvent_StatValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


