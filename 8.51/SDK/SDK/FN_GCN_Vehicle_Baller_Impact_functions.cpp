#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_Vehicle_Baller_Impact.GCN_Vehicle_Baller_Impact_C
// (None)

class UClass* UGCN_Vehicle_Baller_Impact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_Vehicle_Baller_Impact_C");

	return Clss;
}


// GCN_Vehicle_Baller_Impact_C GCN_Vehicle_Baller_Impact.Default__GCN_Vehicle_Baller_Impact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_Vehicle_Baller_Impact_C* UGCN_Vehicle_Baller_Impact_C::GetDefaultObj()
{
	static class UGCN_Vehicle_Baller_Impact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_Vehicle_Baller_Impact_C*>(UGCN_Vehicle_Baller_Impact_C::StaticClass()->DefaultObject);

	return Default;
}

}


