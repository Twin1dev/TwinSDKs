#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle_BurbBig_Brown.TextStyle_BurbBig_Brown_C
// (None)

class UClass* UTextStyle_BurbBig_Brown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle_BurbBig_Brown_C");

	return Clss;
}


// TextStyle_BurbBig_Brown_C TextStyle_BurbBig_Brown.Default__TextStyle_BurbBig_Brown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyle_BurbBig_Brown_C* UTextStyle_BurbBig_Brown_C::GetDefaultObj()
{
	static class UTextStyle_BurbBig_Brown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyle_BurbBig_Brown_C*>(UTextStyle_BurbBig_Brown_C::StaticClass()->DefaultObject);

	return Default;
}

}


