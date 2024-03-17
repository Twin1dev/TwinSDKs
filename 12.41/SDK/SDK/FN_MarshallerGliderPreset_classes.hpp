#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA0 - 0x98)
// BlueprintGeneratedClass MarshallerGliderPreset.MarshallerGliderPreset_C
class UMarshallerGliderPreset_C : public UMarshalledVFX_AuthoredDataConfig
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x98(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UMarshallerGliderPreset_C* GetDefaultObj();

	void ExecuteUbergraph_MarshallerGliderPreset(int32 EntryPoint);
};

}


