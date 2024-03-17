#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x460 - 0x458)
// BlueprintGeneratedClass BP12_SkullDude_Mannequin.BP12_SkullDude_Mannequin_C
class ABP12_SkullDude_Mannequin_C : public AFortPlayerMannequin
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x458(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP12_SkullDude_Mannequin_C* GetDefaultObj();

	void OnPartChanged(class UCustomCharacterPart* OldPart, class UCustomCharacterPart* NewPart, enum class EFortCustomPartType PartType);
	void OnVariantChanged(const struct FGameplayTag& VariantChannel, const struct FGameplayTag& OldVariantTag, const struct FGameplayTag& NewVariantTag);
	void ExecuteUbergraph_BP12_SkullDude_Mannequin(int32 EntryPoint, class UCustomCharacterPart* K2Node_Event_OldPart, class UCustomCharacterPart* K2Node_Event_NewPart, enum class EFortCustomPartType K2Node_Event_PartType, const struct FGameplayTag& K2Node_Event_VariantChannel, const struct FGameplayTag& K2Node_Event_OldVariantTag, const struct FGameplayTag& K2Node_Event_NewVariantTag, class UFXSystemComponent* CallFunc_SpawnFXSystemAttached_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue);
};

}


