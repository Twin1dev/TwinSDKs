#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SpatialCustomizationMain.SpatialCustomizationMain_C
// (None)

class UClass* USpatialCustomizationMain_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpatialCustomizationMain_C");

	return Clss;
}


// SpatialCustomizationMain_C SpatialCustomizationMain.Default__SpatialCustomizationMain_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USpatialCustomizationMain_C* USpatialCustomizationMain_C::GetDefaultObj()
{
	static class USpatialCustomizationMain_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USpatialCustomizationMain_C*>(USpatialCustomizationMain_C::StaticClass()->DefaultObject);

	return Default;
}

}


