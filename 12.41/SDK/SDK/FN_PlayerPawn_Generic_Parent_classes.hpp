#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE8 (0x28A8 - 0x27C0)
// BlueprintGeneratedClass PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C
class APlayerPawn_Generic_Parent_C : public AFortPlayerPawn
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x27C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UMaterialInterface*>            Default_Weapon_Materials;                          // 0x27C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>      PawnBackpackMaterials;                             // 0x27D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>      PawnHatMaterials;                                  // 0x27E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>      PawnHeadMaterials;                                 // 0x27F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>      PawnBodyMaterials;                                 // 0x2808(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>      PawnCharmMaterials;                                // 0x2818(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>      PawnFaceMaterials;                                 // 0x2828(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>            PawnLegsMaterials;                                 // 0x2838(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>            PawnTorsoMaterials;                                // 0x2848(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UPostProcessComponent*                 PlayerPostProcessFX;                               // 0x2858(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USkeletalMeshComponent*>        SkeletalMeshes;                                    // 0x2860(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UMaterialInstanceDynamic*>      PawnMaterials_ALL;                                 // 0x2870(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                        WaterCounter;                                      // 0x2880(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3AE1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CurrentWaterMeshActor;                             // 0x2888(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInWater;                                         // 0x2890(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3AE2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Time_when_you_ll_be_able_to_splash_again;          // 0x2894(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnOverlapWaterVolume;                              // 0x2898(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class APlayerPawn_Generic_Parent_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void Entered_Water_Volume();
	void Player_Creates_a_Splash(struct FTransform& NewTransform);
	void ReinitializeWeaponMaterials();
	void ExecuteUbergraph_PlayerPawn_Generic_Parent(int32 EntryPoint, const struct FTransform& Temp_struct_Variable, bool CallFunc_IsLocallyControlled_ReturnValue, class UPostProcessComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FTransform& K2Node_CustomEvent_NewTransform);
	void OnOverlapWaterVolume__DelegateSignature(bool bIsInWater, class AFortPlayerPawn* Pawn, class AActor* Water);
};

}

