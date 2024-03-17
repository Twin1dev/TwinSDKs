#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_ExplosiveBow_AltFire.GCN_ExplosiveBow_AltFire_C
// (None)

class UClass* UGCN_ExplosiveBow_AltFire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_ExplosiveBow_AltFire_C");

	return Clss;
}


// GCN_ExplosiveBow_AltFire_C GCN_ExplosiveBow_AltFire.Default__GCN_ExplosiveBow_AltFire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_ExplosiveBow_AltFire_C* UGCN_ExplosiveBow_AltFire_C::GetDefaultObj()
{
	static class UGCN_ExplosiveBow_AltFire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_ExplosiveBow_AltFire_C*>(UGCN_ExplosiveBow_AltFire_C::StaticClass()->DefaultObject);

	return Default;
}

}


