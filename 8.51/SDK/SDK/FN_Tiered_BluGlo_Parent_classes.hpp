#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xC50 - 0xC48)
// BlueprintGeneratedClass Tiered_BluGlo_Parent.Tiered_BluGlo_Parent_C
class ATiered_BluGlo_Parent_C : public ABuildingContainer
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC48(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ATiered_BluGlo_Parent_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_Tiered_BluGlo_Parent(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue);
};

}


