#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CP_Cabins_S_CozyCabin.GA_CP_Cabins_S_CozyCabin_C
// (None)

class UClass* UGA_CP_Cabins_S_CozyCabin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CP_Cabins_S_CozyCabin_C");

	return Clss;
}


// GA_CP_Cabins_S_CozyCabin_C GA_CP_Cabins_S_CozyCabin.Default__GA_CP_Cabins_S_CozyCabin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CP_Cabins_S_CozyCabin_C* UGA_CP_Cabins_S_CozyCabin_C::GetDefaultObj()
{
	static class UGA_CP_Cabins_S_CozyCabin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CP_Cabins_S_CozyCabin_C*>(UGA_CP_Cabins_S_CozyCabin_C::StaticClass()->DefaultObject);

	return Default;
}

}


