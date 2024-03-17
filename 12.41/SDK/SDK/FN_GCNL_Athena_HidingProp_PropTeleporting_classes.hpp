#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x790 - 0x788)
// BlueprintGeneratedClass GCNL_Athena_HidingProp_PropTeleporting.GCNL_Athena_HidingProp_PropTeleporting_C
class AGCNL_Athena_HidingProp_PropTeleporting_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x788(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AGCNL_Athena_HidingProp_PropTeleporting_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_GCNL_Athena_HidingProp_PropTeleporting(int32 EntryPoint);
};

}


