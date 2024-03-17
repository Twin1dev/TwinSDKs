#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Frontend_BP12_Room_M_Scripting.Frontend_BP12_Room_M_Scripting_C
// (Actor)

class UClass* AFrontend_BP12_Room_M_Scripting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Frontend_BP12_Room_M_Scripting_C");

	return Clss;
}


// Frontend_BP12_Room_M_Scripting_C Frontend_BP12_Room_M_Scripting.Default__Frontend_BP12_Room_M_Scripting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFrontend_BP12_Room_M_Scripting_C* AFrontend_BP12_Room_M_Scripting_C::GetDefaultObj()
{
	static class AFrontend_BP12_Room_M_Scripting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFrontend_BP12_Room_M_Scripting_C*>(AFrontend_BP12_Room_M_Scripting_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Frontend_BP12_Room_M_Scripting.Frontend_BP12_Room_M_Scripting_C.OnFailure_43ED484A4E514CB6169D83955324F3DF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFrontend_BP12_Room_M_Scripting_C::OnFailure_43ED484A4E514CB6169D83955324F3DF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_BP12_Room_M_Scripting_C", "OnFailure_43ED484A4E514CB6169D83955324F3DF");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Frontend_BP12_Room_M_Scripting.Frontend_BP12_Room_M_Scripting_C.OnIgnored_43ED484A4E514CB6169D83955324F3DF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFrontend_BP12_Room_M_Scripting_C::OnIgnored_43ED484A4E514CB6169D83955324F3DF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_BP12_Room_M_Scripting_C", "OnIgnored_43ED484A4E514CB6169D83955324F3DF");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Frontend_BP12_Room_M_Scripting.Frontend_BP12_Room_M_Scripting_C.OnSuccess_43ED484A4E514CB6169D83955324F3DF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFrontend_BP12_Room_M_Scripting_C::OnSuccess_43ED484A4E514CB6169D83955324F3DF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_BP12_Room_M_Scripting_C", "OnSuccess_43ED484A4E514CB6169D83955324F3DF");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Frontend_BP12_Room_M_Scripting.Frontend_BP12_Room_M_Scripting_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFrontend_BP12_Room_M_Scripting_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_BP12_Room_M_Scripting_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Frontend_BP12_Room_M_Scripting.Frontend_BP12_Room_M_Scripting_C.MakePeelyPeak
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFrontend_BP12_Room_M_Scripting_C::MakePeelyPeak()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_BP12_Room_M_Scripting_C", "MakePeelyPeak");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Frontend_BP12_Room_M_Scripting.Frontend_BP12_Room_M_Scripting_C.ExecuteUbergraph_Frontend_BP12_Room_M_Scripting
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       CallFunc_GetFirstLocalFortPlayerController_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_SendQuestStatEvent*CallFunc_SendClientStatEvent_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFrontend_BP12_Room_M_Scripting_C::ExecuteUbergraph_Frontend_BP12_Room_M_Scripting(int32 EntryPoint, class AFortPlayerController* CallFunc_GetFirstLocalFortPlayerController_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UFortAsyncAction_SendQuestStatEvent* CallFunc_SendClientStatEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_BP12_Room_M_Scripting_C", "ExecuteUbergraph_Frontend_BP12_Room_M_Scripting");

	Params::AFrontend_BP12_Room_M_Scripting_C_ExecuteUbergraph_Frontend_BP12_Room_M_Scripting_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetFirstLocalFortPlayerController_ReturnValue = CallFunc_GetFirstLocalFortPlayerController_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_SendClientStatEvent_ReturnValue = CallFunc_SendClientStatEvent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


