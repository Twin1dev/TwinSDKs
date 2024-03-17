#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Uncle_PoiseRegen.GE_Uncle_PoiseRegen_C
// (None)

class UClass* UGE_Uncle_PoiseRegen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Uncle_PoiseRegen_C");

	return Clss;
}


// GE_Uncle_PoiseRegen_C GE_Uncle_PoiseRegen.Default__GE_Uncle_PoiseRegen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Uncle_PoiseRegen_C* UGE_Uncle_PoiseRegen_C::GetDefaultObj()
{
	static class UGE_Uncle_PoiseRegen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Uncle_PoiseRegen_C*>(UGE_Uncle_PoiseRegen_C::StaticClass()->DefaultObject);

	return Default;
}

}


