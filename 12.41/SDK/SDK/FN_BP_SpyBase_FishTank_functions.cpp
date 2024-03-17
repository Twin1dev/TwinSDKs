#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SpyBase_FishTank.BP_SpyBase_FishTank_C
// (Actor)

class UClass* ABP_SpyBase_FishTank_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SpyBase_FishTank_C");

	return Clss;
}


// BP_SpyBase_FishTank_C BP_SpyBase_FishTank.Default__BP_SpyBase_FishTank_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SpyBase_FishTank_C* ABP_SpyBase_FishTank_C::GetDefaultObj()
{
	static class ABP_SpyBase_FishTank_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SpyBase_FishTank_C*>(ABP_SpyBase_FishTank_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SpyBase_FishTank.BP_SpyBase_FishTank_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SpyBase_FishTank_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpyBase_FishTank_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SpyBase_FishTank.BP_SpyBase_FishTank_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SpyBase_FishTank_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpyBase_FishTank_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SpyBase_FishTank.BP_SpyBase_FishTank_C.ExecuteUbergraph_BP_SpyBase_FishTank
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       CallFunc_GetFirstLocalFortPlayerController_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasCompletedQuest_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCompletedQuest_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCompletedQuest_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SpyBase_FishTank_C::ExecuteUbergraph_BP_SpyBase_FishTank(int32 EntryPoint, class AFortPlayerController* CallFunc_GetFirstLocalFortPlayerController_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_HasCompletedQuest_ReturnValue, bool CallFunc_HasCompletedQuest_ReturnValue_1, bool CallFunc_HasCompletedQuest_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpyBase_FishTank_C", "ExecuteUbergraph_BP_SpyBase_FishTank");

	Params::ABP_SpyBase_FishTank_C_ExecuteUbergraph_BP_SpyBase_FishTank_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetFirstLocalFortPlayerController_ReturnValue = CallFunc_GetFirstLocalFortPlayerController_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_HasCompletedQuest_ReturnValue = CallFunc_HasCompletedQuest_ReturnValue;
	Parms.CallFunc_HasCompletedQuest_ReturnValue_1 = CallFunc_HasCompletedQuest_ReturnValue_1;
	Parms.CallFunc_HasCompletedQuest_ReturnValue_2 = CallFunc_HasCompletedQuest_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


