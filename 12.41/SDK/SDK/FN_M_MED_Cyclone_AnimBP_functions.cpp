#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass M_MED_Cyclone_AnimBP.M_MED_Cyclone_AnimBP_C
// (None)

class UClass* UM_MED_Cyclone_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("M_MED_Cyclone_AnimBP_C");

	return Clss;
}


// M_MED_Cyclone_AnimBP_C M_MED_Cyclone_AnimBP.Default__M_MED_Cyclone_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UM_MED_Cyclone_AnimBP_C* UM_MED_Cyclone_AnimBP_C::GetDefaultObj()
{
	static class UM_MED_Cyclone_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UM_MED_Cyclone_AnimBP_C*>(UM_MED_Cyclone_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function M_MED_Cyclone_AnimBP.M_MED_Cyclone_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UM_MED_Cyclone_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M_MED_Cyclone_AnimBP_C", "AnimGraph");

	Params::UM_MED_Cyclone_AnimBP_C_AnimGraph_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function M_MED_Cyclone_AnimBP.M_MED_Cyclone_AnimBP_C.Noise_FNC
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Frequency                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Amp                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PerlinNoise1D_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Sin_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UM_MED_Cyclone_AnimBP_C::Noise_FNC(float Frequency, float Amp, float* Output, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_PerlinNoise1D_ReturnValue, float CallFunc_Sin_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M_MED_Cyclone_AnimBP_C", "Noise_FNC");

	Params::UM_MED_Cyclone_AnimBP_C_Noise_FNC_Params Parms{};

	Parms.Frequency = Frequency;
	Parms.Amp = Amp;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_PerlinNoise1D_ReturnValue = CallFunc_PerlinNoise1D_ReturnValue;
	Parms.CallFunc_Sin_ReturnValue = CallFunc_Sin_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = Parms.Output;

}


// Function M_MED_Cyclone_AnimBP.M_MED_Cyclone_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UM_MED_Cyclone_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M_MED_Cyclone_AnimBP_C", "BlueprintUpdateAnimation");

	Params::UM_MED_Cyclone_AnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function M_MED_Cyclone_AnimBP.M_MED_Cyclone_AnimBP_C.ExecuteUbergraph_M_MED_Cyclone_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Noise_FNC_output                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Noise_FNC_output_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Noise_FNC_output_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Noise_FNC_output_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Noise_FNC_output_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Noise_FNC_output_5                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Noise_FNC_output_6                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Noise_FNC_output_7                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Noise_FNC_output_8                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Noise_FNC_output_9                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Noise_FNC_output_10                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Noise_FNC_output_11                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UM_MED_Cyclone_AnimBP_C::ExecuteUbergraph_M_MED_Cyclone_AnimBP(int32 EntryPoint, float K2Node_Event_DeltaTimeX, float CallFunc_Noise_FNC_output, float CallFunc_Noise_FNC_output_1, float CallFunc_Noise_FNC_output_2, float CallFunc_Noise_FNC_output_3, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, float CallFunc_Noise_FNC_output_4, float CallFunc_Noise_FNC_output_5, const struct FVector& CallFunc_MakeVector_ReturnValue_2, float CallFunc_Noise_FNC_output_6, float CallFunc_Noise_FNC_output_7, const struct FVector& CallFunc_MakeVector_ReturnValue_3, float CallFunc_Noise_FNC_output_8, float CallFunc_Noise_FNC_output_9, const struct FVector& CallFunc_MakeVector_ReturnValue_4, float CallFunc_Noise_FNC_output_10, float CallFunc_Noise_FNC_output_11, const struct FVector& CallFunc_MakeVector_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M_MED_Cyclone_AnimBP_C", "ExecuteUbergraph_M_MED_Cyclone_AnimBP");

	Params::UM_MED_Cyclone_AnimBP_C_ExecuteUbergraph_M_MED_Cyclone_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_Noise_FNC_output = CallFunc_Noise_FNC_output;
	Parms.CallFunc_Noise_FNC_output_1 = CallFunc_Noise_FNC_output_1;
	Parms.CallFunc_Noise_FNC_output_2 = CallFunc_Noise_FNC_output_2;
	Parms.CallFunc_Noise_FNC_output_3 = CallFunc_Noise_FNC_output_3;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_Noise_FNC_output_4 = CallFunc_Noise_FNC_output_4;
	Parms.CallFunc_Noise_FNC_output_5 = CallFunc_Noise_FNC_output_5;
	Parms.CallFunc_MakeVector_ReturnValue_2 = CallFunc_MakeVector_ReturnValue_2;
	Parms.CallFunc_Noise_FNC_output_6 = CallFunc_Noise_FNC_output_6;
	Parms.CallFunc_Noise_FNC_output_7 = CallFunc_Noise_FNC_output_7;
	Parms.CallFunc_MakeVector_ReturnValue_3 = CallFunc_MakeVector_ReturnValue_3;
	Parms.CallFunc_Noise_FNC_output_8 = CallFunc_Noise_FNC_output_8;
	Parms.CallFunc_Noise_FNC_output_9 = CallFunc_Noise_FNC_output_9;
	Parms.CallFunc_MakeVector_ReturnValue_4 = CallFunc_MakeVector_ReturnValue_4;
	Parms.CallFunc_Noise_FNC_output_10 = CallFunc_Noise_FNC_output_10;
	Parms.CallFunc_Noise_FNC_output_11 = CallFunc_Noise_FNC_output_11;
	Parms.CallFunc_MakeVector_ReturnValue_5 = CallFunc_MakeVector_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}

}


