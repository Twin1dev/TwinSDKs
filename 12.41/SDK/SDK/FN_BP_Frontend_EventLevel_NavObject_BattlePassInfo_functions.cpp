#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Frontend_EventLevel_NavObject_BattlePassInfo.BP_Frontend_EventLevel_NavObject_BattlePassInfo_C
// (Actor)

class UClass* ABP_Frontend_EventLevel_NavObject_BattlePassInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Frontend_EventLevel_NavObject_BattlePassInfo_C");

	return Clss;
}


// BP_Frontend_EventLevel_NavObject_BattlePassInfo_C BP_Frontend_EventLevel_NavObject_BattlePassInfo.Default__BP_Frontend_EventLevel_NavObject_BattlePassInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Frontend_EventLevel_NavObject_BattlePassInfo_C* ABP_Frontend_EventLevel_NavObject_BattlePassInfo_C::GetDefaultObj()
{
	static class ABP_Frontend_EventLevel_NavObject_BattlePassInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Frontend_EventLevel_NavObject_BattlePassInfo_C*>(ABP_Frontend_EventLevel_NavObject_BattlePassInfo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Frontend_EventLevel_NavObject_BattlePassInfo.BP_Frontend_EventLevel_NavObject_BattlePassInfo_C.SetBattlePassVisuals
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Purchased                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBattlePass_Door_LeftPanel_C*K2Node_DynamicCast_AsBattle_Pass_Door_Left_Panel                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Frontend_EventLevel_NavObject_BattlePassInfo_C::SetBattlePassVisuals(bool Purchased, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UBattlePass_Door_LeftPanel_C* K2Node_DynamicCast_AsBattle_Pass_Door_Left_Panel, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_BattlePassInfo_C", "SetBattlePassVisuals");

	Params::ABP_Frontend_EventLevel_NavObject_BattlePassInfo_C_SetBattlePassVisuals_Params Parms{};

	Parms.Purchased = Purchased;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsBattle_Pass_Door_Left_Panel = K2Node_DynamicCast_AsBattle_Pass_Door_Left_Panel;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frontend_EventLevel_NavObject_BattlePassInfo.BP_Frontend_EventLevel_NavObject_BattlePassInfo_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Frontend_EventLevel_NavObject_BattlePassInfo_C::UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_BattlePassInfo_C", "UserConstructionScript");

	Params::ABP_Frontend_EventLevel_NavObject_BattlePassInfo_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frontend_EventLevel_NavObject_BattlePassInfo.BP_Frontend_EventLevel_NavObject_BattlePassInfo_C.OnLoaded_5B4B515147509217750E62A2CDE15CEF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Frontend_EventLevel_NavObject_BattlePassInfo_C::OnLoaded_5B4B515147509217750E62A2CDE15CEF(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_BattlePassInfo_C", "OnLoaded_5B4B515147509217750E62A2CDE15CEF");

	Params::ABP_Frontend_EventLevel_NavObject_BattlePassInfo_C_OnLoaded_5B4B515147509217750E62A2CDE15CEF_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frontend_EventLevel_NavObject_BattlePassInfo.BP_Frontend_EventLevel_NavObject_BattlePassInfo_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Frontend_EventLevel_NavObject_BattlePassInfo_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_BattlePassInfo_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_EventLevel_NavObject_BattlePassInfo.BP_Frontend_EventLevel_NavObject_BattlePassInfo_C.InitForBattlePassInfo
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              CurrentLevel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentXp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              XpToLevel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         NextReward                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Frontend_EventLevel_NavObject_BattlePassInfo_C::InitForBattlePassInfo(int32 CurrentLevel, int32 CurrentXp, int32 XpToLevel, class UFortItemDefinition* NextReward)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_BattlePassInfo_C", "InitForBattlePassInfo");

	Params::ABP_Frontend_EventLevel_NavObject_BattlePassInfo_C_InitForBattlePassInfo_Params Parms{};

	Parms.CurrentLevel = CurrentLevel;
	Parms.CurrentXp = CurrentXp;
	Parms.XpToLevel = XpToLevel;
	Parms.NextReward = NextReward;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frontend_EventLevel_NavObject_BattlePassInfo.BP_Frontend_EventLevel_NavObject_BattlePassInfo_C.OnUpdateWidgetVisibility
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPlayerController*       PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bEnabled                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Frontend_EventLevel_NavObject_BattlePassInfo_C::OnUpdateWidgetVisibility(class AFortPlayerController* PlayerController, bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_BattlePassInfo_C", "OnUpdateWidgetVisibility");

	Params::ABP_Frontend_EventLevel_NavObject_BattlePassInfo_C_OnUpdateWidgetVisibility_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.bEnabled = bEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frontend_EventLevel_NavObject_BattlePassInfo.BP_Frontend_EventLevel_NavObject_BattlePassInfo_C.UpdateVisuals
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Frontend_EventLevel_NavObject_BattlePassInfo_C::UpdateVisuals()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_BattlePassInfo_C", "UpdateVisuals");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_EventLevel_NavObject_BattlePassInfo.BP_Frontend_EventLevel_NavObject_BattlePassInfo_C.OnInitializeForPlayer
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Frontend_EventLevel_NavObject_BattlePassInfo_C::OnInitializeForPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_BattlePassInfo_C", "OnInitializeForPlayer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_EventLevel_NavObject_BattlePassInfo.BP_Frontend_EventLevel_NavObject_BattlePassInfo_C.ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_BattlePassInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_CurrentLevel                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_CurrentXp                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_XpToLevel                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         K2Node_Event_NextReward                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetLargePreviewImage_ReturnValue                        (HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBattlePass_Door_XP_Progress_C*K2Node_DynamicCast_AsBattle_Pass_Door_XP_Progress                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    K2Node_DynamicCast_AsTexture                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBattlePass_Door_LeftPanel_C*K2Node_DynamicCast_AsBattle_Pass_Door_Left_Panel                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerController*       K2Node_Event_PlayerController                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bEnabled                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue_2                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasPurchasedSeasonBook_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)

void ABP_Frontend_EventLevel_NavObject_BattlePassInfo_C::ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_BattlePassInfo(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility Temp_byte_Variable_1, int32 K2Node_Event_CurrentLevel, int32 K2Node_Event_CurrentXp, int32 K2Node_Event_XpToLevel, class UFortItemDefinition* K2Node_Event_NextReward, TSoftObjectPtr<class UTexture2D> CallFunc_GetLargePreviewImage_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, bool Temp_bool_Variable, class UBattlePass_Door_XP_Progress_C* K2Node_DynamicCast_AsBattle_Pass_Door_XP_Progress, bool K2Node_DynamicCast_bSuccess, class UObject* Temp_object_Variable, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, class UTexture* K2Node_DynamicCast_AsTexture, bool K2Node_DynamicCast_bSuccess_1, class UBattlePass_Door_LeftPanel_C* K2Node_DynamicCast_AsBattle_Pass_Door_Left_Panel, bool K2Node_DynamicCast_bSuccess_2, class AFortPlayerController* K2Node_Event_PlayerController, bool K2Node_Event_bEnabled, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default, class UObject* K2Node_CustomEvent_Loaded, bool CallFunc_HasPurchasedSeasonBook_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_BattlePassInfo_C", "ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_BattlePassInfo");

	Params::ABP_Frontend_EventLevel_NavObject_BattlePassInfo_C_ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_BattlePassInfo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_CurrentLevel = K2Node_Event_CurrentLevel;
	Parms.K2Node_Event_CurrentXp = K2Node_Event_CurrentXp;
	Parms.K2Node_Event_XpToLevel = K2Node_Event_XpToLevel;
	Parms.K2Node_Event_NextReward = K2Node_Event_NextReward;
	Parms.CallFunc_GetLargePreviewImage_ReturnValue = CallFunc_GetLargePreviewImage_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_DynamicCast_AsBattle_Pass_Door_XP_Progress = K2Node_DynamicCast_AsBattle_Pass_Door_XP_Progress;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue_1 = CallFunc_GetUserWidgetObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsTexture = K2Node_DynamicCast_AsTexture;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsBattle_Pass_Door_Left_Panel = K2Node_DynamicCast_AsBattle_Pass_Door_Left_Panel;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_Event_PlayerController = K2Node_Event_PlayerController;
	Parms.K2Node_Event_bEnabled = K2Node_Event_bEnabled;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue_2 = CallFunc_GetUserWidgetObject_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.CallFunc_HasPurchasedSeasonBook_ReturnValue = CallFunc_HasPurchasedSeasonBook_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


