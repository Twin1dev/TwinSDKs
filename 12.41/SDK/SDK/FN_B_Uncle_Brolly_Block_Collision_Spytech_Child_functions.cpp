#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Uncle_Brolly_Block_Collision_Spytech_Child.B_Uncle_Brolly_Block_Collision_Spytech_Child_C
// (Actor)

class UClass* AB_Uncle_Brolly_Block_Collision_Spytech_Child_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Uncle_Brolly_Block_Collision_Spytech_Child_C");

	return Clss;
}


// B_Uncle_Brolly_Block_Collision_Spytech_Child_C B_Uncle_Brolly_Block_Collision_Spytech_Child.Default__B_Uncle_Brolly_Block_Collision_Spytech_Child_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Uncle_Brolly_Block_Collision_Spytech_Child_C* AB_Uncle_Brolly_Block_Collision_Spytech_Child_C::GetDefaultObj()
{
	static class AB_Uncle_Brolly_Block_Collision_Spytech_Child_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Uncle_Brolly_Block_Collision_Spytech_Child_C*>(AB_Uncle_Brolly_Block_Collision_Spytech_Child_C::StaticClass()->DefaultObject);

	return Default;
}

}


