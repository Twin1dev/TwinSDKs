#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CP_JungleTemple_S_Shrine_b.GA_CP_JungleTemple_S_Shrine_b_C
// (None)

class UClass* UGA_CP_JungleTemple_S_Shrine_b_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CP_JungleTemple_S_Shrine_b_C");

	return Clss;
}


// GA_CP_JungleTemple_S_Shrine_b_C GA_CP_JungleTemple_S_Shrine_b.Default__GA_CP_JungleTemple_S_Shrine_b_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CP_JungleTemple_S_Shrine_b_C* UGA_CP_JungleTemple_S_Shrine_b_C::GetDefaultObj()
{
	static class UGA_CP_JungleTemple_S_Shrine_b_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CP_JungleTemple_S_Shrine_b_C*>(UGA_CP_JungleTemple_S_Shrine_b_C::StaticClass()->DefaultObject);

	return Default;
}

}

