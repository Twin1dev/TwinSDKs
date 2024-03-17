#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0xB90 - 0xB81)
// BlueprintGeneratedClass B_Keycard_Athena_Parent.B_Keycard_Athena_Parent_C
class AB_Keycard_Athena_Parent_C : public AB_UtilityItem_Generic_Athena_C
{
public:
	uint8                                        Pad_6306[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  StaticMesh;                                        // 0xB88(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_Keycard_Athena_Parent_C* GetDefaultObj();

};

}


