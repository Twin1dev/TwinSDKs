#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SpatialDonutScreen.SpatialDonutScreen_C
// (None)

class UClass* USpatialDonutScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpatialDonutScreen_C");

	return Clss;
}


// SpatialDonutScreen_C SpatialDonutScreen.Default__SpatialDonutScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USpatialDonutScreen_C* USpatialDonutScreen_C::GetDefaultObj()
{
	static class USpatialDonutScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USpatialDonutScreen_C*>(USpatialDonutScreen_C::StaticClass()->DefaultObject);

	return Default;
}

}


