#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HardcoreModifierSelectionScreen.HardcoreModifierSelectionScreen_C
// (None)

class UClass* UHardcoreModifierSelectionScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HardcoreModifierSelectionScreen_C");

	return Clss;
}


// HardcoreModifierSelectionScreen_C HardcoreModifierSelectionScreen.Default__HardcoreModifierSelectionScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHardcoreModifierSelectionScreen_C* UHardcoreModifierSelectionScreen_C::GetDefaultObj()
{
	static class UHardcoreModifierSelectionScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHardcoreModifierSelectionScreen_C*>(UHardcoreModifierSelectionScreen_C::StaticClass()->DefaultObject);

	return Default;
}

}


