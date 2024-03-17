#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BPS12MainRoomInteractionIndicator.BPS12MainRoomInteractionIndicator_C
// (None)

class UClass* UBPS12MainRoomInteractionIndicator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPS12MainRoomInteractionIndicator_C");

	return Clss;
}


// BPS12MainRoomInteractionIndicator_C BPS12MainRoomInteractionIndicator.Default__BPS12MainRoomInteractionIndicator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPS12MainRoomInteractionIndicator_C* UBPS12MainRoomInteractionIndicator_C::GetDefaultObj()
{
	static class UBPS12MainRoomInteractionIndicator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPS12MainRoomInteractionIndicator_C*>(UBPS12MainRoomInteractionIndicator_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPS12MainRoomInteractionIndicator.BPS12MainRoomInteractionIndicator_C.OnObjectHoverBegin
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBPS12MainRoomInteractionIndicator_C::OnObjectHoverBegin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPS12MainRoomInteractionIndicator_C", "OnObjectHoverBegin");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPS12MainRoomInteractionIndicator.BPS12MainRoomInteractionIndicator_C.OnObjectHoverEnd
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBPS12MainRoomInteractionIndicator_C::OnObjectHoverEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPS12MainRoomInteractionIndicator_C", "OnObjectHoverEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPS12MainRoomInteractionIndicator.BPS12MainRoomInteractionIndicator_C.ExecuteUbergraph_BPS12MainRoomInteractionIndicator
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPS12MainRoomInteractionIndicator_C::ExecuteUbergraph_BPS12MainRoomInteractionIndicator(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPS12MainRoomInteractionIndicator_C", "ExecuteUbergraph_BPS12MainRoomInteractionIndicator");

	Params::UBPS12MainRoomInteractionIndicator_C_ExecuteUbergraph_BPS12MainRoomInteractionIndicator_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


