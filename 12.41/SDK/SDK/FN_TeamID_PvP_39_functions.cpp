#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TeamID_PvP_39.TeamID_PvP_39_C
// (None)

class UClass* UTeamID_PvP_39_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TeamID_PvP_39_C");

	return Clss;
}


// TeamID_PvP_39_C TeamID_PvP_39.Default__TeamID_PvP_39_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTeamID_PvP_39_C* UTeamID_PvP_39_C::GetDefaultObj()
{
	static class UTeamID_PvP_39_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTeamID_PvP_39_C*>(UTeamID_PvP_39_C::StaticClass()->DefaultObject);

	return Default;
}

}


