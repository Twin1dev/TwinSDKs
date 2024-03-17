#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Feedback-Radio.ButtonStyle-Feedback-Radio_C
// (None)

class UClass* UButtonStyleMinusFeedbackMinusRadio_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Feedback-Radio_C");

	return Clss;
}


// ButtonStyle-Feedback-Radio_C ButtonStyle-Feedback-Radio.Default__ButtonStyle-Feedback-Radio_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusFeedbackMinusRadio_C* UButtonStyleMinusFeedbackMinusRadio_C::GetDefaultObj()
{
	static class UButtonStyleMinusFeedbackMinusRadio_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusFeedbackMinusRadio_C*>(UButtonStyleMinusFeedbackMinusRadio_C::StaticClass()->DefaultObject);

	return Default;
}

}


