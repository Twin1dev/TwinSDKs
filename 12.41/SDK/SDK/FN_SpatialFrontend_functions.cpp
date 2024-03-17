#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SpatialFrontend.SpatialFrontend_C
// (None)

class UClass* USpatialFrontend_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpatialFrontend_C");

	return Clss;
}


// SpatialFrontend_C SpatialFrontend.Default__SpatialFrontend_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USpatialFrontend_C* USpatialFrontend_C::GetDefaultObj()
{
	static class USpatialFrontend_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USpatialFrontend_C*>(USpatialFrontend_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SpatialFrontend.SpatialFrontend_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void USpatialFrontend_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialFrontend_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpatialFrontend.SpatialFrontend_C.OnEventLevelTransitionComplete
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayTag                ActiveCamera                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void USpatialFrontend_C::OnEventLevelTransitionComplete(struct FGameplayTag& ActiveCamera)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialFrontend_C", "OnEventLevelTransitionComplete");

	Params::USpatialFrontend_C_OnEventLevelTransitionComplete_Params Parms{};

	Parms.ActiveCamera = ActiveCamera;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpatialFrontend.SpatialFrontend_C.OnEventLevelTransitionBegin
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayTag                TargetCamera                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class AFortEventLevelNavigationActor*TargetNavActor                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpatialFrontend_C::OnEventLevelTransitionBegin(struct FGameplayTag& TargetCamera, class AFortEventLevelNavigationActor* TargetNavActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialFrontend_C", "OnEventLevelTransitionBegin");

	Params::USpatialFrontend_C_OnEventLevelTransitionBegin_Params Parms{};

	Parms.TargetCamera = TargetCamera;
	Parms.TargetNavActor = TargetNavActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpatialFrontend.SpatialFrontend_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void USpatialFrontend_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialFrontend_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpatialFrontend.SpatialFrontend_C.ExecuteUbergraph_SpatialFrontend
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Event_ActiveCamera                                        (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Event_TargetCamera                                        (ConstParm, NoDestructor, HasGetValueTypeHash)
// class AFortEventLevelNavigationActor*K2Node_Event_TargetNavActor                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortEventLevelNavigationDisplayDetailsCallFunc_GetDisplayDetails_ReturnValue                           (None)
// class UBPS12MainRoomPOITag_C*      K2Node_DynamicCast_AsBPS12Main_Room_POITag                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void USpatialFrontend_C::ExecuteUbergraph_SpatialFrontend(int32 EntryPoint, const struct FGameplayTag& K2Node_Event_ActiveCamera, const struct FGameplayTag& K2Node_Event_TargetCamera, class AFortEventLevelNavigationActor* K2Node_Event_TargetNavActor, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FFortEventLevelNavigationDisplayDetails& CallFunc_GetDisplayDetails_ReturnValue, class UBPS12MainRoomPOITag_C* K2Node_DynamicCast_AsBPS12Main_Room_POITag, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Len_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialFrontend_C", "ExecuteUbergraph_SpatialFrontend");

	Params::USpatialFrontend_C_ExecuteUbergraph_SpatialFrontend_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ActiveCamera = K2Node_Event_ActiveCamera;
	Parms.K2Node_Event_TargetCamera = K2Node_Event_TargetCamera;
	Parms.K2Node_Event_TargetNavActor = K2Node_Event_TargetNavActor;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDisplayDetails_ReturnValue = CallFunc_GetDisplayDetails_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPS12Main_Room_POITag = K2Node_DynamicCast_AsBPS12Main_Room_POITag;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


