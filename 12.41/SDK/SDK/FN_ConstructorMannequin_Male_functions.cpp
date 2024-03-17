#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ConstructorMannequin_Male.ConstructorMannequin_Male_C
// (Actor)

class UClass* AConstructorMannequin_Male_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConstructorMannequin_Male_C");

	return Clss;
}


// ConstructorMannequin_Male_C ConstructorMannequin_Male.Default__ConstructorMannequin_Male_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AConstructorMannequin_Male_C* AConstructorMannequin_Male_C::GetDefaultObj()
{
	static class AConstructorMannequin_Male_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AConstructorMannequin_Male_C*>(AConstructorMannequin_Male_C::StaticClass()->DefaultObject);

	return Default;
}

}


