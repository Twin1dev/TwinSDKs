#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Uncle_Dodge_East.GE_Uncle_Dodge_East_C
// (None)

class UClass* UGE_Uncle_Dodge_East_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Uncle_Dodge_East_C");

	return Clss;
}


// GE_Uncle_Dodge_East_C GE_Uncle_Dodge_East.Default__GE_Uncle_Dodge_East_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Uncle_Dodge_East_C* UGE_Uncle_Dodge_East_C::GetDefaultObj()
{
	static class UGE_Uncle_Dodge_East_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Uncle_Dodge_East_C*>(UGE_Uncle_Dodge_East_C::StaticClass()->DefaultObject);

	return Default;
}

}


