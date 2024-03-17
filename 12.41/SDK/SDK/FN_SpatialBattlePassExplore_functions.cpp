#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SpatialBattlePassExplore.SpatialBattlePassExplore_C
// (None)

class UClass* USpatialBattlePassExplore_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpatialBattlePassExplore_C");

	return Clss;
}


// SpatialBattlePassExplore_C SpatialBattlePassExplore.Default__SpatialBattlePassExplore_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USpatialBattlePassExplore_C* USpatialBattlePassExplore_C::GetDefaultObj()
{
	static class USpatialBattlePassExplore_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USpatialBattlePassExplore_C*>(USpatialBattlePassExplore_C::StaticClass()->DefaultObject);

	return Default;
}

}


