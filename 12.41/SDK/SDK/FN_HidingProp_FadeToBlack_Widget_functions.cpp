#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HidingProp_FadeToBlack_Widget.HidingProp_FadeToBlack_Widget_C
// (None)

class UClass* UHidingProp_FadeToBlack_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HidingProp_FadeToBlack_Widget_C");

	return Clss;
}


// HidingProp_FadeToBlack_Widget_C HidingProp_FadeToBlack_Widget.Default__HidingProp_FadeToBlack_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHidingProp_FadeToBlack_Widget_C* UHidingProp_FadeToBlack_Widget_C::GetDefaultObj()
{
	static class UHidingProp_FadeToBlack_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHidingProp_FadeToBlack_Widget_C*>(UHidingProp_FadeToBlack_Widget_C::StaticClass()->DefaultObject);

	return Default;
}

}


