#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 T System.Runtime.CompilerServices.Unsafe::Read(System.Void*)
// 0x00000002 T System.Runtime.CompilerServices.Unsafe::ReadUnaligned(System.Byte&)
// 0x00000003 System.Void System.Runtime.CompilerServices.Unsafe::WriteUnaligned(System.Byte&,T)
// 0x00000004 System.Void* System.Runtime.CompilerServices.Unsafe::AsPointer(T&)
// 0x00000005 System.Int32 System.Runtime.CompilerServices.Unsafe::SizeOf()
// 0x00000006 System.Void System.Runtime.CompilerServices.Unsafe::CopyBlock(System.Byte&,System.Byte&,System.UInt32)
extern void Unsafe_CopyBlock_m620FFE28230187482E6A1F6C2951E86E9397D537 (void);
// 0x00000007 System.Void System.Runtime.CompilerServices.Unsafe::CopyBlockUnaligned(System.Byte&,System.Byte&,System.UInt32)
extern void Unsafe_CopyBlockUnaligned_m366D62A9E71A89096C912D8AD3EE1C0D31835BE4 (void);
// 0x00000008 System.Void System.Runtime.CompilerServices.Unsafe::InitBlockUnaligned(System.Void*,System.Byte,System.UInt32)
extern void Unsafe_InitBlockUnaligned_m052F07F8475562B2C26782A0926C742F718BDA22 (void);
// 0x00000009 System.Void System.Runtime.CompilerServices.Unsafe::InitBlockUnaligned(System.Byte&,System.Byte,System.UInt32)
extern void Unsafe_InitBlockUnaligned_m19BEDC2C614CA372758548BB4D1622F8CC53FF4F (void);
// 0x0000000A T System.Runtime.CompilerServices.Unsafe::As(System.Object)
// 0x0000000B T& System.Runtime.CompilerServices.Unsafe::AsRef(System.Void*)
// 0x0000000C TTo& System.Runtime.CompilerServices.Unsafe::As(TFrom&)
// 0x0000000D T& System.Runtime.CompilerServices.Unsafe::Add(T&,System.Int32)
// 0x0000000E T& System.Runtime.CompilerServices.Unsafe::Add(T&,System.IntPtr)
// 0x0000000F T& System.Runtime.CompilerServices.Unsafe::AddByteOffset(T&,System.IntPtr)
// 0x00000010 System.IntPtr System.Runtime.CompilerServices.Unsafe::ByteOffset(T&,T&)
// 0x00000011 System.Boolean System.Runtime.CompilerServices.Unsafe::AreSame(T&,T&)
// 0x00000012 System.Void System.Runtime.Versioning.NonVersionableAttribute::.ctor()
extern void NonVersionableAttribute__ctor_m42737892A413DAF4079C33A61205452777804D13 (void);
static Il2CppMethodPointer s_methodPointers[18] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Unsafe_CopyBlock_m620FFE28230187482E6A1F6C2951E86E9397D537,
	Unsafe_CopyBlockUnaligned_m366D62A9E71A89096C912D8AD3EE1C0D31835BE4,
	Unsafe_InitBlockUnaligned_m052F07F8475562B2C26782A0926C742F718BDA22,
	Unsafe_InitBlockUnaligned_m19BEDC2C614CA372758548BB4D1622F8CC53FF4F,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NonVersionableAttribute__ctor_m42737892A413DAF4079C33A61205452777804D13,
};
static const int32_t s_InvokerIndices[18] = 
{
	-1,
	-1,
	-1,
	-1,
	-1,
	6494,
	6494,
	6533,
	6533,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	5592,
};
static const Il2CppTokenRangePair s_rgctxIndices[3] = 
{
	{ 0x06000005, { 0, 1 } },
	{ 0x0600000D, { 1, 1 } },
	{ 0x0600000E, { 2, 1 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[3] = 
{
	{ (Il2CppRGCTXDataType)2, 332 },
	{ (Il2CppRGCTXDataType)2, 339 },
	{ (Il2CppRGCTXDataType)2, 340 },
};
extern const CustomAttributesCacheGenerator g_System_Runtime_CompilerServices_Unsafe_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Runtime_CompilerServices_Unsafe_CodeGenModule;
const Il2CppCodeGenModule g_System_Runtime_CompilerServices_Unsafe_CodeGenModule = 
{
	"System.Runtime.CompilerServices.Unsafe.dll",
	18,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	3,
	s_rgctxIndices,
	3,
	s_rgctxValues,
	NULL,
	g_System_Runtime_CompilerServices_Unsafe_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
