#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle_ChallengeNoteCard.ButtonStyle_ChallengeNoteCard_C
// (None)

class UClass* UButtonStyle_ChallengeNoteCard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle_ChallengeNoteCard_C");

	return Clss;
}


// ButtonStyle_ChallengeNoteCard_C ButtonStyle_ChallengeNoteCard.Default__ButtonStyle_ChallengeNoteCard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyle_ChallengeNoteCard_C* UButtonStyle_ChallengeNoteCard_C::GetDefaultObj()
{
	static class UButtonStyle_ChallengeNoteCard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyle_ChallengeNoteCard_C*>(UButtonStyle_ChallengeNoteCard_C::StaticClass()->DefaultObject);

	return Default;
}

}


