#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x48 - 0x28)
// Class EmbeddedCommunicationJSBridge.EmbeddedCommunicationJSBridge
class UEmbeddedCommunicationJSBridge : public UObject
{
public:
	uint8                                        Pad_525[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEmbeddedCommunicationJSBridge* GetDefaultObj();

	void SetEventListener(const struct FWebJSFunction& Callback);
	void RunCommand(class FName& Subsystem, const class FString& Command, const class FString& JsonParams, const struct FWebJSResponse& Response);
	void PostMessage(const class FString& ID, class FName& Subsystem, const class FString& Command, const class FString& JsonParams);
};

}


