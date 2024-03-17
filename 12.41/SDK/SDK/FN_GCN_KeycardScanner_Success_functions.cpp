#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_KeycardScanner_Success.GCN_KeycardScanner_Success_C
// (None)

class UClass* UGCN_KeycardScanner_Success_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_KeycardScanner_Success_C");

	return Clss;
}


// GCN_KeycardScanner_Success_C GCN_KeycardScanner_Success.Default__GCN_KeycardScanner_Success_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_KeycardScanner_Success_C* UGCN_KeycardScanner_Success_C::GetDefaultObj()
{
	static class UGCN_KeycardScanner_Success_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_KeycardScanner_Success_C*>(UGCN_KeycardScanner_Success_C::StaticClass()->DefaultObject);

	return Default;
}

}


