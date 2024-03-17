#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class PlayspaceFramework.GameplayVolume
// (Actor)

class UClass* AGameplayVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayVolume");

	return Clss;
}


// GameplayVolume PlayspaceFramework.Default__GameplayVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class AGameplayVolume* AGameplayVolume::GetDefaultObj()
{
	static class AGameplayVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<AGameplayVolume*>(AGameplayVolume::StaticClass()->DefaultObject);

	return Default;
}


// Class PlayspaceFramework.Playspace
// (Actor)

class UClass* APlayspace::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Playspace");

	return Clss;
}


// Playspace PlayspaceFramework.Default__Playspace
// (Public, ClassDefaultObject, ArchetypeObject)

class APlayspace* APlayspace::GetDefaultObj()
{
	static class APlayspace* Default = nullptr;

	if (!Default)
		Default = static_cast<APlayspace*>(APlayspace::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayspaceFramework.Playspace.OnRep_PlayspaceUsers
// (Final, Native, Protected)
// Parameters:

void APlayspace::OnRep_PlayspaceUsers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Playspace", "OnRep_PlayspaceUsers");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function PlayspaceFramework.Playspace.OnRep_PlayspaceLogic
// (Final, Native, Protected)
// Parameters:

void APlayspace::OnRep_PlayspaceLogic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Playspace", "OnRep_PlayspaceLogic");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class PlayspaceFramework.PlayspaceGameState
// (Actor)

class UClass* APlayspaceGameState::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayspaceGameState");

	return Clss;
}


// PlayspaceGameState PlayspaceFramework.Default__PlayspaceGameState
// (Public, ClassDefaultObject, ArchetypeObject)

class APlayspaceGameState* APlayspaceGameState::GetDefaultObj()
{
	static class APlayspaceGameState* Default = nullptr;

	if (!Default)
		Default = static_cast<APlayspaceGameState*>(APlayspaceGameState::StaticClass()->DefaultObject);

	return Default;
}


// Class PlayspaceFramework.PlayspaceLogic
// (Actor)

class UClass* APlayspaceLogic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayspaceLogic");

	return Clss;
}


// PlayspaceLogic PlayspaceFramework.Default__PlayspaceLogic
// (Public, ClassDefaultObject, ArchetypeObject)

class APlayspaceLogic* APlayspaceLogic::GetDefaultObj()
{
	static class APlayspaceLogic* Default = nullptr;

	if (!Default)
		Default = static_cast<APlayspaceLogic*>(APlayspaceLogic::StaticClass()->DefaultObject);

	return Default;
}


// Class PlayspaceFramework.PlayspaceManagerComponent
// (None)

class UClass* UPlayspaceManagerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayspaceManagerComponent");

	return Clss;
}


// PlayspaceManagerComponent PlayspaceFramework.Default__PlayspaceManagerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayspaceManagerComponent* UPlayspaceManagerComponent::GetDefaultObj()
{
	static class UPlayspaceManagerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayspaceManagerComponent*>(UPlayspaceManagerComponent::StaticClass()->DefaultObject);

	return Default;
}

}


