#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Prj_PlaysetGrenade_CP_BridgeGirder_Gallery_White.B_Prj_PlaysetGrenade_CP_BridgeGirder_Gallery_White_C
// (Actor)

class UClass* AB_Prj_PlaysetGrenade_CP_BridgeGirder_Gallery_White_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Prj_PlaysetGrenade_CP_BridgeGirder_Gallery_White_C");

	return Clss;
}


// B_Prj_PlaysetGrenade_CP_BridgeGirder_Gallery_White_C B_Prj_PlaysetGrenade_CP_BridgeGirder_Gallery_White.Default__B_Prj_PlaysetGrenade_CP_BridgeGirder_Gallery_White_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Prj_PlaysetGrenade_CP_BridgeGirder_Gallery_White_C* AB_Prj_PlaysetGrenade_CP_BridgeGirder_Gallery_White_C::GetDefaultObj()
{
	static class AB_Prj_PlaysetGrenade_CP_BridgeGirder_Gallery_White_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Prj_PlaysetGrenade_CP_BridgeGirder_Gallery_White_C*>(AB_Prj_PlaysetGrenade_CP_BridgeGirder_Gallery_White_C::StaticClass()->DefaultObject);

	return Default;
}

}


