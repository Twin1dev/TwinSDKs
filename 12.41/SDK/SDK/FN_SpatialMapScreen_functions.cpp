#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SpatialMapScreen.SpatialMapScreen_C
// (None)

class UClass* USpatialMapScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpatialMapScreen_C");

	return Clss;
}


// SpatialMapScreen_C SpatialMapScreen.Default__SpatialMapScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USpatialMapScreen_C* USpatialMapScreen_C::GetDefaultObj()
{
	static class USpatialMapScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USpatialMapScreen_C*>(USpatialMapScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SpatialMapScreen.SpatialMapScreen_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void USpatialMapScreen_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMapScreen_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpatialMapScreen.SpatialMapScreen_C.OnTabCycled
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bCanShowCompletedCount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              ChallengesNum                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CountOfCompletedChallenges                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpatialMapScreen_C::OnTabCycled(bool bCanShowCompletedCount, int32 ChallengesNum, int32 CountOfCompletedChallenges)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMapScreen_C", "OnTabCycled");

	Params::USpatialMapScreen_C_OnTabCycled_Params Parms{};

	Parms.bCanShowCompletedCount = bCanShowCompletedCount;
	Parms.ChallengesNum = ChallengesNum;
	Parms.CountOfCompletedChallenges = CountOfCompletedChallenges;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpatialMapScreen.SpatialMapScreen_C.SetRewardPreviewVisibility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bVisible                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USpatialMapScreen_C::SetRewardPreviewVisibility(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMapScreen_C", "SetRewardPreviewVisibility");

	Params::USpatialMapScreen_C_SetRewardPreviewVisibility_Params Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpatialMapScreen.SpatialMapScreen_C.ExecuteUbergraph_SpatialMapScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bCanShowCompletedCount                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_ChallengesNum                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_CountOfCompletedChallenges                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bVisible                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaChallengeMapRewardPreview_C*K2Node_DynamicCast_AsAthena_Challenge_Map_Reward_Preview         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void USpatialMapScreen_C::ExecuteUbergraph_SpatialMapScreen(int32 EntryPoint, bool K2Node_Event_bCanShowCompletedCount, int32 K2Node_Event_ChallengesNum, int32 K2Node_Event_CountOfCompletedChallenges, bool K2Node_Event_bVisible, class UAthenaChallengeMapRewardPreview_C* K2Node_DynamicCast_AsAthena_Challenge_Map_Reward_Preview, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMapScreen_C", "ExecuteUbergraph_SpatialMapScreen");

	Params::USpatialMapScreen_C_ExecuteUbergraph_SpatialMapScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bCanShowCompletedCount = K2Node_Event_bCanShowCompletedCount;
	Parms.K2Node_Event_ChallengesNum = K2Node_Event_ChallengesNum;
	Parms.K2Node_Event_CountOfCompletedChallenges = K2Node_Event_CountOfCompletedChallenges;
	Parms.K2Node_Event_bVisible = K2Node_Event_bVisible;
	Parms.K2Node_DynamicCast_AsAthena_Challenge_Map_Reward_Preview = K2Node_DynamicCast_AsAthena_Challenge_Map_Reward_Preview;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


