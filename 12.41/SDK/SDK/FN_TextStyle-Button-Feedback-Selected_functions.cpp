#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Button-Feedback-Selected.TextStyle-Button-Feedback-Selected_C
// (None)

class UClass* UTextStyleMinusButtonMinusFeedbackMinusSelected_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Button-Feedback-Selected_C");

	return Clss;
}


// TextStyle-Button-Feedback-Selected_C TextStyle-Button-Feedback-Selected.Default__TextStyle-Button-Feedback-Selected_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusButtonMinusFeedbackMinusSelected_C* UTextStyleMinusButtonMinusFeedbackMinusSelected_C::GetDefaultObj()
{
	static class UTextStyleMinusButtonMinusFeedbackMinusSelected_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusButtonMinusFeedbackMinusSelected_C*>(UTextStyleMinusButtonMinusFeedbackMinusSelected_C::StaticClass()->DefaultObject);

	return Default;
}

}


