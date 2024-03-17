#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x798 - 0x790)
// BlueprintGeneratedClass GCNL_Creative_SpeedAdjust_Vehicle.GCNL_Creative_SpeedAdjust_Vehicle_C
class AGCNL_Creative_SpeedAdjust_Vehicle_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x790(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AGCNL_Creative_SpeedAdjust_Vehicle_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Vehicle(int32 EntryPoint);
};

}


