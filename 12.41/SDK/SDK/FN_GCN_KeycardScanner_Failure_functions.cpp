#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_KeycardScanner_Failure.GCN_KeycardScanner_Failure_C
// (None)

class UClass* UGCN_KeycardScanner_Failure_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_KeycardScanner_Failure_C");

	return Clss;
}


// GCN_KeycardScanner_Failure_C GCN_KeycardScanner_Failure.Default__GCN_KeycardScanner_Failure_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_KeycardScanner_Failure_C* UGCN_KeycardScanner_Failure_C::GetDefaultObj()
{
	static class UGCN_KeycardScanner_Failure_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_KeycardScanner_Failure_C*>(UGCN_KeycardScanner_Failure_C::StaticClass()->DefaultObject);

	return Default;
}

}


