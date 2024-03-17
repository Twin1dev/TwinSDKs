#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1D0 (0x1F8 - 0x28)
// Class RigVM.RigVM
class URigVM : public UObject
{
public:
	struct FRigVMMemoryContainer                 WorkMemory;                                        // 0x28(0x98)(NativeAccessSpecifierPublic)
	struct FRigVMMemoryContainer                 LiteralMemory;                                     // 0xC0(0x98)(NativeAccessSpecifierPublic)
	struct FRigVMByteCode                        ByteCode;                                          // 0x158(0x10)(NativeAccessSpecifierPublic)
	struct FRigVMInstructionArray                Instructions;                                      // 0x168(0x10)(Transient, NativeAccessSpecifierPrivate)
	TArray<class FString>                        FunctionNames;                                     // 0x178(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3A01[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigVMParameter>               Parameters;                                        // 0x198(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TMap<class FName, int32>                     ParametersNameMap;                                 // 0x1A8(0x50)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class URigVM* GetDefaultObj();

	void SetParameterValueVector2D(class FName& InParameterName, struct FVector2D& InValue, int32 InArrayIndex);
	void SetParameterValueVector(class FName& InParameterName, struct FVector& InValue, int32 InArrayIndex);
	void SetParameterValueTransform(class FName& InParameterName, struct FTransform& InValue, int32 InArrayIndex);
	void SetParameterValueString(class FName& InParameterName, const class FString& InValue, int32 InArrayIndex);
	void SetParameterValueQuat(class FName& InParameterName, struct FQuat& InValue, int32 InArrayIndex);
	void SetParameterValueName(class FName& InParameterName, class FName& InValue, int32 InArrayIndex);
	void SetParameterValueInt(class FName& InParameterName, int32 InValue, int32 InArrayIndex);
	void SetParameterValueFloat(class FName& InParameterName, float InValue, int32 InArrayIndex);
	void SetParameterValueBool(class FName& InParameterName, bool InValue, int32 InArrayIndex);
	struct FVector2D GetParameterValueVector2D(class FName& InParameterName, int32 InArrayIndex);
	struct FVector GetParameterValueVector(class FName& InParameterName, int32 InArrayIndex);
	struct FTransform GetParameterValueTransform(class FName& InParameterName, int32 InArrayIndex);
	class FString GetParameterValueString(class FName& InParameterName, int32 InArrayIndex);
	struct FQuat GetParameterValueQuat(class FName& InParameterName, int32 InArrayIndex);
	class FName GetParameterValueName(class FName& InParameterName, int32 InArrayIndex);
	int32 GetParameterValueInt(class FName& InParameterName, int32 InArrayIndex);
	float GetParameterValueFloat(class FName& InParameterName, int32 InArrayIndex);
	bool GetParameterValueBool(class FName& InParameterName, int32 InArrayIndex);
	int32 GetParameterArraySize(class FName& InParameterName);
	bool Execute();
	int32 AddRigVMFunction(class UScriptStruct* InRigVMStruct, class FName& InMethodName);
};

}


