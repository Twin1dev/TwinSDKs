#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_HiddenFromAI.GE_HiddenFromAI_C
// (None)

class UClass* UGE_HiddenFromAI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_HiddenFromAI_C");

	return Clss;
}


// GE_HiddenFromAI_C GE_HiddenFromAI.Default__GE_HiddenFromAI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_HiddenFromAI_C* UGE_HiddenFromAI_C::GetDefaultObj()
{
	static class UGE_HiddenFromAI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_HiddenFromAI_C*>(UGE_HiddenFromAI_C::StaticClass()->DefaultObject);

	return Default;
}

}


