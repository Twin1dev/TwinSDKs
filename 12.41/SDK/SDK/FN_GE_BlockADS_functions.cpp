#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_BlockADS.GE_BlockADS_C
// (None)

class UClass* UGE_BlockADS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_BlockADS_C");

	return Clss;
}


// GE_BlockADS_C GE_BlockADS.Default__GE_BlockADS_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_BlockADS_C* UGE_BlockADS_C::GetDefaultObj()
{
	static class UGE_BlockADS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_BlockADS_C*>(UGE_BlockADS_C::StaticClass()->DefaultObject);

	return Default;
}

}


