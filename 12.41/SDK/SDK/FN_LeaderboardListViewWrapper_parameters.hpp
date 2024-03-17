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
// Function LeaderboardListViewWrapper.LeaderboardListViewWrapper_C.Set Bar Color
struct ULeaderboardListViewWrapper_C_Set_Bar_Color_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function LeaderboardListViewWrapper.LeaderboardListViewWrapper_C.Set Event
struct ULeaderboardListViewWrapper_C_Set_Event_Params
{
public:
	class FString                                EventId;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                EventWindowId;                                     // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function LeaderboardListViewWrapper.LeaderboardListViewWrapper_C.ExecuteUbergraph_LeaderboardListViewWrapper
struct ULeaderboardListViewWrapper_C_ExecuteUbergraph_LeaderboardListViewWrapper_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_CustomEvent_Color;                          // 0x4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6DDE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_CustomEvent_EventId;                        // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_EventWindowId;                  // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

}
}


