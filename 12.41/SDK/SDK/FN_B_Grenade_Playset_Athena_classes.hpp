#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x17 (0xB98 - 0xB81)
// BlueprintGeneratedClass B_Grenade_Playset_Athena.B_Grenade_Playset_Athena_C
class AB_Grenade_Playset_Athena_C : public AB_Grenade_Tower_Athena_C
{
public:
	uint8                                        Pad_62F1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB88(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortPlaysetGrenadeInputComponent*     AthenaPlaysetGrenadeInput;                         // 0xB90(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_Grenade_Playset_Athena_C* GetDefaultObj();

	void K2_OnUnEquip();
	void OnWeaponAttached();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_Grenade_Playset_Athena(int32 EntryPoint, class AController* CallFunc_GetInstigatorController_ReturnValue, class AController* CallFunc_GetInstigatorController_ReturnValue_1, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_1);
};

}


