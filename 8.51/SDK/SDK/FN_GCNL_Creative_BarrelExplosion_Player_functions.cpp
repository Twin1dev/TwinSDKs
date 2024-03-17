#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCNL_Creative_BarrelExplosion_Player.GCNL_Creative_BarrelExplosion_Player_C
// (Actor)

class UClass* AGCNL_Creative_BarrelExplosion_Player_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCNL_Creative_BarrelExplosion_Player_C");

	return Clss;
}


// GCNL_Creative_BarrelExplosion_Player_C GCNL_Creative_BarrelExplosion_Player.Default__GCNL_Creative_BarrelExplosion_Player_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCNL_Creative_BarrelExplosion_Player_C* AGCNL_Creative_BarrelExplosion_Player_C::GetDefaultObj()
{
	static class AGCNL_Creative_BarrelExplosion_Player_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCNL_Creative_BarrelExplosion_Player_C*>(AGCNL_Creative_BarrelExplosion_Player_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GCNL_Creative_BarrelExplosion_Player.GCNL_Creative_BarrelExplosion_Player_C.PPTL__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AGCNL_Creative_BarrelExplosion_Player_C::PPTL__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCNL_Creative_BarrelExplosion_Player_C", "PPTL__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GCNL_Creative_BarrelExplosion_Player.GCNL_Creative_BarrelExplosion_Player_C.PPTL__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AGCNL_Creative_BarrelExplosion_Player_C::PPTL__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCNL_Creative_BarrelExplosion_Player_C", "PPTL__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GCNL_Creative_BarrelExplosion_Player.GCNL_Creative_BarrelExplosion_Player_C.OnApplication
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*>ParticleComponents                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*>     AudioComponents                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UCameraShake*                BurstCameraShakeInstance                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADecalActor*                 BurstDecalInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_Creative_BarrelExplosion_Player_C::OnApplication(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCNL_Creative_BarrelExplosion_Player_C", "OnApplication");

	Params::AGCNL_Creative_BarrelExplosion_Player_C_OnApplication_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.ParticleComponents = ParticleComponents;
	Parms.AudioComponents = AudioComponents;
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Creative_BarrelExplosion_Player.GCNL_Creative_BarrelExplosion_Player_C.ExecuteUbergraph_GCNL_Creative_BarrelExplosion_Player
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_MyTarget                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_Event_Parameters                                          (ConstParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*>K2Node_Event_ParticleComponents                                  (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*>     K2Node_Event_AudioComponents                                     (ConstParm, ZeroConstructor, ReferenceParm)
// class UCameraShake*                K2Node_Event_BurstCameraShakeInstance                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADecalActor*                 K2Node_Event_BurstDecalInstance                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_Creative_BarrelExplosion_Player_C::ExecuteUbergraph_GCNL_Creative_BarrelExplosion_Player(int32 EntryPoint, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class UCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCNL_Creative_BarrelExplosion_Player_C", "ExecuteUbergraph_GCNL_Creative_BarrelExplosion_Player");

	Params::AGCNL_Creative_BarrelExplosion_Player_C_ExecuteUbergraph_GCNL_Creative_BarrelExplosion_Player_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyTarget = K2Node_Event_MyTarget;
	Parms.K2Node_Event_Parameters = K2Node_Event_Parameters;
	Parms.K2Node_Event_ParticleComponents = K2Node_Event_ParticleComponents;
	Parms.K2Node_Event_AudioComponents = K2Node_Event_AudioComponents;
	Parms.K2Node_Event_BurstCameraShakeInstance = K2Node_Event_BurstCameraShakeInstance;
	Parms.K2Node_Event_BurstDecalInstance = K2Node_Event_BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);

}

}


