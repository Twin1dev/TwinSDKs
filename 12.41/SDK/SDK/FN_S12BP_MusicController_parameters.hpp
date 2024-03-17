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

// 0x20 (0x20 - 0x0)
// Function S12BP_MusicController.S12BP_MusicController_C.GetTracksForRegistration
struct AS12BP_MusicController_C_GetTracksForRegistration_Params
{
public:
	TArray<class UBP_TimeSynthTrackComponent_C*> Tracks;                                            // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
	TArray<class UBP_TimeSynthTrackComponent_C*> K2Node_MakeArray_Array;                            // 0x10(0x10)(ZeroConstructor, ReferenceParm, ContainsInstancedReference)
};

// 0x4 (0x4 - 0x0)
// Function S12BP_MusicController.S12BP_MusicController_C.ExecuteUbergraph_S12BP_MusicController
struct AS12BP_MusicController_C_ExecuteUbergraph_S12BP_MusicController_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


