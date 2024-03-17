#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-DonutPC-WindowsTab_Normal.ButtonStyle-DonutPC-WindowsTab_Normal_C
// (None)

class UClass* UButtonStyleMinusDonutPCMinusWindowsTab_Normal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-DonutPC-WindowsTab_Normal_C");

	return Clss;
}


// ButtonStyle-DonutPC-WindowsTab_Normal_C ButtonStyle-DonutPC-WindowsTab_Normal.Default__ButtonStyle-DonutPC-WindowsTab_Normal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusDonutPCMinusWindowsTab_Normal_C* UButtonStyleMinusDonutPCMinusWindowsTab_Normal_C::GetDefaultObj()
{
	static class UButtonStyleMinusDonutPCMinusWindowsTab_Normal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusDonutPCMinusWindowsTab_Normal_C*>(UButtonStyleMinusDonutPCMinusWindowsTab_Normal_C::StaticClass()->DefaultObject);

	return Default;
}

}


