#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass M_LRG_Buff_Cat_FaceAcc_AnimBp.M_LRG_Buff_Cat_FaceAcc_AnimBp_C
// (None)

class UClass* UM_LRG_Buff_Cat_FaceAcc_AnimBp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("M_LRG_Buff_Cat_FaceAcc_AnimBp_C");

	return Clss;
}


// M_LRG_Buff_Cat_FaceAcc_AnimBp_C M_LRG_Buff_Cat_FaceAcc_AnimBp.Default__M_LRG_Buff_Cat_FaceAcc_AnimBp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UM_LRG_Buff_Cat_FaceAcc_AnimBp_C* UM_LRG_Buff_Cat_FaceAcc_AnimBp_C::GetDefaultObj()
{
	static class UM_LRG_Buff_Cat_FaceAcc_AnimBp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UM_LRG_Buff_Cat_FaceAcc_AnimBp_C*>(UM_LRG_Buff_Cat_FaceAcc_AnimBp_C::StaticClass()->DefaultObject);

	return Default;
}


// Function M_LRG_Buff_Cat_FaceAcc_AnimBp.M_LRG_Buff_Cat_FaceAcc_AnimBp_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UM_LRG_Buff_Cat_FaceAcc_AnimBp_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M_LRG_Buff_Cat_FaceAcc_AnimBp_C", "AnimGraph");

	Params::UM_LRG_Buff_Cat_FaceAcc_AnimBp_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function M_LRG_Buff_Cat_FaceAcc_AnimBp.M_LRG_Buff_Cat_FaceAcc_AnimBp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_M_LRG_Buff_Cat_FaceAcc_AnimBp_AnimGraphNode_LayeredBoneBlend_423C3B544114B0D59EB813ABC03D5AC1
// (BlueprintEvent)
// Parameters:

void UM_LRG_Buff_Cat_FaceAcc_AnimBp_C::EvaluateGraphExposedInputs_ExecuteUbergraph_M_LRG_Buff_Cat_FaceAcc_AnimBp_AnimGraphNode_LayeredBoneBlend_423C3B544114B0D59EB813ABC03D5AC1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M_LRG_Buff_Cat_FaceAcc_AnimBp_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_M_LRG_Buff_Cat_FaceAcc_AnimBp_AnimGraphNode_LayeredBoneBlend_423C3B544114B0D59EB813ABC03D5AC1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function M_LRG_Buff_Cat_FaceAcc_AnimBp.M_LRG_Buff_Cat_FaceAcc_AnimBp_C.ExecuteUbergraph_M_LRG_Buff_Cat_FaceAcc_AnimBp
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UM_LRG_Buff_Cat_FaceAcc_AnimBp_C::ExecuteUbergraph_M_LRG_Buff_Cat_FaceAcc_AnimBp(int32 EntryPoint, float CallFunc_GetCurveValue_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M_LRG_Buff_Cat_FaceAcc_AnimBp_C", "ExecuteUbergraph_M_LRG_Buff_Cat_FaceAcc_AnimBp");

	Params::UM_LRG_Buff_Cat_FaceAcc_AnimBp_C_ExecuteUbergraph_M_LRG_Buff_Cat_FaceAcc_AnimBp_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCurveValue_ReturnValue = CallFunc_GetCurveValue_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


