#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-ColorPicker.ButtonStyle-ColorPicker_C
// (None)

class UClass* UButtonStyleMinusColorPicker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-ColorPicker_C");

	return Clss;
}


// ButtonStyle-ColorPicker_C ButtonStyle-ColorPicker.Default__ButtonStyle-ColorPicker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusColorPicker_C* UButtonStyleMinusColorPicker_C::GetDefaultObj()
{
	static class UButtonStyleMinusColorPicker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusColorPicker_C*>(UButtonStyleMinusColorPicker_C::StaticClass()->DefaultObject);

	return Default;
}

}


