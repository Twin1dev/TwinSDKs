#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_Basketball_Score.GCN_Basketball_Score_C
// (None)

class UClass* UGCN_Basketball_Score_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_Basketball_Score_C");

	return Clss;
}


// GCN_Basketball_Score_C GCN_Basketball_Score.Default__GCN_Basketball_Score_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_Basketball_Score_C* UGCN_Basketball_Score_C::GetDefaultObj()
{
	static class UGCN_Basketball_Score_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_Basketball_Score_C*>(UGCN_Basketball_Score_C::StaticClass()->DefaultObject);

	return Default;
}

}


