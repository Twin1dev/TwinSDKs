#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SpatialFactionUnlockedPerksScreen.SpatialFactionUnlockedPerksScreen_C
// (None)

class UClass* USpatialFactionUnlockedPerksScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpatialFactionUnlockedPerksScreen_C");

	return Clss;
}


// SpatialFactionUnlockedPerksScreen_C SpatialFactionUnlockedPerksScreen.Default__SpatialFactionUnlockedPerksScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USpatialFactionUnlockedPerksScreen_C* USpatialFactionUnlockedPerksScreen_C::GetDefaultObj()
{
	static class USpatialFactionUnlockedPerksScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USpatialFactionUnlockedPerksScreen_C*>(USpatialFactionUnlockedPerksScreen_C::StaticClass()->DefaultObject);

	return Default;
}

}


