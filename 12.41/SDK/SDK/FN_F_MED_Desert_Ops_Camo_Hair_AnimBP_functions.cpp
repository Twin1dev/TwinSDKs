#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass F_MED_Desert_Ops_Camo_Hair_AnimBP.F_MED_Desert_Ops_Camo_Hair_AnimBP_C
// (None)

class UClass* UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("F_MED_Desert_Ops_Camo_Hair_AnimBP_C");

	return Clss;
}


// F_MED_Desert_Ops_Camo_Hair_AnimBP_C F_MED_Desert_Ops_Camo_Hair_AnimBP.Default__F_MED_Desert_Ops_Camo_Hair_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UF_MED_Desert_Ops_Camo_Hair_AnimBP_C* UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::GetDefaultObj()
{
	static class UF_MED_Desert_Ops_Camo_Hair_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UF_MED_Desert_Ops_Camo_Hair_AnimBP_C*>(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function F_MED_Desert_Ops_Camo_Hair_AnimBP.F_MED_Desert_Ops_Camo_Hair_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("F_MED_Desert_Ops_Camo_Hair_AnimBP_C", "AnimGraph");

	Params::UF_MED_Desert_Ops_Camo_Hair_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function F_MED_Desert_Ops_Camo_Hair_AnimBP.F_MED_Desert_Ops_Camo_Hair_AnimBP_C.OnCharacterCustomizationLoaded
// (Event, Public, BlueprintEvent)
// Parameters:

void UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::OnCharacterCustomizationLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("F_MED_Desert_Ops_Camo_Hair_AnimBP_C", "OnCharacterCustomizationLoaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function F_MED_Desert_Ops_Camo_Hair_AnimBP.F_MED_Desert_Ops_Camo_Hair_AnimBP_C.ExecuteUbergraph_F_MED_Desert_Ops_Camo_Hair_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        K2Node_MakeArray_Array                                           (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<struct FGameplayTag>        K2Node_MakeArray_Array_1                                         (ConstParm, ZeroConstructor, ReferenceParm)
// bool                               CallFunc_CharacterItemDefinitionHasAnyMetaTag_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CharacterItemDefinitionHasAnyMetaTag_ReturnValue_1      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FGameplayTag>        K2Node_MakeArray_Array_2                                         (ConstParm, ZeroConstructor, ReferenceParm)
// bool                               CallFunc_CharacterItemDefinitionHasAnyMetaTag_ReturnValue_2      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FGameplayTag>        K2Node_MakeArray_Array_3                                         (ConstParm, ZeroConstructor, ReferenceParm)
// bool                               CallFunc_CharacterItemDefinitionHasAnyMetaTag_ReturnValue_3      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FGameplayTag>        K2Node_MakeArray_Array_4                                         (ConstParm, ZeroConstructor, ReferenceParm)
// bool                               CallFunc_CharacterItemDefinitionHasAnyMetaTag_ReturnValue_4      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FGameplayTag>        K2Node_MakeArray_Array_5                                         (ConstParm, ZeroConstructor, ReferenceParm)
// bool                               CallFunc_CharacterItemDefinitionHasAnyMetaTag_ReturnValue_5      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FGameplayTag>        K2Node_MakeArray_Array_6                                         (ConstParm, ZeroConstructor, ReferenceParm)
// bool                               CallFunc_CharacterItemDefinitionHasAnyMetaTag_ReturnValue_6      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::ExecuteUbergraph_F_MED_Desert_Ops_Camo_Hair_AnimBP(int32 EntryPoint, TArray<struct FGameplayTag>& K2Node_MakeArray_Array, TArray<struct FGameplayTag>& K2Node_MakeArray_Array_1, bool CallFunc_CharacterItemDefinitionHasAnyMetaTag_ReturnValue, bool CallFunc_CharacterItemDefinitionHasAnyMetaTag_ReturnValue_1, TArray<struct FGameplayTag>& K2Node_MakeArray_Array_2, bool CallFunc_CharacterItemDefinitionHasAnyMetaTag_ReturnValue_2, TArray<struct FGameplayTag>& K2Node_MakeArray_Array_3, bool CallFunc_CharacterItemDefinitionHasAnyMetaTag_ReturnValue_3, TArray<struct FGameplayTag>& K2Node_MakeArray_Array_4, bool CallFunc_CharacterItemDefinitionHasAnyMetaTag_ReturnValue_4, TArray<struct FGameplayTag>& K2Node_MakeArray_Array_5, bool CallFunc_CharacterItemDefinitionHasAnyMetaTag_ReturnValue_5, TArray<struct FGameplayTag>& K2Node_MakeArray_Array_6, bool CallFunc_CharacterItemDefinitionHasAnyMetaTag_ReturnValue_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("F_MED_Desert_Ops_Camo_Hair_AnimBP_C", "ExecuteUbergraph_F_MED_Desert_Ops_Camo_Hair_AnimBP");

	Params::UF_MED_Desert_Ops_Camo_Hair_AnimBP_C_ExecuteUbergraph_F_MED_Desert_Ops_Camo_Hair_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_CharacterItemDefinitionHasAnyMetaTag_ReturnValue = CallFunc_CharacterItemDefinitionHasAnyMetaTag_ReturnValue;
	Parms.CallFunc_CharacterItemDefinitionHasAnyMetaTag_ReturnValue_1 = CallFunc_CharacterItemDefinitionHasAnyMetaTag_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_CharacterItemDefinitionHasAnyMetaTag_ReturnValue_2 = CallFunc_CharacterItemDefinitionHasAnyMetaTag_ReturnValue_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_CharacterItemDefinitionHasAnyMetaTag_ReturnValue_3 = CallFunc_CharacterItemDefinitionHasAnyMetaTag_ReturnValue_3;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.CallFunc_CharacterItemDefinitionHasAnyMetaTag_ReturnValue_4 = CallFunc_CharacterItemDefinitionHasAnyMetaTag_ReturnValue_4;
	Parms.K2Node_MakeArray_Array_5 = K2Node_MakeArray_Array_5;
	Parms.CallFunc_CharacterItemDefinitionHasAnyMetaTag_ReturnValue_5 = CallFunc_CharacterItemDefinitionHasAnyMetaTag_ReturnValue_5;
	Parms.K2Node_MakeArray_Array_6 = K2Node_MakeArray_Array_6;
	Parms.CallFunc_CharacterItemDefinitionHasAnyMetaTag_ReturnValue_6 = CallFunc_CharacterItemDefinitionHasAnyMetaTag_ReturnValue_6;

	UObject::ProcessEvent(Func, &Parms);

}

}


