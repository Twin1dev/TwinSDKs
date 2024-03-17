#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CP_Cabins_M_Lodge.GA_CP_Cabins_M_Lodge_C
// (None)

class UClass* UGA_CP_Cabins_M_Lodge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CP_Cabins_M_Lodge_C");

	return Clss;
}


// GA_CP_Cabins_M_Lodge_C GA_CP_Cabins_M_Lodge.Default__GA_CP_Cabins_M_Lodge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CP_Cabins_M_Lodge_C* UGA_CP_Cabins_M_Lodge_C::GetDefaultObj()
{
	static class UGA_CP_Cabins_M_Lodge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CP_Cabins_M_Lodge_C*>(UGA_CP_Cabins_M_Lodge_C::StaticClass()->DefaultObject);

	return Default;
}

}


