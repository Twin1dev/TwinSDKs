#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ApplyMedkit_Athena_AnimBP.ApplyMedkit_Athena_AnimBP_C
// (None)

class UClass* UApplyMedkit_Athena_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ApplyMedkit_Athena_AnimBP_C");

	return Clss;
}


// ApplyMedkit_Athena_AnimBP_C ApplyMedkit_Athena_AnimBP.Default__ApplyMedkit_Athena_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UApplyMedkit_Athena_AnimBP_C* UApplyMedkit_Athena_AnimBP_C::GetDefaultObj()
{
	static class UApplyMedkit_Athena_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UApplyMedkit_Athena_AnimBP_C*>(UApplyMedkit_Athena_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ApplyMedkit_Athena_AnimBP.ApplyMedkit_Athena_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UApplyMedkit_Athena_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ApplyMedkit_Athena_AnimBP_C", "BlueprintUpdateAnimation");

	Params::UApplyMedkit_Athena_AnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ApplyMedkit_Athena_AnimBP.ApplyMedkit_Athena_AnimBP_C.ExecuteUbergraph_ApplyMedkit_Athena_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AB_ConsumableSmall_Medkit_Athena_C*K2Node_DynamicCast_AsB_Consumable_Small_Medkit_Athena            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawnAthena*       K2Node_DynamicCast_AsFort_Player_Pawn_Athena                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortCustomGender       CallFunc_GetCharacterGender_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UApplyMedkit_Athena_AnimBP_C::ExecuteUbergraph_ApplyMedkit_Athena_AnimBP(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class AB_ConsumableSmall_Medkit_Athena_C* K2Node_DynamicCast_AsB_Consumable_Small_Medkit_Athena, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_1, enum class EFortCustomGender CallFunc_GetCharacterGender_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ApplyMedkit_Athena_AnimBP_C", "ExecuteUbergraph_ApplyMedkit_Athena_AnimBP");

	Params::UApplyMedkit_Athena_AnimBP_C_ExecuteUbergraph_ApplyMedkit_Athena_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsB_Consumable_Small_Medkit_Athena = K2Node_DynamicCast_AsB_Consumable_Small_Medkit_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn_Athena = K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetCharacterGender_ReturnValue = CallFunc_GetCharacterGender_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


