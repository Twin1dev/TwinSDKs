#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x1178 - 0x1168)
// BlueprintGeneratedClass B_DualPistol_Donut_Athena.B_DualPistol_Donut_Athena_C
class AB_DualPistol_Donut_Athena_C : public AB_Ranged_Dual_Generic_Athena_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1168(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USoundCue*                             FireSoundOverride;                                 // 0x1170(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_DualPistol_Donut_Athena_C* GetDefaultObj();

	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void ExecuteUbergraph_B_DualPistol_Donut_Athena(int32 EntryPoint, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire);
};

}


