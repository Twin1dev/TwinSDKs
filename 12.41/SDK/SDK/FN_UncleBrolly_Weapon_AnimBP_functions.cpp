#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass UncleBrolly_Weapon_AnimBP.UncleBrolly_Weapon_AnimBP_C
// (None)

class UClass* UUncleBrolly_Weapon_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UncleBrolly_Weapon_AnimBP_C");

	return Clss;
}


// UncleBrolly_Weapon_AnimBP_C UncleBrolly_Weapon_AnimBP.Default__UncleBrolly_Weapon_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUncleBrolly_Weapon_AnimBP_C* UUncleBrolly_Weapon_AnimBP_C::GetDefaultObj()
{
	static class UUncleBrolly_Weapon_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUncleBrolly_Weapon_AnimBP_C*>(UUncleBrolly_Weapon_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UncleBrolly_Weapon_AnimBP.UncleBrolly_Weapon_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UUncleBrolly_Weapon_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UncleBrolly_Weapon_AnimBP_C", "AnimGraph");

	Params::UUncleBrolly_Weapon_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function UncleBrolly_Weapon_AnimBP.UncleBrolly_Weapon_AnimBP_C.ExecuteUbergraph_UncleBrolly_Weapon_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUncleBrolly_Weapon_AnimBP_C::ExecuteUbergraph_UncleBrolly_Weapon_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UncleBrolly_Weapon_AnimBP_C", "ExecuteUbergraph_UncleBrolly_Weapon_AnimBP");

	Params::UUncleBrolly_Weapon_AnimBP_C_ExecuteUbergraph_UncleBrolly_Weapon_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


