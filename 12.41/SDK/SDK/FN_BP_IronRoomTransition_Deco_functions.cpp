#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IronRoomTransition_Deco.BP_IronRoomTransition_Deco_C
// (Actor)

class UClass* ABP_IronRoomTransition_Deco_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IronRoomTransition_Deco_C");

	return Clss;
}


// BP_IronRoomTransition_Deco_C BP_IronRoomTransition_Deco.Default__BP_IronRoomTransition_Deco_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_IronRoomTransition_Deco_C* ABP_IronRoomTransition_Deco_C::GetDefaultObj()
{
	static class ABP_IronRoomTransition_Deco_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_IronRoomTransition_Deco_C*>(ABP_IronRoomTransition_Deco_C::StaticClass()->DefaultObject);

	return Default;
}

}


