#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_UncleDash_Camera_LensEffect.BP_UncleDash_Camera_LensEffect_C
// (Actor)

class UClass* ABP_UncleDash_Camera_LensEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_UncleDash_Camera_LensEffect_C");

	return Clss;
}


// BP_UncleDash_Camera_LensEffect_C BP_UncleDash_Camera_LensEffect.Default__BP_UncleDash_Camera_LensEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_UncleDash_Camera_LensEffect_C* ABP_UncleDash_Camera_LensEffect_C::GetDefaultObj()
{
	static class ABP_UncleDash_Camera_LensEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_UncleDash_Camera_LensEffect_C*>(ABP_UncleDash_Camera_LensEffect_C::StaticClass()->DefaultObject);

	return Default;
}

}


