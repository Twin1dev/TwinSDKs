#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SpatialBattlePass.SpatialBattlePass_C
// (None)

class UClass* USpatialBattlePass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpatialBattlePass_C");

	return Clss;
}


// SpatialBattlePass_C SpatialBattlePass.Default__SpatialBattlePass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USpatialBattlePass_C* USpatialBattlePass_C::GetDefaultObj()
{
	static class USpatialBattlePass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USpatialBattlePass_C*>(USpatialBattlePass_C::StaticClass()->DefaultObject);

	return Default;
}

}


