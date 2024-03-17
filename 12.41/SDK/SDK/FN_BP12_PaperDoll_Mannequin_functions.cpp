#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP12_PaperDoll_Mannequin.BP12_PaperDoll_Mannequin_C
// (Actor)

class UClass* ABP12_PaperDoll_Mannequin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP12_PaperDoll_Mannequin_C");

	return Clss;
}


// BP12_PaperDoll_Mannequin_C BP12_PaperDoll_Mannequin.Default__BP12_PaperDoll_Mannequin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP12_PaperDoll_Mannequin_C* ABP12_PaperDoll_Mannequin_C::GetDefaultObj()
{
	static class ABP12_PaperDoll_Mannequin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP12_PaperDoll_Mannequin_C*>(ABP12_PaperDoll_Mannequin_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP12_PaperDoll_Mannequin.BP12_PaperDoll_Mannequin_C.OnVariantChanged
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayTag                VariantChannel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                OldVariantTag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                NewVariantTag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP12_PaperDoll_Mannequin_C::OnVariantChanged(const struct FGameplayTag& VariantChannel, const struct FGameplayTag& OldVariantTag, const struct FGameplayTag& NewVariantTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP12_PaperDoll_Mannequin_C", "OnVariantChanged");

	Params::ABP12_PaperDoll_Mannequin_C_OnVariantChanged_Params Parms{};

	Parms.VariantChannel = VariantChannel;
	Parms.OldVariantTag = OldVariantTag;
	Parms.NewVariantTag = NewVariantTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP12_PaperDoll_Mannequin.BP12_PaperDoll_Mannequin_C.OnPartChanged
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UCustomCharacterPart*        OldPart                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCustomCharacterPart*        NewPart                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortCustomPartType     PartType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP12_PaperDoll_Mannequin_C::OnPartChanged(class UCustomCharacterPart* OldPart, class UCustomCharacterPart* NewPart, enum class EFortCustomPartType PartType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP12_PaperDoll_Mannequin_C", "OnPartChanged");

	Params::ABP12_PaperDoll_Mannequin_C_OnPartChanged_Params Parms{};

	Parms.OldPart = OldPart;
	Parms.NewPart = NewPart;
	Parms.PartType = PartType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP12_PaperDoll_Mannequin.BP12_PaperDoll_Mannequin_C.ExecuteUbergraph_BP12_PaperDoll_Mannequin
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Event_VariantChannel                                      (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Event_OldVariantTag                                       (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Event_NewVariantTag                                       (NoDestructor, HasGetValueTypeHash)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFXSystemComponent*          CallFunc_SpawnFXSystemAttached_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFXSystemComponent*          CallFunc_SpawnFXSystemAttached_ReturnValue_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFXSystemComponent*          CallFunc_SpawnFXSystemAttached_ReturnValue_2                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFXSystemComponent*          CallFunc_SpawnFXSystemAttached_ReturnValue_3                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFXSystemComponent*          CallFunc_SpawnFXSystemAttached_ReturnValue_4                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCustomCharacterPart*        K2Node_Event_OldPart                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCustomCharacterPart*        K2Node_Event_NewPart                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortCustomPartType     K2Node_Event_PartType                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP12_PaperDoll_Mannequin_C::ExecuteUbergraph_BP12_PaperDoll_Mannequin(int32 EntryPoint, const struct FGameplayTag& K2Node_Event_VariantChannel, const struct FGameplayTag& K2Node_Event_OldVariantTag, const struct FGameplayTag& K2Node_Event_NewVariantTag, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, class UFXSystemComponent* CallFunc_SpawnFXSystemAttached_ReturnValue, class UFXSystemComponent* CallFunc_SpawnFXSystemAttached_ReturnValue_1, class UFXSystemComponent* CallFunc_SpawnFXSystemAttached_ReturnValue_2, class UFXSystemComponent* CallFunc_SpawnFXSystemAttached_ReturnValue_3, class UFXSystemComponent* CallFunc_SpawnFXSystemAttached_ReturnValue_4, class UCustomCharacterPart* K2Node_Event_OldPart, class UCustomCharacterPart* K2Node_Event_NewPart, enum class EFortCustomPartType K2Node_Event_PartType, bool K2Node_SwitchEnum_CmpSuccess, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP12_PaperDoll_Mannequin_C", "ExecuteUbergraph_BP12_PaperDoll_Mannequin");

	Params::ABP12_PaperDoll_Mannequin_C_ExecuteUbergraph_BP12_PaperDoll_Mannequin_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_VariantChannel = K2Node_Event_VariantChannel;
	Parms.K2Node_Event_OldVariantTag = K2Node_Event_OldVariantTag;
	Parms.K2Node_Event_NewVariantTag = K2Node_Event_NewVariantTag;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;
	Parms.CallFunc_SpawnFXSystemAttached_ReturnValue = CallFunc_SpawnFXSystemAttached_ReturnValue;
	Parms.CallFunc_SpawnFXSystemAttached_ReturnValue_1 = CallFunc_SpawnFXSystemAttached_ReturnValue_1;
	Parms.CallFunc_SpawnFXSystemAttached_ReturnValue_2 = CallFunc_SpawnFXSystemAttached_ReturnValue_2;
	Parms.CallFunc_SpawnFXSystemAttached_ReturnValue_3 = CallFunc_SpawnFXSystemAttached_ReturnValue_3;
	Parms.CallFunc_SpawnFXSystemAttached_ReturnValue_4 = CallFunc_SpawnFXSystemAttached_ReturnValue_4;
	Parms.K2Node_Event_OldPart = K2Node_Event_OldPart;
	Parms.K2Node_Event_NewPart = K2Node_Event_NewPart;
	Parms.K2Node_Event_PartType = K2Node_Event_PartType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


