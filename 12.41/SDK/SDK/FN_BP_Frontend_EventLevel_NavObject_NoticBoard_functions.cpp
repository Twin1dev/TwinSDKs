#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Frontend_EventLevel_NavObject_NoticBoard.BP_Frontend_EventLevel_NavObject_NoticBoard_C
// (Actor)

class UClass* ABP_Frontend_EventLevel_NavObject_NoticBoard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Frontend_EventLevel_NavObject_NoticBoard_C");

	return Clss;
}


// BP_Frontend_EventLevel_NavObject_NoticBoard_C BP_Frontend_EventLevel_NavObject_NoticBoard.Default__BP_Frontend_EventLevel_NavObject_NoticBoard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Frontend_EventLevel_NavObject_NoticBoard_C* ABP_Frontend_EventLevel_NavObject_NoticBoard_C::GetDefaultObj()
{
	static class ABP_Frontend_EventLevel_NavObject_NoticBoard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Frontend_EventLevel_NavObject_NoticBoard_C*>(ABP_Frontend_EventLevel_NavObject_NoticBoard_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Frontend_EventLevel_NavObject_NoticBoard.BP_Frontend_EventLevel_NavObject_NoticBoard_C.TvB_HideAll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Frontend_EventLevel_NavObject_NoticBoard_C::TvB_HideAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_NoticBoard_C", "TvB_HideAll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_EventLevel_NavObject_NoticBoard.BP_Frontend_EventLevel_NavObject_NoticBoard_C.Hide_Pot_05
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Frontend_EventLevel_NavObject_NoticBoard_C::Hide_Pot_05()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_NoticBoard_C", "Hide_Pot_05");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_EventLevel_NavObject_NoticBoard.BP_Frontend_EventLevel_NavObject_NoticBoard_C.Hide_Pot_04
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Frontend_EventLevel_NavObject_NoticBoard_C::Hide_Pot_04()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_NoticBoard_C", "Hide_Pot_04");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_EventLevel_NavObject_NoticBoard.BP_Frontend_EventLevel_NavObject_NoticBoard_C.Hide_Pot_03
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Frontend_EventLevel_NavObject_NoticBoard_C::Hide_Pot_03()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_NoticBoard_C", "Hide_Pot_03");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_EventLevel_NavObject_NoticBoard.BP_Frontend_EventLevel_NavObject_NoticBoard_C.Hide_Pot_02
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Frontend_EventLevel_NavObject_NoticBoard_C::Hide_Pot_02()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_NoticBoard_C", "Hide_Pot_02");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_EventLevel_NavObject_NoticBoard.BP_Frontend_EventLevel_NavObject_NoticBoard_C.Hide_Pot_01
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Frontend_EventLevel_NavObject_NoticBoard_C::Hide_Pot_01()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_NoticBoard_C", "Hide_Pot_01");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_EventLevel_NavObject_NoticBoard.BP_Frontend_EventLevel_NavObject_NoticBoard_C.TvB_ShowOnlyMapAndPots
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Frontend_EventLevel_NavObject_NoticBoard_C::TvB_ShowOnlyMapAndPots()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_NoticBoard_C", "TvB_ShowOnlyMapAndPots");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_EventLevel_NavObject_NoticBoard.BP_Frontend_EventLevel_NavObject_NoticBoard_C.TvB_ShowOnlyHint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Frontend_EventLevel_NavObject_NoticBoard_C::TvB_ShowOnlyHint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_NoticBoard_C", "TvB_ShowOnlyHint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_EventLevel_NavObject_NoticBoard.BP_Frontend_EventLevel_NavObject_NoticBoard_C.UpdateAllSplines
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Frontend_EventLevel_NavObject_NoticBoard_C::UpdateAllSplines(const struct FVector& CallFunc_MakeVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_NoticBoard_C", "UpdateAllSplines");

	Params::ABP_Frontend_EventLevel_NavObject_NoticBoard_C_UpdateAllSplines_Params Parms{};

	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frontend_EventLevel_NavObject_NoticBoard.BP_Frontend_EventLevel_NavObject_NoticBoard_C.UpdateSplines
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USplineMeshComponent*        Spline                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        Start                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        End                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Offset                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Frontend_EventLevel_NavObject_NoticBoard_C::UpdateSplines(class USplineMeshComponent* Spline, class UStaticMeshComponent* Start, class UStaticMeshComponent* End, const struct FVector& Offset, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_NoticBoard_C", "UpdateSplines");

	Params::ABP_Frontend_EventLevel_NavObject_NoticBoard_C_UpdateSplines_Params Parms{};

	Parms.Spline = Spline;
	Parms.Start = Start;
	Parms.End = End;
	Parms.Offset = Offset;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue_1 = CallFunc_Subtract_VectorVector_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frontend_EventLevel_NavObject_NoticBoard.BP_Frontend_EventLevel_NavObject_NoticBoard_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Frontend_EventLevel_NavObject_NoticBoard_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_NoticBoard_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_EventLevel_NavObject_NoticBoard.BP_Frontend_EventLevel_NavObject_NoticBoard_C.OnCurrentQuestsReady_12655DD446F522D8E34C9CBF5A99866D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestManager*           OwningQuestManager                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFoundAllQuestsOnProfile                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Frontend_EventLevel_NavObject_NoticBoard_C::OnCurrentQuestsReady_12655DD446F522D8E34C9CBF5A99866D(class UFortQuestManager* OwningQuestManager, bool bFoundAllQuestsOnProfile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_NoticBoard_C", "OnCurrentQuestsReady_12655DD446F522D8E34C9CBF5A99866D");

	Params::ABP_Frontend_EventLevel_NavObject_NoticBoard_C_OnCurrentQuestsReady_12655DD446F522D8E34C9CBF5A99866D_Params Parms{};

	Parms.OwningQuestManager = OwningQuestManager;
	Parms.bFoundAllQuestsOnProfile = bFoundAllQuestsOnProfile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frontend_EventLevel_NavObject_NoticBoard.BP_Frontend_EventLevel_NavObject_NoticBoard_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Frontend_EventLevel_NavObject_NoticBoard_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_NoticBoard_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_EventLevel_NavObject_NoticBoard.BP_Frontend_EventLevel_NavObject_NoticBoard_C.ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_NoticBoard
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           K2Node_CustomEvent_OwningQuestManager                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bFoundAllQuestsOnProfile                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestManager*           Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       CallFunc_GetFirstLocalFortPlayerController_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted(ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerController*       CallFunc_GetFirstLocalFortPlayerController_ReturnValue_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       CallFunc_GetFirstLocalFortPlayerController_ReturnValue_2         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid_1  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted_1(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted_1(ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid_2  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted_2(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted_2(ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerController*       CallFunc_GetFirstLocalFortPlayerController_ReturnValue_3         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_CurrentQuestsReady*CallFunc_CurrentQuestsReadyAsync_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Frontend_EventLevel_NavObject_NoticBoard_C::ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_NoticBoard(int32 EntryPoint, class UFortQuestManager* K2Node_CustomEvent_OwningQuestManager, bool K2Node_CustomEvent_bFoundAllQuestsOnProfile, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, class UFortQuestManager* Temp_object_Variable, int32 Temp_int_Array_Index_Variable, bool K2Node_SwitchInteger_CmpSuccess, int32 Temp_int_Loop_Counter_Variable, class AFortPlayerController* CallFunc_GetFirstLocalFortPlayerController_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted, class AFortPlayerController* CallFunc_GetFirstLocalFortPlayerController_ReturnValue_1, class AFortPlayerController* CallFunc_GetFirstLocalFortPlayerController_ReturnValue_2, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid_1, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted_1, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted_1, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid_2, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted_2, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted_2, class AFortPlayerController* CallFunc_GetFirstLocalFortPlayerController_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, class UFortAsyncAction_CurrentQuestsReady* CallFunc_CurrentQuestsReadyAsync_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_NoticBoard_C", "ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_NoticBoard");

	Params::ABP_Frontend_EventLevel_NavObject_NoticBoard_C_ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_NoticBoard_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_OwningQuestManager = K2Node_CustomEvent_OwningQuestManager;
	Parms.K2Node_CustomEvent_bFoundAllQuestsOnProfile = K2Node_CustomEvent_bFoundAllQuestsOnProfile;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetFirstLocalFortPlayerController_ReturnValue = CallFunc_GetFirstLocalFortPlayerController_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid = CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid;
	Parms.CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted = CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted;
	Parms.CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted = CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted;
	Parms.CallFunc_GetFirstLocalFortPlayerController_ReturnValue_1 = CallFunc_GetFirstLocalFortPlayerController_ReturnValue_1;
	Parms.CallFunc_GetFirstLocalFortPlayerController_ReturnValue_2 = CallFunc_GetFirstLocalFortPlayerController_ReturnValue_2;
	Parms.CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid_1 = CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid_1;
	Parms.CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted_1 = CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted_1;
	Parms.CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted_1 = CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid_2 = CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid_2;
	Parms.CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted_2 = CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted_2;
	Parms.CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted_2 = CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted_2;
	Parms.CallFunc_GetFirstLocalFortPlayerController_ReturnValue_3 = CallFunc_GetFirstLocalFortPlayerController_ReturnValue_3;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_CurrentQuestsReadyAsync_ReturnValue = CallFunc_CurrentQuestsReadyAsync_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


