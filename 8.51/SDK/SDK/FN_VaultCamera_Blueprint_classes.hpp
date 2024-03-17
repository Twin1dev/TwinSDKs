#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x7B0 - 0x790)
// BlueprintGeneratedClass VaultCamera_Blueprint.VaultCamera_Blueprint_C
class AVaultCamera_Blueprint_C : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x790(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                       CachedPawn;                                        // 0x798(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MouseDown;                                         // 0x7A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FD4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AVaultCamera_Blueprint_C*              VaultActor;                                        // 0x7A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AVaultCamera_Blueprint_C* GetDefaultObj();

	void OnDeactivated();
	void OnActivated();
	void ExecuteUbergraph_VaultCamera_Blueprint(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TArray<class ATVPostProcessBP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ATVPostProcessBP_C* CallFunc_Array_Get_Item, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue);
};

}


