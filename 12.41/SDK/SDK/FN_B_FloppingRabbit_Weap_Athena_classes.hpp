#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0xBA2 - 0xB81)
// BlueprintGeneratedClass B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C
class AB_FloppingRabbit_Weap_Athena_C : public AB_UtilityItem_Generic_Athena_C
{
public:
	uint8                                        Pad_65A2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB88(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                Projectile;                                        // 0xB90(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Wire;                                              // 0xB98(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HideBobber;                                        // 0xBA0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         OneHandGrip;                                       // 0xBA1(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)

	static class UClass* StaticClass();
	static class AB_FloppingRabbit_Weap_Athena_C* GetDefaultObj();

	void OnRep_OneHandGrip();
	void OnRep_HideBobber();
	void ReceiveBeginPlay();
	void K2_OnUnEquip();
	void OnWeaponAttached();
	void ForceKillFishing();
	void ExecuteUbergraph_B_FloppingRabbit_Weap_Athena(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


