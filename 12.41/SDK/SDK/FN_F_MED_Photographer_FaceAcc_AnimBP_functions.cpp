#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass F_MED_Photographer_FaceAcc_AnimBP.F_MED_Photographer_FaceAcc_AnimBP_C
// (None)

class UClass* UF_MED_Photographer_FaceAcc_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("F_MED_Photographer_FaceAcc_AnimBP_C");

	return Clss;
}


// F_MED_Photographer_FaceAcc_AnimBP_C F_MED_Photographer_FaceAcc_AnimBP.Default__F_MED_Photographer_FaceAcc_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UF_MED_Photographer_FaceAcc_AnimBP_C* UF_MED_Photographer_FaceAcc_AnimBP_C::GetDefaultObj()
{
	static class UF_MED_Photographer_FaceAcc_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UF_MED_Photographer_FaceAcc_AnimBP_C*>(UF_MED_Photographer_FaceAcc_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function F_MED_Photographer_FaceAcc_AnimBP.F_MED_Photographer_FaceAcc_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UF_MED_Photographer_FaceAcc_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("F_MED_Photographer_FaceAcc_AnimBP_C", "AnimGraph");

	Params::UF_MED_Photographer_FaceAcc_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function F_MED_Photographer_FaceAcc_AnimBP.F_MED_Photographer_FaceAcc_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UF_MED_Photographer_FaceAcc_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("F_MED_Photographer_FaceAcc_AnimBP_C", "BlueprintUpdateAnimation");

	Params::UF_MED_Photographer_FaceAcc_AnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function F_MED_Photographer_FaceAcc_AnimBP.F_MED_Photographer_FaceAcc_AnimBP_C.OnNotifyPartsStarted
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                        Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UF_MED_Photographer_FaceAcc_AnimBP_C::OnNotifyPartsStarted(class FName Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("F_MED_Photographer_FaceAcc_AnimBP_C", "OnNotifyPartsStarted");

	Params::UF_MED_Photographer_FaceAcc_AnimBP_C_OnNotifyPartsStarted_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function F_MED_Photographer_FaceAcc_AnimBP.F_MED_Photographer_FaceAcc_AnimBP_C.OnNotifyPartsStopped
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                        Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UF_MED_Photographer_FaceAcc_AnimBP_C::OnNotifyPartsStopped(class FName Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("F_MED_Photographer_FaceAcc_AnimBP_C", "OnNotifyPartsStopped");

	Params::UF_MED_Photographer_FaceAcc_AnimBP_C_OnNotifyPartsStopped_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function F_MED_Photographer_FaceAcc_AnimBP.F_MED_Photographer_FaceAcc_AnimBP_C.OnParachuteClosed
// (Event, Public, BlueprintEvent)
// Parameters:

void UF_MED_Photographer_FaceAcc_AnimBP_C::OnParachuteClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("F_MED_Photographer_FaceAcc_AnimBP_C", "OnParachuteClosed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function F_MED_Photographer_FaceAcc_AnimBP.F_MED_Photographer_FaceAcc_AnimBP_C.ExecuteUbergraph_F_MED_Photographer_FaceAcc_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Montage_IsActive_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetPartSkeletalMeshComponent_ReturnValue                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_Context_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_Context                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UF_MED_Photographer_FaceAcc_AnimBP_C::ExecuteUbergraph_F_MED_Photographer_FaceAcc_AnimBP(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Montage_IsActive_ReturnValue, float K2Node_Event_DeltaTimeX, class USkeletalMeshComponent* CallFunc_GetPartSkeletalMeshComponent_ReturnValue, class FName K2Node_Event_Context_1, bool K2Node_SwitchName_CmpSuccess, class FName K2Node_Event_Context, bool K2Node_SwitchName_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("F_MED_Photographer_FaceAcc_AnimBP_C", "ExecuteUbergraph_F_MED_Photographer_FaceAcc_AnimBP");

	Params::UF_MED_Photographer_FaceAcc_AnimBP_C_ExecuteUbergraph_F_MED_Photographer_FaceAcc_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue = CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Montage_IsActive_ReturnValue = CallFunc_Montage_IsActive_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetPartSkeletalMeshComponent_ReturnValue = CallFunc_GetPartSkeletalMeshComponent_ReturnValue;
	Parms.K2Node_Event_Context_1 = K2Node_Event_Context_1;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.K2Node_Event_Context = K2Node_Event_Context;
	Parms.K2Node_SwitchName_CmpSuccess_1 = K2Node_SwitchName_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


