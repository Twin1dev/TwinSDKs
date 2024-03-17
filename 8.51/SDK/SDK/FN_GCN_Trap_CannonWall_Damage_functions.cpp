#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_Trap_CannonWall_Damage.GCN_Trap_CannonWall_Damage_C
// (None)

class UClass* UGCN_Trap_CannonWall_Damage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_Trap_CannonWall_Damage_C");

	return Clss;
}


// GCN_Trap_CannonWall_Damage_C GCN_Trap_CannonWall_Damage.Default__GCN_Trap_CannonWall_Damage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_Trap_CannonWall_Damage_C* UGCN_Trap_CannonWall_Damage_C::GetDefaultObj()
{
	static class UGCN_Trap_CannonWall_Damage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_Trap_CannonWall_Damage_C*>(UGCN_Trap_CannonWall_Damage_C::StaticClass()->DefaultObject);

	return Default;
}

}


