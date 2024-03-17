#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Button-Feedback-Normal_HOvered.TextStyle-Button-Feedback-Normal_Hovered_C
// (None)

class UClass* UTextStyleMinusButtonMinusFeedbackMinusNormal_Hovered_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Button-Feedback-Normal_Hovered_C");

	return Clss;
}


// TextStyle-Button-Feedback-Normal_Hovered_C TextStyle-Button-Feedback-Normal_HOvered.Default__TextStyle-Button-Feedback-Normal_Hovered_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusButtonMinusFeedbackMinusNormal_Hovered_C* UTextStyleMinusButtonMinusFeedbackMinusNormal_Hovered_C::GetDefaultObj()
{
	static class UTextStyleMinusButtonMinusFeedbackMinusNormal_Hovered_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusButtonMinusFeedbackMinusNormal_Hovered_C*>(UTextStyleMinusButtonMinusFeedbackMinusNormal_Hovered_C::StaticClass()->DefaultObject);

	return Default;
}

}


