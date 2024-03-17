#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_Uncle_Float_Falling.GCN_Uncle_Float_Falling_C
// (Actor)

class UClass* AGCN_Uncle_Float_Falling_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_Uncle_Float_Falling_C");

	return Clss;
}


// GCN_Uncle_Float_Falling_C GCN_Uncle_Float_Falling.Default__GCN_Uncle_Float_Falling_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCN_Uncle_Float_Falling_C* AGCN_Uncle_Float_Falling_C::GetDefaultObj()
{
	static class AGCN_Uncle_Float_Falling_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCN_Uncle_Float_Falling_C*>(AGCN_Uncle_Float_Falling_C::StaticClass()->DefaultObject);

	return Default;
}

}


