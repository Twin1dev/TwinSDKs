#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CP_Pirates_M_Watchtower.GA_CP_Pirates_M_Watchtower_C
// (None)

class UClass* UGA_CP_Pirates_M_Watchtower_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CP_Pirates_M_Watchtower_C");

	return Clss;
}


// GA_CP_Pirates_M_Watchtower_C GA_CP_Pirates_M_Watchtower.Default__GA_CP_Pirates_M_Watchtower_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CP_Pirates_M_Watchtower_C* UGA_CP_Pirates_M_Watchtower_C::GetDefaultObj()
{
	static class UGA_CP_Pirates_M_Watchtower_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CP_Pirates_M_Watchtower_C*>(UGA_CP_Pirates_M_Watchtower_C::StaticClass()->DefaultObject);

	return Default;
}

}


