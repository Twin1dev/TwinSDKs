#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Prj_PlaysetGrenade_CP_BridgeGirder_Gallery_Orange.B_Prj_PlaysetGrenade_CP_BridgeGirder_Gallery_Orange_C
// (Actor)

class UClass* AB_Prj_PlaysetGrenade_CP_BridgeGirder_Gallery_Orange_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Prj_PlaysetGrenade_CP_BridgeGirder_Gallery_Orange_C");

	return Clss;
}


// B_Prj_PlaysetGrenade_CP_BridgeGirder_Gallery_Orange_C B_Prj_PlaysetGrenade_CP_BridgeGirder_Gallery_Orange.Default__B_Prj_PlaysetGrenade_CP_BridgeGirder_Gallery_Orange_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Prj_PlaysetGrenade_CP_BridgeGirder_Gallery_Orange_C* AB_Prj_PlaysetGrenade_CP_BridgeGirder_Gallery_Orange_C::GetDefaultObj()
{
	static class AB_Prj_PlaysetGrenade_CP_BridgeGirder_Gallery_Orange_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Prj_PlaysetGrenade_CP_BridgeGirder_Gallery_Orange_C*>(AB_Prj_PlaysetGrenade_CP_BridgeGirder_Gallery_Orange_C::StaticClass()->DefaultObject);

	return Default;
}

}


