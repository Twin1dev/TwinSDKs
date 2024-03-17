#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_BlockExplosions.GE_BlockExplosions_C
// (None)

class UClass* UGE_BlockExplosions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_BlockExplosions_C");

	return Clss;
}


// GE_BlockExplosions_C GE_BlockExplosions.Default__GE_BlockExplosions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_BlockExplosions_C* UGE_BlockExplosions_C::GetDefaultObj()
{
	static class UGE_BlockExplosions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_BlockExplosions_C*>(UGE_BlockExplosions_C::StaticClass()->DefaultObject);

	return Default;
}

}


