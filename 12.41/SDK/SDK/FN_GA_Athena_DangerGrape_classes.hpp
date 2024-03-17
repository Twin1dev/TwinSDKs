#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xDA8 - 0xDA0)
// BlueprintGeneratedClass GA_Athena_DangerGrape.GA_Athena_DangerGrape_C
class UGA_Athena_DangerGrape_C : public UGA_ThrowConsumable_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xDA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_Athena_DangerGrape_C* GetDefaultObj();

	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Athena_DangerGrape(int32 EntryPoint, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue);
};

}


