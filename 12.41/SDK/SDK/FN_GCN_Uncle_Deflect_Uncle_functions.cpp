#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_Uncle_Deflect_Uncle.GCN_Uncle_Deflect_Uncle_C
// (None)

class UClass* UGCN_Uncle_Deflect_Uncle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_Uncle_Deflect_Uncle_C");

	return Clss;
}


// GCN_Uncle_Deflect_Uncle_C GCN_Uncle_Deflect_Uncle.Default__GCN_Uncle_Deflect_Uncle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_Uncle_Deflect_Uncle_C* UGCN_Uncle_Deflect_Uncle_C::GetDefaultObj()
{
	static class UGCN_Uncle_Deflect_Uncle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_Uncle_Deflect_Uncle_C*>(UGCN_Uncle_Deflect_Uncle_C::StaticClass()->DefaultObject);

	return Default;
}

}


