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

// 0x1 (0x1 - 0x0)
// Function ChallengeCountdown_Elevator.ChallengeCountdown_Elevator_C.PreConstruct
struct UChallengeCountdown_Elevator_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function ChallengeCountdown_Elevator.ChallengeCountdown_Elevator_C.OnChallengeSet
struct UChallengeCountdown_Elevator_C_OnChallengeSet_Params
{
public:
	struct FTimerDisplayData                     DisplayStyle;                                      // 0x0(0x38)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x41 (0x41 - 0x0)
// Function ChallengeCountdown_Elevator.ChallengeCountdown_Elevator_C.ExecuteUbergraph_ChallengeCountdown_Elevator
struct UChallengeCountdown_Elevator_C_ExecuteUbergraph_ChallengeCountdown_Elevator_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6ECE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerDisplayData                     K2Node_Event_DisplayStyle;                         // 0x8(0x38)(ConstParm)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


