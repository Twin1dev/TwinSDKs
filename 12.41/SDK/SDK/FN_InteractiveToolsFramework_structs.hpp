#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EInputCaptureState : uint8
{
	Begin                          = 1,
	Continue                       = 2,
	End                            = 3,
	Ignore                         = 4,
	EInputCaptureState_MAX         = 5,
};

enum class EInputCaptureRequestType : uint8
{
	Begin                          = 1,
	Ignore                         = 2,
	EInputCaptureRequestType_MAX   = 3,
};

enum class EInputCaptureSide : uint8
{
	None                           = 0,
	Left                           = 1,
	Right                          = 2,
	Both                           = 3,
	Any                            = 99,
	EInputCaptureSide_MAX          = 100,
};

enum class EInputDevices : uint8
{
	None                           = 0,
	Keyboard                       = 1,
	Mouse                          = 2,
	Gamepad                        = 4,
	OculusTouch                    = 8,
	HTCViveWands                   = 16,
	AnySpatialDevice               = 24,
	TabletFingers                  = 1024,
	EInputDevices_MAX              = 1025,
};

enum class ETransformGizmoSubElements : uint8
{
	None                           = 0,
	TranslateAxisX                 = 1,
	TranslateAxisY                 = 2,
	TranslateAxisZ                 = 4,
	TranslateAllAxes               = 7,
	TranslatePlaneXY               = 8,
	TranslatePlaneXZ               = 16,
	TranslatePlaneYZ               = 32,
	TranslateAllPlanes             = 56,
	RotateAxisX                    = 64,
	RotateAxisY                    = 128,
	RotateAxisZ                    = 256,
	RotateAllAxes                  = 448,
	StanedardTranslateRotate       = 511,
	ETransformGizmoSubElements_MAX = 512,
};

enum class EToolSide : uint8
{
	Left                           = 1,
	Mouse                          = 1,
	Right                          = 2,
	EToolSide_MAX                  = 3,
};

enum class ESelectedObjectsModificationType : uint8
{
	Replace                        = 0,
	Add                            = 1,
	Remove                         = 2,
	Clear                          = 3,
	ESelectedObjectsModificationType_MAX = 4,
};

enum class EToolMessageLevel : uint8
{
	Internal                       = 0,
	UserMessage                    = 1,
	UserNotification               = 2,
	UserWarning                    = 3,
	UserError                      = 4,
	EToolMessageLevel_MAX          = 5,
};

enum class EToolContextCoordinateSystem : uint8
{
	World                          = 0,
	Local                          = 1,
	EToolContextCoordinateSystem_MAX = 2,
};

enum class EStandardToolContextMaterials : uint8
{
	VertexColorMaterial            = 1,
	EStandardToolContextMaterials_MAX = 2,
};

enum class ESceneSnapQueryTargetType : uint8
{
	None                           = 0,
	MeshVertex                     = 1,
	MeshEdge                       = 2,
	All                            = 3,
	ESceneSnapQueryTargetType_MAX  = 4,
};

enum class ESceneSnapQueryType : uint8
{
	Position                       = 1,
	ESceneSnapQueryType_MAX        = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct InteractiveToolsFramework.BehaviorInfo
struct FBehaviorInfo
{
public:
	class UInputBehavior*                        Behavior;                                          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A6A[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct InteractiveToolsFramework.InputRayHit
struct FInputRayHit
{
public:
	uint8                                        Pad_3A6B[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct InteractiveToolsFramework.ActiveGizmo
struct FActiveGizmo
{
public:
	uint8                                        Pad_3A6C[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct InteractiveToolsFramework.GizmoFloatParameterChange
struct FGizmoFloatParameterChange
{
public:
	float                                        InitialValue;                                      // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentValue;                                      // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct InteractiveToolsFramework.GizmoVec2ParameterChange
struct FGizmoVec2ParameterChange
{
public:
	struct FVector2D                             InitialValue;                                      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             CurrentValue;                                      // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


