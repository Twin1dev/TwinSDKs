#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CP_BridgeGirder_Gallery_Blue.GA_CP_BridgeGirder_Gallery_Blue_C
// (None)

class UClass* UGA_CP_BridgeGirder_Gallery_Blue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CP_BridgeGirder_Gallery_Blue_C");

	return Clss;
}


// GA_CP_BridgeGirder_Gallery_Blue_C GA_CP_BridgeGirder_Gallery_Blue.Default__GA_CP_BridgeGirder_Gallery_Blue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CP_BridgeGirder_Gallery_Blue_C* UGA_CP_BridgeGirder_Gallery_Blue_C::GetDefaultObj()
{
	static class UGA_CP_BridgeGirder_Gallery_Blue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CP_BridgeGirder_Gallery_Blue_C*>(UGA_CP_BridgeGirder_Gallery_Blue_C::StaticClass()->DefaultObject);

	return Default;
}

}


