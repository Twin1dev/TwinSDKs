#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SnowPlayerEffect.GE_SnowPlayerEffect_C
// (None)

class UClass* UGE_SnowPlayerEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SnowPlayerEffect_C");

	return Clss;
}


// GE_SnowPlayerEffect_C GE_SnowPlayerEffect.Default__GE_SnowPlayerEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SnowPlayerEffect_C* UGE_SnowPlayerEffect_C::GetDefaultObj()
{
	static class UGE_SnowPlayerEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SnowPlayerEffect_C*>(UGE_SnowPlayerEffect_C::StaticClass()->DefaultObject);

	return Default;
}

}


