#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x920 - 0x918)
// BlueprintGeneratedClass B_Generic_Instance_Grenade_Playset_Athena.B_Generic_Instance_Grenade_Playset_Athena_C
class AB_Generic_Instance_Grenade_Playset_Athena_C : public AB_Grenade_Playset_Athena_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x918(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AB_Generic_Instance_Grenade_Playset_Athena_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void K2_OnUnEquip();
	void OnWeaponAttached();
	void ExecuteUbergraph_B_Generic_Instance_Grenade_Playset_Athena(int32 EntryPoint);
};

}


