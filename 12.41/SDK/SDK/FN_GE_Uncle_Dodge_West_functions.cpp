#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Uncle_Dodge_West.GE_Uncle_Dodge_West_C
// (None)

class UClass* UGE_Uncle_Dodge_West_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Uncle_Dodge_West_C");

	return Clss;
}


// GE_Uncle_Dodge_West_C GE_Uncle_Dodge_West.Default__GE_Uncle_Dodge_West_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Uncle_Dodge_West_C* UGE_Uncle_Dodge_West_C::GetDefaultObj()
{
	static class UGE_Uncle_Dodge_West_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Uncle_Dodge_West_C*>(UGE_Uncle_Dodge_West_C::StaticClass()->DefaultObject);

	return Default;
}

}


