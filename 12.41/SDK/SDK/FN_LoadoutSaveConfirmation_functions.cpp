#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LoadoutSaveConfirmation.LoadoutSaveConfirmation_C
// (None)

class UClass* ULoadoutSaveConfirmation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoadoutSaveConfirmation_C");

	return Clss;
}


// LoadoutSaveConfirmation_C LoadoutSaveConfirmation.Default__LoadoutSaveConfirmation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULoadoutSaveConfirmation_C* ULoadoutSaveConfirmation_C::GetDefaultObj()
{
	static class ULoadoutSaveConfirmation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoadoutSaveConfirmation_C*>(ULoadoutSaveConfirmation_C::StaticClass()->DefaultObject);

	return Default;
}

}


