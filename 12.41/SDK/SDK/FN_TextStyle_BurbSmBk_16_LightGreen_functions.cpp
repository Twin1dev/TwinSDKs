#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle_BurbSmBk_16_LightGreen.TextStyle_BurbSmBk_16_LightGreen_C
// (None)

class UClass* UTextStyle_BurbSmBk_16_LightGreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle_BurbSmBk_16_LightGreen_C");

	return Clss;
}


// TextStyle_BurbSmBk_16_LightGreen_C TextStyle_BurbSmBk_16_LightGreen.Default__TextStyle_BurbSmBk_16_LightGreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyle_BurbSmBk_16_LightGreen_C* UTextStyle_BurbSmBk_16_LightGreen_C::GetDefaultObj()
{
	static class UTextStyle_BurbSmBk_16_LightGreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyle_BurbSmBk_16_LightGreen_C*>(UTextStyle_BurbSmBk_16_LightGreen_C::StaticClass()->DefaultObject);

	return Default;
}

}


