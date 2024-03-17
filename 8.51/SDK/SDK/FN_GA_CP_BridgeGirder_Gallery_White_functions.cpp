#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CP_BridgeGirder_Gallery_White.GA_CP_BridgeGirder_Gallery_White_C
// (None)

class UClass* UGA_CP_BridgeGirder_Gallery_White_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CP_BridgeGirder_Gallery_White_C");

	return Clss;
}


// GA_CP_BridgeGirder_Gallery_White_C GA_CP_BridgeGirder_Gallery_White.Default__GA_CP_BridgeGirder_Gallery_White_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CP_BridgeGirder_Gallery_White_C* UGA_CP_BridgeGirder_Gallery_White_C::GetDefaultObj()
{
	static class UGA_CP_BridgeGirder_Gallery_White_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CP_BridgeGirder_Gallery_White_C*>(UGA_CP_BridgeGirder_Gallery_White_C::StaticClass()->DefaultObject);

	return Default;
}

}


