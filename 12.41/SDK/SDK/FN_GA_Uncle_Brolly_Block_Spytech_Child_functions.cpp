#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Uncle_Brolly_Block_Spytech_Child.GA_Uncle_Brolly_Block_Spytech_Child_C
// (None)

class UClass* UGA_Uncle_Brolly_Block_Spytech_Child_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Uncle_Brolly_Block_Spytech_Child_C");

	return Clss;
}


// GA_Uncle_Brolly_Block_Spytech_Child_C GA_Uncle_Brolly_Block_Spytech_Child.Default__GA_Uncle_Brolly_Block_Spytech_Child_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Uncle_Brolly_Block_Spytech_Child_C* UGA_Uncle_Brolly_Block_Spytech_Child_C::GetDefaultObj()
{
	static class UGA_Uncle_Brolly_Block_Spytech_Child_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Uncle_Brolly_Block_Spytech_Child_C*>(UGA_Uncle_Brolly_Block_Spytech_Child_C::StaticClass()->DefaultObject);

	return Default;
}

}


