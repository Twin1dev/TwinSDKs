#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Clear_NoSound.ButtonStyle-Clear_NoSound_C
// (None)

class UClass* UButtonStyleMinusClear_NoSound_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Clear_NoSound_C");

	return Clss;
}


// ButtonStyle-Clear_NoSound_C ButtonStyle-Clear_NoSound.Default__ButtonStyle-Clear_NoSound_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusClear_NoSound_C* UButtonStyleMinusClear_NoSound_C::GetDefaultObj()
{
	static class UButtonStyleMinusClear_NoSound_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusClear_NoSound_C*>(UButtonStyleMinusClear_NoSound_C::StaticClass()->DefaultObject);

	return Default;
}

}


