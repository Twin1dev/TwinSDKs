#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GET_Alteration_Attribute_Damage.GET_Alteration_Attribute_Damage_C
// (None)

class UClass* UGET_Alteration_Attribute_Damage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GET_Alteration_Attribute_Damage_C");

	return Clss;
}


// GET_Alteration_Attribute_Damage_C GET_Alteration_Attribute_Damage.Default__GET_Alteration_Attribute_Damage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGET_Alteration_Attribute_Damage_C* UGET_Alteration_Attribute_Damage_C::GetDefaultObj()
{
	static class UGET_Alteration_Attribute_Damage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGET_Alteration_Attribute_Damage_C*>(UGET_Alteration_Attribute_Damage_C::StaticClass()->DefaultObject);

	return Default;
}

}


