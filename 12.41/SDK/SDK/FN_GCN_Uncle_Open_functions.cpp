#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_Uncle_Open.GCN_Uncle_Open_C
// (None)

class UClass* UGCN_Uncle_Open_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_Uncle_Open_C");

	return Clss;
}


// GCN_Uncle_Open_C GCN_Uncle_Open.Default__GCN_Uncle_Open_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_Uncle_Open_C* UGCN_Uncle_Open_C::GetDefaultObj()
{
	static class UGCN_Uncle_Open_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_Uncle_Open_C*>(UGCN_Uncle_Open_C::StaticClass()->DefaultObject);

	return Default;
}

}


