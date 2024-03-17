#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_HoldingIntel.GE_HoldingIntel_C
// (None)

class UClass* UGE_HoldingIntel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_HoldingIntel_C");

	return Clss;
}


// GE_HoldingIntel_C GE_HoldingIntel.Default__GE_HoldingIntel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_HoldingIntel_C* UGE_HoldingIntel_C::GetDefaultObj()
{
	static class UGE_HoldingIntel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_HoldingIntel_C*>(UGE_HoldingIntel_C::StaticClass()->DefaultObject);

	return Default;
}

}


