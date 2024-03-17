#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SpatialFactionPerk_unlocked.SpatialFactionPerk_unlocked_C
// (None)

class UClass* USpatialFactionPerk_unlocked_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpatialFactionPerk_unlocked_C");

	return Clss;
}


// SpatialFactionPerk_unlocked_C SpatialFactionPerk_unlocked.Default__SpatialFactionPerk_unlocked_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USpatialFactionPerk_unlocked_C* USpatialFactionPerk_unlocked_C::GetDefaultObj()
{
	static class USpatialFactionPerk_unlocked_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USpatialFactionPerk_unlocked_C*>(USpatialFactionPerk_unlocked_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SpatialFactionPerk_unlocked.SpatialFactionPerk_unlocked_C.OnLoaded_625B37C643E292B11217C98384656193
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpatialFactionPerk_unlocked_C::OnLoaded_625B37C643E292B11217C98384656193(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialFactionPerk_unlocked_C", "OnLoaded_625B37C643E292B11217C98384656193");

	Params::USpatialFactionPerk_unlocked_C_OnLoaded_625B37C643E292B11217C98384656193_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpatialFactionPerk_unlocked.SpatialFactionPerk_unlocked_C.BP_OnHovered_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USpatialFactionPerk_unlocked_C::BP_OnHovered_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialFactionPerk_unlocked_C", "BP_OnHovered_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpatialFactionPerk_unlocked.SpatialFactionPerk_unlocked_C.BP_OnUnhovered_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USpatialFactionPerk_unlocked_C::BP_OnUnhovered_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialFactionPerk_unlocked_C", "BP_OnUnhovered_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpatialFactionPerk_unlocked.SpatialFactionPerk_unlocked_C.BP_OnSelected_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USpatialFactionPerk_unlocked_C::BP_OnSelected_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialFactionPerk_unlocked_C", "BP_OnSelected_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpatialFactionPerk_unlocked.SpatialFactionPerk_unlocked_C.BP_OnDeselected_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USpatialFactionPerk_unlocked_C::BP_OnDeselected_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialFactionPerk_unlocked_C", "BP_OnDeselected_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpatialFactionPerk_unlocked.SpatialFactionPerk_unlocked_C.BPSetup
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFactionUnlockedPerkData*    InPerk                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpatialFactionPerk_unlocked_C::BPSetup(class UFactionUnlockedPerkData* InPerk)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialFactionPerk_unlocked_C", "BPSetup");

	Params::USpatialFactionPerk_unlocked_C_BPSetup_Params Parms{};

	Parms.InPerk = InPerk;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpatialFactionPerk_unlocked.SpatialFactionPerk_unlocked_C.ExecuteUbergraph_SpatialFactionPerk_unlocked
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFactionUnlockedPerkData*    K2Node_Event_InPerk                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetSmallPreviewImage_ReturnValue                        (HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpatialFactionPerk_unlocked_C::ExecuteUbergraph_SpatialFactionPerk_unlocked(int32 EntryPoint, class UFactionUnlockedPerkData* K2Node_Event_InPerk, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetSmallPreviewImage_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UObject* Temp_object_Variable, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class UObject* K2Node_CustomEvent_Loaded, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialFactionPerk_unlocked_C", "ExecuteUbergraph_SpatialFactionPerk_unlocked");

	Params::USpatialFactionPerk_unlocked_C_ExecuteUbergraph_SpatialFactionPerk_unlocked_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_InPerk = K2Node_Event_InPerk;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.CallFunc_GetSmallPreviewImage_ReturnValue = CallFunc_GetSmallPreviewImage_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue_1 = CallFunc_PlayAnimationReverse_ReturnValue_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_2 = CallFunc_GetDynamicMaterial_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


