#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_CaptureArea_Activate.GCN_CaptureArea_Activate_C
// (None)

class UClass* UGCN_CaptureArea_Activate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_CaptureArea_Activate_C");

	return Clss;
}


// GCN_CaptureArea_Activate_C GCN_CaptureArea_Activate.Default__GCN_CaptureArea_Activate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_CaptureArea_Activate_C* UGCN_CaptureArea_Activate_C::GetDefaultObj()
{
	static class UGCN_CaptureArea_Activate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_CaptureArea_Activate_C*>(UGCN_CaptureArea_Activate_C::StaticClass()->DefaultObject);

	return Default;
}

}


