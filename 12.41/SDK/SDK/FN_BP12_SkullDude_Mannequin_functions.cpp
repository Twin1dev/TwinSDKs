#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP12_SkullDude_Mannequin.BP12_SkullDude_Mannequin_C
// (Actor)

class UClass* ABP12_SkullDude_Mannequin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP12_SkullDude_Mannequin_C");

	return Clss;
}


// BP12_SkullDude_Mannequin_C BP12_SkullDude_Mannequin.Default__BP12_SkullDude_Mannequin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP12_SkullDude_Mannequin_C* ABP12_SkullDude_Mannequin_C::GetDefaultObj()
{
	static class ABP12_SkullDude_Mannequin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP12_SkullDude_Mannequin_C*>(ABP12_SkullDude_Mannequin_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP12_SkullDude_Mannequin.BP12_SkullDude_Mannequin_C.OnPartChanged
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UCustomCharacterPart*        OldPart                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCustomCharacterPart*        NewPart                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortCustomPartType     PartType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP12_SkullDude_Mannequin_C::OnPartChanged(class UCustomCharacterPart* OldPart, class UCustomCharacterPart* NewPart, enum class EFortCustomPartType PartType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP12_SkullDude_Mannequin_C", "OnPartChanged");

	Params::ABP12_SkullDude_Mannequin_C_OnPartChanged_Params Parms{};

	Parms.OldPart = OldPart;
	Parms.NewPart = NewPart;
	Parms.PartType = PartType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP12_SkullDude_Mannequin.BP12_SkullDude_Mannequin_C.OnVariantChanged
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayTag                VariantChannel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                OldVariantTag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                NewVariantTag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP12_SkullDude_Mannequin_C::OnVariantChanged(const struct FGameplayTag& VariantChannel, const struct FGameplayTag& OldVariantTag, const struct FGameplayTag& NewVariantTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP12_SkullDude_Mannequin_C", "OnVariantChanged");

	Params::ABP12_SkullDude_Mannequin_C_OnVariantChanged_Params Parms{};

	Parms.VariantChannel = VariantChannel;
	Parms.OldVariantTag = OldVariantTag;
	Parms.NewVariantTag = NewVariantTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP12_SkullDude_Mannequin.BP12_SkullDude_Mannequin_C.ExecuteUbergraph_BP12_SkullDude_Mannequin
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCustomCharacterPart*        K2Node_Event_OldPart                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCustomCharacterPart*        K2Node_Event_NewPart                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortCustomPartType     K2Node_Event_PartType                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Event_VariantChannel                                      (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Event_OldVariantTag                                       (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Event_NewVariantTag                                       (NoDestructor, HasGetValueTypeHash)
// class UFXSystemComponent*          CallFunc_SpawnFXSystemAttached_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP12_SkullDude_Mannequin_C::ExecuteUbergraph_BP12_SkullDude_Mannequin(int32 EntryPoint, class UCustomCharacterPart* K2Node_Event_OldPart, class UCustomCharacterPart* K2Node_Event_NewPart, enum class EFortCustomPartType K2Node_Event_PartType, const struct FGameplayTag& K2Node_Event_VariantChannel, const struct FGameplayTag& K2Node_Event_OldVariantTag, const struct FGameplayTag& K2Node_Event_NewVariantTag, class UFXSystemComponent* CallFunc_SpawnFXSystemAttached_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP12_SkullDude_Mannequin_C", "ExecuteUbergraph_BP12_SkullDude_Mannequin");

	Params::ABP12_SkullDude_Mannequin_C_ExecuteUbergraph_BP12_SkullDude_Mannequin_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OldPart = K2Node_Event_OldPart;
	Parms.K2Node_Event_NewPart = K2Node_Event_NewPart;
	Parms.K2Node_Event_PartType = K2Node_Event_PartType;
	Parms.K2Node_Event_VariantChannel = K2Node_Event_VariantChannel;
	Parms.K2Node_Event_OldVariantTag = K2Node_Event_OldVariantTag;
	Parms.K2Node_Event_NewVariantTag = K2Node_Event_NewVariantTag;
	Parms.CallFunc_SpawnFXSystemAttached_ReturnValue = CallFunc_SpawnFXSystemAttached_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


