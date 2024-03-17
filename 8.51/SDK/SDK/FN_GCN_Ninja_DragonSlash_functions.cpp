#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_Ninja_DragonSlash.GCN_Ninja_DragonSlash_C
// (None)

class UClass* UGCN_Ninja_DragonSlash_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_Ninja_DragonSlash_C");

	return Clss;
}


// GCN_Ninja_DragonSlash_C GCN_Ninja_DragonSlash.Default__GCN_Ninja_DragonSlash_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_Ninja_DragonSlash_C* UGCN_Ninja_DragonSlash_C::GetDefaultObj()
{
	static class UGCN_Ninja_DragonSlash_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_Ninja_DragonSlash_C*>(UGCN_Ninja_DragonSlash_C::StaticClass()->DefaultObject);

	return Default;
}

}


