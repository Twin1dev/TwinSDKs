#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CP_Consumables_Consumables.GA_CP_Consumables_Consumables_C
// (None)

class UClass* UGA_CP_Consumables_Consumables_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CP_Consumables_Consumables_C");

	return Clss;
}


// GA_CP_Consumables_Consumables_C GA_CP_Consumables_Consumables.Default__GA_CP_Consumables_Consumables_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CP_Consumables_Consumables_C* UGA_CP_Consumables_Consumables_C::GetDefaultObj()
{
	static class UGA_CP_Consumables_Consumables_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CP_Consumables_Consumables_C*>(UGA_CP_Consumables_Consumables_C::StaticClass()->DefaultObject);

	return Default;
}

}


