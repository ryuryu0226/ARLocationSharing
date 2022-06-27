#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
extern void EmbeddedAttribute__ctor_m4D98D68DCC98BDFE8245ACE624D45903EBD28982 (void);
// 0x00000002 System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
extern void IsReadOnlyAttribute__ctor_mBD579119582932E31A45DA4B1E1491FDC67F171D (void);
// 0x00000003 System.Void MagicOnion.ClientStreamingResult`2::.ctor(TResponse)
// 0x00000004 System.Void MagicOnion.ClientStreamingResult`2::.ctor(Grpc.Core.AsyncClientStreamingCall`2<System.Byte[],System.Byte[]>,Grpc.Core.IClientStreamWriter`1<TRequest>,MessagePack.MessagePackSerializerOptions)
// 0x00000005 System.Threading.Tasks.Task`1<TResponse> MagicOnion.ClientStreamingResult`2::Deserialize()
// 0x00000006 System.Threading.Tasks.Task`1<TResponse> MagicOnion.ClientStreamingResult`2::get_ResponseAsync()
// 0x00000007 System.Threading.Tasks.Task`1<Grpc.Core.Metadata> MagicOnion.ClientStreamingResult`2::get_ResponseHeadersAsync()
// 0x00000008 Grpc.Core.IClientStreamWriter`1<TRequest> MagicOnion.ClientStreamingResult`2::get_RequestStream()
// 0x00000009 System.Runtime.CompilerServices.TaskAwaiter`1<TResponse> MagicOnion.ClientStreamingResult`2::GetAwaiter()
// 0x0000000A Grpc.Core.Status MagicOnion.ClientStreamingResult`2::GetStatus()
// 0x0000000B Grpc.Core.Metadata MagicOnion.ClientStreamingResult`2::GetTrailers()
// 0x0000000C System.Void MagicOnion.ClientStreamingResult`2::Dispose()
// 0x0000000D System.Void MagicOnion.ClientStreamingResult`2/<Deserialize>d__7::.ctor()
// 0x0000000E System.Void MagicOnion.ClientStreamingResult`2/<Deserialize>d__7::MoveNext()
// 0x0000000F System.Void MagicOnion.ClientStreamingResult`2/<Deserialize>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
// 0x00000010 System.Void MagicOnion.DuplexStreamingResult`2::.ctor(Grpc.Core.AsyncDuplexStreamingCall`2<System.Byte[],System.Byte[]>,Grpc.Core.IClientStreamWriter`1<TRequest>,Grpc.Core.IAsyncStreamReader`1<TResponse>,MessagePack.MessagePackSerializerOptions)
// 0x00000011 Grpc.Core.AsyncDuplexStreamingCall`2<System.Byte[],System.Byte[]> MagicOnion.DuplexStreamingResult`2::get_RawStreamingCall()
// 0x00000012 Grpc.Core.IAsyncStreamReader`1<TResponse> MagicOnion.DuplexStreamingResult`2::get_ResponseStream()
// 0x00000013 Grpc.Core.IClientStreamWriter`1<TRequest> MagicOnion.DuplexStreamingResult`2::get_RequestStream()
// 0x00000014 System.Threading.Tasks.Task`1<Grpc.Core.Metadata> MagicOnion.DuplexStreamingResult`2::get_ResponseHeadersAsync()
// 0x00000015 Grpc.Core.Status MagicOnion.DuplexStreamingResult`2::GetStatus()
// 0x00000016 Grpc.Core.Metadata MagicOnion.DuplexStreamingResult`2::GetTrailers()
// 0x00000017 System.Void MagicOnion.DuplexStreamingResult`2::Dispose()
// 0x00000018 System.Void MagicOnion.GenerateDefineDebugAttribute::.ctor()
extern void GenerateDefineDebugAttribute__ctor_mAD0A7796062C25FCAD05912EBEDC794B1D9D0D85 (void);
// 0x00000019 System.Void MagicOnion.GenerateIfDirectiveAttribute::.ctor(System.String)
extern void GenerateIfDirectiveAttribute__ctor_m96EB9A89DEF32ED3B7377013B2A2E9776D6DE044 (void);
// 0x0000001A TSelf MagicOnion.IService`1::WithOptions(Grpc.Core.CallOptions)
// 0x0000001B TSelf MagicOnion.IService`1::WithHeaders(Grpc.Core.Metadata)
// 0x0000001C TSelf MagicOnion.IService`1::WithDeadline(System.DateTime)
// 0x0000001D TSelf MagicOnion.IService`1::WithCancellationToken(System.Threading.CancellationToken)
// 0x0000001E TSelf MagicOnion.IService`1::WithHost(System.String)
// 0x0000001F TSelf MagicOnion.IStreamingHub`2::FireAndForget()
// 0x00000020 System.Threading.Tasks.Task MagicOnion.IStreamingHub`2::DisposeAsync()
// 0x00000021 System.Threading.Tasks.Task MagicOnion.IStreamingHub`2::WaitForDisconnect()
// 0x00000022 System.Void MagicOnion.IgnoreAttribute::.ctor()
extern void IgnoreAttribute__ctor_m2D1FBC3BCC821C248577E4D6DAC4D8AB59F7A414 (void);
// 0x00000023 System.Void MagicOnion.ServerStreamingResult`1::.ctor(Grpc.Core.AsyncServerStreamingCall`1<System.Byte[]>,Grpc.Core.IAsyncStreamReader`1<TResponse>,MessagePack.MessagePackSerializerOptions)
// 0x00000024 Grpc.Core.IAsyncStreamReader`1<TResponse> MagicOnion.ServerStreamingResult`1::get_ResponseStream()
// 0x00000025 System.Threading.Tasks.Task`1<Grpc.Core.Metadata> MagicOnion.ServerStreamingResult`1::get_ResponseHeadersAsync()
// 0x00000026 Grpc.Core.Status MagicOnion.ServerStreamingResult`1::GetStatus()
// 0x00000027 Grpc.Core.Metadata MagicOnion.ServerStreamingResult`1::GetTrailers()
// 0x00000028 System.Void MagicOnion.ServerStreamingResult`1::Dispose()
// 0x00000029 MagicOnion.UnaryResult`1<T> MagicOnion.UnaryResult::FromResult(T)
// 0x0000002A MagicOnion.UnaryResult`1<T> MagicOnion.UnaryResult::FromResult(System.Threading.Tasks.Task`1<T>)
// 0x0000002B MagicOnion.UnaryResult`1<MessagePack.Nil> MagicOnion.UnaryResult::get_Nil()
extern void UnaryResult_get_Nil_m51235FA347742673BC2A3D254F955717225D60B2 (void);
// 0x0000002C System.Void MagicOnion.UnaryResult`1::.ctor(TResponse)
// 0x0000002D System.Void MagicOnion.UnaryResult`1::.ctor(System.Threading.Tasks.Task`1<TResponse>)
// 0x0000002E System.Void MagicOnion.UnaryResult`1::.ctor(System.Threading.Tasks.Task`1<MagicOnion.Client.IResponseContext`1<TResponse>>)
// 0x0000002F System.Threading.Tasks.Task`1<TResponse> MagicOnion.UnaryResult`1::get_ResponseAsync()
// 0x00000030 System.Threading.Tasks.Task`1<Grpc.Core.Metadata> MagicOnion.UnaryResult`1::get_ResponseHeadersAsync()
// 0x00000031 System.Threading.Tasks.Task`1<TResponse> MagicOnion.UnaryResult`1::UnwrapResponse()
// 0x00000032 System.Threading.Tasks.Task`1<Grpc.Core.Metadata> MagicOnion.UnaryResult`1::UnwrapResponseHeaders()
// 0x00000033 System.Void MagicOnion.UnaryResult`1::UnwrapDispose()
// 0x00000034 MagicOnion.Client.IResponseContext`1<TResponse> MagicOnion.UnaryResult`1::TryUnwrap()
// 0x00000035 System.Runtime.CompilerServices.TaskAwaiter`1<TResponse> MagicOnion.UnaryResult`1::GetAwaiter()
// 0x00000036 Grpc.Core.Status MagicOnion.UnaryResult`1::GetStatus()
// 0x00000037 Grpc.Core.Metadata MagicOnion.UnaryResult`1::GetTrailers()
// 0x00000038 System.Void MagicOnion.UnaryResult`1::Dispose()
// 0x00000039 System.Void MagicOnion.UnaryResult`1/<UnwrapResponse>d__11::.ctor()
// 0x0000003A System.Void MagicOnion.UnaryResult`1/<UnwrapResponse>d__11::MoveNext()
// 0x0000003B System.Void MagicOnion.UnaryResult`1/<UnwrapResponse>d__11::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
// 0x0000003C System.Void MagicOnion.UnaryResult`1/<UnwrapResponseHeaders>d__12::.ctor()
// 0x0000003D System.Void MagicOnion.UnaryResult`1/<UnwrapResponseHeaders>d__12::MoveNext()
// 0x0000003E System.Void MagicOnion.UnaryResult`1/<UnwrapResponseHeaders>d__12::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
// 0x0000003F System.Void MagicOnion.UnaryResult`1/<UnwrapDispose>d__13::.ctor()
// 0x00000040 System.Void MagicOnion.UnaryResult`1/<UnwrapDispose>d__13::MoveNext()
// 0x00000041 System.Void MagicOnion.UnaryResult`1/<UnwrapDispose>d__13::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
// 0x00000042 System.Void MagicOnion.Server.Hubs.MethodIdAttribute::.ctor(System.Int32)
extern void MethodIdAttribute__ctor_m2A66FF2ED81772694969E4FD2BF262D196D9A68A (void);
// 0x00000043 MagicOnion.CompilerServices.AsyncUnaryResultMethodBuilder`1<T> MagicOnion.CompilerServices.AsyncUnaryResultMethodBuilder`1::Create()
// 0x00000044 System.Void MagicOnion.CompilerServices.AsyncUnaryResultMethodBuilder`1::Start(TStateMachine&)
// 0x00000045 System.Void MagicOnion.CompilerServices.AsyncUnaryResultMethodBuilder`1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
// 0x00000046 System.Void MagicOnion.CompilerServices.AsyncUnaryResultMethodBuilder`1::SetResult(T)
// 0x00000047 System.Void MagicOnion.CompilerServices.AsyncUnaryResultMethodBuilder`1::SetException(System.Exception)
// 0x00000048 MagicOnion.UnaryResult`1<T> MagicOnion.CompilerServices.AsyncUnaryResultMethodBuilder`1::get_Task()
// 0x00000049 System.Void MagicOnion.CompilerServices.AsyncUnaryResultMethodBuilder`1::AwaitOnCompleted(TAwaiter&,TStateMachine&)
// 0x0000004A System.Void MagicOnion.CompilerServices.AsyncUnaryResultMethodBuilder`1::AwaitUnsafeOnCompleted(TAwaiter&,TStateMachine&)
// 0x0000004B System.Threading.Tasks.Task`1<Grpc.Core.Metadata> MagicOnion.Client.IResponseContext::get_ResponseHeadersAsync()
// 0x0000004C Grpc.Core.Status MagicOnion.Client.IResponseContext::GetStatus()
// 0x0000004D Grpc.Core.Metadata MagicOnion.Client.IResponseContext::GetTrailers()
// 0x0000004E System.Type MagicOnion.Client.IResponseContext::get_ResponseType()
// 0x0000004F System.Threading.Tasks.Task`1<T> MagicOnion.Client.IResponseContext`1::get_ResponseAsync()
static Il2CppMethodPointer s_methodPointers[79] = 
{
	EmbeddedAttribute__ctor_m4D98D68DCC98BDFE8245ACE624D45903EBD28982,
	IsReadOnlyAttribute__ctor_mBD579119582932E31A45DA4B1E1491FDC67F171D,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	GenerateDefineDebugAttribute__ctor_mAD0A7796062C25FCAD05912EBEDC794B1D9D0D85,
	GenerateIfDirectiveAttribute__ctor_m96EB9A89DEF32ED3B7377013B2A2E9776D6DE044,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	IgnoreAttribute__ctor_m2D1FBC3BCC821C248577E4D6DAC4D8AB59F7A414,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	UnaryResult_get_Nil_m51235FA347742673BC2A3D254F955717225D60B2,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	MethodIdAttribute__ctor_m2A66FF2ED81772694969E4FD2BF262D196D9A68A,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[79] = 
{
	5611,
	5611,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	5611,
	4506,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	5611,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	7677,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	4488,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	5567,
	5596,
	5567,
	5567,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[12] = 
{
	{ 0x02000004, { 0, 10 } },
	{ 0x02000005, { 10, 4 } },
	{ 0x02000010, { 18, 20 } },
	{ 0x02000011, { 38, 13 } },
	{ 0x02000012, { 51, 6 } },
	{ 0x02000013, { 57, 5 } },
	{ 0x02000015, { 62, 9 } },
	{ 0x06000029, { 14, 2 } },
	{ 0x0600002A, { 16, 2 } },
	{ 0x06000044, { 71, 1 } },
	{ 0x06000049, { 72, 1 } },
	{ 0x0600004A, { 73, 1 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[74] = 
{
	{ (Il2CppRGCTXDataType)2, 2246 },
	{ (Il2CppRGCTXDataType)3, 168 },
	{ (Il2CppRGCTXDataType)3, 3005 },
	{ (Il2CppRGCTXDataType)2, 2592 },
	{ (Il2CppRGCTXDataType)3, 3004 },
	{ (Il2CppRGCTXDataType)3, 3006 },
	{ (Il2CppRGCTXDataType)3, 46851 },
	{ (Il2CppRGCTXDataType)3, 3396 },
	{ (Il2CppRGCTXDataType)3, 3397 },
	{ (Il2CppRGCTXDataType)3, 37008 },
	{ (Il2CppRGCTXDataType)3, 3007 },
	{ (Il2CppRGCTXDataType)3, 45976 },
	{ (Il2CppRGCTXDataType)3, 3008 },
	{ (Il2CppRGCTXDataType)3, 3009 },
	{ (Il2CppRGCTXDataType)2, 6651 },
	{ (Il2CppRGCTXDataType)3, 37733 },
	{ (Il2CppRGCTXDataType)2, 6650 },
	{ (Il2CppRGCTXDataType)3, 37732 },
	{ (Il2CppRGCTXDataType)3, 46850 },
	{ (Il2CppRGCTXDataType)3, 37738 },
	{ (Il2CppRGCTXDataType)3, 37739 },
	{ (Il2CppRGCTXDataType)2, 2278 },
	{ (Il2CppRGCTXDataType)3, 296 },
	{ (Il2CppRGCTXDataType)3, 2983 },
	{ (Il2CppRGCTXDataType)2, 2585 },
	{ (Il2CppRGCTXDataType)3, 2982 },
	{ (Il2CppRGCTXDataType)3, 2984 },
	{ (Il2CppRGCTXDataType)2, 2280 },
	{ (Il2CppRGCTXDataType)3, 306 },
	{ (Il2CppRGCTXDataType)3, 3088 },
	{ (Il2CppRGCTXDataType)2, 2276 },
	{ (Il2CppRGCTXDataType)3, 286 },
	{ (Il2CppRGCTXDataType)3, 44529 },
	{ (Il2CppRGCTXDataType)3, 37011 },
	{ (Il2CppRGCTXDataType)3, 37740 },
	{ (Il2CppRGCTXDataType)3, 36994 },
	{ (Il2CppRGCTXDataType)3, 37736 },
	{ (Il2CppRGCTXDataType)3, 37737 },
	{ (Il2CppRGCTXDataType)3, 37013 },
	{ (Il2CppRGCTXDataType)3, 4652 },
	{ (Il2CppRGCTXDataType)3, 4685 },
	{ (Il2CppRGCTXDataType)3, 2995 },
	{ (Il2CppRGCTXDataType)3, 4684 },
	{ (Il2CppRGCTXDataType)2, 5045 },
	{ (Il2CppRGCTXDataType)3, 37007 },
	{ (Il2CppRGCTXDataType)3, 4648 },
	{ (Il2CppRGCTXDataType)3, 4677 },
	{ (Il2CppRGCTXDataType)3, 2994 },
	{ (Il2CppRGCTXDataType)3, 4676 },
	{ (Il2CppRGCTXDataType)3, 2996 },
	{ (Il2CppRGCTXDataType)3, 2997 },
	{ (Il2CppRGCTXDataType)3, 37014 },
	{ (Il2CppRGCTXDataType)3, 4653 },
	{ (Il2CppRGCTXDataType)3, 4687 },
	{ (Il2CppRGCTXDataType)3, 3086 },
	{ (Il2CppRGCTXDataType)3, 4686 },
	{ (Il2CppRGCTXDataType)3, 3087 },
	{ (Il2CppRGCTXDataType)3, 37012 },
	{ (Il2CppRGCTXDataType)3, 4651 },
	{ (Il2CppRGCTXDataType)3, 4683 },
	{ (Il2CppRGCTXDataType)3, 44518 },
	{ (Il2CppRGCTXDataType)3, 4682 },
	{ (Il2CppRGCTXDataType)3, 2969 },
	{ (Il2CppRGCTXDataType)2, 2581 },
	{ (Il2CppRGCTXDataType)3, 2972 },
	{ (Il2CppRGCTXDataType)3, 2971 },
	{ (Il2CppRGCTXDataType)3, 2970 },
	{ (Il2CppRGCTXDataType)2, 6652 },
	{ (Il2CppRGCTXDataType)3, 37734 },
	{ (Il2CppRGCTXDataType)3, 2973 },
	{ (Il2CppRGCTXDataType)3, 37735 },
	{ (Il2CppRGCTXDataType)3, 2968 },
	{ (Il2CppRGCTXDataType)3, 2966 },
	{ (Il2CppRGCTXDataType)3, 2967 },
};
extern const CustomAttributesCacheGenerator g_MagicOnion_Abstractions_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_MagicOnion_Abstractions_CodeGenModule;
const Il2CppCodeGenModule g_MagicOnion_Abstractions_CodeGenModule = 
{
	"MagicOnion.Abstractions.dll",
	79,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	12,
	s_rgctxIndices,
	74,
	s_rgctxValues,
	NULL,
	g_MagicOnion_Abstractions_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
