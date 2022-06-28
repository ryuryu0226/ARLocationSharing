#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Resources.ResourceManager System.SR::get_ResourceManager()
extern void SR_get_ResourceManager_mC7FCF58D15F3EF72A08F56C4769FBB19C17FCB07 (void);
// 0x00000002 System.String System.SR::GetResourceString(System.String,System.String)
extern void SR_GetResourceString_m83D5C2BD42800E19CEDAF6DF7F97DF68300205DA (void);
// 0x00000003 System.String System.SR::get_ArgumentException_BufferNotFromPool()
extern void SR_get_ArgumentException_BufferNotFromPool_m044A5BCCFBA6239234912A43CC0E10F67C9563F2 (void);
// 0x00000004 System.Type System.SR::get_ResourceType()
extern void SR_get_ResourceType_m65BF4EFEE48A38B97146CC712982E9686E872D98 (void);
// 0x00000005 System.Buffers.ArrayPool`1<T> System.Buffers.ArrayPool`1::get_Shared()
// 0x00000006 System.Buffers.ArrayPool`1<T> System.Buffers.ArrayPool`1::EnsureSharedCreated()
// 0x00000007 System.Buffers.ArrayPool`1<T> System.Buffers.ArrayPool`1::Create()
// 0x00000008 System.Buffers.ArrayPool`1<T> System.Buffers.ArrayPool`1::Create(System.Int32,System.Int32)
// 0x00000009 T[] System.Buffers.ArrayPool`1::Rent(System.Int32)
// 0x0000000A System.Void System.Buffers.ArrayPool`1::Return(T[],System.Boolean)
// 0x0000000B System.Void System.Buffers.ArrayPool`1::.ctor()
// 0x0000000C System.Void System.Buffers.ArrayPoolEventSource::BufferRented(System.Int32,System.Int32,System.Int32,System.Int32)
extern void ArrayPoolEventSource_BufferRented_mC7D65CD91B3E78E4ED79E06BDBF442542D750652 (void);
// 0x0000000D System.Void System.Buffers.ArrayPoolEventSource::BufferAllocated(System.Int32,System.Int32,System.Int32,System.Int32,System.Buffers.ArrayPoolEventSource/BufferAllocatedReason)
extern void ArrayPoolEventSource_BufferAllocated_m125EA5BABA1D6BD52DC947843906DB0406705C20 (void);
// 0x0000000E System.Void System.Buffers.ArrayPoolEventSource::BufferReturned(System.Int32,System.Int32,System.Int32)
extern void ArrayPoolEventSource_BufferReturned_mEB629695972CA404F23E651D699335DEEDCD8E4B (void);
// 0x0000000F System.Void System.Buffers.ArrayPoolEventSource::.ctor()
extern void ArrayPoolEventSource__ctor_m71F143D7D469B7BC7EFC255BAD1C2EE5523175A6 (void);
// 0x00000010 System.Void System.Buffers.ArrayPoolEventSource::.cctor()
extern void ArrayPoolEventSource__cctor_m0F00936B051DE200531B696056DCDE8035405B32 (void);
// 0x00000011 System.Void System.Buffers.DefaultArrayPool`1::.ctor()
// 0x00000012 System.Void System.Buffers.DefaultArrayPool`1::.ctor(System.Int32,System.Int32)
// 0x00000013 System.Int32 System.Buffers.DefaultArrayPool`1::get_Id()
// 0x00000014 T[] System.Buffers.DefaultArrayPool`1::Rent(System.Int32)
// 0x00000015 System.Void System.Buffers.DefaultArrayPool`1::Return(T[],System.Boolean)
// 0x00000016 System.Void System.Buffers.DefaultArrayPool`1/Bucket::.ctor(System.Int32,System.Int32,System.Int32)
// 0x00000017 System.Int32 System.Buffers.DefaultArrayPool`1/Bucket::get_Id()
// 0x00000018 T[] System.Buffers.DefaultArrayPool`1/Bucket::Rent()
// 0x00000019 System.Void System.Buffers.DefaultArrayPool`1/Bucket::Return(T[])
// 0x0000001A System.Int32 System.Buffers.Utilities::SelectBucketIndex(System.Int32)
extern void Utilities_SelectBucketIndex_m9D8F76CA04ACDE46A815254FFA2A994D26E325B0 (void);
// 0x0000001B System.Int32 System.Buffers.Utilities::GetMaxSizeForBucket(System.Int32)
extern void Utilities_GetMaxSizeForBucket_m85A416BCA03223E341683D4185D809CF06A44A67 (void);
static Il2CppMethodPointer s_methodPointers[27] = 
{
	SR_get_ResourceManager_mC7FCF58D15F3EF72A08F56C4769FBB19C17FCB07,
	SR_GetResourceString_m83D5C2BD42800E19CEDAF6DF7F97DF68300205DA,
	SR_get_ArgumentException_BufferNotFromPool_m044A5BCCFBA6239234912A43CC0E10F67C9563F2,
	SR_get_ResourceType_m65BF4EFEE48A38B97146CC712982E9686E872D98,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	ArrayPoolEventSource_BufferRented_mC7D65CD91B3E78E4ED79E06BDBF442542D750652,
	ArrayPoolEventSource_BufferAllocated_m125EA5BABA1D6BD52DC947843906DB0406705C20,
	ArrayPoolEventSource_BufferReturned_mEB629695972CA404F23E651D699335DEEDCD8E4B,
	ArrayPoolEventSource__ctor_m71F143D7D469B7BC7EFC255BAD1C2EE5523175A6,
	ArrayPoolEventSource__cctor_m0F00936B051DE200531B696056DCDE8035405B32,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Utilities_SelectBucketIndex_m9D8F76CA04ACDE46A815254FFA2A994D26E325B0,
	Utilities_GetMaxSizeForBucket_m85A416BCA03223E341683D4185D809CF06A44A67,
};
static const int32_t s_InvokerIndices[27] = 
{
	7572,
	6778,
	7572,
	7572,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	615,
	246,
	1133,
	5592,
	7590,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	7316,
	7316,
};
static const Il2CppTokenRangePair s_rgctxIndices[3] = 
{
	{ 0x02000004, { 0, 8 } },
	{ 0x02000007, { 8, 12 } },
	{ 0x02000008, { 20, 3 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[23] = 
{
	{ (Il2CppRGCTXDataType)2, 2501 },
	{ (Il2CppRGCTXDataType)3, 47116 },
	{ (Il2CppRGCTXDataType)3, 1334 },
	{ (Il2CppRGCTXDataType)3, 1333 },
	{ (Il2CppRGCTXDataType)3, 45189 },
	{ (Il2CppRGCTXDataType)2, 2837 },
	{ (Il2CppRGCTXDataType)3, 4764 },
	{ (Il2CppRGCTXDataType)3, 4765 },
	{ (Il2CppRGCTXDataType)3, 4766 },
	{ (Il2CppRGCTXDataType)3, 1335 },
	{ (Il2CppRGCTXDataType)2, 2503 },
	{ (Il2CppRGCTXDataType)3, 4767 },
	{ (Il2CppRGCTXDataType)2, 7232 },
	{ (Il2CppRGCTXDataType)2, 2598 },
	{ (Il2CppRGCTXDataType)3, 3212 },
	{ (Il2CppRGCTXDataType)2, 2838 },
	{ (Il2CppRGCTXDataType)2, 7144 },
	{ (Il2CppRGCTXDataType)3, 3213 },
	{ (Il2CppRGCTXDataType)3, 3215 },
	{ (Il2CppRGCTXDataType)3, 3214 },
	{ (Il2CppRGCTXDataType)2, 7289 },
	{ (Il2CppRGCTXDataType)2, 7201 },
	{ (Il2CppRGCTXDataType)3, 3216 },
};
extern const CustomAttributesCacheGenerator g_System_Buffers_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Buffers_CodeGenModule;
const Il2CppCodeGenModule g_System_Buffers_CodeGenModule = 
{
	"System.Buffers.dll",
	27,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	3,
	s_rgctxIndices,
	23,
	s_rgctxValues,
	NULL,
	g_System_Buffers_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
