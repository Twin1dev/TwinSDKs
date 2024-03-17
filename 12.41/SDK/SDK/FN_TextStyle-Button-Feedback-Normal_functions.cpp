#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Button-Feedback-Normal.TextStyle-Button-Feedback-Normal_C
// (None)

class UClass* UTextStyleMinusButtonMinusFeedbackMinusNormal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Button-Feedback-Normal_C");

	return Clss;
}


// TextStyle-Button-Feedback-Normal_C TextStyle-Button-Feedback-Normal.Default__TextStyle-Button-Feedback-Normal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusButtonMinusFeedbackMinusNormal_C* UTextStyleMinusButtonMinusFeedbackMinusNormal_C::GetDefaultObj()
{
	static class UTextStyleMinusButtonMinusFeedbackMinusNormal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusButtonMinusFeedbackMinusNormal_C*>(UTextStyleMinusButtonMinusFeedbackMinusNormal_C::StaticClass()->DefaultObject);

	return Default;
}

}


