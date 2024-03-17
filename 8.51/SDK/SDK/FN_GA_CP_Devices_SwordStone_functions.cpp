#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CP_Devices_SwordStone.GA_CP_Devices_SwordStone_C
// (None)

class UClass* UGA_CP_Devices_SwordStone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CP_Devices_SwordStone_C");

	return Clss;
}


// GA_CP_Devices_SwordStone_C GA_CP_Devices_SwordStone.Default__GA_CP_Devices_SwordStone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CP_Devices_SwordStone_C* UGA_CP_Devices_SwordStone_C::GetDefaultObj()
{
	static class UGA_CP_Devices_SwordStone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CP_Devices_SwordStone_C*>(UGA_CP_Devices_SwordStone_C::StaticClass()->DefaultObject);

	return Default;
}

}


