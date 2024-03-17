#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CP_Props_S_Nature_i.GA_CP_Props_S_Nature_i_C
// (None)

class UClass* UGA_CP_Props_S_Nature_i_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CP_Props_S_Nature_i_C");

	return Clss;
}


// GA_CP_Props_S_Nature_i_C GA_CP_Props_S_Nature_i.Default__GA_CP_Props_S_Nature_i_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CP_Props_S_Nature_i_C* UGA_CP_Props_S_Nature_i_C::GetDefaultObj()
{
	static class UGA_CP_Props_S_Nature_i_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CP_Props_S_Nature_i_C*>(UGA_CP_Props_S_Nature_i_C::StaticClass()->DefaultObject);

	return Default;
}

}


