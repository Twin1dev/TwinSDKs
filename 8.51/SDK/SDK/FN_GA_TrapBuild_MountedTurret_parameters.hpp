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

// 0xD0 (0xD0 - 0x0)
// Function GA_TrapBuild_MountedTurret.GA_TrapBuild_MountedTurret_C.ExecuteUbergraph_GA_TrapBuild_MountedTurret
struct UGA_TrapBuild_MountedTurret_C_ExecuteUbergraph_GA_TrapBuild_MountedTurret_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6412[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue;    // 0x8(0xB8)(ContainsInstancedReference)
	TArray<struct FActiveGameplayEffectHandle>   CallFunc_ApplyGameplayEffectContainer_ReturnValue; // 0xC0(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
};

}
}


