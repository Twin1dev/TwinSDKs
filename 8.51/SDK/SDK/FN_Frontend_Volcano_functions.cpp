#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Frontend_Volcano.Frontend_Volcano_C
// (Actor)

class UClass* AFrontend_Volcano_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Frontend_Volcano_C");

	return Clss;
}


// Frontend_Volcano_C Frontend_Volcano.Default__Frontend_Volcano_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFrontend_Volcano_C* AFrontend_Volcano_C::GetDefaultObj()
{
	static class AFrontend_Volcano_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFrontend_Volcano_C*>(AFrontend_Volcano_C::StaticClass()->DefaultObject);

	return Default;
}

}


