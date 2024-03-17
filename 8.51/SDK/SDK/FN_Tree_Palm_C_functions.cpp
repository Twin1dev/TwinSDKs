#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Tree_Palm_C.Tree_Palm_C_C
// (Actor)

class UClass* ATree_Palm_C_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Tree_Palm_C_C");

	return Clss;
}


// Tree_Palm_C_C Tree_Palm_C.Default__Tree_Palm_C_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATree_Palm_C_C* ATree_Palm_C_C::GetDefaultObj()
{
	static class ATree_Palm_C_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATree_Palm_C_C*>(ATree_Palm_C_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Tree_Palm_C.Tree_Palm_C_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATree_Palm_C_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tree_Palm_C_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tree_Palm_C.Tree_Palm_C_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ATree_Palm_C_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tree_Palm_C_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tree_Palm_C.Tree_Palm_C_C.ExecuteUbergraph_Tree_Palm_C
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_AddRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ATree_Palm_C_C::ExecuteUbergraph_Tree_Palm_C(int32 EntryPoint, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FHitResult& CallFunc_K2_AddRelativeLocation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tree_Palm_C_C", "ExecuteUbergraph_Tree_Palm_C");

	Params::ATree_Palm_C_C_ExecuteUbergraph_Tree_Palm_C_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_K2_AddRelativeLocation_SweepHitResult = CallFunc_K2_AddRelativeLocation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}

}


