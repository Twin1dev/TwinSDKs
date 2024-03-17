#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xB88 - 0xB80)
// WidgetBlueprintGeneratedClass DonutChallengeListEntry_Header.DonutChallengeListEntry_Header_C
class UDonutChallengeListEntry_Header_C : public UDonutChallengeEntryHeader
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB80(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UDonutChallengeListEntry_Header_C* GetDefaultObj();

	void BPUpdateTitle(int32 InWeek);
	void ExecuteUbergraph_DonutChallengeListEntry_Header(int32 EntryPoint, int32 K2Node_Event_InWeek, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
};

}


