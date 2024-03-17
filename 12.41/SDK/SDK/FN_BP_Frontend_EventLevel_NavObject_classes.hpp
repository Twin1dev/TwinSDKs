#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x4D0 - 0x4C8)
// BlueprintGeneratedClass BP_Frontend_EventLevel_NavObject.BP_Frontend_EventLevel_NavObject_C
class ABP_Frontend_EventLevel_NavObject_C : public AFortEventLevelNavigationActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Frontend_EventLevel_NavObject_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Frontend_EventLevel_NavObject(int32 EntryPoint);
};

}


