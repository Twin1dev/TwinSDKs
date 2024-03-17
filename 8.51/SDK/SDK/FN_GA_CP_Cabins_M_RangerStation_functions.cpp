#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CP_Cabins_M_RangerStation.GA_CP_Cabins_M_RangerStation_C
// (None)

class UClass* UGA_CP_Cabins_M_RangerStation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CP_Cabins_M_RangerStation_C");

	return Clss;
}


// GA_CP_Cabins_M_RangerStation_C GA_CP_Cabins_M_RangerStation.Default__GA_CP_Cabins_M_RangerStation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CP_Cabins_M_RangerStation_C* UGA_CP_Cabins_M_RangerStation_C::GetDefaultObj()
{
	static class UGA_CP_Cabins_M_RangerStation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CP_Cabins_M_RangerStation_C*>(UGA_CP_Cabins_M_RangerStation_C::StaticClass()->DefaultObject);

	return Default;
}

}


