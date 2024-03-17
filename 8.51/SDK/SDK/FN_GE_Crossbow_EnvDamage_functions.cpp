#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Crossbow_EnvDamage.GE_Crossbow_EnvDamage_C
// (None)

class UClass* UGE_Crossbow_EnvDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Crossbow_EnvDamage_C");

	return Clss;
}


// GE_Crossbow_EnvDamage_C GE_Crossbow_EnvDamage.Default__GE_Crossbow_EnvDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Crossbow_EnvDamage_C* UGE_Crossbow_EnvDamage_C::GetDefaultObj()
{
	static class UGE_Crossbow_EnvDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Crossbow_EnvDamage_C*>(UGE_Crossbow_EnvDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


