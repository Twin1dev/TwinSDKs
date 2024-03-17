#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x17 (0xB98 - 0xB81)
// BlueprintGeneratedClass B_Athena_Bucket_Nice_Weap.B_Athena_Bucket_Nice_Weap_C
class AB_Athena_Bucket_Nice_Weap_C : public AB_ConsumableSmall_Athena_C
{
public:
	uint8                                        Pad_65AB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              P_Flopper_BucketNice_InHand;                       // 0xB88(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Can;                                               // 0xB90(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_Athena_Bucket_Nice_Weap_C* GetDefaultObj();

};

}


