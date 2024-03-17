#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Tree_Palm_A.Tree_Palm_A_C
// (Actor)

class UClass* ATree_Palm_A_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Tree_Palm_A_C");

	return Clss;
}


// Tree_Palm_A_C Tree_Palm_A.Default__Tree_Palm_A_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATree_Palm_A_C* ATree_Palm_A_C::GetDefaultObj()
{
	static class ATree_Palm_A_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATree_Palm_A_C*>(ATree_Palm_A_C::StaticClass()->DefaultObject);

	return Default;
}

}


