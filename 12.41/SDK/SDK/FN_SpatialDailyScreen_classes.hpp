#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x3A0 - 0x390)
// WidgetBlueprintGeneratedClass SpatialDailyScreen.SpatialDailyScreen_C
class USpatialDailyScreen_C : public USpatialDailyChallengesWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USafeZone*                             SafeZone_2;                                        // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USpatialDailyScreen_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_SpatialDailyScreen(int32 EntryPoint);
};

}


