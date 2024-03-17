#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_Prop_Monitor.Athena_Prop_Monitor_C
// (Actor)

class UClass* AAthena_Prop_Monitor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_Prop_Monitor_C");

	return Clss;
}


// Athena_Prop_Monitor_C Athena_Prop_Monitor.Default__Athena_Prop_Monitor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAthena_Prop_Monitor_C* AAthena_Prop_Monitor_C::GetDefaultObj()
{
	static class AAthena_Prop_Monitor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAthena_Prop_Monitor_C*>(AAthena_Prop_Monitor_C::StaticClass()->DefaultObject);

	return Default;
}

}


