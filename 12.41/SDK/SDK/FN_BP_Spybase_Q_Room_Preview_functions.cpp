#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Spybase_Q_Room_Preview.BP_Spybase_Q_Room_Preview_C
// (Actor)

class UClass* ABP_Spybase_Q_Room_Preview_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Spybase_Q_Room_Preview_C");

	return Clss;
}


// BP_Spybase_Q_Room_Preview_C BP_Spybase_Q_Room_Preview.Default__BP_Spybase_Q_Room_Preview_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Spybase_Q_Room_Preview_C* ABP_Spybase_Q_Room_Preview_C::GetDefaultObj()
{
	static class ABP_Spybase_Q_Room_Preview_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Spybase_Q_Room_Preview_C*>(ABP_Spybase_Q_Room_Preview_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Spybase_Q_Room_Preview.BP_Spybase_Q_Room_Preview_C.Explosions_Timeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Spybase_Q_Room_Preview_C::Explosions_Timeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Spybase_Q_Room_Preview_C", "Explosions_Timeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Spybase_Q_Room_Preview.BP_Spybase_Q_Room_Preview_C.Explosions_Timeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Spybase_Q_Room_Preview_C::Explosions_Timeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Spybase_Q_Room_Preview_C", "Explosions_Timeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Spybase_Q_Room_Preview.BP_Spybase_Q_Room_Preview_C.Explosions_Timeline__NewTrack_0__EventFunc
// (BlueprintEvent)
// Parameters:

void ABP_Spybase_Q_Room_Preview_C::Explosions_Timeline__NewTrack_0__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Spybase_Q_Room_Preview_C", "Explosions_Timeline__NewTrack_0__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Spybase_Q_Room_Preview.BP_Spybase_Q_Room_Preview_C.Gunfire_Timeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Spybase_Q_Room_Preview_C::Gunfire_Timeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Spybase_Q_Room_Preview_C", "Gunfire_Timeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Spybase_Q_Room_Preview.BP_Spybase_Q_Room_Preview_C.Gunfire_Timeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Spybase_Q_Room_Preview_C::Gunfire_Timeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Spybase_Q_Room_Preview_C", "Gunfire_Timeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Spybase_Q_Room_Preview.BP_Spybase_Q_Room_Preview_C.Gunfire_Timeline__NewTrack_0__EventFunc
// (BlueprintEvent)
// Parameters:

void ABP_Spybase_Q_Room_Preview_C::Gunfire_Timeline__NewTrack_0__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Spybase_Q_Room_Preview_C", "Gunfire_Timeline__NewTrack_0__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Spybase_Q_Room_Preview.BP_Spybase_Q_Room_Preview_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Spybase_Q_Room_Preview_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Spybase_Q_Room_Preview_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Spybase_Q_Room_Preview.BP_Spybase_Q_Room_Preview_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Spybase_Q_Room_Preview_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Spybase_Q_Room_Preview_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Spybase_Q_Room_Preview.BP_Spybase_Q_Room_Preview_C.Timeline_0__NewTrack_0__EventFunc
// (BlueprintEvent)
// Parameters:

void ABP_Spybase_Q_Room_Preview_C::Timeline_0__NewTrack_0__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Spybase_Q_Room_Preview_C", "Timeline_0__NewTrack_0__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Spybase_Q_Room_Preview.BP_Spybase_Q_Room_Preview_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Spybase_Q_Room_Preview_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Spybase_Q_Room_Preview_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Spybase_Q_Room_Preview.BP_Spybase_Q_Room_Preview_C.Spawn_Shield_Effect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Spybase_Q_Room_Preview_C::Spawn_Shield_Effect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Spybase_Q_Room_Preview_C", "Spawn_Shield_Effect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Spybase_Q_Room_Preview.BP_Spybase_Q_Room_Preview_C.SpawnRandomEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Spybase_Q_Room_Preview_C::SpawnRandomEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Spybase_Q_Room_Preview_C", "SpawnRandomEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Spybase_Q_Room_Preview.BP_Spybase_Q_Room_Preview_C.Spawn_GunFire
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Spybase_Q_Room_Preview_C::Spawn_GunFire()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Spybase_Q_Room_Preview_C", "Spawn_GunFire");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Spybase_Q_Room_Preview.BP_Spybase_Q_Room_Preview_C.Spawn_Electric_Arcs
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Spybase_Q_Room_Preview_C::Spawn_Electric_Arcs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Spybase_Q_Room_Preview_C", "Spawn_Electric_Arcs");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Spybase_Q_Room_Preview.BP_Spybase_Q_Room_Preview_C.Spawn_Explosions
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Spybase_Q_Room_Preview_C::Spawn_Explosions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Spybase_Q_Room_Preview_C", "Spawn_Explosions");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Spybase_Q_Room_Preview.BP_Spybase_Q_Room_Preview_C.Spawn_Klaxon
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Spybase_Q_Room_Preview_C::Spawn_Klaxon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Spybase_Q_Room_Preview_C", "Spawn_Klaxon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Spybase_Q_Room_Preview.BP_Spybase_Q_Room_Preview_C.Spawn_Peely
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Spybase_Q_Room_Preview_C::Spawn_Peely()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Spybase_Q_Room_Preview_C", "Spawn_Peely");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Spybase_Q_Room_Preview.BP_Spybase_Q_Room_Preview_C.ExecuteUbergraph_BP_Spybase_Q_Room_Preview
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFXSystemComponent*          CallFunc_SpawnFXAtLocation_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AB_BGA_Athena_SilverBlazer_V2_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFXSystemComponent*          CallFunc_SpawnFXAtLocation_ReturnValue_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_7                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_8                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFXSystemComponent*          CallFunc_SpawnFXAtLocation_ReturnValue_2                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_9                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_10                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_11                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFXSystemComponent*          CallFunc_SpawnFXAtLocation_ReturnValue_3                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Spybase_Q_Room_Preview_C::ExecuteUbergraph_BP_Spybase_Q_Room_Preview(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UFXSystemComponent* CallFunc_SpawnFXAtLocation_ReturnValue, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, class AB_BGA_Athena_SilverBlazer_V2_C* CallFunc_FinishSpawningActor_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_3, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_4, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, class UFXSystemComponent* CallFunc_SpawnFXAtLocation_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location_2, const struct FRotator& CallFunc_BreakTransform_Rotation_2, const struct FVector& CallFunc_BreakTransform_Scale_2, float CallFunc_RandomFloatInRange_ReturnValue_5, float CallFunc_RandomFloatInRange_ReturnValue_6, float CallFunc_RandomFloatInRange_ReturnValue_7, const struct FVector& CallFunc_BreakTransform_Location_3, const struct FRotator& CallFunc_BreakTransform_Rotation_3, const struct FVector& CallFunc_BreakTransform_Scale_3, const struct FVector& CallFunc_MakeVector_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_8, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location_4, const struct FRotator& CallFunc_BreakTransform_Rotation_4, const struct FVector& CallFunc_BreakTransform_Scale_4, class UFXSystemComponent* CallFunc_SpawnFXAtLocation_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue_9, float CallFunc_RandomFloatInRange_ReturnValue_10, float CallFunc_RandomFloatInRange_ReturnValue_11, const struct FVector& CallFunc_BreakTransform_Location_5, const struct FRotator& CallFunc_BreakTransform_Rotation_5, const struct FVector& CallFunc_BreakTransform_Scale_5, const struct FVector& CallFunc_MakeVector_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_3, class UFXSystemComponent* CallFunc_SpawnFXAtLocation_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Spybase_Q_Room_Preview_C", "ExecuteUbergraph_BP_Spybase_Q_Room_Preview");

	Params::ABP_Spybase_Q_Room_Preview_C_ExecuteUbergraph_BP_Spybase_Q_Room_Preview_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_SpawnFXAtLocation_ReturnValue = CallFunc_SpawnFXAtLocation_ReturnValue;
	Parms.CallFunc_GetSequencePlayer_ReturnValue = CallFunc_GetSequencePlayer_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue_1 = CallFunc_RandomIntegerInRange_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_2 = CallFunc_RandomFloatInRange_ReturnValue_2;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_3 = CallFunc_RandomFloatInRange_ReturnValue_3;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_4 = CallFunc_RandomFloatInRange_ReturnValue_4;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue = CallFunc_Conv_FloatToVector_ReturnValue;
	Parms.CallFunc_SpawnFXAtLocation_ReturnValue_1 = CallFunc_SpawnFXAtLocation_ReturnValue_1;
	Parms.CallFunc_BreakTransform_Location_2 = CallFunc_BreakTransform_Location_2;
	Parms.CallFunc_BreakTransform_Rotation_2 = CallFunc_BreakTransform_Rotation_2;
	Parms.CallFunc_BreakTransform_Scale_2 = CallFunc_BreakTransform_Scale_2;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_5 = CallFunc_RandomFloatInRange_ReturnValue_5;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_6 = CallFunc_RandomFloatInRange_ReturnValue_6;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_7 = CallFunc_RandomFloatInRange_ReturnValue_7;
	Parms.CallFunc_BreakTransform_Location_3 = CallFunc_BreakTransform_Location_3;
	Parms.CallFunc_BreakTransform_Rotation_3 = CallFunc_BreakTransform_Rotation_3;
	Parms.CallFunc_BreakTransform_Scale_3 = CallFunc_BreakTransform_Scale_3;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_8 = CallFunc_RandomFloatInRange_ReturnValue_8;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = CallFunc_Add_VectorVector_ReturnValue_2;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_BreakTransform_Location_4 = CallFunc_BreakTransform_Location_4;
	Parms.CallFunc_BreakTransform_Rotation_4 = CallFunc_BreakTransform_Rotation_4;
	Parms.CallFunc_BreakTransform_Scale_4 = CallFunc_BreakTransform_Scale_4;
	Parms.CallFunc_SpawnFXAtLocation_ReturnValue_2 = CallFunc_SpawnFXAtLocation_ReturnValue_2;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_9 = CallFunc_RandomFloatInRange_ReturnValue_9;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_10 = CallFunc_RandomFloatInRange_ReturnValue_10;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_11 = CallFunc_RandomFloatInRange_ReturnValue_11;
	Parms.CallFunc_BreakTransform_Location_5 = CallFunc_BreakTransform_Location_5;
	Parms.CallFunc_BreakTransform_Rotation_5 = CallFunc_BreakTransform_Rotation_5;
	Parms.CallFunc_BreakTransform_Scale_5 = CallFunc_BreakTransform_Scale_5;
	Parms.CallFunc_MakeVector_ReturnValue_2 = CallFunc_MakeVector_ReturnValue_2;
	Parms.CallFunc_Add_VectorVector_ReturnValue_3 = CallFunc_Add_VectorVector_ReturnValue_3;
	Parms.CallFunc_SpawnFXAtLocation_ReturnValue_3 = CallFunc_SpawnFXAtLocation_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


