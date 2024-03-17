#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Fortnite_Base_Head_Export_Skeleton_AnimBP_Child.Fortnite_Base_Head_Export_Skeleton_AnimBP_Child_C
// (None)

class UClass* UFortnite_Base_Head_Export_Skeleton_AnimBP_Child_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Fortnite_Base_Head_Export_Skeleton_AnimBP_Child_C");

	return Clss;
}


// Fortnite_Base_Head_Export_Skeleton_AnimBP_Child_C Fortnite_Base_Head_Export_Skeleton_AnimBP_Child.Default__Fortnite_Base_Head_Export_Skeleton_AnimBP_Child_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFortnite_Base_Head_Export_Skeleton_AnimBP_Child_C* UFortnite_Base_Head_Export_Skeleton_AnimBP_Child_C::GetDefaultObj()
{
	static class UFortnite_Base_Head_Export_Skeleton_AnimBP_Child_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortnite_Base_Head_Export_Skeleton_AnimBP_Child_C*>(UFortnite_Base_Head_Export_Skeleton_AnimBP_Child_C::StaticClass()->DefaultObject);

	return Default;
}

}


