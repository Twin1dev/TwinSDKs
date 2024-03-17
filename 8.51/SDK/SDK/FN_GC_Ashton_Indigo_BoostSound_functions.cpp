#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_Ashton_Indigo_BoostSound.GC_Ashton_Indigo_BoostSound_C
// (Actor)

class UClass* AGC_Ashton_Indigo_BoostSound_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_Ashton_Indigo_BoostSound_C");

	return Clss;
}


// GC_Ashton_Indigo_BoostSound_C GC_Ashton_Indigo_BoostSound.Default__GC_Ashton_Indigo_BoostSound_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGC_Ashton_Indigo_BoostSound_C* AGC_Ashton_Indigo_BoostSound_C::GetDefaultObj()
{
	static class AGC_Ashton_Indigo_BoostSound_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGC_Ashton_Indigo_BoostSound_C*>(AGC_Ashton_Indigo_BoostSound_C::StaticClass()->DefaultObject);

	return Default;
}

}


