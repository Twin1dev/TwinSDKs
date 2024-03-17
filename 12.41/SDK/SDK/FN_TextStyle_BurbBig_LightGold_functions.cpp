#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle_BurbBig_LightGold.TextStyle_BurbBig_LightGold_C
// (None)

class UClass* UTextStyle_BurbBig_LightGold_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle_BurbBig_LightGold_C");

	return Clss;
}


// TextStyle_BurbBig_LightGold_C TextStyle_BurbBig_LightGold.Default__TextStyle_BurbBig_LightGold_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyle_BurbBig_LightGold_C* UTextStyle_BurbBig_LightGold_C::GetDefaultObj()
{
	static class UTextStyle_BurbBig_LightGold_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyle_BurbBig_LightGold_C*>(UTextStyle_BurbBig_LightGold_C::StaticClass()->DefaultObject);

	return Default;
}

}


