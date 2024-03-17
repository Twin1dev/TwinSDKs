#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0xD99 - 0xD88)
// BlueprintGeneratedClass B_Hookgun_Athena.B_Hookgun_Athena_C
class AB_Hookgun_Athena_C : public AB_Ranged_Generic_C
{
public:
	struct FTimerHandle                          Timer;                                             // 0xD88(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawnAthena*                 Player_Pawn;                                       // 0xD90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Debug;                                             // 0xD98(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AB_Hookgun_Athena_C* GetDefaultObj();

};

}


