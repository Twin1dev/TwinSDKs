#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0x388 - 0x2D8)
// Class EpicCMSUIFramework.EpicCMSImage
class UEpicCMSImage : public UCommonLazyImage
{
public:
	UMulticastInlineDelegateProperty_            OnImageLoadingComplete;                            // 0x2D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FSlateBrush                           LoadingFailFallback;                               // 0x2E8(0x88)(Edit, NativeAccessSpecifierPrivate)
	class UTexture2D*                            ExternalMedia;                                     // 0x370(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bDownloadingExternalMedia;                         // 0x378(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D4E[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEpicCMSImage* GetDefaultObj();

	void SetMediaURL(const class FString& MediaUrl);
};

// 0x68 (0x298 - 0x230)
// Class EpicCMSUIFramework.EpicCMSLayoutBase
class UEpicCMSLayoutBase : public UUserWidget
{
public:
	TArray<struct FSlotDescription>              CarouselSlotDescriptions;                          // 0x230(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TSubclassOf<class UEpicCMSTileCarousel>      CarouselClass;                                     // 0x240(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D51[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEpicCMSLayoutBase* GetDefaultObj();

};

// 0x88 (0xB0 - 0x28)
// Class EpicCMSUIFramework.EpicCMSManager
class UEpicCMSManager : public UObject
{
public:
	uint8                                        Pad_D52[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CmsEndpointOverride;                               // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bRefreshing;                                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D53[0x5F];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEpicCMSManager* GetDefaultObj();

};

// 0x90 (0x3B0 - 0x320)
// Class EpicCMSUIFramework.EpicCMSScreenBase
class UEpicCMSScreenBase : public UCommonActivatablePanel
{
public:
	class FString                                TileSetFieldName;                                  // 0x320(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UDataTable>             TileTypeToTileClassDataTable;                      // 0x330(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftClassPtr<class UUserWidget>             LayoutErrorClass;                                  // 0x358(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UDataTable>             LayoutTypeToLayoutClassDataTable;                  // 0x380(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D58[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEpicCMSScreenBase* GetDefaultObj();

};

// 0x18 (0x250 - 0x238)
// Class EpicCMSUIFramework.EpicCMSSimpleMessage
class UEpicCMSSimpleMessage : public UCommonUserWidget
{
public:
	class UCommonTextBlock*                      TitleText;                                         // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      BodyText;                                          // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEpicCMSImage*                         PrimaryImage;                                      // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UEpicCMSSimpleMessage* GetDefaultObj();

};

// 0x110 (0xC58 - 0xB48)
// Class EpicCMSUIFramework.EpicCMSTileBase
class UEpicCMSTileBase : public UCommonButton
{
public:
	uint8                                        Pad_D60[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCommonTextStyle>          DefaultTitleTextStyle;                             // 0xB50(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCommonTextStyle>          FeaturedTitleTextStyle;                            // 0xB58(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  Title;                                             // 0xB60(0x18)(BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FString                                Link;                                              // 0xB78(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDownloadingExternalMedia;                         // 0xB88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRefreshingMcpCatalog;                             // 0xB89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D63[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            ExternalMedia;                                     // 0xB90(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D65[0xA0];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonLazyImage*                      LazyImage_Icon;                                    // 0xC38(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      TitleTextBlock;                                    // 0xC40(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      SubtitleTextBlock;                                 // 0xC48(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      EyebrowTextBlock;                                  // 0xC50(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UEpicCMSTileBase* GetDefaultObj();

	void Launch();
};

// 0x50 (0x280 - 0x230)
// Class EpicCMSUIFramework.EpicCMSTileCarousel
class UEpicCMSTileCarousel : public UUserWidget
{
public:
	struct FSlateSound                           PreviousButtonSound;                               // 0x230(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FSlateSound                           NextButtonSound;                                   // 0x248(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UCommonWidgetCarousel*                 Carousel;                                          // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               NextPageButton;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               PreviousPageButton;                                // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShouldShowNavigationOnlyOnHover;                  // 0x278(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bInputActionsForPaging;                            // 0x279(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsShowingNavigation;                              // 0x27A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D79[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEpicCMSTileCarousel* GetDefaultObj();

	void SetCurrentPageByIndex(int32 PageIndex);
	void PreviousPage();
	void NextPage();
	void NavigationVisibilityChanged(bool bShowNavigation);
	void HandleTilePageAdded(class UWidget* TileWidget);
	int32 GetCurrentPageIndex();
	void BeginAutoScrolling();
	void AddTilePage(class UWidget* TilePageWidget);
};

}


