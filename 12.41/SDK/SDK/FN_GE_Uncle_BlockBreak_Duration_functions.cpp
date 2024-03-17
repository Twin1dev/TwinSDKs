#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Uncle_BlockBreak_Duration.GE_Uncle_BlockBreak_Duration_C
// (None)

class UClass* UGE_Uncle_BlockBreak_Duration_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Uncle_BlockBreak_Duration_C");

	return Clss;
}


// GE_Uncle_BlockBreak_Duration_C GE_Uncle_BlockBreak_Duration.Default__GE_Uncle_BlockBreak_Duration_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Uncle_BlockBreak_Duration_C* UGE_Uncle_BlockBreak_Duration_C::GetDefaultObj()
{
	static class UGE_Uncle_BlockBreak_Duration_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Uncle_BlockBreak_Duration_C*>(UGE_Uncle_BlockBreak_Duration_C::StaticClass()->DefaultObject);

	return Default;
}

}


