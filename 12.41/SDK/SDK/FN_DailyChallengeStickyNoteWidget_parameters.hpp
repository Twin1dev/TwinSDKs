#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// Function DailyChallengeStickyNoteWidget.DailyChallengeStickyNoteWidget_C.HandleHasChallengeUpdated
struct UDailyChallengeStickyNoteWidget_C_HandleHasChallengeUpdated_Params
{
public:
	bool                                         bHasChallenge;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_67F7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               K2Node_Select_Default_1;                           // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function DailyChallengeStickyNoteWidget.DailyChallengeStickyNoteWidget_C.OnReplaceConfirmationClosed
struct UDailyChallengeStickyNoteWidget_C_OnReplaceConfirmationClosed_Params
{
public:
	bool                                         bAcceptedReroll;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function DailyChallengeStickyNoteWidget.DailyChallengeStickyNoteWidget_C.OnHasChallengeUpdated
struct UDailyChallengeStickyNoteWidget_C_OnHasChallengeUpdated_Params
{
public:
	bool                                         bHasAssignedChallenge;                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x6 (0x6 - 0x0)
// Function DailyChallengeStickyNoteWidget.DailyChallengeStickyNoteWidget_C.ExecuteUbergraph_DailyChallengeStickyNoteWidget
struct UDailyChallengeStickyNoteWidget_C_ExecuteUbergraph_DailyChallengeStickyNoteWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bHasAssignedChallenge;                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bAcceptedReroll;                      // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


