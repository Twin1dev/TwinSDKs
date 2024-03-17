#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_Uncle_Attack_5_Impact.GCN_Uncle_Attack_5_Impact_C
// (None)

class UClass* UGCN_Uncle_Attack_5_Impact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_Uncle_Attack_5_Impact_C");

	return Clss;
}


// GCN_Uncle_Attack_5_Impact_C GCN_Uncle_Attack_5_Impact.Default__GCN_Uncle_Attack_5_Impact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_Uncle_Attack_5_Impact_C* UGCN_Uncle_Attack_5_Impact_C::GetDefaultObj()
{
	static class UGCN_Uncle_Attack_5_Impact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_Uncle_Attack_5_Impact_C*>(UGCN_Uncle_Attack_5_Impact_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GCN_Uncle_Attack_5_Impact.GCN_Uncle_Attack_5_Impact_C.OnExecute
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OnExecute_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UGCN_Uncle_Attack_5_Impact_C::OnExecute(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CallFunc_OnExecute_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_Uncle_Attack_5_Impact_C", "OnExecute");

	Params::UGCN_Uncle_Attack_5_Impact_C_OnExecute_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.CallFunc_OnExecute_ReturnValue = CallFunc_OnExecute_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


