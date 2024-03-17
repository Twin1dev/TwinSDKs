#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-DonutPC-WindowsTab.ButtonStyle-DonutPC-WindowsTab_C
// (None)

class UClass* UButtonStyleMinusDonutPCMinusWindowsTab_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-DonutPC-WindowsTab_C");

	return Clss;
}


// ButtonStyle-DonutPC-WindowsTab_C ButtonStyle-DonutPC-WindowsTab.Default__ButtonStyle-DonutPC-WindowsTab_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusDonutPCMinusWindowsTab_C* UButtonStyleMinusDonutPCMinusWindowsTab_C::GetDefaultObj()
{
	static class UButtonStyleMinusDonutPCMinusWindowsTab_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusDonutPCMinusWindowsTab_C*>(UButtonStyleMinusDonutPCMinusWindowsTab_C::StaticClass()->DefaultObject);

	return Default;
}

}


