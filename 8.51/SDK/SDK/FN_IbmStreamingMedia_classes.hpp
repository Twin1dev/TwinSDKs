#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x40 - 0x38)
// Class IbmStreamingMedia.IbmStreamingMediaSettings
class UIbmStreamingMediaSettings : public UDeveloperSettings
{
public:
	bool                                         bUseLegacyMediaSource;                             // 0x38(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_144D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UIbmStreamingMediaSettings* GetDefaultObj();

};

}


