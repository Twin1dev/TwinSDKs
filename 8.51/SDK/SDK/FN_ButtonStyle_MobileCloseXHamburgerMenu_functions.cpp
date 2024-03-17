#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle_MobileCloseXHamburgerMenu.ButtonStyle_MobileCloseXHamburgerMenu_C
// (None)

class UClass* UButtonStyle_MobileCloseXHamburgerMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle_MobileCloseXHamburgerMenu_C");

	return Clss;
}


// ButtonStyle_MobileCloseXHamburgerMenu_C ButtonStyle_MobileCloseXHamburgerMenu.Default__ButtonStyle_MobileCloseXHamburgerMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyle_MobileCloseXHamburgerMenu_C* UButtonStyle_MobileCloseXHamburgerMenu_C::GetDefaultObj()
{
	static class UButtonStyle_MobileCloseXHamburgerMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyle_MobileCloseXHamburgerMenu_C*>(UButtonStyle_MobileCloseXHamburgerMenu_C::StaticClass()->DefaultObject);

	return Default;
}

}


