#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"


extern const RuntimeMethod* NativeCallbackDispatcher_HandleDispatcherCallback_m57C5A58471D40296AB6D21E2A542C0749D4A8D4B_RuntimeMethod_var;
extern const RuntimeMethod* NativeLogRedirector_HandleWrite_m03E5012D2E9E37E1A3CBBE08B37987B070E0013D_RuntimeMethod_var;



// 0x00000001 System.Void Grpc.Core.CallInvocationDetails`2::.ctor(Grpc.Core.Channel,Grpc.Core.Method`2<TRequest,TResponse>,System.String,Grpc.Core.CallOptions)
// 0x00000002 System.Void Grpc.Core.CallInvocationDetails`2::.ctor(Grpc.Core.Channel,System.String,System.String,Grpc.Core.Marshaller`1<TRequest>,Grpc.Core.Marshaller`1<TResponse>,Grpc.Core.CallOptions)
// 0x00000003 Grpc.Core.Channel Grpc.Core.CallInvocationDetails`2::get_Channel()
// 0x00000004 System.String Grpc.Core.CallInvocationDetails`2::get_Method()
// 0x00000005 System.String Grpc.Core.CallInvocationDetails`2::get_Host()
// 0x00000006 Grpc.Core.Marshaller`1<TRequest> Grpc.Core.CallInvocationDetails`2::get_RequestMarshaller()
// 0x00000007 Grpc.Core.Marshaller`1<TResponse> Grpc.Core.CallInvocationDetails`2::get_ResponseMarshaller()
// 0x00000008 Grpc.Core.CallOptions Grpc.Core.CallInvocationDetails`2::get_Options()
// 0x00000009 Grpc.Core.CallInvocationDetails`2<TRequest,TResponse> Grpc.Core.CallInvocationDetails`2::WithOptions(Grpc.Core.CallOptions)
// 0x0000000A Grpc.Core.AsyncUnaryCall`1<TResponse> Grpc.Core.Calls::AsyncUnaryCall(Grpc.Core.CallInvocationDetails`2<TRequest,TResponse>,TRequest)
// 0x0000000B Grpc.Core.AsyncDuplexStreamingCall`2<TRequest,TResponse> Grpc.Core.Calls::AsyncDuplexStreamingCall(Grpc.Core.CallInvocationDetails`2<TRequest,TResponse>)
// 0x0000000C System.Void Grpc.Core.Calls/Callbacks`2::.cctor()
// 0x0000000D System.Void Grpc.Core.Calls/Callbacks`2/<>c::.cctor()
// 0x0000000E System.Void Grpc.Core.Calls/Callbacks`2/<>c::.ctor()
// 0x0000000F System.Threading.Tasks.Task`1<Grpc.Core.Metadata> Grpc.Core.Calls/Callbacks`2/<>c::<.cctor>b__4_0(System.Object)
// 0x00000010 Grpc.Core.Status Grpc.Core.Calls/Callbacks`2/<>c::<.cctor>b__4_1(System.Object)
// 0x00000011 Grpc.Core.Metadata Grpc.Core.Calls/Callbacks`2/<>c::<.cctor>b__4_2(System.Object)
// 0x00000012 System.Void Grpc.Core.Calls/Callbacks`2/<>c::<.cctor>b__4_3(System.Object)
// 0x00000013 System.Void Grpc.Core.Channel::.ctor(System.String,Grpc.Core.ChannelCredentials,System.Collections.Generic.IEnumerable`1<Grpc.Core.ChannelOption>)
extern void Channel__ctor_mB5120C5C8C383358BB7FCB1EBA3AF97C95C19A13 (void);
// 0x00000014 System.Void Grpc.Core.Channel::.ctor(System.String,System.Int32,Grpc.Core.ChannelCredentials)
extern void Channel__ctor_m8766CD86FCC1C3BBF9E815F94BD8906297CC81D3 (void);
// 0x00000015 System.Void Grpc.Core.Channel::.ctor(System.String,System.Int32,Grpc.Core.ChannelCredentials,System.Collections.Generic.IEnumerable`1<Grpc.Core.ChannelOption>)
extern void Channel__ctor_m178076C87D5BB98B5F3577E4FA50D56DD9722F88 (void);
// 0x00000016 System.Threading.Tasks.Task Grpc.Core.Channel::WaitForStateChangedAsync(Grpc.Core.ChannelState,System.Nullable`1<System.DateTime>)
extern void Channel_WaitForStateChangedAsync_m1761E3D647487C38E37CE2EE4BB7F741F71B9862 (void);
// 0x00000017 System.Threading.Tasks.Task`1<System.Boolean> Grpc.Core.Channel::TryWaitForStateChangedAsync(Grpc.Core.ChannelState,System.Nullable`1<System.DateTime>)
extern void Channel_TryWaitForStateChangedAsync_m46C0AAED9E568712C155ED990E334826CF4105D4 (void);
// 0x00000018 System.Threading.CancellationToken Grpc.Core.Channel::get_ShutdownToken()
extern void Channel_get_ShutdownToken_m5F6F6AD8F90999F2AE0EE780B704E15FFF33BCF3 (void);
// 0x00000019 System.Threading.Tasks.Task Grpc.Core.Channel::ConnectAsync(System.Nullable`1<System.DateTime>)
extern void Channel_ConnectAsync_m42ABEF7D3554323EAE9354705BE14C842741309F (void);
// 0x0000001A System.Threading.Tasks.Task Grpc.Core.Channel::ShutdownAsyncCore()
extern void Channel_ShutdownAsyncCore_m303FB47695695531BEF809F9E71752A1423AF9D9 (void);
// 0x0000001B Grpc.Core.CallInvoker Grpc.Core.Channel::CreateCallInvoker()
extern void Channel_CreateCallInvoker_m8C1164EC40449CDD202BF04540D91FD7C32604BB (void);
// 0x0000001C Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Channel::get_Handle()
extern void Channel_get_Handle_m2DC24262D763DC826249C57EAD030A4E2F223BD5 (void);
// 0x0000001D Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Channel::get_CompletionQueue()
extern void Channel_get_CompletionQueue_mB9C50F6C682CC31106C3EFD3C8395F95956A9D13 (void);
// 0x0000001E System.Void Grpc.Core.Channel::AddCallReference(System.Object)
extern void Channel_AddCallReference_mBC1DCAE4C52CA665A2BBB0250C8A7424728AA7D7 (void);
// 0x0000001F System.Void Grpc.Core.Channel::RemoveCallReference(System.Object)
extern void Channel_RemoveCallReference_m4E45518597137D41711F8DE011C33AE051742AA7 (void);
// 0x00000020 Grpc.Core.ChannelState Grpc.Core.Channel::GetConnectivityState(System.Boolean)
extern void Channel_GetConnectivityState_m65F25B7E879E5EDD6B82B429BE70BD32ECFE6B8D (void);
// 0x00000021 System.Void Grpc.Core.Channel::EnsureUserAgentChannelOption(System.Collections.Generic.Dictionary`2<System.String,Grpc.Core.ChannelOption>)
extern void Channel_EnsureUserAgentChannelOption_mF43338487D98C570CF22CF04611CC80D4E904E8D (void);
// 0x00000022 System.Collections.Generic.Dictionary`2<System.String,Grpc.Core.ChannelOption> Grpc.Core.Channel::CreateOptionsDictionary(System.Collections.Generic.IEnumerable`1<Grpc.Core.ChannelOption>)
extern void Channel_CreateOptionsDictionary_m116D04AC914BB4558D1AC5F71C49483BA63DF119 (void);
// 0x00000023 System.Void Grpc.Core.Channel::.cctor()
extern void Channel__cctor_mA2A28A5902FB02A73F4CA56CF28B4034F8023F67 (void);
// 0x00000024 System.Void Grpc.Core.Channel/<WaitForStateChangedAsync>d__16::MoveNext()
extern void U3CWaitForStateChangedAsyncU3Ed__16_MoveNext_m4848FE46620DAC2D1AE134917C8BEE8413206470 (void);
// 0x00000025 System.Void Grpc.Core.Channel/<WaitForStateChangedAsync>d__16::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CWaitForStateChangedAsyncU3Ed__16_SetStateMachine_m573FC6FE8229F8655EA4291AD4E6DEC383791F90 (void);
// 0x00000026 System.Void Grpc.Core.Channel/<ConnectAsync>d__22::MoveNext()
extern void U3CConnectAsyncU3Ed__22_MoveNext_mA31A1906C6258DB74D6FD60C6B1216B6084DD46D (void);
// 0x00000027 System.Void Grpc.Core.Channel/<ConnectAsync>d__22::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CConnectAsyncU3Ed__22_SetStateMachine_m3E439A594721F0A6BB89F2EDA82E8FD7706AEE1D (void);
// 0x00000028 System.Void Grpc.Core.Channel/<ShutdownAsyncCore>d__23::MoveNext()
extern void U3CShutdownAsyncCoreU3Ed__23_MoveNext_mB90EBA7F37C4B93AA2EEF2B4113D2CD272438DBE (void);
// 0x00000029 System.Void Grpc.Core.Channel/<ShutdownAsyncCore>d__23::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CShutdownAsyncCoreU3Ed__23_SetStateMachine_m9B5F12CABE89A38367CFFEA3FD866FAEFAD3AC03 (void);
// 0x0000002A System.Void Grpc.Core.Channel/<>c::.cctor()
extern void U3CU3Ec__cctor_mC6C16398A832C23E2527E68395AA5BF0032D10C2 (void);
// 0x0000002B System.Void Grpc.Core.Channel/<>c::.ctor()
extern void U3CU3Ec__ctor_mFFEDEA837ECC10CF159B7719A256E1FA70D3773E (void);
// 0x0000002C System.Void Grpc.Core.Channel/<>c::<.cctor>b__37_0(System.Boolean,Grpc.Core.Internal.BatchContextSafeHandle,System.Object)
extern void U3CU3Ec_U3C_cctorU3Eb__37_0_m4C646B5D01B0108D0A7770443517CCEB8FA9EB9E (void);
// 0x0000002D System.Void Grpc.Core.ChannelOption::.ctor(System.String,System.String)
extern void ChannelOption__ctor_m57029B1F4B1161420FEF3389CB3EC2CBE88F5295 (void);
// 0x0000002E Grpc.Core.ChannelOption/OptionType Grpc.Core.ChannelOption::get_Type()
extern void ChannelOption_get_Type_m523C82FC0FC670A049BA4398D9392070522D2734 (void);
// 0x0000002F System.String Grpc.Core.ChannelOption::get_Name()
extern void ChannelOption_get_Name_m7D1C506575899B8C8C6E5267241609CF33EEAC88 (void);
// 0x00000030 System.Int32 Grpc.Core.ChannelOption::get_IntValue()
extern void ChannelOption_get_IntValue_mC54EDC6F2D250192CB2984018B81218955AC37D4 (void);
// 0x00000031 System.String Grpc.Core.ChannelOption::get_StringValue()
extern void ChannelOption_get_StringValue_mB07EE65A4BEBB2A5E869887C9ADBCD64ADF773B7 (void);
// 0x00000032 System.Boolean Grpc.Core.ChannelOption::Equals(System.Object)
extern void ChannelOption_Equals_m7726616F8379ADDA6CE579B47790241A1A8D4B1A (void);
// 0x00000033 System.Boolean Grpc.Core.ChannelOption::Equals(Grpc.Core.ChannelOption)
extern void ChannelOption_Equals_m8DB31695BEEF846B2160F3C91226964141114046 (void);
// 0x00000034 System.Int32 Grpc.Core.ChannelOption::GetHashCode()
extern void ChannelOption_GetHashCode_m3176500A6E14D89BE55E128F39FAC4B24DD13918 (void);
// 0x00000035 System.Boolean Grpc.Core.ChannelOption::op_Equality(Grpc.Core.ChannelOption,Grpc.Core.ChannelOption)
extern void ChannelOption_op_Equality_mF6416E0FFC8B5AE72841E2FEC04A6C9C95C7EAF3 (void);
// 0x00000036 System.Boolean Grpc.Core.ChannelOption::op_Inequality(Grpc.Core.ChannelOption,Grpc.Core.ChannelOption)
extern void ChannelOption_op_Inequality_m410737E06A52B45325D4C8095248E6DD329A903F (void);
// 0x00000037 Grpc.Core.Internal.ChannelArgsSafeHandle Grpc.Core.ChannelOptions::CreateChannelArgs(System.Collections.Generic.ICollection`1<Grpc.Core.ChannelOption>)
extern void ChannelOptions_CreateChannelArgs_m1AD9D0A7D35B6D6EC72CB2EB1A61C912E00DABA2 (void);
// 0x00000038 System.Void Grpc.Core.DefaultCallInvoker::.ctor(Grpc.Core.Channel)
extern void DefaultCallInvoker__ctor_m4050FAAE687F5CB111031C8A76B647C5C7C9ED87 (void);
// 0x00000039 Grpc.Core.AsyncUnaryCall`1<TResponse> Grpc.Core.DefaultCallInvoker::AsyncUnaryCall(Grpc.Core.Method`2<TRequest,TResponse>,System.String,Grpc.Core.CallOptions,TRequest)
// 0x0000003A Grpc.Core.AsyncDuplexStreamingCall`2<TRequest,TResponse> Grpc.Core.DefaultCallInvoker::AsyncDuplexStreamingCall(Grpc.Core.Method`2<TRequest,TResponse>,System.String,Grpc.Core.CallOptions)
// 0x0000003B Grpc.Core.CallInvocationDetails`2<TRequest,TResponse> Grpc.Core.DefaultCallInvoker::CreateCall(Grpc.Core.Method`2<TRequest,TResponse>,System.String,Grpc.Core.CallOptions)
// 0x0000003C Grpc.Core.GrpcEnvironment Grpc.Core.GrpcEnvironment::AddRef()
extern void GrpcEnvironment_AddRef_m8EA2476ACFC0D9E4712AAF683DEA384636E9AF35 (void);
// 0x0000003D System.Threading.Tasks.Task Grpc.Core.GrpcEnvironment::ReleaseAsync()
extern void GrpcEnvironment_ReleaseAsync_m1283C66FAB801F46889CEB4E35DEF2BAB8B03248 (void);
// 0x0000003E System.Void Grpc.Core.GrpcEnvironment::RegisterChannel(Grpc.Core.Channel)
extern void GrpcEnvironment_RegisterChannel_mA7364F5590D4937BC288890CFA10F05A2A3BD4C0 (void);
// 0x0000003F System.Void Grpc.Core.GrpcEnvironment::UnregisterChannel(Grpc.Core.Channel)
extern void GrpcEnvironment_UnregisterChannel_m13E345D55689D46740B5AE524AC822263CDDC0EA (void);
// 0x00000040 System.Void Grpc.Core.GrpcEnvironment::UnregisterServer(Grpc.Core.Server)
extern void GrpcEnvironment_UnregisterServer_m19B64E8F51A914BF9131789ABF90270AB2B89DF5 (void);
// 0x00000041 System.Threading.Tasks.Task Grpc.Core.GrpcEnvironment::ShutdownChannelsAsync()
extern void GrpcEnvironment_ShutdownChannelsAsync_m9E80D97BA0A0FD70776C472BCFBD0E4E16B266AA (void);
// 0x00000042 System.Threading.Tasks.Task Grpc.Core.GrpcEnvironment::KillServersAsync()
extern void GrpcEnvironment_KillServersAsync_mF5FE31B0CA325791234EA3D71B12F30BBAE72B6B (void);
// 0x00000043 Grpc.Core.Logging.ILogger Grpc.Core.GrpcEnvironment::get_Logger()
extern void GrpcEnvironment_get_Logger_m6B6D5FF705A7267DE59BFA7BBBA2EB922C0E5C13 (void);
// 0x00000044 System.Void Grpc.Core.GrpcEnvironment::.ctor()
extern void GrpcEnvironment__ctor_m06ABA661958201A69FF8423805B430C406F882FA (void);
// 0x00000045 System.Collections.Generic.IReadOnlyCollection`1<Grpc.Core.Internal.CompletionQueueSafeHandle> Grpc.Core.GrpcEnvironment::get_CompletionQueues()
extern void GrpcEnvironment_get_CompletionQueues_mD2D08AEDE3EFA5E492CDA2177D61223061AC3CA9 (void);
// 0x00000046 Grpc.Core.Internal.IObjectPool`1<Grpc.Core.Internal.BatchContextSafeHandle> Grpc.Core.GrpcEnvironment::get_BatchContextPool()
extern void GrpcEnvironment_get_BatchContextPool_m3AFD3D8FB1935D7A8DF3258E0D1C4FF3222A77EC (void);
// 0x00000047 Grpc.Core.Internal.IObjectPool`1<Grpc.Core.Internal.RequestCallContextSafeHandle> Grpc.Core.GrpcEnvironment::get_RequestCallContextPool()
extern void GrpcEnvironment_get_RequestCallContextPool_mBACD21AD37D84D8DA23B342153158A53E797BD41 (void);
// 0x00000048 System.Boolean Grpc.Core.GrpcEnvironment::get_IsAlive()
extern void GrpcEnvironment_get_IsAlive_mAA45EFBC1036E52066E6971ECEC785CECAB2627E (void);
// 0x00000049 Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.GrpcEnvironment::PickCompletionQueue()
extern void GrpcEnvironment_PickCompletionQueue_m04B2ABDD35065331606FB1258764C60F6003C244 (void);
// 0x0000004A Grpc.Core.Internal.DebugStats Grpc.Core.GrpcEnvironment::get_DebugStats()
extern void GrpcEnvironment_get_DebugStats_m96B1090567E2663BEF8093007D899CC167BDF98B (void);
// 0x0000004B System.Void Grpc.Core.GrpcEnvironment::GrpcNativeInit()
extern void GrpcEnvironment_GrpcNativeInit_m696EB09FCD8B1E9297F459887953B2B110A38BEC (void);
// 0x0000004C System.Void Grpc.Core.GrpcEnvironment::GrpcNativeShutdown()
extern void GrpcEnvironment_GrpcNativeShutdown_mD1166E41C4EFC7621FDD651AABFB5744C7F7B609 (void);
// 0x0000004D System.Threading.Tasks.Task Grpc.Core.GrpcEnvironment::ShutdownAsync()
extern void GrpcEnvironment_ShutdownAsync_m67682728ADA21F939605D6C7A6329D320F71E3CD (void);
// 0x0000004E System.Int32 Grpc.Core.GrpcEnvironment::GetThreadPoolSizeOrDefault()
extern void GrpcEnvironment_GetThreadPoolSizeOrDefault_mCFCBA3563B3AF98E707CCBCDC95C78BE10B553EB (void);
// 0x0000004F System.Int32 Grpc.Core.GrpcEnvironment::GetCompletionQueueCountOrDefault()
extern void GrpcEnvironment_GetCompletionQueueCountOrDefault_m2B441C05239E0983251C64CDBB2417106CFBE535 (void);
// 0x00000050 System.Boolean Grpc.Core.GrpcEnvironment::get_IsNativeShutdownAllowed()
extern void GrpcEnvironment_get_IsNativeShutdownAllowed_mBD680DE1061DE6132ECEFD5F8EC414CAD589E794 (void);
// 0x00000051 System.Void Grpc.Core.GrpcEnvironment::.cctor()
extern void GrpcEnvironment__cctor_m7BE885FCE482CFB3110D1232B8FBFBE6D281858C (void);
// 0x00000052 System.Void Grpc.Core.GrpcEnvironment::<ShutdownAsync>b__60_0()
extern void GrpcEnvironment_U3CShutdownAsyncU3Eb__60_0_m27E1069343EE328FBF84E130BAC77E02D2B4808D (void);
// 0x00000053 System.Void Grpc.Core.GrpcEnvironment/ShutdownHooks::Register()
extern void ShutdownHooks_Register_m10FD67B18CA4F59FFA5751CDDA6F9004E23EC233 (void);
// 0x00000054 System.Void Grpc.Core.GrpcEnvironment/ShutdownHooks::HandleShutdown()
extern void ShutdownHooks_HandleShutdown_mD8FBFD77BAA89F7D664669CBC684A18F9BAC9E75 (void);
// 0x00000055 System.Void Grpc.Core.GrpcEnvironment/ShutdownHooks::.cctor()
extern void ShutdownHooks__cctor_m9609299DA70DA45AD3BCC0229BA9507F31F61BEF (void);
// 0x00000056 System.Void Grpc.Core.GrpcEnvironment/ShutdownHooks/<>c::.cctor()
extern void U3CU3Ec__cctor_m6EAF6E2EF0908930AD3EDD1EE9532BAF66DE86E5 (void);
// 0x00000057 System.Void Grpc.Core.GrpcEnvironment/ShutdownHooks/<>c::.ctor()
extern void U3CU3Ec__ctor_mAF97FD5D5F3CD0AF9A7003E3404C97F474B4597B (void);
// 0x00000058 System.Void Grpc.Core.GrpcEnvironment/ShutdownHooks/<>c::<Register>b__2_0(System.Object,System.EventArgs)
extern void U3CU3Ec_U3CRegisterU3Eb__2_0_mCBC97135D6A4DFB3023ADC4BF70FE04A3AB02BE6 (void);
// 0x00000059 System.Void Grpc.Core.GrpcEnvironment/ShutdownHooks/<>c::<Register>b__2_1(System.Object,System.EventArgs)
extern void U3CU3Ec_U3CRegisterU3Eb__2_1_mE75443A0F5C84412967A8F01E0C33B0B54C76BA2 (void);
// 0x0000005A System.Void Grpc.Core.GrpcEnvironment/<ReleaseAsync>d__26::MoveNext()
extern void U3CReleaseAsyncU3Ed__26_MoveNext_m1967003E65FDF3FECA71B181518AF02DE512D530 (void);
// 0x0000005B System.Void Grpc.Core.GrpcEnvironment/<ReleaseAsync>d__26::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CReleaseAsyncU3Ed__26_SetStateMachine_mFB02E3C9D2E3EBA308D39B2E67CF9AB88BFB6DF8 (void);
// 0x0000005C System.Void Grpc.Core.GrpcEnvironment/<>c::.cctor()
extern void U3CU3Ec__cctor_mDA8FEFE5305857A23CF3816C05FB3868FA8A1759 (void);
// 0x0000005D System.Void Grpc.Core.GrpcEnvironment/<>c::.ctor()
extern void U3CU3Ec__ctor_mB4795BBC5BE12258838F04CCEFB3E7B9E746BAB8 (void);
// 0x0000005E System.Threading.Tasks.Task Grpc.Core.GrpcEnvironment/<>c::<ShutdownChannelsAsync>b__32_0(Grpc.Core.Channel)
extern void U3CU3Ec_U3CShutdownChannelsAsyncU3Eb__32_0_mD2FA3E2BFC30805EF5401B8421860035831D2A3D (void);
// 0x0000005F System.Threading.Tasks.Task Grpc.Core.GrpcEnvironment/<>c::<KillServersAsync>b__33_0(Grpc.Core.Server)
extern void U3CU3Ec_U3CKillServersAsyncU3Eb__33_0_m9FF482DDC22137896967C68938D252CBECCE7A37 (void);
// 0x00000060 Grpc.Core.Internal.BatchContextSafeHandle Grpc.Core.GrpcEnvironment/<>c::<.ctor>b__45_0()
extern void U3CU3Ec_U3C_ctorU3Eb__45_0_m274511C0067D533088ABF7B39B2932CD728D8757 (void);
// 0x00000061 Grpc.Core.Internal.RequestCallContextSafeHandle Grpc.Core.GrpcEnvironment/<>c::<.ctor>b__45_1()
extern void U3CU3Ec_U3C_ctorU3Eb__45_1_m0A51A8FA6C9268F5B54C18378ED19727C363136F (void);
// 0x00000062 System.Void Grpc.Core.GrpcEnvironment/<ShutdownAsync>d__60::MoveNext()
extern void U3CShutdownAsyncU3Ed__60_MoveNext_m68F417DE5FF99FAC8EB4EEE79BBF1E8E8B3FB4FB (void);
// 0x00000063 System.Void Grpc.Core.GrpcEnvironment/<ShutdownAsync>d__60::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CShutdownAsyncU3Ed__60_SetStateMachine_m1920AEF44AAE8F83996EA891B925E8DE00612E9C (void);
// 0x00000064 System.Threading.Tasks.Task Grpc.Core.Server::KillAsync()
extern void Server_KillAsync_mD118E11431C4D8118D74D5F3D4C6ED6EC1751B6A (void);
// 0x00000065 System.Threading.Tasks.Task Grpc.Core.Server::ShutdownInternalAsync(System.Boolean)
extern void Server_ShutdownInternalAsync_mE8BDB9B72BDB03F073485A7EC76097A8E5D48DE2 (void);
// 0x00000066 System.Threading.Tasks.Task Grpc.Core.Server::ShutdownCompleteOrEnvironmentDeadAsync()
extern void Server_ShutdownCompleteOrEnvironmentDeadAsync_m3970CF6302C9CE1CAE5E5097B98FF5D40780355F (void);
// 0x00000067 System.Void Grpc.Core.Server::DisposeHandle()
extern void Server_DisposeHandle_m2AB3082BA0C603C8EB9A9934FF4DF91A253BCE54 (void);
// 0x00000068 System.Void Grpc.Core.Server::HandleServerShutdown(System.Boolean,Grpc.Core.Internal.BatchContextSafeHandle,System.Object)
extern void Server_HandleServerShutdown_mC946F002372E65ECADDA36DB7B8ED0D8E16A1A78 (void);
// 0x00000069 System.Void Grpc.Core.Server::.cctor()
extern void Server__cctor_m5BDAB65D10FFF3E73A603200F679FFF5FC140152 (void);
// 0x0000006A System.Void Grpc.Core.Server/<ShutdownInternalAsync>d__32::MoveNext()
extern void U3CShutdownInternalAsyncU3Ed__32_MoveNext_m3D71B112806F5CA33DBAE2030BF722AE3B8E4240 (void);
// 0x0000006B System.Void Grpc.Core.Server/<ShutdownInternalAsync>d__32::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CShutdownInternalAsyncU3Ed__32_SetStateMachine_m36B03032AD3E3F0EDE00BCD0C5F740EAFCAA26CC (void);
// 0x0000006C System.Void Grpc.Core.Server/<ShutdownCompleteOrEnvironmentDeadAsync>d__33::MoveNext()
extern void U3CShutdownCompleteOrEnvironmentDeadAsyncU3Ed__33_MoveNext_mF43F5308C7FAAFDEDFBA68E14C19CFDF45138670 (void);
// 0x0000006D System.Void Grpc.Core.Server/<ShutdownCompleteOrEnvironmentDeadAsync>d__33::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CShutdownCompleteOrEnvironmentDeadAsyncU3Ed__33_SetStateMachine_m74E60AE9F2A615A438543D73C386AC115F601210 (void);
// 0x0000006E System.Threading.Tasks.Task Grpc.Core.Utils.TaskUtils::get_CompletedTask()
extern void TaskUtils_get_CompletedTask_mEBBC43F30501975341E8998FD67E5D962FDB20F3 (void);
// 0x0000006F System.String Grpc.Core.Profiling.ProfilerEntry::ToString()
extern void ProfilerEntry_ToString_m40BACECE2A53CB48A103CB016A457E8942D700B6 (void);
// 0x00000070 System.String Grpc.Core.Profiling.ProfilerEntry::GetTypeAbbreviation(Grpc.Core.Profiling.ProfilerEntry/Type)
extern void ProfilerEntry_GetTypeAbbreviation_mF1750D46EA35AA7690D8D10E9EF374724493287D (void);
// 0x00000071 System.Void Grpc.Core.Profiling.Profilers::SetForCurrentThread(Grpc.Core.Profiling.IProfiler)
extern void Profilers_SetForCurrentThread_m37EE309E6FBA5C79F8AA64584752E801C29A5648 (void);
// 0x00000072 System.Void Grpc.Core.Profiling.Profilers::.cctor()
extern void Profilers__cctor_m1FE9939ED38E885ABFF1E263E7C1B5E27B1F174C (void);
// 0x00000073 System.Void Grpc.Core.Profiling.NopProfiler::.ctor()
extern void NopProfiler__ctor_m7686B16FE703B4F3BD7171F41F22DC0B3E581364 (void);
// 0x00000074 System.Void Grpc.Core.Profiling.BasicProfiler::Dump(System.String)
extern void BasicProfiler_Dump_mB3A5E843EA52468E2249DCF937CE670E29850B84 (void);
// 0x00000075 System.Void Grpc.Core.Profiling.BasicProfiler::Dump(System.IO.TextWriter)
extern void BasicProfiler_Dump_m702441B3AA86B0B9227E627BFABBC2D08CBA64A0 (void);
// 0x00000076 System.Void Grpc.Core.Logging.ConsoleLogger::.ctor()
extern void ConsoleLogger__ctor_m8BCE34B143933954CFD3F8E45454FBFF59DF60B0 (void);
// 0x00000077 System.Void Grpc.Core.Logging.ConsoleLogger::.ctor(System.Type)
extern void ConsoleLogger__ctor_m4042FDE94946274A38241B19DC695F9489C59CC9 (void);
// 0x00000078 Grpc.Core.Logging.ILogger Grpc.Core.Logging.ConsoleLogger::ForType()
// 0x00000079 System.Void Grpc.Core.Logging.ConsoleLogger/<>c::.cctor()
extern void U3CU3Ec__cctor_m5234F59BDFBD0D9FE975D969B4C5D5BF36E4BA31 (void);
// 0x0000007A System.Void Grpc.Core.Logging.ConsoleLogger/<>c::.ctor()
extern void U3CU3Ec__ctor_m214947DA4328AAC14C9D629FC89F19EEB124D698 (void);
// 0x0000007B System.IO.TextWriter Grpc.Core.Logging.ConsoleLogger/<>c::<.ctor>b__1_0()
extern void U3CU3Ec_U3C_ctorU3Eb__1_0_mA197A235E97EC9977D3FA1621F55D5209F59CBB1 (void);
// 0x0000007C Grpc.Core.Logging.ILogger Grpc.Core.Logging.ILogger::ForType()
// 0x0000007D System.Void Grpc.Core.Logging.ILogger::Debug(System.String)
// 0x0000007E System.Void Grpc.Core.Logging.ILogger::Debug(System.String,System.Object[])
// 0x0000007F System.Void Grpc.Core.Logging.ILogger::Info(System.String)
// 0x00000080 System.Void Grpc.Core.Logging.ILogger::Warning(System.String,System.Object[])
// 0x00000081 System.Void Grpc.Core.Logging.ILogger::Error(System.String)
// 0x00000082 System.Void Grpc.Core.Logging.ILogger::Error(System.Exception,System.String)
// 0x00000083 System.Void Grpc.Core.Logging.LogLevelFilterLogger::.ctor(Grpc.Core.Logging.ILogger,Grpc.Core.Logging.LogLevel)
extern void LogLevelFilterLogger__ctor_m3C53076C7C86A11DFC35ACD96CA7E8D8D2D2B16C (void);
// 0x00000084 System.Void Grpc.Core.Logging.LogLevelFilterLogger::.ctor(Grpc.Core.Logging.ILogger,Grpc.Core.Logging.LogLevel,System.Boolean)
extern void LogLevelFilterLogger__ctor_m6CCA8869CF50ED1CE87510CBEE5079757A275797 (void);
// 0x00000085 Grpc.Core.Logging.ILogger Grpc.Core.Logging.LogLevelFilterLogger::ForType()
// 0x00000086 System.Void Grpc.Core.Logging.LogLevelFilterLogger::Debug(System.String)
extern void LogLevelFilterLogger_Debug_mF09E6451849816A1827F1877397564D97A56DCF5 (void);
// 0x00000087 System.Void Grpc.Core.Logging.LogLevelFilterLogger::Debug(System.String,System.Object[])
extern void LogLevelFilterLogger_Debug_mA70134C01CECFE6FB2BA6005BF8987223C0B6A11 (void);
// 0x00000088 System.Void Grpc.Core.Logging.LogLevelFilterLogger::Info(System.String)
extern void LogLevelFilterLogger_Info_m4FCD4DC3309AB20ECE638CAAEC00B68FAA71DE7C (void);
// 0x00000089 System.Void Grpc.Core.Logging.LogLevelFilterLogger::Warning(System.String,System.Object[])
extern void LogLevelFilterLogger_Warning_mFFD3B912E84D21E50E73C26083C7F1765A9BD7FE (void);
// 0x0000008A System.Void Grpc.Core.Logging.LogLevelFilterLogger::Error(System.String)
extern void LogLevelFilterLogger_Error_mFB0ADC935F5DFD1E3F60A142152A142DEE1FEB3B (void);
// 0x0000008B System.Void Grpc.Core.Logging.LogLevelFilterLogger::Error(System.Exception,System.String)
extern void LogLevelFilterLogger_Error_m196A887141D4ED169BF6911BE7970371DBE2A18F (void);
// 0x0000008C Grpc.Core.Logging.LogLevel Grpc.Core.Logging.LogLevelFilterLogger::GetLogLevelFromEnvironment(Grpc.Core.Logging.LogLevel,System.Boolean)
extern void LogLevelFilterLogger_GetLogLevelFromEnvironment_mB53B9E176F0E4E2F42D11F15A27663907587AD0E (void);
// 0x0000008D System.Void Grpc.Core.Logging.TextWriterLogger::.ctor(System.Func`1<System.IO.TextWriter>,System.Type)
extern void TextWriterLogger__ctor_m387C87A1F2E0C6C08F88C6489365A4F7BDDCF054 (void);
// 0x0000008E Grpc.Core.Logging.ILogger Grpc.Core.Logging.TextWriterLogger::ForType()
// 0x0000008F System.Void Grpc.Core.Logging.TextWriterLogger::Debug(System.String)
extern void TextWriterLogger_Debug_m931321DC76B13E5C1759BFC41CCFC1F5C3D01431 (void);
// 0x00000090 System.Void Grpc.Core.Logging.TextWriterLogger::Debug(System.String,System.Object[])
extern void TextWriterLogger_Debug_m15A3DAB43D6198C01419D12130ACC08549DAFAC1 (void);
// 0x00000091 System.Void Grpc.Core.Logging.TextWriterLogger::Info(System.String)
extern void TextWriterLogger_Info_mCB2566AC2ED92F850035E9390104A9ECAF403C2C (void);
// 0x00000092 System.Void Grpc.Core.Logging.TextWriterLogger::Warning(System.String)
extern void TextWriterLogger_Warning_m1EC515F8A9B98C016E0B2B53DECCEB21975DADD1 (void);
// 0x00000093 System.Void Grpc.Core.Logging.TextWriterLogger::Warning(System.String,System.Object[])
extern void TextWriterLogger_Warning_m6BBA7A64DA6A749C53D7707DB000225243137D0F (void);
// 0x00000094 System.Void Grpc.Core.Logging.TextWriterLogger::Error(System.String)
extern void TextWriterLogger_Error_m29281762E5A06FD3EFC34ADD075631BFE4E30B4F (void);
// 0x00000095 System.Void Grpc.Core.Logging.TextWriterLogger::Error(System.Exception,System.String)
extern void TextWriterLogger_Error_mC585D59720A39A77FCD48363C1BA89FF0CCFE5B7 (void);
// 0x00000096 System.Type Grpc.Core.Logging.TextWriterLogger::get_AssociatedType()
extern void TextWriterLogger_get_AssociatedType_m3CEE9218310871D833BC457CA50CCC0927B3EEF2 (void);
// 0x00000097 System.Void Grpc.Core.Logging.TextWriterLogger::Log(System.String,System.String)
extern void TextWriterLogger_Log_mDE6A3A6CFBD58808C10C8E2C3D3DEE90248A0503 (void);
// 0x00000098 System.Void Grpc.Core.Internal.AsyncCall`2::.ctor(Grpc.Core.CallInvocationDetails`2<TRequest,TResponse>)
// 0x00000099 System.Threading.Tasks.Task`1<TResponse> Grpc.Core.Internal.AsyncCall`2::UnaryCallAsync(TRequest)
// 0x0000009A System.Void Grpc.Core.Internal.AsyncCall`2::StartDuplexStreamingCall()
// 0x0000009B System.Threading.Tasks.Task Grpc.Core.Internal.AsyncCall`2::SendMessageAsync(TRequest,Grpc.Core.WriteFlags)
// 0x0000009C System.Threading.Tasks.Task`1<TResponse> Grpc.Core.Internal.AsyncCall`2::ReadMessageAsync()
// 0x0000009D System.Threading.Tasks.Task Grpc.Core.Internal.AsyncCall`2::SendCloseFromClientAsync()
// 0x0000009E System.Threading.Tasks.Task Grpc.Core.Internal.AsyncCall`2::get_StreamingResponseCallFinishedTask()
// 0x0000009F System.Threading.Tasks.Task`1<Grpc.Core.Metadata> Grpc.Core.Internal.AsyncCall`2::get_ResponseHeadersAsync()
// 0x000000A0 Grpc.Core.Status Grpc.Core.Internal.AsyncCall`2::GetStatus()
// 0x000000A1 Grpc.Core.Metadata Grpc.Core.Internal.AsyncCall`2::GetTrailers()
// 0x000000A2 Grpc.Core.CallInvocationDetails`2<TRequest,TResponse> Grpc.Core.Internal.AsyncCall`2::get_Details()
// 0x000000A3 System.Void Grpc.Core.Internal.AsyncCall`2::OnAfterReleaseResourcesLocked()
// 0x000000A4 System.Void Grpc.Core.Internal.AsyncCall`2::OnAfterReleaseResourcesUnlocked()
// 0x000000A5 System.Boolean Grpc.Core.Internal.AsyncCall`2::get_IsClient()
// 0x000000A6 System.Exception Grpc.Core.Internal.AsyncCall`2::GetRpcExceptionClientOnly()
// 0x000000A7 System.Threading.Tasks.Task Grpc.Core.Internal.AsyncCall`2::CheckSendAllowedOrEarlyResult()
// 0x000000A8 System.Threading.Tasks.Task Grpc.Core.Internal.AsyncCall`2::CheckSendPreconditionsClientSide()
// 0x000000A9 System.Void Grpc.Core.Internal.AsyncCall`2::Initialize(Grpc.Core.Internal.CompletionQueueSafeHandle)
// 0x000000AA System.Void Grpc.Core.Internal.AsyncCall`2::OnFailedToStartCallLocked()
// 0x000000AB Grpc.Core.Internal.INativeCall Grpc.Core.Internal.AsyncCall`2::CreateNativeCall(Grpc.Core.Internal.CompletionQueueSafeHandle)
// 0x000000AC System.Void Grpc.Core.Internal.AsyncCall`2::RegisterCancellationCallback()
// 0x000000AD Grpc.Core.WriteFlags Grpc.Core.Internal.AsyncCall`2::GetWriteFlagsForCall()
// 0x000000AE System.Void Grpc.Core.Internal.AsyncCall`2::HandleReceivedResponseHeaders(System.Boolean,Grpc.Core.Metadata)
// 0x000000AF System.Void Grpc.Core.Internal.AsyncCall`2::HandleUnaryResponse(System.Boolean,Grpc.Core.Internal.ClientSideStatus,Grpc.Core.Internal.IBufferReader,Grpc.Core.Metadata)
// 0x000000B0 System.Void Grpc.Core.Internal.AsyncCall`2::HandleFinished(System.Boolean,Grpc.Core.Internal.ClientSideStatus)
// 0x000000B1 Grpc.Core.Internal.IUnaryResponseClientCallback Grpc.Core.Internal.AsyncCall`2::get_UnaryResponseClientCallback()
// 0x000000B2 System.Void Grpc.Core.Internal.AsyncCall`2::Grpc.Core.Internal.IUnaryResponseClientCallback.OnUnaryResponseClient(System.Boolean,Grpc.Core.Internal.ClientSideStatus,Grpc.Core.Internal.IBufferReader,Grpc.Core.Metadata)
// 0x000000B3 Grpc.Core.Internal.IReceivedStatusOnClientCallback Grpc.Core.Internal.AsyncCall`2::get_ReceivedStatusOnClientCallback()
// 0x000000B4 System.Void Grpc.Core.Internal.AsyncCall`2::Grpc.Core.Internal.IReceivedStatusOnClientCallback.OnReceivedStatusOnClient(System.Boolean,Grpc.Core.Internal.ClientSideStatus)
// 0x000000B5 Grpc.Core.Internal.IReceivedResponseHeadersCallback Grpc.Core.Internal.AsyncCall`2::get_ReceivedResponseHeadersCallback()
// 0x000000B6 System.Void Grpc.Core.Internal.AsyncCall`2::Grpc.Core.Internal.IReceivedResponseHeadersCallback.OnReceivedResponseHeaders(System.Boolean,Grpc.Core.Metadata)
// 0x000000B7 System.Void Grpc.Core.Internal.AsyncCall`2::.cctor()
// 0x000000B8 System.Void Grpc.Core.Internal.AsyncCall`2::<OnFailedToStartCallLocked>b__35_0(System.Object)
// 0x000000B9 System.Void Grpc.Core.Internal.AsyncCallBase`2::.ctor(System.Action`2<TWrite,Grpc.Core.SerializationContext>,System.Func`2<Grpc.Core.DeserializationContext,TRead>)
// 0x000000BA System.Void Grpc.Core.Internal.AsyncCallBase`2::Cancel()
// 0x000000BB System.Void Grpc.Core.Internal.AsyncCallBase`2::CancelWithStatus(Grpc.Core.Status)
// 0x000000BC System.Void Grpc.Core.Internal.AsyncCallBase`2::InitializeInternal(Grpc.Core.Internal.INativeCall)
// 0x000000BD System.Threading.Tasks.Task Grpc.Core.Internal.AsyncCallBase`2::SendMessageInternalAsync(TWrite,Grpc.Core.WriteFlags)
// 0x000000BE System.Threading.Tasks.Task`1<TRead> Grpc.Core.Internal.AsyncCallBase`2::ReadMessageInternalAsync()
// 0x000000BF System.Boolean Grpc.Core.Internal.AsyncCallBase`2::ReleaseResourcesIfPossible()
// 0x000000C0 System.Boolean Grpc.Core.Internal.AsyncCallBase`2::get_IsClient()
// 0x000000C1 System.Exception Grpc.Core.Internal.AsyncCallBase`2::GetRpcExceptionClientOnly()
// 0x000000C2 System.Void Grpc.Core.Internal.AsyncCallBase`2::ReleaseResources()
// 0x000000C3 System.Void Grpc.Core.Internal.AsyncCallBase`2::OnAfterReleaseResourcesLocked()
// 0x000000C4 System.Void Grpc.Core.Internal.AsyncCallBase`2::OnAfterReleaseResourcesUnlocked()
// 0x000000C5 System.Threading.Tasks.Task Grpc.Core.Internal.AsyncCallBase`2::CheckSendAllowedOrEarlyResult()
// 0x000000C6 Grpc.Core.Internal.SliceBufferSafeHandle Grpc.Core.Internal.AsyncCallBase`2::UnsafeSerialize(TWrite,Grpc.Core.Internal.DefaultSerializationContext)
// 0x000000C7 System.Exception Grpc.Core.Internal.AsyncCallBase`2::TryDeserialize(Grpc.Core.Internal.IBufferReader,TRead&)
// 0x000000C8 System.Void Grpc.Core.Internal.AsyncCallBase`2::HandleSendFinished(System.Boolean)
// 0x000000C9 System.Void Grpc.Core.Internal.AsyncCallBase`2::HandleReadFinished(System.Boolean,Grpc.Core.Internal.IBufferReader)
// 0x000000CA Grpc.Core.Internal.ISendCompletionCallback Grpc.Core.Internal.AsyncCallBase`2::get_SendCompletionCallback()
// 0x000000CB System.Void Grpc.Core.Internal.AsyncCallBase`2::Grpc.Core.Internal.ISendCompletionCallback.OnSendCompletion(System.Boolean)
// 0x000000CC Grpc.Core.Internal.IReceivedMessageCallback Grpc.Core.Internal.AsyncCallBase`2::get_ReceivedMessageCallback()
// 0x000000CD System.Void Grpc.Core.Internal.AsyncCallBase`2::Grpc.Core.Internal.IReceivedMessageCallback.OnReceivedMessage(System.Boolean,Grpc.Core.Internal.IBufferReader)
// 0x000000CE System.Threading.CancellationTokenRegistration Grpc.Core.Internal.AsyncCallBase`2::RegisterCancellationCallbackForToken(System.Threading.CancellationToken)
// 0x000000CF System.Void Grpc.Core.Internal.AsyncCallBase`2::.cctor()
// 0x000000D0 System.Void Grpc.Core.Internal.AsyncCallBase`2/<>c::.cctor()
// 0x000000D1 System.Void Grpc.Core.Internal.AsyncCallBase`2/<>c::.ctor()
// 0x000000D2 System.Void Grpc.Core.Internal.AsyncCallBase`2/<>c::<.cctor>b__45_0(System.Object)
// 0x000000D3 System.Void Grpc.Core.Internal.AtomicCounter::.ctor(System.Int64)
extern void AtomicCounter__ctor_m899DA3DB6A2057D7627FAF86D7B079B137D2F4E9 (void);
// 0x000000D4 System.Int64 Grpc.Core.Internal.AtomicCounter::Increment()
extern void AtomicCounter_Increment_m6F41592E31E44721BD81770AB629E1D3D214CA6B (void);
// 0x000000D5 System.Void Grpc.Core.Internal.AtomicCounter::IncrementIfNonzero(System.Boolean&)
extern void AtomicCounter_IncrementIfNonzero_m62FECF0DDB5BB9A369632BCBF7433861CA9B2000 (void);
// 0x000000D6 System.Int64 Grpc.Core.Internal.AtomicCounter::Decrement()
extern void AtomicCounter_Decrement_m83EE3FC6B1ED15BDB2A482DD18FAA5E0F34796C0 (void);
// 0x000000D7 System.Int64 Grpc.Core.Internal.AtomicCounter::get_Count()
extern void AtomicCounter_get_Count_m763D2F6548CC25CF272E1C5AF492D51E321A5439 (void);
// 0x000000D8 System.Void Grpc.Core.Internal.AuthContextSafeHandle::.ctor()
extern void AuthContextSafeHandle__ctor_m2D8D2C224E9E6C772666246B22C19E5B8BE17785 (void);
// 0x000000D9 System.Boolean Grpc.Core.Internal.AuthContextSafeHandle::ReleaseHandle()
extern void AuthContextSafeHandle_ReleaseHandle_m16E827D56A2A3A6ACB312F9BAA03B49C1511383B (void);
// 0x000000DA System.Void Grpc.Core.Internal.AuthContextSafeHandle::.cctor()
extern void AuthContextSafeHandle__cctor_m09D00B056BAA7F9868A1FDA8507554F864C1FF1A (void);
// 0x000000DB System.Void Grpc.Core.Internal.IOpCompletionCallback::OnComplete(System.Boolean)
// 0x000000DC System.Nullable`1<System.Int32> Grpc.Core.Internal.IBufferReader::get_TotalLength()
// 0x000000DD System.Boolean Grpc.Core.Internal.IBufferReader::TryGetNextSlice(Grpc.Core.Internal.Slice&)
// 0x000000DE System.Void Grpc.Core.Internal.BatchContextSafeHandle::.ctor()
extern void BatchContextSafeHandle__ctor_m1CEEA7E98BE9F1E5F7F01DC3AE93F8AEF1E49CF0 (void);
// 0x000000DF Grpc.Core.Internal.BatchContextSafeHandle Grpc.Core.Internal.BatchContextSafeHandle::Create()
extern void BatchContextSafeHandle_Create_mDB14FCD05CF9959F38959A15B6C4A2B19A3E360B (void);
// 0x000000E0 System.IntPtr Grpc.Core.Internal.BatchContextSafeHandle::get_Handle()
extern void BatchContextSafeHandle_get_Handle_mCA080F10880D02FD8E4F4A5274D1FFA0D1E38018 (void);
// 0x000000E1 System.Void Grpc.Core.Internal.BatchContextSafeHandle::SetReturnToPoolAction(System.Action`1<Grpc.Core.Internal.BatchContextSafeHandle>)
extern void BatchContextSafeHandle_SetReturnToPoolAction_m4191DA59631EFDBA65313FDB8BBB65534EC40F4D (void);
// 0x000000E2 System.Void Grpc.Core.Internal.BatchContextSafeHandle::SetCompletionCallback(Grpc.Core.Internal.BatchCompletionDelegate,System.Object)
extern void BatchContextSafeHandle_SetCompletionCallback_m3F7B204E3FE1FC55682CA5BCD19B1307CA0E9ADE (void);
// 0x000000E3 Grpc.Core.Metadata Grpc.Core.Internal.BatchContextSafeHandle::GetReceivedInitialMetadata()
extern void BatchContextSafeHandle_GetReceivedInitialMetadata_mFBBE5969DD4013131EF156AA56BE8A0A4F7E93B5 (void);
// 0x000000E4 Grpc.Core.Internal.ClientSideStatus Grpc.Core.Internal.BatchContextSafeHandle::GetReceivedStatusOnClient()
extern void BatchContextSafeHandle_GetReceivedStatusOnClient_m2C77B7F1D605426DEECDA2B5EED088A67A3AC6CB (void);
// 0x000000E5 Grpc.Core.Internal.IBufferReader Grpc.Core.Internal.BatchContextSafeHandle::GetReceivedMessageReader()
extern void BatchContextSafeHandle_GetReceivedMessageReader_m2875A6ADD6542016E55BD0CDF4A4ABF6A6C0E116 (void);
// 0x000000E6 System.Boolean Grpc.Core.Internal.BatchContextSafeHandle::GetReceivedCloseOnServerCancelled()
extern void BatchContextSafeHandle_GetReceivedCloseOnServerCancelled_mFEEB3A039250C90D11892F84808F2038A979A6C2 (void);
// 0x000000E7 System.Void Grpc.Core.Internal.BatchContextSafeHandle::Recycle()
extern void BatchContextSafeHandle_Recycle_m08DAEE3DD8B5868B119B840CC127E90F78D4D9A3 (void);
// 0x000000E8 System.Boolean Grpc.Core.Internal.BatchContextSafeHandle::ReleaseHandle()
extern void BatchContextSafeHandle_ReleaseHandle_m36D7F8687247E1C8EEECA38C8657B420A745EAFA (void);
// 0x000000E9 System.Void Grpc.Core.Internal.BatchContextSafeHandle::Grpc.Core.Internal.IOpCompletionCallback.OnComplete(System.Boolean)
extern void BatchContextSafeHandle_Grpc_Core_Internal_IOpCompletionCallback_OnComplete_m6DE5024256C7AE851D2EAA309552E4B1039936E2 (void);
// 0x000000EA System.Nullable`1<System.Int32> Grpc.Core.Internal.BatchContextSafeHandle::Grpc.Core.Internal.IBufferReader.get_TotalLength()
extern void BatchContextSafeHandle_Grpc_Core_Internal_IBufferReader_get_TotalLength_m9BC6D71C7754914A2F40D768D1C275251B4D8453 (void);
// 0x000000EB System.Boolean Grpc.Core.Internal.BatchContextSafeHandle::Grpc.Core.Internal.IBufferReader.TryGetNextSlice(Grpc.Core.Internal.Slice&)
extern void BatchContextSafeHandle_Grpc_Core_Internal_IBufferReader_TryGetNextSlice_m9F4C2A17193993C329E281840CB30A17B6D730B7 (void);
// 0x000000EC System.Void Grpc.Core.Internal.BatchContextSafeHandle::.cctor()
extern void BatchContextSafeHandle__cctor_m5FA807681C1C9EAA7CC49F60F509E9A1FF5164F4 (void);
// 0x000000ED System.Void Grpc.Core.Internal.BatchContextSafeHandle/CompletionCallbackData::.ctor(Grpc.Core.Internal.BatchCompletionDelegate,System.Object)
extern void CompletionCallbackData__ctor_mDEDA5835544642E03DBE0333E1F9BC464D12D4AB (void);
// 0x000000EE Grpc.Core.Internal.BatchCompletionDelegate Grpc.Core.Internal.BatchContextSafeHandle/CompletionCallbackData::get_Callback()
extern void CompletionCallbackData_get_Callback_m8BEAA82D935AF609E1579D552C4B0B21B1AF6CDA (void);
// 0x000000EF System.Object Grpc.Core.Internal.BatchContextSafeHandle/CompletionCallbackData::get_State()
extern void CompletionCallbackData_get_State_m0D49723D66A0FCA29AF9017EFD68AE644B92D3E0 (void);
// 0x000000F0 System.Void Grpc.Core.Internal.CallCredentialsSafeHandle::.ctor()
extern void CallCredentialsSafeHandle__ctor_m591A73BADB1F1967CFDD63B8BE0697563D11A1C7 (void);
// 0x000000F1 System.Boolean Grpc.Core.Internal.CallCredentialsSafeHandle::ReleaseHandle()
extern void CallCredentialsSafeHandle_ReleaseHandle_m4EEECE7315AE7256BC1EBA24AAC12A9E35525F0B (void);
// 0x000000F2 System.Void Grpc.Core.Internal.CallCredentialsSafeHandle::.cctor()
extern void CallCredentialsSafeHandle__cctor_m72C02EADA53A6FC7AA9F210C4B8BA59C0CF1C833 (void);
// 0x000000F3 System.Void Grpc.Core.Internal.CallErrorExtensions::CheckOk(Grpc.Core.Internal.CallError)
extern void CallErrorExtensions_CheckOk_m4D46605FE7F340B75E59D3FE56E2CBC18FDAABA3 (void);
// 0x000000F4 Grpc.Core.CallOptions Grpc.Core.Internal.CallOptionsExtensions::Normalize(Grpc.Core.CallOptions)
extern void CallOptionsExtensions_Normalize_m769A5ACB692168E9E99D2E3A54E53845213147E8 (void);
// 0x000000F5 System.Void Grpc.Core.Internal.CallSafeHandle::.ctor()
extern void CallSafeHandle__ctor_m0E907F313478B977D53592D360D14BAD97052DAB (void);
// 0x000000F6 System.Void Grpc.Core.Internal.CallSafeHandle::Initialize(Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void CallSafeHandle_Initialize_mA305A33DAE2143E7013BFD60F422E70B22CE1D02 (void);
// 0x000000F7 System.Void Grpc.Core.Internal.CallSafeHandle::SetCredentials(Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void CallSafeHandle_SetCredentials_m2683A2361272437B535FBA56652E37058591C3D7 (void);
// 0x000000F8 System.Void Grpc.Core.Internal.CallSafeHandle::StartUnary(Grpc.Core.Internal.IUnaryResponseClientCallback,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void CallSafeHandle_StartUnary_m5F3223414EF427DD1A8C6B8C36C09AC9E2338DEC (void);
// 0x000000F9 System.Void Grpc.Core.Internal.CallSafeHandle::StartDuplexStreaming(Grpc.Core.Internal.IReceivedStatusOnClientCallback,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void CallSafeHandle_StartDuplexStreaming_mCF77548BDF3F1E390DF3BED16EB13BA325B1EF9B (void);
// 0x000000FA System.Void Grpc.Core.Internal.CallSafeHandle::StartSendMessage(Grpc.Core.Internal.ISendCompletionCallback,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,System.Boolean)
extern void CallSafeHandle_StartSendMessage_mF4B8B9D0F1A410400BA8552122FC0A072785EF28 (void);
// 0x000000FB System.Void Grpc.Core.Internal.CallSafeHandle::StartSendCloseFromClient(Grpc.Core.Internal.ISendCompletionCallback)
extern void CallSafeHandle_StartSendCloseFromClient_m560FBB454DAB92A385742C7888DF1735BC0D258C (void);
// 0x000000FC System.Void Grpc.Core.Internal.CallSafeHandle::StartReceiveMessage(Grpc.Core.Internal.IReceivedMessageCallback)
extern void CallSafeHandle_StartReceiveMessage_m59C69B56F35E7EC9D4137534E4C48D15736BD034 (void);
// 0x000000FD System.Void Grpc.Core.Internal.CallSafeHandle::StartReceiveInitialMetadata(Grpc.Core.Internal.IReceivedResponseHeadersCallback)
extern void CallSafeHandle_StartReceiveInitialMetadata_m4BD1948EF870F6310B1CC2984979E055369B76B6 (void);
// 0x000000FE System.Void Grpc.Core.Internal.CallSafeHandle::Cancel()
extern void CallSafeHandle_Cancel_m5D6E6D3D546BF696E5C45259FD89C745963F3B0B (void);
// 0x000000FF System.Void Grpc.Core.Internal.CallSafeHandle::CancelWithStatus(Grpc.Core.Status)
extern void CallSafeHandle_CancelWithStatus_m24B3C82A40B2C1B3CA76F7DD26F122C91223EAD7 (void);
// 0x00000100 System.Boolean Grpc.Core.Internal.CallSafeHandle::ReleaseHandle()
extern void CallSafeHandle_ReleaseHandle_m658679E8D5C40762DFDCB07FD56C72CB5EE6F902 (void);
// 0x00000101 System.Void Grpc.Core.Internal.CallSafeHandle::.cctor()
extern void CallSafeHandle__cctor_m34E805BDECC57BC1288A417E69CE3902D2DF1229 (void);
// 0x00000102 System.Void Grpc.Core.Internal.CallSafeHandle/<>c::.cctor()
extern void U3CU3Ec__cctor_mB0CFA11D4B98676E4F4EEB1203B66D8E128FD6A6 (void);
// 0x00000103 System.Void Grpc.Core.Internal.CallSafeHandle/<>c::.ctor()
extern void U3CU3Ec__ctor_m577362F6D36A7B1B22371856DC2416B105920ED1 (void);
// 0x00000104 System.Void Grpc.Core.Internal.CallSafeHandle/<>c::<.cctor>b__33_0(System.Boolean,Grpc.Core.Internal.BatchContextSafeHandle,System.Object)
extern void U3CU3Ec_U3C_cctorU3Eb__33_0_m65F7E4C5AAC103E0FAD50966672990143A68A63A (void);
// 0x00000105 System.Void Grpc.Core.Internal.CallSafeHandle/<>c::<.cctor>b__33_1(System.Boolean,Grpc.Core.Internal.BatchContextSafeHandle,System.Object)
extern void U3CU3Ec_U3C_cctorU3Eb__33_1_m3BFA467827498950899F28228FE86A9FF8B0B98C (void);
// 0x00000106 System.Void Grpc.Core.Internal.CallSafeHandle/<>c::<.cctor>b__33_2(System.Boolean,Grpc.Core.Internal.BatchContextSafeHandle,System.Object)
extern void U3CU3Ec_U3C_cctorU3Eb__33_2_mC8109D4D3F8885F23B4609D542B5A2BE3D775789 (void);
// 0x00000107 System.Void Grpc.Core.Internal.CallSafeHandle/<>c::<.cctor>b__33_3(System.Boolean,Grpc.Core.Internal.BatchContextSafeHandle,System.Object)
extern void U3CU3Ec_U3C_cctorU3Eb__33_3_m56DFC89A81EF2EA5D5AA95B0E1D9CF40700C30CD (void);
// 0x00000108 System.Void Grpc.Core.Internal.CallSafeHandle/<>c::<.cctor>b__33_4(System.Boolean,Grpc.Core.Internal.BatchContextSafeHandle,System.Object)
extern void U3CU3Ec_U3C_cctorU3Eb__33_4_m44C65858173E3070B586EBE8B0AA99CA4DC3D660 (void);
// 0x00000109 System.Void Grpc.Core.Internal.CallSafeHandle/<>c::<.cctor>b__33_5(System.Boolean,Grpc.Core.Internal.BatchContextSafeHandle,System.Object)
extern void U3CU3Ec_U3C_cctorU3Eb__33_5_m7D6EC471C1CF1465B1E2935CB1280635F58A7AE1 (void);
// 0x0000010A System.Void Grpc.Core.Internal.CallSafeHandle/<>c::<.cctor>b__33_6(System.Boolean,Grpc.Core.Internal.BatchContextSafeHandle,System.Object)
extern void U3CU3Ec_U3C_cctorU3Eb__33_6_m7B40E8A289E5D0CBC5DF2F5251AFA9EAC95E80A7 (void);
// 0x0000010B System.Void Grpc.Core.Internal.ChannelArgsSafeHandle::.ctor()
extern void ChannelArgsSafeHandle__ctor_mA5A0EB5286F085A929743233FC33C7AAF4552EF0 (void);
// 0x0000010C Grpc.Core.Internal.ChannelArgsSafeHandle Grpc.Core.Internal.ChannelArgsSafeHandle::CreateNull()
extern void ChannelArgsSafeHandle_CreateNull_m9A844DCD5E15BD22E2FC35C32B23713DB8623BCB (void);
// 0x0000010D Grpc.Core.Internal.ChannelArgsSafeHandle Grpc.Core.Internal.ChannelArgsSafeHandle::Create(System.Int32)
extern void ChannelArgsSafeHandle_Create_m0320795366FD44E2DA13B3133378D06F477D566D (void);
// 0x0000010E System.Void Grpc.Core.Internal.ChannelArgsSafeHandle::SetString(System.Int32,System.String,System.String)
extern void ChannelArgsSafeHandle_SetString_m2E9180CC79FF543B9474F1409D0EFAE4AB6B2C9B (void);
// 0x0000010F System.Void Grpc.Core.Internal.ChannelArgsSafeHandle::SetInteger(System.Int32,System.String,System.Int32)
extern void ChannelArgsSafeHandle_SetInteger_mFADD21C753FB6CB530A9D7B3D3B087A5438CD03C (void);
// 0x00000110 System.Boolean Grpc.Core.Internal.ChannelArgsSafeHandle::ReleaseHandle()
extern void ChannelArgsSafeHandle_ReleaseHandle_m1B362E34456896774713B56AF2BDD51A80EABF1D (void);
// 0x00000111 System.Void Grpc.Core.Internal.ChannelArgsSafeHandle::.cctor()
extern void ChannelArgsSafeHandle__cctor_m33C5EE1F0E11C57CE741079AA0F7BC83EACCBAC7 (void);
// 0x00000112 System.Void Grpc.Core.Internal.ChannelCredentialsSafeHandle::.ctor()
extern void ChannelCredentialsSafeHandle__ctor_m59C996E776B92EB6FE90386B665CAE8CE5A4F7B7 (void);
// 0x00000113 Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.ChannelCredentialsSafeHandle::CreateSslCredentials(System.String,Grpc.Core.KeyCertificatePair,System.IntPtr)
extern void ChannelCredentialsSafeHandle_CreateSslCredentials_m72A76E7D08E5C039AED303B4755A60D874273900 (void);
// 0x00000114 System.Boolean Grpc.Core.Internal.ChannelCredentialsSafeHandle::ReleaseHandle()
extern void ChannelCredentialsSafeHandle_ReleaseHandle_m4CCECBA376E8578E52D96F3EDEA5E0B3D7C62497 (void);
// 0x00000115 System.Void Grpc.Core.Internal.ChannelCredentialsSafeHandle::.cctor()
extern void ChannelCredentialsSafeHandle__cctor_m97EF840058AEBFAB43903E0A9696AF2E431E17E1 (void);
// 0x00000116 System.Void Grpc.Core.Internal.ChannelSafeHandle::.ctor()
extern void ChannelSafeHandle__ctor_mC07F001F6C720A93E6289835E3BD548A2F19C5A6 (void);
// 0x00000117 Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.ChannelSafeHandle::CreateInsecure(System.String,Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void ChannelSafeHandle_CreateInsecure_m977DFC30F0C67BA8B7DC192B1A9BDD61612C3EFF (void);
// 0x00000118 Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.ChannelSafeHandle::CreateSecure(Grpc.Core.Internal.ChannelCredentialsSafeHandle,System.String,Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void ChannelSafeHandle_CreateSecure_mAD61FFE699A4553B3A5CE09A53C1BA90D934ADDF (void);
// 0x00000119 Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.ChannelSafeHandle::CreateCall(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.ContextPropagationFlags,Grpc.Core.Internal.CompletionQueueSafeHandle,System.String,System.String,Grpc.Core.Internal.Timespec,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void ChannelSafeHandle_CreateCall_m9413AA78C30511C4CD523B1A9BBEA3B02206AD9D (void);
// 0x0000011A Grpc.Core.ChannelState Grpc.Core.Internal.ChannelSafeHandle::CheckConnectivityState(System.Boolean)
extern void ChannelSafeHandle_CheckConnectivityState_m219F3FDADC2ED7D2F0EB0605D81C88F3922434CE (void);
// 0x0000011B System.Void Grpc.Core.Internal.ChannelSafeHandle::WatchConnectivityState(Grpc.Core.ChannelState,Grpc.Core.Internal.Timespec,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.BatchCompletionDelegate,System.Object)
extern void ChannelSafeHandle_WatchConnectivityState_m726098C6C0575C1DD22D0E3FF1644FD33F09B457 (void);
// 0x0000011C System.Boolean Grpc.Core.Internal.ChannelSafeHandle::ReleaseHandle()
extern void ChannelSafeHandle_ReleaseHandle_mBFDA4687B3486A413A61FB4041EA3D804E7DA04B (void);
// 0x0000011D System.Void Grpc.Core.Internal.ChannelSafeHandle::.cctor()
extern void ChannelSafeHandle__cctor_m37F2462405A4A7643A412BD286BD3C9E5B1DAF6B (void);
// 0x0000011E System.Void Grpc.Core.Internal.ClientRequestStream`2::.ctor(Grpc.Core.Internal.AsyncCall`2<TRequest,TResponse>)
// 0x0000011F System.Threading.Tasks.Task Grpc.Core.Internal.ClientRequestStream`2::WriteAsync(TRequest)
// 0x00000120 System.Threading.Tasks.Task Grpc.Core.Internal.ClientRequestStream`2::CompleteAsync()
// 0x00000121 Grpc.Core.WriteOptions Grpc.Core.Internal.ClientRequestStream`2::get_WriteOptions()
// 0x00000122 System.Void Grpc.Core.Internal.ClientRequestStream`2::set_WriteOptions(Grpc.Core.WriteOptions)
// 0x00000123 Grpc.Core.WriteFlags Grpc.Core.Internal.ClientRequestStream`2::GetWriteFlags()
// 0x00000124 System.Void Grpc.Core.Internal.ClientResponseStream`2::.ctor(Grpc.Core.Internal.AsyncCall`2<TRequest,TResponse>)
// 0x00000125 TResponse Grpc.Core.Internal.ClientResponseStream`2::get_Current()
// 0x00000126 System.Threading.Tasks.Task`1<System.Boolean> Grpc.Core.Internal.ClientResponseStream`2::MoveNext(System.Threading.CancellationToken)
// 0x00000127 System.Void Grpc.Core.Internal.ClientResponseStream`2/<MoveNext>d__5::MoveNext()
// 0x00000128 System.Void Grpc.Core.Internal.ClientResponseStream`2/<MoveNext>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
// 0x00000129 System.Void Grpc.Core.Internal.ClientSideStatus::.ctor(Grpc.Core.Status,Grpc.Core.Metadata)
extern void ClientSideStatus__ctor_m849DF772B079F4260387AF0B0C0E636AB5425443 (void);
// 0x0000012A Grpc.Core.Status Grpc.Core.Internal.ClientSideStatus::get_Status()
extern void ClientSideStatus_get_Status_m300C369282422D75747F095D9E30A54853C68CB7 (void);
// 0x0000012B Grpc.Core.Metadata Grpc.Core.Internal.ClientSideStatus::get_Trailers()
extern void ClientSideStatus_get_Trailers_m463422D2B5DB7F66D0DA3E0675C06008F8137C2A (void);
// 0x0000012C System.Void Grpc.Core.Internal.CompletionQueueEvent::.cctor()
extern void CompletionQueueEvent__cctor_m949F3A5D661B8FB98E45952AFD3DEF9EA48530F6 (void);
// 0x0000012D System.Void Grpc.Core.Internal.CompletionQueueSafeHandle::.ctor()
extern void CompletionQueueSafeHandle__ctor_m4F7B10648A4F2323D0AF95A03C281269B07A62FB (void);
// 0x0000012E Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Internal.CompletionQueueSafeHandle::CreateAsync(Grpc.Core.Internal.CompletionRegistry)
extern void CompletionQueueSafeHandle_CreateAsync_mDF1A9A5F8F3B2C44D858049BB1414FCAF4D1BAA3 (void);
// 0x0000012F Grpc.Core.Internal.CompletionQueueEvent Grpc.Core.Internal.CompletionQueueSafeHandle::Next()
extern void CompletionQueueSafeHandle_Next_mC8A45C82694A6321284BFC098BC5B45274306A7F (void);
// 0x00000130 Grpc.Core.Internal.CompletionQueueSafeHandle/UsageScope Grpc.Core.Internal.CompletionQueueSafeHandle::NewScope()
extern void CompletionQueueSafeHandle_NewScope_m8C215EE2433BD6504C6E224BA6EAFFF6B89F074A (void);
// 0x00000131 System.Void Grpc.Core.Internal.CompletionQueueSafeHandle::Shutdown()
extern void CompletionQueueSafeHandle_Shutdown_mA7FE8B7EA3DEEF2478A637A29E0F695F53F8C323 (void);
// 0x00000132 Grpc.Core.Internal.CompletionRegistry Grpc.Core.Internal.CompletionQueueSafeHandle::get_CompletionRegistry()
extern void CompletionQueueSafeHandle_get_CompletionRegistry_m77D85C79D4910589679C0E2209FED34B1676507A (void);
// 0x00000133 System.Boolean Grpc.Core.Internal.CompletionQueueSafeHandle::ReleaseHandle()
extern void CompletionQueueSafeHandle_ReleaseHandle_m3D7A292C54E70E9CCD98CBB8DDEC96297A3E170A (void);
// 0x00000134 System.Void Grpc.Core.Internal.CompletionQueueSafeHandle::DecrementShutdownRefcount()
extern void CompletionQueueSafeHandle_DecrementShutdownRefcount_mEF9151E2A3E44F1E6BDEBE018F86318454C16BA6 (void);
// 0x00000135 System.Void Grpc.Core.Internal.CompletionQueueSafeHandle::BeginOp()
extern void CompletionQueueSafeHandle_BeginOp_mA401593C4C527548BCDE3293E068CD092FEAC3F2 (void);
// 0x00000136 System.Void Grpc.Core.Internal.CompletionQueueSafeHandle::EndOp()
extern void CompletionQueueSafeHandle_EndOp_m2EAE6C0D627DE6D1328F0F474B68AE0EE38F6B7C (void);
// 0x00000137 System.Void Grpc.Core.Internal.CompletionQueueSafeHandle::.cctor()
extern void CompletionQueueSafeHandle__cctor_m7EC4635BF25584A90BB4184D8C280D33CCBEF0CA (void);
// 0x00000138 System.Void Grpc.Core.Internal.CompletionQueueSafeHandle/UsageScope::.ctor(Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void UsageScope__ctor_mFF892F95AB7C2EB545ABC97B2ED5F046501730C8 (void);
// 0x00000139 System.Void Grpc.Core.Internal.CompletionQueueSafeHandle/UsageScope::Dispose()
extern void UsageScope_Dispose_mEDC6812562D58593CE8E005C67CFE18FB07F808B (void);
// 0x0000013A System.Void Grpc.Core.Internal.BatchCompletionDelegate::.ctor(System.Object,System.IntPtr)
extern void BatchCompletionDelegate__ctor_mAB84A6D972D4BF49E834E40E25C98C7D352280D7 (void);
// 0x0000013B System.Void Grpc.Core.Internal.BatchCompletionDelegate::Invoke(System.Boolean,Grpc.Core.Internal.BatchContextSafeHandle,System.Object)
extern void BatchCompletionDelegate_Invoke_mCEE91B8B0EABB7CE93387E98D70F00C251313D76 (void);
// 0x0000013C System.IAsyncResult Grpc.Core.Internal.BatchCompletionDelegate::BeginInvoke(System.Boolean,Grpc.Core.Internal.BatchContextSafeHandle,System.Object,System.AsyncCallback,System.Object)
extern void BatchCompletionDelegate_BeginInvoke_mE6388861950E73B6A0C2B22743E60682AB964AD1 (void);
// 0x0000013D System.Void Grpc.Core.Internal.BatchCompletionDelegate::EndInvoke(System.IAsyncResult)
extern void BatchCompletionDelegate_EndInvoke_m392299AAC3E99B4BDE25BF96BF4B264DF6501707 (void);
// 0x0000013E System.Void Grpc.Core.Internal.RequestCallCompletionDelegate::.ctor(System.Object,System.IntPtr)
extern void RequestCallCompletionDelegate__ctor_mFFCFDCBB6AFD953E308ADCE20AF353D3A7A3951A (void);
// 0x0000013F System.Void Grpc.Core.Internal.RequestCallCompletionDelegate::Invoke(System.Boolean,Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void RequestCallCompletionDelegate_Invoke_m581178ED16CF35358FA3B664568F9C126D7A1C9E (void);
// 0x00000140 System.IAsyncResult Grpc.Core.Internal.RequestCallCompletionDelegate::BeginInvoke(System.Boolean,Grpc.Core.Internal.RequestCallContextSafeHandle,System.AsyncCallback,System.Object)
extern void RequestCallCompletionDelegate_BeginInvoke_m6ABF571944D131405874C92F5F4CBF7B10C2511B (void);
// 0x00000141 System.Void Grpc.Core.Internal.RequestCallCompletionDelegate::EndInvoke(System.IAsyncResult)
extern void RequestCallCompletionDelegate_EndInvoke_m23358BC8EF6CEF1BB658851659921FFA28EC2BD1 (void);
// 0x00000142 System.Void Grpc.Core.Internal.CompletionRegistry::.ctor(Grpc.Core.GrpcEnvironment,System.Func`1<Grpc.Core.Internal.BatchContextSafeHandle>,System.Func`1<Grpc.Core.Internal.RequestCallContextSafeHandle>)
extern void CompletionRegistry__ctor_mA4DC907E4EB77AFCB507E9951611384548FE1A09 (void);
// 0x00000143 System.Void Grpc.Core.Internal.CompletionRegistry::Register(System.IntPtr,Grpc.Core.Internal.IOpCompletionCallback)
extern void CompletionRegistry_Register_m2AADAF9DD3F7A8618BE566861AFC9AF2CA940F65 (void);
// 0x00000144 Grpc.Core.Internal.BatchContextSafeHandle Grpc.Core.Internal.CompletionRegistry::RegisterBatchCompletion(Grpc.Core.Internal.BatchCompletionDelegate,System.Object)
extern void CompletionRegistry_RegisterBatchCompletion_mD8059CCD16C51808330C3372839EAEDAF12B8FCC (void);
// 0x00000145 Grpc.Core.Internal.IOpCompletionCallback Grpc.Core.Internal.CompletionRegistry::Extract(System.IntPtr)
extern void CompletionRegistry_Extract_mDC482ECF624CDED75CC95AFFC6EFA8E2B1D6E35D (void);
// 0x00000146 System.Void Grpc.Core.Internal.CompletionRegistry::.cctor()
extern void CompletionRegistry__cctor_m35F2B7474749E7D9D3DB7CD103AA50A50B937028 (void);
// 0x00000147 System.Boolean Grpc.Core.Internal.CompletionRegistry/IntPtrComparer::Equals(System.IntPtr,System.IntPtr)
extern void IntPtrComparer_Equals_m2081544A067C1639017057A90B44C680877E87FC (void);
// 0x00000148 System.Int32 Grpc.Core.Internal.CompletionRegistry/IntPtrComparer::GetHashCode(System.IntPtr)
extern void IntPtrComparer_GetHashCode_mA80D0E0FE2F4DA84B42B067C433C18E6978FF36D (void);
// 0x00000149 System.Void Grpc.Core.Internal.CompletionRegistry/IntPtrComparer::.ctor()
extern void IntPtrComparer__ctor_mEFE354CE2E5E21738E7508359149862EE624CFAC (void);
// 0x0000014A Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.ContextPropagationTokenImpl::get_ParentCall()
extern void ContextPropagationTokenImpl_get_ParentCall_m1F3BCA4F0532C81BDF80DB82AEB35AAA53A27C3C (void);
// 0x0000014B System.DateTime Grpc.Core.Internal.ContextPropagationTokenImpl::get_ParentDeadline()
extern void ContextPropagationTokenImpl_get_ParentDeadline_m683EE78CCFBC9200B3C9E8A494E9B29467580832 (void);
// 0x0000014C System.Threading.CancellationToken Grpc.Core.Internal.ContextPropagationTokenImpl::get_ParentCancellationToken()
extern void ContextPropagationTokenImpl_get_ParentCancellationToken_mB7CE065B76E2BFDC92373BFB90D37BE51F0A867D (void);
// 0x0000014D Grpc.Core.ContextPropagationOptions Grpc.Core.Internal.ContextPropagationTokenImpl::get_Options()
extern void ContextPropagationTokenImpl_get_Options_m3043ABDD946F76592A3EF97181DBDA5CC5A4E00F (void);
// 0x0000014E Grpc.Core.Internal.ContextPropagationTokenImpl Grpc.Core.Internal.ContextPropagationTokenExtensions::AsImplOrNull(Grpc.Core.ContextPropagationToken)
extern void ContextPropagationTokenExtensions_AsImplOrNull_m0E88A3D941293A4AD2022ADD9894F090E1E26FC5 (void);
// 0x0000014F System.Void Grpc.Core.Internal.CoreErrorDetailException::.ctor(System.String)
extern void CoreErrorDetailException__ctor_m2C30AC8CA9F5B3C60EFA97C0C9D432A0694CBF2F (void);
// 0x00000150 System.Void Grpc.Core.Internal.CStringSafeHandle::.ctor()
extern void CStringSafeHandle__ctor_m2C5B798EB037C917784EC8F52D566C0FB4D4A998 (void);
// 0x00000151 System.Boolean Grpc.Core.Internal.CStringSafeHandle::ReleaseHandle()
extern void CStringSafeHandle_ReleaseHandle_m1C1943A25E1F2D39054A6F5FB10D886AB122F26A (void);
// 0x00000152 System.Void Grpc.Core.Internal.CStringSafeHandle::.cctor()
extern void CStringSafeHandle__cctor_mC7E463E4C48A32ADC2DC283EC2C65BC03098144E (void);
// 0x00000153 System.Void Grpc.Core.Internal.DebugStats::CheckOK()
extern void DebugStats_CheckOK_m4697122E9A84B07E02DC088DE64701974C4D1B16 (void);
// 0x00000154 System.Void Grpc.Core.Internal.DebugStats::DebugWarning(System.String)
extern void DebugStats_DebugWarning_m4E96D3DF612299D52D421DBEE7FF8D24E18BD4DF (void);
// 0x00000155 System.Void Grpc.Core.Internal.DebugStats::.ctor()
extern void DebugStats__ctor_m5FB2276008B73A205423B60B796AEEDB677F3B07 (void);
// 0x00000156 Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.DefaultCallCredentialsConfigurator::get_NativeCredentials()
extern void DefaultCallCredentialsConfigurator_get_NativeCredentials_m9157F86B22D0513DA5A3161B665ED4919C464124 (void);
// 0x00000157 System.Void Grpc.Core.Internal.DefaultCallCredentialsConfigurator::.ctor()
extern void DefaultCallCredentialsConfigurator__ctor_m8F136F6BA1A44F2D22837BFCEFD5166AFA8154D4 (void);
// 0x00000158 Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.CallCredentialsExtensions::ToNativeCredentials(Grpc.Core.CallCredentials)
extern void CallCredentialsExtensions_ToNativeCredentials_m07EFFA3FEED8D6425D2411CF48BE1ED4E36B6B74 (void);
// 0x00000159 Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.DefaultChannelCredentialsConfigurator::get_NativeCredentials()
extern void DefaultChannelCredentialsConfigurator_get_NativeCredentials_m86D7CDB874C81B4173884587CEE062F809B3A4AC (void);
// 0x0000015A System.Void Grpc.Core.Internal.DefaultChannelCredentialsConfigurator::SetInsecureCredentials(System.Object)
extern void DefaultChannelCredentialsConfigurator_SetInsecureCredentials_mF32951508CD3DE0D7C66947B134D4281E08489E5 (void);
// 0x0000015B System.Void Grpc.Core.Internal.DefaultChannelCredentialsConfigurator::SetSslCredentials(System.Object,System.String,Grpc.Core.KeyCertificatePair,Grpc.Core.VerifyPeerCallback)
extern void DefaultChannelCredentialsConfigurator_SetSslCredentials_m9FE81FEB1841E996FE2887B57669491227992323 (void);
// 0x0000015C Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.DefaultChannelCredentialsConfigurator::CreateNativeSslCredentials(System.String,Grpc.Core.KeyCertificatePair,Grpc.Core.VerifyPeerCallback)
extern void DefaultChannelCredentialsConfigurator_CreateNativeSslCredentials_m77B26EB81DA3C97F56ECCCD5A79212F508776117 (void);
// 0x0000015D Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.DefaultChannelCredentialsConfigurator::GetOrCreateNativeCredentials(Grpc.Core.ChannelCredentials,System.Func`1<Grpc.Core.Internal.ChannelCredentialsSafeHandle>)
extern void DefaultChannelCredentialsConfigurator_GetOrCreateNativeCredentials_m7ADD8C742AE00B841970F8CAC7F60A0E8A81224E (void);
// 0x0000015E System.Void Grpc.Core.Internal.DefaultChannelCredentialsConfigurator::.ctor()
extern void DefaultChannelCredentialsConfigurator__ctor_m922643708080AC258DFEC98D053A112E693F8EE4 (void);
// 0x0000015F System.Void Grpc.Core.Internal.DefaultChannelCredentialsConfigurator::.cctor()
extern void DefaultChannelCredentialsConfigurator__cctor_m289022E7C246E7E18E479D25313292921EAE392F (void);
// 0x00000160 System.Void Grpc.Core.Internal.DefaultChannelCredentialsConfigurator/VerifyPeerCallbackRegistration::.ctor(Grpc.Core.VerifyPeerCallback)
extern void VerifyPeerCallbackRegistration__ctor_m8FFBE9C191362F39761F3B23E8D0DBBF0B37F42E (void);
// 0x00000161 Grpc.Core.Internal.NativeCallbackRegistration Grpc.Core.Internal.DefaultChannelCredentialsConfigurator/VerifyPeerCallbackRegistration::get_CallbackRegistration()
extern void VerifyPeerCallbackRegistration_get_CallbackRegistration_m64D59076FDDD1B8862A9E884E868E4AEDF34F139 (void);
// 0x00000162 System.Int32 Grpc.Core.Internal.DefaultChannelCredentialsConfigurator/VerifyPeerCallbackRegistration::HandleUniversalCallback(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern void VerifyPeerCallbackRegistration_HandleUniversalCallback_mF2710F9419451DB553DCF68576ED336D5CBC3EBC (void);
// 0x00000163 System.Int32 Grpc.Core.Internal.DefaultChannelCredentialsConfigurator/VerifyPeerCallbackRegistration::VerifyPeerCallbackHandler(System.IntPtr,System.IntPtr,System.Boolean)
extern void VerifyPeerCallbackRegistration_VerifyPeerCallbackHandler_m68B61C6B15818007DD124FAB886B86A0B31F3A0F (void);
// 0x00000164 System.Void Grpc.Core.Internal.DefaultChannelCredentialsConfigurator/<>c__DisplayClass8_0::.ctor()
extern void U3CU3Ec__DisplayClass8_0__ctor_m751992C637B4054153D7492BB909474CC7B55D26 (void);
// 0x00000165 Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.DefaultChannelCredentialsConfigurator/<>c__DisplayClass8_0::<SetSslCredentials>b__0()
extern void U3CU3Ec__DisplayClass8_0_U3CSetSslCredentialsU3Eb__0_mA3EC34945D9BF79706313315DD50E759D9B77E0D (void);
// 0x00000166 Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.ChannelCredentialsExtensions::ToNativeCredentials(Grpc.Core.ChannelCredentials)
extern void ChannelCredentialsExtensions_ToNativeCredentials_m6612F17367CD0434E9FE125E97191C11A306E264 (void);
// 0x00000167 System.Void Grpc.Core.Internal.DefaultDeserializationContext::.ctor()
extern void DefaultDeserializationContext__ctor_m0CD596A673D3867167506721F31DEAA71C8CF7E8 (void);
// 0x00000168 System.Byte[] Grpc.Core.Internal.DefaultDeserializationContext::PayloadAsNewBuffer()
extern void DefaultDeserializationContext_PayloadAsNewBuffer_m83191F6B9F23FA0D4D3C4A741942B258BBB03E06 (void);
// 0x00000169 System.Buffers.ReadOnlySequence`1<System.Byte> Grpc.Core.Internal.DefaultDeserializationContext::PayloadAsReadOnlySequence()
extern void DefaultDeserializationContext_PayloadAsReadOnlySequence_mD252A37B608F5FCC9AB97C3C1F4182B13005E084 (void);
// 0x0000016A System.Void Grpc.Core.Internal.DefaultDeserializationContext::Initialize(Grpc.Core.Internal.IBufferReader)
extern void DefaultDeserializationContext_Initialize_m955B140957314F913D152F55A8BBC353A634B57D (void);
// 0x0000016B System.Void Grpc.Core.Internal.DefaultDeserializationContext::Reset()
extern void DefaultDeserializationContext_Reset_m62BA126BB72087A99459AD271BCAA79687DD22E4 (void);
// 0x0000016C Grpc.Core.Internal.DefaultDeserializationContext Grpc.Core.Internal.DefaultDeserializationContext::GetInitializedThreadLocal(Grpc.Core.Internal.IBufferReader)
extern void DefaultDeserializationContext_GetInitializedThreadLocal_mC775B0F02154AB1885CEED90984F4A08626940D2 (void);
// 0x0000016D System.Void Grpc.Core.Internal.DefaultDeserializationContext::.cctor()
extern void DefaultDeserializationContext__cctor_m760A9F80E29F25C744CD8BF269E6E927934F30C0 (void);
// 0x0000016E System.Void Grpc.Core.Internal.DefaultDeserializationContext/<>c::.cctor()
extern void U3CU3Ec__cctor_mE8F6BF068D611F3266D0D3BA9759952E51B23C9A (void);
// 0x0000016F System.Void Grpc.Core.Internal.DefaultDeserializationContext/<>c::.ctor()
extern void U3CU3Ec__ctor_mD7F90C6DFCAC2E22542CCB0BDAA093355765A564 (void);
// 0x00000170 Grpc.Core.Internal.DefaultDeserializationContext Grpc.Core.Internal.DefaultDeserializationContext/<>c::<.cctor>b__12_0()
extern void U3CU3Ec_U3C_cctorU3Eb__12_0_m133647FE47FD519B350DBB0AB517FCF1D164A664 (void);
// 0x00000171 System.Void Grpc.Core.Internal.DefaultObjectPool`1::.ctor(System.Func`1<T>,System.Int32,System.Int32)
// 0x00000172 T Grpc.Core.Internal.DefaultObjectPool`1::Lease()
// 0x00000173 T Grpc.Core.Internal.DefaultObjectPool`1::LeaseInternal()
// 0x00000174 System.Void Grpc.Core.Internal.DefaultObjectPool`1::Return(T)
// 0x00000175 System.Void Grpc.Core.Internal.DefaultObjectPool`1::Dispose()
// 0x00000176 System.Void Grpc.Core.Internal.DefaultObjectPool`1/ThreadLocalData::.ctor(System.Int32)
// 0x00000177 System.Collections.Generic.Queue`1<T> Grpc.Core.Internal.DefaultObjectPool`1/ThreadLocalData::get_Queue()
// 0x00000178 System.Int32 Grpc.Core.Internal.DefaultObjectPool`1/ThreadLocalData::get_CreateBudget()
// 0x00000179 System.Void Grpc.Core.Internal.DefaultObjectPool`1/ThreadLocalData::set_CreateBudget(System.Int32)
// 0x0000017A System.Int32 Grpc.Core.Internal.DefaultObjectPool`1/ThreadLocalData::get_DisposeBudget()
// 0x0000017B System.Void Grpc.Core.Internal.DefaultObjectPool`1/ThreadLocalData::set_DisposeBudget(System.Int32)
// 0x0000017C System.Void Grpc.Core.Internal.DefaultObjectPool`1/<>c__DisplayClass9_0::.ctor()
// 0x0000017D Grpc.Core.Internal.DefaultObjectPool`1/ThreadLocalData<T> Grpc.Core.Internal.DefaultObjectPool`1/<>c__DisplayClass9_0::<.ctor>b__0()
// 0x0000017E System.Void Grpc.Core.Internal.DefaultSerializationContext::.ctor()
extern void DefaultSerializationContext__ctor_m1959AC7BCB0FA0A4DD3B6F1BACB6AEE414083588 (void);
// 0x0000017F System.Void Grpc.Core.Internal.DefaultSerializationContext::Complete(System.Byte[])
extern void DefaultSerializationContext_Complete_mFA3C2520C9006B92DCB326259FC0DB2A6A1BD9F9 (void);
// 0x00000180 Grpc.Core.Internal.SliceBufferSafeHandle Grpc.Core.Internal.DefaultSerializationContext::GetPayload()
extern void DefaultSerializationContext_GetPayload_m7F4D36B7E7463D34D9DFA0811064D90E4EA6159E (void);
// 0x00000181 System.Void Grpc.Core.Internal.DefaultSerializationContext::Reset()
extern void DefaultSerializationContext_Reset_m25603FDB8A63165307713E1F49636723DD61D015 (void);
// 0x00000182 Grpc.Core.Internal.DefaultSerializationContext/UsageScope Grpc.Core.Internal.DefaultSerializationContext::GetInitializedThreadLocalScope()
extern void DefaultSerializationContext_GetInitializedThreadLocalScope_m861F879357452804EA6A45A259637861BAEF375B (void);
// 0x00000183 System.Void Grpc.Core.Internal.DefaultSerializationContext::.cctor()
extern void DefaultSerializationContext__cctor_m38F2E48A70FF4391CCD58FBEC6E43BD114958E60 (void);
// 0x00000184 System.Void Grpc.Core.Internal.DefaultSerializationContext/UsageScope::.ctor(Grpc.Core.Internal.DefaultSerializationContext)
extern void UsageScope__ctor_mACF41298CA2D040B144BD965792D9EFCAFA2DE1B (void);
// 0x00000185 Grpc.Core.Internal.DefaultSerializationContext Grpc.Core.Internal.DefaultSerializationContext/UsageScope::get_Context()
extern void UsageScope_get_Context_m4E26FE14B53773EA9CAAFC4A74F41F2D596203B7 (void);
// 0x00000186 System.Void Grpc.Core.Internal.DefaultSerializationContext/UsageScope::Dispose()
extern void UsageScope_Dispose_mB2430F1CD4D3D052C75DA41B58CE46A15177CD75 (void);
// 0x00000187 System.Void Grpc.Core.Internal.DefaultSerializationContext/<>c::.cctor()
extern void U3CU3Ec__cctor_m08207ED1D51852BDE105931AD2B82BB4CD4582E9 (void);
// 0x00000188 System.Void Grpc.Core.Internal.DefaultSerializationContext/<>c::.ctor()
extern void U3CU3Ec__ctor_m27354A6E6CB8E607FC3F42481DDB1B044C6771F2 (void);
// 0x00000189 Grpc.Core.Internal.DefaultSerializationContext Grpc.Core.Internal.DefaultSerializationContext/<>c::<.cctor>b__12_0()
extern void U3CU3Ec_U3C_cctorU3Eb__12_0_m2C22DA47BAABF64A18F8716EC2A43D8B2581DDD9 (void);
// 0x0000018A System.Void Grpc.Core.Internal.DefaultSslRootsOverride::Override(Grpc.Core.Internal.NativeMethods)
extern void DefaultSslRootsOverride_Override_m82277B22D2A42292915E519B9F1F07A746ED9239 (void);
// 0x0000018B System.Void Grpc.Core.Internal.DefaultSslRootsOverride::.cctor()
extern void DefaultSslRootsOverride__cctor_m380D0FD0AB9D866754A60004000F431F4B70BF82 (void);
// 0x0000018C System.Void Grpc.Core.Internal.GrpcThreadPool::.ctor(Grpc.Core.GrpcEnvironment,System.Int32,System.Int32,System.Boolean)
extern void GrpcThreadPool__ctor_mC53554F9C9BD47C5A957D471C35AD800757FFDDD (void);
// 0x0000018D System.Void Grpc.Core.Internal.GrpcThreadPool::Start()
extern void GrpcThreadPool_Start_mD2D33D4722306E7DB950790E7EC5C1469B9421B1 (void);
// 0x0000018E System.Threading.Tasks.Task Grpc.Core.Internal.GrpcThreadPool::StopAsync()
extern void GrpcThreadPool_StopAsync_m4D0D7BE88CBD78E94F4BB027A9A8269ED6A582CC (void);
// 0x0000018F System.Boolean Grpc.Core.Internal.GrpcThreadPool::get_IsAlive()
extern void GrpcThreadPool_get_IsAlive_m9492CA3AA2F8AE333C207ABF7A63126A8ED01DA6 (void);
// 0x00000190 System.Collections.Generic.IReadOnlyCollection`1<Grpc.Core.Internal.CompletionQueueSafeHandle> Grpc.Core.Internal.GrpcThreadPool::get_CompletionQueues()
extern void GrpcThreadPool_get_CompletionQueues_m3AC98CEC8801BAFD1A07BF40FD3990012C60C52C (void);
// 0x00000191 System.Threading.Thread Grpc.Core.Internal.GrpcThreadPool::CreateAndStartThread(System.Int32,Grpc.Core.Profiling.IProfiler)
extern void GrpcThreadPool_CreateAndStartThread_m2A10906AB839A9338DBA8DCD44955F97176383D5 (void);
// 0x00000192 System.Void Grpc.Core.Internal.GrpcThreadPool::RunHandlerLoop(Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Profiling.IProfiler)
extern void GrpcThreadPool_RunHandlerLoop_m9DE4558AD07B6AE9C7774A68E9EE8582E178B977 (void);
// 0x00000193 System.Collections.Generic.IReadOnlyCollection`1<Grpc.Core.Internal.CompletionQueueSafeHandle> Grpc.Core.Internal.GrpcThreadPool::CreateCompletionQueueList(Grpc.Core.GrpcEnvironment,System.Int32)
extern void GrpcThreadPool_CreateCompletionQueueList_mF1E3FD4D6BAF32C949A11BF90558E09185DF0817 (void);
// 0x00000194 System.Void Grpc.Core.Internal.GrpcThreadPool::RunCompletionQueueEventCallback(Grpc.Core.Internal.IOpCompletionCallback,System.Boolean)
extern void GrpcThreadPool_RunCompletionQueueEventCallback_m42F95D1AF40D44F9C477263495591BB8D7B58E4F (void);
// 0x00000195 System.Void Grpc.Core.Internal.GrpcThreadPool::.cctor()
extern void GrpcThreadPool__cctor_m54E84D521501D0187D89FEC052F3D1FDF817B455 (void);
// 0x00000196 System.Void Grpc.Core.Internal.GrpcThreadPool::<.ctor>b__15_0(System.Object)
extern void GrpcThreadPool_U3C_ctorU3Eb__15_0_m70DFEEDC884E93E5C2CF62561CD46544AEF100EA (void);
// 0x00000197 System.Void Grpc.Core.Internal.GrpcThreadPool::<.ctor>b__15_1(System.Object)
extern void GrpcThreadPool_U3C_ctorU3Eb__15_1_m4FC1771B2F938FE36A0055B7221A2434104F8BCD (void);
// 0x00000198 System.Void Grpc.Core.Internal.GrpcThreadPool::<StopAsync>b__17_0()
extern void GrpcThreadPool_U3CStopAsyncU3Eb__17_0_m5111739B872F9B81FBC088B3F5442BC042E6D3E5 (void);
// 0x00000199 System.Void Grpc.Core.Internal.GrpcThreadPool/<>c::.cctor()
extern void U3CU3Ec__cctor_mE99DA97B127512FAA2973ACEE49EC1CECEF7115B (void);
// 0x0000019A System.Void Grpc.Core.Internal.GrpcThreadPool/<>c::.ctor()
extern void U3CU3Ec__ctor_mCB2DC03C4876F9009F2C18ED9186CB4688748F9D (void);
// 0x0000019B System.Boolean Grpc.Core.Internal.GrpcThreadPool/<>c::<get_IsAlive>b__19_0(System.Threading.Thread)
extern void U3CU3Ec_U3Cget_IsAliveU3Eb__19_0_mA15EE6E92A2471ACAD1F98E3063B9BA1218FA4D8 (void);
// 0x0000019C System.Void Grpc.Core.Internal.GrpcThreadPool/<>c__DisplayClass22_0::.ctor()
extern void U3CU3Ec__DisplayClass22_0__ctor_m6BFD5DEBC4D7648CB8874EDFA1C565D6EC8420F0 (void);
// 0x0000019D System.Void Grpc.Core.Internal.GrpcThreadPool/<>c__DisplayClass22_0::<CreateAndStartThread>b__0()
extern void U3CU3Ec__DisplayClass22_0_U3CCreateAndStartThreadU3Eb__0_m57B158519A3468E71432ED6DB9E997A586E9FDE8 (void);
// 0x0000019E System.Void Grpc.Core.Internal.GrpcThreadPool/<>c__DisplayClass24_0::.ctor()
extern void U3CU3Ec__DisplayClass24_0__ctor_m7254E6E11E600543F77065191137655AAB761FF3 (void);
// 0x0000019F Grpc.Core.Internal.BatchContextSafeHandle Grpc.Core.Internal.GrpcThreadPool/<>c__DisplayClass24_0::<CreateCompletionQueueList>b__0()
extern void U3CU3Ec__DisplayClass24_0_U3CCreateCompletionQueueListU3Eb__0_m159E797DB311247A836C9CFDBA9AF1D6196D089C (void);
// 0x000001A0 Grpc.Core.Internal.RequestCallContextSafeHandle Grpc.Core.Internal.GrpcThreadPool/<>c__DisplayClass24_0::<CreateCompletionQueueList>b__1()
extern void U3CU3Ec__DisplayClass24_0_U3CCreateCompletionQueueListU3Eb__1_m3C381E6C8BBAEB831D87AFFD9B3110C8360987D5 (void);
// 0x000001A1 System.Void Grpc.Core.Internal.IUnaryResponseClientCallback::OnUnaryResponseClient(System.Boolean,Grpc.Core.Internal.ClientSideStatus,Grpc.Core.Internal.IBufferReader,Grpc.Core.Metadata)
// 0x000001A2 System.Void Grpc.Core.Internal.IReceivedStatusOnClientCallback::OnReceivedStatusOnClient(System.Boolean,Grpc.Core.Internal.ClientSideStatus)
// 0x000001A3 System.Void Grpc.Core.Internal.IReceivedMessageCallback::OnReceivedMessage(System.Boolean,Grpc.Core.Internal.IBufferReader)
// 0x000001A4 System.Void Grpc.Core.Internal.IReceivedResponseHeadersCallback::OnReceivedResponseHeaders(System.Boolean,Grpc.Core.Metadata)
// 0x000001A5 System.Void Grpc.Core.Internal.ISendCompletionCallback::OnSendCompletion(System.Boolean)
// 0x000001A6 System.Void Grpc.Core.Internal.ISendStatusFromServerCompletionCallback::OnSendStatusFromServerCompletion(System.Boolean)
// 0x000001A7 System.Void Grpc.Core.Internal.IReceivedCloseOnServerCallback::OnReceivedCloseOnServer(System.Boolean,System.Boolean)
// 0x000001A8 System.Void Grpc.Core.Internal.INativeCall::Cancel()
// 0x000001A9 System.Void Grpc.Core.Internal.INativeCall::CancelWithStatus(Grpc.Core.Status)
// 0x000001AA System.Void Grpc.Core.Internal.INativeCall::StartUnary(Grpc.Core.Internal.IUnaryResponseClientCallback,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
// 0x000001AB System.Void Grpc.Core.Internal.INativeCall::StartDuplexStreaming(Grpc.Core.Internal.IReceivedStatusOnClientCallback,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
// 0x000001AC System.Void Grpc.Core.Internal.INativeCall::StartReceiveMessage(Grpc.Core.Internal.IReceivedMessageCallback)
// 0x000001AD System.Void Grpc.Core.Internal.INativeCall::StartReceiveInitialMetadata(Grpc.Core.Internal.IReceivedResponseHeadersCallback)
// 0x000001AE System.Void Grpc.Core.Internal.INativeCall::StartSendMessage(Grpc.Core.Internal.ISendCompletionCallback,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,System.Boolean)
// 0x000001AF System.Void Grpc.Core.Internal.INativeCall::StartSendCloseFromClient(Grpc.Core.Internal.ISendCompletionCallback)
// 0x000001B0 T Grpc.Core.Internal.IObjectPool`1::Lease()
// 0x000001B1 System.Void Grpc.Core.Internal.IPooledObject`1::SetReturnToPoolAction(System.Action`1<T>)
// 0x000001B2 System.String Grpc.Core.Internal.MarshalUtils::PtrToStringUTF8(System.IntPtr,System.Int32)
extern void MarshalUtils_PtrToStringUTF8_m89AD4C00E07DC5A403450B6343A034D95F54DDE5 (void);
// 0x000001B3 System.Void Grpc.Core.Internal.MarshalUtils::.cctor()
extern void MarshalUtils__cctor_m408771769CAE65A7E003B775740493C1879A77C9 (void);
// 0x000001B4 System.Void Grpc.Core.Internal.MetadataArraySafeHandle::.ctor()
extern void MetadataArraySafeHandle__ctor_m4ED49A196B27CEE59559F2BC67BED98151879CF7 (void);
// 0x000001B5 Grpc.Core.Internal.MetadataArraySafeHandle Grpc.Core.Internal.MetadataArraySafeHandle::Create(Grpc.Core.Metadata)
extern void MetadataArraySafeHandle_Create_m76DDE7081AAE0E8B6EE3F44DC99B298BA0077612 (void);
// 0x000001B6 Grpc.Core.Metadata Grpc.Core.Internal.MetadataArraySafeHandle::ReadMetadataFromPtrUnsafe(System.IntPtr)
extern void MetadataArraySafeHandle_ReadMetadataFromPtrUnsafe_mC6D70543549C9D438A2D8BBB95C28B20A233C1F5 (void);
// 0x000001B7 System.Boolean Grpc.Core.Internal.MetadataArraySafeHandle::ReleaseHandle()
extern void MetadataArraySafeHandle_ReleaseHandle_mD367B04E1420C868C02B84344D7907A18C278421 (void);
// 0x000001B8 System.Void Grpc.Core.Internal.MetadataArraySafeHandle::.cctor()
extern void MetadataArraySafeHandle__cctor_m91D524EB2A081988FC79B61CE0F003AE0016EBF2 (void);
// 0x000001B9 System.Void Grpc.Core.Internal.MonoPInvokeCallbackAttribute::.ctor(System.Type)
extern void MonoPInvokeCallbackAttribute__ctor_mE3DD0F235333F7547D5750F168194EB9CF9E997C (void);
// 0x000001BA System.Void Grpc.Core.Internal.MonoPInvokeCallbackAttribute::set_Type(System.Type)
extern void MonoPInvokeCallbackAttribute_set_Type_m9EA24BB49B59D4C15894478E55F3F3C26835A1CC (void);
// 0x000001BB System.Void Grpc.Core.Internal.UniversalNativeCallback::.ctor(System.Object,System.IntPtr)
extern void UniversalNativeCallback__ctor_m4EEF4935103B99D1583DE06EE8A9ACA4D78A33F2 (void);
// 0x000001BC System.Int32 Grpc.Core.Internal.UniversalNativeCallback::Invoke(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern void UniversalNativeCallback_Invoke_mC2689733FBFAAA2476E277B25BF5C1EFDEBA4340 (void);
// 0x000001BD System.IAsyncResult Grpc.Core.Internal.UniversalNativeCallback::BeginInvoke(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern void UniversalNativeCallback_BeginInvoke_mF9FFEB2B1DB75705616ABFD900ABCEC5DB222D98 (void);
// 0x000001BE System.Int32 Grpc.Core.Internal.UniversalNativeCallback::EndInvoke(System.IAsyncResult)
extern void UniversalNativeCallback_EndInvoke_mFDD95DC8F4667ED75DD9C61369342869C744B47D (void);
// 0x000001BF System.Void Grpc.Core.Internal.NativeCallbackDispatcherCallback::.ctor(System.Object,System.IntPtr)
extern void NativeCallbackDispatcherCallback__ctor_mCF4F1D2BD467F23D104E94DD145A9750E575BD96 (void);
// 0x000001C0 System.Int32 Grpc.Core.Internal.NativeCallbackDispatcherCallback::Invoke(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern void NativeCallbackDispatcherCallback_Invoke_mE120F9F9F744D5752A2CD47870399B34BAE2E567 (void);
// 0x000001C1 System.IAsyncResult Grpc.Core.Internal.NativeCallbackDispatcherCallback::BeginInvoke(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern void NativeCallbackDispatcherCallback_BeginInvoke_m8186A97F03C9E33C1476061FEC30999E3F21E0BE (void);
// 0x000001C2 System.Int32 Grpc.Core.Internal.NativeCallbackDispatcherCallback::EndInvoke(System.IAsyncResult)
extern void NativeCallbackDispatcherCallback_EndInvoke_m052E5A61F539C587336347B278939FED74B7133B (void);
// 0x000001C3 System.Void Grpc.Core.Internal.NativeCallbackDispatcher::Init(Grpc.Core.Internal.NativeMethods)
extern void NativeCallbackDispatcher_Init_mB95B56D9EA0BECF6DDD7914B56D5556695338EF9 (void);
// 0x000001C4 Grpc.Core.Internal.NativeCallbackRegistration Grpc.Core.Internal.NativeCallbackDispatcher::RegisterCallback(Grpc.Core.Internal.UniversalNativeCallback)
extern void NativeCallbackDispatcher_RegisterCallback_m79319A340A05476F2B62362AE67B1C69505428A7 (void);
// 0x000001C5 System.Int32 Grpc.Core.Internal.NativeCallbackDispatcher::HandleDispatcherCallback(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern void NativeCallbackDispatcher_HandleDispatcherCallback_m57C5A58471D40296AB6D21E2A542C0749D4A8D4B (void);
// 0x000001C6 System.Void Grpc.Core.Internal.NativeCallbackDispatcher::.cctor()
extern void NativeCallbackDispatcher__cctor_m109643DA25A37330F058930902F60E390C857A7C (void);
// 0x000001C7 System.Void Grpc.Core.Internal.NativeCallbackRegistration::.ctor(System.Runtime.InteropServices.GCHandle)
extern void NativeCallbackRegistration__ctor_m39B9CC65FD144630FAE10B89258ED427FA99D31E (void);
// 0x000001C8 System.IntPtr Grpc.Core.Internal.NativeCallbackRegistration::get_Tag()
extern void NativeCallbackRegistration_get_Tag_m5040DFE201BFEA3362E8DB15DCF0D7093899C7E4 (void);
// 0x000001C9 System.Void Grpc.Core.Internal.NativeCallbackRegistration::Dispose()
extern void NativeCallbackRegistration_Dispose_mBFBD29511BC73B17EBE1D1E0183CA04BB78C4CAC (void);
// 0x000001CA System.Void Grpc.Core.Internal.NativeExtension::.ctor()
extern void NativeExtension__ctor_m9824F8B1C68125F85C7C1767C4AD23763E59315E (void);
// 0x000001CB Grpc.Core.Internal.NativeExtension Grpc.Core.Internal.NativeExtension::Get()
extern void NativeExtension_Get_m54755B957F8C4C25C0ED53DC04637449A71D8629 (void);
// 0x000001CC Grpc.Core.Internal.NativeMethods Grpc.Core.Internal.NativeExtension::get_NativeMethods()
extern void NativeExtension_get_NativeMethods_m61FF2EA5C5AEEB6D4AF567EF8CBB43F9401F761D (void);
// 0x000001CD Grpc.Core.Internal.NativeMethods Grpc.Core.Internal.NativeExtension::LoadNativeMethodsLegacyNetFramework()
extern void NativeExtension_LoadNativeMethodsLegacyNetFramework_m46385958926235B7CABC0BB63930B19545761024 (void);
// 0x000001CE Grpc.Core.Internal.NativeMethods Grpc.Core.Internal.NativeExtension::LoadNativeMethods()
extern void NativeExtension_LoadNativeMethods_m4B79F91E89B59D4F6C4C8DB0DB9AE94CF9584851 (void);
// 0x000001CF Grpc.Core.Internal.NativeMethods Grpc.Core.Internal.NativeExtension::LoadNativeMethodsUnity()
extern void NativeExtension_LoadNativeMethodsUnity_m5B20AC86CEC43559A7A25FF648DA397C16A02E90 (void);
// 0x000001D0 Grpc.Core.Internal.NativeMethods Grpc.Core.Internal.NativeExtension::LoadNativeMethodsXamarin()
extern void NativeExtension_LoadNativeMethodsXamarin_mE77FE6FAA8C3EE434D3B56A39FB606F174B7D709 (void);
// 0x000001D1 System.String Grpc.Core.Internal.NativeExtension::GetAssemblyDirectory()
extern void NativeExtension_GetAssemblyDirectory_m7E14D8167555DC98615724B177C0D37E4D4AE623 (void);
// 0x000001D2 System.Boolean Grpc.Core.Internal.NativeExtension::IsFileUri(System.String)
extern void NativeExtension_IsFileUri_mF97CF0B928D9468C4D5A9FD7153E98863BCBF183 (void);
// 0x000001D3 System.String Grpc.Core.Internal.NativeExtension::GetArchitectureString()
extern void NativeExtension_GetArchitectureString_m5BA63C678F0901A457DC601B354443E704FC7673 (void);
// 0x000001D4 System.String Grpc.Core.Internal.NativeExtension::GetNativeLibraryFilename()
extern void NativeExtension_GetNativeLibraryFilename_mA8EA17575CDE59D77EB4D836B7AC08C2555D98A3 (void);
// 0x000001D5 System.Void Grpc.Core.Internal.NativeExtension::.cctor()
extern void NativeExtension__cctor_m663B8633B6AA101EA06941063FC7BC896F7562CF (void);
// 0x000001D6 System.Void Grpc.Core.Internal.GprLogDelegate::.ctor(System.Object,System.IntPtr)
extern void GprLogDelegate__ctor_m8184398A2C82EEE0CD93BA12F2DD6F306A5046F7 (void);
// 0x000001D7 System.Void Grpc.Core.Internal.GprLogDelegate::Invoke(System.IntPtr,System.Int32,System.UInt64,System.IntPtr,System.IntPtr)
extern void GprLogDelegate_Invoke_mE1672B4EF36DFA447F3E7358A1F9BECCD73759D4 (void);
// 0x000001D8 System.IAsyncResult Grpc.Core.Internal.GprLogDelegate::BeginInvoke(System.IntPtr,System.Int32,System.UInt64,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern void GprLogDelegate_BeginInvoke_mE2BC3FE41FCC3A210CD5E3795D9662EC1CA618CF (void);
// 0x000001D9 System.Void Grpc.Core.Internal.GprLogDelegate::EndInvoke(System.IAsyncResult)
extern void GprLogDelegate_EndInvoke_m7DE44567460D0FE3C97BAC99FC4CFEC5C429BF25 (void);
// 0x000001DA System.Void Grpc.Core.Internal.NativeLogRedirector::Redirect(Grpc.Core.Internal.NativeMethods)
extern void NativeLogRedirector_Redirect_m417C898F8ED49A13ADEE08BE15F71EB6854A244C (void);
// 0x000001DB System.Void Grpc.Core.Internal.NativeLogRedirector::HandleWrite(System.IntPtr,System.Int32,System.UInt64,System.IntPtr,System.IntPtr)
extern void NativeLogRedirector_HandleWrite_m03E5012D2E9E37E1A3CBBE08B37987B070E0013D (void);
// 0x000001DC System.Void Grpc.Core.Internal.NativeLogRedirector::.cctor()
extern void NativeLogRedirector__cctor_m8358F9B5FE7438042149CC6ABA668D5201B3E405 (void);
// 0x000001DD System.Void Grpc.Core.Internal.NativeCallbackTestDelegate::.ctor(System.Object,System.IntPtr)
extern void NativeCallbackTestDelegate__ctor_mB39CD583929D138A7FEB9D7C852F44630AC4B73D (void);
// 0x000001DE System.Void Grpc.Core.Internal.NativeCallbackTestDelegate::Invoke(System.Boolean)
extern void NativeCallbackTestDelegate_Invoke_m39ED80ED0205EEE8EAA1D302E1D26B6C16C5D3EF (void);
// 0x000001DF System.IAsyncResult Grpc.Core.Internal.NativeCallbackTestDelegate::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern void NativeCallbackTestDelegate_BeginInvoke_mE128E390B097A206A42D7D607800A49BEE498C42 (void);
// 0x000001E0 System.Void Grpc.Core.Internal.NativeCallbackTestDelegate::EndInvoke(System.IAsyncResult)
extern void NativeCallbackTestDelegate_EndInvoke_mE4479CB7EC8A4D2093F4488B537C251F48F51C9E (void);
// 0x000001E1 Grpc.Core.Internal.NativeMethods Grpc.Core.Internal.NativeMethods::Get()
extern void NativeMethods_Get_m783EDC56BCA7379D25CFBF33B1A09499655A1036 (void);
// 0x000001E2 T Grpc.Core.Internal.NativeMethods::GetMethodDelegate(Grpc.Core.Internal.UnmanagedLibrary)
// 0x000001E3 System.String Grpc.Core.Internal.NativeMethods::RemoveStringSuffix(System.String,System.String)
extern void NativeMethods_RemoveStringSuffix_mDB067D688C8ED7335EA714254AB5203A5A4EFBEE (void);
// 0x000001E4 System.Void Grpc.Core.Internal.NativeMethods::.ctor(Grpc.Core.Internal.UnmanagedLibrary)
extern void NativeMethods__ctor_m64F68EC9AA151E628D0200EDCE573D9D3A00F341 (void);
// 0x000001E5 System.Void Grpc.Core.Internal.NativeMethods::.ctor(Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib)
extern void NativeMethods__ctor_m57A849A028F4738C9184335731126BF787C8080B (void);
// 0x000001E6 System.Void Grpc.Core.Internal.NativeMethods::.ctor(Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib)
extern void NativeMethods__ctor_m6AFEBEB8A2D14ECD0B3A645FCE8949181120B6E3 (void);
// 0x000001E7 System.Void Grpc.Core.Internal.NativeMethods::.ctor(Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86)
extern void NativeMethods__ctor_m319B4575B62192AB7ACC01FEDAF48C3863191189 (void);
// 0x000001E8 System.Void Grpc.Core.Internal.NativeMethods::.ctor(Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64)
extern void NativeMethods__ctor_m83B567C0A457E2F3550753A342A20BC1F1839C95 (void);
// 0x000001E9 System.Void Grpc.Core.Internal.NativeMethods::.ctor(Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll)
extern void NativeMethods__ctor_m7A92465283BC5C9FA1157F2018383C503D1EEEDB (void);
// 0x000001EA System.Void Grpc.Core.Internal.NativeMethods::.ctor(Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll)
extern void NativeMethods__ctor_mB15BF21DDB9C485592739C4A7606DEC30C1B5A7E (void);
// 0x000001EB System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_init_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_init_delegate__ctor_m3DB362143A33B611D5DA0ADFF5466E6BFA16EF5A (void);
// 0x000001EC System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_init_delegate::Invoke()
extern void grpcsharp_init_delegate_Invoke_m4DC58762A4B7DF137DC48BB2E6A59B38AA67E083 (void);
// 0x000001ED System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_init_delegate::BeginInvoke(System.AsyncCallback,System.Object)
extern void grpcsharp_init_delegate_BeginInvoke_mD61A3E46FCE37EDBEC4D3BD5604A6F7322CF6E03 (void);
// 0x000001EE System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_init_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_init_delegate_EndInvoke_m3902DD08BA57DFFC550C472A5A02ED175810541D (void);
// 0x000001EF System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_shutdown_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_shutdown_delegate__ctor_mEF1EEC3816BA590CA1F5B3B16849B8AC404C45E9 (void);
// 0x000001F0 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_shutdown_delegate::Invoke()
extern void grpcsharp_shutdown_delegate_Invoke_m8F967B03FD6DA7F971268BC69B7EA3CBCDFB726B (void);
// 0x000001F1 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_shutdown_delegate::BeginInvoke(System.AsyncCallback,System.Object)
extern void grpcsharp_shutdown_delegate_BeginInvoke_m50AD6545F4C1917D75C78E2DEE79FD52D7FE43D8 (void);
// 0x000001F2 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_shutdown_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_shutdown_delegate_EndInvoke_m5DABDD22A09F394D2C7555E80A42DD1C6513941D (void);
// 0x000001F3 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_version_string_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_version_string_delegate__ctor_m8B5813BC8E11EB7C1E4A0C04EC6C423D93BF157B (void);
// 0x000001F4 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_version_string_delegate::Invoke()
extern void grpcsharp_version_string_delegate_Invoke_m4C1883DF663C818B092373471CD92231AB091CDA (void);
// 0x000001F5 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_version_string_delegate::BeginInvoke(System.AsyncCallback,System.Object)
extern void grpcsharp_version_string_delegate_BeginInvoke_m9B4CB8CE81F4FFCBF2A06287EEF0C74BAB848D03 (void);
// 0x000001F6 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_version_string_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_version_string_delegate_EndInvoke_m4712047FD79DADD8CEF00CC7159B4BDFFBC6C097 (void);
// 0x000001F7 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_create_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_batch_context_create_delegate__ctor_m2B03BF639B91B6DAAB7BBDCCB8C6BCB056505F6E (void);
// 0x000001F8 Grpc.Core.Internal.BatchContextSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_create_delegate::Invoke()
extern void grpcsharp_batch_context_create_delegate_Invoke_m1B36C0A984E125E6A8397E8E749057758A6C3C1A (void);
// 0x000001F9 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_create_delegate::BeginInvoke(System.AsyncCallback,System.Object)
extern void grpcsharp_batch_context_create_delegate_BeginInvoke_m4FD3FB618FBD2A32CBB6A235BB18FB37FE4F5FF1 (void);
// 0x000001FA Grpc.Core.Internal.BatchContextSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_create_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_batch_context_create_delegate_EndInvoke_mEA8242C4992E92C9F359130FF11E9B289E742D98 (void);
// 0x000001FB System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_initial_metadata_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_batch_context_recv_initial_metadata_delegate__ctor_mA8BF32A19B74D89909128CACD604ED1F9F6911ED (void);
// 0x000001FC System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_initial_metadata_delegate::Invoke(Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_batch_context_recv_initial_metadata_delegate_Invoke_m3C62CC9EE75A201EEC7997A40C071A14F7765062 (void);
// 0x000001FD System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_initial_metadata_delegate::BeginInvoke(Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_batch_context_recv_initial_metadata_delegate_BeginInvoke_mD8AEA8690321CE206328BBBFF1D69708025C9C56 (void);
// 0x000001FE System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_initial_metadata_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_batch_context_recv_initial_metadata_delegate_EndInvoke_m55E7BE8840100FE4CE765C64E2093B57B180E9CF (void);
// 0x000001FF System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_message_length_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_batch_context_recv_message_length_delegate__ctor_m4E4369C9A4EE55BA2A7C7128B587A3FEEF1D2468 (void);
// 0x00000200 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_message_length_delegate::Invoke(Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_batch_context_recv_message_length_delegate_Invoke_mF2397EBD5315EEF98EA6B797B24D27F7E16A037E (void);
// 0x00000201 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_message_length_delegate::BeginInvoke(Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_batch_context_recv_message_length_delegate_BeginInvoke_m2F1AB9B224B58380E14FC3963E0D0BA3C6F5D534 (void);
// 0x00000202 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_message_length_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_batch_context_recv_message_length_delegate_EndInvoke_mFEC51F02B7F5D3D85E66763BB446B73717FDDFF6 (void);
// 0x00000203 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_message_next_slice_peek_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_batch_context_recv_message_next_slice_peek_delegate__ctor_mE2E2DF9267C44B41E99B819731FF79FF9CCF0FBD (void);
// 0x00000204 System.Int32 Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_message_next_slice_peek_delegate::Invoke(Grpc.Core.Internal.BatchContextSafeHandle,System.UIntPtr&,System.IntPtr&)
extern void grpcsharp_batch_context_recv_message_next_slice_peek_delegate_Invoke_m9E38068C66599F6D3034ADE8EE3C9C5D52B3DEA6 (void);
// 0x00000205 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_message_next_slice_peek_delegate::BeginInvoke(Grpc.Core.Internal.BatchContextSafeHandle,System.UIntPtr&,System.IntPtr&,System.AsyncCallback,System.Object)
extern void grpcsharp_batch_context_recv_message_next_slice_peek_delegate_BeginInvoke_m3E70E6849DB9E31A127013E274E861BB4A5DF34D (void);
// 0x00000206 System.Int32 Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_message_next_slice_peek_delegate::EndInvoke(System.UIntPtr&,System.IntPtr&,System.IAsyncResult)
extern void grpcsharp_batch_context_recv_message_next_slice_peek_delegate_EndInvoke_mA4533DF6C4B8068412F80FC87A5A57A6F9FFAB73 (void);
// 0x00000207 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_status_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_batch_context_recv_status_on_client_status_delegate__ctor_mF69591FE156EB1B7DFF222908E19BE12A0161D1B (void);
// 0x00000208 Grpc.Core.StatusCode Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_status_delegate::Invoke(Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_batch_context_recv_status_on_client_status_delegate_Invoke_m0EA07B3C10396B4EC3BCEF4185088DBEC795D696 (void);
// 0x00000209 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_status_delegate::BeginInvoke(Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_batch_context_recv_status_on_client_status_delegate_BeginInvoke_m6A7473A6AA52CA09B2C904A77945A4DFA831CBB9 (void);
// 0x0000020A Grpc.Core.StatusCode Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_status_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_batch_context_recv_status_on_client_status_delegate_EndInvoke_m611059D6E2D5E8815AA65AB0800EAC257F152252 (void);
// 0x0000020B System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_details_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_batch_context_recv_status_on_client_details_delegate__ctor_m4AD5D79FF5A56A0C024A4D44CF227E2FCBCFC033 (void);
// 0x0000020C System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_details_delegate::Invoke(Grpc.Core.Internal.BatchContextSafeHandle,System.UIntPtr&)
extern void grpcsharp_batch_context_recv_status_on_client_details_delegate_Invoke_mB2AD7312755DCA3B3DE1DB0A114D55777F25AC38 (void);
// 0x0000020D System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_details_delegate::BeginInvoke(Grpc.Core.Internal.BatchContextSafeHandle,System.UIntPtr&,System.AsyncCallback,System.Object)
extern void grpcsharp_batch_context_recv_status_on_client_details_delegate_BeginInvoke_m420EE2BC6699CFDFA5C63F2941C01E5251D2D481 (void);
// 0x0000020E System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_details_delegate::EndInvoke(System.UIntPtr&,System.IAsyncResult)
extern void grpcsharp_batch_context_recv_status_on_client_details_delegate_EndInvoke_m69868074BAFA1474B3DD84E7F5CDFC4404198795 (void);
// 0x0000020F System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_error_string_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_batch_context_recv_status_on_client_error_string_delegate__ctor_mB5144A97C5611A22E24EDE36B03C50DFEC323376 (void);
// 0x00000210 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_error_string_delegate::Invoke(Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_batch_context_recv_status_on_client_error_string_delegate_Invoke_m35FD3EF5810026354C5B2946F2E19671D8917DC6 (void);
// 0x00000211 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_error_string_delegate::BeginInvoke(Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_batch_context_recv_status_on_client_error_string_delegate_BeginInvoke_m51B5923AA83548E5B48AFD81C329E8608FDA966E (void);
// 0x00000212 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_error_string_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_batch_context_recv_status_on_client_error_string_delegate_EndInvoke_mCB74E248B10AEA9E4FF382A2485037BA6ECAD6EB (void);
// 0x00000213 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate__ctor_m63EFF0B4A9BA30319883D75E0F4D6570B54AC9D8 (void);
// 0x00000214 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate::Invoke(Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate_Invoke_m559BBF459999CD24D90BC6F3859CF35B9BC5A0C8 (void);
// 0x00000215 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate::BeginInvoke(Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate_BeginInvoke_m8F8CF4232436A539A9B6DDF275BCF1B7081C71F2 (void);
// 0x00000216 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate_EndInvoke_mDDCC22022F821F34B0D7364D07AFF82B41D2CA47 (void);
// 0x00000217 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_close_on_server_cancelled_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_batch_context_recv_close_on_server_cancelled_delegate__ctor_mB44FC208B53BD7F2E9B1681D6E581F13CCE01641 (void);
// 0x00000218 System.Int32 Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_close_on_server_cancelled_delegate::Invoke(Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_batch_context_recv_close_on_server_cancelled_delegate_Invoke_m2EBBFCFB447E76DAE431260A1912D251E0A6444E (void);
// 0x00000219 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_close_on_server_cancelled_delegate::BeginInvoke(Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_batch_context_recv_close_on_server_cancelled_delegate_BeginInvoke_m41733523F877EE61AF5A87F9C58CAD8D57E4FA5C (void);
// 0x0000021A System.Int32 Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_close_on_server_cancelled_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_batch_context_recv_close_on_server_cancelled_delegate_EndInvoke_m07653F5303ED6F8E7BC7A81D50D056AFDFCB419F (void);
// 0x0000021B System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_reset_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_batch_context_reset_delegate__ctor_m00254B5B959918EB6CAB784A7BC809C3A214A055 (void);
// 0x0000021C System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_reset_delegate::Invoke(Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_batch_context_reset_delegate_Invoke_mAF539438D7E5A40EA526A4EB0281DE15E927B60E (void);
// 0x0000021D System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_reset_delegate::BeginInvoke(Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_batch_context_reset_delegate_BeginInvoke_m96CC4AE8C38B5C37884C73778A848C18B70286E2 (void);
// 0x0000021E System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_reset_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_batch_context_reset_delegate_EndInvoke_m48DDAE8C0A31E282AA0F3F84AF5C2DEFEC9BE597 (void);
// 0x0000021F System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_destroy_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_batch_context_destroy_delegate__ctor_m17DB091338FDDC8D78549900A29BC0A3D9763D8D (void);
// 0x00000220 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_destroy_delegate::Invoke(System.IntPtr)
extern void grpcsharp_batch_context_destroy_delegate_Invoke_m7E9C593B926846EBB95E7DE4B37ED9725E4C295A (void);
// 0x00000221 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_destroy_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_batch_context_destroy_delegate_BeginInvoke_m6912F3076552B562B1B3405D4BE45F831FD7E00C (void);
// 0x00000222 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_destroy_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_batch_context_destroy_delegate_EndInvoke_mC4A597A2CF27AD583A453424C8F1A49E59355FA9 (void);
// 0x00000223 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_create_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_request_call_context_create_delegate__ctor_mE2401EDA5559E5BD52D389A8FD48535663D09872 (void);
// 0x00000224 Grpc.Core.Internal.RequestCallContextSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_create_delegate::Invoke()
extern void grpcsharp_request_call_context_create_delegate_Invoke_m90590161165F60C83FA4C3A622E74BA7A356D80A (void);
// 0x00000225 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_create_delegate::BeginInvoke(System.AsyncCallback,System.Object)
extern void grpcsharp_request_call_context_create_delegate_BeginInvoke_m1F1EC60E5C3EF74574B273B29872E71FE5232A9B (void);
// 0x00000226 Grpc.Core.Internal.RequestCallContextSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_create_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_request_call_context_create_delegate_EndInvoke_m6F018617334A2B762208AA3F8430E92054EB82F1 (void);
// 0x00000227 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_call_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_request_call_context_call_delegate__ctor_mD68AF736FBEA2D33B3E8F25D81833F6238BAFAC8 (void);
// 0x00000228 Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_call_delegate::Invoke(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void grpcsharp_request_call_context_call_delegate_Invoke_m58EDE33C86EA3B439BCAB4E65BA27D8B4BBF5204 (void);
// 0x00000229 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_call_delegate::BeginInvoke(Grpc.Core.Internal.RequestCallContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_request_call_context_call_delegate_BeginInvoke_m437562226245B5643D92A4B5DE80CD2F981A08E2 (void);
// 0x0000022A Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_call_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_request_call_context_call_delegate_EndInvoke_mFC38FA4C131D9B5DB1B1411B2B96E3FAB877F865 (void);
// 0x0000022B System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_method_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_request_call_context_method_delegate__ctor_m1CF85B6C21710FEB5F7684A9693471557E69465B (void);
// 0x0000022C System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_method_delegate::Invoke(Grpc.Core.Internal.RequestCallContextSafeHandle,System.UIntPtr&)
extern void grpcsharp_request_call_context_method_delegate_Invoke_mA5BB7EAB839668572E182508E8AB296FD11AAEFF (void);
// 0x0000022D System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_method_delegate::BeginInvoke(Grpc.Core.Internal.RequestCallContextSafeHandle,System.UIntPtr&,System.AsyncCallback,System.Object)
extern void grpcsharp_request_call_context_method_delegate_BeginInvoke_m041AD69D2A775844C75C39B061AF1CCCB90130DC (void);
// 0x0000022E System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_method_delegate::EndInvoke(System.UIntPtr&,System.IAsyncResult)
extern void grpcsharp_request_call_context_method_delegate_EndInvoke_m537338184C9DA8D02F13DB9E29BCD709A43727CD (void);
// 0x0000022F System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_host_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_request_call_context_host_delegate__ctor_mD86D99D62A7CB321C64672677C91FD167B64BF27 (void);
// 0x00000230 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_host_delegate::Invoke(Grpc.Core.Internal.RequestCallContextSafeHandle,System.UIntPtr&)
extern void grpcsharp_request_call_context_host_delegate_Invoke_mA517514F14A2FFA9DF9E505ECD2DE25D6F67E2B9 (void);
// 0x00000231 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_host_delegate::BeginInvoke(Grpc.Core.Internal.RequestCallContextSafeHandle,System.UIntPtr&,System.AsyncCallback,System.Object)
extern void grpcsharp_request_call_context_host_delegate_BeginInvoke_m3408A274B2C809718EE9E193CF08978E4CFD48CD (void);
// 0x00000232 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_host_delegate::EndInvoke(System.UIntPtr&,System.IAsyncResult)
extern void grpcsharp_request_call_context_host_delegate_EndInvoke_m85DF47FED38BC80BAC5E3826AF4D0E3A18CA7C46 (void);
// 0x00000233 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_deadline_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_request_call_context_deadline_delegate__ctor_m5443AC626AFAE88CDF696919A8560E4CE4222B38 (void);
// 0x00000234 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_deadline_delegate::Invoke(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void grpcsharp_request_call_context_deadline_delegate_Invoke_mFC210FC7FA27F5372504FCD683D396641ECE299A (void);
// 0x00000235 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_deadline_delegate::BeginInvoke(Grpc.Core.Internal.RequestCallContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_request_call_context_deadline_delegate_BeginInvoke_m50A5CB5BCC33A40678FFB4A88E70D9F576A06896 (void);
// 0x00000236 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_deadline_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_request_call_context_deadline_delegate_EndInvoke_m6115A08C387E5079F4F76148AA92A46F0E26D38A (void);
// 0x00000237 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_request_metadata_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_request_call_context_request_metadata_delegate__ctor_mE7173CD9EA7B1BDFEBAD7579D1B034371824D9AE (void);
// 0x00000238 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_request_metadata_delegate::Invoke(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void grpcsharp_request_call_context_request_metadata_delegate_Invoke_mC731F9A6B16FCD00343D2DDA6EB2C83D1A0525B8 (void);
// 0x00000239 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_request_metadata_delegate::BeginInvoke(Grpc.Core.Internal.RequestCallContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_request_call_context_request_metadata_delegate_BeginInvoke_mFC4F8F6231DA749427165CF2FCF633B38046444F (void);
// 0x0000023A System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_request_metadata_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_request_call_context_request_metadata_delegate_EndInvoke_mE724719445259F8FCE6F0ED0860B98CF31D02825 (void);
// 0x0000023B System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_reset_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_request_call_context_reset_delegate__ctor_m4F1C2EFC43FD4DD6BC171C9690B2AF72006B49F6 (void);
// 0x0000023C System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_reset_delegate::Invoke(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void grpcsharp_request_call_context_reset_delegate_Invoke_m528A163917FD41C5B5E62DF9A43994759E0CBF47 (void);
// 0x0000023D System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_reset_delegate::BeginInvoke(Grpc.Core.Internal.RequestCallContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_request_call_context_reset_delegate_BeginInvoke_m5FA6C3A6DC5CAFCD012590C2C2112CE58BD71751 (void);
// 0x0000023E System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_reset_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_request_call_context_reset_delegate_EndInvoke_mF234D93159DEF49068BEC5631B8D0A108BDFECA1 (void);
// 0x0000023F System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_destroy_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_request_call_context_destroy_delegate__ctor_m08973AAFF4125EE86420CAA23CB99C40F67EB98E (void);
// 0x00000240 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_destroy_delegate::Invoke(System.IntPtr)
extern void grpcsharp_request_call_context_destroy_delegate_Invoke_m0C7DF1095A70E2D68932258489523139BB8EFCE0 (void);
// 0x00000241 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_destroy_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_request_call_context_destroy_delegate_BeginInvoke_mE65474D9FEF7E078ACA581854A337FD93427B53F (void);
// 0x00000242 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_destroy_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_request_call_context_destroy_delegate_EndInvoke_mEC081B217F79A686FF436C2803E2229D910E2C30 (void);
// 0x00000243 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_composite_call_credentials_create_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_composite_call_credentials_create_delegate__ctor_m24F07ED7799ACCBF10C8E25F941F7C825745BF25 (void);
// 0x00000244 Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_composite_call_credentials_create_delegate::Invoke(Grpc.Core.Internal.CallCredentialsSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void grpcsharp_composite_call_credentials_create_delegate_Invoke_m1ED32B09562F0C37D46DB16D6FD4632DC0FF776D (void);
// 0x00000245 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_composite_call_credentials_create_delegate::BeginInvoke(Grpc.Core.Internal.CallCredentialsSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_composite_call_credentials_create_delegate_BeginInvoke_m64F3CC8AAB94058815AA53024CACF3FF216C7868 (void);
// 0x00000246 Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_composite_call_credentials_create_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_composite_call_credentials_create_delegate_EndInvoke_m37AA40C195EB8EE4650ED0C99345169C1A62398E (void);
// 0x00000247 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_credentials_release_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_credentials_release_delegate__ctor_mA2D5EC3F5DF195AFBB42EE3DC56454FD3AA7CDDE (void);
// 0x00000248 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_credentials_release_delegate::Invoke(System.IntPtr)
extern void grpcsharp_call_credentials_release_delegate_Invoke_m371D0F6E61F51FA2046E0C19C48E091BBF3E429F (void);
// 0x00000249 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_credentials_release_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_call_credentials_release_delegate_BeginInvoke_m0B0412E1E0CEE4A76CF8A53BACBE8E6357C6A6E1 (void);
// 0x0000024A System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_credentials_release_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_credentials_release_delegate_EndInvoke_m1A20AA943CF5010ABC9AB101DA268CAD1D91A474 (void);
// 0x0000024B System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_cancel_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_cancel_delegate__ctor_m173587776B3B5A8D7AEC00FDC5EE1691DEB5689F (void);
// 0x0000024C Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_cancel_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle)
extern void grpcsharp_call_cancel_delegate_Invoke_m594808BE2B436A47B6251ECD23BFB44242886DB2 (void);
// 0x0000024D System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_cancel_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_call_cancel_delegate_BeginInvoke_mE1C130C1667953AE2DA2FAB71978873E4DEEF234 (void);
// 0x0000024E Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_cancel_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_cancel_delegate_EndInvoke_mAB956C4D9EA75FC6E7C0AE2BD4588F750E5A020D (void);
// 0x0000024F System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_cancel_with_status_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_cancel_with_status_delegate__ctor_m29F0BDB8E0584528890F06D473EC811C10B4F664 (void);
// 0x00000250 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_cancel_with_status_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.StatusCode,System.String)
extern void grpcsharp_call_cancel_with_status_delegate_Invoke_mFDAB20D7BC3EC1DC456E453E0006EED9C365ADFA (void);
// 0x00000251 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_cancel_with_status_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.StatusCode,System.String,System.AsyncCallback,System.Object)
extern void grpcsharp_call_cancel_with_status_delegate_BeginInvoke_mEE0A0DEFBE17C5BACF716C23339ACD3219CC4874 (void);
// 0x00000252 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_cancel_with_status_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_cancel_with_status_delegate_EndInvoke_m5B6A5E58CB7602F0C34A151D46F5672BEE5DDD29 (void);
// 0x00000253 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_unary_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_start_unary_delegate__ctor_mC107CD2BB74C5187E059EA4B0A4BFFDD1A29B84D (void);
// 0x00000254 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_unary_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void grpcsharp_call_start_unary_delegate_Invoke_mAD032D2D2E0C55B3A6964F1534E33CE39083212D (void);
// 0x00000255 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_unary_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags,System.AsyncCallback,System.Object)
extern void grpcsharp_call_start_unary_delegate_BeginInvoke_m1CF10A129EC7F370B2F6AEC32CAEC3B34735B646 (void);
// 0x00000256 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_unary_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_start_unary_delegate_EndInvoke_m42D5E3377479136B73529647B2A67E357AB23876 (void);
// 0x00000257 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_client_streaming_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_start_client_streaming_delegate__ctor_m1D7B2E15C0DD4DE2E907AF1B1EE6A00B6B25906D (void);
// 0x00000258 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_client_streaming_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void grpcsharp_call_start_client_streaming_delegate_Invoke_m93EBDEA1DBEF1A7F9259DAA16714BA52D8A5AE4E (void);
// 0x00000259 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_client_streaming_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags,System.AsyncCallback,System.Object)
extern void grpcsharp_call_start_client_streaming_delegate_BeginInvoke_m860477DB3D4FDE2A48EEED0D834F4F986BA83DFB (void);
// 0x0000025A Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_client_streaming_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_start_client_streaming_delegate_EndInvoke_m17426391B7A5A41BCE31D33ED890ED1AE2ADA2BD (void);
// 0x0000025B System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_server_streaming_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_start_server_streaming_delegate__ctor_m078BFA587A830CA808EAD8F0256BCEAB6A02508F (void);
// 0x0000025C Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_server_streaming_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void grpcsharp_call_start_server_streaming_delegate_Invoke_m626D97C9FFCBE0BDBE1E9655049B1648588E6D65 (void);
// 0x0000025D System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_server_streaming_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags,System.AsyncCallback,System.Object)
extern void grpcsharp_call_start_server_streaming_delegate_BeginInvoke_mEE49C0B2F45085AFE37BF3E83C236A3FDA1B79E6 (void);
// 0x0000025E Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_server_streaming_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_start_server_streaming_delegate_EndInvoke_m52702C41F1C068AD8DBA5C05D763C7B016EC49C0 (void);
// 0x0000025F System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_duplex_streaming_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_start_duplex_streaming_delegate__ctor_mA82C62E8C0642854DBAB0F9427A4372D310FDDF1 (void);
// 0x00000260 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_duplex_streaming_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void grpcsharp_call_start_duplex_streaming_delegate_Invoke_m92948727D5BA02EE5985A326FDD9534C4255FD9A (void);
// 0x00000261 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_duplex_streaming_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags,System.AsyncCallback,System.Object)
extern void grpcsharp_call_start_duplex_streaming_delegate_BeginInvoke_m47CF9A7B2C002519B81BAC0DBC126526A278604A (void);
// 0x00000262 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_duplex_streaming_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_start_duplex_streaming_delegate_EndInvoke_mC8DB1FE4B8CACD778E5FDD00A4FE17971BC26407 (void);
// 0x00000263 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_message_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_send_message_delegate__ctor_m028F096A28B951E75451F668A94FFCAB9922650E (void);
// 0x00000264 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_message_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,System.Int32)
extern void grpcsharp_call_send_message_delegate_Invoke_m3098E55F40BD4E7DF6B206CB5FE77C52801E84DE (void);
// 0x00000265 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_message_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,System.Int32,System.AsyncCallback,System.Object)
extern void grpcsharp_call_send_message_delegate_BeginInvoke_m45D516B7B41946D0124B8A4BCA9F09BB0C6075B9 (void);
// 0x00000266 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_message_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_send_message_delegate_EndInvoke_mC4081FF5E362B0F2C22B0A414EF0B28837440B17 (void);
// 0x00000267 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_close_from_client_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_send_close_from_client_delegate__ctor_m186CDCDEE12384DC4EE3860CB10157126E78A69C (void);
// 0x00000268 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_close_from_client_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_call_send_close_from_client_delegate_Invoke_mC37ADFCB94CEA13E16D116AB4556155237C5E523 (void);
// 0x00000269 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_close_from_client_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_call_send_close_from_client_delegate_BeginInvoke_mD108D912DBB4E24EB10DD023EAB200348C00F2B5 (void);
// 0x0000026A Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_close_from_client_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_send_close_from_client_delegate_EndInvoke_mF881C54D89AA4770E68028F2D963B14104BEDDE3 (void);
// 0x0000026B System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_status_from_server_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_send_status_from_server_delegate__ctor_m8E79AA87C8968F2BFEB3E01DFE9101E15D026C9B (void);
// 0x0000026C Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_status_from_server_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.StatusCode,System.IntPtr,System.UIntPtr,Grpc.Core.Internal.MetadataArraySafeHandle,System.Int32,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags)
extern void grpcsharp_call_send_status_from_server_delegate_Invoke_mBFB63F3573320D38D1E4BCC12E613D344CF1F019 (void);
// 0x0000026D System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_status_from_server_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.StatusCode,System.IntPtr,System.UIntPtr,Grpc.Core.Internal.MetadataArraySafeHandle,System.Int32,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,System.AsyncCallback,System.Object)
extern void grpcsharp_call_send_status_from_server_delegate_BeginInvoke_m7123AC281A7ACDB568B7AAD882A0479DA87E8419 (void);
// 0x0000026E Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_status_from_server_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_send_status_from_server_delegate_EndInvoke_m9A994C268B7DC1F2156D7D2C416C108B8F69A384 (void);
// 0x0000026F System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_recv_message_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_recv_message_delegate__ctor_m1008F588A3B06D6FDFA244C36F234BBCC8D6D3F0 (void);
// 0x00000270 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_recv_message_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_call_recv_message_delegate_Invoke_m9A356CC52BD8F25A89712295EA7DDFD8326AF00C (void);
// 0x00000271 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_recv_message_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_call_recv_message_delegate_BeginInvoke_mE1E63705D45D8E686E359EB1B2D672E7947520F9 (void);
// 0x00000272 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_recv_message_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_recv_message_delegate_EndInvoke_m353AE66FB642DEDF7BB40BD8512D01BEA4E4BBD0 (void);
// 0x00000273 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_recv_initial_metadata_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_recv_initial_metadata_delegate__ctor_m285ED924A419AD52FCCFD8D94E0324D05E69E5B6 (void);
// 0x00000274 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_recv_initial_metadata_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_call_recv_initial_metadata_delegate_Invoke_mD66F812BE5A995BA6A91406EE44DFABBA758051B (void);
// 0x00000275 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_recv_initial_metadata_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_call_recv_initial_metadata_delegate_BeginInvoke_mBD503EF9261EACEF01CB1F8B1B5CEFA3518E3587 (void);
// 0x00000276 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_recv_initial_metadata_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_recv_initial_metadata_delegate_EndInvoke_m2611592DCE9AD8560069167D037EBEEB5AD46173 (void);
// 0x00000277 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_serverside_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_start_serverside_delegate__ctor_m540D3B546F395FA86922D3673FDF8C78EB370DA2 (void);
// 0x00000278 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_serverside_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_call_start_serverside_delegate_Invoke_mD13F2925D1C406061301101DC1F8CC409BED1350 (void);
// 0x00000279 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_serverside_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_call_start_serverside_delegate_BeginInvoke_m1B9CCCE34139038E75D82C623D93B7E627EE3D24 (void);
// 0x0000027A Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_serverside_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_start_serverside_delegate_EndInvoke_m655E9D4169B9EA50EDD2CEB0F6501FF46A32E02C (void);
// 0x0000027B System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_initial_metadata_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_send_initial_metadata_delegate__ctor_mCE0EF0B235B99019617D8F91FDF6978406FB8E61 (void);
// 0x0000027C Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_initial_metadata_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle)
extern void grpcsharp_call_send_initial_metadata_delegate_Invoke_mF09B7745BC28E8A77660C45755E80C8D774AB4F4 (void);
// 0x0000027D System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_initial_metadata_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_call_send_initial_metadata_delegate_BeginInvoke_m7144DE053579670E252ABC75A061C520D9879DEE (void);
// 0x0000027E Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_initial_metadata_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_send_initial_metadata_delegate_EndInvoke_mD555C284B19A9EA675FD34B0688A22C981C1E117 (void);
// 0x0000027F System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_set_credentials_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_set_credentials_delegate__ctor_mB76B7FA8BEEF2CC79E546B876528B9D9DDD0A5B1 (void);
// 0x00000280 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_set_credentials_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void grpcsharp_call_set_credentials_delegate_Invoke_mDC6CBE7F257F136A41B4A3F7BEC3BA94B345B50A (void);
// 0x00000281 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_set_credentials_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_call_set_credentials_delegate_BeginInvoke_m6E02499C0A018AC54374F6525A17952AB57BAA4B (void);
// 0x00000282 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_set_credentials_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_set_credentials_delegate_EndInvoke_mFE0C315938D940B1A40924DE71C7B9096A883F0F (void);
// 0x00000283 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_get_peer_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_get_peer_delegate__ctor_m5071BE9D25D84780D17EA81B0744E87F69B583AF (void);
// 0x00000284 Grpc.Core.Internal.CStringSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_get_peer_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle)
extern void grpcsharp_call_get_peer_delegate_Invoke_m169869CC4D824EDC6396A28FEF0BA51B230C2FB0 (void);
// 0x00000285 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_get_peer_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_call_get_peer_delegate_BeginInvoke_m25493F3E70A6711A25898847FD47131CE766E8DF (void);
// 0x00000286 Grpc.Core.Internal.CStringSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_get_peer_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_get_peer_delegate_EndInvoke_m99D6328A28C5F06763C7F699A68FE5EAF94C6060 (void);
// 0x00000287 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_destroy_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_destroy_delegate__ctor_m910B93D6FB584013A15CFFC3F84D1D4965FA5CED (void);
// 0x00000288 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_destroy_delegate::Invoke(System.IntPtr)
extern void grpcsharp_call_destroy_delegate_Invoke_m499A440BD7E5503B3172E9784C39539EF28F8DA4 (void);
// 0x00000289 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_destroy_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_call_destroy_delegate_BeginInvoke_m5681AA632FED4244C5E61E42F970BDE283869796 (void);
// 0x0000028A System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_destroy_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_destroy_delegate_EndInvoke_m6F97538BAD5B507F6F286742A7A483C989725118 (void);
// 0x0000028B System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_create_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_channel_args_create_delegate__ctor_m47C3AFC4BFD7A312BBC1EC574CAE24CECA375E7A (void);
// 0x0000028C Grpc.Core.Internal.ChannelArgsSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_create_delegate::Invoke(System.UIntPtr)
extern void grpcsharp_channel_args_create_delegate_Invoke_m2E9619086B91452FEFD8AB2A95C49CFF3B0B6405 (void);
// 0x0000028D System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_create_delegate::BeginInvoke(System.UIntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_channel_args_create_delegate_BeginInvoke_mAE813F13815A185242AAEF4D2A8BC862EDA459FA (void);
// 0x0000028E Grpc.Core.Internal.ChannelArgsSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_create_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_channel_args_create_delegate_EndInvoke_mFC1D0F75F51FC16C509318E88F0DE3E9F6375B71 (void);
// 0x0000028F System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_set_string_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_channel_args_set_string_delegate__ctor_m5F7ED0EFCB87C93A147B7AEC33D828CB0E83C657 (void);
// 0x00000290 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_set_string_delegate::Invoke(Grpc.Core.Internal.ChannelArgsSafeHandle,System.UIntPtr,System.String,System.String)
extern void grpcsharp_channel_args_set_string_delegate_Invoke_m5E1130E4E6D4BD88C7893876E8C961FFC3B8B4EE (void);
// 0x00000291 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_set_string_delegate::BeginInvoke(Grpc.Core.Internal.ChannelArgsSafeHandle,System.UIntPtr,System.String,System.String,System.AsyncCallback,System.Object)
extern void grpcsharp_channel_args_set_string_delegate_BeginInvoke_m28A58B6B990D4F5AAE1715F07A8DA25BF6DD1BC9 (void);
// 0x00000292 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_set_string_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_channel_args_set_string_delegate_EndInvoke_m77B72780082BB1E489A21F41DBB2CA00A4B9923B (void);
// 0x00000293 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_set_integer_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_channel_args_set_integer_delegate__ctor_m15AAB34D467F0C1AFF1A0D5424B9BF0092AFED9E (void);
// 0x00000294 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_set_integer_delegate::Invoke(Grpc.Core.Internal.ChannelArgsSafeHandle,System.UIntPtr,System.String,System.Int32)
extern void grpcsharp_channel_args_set_integer_delegate_Invoke_m3EC294DAFDB4F8AA51D90E83E187D632CE6A7567 (void);
// 0x00000295 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_set_integer_delegate::BeginInvoke(Grpc.Core.Internal.ChannelArgsSafeHandle,System.UIntPtr,System.String,System.Int32,System.AsyncCallback,System.Object)
extern void grpcsharp_channel_args_set_integer_delegate_BeginInvoke_m319F067041126EFD5494B271B15AB66AFAB67EE8 (void);
// 0x00000296 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_set_integer_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_channel_args_set_integer_delegate_EndInvoke_m5474E801D66BFC56BE9A93FC93DEECD96DE0D608 (void);
// 0x00000297 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_destroy_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_channel_args_destroy_delegate__ctor_mA012C875F31DCF6BC1F8EDE43D9C99C382019A26 (void);
// 0x00000298 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_destroy_delegate::Invoke(System.IntPtr)
extern void grpcsharp_channel_args_destroy_delegate_Invoke_m28C4612DBAB6A0EF3D28CDCCD170E6BD209EC85A (void);
// 0x00000299 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_destroy_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_channel_args_destroy_delegate_BeginInvoke_m8EF41DAEB6D9DBBD7184988C66E05B58E5F6F9F7 (void);
// 0x0000029A System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_destroy_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_channel_args_destroy_delegate_EndInvoke_m24448C690D2780A97CF6C5F729A3FAE407C4E1B2 (void);
// 0x0000029B System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_override_default_ssl_roots_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_override_default_ssl_roots_delegate__ctor_mEFD6706AE9613458092495A9DB9E7E266385F823 (void);
// 0x0000029C System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_override_default_ssl_roots_delegate::Invoke(System.String)
extern void grpcsharp_override_default_ssl_roots_delegate_Invoke_m96A03CE2DC7D3016AA21BC81A8A197EF0A81C5BC (void);
// 0x0000029D System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_override_default_ssl_roots_delegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern void grpcsharp_override_default_ssl_roots_delegate_BeginInvoke_mA020A4A3FC5ED011385485211A79757FBC41B392 (void);
// 0x0000029E System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_override_default_ssl_roots_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_override_default_ssl_roots_delegate_EndInvoke_mD4CE9E5F19CC4E688D516C8C4BDF8E7DCF4A1CCA (void);
// 0x0000029F System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_ssl_credentials_create_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_ssl_credentials_create_delegate__ctor_mD7D966213D193FA23B9EE15567AA860F668861E7 (void);
// 0x000002A0 Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_ssl_credentials_create_delegate::Invoke(System.String,System.String,System.String,System.IntPtr)
extern void grpcsharp_ssl_credentials_create_delegate_Invoke_m2366B15D11F2BE251BFE30FC3288DFCD373ECD76 (void);
// 0x000002A1 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_ssl_credentials_create_delegate::BeginInvoke(System.String,System.String,System.String,System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_ssl_credentials_create_delegate_BeginInvoke_m1CA9CFC9CF97C09219CCF8EE730E5A4F5AFB96D7 (void);
// 0x000002A2 Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_ssl_credentials_create_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_ssl_credentials_create_delegate_EndInvoke_mD1368D09799C681C0D0AA7A365796FC1886A3DAE (void);
// 0x000002A3 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_composite_channel_credentials_create_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_composite_channel_credentials_create_delegate__ctor_m9010D86AAB9BE991804B0E56151AD39698A50822 (void);
// 0x000002A4 Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_composite_channel_credentials_create_delegate::Invoke(Grpc.Core.Internal.ChannelCredentialsSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void grpcsharp_composite_channel_credentials_create_delegate_Invoke_m650130367D413E13065B9DA931C94D1CD7709E98 (void);
// 0x000002A5 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_composite_channel_credentials_create_delegate::BeginInvoke(Grpc.Core.Internal.ChannelCredentialsSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_composite_channel_credentials_create_delegate_BeginInvoke_m646E11070F922F54CD373DEFA910FFC1F16B3892 (void);
// 0x000002A6 Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_composite_channel_credentials_create_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_composite_channel_credentials_create_delegate_EndInvoke_m4F4F9B75878921291DCA4C1AB51D2F16F7855F82 (void);
// 0x000002A7 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_credentials_release_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_channel_credentials_release_delegate__ctor_m6E5DD3750E534DC1FFAC34146002C285059D148D (void);
// 0x000002A8 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_credentials_release_delegate::Invoke(System.IntPtr)
extern void grpcsharp_channel_credentials_release_delegate_Invoke_m4F58670C39E2FA749BB817756E8DBE0E2DB31515 (void);
// 0x000002A9 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_credentials_release_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_channel_credentials_release_delegate_BeginInvoke_mE86BB7D75D5364DE7AF1DFFE93EB55DD02669E77 (void);
// 0x000002AA System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_credentials_release_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_channel_credentials_release_delegate_EndInvoke_mA83E29C13891D365CF916E3B6CB94A00120D532A (void);
// 0x000002AB System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_insecure_channel_create_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_insecure_channel_create_delegate__ctor_m94D47B6050001F90196BEDD33F1D180EA1F25D74 (void);
// 0x000002AC Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_insecure_channel_create_delegate::Invoke(System.String,Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void grpcsharp_insecure_channel_create_delegate_Invoke_m1E81EF3DB1E65DF182979D8671587C82112DD926 (void);
// 0x000002AD System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_insecure_channel_create_delegate::BeginInvoke(System.String,Grpc.Core.Internal.ChannelArgsSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_insecure_channel_create_delegate_BeginInvoke_m98C6DCBC2B6BBED2BF5D1CECC94CCBDEF6813FBF (void);
// 0x000002AE Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_insecure_channel_create_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_insecure_channel_create_delegate_EndInvoke_m48F4A86B373A09A335CA455C13BE1FB306913229 (void);
// 0x000002AF System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_secure_channel_create_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_secure_channel_create_delegate__ctor_mE18219CB493165C8A31380DD0218DF009E0BC2D4 (void);
// 0x000002B0 Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_secure_channel_create_delegate::Invoke(Grpc.Core.Internal.ChannelCredentialsSafeHandle,System.String,Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void grpcsharp_secure_channel_create_delegate_Invoke_m5A6281DAE51D2F157237C75E277990D7F4C6DE13 (void);
// 0x000002B1 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_secure_channel_create_delegate::BeginInvoke(Grpc.Core.Internal.ChannelCredentialsSafeHandle,System.String,Grpc.Core.Internal.ChannelArgsSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_secure_channel_create_delegate_BeginInvoke_mFA17EF547AF8C6A1E65C009D7AAD0129E5F82547 (void);
// 0x000002B2 Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_secure_channel_create_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_secure_channel_create_delegate_EndInvoke_m4A70BFE4A87DE801B8C5FA7D22E8CB590AC9F733 (void);
// 0x000002B3 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_create_call_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_channel_create_call_delegate__ctor_m59278303C624132769F2AED9E9146853739A8320 (void);
// 0x000002B4 Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_create_call_delegate::Invoke(Grpc.Core.Internal.ChannelSafeHandle,Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.ContextPropagationFlags,Grpc.Core.Internal.CompletionQueueSafeHandle,System.String,System.String,Grpc.Core.Internal.Timespec)
extern void grpcsharp_channel_create_call_delegate_Invoke_mEEBE6EEEA647E5A578D360FE7C6B2F6708D5BD00 (void);
// 0x000002B5 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_create_call_delegate::BeginInvoke(Grpc.Core.Internal.ChannelSafeHandle,Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.ContextPropagationFlags,Grpc.Core.Internal.CompletionQueueSafeHandle,System.String,System.String,Grpc.Core.Internal.Timespec,System.AsyncCallback,System.Object)
extern void grpcsharp_channel_create_call_delegate_BeginInvoke_m6076BDB7F060A832323EAA06404F6D804F5D7328 (void);
// 0x000002B6 Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_create_call_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_channel_create_call_delegate_EndInvoke_m35D7FFC397791EDD8185A70FDEB0ADCAB34B57B5 (void);
// 0x000002B7 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_check_connectivity_state_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_channel_check_connectivity_state_delegate__ctor_m8C25B026B7FC6EDEB8C9B0832D7758C604F43CB4 (void);
// 0x000002B8 Grpc.Core.ChannelState Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_check_connectivity_state_delegate::Invoke(Grpc.Core.Internal.ChannelSafeHandle,System.Int32)
extern void grpcsharp_channel_check_connectivity_state_delegate_Invoke_mDEFB8B169B3E9958D8A8F531664D9E142F2F894C (void);
// 0x000002B9 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_check_connectivity_state_delegate::BeginInvoke(Grpc.Core.Internal.ChannelSafeHandle,System.Int32,System.AsyncCallback,System.Object)
extern void grpcsharp_channel_check_connectivity_state_delegate_BeginInvoke_m8D8BF4032849D6E955F8A50EDC27DC5EE5CBD120 (void);
// 0x000002BA Grpc.Core.ChannelState Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_check_connectivity_state_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_channel_check_connectivity_state_delegate_EndInvoke_mA3DAA589D539FC82FF2CC67CA6B53E4CF51BB4AE (void);
// 0x000002BB System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_watch_connectivity_state_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_channel_watch_connectivity_state_delegate__ctor_m280A018FB6AC2D2AE59D844F2E592926B0BE6635 (void);
// 0x000002BC System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_watch_connectivity_state_delegate::Invoke(Grpc.Core.Internal.ChannelSafeHandle,Grpc.Core.ChannelState,Grpc.Core.Internal.Timespec,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_channel_watch_connectivity_state_delegate_Invoke_m6D62EA5278F5B06D24D8E9A2BD5E593A1588FFFA (void);
// 0x000002BD System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_watch_connectivity_state_delegate::BeginInvoke(Grpc.Core.Internal.ChannelSafeHandle,Grpc.Core.ChannelState,Grpc.Core.Internal.Timespec,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_channel_watch_connectivity_state_delegate_BeginInvoke_m91FFD3140C747C314B8CD7B336BCB2AAD9C70503 (void);
// 0x000002BE System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_watch_connectivity_state_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_channel_watch_connectivity_state_delegate_EndInvoke_mCC1474BF07B559576706CE706D30CF4C78EDDD39 (void);
// 0x000002BF System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_get_target_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_channel_get_target_delegate__ctor_mCEB6EE5DAA6768C818F5CEC56AAB95E95AD34750 (void);
// 0x000002C0 Grpc.Core.Internal.CStringSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_get_target_delegate::Invoke(Grpc.Core.Internal.ChannelSafeHandle)
extern void grpcsharp_channel_get_target_delegate_Invoke_m7DD023AC7E6A7DA950C5E2222FB36869B9CD45EC (void);
// 0x000002C1 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_get_target_delegate::BeginInvoke(Grpc.Core.Internal.ChannelSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_channel_get_target_delegate_BeginInvoke_mF06322884A4CBBD894F5387E0005285D641F3231 (void);
// 0x000002C2 Grpc.Core.Internal.CStringSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_get_target_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_channel_get_target_delegate_EndInvoke_m4849A90549AFF06776A6F12A8AE759FA8C7E70E2 (void);
// 0x000002C3 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_destroy_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_channel_destroy_delegate__ctor_m266E6BC61F3D2131DA5BB24C9FBCD2422FD063D5 (void);
// 0x000002C4 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_destroy_delegate::Invoke(System.IntPtr)
extern void grpcsharp_channel_destroy_delegate_Invoke_m6EE93CB799397EBA0441060132E6A49520708530 (void);
// 0x000002C5 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_destroy_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_channel_destroy_delegate_BeginInvoke_mBDCE054551A3E113F57C71D3FB1670F07FFF45A3 (void);
// 0x000002C6 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_destroy_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_channel_destroy_delegate_EndInvoke_m161A45DF31D6A38302A1FC0E062588EBD6E0D19D (void);
// 0x000002C7 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_sizeof_grpc_event_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_sizeof_grpc_event_delegate__ctor_m85404E1AEDD3CAB00EA8F804B8155E378F74FEAF (void);
// 0x000002C8 System.Int32 Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_sizeof_grpc_event_delegate::Invoke()
extern void grpcsharp_sizeof_grpc_event_delegate_Invoke_m74809DEB824772E31ADA68D7D5BDCD10FC707223 (void);
// 0x000002C9 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_sizeof_grpc_event_delegate::BeginInvoke(System.AsyncCallback,System.Object)
extern void grpcsharp_sizeof_grpc_event_delegate_BeginInvoke_m88E7696A8973D5F5F4B391A2C9CE627D05F1E927 (void);
// 0x000002CA System.Int32 Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_sizeof_grpc_event_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_sizeof_grpc_event_delegate_EndInvoke_m0CE45020BBB25CA05C42E3A72FE7DC10214E08F5 (void);
// 0x000002CB System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_create_async_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_completion_queue_create_async_delegate__ctor_mC39452420682B1519C2BAB2F45B9706999D66BEA (void);
// 0x000002CC Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_create_async_delegate::Invoke()
extern void grpcsharp_completion_queue_create_async_delegate_Invoke_m3BC8281D671846FFD8A54613BE81F968F5F54D45 (void);
// 0x000002CD System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_create_async_delegate::BeginInvoke(System.AsyncCallback,System.Object)
extern void grpcsharp_completion_queue_create_async_delegate_BeginInvoke_m2C51189D5C6E3A8FC511FAC020EFCA1F694F40AC (void);
// 0x000002CE Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_create_async_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_completion_queue_create_async_delegate_EndInvoke_mA82D2090C1E83D6B9982A3CB15ADD78FC636E0A4 (void);
// 0x000002CF System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_create_sync_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_completion_queue_create_sync_delegate__ctor_m27AAC5DCF66E021FAF1ECBE7DFC2575FABC740AA (void);
// 0x000002D0 Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_create_sync_delegate::Invoke()
extern void grpcsharp_completion_queue_create_sync_delegate_Invoke_m06EF6BFA7FCF77947932A70728F7A533606504A0 (void);
// 0x000002D1 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_create_sync_delegate::BeginInvoke(System.AsyncCallback,System.Object)
extern void grpcsharp_completion_queue_create_sync_delegate_BeginInvoke_m008F71CB34413C70E38B59D2DF4D60A07D34A110 (void);
// 0x000002D2 Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_create_sync_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_completion_queue_create_sync_delegate_EndInvoke_mECBD7F130FA14D487D97D75A5D373A10D738290A (void);
// 0x000002D3 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_shutdown_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_completion_queue_shutdown_delegate__ctor_m29B5600DA969A84D82A2AB46127B42F5F539EF79 (void);
// 0x000002D4 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_shutdown_delegate::Invoke(Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void grpcsharp_completion_queue_shutdown_delegate_Invoke_mC1E1FDE415E9545B35E52273447F99CF616A0809 (void);
// 0x000002D5 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_shutdown_delegate::BeginInvoke(Grpc.Core.Internal.CompletionQueueSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_completion_queue_shutdown_delegate_BeginInvoke_mBC48F8A794126668ADD843CFF7A469C7DFC0DCDD (void);
// 0x000002D6 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_shutdown_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_completion_queue_shutdown_delegate_EndInvoke_mEE6BF731B72DE2B1E4B47FFC3E6513A61A4944D1 (void);
// 0x000002D7 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_next_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_completion_queue_next_delegate__ctor_m3C34AC4009298E44DE6E20D5719AE23659EE1030 (void);
// 0x000002D8 Grpc.Core.Internal.CompletionQueueEvent Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_next_delegate::Invoke(Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void grpcsharp_completion_queue_next_delegate_Invoke_m09A112CE0A676B9162F019C0CE07920801960BA6 (void);
// 0x000002D9 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_next_delegate::BeginInvoke(Grpc.Core.Internal.CompletionQueueSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_completion_queue_next_delegate_BeginInvoke_mB5D56FBC68C632E293089FD52BE07BEFAD60EDE0 (void);
// 0x000002DA Grpc.Core.Internal.CompletionQueueEvent Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_next_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_completion_queue_next_delegate_EndInvoke_mA5BA1D66EB89C494D86CEEF9DF8184B3A9D62A50 (void);
// 0x000002DB System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_pluck_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_completion_queue_pluck_delegate__ctor_m37D7AB87B2F15E2A8E50D5749D1A18E38D8E833D (void);
// 0x000002DC Grpc.Core.Internal.CompletionQueueEvent Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_pluck_delegate::Invoke(Grpc.Core.Internal.CompletionQueueSafeHandle,System.IntPtr)
extern void grpcsharp_completion_queue_pluck_delegate_Invoke_m12ECDC6AE3C5CBBF4F4D9358B1BF7FE63EB3D598 (void);
// 0x000002DD System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_pluck_delegate::BeginInvoke(Grpc.Core.Internal.CompletionQueueSafeHandle,System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_completion_queue_pluck_delegate_BeginInvoke_mA4F4B614A27C74194E8FAC3A00127E9B234E6AF8 (void);
// 0x000002DE Grpc.Core.Internal.CompletionQueueEvent Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_pluck_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_completion_queue_pluck_delegate_EndInvoke_mCAD7B9A04CA3E794651F75D8E058ACD473915773 (void);
// 0x000002DF System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_destroy_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_completion_queue_destroy_delegate__ctor_mACEBF4B4E0C55B5CCC3DE17750D48F7303D41764 (void);
// 0x000002E0 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_destroy_delegate::Invoke(System.IntPtr)
extern void grpcsharp_completion_queue_destroy_delegate_Invoke_m558D247CAE91E7D76C4512C038C0873C2E7E75C6 (void);
// 0x000002E1 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_destroy_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_completion_queue_destroy_delegate_BeginInvoke_mAAD81B46879FF6A95CB82C9EB96C599F0A37430A (void);
// 0x000002E2 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_destroy_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_completion_queue_destroy_delegate_EndInvoke_m51E3DB8BD823D0663903BBD8CBAA48C4061F3379 (void);
// 0x000002E3 System.Void Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_free_delegate::.ctor(System.Object,System.IntPtr)
extern void gprsharp_free_delegate__ctor_m8905045C9D51B9AE1EA36CA6079967D2DA02A15D (void);
// 0x000002E4 System.Void Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_free_delegate::Invoke(System.IntPtr)
extern void gprsharp_free_delegate_Invoke_m6155795DC7F57D606D6CEEDBB70EE3F2DC672E55 (void);
// 0x000002E5 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_free_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void gprsharp_free_delegate_BeginInvoke_m459C5CE4EF80B3604ED0F2A5630FAA067B846586 (void);
// 0x000002E6 System.Void Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_free_delegate::EndInvoke(System.IAsyncResult)
extern void gprsharp_free_delegate_EndInvoke_m966FADB094A2B038544A83441B53FE8B3BE88EEA (void);
// 0x000002E7 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_create_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_metadata_array_create_delegate__ctor_mD1137324754784FF30EC3BFC72422205315D5836 (void);
// 0x000002E8 Grpc.Core.Internal.MetadataArraySafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_create_delegate::Invoke(System.UIntPtr)
extern void grpcsharp_metadata_array_create_delegate_Invoke_m2B32FAC2F09D4C2A33662725C821D3D5686D87D8 (void);
// 0x000002E9 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_create_delegate::BeginInvoke(System.UIntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_metadata_array_create_delegate_BeginInvoke_mF7A0D6C5986213CE0DDE024276645F695150050A (void);
// 0x000002EA Grpc.Core.Internal.MetadataArraySafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_create_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_metadata_array_create_delegate_EndInvoke_m0F01DB91453FEE82996F5E6AE87757F228C8E8E1 (void);
// 0x000002EB System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_add_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_metadata_array_add_delegate__ctor_mACDA48394110986F34D12C469C97AFF2F9014C06 (void);
// 0x000002EC System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_add_delegate::Invoke(Grpc.Core.Internal.MetadataArraySafeHandle,System.String,System.Byte[],System.UIntPtr)
extern void grpcsharp_metadata_array_add_delegate_Invoke_mAD45EA3842A51983707C80E95A16DD9EF3E12840 (void);
// 0x000002ED System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_add_delegate::BeginInvoke(Grpc.Core.Internal.MetadataArraySafeHandle,System.String,System.Byte[],System.UIntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_metadata_array_add_delegate_BeginInvoke_m60249AC899316B67F6946BBE5D905FF6A2FECD2E (void);
// 0x000002EE System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_add_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_metadata_array_add_delegate_EndInvoke_m03716B519265EA083CC6DC6C0DA88653B0A8747C (void);
// 0x000002EF System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_count_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_metadata_array_count_delegate__ctor_mB6FEF530C8E45FBE577A5E35FA595C25E42679C2 (void);
// 0x000002F0 System.UIntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_count_delegate::Invoke(System.IntPtr)
extern void grpcsharp_metadata_array_count_delegate_Invoke_mC634D7371972B23361475759ED246CE36FFD2CA1 (void);
// 0x000002F1 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_count_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_metadata_array_count_delegate_BeginInvoke_mCCF58DE2D5E52F245E7292D942DBEB69A0EAA0DB (void);
// 0x000002F2 System.UIntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_count_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_metadata_array_count_delegate_EndInvoke_mC4F1EBDA39EB3B5016F95EB2640B2EC8AC8CD0A4 (void);
// 0x000002F3 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_get_key_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_metadata_array_get_key_delegate__ctor_m0AB339911FA0D34966655D3E3CCD7193C5FB00BD (void);
// 0x000002F4 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_get_key_delegate::Invoke(System.IntPtr,System.UIntPtr,System.UIntPtr&)
extern void grpcsharp_metadata_array_get_key_delegate_Invoke_m6E74BD60A15F3B93E4F166FCA4FFF9252E614AC6 (void);
// 0x000002F5 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_get_key_delegate::BeginInvoke(System.IntPtr,System.UIntPtr,System.UIntPtr&,System.AsyncCallback,System.Object)
extern void grpcsharp_metadata_array_get_key_delegate_BeginInvoke_mCD5A18A87A6542FDB3D426E692ED68D954E574EE (void);
// 0x000002F6 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_get_key_delegate::EndInvoke(System.UIntPtr&,System.IAsyncResult)
extern void grpcsharp_metadata_array_get_key_delegate_EndInvoke_m7F5AF3E7F0232539959CB3FB0A0033E45AA4E23E (void);
// 0x000002F7 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_get_value_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_metadata_array_get_value_delegate__ctor_m3B5D75FC5674D6C8D0C88C9DEDF0FCA12A55926F (void);
// 0x000002F8 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_get_value_delegate::Invoke(System.IntPtr,System.UIntPtr,System.UIntPtr&)
extern void grpcsharp_metadata_array_get_value_delegate_Invoke_mA838D5B9BD96F491A45D9A926A2145FF79A9F188 (void);
// 0x000002F9 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_get_value_delegate::BeginInvoke(System.IntPtr,System.UIntPtr,System.UIntPtr&,System.AsyncCallback,System.Object)
extern void grpcsharp_metadata_array_get_value_delegate_BeginInvoke_m84E173AB37BBA86EB64F1E8537395CB3E8C098A1 (void);
// 0x000002FA System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_get_value_delegate::EndInvoke(System.UIntPtr&,System.IAsyncResult)
extern void grpcsharp_metadata_array_get_value_delegate_EndInvoke_mDC09069D799386A4FB239E2285BAFF3309765776 (void);
// 0x000002FB System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_destroy_full_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_metadata_array_destroy_full_delegate__ctor_m784BF57ED152F3468C3263E8AF12B36B3BA128C8 (void);
// 0x000002FC System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_destroy_full_delegate::Invoke(System.IntPtr)
extern void grpcsharp_metadata_array_destroy_full_delegate_Invoke_mDD025C1106F57E5DC87228F46E134038FD1C82EA (void);
// 0x000002FD System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_destroy_full_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_metadata_array_destroy_full_delegate_BeginInvoke_m7A7D97F529E7FD99FCFE514CE562F04C22452992 (void);
// 0x000002FE System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_destroy_full_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_metadata_array_destroy_full_delegate_EndInvoke_m65EE91916158A86F4C982CAFBDBDE89D03E36FBF (void);
// 0x000002FF System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_redirect_log_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_redirect_log_delegate__ctor_m6282ADC2C64CEB5C06A7CFD0B5A403BF7B913E12 (void);
// 0x00000300 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_redirect_log_delegate::Invoke(Grpc.Core.Internal.GprLogDelegate)
extern void grpcsharp_redirect_log_delegate_Invoke_mABC82DBB1D1258023776C8BA44BED022FD1196C4 (void);
// 0x00000301 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_redirect_log_delegate::BeginInvoke(Grpc.Core.Internal.GprLogDelegate,System.AsyncCallback,System.Object)
extern void grpcsharp_redirect_log_delegate_BeginInvoke_m054A1FD06D2B52BF3D08740F37054F959E75CDC4 (void);
// 0x00000302 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_redirect_log_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_redirect_log_delegate_EndInvoke_m1B1EAF49C0854095E8772A2D22AE8C88889ECFBD (void);
// 0x00000303 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_native_callback_dispatcher_init_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_native_callback_dispatcher_init_delegate__ctor_m67C754725FE42BABFF8C51CCF5A267E354EB61DB (void);
// 0x00000304 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_native_callback_dispatcher_init_delegate::Invoke(Grpc.Core.Internal.NativeCallbackDispatcherCallback)
extern void grpcsharp_native_callback_dispatcher_init_delegate_Invoke_mDB1C2AADC21396DE47E308879B79BB97767BC667 (void);
// 0x00000305 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_native_callback_dispatcher_init_delegate::BeginInvoke(Grpc.Core.Internal.NativeCallbackDispatcherCallback,System.AsyncCallback,System.Object)
extern void grpcsharp_native_callback_dispatcher_init_delegate_BeginInvoke_m44673A7A2A7A2E9ED2C2E3570C4DB1F04A803CA8 (void);
// 0x00000306 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_native_callback_dispatcher_init_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_native_callback_dispatcher_init_delegate_EndInvoke_mE8A1B4B642073045880B5B67B2F6F42DEA07D1E0 (void);
// 0x00000307 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_credentials_create_from_plugin_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_metadata_credentials_create_from_plugin_delegate__ctor_m72CE32961A1BD09BB5B39B8ADD59019D0B0230DE (void);
// 0x00000308 Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_credentials_create_from_plugin_delegate::Invoke(System.IntPtr)
extern void grpcsharp_metadata_credentials_create_from_plugin_delegate_Invoke_mE2BA2E025BB4FDF302180FF149CC860743259CB2 (void);
// 0x00000309 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_credentials_create_from_plugin_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_metadata_credentials_create_from_plugin_delegate_BeginInvoke_m7C456E7617406FC2E19E40709BBB6B8D2203BB57 (void);
// 0x0000030A Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_credentials_create_from_plugin_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_metadata_credentials_create_from_plugin_delegate_EndInvoke_m8840400A1C60D6C3FA5E9E44740929AAAB86B982 (void);
// 0x0000030B System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_credentials_notify_from_plugin_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_metadata_credentials_notify_from_plugin_delegate__ctor_mF8B2A95FD2289FFB9B1D2B836151FE61D4A866A1 (void);
// 0x0000030C System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_credentials_notify_from_plugin_delegate::Invoke(System.IntPtr,System.IntPtr,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.StatusCode,System.String)
extern void grpcsharp_metadata_credentials_notify_from_plugin_delegate_Invoke_m1BAA35D55233C042A618FB9F29B5E6A206D6698A (void);
// 0x0000030D System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_credentials_notify_from_plugin_delegate::BeginInvoke(System.IntPtr,System.IntPtr,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.StatusCode,System.String,System.AsyncCallback,System.Object)
extern void grpcsharp_metadata_credentials_notify_from_plugin_delegate_BeginInvoke_m5D53E0D242AB248B5121EC14EB9284BDA46782DB (void);
// 0x0000030E System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_credentials_notify_from_plugin_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_metadata_credentials_notify_from_plugin_delegate_EndInvoke_m2B80C5069E2AA9FE2E9536F6B48D3CFB2584112E (void);
// 0x0000030F System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_ssl_server_credentials_create_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_ssl_server_credentials_create_delegate__ctor_m9EDE66B7E0F6BE1434D7E58200ADCB724F0CC0F6 (void);
// 0x00000310 Grpc.Core.Internal.ServerCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_ssl_server_credentials_create_delegate::Invoke(System.String,System.String[],System.String[],System.UIntPtr,Grpc.Core.SslClientCertificateRequestType)
extern void grpcsharp_ssl_server_credentials_create_delegate_Invoke_m276B6AC10072DB1B096100447E1DCBB223D2C23D (void);
// 0x00000311 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_ssl_server_credentials_create_delegate::BeginInvoke(System.String,System.String[],System.String[],System.UIntPtr,Grpc.Core.SslClientCertificateRequestType,System.AsyncCallback,System.Object)
extern void grpcsharp_ssl_server_credentials_create_delegate_BeginInvoke_m56B1443970AC37C93C3111502AD5B35DA83BCB7A (void);
// 0x00000312 Grpc.Core.Internal.ServerCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_ssl_server_credentials_create_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_ssl_server_credentials_create_delegate_EndInvoke_m13A35B8552AFFF02458C869A9B76BD198897C909 (void);
// 0x00000313 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_credentials_release_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_server_credentials_release_delegate__ctor_m02B205ADC97E896C2DD4A78FEB35B4AD280EEC0E (void);
// 0x00000314 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_credentials_release_delegate::Invoke(System.IntPtr)
extern void grpcsharp_server_credentials_release_delegate_Invoke_m3B691B596B906EA71E6AF60686282144729E4407 (void);
// 0x00000315 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_credentials_release_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_server_credentials_release_delegate_BeginInvoke_m8FF38427110E7C35366BB966BABE9F7B8ED52A83 (void);
// 0x00000316 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_credentials_release_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_server_credentials_release_delegate_EndInvoke_m18C1BBFDA6A53B3BD2817FB3D0763DFB2C1DEDC9 (void);
// 0x00000317 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_create_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_server_create_delegate__ctor_m290956B4BBC7492F4EE9BAF95D2DD372092C0CA9 (void);
// 0x00000318 Grpc.Core.Internal.ServerSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_create_delegate::Invoke(Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void grpcsharp_server_create_delegate_Invoke_m262334F57656A3E9FD98D6F4A3805F057FC100C8 (void);
// 0x00000319 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_create_delegate::BeginInvoke(Grpc.Core.Internal.ChannelArgsSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_server_create_delegate_BeginInvoke_mEB10CF2A46C4214D60C0E8A4A15A2CB1918DDBAA (void);
// 0x0000031A Grpc.Core.Internal.ServerSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_create_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_server_create_delegate_EndInvoke_m87649BEB2E8418BAE3CA9BBE334840FC5C5C6022 (void);
// 0x0000031B System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_register_completion_queue_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_server_register_completion_queue_delegate__ctor_m847C8B7C472C36887545B642F4BC5D5BA1E6BD91 (void);
// 0x0000031C System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_register_completion_queue_delegate::Invoke(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void grpcsharp_server_register_completion_queue_delegate_Invoke_m6ED03F6FBD3FCFA73D3C8AD6E093F7EF75A774DB (void);
// 0x0000031D System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_register_completion_queue_delegate::BeginInvoke(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_server_register_completion_queue_delegate_BeginInvoke_mCD4DDECE57DD7508225FC96B457FD12EFB513F63 (void);
// 0x0000031E System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_register_completion_queue_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_server_register_completion_queue_delegate_EndInvoke_m6924A534CD4F9619E77E5C582CB239C86764FCCC (void);
// 0x0000031F System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_add_insecure_http2_port_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_server_add_insecure_http2_port_delegate__ctor_mD388436EC0567226D2BDD7122388D4DB3DDA7B34 (void);
// 0x00000320 System.Int32 Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_add_insecure_http2_port_delegate::Invoke(Grpc.Core.Internal.ServerSafeHandle,System.String)
extern void grpcsharp_server_add_insecure_http2_port_delegate_Invoke_m3CEB811646D745E956A73855778DC70A392ABB62 (void);
// 0x00000321 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_add_insecure_http2_port_delegate::BeginInvoke(Grpc.Core.Internal.ServerSafeHandle,System.String,System.AsyncCallback,System.Object)
extern void grpcsharp_server_add_insecure_http2_port_delegate_BeginInvoke_mB1AAD964FC2793877CB61C081CB05F65C6111524 (void);
// 0x00000322 System.Int32 Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_add_insecure_http2_port_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_server_add_insecure_http2_port_delegate_EndInvoke_m697A09B3EF968FE259ACE530E897932AB8807653 (void);
// 0x00000323 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_add_secure_http2_port_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_server_add_secure_http2_port_delegate__ctor_m5DCA42CD464C102F9EDC9546FF837CAC34D30B48 (void);
// 0x00000324 System.Int32 Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_add_secure_http2_port_delegate::Invoke(Grpc.Core.Internal.ServerSafeHandle,System.String,Grpc.Core.Internal.ServerCredentialsSafeHandle)
extern void grpcsharp_server_add_secure_http2_port_delegate_Invoke_m78CAFFA26CD9D53ED443B921DF4D8F4A2566CEEF (void);
// 0x00000325 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_add_secure_http2_port_delegate::BeginInvoke(Grpc.Core.Internal.ServerSafeHandle,System.String,Grpc.Core.Internal.ServerCredentialsSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_server_add_secure_http2_port_delegate_BeginInvoke_m938591B26FDFAA2F526B6F6EBEC9567CCCFE1492 (void);
// 0x00000326 System.Int32 Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_add_secure_http2_port_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_server_add_secure_http2_port_delegate_EndInvoke_mC3B8FF57CBE73FBAFAA6484CE509B4E0F765AB5F (void);
// 0x00000327 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_start_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_server_start_delegate__ctor_mAD7C85B5B1D67794456F8EA52BE49C03C7361287 (void);
// 0x00000328 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_start_delegate::Invoke(Grpc.Core.Internal.ServerSafeHandle)
extern void grpcsharp_server_start_delegate_Invoke_mDC67C18716EC016485EA6E6688D00E04637E9D7F (void);
// 0x00000329 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_start_delegate::BeginInvoke(Grpc.Core.Internal.ServerSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_server_start_delegate_BeginInvoke_m3BB67E3B82BD67778B41B89415F1DC1EC846C0C1 (void);
// 0x0000032A System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_start_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_server_start_delegate_EndInvoke_m1BEFD6CAB434EFE6DA6AC975B88674E4CC8196C3 (void);
// 0x0000032B System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_request_call_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_server_request_call_delegate__ctor_m344EE0C1F637B45A661C9D7E349B9D337B3BE3F1 (void);
// 0x0000032C Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_request_call_delegate::Invoke(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void grpcsharp_server_request_call_delegate_Invoke_m7C652A0D94E79C6E490891CF1647A69069E2EC6C (void);
// 0x0000032D System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_request_call_delegate::BeginInvoke(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.RequestCallContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_server_request_call_delegate_BeginInvoke_mE8BDC9F856CF76E15870816426D47ECD4B3129B1 (void);
// 0x0000032E Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_request_call_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_server_request_call_delegate_EndInvoke_mC1D77C6EDCF9C8B69BE68BFAD0C21094822024F0 (void);
// 0x0000032F System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_cancel_all_calls_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_server_cancel_all_calls_delegate__ctor_m64750B34E525F1BF762A2B000CACFF1920F5027C (void);
// 0x00000330 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_cancel_all_calls_delegate::Invoke(Grpc.Core.Internal.ServerSafeHandle)
extern void grpcsharp_server_cancel_all_calls_delegate_Invoke_mF4CBE95B7FEB7134849F89AC4243057FDF2D278A (void);
// 0x00000331 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_cancel_all_calls_delegate::BeginInvoke(Grpc.Core.Internal.ServerSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_server_cancel_all_calls_delegate_BeginInvoke_mBFD8BB8023AED587ADA8B20D048131D9FE5D48EC (void);
// 0x00000332 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_cancel_all_calls_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_server_cancel_all_calls_delegate_EndInvoke_m4AC5032733A79C800A3F142482621805BE1F9F46 (void);
// 0x00000333 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_shutdown_and_notify_callback_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_server_shutdown_and_notify_callback_delegate__ctor_m02240DDA0177B91D8F278FD694388719CF7CFBC5 (void);
// 0x00000334 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_shutdown_and_notify_callback_delegate::Invoke(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_server_shutdown_and_notify_callback_delegate_Invoke_mF6E90F91D86A6088CF6CB19AD863760DC29896A5 (void);
// 0x00000335 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_shutdown_and_notify_callback_delegate::BeginInvoke(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_server_shutdown_and_notify_callback_delegate_BeginInvoke_m7376F1C1229678D6ECB313D03298073B93AA9027 (void);
// 0x00000336 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_shutdown_and_notify_callback_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_server_shutdown_and_notify_callback_delegate_EndInvoke_mC2F251D9C206D4787BB772E34AA69974DD6AB618 (void);
// 0x00000337 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_destroy_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_server_destroy_delegate__ctor_m8F3B79C25AD3CC8A77ED5F2740FA6BCF2B089270 (void);
// 0x00000338 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_destroy_delegate::Invoke(System.IntPtr)
extern void grpcsharp_server_destroy_delegate_Invoke_mD58661B8C472FAEC5ABED8AF9F54C81351D36E1C (void);
// 0x00000339 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_destroy_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_server_destroy_delegate_BeginInvoke_m0694FA117ACAC598ED8B82E9482AEDCF5A937E1F (void);
// 0x0000033A System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_destroy_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_server_destroy_delegate_EndInvoke_mDA14AEFE5D5B5E5862E5021A66A555747408D000 (void);
// 0x0000033B System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_auth_context_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_auth_context_delegate__ctor_mDCC6527CDAB9650D39A6171CA4839FCA4B7E5ED8 (void);
// 0x0000033C Grpc.Core.Internal.AuthContextSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_auth_context_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle)
extern void grpcsharp_call_auth_context_delegate_Invoke_mA03C297B9C42DB06E3760D68111C7F704E4EEDA3 (void);
// 0x0000033D System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_auth_context_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_call_auth_context_delegate_BeginInvoke_m8B3901B4225B727A5C75D95CDBB5148E44A18E8B (void);
// 0x0000033E Grpc.Core.Internal.AuthContextSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_auth_context_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_auth_context_delegate_EndInvoke_mF0F6A7BF9832ACDC44922A391383FF782FC11082 (void);
// 0x0000033F System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_peer_identity_property_name_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_auth_context_peer_identity_property_name_delegate__ctor_m7ADBDB8EBBE69C14A9CBD6FC6530A76558B38AFD (void);
// 0x00000340 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_peer_identity_property_name_delegate::Invoke(Grpc.Core.Internal.AuthContextSafeHandle)
extern void grpcsharp_auth_context_peer_identity_property_name_delegate_Invoke_m13468FB4B5CF7374C64E114A6F8FAE83004D0CA2 (void);
// 0x00000341 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_peer_identity_property_name_delegate::BeginInvoke(Grpc.Core.Internal.AuthContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_auth_context_peer_identity_property_name_delegate_BeginInvoke_mDEC6C62B52F0D901D2F2E9CD5DFA6B2105396E79 (void);
// 0x00000342 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_peer_identity_property_name_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_auth_context_peer_identity_property_name_delegate_EndInvoke_m5E644B4B8E47A11F44FEB33CC216F7583D0C1C9D (void);
// 0x00000343 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_property_iterator_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_auth_context_property_iterator_delegate__ctor_m3732109AD60F839927AB151B8B58E3A72A15CDA1 (void);
// 0x00000344 Grpc.Core.Internal.AuthContextSafeHandle/NativeAuthPropertyIterator Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_property_iterator_delegate::Invoke(Grpc.Core.Internal.AuthContextSafeHandle)
extern void grpcsharp_auth_context_property_iterator_delegate_Invoke_mC88FEC8FC6F2ED77BE7110146A49FD363BCC67EB (void);
// 0x00000345 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_property_iterator_delegate::BeginInvoke(Grpc.Core.Internal.AuthContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_auth_context_property_iterator_delegate_BeginInvoke_mDD1AC6FB5FF76905AAF729F18BBC4777F633908E (void);
// 0x00000346 Grpc.Core.Internal.AuthContextSafeHandle/NativeAuthPropertyIterator Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_property_iterator_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_auth_context_property_iterator_delegate_EndInvoke_m2F30D0CFEBB2B89C92475545A8CE5DB2353EEE79 (void);
// 0x00000347 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_property_iterator_next_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_auth_property_iterator_next_delegate__ctor_mE88CF6D183E876D90B6B9E8E2637CA34BF8837EB (void);
// 0x00000348 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_property_iterator_next_delegate::Invoke(Grpc.Core.Internal.AuthContextSafeHandle/NativeAuthPropertyIterator&)
extern void grpcsharp_auth_property_iterator_next_delegate_Invoke_mFB7746782330E6CA1D309288BCC830E78B5EA2A4 (void);
// 0x00000349 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_property_iterator_next_delegate::BeginInvoke(Grpc.Core.Internal.AuthContextSafeHandle/NativeAuthPropertyIterator&,System.AsyncCallback,System.Object)
extern void grpcsharp_auth_property_iterator_next_delegate_BeginInvoke_mEC445C1634EDBD2ADE20595551998E5423E9CD21 (void);
// 0x0000034A System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_property_iterator_next_delegate::EndInvoke(Grpc.Core.Internal.AuthContextSafeHandle/NativeAuthPropertyIterator&,System.IAsyncResult)
extern void grpcsharp_auth_property_iterator_next_delegate_EndInvoke_mE39CB77BBDF1A33ACAB3D601F7618A3E14D37E67 (void);
// 0x0000034B System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_release_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_auth_context_release_delegate__ctor_m32713955E03E7861D9B86FFE1FA23F3D0A5F6FA4 (void);
// 0x0000034C System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_release_delegate::Invoke(System.IntPtr)
extern void grpcsharp_auth_context_release_delegate_Invoke_m9BF4D632A33BF2E38C6A62E89828AC3DB61509E3 (void);
// 0x0000034D System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_release_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_auth_context_release_delegate_BeginInvoke_mE1AB913F857A86B120C2696F1EAAD2DB930E15D7 (void);
// 0x0000034E System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_release_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_auth_context_release_delegate_EndInvoke_m0DAC6A57B27FC608C724737F43193B0041670C45 (void);
// 0x0000034F System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_slice_buffer_create_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_slice_buffer_create_delegate__ctor_mD69ED8B04C6580C104BE6CC9A6BFC6FA4ECDA63C (void);
// 0x00000350 Grpc.Core.Internal.SliceBufferSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_slice_buffer_create_delegate::Invoke()
extern void grpcsharp_slice_buffer_create_delegate_Invoke_m31A3DF182D7EC742430BDBF9F608FECF60A8B058 (void);
// 0x00000351 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_slice_buffer_create_delegate::BeginInvoke(System.AsyncCallback,System.Object)
extern void grpcsharp_slice_buffer_create_delegate_BeginInvoke_mD9D59EE734BC31FD71FFE7FCD680CD8F5C30B641 (void);
// 0x00000352 Grpc.Core.Internal.SliceBufferSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_slice_buffer_create_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_slice_buffer_create_delegate_EndInvoke_m5B4D76677624336235E8C355E738ED3A514B25D8 (void);
// 0x00000353 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_slice_buffer_adjust_tail_space_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_slice_buffer_adjust_tail_space_delegate__ctor_mD3BA992D292CC137496B80E415521E2A48A56A64 (void);
// 0x00000354 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_slice_buffer_adjust_tail_space_delegate::Invoke(Grpc.Core.Internal.SliceBufferSafeHandle,System.UIntPtr,System.UIntPtr)
extern void grpcsharp_slice_buffer_adjust_tail_space_delegate_Invoke_mE6E049E62D008ADFC8EFCD3AD69F95E86657BE4E (void);
// 0x00000355 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_slice_buffer_adjust_tail_space_delegate::BeginInvoke(Grpc.Core.Internal.SliceBufferSafeHandle,System.UIntPtr,System.UIntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_slice_buffer_adjust_tail_space_delegate_BeginInvoke_m81B414EDDB20838C3FE455B6A908387457A234E0 (void);
// 0x00000356 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_slice_buffer_adjust_tail_space_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_slice_buffer_adjust_tail_space_delegate_EndInvoke_mB2904ADEAB3DEB2038A84EFE2B2575A95AEF06D9 (void);
// 0x00000357 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_slice_buffer_slice_count_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_slice_buffer_slice_count_delegate__ctor_mEAB0E5B44E1E30F3D2130A364561CC9BD91124AF (void);
// 0x00000358 System.UIntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_slice_buffer_slice_count_delegate::Invoke(Grpc.Core.Internal.SliceBufferSafeHandle)
extern void grpcsharp_slice_buffer_slice_count_delegate_Invoke_m730F8A729449952CF87BE7199839A548BA81DDCF (void);
// 0x00000359 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_slice_buffer_slice_count_delegate::BeginInvoke(Grpc.Core.Internal.SliceBufferSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_slice_buffer_slice_count_delegate_BeginInvoke_mA877D10EDEF1DE0775F5362EE6276BF258257EBE (void);
// 0x0000035A System.UIntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_slice_buffer_slice_count_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_slice_buffer_slice_count_delegate_EndInvoke_m4C22F9800FC4168BF93CD7082DDECE491D09231C (void);
// 0x0000035B System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_slice_buffer_slice_peek_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_slice_buffer_slice_peek_delegate__ctor_m1F8208823C977BE1679CF958913117DB395E0405 (void);
// 0x0000035C System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_slice_buffer_slice_peek_delegate::Invoke(Grpc.Core.Internal.SliceBufferSafeHandle,System.UIntPtr,System.UIntPtr&,System.IntPtr&)
extern void grpcsharp_slice_buffer_slice_peek_delegate_Invoke_m8FB8B8154F31765F94A129502F4F14B51C78D813 (void);
// 0x0000035D System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_slice_buffer_slice_peek_delegate::BeginInvoke(Grpc.Core.Internal.SliceBufferSafeHandle,System.UIntPtr,System.UIntPtr&,System.IntPtr&,System.AsyncCallback,System.Object)
extern void grpcsharp_slice_buffer_slice_peek_delegate_BeginInvoke_mBB73E4612766A41E8D2C11FC0DAF532852897B10 (void);
// 0x0000035E System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_slice_buffer_slice_peek_delegate::EndInvoke(System.UIntPtr&,System.IntPtr&,System.IAsyncResult)
extern void grpcsharp_slice_buffer_slice_peek_delegate_EndInvoke_mE7F541A87DE2AFE2D17A12140EA80983D8FA55B5 (void);
// 0x0000035F System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_slice_buffer_reset_and_unref_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_slice_buffer_reset_and_unref_delegate__ctor_m969AEAB4788A0EF34D960C3B287624B003A15E3B (void);
// 0x00000360 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_slice_buffer_reset_and_unref_delegate::Invoke(Grpc.Core.Internal.SliceBufferSafeHandle)
extern void grpcsharp_slice_buffer_reset_and_unref_delegate_Invoke_mA2F24E2568E6188071CC64DFCFE9DB2F83627F63 (void);
// 0x00000361 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_slice_buffer_reset_and_unref_delegate::BeginInvoke(Grpc.Core.Internal.SliceBufferSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_slice_buffer_reset_and_unref_delegate_BeginInvoke_m805A5AC9E233CA1DAA583A285919BB53B60C874A (void);
// 0x00000362 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_slice_buffer_reset_and_unref_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_slice_buffer_reset_and_unref_delegate_EndInvoke_m291FC9712A48C7D93024EABF7028019FB52BA635 (void);
// 0x00000363 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_slice_buffer_destroy_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_slice_buffer_destroy_delegate__ctor_m84751C364287F9A19A5C0F89A68A8310C06CD81B (void);
// 0x00000364 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_slice_buffer_destroy_delegate::Invoke(System.IntPtr)
extern void grpcsharp_slice_buffer_destroy_delegate_Invoke_m56F884E3EC2337FB858548BCD5B4157D4A905F9B (void);
// 0x00000365 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_slice_buffer_destroy_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_slice_buffer_destroy_delegate_BeginInvoke_m090AC77042015468AD1A30817C23E3C0B7F1FAAA (void);
// 0x00000366 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_slice_buffer_destroy_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_slice_buffer_destroy_delegate_EndInvoke_m01FEEC93804C2963EE992AE57EC9ADA0DB4CF229 (void);
// 0x00000367 System.Void Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_now_delegate::.ctor(System.Object,System.IntPtr)
extern void gprsharp_now_delegate__ctor_mB16A473BDAA6E0EAA1AD796652D1A4132BA1AD75 (void);
// 0x00000368 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_now_delegate::Invoke(Grpc.Core.Internal.ClockType)
extern void gprsharp_now_delegate_Invoke_mE254FCDAD3B5130716D9D30546592732561A34A5 (void);
// 0x00000369 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_now_delegate::BeginInvoke(Grpc.Core.Internal.ClockType,System.AsyncCallback,System.Object)
extern void gprsharp_now_delegate_BeginInvoke_mCD970DDF7117916155F940DD40B5773C0B51CED6 (void);
// 0x0000036A Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_now_delegate::EndInvoke(System.IAsyncResult)
extern void gprsharp_now_delegate_EndInvoke_mBFCFEF15D548B2B96B56096EE28DA7961788D2D5 (void);
// 0x0000036B System.Void Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_inf_future_delegate::.ctor(System.Object,System.IntPtr)
extern void gprsharp_inf_future_delegate__ctor_mCA5A0D4B8987BB115F2024DFA934348BCF887232 (void);
// 0x0000036C Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_inf_future_delegate::Invoke(Grpc.Core.Internal.ClockType)
extern void gprsharp_inf_future_delegate_Invoke_m50B926CAE780D86C765CDDE55F66BE0F95D24892 (void);
// 0x0000036D System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_inf_future_delegate::BeginInvoke(Grpc.Core.Internal.ClockType,System.AsyncCallback,System.Object)
extern void gprsharp_inf_future_delegate_BeginInvoke_m7F088F93FDFF1FD486C50AD8308A0B7E532FFD65 (void);
// 0x0000036E Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_inf_future_delegate::EndInvoke(System.IAsyncResult)
extern void gprsharp_inf_future_delegate_EndInvoke_m14D861496DE2E5343235098EC3844C98F01C8F2F (void);
// 0x0000036F System.Void Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_inf_past_delegate::.ctor(System.Object,System.IntPtr)
extern void gprsharp_inf_past_delegate__ctor_m3EBDA137A6789CDE0A2154D2B9106291609110FF (void);
// 0x00000370 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_inf_past_delegate::Invoke(Grpc.Core.Internal.ClockType)
extern void gprsharp_inf_past_delegate_Invoke_m4C611F1E88B3BC86B7BE8CDA0ED2378A64A71406 (void);
// 0x00000371 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_inf_past_delegate::BeginInvoke(Grpc.Core.Internal.ClockType,System.AsyncCallback,System.Object)
extern void gprsharp_inf_past_delegate_BeginInvoke_m748C52852C439ED07169754770138F3744A6967E (void);
// 0x00000372 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_inf_past_delegate::EndInvoke(System.IAsyncResult)
extern void gprsharp_inf_past_delegate_EndInvoke_m67E1BAA9385BB051729B3DE5CDB024B18C9C93F5 (void);
// 0x00000373 System.Void Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_convert_clock_type_delegate::.ctor(System.Object,System.IntPtr)
extern void gprsharp_convert_clock_type_delegate__ctor_m86754488603829F8D6D50E4FD403E4C9FD195A62 (void);
// 0x00000374 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_convert_clock_type_delegate::Invoke(Grpc.Core.Internal.Timespec,Grpc.Core.Internal.ClockType)
extern void gprsharp_convert_clock_type_delegate_Invoke_m2D6877D0B181E7FAB3C669F5E9B031EBF20B433C (void);
// 0x00000375 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_convert_clock_type_delegate::BeginInvoke(Grpc.Core.Internal.Timespec,Grpc.Core.Internal.ClockType,System.AsyncCallback,System.Object)
extern void gprsharp_convert_clock_type_delegate_BeginInvoke_m87E88931389D03DACF3342B463EF77CBF7887486 (void);
// 0x00000376 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_convert_clock_type_delegate::EndInvoke(System.IAsyncResult)
extern void gprsharp_convert_clock_type_delegate_EndInvoke_m568E0632F05A4D1DA79FD93D2119C25F97EDADC4 (void);
// 0x00000377 System.Void Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_sizeof_timespec_delegate::.ctor(System.Object,System.IntPtr)
extern void gprsharp_sizeof_timespec_delegate__ctor_mF3C3FF2D7BA1636E6EB25F807E36CE582617886B (void);
// 0x00000378 System.Int32 Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_sizeof_timespec_delegate::Invoke()
extern void gprsharp_sizeof_timespec_delegate_Invoke_mF28D02354B843BC10C89B2D178DE50F3B26DF875 (void);
// 0x00000379 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_sizeof_timespec_delegate::BeginInvoke(System.AsyncCallback,System.Object)
extern void gprsharp_sizeof_timespec_delegate_BeginInvoke_mBE26CE77DAA2B69DEDAF1449782CF24646E5DCA2 (void);
// 0x0000037A System.Int32 Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_sizeof_timespec_delegate::EndInvoke(System.IAsyncResult)
extern void gprsharp_sizeof_timespec_delegate_EndInvoke_m8FDC5D56CE4E1C3B1B5627154782B3D1BF6D551A (void);
// 0x0000037B System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_callback_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_test_callback_delegate__ctor_m0DB6D95DE2453C010A4512D76E80CB398F06BC68 (void);
// 0x0000037C Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_callback_delegate::Invoke(Grpc.Core.Internal.NativeCallbackTestDelegate)
extern void grpcsharp_test_callback_delegate_Invoke_m7254255A3248B37D2477B6E574ECF878663B01D2 (void);
// 0x0000037D System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_callback_delegate::BeginInvoke(Grpc.Core.Internal.NativeCallbackTestDelegate,System.AsyncCallback,System.Object)
extern void grpcsharp_test_callback_delegate_BeginInvoke_m3ABBFBA5316F6DCBEE786F3456D3E10F2E9CF74B (void);
// 0x0000037E Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_callback_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_test_callback_delegate_EndInvoke_mED7191D930CF427E740D4328FABBF2DC9AE37CC4 (void);
// 0x0000037F System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_nop_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_test_nop_delegate__ctor_mAA5E8F120C92E15F3188941F2E7BF2C848D76633 (void);
// 0x00000380 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_nop_delegate::Invoke(System.IntPtr)
extern void grpcsharp_test_nop_delegate_Invoke_mED4682C0DBA3CAD69432445E98B3AFCB07DA3447 (void);
// 0x00000381 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_nop_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_test_nop_delegate_BeginInvoke_m2C85F0541B15793FF0F83FDF614F05818E363A82 (void);
// 0x00000382 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_nop_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_test_nop_delegate_EndInvoke_mE57F88DF5D234D4F693DF9836F39763506CC2CDA (void);
// 0x00000383 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_override_method_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_test_override_method_delegate__ctor_mCC25D5A221694D4DF4A3E6373A4B88721101EC20 (void);
// 0x00000384 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_override_method_delegate::Invoke(System.String,System.String)
extern void grpcsharp_test_override_method_delegate_Invoke_mCB8B4D4BE4BE749DEEB8A8DF43253D8DA0C4E249 (void);
// 0x00000385 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_override_method_delegate::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
extern void grpcsharp_test_override_method_delegate_BeginInvoke_mD21CBBA455438ED878407B014F9C8366474C92EA (void);
// 0x00000386 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_override_method_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_test_override_method_delegate_EndInvoke_mE4A99E652185556957412EB2EC6FBC21398FE1CD (void);
// 0x00000387 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_call_start_unary_echo_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_test_call_start_unary_echo_delegate__ctor_mF3B82F0747F7C9D8C080B4E6FDDCA762AF9DD6EF (void);
// 0x00000388 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_call_start_unary_echo_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void grpcsharp_test_call_start_unary_echo_delegate_Invoke_mA1253F9ADE1CC61A72CDBF88B2422418FBFEE8FB (void);
// 0x00000389 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_call_start_unary_echo_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags,System.AsyncCallback,System.Object)
extern void grpcsharp_test_call_start_unary_echo_delegate_BeginInvoke_m4B08B9BB6326049BC3498624ADF8825668B14429 (void);
// 0x0000038A Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_call_start_unary_echo_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_test_call_start_unary_echo_delegate_EndInvoke_m7A41B911E51DCC0BE9854F134781E89ABCC8AFDA (void);
// 0x0000038B System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_init()
extern void DllImportsFromStaticLib_grpcsharp_init_mA924BAFCBC8D8F2A753BF82B589FBAE2D768AD26 (void);
// 0x0000038C System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_shutdown()
extern void DllImportsFromStaticLib_grpcsharp_shutdown_mD72B6EEDF91382FBCE414A8AB52E601583AF08A7 (void);
// 0x0000038D System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_version_string()
extern void DllImportsFromStaticLib_grpcsharp_version_string_m1E073BB55ECB61AEC1A1AB44EB848D5CE2C8D3A2 (void);
// 0x0000038E Grpc.Core.Internal.BatchContextSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_batch_context_create()
extern void DllImportsFromStaticLib_grpcsharp_batch_context_create_m0897C0D0172488F5601E44A36EA976D718E435A9 (void);
// 0x0000038F System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_batch_context_recv_initial_metadata(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_batch_context_recv_initial_metadata_mAD7C04F7CFB5B10685F3595591947B5A425F99BC (void);
// 0x00000390 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_batch_context_recv_message_length(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_batch_context_recv_message_length_m0F5C431F14D771C503A0D218A27A7BAA1492D04F (void);
// 0x00000391 System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_batch_context_recv_message_next_slice_peek(Grpc.Core.Internal.BatchContextSafeHandle,System.UIntPtr&,System.IntPtr&)
extern void DllImportsFromStaticLib_grpcsharp_batch_context_recv_message_next_slice_peek_m63E162D4A7033A89694E731B544C5F4B36D946E8 (void);
// 0x00000392 Grpc.Core.StatusCode Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_batch_context_recv_status_on_client_status(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_batch_context_recv_status_on_client_status_m28A27E94548589646A34174DB1931B2399873E3E (void);
// 0x00000393 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_batch_context_recv_status_on_client_details(Grpc.Core.Internal.BatchContextSafeHandle,System.UIntPtr&)
extern void DllImportsFromStaticLib_grpcsharp_batch_context_recv_status_on_client_details_m47025911C7EB1C84F802949CB067829F07C492B7 (void);
// 0x00000394 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_batch_context_recv_status_on_client_error_string(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_batch_context_recv_status_on_client_error_string_m598F536BB4C9852D1A04AC590D7F267B2BC2932F (void);
// 0x00000395 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_batch_context_recv_status_on_client_trailing_metadata(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_batch_context_recv_status_on_client_trailing_metadata_m564DED62C9588F8DABD331F53FA5982057309E58 (void);
// 0x00000396 System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_batch_context_recv_close_on_server_cancelled(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_batch_context_recv_close_on_server_cancelled_m84ADCCEA01FD2EA396AEFE6DA7EDD5E9DDC7D546 (void);
// 0x00000397 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_batch_context_reset(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_batch_context_reset_m8DF625E107AF740C5417B8CA52E77FC171A5B121 (void);
// 0x00000398 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_batch_context_destroy(System.IntPtr)
extern void DllImportsFromStaticLib_grpcsharp_batch_context_destroy_mB656342A481F06BB50BB3343EFC88FF84A0D22F8 (void);
// 0x00000399 Grpc.Core.Internal.RequestCallContextSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_request_call_context_create()
extern void DllImportsFromStaticLib_grpcsharp_request_call_context_create_mCC4B300F22C4F321345E23CF4BBBD2808329DC60 (void);
// 0x0000039A Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_request_call_context_call(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_request_call_context_call_m9A15273A5E5EAB5DA95561B02D65E38CF6B2AA1C (void);
// 0x0000039B System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_request_call_context_method(Grpc.Core.Internal.RequestCallContextSafeHandle,System.UIntPtr&)
extern void DllImportsFromStaticLib_grpcsharp_request_call_context_method_m78D6E4BBD67389EADF5DBBCDAA8F67DC8A9F3CD6 (void);
// 0x0000039C System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_request_call_context_host(Grpc.Core.Internal.RequestCallContextSafeHandle,System.UIntPtr&)
extern void DllImportsFromStaticLib_grpcsharp_request_call_context_host_m2C0206909226AEDCF4F31C22236ECC9AFF4BB006 (void);
// 0x0000039D Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_request_call_context_deadline(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_request_call_context_deadline_m851998681FF89FBFFE05C56A9EFCE23B619C7B48 (void);
// 0x0000039E System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_request_call_context_request_metadata(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_request_call_context_request_metadata_m5D45397D4E0D18CB0D2EA8CA591C75A913A14120 (void);
// 0x0000039F System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_request_call_context_reset(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_request_call_context_reset_m18887461E9E7FA40D7590AEE4ED7899DF0B40383 (void);
// 0x000003A0 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_request_call_context_destroy(System.IntPtr)
extern void DllImportsFromStaticLib_grpcsharp_request_call_context_destroy_m7B4A57BE8A32B78A372018754985C101DE375F2A (void);
// 0x000003A1 Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_composite_call_credentials_create(Grpc.Core.Internal.CallCredentialsSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_composite_call_credentials_create_mA54258D152BC1BA1361C29A0E1DEBC9AF97D84A2 (void);
// 0x000003A2 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_call_credentials_release(System.IntPtr)
extern void DllImportsFromStaticLib_grpcsharp_call_credentials_release_m9DAD3619D8AEFB9B1B9A265BDC5C2156075CE076 (void);
// 0x000003A3 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_call_cancel(Grpc.Core.Internal.CallSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_call_cancel_m6D003D48F4029395DB014C8E970FBECF55EDDFA9 (void);
// 0x000003A4 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_call_cancel_with_status(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.StatusCode,System.String)
extern void DllImportsFromStaticLib_grpcsharp_call_cancel_with_status_mB911D570E6E4736713796E1F02DE04362C8B3FDE (void);
// 0x000003A5 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_call_start_unary(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromStaticLib_grpcsharp_call_start_unary_m87D9FD6141E4F097C3E2384D4685A0F2B2EC9FB8 (void);
// 0x000003A6 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_call_start_client_streaming(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromStaticLib_grpcsharp_call_start_client_streaming_m8E6FDB648798473B5B3150D9C5E0FCF5C6A783F4 (void);
// 0x000003A7 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_call_start_server_streaming(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromStaticLib_grpcsharp_call_start_server_streaming_mCB66E849C531674540010A49EAD3AAEB909CA283 (void);
// 0x000003A8 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_call_start_duplex_streaming(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromStaticLib_grpcsharp_call_start_duplex_streaming_m36C884918036833079B8953D6BDAC3E912B2029A (void);
// 0x000003A9 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_call_send_message(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,System.Int32)
extern void DllImportsFromStaticLib_grpcsharp_call_send_message_m2DEE23985B6838D7EBAE9F8EA6A1F731896D3377 (void);
// 0x000003AA Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_call_send_close_from_client(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_call_send_close_from_client_mC821626D084785F9F740AE83AAF88A487902A31F (void);
// 0x000003AB Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_call_send_status_from_server(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.StatusCode,System.IntPtr,System.UIntPtr,Grpc.Core.Internal.MetadataArraySafeHandle,System.Int32,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags)
extern void DllImportsFromStaticLib_grpcsharp_call_send_status_from_server_m498CCBD79EB7D067152D494FB7546328E2F159F5 (void);
// 0x000003AC Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_call_recv_message(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_call_recv_message_m4533782C05F85A4E8A9BA649A06C5ABEA324518D (void);
// 0x000003AD Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_call_recv_initial_metadata(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_call_recv_initial_metadata_m6A26F641D5CB8F3213B6C8F3B3F11A32F5C0C5AE (void);
// 0x000003AE Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_call_start_serverside(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_call_start_serverside_mBDD7C28C5A9B4123907F34485CB1676F6A8C2B6D (void);
// 0x000003AF Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_call_send_initial_metadata(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_call_send_initial_metadata_m968F1AB0480DAF6C649780CB7D97ADC86717E677 (void);
// 0x000003B0 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_call_set_credentials(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_call_set_credentials_mC7364EF24310071510ACCE9221F5A0CFF0D6B8A9 (void);
// 0x000003B1 Grpc.Core.Internal.CStringSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_call_get_peer(Grpc.Core.Internal.CallSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_call_get_peer_mD8FB3F7A96A2A24B83C5FBBA235DD13B6BC80EFD (void);
// 0x000003B2 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_call_destroy(System.IntPtr)
extern void DllImportsFromStaticLib_grpcsharp_call_destroy_mE0E783DBE43C1BBB9EE867466C4F00BDB8A732E1 (void);
// 0x000003B3 Grpc.Core.Internal.ChannelArgsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_channel_args_create(System.UIntPtr)
extern void DllImportsFromStaticLib_grpcsharp_channel_args_create_m82C1AAA36928FD4CF938CDF7EAB381C32E6C5FFD (void);
// 0x000003B4 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_channel_args_set_string(Grpc.Core.Internal.ChannelArgsSafeHandle,System.UIntPtr,System.String,System.String)
extern void DllImportsFromStaticLib_grpcsharp_channel_args_set_string_mBA57457CF74F487831B4FC39B76BDA1F2FED384D (void);
// 0x000003B5 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_channel_args_set_integer(Grpc.Core.Internal.ChannelArgsSafeHandle,System.UIntPtr,System.String,System.Int32)
extern void DllImportsFromStaticLib_grpcsharp_channel_args_set_integer_m9DF4E2F75BA0A1A8E5BE85EFF8811068FC212E98 (void);
// 0x000003B6 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_channel_args_destroy(System.IntPtr)
extern void DllImportsFromStaticLib_grpcsharp_channel_args_destroy_mABB78306843E53BFFF3BFB0F252EAF12B727EF93 (void);
// 0x000003B7 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_override_default_ssl_roots(System.String)
extern void DllImportsFromStaticLib_grpcsharp_override_default_ssl_roots_m2D761A1D4DA428B81E8C2BBAC08765BA5D60F206 (void);
// 0x000003B8 Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_ssl_credentials_create(System.String,System.String,System.String,System.IntPtr)
extern void DllImportsFromStaticLib_grpcsharp_ssl_credentials_create_mFC267DB3F9E34B4805C8E79ED15AF069422871CE (void);
// 0x000003B9 Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_composite_channel_credentials_create(Grpc.Core.Internal.ChannelCredentialsSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_composite_channel_credentials_create_m08247C48E7AEF504951C7D309809A8F004EBF873 (void);
// 0x000003BA System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_channel_credentials_release(System.IntPtr)
extern void DllImportsFromStaticLib_grpcsharp_channel_credentials_release_m8941DA18C5847E724F08F7610EF578E7019DBBC4 (void);
// 0x000003BB Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_insecure_channel_create(System.String,Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_insecure_channel_create_mD5E76C9F973FA9F67589753DEF2F1F46A7EDA890 (void);
// 0x000003BC Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_secure_channel_create(Grpc.Core.Internal.ChannelCredentialsSafeHandle,System.String,Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_secure_channel_create_m15C406A39153AF103706AB82E3A4707D92B70327 (void);
// 0x000003BD Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_channel_create_call(Grpc.Core.Internal.ChannelSafeHandle,Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.ContextPropagationFlags,Grpc.Core.Internal.CompletionQueueSafeHandle,System.String,System.String,Grpc.Core.Internal.Timespec)
extern void DllImportsFromStaticLib_grpcsharp_channel_create_call_m95B44C72059852E3FA5188895FFCFB08AA532C40 (void);
// 0x000003BE Grpc.Core.ChannelState Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_channel_check_connectivity_state(Grpc.Core.Internal.ChannelSafeHandle,System.Int32)
extern void DllImportsFromStaticLib_grpcsharp_channel_check_connectivity_state_mDFFC88678B177F611E5654514CBAB8BF80E4068C (void);
// 0x000003BF System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_channel_watch_connectivity_state(Grpc.Core.Internal.ChannelSafeHandle,Grpc.Core.ChannelState,Grpc.Core.Internal.Timespec,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_channel_watch_connectivity_state_m377C22FCE73DED75F311956B1B2673E58632C0C2 (void);
// 0x000003C0 Grpc.Core.Internal.CStringSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_channel_get_target(Grpc.Core.Internal.ChannelSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_channel_get_target_mD27F5B6B5BCC9BD8802774170405BAA85E2F57B1 (void);
// 0x000003C1 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_channel_destroy(System.IntPtr)
extern void DllImportsFromStaticLib_grpcsharp_channel_destroy_m3C2C3897E743B8C89C04AC5E4852473CE03163B6 (void);
// 0x000003C2 System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_sizeof_grpc_event()
extern void DllImportsFromStaticLib_grpcsharp_sizeof_grpc_event_mA23B55F4AB01A2A39C365FD2A5FE06F3707320D5 (void);
// 0x000003C3 Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_completion_queue_create_async()
extern void DllImportsFromStaticLib_grpcsharp_completion_queue_create_async_mBB5542E06FB6BE99153B0851FA9E8A98ADB82C20 (void);
// 0x000003C4 Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_completion_queue_create_sync()
extern void DllImportsFromStaticLib_grpcsharp_completion_queue_create_sync_m21F0DCC434FC2BC331394A3934DC4F14D4090BDB (void);
// 0x000003C5 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_completion_queue_shutdown(Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_completion_queue_shutdown_m41633E676436220F3CCE127F46604F9B4B5B3A80 (void);
// 0x000003C6 Grpc.Core.Internal.CompletionQueueEvent Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_completion_queue_next(Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_completion_queue_next_m962B860232CDD29D98D7EAF898C966B985E067EF (void);
// 0x000003C7 Grpc.Core.Internal.CompletionQueueEvent Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_completion_queue_pluck(Grpc.Core.Internal.CompletionQueueSafeHandle,System.IntPtr)
extern void DllImportsFromStaticLib_grpcsharp_completion_queue_pluck_m7C19394663C113688089565399CD1BA8329AA5CF (void);
// 0x000003C8 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_completion_queue_destroy(System.IntPtr)
extern void DllImportsFromStaticLib_grpcsharp_completion_queue_destroy_m6F534050498968BD2C0EA609CC813C217A34535E (void);
// 0x000003C9 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::gprsharp_free(System.IntPtr)
extern void DllImportsFromStaticLib_gprsharp_free_m931BB6CD71CC98116B4525C17DAB62EADF064AAB (void);
// 0x000003CA Grpc.Core.Internal.MetadataArraySafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_metadata_array_create(System.UIntPtr)
extern void DllImportsFromStaticLib_grpcsharp_metadata_array_create_m4B31AA93DEC49706616E8346E4624A187987F560 (void);
// 0x000003CB System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_metadata_array_add(Grpc.Core.Internal.MetadataArraySafeHandle,System.String,System.Byte[],System.UIntPtr)
extern void DllImportsFromStaticLib_grpcsharp_metadata_array_add_mBD677A0C8778B83882FE0FEDE0A5B2335285F52A (void);
// 0x000003CC System.UIntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_metadata_array_count(System.IntPtr)
extern void DllImportsFromStaticLib_grpcsharp_metadata_array_count_mA435D915991CF616507566B1B6606015EDFD98CB (void);
// 0x000003CD System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_metadata_array_get_key(System.IntPtr,System.UIntPtr,System.UIntPtr&)
extern void DllImportsFromStaticLib_grpcsharp_metadata_array_get_key_m19933EF49608495DEF31E608E946435AEF1827E4 (void);
// 0x000003CE System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_metadata_array_get_value(System.IntPtr,System.UIntPtr,System.UIntPtr&)
extern void DllImportsFromStaticLib_grpcsharp_metadata_array_get_value_m0C7E085FB0BCCF568D01818E8512A0B5E37C0A6B (void);
// 0x000003CF System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_metadata_array_destroy_full(System.IntPtr)
extern void DllImportsFromStaticLib_grpcsharp_metadata_array_destroy_full_mC398D779F1E06AD66077BC3E62F8D6D488D7CD13 (void);
// 0x000003D0 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_redirect_log(Grpc.Core.Internal.GprLogDelegate)
extern void DllImportsFromStaticLib_grpcsharp_redirect_log_mDB60583C3675839718BF4958347757E76267A4DB (void);
// 0x000003D1 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_native_callback_dispatcher_init(Grpc.Core.Internal.NativeCallbackDispatcherCallback)
extern void DllImportsFromStaticLib_grpcsharp_native_callback_dispatcher_init_m171BBBFC4AD7CF2004F2A7A61F282F157B393D1C (void);
// 0x000003D2 Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_metadata_credentials_create_from_plugin(System.IntPtr)
extern void DllImportsFromStaticLib_grpcsharp_metadata_credentials_create_from_plugin_m2ED00892799B2C6D5D681585BD9B2E734DB9C4EA (void);
// 0x000003D3 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_metadata_credentials_notify_from_plugin(System.IntPtr,System.IntPtr,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.StatusCode,System.String)
extern void DllImportsFromStaticLib_grpcsharp_metadata_credentials_notify_from_plugin_mFCBF96C6BD8DCF1FC46D1A0DA7933FFC6DA87E65 (void);
// 0x000003D4 Grpc.Core.Internal.ServerCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_ssl_server_credentials_create(System.String,System.String[],System.String[],System.UIntPtr,Grpc.Core.SslClientCertificateRequestType)
extern void DllImportsFromStaticLib_grpcsharp_ssl_server_credentials_create_m0784339CA48F71F09FF68CED6323BBAC2EBB19A1 (void);
// 0x000003D5 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_server_credentials_release(System.IntPtr)
extern void DllImportsFromStaticLib_grpcsharp_server_credentials_release_m9FA8A5393F61767C9080FCBECB9130E97569EC1A (void);
// 0x000003D6 Grpc.Core.Internal.ServerSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_server_create(Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_server_create_m6EBCDCA0FF035CE3BED38F1AC3CD2987E1B5FD45 (void);
// 0x000003D7 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_server_register_completion_queue(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_server_register_completion_queue_m88E6003AC38AE94968B81629701C534046474206 (void);
// 0x000003D8 System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_server_add_insecure_http2_port(Grpc.Core.Internal.ServerSafeHandle,System.String)
extern void DllImportsFromStaticLib_grpcsharp_server_add_insecure_http2_port_m603B086188FD715124F3799817BA7904E86CDB3D (void);
// 0x000003D9 System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_server_add_secure_http2_port(Grpc.Core.Internal.ServerSafeHandle,System.String,Grpc.Core.Internal.ServerCredentialsSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_server_add_secure_http2_port_mB92DA052B0407C95B7344066A0D57C15A2FC0275 (void);
// 0x000003DA System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_server_start(Grpc.Core.Internal.ServerSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_server_start_m02BBFF115B1BACF397822FC27F57E1B0AB50E804 (void);
// 0x000003DB Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_server_request_call(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_server_request_call_mD9F0556093029B18171FCBAA41FE7231E04E5C18 (void);
// 0x000003DC System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_server_cancel_all_calls(Grpc.Core.Internal.ServerSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_server_cancel_all_calls_m9DD1D6A84CB0AF800D7C405143094CE76D3D0E1C (void);
// 0x000003DD System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_server_shutdown_and_notify_callback(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_server_shutdown_and_notify_callback_mB16FBE44CD12C626BEA967B5EEB82A8ACB5D18BD (void);
// 0x000003DE System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_server_destroy(System.IntPtr)
extern void DllImportsFromStaticLib_grpcsharp_server_destroy_mC86E0CBA52EC15A608C195301EEC73743AEBBB6C (void);
// 0x000003DF Grpc.Core.Internal.AuthContextSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_call_auth_context(Grpc.Core.Internal.CallSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_call_auth_context_mC59430A12D875BE1BEF344B6F2AF15C37596254E (void);
// 0x000003E0 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_auth_context_peer_identity_property_name(Grpc.Core.Internal.AuthContextSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_auth_context_peer_identity_property_name_mF630698DFC7BDCF447ECC7F776A45C6FF87E01DB (void);
// 0x000003E1 Grpc.Core.Internal.AuthContextSafeHandle/NativeAuthPropertyIterator Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_auth_context_property_iterator(Grpc.Core.Internal.AuthContextSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_auth_context_property_iterator_m7991C62FF8BC4FA62718FEE22521D84AB2871470 (void);
// 0x000003E2 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_auth_property_iterator_next(Grpc.Core.Internal.AuthContextSafeHandle/NativeAuthPropertyIterator&)
extern void DllImportsFromStaticLib_grpcsharp_auth_property_iterator_next_m4CB5D0C737AD3D69963207C72CEB17C1BD1CC4F5 (void);
// 0x000003E3 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_auth_context_release(System.IntPtr)
extern void DllImportsFromStaticLib_grpcsharp_auth_context_release_m8E34FE48A8A5CE5595E08B25E7AC43AA7A9DA28B (void);
// 0x000003E4 Grpc.Core.Internal.SliceBufferSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_slice_buffer_create()
extern void DllImportsFromStaticLib_grpcsharp_slice_buffer_create_m018D3B92E99333F49A453C0ECFD460BD4567AC38 (void);
// 0x000003E5 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_slice_buffer_adjust_tail_space(Grpc.Core.Internal.SliceBufferSafeHandle,System.UIntPtr,System.UIntPtr)
extern void DllImportsFromStaticLib_grpcsharp_slice_buffer_adjust_tail_space_m1CD9CE2956ED4AB19A0D71BCAF453B33BACCF108 (void);
// 0x000003E6 System.UIntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_slice_buffer_slice_count(Grpc.Core.Internal.SliceBufferSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_slice_buffer_slice_count_m5039A4B822F624FB132DFA19ACE9C07FEFF1CCD9 (void);
// 0x000003E7 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_slice_buffer_slice_peek(Grpc.Core.Internal.SliceBufferSafeHandle,System.UIntPtr,System.UIntPtr&,System.IntPtr&)
extern void DllImportsFromStaticLib_grpcsharp_slice_buffer_slice_peek_mD7AFC224D166E5C8B7C502E4903E0AA75D449D1C (void);
// 0x000003E8 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_slice_buffer_reset_and_unref(Grpc.Core.Internal.SliceBufferSafeHandle)
extern void DllImportsFromStaticLib_grpcsharp_slice_buffer_reset_and_unref_mE0695DFDEBC58BCA3A98538548E609A49114463B (void);
// 0x000003E9 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_slice_buffer_destroy(System.IntPtr)
extern void DllImportsFromStaticLib_grpcsharp_slice_buffer_destroy_m8E059AF9A02636696190A4E4493E0F0129A7D24B (void);
// 0x000003EA Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::gprsharp_now(Grpc.Core.Internal.ClockType)
extern void DllImportsFromStaticLib_gprsharp_now_m7FD19A5061312F6253D53A62EF0CD43DA114F16E (void);
// 0x000003EB Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::gprsharp_inf_future(Grpc.Core.Internal.ClockType)
extern void DllImportsFromStaticLib_gprsharp_inf_future_m2424C12DE16E52056D66F9384C573A3EDD8EB8C5 (void);
// 0x000003EC Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::gprsharp_inf_past(Grpc.Core.Internal.ClockType)
extern void DllImportsFromStaticLib_gprsharp_inf_past_m09E53BE104BEA9A52F5437349357E999E30A04E9 (void);
// 0x000003ED Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::gprsharp_convert_clock_type(Grpc.Core.Internal.Timespec,Grpc.Core.Internal.ClockType)
extern void DllImportsFromStaticLib_gprsharp_convert_clock_type_m84B6960FE21510BC4B9508B580FB643550B49DF1 (void);
// 0x000003EE System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::gprsharp_sizeof_timespec()
extern void DllImportsFromStaticLib_gprsharp_sizeof_timespec_m4F3DDEE8794D107A628EBEBC985E132836C22E66 (void);
// 0x000003EF Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_test_callback(Grpc.Core.Internal.NativeCallbackTestDelegate)
extern void DllImportsFromStaticLib_grpcsharp_test_callback_m8BCEA599DF31A751A16F8BBCB73A79A9E28BCA8B (void);
// 0x000003F0 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_test_nop(System.IntPtr)
extern void DllImportsFromStaticLib_grpcsharp_test_nop_m4E020EC45482C13802D816E91C124121D317F3A0 (void);
// 0x000003F1 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_test_override_method(System.String,System.String)
extern void DllImportsFromStaticLib_grpcsharp_test_override_method_m582A1883F6AD43CA85E6C3D9640377D9CD89EE47 (void);
// 0x000003F2 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::grpcsharp_test_call_start_unary_echo(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromStaticLib_grpcsharp_test_call_start_unary_echo_m407D93270603879F0EF71D11338F28DA01439007 (void);
// 0x000003F3 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromStaticLib::.ctor()
extern void DllImportsFromStaticLib__ctor_m4122141A4B82E6FA9D0C46985584C374404C332D (void);
// 0x000003F4 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_init()
extern void DllImportsFromSharedLib_grpcsharp_init_m19C07593ADA5516B71343A07A56CE420F6223CBC (void);
// 0x000003F5 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_shutdown()
extern void DllImportsFromSharedLib_grpcsharp_shutdown_m88941F26DA38985FD9357F77423B93CC35A52A18 (void);
// 0x000003F6 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_version_string()
extern void DllImportsFromSharedLib_grpcsharp_version_string_mA5C2660067524A0A4BA15403E021F5D13439068E (void);
// 0x000003F7 Grpc.Core.Internal.BatchContextSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_batch_context_create()
extern void DllImportsFromSharedLib_grpcsharp_batch_context_create_m2C23CC80630B0BDEBF93D04364453A2044C706AD (void);
// 0x000003F8 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_batch_context_recv_initial_metadata(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_batch_context_recv_initial_metadata_m405009559401F85FFFBBC08929A967FE9A12B4A0 (void);
// 0x000003F9 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_batch_context_recv_message_length(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_batch_context_recv_message_length_m10B539A14916F8771DAE6C2A51CE9B2B7328BA34 (void);
// 0x000003FA System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_batch_context_recv_message_next_slice_peek(Grpc.Core.Internal.BatchContextSafeHandle,System.UIntPtr&,System.IntPtr&)
extern void DllImportsFromSharedLib_grpcsharp_batch_context_recv_message_next_slice_peek_m2229A27A5BAB974B4C8601B3CC5855CB3D663B71 (void);
// 0x000003FB Grpc.Core.StatusCode Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_batch_context_recv_status_on_client_status(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_batch_context_recv_status_on_client_status_m332E63BED7D16984BC43C8D45D8E7552935F476E (void);
// 0x000003FC System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_batch_context_recv_status_on_client_details(Grpc.Core.Internal.BatchContextSafeHandle,System.UIntPtr&)
extern void DllImportsFromSharedLib_grpcsharp_batch_context_recv_status_on_client_details_m84440E727F0A41750A387A8F16982664047E005F (void);
// 0x000003FD System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_batch_context_recv_status_on_client_error_string(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_batch_context_recv_status_on_client_error_string_m3D43A8C0BB12BD3C30D19584748A70BC45B3B422 (void);
// 0x000003FE System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_batch_context_recv_status_on_client_trailing_metadata(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_batch_context_recv_status_on_client_trailing_metadata_mA2D2F5B337B2501F696D5642464AA627E851CF82 (void);
// 0x000003FF System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_batch_context_recv_close_on_server_cancelled(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_batch_context_recv_close_on_server_cancelled_mA1DEA59BA6D093DD62FD47A81EC4975EC6660CF1 (void);
// 0x00000400 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_batch_context_reset(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_batch_context_reset_mA04CD55F6330DCCC68BE4F32BF172563D53F6181 (void);
// 0x00000401 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_batch_context_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_grpcsharp_batch_context_destroy_mF960E4D8A4794105142533E55666291CB5FF1446 (void);
// 0x00000402 Grpc.Core.Internal.RequestCallContextSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_request_call_context_create()
extern void DllImportsFromSharedLib_grpcsharp_request_call_context_create_m18959D98C88429BA22744EB611AE27A65663804D (void);
// 0x00000403 Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_request_call_context_call(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_request_call_context_call_mFD6EC1D1407CA07AE94B40D8360EB4F6F4D1416B (void);
// 0x00000404 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_request_call_context_method(Grpc.Core.Internal.RequestCallContextSafeHandle,System.UIntPtr&)
extern void DllImportsFromSharedLib_grpcsharp_request_call_context_method_m3BEC3FBFC44DC44155671683074F2421ED508265 (void);
// 0x00000405 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_request_call_context_host(Grpc.Core.Internal.RequestCallContextSafeHandle,System.UIntPtr&)
extern void DllImportsFromSharedLib_grpcsharp_request_call_context_host_m6AE376604B3D983F122DB3208D7663E471E4C33A (void);
// 0x00000406 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_request_call_context_deadline(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_request_call_context_deadline_mE2BCEEE3F8A4539875C7673F741D51D9B947193E (void);
// 0x00000407 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_request_call_context_request_metadata(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_request_call_context_request_metadata_mA0CC5B5388F54CDCBC711E712AF78478413AF2C9 (void);
// 0x00000408 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_request_call_context_reset(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_request_call_context_reset_m170F072E60697692A2BE3253C02B27F9FB8CE800 (void);
// 0x00000409 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_request_call_context_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_grpcsharp_request_call_context_destroy_m574DCD17F1B0DD209FB75C65D57E4EB6A1E6BA42 (void);
// 0x0000040A Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_composite_call_credentials_create(Grpc.Core.Internal.CallCredentialsSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_composite_call_credentials_create_mBA78651B26F02803EBDFDD003AB70A5D081EF837 (void);
// 0x0000040B System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_call_credentials_release(System.IntPtr)
extern void DllImportsFromSharedLib_grpcsharp_call_credentials_release_mA52F0404F14CCBA77722D906E324D0CAA22D3080 (void);
// 0x0000040C Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_call_cancel(Grpc.Core.Internal.CallSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_call_cancel_m07EBE08FB40D8D821B0E0108B6995D928EB0D745 (void);
// 0x0000040D Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_call_cancel_with_status(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.StatusCode,System.String)
extern void DllImportsFromSharedLib_grpcsharp_call_cancel_with_status_m219EEAB5EBE2B60F62661D87D92984AC6FB8BAC1 (void);
// 0x0000040E Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_call_start_unary(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_grpcsharp_call_start_unary_m62CD28E3ABD6C3FF1EFCF52A2B5BBFA64188B205 (void);
// 0x0000040F Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_call_start_client_streaming(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_grpcsharp_call_start_client_streaming_m222B5A5A0620651397DAA473BFDE86DE361F17C8 (void);
// 0x00000410 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_call_start_server_streaming(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_grpcsharp_call_start_server_streaming_mF4B1F0A15B143F928BFB2FE40569F8EBBE7A6DE8 (void);
// 0x00000411 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_call_start_duplex_streaming(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_grpcsharp_call_start_duplex_streaming_m5E00054F0EA84B13A4B51973EB7772F74E013977 (void);
// 0x00000412 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_call_send_message(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,System.Int32)
extern void DllImportsFromSharedLib_grpcsharp_call_send_message_m9A481AA203C02DCF4BEC87D1CF9B5B4F1F7A0CFB (void);
// 0x00000413 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_call_send_close_from_client(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_call_send_close_from_client_m830C144974BA3C9DD62CFE9BF840CE528E65BB0F (void);
// 0x00000414 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_call_send_status_from_server(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.StatusCode,System.IntPtr,System.UIntPtr,Grpc.Core.Internal.MetadataArraySafeHandle,System.Int32,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags)
extern void DllImportsFromSharedLib_grpcsharp_call_send_status_from_server_m9CD2C213C1C2A6711D4BD84EA693D9C5BDC1F46C (void);
// 0x00000415 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_call_recv_message(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_call_recv_message_m37612D276CDC967B178E67892699E109476D0102 (void);
// 0x00000416 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_call_recv_initial_metadata(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_call_recv_initial_metadata_mF6D2B2C84CCA9500745FB8DC77B2E0F2AAED28FC (void);
// 0x00000417 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_call_start_serverside(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_call_start_serverside_m0E91C71FA1968AA7F8DE6B27B64D1DDA52F9E7E1 (void);
// 0x00000418 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_call_send_initial_metadata(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_call_send_initial_metadata_m13C0CBF623506BDA40B8D82D8EA5E07B4915019D (void);
// 0x00000419 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_call_set_credentials(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_call_set_credentials_mD3173BA4BB22D412B165B2950A928752DB4FBC87 (void);
// 0x0000041A Grpc.Core.Internal.CStringSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_call_get_peer(Grpc.Core.Internal.CallSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_call_get_peer_m47E0035CDE88302873FB48F5B15A9F43601566FA (void);
// 0x0000041B System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_call_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_grpcsharp_call_destroy_m4F6D218D13F73B6D91E1E8FD63456C5236BCA813 (void);
// 0x0000041C Grpc.Core.Internal.ChannelArgsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_channel_args_create(System.UIntPtr)
extern void DllImportsFromSharedLib_grpcsharp_channel_args_create_m4DDAEE667B2A20EB49BEC763A45ABE162FADA6EC (void);
// 0x0000041D System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_channel_args_set_string(Grpc.Core.Internal.ChannelArgsSafeHandle,System.UIntPtr,System.String,System.String)
extern void DllImportsFromSharedLib_grpcsharp_channel_args_set_string_m5C4576693F6EE2B5066692BEA03B5A6557D0A720 (void);
// 0x0000041E System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_channel_args_set_integer(Grpc.Core.Internal.ChannelArgsSafeHandle,System.UIntPtr,System.String,System.Int32)
extern void DllImportsFromSharedLib_grpcsharp_channel_args_set_integer_m20FD8ACE4F8AEAAFC154215E3D8D56F8371BECA9 (void);
// 0x0000041F System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_channel_args_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_grpcsharp_channel_args_destroy_m805D80C9D7802764CBE3C9DB250998A34DEA315F (void);
// 0x00000420 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_override_default_ssl_roots(System.String)
extern void DllImportsFromSharedLib_grpcsharp_override_default_ssl_roots_m03A6CA0D65AA39D11F7B5CBAB909A736D559F51C (void);
// 0x00000421 Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_ssl_credentials_create(System.String,System.String,System.String,System.IntPtr)
extern void DllImportsFromSharedLib_grpcsharp_ssl_credentials_create_mA5A0D7E835F7A23302DBA852CE3F594F5D049555 (void);
// 0x00000422 Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_composite_channel_credentials_create(Grpc.Core.Internal.ChannelCredentialsSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_composite_channel_credentials_create_mBF4795F4F8562B0F56C02AA5B3AD21B5DC51F5A5 (void);
// 0x00000423 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_channel_credentials_release(System.IntPtr)
extern void DllImportsFromSharedLib_grpcsharp_channel_credentials_release_m205720A6AE154BEF00191EF501957CF7E336ED83 (void);
// 0x00000424 Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_insecure_channel_create(System.String,Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_insecure_channel_create_m77DC0D136C833AF17E26646CEBE4EA552CECF232 (void);
// 0x00000425 Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_secure_channel_create(Grpc.Core.Internal.ChannelCredentialsSafeHandle,System.String,Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_secure_channel_create_m6E6948E73AE9398486AD0802552A1E8F3A92C78F (void);
// 0x00000426 Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_channel_create_call(Grpc.Core.Internal.ChannelSafeHandle,Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.ContextPropagationFlags,Grpc.Core.Internal.CompletionQueueSafeHandle,System.String,System.String,Grpc.Core.Internal.Timespec)
extern void DllImportsFromSharedLib_grpcsharp_channel_create_call_mF3873BD7C670C0544A15C05C1A4D33D9F1EFBDD8 (void);
// 0x00000427 Grpc.Core.ChannelState Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_channel_check_connectivity_state(Grpc.Core.Internal.ChannelSafeHandle,System.Int32)
extern void DllImportsFromSharedLib_grpcsharp_channel_check_connectivity_state_m26056B7E78DAE6062B17343587F5B75ED4925C94 (void);
// 0x00000428 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_channel_watch_connectivity_state(Grpc.Core.Internal.ChannelSafeHandle,Grpc.Core.ChannelState,Grpc.Core.Internal.Timespec,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_channel_watch_connectivity_state_m1A4127B17B1ECE3A31722994EE922523AB5EB166 (void);
// 0x00000429 Grpc.Core.Internal.CStringSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_channel_get_target(Grpc.Core.Internal.ChannelSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_channel_get_target_m79B506003EB042921EE9FD605847CAD56D7A9ACA (void);
// 0x0000042A System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_channel_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_grpcsharp_channel_destroy_mFD9B4C2C4BD0C353746C88E97B4AC5E3525EFBCA (void);
// 0x0000042B System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_sizeof_grpc_event()
extern void DllImportsFromSharedLib_grpcsharp_sizeof_grpc_event_mD5F306BEF3BFAE6F67856BE788ABB04FCC9E40D5 (void);
// 0x0000042C Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_completion_queue_create_async()
extern void DllImportsFromSharedLib_grpcsharp_completion_queue_create_async_mAC5812DB53E2A7E17F74B895DAD5B4D25A775451 (void);
// 0x0000042D Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_completion_queue_create_sync()
extern void DllImportsFromSharedLib_grpcsharp_completion_queue_create_sync_m6ED2CE9870432ACC588B1890C0DD4ABAD6E16157 (void);
// 0x0000042E System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_completion_queue_shutdown(Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_completion_queue_shutdown_mCAAC05499DB3A44BF3FCD67BE40D3A58DE9AE909 (void);
// 0x0000042F Grpc.Core.Internal.CompletionQueueEvent Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_completion_queue_next(Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_completion_queue_next_m4C195939CABF2BB8B3C8E2961D32223DDF5A64F2 (void);
// 0x00000430 Grpc.Core.Internal.CompletionQueueEvent Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_completion_queue_pluck(Grpc.Core.Internal.CompletionQueueSafeHandle,System.IntPtr)
extern void DllImportsFromSharedLib_grpcsharp_completion_queue_pluck_m5FE55F1EEFAC239853D50B8D7965B2C784529703 (void);
// 0x00000431 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_completion_queue_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_grpcsharp_completion_queue_destroy_m0B439162F4E9C51F87EB6123899772A53520DA2D (void);
// 0x00000432 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::gprsharp_free(System.IntPtr)
extern void DllImportsFromSharedLib_gprsharp_free_m373B12B1839CF3E6EB534E51A6B1487B35405DEA (void);
// 0x00000433 Grpc.Core.Internal.MetadataArraySafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_metadata_array_create(System.UIntPtr)
extern void DllImportsFromSharedLib_grpcsharp_metadata_array_create_m79FBF98544D5BB24DCB6A03A8839832B9574F695 (void);
// 0x00000434 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_metadata_array_add(Grpc.Core.Internal.MetadataArraySafeHandle,System.String,System.Byte[],System.UIntPtr)
extern void DllImportsFromSharedLib_grpcsharp_metadata_array_add_m1279406A54AF0C50EDCF32A3338A262F9B7A7C64 (void);
// 0x00000435 System.UIntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_metadata_array_count(System.IntPtr)
extern void DllImportsFromSharedLib_grpcsharp_metadata_array_count_mEEC984C8D317ABD0F6EB9E421FAD97D169C9427C (void);
// 0x00000436 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_metadata_array_get_key(System.IntPtr,System.UIntPtr,System.UIntPtr&)
extern void DllImportsFromSharedLib_grpcsharp_metadata_array_get_key_m1645F52A707B0A073BFFCE7023AC60DF849BC4CC (void);
// 0x00000437 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_metadata_array_get_value(System.IntPtr,System.UIntPtr,System.UIntPtr&)
extern void DllImportsFromSharedLib_grpcsharp_metadata_array_get_value_mB96531A58DD68F8894F5BF6876E1EAF5EB06892C (void);
// 0x00000438 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_metadata_array_destroy_full(System.IntPtr)
extern void DllImportsFromSharedLib_grpcsharp_metadata_array_destroy_full_m0E717D9F6F19473D8CF91E9E6E9B3B98E2CA73E4 (void);
// 0x00000439 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_redirect_log(Grpc.Core.Internal.GprLogDelegate)
extern void DllImportsFromSharedLib_grpcsharp_redirect_log_m292D0E16FB3E85B8D086CE84F32BC2B3C6E5E357 (void);
// 0x0000043A System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_native_callback_dispatcher_init(Grpc.Core.Internal.NativeCallbackDispatcherCallback)
extern void DllImportsFromSharedLib_grpcsharp_native_callback_dispatcher_init_m8DCAB491D863D1EDB9D75F0FB7F6BB84B5525F44 (void);
// 0x0000043B Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_metadata_credentials_create_from_plugin(System.IntPtr)
extern void DllImportsFromSharedLib_grpcsharp_metadata_credentials_create_from_plugin_m4FAEED780B20A7A4A015994D4FBA12844FFB1071 (void);
// 0x0000043C System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_metadata_credentials_notify_from_plugin(System.IntPtr,System.IntPtr,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.StatusCode,System.String)
extern void DllImportsFromSharedLib_grpcsharp_metadata_credentials_notify_from_plugin_m3CA5973648CED4669B022D1C17620621810CA454 (void);
// 0x0000043D Grpc.Core.Internal.ServerCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_ssl_server_credentials_create(System.String,System.String[],System.String[],System.UIntPtr,Grpc.Core.SslClientCertificateRequestType)
extern void DllImportsFromSharedLib_grpcsharp_ssl_server_credentials_create_mABF4157CC499822E947AD28B4DBA115273DDDD65 (void);
// 0x0000043E System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_server_credentials_release(System.IntPtr)
extern void DllImportsFromSharedLib_grpcsharp_server_credentials_release_m8CA18EBE41A3303711D860FC6B031A4807FC4F56 (void);
// 0x0000043F Grpc.Core.Internal.ServerSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_server_create(Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_server_create_m1D4CAC64D11F4D659D41D46E444E8EE413B59779 (void);
// 0x00000440 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_server_register_completion_queue(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_server_register_completion_queue_mBC047BA0821AEA018F2FFC774B5282DAD4C29455 (void);
// 0x00000441 System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_server_add_insecure_http2_port(Grpc.Core.Internal.ServerSafeHandle,System.String)
extern void DllImportsFromSharedLib_grpcsharp_server_add_insecure_http2_port_m3EE44E00532BF0C4883003D268AE22EE9A74B1D0 (void);
// 0x00000442 System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_server_add_secure_http2_port(Grpc.Core.Internal.ServerSafeHandle,System.String,Grpc.Core.Internal.ServerCredentialsSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_server_add_secure_http2_port_m5A4F3C889B1EFE024626BEAD196C1629DA8AF8D4 (void);
// 0x00000443 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_server_start(Grpc.Core.Internal.ServerSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_server_start_mE93CC062BD2AF44634B4646559FDBF97930CF292 (void);
// 0x00000444 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_server_request_call(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_server_request_call_mF94B5C8FFFB0A588B9C338B64C0CF9FB52EB68EB (void);
// 0x00000445 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_server_cancel_all_calls(Grpc.Core.Internal.ServerSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_server_cancel_all_calls_mE9CE8727C56B7F8BEC39F4B0FACD59448487D7D5 (void);
// 0x00000446 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_server_shutdown_and_notify_callback(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_server_shutdown_and_notify_callback_m9887D78392419592CC281887556AC636F0058724 (void);
// 0x00000447 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_server_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_grpcsharp_server_destroy_mBCDFAABDD166A48DC5AD250B0881CF83943F09BD (void);
// 0x00000448 Grpc.Core.Internal.AuthContextSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_call_auth_context(Grpc.Core.Internal.CallSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_call_auth_context_mBDEE0278D0DE353B8B444906264407E6098A485B (void);
// 0x00000449 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_auth_context_peer_identity_property_name(Grpc.Core.Internal.AuthContextSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_auth_context_peer_identity_property_name_m01B5FD4343AB15B918C531C63749C71FE52EEB83 (void);
// 0x0000044A Grpc.Core.Internal.AuthContextSafeHandle/NativeAuthPropertyIterator Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_auth_context_property_iterator(Grpc.Core.Internal.AuthContextSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_auth_context_property_iterator_m5B0D61C0F31E213DB43DD02F90C4DE4DA9F72D38 (void);
// 0x0000044B System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_auth_property_iterator_next(Grpc.Core.Internal.AuthContextSafeHandle/NativeAuthPropertyIterator&)
extern void DllImportsFromSharedLib_grpcsharp_auth_property_iterator_next_m0A8A21556C9B755E800CD161EE24D23E8E2B3D27 (void);
// 0x0000044C System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_auth_context_release(System.IntPtr)
extern void DllImportsFromSharedLib_grpcsharp_auth_context_release_m4869D21BBF8329E69931962DE10583742059CAF1 (void);
// 0x0000044D Grpc.Core.Internal.SliceBufferSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_slice_buffer_create()
extern void DllImportsFromSharedLib_grpcsharp_slice_buffer_create_m4688F0FA6DD2C83425161B50B78E0A6B2BCF358C (void);
// 0x0000044E System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_slice_buffer_adjust_tail_space(Grpc.Core.Internal.SliceBufferSafeHandle,System.UIntPtr,System.UIntPtr)
extern void DllImportsFromSharedLib_grpcsharp_slice_buffer_adjust_tail_space_mAEBE3DA86103076EC6220970246286B185CCFEB5 (void);
// 0x0000044F System.UIntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_slice_buffer_slice_count(Grpc.Core.Internal.SliceBufferSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_slice_buffer_slice_count_mEBE59A987E4B04929E8B90339B84632B392C9B7E (void);
// 0x00000450 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_slice_buffer_slice_peek(Grpc.Core.Internal.SliceBufferSafeHandle,System.UIntPtr,System.UIntPtr&,System.IntPtr&)
extern void DllImportsFromSharedLib_grpcsharp_slice_buffer_slice_peek_m73826EF91317F1BBF6B7D5FD483F14E3EBD37DC1 (void);
// 0x00000451 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_slice_buffer_reset_and_unref(Grpc.Core.Internal.SliceBufferSafeHandle)
extern void DllImportsFromSharedLib_grpcsharp_slice_buffer_reset_and_unref_mF593B3EAF6EB4DF12DBCC25D0522458D98298318 (void);
// 0x00000452 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_slice_buffer_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_grpcsharp_slice_buffer_destroy_mEA8D08CFB555C81BCC99843A2F17E193DBA26BBA (void);
// 0x00000453 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::gprsharp_now(Grpc.Core.Internal.ClockType)
extern void DllImportsFromSharedLib_gprsharp_now_m4B79C734B547D2CB06A1366C9E19B049B54E546D (void);
// 0x00000454 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::gprsharp_inf_future(Grpc.Core.Internal.ClockType)
extern void DllImportsFromSharedLib_gprsharp_inf_future_m817D3ABD33FC3B36BF9B0CCA4BD88110FA0B43EA (void);
// 0x00000455 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::gprsharp_inf_past(Grpc.Core.Internal.ClockType)
extern void DllImportsFromSharedLib_gprsharp_inf_past_m2E9BFDA7E102AAF26CEDA056E6BCBA36FC934D46 (void);
// 0x00000456 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::gprsharp_convert_clock_type(Grpc.Core.Internal.Timespec,Grpc.Core.Internal.ClockType)
extern void DllImportsFromSharedLib_gprsharp_convert_clock_type_m1069CFA187ACCAF6A28142992CBD72E9907944CA (void);
// 0x00000457 System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::gprsharp_sizeof_timespec()
extern void DllImportsFromSharedLib_gprsharp_sizeof_timespec_mCC19BDD007D83688EF3B2384B398A146D340AE73 (void);
// 0x00000458 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_test_callback(Grpc.Core.Internal.NativeCallbackTestDelegate)
extern void DllImportsFromSharedLib_grpcsharp_test_callback_m59CABEF230A7ACFBC081A76F51CB33C27EF8713F (void);
// 0x00000459 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_test_nop(System.IntPtr)
extern void DllImportsFromSharedLib_grpcsharp_test_nop_m62FD5AD34608A92121225FDFCE38E6D46C50AFFF (void);
// 0x0000045A System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_test_override_method(System.String,System.String)
extern void DllImportsFromSharedLib_grpcsharp_test_override_method_mE6B5E9B10238FEF595DBCB62D1CEF99D623E68F8 (void);
// 0x0000045B Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::grpcsharp_test_call_start_unary_echo(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_grpcsharp_test_call_start_unary_echo_m5723CA6121176DA49CCCACBDD26A111536B96412 (void);
// 0x0000045C System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib::.ctor()
extern void DllImportsFromSharedLib__ctor_mFE34645DED1AB225C76E4144C99DA8300B8AB278 (void);
// 0x0000045D System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_init()
extern void DllImportsFromSharedLib_x86_grpcsharp_init_m9C9012A3911BF6A42070D57DA482BE25FBF3350E (void);
// 0x0000045E System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_shutdown()
extern void DllImportsFromSharedLib_x86_grpcsharp_shutdown_mA918DB820EB1481E828A351AE1DDC30BD8473AB2 (void);
// 0x0000045F System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_version_string()
extern void DllImportsFromSharedLib_x86_grpcsharp_version_string_mA4C456D174DF0ED12E75E74F99CBAEDCD6F33239 (void);
// 0x00000460 Grpc.Core.Internal.BatchContextSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_batch_context_create()
extern void DllImportsFromSharedLib_x86_grpcsharp_batch_context_create_m5040308E033F9E44C406F0BD8401A0E8DD928204 (void);
// 0x00000461 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_batch_context_recv_initial_metadata(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_batch_context_recv_initial_metadata_m5EACFCEFBCFAC7656C68DACBFBABD391FD099A05 (void);
// 0x00000462 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_batch_context_recv_message_length(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_batch_context_recv_message_length_m3CF14CC1CCF699F3EFAB901D8031320E653F413F (void);
// 0x00000463 System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_batch_context_recv_message_next_slice_peek(Grpc.Core.Internal.BatchContextSafeHandle,System.UIntPtr&,System.IntPtr&)
extern void DllImportsFromSharedLib_x86_grpcsharp_batch_context_recv_message_next_slice_peek_mD777A5230E68B0730ED7FB6628E1AE46E942245F (void);
// 0x00000464 Grpc.Core.StatusCode Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_batch_context_recv_status_on_client_status(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_batch_context_recv_status_on_client_status_mD9C829AB4CF2FED3E13F671BDFBF96B37F584B43 (void);
// 0x00000465 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_batch_context_recv_status_on_client_details(Grpc.Core.Internal.BatchContextSafeHandle,System.UIntPtr&)
extern void DllImportsFromSharedLib_x86_grpcsharp_batch_context_recv_status_on_client_details_m907A60295C791EAC5B42EB04E053B21BADB25EA3 (void);
// 0x00000466 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_batch_context_recv_status_on_client_error_string(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_batch_context_recv_status_on_client_error_string_m4004BB68C992A12B4F0000EA2640A078D7EEEA52 (void);
// 0x00000467 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_batch_context_recv_status_on_client_trailing_metadata(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_batch_context_recv_status_on_client_trailing_metadata_m53D2EE78812DD544ABDCE3648A0E95939FB49C43 (void);
// 0x00000468 System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_batch_context_recv_close_on_server_cancelled(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_batch_context_recv_close_on_server_cancelled_mD71BD7C708609629C820DFD441A35D4E1AF08DEF (void);
// 0x00000469 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_batch_context_reset(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_batch_context_reset_m43F05293AD4C82A4BC8D7E06F62F376F0581104B (void);
// 0x0000046A System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_batch_context_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x86_grpcsharp_batch_context_destroy_m1AAC83BBF5FD07CF92425407503D75EBB45A6806 (void);
// 0x0000046B Grpc.Core.Internal.RequestCallContextSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_request_call_context_create()
extern void DllImportsFromSharedLib_x86_grpcsharp_request_call_context_create_m694FC52B78B1F10AF6718A9E29A254B4FD36BF7F (void);
// 0x0000046C Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_request_call_context_call(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_request_call_context_call_m8371FA0613CA8A61C9BF47F56A1A4C40DC35DD8E (void);
// 0x0000046D System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_request_call_context_method(Grpc.Core.Internal.RequestCallContextSafeHandle,System.UIntPtr&)
extern void DllImportsFromSharedLib_x86_grpcsharp_request_call_context_method_m98261B6A86BBEB360A68BE6F5607A6E55281612F (void);
// 0x0000046E System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_request_call_context_host(Grpc.Core.Internal.RequestCallContextSafeHandle,System.UIntPtr&)
extern void DllImportsFromSharedLib_x86_grpcsharp_request_call_context_host_mF03CE0AC28F381A118EAFDEB3E3E39EF76D4D163 (void);
// 0x0000046F Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_request_call_context_deadline(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_request_call_context_deadline_m09E2CB9ED8DA64EA73113CF684C29CA812B5DC46 (void);
// 0x00000470 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_request_call_context_request_metadata(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_request_call_context_request_metadata_m262D1CB27759B5D5C2DCB2BDA3AA1758EC96EE54 (void);
// 0x00000471 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_request_call_context_reset(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_request_call_context_reset_mD2D6741A5866B3DF7AC01FA388AAD82511627B3F (void);
// 0x00000472 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_request_call_context_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x86_grpcsharp_request_call_context_destroy_mB44276998497D838E0234673A2FC6785E497BCE0 (void);
// 0x00000473 Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_composite_call_credentials_create(Grpc.Core.Internal.CallCredentialsSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_composite_call_credentials_create_m7F3C52F430FC15522974E9AB95BEA86F36ADB0EF (void);
// 0x00000474 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_call_credentials_release(System.IntPtr)
extern void DllImportsFromSharedLib_x86_grpcsharp_call_credentials_release_mF1847D309DB5DE9389B8C06E94097D139372E8C6 (void);
// 0x00000475 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_call_cancel(Grpc.Core.Internal.CallSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_call_cancel_mA333EF20E44B8A43CA71AD8FB0F24CDA6B2EF75D (void);
// 0x00000476 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_call_cancel_with_status(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.StatusCode,System.String)
extern void DllImportsFromSharedLib_x86_grpcsharp_call_cancel_with_status_m76609C555D5AF4AD9AE0816252DC443A44DFAA20 (void);
// 0x00000477 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_call_start_unary(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_x86_grpcsharp_call_start_unary_mC890BA54101050E7C5CB220F90AACFC12E23E235 (void);
// 0x00000478 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_call_start_client_streaming(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_x86_grpcsharp_call_start_client_streaming_mDC3F15E8F7CCF8B846CE114471658E0D40D268F6 (void);
// 0x00000479 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_call_start_server_streaming(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_x86_grpcsharp_call_start_server_streaming_m9C8A7F3ED2D29590C5735B51655261BCA9CAF1AE (void);
// 0x0000047A Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_call_start_duplex_streaming(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_x86_grpcsharp_call_start_duplex_streaming_mA1C72AFD230B82567E0C9F0DF2D2190B5C8FB83E (void);
// 0x0000047B Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_call_send_message(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,System.Int32)
extern void DllImportsFromSharedLib_x86_grpcsharp_call_send_message_m0B563A73BFB00F34B0B5ADD23D0C65500819BD7C (void);
// 0x0000047C Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_call_send_close_from_client(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_call_send_close_from_client_mBF360782647D6FBC9D7060689E198FDF048FEE35 (void);
// 0x0000047D Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_call_send_status_from_server(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.StatusCode,System.IntPtr,System.UIntPtr,Grpc.Core.Internal.MetadataArraySafeHandle,System.Int32,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags)
extern void DllImportsFromSharedLib_x86_grpcsharp_call_send_status_from_server_m6B63C318E05BA821704991676C04D8C38FD98F44 (void);
// 0x0000047E Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_call_recv_message(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_call_recv_message_m17ED567C487F645D6CEC6988C902149F5B669507 (void);
// 0x0000047F Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_call_recv_initial_metadata(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_call_recv_initial_metadata_mFC61D10ECDD9113CAC61AF9CED061A82FDD4BED9 (void);
// 0x00000480 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_call_start_serverside(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_call_start_serverside_m1C98785647CB02F268365BD2D72578A7F6893D6E (void);
// 0x00000481 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_call_send_initial_metadata(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_call_send_initial_metadata_m76BF2773CA5D879E50BF84C9D7098A482B9BD561 (void);
// 0x00000482 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_call_set_credentials(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_call_set_credentials_m03030D2051061E24BA21C0BA72250AC08F57F9B8 (void);
// 0x00000483 Grpc.Core.Internal.CStringSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_call_get_peer(Grpc.Core.Internal.CallSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_call_get_peer_m944BADA035B9E51FF7AA729DF15F64F6D5C4E4A0 (void);
// 0x00000484 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_call_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x86_grpcsharp_call_destroy_m35FFF9426AD5586BBEB9F3E2244B302E895CF180 (void);
// 0x00000485 Grpc.Core.Internal.ChannelArgsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_channel_args_create(System.UIntPtr)
extern void DllImportsFromSharedLib_x86_grpcsharp_channel_args_create_m757E82C3E433C37F7783B510013E4F8A87B4FC38 (void);
// 0x00000486 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_channel_args_set_string(Grpc.Core.Internal.ChannelArgsSafeHandle,System.UIntPtr,System.String,System.String)
extern void DllImportsFromSharedLib_x86_grpcsharp_channel_args_set_string_mCE299137AA574C6871DA7D987E277FB95DD09E6A (void);
// 0x00000487 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_channel_args_set_integer(Grpc.Core.Internal.ChannelArgsSafeHandle,System.UIntPtr,System.String,System.Int32)
extern void DllImportsFromSharedLib_x86_grpcsharp_channel_args_set_integer_m14FE845A2BAAA2EDE499A577381B6D3193CF35DF (void);
// 0x00000488 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_channel_args_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x86_grpcsharp_channel_args_destroy_m88FF211F9D0AA4DC3C3B2C4F878D7C24E4BCB67D (void);
// 0x00000489 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_override_default_ssl_roots(System.String)
extern void DllImportsFromSharedLib_x86_grpcsharp_override_default_ssl_roots_m177CBACCE2C5B475AC64A2F526C44D6186491662 (void);
// 0x0000048A Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_ssl_credentials_create(System.String,System.String,System.String,System.IntPtr)
extern void DllImportsFromSharedLib_x86_grpcsharp_ssl_credentials_create_m1F401D7F20EF6CCD11CF3207C33F14DA65711945 (void);
// 0x0000048B Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_composite_channel_credentials_create(Grpc.Core.Internal.ChannelCredentialsSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_composite_channel_credentials_create_m7BF48373CBFEF491D4CCD29621C179C8CC0EDBFC (void);
// 0x0000048C System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_channel_credentials_release(System.IntPtr)
extern void DllImportsFromSharedLib_x86_grpcsharp_channel_credentials_release_m721D56EDFD80F6FFB028CB2215900235C6070DAF (void);
// 0x0000048D Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_insecure_channel_create(System.String,Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_insecure_channel_create_m07940E4716C9081AC1C77212DB1F12BCAE0CBB9D (void);
// 0x0000048E Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_secure_channel_create(Grpc.Core.Internal.ChannelCredentialsSafeHandle,System.String,Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_secure_channel_create_m122B656EEFA0FD5BE48FF1694FC4FB5A9E3B6840 (void);
// 0x0000048F Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_channel_create_call(Grpc.Core.Internal.ChannelSafeHandle,Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.ContextPropagationFlags,Grpc.Core.Internal.CompletionQueueSafeHandle,System.String,System.String,Grpc.Core.Internal.Timespec)
extern void DllImportsFromSharedLib_x86_grpcsharp_channel_create_call_m4C9C7A9567AE96FDCD79571176D7121C45117CB8 (void);
// 0x00000490 Grpc.Core.ChannelState Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_channel_check_connectivity_state(Grpc.Core.Internal.ChannelSafeHandle,System.Int32)
extern void DllImportsFromSharedLib_x86_grpcsharp_channel_check_connectivity_state_mAC4E25F306CC2E4371D471039041C3FC510B177A (void);
// 0x00000491 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_channel_watch_connectivity_state(Grpc.Core.Internal.ChannelSafeHandle,Grpc.Core.ChannelState,Grpc.Core.Internal.Timespec,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_channel_watch_connectivity_state_mE3BDA134158CAB5D0400931C5ED204109FD16C6E (void);
// 0x00000492 Grpc.Core.Internal.CStringSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_channel_get_target(Grpc.Core.Internal.ChannelSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_channel_get_target_m802646B3039D5F22977FA1D201332C3AC7CED791 (void);
// 0x00000493 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_channel_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x86_grpcsharp_channel_destroy_m261ECEE86966968CE0FCA3D3D7D7673CDA547FB1 (void);
// 0x00000494 System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_sizeof_grpc_event()
extern void DllImportsFromSharedLib_x86_grpcsharp_sizeof_grpc_event_m1BFECDD183BB969ADDAA747F712DB7F1ED236ED9 (void);
// 0x00000495 Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_completion_queue_create_async()
extern void DllImportsFromSharedLib_x86_grpcsharp_completion_queue_create_async_m0F927290ACA5D7F2B43FCE929F34765ED4AABA9C (void);
// 0x00000496 Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_completion_queue_create_sync()
extern void DllImportsFromSharedLib_x86_grpcsharp_completion_queue_create_sync_m7F2C93F4B5D07D07F54A17AD5A00C226C88B3FE0 (void);
// 0x00000497 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_completion_queue_shutdown(Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_completion_queue_shutdown_mF971B9A843C8ECE51913BAF86971665924D0A8BF (void);
// 0x00000498 Grpc.Core.Internal.CompletionQueueEvent Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_completion_queue_next(Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_completion_queue_next_mD43A6E5CAB9FA8D1BCC6FFF7D8F920D0E3F71C0A (void);
// 0x00000499 Grpc.Core.Internal.CompletionQueueEvent Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_completion_queue_pluck(Grpc.Core.Internal.CompletionQueueSafeHandle,System.IntPtr)
extern void DllImportsFromSharedLib_x86_grpcsharp_completion_queue_pluck_m54306FDDFC7CD03B87662DAF643EDCC4DF2BECD9 (void);
// 0x0000049A System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_completion_queue_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x86_grpcsharp_completion_queue_destroy_mD10B98610DE159478B2D4F912683E2DFC5E5B37E (void);
// 0x0000049B System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::gprsharp_free(System.IntPtr)
extern void DllImportsFromSharedLib_x86_gprsharp_free_mE45E42ECFB1A24F745C73E9BF94A9E3ACB6C2DC0 (void);
// 0x0000049C Grpc.Core.Internal.MetadataArraySafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_metadata_array_create(System.UIntPtr)
extern void DllImportsFromSharedLib_x86_grpcsharp_metadata_array_create_m6BAADAED898D9FD56065AAA426850772964439D9 (void);
// 0x0000049D System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_metadata_array_add(Grpc.Core.Internal.MetadataArraySafeHandle,System.String,System.Byte[],System.UIntPtr)
extern void DllImportsFromSharedLib_x86_grpcsharp_metadata_array_add_m3F3351C83AEAAB147B213B09482380FC85AAA0E4 (void);
// 0x0000049E System.UIntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_metadata_array_count(System.IntPtr)
extern void DllImportsFromSharedLib_x86_grpcsharp_metadata_array_count_m91D28176A0E256C23F7500D244535037F08579DB (void);
// 0x0000049F System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_metadata_array_get_key(System.IntPtr,System.UIntPtr,System.UIntPtr&)
extern void DllImportsFromSharedLib_x86_grpcsharp_metadata_array_get_key_m522C31DE16E3EBF9EF6B45EC2C2C36835BA7EE52 (void);
// 0x000004A0 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_metadata_array_get_value(System.IntPtr,System.UIntPtr,System.UIntPtr&)
extern void DllImportsFromSharedLib_x86_grpcsharp_metadata_array_get_value_m741238D4C7944031B998E69FAC4A95E0DC04BD62 (void);
// 0x000004A1 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_metadata_array_destroy_full(System.IntPtr)
extern void DllImportsFromSharedLib_x86_grpcsharp_metadata_array_destroy_full_m806B26CCED2DE2CD41F63A553EF4952065E02067 (void);
// 0x000004A2 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_redirect_log(Grpc.Core.Internal.GprLogDelegate)
extern void DllImportsFromSharedLib_x86_grpcsharp_redirect_log_m3888CE5E586E06E58C412861C34E38935E32B869 (void);
// 0x000004A3 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_native_callback_dispatcher_init(Grpc.Core.Internal.NativeCallbackDispatcherCallback)
extern void DllImportsFromSharedLib_x86_grpcsharp_native_callback_dispatcher_init_m772AD3D9FF477CF28C6F93425C9680A5E17FEA95 (void);
// 0x000004A4 Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_metadata_credentials_create_from_plugin(System.IntPtr)
extern void DllImportsFromSharedLib_x86_grpcsharp_metadata_credentials_create_from_plugin_mEB1A7A7940D8411AFA0A01412464D410AAAAFB48 (void);
// 0x000004A5 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_metadata_credentials_notify_from_plugin(System.IntPtr,System.IntPtr,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.StatusCode,System.String)
extern void DllImportsFromSharedLib_x86_grpcsharp_metadata_credentials_notify_from_plugin_mBEF67473529BBA68AF9AD42490BCA419CD0E4391 (void);
// 0x000004A6 Grpc.Core.Internal.ServerCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_ssl_server_credentials_create(System.String,System.String[],System.String[],System.UIntPtr,Grpc.Core.SslClientCertificateRequestType)
extern void DllImportsFromSharedLib_x86_grpcsharp_ssl_server_credentials_create_mBF0830AABBD6A7DFF87F8F98BB3CA646131726BE (void);
// 0x000004A7 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_server_credentials_release(System.IntPtr)
extern void DllImportsFromSharedLib_x86_grpcsharp_server_credentials_release_mD823845E1A150CFEE9141A97F0A2A14782C1FB5C (void);
// 0x000004A8 Grpc.Core.Internal.ServerSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_server_create(Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_server_create_m7B2633069489A0A8776071A179BF850B0507C376 (void);
// 0x000004A9 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_server_register_completion_queue(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_server_register_completion_queue_m3F9F2BC46DD1C6A799EF0D5CC996B6F832D3509D (void);
// 0x000004AA System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_server_add_insecure_http2_port(Grpc.Core.Internal.ServerSafeHandle,System.String)
extern void DllImportsFromSharedLib_x86_grpcsharp_server_add_insecure_http2_port_m77C7079D11E921C08DDFB7B158216BECD31F9607 (void);
// 0x000004AB System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_server_add_secure_http2_port(Grpc.Core.Internal.ServerSafeHandle,System.String,Grpc.Core.Internal.ServerCredentialsSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_server_add_secure_http2_port_m84D0D78F5AC24917FCD98D89955434FCC533F42C (void);
// 0x000004AC System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_server_start(Grpc.Core.Internal.ServerSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_server_start_mD4AF2AD6F649EA77E6935DDEF6CB51728C342EF2 (void);
// 0x000004AD Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_server_request_call(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_server_request_call_mCB2C0A87EDDCFEDF94D88E9611CF583142F7E256 (void);
// 0x000004AE System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_server_cancel_all_calls(Grpc.Core.Internal.ServerSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_server_cancel_all_calls_mD463B9C72FFD584EA5E78EC512B6CC6633D9153A (void);
// 0x000004AF System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_server_shutdown_and_notify_callback(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_server_shutdown_and_notify_callback_m15F83C5E7C36380EBC52AB4DCCE67873FE4C1D88 (void);
// 0x000004B0 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_server_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x86_grpcsharp_server_destroy_m1026A1A95282BB6375055FD244DC44A196305A27 (void);
// 0x000004B1 Grpc.Core.Internal.AuthContextSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_call_auth_context(Grpc.Core.Internal.CallSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_call_auth_context_m65A6A061A0967BC815322C51B007B616865DD42D (void);
// 0x000004B2 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_auth_context_peer_identity_property_name(Grpc.Core.Internal.AuthContextSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_auth_context_peer_identity_property_name_m39EB68DB6DE7DA4B8E871A10A8FE8C051BC82344 (void);
// 0x000004B3 Grpc.Core.Internal.AuthContextSafeHandle/NativeAuthPropertyIterator Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_auth_context_property_iterator(Grpc.Core.Internal.AuthContextSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_auth_context_property_iterator_m124DE82BA86DECFBF4DE5B35EFBC2E9C18B1B65E (void);
// 0x000004B4 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_auth_property_iterator_next(Grpc.Core.Internal.AuthContextSafeHandle/NativeAuthPropertyIterator&)
extern void DllImportsFromSharedLib_x86_grpcsharp_auth_property_iterator_next_mA829E248B596B51B406AB47D4EDC2BBD6643B005 (void);
// 0x000004B5 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_auth_context_release(System.IntPtr)
extern void DllImportsFromSharedLib_x86_grpcsharp_auth_context_release_mB83D2174436871F604C08D47B793CB2575E987C3 (void);
// 0x000004B6 Grpc.Core.Internal.SliceBufferSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_slice_buffer_create()
extern void DllImportsFromSharedLib_x86_grpcsharp_slice_buffer_create_m99A4E2CD70D3D6219D1FDC51A79A4B2AE2E8ECA1 (void);
// 0x000004B7 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_slice_buffer_adjust_tail_space(Grpc.Core.Internal.SliceBufferSafeHandle,System.UIntPtr,System.UIntPtr)
extern void DllImportsFromSharedLib_x86_grpcsharp_slice_buffer_adjust_tail_space_m98803ED893DD8079FE2B87F2D3CE5F9AB0CAE9F9 (void);
// 0x000004B8 System.UIntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_slice_buffer_slice_count(Grpc.Core.Internal.SliceBufferSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_slice_buffer_slice_count_m804164816F9BC2D47E0E5445C32318A9E4C4D142 (void);
// 0x000004B9 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_slice_buffer_slice_peek(Grpc.Core.Internal.SliceBufferSafeHandle,System.UIntPtr,System.UIntPtr&,System.IntPtr&)
extern void DllImportsFromSharedLib_x86_grpcsharp_slice_buffer_slice_peek_m61A9FB813826C2450F786D551168BAB5CBF5AB43 (void);
// 0x000004BA System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_slice_buffer_reset_and_unref(Grpc.Core.Internal.SliceBufferSafeHandle)
extern void DllImportsFromSharedLib_x86_grpcsharp_slice_buffer_reset_and_unref_m94DE6181C6BEF89CD7EFCC109D034CF3BE6975E4 (void);
// 0x000004BB System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_slice_buffer_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x86_grpcsharp_slice_buffer_destroy_mE24A9EA053FA79A36455B5285DF289F2E9B41748 (void);
// 0x000004BC Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::gprsharp_now(Grpc.Core.Internal.ClockType)
extern void DllImportsFromSharedLib_x86_gprsharp_now_m048C8C61D32723EAB22E6DA950225848B619C433 (void);
// 0x000004BD Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::gprsharp_inf_future(Grpc.Core.Internal.ClockType)
extern void DllImportsFromSharedLib_x86_gprsharp_inf_future_mB5AD77411A1DC8BB1C28E20C6C2B279B0E5735A5 (void);
// 0x000004BE Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::gprsharp_inf_past(Grpc.Core.Internal.ClockType)
extern void DllImportsFromSharedLib_x86_gprsharp_inf_past_m1597F2AAD20A77BD7E4B43B63D1AF28841CF18D1 (void);
// 0x000004BF Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::gprsharp_convert_clock_type(Grpc.Core.Internal.Timespec,Grpc.Core.Internal.ClockType)
extern void DllImportsFromSharedLib_x86_gprsharp_convert_clock_type_m02CECECBB43C4CEE0DA311E581FF75CF406CE280 (void);
// 0x000004C0 System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::gprsharp_sizeof_timespec()
extern void DllImportsFromSharedLib_x86_gprsharp_sizeof_timespec_m2B80763ECE5D572312E30EA84E8B15E4DEE71DFB (void);
// 0x000004C1 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_test_callback(Grpc.Core.Internal.NativeCallbackTestDelegate)
extern void DllImportsFromSharedLib_x86_grpcsharp_test_callback_mF13128D33DCE75B71CF8400EBF5FF075A2AC853E (void);
// 0x000004C2 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_test_nop(System.IntPtr)
extern void DllImportsFromSharedLib_x86_grpcsharp_test_nop_m5C39C177F8AA98E79278DC3A97F71B2C36B5573D (void);
// 0x000004C3 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_test_override_method(System.String,System.String)
extern void DllImportsFromSharedLib_x86_grpcsharp_test_override_method_mEB445A0B91C6552C374F59393C95757F87F15BC7 (void);
// 0x000004C4 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::grpcsharp_test_call_start_unary_echo(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_x86_grpcsharp_test_call_start_unary_echo_m2D23CB35FAFA55BAFAF3957EDFF356141FFB0AD4 (void);
// 0x000004C5 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86::.ctor()
extern void DllImportsFromSharedLib_x86__ctor_mE614CD06CC7E4D32A26C4BD7EB1AF3F582987995 (void);
// 0x000004C6 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_init()
extern void DllImportsFromSharedLib_x64_grpcsharp_init_m5E2C8EE5721669FEFB4D83BABB7D28B2322A3C29 (void);
// 0x000004C7 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_shutdown()
extern void DllImportsFromSharedLib_x64_grpcsharp_shutdown_m1F37F7661EE3D2FCF6B501266AF1D8C3EC8E84C7 (void);
// 0x000004C8 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_version_string()
extern void DllImportsFromSharedLib_x64_grpcsharp_version_string_m00B4E09413C2B55586E7A3EC6743F593169534FA (void);
// 0x000004C9 Grpc.Core.Internal.BatchContextSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_batch_context_create()
extern void DllImportsFromSharedLib_x64_grpcsharp_batch_context_create_m6885784F811A3C0375612D1B683449029AB3BD76 (void);
// 0x000004CA System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_batch_context_recv_initial_metadata(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_batch_context_recv_initial_metadata_m33BA904894785A6E6CB7D0006B39B50169E2E6B3 (void);
// 0x000004CB System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_batch_context_recv_message_length(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_batch_context_recv_message_length_mAFDC66A694F47B772B0D60BD95DADC0CF26B1670 (void);
// 0x000004CC System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_batch_context_recv_message_next_slice_peek(Grpc.Core.Internal.BatchContextSafeHandle,System.UIntPtr&,System.IntPtr&)
extern void DllImportsFromSharedLib_x64_grpcsharp_batch_context_recv_message_next_slice_peek_mE729854C2AE3D3702B4FB58C5D11E3E9E64F24C2 (void);
// 0x000004CD Grpc.Core.StatusCode Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_batch_context_recv_status_on_client_status(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_batch_context_recv_status_on_client_status_mF9145EE5BBFD6E73FC90C46CC9B37D10FC979574 (void);
// 0x000004CE System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_batch_context_recv_status_on_client_details(Grpc.Core.Internal.BatchContextSafeHandle,System.UIntPtr&)
extern void DllImportsFromSharedLib_x64_grpcsharp_batch_context_recv_status_on_client_details_m9B382B2B89D6F3609AE095C5B5414FDB59BC2CC8 (void);
// 0x000004CF System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_batch_context_recv_status_on_client_error_string(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_batch_context_recv_status_on_client_error_string_m0251777D0EF3C168F8D298E709404FE7844F1B3A (void);
// 0x000004D0 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_batch_context_recv_status_on_client_trailing_metadata(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_batch_context_recv_status_on_client_trailing_metadata_m8823AEBF62CD139B0D9AE1BC1E91F055D6C6D670 (void);
// 0x000004D1 System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_batch_context_recv_close_on_server_cancelled(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_batch_context_recv_close_on_server_cancelled_m17466D14A7BBA2940C3944555911B27D1622F545 (void);
// 0x000004D2 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_batch_context_reset(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_batch_context_reset_mB0B2477D5569DF9B9BB015ADA3B782AF1853D408 (void);
// 0x000004D3 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_batch_context_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x64_grpcsharp_batch_context_destroy_m514C3050ADFEE02F9012882D82F1326B1958A270 (void);
// 0x000004D4 Grpc.Core.Internal.RequestCallContextSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_request_call_context_create()
extern void DllImportsFromSharedLib_x64_grpcsharp_request_call_context_create_m4B91C61F6A0350AC0D46CB9E2D08EB919B418F73 (void);
// 0x000004D5 Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_request_call_context_call(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_request_call_context_call_m5FCB629DCD9B5C7D25182A73D63A3854F5B8B68F (void);
// 0x000004D6 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_request_call_context_method(Grpc.Core.Internal.RequestCallContextSafeHandle,System.UIntPtr&)
extern void DllImportsFromSharedLib_x64_grpcsharp_request_call_context_method_m4A8DF683F02E61A41ED55BE9A292C0948E355691 (void);
// 0x000004D7 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_request_call_context_host(Grpc.Core.Internal.RequestCallContextSafeHandle,System.UIntPtr&)
extern void DllImportsFromSharedLib_x64_grpcsharp_request_call_context_host_m275D987F55DF01BA9E990CA69321AA73C81CDA77 (void);
// 0x000004D8 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_request_call_context_deadline(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_request_call_context_deadline_m7E3059CC0D871C3C7DB4E5FC9D63552FFD422DDC (void);
// 0x000004D9 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_request_call_context_request_metadata(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_request_call_context_request_metadata_m4528E620BD90FB5CC6ACA3A2EEA2517A9DCB1000 (void);
// 0x000004DA System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_request_call_context_reset(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_request_call_context_reset_m667669E65D31234EC00ACEA0FD2C8951C9F00A2B (void);
// 0x000004DB System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_request_call_context_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x64_grpcsharp_request_call_context_destroy_mBA148F1E6D0ED7FC7CC70FA0FBC25869F5463421 (void);
// 0x000004DC Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_composite_call_credentials_create(Grpc.Core.Internal.CallCredentialsSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_composite_call_credentials_create_m259CFF80E617C146C141C1BFAF2F62B9FD6D400E (void);
// 0x000004DD System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_call_credentials_release(System.IntPtr)
extern void DllImportsFromSharedLib_x64_grpcsharp_call_credentials_release_m5E8F0E6FBB38E0C17CA0FB1E8DB17235EC8FCF39 (void);
// 0x000004DE Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_call_cancel(Grpc.Core.Internal.CallSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_call_cancel_mA436EE3D39ADB94D8CFAE71152402958104AF4D1 (void);
// 0x000004DF Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_call_cancel_with_status(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.StatusCode,System.String)
extern void DllImportsFromSharedLib_x64_grpcsharp_call_cancel_with_status_m0D3FA87E6A1AB4E429F89C6C7B72B0906EC7E6B7 (void);
// 0x000004E0 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_call_start_unary(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_x64_grpcsharp_call_start_unary_m76A3C456070BE89E4AB8974EF4245050D7B4EA5A (void);
// 0x000004E1 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_call_start_client_streaming(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_x64_grpcsharp_call_start_client_streaming_m3CEF1E1B66161A672E9CA024CB5AF9308279D07B (void);
// 0x000004E2 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_call_start_server_streaming(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_x64_grpcsharp_call_start_server_streaming_m4DB72900F2361F4D53B9CCC59796D00B8304A505 (void);
// 0x000004E3 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_call_start_duplex_streaming(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_x64_grpcsharp_call_start_duplex_streaming_m05BFD61B6E3E7926A782CFCCD3B58152C190B108 (void);
// 0x000004E4 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_call_send_message(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,System.Int32)
extern void DllImportsFromSharedLib_x64_grpcsharp_call_send_message_m270F68533107E5652F392150977F26633696A0C4 (void);
// 0x000004E5 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_call_send_close_from_client(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_call_send_close_from_client_mB74938015A56A08A5E731C48211D1E8352AE198E (void);
// 0x000004E6 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_call_send_status_from_server(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.StatusCode,System.IntPtr,System.UIntPtr,Grpc.Core.Internal.MetadataArraySafeHandle,System.Int32,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags)
extern void DllImportsFromSharedLib_x64_grpcsharp_call_send_status_from_server_m428762FB54E218265B38D73342E22BD8FCD90A96 (void);
// 0x000004E7 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_call_recv_message(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_call_recv_message_m39999B201FCBAF1A0E39F414F08634CC5DFD69F3 (void);
// 0x000004E8 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_call_recv_initial_metadata(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_call_recv_initial_metadata_m5CE71CE3EEC34A1F41C9F1AE1C6EDE40C9A9AD81 (void);
// 0x000004E9 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_call_start_serverside(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_call_start_serverside_m66234D2C4D693B027BD33E8CC95B2AA66965FF93 (void);
// 0x000004EA Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_call_send_initial_metadata(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_call_send_initial_metadata_m709701F4BC297A61D0E145A4D43D1912884292D0 (void);
// 0x000004EB Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_call_set_credentials(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_call_set_credentials_mFC5C987DE8CA2B2FB18DC95ABB5B86225FB21578 (void);
// 0x000004EC Grpc.Core.Internal.CStringSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_call_get_peer(Grpc.Core.Internal.CallSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_call_get_peer_m5D2A7FA4870CDDCEF9F1046F2B83CBC00E9AF963 (void);
// 0x000004ED System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_call_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x64_grpcsharp_call_destroy_m7ACC774D4DCD56E7980795D706B6BE1C003B14E1 (void);
// 0x000004EE Grpc.Core.Internal.ChannelArgsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_channel_args_create(System.UIntPtr)
extern void DllImportsFromSharedLib_x64_grpcsharp_channel_args_create_m3AEC14AA944F13BDF0DB3146A44A0A7F2B05101B (void);
// 0x000004EF System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_channel_args_set_string(Grpc.Core.Internal.ChannelArgsSafeHandle,System.UIntPtr,System.String,System.String)
extern void DllImportsFromSharedLib_x64_grpcsharp_channel_args_set_string_mF0A5195C232D32C2E241FF361DC62ACB3C322EDC (void);
// 0x000004F0 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_channel_args_set_integer(Grpc.Core.Internal.ChannelArgsSafeHandle,System.UIntPtr,System.String,System.Int32)
extern void DllImportsFromSharedLib_x64_grpcsharp_channel_args_set_integer_mA07A8F31308E7B2BE801D2BB80CC30C40DC5335F (void);
// 0x000004F1 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_channel_args_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x64_grpcsharp_channel_args_destroy_mB932211CAADF50A57AE20BB9221105C8DFA71D71 (void);
// 0x000004F2 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_override_default_ssl_roots(System.String)
extern void DllImportsFromSharedLib_x64_grpcsharp_override_default_ssl_roots_m343C5F8200671F9AC7D18FDEB20B3EDBEDCB022D (void);
// 0x000004F3 Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_ssl_credentials_create(System.String,System.String,System.String,System.IntPtr)
extern void DllImportsFromSharedLib_x64_grpcsharp_ssl_credentials_create_mE4FF0A541CD669F2673368044C17F3D1373E2919 (void);
// 0x000004F4 Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_composite_channel_credentials_create(Grpc.Core.Internal.ChannelCredentialsSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_composite_channel_credentials_create_m7C33989353BDAC706D3180AEC5C6228350058011 (void);
// 0x000004F5 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_channel_credentials_release(System.IntPtr)
extern void DllImportsFromSharedLib_x64_grpcsharp_channel_credentials_release_mB8F04FE296D3435AED954A6E83F2883D4471199F (void);
// 0x000004F6 Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_insecure_channel_create(System.String,Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_insecure_channel_create_m747731D8F5BCF6204EE7CFD2332A18A01BBB6C53 (void);
// 0x000004F7 Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_secure_channel_create(Grpc.Core.Internal.ChannelCredentialsSafeHandle,System.String,Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_secure_channel_create_m9CBD3792904FFC7CF4B6E8F024602DB07D548B46 (void);
// 0x000004F8 Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_channel_create_call(Grpc.Core.Internal.ChannelSafeHandle,Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.ContextPropagationFlags,Grpc.Core.Internal.CompletionQueueSafeHandle,System.String,System.String,Grpc.Core.Internal.Timespec)
extern void DllImportsFromSharedLib_x64_grpcsharp_channel_create_call_mD120B6DD21C259A4DEB41CE22786116B515D4AA7 (void);
// 0x000004F9 Grpc.Core.ChannelState Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_channel_check_connectivity_state(Grpc.Core.Internal.ChannelSafeHandle,System.Int32)
extern void DllImportsFromSharedLib_x64_grpcsharp_channel_check_connectivity_state_m866461D503CB5FC7D5B740E69C822FAEDCB21332 (void);
// 0x000004FA System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_channel_watch_connectivity_state(Grpc.Core.Internal.ChannelSafeHandle,Grpc.Core.ChannelState,Grpc.Core.Internal.Timespec,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_channel_watch_connectivity_state_m145190F1E2AD72CB67AEB60F9C789CE966D2876F (void);
// 0x000004FB Grpc.Core.Internal.CStringSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_channel_get_target(Grpc.Core.Internal.ChannelSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_channel_get_target_mA0753DC6FD6BB81CE48B7FF3229E9AB74FAEEBC2 (void);
// 0x000004FC System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_channel_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x64_grpcsharp_channel_destroy_m9FCFCD087876EB18A91DB6ADE2AD4BB7083FADE1 (void);
// 0x000004FD System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_sizeof_grpc_event()
extern void DllImportsFromSharedLib_x64_grpcsharp_sizeof_grpc_event_m9B03682BD5ACFB20F559D53997945B7B050EAC88 (void);
// 0x000004FE Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_completion_queue_create_async()
extern void DllImportsFromSharedLib_x64_grpcsharp_completion_queue_create_async_m25F0A6C33E7647532106057D099CE94A8CB29C86 (void);
// 0x000004FF Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_completion_queue_create_sync()
extern void DllImportsFromSharedLib_x64_grpcsharp_completion_queue_create_sync_m3BBD6F91E23BA10A5B80A41427F5DF5C17317D77 (void);
// 0x00000500 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_completion_queue_shutdown(Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_completion_queue_shutdown_m6E38191CE9331CFB0674657D6A0F30C568E9B0EA (void);
// 0x00000501 Grpc.Core.Internal.CompletionQueueEvent Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_completion_queue_next(Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_completion_queue_next_m8F7E8AF259BDB2A6B6BABAB3A1D60D14844E8CD9 (void);
// 0x00000502 Grpc.Core.Internal.CompletionQueueEvent Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_completion_queue_pluck(Grpc.Core.Internal.CompletionQueueSafeHandle,System.IntPtr)
extern void DllImportsFromSharedLib_x64_grpcsharp_completion_queue_pluck_m89EF2D5BC76D6DF429F3A40BB195A5A8961B9D6B (void);
// 0x00000503 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_completion_queue_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x64_grpcsharp_completion_queue_destroy_m3777B8A215237006E0FA771289E66B2907E9BEC2 (void);
// 0x00000504 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::gprsharp_free(System.IntPtr)
extern void DllImportsFromSharedLib_x64_gprsharp_free_m031CAFAA6C2A8ABBF89436C151DA8CA3BE6A92E3 (void);
// 0x00000505 Grpc.Core.Internal.MetadataArraySafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_metadata_array_create(System.UIntPtr)
extern void DllImportsFromSharedLib_x64_grpcsharp_metadata_array_create_m7BD4256944BF26DF88AB8F174B9F9124B84A078B (void);
// 0x00000506 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_metadata_array_add(Grpc.Core.Internal.MetadataArraySafeHandle,System.String,System.Byte[],System.UIntPtr)
extern void DllImportsFromSharedLib_x64_grpcsharp_metadata_array_add_mC925D7E8C3F82F70ED312D10868F8877F66C93E6 (void);
// 0x00000507 System.UIntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_metadata_array_count(System.IntPtr)
extern void DllImportsFromSharedLib_x64_grpcsharp_metadata_array_count_mEE6C0B25DED2888CED0D0D67E383F7FFB94CFBA8 (void);
// 0x00000508 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_metadata_array_get_key(System.IntPtr,System.UIntPtr,System.UIntPtr&)
extern void DllImportsFromSharedLib_x64_grpcsharp_metadata_array_get_key_m2D3A518F4932C51B8E3BCEDB5CF327F7FFBD39BB (void);
// 0x00000509 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_metadata_array_get_value(System.IntPtr,System.UIntPtr,System.UIntPtr&)
extern void DllImportsFromSharedLib_x64_grpcsharp_metadata_array_get_value_m0940EB4F30B0CA5F0549550A73F1CD6AB9D62C3D (void);
// 0x0000050A System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_metadata_array_destroy_full(System.IntPtr)
extern void DllImportsFromSharedLib_x64_grpcsharp_metadata_array_destroy_full_m85D282DF3BF838BFEDBF3DF656E066B8DC0768FB (void);
// 0x0000050B System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_redirect_log(Grpc.Core.Internal.GprLogDelegate)
extern void DllImportsFromSharedLib_x64_grpcsharp_redirect_log_m2CAD08239C75135959C171C95BBC0916503EC817 (void);
// 0x0000050C System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_native_callback_dispatcher_init(Grpc.Core.Internal.NativeCallbackDispatcherCallback)
extern void DllImportsFromSharedLib_x64_grpcsharp_native_callback_dispatcher_init_mA01C89ECF1970425CF1EACE7107094148EFA2DF5 (void);
// 0x0000050D Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_metadata_credentials_create_from_plugin(System.IntPtr)
extern void DllImportsFromSharedLib_x64_grpcsharp_metadata_credentials_create_from_plugin_mB34C4D9A94DD4486977E9B9A52A5395891346EEB (void);
// 0x0000050E System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_metadata_credentials_notify_from_plugin(System.IntPtr,System.IntPtr,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.StatusCode,System.String)
extern void DllImportsFromSharedLib_x64_grpcsharp_metadata_credentials_notify_from_plugin_mD4850ED38C57652F1F920799DA639612C305E7AF (void);
// 0x0000050F Grpc.Core.Internal.ServerCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_ssl_server_credentials_create(System.String,System.String[],System.String[],System.UIntPtr,Grpc.Core.SslClientCertificateRequestType)
extern void DllImportsFromSharedLib_x64_grpcsharp_ssl_server_credentials_create_mC470AB17BCAD79790FBD59A955328412EB6EEC90 (void);
// 0x00000510 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_server_credentials_release(System.IntPtr)
extern void DllImportsFromSharedLib_x64_grpcsharp_server_credentials_release_m9AA972B99942831974F68CE26A27931BB63E37A5 (void);
// 0x00000511 Grpc.Core.Internal.ServerSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_server_create(Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_server_create_mFD2E57771799F43D89BEFF4191FC22A68D653E12 (void);
// 0x00000512 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_server_register_completion_queue(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_server_register_completion_queue_mF7C8BE9EF703CF1DF1604F3B0012F7CE58D4CEA4 (void);
// 0x00000513 System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_server_add_insecure_http2_port(Grpc.Core.Internal.ServerSafeHandle,System.String)
extern void DllImportsFromSharedLib_x64_grpcsharp_server_add_insecure_http2_port_mBB3D9AD60F4BA93C56B934D0F4363FD58FEBA860 (void);
// 0x00000514 System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_server_add_secure_http2_port(Grpc.Core.Internal.ServerSafeHandle,System.String,Grpc.Core.Internal.ServerCredentialsSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_server_add_secure_http2_port_mFE1823D85F96401B8528654F222BF09B0AD646F2 (void);
// 0x00000515 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_server_start(Grpc.Core.Internal.ServerSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_server_start_m2C9ABDF719873555513479EC34E30946B01485B8 (void);
// 0x00000516 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_server_request_call(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_server_request_call_m48F25263866D954D533BB60BBE803EE683D6B02B (void);
// 0x00000517 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_server_cancel_all_calls(Grpc.Core.Internal.ServerSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_server_cancel_all_calls_mC96F9B3B49BB5C5BDD041396E9ADE93791925CF5 (void);
// 0x00000518 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_server_shutdown_and_notify_callback(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_server_shutdown_and_notify_callback_m237B0D6AE2A6CE5297205963454AE9D0EE5F0826 (void);
// 0x00000519 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_server_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x64_grpcsharp_server_destroy_m31C807D918523EF282A76CEF93A26538AA40BEDC (void);
// 0x0000051A Grpc.Core.Internal.AuthContextSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_call_auth_context(Grpc.Core.Internal.CallSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_call_auth_context_mF05B76BE8199532436B7EFF742841427072CB916 (void);
// 0x0000051B System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_auth_context_peer_identity_property_name(Grpc.Core.Internal.AuthContextSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_auth_context_peer_identity_property_name_m4739E815B0B3F63189ABDCA707885AC2B0FED014 (void);
// 0x0000051C Grpc.Core.Internal.AuthContextSafeHandle/NativeAuthPropertyIterator Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_auth_context_property_iterator(Grpc.Core.Internal.AuthContextSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_auth_context_property_iterator_m1A97528380FD36C86B289348FE745BB6479A5215 (void);
// 0x0000051D System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_auth_property_iterator_next(Grpc.Core.Internal.AuthContextSafeHandle/NativeAuthPropertyIterator&)
extern void DllImportsFromSharedLib_x64_grpcsharp_auth_property_iterator_next_m04D16D3103864320143601DA9890ABD5EBC5C5DD (void);
// 0x0000051E System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_auth_context_release(System.IntPtr)
extern void DllImportsFromSharedLib_x64_grpcsharp_auth_context_release_mA6338CAA2C3E159B441B06E50EB82C17FFC2517A (void);
// 0x0000051F Grpc.Core.Internal.SliceBufferSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_slice_buffer_create()
extern void DllImportsFromSharedLib_x64_grpcsharp_slice_buffer_create_mECB5B1FA4FBE3A09F8B4059E3507324C7DCC5603 (void);
// 0x00000520 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_slice_buffer_adjust_tail_space(Grpc.Core.Internal.SliceBufferSafeHandle,System.UIntPtr,System.UIntPtr)
extern void DllImportsFromSharedLib_x64_grpcsharp_slice_buffer_adjust_tail_space_m23B41C3716BBC575C5593792DD2556089035F51B (void);
// 0x00000521 System.UIntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_slice_buffer_slice_count(Grpc.Core.Internal.SliceBufferSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_slice_buffer_slice_count_m497F2C27F7CB822AA973B46685619C78BD58BD23 (void);
// 0x00000522 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_slice_buffer_slice_peek(Grpc.Core.Internal.SliceBufferSafeHandle,System.UIntPtr,System.UIntPtr&,System.IntPtr&)
extern void DllImportsFromSharedLib_x64_grpcsharp_slice_buffer_slice_peek_m919A24F61402218B42D2BF9AE51AA34F34E4B200 (void);
// 0x00000523 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_slice_buffer_reset_and_unref(Grpc.Core.Internal.SliceBufferSafeHandle)
extern void DllImportsFromSharedLib_x64_grpcsharp_slice_buffer_reset_and_unref_mDFC479FCEF0042E790D576A1F7D44DCFF908DB0B (void);
// 0x00000524 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_slice_buffer_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x64_grpcsharp_slice_buffer_destroy_mBB50A38462EB5FF6A12120FD06E888A7C830972C (void);
// 0x00000525 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::gprsharp_now(Grpc.Core.Internal.ClockType)
extern void DllImportsFromSharedLib_x64_gprsharp_now_mF75FE458A9F9E83B51E42C0F21A8924F61559F8E (void);
// 0x00000526 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::gprsharp_inf_future(Grpc.Core.Internal.ClockType)
extern void DllImportsFromSharedLib_x64_gprsharp_inf_future_m4246D26C4A89FC2F2665ECCDED04EFE2C3E767FD (void);
// 0x00000527 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::gprsharp_inf_past(Grpc.Core.Internal.ClockType)
extern void DllImportsFromSharedLib_x64_gprsharp_inf_past_m15104943B9E3B7B5C8BA64F84A2AFC48D6CB9629 (void);
// 0x00000528 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::gprsharp_convert_clock_type(Grpc.Core.Internal.Timespec,Grpc.Core.Internal.ClockType)
extern void DllImportsFromSharedLib_x64_gprsharp_convert_clock_type_mD533678141E9073646013B9E67DC5029A7AE885B (void);
// 0x00000529 System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::gprsharp_sizeof_timespec()
extern void DllImportsFromSharedLib_x64_gprsharp_sizeof_timespec_mB614EE8B626A22DF116CD90326BFEC59E245ABC5 (void);
// 0x0000052A Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_test_callback(Grpc.Core.Internal.NativeCallbackTestDelegate)
extern void DllImportsFromSharedLib_x64_grpcsharp_test_callback_mD5248CB472C369935D858BD72EBEF7560FADFE2A (void);
// 0x0000052B System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_test_nop(System.IntPtr)
extern void DllImportsFromSharedLib_x64_grpcsharp_test_nop_m3C526DD621ABD56FF9749AE02447285C5207FD00 (void);
// 0x0000052C System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_test_override_method(System.String,System.String)
extern void DllImportsFromSharedLib_x64_grpcsharp_test_override_method_mDDFFDCA53462023EFC127B4FAF02B88A0EA0B114 (void);
// 0x0000052D Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::grpcsharp_test_call_start_unary_echo(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_x64_grpcsharp_test_call_start_unary_echo_mEA0C8DEF6EA19570DE7CF03A492DE32FBD62B954 (void);
// 0x0000052E System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64::.ctor()
extern void DllImportsFromSharedLib_x64__ctor_m74A4FFFABE72E246C5679A8E96C5CE0C0D5DD567 (void);
// 0x0000052F System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_init()
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_init_mB3C5062607D8629C78B5A86F3012B512BACB3AC2 (void);
// 0x00000530 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_shutdown()
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_shutdown_mEACF4A2C7539DD993FD5508AA16636E2806AAA58 (void);
// 0x00000531 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_version_string()
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_version_string_m3B69465095479460E08CCDAF4EC090AAAF0AD0D7 (void);
// 0x00000532 Grpc.Core.Internal.BatchContextSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_batch_context_create()
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_batch_context_create_mCD75B22C640E53D8E6C59139712B2E509FC0D8B6 (void);
// 0x00000533 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_batch_context_recv_initial_metadata(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_batch_context_recv_initial_metadata_m17877BE2E523F39FDA642213DB855CC475CF36D8 (void);
// 0x00000534 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_batch_context_recv_message_length(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_batch_context_recv_message_length_m8BA18CACC6224E5E95F7CB81CF66DCD3D1AF0613 (void);
// 0x00000535 System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_batch_context_recv_message_next_slice_peek(Grpc.Core.Internal.BatchContextSafeHandle,System.UIntPtr&,System.IntPtr&)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_batch_context_recv_message_next_slice_peek_m182057F288BB90A471563BBBE2965D0827821262 (void);
// 0x00000536 Grpc.Core.StatusCode Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_batch_context_recv_status_on_client_status(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_batch_context_recv_status_on_client_status_m66BB0A375C6E1ADDA885397E63C3BC6F5E03E853 (void);
// 0x00000537 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_batch_context_recv_status_on_client_details(Grpc.Core.Internal.BatchContextSafeHandle,System.UIntPtr&)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_batch_context_recv_status_on_client_details_m8F0941C9FF35D2069211E0973F2946BDB4FEA407 (void);
// 0x00000538 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_batch_context_recv_status_on_client_error_string(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_batch_context_recv_status_on_client_error_string_m425141F8AE3B806400E4D83B94198F655C7515F9 (void);
// 0x00000539 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_batch_context_recv_status_on_client_trailing_metadata(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_batch_context_recv_status_on_client_trailing_metadata_m4C4B1A46FF115787F85F4B1DDE58E3EAE2605D19 (void);
// 0x0000053A System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_batch_context_recv_close_on_server_cancelled(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_batch_context_recv_close_on_server_cancelled_m44E3CDC93A457FDA3CC8652827D831F3C0FE22A7 (void);
// 0x0000053B System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_batch_context_reset(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_batch_context_reset_mDBBD99A5B62F7000F5F0C0F9AF31CBA13480853B (void);
// 0x0000053C System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_batch_context_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_batch_context_destroy_mDA98DD2D2DDA926BBAA65B6D573087BA378D310D (void);
// 0x0000053D Grpc.Core.Internal.RequestCallContextSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_request_call_context_create()
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_request_call_context_create_m37750FF5042A0A49BC62D4033D96194CAA34D53E (void);
// 0x0000053E Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_request_call_context_call(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_request_call_context_call_m67A7C4385F7AAB7C5DF00296831A33D50B2E6E1A (void);
// 0x0000053F System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_request_call_context_method(Grpc.Core.Internal.RequestCallContextSafeHandle,System.UIntPtr&)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_request_call_context_method_mA188BD64C246BF73EF5C4D780B958AC3CB1A8F53 (void);
// 0x00000540 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_request_call_context_host(Grpc.Core.Internal.RequestCallContextSafeHandle,System.UIntPtr&)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_request_call_context_host_m2E7596698B3C555935BEE50AD0215CAC7857E9C5 (void);
// 0x00000541 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_request_call_context_deadline(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_request_call_context_deadline_mC59C9279EF2101AEFC54B27D98E5C81F87922C3F (void);
// 0x00000542 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_request_call_context_request_metadata(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_request_call_context_request_metadata_m124CE90F62E34C3B1187713436B9021AEDD1A949 (void);
// 0x00000543 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_request_call_context_reset(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_request_call_context_reset_m1D267AD59CEE35082E256DE3DBE03BA3C2597A11 (void);
// 0x00000544 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_request_call_context_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_request_call_context_destroy_m35BA751649F4D52C19DF2E0DB3110D73287EB479 (void);
// 0x00000545 Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_composite_call_credentials_create(Grpc.Core.Internal.CallCredentialsSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_composite_call_credentials_create_m4266DA1B32730254B2D7071E89BD98AA5AD62E0C (void);
// 0x00000546 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_call_credentials_release(System.IntPtr)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_call_credentials_release_m30E33999A470A0DCCCF98402C518D77173365B75 (void);
// 0x00000547 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_call_cancel(Grpc.Core.Internal.CallSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_call_cancel_m9E26A58A1CB7CF4947D87BC13393AD1AC0990A27 (void);
// 0x00000548 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_call_cancel_with_status(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.StatusCode,System.String)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_call_cancel_with_status_m2415706490EC996F3AD1E511BFE4F5678ED65574 (void);
// 0x00000549 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_call_start_unary(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_call_start_unary_mC202F7C23F9FD846262175A305F3CED220754905 (void);
// 0x0000054A Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_call_start_client_streaming(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_call_start_client_streaming_m3B85DCCFE09C7D2F417E0844E65186EF6BF2CE38 (void);
// 0x0000054B Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_call_start_server_streaming(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_call_start_server_streaming_mFFB5CD838448F179F9CEE50F072F5B797C5AF16B (void);
// 0x0000054C Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_call_start_duplex_streaming(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_call_start_duplex_streaming_mEA469B832FB3E8B9269700F0EC8FEB238A7972CB (void);
// 0x0000054D Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_call_send_message(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,System.Int32)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_call_send_message_m4725F1F4ACB91032770211790C447963B65CD32C (void);
// 0x0000054E Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_call_send_close_from_client(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_call_send_close_from_client_m21CEFEB96E3B9ECD9B17AAD5365D56CADB5C3572 (void);
// 0x0000054F Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_call_send_status_from_server(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.StatusCode,System.IntPtr,System.UIntPtr,Grpc.Core.Internal.MetadataArraySafeHandle,System.Int32,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_call_send_status_from_server_mAC1FCBC545CF99476B57910791708DD3D15AEF15 (void);
// 0x00000550 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_call_recv_message(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_call_recv_message_m5C2486FA01E1F0604A09D7659CE545A8E8144AE5 (void);
// 0x00000551 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_call_recv_initial_metadata(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_call_recv_initial_metadata_mA7746856278233A9755DFBC001815CB24D17A9D2 (void);
// 0x00000552 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_call_start_serverside(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_call_start_serverside_m620C4CB9FE7D2FFF28E41073FB122C5D70B9CF5D (void);
// 0x00000553 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_call_send_initial_metadata(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_call_send_initial_metadata_mCE4B175E121B9360EA8F7979A4558CFDA368AFBB (void);
// 0x00000554 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_call_set_credentials(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_call_set_credentials_m23215D5495C59777E0F9F1BAEE43DB5366828F37 (void);
// 0x00000555 Grpc.Core.Internal.CStringSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_call_get_peer(Grpc.Core.Internal.CallSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_call_get_peer_m11DE1A06DF6AE2DD4FA2D42EE6AABB26F2CE7BE2 (void);
// 0x00000556 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_call_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_call_destroy_mCED8FE6D0E532A586EF12C4CCC7D91A66E0CA72A (void);
// 0x00000557 Grpc.Core.Internal.ChannelArgsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_channel_args_create(System.UIntPtr)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_channel_args_create_mEB9070B1EA734A7E5637152303ECBC820FFF737B (void);
// 0x00000558 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_channel_args_set_string(Grpc.Core.Internal.ChannelArgsSafeHandle,System.UIntPtr,System.String,System.String)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_channel_args_set_string_mE93C2643665F5F9B15202AD1F792F79B56508D1A (void);
// 0x00000559 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_channel_args_set_integer(Grpc.Core.Internal.ChannelArgsSafeHandle,System.UIntPtr,System.String,System.Int32)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_channel_args_set_integer_mE8543F4BD137F879B4304804E576D554460F4B2E (void);
// 0x0000055A System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_channel_args_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_channel_args_destroy_m3D309BB9D14937FD08E044F5F4BD25C7DF03F0F7 (void);
// 0x0000055B System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_override_default_ssl_roots(System.String)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_override_default_ssl_roots_mF060799C4E25ADECC3156681DE4B4A069A18776A (void);
// 0x0000055C Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_ssl_credentials_create(System.String,System.String,System.String,System.IntPtr)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_ssl_credentials_create_mEF4355C0DFB436084ACBB22F655E419B3E146BAF (void);
// 0x0000055D Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_composite_channel_credentials_create(Grpc.Core.Internal.ChannelCredentialsSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_composite_channel_credentials_create_mA7CF0D897887AC33F97AA455C76C9F83A964EC5D (void);
// 0x0000055E System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_channel_credentials_release(System.IntPtr)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_channel_credentials_release_mDBBE4DAD5BFA8929CE5342192FB19A8DF72D00D4 (void);
// 0x0000055F Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_insecure_channel_create(System.String,Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_insecure_channel_create_m9A69F45C2B2913D3F2F61B99D379B006CF173850 (void);
// 0x00000560 Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_secure_channel_create(Grpc.Core.Internal.ChannelCredentialsSafeHandle,System.String,Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_secure_channel_create_m1015BD64833075C45E0F0058BA273D410AD829D1 (void);
// 0x00000561 Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_channel_create_call(Grpc.Core.Internal.ChannelSafeHandle,Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.ContextPropagationFlags,Grpc.Core.Internal.CompletionQueueSafeHandle,System.String,System.String,Grpc.Core.Internal.Timespec)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_channel_create_call_mE29CD95DDD4F160832275DB4E532C2FC16554A7F (void);
// 0x00000562 Grpc.Core.ChannelState Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_channel_check_connectivity_state(Grpc.Core.Internal.ChannelSafeHandle,System.Int32)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_channel_check_connectivity_state_mD6AC8AE88BE32FAF71D5F13BB5B535938C1D8C04 (void);
// 0x00000563 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_channel_watch_connectivity_state(Grpc.Core.Internal.ChannelSafeHandle,Grpc.Core.ChannelState,Grpc.Core.Internal.Timespec,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_channel_watch_connectivity_state_m78D72A1161BF6DB0EF499F8411662986822E15B3 (void);
// 0x00000564 Grpc.Core.Internal.CStringSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_channel_get_target(Grpc.Core.Internal.ChannelSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_channel_get_target_m2D288C062D0085011D14976E9D2321A45C8D5765 (void);
// 0x00000565 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_channel_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_channel_destroy_m3BF2585258309003CE2B6EF09837A05267AEF132 (void);
// 0x00000566 System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_sizeof_grpc_event()
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_sizeof_grpc_event_m1D8D00328B80358AE709DC06A65BF08E04B97BD2 (void);
// 0x00000567 Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_completion_queue_create_async()
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_completion_queue_create_async_m3DD9A746900191580240E73BD94D1DECBB258924 (void);
// 0x00000568 Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_completion_queue_create_sync()
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_completion_queue_create_sync_m41C4FC2D793639F1255DFDD11EAF89B75E5B9020 (void);
// 0x00000569 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_completion_queue_shutdown(Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_completion_queue_shutdown_m0B64F5B5C335D6E4F354AC65A0733A25990F6C67 (void);
// 0x0000056A Grpc.Core.Internal.CompletionQueueEvent Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_completion_queue_next(Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_completion_queue_next_m4D8FEC8D550BB32DEE7445FA971C54DAE605ABC3 (void);
// 0x0000056B Grpc.Core.Internal.CompletionQueueEvent Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_completion_queue_pluck(Grpc.Core.Internal.CompletionQueueSafeHandle,System.IntPtr)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_completion_queue_pluck_m6A0D96A3132959EA326A244CEC850CCF231D6F63 (void);
// 0x0000056C System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_completion_queue_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_completion_queue_destroy_mB49F75E5DD525185AD2906EAA26091046B473900 (void);
// 0x0000056D System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::gprsharp_free(System.IntPtr)
extern void DllImportsFromSharedLib_x86_dll_gprsharp_free_m544D3B4DEDBD1E3A963C75D879C0881DFBC285C5 (void);
// 0x0000056E Grpc.Core.Internal.MetadataArraySafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_metadata_array_create(System.UIntPtr)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_metadata_array_create_mDE249DA3852A15F2BECD118457BE94328F67069C (void);
// 0x0000056F System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_metadata_array_add(Grpc.Core.Internal.MetadataArraySafeHandle,System.String,System.Byte[],System.UIntPtr)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_metadata_array_add_m399EEB4A15B063B431DCD60FAA061113772353BB (void);
// 0x00000570 System.UIntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_metadata_array_count(System.IntPtr)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_metadata_array_count_m5FA151D05B93CE58992571C34F8058344D3A29FA (void);
// 0x00000571 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_metadata_array_get_key(System.IntPtr,System.UIntPtr,System.UIntPtr&)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_metadata_array_get_key_mAD9DE39151BB4705902D83CA9036467993527410 (void);
// 0x00000572 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_metadata_array_get_value(System.IntPtr,System.UIntPtr,System.UIntPtr&)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_metadata_array_get_value_m7048DE3C3590A3089BE097874EE59B485FE8B694 (void);
// 0x00000573 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_metadata_array_destroy_full(System.IntPtr)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_metadata_array_destroy_full_mD6B3BC372A90E461850D81E8CE4D6A5961E8CA2E (void);
// 0x00000574 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_redirect_log(Grpc.Core.Internal.GprLogDelegate)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_redirect_log_m857A27B1F30368E3B52BD408906FD762C0808FBE (void);
// 0x00000575 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_native_callback_dispatcher_init(Grpc.Core.Internal.NativeCallbackDispatcherCallback)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_native_callback_dispatcher_init_m9AE7CB62C48DFF661FCB8278161891D7B7D3B3FF (void);
// 0x00000576 Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_metadata_credentials_create_from_plugin(System.IntPtr)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_metadata_credentials_create_from_plugin_mEE56E06A76A6396D1870D390019A07033E0C8719 (void);
// 0x00000577 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_metadata_credentials_notify_from_plugin(System.IntPtr,System.IntPtr,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.StatusCode,System.String)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_metadata_credentials_notify_from_plugin_m01070B02EFE490C378FA1EF8B66E8948272F7520 (void);
// 0x00000578 Grpc.Core.Internal.ServerCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_ssl_server_credentials_create(System.String,System.String[],System.String[],System.UIntPtr,Grpc.Core.SslClientCertificateRequestType)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_ssl_server_credentials_create_m106435A8497A2F1EC8363583BF10C5120CAA54F4 (void);
// 0x00000579 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_server_credentials_release(System.IntPtr)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_server_credentials_release_mB40656F49A173D8F7C123C5C6564B9389B34E5D2 (void);
// 0x0000057A Grpc.Core.Internal.ServerSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_server_create(Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_server_create_m79F5B516BB13BEE1D1A55468B1763144051F9CF5 (void);
// 0x0000057B System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_server_register_completion_queue(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_server_register_completion_queue_m0F98681B96F46D82DBBD94A42A25D38F2EB00FB9 (void);
// 0x0000057C System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_server_add_insecure_http2_port(Grpc.Core.Internal.ServerSafeHandle,System.String)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_server_add_insecure_http2_port_mE8EE94713CF3DB873EE9F1587140CF687E6FCF5E (void);
// 0x0000057D System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_server_add_secure_http2_port(Grpc.Core.Internal.ServerSafeHandle,System.String,Grpc.Core.Internal.ServerCredentialsSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_server_add_secure_http2_port_mA5DA9B5861B6009D899A44EE13D0BCE2BA1010AC (void);
// 0x0000057E System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_server_start(Grpc.Core.Internal.ServerSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_server_start_m2DAC8609EB224CB1BEC5D6AD1E7995FE0059877E (void);
// 0x0000057F Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_server_request_call(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_server_request_call_m676A96C6B7F082A143A7A47A9CCF0651F3B71171 (void);
// 0x00000580 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_server_cancel_all_calls(Grpc.Core.Internal.ServerSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_server_cancel_all_calls_mCC138621CDCCD85043B6C75A6E106AD94C5682F9 (void);
// 0x00000581 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_server_shutdown_and_notify_callback(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_server_shutdown_and_notify_callback_m16CF72D3D6015C8D78ACF46D8A6EE749968B103B (void);
// 0x00000582 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_server_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_server_destroy_m995D942D0EFE0AE94FA6BE45988891237BFB3BB2 (void);
// 0x00000583 Grpc.Core.Internal.AuthContextSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_call_auth_context(Grpc.Core.Internal.CallSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_call_auth_context_mCB7183D98DB8A18F9661BA4859DA72231B534A10 (void);
// 0x00000584 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_auth_context_peer_identity_property_name(Grpc.Core.Internal.AuthContextSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_auth_context_peer_identity_property_name_m4CEFD0F568D68EF2030EE092C7217F513C9F5521 (void);
// 0x00000585 Grpc.Core.Internal.AuthContextSafeHandle/NativeAuthPropertyIterator Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_auth_context_property_iterator(Grpc.Core.Internal.AuthContextSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_auth_context_property_iterator_mDD4F4116BE6428920E7CFC50D49AD4EE7CD58655 (void);
// 0x00000586 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_auth_property_iterator_next(Grpc.Core.Internal.AuthContextSafeHandle/NativeAuthPropertyIterator&)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_auth_property_iterator_next_mC9E6B8FC30E2640F227D8E53444AA4F5BCAE387F (void);
// 0x00000587 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_auth_context_release(System.IntPtr)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_auth_context_release_m18D4863D9748D4DF7F1CD8BEBA16BC731E174859 (void);
// 0x00000588 Grpc.Core.Internal.SliceBufferSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_slice_buffer_create()
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_slice_buffer_create_m407AEC34A9C105841FA27773B1D7357817E32DED (void);
// 0x00000589 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_slice_buffer_adjust_tail_space(Grpc.Core.Internal.SliceBufferSafeHandle,System.UIntPtr,System.UIntPtr)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_slice_buffer_adjust_tail_space_m0695840DE65C15375F953478B0173256EF3C8739 (void);
// 0x0000058A System.UIntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_slice_buffer_slice_count(Grpc.Core.Internal.SliceBufferSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_slice_buffer_slice_count_mCAABAB54CE7E87E4A84FA8DC5B20C9BF4D6B47E4 (void);
// 0x0000058B System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_slice_buffer_slice_peek(Grpc.Core.Internal.SliceBufferSafeHandle,System.UIntPtr,System.UIntPtr&,System.IntPtr&)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_slice_buffer_slice_peek_m4FBC5814D53F4E1AFFB0371658D60AB1836C5FDF (void);
// 0x0000058C System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_slice_buffer_reset_and_unref(Grpc.Core.Internal.SliceBufferSafeHandle)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_slice_buffer_reset_and_unref_m70A0A94B3DA0544009C286ACEC4D71AF9E750BA8 (void);
// 0x0000058D System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_slice_buffer_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_slice_buffer_destroy_mF16EE8E8537C52429E3A1390282A1A542E33B529 (void);
// 0x0000058E Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::gprsharp_now(Grpc.Core.Internal.ClockType)
extern void DllImportsFromSharedLib_x86_dll_gprsharp_now_m79084723B1AC9B9885728E9B1364E21212B99684 (void);
// 0x0000058F Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::gprsharp_inf_future(Grpc.Core.Internal.ClockType)
extern void DllImportsFromSharedLib_x86_dll_gprsharp_inf_future_m2E612F3623799590A2CC4DEC0436EE9E9AFD566A (void);
// 0x00000590 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::gprsharp_inf_past(Grpc.Core.Internal.ClockType)
extern void DllImportsFromSharedLib_x86_dll_gprsharp_inf_past_m687DE9D18CBD00D370B7368DBBFF6E94327F97A6 (void);
// 0x00000591 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::gprsharp_convert_clock_type(Grpc.Core.Internal.Timespec,Grpc.Core.Internal.ClockType)
extern void DllImportsFromSharedLib_x86_dll_gprsharp_convert_clock_type_mA5AD9F94536EFE7BEB622662A8BE679BDD4F37BA (void);
// 0x00000592 System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::gprsharp_sizeof_timespec()
extern void DllImportsFromSharedLib_x86_dll_gprsharp_sizeof_timespec_mB0295D2BED0FB20EEBF0904332DC7220696302F2 (void);
// 0x00000593 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_test_callback(Grpc.Core.Internal.NativeCallbackTestDelegate)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_test_callback_m3ED7D6364A14B82275666CA42D064FF82B2A9A7E (void);
// 0x00000594 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_test_nop(System.IntPtr)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_test_nop_mF423A0C0B3FC727622B6A837F85146AA49C4756E (void);
// 0x00000595 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_test_override_method(System.String,System.String)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_test_override_method_m2F34F5A67F08862841BC4522592AA8A2985149B0 (void);
// 0x00000596 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::grpcsharp_test_call_start_unary_echo(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_x86_dll_grpcsharp_test_call_start_unary_echo_m59F2F21D8D3D40005185F21AA1674E5B4FC7E63D (void);
// 0x00000597 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x86_dll::.ctor()
extern void DllImportsFromSharedLib_x86_dll__ctor_m72FA29799C84E5A93FDC3455AC1441594C397823 (void);
// 0x00000598 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_init()
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_init_mD824CA00A4967EA1E54636E77D954158818675D0 (void);
// 0x00000599 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_shutdown()
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_shutdown_m08B9038DB8C2B144833C1288A0CA91287E18F3BA (void);
// 0x0000059A System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_version_string()
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_version_string_mFA2D1E717390E3B25943F81D6EF77647C3A1113D (void);
// 0x0000059B Grpc.Core.Internal.BatchContextSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_batch_context_create()
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_batch_context_create_m391BD40E96DEF50EC957870ACA0D130D4D8B6855 (void);
// 0x0000059C System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_batch_context_recv_initial_metadata(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_batch_context_recv_initial_metadata_mC3361CD4975DFA06C0662D6E391040F2635C030C (void);
// 0x0000059D System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_batch_context_recv_message_length(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_batch_context_recv_message_length_mD5F85292A7C6E26DCF04ACF161B72FD853692E43 (void);
// 0x0000059E System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_batch_context_recv_message_next_slice_peek(Grpc.Core.Internal.BatchContextSafeHandle,System.UIntPtr&,System.IntPtr&)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_batch_context_recv_message_next_slice_peek_mC970FAF24EAC6BC1A4D95CF02F19C61263F790B8 (void);
// 0x0000059F Grpc.Core.StatusCode Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_batch_context_recv_status_on_client_status(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_batch_context_recv_status_on_client_status_mA2F0AC86238B970911CE04D530CAE0DE790ABE80 (void);
// 0x000005A0 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_batch_context_recv_status_on_client_details(Grpc.Core.Internal.BatchContextSafeHandle,System.UIntPtr&)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_batch_context_recv_status_on_client_details_mED70B60AA86815AC9099C7B29F6A42A4F4B677A9 (void);
// 0x000005A1 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_batch_context_recv_status_on_client_error_string(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_batch_context_recv_status_on_client_error_string_m33657D8295A17F0A6C01E3551AA2DE2308CD2E75 (void);
// 0x000005A2 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_batch_context_recv_status_on_client_trailing_metadata(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_batch_context_recv_status_on_client_trailing_metadata_mE16238E07696D895659EEE05286620AAF994663B (void);
// 0x000005A3 System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_batch_context_recv_close_on_server_cancelled(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_batch_context_recv_close_on_server_cancelled_m607C6C50135001BA219910C3244C72A343AC6196 (void);
// 0x000005A4 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_batch_context_reset(Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_batch_context_reset_mB61A2427278D6BC5ED9B665281DF5E3848AD231A (void);
// 0x000005A5 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_batch_context_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_batch_context_destroy_m4A811F920FB5EE4B34B426D16684D7743F9B134C (void);
// 0x000005A6 Grpc.Core.Internal.RequestCallContextSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_request_call_context_create()
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_request_call_context_create_mC1435C198EC6CEAD577A6D4E4B09054807875F8D (void);
// 0x000005A7 Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_request_call_context_call(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_request_call_context_call_m71056708D4E67F5B85AFF808B832B33F36ADB49F (void);
// 0x000005A8 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_request_call_context_method(Grpc.Core.Internal.RequestCallContextSafeHandle,System.UIntPtr&)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_request_call_context_method_m8B2495E394674CF7FADA33C3056F12737654DAEB (void);
// 0x000005A9 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_request_call_context_host(Grpc.Core.Internal.RequestCallContextSafeHandle,System.UIntPtr&)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_request_call_context_host_m09233AAA03E5A7F86628DB9A9A9CA0CD002AD2D6 (void);
// 0x000005AA Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_request_call_context_deadline(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_request_call_context_deadline_mE89F5AD7B071D6D58BBA005AEE3F77EB1D97681E (void);
// 0x000005AB System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_request_call_context_request_metadata(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_request_call_context_request_metadata_m96062AB26374A444204A2EAED1DE2AF0A5F644D7 (void);
// 0x000005AC System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_request_call_context_reset(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_request_call_context_reset_m0606C151FE1D1F2136169FE1247F1F7DF4D0A85C (void);
// 0x000005AD System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_request_call_context_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_request_call_context_destroy_m1D8C9A76E5725BA836ECC9B1AC5A175042AE031B (void);
// 0x000005AE Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_composite_call_credentials_create(Grpc.Core.Internal.CallCredentialsSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_composite_call_credentials_create_m6CDF74BCE3D9369406E18B45EE99DE887CD6ED3C (void);
// 0x000005AF System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_call_credentials_release(System.IntPtr)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_call_credentials_release_mF8610C4B343AF7CEED94D6B66E60F6630ED82EF7 (void);
// 0x000005B0 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_call_cancel(Grpc.Core.Internal.CallSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_call_cancel_mC00C4607EA73DAFAC4D91070D08CE81F278CED8D (void);
// 0x000005B1 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_call_cancel_with_status(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.StatusCode,System.String)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_call_cancel_with_status_mF3C3431E787E2591B4451871E23CB38FA78A64AB (void);
// 0x000005B2 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_call_start_unary(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_call_start_unary_mE4E235601E124F494B28F19FA07B9DE20D1EAC49 (void);
// 0x000005B3 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_call_start_client_streaming(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_call_start_client_streaming_mA6B58F6D69E157C1DA554DB9EDBB2605AACD7AF2 (void);
// 0x000005B4 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_call_start_server_streaming(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_call_start_server_streaming_mFE60CBA3F56F498313D754D459F3C7DF7EB5E755 (void);
// 0x000005B5 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_call_start_duplex_streaming(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_call_start_duplex_streaming_m16DADEB5D24EAAC4A2BFA3B5D753B4B61E27FDCB (void);
// 0x000005B6 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_call_send_message(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,System.Int32)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_call_send_message_mEA31497A96FEFAD93B9897E91954FE1AA35F9F7A (void);
// 0x000005B7 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_call_send_close_from_client(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_call_send_close_from_client_mF22176CAED457679BFD075F5F98EC65C1F7D5FEA (void);
// 0x000005B8 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_call_send_status_from_server(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.StatusCode,System.IntPtr,System.UIntPtr,Grpc.Core.Internal.MetadataArraySafeHandle,System.Int32,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_call_send_status_from_server_m2C998C67024D847F5134D0AF7B35B3A457737DCF (void);
// 0x000005B9 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_call_recv_message(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_call_recv_message_m72224E5F326BE904EF5367329F2332A66974D694 (void);
// 0x000005BA Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_call_recv_initial_metadata(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_call_recv_initial_metadata_m0DB4EB1BA9B8E8F0683DB2BD92E2AC5D3B419DF2 (void);
// 0x000005BB Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_call_start_serverside(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_call_start_serverside_m148878F4325A675CD76F920593E1F30DC3AB7315 (void);
// 0x000005BC Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_call_send_initial_metadata(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_call_send_initial_metadata_mA8D3D97AF27C6E668C6440B0738BC06DED0B930C (void);
// 0x000005BD Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_call_set_credentials(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_call_set_credentials_m5DD7479CCB981E303609D44ABEFEC39BA6A7D1D9 (void);
// 0x000005BE Grpc.Core.Internal.CStringSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_call_get_peer(Grpc.Core.Internal.CallSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_call_get_peer_mFD66F04B6CA9D047C873AFBAE4CA88B460B4D0CD (void);
// 0x000005BF System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_call_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_call_destroy_m1D6AF57D3294151BB4A06CDCD92D4D13BC571599 (void);
// 0x000005C0 Grpc.Core.Internal.ChannelArgsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_channel_args_create(System.UIntPtr)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_channel_args_create_mC8D2857523FF42F71D3B2C2BE00B85B1AB13A345 (void);
// 0x000005C1 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_channel_args_set_string(Grpc.Core.Internal.ChannelArgsSafeHandle,System.UIntPtr,System.String,System.String)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_channel_args_set_string_mCACE3CD33A67335C7B849A05AA29DE12613FC1A7 (void);
// 0x000005C2 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_channel_args_set_integer(Grpc.Core.Internal.ChannelArgsSafeHandle,System.UIntPtr,System.String,System.Int32)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_channel_args_set_integer_m1F29CB73213BCF7FA7CCB2739E0312ED720F7B87 (void);
// 0x000005C3 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_channel_args_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_channel_args_destroy_m32A5836DE7391E0196A65192AF9EE0C32AF16837 (void);
// 0x000005C4 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_override_default_ssl_roots(System.String)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_override_default_ssl_roots_mDE8DBF2A33F982DBB4321D84CF62734A1148F761 (void);
// 0x000005C5 Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_ssl_credentials_create(System.String,System.String,System.String,System.IntPtr)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_ssl_credentials_create_mB05005AB67B39EC1AC9651E9846C6C7E7C26C549 (void);
// 0x000005C6 Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_composite_channel_credentials_create(Grpc.Core.Internal.ChannelCredentialsSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_composite_channel_credentials_create_mFDDCD4858D97138431F377044FEB91FFBD318426 (void);
// 0x000005C7 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_channel_credentials_release(System.IntPtr)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_channel_credentials_release_m0939F262AE4EF019D6024878F2C82029C7999A50 (void);
// 0x000005C8 Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_insecure_channel_create(System.String,Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_insecure_channel_create_mF1C2EBB3F4B66CEB4C3051ACBFE5254C7A028279 (void);
// 0x000005C9 Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_secure_channel_create(Grpc.Core.Internal.ChannelCredentialsSafeHandle,System.String,Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_secure_channel_create_m03AAFE2A7E8F5B61D96E6874BB20AF91C41B5609 (void);
// 0x000005CA Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_channel_create_call(Grpc.Core.Internal.ChannelSafeHandle,Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.ContextPropagationFlags,Grpc.Core.Internal.CompletionQueueSafeHandle,System.String,System.String,Grpc.Core.Internal.Timespec)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_channel_create_call_mF1ED3FF3675CF5D44160E09DE461A0B88F233E6F (void);
// 0x000005CB Grpc.Core.ChannelState Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_channel_check_connectivity_state(Grpc.Core.Internal.ChannelSafeHandle,System.Int32)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_channel_check_connectivity_state_m194892817B9E212496787F66CCB2A42D2034C920 (void);
// 0x000005CC System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_channel_watch_connectivity_state(Grpc.Core.Internal.ChannelSafeHandle,Grpc.Core.ChannelState,Grpc.Core.Internal.Timespec,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_channel_watch_connectivity_state_m0512F4D0E476400E5EEF77B39DB8A1DCEAC62801 (void);
// 0x000005CD Grpc.Core.Internal.CStringSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_channel_get_target(Grpc.Core.Internal.ChannelSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_channel_get_target_m61F143F0AB7BAFC967B70DCEE756006C0E4FD4F1 (void);
// 0x000005CE System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_channel_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_channel_destroy_mD4350EDD4DBF68F16F75BB61714084FCA64E15B5 (void);
// 0x000005CF System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_sizeof_grpc_event()
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_sizeof_grpc_event_m858822781FAD40C542E81CF589D9337526DB5F72 (void);
// 0x000005D0 Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_completion_queue_create_async()
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_completion_queue_create_async_m288C72F3BED2CA8F6070B2E3C3D8BD490A838CE2 (void);
// 0x000005D1 Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_completion_queue_create_sync()
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_completion_queue_create_sync_m819F760DEF71FD60C04B4DA5EEC9A542479EC307 (void);
// 0x000005D2 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_completion_queue_shutdown(Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_completion_queue_shutdown_m64C662BCC2005F32B653881852600ED10696C6F0 (void);
// 0x000005D3 Grpc.Core.Internal.CompletionQueueEvent Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_completion_queue_next(Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_completion_queue_next_mC794BCC636FE73C8D9C398E1848CE18773EC9555 (void);
// 0x000005D4 Grpc.Core.Internal.CompletionQueueEvent Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_completion_queue_pluck(Grpc.Core.Internal.CompletionQueueSafeHandle,System.IntPtr)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_completion_queue_pluck_m5B440AA0B60762DB71FF37F5D43EE24B825C4555 (void);
// 0x000005D5 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_completion_queue_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_completion_queue_destroy_m495DFC2389C15D7CB4777CB5B31A0D821D9DA99F (void);
// 0x000005D6 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::gprsharp_free(System.IntPtr)
extern void DllImportsFromSharedLib_x64_dll_gprsharp_free_mE463C65467FA783FABDCAD6D846231056FB01121 (void);
// 0x000005D7 Grpc.Core.Internal.MetadataArraySafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_metadata_array_create(System.UIntPtr)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_metadata_array_create_mE3617DECB6EDDC94E74B55FBC597296B0CFD74EC (void);
// 0x000005D8 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_metadata_array_add(Grpc.Core.Internal.MetadataArraySafeHandle,System.String,System.Byte[],System.UIntPtr)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_metadata_array_add_m345E1E4C909AF7CA9B59858DF8D197B855E84FA6 (void);
// 0x000005D9 System.UIntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_metadata_array_count(System.IntPtr)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_metadata_array_count_mD420C165D2563E65FAFE17C43F3D76E7EE6E6DC8 (void);
// 0x000005DA System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_metadata_array_get_key(System.IntPtr,System.UIntPtr,System.UIntPtr&)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_metadata_array_get_key_mAD75B1E45985D997C30994A9B3A3377B77B6BA50 (void);
// 0x000005DB System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_metadata_array_get_value(System.IntPtr,System.UIntPtr,System.UIntPtr&)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_metadata_array_get_value_m0567A857E25A2EEC8DFC0A810BA2BE81A5F2292F (void);
// 0x000005DC System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_metadata_array_destroy_full(System.IntPtr)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_metadata_array_destroy_full_m83C0B2360ABE1B6AE3AE8591290B507F8ED24ECC (void);
// 0x000005DD System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_redirect_log(Grpc.Core.Internal.GprLogDelegate)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_redirect_log_m6E4231B03BB2EB7C38BD095FE50A472F3DE62004 (void);
// 0x000005DE System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_native_callback_dispatcher_init(Grpc.Core.Internal.NativeCallbackDispatcherCallback)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_native_callback_dispatcher_init_mC0EFE516050B14D11A8D263E6C9F2B5A83A0F8EC (void);
// 0x000005DF Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_metadata_credentials_create_from_plugin(System.IntPtr)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_metadata_credentials_create_from_plugin_m6D18C0A7E545DCB7D5319E351DD89719C2A37CEB (void);
// 0x000005E0 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_metadata_credentials_notify_from_plugin(System.IntPtr,System.IntPtr,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.StatusCode,System.String)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_metadata_credentials_notify_from_plugin_m4AE87DFDA26F5296422A6904B92D0840893C0652 (void);
// 0x000005E1 Grpc.Core.Internal.ServerCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_ssl_server_credentials_create(System.String,System.String[],System.String[],System.UIntPtr,Grpc.Core.SslClientCertificateRequestType)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_ssl_server_credentials_create_m4C461D961CDB6177ECF9DC846A5E7AC62FD257DE (void);
// 0x000005E2 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_server_credentials_release(System.IntPtr)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_server_credentials_release_m6D05C584E8C696C0BBBC5077A3FFFE72E960EDDF (void);
// 0x000005E3 Grpc.Core.Internal.ServerSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_server_create(Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_server_create_m1B7BFD8130998B090FCED3B3DFF0835E0A633B56 (void);
// 0x000005E4 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_server_register_completion_queue(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_server_register_completion_queue_m51522488FDCC1DAD8F7FD3A3667BC5AE302FF390 (void);
// 0x000005E5 System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_server_add_insecure_http2_port(Grpc.Core.Internal.ServerSafeHandle,System.String)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_server_add_insecure_http2_port_m16027AF33B04DB5D99B5D37AAEAF35B756422B24 (void);
// 0x000005E6 System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_server_add_secure_http2_port(Grpc.Core.Internal.ServerSafeHandle,System.String,Grpc.Core.Internal.ServerCredentialsSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_server_add_secure_http2_port_m7F559716D086BD526EA3514065CDBDF3567730CE (void);
// 0x000005E7 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_server_start(Grpc.Core.Internal.ServerSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_server_start_m69670C59DDBF870D7E5D57F6D9C2918D9922B0D9 (void);
// 0x000005E8 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_server_request_call(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_server_request_call_mB66A04A4CFAFCDA1B9C730C41B34F2EEC5B3F80E (void);
// 0x000005E9 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_server_cancel_all_calls(Grpc.Core.Internal.ServerSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_server_cancel_all_calls_m73C51B84695559E2E50CFBEC09DCB1FED1FAD1FE (void);
// 0x000005EA System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_server_shutdown_and_notify_callback(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_server_shutdown_and_notify_callback_mD250F0D213C80FE778DEF99C8B527A0492462803 (void);
// 0x000005EB System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_server_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_server_destroy_mC2290F4DAEE0E27826614E8DEAFADA19F9C1D15E (void);
// 0x000005EC Grpc.Core.Internal.AuthContextSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_call_auth_context(Grpc.Core.Internal.CallSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_call_auth_context_mB1BDE20600D0E414F477104A1A0EB0891A4B074C (void);
// 0x000005ED System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_auth_context_peer_identity_property_name(Grpc.Core.Internal.AuthContextSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_auth_context_peer_identity_property_name_m14922D7D1CE5CD0CBA9764146B0CF91E864FCE15 (void);
// 0x000005EE Grpc.Core.Internal.AuthContextSafeHandle/NativeAuthPropertyIterator Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_auth_context_property_iterator(Grpc.Core.Internal.AuthContextSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_auth_context_property_iterator_mCB5A4C30339DA2D35FAE4A19E007274029561471 (void);
// 0x000005EF System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_auth_property_iterator_next(Grpc.Core.Internal.AuthContextSafeHandle/NativeAuthPropertyIterator&)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_auth_property_iterator_next_mCB57AD80C2884D8ED1913DE0130499AE8754133C (void);
// 0x000005F0 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_auth_context_release(System.IntPtr)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_auth_context_release_mD03D9DA59524148D38F3CBE8C3C19FA9949A8761 (void);
// 0x000005F1 Grpc.Core.Internal.SliceBufferSafeHandle Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_slice_buffer_create()
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_slice_buffer_create_mC4759656AD456787F9D8101952A2E3C3F757CCD9 (void);
// 0x000005F2 System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_slice_buffer_adjust_tail_space(Grpc.Core.Internal.SliceBufferSafeHandle,System.UIntPtr,System.UIntPtr)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_slice_buffer_adjust_tail_space_m13E0CE58D96615C780C0C7C8C24431998F29285C (void);
// 0x000005F3 System.UIntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_slice_buffer_slice_count(Grpc.Core.Internal.SliceBufferSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_slice_buffer_slice_count_m010033E039450C10683EB8CFC446B2FC3544C227 (void);
// 0x000005F4 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_slice_buffer_slice_peek(Grpc.Core.Internal.SliceBufferSafeHandle,System.UIntPtr,System.UIntPtr&,System.IntPtr&)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_slice_buffer_slice_peek_m77583BA92200E0E943832147A9AF81C4F774D10C (void);
// 0x000005F5 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_slice_buffer_reset_and_unref(Grpc.Core.Internal.SliceBufferSafeHandle)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_slice_buffer_reset_and_unref_mE2EBD192118F0298E1307DEA5491DBE4621141E9 (void);
// 0x000005F6 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_slice_buffer_destroy(System.IntPtr)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_slice_buffer_destroy_mD5F9DF31E8E1A7DF3B1BD1E782CF3F729FC47BA0 (void);
// 0x000005F7 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::gprsharp_now(Grpc.Core.Internal.ClockType)
extern void DllImportsFromSharedLib_x64_dll_gprsharp_now_m32512BEE9AB8337163C3B4A679FF99AF19540D48 (void);
// 0x000005F8 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::gprsharp_inf_future(Grpc.Core.Internal.ClockType)
extern void DllImportsFromSharedLib_x64_dll_gprsharp_inf_future_m8311F2F965349CD39F84C677F3EC9A2620BCB935 (void);
// 0x000005F9 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::gprsharp_inf_past(Grpc.Core.Internal.ClockType)
extern void DllImportsFromSharedLib_x64_dll_gprsharp_inf_past_mD4A5C9BE1EB72D412FA919B9CDE2EF9E59F43F1B (void);
// 0x000005FA Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::gprsharp_convert_clock_type(Grpc.Core.Internal.Timespec,Grpc.Core.Internal.ClockType)
extern void DllImportsFromSharedLib_x64_dll_gprsharp_convert_clock_type_m3B2E9981E101A275A2712B3CCDC860C3C12270C4 (void);
// 0x000005FB System.Int32 Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::gprsharp_sizeof_timespec()
extern void DllImportsFromSharedLib_x64_dll_gprsharp_sizeof_timespec_m1DA53BFCB3642A32303BA6D8897BBA7DA7C9EE39 (void);
// 0x000005FC Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_test_callback(Grpc.Core.Internal.NativeCallbackTestDelegate)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_test_callback_mA1713F860CB1515E2281CDADF48954CDCD6F817C (void);
// 0x000005FD System.IntPtr Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_test_nop(System.IntPtr)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_test_nop_m65BA3F162A0BB9E3D6E4259C0303F0A7392A9B37 (void);
// 0x000005FE System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_test_override_method(System.String,System.String)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_test_override_method_mA314F943C9837974485B915107D74D7A844B8459 (void);
// 0x000005FF Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::grpcsharp_test_call_start_unary_echo(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.SliceBufferSafeHandle,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void DllImportsFromSharedLib_x64_dll_grpcsharp_test_call_start_unary_echo_mE4522774FE3D6268BC6A4254D1DB932097D92A95 (void);
// 0x00000600 System.Void Grpc.Core.Internal.NativeMethods/DllImportsFromSharedLib_x64_dll::.ctor()
extern void DllImportsFromSharedLib_x64_dll__ctor_m2756CFB5FBFE693CFE47AA7B069AA349B742550D (void);
// 0x00000601 System.Void Grpc.Core.Internal.PlatformApis::.cctor()
extern void PlatformApis__cctor_m7128AA3C971D63A03D7DE53F0B1E9C1A6353B5AB (void);
// 0x00000602 System.Boolean Grpc.Core.Internal.PlatformApis::get_IsLinux()
extern void PlatformApis_get_IsLinux_m921DD695CDAE26E1AFA796887BA8D2F6483E7B31 (void);
// 0x00000603 System.Boolean Grpc.Core.Internal.PlatformApis::get_IsMacOSX()
extern void PlatformApis_get_IsMacOSX_m6169B64A870F035C81EEDD9A2C3E9C9EB7432513 (void);
// 0x00000604 System.Boolean Grpc.Core.Internal.PlatformApis::get_IsWindows()
extern void PlatformApis_get_IsWindows_m5DA76789F2B28BED2A7F1A676C20B0807EDA8B47 (void);
// 0x00000605 System.Boolean Grpc.Core.Internal.PlatformApis::get_IsMono()
extern void PlatformApis_get_IsMono_m2C3461EB2B8BFBEA588857E69A66D5F5144A4BD7 (void);
// 0x00000606 System.Boolean Grpc.Core.Internal.PlatformApis::get_IsUnity()
extern void PlatformApis_get_IsUnity_m1D8910755EBE171BF7140FD0EF0EA804ABDEEED1 (void);
// 0x00000607 System.Boolean Grpc.Core.Internal.PlatformApis::get_IsUnityIOS()
extern void PlatformApis_get_IsUnityIOS_m986766350F797EE7B05C2873E307AB98E8C28EE6 (void);
// 0x00000608 System.Boolean Grpc.Core.Internal.PlatformApis::get_IsXamarin()
extern void PlatformApis_get_IsXamarin_mBB59638BB2E80461E0653C2D8C8E2453E9202764 (void);
// 0x00000609 System.Boolean Grpc.Core.Internal.PlatformApis::get_IsXamarinIOS()
extern void PlatformApis_get_IsXamarinIOS_m56F9EDE8E29CA0CCCE742BED1A3A0F3F89725F58 (void);
// 0x0000060A System.Boolean Grpc.Core.Internal.PlatformApis::get_IsXamarinAndroid()
extern void PlatformApis_get_IsXamarinAndroid_mB6777DC5D62591597DA3FE604E3E8B20CF65C336 (void);
// 0x0000060B System.Boolean Grpc.Core.Internal.PlatformApis::get_IsNetCore()
extern void PlatformApis_get_IsNetCore_mF9AD17C7F567EA1344E472F4B291BEDF75A68B63 (void);
// 0x0000060C System.Boolean Grpc.Core.Internal.PlatformApis::get_Is64Bit()
extern void PlatformApis_get_Is64Bit_m00BDEC18AD97C04C6FF6BDDFD44D4EFFB45D15BF (void);
// 0x0000060D System.String Grpc.Core.Internal.PlatformApis::TryGetUnityApplicationPlatform()
extern void PlatformApis_TryGetUnityApplicationPlatform_m5D0CB46B23444497B6D1169D6A01C992D02B5BEC (void);
// 0x0000060E System.Int32 Grpc.Core.Internal.PlatformApis::uname(System.IntPtr)
extern void PlatformApis_uname_m1B60A63C64906E1958C0B912A5C0003C84911B9B (void);
// 0x0000060F System.String Grpc.Core.Internal.PlatformApis::GetUname()
extern void PlatformApis_GetUname_m1E5380B0944C5BA5999914F729CA6E4C5C8A748B (void);
// 0x00000610 System.Void Grpc.Core.Internal.PlatformApis/<>c::.cctor()
extern void U3CU3Ec__cctor_m5E68B58C1C526DAFA855524DD65A91862B61B73D (void);
// 0x00000611 System.Void Grpc.Core.Internal.PlatformApis/<>c::.ctor()
extern void U3CU3Ec__ctor_mD5AD264153EEBA0174C41D56A0A315DD838A52FB (void);
// 0x00000612 System.Boolean Grpc.Core.Internal.PlatformApis/<>c::<TryGetUnityApplicationPlatform>b__38_0(System.Reflection.Assembly)
extern void U3CU3Ec_U3CTryGetUnityApplicationPlatformU3Eb__38_0_m590ABA1D15838B0295AE28EAA9DDCEFFBB466F28 (void);
// 0x00000613 System.Void Grpc.Core.Internal.RequestCallContextSafeHandle::.ctor()
extern void RequestCallContextSafeHandle__ctor_mFB7946DE6C43A19DF420E2A8C72EF7D7A37967B4 (void);
// 0x00000614 Grpc.Core.Internal.RequestCallContextSafeHandle Grpc.Core.Internal.RequestCallContextSafeHandle::Create()
extern void RequestCallContextSafeHandle_Create_m96258D9E0E1FEC3BF5F54A6A0F19D8893319F0E6 (void);
// 0x00000615 System.Void Grpc.Core.Internal.RequestCallContextSafeHandle::SetReturnToPoolAction(System.Action`1<Grpc.Core.Internal.RequestCallContextSafeHandle>)
extern void RequestCallContextSafeHandle_SetReturnToPoolAction_mD4AF82138A788974E8E6FCFD662DE290138F28BC (void);
// 0x00000616 Grpc.Core.Internal.RequestCallCompletionDelegate Grpc.Core.Internal.RequestCallContextSafeHandle::get_CompletionCallback()
extern void RequestCallContextSafeHandle_get_CompletionCallback_m1D9FED1413D76C11107EA3913D1703B9800CBB02 (void);
// 0x00000617 System.Void Grpc.Core.Internal.RequestCallContextSafeHandle::set_CompletionCallback(Grpc.Core.Internal.RequestCallCompletionDelegate)
extern void RequestCallContextSafeHandle_set_CompletionCallback_mB466CA717FDB92A3A73D22D20C100C17D1F077DC (void);
// 0x00000618 System.Void Grpc.Core.Internal.RequestCallContextSafeHandle::Recycle()
extern void RequestCallContextSafeHandle_Recycle_m3C4A1D8C20EBDB043C2D6DED6E40303C1BC65812 (void);
// 0x00000619 System.Boolean Grpc.Core.Internal.RequestCallContextSafeHandle::ReleaseHandle()
extern void RequestCallContextSafeHandle_ReleaseHandle_mAA0DE178297CA8E563B5ED84EFEB3F350A3C602F (void);
// 0x0000061A System.Void Grpc.Core.Internal.RequestCallContextSafeHandle::Grpc.Core.Internal.IOpCompletionCallback.OnComplete(System.Boolean)
extern void RequestCallContextSafeHandle_Grpc_Core_Internal_IOpCompletionCallback_OnComplete_mF2CFF57DDE5474ABF814C02DF36D7B1A3A0E4D0A (void);
// 0x0000061B System.Void Grpc.Core.Internal.RequestCallContextSafeHandle::.cctor()
extern void RequestCallContextSafeHandle__cctor_mB98A98E2133E1073E76FE23EF3ABCDA325977631 (void);
// 0x0000061C System.Buffers.ReadOnlySequence`1<System.Byte> Grpc.Core.Internal.ReusableSliceBuffer::PopulateFrom(Grpc.Core.Internal.IBufferReader)
extern void ReusableSliceBuffer_PopulateFrom_mE7106462D538DEA9F11036EAA848F9C0B88BF71C (void);
// 0x0000061D System.Void Grpc.Core.Internal.ReusableSliceBuffer::Invalidate()
extern void ReusableSliceBuffer_Invalidate_mA27EA314F9ED17ACD35788F8735FF23E8FF0B751 (void);
// 0x0000061E System.Void Grpc.Core.Internal.ReusableSliceBuffer::.ctor()
extern void ReusableSliceBuffer__ctor_m20A4476FFEC090ED7867844182946A13E94A87FF (void);
// 0x0000061F System.Void Grpc.Core.Internal.ReusableSliceBuffer/SliceSegment::Reset(Grpc.Core.Internal.Slice,System.Int64)
extern void SliceSegment_Reset_m77FC0742220A0ADEC4A1868BF13D6F0076A04FC3 (void);
// 0x00000620 System.Void Grpc.Core.Internal.ReusableSliceBuffer/SliceSegment::SetNext(System.Buffers.ReadOnlySequenceSegment`1<System.Byte>)
extern void SliceSegment_SetNext_m1B7E6D699EB70DF02E1D5B700C53A33E25AFA10D (void);
// 0x00000621 System.Void Grpc.Core.Internal.ReusableSliceBuffer/SliceSegment::.ctor()
extern void SliceSegment__ctor_m74A7E8E09D7FFBC24172753992849F7166480296 (void);
// 0x00000622 System.Void Grpc.Core.Internal.SafeHandleZeroIsInvalid::.ctor()
extern void SafeHandleZeroIsInvalid__ctor_mF560A8F0C515B89FC0E5D57D8111AC067087343C (void);
// 0x00000623 System.Boolean Grpc.Core.Internal.SafeHandleZeroIsInvalid::get_IsInvalid()
extern void SafeHandleZeroIsInvalid_get_IsInvalid_mA8CE932B82CE9405FE2408FFC9DA14FAA0DFA4AD (void);
// 0x00000624 System.Void Grpc.Core.Internal.ServerCredentialsSafeHandle::.ctor()
extern void ServerCredentialsSafeHandle__ctor_m99D2013E07DFF815C62D12A4EFDC10306C36CF05 (void);
// 0x00000625 System.Boolean Grpc.Core.Internal.ServerCredentialsSafeHandle::ReleaseHandle()
extern void ServerCredentialsSafeHandle_ReleaseHandle_mD3DF99C8ED45F524486458693C81E491FB10EC97 (void);
// 0x00000626 System.Void Grpc.Core.Internal.ServerCredentialsSafeHandle::.cctor()
extern void ServerCredentialsSafeHandle__cctor_m767ADEC0D74CF63577BE3DF88E651E4F5EB6C256 (void);
// 0x00000627 System.Void Grpc.Core.Internal.ServerSafeHandle::.ctor()
extern void ServerSafeHandle__ctor_m78B0CA056423C03852BF8BB0839291694CA4EA57 (void);
// 0x00000628 System.Void Grpc.Core.Internal.ServerSafeHandle::ShutdownAndNotify(Grpc.Core.Internal.BatchCompletionDelegate,Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void ServerSafeHandle_ShutdownAndNotify_m7CC61BAB8BCF8F0D42E91C3C3BBC05A471D599AD (void);
// 0x00000629 System.Boolean Grpc.Core.Internal.ServerSafeHandle::ReleaseHandle()
extern void ServerSafeHandle_ReleaseHandle_mBF8013560DC77F27A31593AEDCA5AC258D2AB220 (void);
// 0x0000062A System.Void Grpc.Core.Internal.ServerSafeHandle::CancelAllCalls()
extern void ServerSafeHandle_CancelAllCalls_mA49AA81DB1E48651272C420238E89FBA4D73B1F9 (void);
// 0x0000062B System.Void Grpc.Core.Internal.ServerSafeHandle::.cctor()
extern void ServerSafeHandle__cctor_m0A6C26B2B272B169FC176F7D4B7F591286B84F26 (void);
// 0x0000062C System.Void Grpc.Core.Internal.Slice::.ctor(System.IntPtr,System.Int32)
extern void Slice__ctor_mA7C248C5F4DC092B838E87DF1934357A30DF6F62 (void);
// 0x0000062D System.Int32 Grpc.Core.Internal.Slice::get_Length()
extern void Slice_get_Length_m019F88FC27F51AFA1D8AF7342D9AD78DC1965122 (void);
// 0x0000062E System.Span`1<System.Byte> Grpc.Core.Internal.Slice::ToSpanUnsafe()
extern void Slice_ToSpanUnsafe_m8B8957CDDB63506F44548D01B711C0C05D8DCB7B (void);
// 0x0000062F System.String Grpc.Core.Internal.Slice::ToString()
extern void Slice_ToString_mDEEA889F14A693172B90B31EFEE3E65A99E53A02 (void);
// 0x00000630 System.Void Grpc.Core.Internal.SliceBufferSafeHandle::.ctor()
extern void SliceBufferSafeHandle__ctor_m024709939C05552855B09E7CDA5ACDB4C5501D01 (void);
// 0x00000631 Grpc.Core.Internal.SliceBufferSafeHandle Grpc.Core.Internal.SliceBufferSafeHandle::Create()
extern void SliceBufferSafeHandle_Create_m45D25BFAD0B43450F90DF882A63E7B46D0A39A86 (void);
// 0x00000632 System.Void Grpc.Core.Internal.SliceBufferSafeHandle::Advance(System.Int32)
extern void SliceBufferSafeHandle_Advance_m5CE12BAC657EC0B0372B6A09C6651BB4C9D56481 (void);
// 0x00000633 System.Memory`1<System.Byte> Grpc.Core.Internal.SliceBufferSafeHandle::GetMemory(System.Int32)
extern void SliceBufferSafeHandle_GetMemory_mFE99579E2EBF06A70F4B81FAA266A9FB25B200F5 (void);
// 0x00000634 System.Span`1<System.Byte> Grpc.Core.Internal.SliceBufferSafeHandle::GetSpan(System.Int32)
extern void SliceBufferSafeHandle_GetSpan_mE2BAAF3F572BEF4389EEDF86E274C6965F316E3F (void);
// 0x00000635 System.Void Grpc.Core.Internal.SliceBufferSafeHandle::Complete()
extern void SliceBufferSafeHandle_Complete_m2920BE89C3934FCA61FBFC5ECF18C241735A3A35 (void);
// 0x00000636 System.Void Grpc.Core.Internal.SliceBufferSafeHandle::Reset()
extern void SliceBufferSafeHandle_Reset_m7CB3BA7B89DC293F0B48BEFCA36C63C6B29AA4E3 (void);
// 0x00000637 System.Void Grpc.Core.Internal.SliceBufferSafeHandle::EnsureBufferSpace(System.Int32)
extern void SliceBufferSafeHandle_EnsureBufferSpace_mA5C1A49FA0CB8D7A264EE2A1DC564086EF5FED89 (void);
// 0x00000638 System.Void Grpc.Core.Internal.SliceBufferSafeHandle::AdjustTailSpace(System.Int32)
extern void SliceBufferSafeHandle_AdjustTailSpace_m15C9BC0768776AABB719DCE655352B0B657B44D9 (void);
// 0x00000639 System.Boolean Grpc.Core.Internal.SliceBufferSafeHandle::ReleaseHandle()
extern void SliceBufferSafeHandle_ReleaseHandle_m4044D8800EC9C680BAF1C20D1EF1AC84A949261E (void);
// 0x0000063A System.Void Grpc.Core.Internal.SliceBufferSafeHandle::.cctor()
extern void SliceBufferSafeHandle__cctor_mAE66C6F01940AE59F578F4B78AD9473E54F5684C (void);
// 0x0000063B System.Void Grpc.Core.Internal.SliceMemoryManager::Reset(Grpc.Core.Internal.Slice)
extern void SliceMemoryManager_Reset_mCCEA54BF6E02F0AD3D7020F342BB30BEBC2BDABD (void);
// 0x0000063C System.Void Grpc.Core.Internal.SliceMemoryManager::Reset()
extern void SliceMemoryManager_Reset_mE04E50CC5914E8518BD69E21299D5D67C97A2CE9 (void);
// 0x0000063D System.Span`1<System.Byte> Grpc.Core.Internal.SliceMemoryManager::GetSpan()
extern void SliceMemoryManager_GetSpan_mAE074FCB374C71B10E82DC74150C1D5F8BC77C29 (void);
// 0x0000063E System.Void Grpc.Core.Internal.SliceMemoryManager::Dispose(System.Boolean)
extern void SliceMemoryManager_Dispose_m65F3AADC42094D1C7197C8BFA3C7FBF4F60E1EF7 (void);
// 0x0000063F System.Void Grpc.Core.Internal.SliceMemoryManager::.ctor()
extern void SliceMemoryManager__ctor_m3976C73056A5DE1491AC5FBB66A963EF528A9E08 (void);
// 0x00000640 System.Boolean Grpc.Core.Internal.Timespec::Equals(System.Object)
extern void Timespec_Equals_mEBB83B39F4DF9C02E76BE7EF195DCA6B15AD5B2D (void);
// 0x00000641 System.Int32 Grpc.Core.Internal.Timespec::GetHashCode()
extern void Timespec_GetHashCode_m204317FBCCD1773C512E704C09D213E06A606C78 (void);
// 0x00000642 System.String Grpc.Core.Internal.Timespec::ToString()
extern void Timespec_ToString_m423E043629C8628283E93315A70C61D85EE198A0 (void);
// 0x00000643 System.Boolean Grpc.Core.Internal.Timespec::Equals(Grpc.Core.Internal.Timespec)
extern void Timespec_Equals_m65B6949B5A8E9289E235ECD578C0579D3F7B3A2D (void);
// 0x00000644 System.Void Grpc.Core.Internal.Timespec::.ctor(System.Int64,System.Int32)
extern void Timespec__ctor_m934BB8ADB7091F5789B04187A4980A416F0ACB5C (void);
// 0x00000645 System.Void Grpc.Core.Internal.Timespec::.ctor(System.Int64,System.Int32,Grpc.Core.Internal.ClockType)
extern void Timespec__ctor_mCB264CFFFD90ADC3D0AF3CE2D5DD79104F5234A0 (void);
// 0x00000646 Grpc.Core.Internal.Timespec Grpc.Core.Internal.Timespec::get_InfFuture()
extern void Timespec_get_InfFuture_mADAF01E8CDD51F366493454DC4B0D9BF8D720D42 (void);
// 0x00000647 Grpc.Core.Internal.Timespec Grpc.Core.Internal.Timespec::get_InfPast()
extern void Timespec_get_InfPast_m8879C089EE7B1C6AEA49ECB833D9B71C5958731F (void);
// 0x00000648 System.Int64 Grpc.Core.Internal.Timespec::get_TimevalSeconds()
extern void Timespec_get_TimevalSeconds_m0C67493E9146FC1886AF8B596E4E94CF559BBBDD (void);
// 0x00000649 System.Int32 Grpc.Core.Internal.Timespec::get_TimevalNanos()
extern void Timespec_get_TimevalNanos_m84E291437A7D7CC5811C3288068AE52FD44196AB (void);
// 0x0000064A Grpc.Core.Internal.Timespec Grpc.Core.Internal.Timespec::FromDateTime(System.DateTime)
extern void Timespec_FromDateTime_m64E837805B254BD130A1790D77F4CD84051A3BEA (void);
// 0x0000064B System.Void Grpc.Core.Internal.Timespec::.cctor()
extern void Timespec__cctor_m171F9EF72DA86AA1A04454E89A4F36CD7242DE19 (void);
// 0x0000064C System.Void Grpc.Core.Internal.UnmanagedLibrary::.ctor(System.String[])
extern void UnmanagedLibrary__ctor_m0D229FB8FF67BB2314A7B7B912A92BAA6A63F172 (void);
// 0x0000064D System.IntPtr Grpc.Core.Internal.UnmanagedLibrary::LoadSymbol(System.String)
extern void UnmanagedLibrary_LoadSymbol_m278A44065D716670ACCF0851CF75DA889D11DCE7 (void);
// 0x0000064E T Grpc.Core.Internal.UnmanagedLibrary::GetNativeMethodDelegate(System.String)
// 0x0000064F System.IntPtr Grpc.Core.Internal.UnmanagedLibrary::PlatformSpecificLoadLibrary(System.String,System.String&)
extern void UnmanagedLibrary_PlatformSpecificLoadLibrary_m36405E163A82EFE03AFBB360F17A674478ED707D (void);
// 0x00000650 System.IntPtr Grpc.Core.Internal.UnmanagedLibrary::LoadLibraryPosix(System.Func`3<System.String,System.Int32,System.IntPtr>,System.Func`1<System.IntPtr>,System.String,System.String&)
extern void UnmanagedLibrary_LoadLibraryPosix_m9ECD692843FEBBC36A57F511BF2D05BBC1C34447 (void);
// 0x00000651 System.String Grpc.Core.Internal.UnmanagedLibrary::FirstValidLibraryPath(System.String[])
extern void UnmanagedLibrary_FirstValidLibraryPath_m143A877D73940E39DA442A459CEB5531C1FC0AFE (void);
// 0x00000652 System.Void Grpc.Core.Internal.UnmanagedLibrary::.cctor()
extern void UnmanagedLibrary__cctor_m3965842262C0A9F04159806733E920CF701339F5 (void);
// 0x00000653 System.IntPtr Grpc.Core.Internal.UnmanagedLibrary/Windows::LoadLibrary(System.String)
extern void Windows_LoadLibrary_m83EF3031F0E65F23C4404F1E7AEF05E8F3BF119B (void);
// 0x00000654 System.IntPtr Grpc.Core.Internal.UnmanagedLibrary/Windows::GetProcAddress(System.IntPtr,System.String)
extern void Windows_GetProcAddress_m1F7D1F7BB4602E965A43FF892E36689409B1D6A3 (void);
// 0x00000655 System.IntPtr Grpc.Core.Internal.UnmanagedLibrary/Linux::dlopen(System.String,System.Int32)
extern void Linux_dlopen_m59E82F05B685062DB5A445A7CB6DB83A1C03780C (void);
// 0x00000656 System.IntPtr Grpc.Core.Internal.UnmanagedLibrary/Linux::dlerror()
extern void Linux_dlerror_mC1403D6CCAE5A6690046E00A7CB56FFAA761C293 (void);
// 0x00000657 System.IntPtr Grpc.Core.Internal.UnmanagedLibrary/Linux::dlsym(System.IntPtr,System.String)
extern void Linux_dlsym_mE3C3E5B2DB99FF6E8F1B45777A766EE483F432C5 (void);
// 0x00000658 System.IntPtr Grpc.Core.Internal.UnmanagedLibrary/MacOSX::dlopen(System.String,System.Int32)
extern void MacOSX_dlopen_m86E34AC05366203120D2D7C83937D1E4931E03BE (void);
// 0x00000659 System.IntPtr Grpc.Core.Internal.UnmanagedLibrary/MacOSX::dlerror()
extern void MacOSX_dlerror_mB3A6151DDCC23252A04E844D522BE2A84DBF9BD5 (void);
// 0x0000065A System.IntPtr Grpc.Core.Internal.UnmanagedLibrary/MacOSX::dlsym(System.IntPtr,System.String)
extern void MacOSX_dlsym_m1994CCA1D0A48989C86A3033F79EE4E692CDA2D1 (void);
// 0x0000065B System.IntPtr Grpc.Core.Internal.UnmanagedLibrary/Mono::dlopen(System.String,System.Int32)
extern void Mono_dlopen_m7F2DE2CD0870AB15EEA4E0A0BA6C47044E74BB67 (void);
// 0x0000065C System.IntPtr Grpc.Core.Internal.UnmanagedLibrary/Mono::dlerror()
extern void Mono_dlerror_m359ABCFD23D0EB5314DE2DFF8AB58CFE949BBABD (void);
// 0x0000065D System.IntPtr Grpc.Core.Internal.UnmanagedLibrary/Mono::dlsym(System.IntPtr,System.String)
extern void Mono_dlsym_m31A00C09F598C9D552A94628C2C28B3C7B04C2DD (void);
// 0x0000065E System.IntPtr Grpc.Core.Internal.UnmanagedLibrary/CoreCLR::dlopen(System.String,System.Int32)
extern void CoreCLR_dlopen_m0C667EBD6469F2F4C7D1D5B6F0E0FE91DC36C765 (void);
// 0x0000065F System.IntPtr Grpc.Core.Internal.UnmanagedLibrary/CoreCLR::dlerror()
extern void CoreCLR_dlerror_mBF14DDCC8D6862D11F60916D171E3911D3739127 (void);
// 0x00000660 System.IntPtr Grpc.Core.Internal.UnmanagedLibrary/CoreCLR::dlsym(System.IntPtr,System.String)
extern void CoreCLR_dlsym_mF8A29959ABC08D70EDC7AF482ED5903785D4E3B3 (void);
// 0x00000661 System.UInt64 Grpc.Core.Internal.WellKnownStrings::Coerce64(System.Byte*)
extern void WellKnownStrings_Coerce64_m035785D0B75B7F2F1E666446676F0A902F68C61C (void);
// 0x00000662 System.UInt16 Grpc.Core.Internal.WellKnownStrings::Coerce16(System.Byte*)
extern void WellKnownStrings_Coerce16_m74A54277059ADA473C9A5C7B0388D7BA4131F6D5 (void);
// 0x00000663 System.String Grpc.Core.Internal.WellKnownStrings::TryIdentify(System.IntPtr,System.Int32)
extern void WellKnownStrings_TryIdentify_m78977E648283DE7AD8A19304667FCE044691C618 (void);
// 0x00000664 System.String Grpc.Core.Internal.WellKnownStrings::TryIdentify(System.Byte*,System.Int32)
extern void WellKnownStrings_TryIdentify_m4F6C4E2FE9DD61C0973D009FCFDA8E2376DCD11A (void);
static Il2CppMethodPointer s_methodPointers[1636] = 
{
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
	Channel__ctor_mB5120C5C8C383358BB7FCB1EBA3AF97C95C19A13,
	Channel__ctor_m8766CD86FCC1C3BBF9E815F94BD8906297CC81D3,
	Channel__ctor_m178076C87D5BB98B5F3577E4FA50D56DD9722F88,
	Channel_WaitForStateChangedAsync_m1761E3D647487C38E37CE2EE4BB7F741F71B9862,
	Channel_TryWaitForStateChangedAsync_m46C0AAED9E568712C155ED990E334826CF4105D4,
	Channel_get_ShutdownToken_m5F6F6AD8F90999F2AE0EE780B704E15FFF33BCF3,
	Channel_ConnectAsync_m42ABEF7D3554323EAE9354705BE14C842741309F,
	Channel_ShutdownAsyncCore_m303FB47695695531BEF809F9E71752A1423AF9D9,
	Channel_CreateCallInvoker_m8C1164EC40449CDD202BF04540D91FD7C32604BB,
	Channel_get_Handle_m2DC24262D763DC826249C57EAD030A4E2F223BD5,
	Channel_get_CompletionQueue_mB9C50F6C682CC31106C3EFD3C8395F95956A9D13,
	Channel_AddCallReference_mBC1DCAE4C52CA665A2BBB0250C8A7424728AA7D7,
	Channel_RemoveCallReference_m4E45518597137D41711F8DE011C33AE051742AA7,
	Channel_GetConnectivityState_m65F25B7E879E5EDD6B82B429BE70BD32ECFE6B8D,
	Channel_EnsureUserAgentChannelOption_mF43338487D98C570CF22CF04611CC80D4E904E8D,
	Channel_CreateOptionsDictionary_m116D04AC914BB4558D1AC5F71C49483BA63DF119,
	Channel__cctor_mA2A28A5902FB02A73F4CA56CF28B4034F8023F67,
	U3CWaitForStateChangedAsyncU3Ed__16_MoveNext_m4848FE46620DAC2D1AE134917C8BEE8413206470,
	U3CWaitForStateChangedAsyncU3Ed__16_SetStateMachine_m573FC6FE8229F8655EA4291AD4E6DEC383791F90,
	U3CConnectAsyncU3Ed__22_MoveNext_mA31A1906C6258DB74D6FD60C6B1216B6084DD46D,
	U3CConnectAsyncU3Ed__22_SetStateMachine_m3E439A594721F0A6BB89F2EDA82E8FD7706AEE1D,
	U3CShutdownAsyncCoreU3Ed__23_MoveNext_mB90EBA7F37C4B93AA2EEF2B4113D2CD272438DBE,
	U3CShutdownAsyncCoreU3Ed__23_SetStateMachine_m9B5F12CABE89A38367CFFEA3FD866FAEFAD3AC03,
	U3CU3Ec__cctor_mC6C16398A832C23E2527E68395AA5BF0032D10C2,
	U3CU3Ec__ctor_mFFEDEA837ECC10CF159B7719A256E1FA70D3773E,
	U3CU3Ec_U3C_cctorU3Eb__37_0_m4C646B5D01B0108D0A7770443517CCEB8FA9EB9E,
	ChannelOption__ctor_m57029B1F4B1161420FEF3389CB3EC2CBE88F5295,
	ChannelOption_get_Type_m523C82FC0FC670A049BA4398D9392070522D2734,
	ChannelOption_get_Name_m7D1C506575899B8C8C6E5267241609CF33EEAC88,
	ChannelOption_get_IntValue_mC54EDC6F2D250192CB2984018B81218955AC37D4,
	ChannelOption_get_StringValue_mB07EE65A4BEBB2A5E869887C9ADBCD64ADF773B7,
	ChannelOption_Equals_m7726616F8379ADDA6CE579B47790241A1A8D4B1A,
	ChannelOption_Equals_m8DB31695BEEF846B2160F3C91226964141114046,
	ChannelOption_GetHashCode_m3176500A6E14D89BE55E128F39FAC4B24DD13918,
	ChannelOption_op_Equality_mF6416E0FFC8B5AE72841E2FEC04A6C9C95C7EAF3,
	ChannelOption_op_Inequality_m410737E06A52B45325D4C8095248E6DD329A903F,
	ChannelOptions_CreateChannelArgs_m1AD9D0A7D35B6D6EC72CB2EB1A61C912E00DABA2,
	DefaultCallInvoker__ctor_m4050FAAE687F5CB111031C8A76B647C5C7C9ED87,
	NULL,
	NULL,
	NULL,
	GrpcEnvironment_AddRef_m8EA2476ACFC0D9E4712AAF683DEA384636E9AF35,
	GrpcEnvironment_ReleaseAsync_m1283C66FAB801F46889CEB4E35DEF2BAB8B03248,
	GrpcEnvironment_RegisterChannel_mA7364F5590D4937BC288890CFA10F05A2A3BD4C0,
	GrpcEnvironment_UnregisterChannel_m13E345D55689D46740B5AE524AC822263CDDC0EA,
	GrpcEnvironment_UnregisterServer_m19B64E8F51A914BF9131789ABF90270AB2B89DF5,
	GrpcEnvironment_ShutdownChannelsAsync_m9E80D97BA0A0FD70776C472BCFBD0E4E16B266AA,
	GrpcEnvironment_KillServersAsync_mF5FE31B0CA325791234EA3D71B12F30BBAE72B6B,
	GrpcEnvironment_get_Logger_m6B6D5FF705A7267DE59BFA7BBBA2EB922C0E5C13,
	GrpcEnvironment__ctor_m06ABA661958201A69FF8423805B430C406F882FA,
	GrpcEnvironment_get_CompletionQueues_mD2D08AEDE3EFA5E492CDA2177D61223061AC3CA9,
	GrpcEnvironment_get_BatchContextPool_m3AFD3D8FB1935D7A8DF3258E0D1C4FF3222A77EC,
	GrpcEnvironment_get_RequestCallContextPool_mBACD21AD37D84D8DA23B342153158A53E797BD41,
	GrpcEnvironment_get_IsAlive_mAA45EFBC1036E52066E6971ECEC785CECAB2627E,
	GrpcEnvironment_PickCompletionQueue_m04B2ABDD35065331606FB1258764C60F6003C244,
	GrpcEnvironment_get_DebugStats_m96B1090567E2663BEF8093007D899CC167BDF98B,
	GrpcEnvironment_GrpcNativeInit_m696EB09FCD8B1E9297F459887953B2B110A38BEC,
	GrpcEnvironment_GrpcNativeShutdown_mD1166E41C4EFC7621FDD651AABFB5744C7F7B609,
	GrpcEnvironment_ShutdownAsync_m67682728ADA21F939605D6C7A6329D320F71E3CD,
	GrpcEnvironment_GetThreadPoolSizeOrDefault_mCFCBA3563B3AF98E707CCBCDC95C78BE10B553EB,
	GrpcEnvironment_GetCompletionQueueCountOrDefault_m2B441C05239E0983251C64CDBB2417106CFBE535,
	GrpcEnvironment_get_IsNativeShutdownAllowed_mBD680DE1061DE6132ECEFD5F8EC414CAD589E794,
	GrpcEnvironment__cctor_m7BE885FCE482CFB3110D1232B8FBFBE6D281858C,
	GrpcEnvironment_U3CShutdownAsyncU3Eb__60_0_m27E1069343EE328FBF84E130BAC77E02D2B4808D,
	ShutdownHooks_Register_m10FD67B18CA4F59FFA5751CDDA6F9004E23EC233,
	ShutdownHooks_HandleShutdown_mD8FBFD77BAA89F7D664669CBC684A18F9BAC9E75,
	ShutdownHooks__cctor_m9609299DA70DA45AD3BCC0229BA9507F31F61BEF,
	U3CU3Ec__cctor_m6EAF6E2EF0908930AD3EDD1EE9532BAF66DE86E5,
	U3CU3Ec__ctor_mAF97FD5D5F3CD0AF9A7003E3404C97F474B4597B,
	U3CU3Ec_U3CRegisterU3Eb__2_0_mCBC97135D6A4DFB3023ADC4BF70FE04A3AB02BE6,
	U3CU3Ec_U3CRegisterU3Eb__2_1_mE75443A0F5C84412967A8F01E0C33B0B54C76BA2,
	U3CReleaseAsyncU3Ed__26_MoveNext_m1967003E65FDF3FECA71B181518AF02DE512D530,
	U3CReleaseAsyncU3Ed__26_SetStateMachine_mFB02E3C9D2E3EBA308D39B2E67CF9AB88BFB6DF8,
	U3CU3Ec__cctor_mDA8FEFE5305857A23CF3816C05FB3868FA8A1759,
	U3CU3Ec__ctor_mB4795BBC5BE12258838F04CCEFB3E7B9E746BAB8,
	U3CU3Ec_U3CShutdownChannelsAsyncU3Eb__32_0_mD2FA3E2BFC30805EF5401B8421860035831D2A3D,
	U3CU3Ec_U3CKillServersAsyncU3Eb__33_0_m9FF482DDC22137896967C68938D252CBECCE7A37,
	U3CU3Ec_U3C_ctorU3Eb__45_0_m274511C0067D533088ABF7B39B2932CD728D8757,
	U3CU3Ec_U3C_ctorU3Eb__45_1_m0A51A8FA6C9268F5B54C18378ED19727C363136F,
	U3CShutdownAsyncU3Ed__60_MoveNext_m68F417DE5FF99FAC8EB4EEE79BBF1E8E8B3FB4FB,
	U3CShutdownAsyncU3Ed__60_SetStateMachine_m1920AEF44AAE8F83996EA891B925E8DE00612E9C,
	Server_KillAsync_mD118E11431C4D8118D74D5F3D4C6ED6EC1751B6A,
	Server_ShutdownInternalAsync_mE8BDB9B72BDB03F073485A7EC76097A8E5D48DE2,
	Server_ShutdownCompleteOrEnvironmentDeadAsync_m3970CF6302C9CE1CAE5E5097B98FF5D40780355F,
	Server_DisposeHandle_m2AB3082BA0C603C8EB9A9934FF4DF91A253BCE54,
	Server_HandleServerShutdown_mC946F002372E65ECADDA36DB7B8ED0D8E16A1A78,
	Server__cctor_m5BDAB65D10FFF3E73A603200F679FFF5FC140152,
	U3CShutdownInternalAsyncU3Ed__32_MoveNext_m3D71B112806F5CA33DBAE2030BF722AE3B8E4240,
	U3CShutdownInternalAsyncU3Ed__32_SetStateMachine_m36B03032AD3E3F0EDE00BCD0C5F740EAFCAA26CC,
	U3CShutdownCompleteOrEnvironmentDeadAsyncU3Ed__33_MoveNext_mF43F5308C7FAAFDEDFBA68E14C19CFDF45138670,
	U3CShutdownCompleteOrEnvironmentDeadAsyncU3Ed__33_SetStateMachine_m74E60AE9F2A615A438543D73C386AC115F601210,
	TaskUtils_get_CompletedTask_mEBBC43F30501975341E8998FD67E5D962FDB20F3,
	ProfilerEntry_ToString_m40BACECE2A53CB48A103CB016A457E8942D700B6,
	ProfilerEntry_GetTypeAbbreviation_mF1750D46EA35AA7690D8D10E9EF374724493287D,
	Profilers_SetForCurrentThread_m37EE309E6FBA5C79F8AA64584752E801C29A5648,
	Profilers__cctor_m1FE9939ED38E885ABFF1E263E7C1B5E27B1F174C,
	NopProfiler__ctor_m7686B16FE703B4F3BD7171F41F22DC0B3E581364,
	BasicProfiler_Dump_mB3A5E843EA52468E2249DCF937CE670E29850B84,
	BasicProfiler_Dump_m702441B3AA86B0B9227E627BFABBC2D08CBA64A0,
	ConsoleLogger__ctor_m8BCE34B143933954CFD3F8E45454FBFF59DF60B0,
	ConsoleLogger__ctor_m4042FDE94946274A38241B19DC695F9489C59CC9,
	NULL,
	U3CU3Ec__cctor_m5234F59BDFBD0D9FE975D969B4C5D5BF36E4BA31,
	U3CU3Ec__ctor_m214947DA4328AAC14C9D629FC89F19EEB124D698,
	U3CU3Ec_U3C_ctorU3Eb__1_0_mA197A235E97EC9977D3FA1621F55D5209F59CBB1,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	LogLevelFilterLogger__ctor_m3C53076C7C86A11DFC35ACD96CA7E8D8D2D2B16C,
	LogLevelFilterLogger__ctor_m6CCA8869CF50ED1CE87510CBEE5079757A275797,
	NULL,
	LogLevelFilterLogger_Debug_mF09E6451849816A1827F1877397564D97A56DCF5,
	LogLevelFilterLogger_Debug_mA70134C01CECFE6FB2BA6005BF8987223C0B6A11,
	LogLevelFilterLogger_Info_m4FCD4DC3309AB20ECE638CAAEC00B68FAA71DE7C,
	LogLevelFilterLogger_Warning_mFFD3B912E84D21E50E73C26083C7F1765A9BD7FE,
	LogLevelFilterLogger_Error_mFB0ADC935F5DFD1E3F60A142152A142DEE1FEB3B,
	LogLevelFilterLogger_Error_m196A887141D4ED169BF6911BE7970371DBE2A18F,
	LogLevelFilterLogger_GetLogLevelFromEnvironment_mB53B9E176F0E4E2F42D11F15A27663907587AD0E,
	TextWriterLogger__ctor_m387C87A1F2E0C6C08F88C6489365A4F7BDDCF054,
	NULL,
	TextWriterLogger_Debug_m931321DC76B13E5C1759BFC41CCFC1F5C3D01431,
	TextWriterLogger_Debug_m15A3DAB43D6198C01419D12130ACC08549DAFAC1,
	TextWriterLogger_Info_mCB2566AC2ED92F850035E9390104A9ECAF403C2C,
	TextWriterLogger_Warning_m1EC515F8A9B98C016E0B2B53DECCEB21975DADD1,
	TextWriterLogger_Warning_m6BBA7A64DA6A749C53D7707DB000225243137D0F,
	TextWriterLogger_Error_m29281762E5A06FD3EFC34ADD075631BFE4E30B4F,
	TextWriterLogger_Error_mC585D59720A39A77FCD48363C1BA89FF0CCFE5B7,
	TextWriterLogger_get_AssociatedType_m3CEE9218310871D833BC457CA50CCC0927B3EEF2,
	TextWriterLogger_Log_mDE6A3A6CFBD58808C10C8E2C3D3DEE90248A0503,
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
	AtomicCounter__ctor_m899DA3DB6A2057D7627FAF86D7B079B137D2F4E9,
	AtomicCounter_Increment_m6F41592E31E44721BD81770AB629E1D3D214CA6B,
	AtomicCounter_IncrementIfNonzero_m62FECF0DDB5BB9A369632BCBF7433861CA9B2000,
	AtomicCounter_Decrement_m83EE3FC6B1ED15BDB2A482DD18FAA5E0F34796C0,
	AtomicCounter_get_Count_m763D2F6548CC25CF272E1C5AF492D51E321A5439,
	AuthContextSafeHandle__ctor_m2D8D2C224E9E6C772666246B22C19E5B8BE17785,
	AuthContextSafeHandle_ReleaseHandle_m16E827D56A2A3A6ACB312F9BAA03B49C1511383B,
	AuthContextSafeHandle__cctor_m09D00B056BAA7F9868A1FDA8507554F864C1FF1A,
	NULL,
	NULL,
	NULL,
	BatchContextSafeHandle__ctor_m1CEEA7E98BE9F1E5F7F01DC3AE93F8AEF1E49CF0,
	BatchContextSafeHandle_Create_mDB14FCD05CF9959F38959A15B6C4A2B19A3E360B,
	BatchContextSafeHandle_get_Handle_mCA080F10880D02FD8E4F4A5274D1FFA0D1E38018,
	BatchContextSafeHandle_SetReturnToPoolAction_m4191DA59631EFDBA65313FDB8BBB65534EC40F4D,
	BatchContextSafeHandle_SetCompletionCallback_m3F7B204E3FE1FC55682CA5BCD19B1307CA0E9ADE,
	BatchContextSafeHandle_GetReceivedInitialMetadata_mFBBE5969DD4013131EF156AA56BE8A0A4F7E93B5,
	BatchContextSafeHandle_GetReceivedStatusOnClient_m2C77B7F1D605426DEECDA2B5EED088A67A3AC6CB,
	BatchContextSafeHandle_GetReceivedMessageReader_m2875A6ADD6542016E55BD0CDF4A4ABF6A6C0E116,
	BatchContextSafeHandle_GetReceivedCloseOnServerCancelled_mFEEB3A039250C90D11892F84808F2038A979A6C2,
	BatchContextSafeHandle_Recycle_m08DAEE3DD8B5868B119B840CC127E90F78D4D9A3,
	BatchContextSafeHandle_ReleaseHandle_m36D7F8687247E1C8EEECA38C8657B420A745EAFA,
	BatchContextSafeHandle_Grpc_Core_Internal_IOpCompletionCallback_OnComplete_m6DE5024256C7AE851D2EAA309552E4B1039936E2,
	BatchContextSafeHandle_Grpc_Core_Internal_IBufferReader_get_TotalLength_m9BC6D71C7754914A2F40D768D1C275251B4D8453,
	BatchContextSafeHandle_Grpc_Core_Internal_IBufferReader_TryGetNextSlice_m9F4C2A17193993C329E281840CB30A17B6D730B7,
	BatchContextSafeHandle__cctor_m5FA807681C1C9EAA7CC49F60F509E9A1FF5164F4,
	CompletionCallbackData__ctor_mDEDA5835544642E03DBE0333E1F9BC464D12D4AB,
	CompletionCallbackData_get_Callback_m8BEAA82D935AF609E1579D552C4B0B21B1AF6CDA,
	CompletionCallbackData_get_State_m0D49723D66A0FCA29AF9017EFD68AE644B92D3E0,
	CallCredentialsSafeHandle__ctor_m591A73BADB1F1967CFDD63B8BE0697563D11A1C7,
	CallCredentialsSafeHandle_ReleaseHandle_m4EEECE7315AE7256BC1EBA24AAC12A9E35525F0B,
	CallCredentialsSafeHandle__cctor_m72C02EADA53A6FC7AA9F210C4B8BA59C0CF1C833,
	CallErrorExtensions_CheckOk_m4D46605FE7F340B75E59D3FE56E2CBC18FDAABA3,
	CallOptionsExtensions_Normalize_m769A5ACB692168E9E99D2E3A54E53845213147E8,
	CallSafeHandle__ctor_m0E907F313478B977D53592D360D14BAD97052DAB,
	CallSafeHandle_Initialize_mA305A33DAE2143E7013BFD60F422E70B22CE1D02,
	CallSafeHandle_SetCredentials_m2683A2361272437B535FBA56652E37058591C3D7,
	CallSafeHandle_StartUnary_m5F3223414EF427DD1A8C6B8C36C09AC9E2338DEC,
	CallSafeHandle_StartDuplexStreaming_mCF77548BDF3F1E390DF3BED16EB13BA325B1EF9B,
	CallSafeHandle_StartSendMessage_mF4B8B9D0F1A410400BA8552122FC0A072785EF28,
	CallSafeHandle_StartSendCloseFromClient_m560FBB454DAB92A385742C7888DF1735BC0D258C,
	CallSafeHandle_StartReceiveMessage_m59C69B56F35E7EC9D4137534E4C48D15736BD034,
	CallSafeHandle_StartReceiveInitialMetadata_m4BD1948EF870F6310B1CC2984979E055369B76B6,
	CallSafeHandle_Cancel_m5D6E6D3D546BF696E5C45259FD89C745963F3B0B,
	CallSafeHandle_CancelWithStatus_m24B3C82A40B2C1B3CA76F7DD26F122C91223EAD7,
	CallSafeHandle_ReleaseHandle_m658679E8D5C40762DFDCB07FD56C72CB5EE6F902,
	CallSafeHandle__cctor_m34E805BDECC57BC1288A417E69CE3902D2DF1229,
	U3CU3Ec__cctor_mB0CFA11D4B98676E4F4EEB1203B66D8E128FD6A6,
	U3CU3Ec__ctor_m577362F6D36A7B1B22371856DC2416B105920ED1,
	U3CU3Ec_U3C_cctorU3Eb__33_0_m65F7E4C5AAC103E0FAD50966672990143A68A63A,
	U3CU3Ec_U3C_cctorU3Eb__33_1_m3BFA467827498950899F28228FE86A9FF8B0B98C,
	U3CU3Ec_U3C_cctorU3Eb__33_2_mC8109D4D3F8885F23B4609D542B5A2BE3D775789,
	U3CU3Ec_U3C_cctorU3Eb__33_3_m56DFC89A81EF2EA5D5AA95B0E1D9CF40700C30CD,
	U3CU3Ec_U3C_cctorU3Eb__33_4_m44C65858173E3070B586EBE8B0AA99CA4DC3D660,
	U3CU3Ec_U3C_cctorU3Eb__33_5_m7D6EC471C1CF1465B1E2935CB1280635F58A7AE1,
	U3CU3Ec_U3C_cctorU3Eb__33_6_m7B40E8A289E5D0CBC5DF2F5251AFA9EAC95E80A7,
	ChannelArgsSafeHandle__ctor_mA5A0EB5286F085A929743233FC33C7AAF4552EF0,
	ChannelArgsSafeHandle_CreateNull_m9A844DCD5E15BD22E2FC35C32B23713DB8623BCB,
	ChannelArgsSafeHandle_Create_m0320795366FD44E2DA13B3133378D06F477D566D,
	ChannelArgsSafeHandle_SetString_m2E9180CC79FF543B9474F1409D0EFAE4AB6B2C9B,
	ChannelArgsSafeHandle_SetInteger_mFADD21C753FB6CB530A9D7B3D3B087A5438CD03C,
	ChannelArgsSafeHandle_ReleaseHandle_m1B362E34456896774713B56AF2BDD51A80EABF1D,
	ChannelArgsSafeHandle__cctor_m33C5EE1F0E11C57CE741079AA0F7BC83EACCBAC7,
	ChannelCredentialsSafeHandle__ctor_m59C996E776B92EB6FE90386B665CAE8CE5A4F7B7,
	ChannelCredentialsSafeHandle_CreateSslCredentials_m72A76E7D08E5C039AED303B4755A60D874273900,
	ChannelCredentialsSafeHandle_ReleaseHandle_m4CCECBA376E8578E52D96F3EDEA5E0B3D7C62497,
	ChannelCredentialsSafeHandle__cctor_m97EF840058AEBFAB43903E0A9696AF2E431E17E1,
	ChannelSafeHandle__ctor_mC07F001F6C720A93E6289835E3BD548A2F19C5A6,
	ChannelSafeHandle_CreateInsecure_m977DFC30F0C67BA8B7DC192B1A9BDD61612C3EFF,
	ChannelSafeHandle_CreateSecure_mAD61FFE699A4553B3A5CE09A53C1BA90D934ADDF,
	ChannelSafeHandle_CreateCall_m9413AA78C30511C4CD523B1A9BBEA3B02206AD9D,
	ChannelSafeHandle_CheckConnectivityState_m219F3FDADC2ED7D2F0EB0605D81C88F3922434CE,
	ChannelSafeHandle_WatchConnectivityState_m726098C6C0575C1DD22D0E3FF1644FD33F09B457,
	ChannelSafeHandle_ReleaseHandle_mBFDA4687B3486A413A61FB4041EA3D804E7DA04B,
	ChannelSafeHandle__cctor_m37F2462405A4A7643A412BD286BD3C9E5B1DAF6B,
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
	ClientSideStatus__ctor_m849DF772B079F4260387AF0B0C0E636AB5425443,
	ClientSideStatus_get_Status_m300C369282422D75747F095D9E30A54853C68CB7,
	ClientSideStatus_get_Trailers_m463422D2B5DB7F66D0DA3E0675C06008F8137C2A,
	CompletionQueueEvent__cctor_m949F3A5D661B8FB98E45952AFD3DEF9EA48530F6,
	CompletionQueueSafeHandle__ctor_m4F7B10648A4F2323D0AF95A03C281269B07A62FB,
	CompletionQueueSafeHandle_CreateAsync_mDF1A9A5F8F3B2C44D858049BB1414FCAF4D1BAA3,
	CompletionQueueSafeHandle_Next_mC8A45C82694A6321284BFC098BC5B45274306A7F,
	CompletionQueueSafeHandle_NewScope_m8C215EE2433BD6504C6E224BA6EAFFF6B89F074A,
	CompletionQueueSafeHandle_Shutdown_mA7FE8B7EA3DEEF2478A637A29E0F695F53F8C323,
	CompletionQueueSafeHandle_get_CompletionRegistry_m77D85C79D4910589679C0E2209FED34B1676507A,
	CompletionQueueSafeHandle_ReleaseHandle_m3D7A292C54E70E9CCD98CBB8DDEC96297A3E170A,
	CompletionQueueSafeHandle_DecrementShutdownRefcount_mEF9151E2A3E44F1E6BDEBE018F86318454C16BA6,
	CompletionQueueSafeHandle_BeginOp_mA401593C4C527548BCDE3293E068CD092FEAC3F2,
	CompletionQueueSafeHandle_EndOp_m2EAE6C0D627DE6D1328F0F474B68AE0EE38F6B7C,
	CompletionQueueSafeHandle__cctor_m7EC4635BF25584A90BB4184D8C280D33CCBEF0CA,
	UsageScope__ctor_mFF892F95AB7C2EB545ABC97B2ED5F046501730C8,
	UsageScope_Dispose_mEDC6812562D58593CE8E005C67CFE18FB07F808B,
	BatchCompletionDelegate__ctor_mAB84A6D972D4BF49E834E40E25C98C7D352280D7,
	BatchCompletionDelegate_Invoke_mCEE91B8B0EABB7CE93387E98D70F00C251313D76,
	BatchCompletionDelegate_BeginInvoke_mE6388861950E73B6A0C2B22743E60682AB964AD1,
	BatchCompletionDelegate_EndInvoke_m392299AAC3E99B4BDE25BF96BF4B264DF6501707,
	RequestCallCompletionDelegate__ctor_mFFCFDCBB6AFD953E308ADCE20AF353D3A7A3951A,
	RequestCallCompletionDelegate_Invoke_m581178ED16CF35358FA3B664568F9C126D7A1C9E,
	RequestCallCompletionDelegate_BeginInvoke_m6ABF571944D131405874C92F5F4CBF7B10C2511B,
	RequestCallCompletionDelegate_EndInvoke_m23358BC8EF6CEF1BB658851659921FFA28EC2BD1,
	CompletionRegistry__ctor_mA4DC907E4EB77AFCB507E9951611384548FE1A09,
	CompletionRegistry_Register_m2AADAF9DD3F7A8618BE566861AFC9AF2CA940F65,
	CompletionRegistry_RegisterBatchCompletion_mD8059CCD16C51808330C3372839EAEDAF12B8FCC,
	CompletionRegistry_Extract_mDC482ECF624CDED75CC95AFFC6EFA8E2B1D6E35D,
	CompletionRegistry__cctor_m35F2B7474749E7D9D3DB7CD103AA50A50B937028,
	IntPtrComparer_Equals_m2081544A067C1639017057A90B44C680877E87FC,
	IntPtrComparer_GetHashCode_mA80D0E0FE2F4DA84B42B067C433C18E6978FF36D,
	IntPtrComparer__ctor_mEFE354CE2E5E21738E7508359149862EE624CFAC,
	ContextPropagationTokenImpl_get_ParentCall_m1F3BCA4F0532C81BDF80DB82AEB35AAA53A27C3C,
	ContextPropagationTokenImpl_get_ParentDeadline_m683EE78CCFBC9200B3C9E8A494E9B29467580832,
	ContextPropagationTokenImpl_get_ParentCancellationToken_mB7CE065B76E2BFDC92373BFB90D37BE51F0A867D,
	ContextPropagationTokenImpl_get_Options_m3043ABDD946F76592A3EF97181DBDA5CC5A4E00F,
	ContextPropagationTokenExtensions_AsImplOrNull_m0E88A3D941293A4AD2022ADD9894F090E1E26FC5,
	CoreErrorDetailException__ctor_m2C30AC8CA9F5B3C60EFA97C0C9D432A0694CBF2F,
	CStringSafeHandle__ctor_m2C5B798EB037C917784EC8F52D566C0FB4D4A998,
	CStringSafeHandle_ReleaseHandle_m1C1943A25E1F2D39054A6F5FB10D886AB122F26A,
	CStringSafeHandle__cctor_mC7E463E4C48A32ADC2DC283EC2C65BC03098144E,
	DebugStats_CheckOK_m4697122E9A84B07E02DC088DE64701974C4D1B16,
	DebugStats_DebugWarning_m4E96D3DF612299D52D421DBEE7FF8D24E18BD4DF,
	DebugStats__ctor_m5FB2276008B73A205423B60B796AEEDB677F3B07,
	DefaultCallCredentialsConfigurator_get_NativeCredentials_m9157F86B22D0513DA5A3161B665ED4919C464124,
	DefaultCallCredentialsConfigurator__ctor_m8F136F6BA1A44F2D22837BFCEFD5166AFA8154D4,
	CallCredentialsExtensions_ToNativeCredentials_m07EFFA3FEED8D6425D2411CF48BE1ED4E36B6B74,
	DefaultChannelCredentialsConfigurator_get_NativeCredentials_m86D7CDB874C81B4173884587CEE062F809B3A4AC,
	DefaultChannelCredentialsConfigurator_SetInsecureCredentials_mF32951508CD3DE0D7C66947B134D4281E08489E5,
	DefaultChannelCredentialsConfigurator_SetSslCredentials_m9FE81FEB1841E996FE2887B57669491227992323,
	DefaultChannelCredentialsConfigurator_CreateNativeSslCredentials_m77B26EB81DA3C97F56ECCCD5A79212F508776117,
	DefaultChannelCredentialsConfigurator_GetOrCreateNativeCredentials_m7ADD8C742AE00B841970F8CAC7F60A0E8A81224E,
	DefaultChannelCredentialsConfigurator__ctor_m922643708080AC258DFEC98D053A112E693F8EE4,
	DefaultChannelCredentialsConfigurator__cctor_m289022E7C246E7E18E479D25313292921EAE392F,
	VerifyPeerCallbackRegistration__ctor_m8FFBE9C191362F39761F3B23E8D0DBBF0B37F42E,
	VerifyPeerCallbackRegistration_get_CallbackRegistration_m64D59076FDDD1B8862A9E884E868E4AEDF34F139,
	VerifyPeerCallbackRegistration_HandleUniversalCallback_mF2710F9419451DB553DCF68576ED336D5CBC3EBC,
	VerifyPeerCallbackRegistration_VerifyPeerCallbackHandler_m68B61C6B15818007DD124FAB886B86A0B31F3A0F,
	U3CU3Ec__DisplayClass8_0__ctor_m751992C637B4054153D7492BB909474CC7B55D26,
	U3CU3Ec__DisplayClass8_0_U3CSetSslCredentialsU3Eb__0_mA3EC34945D9BF79706313315DD50E759D9B77E0D,
	ChannelCredentialsExtensions_ToNativeCredentials_m6612F17367CD0434E9FE125E97191C11A306E264,
	DefaultDeserializationContext__ctor_m0CD596A673D3867167506721F31DEAA71C8CF7E8,
	DefaultDeserializationContext_PayloadAsNewBuffer_m83191F6B9F23FA0D4D3C4A741942B258BBB03E06,
	DefaultDeserializationContext_PayloadAsReadOnlySequence_mD252A37B608F5FCC9AB97C3C1F4182B13005E084,
	DefaultDeserializationContext_Initialize_m955B140957314F913D152F55A8BBC353A634B57D,
	DefaultDeserializationContext_Reset_m62BA126BB72087A99459AD271BCAA79687DD22E4,
	DefaultDeserializationContext_GetInitializedThreadLocal_mC775B0F02154AB1885CEED90984F4A08626940D2,
	DefaultDeserializationContext__cctor_m760A9F80E29F25C744CD8BF269E6E927934F30C0,
	U3CU3Ec__cctor_mE8F6BF068D611F3266D0D3BA9759952E51B23C9A,
	U3CU3Ec__ctor_mD7F90C6DFCAC2E22542CCB0BDAA093355765A564,
	U3CU3Ec_U3C_cctorU3Eb__12_0_m133647FE47FD519B350DBB0AB517FCF1D164A664,
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
	DefaultSerializationContext__ctor_m1959AC7BCB0FA0A4DD3B6F1BACB6AEE414083588,
	DefaultSerializationContext_Complete_mFA3C2520C9006B92DCB326259FC0DB2A6A1BD9F9,
	DefaultSerializationContext_GetPayload_m7F4D36B7E7463D34D9DFA0811064D90E4EA6159E,
	DefaultSerializationContext_Reset_m25603FDB8A63165307713E1F49636723DD61D015,
	DefaultSerializationContext_GetInitializedThreadLocalScope_m861F879357452804EA6A45A259637861BAEF375B,
	DefaultSerializationContext__cctor_m38F2E48A70FF4391CCD58FBEC6E43BD114958E60,
	UsageScope__ctor_mACF41298CA2D040B144BD965792D9EFCAFA2DE1B,
	UsageScope_get_Context_m4E26FE14B53773EA9CAAFC4A74F41F2D596203B7,
	UsageScope_Dispose_mB2430F1CD4D3D052C75DA41B58CE46A15177CD75,
	U3CU3Ec__cctor_m08207ED1D51852BDE105931AD2B82BB4CD4582E9,
	U3CU3Ec__ctor_m27354A6E6CB8E607FC3F42481DDB1B044C6771F2,
	U3CU3Ec_U3C_cctorU3Eb__12_0_m2C22DA47BAABF64A18F8716EC2A43D8B2581DDD9,
	DefaultSslRootsOverride_Override_m82277B22D2A42292915E519B9F1F07A746ED9239,
	DefaultSslRootsOverride__cctor_m380D0FD0AB9D866754A60004000F431F4B70BF82,
	GrpcThreadPool__ctor_mC53554F9C9BD47C5A957D471C35AD800757FFDDD,
	GrpcThreadPool_Start_mD2D33D4722306E7DB950790E7EC5C1469B9421B1,
	GrpcThreadPool_StopAsync_m4D0D7BE88CBD78E94F4BB027A9A8269ED6A582CC,
	GrpcThreadPool_get_IsAlive_m9492CA3AA2F8AE333C207ABF7A63126A8ED01DA6,
	GrpcThreadPool_get_CompletionQueues_m3AC98CEC8801BAFD1A07BF40FD3990012C60C52C,
	GrpcThreadPool_CreateAndStartThread_m2A10906AB839A9338DBA8DCD44955F97176383D5,
	GrpcThreadPool_RunHandlerLoop_m9DE4558AD07B6AE9C7774A68E9EE8582E178B977,
	GrpcThreadPool_CreateCompletionQueueList_mF1E3FD4D6BAF32C949A11BF90558E09185DF0817,
	GrpcThreadPool_RunCompletionQueueEventCallback_m42F95D1AF40D44F9C477263495591BB8D7B58E4F,
	GrpcThreadPool__cctor_m54E84D521501D0187D89FEC052F3D1FDF817B455,
	GrpcThreadPool_U3C_ctorU3Eb__15_0_m70DFEEDC884E93E5C2CF62561CD46544AEF100EA,
	GrpcThreadPool_U3C_ctorU3Eb__15_1_m4FC1771B2F938FE36A0055B7221A2434104F8BCD,
	GrpcThreadPool_U3CStopAsyncU3Eb__17_0_m5111739B872F9B81FBC088B3F5442BC042E6D3E5,
	U3CU3Ec__cctor_mE99DA97B127512FAA2973ACEE49EC1CECEF7115B,
	U3CU3Ec__ctor_mCB2DC03C4876F9009F2C18ED9186CB4688748F9D,
	U3CU3Ec_U3Cget_IsAliveU3Eb__19_0_mA15EE6E92A2471ACAD1F98E3063B9BA1218FA4D8,
	U3CU3Ec__DisplayClass22_0__ctor_m6BFD5DEBC4D7648CB8874EDFA1C565D6EC8420F0,
	U3CU3Ec__DisplayClass22_0_U3CCreateAndStartThreadU3Eb__0_m57B158519A3468E71432ED6DB9E997A586E9FDE8,
	U3CU3Ec__DisplayClass24_0__ctor_m7254E6E11E600543F77065191137655AAB761FF3,
	U3CU3Ec__DisplayClass24_0_U3CCreateCompletionQueueListU3Eb__0_m159E797DB311247A836C9CFDBA9AF1D6196D089C,
	U3CU3Ec__DisplayClass24_0_U3CCreateCompletionQueueListU3Eb__1_m3C381E6C8BBAEB831D87AFFD9B3110C8360987D5,
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
	MarshalUtils_PtrToStringUTF8_m89AD4C00E07DC5A403450B6343A034D95F54DDE5,
	MarshalUtils__cctor_m408771769CAE65A7E003B775740493C1879A77C9,
	MetadataArraySafeHandle__ctor_m4ED49A196B27CEE59559F2BC67BED98151879CF7,
	MetadataArraySafeHandle_Create_m76DDE7081AAE0E8B6EE3F44DC99B298BA0077612,
	MetadataArraySafeHandle_ReadMetadataFromPtrUnsafe_mC6D70543549C9D438A2D8BBB95C28B20A233C1F5,
	MetadataArraySafeHandle_ReleaseHandle_mD367B04E1420C868C02B84344D7907A18C278421,
	MetadataArraySafeHandle__cctor_m91D524EB2A081988FC79B61CE0F003AE0016EBF2,
	MonoPInvokeCallbackAttribute__ctor_mE3DD0F235333F7547D5750F168194EB9CF9E997C,
	MonoPInvokeCallbackAttribute_set_Type_m9EA24BB49B59D4C15894478E55F3F3C26835A1CC,
	UniversalNativeCallback__ctor_m4EEF4935103B99D1583DE06EE8A9ACA4D78A33F2,
	UniversalNativeCallback_Invoke_mC2689733FBFAAA2476E277B25BF5C1EFDEBA4340,
	UniversalNativeCallback_BeginInvoke_mF9FFEB2B1DB75705616ABFD900ABCEC5DB222D98,
	UniversalNativeCallback_EndInvoke_mFDD95DC8F4667ED75DD9C61369342869C744B47D,
	NativeCallbackDispatcherCallback__ctor_mCF4F1D2BD467F23D104E94DD145A9750E575BD96,
	NativeCallbackDispatcherCallback_Invoke_mE120F9F9F744D5752A2CD47870399B34BAE2E567,
	NativeCallbackDispatcherCallback_BeginInvoke_m8186A97F03C9E33C1476061FEC30999E3F21E0BE,
	NativeCallbackDispatcherCallback_EndInvoke_m052E5A61F539C587336347B278939FED74B7133B,
	NativeCallbackDispatcher_Init_mB95B56D9EA0BECF6DDD7914B56D5556695338EF9,
	NativeCallbackDispatcher_RegisterCallback_m79319A340A05476F2B62362AE67B1C69505428A7,
	NativeCallbackDispatcher_HandleDispatcherCallback_m57C5A58471D40296AB6D21E2A542C0749D4A8D4B,
	NativeCallbackDispatcher__cctor_m109643DA25A37330F058930902F60E390C857A7C,
	NativeCallbackRegistration__ctor_m39B9CC65FD144630FAE10B89258ED427FA99D31E,
	NativeCallbackRegistration_get_Tag_m5040DFE201BFEA3362E8DB15DCF0D7093899C7E4,
	NativeCallbackRegistration_Dispose_mBFBD29511BC73B17EBE1D1E0183CA04BB78C4CAC,
	NativeExtension__ctor_m9824F8B1C68125F85C7C1767C4AD23763E59315E,
	NativeExtension_Get_m54755B957F8C4C25C0ED53DC04637449A71D8629,
	NativeExtension_get_NativeMethods_m61FF2EA5C5AEEB6D4AF567EF8CBB43F9401F761D,
	NativeExtension_LoadNativeMethodsLegacyNetFramework_m46385958926235B7CABC0BB63930B19545761024,
	NativeExtension_LoadNativeMethods_m4B79F91E89B59D4F6C4C8DB0DB9AE94CF9584851,
	NativeExtension_LoadNativeMethodsUnity_m5B20AC86CEC43559A7A25FF648DA397C16A02E90,
	NativeExtension_LoadNativeMethodsXamarin_mE77FE6FAA8C3EE434D3B56A39FB606F174B7D709,
	NativeExtension_GetAssemblyDirectory_m7E14D8167555DC98615724B177C0D37E4D4AE623,
	NativeExtension_IsFileUri_mF97CF0B928D9468C4D5A9FD7153E98863BCBF183,
	NativeExtension_GetArchitectureString_m5BA63C678F0901A457DC601B354443E704FC7673,
	NativeExtension_GetNativeLibraryFilename_mA8EA17575CDE59D77EB4D836B7AC08C2555D98A3,
	NativeExtension__cctor_m663B8633B6AA101EA06941063FC7BC896F7562CF,
	GprLogDelegate__ctor_m8184398A2C82EEE0CD93BA12F2DD6F306A5046F7,
	GprLogDelegate_Invoke_mE1672B4EF36DFA447F3E7358A1F9BECCD73759D4,
	GprLogDelegate_BeginInvoke_mE2BC3FE41FCC3A210CD5E3795D9662EC1CA618CF,
	GprLogDelegate_EndInvoke_m7DE44567460D0FE3C97BAC99FC4CFEC5C429BF25,
	NativeLogRedirector_Redirect_m417C898F8ED49A13ADEE08BE15F71EB6854A244C,
	NativeLogRedirector_HandleWrite_m03E5012D2E9E37E1A3CBBE08B37987B070E0013D,
	NativeLogRedirector__cctor_m8358F9B5FE7438042149CC6ABA668D5201B3E405,
	NativeCallbackTestDelegate__ctor_mB39CD583929D138A7FEB9D7C852F44630AC4B73D,
	NativeCallbackTestDelegate_Invoke_m39ED80ED0205EEE8EAA1D302E1D26B6C16C5D3EF,
	NativeCallbackTestDelegate_BeginInvoke_mE128E390B097A206A42D7D607800A49BEE498C42,
	NativeCallbackTestDelegate_EndInvoke_mE4479CB7EC8A4D2093F4488B537C251F48F51C9E,
	NativeMethods_Get_m783EDC56BCA7379D25CFBF33B1A09499655A1036,
	NULL,
	NativeMethods_RemoveStringSuffix_mDB067D688C8ED7335EA714254AB5203A5A4EFBEE,
	NativeMethods__ctor_m64F68EC9AA151E628D0200EDCE573D9D3A00F341,
	NativeMethods__ctor_m57A849A028F4738C9184335731126BF787C8080B,
	NativeMethods__ctor_m6AFEBEB8A2D14ECD0B3A645FCE8949181120B6E3,
	NativeMethods__ctor_m319B4575B62192AB7ACC01FEDAF48C3863191189,
	NativeMethods__ctor_m83B567C0A457E2F3550753A342A20BC1F1839C95,
	NativeMethods__ctor_m7A92465283BC5C9FA1157F2018383C503D1EEEDB,
	NativeMethods__ctor_mB15BF21DDB9C485592739C4A7606DEC30C1B5A7E,
	grpcsharp_init_delegate__ctor_m3DB362143A33B611D5DA0ADFF5466E6BFA16EF5A,
	grpcsharp_init_delegate_Invoke_m4DC58762A4B7DF137DC48BB2E6A59B38AA67E083,
	grpcsharp_init_delegate_BeginInvoke_mD61A3E46FCE37EDBEC4D3BD5604A6F7322CF6E03,
	grpcsharp_init_delegate_EndInvoke_m3902DD08BA57DFFC550C472A5A02ED175810541D,
	grpcsharp_shutdown_delegate__ctor_mEF1EEC3816BA590CA1F5B3B16849B8AC404C45E9,
	grpcsharp_shutdown_delegate_Invoke_m8F967B03FD6DA7F971268BC69B7EA3CBCDFB726B,
	grpcsharp_shutdown_delegate_BeginInvoke_m50AD6545F4C1917D75C78E2DEE79FD52D7FE43D8,
	grpcsharp_shutdown_delegate_EndInvoke_m5DABDD22A09F394D2C7555E80A42DD1C6513941D,
	grpcsharp_version_string_delegate__ctor_m8B5813BC8E11EB7C1E4A0C04EC6C423D93BF157B,
	grpcsharp_version_string_delegate_Invoke_m4C1883DF663C818B092373471CD92231AB091CDA,
	grpcsharp_version_string_delegate_BeginInvoke_m9B4CB8CE81F4FFCBF2A06287EEF0C74BAB848D03,
	grpcsharp_version_string_delegate_EndInvoke_m4712047FD79DADD8CEF00CC7159B4BDFFBC6C097,
	grpcsharp_batch_context_create_delegate__ctor_m2B03BF639B91B6DAAB7BBDCCB8C6BCB056505F6E,
	grpcsharp_batch_context_create_delegate_Invoke_m1B36C0A984E125E6A8397E8E749057758A6C3C1A,
	grpcsharp_batch_context_create_delegate_BeginInvoke_m4FD3FB618FBD2A32CBB6A235BB18FB37FE4F5FF1,
	grpcsharp_batch_context_create_delegate_EndInvoke_mEA8242C4992E92C9F359130FF11E9B289E742D98,
	grpcsharp_batch_context_recv_initial_metadata_delegate__ctor_mA8BF32A19B74D89909128CACD604ED1F9F6911ED,
	grpcsharp_batch_context_recv_initial_metadata_delegate_Invoke_m3C62CC9EE75A201EEC7997A40C071A14F7765062,
	grpcsharp_batch_context_recv_initial_metadata_delegate_BeginInvoke_mD8AEA8690321CE206328BBBFF1D69708025C9C56,
	grpcsharp_batch_context_recv_initial_metadata_delegate_EndInvoke_m55E7BE8840100FE4CE765C64E2093B57B180E9CF,
	grpcsharp_batch_context_recv_message_length_delegate__ctor_m4E4369C9A4EE55BA2A7C7128B587A3FEEF1D2468,
	grpcsharp_batch_context_recv_message_length_delegate_Invoke_mF2397EBD5315EEF98EA6B797B24D27F7E16A037E,
	grpcsharp_batch_context_recv_message_length_delegate_BeginInvoke_m2F1AB9B224B58380E14FC3963E0D0BA3C6F5D534,
	grpcsharp_batch_context_recv_message_length_delegate_EndInvoke_mFEC51F02B7F5D3D85E66763BB446B73717FDDFF6,
	grpcsharp_batch_context_recv_message_next_slice_peek_delegate__ctor_mE2E2DF9267C44B41E99B819731FF79FF9CCF0FBD,
	grpcsharp_batch_context_recv_message_next_slice_peek_delegate_Invoke_m9E38068C66599F6D3034ADE8EE3C9C5D52B3DEA6,
	grpcsharp_batch_context_recv_message_next_slice_peek_delegate_BeginInvoke_m3E70E6849DB9E31A127013E274E861BB4A5DF34D,
	grpcsharp_batch_context_recv_message_next_slice_peek_delegate_EndInvoke_mA4533DF6C4B8068412F80FC87A5A57A6F9FFAB73,
	grpcsharp_batch_context_recv_status_on_client_status_delegate__ctor_mF69591FE156EB1B7DFF222908E19BE12A0161D1B,
	grpcsharp_batch_context_recv_status_on_client_status_delegate_Invoke_m0EA07B3C10396B4EC3BCEF4185088DBEC795D696,
	grpcsharp_batch_context_recv_status_on_client_status_delegate_BeginInvoke_m6A7473A6AA52CA09B2C904A77945A4DFA831CBB9,
	grpcsharp_batch_context_recv_status_on_client_status_delegate_EndInvoke_m611059D6E2D5E8815AA65AB0800EAC257F152252,
	grpcsharp_batch_context_recv_status_on_client_details_delegate__ctor_m4AD5D79FF5A56A0C024A4D44CF227E2FCBCFC033,
	grpcsharp_batch_context_recv_status_on_client_details_delegate_Invoke_mB2AD7312755DCA3B3DE1DB0A114D55777F25AC38,
	grpcsharp_batch_context_recv_status_on_client_details_delegate_BeginInvoke_m420EE2BC6699CFDFA5C63F2941C01E5251D2D481,
	grpcsharp_batch_context_recv_status_on_client_details_delegate_EndInvoke_m69868074BAFA1474B3DD84E7F5CDFC4404198795,
	grpcsharp_batch_context_recv_status_on_client_error_string_delegate__ctor_mB5144A97C5611A22E24EDE36B03C50DFEC323376,
	grpcsharp_batch_context_recv_status_on_client_error_string_delegate_Invoke_m35FD3EF5810026354C5B2946F2E19671D8917DC6,
	grpcsharp_batch_context_recv_status_on_client_error_string_delegate_BeginInvoke_m51B5923AA83548E5B48AFD81C329E8608FDA966E,
	grpcsharp_batch_context_recv_status_on_client_error_string_delegate_EndInvoke_mCB74E248B10AEA9E4FF382A2485037BA6ECAD6EB,
	grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate__ctor_m63EFF0B4A9BA30319883D75E0F4D6570B54AC9D8,
	grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate_Invoke_m559BBF459999CD24D90BC6F3859CF35B9BC5A0C8,
	grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate_BeginInvoke_m8F8CF4232436A539A9B6DDF275BCF1B7081C71F2,
	grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate_EndInvoke_mDDCC22022F821F34B0D7364D07AFF82B41D2CA47,
	grpcsharp_batch_context_recv_close_on_server_cancelled_delegate__ctor_mB44FC208B53BD7F2E9B1681D6E581F13CCE01641,
	grpcsharp_batch_context_recv_close_on_server_cancelled_delegate_Invoke_m2EBBFCFB447E76DAE431260A1912D251E0A6444E,
	grpcsharp_batch_context_recv_close_on_server_cancelled_delegate_BeginInvoke_m41733523F877EE61AF5A87F9C58CAD8D57E4FA5C,
	grpcsharp_batch_context_recv_close_on_server_cancelled_delegate_EndInvoke_m07653F5303ED6F8E7BC7A81D50D056AFDFCB419F,
	grpcsharp_batch_context_reset_delegate__ctor_m00254B5B959918EB6CAB784A7BC809C3A214A055,
	grpcsharp_batch_context_reset_delegate_Invoke_mAF539438D7E5A40EA526A4EB0281DE15E927B60E,
	grpcsharp_batch_context_reset_delegate_BeginInvoke_m96CC4AE8C38B5C37884C73778A848C18B70286E2,
	grpcsharp_batch_context_reset_delegate_EndInvoke_m48DDAE8C0A31E282AA0F3F84AF5C2DEFEC9BE597,
	grpcsharp_batch_context_destroy_delegate__ctor_m17DB091338FDDC8D78549900A29BC0A3D9763D8D,
	grpcsharp_batch_context_destroy_delegate_Invoke_m7E9C593B926846EBB95E7DE4B37ED9725E4C295A,
	grpcsharp_batch_context_destroy_delegate_BeginInvoke_m6912F3076552B562B1B3405D4BE45F831FD7E00C,
	grpcsharp_batch_context_destroy_delegate_EndInvoke_mC4A597A2CF27AD583A453424C8F1A49E59355FA9,
	grpcsharp_request_call_context_create_delegate__ctor_mE2401EDA5559E5BD52D389A8FD48535663D09872,
	grpcsharp_request_call_context_create_delegate_Invoke_m90590161165F60C83FA4C3A622E74BA7A356D80A,
	grpcsharp_request_call_context_create_delegate_BeginInvoke_m1F1EC60E5C3EF74574B273B29872E71FE5232A9B,
	grpcsharp_request_call_context_create_delegate_EndInvoke_m6F018617334A2B762208AA3F8430E92054EB82F1,
	grpcsharp_request_call_context_call_delegate__ctor_mD68AF736FBEA2D33B3E8F25D81833F6238BAFAC8,
	grpcsharp_request_call_context_call_delegate_Invoke_m58EDE33C86EA3B439BCAB4E65BA27D8B4BBF5204,
	grpcsharp_request_call_context_call_delegate_BeginInvoke_m437562226245B5643D92A4B5DE80CD2F981A08E2,
	grpcsharp_request_call_context_call_delegate_EndInvoke_mFC38FA4C131D9B5DB1B1411B2B96E3FAB877F865,
	grpcsharp_request_call_context_method_delegate__ctor_m1CF85B6C21710FEB5F7684A9693471557E69465B,
	grpcsharp_request_call_context_method_delegate_Invoke_mA5BB7EAB839668572E182508E8AB296FD11AAEFF,
	grpcsharp_request_call_context_method_delegate_BeginInvoke_m041AD69D2A775844C75C39B061AF1CCCB90130DC,
	grpcsharp_request_call_context_method_delegate_EndInvoke_m537338184C9DA8D02F13DB9E29BCD709A43727CD,
	grpcsharp_request_call_context_host_delegate__ctor_mD86D99D62A7CB321C64672677C91FD167B64BF27,
	grpcsharp_request_call_context_host_delegate_Invoke_mA517514F14A2FFA9DF9E505ECD2DE25D6F67E2B9,
	grpcsharp_request_call_context_host_delegate_BeginInvoke_m3408A274B2C809718EE9E193CF08978E4CFD48CD,
	grpcsharp_request_call_context_host_delegate_EndInvoke_m85DF47FED38BC80BAC5E3826AF4D0E3A18CA7C46,
	grpcsharp_request_call_context_deadline_delegate__ctor_m5443AC626AFAE88CDF696919A8560E4CE4222B38,
	grpcsharp_request_call_context_deadline_delegate_Invoke_mFC210FC7FA27F5372504FCD683D396641ECE299A,
	grpcsharp_request_call_context_deadline_delegate_BeginInvoke_m50A5CB5BCC33A40678FFB4A88E70D9F576A06896,
	grpcsharp_request_call_context_deadline_delegate_EndInvoke_m6115A08C387E5079F4F76148AA92A46F0E26D38A,
	grpcsharp_request_call_context_request_metadata_delegate__ctor_mE7173CD9EA7B1BDFEBAD7579D1B034371824D9AE,
	grpcsharp_request_call_context_request_metadata_delegate_Invoke_mC731F9A6B16FCD00343D2DDA6EB2C83D1A0525B8,
	grpcsharp_request_call_context_request_metadata_delegate_BeginInvoke_mFC4F8F6231DA749427165CF2FCF633B38046444F,
	grpcsharp_request_call_context_request_metadata_delegate_EndInvoke_mE724719445259F8FCE6F0ED0860B98CF31D02825,
	grpcsharp_request_call_context_reset_delegate__ctor_m4F1C2EFC43FD4DD6BC171C9690B2AF72006B49F6,
	grpcsharp_request_call_context_reset_delegate_Invoke_m528A163917FD41C5B5E62DF9A43994759E0CBF47,
	grpcsharp_request_call_context_reset_delegate_BeginInvoke_m5FA6C3A6DC5CAFCD012590C2C2112CE58BD71751,
	grpcsharp_request_call_context_reset_delegate_EndInvoke_mF234D93159DEF49068BEC5631B8D0A108BDFECA1,
	grpcsharp_request_call_context_destroy_delegate__ctor_m08973AAFF4125EE86420CAA23CB99C40F67EB98E,
	grpcsharp_request_call_context_destroy_delegate_Invoke_m0C7DF1095A70E2D68932258489523139BB8EFCE0,
	grpcsharp_request_call_context_destroy_delegate_BeginInvoke_mE65474D9FEF7E078ACA581854A337FD93427B53F,
	grpcsharp_request_call_context_destroy_delegate_EndInvoke_mEC081B217F79A686FF436C2803E2229D910E2C30,
	grpcsharp_composite_call_credentials_create_delegate__ctor_m24F07ED7799ACCBF10C8E25F941F7C825745BF25,
	grpcsharp_composite_call_credentials_create_delegate_Invoke_m1ED32B09562F0C37D46DB16D6FD4632DC0FF776D,
	grpcsharp_composite_call_credentials_create_delegate_BeginInvoke_m64F3CC8AAB94058815AA53024CACF3FF216C7868,
	grpcsharp_composite_call_credentials_create_delegate_EndInvoke_m37AA40C195EB8EE4650ED0C99345169C1A62398E,
	grpcsharp_call_credentials_release_delegate__ctor_mA2D5EC3F5DF195AFBB42EE3DC56454FD3AA7CDDE,
	grpcsharp_call_credentials_release_delegate_Invoke_m371D0F6E61F51FA2046E0C19C48E091BBF3E429F,
	grpcsharp_call_credentials_release_delegate_BeginInvoke_m0B0412E1E0CEE4A76CF8A53BACBE8E6357C6A6E1,
	grpcsharp_call_credentials_release_delegate_EndInvoke_m1A20AA943CF5010ABC9AB101DA268CAD1D91A474,
	grpcsharp_call_cancel_delegate__ctor_m173587776B3B5A8D7AEC00FDC5EE1691DEB5689F,
	grpcsharp_call_cancel_delegate_Invoke_m594808BE2B436A47B6251ECD23BFB44242886DB2,
	grpcsharp_call_cancel_delegate_BeginInvoke_mE1C130C1667953AE2DA2FAB71978873E4DEEF234,
	grpcsharp_call_cancel_delegate_EndInvoke_mAB956C4D9EA75FC6E7C0AE2BD4588F750E5A020D,
	grpcsharp_call_cancel_with_status_delegate__ctor_m29F0BDB8E0584528890F06D473EC811C10B4F664,
	grpcsharp_call_cancel_with_status_delegate_Invoke_mFDAB20D7BC3EC1DC456E453E0006EED9C365ADFA,
	grpcsharp_call_cancel_with_status_delegate_BeginInvoke_mEE0A0DEFBE17C5BACF716C23339ACD3219CC4874,
	grpcsharp_call_cancel_with_status_delegate_EndInvoke_m5B6A5E58CB7602F0C34A151D46F5672BEE5DDD29,
	grpcsharp_call_start_unary_delegate__ctor_mC107CD2BB74C5187E059EA4B0A4BFFDD1A29B84D,
	grpcsharp_call_start_unary_delegate_Invoke_mAD032D2D2E0C55B3A6964F1534E33CE39083212D,
	grpcsharp_call_start_unary_delegate_BeginInvoke_m1CF10A129EC7F370B2F6AEC32CAEC3B34735B646,
	grpcsharp_call_start_unary_delegate_EndInvoke_m42D5E3377479136B73529647B2A67E357AB23876,
	grpcsharp_call_start_client_streaming_delegate__ctor_m1D7B2E15C0DD4DE2E907AF1B1EE6A00B6B25906D,
	grpcsharp_call_start_client_streaming_delegate_Invoke_m93EBDEA1DBEF1A7F9259DAA16714BA52D8A5AE4E,
	grpcsharp_call_start_client_streaming_delegate_BeginInvoke_m860477DB3D4FDE2A48EEED0D834F4F986BA83DFB,
	grpcsharp_call_start_client_streaming_delegate_EndInvoke_m17426391B7A5A41BCE31D33ED890ED1AE2ADA2BD,
	grpcsharp_call_start_server_streaming_delegate__ctor_m078BFA587A830CA808EAD8F0256BCEAB6A02508F,
	grpcsharp_call_start_server_streaming_delegate_Invoke_m626D97C9FFCBE0BDBE1E9655049B1648588E6D65,
	grpcsharp_call_start_server_streaming_delegate_BeginInvoke_mEE49C0B2F45085AFE37BF3E83C236A3FDA1B79E6,
	grpcsharp_call_start_server_streaming_delegate_EndInvoke_m52702C41F1C068AD8DBA5C05D763C7B016EC49C0,
	grpcsharp_call_start_duplex_streaming_delegate__ctor_mA82C62E8C0642854DBAB0F9427A4372D310FDDF1,
	grpcsharp_call_start_duplex_streaming_delegate_Invoke_m92948727D5BA02EE5985A326FDD9534C4255FD9A,
	grpcsharp_call_start_duplex_streaming_delegate_BeginInvoke_m47CF9A7B2C002519B81BAC0DBC126526A278604A,
	grpcsharp_call_start_duplex_streaming_delegate_EndInvoke_mC8DB1FE4B8CACD778E5FDD00A4FE17971BC26407,
	grpcsharp_call_send_message_delegate__ctor_m028F096A28B951E75451F668A94FFCAB9922650E,
	grpcsharp_call_send_message_delegate_Invoke_m3098E55F40BD4E7DF6B206CB5FE77C52801E84DE,
	grpcsharp_call_send_message_delegate_BeginInvoke_m45D516B7B41946D0124B8A4BCA9F09BB0C6075B9,
	grpcsharp_call_send_message_delegate_EndInvoke_mC4081FF5E362B0F2C22B0A414EF0B28837440B17,
	grpcsharp_call_send_close_from_client_delegate__ctor_m186CDCDEE12384DC4EE3860CB10157126E78A69C,
	grpcsharp_call_send_close_from_client_delegate_Invoke_mC37ADFCB94CEA13E16D116AB4556155237C5E523,
	grpcsharp_call_send_close_from_client_delegate_BeginInvoke_mD108D912DBB4E24EB10DD023EAB200348C00F2B5,
	grpcsharp_call_send_close_from_client_delegate_EndInvoke_mF881C54D89AA4770E68028F2D963B14104BEDDE3,
	grpcsharp_call_send_status_from_server_delegate__ctor_m8E79AA87C8968F2BFEB3E01DFE9101E15D026C9B,
	grpcsharp_call_send_status_from_server_delegate_Invoke_mBFB63F3573320D38D1E4BCC12E613D344CF1F019,
	grpcsharp_call_send_status_from_server_delegate_BeginInvoke_m7123AC281A7ACDB568B7AAD882A0479DA87E8419,
	grpcsharp_call_send_status_from_server_delegate_EndInvoke_m9A994C268B7DC1F2156D7D2C416C108B8F69A384,
	grpcsharp_call_recv_message_delegate__ctor_m1008F588A3B06D6FDFA244C36F234BBCC8D6D3F0,
	grpcsharp_call_recv_message_delegate_Invoke_m9A356CC52BD8F25A89712295EA7DDFD8326AF00C,
	grpcsharp_call_recv_message_delegate_BeginInvoke_mE1E63705D45D8E686E359EB1B2D672E7947520F9,
	grpcsharp_call_recv_message_delegate_EndInvoke_m353AE66FB642DEDF7BB40BD8512D01BEA4E4BBD0,
	grpcsharp_call_recv_initial_metadata_delegate__ctor_m285ED924A419AD52FCCFD8D94E0324D05E69E5B6,
	grpcsharp_call_recv_initial_metadata_delegate_Invoke_mD66F812BE5A995BA6A91406EE44DFABBA758051B,
	grpcsharp_call_recv_initial_metadata_delegate_BeginInvoke_mBD503EF9261EACEF01CB1F8B1B5CEFA3518E3587,
	grpcsharp_call_recv_initial_metadata_delegate_EndInvoke_m2611592DCE9AD8560069167D037EBEEB5AD46173,
	grpcsharp_call_start_serverside_delegate__ctor_m540D3B546F395FA86922D3673FDF8C78EB370DA2,
	grpcsharp_call_start_serverside_delegate_Invoke_mD13F2925D1C406061301101DC1F8CC409BED1350,
	grpcsharp_call_start_serverside_delegate_BeginInvoke_m1B9CCCE34139038E75D82C623D93B7E627EE3D24,
	grpcsharp_call_start_serverside_delegate_EndInvoke_m655E9D4169B9EA50EDD2CEB0F6501FF46A32E02C,
	grpcsharp_call_send_initial_metadata_delegate__ctor_mCE0EF0B235B99019617D8F91FDF6978406FB8E61,
	grpcsharp_call_send_initial_metadata_delegate_Invoke_mF09B7745BC28E8A77660C45755E80C8D774AB4F4,
	grpcsharp_call_send_initial_metadata_delegate_BeginInvoke_m7144DE053579670E252ABC75A061C520D9879DEE,
	grpcsharp_call_send_initial_metadata_delegate_EndInvoke_mD555C284B19A9EA675FD34B0688A22C981C1E117,
	grpcsharp_call_set_credentials_delegate__ctor_mB76B7FA8BEEF2CC79E546B876528B9D9DDD0A5B1,
	grpcsharp_call_set_credentials_delegate_Invoke_mDC6CBE7F257F136A41B4A3F7BEC3BA94B345B50A,
	grpcsharp_call_set_credentials_delegate_BeginInvoke_m6E02499C0A018AC54374F6525A17952AB57BAA4B,
	grpcsharp_call_set_credentials_delegate_EndInvoke_mFE0C315938D940B1A40924DE71C7B9096A883F0F,
	grpcsharp_call_get_peer_delegate__ctor_m5071BE9D25D84780D17EA81B0744E87F69B583AF,
	grpcsharp_call_get_peer_delegate_Invoke_m169869CC4D824EDC6396A28FEF0BA51B230C2FB0,
	grpcsharp_call_get_peer_delegate_BeginInvoke_m25493F3E70A6711A25898847FD47131CE766E8DF,
	grpcsharp_call_get_peer_delegate_EndInvoke_m99D6328A28C5F06763C7F699A68FE5EAF94C6060,
	grpcsharp_call_destroy_delegate__ctor_m910B93D6FB584013A15CFFC3F84D1D4965FA5CED,
	grpcsharp_call_destroy_delegate_Invoke_m499A440BD7E5503B3172E9784C39539EF28F8DA4,
	grpcsharp_call_destroy_delegate_BeginInvoke_m5681AA632FED4244C5E61E42F970BDE283869796,
	grpcsharp_call_destroy_delegate_EndInvoke_m6F97538BAD5B507F6F286742A7A483C989725118,
	grpcsharp_channel_args_create_delegate__ctor_m47C3AFC4BFD7A312BBC1EC574CAE24CECA375E7A,
	grpcsharp_channel_args_create_delegate_Invoke_m2E9619086B91452FEFD8AB2A95C49CFF3B0B6405,
	grpcsharp_channel_args_create_delegate_BeginInvoke_mAE813F13815A185242AAEF4D2A8BC862EDA459FA,
	grpcsharp_channel_args_create_delegate_EndInvoke_mFC1D0F75F51FC16C509318E88F0DE3E9F6375B71,
	grpcsharp_channel_args_set_string_delegate__ctor_m5F7ED0EFCB87C93A147B7AEC33D828CB0E83C657,
	grpcsharp_channel_args_set_string_delegate_Invoke_m5E1130E4E6D4BD88C7893876E8C961FFC3B8B4EE,
	grpcsharp_channel_args_set_string_delegate_BeginInvoke_m28A58B6B990D4F5AAE1715F07A8DA25BF6DD1BC9,
	grpcsharp_channel_args_set_string_delegate_EndInvoke_m77B72780082BB1E489A21F41DBB2CA00A4B9923B,
	grpcsharp_channel_args_set_integer_delegate__ctor_m15AAB34D467F0C1AFF1A0D5424B9BF0092AFED9E,
	grpcsharp_channel_args_set_integer_delegate_Invoke_m3EC294DAFDB4F8AA51D90E83E187D632CE6A7567,
	grpcsharp_channel_args_set_integer_delegate_BeginInvoke_m319F067041126EFD5494B271B15AB66AFAB67EE8,
	grpcsharp_channel_args_set_integer_delegate_EndInvoke_m5474E801D66BFC56BE9A93FC93DEECD96DE0D608,
	grpcsharp_channel_args_destroy_delegate__ctor_mA012C875F31DCF6BC1F8EDE43D9C99C382019A26,
	grpcsharp_channel_args_destroy_delegate_Invoke_m28C4612DBAB6A0EF3D28CDCCD170E6BD209EC85A,
	grpcsharp_channel_args_destroy_delegate_BeginInvoke_m8EF41DAEB6D9DBBD7184988C66E05B58E5F6F9F7,
	grpcsharp_channel_args_destroy_delegate_EndInvoke_m24448C690D2780A97CF6C5F729A3FAE407C4E1B2,
	grpcsharp_override_default_ssl_roots_delegate__ctor_mEFD6706AE9613458092495A9DB9E7E266385F823,
	grpcsharp_override_default_ssl_roots_delegate_Invoke_m96A03CE2DC7D3016AA21BC81A8A197EF0A81C5BC,
	grpcsharp_override_default_ssl_roots_delegate_BeginInvoke_mA020A4A3FC5ED011385485211A79757FBC41B392,
	grpcsharp_override_default_ssl_roots_delegate_EndInvoke_mD4CE9E5F19CC4E688D516C8C4BDF8E7DCF4A1CCA,
	grpcsharp_ssl_credentials_create_delegate__ctor_mD7D966213D193FA23B9EE15567AA860F668861E7,
	grpcsharp_ssl_credentials_create_delegate_Invoke_m2366B15D11F2BE251BFE30FC3288DFCD373ECD76,
	grpcsharp_ssl_credentials_create_delegate_BeginInvoke_m1CA9CFC9CF97C09219CCF8EE730E5A4F5AFB96D7,
	grpcsharp_ssl_credentials_create_delegate_EndInvoke_mD1368D09799C681C0D0AA7A365796FC1886A3DAE,
	grpcsharp_composite_channel_credentials_create_delegate__ctor_m9010D86AAB9BE991804B0E56151AD39698A50822,
	grpcsharp_composite_channel_credentials_create_delegate_Invoke_m650130367D413E13065B9DA931C94D1CD7709E98,
	grpcsharp_composite_channel_credentials_create_delegate_BeginInvoke_m646E11070F922F54CD373DEFA910FFC1F16B3892,
	grpcsharp_composite_channel_credentials_create_delegate_EndInvoke_m4F4F9B75878921291DCA4C1AB51D2F16F7855F82,
	grpcsharp_channel_credentials_release_delegate__ctor_m6E5DD3750E534DC1FFAC34146002C285059D148D,
	grpcsharp_channel_credentials_release_delegate_Invoke_m4F58670C39E2FA749BB817756E8DBE0E2DB31515,
	grpcsharp_channel_credentials_release_delegate_BeginInvoke_mE86BB7D75D5364DE7AF1DFFE93EB55DD02669E77,
	grpcsharp_channel_credentials_release_delegate_EndInvoke_mA83E29C13891D365CF916E3B6CB94A00120D532A,
	grpcsharp_insecure_channel_create_delegate__ctor_m94D47B6050001F90196BEDD33F1D180EA1F25D74,
	grpcsharp_insecure_channel_create_delegate_Invoke_m1E81EF3DB1E65DF182979D8671587C82112DD926,
	grpcsharp_insecure_channel_create_delegate_BeginInvoke_m98C6DCBC2B6BBED2BF5D1CECC94CCBDEF6813FBF,
	grpcsharp_insecure_channel_create_delegate_EndInvoke_m48F4A86B373A09A335CA455C13BE1FB306913229,
	grpcsharp_secure_channel_create_delegate__ctor_mE18219CB493165C8A31380DD0218DF009E0BC2D4,
	grpcsharp_secure_channel_create_delegate_Invoke_m5A6281DAE51D2F157237C75E277990D7F4C6DE13,
	grpcsharp_secure_channel_create_delegate_BeginInvoke_mFA17EF547AF8C6A1E65C009D7AAD0129E5F82547,
	grpcsharp_secure_channel_create_delegate_EndInvoke_m4A70BFE4A87DE801B8C5FA7D22E8CB590AC9F733,
	grpcsharp_channel_create_call_delegate__ctor_m59278303C624132769F2AED9E9146853739A8320,
	grpcsharp_channel_create_call_delegate_Invoke_mEEBE6EEEA647E5A578D360FE7C6B2F6708D5BD00,
	grpcsharp_channel_create_call_delegate_BeginInvoke_m6076BDB7F060A832323EAA06404F6D804F5D7328,
	grpcsharp_channel_create_call_delegate_EndInvoke_m35D7FFC397791EDD8185A70FDEB0ADCAB34B57B5,
	grpcsharp_channel_check_connectivity_state_delegate__ctor_m8C25B026B7FC6EDEB8C9B0832D7758C604F43CB4,
	grpcsharp_channel_check_connectivity_state_delegate_Invoke_mDEFB8B169B3E9958D8A8F531664D9E142F2F894C,
	grpcsharp_channel_check_connectivity_state_delegate_BeginInvoke_m8D8BF4032849D6E955F8A50EDC27DC5EE5CBD120,
	grpcsharp_channel_check_connectivity_state_delegate_EndInvoke_mA3DAA589D539FC82FF2CC67CA6B53E4CF51BB4AE,
	grpcsharp_channel_watch_connectivity_state_delegate__ctor_m280A018FB6AC2D2AE59D844F2E592926B0BE6635,
	grpcsharp_channel_watch_connectivity_state_delegate_Invoke_m6D62EA5278F5B06D24D8E9A2BD5E593A1588FFFA,
	grpcsharp_channel_watch_connectivity_state_delegate_BeginInvoke_m91FFD3140C747C314B8CD7B336BCB2AAD9C70503,
	grpcsharp_channel_watch_connectivity_state_delegate_EndInvoke_mCC1474BF07B559576706CE706D30CF4C78EDDD39,
	grpcsharp_channel_get_target_delegate__ctor_mCEB6EE5DAA6768C818F5CEC56AAB95E95AD34750,
	grpcsharp_channel_get_target_delegate_Invoke_m7DD023AC7E6A7DA950C5E2222FB36869B9CD45EC,
	grpcsharp_channel_get_target_delegate_BeginInvoke_mF06322884A4CBBD894F5387E0005285D641F3231,
	grpcsharp_channel_get_target_delegate_EndInvoke_m4849A90549AFF06776A6F12A8AE759FA8C7E70E2,
	grpcsharp_channel_destroy_delegate__ctor_m266E6BC61F3D2131DA5BB24C9FBCD2422FD063D5,
	grpcsharp_channel_destroy_delegate_Invoke_m6EE93CB799397EBA0441060132E6A49520708530,
	grpcsharp_channel_destroy_delegate_BeginInvoke_mBDCE054551A3E113F57C71D3FB1670F07FFF45A3,
	grpcsharp_channel_destroy_delegate_EndInvoke_m161A45DF31D6A38302A1FC0E062588EBD6E0D19D,
	grpcsharp_sizeof_grpc_event_delegate__ctor_m85404E1AEDD3CAB00EA8F804B8155E378F74FEAF,
	grpcsharp_sizeof_grpc_event_delegate_Invoke_m74809DEB824772E31ADA68D7D5BDCD10FC707223,
	grpcsharp_sizeof_grpc_event_delegate_BeginInvoke_m88E7696A8973D5F5F4B391A2C9CE627D05F1E927,
	grpcsharp_sizeof_grpc_event_delegate_EndInvoke_m0CE45020BBB25CA05C42E3A72FE7DC10214E08F5,
	grpcsharp_completion_queue_create_async_delegate__ctor_mC39452420682B1519C2BAB2F45B9706999D66BEA,
	grpcsharp_completion_queue_create_async_delegate_Invoke_m3BC8281D671846FFD8A54613BE81F968F5F54D45,
	grpcsharp_completion_queue_create_async_delegate_BeginInvoke_m2C51189D5C6E3A8FC511FAC020EFCA1F694F40AC,
	grpcsharp_completion_queue_create_async_delegate_EndInvoke_mA82D2090C1E83D6B9982A3CB15ADD78FC636E0A4,
	grpcsharp_completion_queue_create_sync_delegate__ctor_m27AAC5DCF66E021FAF1ECBE7DFC2575FABC740AA,
	grpcsharp_completion_queue_create_sync_delegate_Invoke_m06EF6BFA7FCF77947932A70728F7A533606504A0,
	grpcsharp_completion_queue_create_sync_delegate_BeginInvoke_m008F71CB34413C70E38B59D2DF4D60A07D34A110,
	grpcsharp_completion_queue_create_sync_delegate_EndInvoke_mECBD7F130FA14D487D97D75A5D373A10D738290A,
	grpcsharp_completion_queue_shutdown_delegate__ctor_m29B5600DA969A84D82A2AB46127B42F5F539EF79,
	grpcsharp_completion_queue_shutdown_delegate_Invoke_mC1E1FDE415E9545B35E52273447F99CF616A0809,
	grpcsharp_completion_queue_shutdown_delegate_BeginInvoke_mBC48F8A794126668ADD843CFF7A469C7DFC0DCDD,
	grpcsharp_completion_queue_shutdown_delegate_EndInvoke_mEE6BF731B72DE2B1E4B47FFC3E6513A61A4944D1,
	grpcsharp_completion_queue_next_delegate__ctor_m3C34AC4009298E44DE6E20D5719AE23659EE1030,
	grpcsharp_completion_queue_next_delegate_Invoke_m09A112CE0A676B9162F019C0CE07920801960BA6,
	grpcsharp_completion_queue_next_delegate_BeginInvoke_mB5D56FBC68C632E293089FD52BE07BEFAD60EDE0,
	grpcsharp_completion_queue_next_delegate_EndInvoke_mA5BA1D66EB89C494D86CEEF9DF8184B3A9D62A50,
	grpcsharp_completion_queue_pluck_delegate__ctor_m37D7AB87B2F15E2A8E50D5749D1A18E38D8E833D,
	grpcsharp_completion_queue_pluck_delegate_Invoke_m12ECDC6AE3C5CBBF4F4D9358B1BF7FE63EB3D598,
	grpcsharp_completion_queue_pluck_delegate_BeginInvoke_mA4F4B614A27C74194E8FAC3A00127E9B234E6AF8,
	grpcsharp_completion_queue_pluck_delegate_EndInvoke_mCAD7B9A04CA3E794651F75D8E058ACD473915773,
	grpcsharp_completion_queue_destroy_delegate__ctor_mACEBF4B4E0C55B5CCC3DE17750D48F7303D41764,
	grpcsharp_completion_queue_destroy_delegate_Invoke_m558D247CAE91E7D76C4512C038C0873C2E7E75C6,
	grpcsharp_completion_queue_destroy_delegate_BeginInvoke_mAAD81B46879FF6A95CB82C9EB96C599F0A37430A,
	grpcsharp_completion_queue_destroy_delegate_EndInvoke_m51E3DB8BD823D0663903BBD8CBAA48C4061F3379,
	gprsharp_free_delegate__ctor_m8905045C9D51B9AE1EA36CA6079967D2DA02A15D,
	gprsharp_free_delegate_Invoke_m6155795DC7F57D606D6CEEDBB70EE3F2DC672E55,
	gprsharp_free_delegate_BeginInvoke_m459C5CE4EF80B3604ED0F2A5630FAA067B846586,
	gprsharp_free_delegate_EndInvoke_m966FADB094A2B038544A83441B53FE8B3BE88EEA,
	grpcsharp_metadata_array_create_delegate__ctor_mD1137324754784FF30EC3BFC72422205315D5836,
	grpcsharp_metadata_array_create_delegate_Invoke_m2B32FAC2F09D4C2A33662725C821D3D5686D87D8,
	grpcsharp_metadata_array_create_delegate_BeginInvoke_mF7A0D6C5986213CE0DDE024276645F695150050A,
	grpcsharp_metadata_array_create_delegate_EndInvoke_m0F01DB91453FEE82996F5E6AE87757F228C8E8E1,
	grpcsharp_metadata_array_add_delegate__ctor_mACDA48394110986F34D12C469C97AFF2F9014C06,
	grpcsharp_metadata_array_add_delegate_Invoke_mAD45EA3842A51983707C80E95A16DD9EF3E12840,
	grpcsharp_metadata_array_add_delegate_BeginInvoke_m60249AC899316B67F6946BBE5D905FF6A2FECD2E,
	grpcsharp_metadata_array_add_delegate_EndInvoke_m03716B519265EA083CC6DC6C0DA88653B0A8747C,
	grpcsharp_metadata_array_count_delegate__ctor_mB6FEF530C8E45FBE577A5E35FA595C25E42679C2,
	grpcsharp_metadata_array_count_delegate_Invoke_mC634D7371972B23361475759ED246CE36FFD2CA1,
	grpcsharp_metadata_array_count_delegate_BeginInvoke_mCCF58DE2D5E52F245E7292D942DBEB69A0EAA0DB,
	grpcsharp_metadata_array_count_delegate_EndInvoke_mC4F1EBDA39EB3B5016F95EB2640B2EC8AC8CD0A4,
	grpcsharp_metadata_array_get_key_delegate__ctor_m0AB339911FA0D34966655D3E3CCD7193C5FB00BD,
	grpcsharp_metadata_array_get_key_delegate_Invoke_m6E74BD60A15F3B93E4F166FCA4FFF9252E614AC6,
	grpcsharp_metadata_array_get_key_delegate_BeginInvoke_mCD5A18A87A6542FDB3D426E692ED68D954E574EE,
	grpcsharp_metadata_array_get_key_delegate_EndInvoke_m7F5AF3E7F0232539959CB3FB0A0033E45AA4E23E,
	grpcsharp_metadata_array_get_value_delegate__ctor_m3B5D75FC5674D6C8D0C88C9DEDF0FCA12A55926F,
	grpcsharp_metadata_array_get_value_delegate_Invoke_mA838D5B9BD96F491A45D9A926A2145FF79A9F188,
	grpcsharp_metadata_array_get_value_delegate_BeginInvoke_m84E173AB37BBA86EB64F1E8537395CB3E8C098A1,
	grpcsharp_metadata_array_get_value_delegate_EndInvoke_mDC09069D799386A4FB239E2285BAFF3309765776,
	grpcsharp_metadata_array_destroy_full_delegate__ctor_m784BF57ED152F3468C3263E8AF12B36B3BA128C8,
	grpcsharp_metadata_array_destroy_full_delegate_Invoke_mDD025C1106F57E5DC87228F46E134038FD1C82EA,
	grpcsharp_metadata_array_destroy_full_delegate_BeginInvoke_m7A7D97F529E7FD99FCFE514CE562F04C22452992,
	grpcsharp_metadata_array_destroy_full_delegate_EndInvoke_m65EE91916158A86F4C982CAFBDBDE89D03E36FBF,
	grpcsharp_redirect_log_delegate__ctor_m6282ADC2C64CEB5C06A7CFD0B5A403BF7B913E12,
	grpcsharp_redirect_log_delegate_Invoke_mABC82DBB1D1258023776C8BA44BED022FD1196C4,
	grpcsharp_redirect_log_delegate_BeginInvoke_m054A1FD06D2B52BF3D08740F37054F959E75CDC4,
	grpcsharp_redirect_log_delegate_EndInvoke_m1B1EAF49C0854095E8772A2D22AE8C88889ECFBD,
	grpcsharp_native_callback_dispatcher_init_delegate__ctor_m67C754725FE42BABFF8C51CCF5A267E354EB61DB,
	grpcsharp_native_callback_dispatcher_init_delegate_Invoke_mDB1C2AADC21396DE47E308879B79BB97767BC667,
	grpcsharp_native_callback_dispatcher_init_delegate_BeginInvoke_m44673A7A2A7A2E9ED2C2E3570C4DB1F04A803CA8,
	grpcsharp_native_callback_dispatcher_init_delegate_EndInvoke_mE8A1B4B642073045880B5B67B2F6F42DEA07D1E0,
	grpcsharp_metadata_credentials_create_from_plugin_delegate__ctor_m72CE32961A1BD09BB5B39B8ADD59019D0B0230DE,
	grpcsharp_metadata_credentials_create_from_plugin_delegate_Invoke_mE2BA2E025BB4FDF302180FF149CC860743259CB2,
	grpcsharp_metadata_credentials_create_from_plugin_delegate_BeginInvoke_m7C456E7617406FC2E19E40709BBB6B8D2203BB57,
	grpcsharp_metadata_credentials_create_from_plugin_delegate_EndInvoke_m8840400A1C60D6C3FA5E9E44740929AAAB86B982,
	grpcsharp_metadata_credentials_notify_from_plugin_delegate__ctor_mF8B2A95FD2289FFB9B1D2B836151FE61D4A866A1,
	grpcsharp_metadata_credentials_notify_from_plugin_delegate_Invoke_m1BAA35D55233C042A618FB9F29B5E6A206D6698A,
	grpcsharp_metadata_credentials_notify_from_plugin_delegate_BeginInvoke_m5D53E0D242AB248B5121EC14EB9284BDA46782DB,
	grpcsharp_metadata_credentials_notify_from_plugin_delegate_EndInvoke_m2B80C5069E2AA9FE2E9536F6B48D3CFB2584112E,
	grpcsharp_ssl_server_credentials_create_delegate__ctor_m9EDE66B7E0F6BE1434D7E58200ADCB724F0CC0F6,
	grpcsharp_ssl_server_credentials_create_delegate_Invoke_m276B6AC10072DB1B096100447E1DCBB223D2C23D,
	grpcsharp_ssl_server_credentials_create_delegate_BeginInvoke_m56B1443970AC37C93C3111502AD5B35DA83BCB7A,
	grpcsharp_ssl_server_credentials_create_delegate_EndInvoke_m13A35B8552AFFF02458C869A9B76BD198897C909,
	grpcsharp_server_credentials_release_delegate__ctor_m02B205ADC97E896C2DD4A78FEB35B4AD280EEC0E,
	grpcsharp_server_credentials_release_delegate_Invoke_m3B691B596B906EA71E6AF60686282144729E4407,
	grpcsharp_server_credentials_release_delegate_BeginInvoke_m8FF38427110E7C35366BB966BABE9F7B8ED52A83,
	grpcsharp_server_credentials_release_delegate_EndInvoke_m18C1BBFDA6A53B3BD2817FB3D0763DFB2C1DEDC9,
	grpcsharp_server_create_delegate__ctor_m290956B4BBC7492F4EE9BAF95D2DD372092C0CA9,
	grpcsharp_server_create_delegate_Invoke_m262334F57656A3E9FD98D6F4A3805F057FC100C8,
	grpcsharp_server_create_delegate_BeginInvoke_mEB10CF2A46C4214D60C0E8A4A15A2CB1918DDBAA,
	grpcsharp_server_create_delegate_EndInvoke_m87649BEB2E8418BAE3CA9BBE334840FC5C5C6022,
	grpcsharp_server_register_completion_queue_delegate__ctor_m847C8B7C472C36887545B642F4BC5D5BA1E6BD91,
	grpcsharp_server_register_completion_queue_delegate_Invoke_m6ED03F6FBD3FCFA73D3C8AD6E093F7EF75A774DB,
	grpcsharp_server_register_completion_queue_delegate_BeginInvoke_mCD4DDECE57DD7508225FC96B457FD12EFB513F63,
	grpcsharp_server_register_completion_queue_delegate_EndInvoke_m6924A534CD4F9619E77E5C582CB239C86764FCCC,
	grpcsharp_server_add_insecure_http2_port_delegate__ctor_mD388436EC0567226D2BDD7122388D4DB3DDA7B34,
	grpcsharp_server_add_insecure_http2_port_delegate_Invoke_m3CEB811646D745E956A73855778DC70A392ABB62,
	grpcsharp_server_add_insecure_http2_port_delegate_BeginInvoke_mB1AAD964FC2793877CB61C081CB05F65C6111524,
	grpcsharp_server_add_insecure_http2_port_delegate_EndInvoke_m697A09B3EF968FE259ACE530E897932AB8807653,
	grpcsharp_server_add_secure_http2_port_delegate__ctor_m5DCA42CD464C102F9EDC9546FF837CAC34D30B48,
	grpcsharp_server_add_secure_http2_port_delegate_Invoke_m78CAFFA26CD9D53ED443B921DF4D8F4A2566CEEF,
	grpcsharp_server_add_secure_http2_port_delegate_BeginInvoke_m938591B26FDFAA2F526B6F6EBEC9567CCCFE1492,
	grpcsharp_server_add_secure_http2_port_delegate_EndInvoke_mC3B8FF57CBE73FBAFAA6484CE509B4E0F765AB5F,
	grpcsharp_server_start_delegate__ctor_mAD7C85B5B1D67794456F8EA52BE49C03C7361287,
	grpcsharp_server_start_delegate_Invoke_mDC67C18716EC016485EA6E6688D00E04637E9D7F,
	grpcsharp_server_start_delegate_BeginInvoke_m3BB67E3B82BD67778B41B89415F1DC1EC846C0C1,
	grpcsharp_server_start_delegate_EndInvoke_m1BEFD6CAB434EFE6DA6AC975B88674E4CC8196C3,
	grpcsharp_server_request_call_delegate__ctor_m344EE0C1F637B45A661C9D7E349B9D337B3BE3F1,
	grpcsharp_server_request_call_delegate_Invoke_m7C652A0D94E79C6E490891CF1647A69069E2EC6C,
	grpcsharp_server_request_call_delegate_BeginInvoke_mE8BDC9F856CF76E15870816426D47ECD4B3129B1,
	grpcsharp_server_request_call_delegate_EndInvoke_mC1D77C6EDCF9C8B69BE68BFAD0C21094822024F0,
	grpcsharp_server_cancel_all_calls_delegate__ctor_m64750B34E525F1BF762A2B000CACFF1920F5027C,
	grpcsharp_server_cancel_all_calls_delegate_Invoke_mF4CBE95B7FEB7134849F89AC4243057FDF2D278A,
	grpcsharp_server_cancel_all_calls_delegate_BeginInvoke_mBFD8BB8023AED587ADA8B20D048131D9FE5D48EC,
	grpcsharp_server_cancel_all_calls_delegate_EndInvoke_m4AC5032733A79C800A3F142482621805BE1F9F46,
	grpcsharp_server_shutdown_and_notify_callback_delegate__ctor_m02240DDA0177B91D8F278FD694388719CF7CFBC5,
	grpcsharp_server_shutdown_and_notify_callback_delegate_Invoke_mF6E90F91D86A6088CF6CB19AD863760DC29896A5,
	grpcsharp_server_shutdown_and_notify_callback_delegate_BeginInvoke_m7376F1C1229678D6ECB313D03298073B93AA9027,
	grpcsharp_server_shutdown_and_notify_callback_delegate_EndInvoke_mC2F251D9C206D4787BB772E34AA69974DD6AB618,
	grpcsharp_server_destroy_delegate__ctor_m8F3B79C25AD3CC8A77ED5F2740FA6BCF2B089270,
	grpcsharp_server_destroy_delegate_Invoke_mD58661B8C472FAEC5ABED8AF9F54C81351D36E1C,
	grpcsharp_server_destroy_delegate_BeginInvoke_m0694FA117ACAC598ED8B82E9482AEDCF5A937E1F,
	grpcsharp_server_destroy_delegate_EndInvoke_mDA14AEFE5D5B5E5862E5021A66A555747408D000,
	grpcsharp_call_auth_context_delegate__ctor_mDCC6527CDAB9650D39A6171CA4839FCA4B7E5ED8,
	grpcsharp_call_auth_context_delegate_Invoke_mA03C297B9C42DB06E3760D68111C7F704E4EEDA3,
	grpcsharp_call_auth_context_delegate_BeginInvoke_m8B3901B4225B727A5C75D95CDBB5148E44A18E8B,
	grpcsharp_call_auth_context_delegate_EndInvoke_mF0F6A7BF9832ACDC44922A391383FF782FC11082,
	grpcsharp_auth_context_peer_identity_property_name_delegate__ctor_m7ADBDB8EBBE69C14A9CBD6FC6530A76558B38AFD,
	grpcsharp_auth_context_peer_identity_property_name_delegate_Invoke_m13468FB4B5CF7374C64E114A6F8FAE83004D0CA2,
	grpcsharp_auth_context_peer_identity_property_name_delegate_BeginInvoke_mDEC6C62B52F0D901D2F2E9CD5DFA6B2105396E79,
	grpcsharp_auth_context_peer_identity_property_name_delegate_EndInvoke_m5E644B4B8E47A11F44FEB33CC216F7583D0C1C9D,
	grpcsharp_auth_context_property_iterator_delegate__ctor_m3732109AD60F839927AB151B8B58E3A72A15CDA1,
	grpcsharp_auth_context_property_iterator_delegate_Invoke_mC88FEC8FC6F2ED77BE7110146A49FD363BCC67EB,
	grpcsharp_auth_context_property_iterator_delegate_BeginInvoke_mDD1AC6FB5FF76905AAF729F18BBC4777F633908E,
	grpcsharp_auth_context_property_iterator_delegate_EndInvoke_m2F30D0CFEBB2B89C92475545A8CE5DB2353EEE79,
	grpcsharp_auth_property_iterator_next_delegate__ctor_mE88CF6D183E876D90B6B9E8E2637CA34BF8837EB,
	grpcsharp_auth_property_iterator_next_delegate_Invoke_mFB7746782330E6CA1D309288BCC830E78B5EA2A4,
	grpcsharp_auth_property_iterator_next_delegate_BeginInvoke_mEC445C1634EDBD2ADE20595551998E5423E9CD21,
	grpcsharp_auth_property_iterator_next_delegate_EndInvoke_mE39CB77BBDF1A33ACAB3D601F7618A3E14D37E67,
	grpcsharp_auth_context_release_delegate__ctor_m32713955E03E7861D9B86FFE1FA23F3D0A5F6FA4,
	grpcsharp_auth_context_release_delegate_Invoke_m9BF4D632A33BF2E38C6A62E89828AC3DB61509E3,
	grpcsharp_auth_context_release_delegate_BeginInvoke_mE1AB913F857A86B120C2696F1EAAD2DB930E15D7,
	grpcsharp_auth_context_release_delegate_EndInvoke_m0DAC6A57B27FC608C724737F43193B0041670C45,
	grpcsharp_slice_buffer_create_delegate__ctor_mD69ED8B04C6580C104BE6CC9A6BFC6FA4ECDA63C,
	grpcsharp_slice_buffer_create_delegate_Invoke_m31A3DF182D7EC742430BDBF9F608FECF60A8B058,
	grpcsharp_slice_buffer_create_delegate_BeginInvoke_mD9D59EE734BC31FD71FFE7FCD680CD8F5C30B641,
	grpcsharp_slice_buffer_create_delegate_EndInvoke_m5B4D76677624336235E8C355E738ED3A514B25D8,
	grpcsharp_slice_buffer_adjust_tail_space_delegate__ctor_mD3BA992D292CC137496B80E415521E2A48A56A64,
	grpcsharp_slice_buffer_adjust_tail_space_delegate_Invoke_mE6E049E62D008ADFC8EFCD3AD69F95E86657BE4E,
	grpcsharp_slice_buffer_adjust_tail_space_delegate_BeginInvoke_m81B414EDDB20838C3FE455B6A908387457A234E0,
	grpcsharp_slice_buffer_adjust_tail_space_delegate_EndInvoke_mB2904ADEAB3DEB2038A84EFE2B2575A95AEF06D9,
	grpcsharp_slice_buffer_slice_count_delegate__ctor_mEAB0E5B44E1E30F3D2130A364561CC9BD91124AF,
	grpcsharp_slice_buffer_slice_count_delegate_Invoke_m730F8A729449952CF87BE7199839A548BA81DDCF,
	grpcsharp_slice_buffer_slice_count_delegate_BeginInvoke_mA877D10EDEF1DE0775F5362EE6276BF258257EBE,
	grpcsharp_slice_buffer_slice_count_delegate_EndInvoke_m4C22F9800FC4168BF93CD7082DDECE491D09231C,
	grpcsharp_slice_buffer_slice_peek_delegate__ctor_m1F8208823C977BE1679CF958913117DB395E0405,
	grpcsharp_slice_buffer_slice_peek_delegate_Invoke_m8FB8B8154F31765F94A129502F4F14B51C78D813,
	grpcsharp_slice_buffer_slice_peek_delegate_BeginInvoke_mBB73E4612766A41E8D2C11FC0DAF532852897B10,
	grpcsharp_slice_buffer_slice_peek_delegate_EndInvoke_mE7F541A87DE2AFE2D17A12140EA80983D8FA55B5,
	grpcsharp_slice_buffer_reset_and_unref_delegate__ctor_m969AEAB4788A0EF34D960C3B287624B003A15E3B,
	grpcsharp_slice_buffer_reset_and_unref_delegate_Invoke_mA2F24E2568E6188071CC64DFCFE9DB2F83627F63,
	grpcsharp_slice_buffer_reset_and_unref_delegate_BeginInvoke_m805A5AC9E233CA1DAA583A285919BB53B60C874A,
	grpcsharp_slice_buffer_reset_and_unref_delegate_EndInvoke_m291FC9712A48C7D93024EABF7028019FB52BA635,
	grpcsharp_slice_buffer_destroy_delegate__ctor_m84751C364287F9A19A5C0F89A68A8310C06CD81B,
	grpcsharp_slice_buffer_destroy_delegate_Invoke_m56F884E3EC2337FB858548BCD5B4157D4A905F9B,
	grpcsharp_slice_buffer_destroy_delegate_BeginInvoke_m090AC77042015468AD1A30817C23E3C0B7F1FAAA,
	grpcsharp_slice_buffer_destroy_delegate_EndInvoke_m01FEEC93804C2963EE992AE57EC9ADA0DB4CF229,
	gprsharp_now_delegate__ctor_mB16A473BDAA6E0EAA1AD796652D1A4132BA1AD75,
	gprsharp_now_delegate_Invoke_mE254FCDAD3B5130716D9D30546592732561A34A5,
	gprsharp_now_delegate_BeginInvoke_mCD970DDF7117916155F940DD40B5773C0B51CED6,
	gprsharp_now_delegate_EndInvoke_mBFCFEF15D548B2B96B56096EE28DA7961788D2D5,
	gprsharp_inf_future_delegate__ctor_mCA5A0D4B8987BB115F2024DFA934348BCF887232,
	gprsharp_inf_future_delegate_Invoke_m50B926CAE780D86C765CDDE55F66BE0F95D24892,
	gprsharp_inf_future_delegate_BeginInvoke_m7F088F93FDFF1FD486C50AD8308A0B7E532FFD65,
	gprsharp_inf_future_delegate_EndInvoke_m14D861496DE2E5343235098EC3844C98F01C8F2F,
	gprsharp_inf_past_delegate__ctor_m3EBDA137A6789CDE0A2154D2B9106291609110FF,
	gprsharp_inf_past_delegate_Invoke_m4C611F1E88B3BC86B7BE8CDA0ED2378A64A71406,
	gprsharp_inf_past_delegate_BeginInvoke_m748C52852C439ED07169754770138F3744A6967E,
	gprsharp_inf_past_delegate_EndInvoke_m67E1BAA9385BB051729B3DE5CDB024B18C9C93F5,
	gprsharp_convert_clock_type_delegate__ctor_m86754488603829F8D6D50E4FD403E4C9FD195A62,
	gprsharp_convert_clock_type_delegate_Invoke_m2D6877D0B181E7FAB3C669F5E9B031EBF20B433C,
	gprsharp_convert_clock_type_delegate_BeginInvoke_m87E88931389D03DACF3342B463EF77CBF7887486,
	gprsharp_convert_clock_type_delegate_EndInvoke_m568E0632F05A4D1DA79FD93D2119C25F97EDADC4,
	gprsharp_sizeof_timespec_delegate__ctor_mF3C3FF2D7BA1636E6EB25F807E36CE582617886B,
	gprsharp_sizeof_timespec_delegate_Invoke_mF28D02354B843BC10C89B2D178DE50F3B26DF875,
	gprsharp_sizeof_timespec_delegate_BeginInvoke_mBE26CE77DAA2B69DEDAF1449782CF24646E5DCA2,
	gprsharp_sizeof_timespec_delegate_EndInvoke_m8FDC5D56CE4E1C3B1B5627154782B3D1BF6D551A,
	grpcsharp_test_callback_delegate__ctor_m0DB6D95DE2453C010A4512D76E80CB398F06BC68,
	grpcsharp_test_callback_delegate_Invoke_m7254255A3248B37D2477B6E574ECF878663B01D2,
	grpcsharp_test_callback_delegate_BeginInvoke_m3ABBFBA5316F6DCBEE786F3456D3E10F2E9CF74B,
	grpcsharp_test_callback_delegate_EndInvoke_mED7191D930CF427E740D4328FABBF2DC9AE37CC4,
	grpcsharp_test_nop_delegate__ctor_mAA5E8F120C92E15F3188941F2E7BF2C848D76633,
	grpcsharp_test_nop_delegate_Invoke_mED4682C0DBA3CAD69432445E98B3AFCB07DA3447,
	grpcsharp_test_nop_delegate_BeginInvoke_m2C85F0541B15793FF0F83FDF614F05818E363A82,
	grpcsharp_test_nop_delegate_EndInvoke_mE57F88DF5D234D4F693DF9836F39763506CC2CDA,
	grpcsharp_test_override_method_delegate__ctor_mCC25D5A221694D4DF4A3E6373A4B88721101EC20,
	grpcsharp_test_override_method_delegate_Invoke_mCB8B4D4BE4BE749DEEB8A8DF43253D8DA0C4E249,
	grpcsharp_test_override_method_delegate_BeginInvoke_mD21CBBA455438ED878407B014F9C8366474C92EA,
	grpcsharp_test_override_method_delegate_EndInvoke_mE4A99E652185556957412EB2EC6FBC21398FE1CD,
	grpcsharp_test_call_start_unary_echo_delegate__ctor_mF3B82F0747F7C9D8C080B4E6FDDCA762AF9DD6EF,
	grpcsharp_test_call_start_unary_echo_delegate_Invoke_mA1253F9ADE1CC61A72CDBF88B2422418FBFEE8FB,
	grpcsharp_test_call_start_unary_echo_delegate_BeginInvoke_m4B08B9BB6326049BC3498624ADF8825668B14429,
	grpcsharp_test_call_start_unary_echo_delegate_EndInvoke_m7A41B911E51DCC0BE9854F134781E89ABCC8AFDA,
	DllImportsFromStaticLib_grpcsharp_init_mA924BAFCBC8D8F2A753BF82B589FBAE2D768AD26,
	DllImportsFromStaticLib_grpcsharp_shutdown_mD72B6EEDF91382FBCE414A8AB52E601583AF08A7,
	DllImportsFromStaticLib_grpcsharp_version_string_m1E073BB55ECB61AEC1A1AB44EB848D5CE2C8D3A2,
	DllImportsFromStaticLib_grpcsharp_batch_context_create_m0897C0D0172488F5601E44A36EA976D718E435A9,
	DllImportsFromStaticLib_grpcsharp_batch_context_recv_initial_metadata_mAD7C04F7CFB5B10685F3595591947B5A425F99BC,
	DllImportsFromStaticLib_grpcsharp_batch_context_recv_message_length_m0F5C431F14D771C503A0D218A27A7BAA1492D04F,
	DllImportsFromStaticLib_grpcsharp_batch_context_recv_message_next_slice_peek_m63E162D4A7033A89694E731B544C5F4B36D946E8,
	DllImportsFromStaticLib_grpcsharp_batch_context_recv_status_on_client_status_m28A27E94548589646A34174DB1931B2399873E3E,
	DllImportsFromStaticLib_grpcsharp_batch_context_recv_status_on_client_details_m47025911C7EB1C84F802949CB067829F07C492B7,
	DllImportsFromStaticLib_grpcsharp_batch_context_recv_status_on_client_error_string_m598F536BB4C9852D1A04AC590D7F267B2BC2932F,
	DllImportsFromStaticLib_grpcsharp_batch_context_recv_status_on_client_trailing_metadata_m564DED62C9588F8DABD331F53FA5982057309E58,
	DllImportsFromStaticLib_grpcsharp_batch_context_recv_close_on_server_cancelled_m84ADCCEA01FD2EA396AEFE6DA7EDD5E9DDC7D546,
	DllImportsFromStaticLib_grpcsharp_batch_context_reset_m8DF625E107AF740C5417B8CA52E77FC171A5B121,
	DllImportsFromStaticLib_grpcsharp_batch_context_destroy_mB656342A481F06BB50BB3343EFC88FF84A0D22F8,
	DllImportsFromStaticLib_grpcsharp_request_call_context_create_mCC4B300F22C4F321345E23CF4BBBD2808329DC60,
	DllImportsFromStaticLib_grpcsharp_request_call_context_call_m9A15273A5E5EAB5DA95561B02D65E38CF6B2AA1C,
	DllImportsFromStaticLib_grpcsharp_request_call_context_method_m78D6E4BBD67389EADF5DBBCDAA8F67DC8A9F3CD6,
	DllImportsFromStaticLib_grpcsharp_request_call_context_host_m2C0206909226AEDCF4F31C22236ECC9AFF4BB006,
	DllImportsFromStaticLib_grpcsharp_request_call_context_deadline_m851998681FF89FBFFE05C56A9EFCE23B619C7B48,
	DllImportsFromStaticLib_grpcsharp_request_call_context_request_metadata_m5D45397D4E0D18CB0D2EA8CA591C75A913A14120,
	DllImportsFromStaticLib_grpcsharp_request_call_context_reset_m18887461E9E7FA40D7590AEE4ED7899DF0B40383,
	DllImportsFromStaticLib_grpcsharp_request_call_context_destroy_m7B4A57BE8A32B78A372018754985C101DE375F2A,
	DllImportsFromStaticLib_grpcsharp_composite_call_credentials_create_mA54258D152BC1BA1361C29A0E1DEBC9AF97D84A2,
	DllImportsFromStaticLib_grpcsharp_call_credentials_release_m9DAD3619D8AEFB9B1B9A265BDC5C2156075CE076,
	DllImportsFromStaticLib_grpcsharp_call_cancel_m6D003D48F4029395DB014C8E970FBECF55EDDFA9,
	DllImportsFromStaticLib_grpcsharp_call_cancel_with_status_mB911D570E6E4736713796E1F02DE04362C8B3FDE,
	DllImportsFromStaticLib_grpcsharp_call_start_unary_m87D9FD6141E4F097C3E2384D4685A0F2B2EC9FB8,
	DllImportsFromStaticLib_grpcsharp_call_start_client_streaming_m8E6FDB648798473B5B3150D9C5E0FCF5C6A783F4,
	DllImportsFromStaticLib_grpcsharp_call_start_server_streaming_mCB66E849C531674540010A49EAD3AAEB909CA283,
	DllImportsFromStaticLib_grpcsharp_call_start_duplex_streaming_m36C884918036833079B8953D6BDAC3E912B2029A,
	DllImportsFromStaticLib_grpcsharp_call_send_message_m2DEE23985B6838D7EBAE9F8EA6A1F731896D3377,
	DllImportsFromStaticLib_grpcsharp_call_send_close_from_client_mC821626D084785F9F740AE83AAF88A487902A31F,
	DllImportsFromStaticLib_grpcsharp_call_send_status_from_server_m498CCBD79EB7D067152D494FB7546328E2F159F5,
	DllImportsFromStaticLib_grpcsharp_call_recv_message_m4533782C05F85A4E8A9BA649A06C5ABEA324518D,
	DllImportsFromStaticLib_grpcsharp_call_recv_initial_metadata_m6A26F641D5CB8F3213B6C8F3B3F11A32F5C0C5AE,
	DllImportsFromStaticLib_grpcsharp_call_start_serverside_mBDD7C28C5A9B4123907F34485CB1676F6A8C2B6D,
	DllImportsFromStaticLib_grpcsharp_call_send_initial_metadata_m968F1AB0480DAF6C649780CB7D97ADC86717E677,
	DllImportsFromStaticLib_grpcsharp_call_set_credentials_mC7364EF24310071510ACCE9221F5A0CFF0D6B8A9,
	DllImportsFromStaticLib_grpcsharp_call_get_peer_mD8FB3F7A96A2A24B83C5FBBA235DD13B6BC80EFD,
	DllImportsFromStaticLib_grpcsharp_call_destroy_mE0E783DBE43C1BBB9EE867466C4F00BDB8A732E1,
	DllImportsFromStaticLib_grpcsharp_channel_args_create_m82C1AAA36928FD4CF938CDF7EAB381C32E6C5FFD,
	DllImportsFromStaticLib_grpcsharp_channel_args_set_string_mBA57457CF74F487831B4FC39B76BDA1F2FED384D,
	DllImportsFromStaticLib_grpcsharp_channel_args_set_integer_m9DF4E2F75BA0A1A8E5BE85EFF8811068FC212E98,
	DllImportsFromStaticLib_grpcsharp_channel_args_destroy_mABB78306843E53BFFF3BFB0F252EAF12B727EF93,
	DllImportsFromStaticLib_grpcsharp_override_default_ssl_roots_m2D761A1D4DA428B81E8C2BBAC08765BA5D60F206,
	DllImportsFromStaticLib_grpcsharp_ssl_credentials_create_mFC267DB3F9E34B4805C8E79ED15AF069422871CE,
	DllImportsFromStaticLib_grpcsharp_composite_channel_credentials_create_m08247C48E7AEF504951C7D309809A8F004EBF873,
	DllImportsFromStaticLib_grpcsharp_channel_credentials_release_m8941DA18C5847E724F08F7610EF578E7019DBBC4,
	DllImportsFromStaticLib_grpcsharp_insecure_channel_create_mD5E76C9F973FA9F67589753DEF2F1F46A7EDA890,
	DllImportsFromStaticLib_grpcsharp_secure_channel_create_m15C406A39153AF103706AB82E3A4707D92B70327,
	DllImportsFromStaticLib_grpcsharp_channel_create_call_m95B44C72059852E3FA5188895FFCFB08AA532C40,
	DllImportsFromStaticLib_grpcsharp_channel_check_connectivity_state_mDFFC88678B177F611E5654514CBAB8BF80E4068C,
	DllImportsFromStaticLib_grpcsharp_channel_watch_connectivity_state_m377C22FCE73DED75F311956B1B2673E58632C0C2,
	DllImportsFromStaticLib_grpcsharp_channel_get_target_mD27F5B6B5BCC9BD8802774170405BAA85E2F57B1,
	DllImportsFromStaticLib_grpcsharp_channel_destroy_m3C2C3897E743B8C89C04AC5E4852473CE03163B6,
	DllImportsFromStaticLib_grpcsharp_sizeof_grpc_event_mA23B55F4AB01A2A39C365FD2A5FE06F3707320D5,
	DllImportsFromStaticLib_grpcsharp_completion_queue_create_async_mBB5542E06FB6BE99153B0851FA9E8A98ADB82C20,
	DllImportsFromStaticLib_grpcsharp_completion_queue_create_sync_m21F0DCC434FC2BC331394A3934DC4F14D4090BDB,
	DllImportsFromStaticLib_grpcsharp_completion_queue_shutdown_m41633E676436220F3CCE127F46604F9B4B5B3A80,
	DllImportsFromStaticLib_grpcsharp_completion_queue_next_m962B860232CDD29D98D7EAF898C966B985E067EF,
	DllImportsFromStaticLib_grpcsharp_completion_queue_pluck_m7C19394663C113688089565399CD1BA8329AA5CF,
	DllImportsFromStaticLib_grpcsharp_completion_queue_destroy_m6F534050498968BD2C0EA609CC813C217A34535E,
	DllImportsFromStaticLib_gprsharp_free_m931BB6CD71CC98116B4525C17DAB62EADF064AAB,
	DllImportsFromStaticLib_grpcsharp_metadata_array_create_m4B31AA93DEC49706616E8346E4624A187987F560,
	DllImportsFromStaticLib_grpcsharp_metadata_array_add_mBD677A0C8778B83882FE0FEDE0A5B2335285F52A,
	DllImportsFromStaticLib_grpcsharp_metadata_array_count_mA435D915991CF616507566B1B6606015EDFD98CB,
	DllImportsFromStaticLib_grpcsharp_metadata_array_get_key_m19933EF49608495DEF31E608E946435AEF1827E4,
	DllImportsFromStaticLib_grpcsharp_metadata_array_get_value_m0C7E085FB0BCCF568D01818E8512A0B5E37C0A6B,
	DllImportsFromStaticLib_grpcsharp_metadata_array_destroy_full_mC398D779F1E06AD66077BC3E62F8D6D488D7CD13,
	DllImportsFromStaticLib_grpcsharp_redirect_log_mDB60583C3675839718BF4958347757E76267A4DB,
	DllImportsFromStaticLib_grpcsharp_native_callback_dispatcher_init_m171BBBFC4AD7CF2004F2A7A61F282F157B393D1C,
	DllImportsFromStaticLib_grpcsharp_metadata_credentials_create_from_plugin_m2ED00892799B2C6D5D681585BD9B2E734DB9C4EA,
	DllImportsFromStaticLib_grpcsharp_metadata_credentials_notify_from_plugin_mFCBF96C6BD8DCF1FC46D1A0DA7933FFC6DA87E65,
	DllImportsFromStaticLib_grpcsharp_ssl_server_credentials_create_m0784339CA48F71F09FF68CED6323BBAC2EBB19A1,
	DllImportsFromStaticLib_grpcsharp_server_credentials_release_m9FA8A5393F61767C9080FCBECB9130E97569EC1A,
	DllImportsFromStaticLib_grpcsharp_server_create_m6EBCDCA0FF035CE3BED38F1AC3CD2987E1B5FD45,
	DllImportsFromStaticLib_grpcsharp_server_register_completion_queue_m88E6003AC38AE94968B81629701C534046474206,
	DllImportsFromStaticLib_grpcsharp_server_add_insecure_http2_port_m603B086188FD715124F3799817BA7904E86CDB3D,
	DllImportsFromStaticLib_grpcsharp_server_add_secure_http2_port_mB92DA052B0407C95B7344066A0D57C15A2FC0275,
	DllImportsFromStaticLib_grpcsharp_server_start_m02BBFF115B1BACF397822FC27F57E1B0AB50E804,
	DllImportsFromStaticLib_grpcsharp_server_request_call_mD9F0556093029B18171FCBAA41FE7231E04E5C18,
	DllImportsFromStaticLib_grpcsharp_server_cancel_all_calls_m9DD1D6A84CB0AF800D7C405143094CE76D3D0E1C,
	DllImportsFromStaticLib_grpcsharp_server_shutdown_and_notify_callback_mB16FBE44CD12C626BEA967B5EEB82A8ACB5D18BD,
	DllImportsFromStaticLib_grpcsharp_server_destroy_mC86E0CBA52EC15A608C195301EEC73743AEBBB6C,
	DllImportsFromStaticLib_grpcsharp_call_auth_context_mC59430A12D875BE1BEF344B6F2AF15C37596254E,
	DllImportsFromStaticLib_grpcsharp_auth_context_peer_identity_property_name_mF630698DFC7BDCF447ECC7F776A45C6FF87E01DB,
	DllImportsFromStaticLib_grpcsharp_auth_context_property_iterator_m7991C62FF8BC4FA62718FEE22521D84AB2871470,
	DllImportsFromStaticLib_grpcsharp_auth_property_iterator_next_m4CB5D0C737AD3D69963207C72CEB17C1BD1CC4F5,
	DllImportsFromStaticLib_grpcsharp_auth_context_release_m8E34FE48A8A5CE5595E08B25E7AC43AA7A9DA28B,
	DllImportsFromStaticLib_grpcsharp_slice_buffer_create_m018D3B92E99333F49A453C0ECFD460BD4567AC38,
	DllImportsFromStaticLib_grpcsharp_slice_buffer_adjust_tail_space_m1CD9CE2956ED4AB19A0D71BCAF453B33BACCF108,
	DllImportsFromStaticLib_grpcsharp_slice_buffer_slice_count_m5039A4B822F624FB132DFA19ACE9C07FEFF1CCD9,
	DllImportsFromStaticLib_grpcsharp_slice_buffer_slice_peek_mD7AFC224D166E5C8B7C502E4903E0AA75D449D1C,
	DllImportsFromStaticLib_grpcsharp_slice_buffer_reset_and_unref_mE0695DFDEBC58BCA3A98538548E609A49114463B,
	DllImportsFromStaticLib_grpcsharp_slice_buffer_destroy_m8E059AF9A02636696190A4E4493E0F0129A7D24B,
	DllImportsFromStaticLib_gprsharp_now_m7FD19A5061312F6253D53A62EF0CD43DA114F16E,
	DllImportsFromStaticLib_gprsharp_inf_future_m2424C12DE16E52056D66F9384C573A3EDD8EB8C5,
	DllImportsFromStaticLib_gprsharp_inf_past_m09E53BE104BEA9A52F5437349357E999E30A04E9,
	DllImportsFromStaticLib_gprsharp_convert_clock_type_m84B6960FE21510BC4B9508B580FB643550B49DF1,
	DllImportsFromStaticLib_gprsharp_sizeof_timespec_m4F3DDEE8794D107A628EBEBC985E132836C22E66,
	DllImportsFromStaticLib_grpcsharp_test_callback_m8BCEA599DF31A751A16F8BBCB73A79A9E28BCA8B,
	DllImportsFromStaticLib_grpcsharp_test_nop_m4E020EC45482C13802D816E91C124121D317F3A0,
	DllImportsFromStaticLib_grpcsharp_test_override_method_m582A1883F6AD43CA85E6C3D9640377D9CD89EE47,
	DllImportsFromStaticLib_grpcsharp_test_call_start_unary_echo_m407D93270603879F0EF71D11338F28DA01439007,
	DllImportsFromStaticLib__ctor_m4122141A4B82E6FA9D0C46985584C374404C332D,
	DllImportsFromSharedLib_grpcsharp_init_m19C07593ADA5516B71343A07A56CE420F6223CBC,
	DllImportsFromSharedLib_grpcsharp_shutdown_m88941F26DA38985FD9357F77423B93CC35A52A18,
	DllImportsFromSharedLib_grpcsharp_version_string_mA5C2660067524A0A4BA15403E021F5D13439068E,
	DllImportsFromSharedLib_grpcsharp_batch_context_create_m2C23CC80630B0BDEBF93D04364453A2044C706AD,
	DllImportsFromSharedLib_grpcsharp_batch_context_recv_initial_metadata_m405009559401F85FFFBBC08929A967FE9A12B4A0,
	DllImportsFromSharedLib_grpcsharp_batch_context_recv_message_length_m10B539A14916F8771DAE6C2A51CE9B2B7328BA34,
	DllImportsFromSharedLib_grpcsharp_batch_context_recv_message_next_slice_peek_m2229A27A5BAB974B4C8601B3CC5855CB3D663B71,
	DllImportsFromSharedLib_grpcsharp_batch_context_recv_status_on_client_status_m332E63BED7D16984BC43C8D45D8E7552935F476E,
	DllImportsFromSharedLib_grpcsharp_batch_context_recv_status_on_client_details_m84440E727F0A41750A387A8F16982664047E005F,
	DllImportsFromSharedLib_grpcsharp_batch_context_recv_status_on_client_error_string_m3D43A8C0BB12BD3C30D19584748A70BC45B3B422,
	DllImportsFromSharedLib_grpcsharp_batch_context_recv_status_on_client_trailing_metadata_mA2D2F5B337B2501F696D5642464AA627E851CF82,
	DllImportsFromSharedLib_grpcsharp_batch_context_recv_close_on_server_cancelled_mA1DEA59BA6D093DD62FD47A81EC4975EC6660CF1,
	DllImportsFromSharedLib_grpcsharp_batch_context_reset_mA04CD55F6330DCCC68BE4F32BF172563D53F6181,
	DllImportsFromSharedLib_grpcsharp_batch_context_destroy_mF960E4D8A4794105142533E55666291CB5FF1446,
	DllImportsFromSharedLib_grpcsharp_request_call_context_create_m18959D98C88429BA22744EB611AE27A65663804D,
	DllImportsFromSharedLib_grpcsharp_request_call_context_call_mFD6EC1D1407CA07AE94B40D8360EB4F6F4D1416B,
	DllImportsFromSharedLib_grpcsharp_request_call_context_method_m3BEC3FBFC44DC44155671683074F2421ED508265,
	DllImportsFromSharedLib_grpcsharp_request_call_context_host_m6AE376604B3D983F122DB3208D7663E471E4C33A,
	DllImportsFromSharedLib_grpcsharp_request_call_context_deadline_mE2BCEEE3F8A4539875C7673F741D51D9B947193E,
	DllImportsFromSharedLib_grpcsharp_request_call_context_request_metadata_mA0CC5B5388F54CDCBC711E712AF78478413AF2C9,
	DllImportsFromSharedLib_grpcsharp_request_call_context_reset_m170F072E60697692A2BE3253C02B27F9FB8CE800,
	DllImportsFromSharedLib_grpcsharp_request_call_context_destroy_m574DCD17F1B0DD209FB75C65D57E4EB6A1E6BA42,
	DllImportsFromSharedLib_grpcsharp_composite_call_credentials_create_mBA78651B26F02803EBDFDD003AB70A5D081EF837,
	DllImportsFromSharedLib_grpcsharp_call_credentials_release_mA52F0404F14CCBA77722D906E324D0CAA22D3080,
	DllImportsFromSharedLib_grpcsharp_call_cancel_m07EBE08FB40D8D821B0E0108B6995D928EB0D745,
	DllImportsFromSharedLib_grpcsharp_call_cancel_with_status_m219EEAB5EBE2B60F62661D87D92984AC6FB8BAC1,
	DllImportsFromSharedLib_grpcsharp_call_start_unary_m62CD28E3ABD6C3FF1EFCF52A2B5BBFA64188B205,
	DllImportsFromSharedLib_grpcsharp_call_start_client_streaming_m222B5A5A0620651397DAA473BFDE86DE361F17C8,
	DllImportsFromSharedLib_grpcsharp_call_start_server_streaming_mF4B1F0A15B143F928BFB2FE40569F8EBBE7A6DE8,
	DllImportsFromSharedLib_grpcsharp_call_start_duplex_streaming_m5E00054F0EA84B13A4B51973EB7772F74E013977,
	DllImportsFromSharedLib_grpcsharp_call_send_message_m9A481AA203C02DCF4BEC87D1CF9B5B4F1F7A0CFB,
	DllImportsFromSharedLib_grpcsharp_call_send_close_from_client_m830C144974BA3C9DD62CFE9BF840CE528E65BB0F,
	DllImportsFromSharedLib_grpcsharp_call_send_status_from_server_m9CD2C213C1C2A6711D4BD84EA693D9C5BDC1F46C,
	DllImportsFromSharedLib_grpcsharp_call_recv_message_m37612D276CDC967B178E67892699E109476D0102,
	DllImportsFromSharedLib_grpcsharp_call_recv_initial_metadata_mF6D2B2C84CCA9500745FB8DC77B2E0F2AAED28FC,
	DllImportsFromSharedLib_grpcsharp_call_start_serverside_m0E91C71FA1968AA7F8DE6B27B64D1DDA52F9E7E1,
	DllImportsFromSharedLib_grpcsharp_call_send_initial_metadata_m13C0CBF623506BDA40B8D82D8EA5E07B4915019D,
	DllImportsFromSharedLib_grpcsharp_call_set_credentials_mD3173BA4BB22D412B165B2950A928752DB4FBC87,
	DllImportsFromSharedLib_grpcsharp_call_get_peer_m47E0035CDE88302873FB48F5B15A9F43601566FA,
	DllImportsFromSharedLib_grpcsharp_call_destroy_m4F6D218D13F73B6D91E1E8FD63456C5236BCA813,
	DllImportsFromSharedLib_grpcsharp_channel_args_create_m4DDAEE667B2A20EB49BEC763A45ABE162FADA6EC,
	DllImportsFromSharedLib_grpcsharp_channel_args_set_string_m5C4576693F6EE2B5066692BEA03B5A6557D0A720,
	DllImportsFromSharedLib_grpcsharp_channel_args_set_integer_m20FD8ACE4F8AEAAFC154215E3D8D56F8371BECA9,
	DllImportsFromSharedLib_grpcsharp_channel_args_destroy_m805D80C9D7802764CBE3C9DB250998A34DEA315F,
	DllImportsFromSharedLib_grpcsharp_override_default_ssl_roots_m03A6CA0D65AA39D11F7B5CBAB909A736D559F51C,
	DllImportsFromSharedLib_grpcsharp_ssl_credentials_create_mA5A0D7E835F7A23302DBA852CE3F594F5D049555,
	DllImportsFromSharedLib_grpcsharp_composite_channel_credentials_create_mBF4795F4F8562B0F56C02AA5B3AD21B5DC51F5A5,
	DllImportsFromSharedLib_grpcsharp_channel_credentials_release_m205720A6AE154BEF00191EF501957CF7E336ED83,
	DllImportsFromSharedLib_grpcsharp_insecure_channel_create_m77DC0D136C833AF17E26646CEBE4EA552CECF232,
	DllImportsFromSharedLib_grpcsharp_secure_channel_create_m6E6948E73AE9398486AD0802552A1E8F3A92C78F,
	DllImportsFromSharedLib_grpcsharp_channel_create_call_mF3873BD7C670C0544A15C05C1A4D33D9F1EFBDD8,
	DllImportsFromSharedLib_grpcsharp_channel_check_connectivity_state_m26056B7E78DAE6062B17343587F5B75ED4925C94,
	DllImportsFromSharedLib_grpcsharp_channel_watch_connectivity_state_m1A4127B17B1ECE3A31722994EE922523AB5EB166,
	DllImportsFromSharedLib_grpcsharp_channel_get_target_m79B506003EB042921EE9FD605847CAD56D7A9ACA,
	DllImportsFromSharedLib_grpcsharp_channel_destroy_mFD9B4C2C4BD0C353746C88E97B4AC5E3525EFBCA,
	DllImportsFromSharedLib_grpcsharp_sizeof_grpc_event_mD5F306BEF3BFAE6F67856BE788ABB04FCC9E40D5,
	DllImportsFromSharedLib_grpcsharp_completion_queue_create_async_mAC5812DB53E2A7E17F74B895DAD5B4D25A775451,
	DllImportsFromSharedLib_grpcsharp_completion_queue_create_sync_m6ED2CE9870432ACC588B1890C0DD4ABAD6E16157,
	DllImportsFromSharedLib_grpcsharp_completion_queue_shutdown_mCAAC05499DB3A44BF3FCD67BE40D3A58DE9AE909,
	DllImportsFromSharedLib_grpcsharp_completion_queue_next_m4C195939CABF2BB8B3C8E2961D32223DDF5A64F2,
	DllImportsFromSharedLib_grpcsharp_completion_queue_pluck_m5FE55F1EEFAC239853D50B8D7965B2C784529703,
	DllImportsFromSharedLib_grpcsharp_completion_queue_destroy_m0B439162F4E9C51F87EB6123899772A53520DA2D,
	DllImportsFromSharedLib_gprsharp_free_m373B12B1839CF3E6EB534E51A6B1487B35405DEA,
	DllImportsFromSharedLib_grpcsharp_metadata_array_create_m79FBF98544D5BB24DCB6A03A8839832B9574F695,
	DllImportsFromSharedLib_grpcsharp_metadata_array_add_m1279406A54AF0C50EDCF32A3338A262F9B7A7C64,
	DllImportsFromSharedLib_grpcsharp_metadata_array_count_mEEC984C8D317ABD0F6EB9E421FAD97D169C9427C,
	DllImportsFromSharedLib_grpcsharp_metadata_array_get_key_m1645F52A707B0A073BFFCE7023AC60DF849BC4CC,
	DllImportsFromSharedLib_grpcsharp_metadata_array_get_value_mB96531A58DD68F8894F5BF6876E1EAF5EB06892C,
	DllImportsFromSharedLib_grpcsharp_metadata_array_destroy_full_m0E717D9F6F19473D8CF91E9E6E9B3B98E2CA73E4,
	DllImportsFromSharedLib_grpcsharp_redirect_log_m292D0E16FB3E85B8D086CE84F32BC2B3C6E5E357,
	DllImportsFromSharedLib_grpcsharp_native_callback_dispatcher_init_m8DCAB491D863D1EDB9D75F0FB7F6BB84B5525F44,
	DllImportsFromSharedLib_grpcsharp_metadata_credentials_create_from_plugin_m4FAEED780B20A7A4A015994D4FBA12844FFB1071,
	DllImportsFromSharedLib_grpcsharp_metadata_credentials_notify_from_plugin_m3CA5973648CED4669B022D1C17620621810CA454,
	DllImportsFromSharedLib_grpcsharp_ssl_server_credentials_create_mABF4157CC499822E947AD28B4DBA115273DDDD65,
	DllImportsFromSharedLib_grpcsharp_server_credentials_release_m8CA18EBE41A3303711D860FC6B031A4807FC4F56,
	DllImportsFromSharedLib_grpcsharp_server_create_m1D4CAC64D11F4D659D41D46E444E8EE413B59779,
	DllImportsFromSharedLib_grpcsharp_server_register_completion_queue_mBC047BA0821AEA018F2FFC774B5282DAD4C29455,
	DllImportsFromSharedLib_grpcsharp_server_add_insecure_http2_port_m3EE44E00532BF0C4883003D268AE22EE9A74B1D0,
	DllImportsFromSharedLib_grpcsharp_server_add_secure_http2_port_m5A4F3C889B1EFE024626BEAD196C1629DA8AF8D4,
	DllImportsFromSharedLib_grpcsharp_server_start_mE93CC062BD2AF44634B4646559FDBF97930CF292,
	DllImportsFromSharedLib_grpcsharp_server_request_call_mF94B5C8FFFB0A588B9C338B64C0CF9FB52EB68EB,
	DllImportsFromSharedLib_grpcsharp_server_cancel_all_calls_mE9CE8727C56B7F8BEC39F4B0FACD59448487D7D5,
	DllImportsFromSharedLib_grpcsharp_server_shutdown_and_notify_callback_m9887D78392419592CC281887556AC636F0058724,
	DllImportsFromSharedLib_grpcsharp_server_destroy_mBCDFAABDD166A48DC5AD250B0881CF83943F09BD,
	DllImportsFromSharedLib_grpcsharp_call_auth_context_mBDEE0278D0DE353B8B444906264407E6098A485B,
	DllImportsFromSharedLib_grpcsharp_auth_context_peer_identity_property_name_m01B5FD4343AB15B918C531C63749C71FE52EEB83,
	DllImportsFromSharedLib_grpcsharp_auth_context_property_iterator_m5B0D61C0F31E213DB43DD02F90C4DE4DA9F72D38,
	DllImportsFromSharedLib_grpcsharp_auth_property_iterator_next_m0A8A21556C9B755E800CD161EE24D23E8E2B3D27,
	DllImportsFromSharedLib_grpcsharp_auth_context_release_m4869D21BBF8329E69931962DE10583742059CAF1,
	DllImportsFromSharedLib_grpcsharp_slice_buffer_create_m4688F0FA6DD2C83425161B50B78E0A6B2BCF358C,
	DllImportsFromSharedLib_grpcsharp_slice_buffer_adjust_tail_space_mAEBE3DA86103076EC6220970246286B185CCFEB5,
	DllImportsFromSharedLib_grpcsharp_slice_buffer_slice_count_mEBE59A987E4B04929E8B90339B84632B392C9B7E,
	DllImportsFromSharedLib_grpcsharp_slice_buffer_slice_peek_m73826EF91317F1BBF6B7D5FD483F14E3EBD37DC1,
	DllImportsFromSharedLib_grpcsharp_slice_buffer_reset_and_unref_mF593B3EAF6EB4DF12DBCC25D0522458D98298318,
	DllImportsFromSharedLib_grpcsharp_slice_buffer_destroy_mEA8D08CFB555C81BCC99843A2F17E193DBA26BBA,
	DllImportsFromSharedLib_gprsharp_now_m4B79C734B547D2CB06A1366C9E19B049B54E546D,
	DllImportsFromSharedLib_gprsharp_inf_future_m817D3ABD33FC3B36BF9B0CCA4BD88110FA0B43EA,
	DllImportsFromSharedLib_gprsharp_inf_past_m2E9BFDA7E102AAF26CEDA056E6BCBA36FC934D46,
	DllImportsFromSharedLib_gprsharp_convert_clock_type_m1069CFA187ACCAF6A28142992CBD72E9907944CA,
	DllImportsFromSharedLib_gprsharp_sizeof_timespec_mCC19BDD007D83688EF3B2384B398A146D340AE73,
	DllImportsFromSharedLib_grpcsharp_test_callback_m59CABEF230A7ACFBC081A76F51CB33C27EF8713F,
	DllImportsFromSharedLib_grpcsharp_test_nop_m62FD5AD34608A92121225FDFCE38E6D46C50AFFF,
	DllImportsFromSharedLib_grpcsharp_test_override_method_mE6B5E9B10238FEF595DBCB62D1CEF99D623E68F8,
	DllImportsFromSharedLib_grpcsharp_test_call_start_unary_echo_m5723CA6121176DA49CCCACBDD26A111536B96412,
	DllImportsFromSharedLib__ctor_mFE34645DED1AB225C76E4144C99DA8300B8AB278,
	DllImportsFromSharedLib_x86_grpcsharp_init_m9C9012A3911BF6A42070D57DA482BE25FBF3350E,
	DllImportsFromSharedLib_x86_grpcsharp_shutdown_mA918DB820EB1481E828A351AE1DDC30BD8473AB2,
	DllImportsFromSharedLib_x86_grpcsharp_version_string_mA4C456D174DF0ED12E75E74F99CBAEDCD6F33239,
	DllImportsFromSharedLib_x86_grpcsharp_batch_context_create_m5040308E033F9E44C406F0BD8401A0E8DD928204,
	DllImportsFromSharedLib_x86_grpcsharp_batch_context_recv_initial_metadata_m5EACFCEFBCFAC7656C68DACBFBABD391FD099A05,
	DllImportsFromSharedLib_x86_grpcsharp_batch_context_recv_message_length_m3CF14CC1CCF699F3EFAB901D8031320E653F413F,
	DllImportsFromSharedLib_x86_grpcsharp_batch_context_recv_message_next_slice_peek_mD777A5230E68B0730ED7FB6628E1AE46E942245F,
	DllImportsFromSharedLib_x86_grpcsharp_batch_context_recv_status_on_client_status_mD9C829AB4CF2FED3E13F671BDFBF96B37F584B43,
	DllImportsFromSharedLib_x86_grpcsharp_batch_context_recv_status_on_client_details_m907A60295C791EAC5B42EB04E053B21BADB25EA3,
	DllImportsFromSharedLib_x86_grpcsharp_batch_context_recv_status_on_client_error_string_m4004BB68C992A12B4F0000EA2640A078D7EEEA52,
	DllImportsFromSharedLib_x86_grpcsharp_batch_context_recv_status_on_client_trailing_metadata_m53D2EE78812DD544ABDCE3648A0E95939FB49C43,
	DllImportsFromSharedLib_x86_grpcsharp_batch_context_recv_close_on_server_cancelled_mD71BD7C708609629C820DFD441A35D4E1AF08DEF,
	DllImportsFromSharedLib_x86_grpcsharp_batch_context_reset_m43F05293AD4C82A4BC8D7E06F62F376F0581104B,
	DllImportsFromSharedLib_x86_grpcsharp_batch_context_destroy_m1AAC83BBF5FD07CF92425407503D75EBB45A6806,
	DllImportsFromSharedLib_x86_grpcsharp_request_call_context_create_m694FC52B78B1F10AF6718A9E29A254B4FD36BF7F,
	DllImportsFromSharedLib_x86_grpcsharp_request_call_context_call_m8371FA0613CA8A61C9BF47F56A1A4C40DC35DD8E,
	DllImportsFromSharedLib_x86_grpcsharp_request_call_context_method_m98261B6A86BBEB360A68BE6F5607A6E55281612F,
	DllImportsFromSharedLib_x86_grpcsharp_request_call_context_host_mF03CE0AC28F381A118EAFDEB3E3E39EF76D4D163,
	DllImportsFromSharedLib_x86_grpcsharp_request_call_context_deadline_m09E2CB9ED8DA64EA73113CF684C29CA812B5DC46,
	DllImportsFromSharedLib_x86_grpcsharp_request_call_context_request_metadata_m262D1CB27759B5D5C2DCB2BDA3AA1758EC96EE54,
	DllImportsFromSharedLib_x86_grpcsharp_request_call_context_reset_mD2D6741A5866B3DF7AC01FA388AAD82511627B3F,
	DllImportsFromSharedLib_x86_grpcsharp_request_call_context_destroy_mB44276998497D838E0234673A2FC6785E497BCE0,
	DllImportsFromSharedLib_x86_grpcsharp_composite_call_credentials_create_m7F3C52F430FC15522974E9AB95BEA86F36ADB0EF,
	DllImportsFromSharedLib_x86_grpcsharp_call_credentials_release_mF1847D309DB5DE9389B8C06E94097D139372E8C6,
	DllImportsFromSharedLib_x86_grpcsharp_call_cancel_mA333EF20E44B8A43CA71AD8FB0F24CDA6B2EF75D,
	DllImportsFromSharedLib_x86_grpcsharp_call_cancel_with_status_m76609C555D5AF4AD9AE0816252DC443A44DFAA20,
	DllImportsFromSharedLib_x86_grpcsharp_call_start_unary_mC890BA54101050E7C5CB220F90AACFC12E23E235,
	DllImportsFromSharedLib_x86_grpcsharp_call_start_client_streaming_mDC3F15E8F7CCF8B846CE114471658E0D40D268F6,
	DllImportsFromSharedLib_x86_grpcsharp_call_start_server_streaming_m9C8A7F3ED2D29590C5735B51655261BCA9CAF1AE,
	DllImportsFromSharedLib_x86_grpcsharp_call_start_duplex_streaming_mA1C72AFD230B82567E0C9F0DF2D2190B5C8FB83E,
	DllImportsFromSharedLib_x86_grpcsharp_call_send_message_m0B563A73BFB00F34B0B5ADD23D0C65500819BD7C,
	DllImportsFromSharedLib_x86_grpcsharp_call_send_close_from_client_mBF360782647D6FBC9D7060689E198FDF048FEE35,
	DllImportsFromSharedLib_x86_grpcsharp_call_send_status_from_server_m6B63C318E05BA821704991676C04D8C38FD98F44,
	DllImportsFromSharedLib_x86_grpcsharp_call_recv_message_m17ED567C487F645D6CEC6988C902149F5B669507,
	DllImportsFromSharedLib_x86_grpcsharp_call_recv_initial_metadata_mFC61D10ECDD9113CAC61AF9CED061A82FDD4BED9,
	DllImportsFromSharedLib_x86_grpcsharp_call_start_serverside_m1C98785647CB02F268365BD2D72578A7F6893D6E,
	DllImportsFromSharedLib_x86_grpcsharp_call_send_initial_metadata_m76BF2773CA5D879E50BF84C9D7098A482B9BD561,
	DllImportsFromSharedLib_x86_grpcsharp_call_set_credentials_m03030D2051061E24BA21C0BA72250AC08F57F9B8,
	DllImportsFromSharedLib_x86_grpcsharp_call_get_peer_m944BADA035B9E51FF7AA729DF15F64F6D5C4E4A0,
	DllImportsFromSharedLib_x86_grpcsharp_call_destroy_m35FFF9426AD5586BBEB9F3E2244B302E895CF180,
	DllImportsFromSharedLib_x86_grpcsharp_channel_args_create_m757E82C3E433C37F7783B510013E4F8A87B4FC38,
	DllImportsFromSharedLib_x86_grpcsharp_channel_args_set_string_mCE299137AA574C6871DA7D987E277FB95DD09E6A,
	DllImportsFromSharedLib_x86_grpcsharp_channel_args_set_integer_m14FE845A2BAAA2EDE499A577381B6D3193CF35DF,
	DllImportsFromSharedLib_x86_grpcsharp_channel_args_destroy_m88FF211F9D0AA4DC3C3B2C4F878D7C24E4BCB67D,
	DllImportsFromSharedLib_x86_grpcsharp_override_default_ssl_roots_m177CBACCE2C5B475AC64A2F526C44D6186491662,
	DllImportsFromSharedLib_x86_grpcsharp_ssl_credentials_create_m1F401D7F20EF6CCD11CF3207C33F14DA65711945,
	DllImportsFromSharedLib_x86_grpcsharp_composite_channel_credentials_create_m7BF48373CBFEF491D4CCD29621C179C8CC0EDBFC,
	DllImportsFromSharedLib_x86_grpcsharp_channel_credentials_release_m721D56EDFD80F6FFB028CB2215900235C6070DAF,
	DllImportsFromSharedLib_x86_grpcsharp_insecure_channel_create_m07940E4716C9081AC1C77212DB1F12BCAE0CBB9D,
	DllImportsFromSharedLib_x86_grpcsharp_secure_channel_create_m122B656EEFA0FD5BE48FF1694FC4FB5A9E3B6840,
	DllImportsFromSharedLib_x86_grpcsharp_channel_create_call_m4C9C7A9567AE96FDCD79571176D7121C45117CB8,
	DllImportsFromSharedLib_x86_grpcsharp_channel_check_connectivity_state_mAC4E25F306CC2E4371D471039041C3FC510B177A,
	DllImportsFromSharedLib_x86_grpcsharp_channel_watch_connectivity_state_mE3BDA134158CAB5D0400931C5ED204109FD16C6E,
	DllImportsFromSharedLib_x86_grpcsharp_channel_get_target_m802646B3039D5F22977FA1D201332C3AC7CED791,
	DllImportsFromSharedLib_x86_grpcsharp_channel_destroy_m261ECEE86966968CE0FCA3D3D7D7673CDA547FB1,
	DllImportsFromSharedLib_x86_grpcsharp_sizeof_grpc_event_m1BFECDD183BB969ADDAA747F712DB7F1ED236ED9,
	DllImportsFromSharedLib_x86_grpcsharp_completion_queue_create_async_m0F927290ACA5D7F2B43FCE929F34765ED4AABA9C,
	DllImportsFromSharedLib_x86_grpcsharp_completion_queue_create_sync_m7F2C93F4B5D07D07F54A17AD5A00C226C88B3FE0,
	DllImportsFromSharedLib_x86_grpcsharp_completion_queue_shutdown_mF971B9A843C8ECE51913BAF86971665924D0A8BF,
	DllImportsFromSharedLib_x86_grpcsharp_completion_queue_next_mD43A6E5CAB9FA8D1BCC6FFF7D8F920D0E3F71C0A,
	DllImportsFromSharedLib_x86_grpcsharp_completion_queue_pluck_m54306FDDFC7CD03B87662DAF643EDCC4DF2BECD9,
	DllImportsFromSharedLib_x86_grpcsharp_completion_queue_destroy_mD10B98610DE159478B2D4F912683E2DFC5E5B37E,
	DllImportsFromSharedLib_x86_gprsharp_free_mE45E42ECFB1A24F745C73E9BF94A9E3ACB6C2DC0,
	DllImportsFromSharedLib_x86_grpcsharp_metadata_array_create_m6BAADAED898D9FD56065AAA426850772964439D9,
	DllImportsFromSharedLib_x86_grpcsharp_metadata_array_add_m3F3351C83AEAAB147B213B09482380FC85AAA0E4,
	DllImportsFromSharedLib_x86_grpcsharp_metadata_array_count_m91D28176A0E256C23F7500D244535037F08579DB,
	DllImportsFromSharedLib_x86_grpcsharp_metadata_array_get_key_m522C31DE16E3EBF9EF6B45EC2C2C36835BA7EE52,
	DllImportsFromSharedLib_x86_grpcsharp_metadata_array_get_value_m741238D4C7944031B998E69FAC4A95E0DC04BD62,
	DllImportsFromSharedLib_x86_grpcsharp_metadata_array_destroy_full_m806B26CCED2DE2CD41F63A553EF4952065E02067,
	DllImportsFromSharedLib_x86_grpcsharp_redirect_log_m3888CE5E586E06E58C412861C34E38935E32B869,
	DllImportsFromSharedLib_x86_grpcsharp_native_callback_dispatcher_init_m772AD3D9FF477CF28C6F93425C9680A5E17FEA95,
	DllImportsFromSharedLib_x86_grpcsharp_metadata_credentials_create_from_plugin_mEB1A7A7940D8411AFA0A01412464D410AAAAFB48,
	DllImportsFromSharedLib_x86_grpcsharp_metadata_credentials_notify_from_plugin_mBEF67473529BBA68AF9AD42490BCA419CD0E4391,
	DllImportsFromSharedLib_x86_grpcsharp_ssl_server_credentials_create_mBF0830AABBD6A7DFF87F8F98BB3CA646131726BE,
	DllImportsFromSharedLib_x86_grpcsharp_server_credentials_release_mD823845E1A150CFEE9141A97F0A2A14782C1FB5C,
	DllImportsFromSharedLib_x86_grpcsharp_server_create_m7B2633069489A0A8776071A179BF850B0507C376,
	DllImportsFromSharedLib_x86_grpcsharp_server_register_completion_queue_m3F9F2BC46DD1C6A799EF0D5CC996B6F832D3509D,
	DllImportsFromSharedLib_x86_grpcsharp_server_add_insecure_http2_port_m77C7079D11E921C08DDFB7B158216BECD31F9607,
	DllImportsFromSharedLib_x86_grpcsharp_server_add_secure_http2_port_m84D0D78F5AC24917FCD98D89955434FCC533F42C,
	DllImportsFromSharedLib_x86_grpcsharp_server_start_mD4AF2AD6F649EA77E6935DDEF6CB51728C342EF2,
	DllImportsFromSharedLib_x86_grpcsharp_server_request_call_mCB2C0A87EDDCFEDF94D88E9611CF583142F7E256,
	DllImportsFromSharedLib_x86_grpcsharp_server_cancel_all_calls_mD463B9C72FFD584EA5E78EC512B6CC6633D9153A,
	DllImportsFromSharedLib_x86_grpcsharp_server_shutdown_and_notify_callback_m15F83C5E7C36380EBC52AB4DCCE67873FE4C1D88,
	DllImportsFromSharedLib_x86_grpcsharp_server_destroy_m1026A1A95282BB6375055FD244DC44A196305A27,
	DllImportsFromSharedLib_x86_grpcsharp_call_auth_context_m65A6A061A0967BC815322C51B007B616865DD42D,
	DllImportsFromSharedLib_x86_grpcsharp_auth_context_peer_identity_property_name_m39EB68DB6DE7DA4B8E871A10A8FE8C051BC82344,
	DllImportsFromSharedLib_x86_grpcsharp_auth_context_property_iterator_m124DE82BA86DECFBF4DE5B35EFBC2E9C18B1B65E,
	DllImportsFromSharedLib_x86_grpcsharp_auth_property_iterator_next_mA829E248B596B51B406AB47D4EDC2BBD6643B005,
	DllImportsFromSharedLib_x86_grpcsharp_auth_context_release_mB83D2174436871F604C08D47B793CB2575E987C3,
	DllImportsFromSharedLib_x86_grpcsharp_slice_buffer_create_m99A4E2CD70D3D6219D1FDC51A79A4B2AE2E8ECA1,
	DllImportsFromSharedLib_x86_grpcsharp_slice_buffer_adjust_tail_space_m98803ED893DD8079FE2B87F2D3CE5F9AB0CAE9F9,
	DllImportsFromSharedLib_x86_grpcsharp_slice_buffer_slice_count_m804164816F9BC2D47E0E5445C32318A9E4C4D142,
	DllImportsFromSharedLib_x86_grpcsharp_slice_buffer_slice_peek_m61A9FB813826C2450F786D551168BAB5CBF5AB43,
	DllImportsFromSharedLib_x86_grpcsharp_slice_buffer_reset_and_unref_m94DE6181C6BEF89CD7EFCC109D034CF3BE6975E4,
	DllImportsFromSharedLib_x86_grpcsharp_slice_buffer_destroy_mE24A9EA053FA79A36455B5285DF289F2E9B41748,
	DllImportsFromSharedLib_x86_gprsharp_now_m048C8C61D32723EAB22E6DA950225848B619C433,
	DllImportsFromSharedLib_x86_gprsharp_inf_future_mB5AD77411A1DC8BB1C28E20C6C2B279B0E5735A5,
	DllImportsFromSharedLib_x86_gprsharp_inf_past_m1597F2AAD20A77BD7E4B43B63D1AF28841CF18D1,
	DllImportsFromSharedLib_x86_gprsharp_convert_clock_type_m02CECECBB43C4CEE0DA311E581FF75CF406CE280,
	DllImportsFromSharedLib_x86_gprsharp_sizeof_timespec_m2B80763ECE5D572312E30EA84E8B15E4DEE71DFB,
	DllImportsFromSharedLib_x86_grpcsharp_test_callback_mF13128D33DCE75B71CF8400EBF5FF075A2AC853E,
	DllImportsFromSharedLib_x86_grpcsharp_test_nop_m5C39C177F8AA98E79278DC3A97F71B2C36B5573D,
	DllImportsFromSharedLib_x86_grpcsharp_test_override_method_mEB445A0B91C6552C374F59393C95757F87F15BC7,
	DllImportsFromSharedLib_x86_grpcsharp_test_call_start_unary_echo_m2D23CB35FAFA55BAFAF3957EDFF356141FFB0AD4,
	DllImportsFromSharedLib_x86__ctor_mE614CD06CC7E4D32A26C4BD7EB1AF3F582987995,
	DllImportsFromSharedLib_x64_grpcsharp_init_m5E2C8EE5721669FEFB4D83BABB7D28B2322A3C29,
	DllImportsFromSharedLib_x64_grpcsharp_shutdown_m1F37F7661EE3D2FCF6B501266AF1D8C3EC8E84C7,
	DllImportsFromSharedLib_x64_grpcsharp_version_string_m00B4E09413C2B55586E7A3EC6743F593169534FA,
	DllImportsFromSharedLib_x64_grpcsharp_batch_context_create_m6885784F811A3C0375612D1B683449029AB3BD76,
	DllImportsFromSharedLib_x64_grpcsharp_batch_context_recv_initial_metadata_m33BA904894785A6E6CB7D0006B39B50169E2E6B3,
	DllImportsFromSharedLib_x64_grpcsharp_batch_context_recv_message_length_mAFDC66A694F47B772B0D60BD95DADC0CF26B1670,
	DllImportsFromSharedLib_x64_grpcsharp_batch_context_recv_message_next_slice_peek_mE729854C2AE3D3702B4FB58C5D11E3E9E64F24C2,
	DllImportsFromSharedLib_x64_grpcsharp_batch_context_recv_status_on_client_status_mF9145EE5BBFD6E73FC90C46CC9B37D10FC979574,
	DllImportsFromSharedLib_x64_grpcsharp_batch_context_recv_status_on_client_details_m9B382B2B89D6F3609AE095C5B5414FDB59BC2CC8,
	DllImportsFromSharedLib_x64_grpcsharp_batch_context_recv_status_on_client_error_string_m0251777D0EF3C168F8D298E709404FE7844F1B3A,
	DllImportsFromSharedLib_x64_grpcsharp_batch_context_recv_status_on_client_trailing_metadata_m8823AEBF62CD139B0D9AE1BC1E91F055D6C6D670,
	DllImportsFromSharedLib_x64_grpcsharp_batch_context_recv_close_on_server_cancelled_m17466D14A7BBA2940C3944555911B27D1622F545,
	DllImportsFromSharedLib_x64_grpcsharp_batch_context_reset_mB0B2477D5569DF9B9BB015ADA3B782AF1853D408,
	DllImportsFromSharedLib_x64_grpcsharp_batch_context_destroy_m514C3050ADFEE02F9012882D82F1326B1958A270,
	DllImportsFromSharedLib_x64_grpcsharp_request_call_context_create_m4B91C61F6A0350AC0D46CB9E2D08EB919B418F73,
	DllImportsFromSharedLib_x64_grpcsharp_request_call_context_call_m5FCB629DCD9B5C7D25182A73D63A3854F5B8B68F,
	DllImportsFromSharedLib_x64_grpcsharp_request_call_context_method_m4A8DF683F02E61A41ED55BE9A292C0948E355691,
	DllImportsFromSharedLib_x64_grpcsharp_request_call_context_host_m275D987F55DF01BA9E990CA69321AA73C81CDA77,
	DllImportsFromSharedLib_x64_grpcsharp_request_call_context_deadline_m7E3059CC0D871C3C7DB4E5FC9D63552FFD422DDC,
	DllImportsFromSharedLib_x64_grpcsharp_request_call_context_request_metadata_m4528E620BD90FB5CC6ACA3A2EEA2517A9DCB1000,
	DllImportsFromSharedLib_x64_grpcsharp_request_call_context_reset_m667669E65D31234EC00ACEA0FD2C8951C9F00A2B,
	DllImportsFromSharedLib_x64_grpcsharp_request_call_context_destroy_mBA148F1E6D0ED7FC7CC70FA0FBC25869F5463421,
	DllImportsFromSharedLib_x64_grpcsharp_composite_call_credentials_create_m259CFF80E617C146C141C1BFAF2F62B9FD6D400E,
	DllImportsFromSharedLib_x64_grpcsharp_call_credentials_release_m5E8F0E6FBB38E0C17CA0FB1E8DB17235EC8FCF39,
	DllImportsFromSharedLib_x64_grpcsharp_call_cancel_mA436EE3D39ADB94D8CFAE71152402958104AF4D1,
	DllImportsFromSharedLib_x64_grpcsharp_call_cancel_with_status_m0D3FA87E6A1AB4E429F89C6C7B72B0906EC7E6B7,
	DllImportsFromSharedLib_x64_grpcsharp_call_start_unary_m76A3C456070BE89E4AB8974EF4245050D7B4EA5A,
	DllImportsFromSharedLib_x64_grpcsharp_call_start_client_streaming_m3CEF1E1B66161A672E9CA024CB5AF9308279D07B,
	DllImportsFromSharedLib_x64_grpcsharp_call_start_server_streaming_m4DB72900F2361F4D53B9CCC59796D00B8304A505,
	DllImportsFromSharedLib_x64_grpcsharp_call_start_duplex_streaming_m05BFD61B6E3E7926A782CFCCD3B58152C190B108,
	DllImportsFromSharedLib_x64_grpcsharp_call_send_message_m270F68533107E5652F392150977F26633696A0C4,
	DllImportsFromSharedLib_x64_grpcsharp_call_send_close_from_client_mB74938015A56A08A5E731C48211D1E8352AE198E,
	DllImportsFromSharedLib_x64_grpcsharp_call_send_status_from_server_m428762FB54E218265B38D73342E22BD8FCD90A96,
	DllImportsFromSharedLib_x64_grpcsharp_call_recv_message_m39999B201FCBAF1A0E39F414F08634CC5DFD69F3,
	DllImportsFromSharedLib_x64_grpcsharp_call_recv_initial_metadata_m5CE71CE3EEC34A1F41C9F1AE1C6EDE40C9A9AD81,
	DllImportsFromSharedLib_x64_grpcsharp_call_start_serverside_m66234D2C4D693B027BD33E8CC95B2AA66965FF93,
	DllImportsFromSharedLib_x64_grpcsharp_call_send_initial_metadata_m709701F4BC297A61D0E145A4D43D1912884292D0,
	DllImportsFromSharedLib_x64_grpcsharp_call_set_credentials_mFC5C987DE8CA2B2FB18DC95ABB5B86225FB21578,
	DllImportsFromSharedLib_x64_grpcsharp_call_get_peer_m5D2A7FA4870CDDCEF9F1046F2B83CBC00E9AF963,
	DllImportsFromSharedLib_x64_grpcsharp_call_destroy_m7ACC774D4DCD56E7980795D706B6BE1C003B14E1,
	DllImportsFromSharedLib_x64_grpcsharp_channel_args_create_m3AEC14AA944F13BDF0DB3146A44A0A7F2B05101B,
	DllImportsFromSharedLib_x64_grpcsharp_channel_args_set_string_mF0A5195C232D32C2E241FF361DC62ACB3C322EDC,
	DllImportsFromSharedLib_x64_grpcsharp_channel_args_set_integer_mA07A8F31308E7B2BE801D2BB80CC30C40DC5335F,
	DllImportsFromSharedLib_x64_grpcsharp_channel_args_destroy_mB932211CAADF50A57AE20BB9221105C8DFA71D71,
	DllImportsFromSharedLib_x64_grpcsharp_override_default_ssl_roots_m343C5F8200671F9AC7D18FDEB20B3EDBEDCB022D,
	DllImportsFromSharedLib_x64_grpcsharp_ssl_credentials_create_mE4FF0A541CD669F2673368044C17F3D1373E2919,
	DllImportsFromSharedLib_x64_grpcsharp_composite_channel_credentials_create_m7C33989353BDAC706D3180AEC5C6228350058011,
	DllImportsFromSharedLib_x64_grpcsharp_channel_credentials_release_mB8F04FE296D3435AED954A6E83F2883D4471199F,
	DllImportsFromSharedLib_x64_grpcsharp_insecure_channel_create_m747731D8F5BCF6204EE7CFD2332A18A01BBB6C53,
	DllImportsFromSharedLib_x64_grpcsharp_secure_channel_create_m9CBD3792904FFC7CF4B6E8F024602DB07D548B46,
	DllImportsFromSharedLib_x64_grpcsharp_channel_create_call_mD120B6DD21C259A4DEB41CE22786116B515D4AA7,
	DllImportsFromSharedLib_x64_grpcsharp_channel_check_connectivity_state_m866461D503CB5FC7D5B740E69C822FAEDCB21332,
	DllImportsFromSharedLib_x64_grpcsharp_channel_watch_connectivity_state_m145190F1E2AD72CB67AEB60F9C789CE966D2876F,
	DllImportsFromSharedLib_x64_grpcsharp_channel_get_target_mA0753DC6FD6BB81CE48B7FF3229E9AB74FAEEBC2,
	DllImportsFromSharedLib_x64_grpcsharp_channel_destroy_m9FCFCD087876EB18A91DB6ADE2AD4BB7083FADE1,
	DllImportsFromSharedLib_x64_grpcsharp_sizeof_grpc_event_m9B03682BD5ACFB20F559D53997945B7B050EAC88,
	DllImportsFromSharedLib_x64_grpcsharp_completion_queue_create_async_m25F0A6C33E7647532106057D099CE94A8CB29C86,
	DllImportsFromSharedLib_x64_grpcsharp_completion_queue_create_sync_m3BBD6F91E23BA10A5B80A41427F5DF5C17317D77,
	DllImportsFromSharedLib_x64_grpcsharp_completion_queue_shutdown_m6E38191CE9331CFB0674657D6A0F30C568E9B0EA,
	DllImportsFromSharedLib_x64_grpcsharp_completion_queue_next_m8F7E8AF259BDB2A6B6BABAB3A1D60D14844E8CD9,
	DllImportsFromSharedLib_x64_grpcsharp_completion_queue_pluck_m89EF2D5BC76D6DF429F3A40BB195A5A8961B9D6B,
	DllImportsFromSharedLib_x64_grpcsharp_completion_queue_destroy_m3777B8A215237006E0FA771289E66B2907E9BEC2,
	DllImportsFromSharedLib_x64_gprsharp_free_m031CAFAA6C2A8ABBF89436C151DA8CA3BE6A92E3,
	DllImportsFromSharedLib_x64_grpcsharp_metadata_array_create_m7BD4256944BF26DF88AB8F174B9F9124B84A078B,
	DllImportsFromSharedLib_x64_grpcsharp_metadata_array_add_mC925D7E8C3F82F70ED312D10868F8877F66C93E6,
	DllImportsFromSharedLib_x64_grpcsharp_metadata_array_count_mEE6C0B25DED2888CED0D0D67E383F7FFB94CFBA8,
	DllImportsFromSharedLib_x64_grpcsharp_metadata_array_get_key_m2D3A518F4932C51B8E3BCEDB5CF327F7FFBD39BB,
	DllImportsFromSharedLib_x64_grpcsharp_metadata_array_get_value_m0940EB4F30B0CA5F0549550A73F1CD6AB9D62C3D,
	DllImportsFromSharedLib_x64_grpcsharp_metadata_array_destroy_full_m85D282DF3BF838BFEDBF3DF656E066B8DC0768FB,
	DllImportsFromSharedLib_x64_grpcsharp_redirect_log_m2CAD08239C75135959C171C95BBC0916503EC817,
	DllImportsFromSharedLib_x64_grpcsharp_native_callback_dispatcher_init_mA01C89ECF1970425CF1EACE7107094148EFA2DF5,
	DllImportsFromSharedLib_x64_grpcsharp_metadata_credentials_create_from_plugin_mB34C4D9A94DD4486977E9B9A52A5395891346EEB,
	DllImportsFromSharedLib_x64_grpcsharp_metadata_credentials_notify_from_plugin_mD4850ED38C57652F1F920799DA639612C305E7AF,
	DllImportsFromSharedLib_x64_grpcsharp_ssl_server_credentials_create_mC470AB17BCAD79790FBD59A955328412EB6EEC90,
	DllImportsFromSharedLib_x64_grpcsharp_server_credentials_release_m9AA972B99942831974F68CE26A27931BB63E37A5,
	DllImportsFromSharedLib_x64_grpcsharp_server_create_mFD2E57771799F43D89BEFF4191FC22A68D653E12,
	DllImportsFromSharedLib_x64_grpcsharp_server_register_completion_queue_mF7C8BE9EF703CF1DF1604F3B0012F7CE58D4CEA4,
	DllImportsFromSharedLib_x64_grpcsharp_server_add_insecure_http2_port_mBB3D9AD60F4BA93C56B934D0F4363FD58FEBA860,
	DllImportsFromSharedLib_x64_grpcsharp_server_add_secure_http2_port_mFE1823D85F96401B8528654F222BF09B0AD646F2,
	DllImportsFromSharedLib_x64_grpcsharp_server_start_m2C9ABDF719873555513479EC34E30946B01485B8,
	DllImportsFromSharedLib_x64_grpcsharp_server_request_call_m48F25263866D954D533BB60BBE803EE683D6B02B,
	DllImportsFromSharedLib_x64_grpcsharp_server_cancel_all_calls_mC96F9B3B49BB5C5BDD041396E9ADE93791925CF5,
	DllImportsFromSharedLib_x64_grpcsharp_server_shutdown_and_notify_callback_m237B0D6AE2A6CE5297205963454AE9D0EE5F0826,
	DllImportsFromSharedLib_x64_grpcsharp_server_destroy_m31C807D918523EF282A76CEF93A26538AA40BEDC,
	DllImportsFromSharedLib_x64_grpcsharp_call_auth_context_mF05B76BE8199532436B7EFF742841427072CB916,
	DllImportsFromSharedLib_x64_grpcsharp_auth_context_peer_identity_property_name_m4739E815B0B3F63189ABDCA707885AC2B0FED014,
	DllImportsFromSharedLib_x64_grpcsharp_auth_context_property_iterator_m1A97528380FD36C86B289348FE745BB6479A5215,
	DllImportsFromSharedLib_x64_grpcsharp_auth_property_iterator_next_m04D16D3103864320143601DA9890ABD5EBC5C5DD,
	DllImportsFromSharedLib_x64_grpcsharp_auth_context_release_mA6338CAA2C3E159B441B06E50EB82C17FFC2517A,
	DllImportsFromSharedLib_x64_grpcsharp_slice_buffer_create_mECB5B1FA4FBE3A09F8B4059E3507324C7DCC5603,
	DllImportsFromSharedLib_x64_grpcsharp_slice_buffer_adjust_tail_space_m23B41C3716BBC575C5593792DD2556089035F51B,
	DllImportsFromSharedLib_x64_grpcsharp_slice_buffer_slice_count_m497F2C27F7CB822AA973B46685619C78BD58BD23,
	DllImportsFromSharedLib_x64_grpcsharp_slice_buffer_slice_peek_m919A24F61402218B42D2BF9AE51AA34F34E4B200,
	DllImportsFromSharedLib_x64_grpcsharp_slice_buffer_reset_and_unref_mDFC479FCEF0042E790D576A1F7D44DCFF908DB0B,
	DllImportsFromSharedLib_x64_grpcsharp_slice_buffer_destroy_mBB50A38462EB5FF6A12120FD06E888A7C830972C,
	DllImportsFromSharedLib_x64_gprsharp_now_mF75FE458A9F9E83B51E42C0F21A8924F61559F8E,
	DllImportsFromSharedLib_x64_gprsharp_inf_future_m4246D26C4A89FC2F2665ECCDED04EFE2C3E767FD,
	DllImportsFromSharedLib_x64_gprsharp_inf_past_m15104943B9E3B7B5C8BA64F84A2AFC48D6CB9629,
	DllImportsFromSharedLib_x64_gprsharp_convert_clock_type_mD533678141E9073646013B9E67DC5029A7AE885B,
	DllImportsFromSharedLib_x64_gprsharp_sizeof_timespec_mB614EE8B626A22DF116CD90326BFEC59E245ABC5,
	DllImportsFromSharedLib_x64_grpcsharp_test_callback_mD5248CB472C369935D858BD72EBEF7560FADFE2A,
	DllImportsFromSharedLib_x64_grpcsharp_test_nop_m3C526DD621ABD56FF9749AE02447285C5207FD00,
	DllImportsFromSharedLib_x64_grpcsharp_test_override_method_mDDFFDCA53462023EFC127B4FAF02B88A0EA0B114,
	DllImportsFromSharedLib_x64_grpcsharp_test_call_start_unary_echo_mEA0C8DEF6EA19570DE7CF03A492DE32FBD62B954,
	DllImportsFromSharedLib_x64__ctor_m74A4FFFABE72E246C5679A8E96C5CE0C0D5DD567,
	DllImportsFromSharedLib_x86_dll_grpcsharp_init_mB3C5062607D8629C78B5A86F3012B512BACB3AC2,
	DllImportsFromSharedLib_x86_dll_grpcsharp_shutdown_mEACF4A2C7539DD993FD5508AA16636E2806AAA58,
	DllImportsFromSharedLib_x86_dll_grpcsharp_version_string_m3B69465095479460E08CCDAF4EC090AAAF0AD0D7,
	DllImportsFromSharedLib_x86_dll_grpcsharp_batch_context_create_mCD75B22C640E53D8E6C59139712B2E509FC0D8B6,
	DllImportsFromSharedLib_x86_dll_grpcsharp_batch_context_recv_initial_metadata_m17877BE2E523F39FDA642213DB855CC475CF36D8,
	DllImportsFromSharedLib_x86_dll_grpcsharp_batch_context_recv_message_length_m8BA18CACC6224E5E95F7CB81CF66DCD3D1AF0613,
	DllImportsFromSharedLib_x86_dll_grpcsharp_batch_context_recv_message_next_slice_peek_m182057F288BB90A471563BBBE2965D0827821262,
	DllImportsFromSharedLib_x86_dll_grpcsharp_batch_context_recv_status_on_client_status_m66BB0A375C6E1ADDA885397E63C3BC6F5E03E853,
	DllImportsFromSharedLib_x86_dll_grpcsharp_batch_context_recv_status_on_client_details_m8F0941C9FF35D2069211E0973F2946BDB4FEA407,
	DllImportsFromSharedLib_x86_dll_grpcsharp_batch_context_recv_status_on_client_error_string_m425141F8AE3B806400E4D83B94198F655C7515F9,
	DllImportsFromSharedLib_x86_dll_grpcsharp_batch_context_recv_status_on_client_trailing_metadata_m4C4B1A46FF115787F85F4B1DDE58E3EAE2605D19,
	DllImportsFromSharedLib_x86_dll_grpcsharp_batch_context_recv_close_on_server_cancelled_m44E3CDC93A457FDA3CC8652827D831F3C0FE22A7,
	DllImportsFromSharedLib_x86_dll_grpcsharp_batch_context_reset_mDBBD99A5B62F7000F5F0C0F9AF31CBA13480853B,
	DllImportsFromSharedLib_x86_dll_grpcsharp_batch_context_destroy_mDA98DD2D2DDA926BBAA65B6D573087BA378D310D,
	DllImportsFromSharedLib_x86_dll_grpcsharp_request_call_context_create_m37750FF5042A0A49BC62D4033D96194CAA34D53E,
	DllImportsFromSharedLib_x86_dll_grpcsharp_request_call_context_call_m67A7C4385F7AAB7C5DF00296831A33D50B2E6E1A,
	DllImportsFromSharedLib_x86_dll_grpcsharp_request_call_context_method_mA188BD64C246BF73EF5C4D780B958AC3CB1A8F53,
	DllImportsFromSharedLib_x86_dll_grpcsharp_request_call_context_host_m2E7596698B3C555935BEE50AD0215CAC7857E9C5,
	DllImportsFromSharedLib_x86_dll_grpcsharp_request_call_context_deadline_mC59C9279EF2101AEFC54B27D98E5C81F87922C3F,
	DllImportsFromSharedLib_x86_dll_grpcsharp_request_call_context_request_metadata_m124CE90F62E34C3B1187713436B9021AEDD1A949,
	DllImportsFromSharedLib_x86_dll_grpcsharp_request_call_context_reset_m1D267AD59CEE35082E256DE3DBE03BA3C2597A11,
	DllImportsFromSharedLib_x86_dll_grpcsharp_request_call_context_destroy_m35BA751649F4D52C19DF2E0DB3110D73287EB479,
	DllImportsFromSharedLib_x86_dll_grpcsharp_composite_call_credentials_create_m4266DA1B32730254B2D7071E89BD98AA5AD62E0C,
	DllImportsFromSharedLib_x86_dll_grpcsharp_call_credentials_release_m30E33999A470A0DCCCF98402C518D77173365B75,
	DllImportsFromSharedLib_x86_dll_grpcsharp_call_cancel_m9E26A58A1CB7CF4947D87BC13393AD1AC0990A27,
	DllImportsFromSharedLib_x86_dll_grpcsharp_call_cancel_with_status_m2415706490EC996F3AD1E511BFE4F5678ED65574,
	DllImportsFromSharedLib_x86_dll_grpcsharp_call_start_unary_mC202F7C23F9FD846262175A305F3CED220754905,
	DllImportsFromSharedLib_x86_dll_grpcsharp_call_start_client_streaming_m3B85DCCFE09C7D2F417E0844E65186EF6BF2CE38,
	DllImportsFromSharedLib_x86_dll_grpcsharp_call_start_server_streaming_mFFB5CD838448F179F9CEE50F072F5B797C5AF16B,
	DllImportsFromSharedLib_x86_dll_grpcsharp_call_start_duplex_streaming_mEA469B832FB3E8B9269700F0EC8FEB238A7972CB,
	DllImportsFromSharedLib_x86_dll_grpcsharp_call_send_message_m4725F1F4ACB91032770211790C447963B65CD32C,
	DllImportsFromSharedLib_x86_dll_grpcsharp_call_send_close_from_client_m21CEFEB96E3B9ECD9B17AAD5365D56CADB5C3572,
	DllImportsFromSharedLib_x86_dll_grpcsharp_call_send_status_from_server_mAC1FCBC545CF99476B57910791708DD3D15AEF15,
	DllImportsFromSharedLib_x86_dll_grpcsharp_call_recv_message_m5C2486FA01E1F0604A09D7659CE545A8E8144AE5,
	DllImportsFromSharedLib_x86_dll_grpcsharp_call_recv_initial_metadata_mA7746856278233A9755DFBC001815CB24D17A9D2,
	DllImportsFromSharedLib_x86_dll_grpcsharp_call_start_serverside_m620C4CB9FE7D2FFF28E41073FB122C5D70B9CF5D,
	DllImportsFromSharedLib_x86_dll_grpcsharp_call_send_initial_metadata_mCE4B175E121B9360EA8F7979A4558CFDA368AFBB,
	DllImportsFromSharedLib_x86_dll_grpcsharp_call_set_credentials_m23215D5495C59777E0F9F1BAEE43DB5366828F37,
	DllImportsFromSharedLib_x86_dll_grpcsharp_call_get_peer_m11DE1A06DF6AE2DD4FA2D42EE6AABB26F2CE7BE2,
	DllImportsFromSharedLib_x86_dll_grpcsharp_call_destroy_mCED8FE6D0E532A586EF12C4CCC7D91A66E0CA72A,
	DllImportsFromSharedLib_x86_dll_grpcsharp_channel_args_create_mEB9070B1EA734A7E5637152303ECBC820FFF737B,
	DllImportsFromSharedLib_x86_dll_grpcsharp_channel_args_set_string_mE93C2643665F5F9B15202AD1F792F79B56508D1A,
	DllImportsFromSharedLib_x86_dll_grpcsharp_channel_args_set_integer_mE8543F4BD137F879B4304804E576D554460F4B2E,
	DllImportsFromSharedLib_x86_dll_grpcsharp_channel_args_destroy_m3D309BB9D14937FD08E044F5F4BD25C7DF03F0F7,
	DllImportsFromSharedLib_x86_dll_grpcsharp_override_default_ssl_roots_mF060799C4E25ADECC3156681DE4B4A069A18776A,
	DllImportsFromSharedLib_x86_dll_grpcsharp_ssl_credentials_create_mEF4355C0DFB436084ACBB22F655E419B3E146BAF,
	DllImportsFromSharedLib_x86_dll_grpcsharp_composite_channel_credentials_create_mA7CF0D897887AC33F97AA455C76C9F83A964EC5D,
	DllImportsFromSharedLib_x86_dll_grpcsharp_channel_credentials_release_mDBBE4DAD5BFA8929CE5342192FB19A8DF72D00D4,
	DllImportsFromSharedLib_x86_dll_grpcsharp_insecure_channel_create_m9A69F45C2B2913D3F2F61B99D379B006CF173850,
	DllImportsFromSharedLib_x86_dll_grpcsharp_secure_channel_create_m1015BD64833075C45E0F0058BA273D410AD829D1,
	DllImportsFromSharedLib_x86_dll_grpcsharp_channel_create_call_mE29CD95DDD4F160832275DB4E532C2FC16554A7F,
	DllImportsFromSharedLib_x86_dll_grpcsharp_channel_check_connectivity_state_mD6AC8AE88BE32FAF71D5F13BB5B535938C1D8C04,
	DllImportsFromSharedLib_x86_dll_grpcsharp_channel_watch_connectivity_state_m78D72A1161BF6DB0EF499F8411662986822E15B3,
	DllImportsFromSharedLib_x86_dll_grpcsharp_channel_get_target_m2D288C062D0085011D14976E9D2321A45C8D5765,
	DllImportsFromSharedLib_x86_dll_grpcsharp_channel_destroy_m3BF2585258309003CE2B6EF09837A05267AEF132,
	DllImportsFromSharedLib_x86_dll_grpcsharp_sizeof_grpc_event_m1D8D00328B80358AE709DC06A65BF08E04B97BD2,
	DllImportsFromSharedLib_x86_dll_grpcsharp_completion_queue_create_async_m3DD9A746900191580240E73BD94D1DECBB258924,
	DllImportsFromSharedLib_x86_dll_grpcsharp_completion_queue_create_sync_m41C4FC2D793639F1255DFDD11EAF89B75E5B9020,
	DllImportsFromSharedLib_x86_dll_grpcsharp_completion_queue_shutdown_m0B64F5B5C335D6E4F354AC65A0733A25990F6C67,
	DllImportsFromSharedLib_x86_dll_grpcsharp_completion_queue_next_m4D8FEC8D550BB32DEE7445FA971C54DAE605ABC3,
	DllImportsFromSharedLib_x86_dll_grpcsharp_completion_queue_pluck_m6A0D96A3132959EA326A244CEC850CCF231D6F63,
	DllImportsFromSharedLib_x86_dll_grpcsharp_completion_queue_destroy_mB49F75E5DD525185AD2906EAA26091046B473900,
	DllImportsFromSharedLib_x86_dll_gprsharp_free_m544D3B4DEDBD1E3A963C75D879C0881DFBC285C5,
	DllImportsFromSharedLib_x86_dll_grpcsharp_metadata_array_create_mDE249DA3852A15F2BECD118457BE94328F67069C,
	DllImportsFromSharedLib_x86_dll_grpcsharp_metadata_array_add_m399EEB4A15B063B431DCD60FAA061113772353BB,
	DllImportsFromSharedLib_x86_dll_grpcsharp_metadata_array_count_m5FA151D05B93CE58992571C34F8058344D3A29FA,
	DllImportsFromSharedLib_x86_dll_grpcsharp_metadata_array_get_key_mAD9DE39151BB4705902D83CA9036467993527410,
	DllImportsFromSharedLib_x86_dll_grpcsharp_metadata_array_get_value_m7048DE3C3590A3089BE097874EE59B485FE8B694,
	DllImportsFromSharedLib_x86_dll_grpcsharp_metadata_array_destroy_full_mD6B3BC372A90E461850D81E8CE4D6A5961E8CA2E,
	DllImportsFromSharedLib_x86_dll_grpcsharp_redirect_log_m857A27B1F30368E3B52BD408906FD762C0808FBE,
	DllImportsFromSharedLib_x86_dll_grpcsharp_native_callback_dispatcher_init_m9AE7CB62C48DFF661FCB8278161891D7B7D3B3FF,
	DllImportsFromSharedLib_x86_dll_grpcsharp_metadata_credentials_create_from_plugin_mEE56E06A76A6396D1870D390019A07033E0C8719,
	DllImportsFromSharedLib_x86_dll_grpcsharp_metadata_credentials_notify_from_plugin_m01070B02EFE490C378FA1EF8B66E8948272F7520,
	DllImportsFromSharedLib_x86_dll_grpcsharp_ssl_server_credentials_create_m106435A8497A2F1EC8363583BF10C5120CAA54F4,
	DllImportsFromSharedLib_x86_dll_grpcsharp_server_credentials_release_mB40656F49A173D8F7C123C5C6564B9389B34E5D2,
	DllImportsFromSharedLib_x86_dll_grpcsharp_server_create_m79F5B516BB13BEE1D1A55468B1763144051F9CF5,
	DllImportsFromSharedLib_x86_dll_grpcsharp_server_register_completion_queue_m0F98681B96F46D82DBBD94A42A25D38F2EB00FB9,
	DllImportsFromSharedLib_x86_dll_grpcsharp_server_add_insecure_http2_port_mE8EE94713CF3DB873EE9F1587140CF687E6FCF5E,
	DllImportsFromSharedLib_x86_dll_grpcsharp_server_add_secure_http2_port_mA5DA9B5861B6009D899A44EE13D0BCE2BA1010AC,
	DllImportsFromSharedLib_x86_dll_grpcsharp_server_start_m2DAC8609EB224CB1BEC5D6AD1E7995FE0059877E,
	DllImportsFromSharedLib_x86_dll_grpcsharp_server_request_call_m676A96C6B7F082A143A7A47A9CCF0651F3B71171,
	DllImportsFromSharedLib_x86_dll_grpcsharp_server_cancel_all_calls_mCC138621CDCCD85043B6C75A6E106AD94C5682F9,
	DllImportsFromSharedLib_x86_dll_grpcsharp_server_shutdown_and_notify_callback_m16CF72D3D6015C8D78ACF46D8A6EE749968B103B,
	DllImportsFromSharedLib_x86_dll_grpcsharp_server_destroy_m995D942D0EFE0AE94FA6BE45988891237BFB3BB2,
	DllImportsFromSharedLib_x86_dll_grpcsharp_call_auth_context_mCB7183D98DB8A18F9661BA4859DA72231B534A10,
	DllImportsFromSharedLib_x86_dll_grpcsharp_auth_context_peer_identity_property_name_m4CEFD0F568D68EF2030EE092C7217F513C9F5521,
	DllImportsFromSharedLib_x86_dll_grpcsharp_auth_context_property_iterator_mDD4F4116BE6428920E7CFC50D49AD4EE7CD58655,
	DllImportsFromSharedLib_x86_dll_grpcsharp_auth_property_iterator_next_mC9E6B8FC30E2640F227D8E53444AA4F5BCAE387F,
	DllImportsFromSharedLib_x86_dll_grpcsharp_auth_context_release_m18D4863D9748D4DF7F1CD8BEBA16BC731E174859,
	DllImportsFromSharedLib_x86_dll_grpcsharp_slice_buffer_create_m407AEC34A9C105841FA27773B1D7357817E32DED,
	DllImportsFromSharedLib_x86_dll_grpcsharp_slice_buffer_adjust_tail_space_m0695840DE65C15375F953478B0173256EF3C8739,
	DllImportsFromSharedLib_x86_dll_grpcsharp_slice_buffer_slice_count_mCAABAB54CE7E87E4A84FA8DC5B20C9BF4D6B47E4,
	DllImportsFromSharedLib_x86_dll_grpcsharp_slice_buffer_slice_peek_m4FBC5814D53F4E1AFFB0371658D60AB1836C5FDF,
	DllImportsFromSharedLib_x86_dll_grpcsharp_slice_buffer_reset_and_unref_m70A0A94B3DA0544009C286ACEC4D71AF9E750BA8,
	DllImportsFromSharedLib_x86_dll_grpcsharp_slice_buffer_destroy_mF16EE8E8537C52429E3A1390282A1A542E33B529,
	DllImportsFromSharedLib_x86_dll_gprsharp_now_m79084723B1AC9B9885728E9B1364E21212B99684,
	DllImportsFromSharedLib_x86_dll_gprsharp_inf_future_m2E612F3623799590A2CC4DEC0436EE9E9AFD566A,
	DllImportsFromSharedLib_x86_dll_gprsharp_inf_past_m687DE9D18CBD00D370B7368DBBFF6E94327F97A6,
	DllImportsFromSharedLib_x86_dll_gprsharp_convert_clock_type_mA5AD9F94536EFE7BEB622662A8BE679BDD4F37BA,
	DllImportsFromSharedLib_x86_dll_gprsharp_sizeof_timespec_mB0295D2BED0FB20EEBF0904332DC7220696302F2,
	DllImportsFromSharedLib_x86_dll_grpcsharp_test_callback_m3ED7D6364A14B82275666CA42D064FF82B2A9A7E,
	DllImportsFromSharedLib_x86_dll_grpcsharp_test_nop_mF423A0C0B3FC727622B6A837F85146AA49C4756E,
	DllImportsFromSharedLib_x86_dll_grpcsharp_test_override_method_m2F34F5A67F08862841BC4522592AA8A2985149B0,
	DllImportsFromSharedLib_x86_dll_grpcsharp_test_call_start_unary_echo_m59F2F21D8D3D40005185F21AA1674E5B4FC7E63D,
	DllImportsFromSharedLib_x86_dll__ctor_m72FA29799C84E5A93FDC3455AC1441594C397823,
	DllImportsFromSharedLib_x64_dll_grpcsharp_init_mD824CA00A4967EA1E54636E77D954158818675D0,
	DllImportsFromSharedLib_x64_dll_grpcsharp_shutdown_m08B9038DB8C2B144833C1288A0CA91287E18F3BA,
	DllImportsFromSharedLib_x64_dll_grpcsharp_version_string_mFA2D1E717390E3B25943F81D6EF77647C3A1113D,
	DllImportsFromSharedLib_x64_dll_grpcsharp_batch_context_create_m391BD40E96DEF50EC957870ACA0D130D4D8B6855,
	DllImportsFromSharedLib_x64_dll_grpcsharp_batch_context_recv_initial_metadata_mC3361CD4975DFA06C0662D6E391040F2635C030C,
	DllImportsFromSharedLib_x64_dll_grpcsharp_batch_context_recv_message_length_mD5F85292A7C6E26DCF04ACF161B72FD853692E43,
	DllImportsFromSharedLib_x64_dll_grpcsharp_batch_context_recv_message_next_slice_peek_mC970FAF24EAC6BC1A4D95CF02F19C61263F790B8,
	DllImportsFromSharedLib_x64_dll_grpcsharp_batch_context_recv_status_on_client_status_mA2F0AC86238B970911CE04D530CAE0DE790ABE80,
	DllImportsFromSharedLib_x64_dll_grpcsharp_batch_context_recv_status_on_client_details_mED70B60AA86815AC9099C7B29F6A42A4F4B677A9,
	DllImportsFromSharedLib_x64_dll_grpcsharp_batch_context_recv_status_on_client_error_string_m33657D8295A17F0A6C01E3551AA2DE2308CD2E75,
	DllImportsFromSharedLib_x64_dll_grpcsharp_batch_context_recv_status_on_client_trailing_metadata_mE16238E07696D895659EEE05286620AAF994663B,
	DllImportsFromSharedLib_x64_dll_grpcsharp_batch_context_recv_close_on_server_cancelled_m607C6C50135001BA219910C3244C72A343AC6196,
	DllImportsFromSharedLib_x64_dll_grpcsharp_batch_context_reset_mB61A2427278D6BC5ED9B665281DF5E3848AD231A,
	DllImportsFromSharedLib_x64_dll_grpcsharp_batch_context_destroy_m4A811F920FB5EE4B34B426D16684D7743F9B134C,
	DllImportsFromSharedLib_x64_dll_grpcsharp_request_call_context_create_mC1435C198EC6CEAD577A6D4E4B09054807875F8D,
	DllImportsFromSharedLib_x64_dll_grpcsharp_request_call_context_call_m71056708D4E67F5B85AFF808B832B33F36ADB49F,
	DllImportsFromSharedLib_x64_dll_grpcsharp_request_call_context_method_m8B2495E394674CF7FADA33C3056F12737654DAEB,
	DllImportsFromSharedLib_x64_dll_grpcsharp_request_call_context_host_m09233AAA03E5A7F86628DB9A9A9CA0CD002AD2D6,
	DllImportsFromSharedLib_x64_dll_grpcsharp_request_call_context_deadline_mE89F5AD7B071D6D58BBA005AEE3F77EB1D97681E,
	DllImportsFromSharedLib_x64_dll_grpcsharp_request_call_context_request_metadata_m96062AB26374A444204A2EAED1DE2AF0A5F644D7,
	DllImportsFromSharedLib_x64_dll_grpcsharp_request_call_context_reset_m0606C151FE1D1F2136169FE1247F1F7DF4D0A85C,
	DllImportsFromSharedLib_x64_dll_grpcsharp_request_call_context_destroy_m1D8C9A76E5725BA836ECC9B1AC5A175042AE031B,
	DllImportsFromSharedLib_x64_dll_grpcsharp_composite_call_credentials_create_m6CDF74BCE3D9369406E18B45EE99DE887CD6ED3C,
	DllImportsFromSharedLib_x64_dll_grpcsharp_call_credentials_release_mF8610C4B343AF7CEED94D6B66E60F6630ED82EF7,
	DllImportsFromSharedLib_x64_dll_grpcsharp_call_cancel_mC00C4607EA73DAFAC4D91070D08CE81F278CED8D,
	DllImportsFromSharedLib_x64_dll_grpcsharp_call_cancel_with_status_mF3C3431E787E2591B4451871E23CB38FA78A64AB,
	DllImportsFromSharedLib_x64_dll_grpcsharp_call_start_unary_mE4E235601E124F494B28F19FA07B9DE20D1EAC49,
	DllImportsFromSharedLib_x64_dll_grpcsharp_call_start_client_streaming_mA6B58F6D69E157C1DA554DB9EDBB2605AACD7AF2,
	DllImportsFromSharedLib_x64_dll_grpcsharp_call_start_server_streaming_mFE60CBA3F56F498313D754D459F3C7DF7EB5E755,
	DllImportsFromSharedLib_x64_dll_grpcsharp_call_start_duplex_streaming_m16DADEB5D24EAAC4A2BFA3B5D753B4B61E27FDCB,
	DllImportsFromSharedLib_x64_dll_grpcsharp_call_send_message_mEA31497A96FEFAD93B9897E91954FE1AA35F9F7A,
	DllImportsFromSharedLib_x64_dll_grpcsharp_call_send_close_from_client_mF22176CAED457679BFD075F5F98EC65C1F7D5FEA,
	DllImportsFromSharedLib_x64_dll_grpcsharp_call_send_status_from_server_m2C998C67024D847F5134D0AF7B35B3A457737DCF,
	DllImportsFromSharedLib_x64_dll_grpcsharp_call_recv_message_m72224E5F326BE904EF5367329F2332A66974D694,
	DllImportsFromSharedLib_x64_dll_grpcsharp_call_recv_initial_metadata_m0DB4EB1BA9B8E8F0683DB2BD92E2AC5D3B419DF2,
	DllImportsFromSharedLib_x64_dll_grpcsharp_call_start_serverside_m148878F4325A675CD76F920593E1F30DC3AB7315,
	DllImportsFromSharedLib_x64_dll_grpcsharp_call_send_initial_metadata_mA8D3D97AF27C6E668C6440B0738BC06DED0B930C,
	DllImportsFromSharedLib_x64_dll_grpcsharp_call_set_credentials_m5DD7479CCB981E303609D44ABEFEC39BA6A7D1D9,
	DllImportsFromSharedLib_x64_dll_grpcsharp_call_get_peer_mFD66F04B6CA9D047C873AFBAE4CA88B460B4D0CD,
	DllImportsFromSharedLib_x64_dll_grpcsharp_call_destroy_m1D6AF57D3294151BB4A06CDCD92D4D13BC571599,
	DllImportsFromSharedLib_x64_dll_grpcsharp_channel_args_create_mC8D2857523FF42F71D3B2C2BE00B85B1AB13A345,
	DllImportsFromSharedLib_x64_dll_grpcsharp_channel_args_set_string_mCACE3CD33A67335C7B849A05AA29DE12613FC1A7,
	DllImportsFromSharedLib_x64_dll_grpcsharp_channel_args_set_integer_m1F29CB73213BCF7FA7CCB2739E0312ED720F7B87,
	DllImportsFromSharedLib_x64_dll_grpcsharp_channel_args_destroy_m32A5836DE7391E0196A65192AF9EE0C32AF16837,
	DllImportsFromSharedLib_x64_dll_grpcsharp_override_default_ssl_roots_mDE8DBF2A33F982DBB4321D84CF62734A1148F761,
	DllImportsFromSharedLib_x64_dll_grpcsharp_ssl_credentials_create_mB05005AB67B39EC1AC9651E9846C6C7E7C26C549,
	DllImportsFromSharedLib_x64_dll_grpcsharp_composite_channel_credentials_create_mFDDCD4858D97138431F377044FEB91FFBD318426,
	DllImportsFromSharedLib_x64_dll_grpcsharp_channel_credentials_release_m0939F262AE4EF019D6024878F2C82029C7999A50,
	DllImportsFromSharedLib_x64_dll_grpcsharp_insecure_channel_create_mF1C2EBB3F4B66CEB4C3051ACBFE5254C7A028279,
	DllImportsFromSharedLib_x64_dll_grpcsharp_secure_channel_create_m03AAFE2A7E8F5B61D96E6874BB20AF91C41B5609,
	DllImportsFromSharedLib_x64_dll_grpcsharp_channel_create_call_mF1ED3FF3675CF5D44160E09DE461A0B88F233E6F,
	DllImportsFromSharedLib_x64_dll_grpcsharp_channel_check_connectivity_state_m194892817B9E212496787F66CCB2A42D2034C920,
	DllImportsFromSharedLib_x64_dll_grpcsharp_channel_watch_connectivity_state_m0512F4D0E476400E5EEF77B39DB8A1DCEAC62801,
	DllImportsFromSharedLib_x64_dll_grpcsharp_channel_get_target_m61F143F0AB7BAFC967B70DCEE756006C0E4FD4F1,
	DllImportsFromSharedLib_x64_dll_grpcsharp_channel_destroy_mD4350EDD4DBF68F16F75BB61714084FCA64E15B5,
	DllImportsFromSharedLib_x64_dll_grpcsharp_sizeof_grpc_event_m858822781FAD40C542E81CF589D9337526DB5F72,
	DllImportsFromSharedLib_x64_dll_grpcsharp_completion_queue_create_async_m288C72F3BED2CA8F6070B2E3C3D8BD490A838CE2,
	DllImportsFromSharedLib_x64_dll_grpcsharp_completion_queue_create_sync_m819F760DEF71FD60C04B4DA5EEC9A542479EC307,
	DllImportsFromSharedLib_x64_dll_grpcsharp_completion_queue_shutdown_m64C662BCC2005F32B653881852600ED10696C6F0,
	DllImportsFromSharedLib_x64_dll_grpcsharp_completion_queue_next_mC794BCC636FE73C8D9C398E1848CE18773EC9555,
	DllImportsFromSharedLib_x64_dll_grpcsharp_completion_queue_pluck_m5B440AA0B60762DB71FF37F5D43EE24B825C4555,
	DllImportsFromSharedLib_x64_dll_grpcsharp_completion_queue_destroy_m495DFC2389C15D7CB4777CB5B31A0D821D9DA99F,
	DllImportsFromSharedLib_x64_dll_gprsharp_free_mE463C65467FA783FABDCAD6D846231056FB01121,
	DllImportsFromSharedLib_x64_dll_grpcsharp_metadata_array_create_mE3617DECB6EDDC94E74B55FBC597296B0CFD74EC,
	DllImportsFromSharedLib_x64_dll_grpcsharp_metadata_array_add_m345E1E4C909AF7CA9B59858DF8D197B855E84FA6,
	DllImportsFromSharedLib_x64_dll_grpcsharp_metadata_array_count_mD420C165D2563E65FAFE17C43F3D76E7EE6E6DC8,
	DllImportsFromSharedLib_x64_dll_grpcsharp_metadata_array_get_key_mAD75B1E45985D997C30994A9B3A3377B77B6BA50,
	DllImportsFromSharedLib_x64_dll_grpcsharp_metadata_array_get_value_m0567A857E25A2EEC8DFC0A810BA2BE81A5F2292F,
	DllImportsFromSharedLib_x64_dll_grpcsharp_metadata_array_destroy_full_m83C0B2360ABE1B6AE3AE8591290B507F8ED24ECC,
	DllImportsFromSharedLib_x64_dll_grpcsharp_redirect_log_m6E4231B03BB2EB7C38BD095FE50A472F3DE62004,
	DllImportsFromSharedLib_x64_dll_grpcsharp_native_callback_dispatcher_init_mC0EFE516050B14D11A8D263E6C9F2B5A83A0F8EC,
	DllImportsFromSharedLib_x64_dll_grpcsharp_metadata_credentials_create_from_plugin_m6D18C0A7E545DCB7D5319E351DD89719C2A37CEB,
	DllImportsFromSharedLib_x64_dll_grpcsharp_metadata_credentials_notify_from_plugin_m4AE87DFDA26F5296422A6904B92D0840893C0652,
	DllImportsFromSharedLib_x64_dll_grpcsharp_ssl_server_credentials_create_m4C461D961CDB6177ECF9DC846A5E7AC62FD257DE,
	DllImportsFromSharedLib_x64_dll_grpcsharp_server_credentials_release_m6D05C584E8C696C0BBBC5077A3FFFE72E960EDDF,
	DllImportsFromSharedLib_x64_dll_grpcsharp_server_create_m1B7BFD8130998B090FCED3B3DFF0835E0A633B56,
	DllImportsFromSharedLib_x64_dll_grpcsharp_server_register_completion_queue_m51522488FDCC1DAD8F7FD3A3667BC5AE302FF390,
	DllImportsFromSharedLib_x64_dll_grpcsharp_server_add_insecure_http2_port_m16027AF33B04DB5D99B5D37AAEAF35B756422B24,
	DllImportsFromSharedLib_x64_dll_grpcsharp_server_add_secure_http2_port_m7F559716D086BD526EA3514065CDBDF3567730CE,
	DllImportsFromSharedLib_x64_dll_grpcsharp_server_start_m69670C59DDBF870D7E5D57F6D9C2918D9922B0D9,
	DllImportsFromSharedLib_x64_dll_grpcsharp_server_request_call_mB66A04A4CFAFCDA1B9C730C41B34F2EEC5B3F80E,
	DllImportsFromSharedLib_x64_dll_grpcsharp_server_cancel_all_calls_m73C51B84695559E2E50CFBEC09DCB1FED1FAD1FE,
	DllImportsFromSharedLib_x64_dll_grpcsharp_server_shutdown_and_notify_callback_mD250F0D213C80FE778DEF99C8B527A0492462803,
	DllImportsFromSharedLib_x64_dll_grpcsharp_server_destroy_mC2290F4DAEE0E27826614E8DEAFADA19F9C1D15E,
	DllImportsFromSharedLib_x64_dll_grpcsharp_call_auth_context_mB1BDE20600D0E414F477104A1A0EB0891A4B074C,
	DllImportsFromSharedLib_x64_dll_grpcsharp_auth_context_peer_identity_property_name_m14922D7D1CE5CD0CBA9764146B0CF91E864FCE15,
	DllImportsFromSharedLib_x64_dll_grpcsharp_auth_context_property_iterator_mCB5A4C30339DA2D35FAE4A19E007274029561471,
	DllImportsFromSharedLib_x64_dll_grpcsharp_auth_property_iterator_next_mCB57AD80C2884D8ED1913DE0130499AE8754133C,
	DllImportsFromSharedLib_x64_dll_grpcsharp_auth_context_release_mD03D9DA59524148D38F3CBE8C3C19FA9949A8761,
	DllImportsFromSharedLib_x64_dll_grpcsharp_slice_buffer_create_mC4759656AD456787F9D8101952A2E3C3F757CCD9,
	DllImportsFromSharedLib_x64_dll_grpcsharp_slice_buffer_adjust_tail_space_m13E0CE58D96615C780C0C7C8C24431998F29285C,
	DllImportsFromSharedLib_x64_dll_grpcsharp_slice_buffer_slice_count_m010033E039450C10683EB8CFC446B2FC3544C227,
	DllImportsFromSharedLib_x64_dll_grpcsharp_slice_buffer_slice_peek_m77583BA92200E0E943832147A9AF81C4F774D10C,
	DllImportsFromSharedLib_x64_dll_grpcsharp_slice_buffer_reset_and_unref_mE2EBD192118F0298E1307DEA5491DBE4621141E9,
	DllImportsFromSharedLib_x64_dll_grpcsharp_slice_buffer_destroy_mD5F9DF31E8E1A7DF3B1BD1E782CF3F729FC47BA0,
	DllImportsFromSharedLib_x64_dll_gprsharp_now_m32512BEE9AB8337163C3B4A679FF99AF19540D48,
	DllImportsFromSharedLib_x64_dll_gprsharp_inf_future_m8311F2F965349CD39F84C677F3EC9A2620BCB935,
	DllImportsFromSharedLib_x64_dll_gprsharp_inf_past_mD4A5C9BE1EB72D412FA919B9CDE2EF9E59F43F1B,
	DllImportsFromSharedLib_x64_dll_gprsharp_convert_clock_type_m3B2E9981E101A275A2712B3CCDC860C3C12270C4,
	DllImportsFromSharedLib_x64_dll_gprsharp_sizeof_timespec_m1DA53BFCB3642A32303BA6D8897BBA7DA7C9EE39,
	DllImportsFromSharedLib_x64_dll_grpcsharp_test_callback_mA1713F860CB1515E2281CDADF48954CDCD6F817C,
	DllImportsFromSharedLib_x64_dll_grpcsharp_test_nop_m65BA3F162A0BB9E3D6E4259C0303F0A7392A9B37,
	DllImportsFromSharedLib_x64_dll_grpcsharp_test_override_method_mA314F943C9837974485B915107D74D7A844B8459,
	DllImportsFromSharedLib_x64_dll_grpcsharp_test_call_start_unary_echo_mE4522774FE3D6268BC6A4254D1DB932097D92A95,
	DllImportsFromSharedLib_x64_dll__ctor_m2756CFB5FBFE693CFE47AA7B069AA349B742550D,
	PlatformApis__cctor_m7128AA3C971D63A03D7DE53F0B1E9C1A6353B5AB,
	PlatformApis_get_IsLinux_m921DD695CDAE26E1AFA796887BA8D2F6483E7B31,
	PlatformApis_get_IsMacOSX_m6169B64A870F035C81EEDD9A2C3E9C9EB7432513,
	PlatformApis_get_IsWindows_m5DA76789F2B28BED2A7F1A676C20B0807EDA8B47,
	PlatformApis_get_IsMono_m2C3461EB2B8BFBEA588857E69A66D5F5144A4BD7,
	PlatformApis_get_IsUnity_m1D8910755EBE171BF7140FD0EF0EA804ABDEEED1,
	PlatformApis_get_IsUnityIOS_m986766350F797EE7B05C2873E307AB98E8C28EE6,
	PlatformApis_get_IsXamarin_mBB59638BB2E80461E0653C2D8C8E2453E9202764,
	PlatformApis_get_IsXamarinIOS_m56F9EDE8E29CA0CCCE742BED1A3A0F3F89725F58,
	PlatformApis_get_IsXamarinAndroid_mB6777DC5D62591597DA3FE604E3E8B20CF65C336,
	PlatformApis_get_IsNetCore_mF9AD17C7F567EA1344E472F4B291BEDF75A68B63,
	PlatformApis_get_Is64Bit_m00BDEC18AD97C04C6FF6BDDFD44D4EFFB45D15BF,
	PlatformApis_TryGetUnityApplicationPlatform_m5D0CB46B23444497B6D1169D6A01C992D02B5BEC,
	PlatformApis_uname_m1B60A63C64906E1958C0B912A5C0003C84911B9B,
	PlatformApis_GetUname_m1E5380B0944C5BA5999914F729CA6E4C5C8A748B,
	U3CU3Ec__cctor_m5E68B58C1C526DAFA855524DD65A91862B61B73D,
	U3CU3Ec__ctor_mD5AD264153EEBA0174C41D56A0A315DD838A52FB,
	U3CU3Ec_U3CTryGetUnityApplicationPlatformU3Eb__38_0_m590ABA1D15838B0295AE28EAA9DDCEFFBB466F28,
	RequestCallContextSafeHandle__ctor_mFB7946DE6C43A19DF420E2A8C72EF7D7A37967B4,
	RequestCallContextSafeHandle_Create_m96258D9E0E1FEC3BF5F54A6A0F19D8893319F0E6,
	RequestCallContextSafeHandle_SetReturnToPoolAction_mD4AF82138A788974E8E6FCFD662DE290138F28BC,
	RequestCallContextSafeHandle_get_CompletionCallback_m1D9FED1413D76C11107EA3913D1703B9800CBB02,
	RequestCallContextSafeHandle_set_CompletionCallback_mB466CA717FDB92A3A73D22D20C100C17D1F077DC,
	RequestCallContextSafeHandle_Recycle_m3C4A1D8C20EBDB043C2D6DED6E40303C1BC65812,
	RequestCallContextSafeHandle_ReleaseHandle_mAA0DE178297CA8E563B5ED84EFEB3F350A3C602F,
	RequestCallContextSafeHandle_Grpc_Core_Internal_IOpCompletionCallback_OnComplete_mF2CFF57DDE5474ABF814C02DF36D7B1A3A0E4D0A,
	RequestCallContextSafeHandle__cctor_mB98A98E2133E1073E76FE23EF3ABCDA325977631,
	ReusableSliceBuffer_PopulateFrom_mE7106462D538DEA9F11036EAA848F9C0B88BF71C,
	ReusableSliceBuffer_Invalidate_mA27EA314F9ED17ACD35788F8735FF23E8FF0B751,
	ReusableSliceBuffer__ctor_m20A4476FFEC090ED7867844182946A13E94A87FF,
	SliceSegment_Reset_m77FC0742220A0ADEC4A1868BF13D6F0076A04FC3,
	SliceSegment_SetNext_m1B7E6D699EB70DF02E1D5B700C53A33E25AFA10D,
	SliceSegment__ctor_m74A7E8E09D7FFBC24172753992849F7166480296,
	SafeHandleZeroIsInvalid__ctor_mF560A8F0C515B89FC0E5D57D8111AC067087343C,
	SafeHandleZeroIsInvalid_get_IsInvalid_mA8CE932B82CE9405FE2408FFC9DA14FAA0DFA4AD,
	ServerCredentialsSafeHandle__ctor_m99D2013E07DFF815C62D12A4EFDC10306C36CF05,
	ServerCredentialsSafeHandle_ReleaseHandle_mD3DF99C8ED45F524486458693C81E491FB10EC97,
	ServerCredentialsSafeHandle__cctor_m767ADEC0D74CF63577BE3DF88E651E4F5EB6C256,
	ServerSafeHandle__ctor_m78B0CA056423C03852BF8BB0839291694CA4EA57,
	ServerSafeHandle_ShutdownAndNotify_m7CC61BAB8BCF8F0D42E91C3C3BBC05A471D599AD,
	ServerSafeHandle_ReleaseHandle_mBF8013560DC77F27A31593AEDCA5AC258D2AB220,
	ServerSafeHandle_CancelAllCalls_mA49AA81DB1E48651272C420238E89FBA4D73B1F9,
	ServerSafeHandle__cctor_m0A6C26B2B272B169FC176F7D4B7F591286B84F26,
	Slice__ctor_mA7C248C5F4DC092B838E87DF1934357A30DF6F62,
	Slice_get_Length_m019F88FC27F51AFA1D8AF7342D9AD78DC1965122,
	Slice_ToSpanUnsafe_m8B8957CDDB63506F44548D01B711C0C05D8DCB7B,
	Slice_ToString_mDEEA889F14A693172B90B31EFEE3E65A99E53A02,
	SliceBufferSafeHandle__ctor_m024709939C05552855B09E7CDA5ACDB4C5501D01,
	SliceBufferSafeHandle_Create_m45D25BFAD0B43450F90DF882A63E7B46D0A39A86,
	SliceBufferSafeHandle_Advance_m5CE12BAC657EC0B0372B6A09C6651BB4C9D56481,
	SliceBufferSafeHandle_GetMemory_mFE99579E2EBF06A70F4B81FAA266A9FB25B200F5,
	SliceBufferSafeHandle_GetSpan_mE2BAAF3F572BEF4389EEDF86E274C6965F316E3F,
	SliceBufferSafeHandle_Complete_m2920BE89C3934FCA61FBFC5ECF18C241735A3A35,
	SliceBufferSafeHandle_Reset_m7CB3BA7B89DC293F0B48BEFCA36C63C6B29AA4E3,
	SliceBufferSafeHandle_EnsureBufferSpace_mA5C1A49FA0CB8D7A264EE2A1DC564086EF5FED89,
	SliceBufferSafeHandle_AdjustTailSpace_m15C9BC0768776AABB719DCE655352B0B657B44D9,
	SliceBufferSafeHandle_ReleaseHandle_m4044D8800EC9C680BAF1C20D1EF1AC84A949261E,
	SliceBufferSafeHandle__cctor_mAE66C6F01940AE59F578F4B78AD9473E54F5684C,
	SliceMemoryManager_Reset_mCCEA54BF6E02F0AD3D7020F342BB30BEBC2BDABD,
	SliceMemoryManager_Reset_mE04E50CC5914E8518BD69E21299D5D67C97A2CE9,
	SliceMemoryManager_GetSpan_mAE074FCB374C71B10E82DC74150C1D5F8BC77C29,
	SliceMemoryManager_Dispose_m65F3AADC42094D1C7197C8BFA3C7FBF4F60E1EF7,
	SliceMemoryManager__ctor_m3976C73056A5DE1491AC5FBB66A963EF528A9E08,
	Timespec_Equals_mEBB83B39F4DF9C02E76BE7EF195DCA6B15AD5B2D,
	Timespec_GetHashCode_m204317FBCCD1773C512E704C09D213E06A606C78,
	Timespec_ToString_m423E043629C8628283E93315A70C61D85EE198A0,
	Timespec_Equals_m65B6949B5A8E9289E235ECD578C0579D3F7B3A2D,
	Timespec__ctor_m934BB8ADB7091F5789B04187A4980A416F0ACB5C,
	Timespec__ctor_mCB264CFFFD90ADC3D0AF3CE2D5DD79104F5234A0,
	Timespec_get_InfFuture_mADAF01E8CDD51F366493454DC4B0D9BF8D720D42,
	Timespec_get_InfPast_m8879C089EE7B1C6AEA49ECB833D9B71C5958731F,
	Timespec_get_TimevalSeconds_m0C67493E9146FC1886AF8B596E4E94CF559BBBDD,
	Timespec_get_TimevalNanos_m84E291437A7D7CC5811C3288068AE52FD44196AB,
	Timespec_FromDateTime_m64E837805B254BD130A1790D77F4CD84051A3BEA,
	Timespec__cctor_m171F9EF72DA86AA1A04454E89A4F36CD7242DE19,
	UnmanagedLibrary__ctor_m0D229FB8FF67BB2314A7B7B912A92BAA6A63F172,
	UnmanagedLibrary_LoadSymbol_m278A44065D716670ACCF0851CF75DA889D11DCE7,
	NULL,
	UnmanagedLibrary_PlatformSpecificLoadLibrary_m36405E163A82EFE03AFBB360F17A674478ED707D,
	UnmanagedLibrary_LoadLibraryPosix_m9ECD692843FEBBC36A57F511BF2D05BBC1C34447,
	UnmanagedLibrary_FirstValidLibraryPath_m143A877D73940E39DA442A459CEB5531C1FC0AFE,
	UnmanagedLibrary__cctor_m3965842262C0A9F04159806733E920CF701339F5,
	Windows_LoadLibrary_m83EF3031F0E65F23C4404F1E7AEF05E8F3BF119B,
	Windows_GetProcAddress_m1F7D1F7BB4602E965A43FF892E36689409B1D6A3,
	Linux_dlopen_m59E82F05B685062DB5A445A7CB6DB83A1C03780C,
	Linux_dlerror_mC1403D6CCAE5A6690046E00A7CB56FFAA761C293,
	Linux_dlsym_mE3C3E5B2DB99FF6E8F1B45777A766EE483F432C5,
	MacOSX_dlopen_m86E34AC05366203120D2D7C83937D1E4931E03BE,
	MacOSX_dlerror_mB3A6151DDCC23252A04E844D522BE2A84DBF9BD5,
	MacOSX_dlsym_m1994CCA1D0A48989C86A3033F79EE4E692CDA2D1,
	Mono_dlopen_m7F2DE2CD0870AB15EEA4E0A0BA6C47044E74BB67,
	Mono_dlerror_m359ABCFD23D0EB5314DE2DFF8AB58CFE949BBABD,
	Mono_dlsym_m31A00C09F598C9D552A94628C2C28B3C7B04C2DD,
	CoreCLR_dlopen_m0C667EBD6469F2F4C7D1D5B6F0E0FE91DC36C765,
	CoreCLR_dlerror_mBF14DDCC8D6862D11F60916D171E3911D3739127,
	CoreCLR_dlsym_mF8A29959ABC08D70EDC7AF482ED5903785D4E3B3,
	WellKnownStrings_Coerce64_m035785D0B75B7F2F1E666446676F0A902F68C61C,
	WellKnownStrings_Coerce16_m74A54277059ADA473C9A5C7B0388D7BA4131F6D5,
	WellKnownStrings_TryIdentify_m78977E648283DE7AD8A19304667FCE044691C618,
	WellKnownStrings_TryIdentify_m4F6C4E2FE9DD61C0973D009FCFDA8E2376DCD11A,
};
extern void U3CWaitForStateChangedAsyncU3Ed__16_MoveNext_m4848FE46620DAC2D1AE134917C8BEE8413206470_AdjustorThunk (void);
extern void U3CWaitForStateChangedAsyncU3Ed__16_SetStateMachine_m573FC6FE8229F8655EA4291AD4E6DEC383791F90_AdjustorThunk (void);
extern void U3CConnectAsyncU3Ed__22_MoveNext_mA31A1906C6258DB74D6FD60C6B1216B6084DD46D_AdjustorThunk (void);
extern void U3CConnectAsyncU3Ed__22_SetStateMachine_m3E439A594721F0A6BB89F2EDA82E8FD7706AEE1D_AdjustorThunk (void);
extern void U3CShutdownAsyncCoreU3Ed__23_MoveNext_mB90EBA7F37C4B93AA2EEF2B4113D2CD272438DBE_AdjustorThunk (void);
extern void U3CShutdownAsyncCoreU3Ed__23_SetStateMachine_m9B5F12CABE89A38367CFFEA3FD866FAEFAD3AC03_AdjustorThunk (void);
extern void U3CReleaseAsyncU3Ed__26_MoveNext_m1967003E65FDF3FECA71B181518AF02DE512D530_AdjustorThunk (void);
extern void U3CReleaseAsyncU3Ed__26_SetStateMachine_mFB02E3C9D2E3EBA308D39B2E67CF9AB88BFB6DF8_AdjustorThunk (void);
extern void U3CShutdownAsyncU3Ed__60_MoveNext_m68F417DE5FF99FAC8EB4EEE79BBF1E8E8B3FB4FB_AdjustorThunk (void);
extern void U3CShutdownAsyncU3Ed__60_SetStateMachine_m1920AEF44AAE8F83996EA891B925E8DE00612E9C_AdjustorThunk (void);
extern void U3CShutdownInternalAsyncU3Ed__32_MoveNext_m3D71B112806F5CA33DBAE2030BF722AE3B8E4240_AdjustorThunk (void);
extern void U3CShutdownInternalAsyncU3Ed__32_SetStateMachine_m36B03032AD3E3F0EDE00BCD0C5F740EAFCAA26CC_AdjustorThunk (void);
extern void U3CShutdownCompleteOrEnvironmentDeadAsyncU3Ed__33_MoveNext_mF43F5308C7FAAFDEDFBA68E14C19CFDF45138670_AdjustorThunk (void);
extern void U3CShutdownCompleteOrEnvironmentDeadAsyncU3Ed__33_SetStateMachine_m74E60AE9F2A615A438543D73C386AC115F601210_AdjustorThunk (void);
extern void ProfilerEntry_ToString_m40BACECE2A53CB48A103CB016A457E8942D700B6_AdjustorThunk (void);
extern void CompletionCallbackData__ctor_mDEDA5835544642E03DBE0333E1F9BC464D12D4AB_AdjustorThunk (void);
extern void CompletionCallbackData_get_Callback_m8BEAA82D935AF609E1579D552C4B0B21B1AF6CDA_AdjustorThunk (void);
extern void CompletionCallbackData_get_State_m0D49723D66A0FCA29AF9017EFD68AE644B92D3E0_AdjustorThunk (void);
extern void ClientSideStatus__ctor_m849DF772B079F4260387AF0B0C0E636AB5425443_AdjustorThunk (void);
extern void ClientSideStatus_get_Status_m300C369282422D75747F095D9E30A54853C68CB7_AdjustorThunk (void);
extern void ClientSideStatus_get_Trailers_m463422D2B5DB7F66D0DA3E0675C06008F8137C2A_AdjustorThunk (void);
extern void UsageScope__ctor_mFF892F95AB7C2EB545ABC97B2ED5F046501730C8_AdjustorThunk (void);
extern void UsageScope_Dispose_mEDC6812562D58593CE8E005C67CFE18FB07F808B_AdjustorThunk (void);
extern void UsageScope__ctor_mACF41298CA2D040B144BD965792D9EFCAFA2DE1B_AdjustorThunk (void);
extern void UsageScope_get_Context_m4E26FE14B53773EA9CAAFC4A74F41F2D596203B7_AdjustorThunk (void);
extern void UsageScope_Dispose_mB2430F1CD4D3D052C75DA41B58CE46A15177CD75_AdjustorThunk (void);
extern void Slice__ctor_mA7C248C5F4DC092B838E87DF1934357A30DF6F62_AdjustorThunk (void);
extern void Slice_get_Length_m019F88FC27F51AFA1D8AF7342D9AD78DC1965122_AdjustorThunk (void);
extern void Slice_ToSpanUnsafe_m8B8957CDDB63506F44548D01B711C0C05D8DCB7B_AdjustorThunk (void);
extern void Slice_ToString_mDEEA889F14A693172B90B31EFEE3E65A99E53A02_AdjustorThunk (void);
extern void Timespec_Equals_mEBB83B39F4DF9C02E76BE7EF195DCA6B15AD5B2D_AdjustorThunk (void);
extern void Timespec_GetHashCode_m204317FBCCD1773C512E704C09D213E06A606C78_AdjustorThunk (void);
extern void Timespec_ToString_m423E043629C8628283E93315A70C61D85EE198A0_AdjustorThunk (void);
extern void Timespec_Equals_m65B6949B5A8E9289E235ECD578C0579D3F7B3A2D_AdjustorThunk (void);
extern void Timespec__ctor_m934BB8ADB7091F5789B04187A4980A416F0ACB5C_AdjustorThunk (void);
extern void Timespec__ctor_mCB264CFFFD90ADC3D0AF3CE2D5DD79104F5234A0_AdjustorThunk (void);
extern void Timespec_get_TimevalSeconds_m0C67493E9146FC1886AF8B596E4E94CF559BBBDD_AdjustorThunk (void);
extern void Timespec_get_TimevalNanos_m84E291437A7D7CC5811C3288068AE52FD44196AB_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[38] = 
{
	{ 0x06000024, U3CWaitForStateChangedAsyncU3Ed__16_MoveNext_m4848FE46620DAC2D1AE134917C8BEE8413206470_AdjustorThunk },
	{ 0x06000025, U3CWaitForStateChangedAsyncU3Ed__16_SetStateMachine_m573FC6FE8229F8655EA4291AD4E6DEC383791F90_AdjustorThunk },
	{ 0x06000026, U3CConnectAsyncU3Ed__22_MoveNext_mA31A1906C6258DB74D6FD60C6B1216B6084DD46D_AdjustorThunk },
	{ 0x06000027, U3CConnectAsyncU3Ed__22_SetStateMachine_m3E439A594721F0A6BB89F2EDA82E8FD7706AEE1D_AdjustorThunk },
	{ 0x06000028, U3CShutdownAsyncCoreU3Ed__23_MoveNext_mB90EBA7F37C4B93AA2EEF2B4113D2CD272438DBE_AdjustorThunk },
	{ 0x06000029, U3CShutdownAsyncCoreU3Ed__23_SetStateMachine_m9B5F12CABE89A38367CFFEA3FD866FAEFAD3AC03_AdjustorThunk },
	{ 0x0600005A, U3CReleaseAsyncU3Ed__26_MoveNext_m1967003E65FDF3FECA71B181518AF02DE512D530_AdjustorThunk },
	{ 0x0600005B, U3CReleaseAsyncU3Ed__26_SetStateMachine_mFB02E3C9D2E3EBA308D39B2E67CF9AB88BFB6DF8_AdjustorThunk },
	{ 0x06000062, U3CShutdownAsyncU3Ed__60_MoveNext_m68F417DE5FF99FAC8EB4EEE79BBF1E8E8B3FB4FB_AdjustorThunk },
	{ 0x06000063, U3CShutdownAsyncU3Ed__60_SetStateMachine_m1920AEF44AAE8F83996EA891B925E8DE00612E9C_AdjustorThunk },
	{ 0x0600006A, U3CShutdownInternalAsyncU3Ed__32_MoveNext_m3D71B112806F5CA33DBAE2030BF722AE3B8E4240_AdjustorThunk },
	{ 0x0600006B, U3CShutdownInternalAsyncU3Ed__32_SetStateMachine_m36B03032AD3E3F0EDE00BCD0C5F740EAFCAA26CC_AdjustorThunk },
	{ 0x0600006C, U3CShutdownCompleteOrEnvironmentDeadAsyncU3Ed__33_MoveNext_mF43F5308C7FAAFDEDFBA68E14C19CFDF45138670_AdjustorThunk },
	{ 0x0600006D, U3CShutdownCompleteOrEnvironmentDeadAsyncU3Ed__33_SetStateMachine_m74E60AE9F2A615A438543D73C386AC115F601210_AdjustorThunk },
	{ 0x0600006F, ProfilerEntry_ToString_m40BACECE2A53CB48A103CB016A457E8942D700B6_AdjustorThunk },
	{ 0x060000ED, CompletionCallbackData__ctor_mDEDA5835544642E03DBE0333E1F9BC464D12D4AB_AdjustorThunk },
	{ 0x060000EE, CompletionCallbackData_get_Callback_m8BEAA82D935AF609E1579D552C4B0B21B1AF6CDA_AdjustorThunk },
	{ 0x060000EF, CompletionCallbackData_get_State_m0D49723D66A0FCA29AF9017EFD68AE644B92D3E0_AdjustorThunk },
	{ 0x06000129, ClientSideStatus__ctor_m849DF772B079F4260387AF0B0C0E636AB5425443_AdjustorThunk },
	{ 0x0600012A, ClientSideStatus_get_Status_m300C369282422D75747F095D9E30A54853C68CB7_AdjustorThunk },
	{ 0x0600012B, ClientSideStatus_get_Trailers_m463422D2B5DB7F66D0DA3E0675C06008F8137C2A_AdjustorThunk },
	{ 0x06000138, UsageScope__ctor_mFF892F95AB7C2EB545ABC97B2ED5F046501730C8_AdjustorThunk },
	{ 0x06000139, UsageScope_Dispose_mEDC6812562D58593CE8E005C67CFE18FB07F808B_AdjustorThunk },
	{ 0x06000184, UsageScope__ctor_mACF41298CA2D040B144BD965792D9EFCAFA2DE1B_AdjustorThunk },
	{ 0x06000185, UsageScope_get_Context_m4E26FE14B53773EA9CAAFC4A74F41F2D596203B7_AdjustorThunk },
	{ 0x06000186, UsageScope_Dispose_mB2430F1CD4D3D052C75DA41B58CE46A15177CD75_AdjustorThunk },
	{ 0x0600062C, Slice__ctor_mA7C248C5F4DC092B838E87DF1934357A30DF6F62_AdjustorThunk },
	{ 0x0600062D, Slice_get_Length_m019F88FC27F51AFA1D8AF7342D9AD78DC1965122_AdjustorThunk },
	{ 0x0600062E, Slice_ToSpanUnsafe_m8B8957CDDB63506F44548D01B711C0C05D8DCB7B_AdjustorThunk },
	{ 0x0600062F, Slice_ToString_mDEEA889F14A693172B90B31EFEE3E65A99E53A02_AdjustorThunk },
	{ 0x06000640, Timespec_Equals_mEBB83B39F4DF9C02E76BE7EF195DCA6B15AD5B2D_AdjustorThunk },
	{ 0x06000641, Timespec_GetHashCode_m204317FBCCD1773C512E704C09D213E06A606C78_AdjustorThunk },
	{ 0x06000642, Timespec_ToString_m423E043629C8628283E93315A70C61D85EE198A0_AdjustorThunk },
	{ 0x06000643, Timespec_Equals_m65B6949B5A8E9289E235ECD578C0579D3F7B3A2D_AdjustorThunk },
	{ 0x06000644, Timespec__ctor_m934BB8ADB7091F5789B04187A4980A416F0ACB5C_AdjustorThunk },
	{ 0x06000645, Timespec__ctor_mCB264CFFFD90ADC3D0AF3CE2D5DD79104F5234A0_AdjustorThunk },
	{ 0x06000648, Timespec_get_TimevalSeconds_m0C67493E9146FC1886AF8B596E4E94CF559BBBDD_AdjustorThunk },
	{ 0x06000649, Timespec_get_TimevalNanos_m84E291437A7D7CC5811C3288068AE52FD44196AB_AdjustorThunk },
};
static const int32_t s_InvokerIndices[1636] = 
{
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
	1176,
	1168,
	644,
	1548,
	1548,
	5496,
	3334,
	5548,
	5548,
	5548,
	5548,
	4513,
	4513,
	3242,
	7515,
	7427,
	7590,
	5592,
	4513,
	5592,
	4513,
	5592,
	4513,
	7590,
	5592,
	1196,
	2396,
	5528,
	5548,
	5528,
	5548,
	3927,
	3927,
	5528,
	6880,
	6880,
	7427,
	4513,
	-1,
	-1,
	-1,
	7572,
	7572,
	7515,
	7515,
	7515,
	7572,
	7572,
	7572,
	5592,
	5548,
	5548,
	5548,
	5571,
	5548,
	5548,
	7590,
	7590,
	5548,
	5528,
	5528,
	7581,
	7590,
	5592,
	7590,
	7590,
	7590,
	7590,
	5592,
	2396,
	2396,
	5592,
	4513,
	7590,
	5592,
	3374,
	3374,
	5548,
	5548,
	5592,
	4513,
	5548,
	3380,
	5548,
	5592,
	1196,
	7590,
	5592,
	4513,
	5592,
	4513,
	7572,
	5548,
	7423,
	7515,
	7590,
	5592,
	4513,
	4513,
	5592,
	4513,
	-1,
	7590,
	5592,
	5548,
	-1,
	4513,
	2396,
	4513,
	2396,
	4513,
	2396,
	2389,
	1169,
	-1,
	4513,
	2396,
	4513,
	2396,
	4513,
	2396,
	6700,
	2396,
	-1,
	4513,
	2396,
	4513,
	4513,
	2396,
	4513,
	2396,
	5548,
	2396,
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
	4496,
	5529,
	4427,
	5529,
	5529,
	5592,
	5571,
	7590,
	4533,
	5429,
	3828,
	5592,
	7572,
	5530,
	4513,
	2396,
	5548,
	5498,
	5548,
	5571,
	5592,
	5571,
	4533,
	5429,
	3828,
	7590,
	2396,
	5548,
	5548,
	5592,
	5571,
	7590,
	7511,
	7266,
	5592,
	4513,
	4513,
	281,
	1175,
	659,
	4513,
	4513,
	4513,
	5592,
	4540,
	5571,
	7590,
	7590,
	5592,
	1196,
	1196,
	1196,
	1196,
	1196,
	1196,
	1196,
	5592,
	7572,
	7423,
	1141,
	1140,
	5571,
	7590,
	5592,
	6392,
	5571,
	7590,
	5592,
	6778,
	6393,
	89,
	3242,
	264,
	5571,
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
	-1,
	-1,
	2442,
	5577,
	5548,
	7590,
	5592,
	7427,
	5502,
	5620,
	5592,
	5548,
	5571,
	5592,
	5592,
	5592,
	7590,
	4513,
	5592,
	2391,
	1196,
	228,
	4513,
	2391,
	2432,
	552,
	4513,
	1176,
	2343,
	1560,
	3369,
	7590,
	1706,
	3212,
	5592,
	5548,
	5511,
	5496,
	5548,
	7427,
	4513,
	5592,
	5571,
	7590,
	5592,
	4513,
	5592,
	5548,
	5592,
	7427,
	5548,
	4513,
	666,
	827,
	1560,
	5592,
	7590,
	4513,
	5548,
	119,
	722,
	5592,
	5548,
	7427,
	5592,
	5548,
	5450,
	4513,
	5592,
	7427,
	7590,
	7590,
	5592,
	5548,
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
	5592,
	4513,
	5548,
	5592,
	7603,
	7590,
	4513,
	5548,
	5592,
	7590,
	5592,
	5548,
	7515,
	7590,
	642,
	5592,
	5548,
	5571,
	5548,
	1553,
	2396,
	6775,
	2402,
	7590,
	4513,
	4513,
	5592,
	7590,
	5592,
	3927,
	5592,
	5592,
	5592,
	5548,
	5548,
	683,
	2429,
	2432,
	2432,
	4533,
	4533,
	2433,
	5592,
	4540,
	281,
	1175,
	4513,
	4513,
	659,
	4513,
	-1,
	-1,
	6768,
	7590,
	5592,
	7427,
	7425,
	5571,
	7590,
	4513,
	4513,
	2391,
	119,
	54,
	3226,
	2391,
	82,
	28,
	3226,
	7515,
	7427,
	5670,
	7590,
	4488,
	5530,
	5592,
	5592,
	7572,
	5548,
	7572,
	7572,
	7572,
	7572,
	7572,
	7458,
	7572,
	7572,
	7590,
	2391,
	266,
	87,
	4513,
	7515,
	5961,
	7590,
	2391,
	4533,
	841,
	4513,
	7572,
	-1,
	6778,
	4513,
	4513,
	4513,
	4513,
	4513,
	4513,
	4513,
	2391,
	5592,
	1560,
	4513,
	2391,
	5592,
	1560,
	4513,
	2391,
	5530,
	1560,
	3297,
	2391,
	5548,
	1560,
	3374,
	2391,
	3297,
	827,
	3297,
	2391,
	3297,
	827,
	3297,
	2391,
	723,
	210,
	714,
	2391,
	3226,
	827,
	3226,
	2391,
	1533,
	516,
	1531,
	2391,
	3297,
	827,
	3297,
	2391,
	3297,
	827,
	3297,
	2391,
	3226,
	827,
	3226,
	2391,
	4513,
	827,
	4513,
	2391,
	4497,
	809,
	4513,
	2391,
	5548,
	1560,
	3374,
	2391,
	3374,
	827,
	3374,
	2391,
	1533,
	516,
	1531,
	2391,
	1533,
	516,
	1531,
	2391,
	4049,
	827,
	4049,
	2391,
	3297,
	827,
	3297,
	2391,
	4513,
	827,
	4513,
	2391,
	4497,
	809,
	4513,
	2391,
	1560,
	534,
	3374,
	2391,
	4497,
	809,
	4513,
	2391,
	3226,
	827,
	3226,
	2391,
	725,
	213,
	3226,
	2391,
	122,
	59,
	3226,
	2391,
	429,
	136,
	3226,
	2391,
	122,
	59,
	3226,
	2391,
	429,
	136,
	3226,
	2391,
	197,
	92,
	3226,
	2391,
	1471,
	534,
	3226,
	2391,
	27,
	18,
	3226,
	2391,
	1471,
	534,
	3226,
	2391,
	1471,
	534,
	3226,
	2391,
	1471,
	534,
	3226,
	2391,
	728,
	219,
	3226,
	2391,
	1471,
	534,
	3226,
	2391,
	3374,
	827,
	3374,
	2391,
	4497,
	809,
	4513,
	2391,
	3369,
	809,
	3374,
	2391,
	651,
	132,
	4513,
	2391,
	650,
	131,
	4513,
	2391,
	4497,
	809,
	4513,
	2391,
	4513,
	827,
	4513,
	2391,
	533,
	137,
	3374,
	2391,
	1560,
	534,
	3374,
	2391,
	4497,
	809,
	4513,
	2391,
	1560,
	534,
	3374,
	2391,
	827,
	219,
	3374,
	2391,
	91,
	29,
	3374,
	2391,
	1470,
	524,
	3226,
	2391,
	276,
	90,
	4513,
	2391,
	3374,
	827,
	3374,
	2391,
	4497,
	809,
	4513,
	2391,
	5528,
	1560,
	3226,
	2391,
	5548,
	1560,
	3374,
	2391,
	5548,
	1560,
	3374,
	2391,
	4513,
	827,
	4513,
	2391,
	2864,
	827,
	2864,
	2391,
	1357,
	527,
	2864,
	2391,
	4497,
	809,
	4513,
	2391,
	4497,
	809,
	4513,
	2391,
	3369,
	809,
	3374,
	2391,
	665,
	137,
	4513,
	2391,
	3296,
	809,
	3297,
	2391,
	733,
	209,
	1531,
	2391,
	733,
	209,
	1531,
	2391,
	4497,
	809,
	4513,
	2391,
	4513,
	827,
	4513,
	2391,
	4513,
	827,
	4513,
	2391,
	3369,
	809,
	3374,
	2391,
	267,
	88,
	4513,
	2391,
	218,
	93,
	3374,
	2391,
	4497,
	809,
	4513,
	2391,
	3374,
	827,
	3374,
	2391,
	2396,
	534,
	4513,
	2391,
	1471,
	534,
	3226,
	2391,
	728,
	219,
	3226,
	2391,
	4513,
	827,
	4513,
	2391,
	728,
	219,
	3226,
	2391,
	4513,
	827,
	4513,
	2391,
	1176,
	219,
	4513,
	2391,
	4497,
	809,
	4513,
	2391,
	3374,
	827,
	3374,
	2391,
	3297,
	827,
	3297,
	2391,
	4636,
	827,
	4636,
	2391,
	3294,
	763,
	1531,
	2391,
	4497,
	809,
	4513,
	2391,
	5548,
	1560,
	3374,
	2391,
	735,
	214,
	3297,
	2391,
	3297,
	827,
	3297,
	2391,
	649,
	130,
	1088,
	2391,
	4513,
	827,
	4513,
	2391,
	4497,
	809,
	4513,
	2391,
	4048,
	805,
	4049,
	2391,
	4048,
	805,
	4049,
	2391,
	4048,
	805,
	4049,
	2391,
	1851,
	558,
	4049,
	2391,
	5528,
	1560,
	3226,
	2391,
	3226,
	827,
	3226,
	2391,
	3296,
	809,
	3297,
	2391,
	2396,
	534,
	4513,
	2391,
	122,
	59,
	3226,
	7590,
	7590,
	7567,
	7572,
	7344,
	7344,
	6321,
	7320,
	6737,
	7344,
	7344,
	7320,
	7515,
	7513,
	7572,
	7427,
	6737,
	6737,
	7486,
	7344,
	7515,
	7513,
	6778,
	7513,
	7320,
	6325,
	5707,
	6049,
	5707,
	6049,
	5863,
	6712,
	5647,
	6712,
	6712,
	6712,
	6329,
	6712,
	7427,
	7513,
	7425,
	6237,
	6236,
	7513,
	7515,
	6140,
	6778,
	7513,
	6778,
	6393,
	5678,
	6710,
	5971,
	7427,
	7513,
	7565,
	7572,
	7572,
	7515,
	7271,
	6657,
	7513,
	7513,
	7425,
	6247,
	7343,
	6347,
	6347,
	7513,
	7515,
	7515,
	7425,
	5962,
	5886,
	7513,
	7427,
	7029,
	6712,
	6329,
	7515,
	6329,
	7515,
	6580,
	7513,
	7427,
	7344,
	7529,
	7335,
	7513,
	7572,
	6353,
	7344,
	6235,
	7515,
	7513,
	7485,
	7485,
	7485,
	6918,
	7565,
	7320,
	7343,
	7029,
	5707,
	5592,
	7590,
	7590,
	7567,
	7572,
	7344,
	7344,
	6321,
	7320,
	6737,
	7344,
	7344,
	7320,
	7515,
	7513,
	7572,
	7427,
	6737,
	6737,
	7486,
	7344,
	7515,
	7513,
	6778,
	7513,
	7320,
	6325,
	5707,
	6049,
	5707,
	6049,
	5863,
	6712,
	5647,
	6712,
	6712,
	6712,
	6329,
	6712,
	7427,
	7513,
	7425,
	6237,
	6236,
	7513,
	7515,
	6140,
	6778,
	7513,
	6778,
	6393,
	5678,
	6710,
	5971,
	7427,
	7513,
	7565,
	7572,
	7572,
	7515,
	7271,
	6657,
	7513,
	7513,
	7425,
	6247,
	7343,
	6347,
	6347,
	7513,
	7515,
	7515,
	7425,
	5962,
	5886,
	7513,
	7427,
	7029,
	6712,
	6329,
	7515,
	6329,
	7515,
	6580,
	7513,
	7427,
	7344,
	7529,
	7335,
	7513,
	7572,
	6353,
	7344,
	6235,
	7515,
	7513,
	7485,
	7485,
	7485,
	6918,
	7565,
	7320,
	7343,
	7029,
	5707,
	5592,
	7590,
	7590,
	7567,
	7572,
	7344,
	7344,
	6321,
	7320,
	6737,
	7344,
	7344,
	7320,
	7515,
	7513,
	7572,
	7427,
	6737,
	6737,
	7486,
	7344,
	7515,
	7513,
	6778,
	7513,
	7320,
	6325,
	5707,
	6049,
	5707,
	6049,
	5863,
	6712,
	5647,
	6712,
	6712,
	6712,
	6329,
	6712,
	7427,
	7513,
	7425,
	6237,
	6236,
	7513,
	7515,
	6140,
	6778,
	7513,
	6778,
	6393,
	5678,
	6710,
	5971,
	7427,
	7513,
	7565,
	7572,
	7572,
	7515,
	7271,
	6657,
	7513,
	7513,
	7425,
	6247,
	7343,
	6347,
	6347,
	7513,
	7515,
	7515,
	7425,
	5962,
	5886,
	7513,
	7427,
	7029,
	6712,
	6329,
	7515,
	6329,
	7515,
	6580,
	7513,
	7427,
	7344,
	7529,
	7335,
	7513,
	7572,
	6353,
	7344,
	6235,
	7515,
	7513,
	7485,
	7485,
	7485,
	6918,
	7565,
	7320,
	7343,
	7029,
	5707,
	5592,
	7590,
	7590,
	7567,
	7572,
	7344,
	7344,
	6321,
	7320,
	6737,
	7344,
	7344,
	7320,
	7515,
	7513,
	7572,
	7427,
	6737,
	6737,
	7486,
	7344,
	7515,
	7513,
	6778,
	7513,
	7320,
	6325,
	5707,
	6049,
	5707,
	6049,
	5863,
	6712,
	5647,
	6712,
	6712,
	6712,
	6329,
	6712,
	7427,
	7513,
	7425,
	6237,
	6236,
	7513,
	7515,
	6140,
	6778,
	7513,
	6778,
	6393,
	5678,
	6710,
	5971,
	7427,
	7513,
	7565,
	7572,
	7572,
	7515,
	7271,
	6657,
	7513,
	7513,
	7425,
	6247,
	7343,
	6347,
	6347,
	7513,
	7515,
	7515,
	7425,
	5962,
	5886,
	7513,
	7427,
	7029,
	6712,
	6329,
	7515,
	6329,
	7515,
	6580,
	7513,
	7427,
	7344,
	7529,
	7335,
	7513,
	7572,
	6353,
	7344,
	6235,
	7515,
	7513,
	7485,
	7485,
	7485,
	6918,
	7565,
	7320,
	7343,
	7029,
	5707,
	5592,
	7590,
	7590,
	7567,
	7572,
	7344,
	7344,
	6321,
	7320,
	6737,
	7344,
	7344,
	7320,
	7515,
	7513,
	7572,
	7427,
	6737,
	6737,
	7486,
	7344,
	7515,
	7513,
	6778,
	7513,
	7320,
	6325,
	5707,
	6049,
	5707,
	6049,
	5863,
	6712,
	5647,
	6712,
	6712,
	6712,
	6329,
	6712,
	7427,
	7513,
	7425,
	6237,
	6236,
	7513,
	7515,
	6140,
	6778,
	7513,
	6778,
	6393,
	5678,
	6710,
	5971,
	7427,
	7513,
	7565,
	7572,
	7572,
	7515,
	7271,
	6657,
	7513,
	7513,
	7425,
	6247,
	7343,
	6347,
	6347,
	7513,
	7515,
	7515,
	7425,
	5962,
	5886,
	7513,
	7427,
	7029,
	6712,
	6329,
	7515,
	6329,
	7515,
	6580,
	7513,
	7427,
	7344,
	7529,
	7335,
	7513,
	7572,
	6353,
	7344,
	6235,
	7515,
	7513,
	7485,
	7485,
	7485,
	6918,
	7565,
	7320,
	7343,
	7029,
	5707,
	5592,
	7590,
	7590,
	7567,
	7572,
	7344,
	7344,
	6321,
	7320,
	6737,
	7344,
	7344,
	7320,
	7515,
	7513,
	7572,
	7427,
	6737,
	6737,
	7486,
	7344,
	7515,
	7513,
	6778,
	7513,
	7320,
	6325,
	5707,
	6049,
	5707,
	6049,
	5863,
	6712,
	5647,
	6712,
	6712,
	6712,
	6329,
	6712,
	7427,
	7513,
	7425,
	6237,
	6236,
	7513,
	7515,
	6140,
	6778,
	7513,
	6778,
	6393,
	5678,
	6710,
	5971,
	7427,
	7513,
	7565,
	7572,
	7572,
	7515,
	7271,
	6657,
	7513,
	7513,
	7425,
	6247,
	7343,
	6347,
	6347,
	7513,
	7515,
	7515,
	7425,
	5962,
	5886,
	7513,
	7427,
	7029,
	6712,
	6329,
	7515,
	6329,
	7515,
	6580,
	7513,
	7427,
	7344,
	7529,
	7335,
	7513,
	7572,
	6353,
	7344,
	6235,
	7515,
	7513,
	7485,
	7485,
	7485,
	6918,
	7565,
	7320,
	7343,
	7029,
	5707,
	5592,
	7590,
	7581,
	7581,
	7581,
	7581,
	7581,
	7581,
	7581,
	7581,
	7581,
	7581,
	7581,
	7572,
	7318,
	7572,
	7590,
	5592,
	3927,
	5592,
	7572,
	4513,
	5548,
	4513,
	5592,
	5571,
	4533,
	7590,
	2781,
	5592,
	5592,
	2441,
	4513,
	5592,
	5592,
	5571,
	5592,
	5571,
	7590,
	5592,
	2396,
	5571,
	5592,
	7590,
	2341,
	5528,
	5459,
	5548,
	5592,
	7572,
	4495,
	2722,
	2803,
	5592,
	5592,
	4495,
	4495,
	5571,
	7590,
	4537,
	5592,
	5459,
	4533,
	5592,
	3927,
	5528,
	5548,
	3963,
	2337,
	1147,
	7585,
	7585,
	5529,
	5528,
	7484,
	7590,
	4513,
	3297,
	-1,
	6737,
	6093,
	7427,
	7590,
	7344,
	6733,
	6738,
	7567,
	6733,
	6738,
	7567,
	6733,
	6738,
	7567,
	6733,
	6738,
	7567,
	6733,
	7325,
	7295,
	6768,
	6759,
};
static const Il2CppTokenIndexMethodTuple s_reversePInvokeIndices[2] = 
{
	{ 0x060001C5, 1,  (void**)&NativeCallbackDispatcher_HandleDispatcherCallback_m57C5A58471D40296AB6D21E2A542C0749D4A8D4B_RuntimeMethod_var, 0 },
	{ 0x060001DB, 2,  (void**)&NativeLogRedirector_HandleWrite_m03E5012D2E9E37E1A3CBBE08B37987B070E0013D_RuntimeMethod_var, 0 },
};
static const Il2CppTokenRangePair s_rgctxIndices[22] = 
{
	{ 0x02000002, { 0, 6 } },
	{ 0x02000004, { 22, 6 } },
	{ 0x02000005, { 28, 8 } },
	{ 0x02000027, { 45, 42 } },
	{ 0x02000028, { 87, 27 } },
	{ 0x02000029, { 114, 5 } },
	{ 0x0200003A, { 119, 5 } },
	{ 0x0200003B, { 124, 2 } },
	{ 0x0200003C, { 126, 10 } },
	{ 0x02000055, { 136, 27 } },
	{ 0x02000056, { 163, 2 } },
	{ 0x02000057, { 165, 2 } },
	{ 0x0600000A, { 6, 6 } },
	{ 0x0600000B, { 12, 10 } },
	{ 0x06000039, { 36, 2 } },
	{ 0x0600003A, { 38, 2 } },
	{ 0x0600003B, { 40, 2 } },
	{ 0x06000078, { 42, 1 } },
	{ 0x06000085, { 43, 1 } },
	{ 0x0600008E, { 44, 1 } },
	{ 0x060001E2, { 167, 2 } },
	{ 0x0600064E, { 169, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[171] = 
{
	{ (Il2CppRGCTXDataType)3, 28977 },
	{ (Il2CppRGCTXDataType)3, 28978 },
	{ (Il2CppRGCTXDataType)3, 28979 },
	{ (Il2CppRGCTXDataType)3, 3335 },
	{ (Il2CppRGCTXDataType)3, 45105 },
	{ (Il2CppRGCTXDataType)3, 45107 },
	{ (Il2CppRGCTXDataType)2, 2536 },
	{ (Il2CppRGCTXDataType)3, 2814 },
	{ (Il2CppRGCTXDataType)3, 2815 },
	{ (Il2CppRGCTXDataType)2, 2624 },
	{ (Il2CppRGCTXDataType)2, 2586 },
	{ (Il2CppRGCTXDataType)3, 3156 },
	{ (Il2CppRGCTXDataType)2, 2535 },
	{ (Il2CppRGCTXDataType)3, 2812 },
	{ (Il2CppRGCTXDataType)3, 2813 },
	{ (Il2CppRGCTXDataType)2, 2641 },
	{ (Il2CppRGCTXDataType)3, 3378 },
	{ (Il2CppRGCTXDataType)2, 2642 },
	{ (Il2CppRGCTXDataType)3, 3386 },
	{ (Il2CppRGCTXDataType)2, 2623 },
	{ (Il2CppRGCTXDataType)2, 2546 },
	{ (Il2CppRGCTXDataType)3, 2880 },
	{ (Il2CppRGCTXDataType)2, 2163 },
	{ (Il2CppRGCTXDataType)3, 70 },
	{ (Il2CppRGCTXDataType)2, 2625 },
	{ (Il2CppRGCTXDataType)3, 71 },
	{ (Il2CppRGCTXDataType)3, 72 },
	{ (Il2CppRGCTXDataType)3, 73 },
	{ (Il2CppRGCTXDataType)2, 2167 },
	{ (Il2CppRGCTXDataType)3, 76 },
	{ (Il2CppRGCTXDataType)2, 2167 },
	{ (Il2CppRGCTXDataType)2, 2542 },
	{ (Il2CppRGCTXDataType)3, 2836 },
	{ (Il2CppRGCTXDataType)3, 2834 },
	{ (Il2CppRGCTXDataType)3, 2835 },
	{ (Il2CppRGCTXDataType)3, 2788 },
	{ (Il2CppRGCTXDataType)3, 44420 },
	{ (Il2CppRGCTXDataType)3, 44219 },
	{ (Il2CppRGCTXDataType)3, 44419 },
	{ (Il2CppRGCTXDataType)3, 44217 },
	{ (Il2CppRGCTXDataType)2, 2619 },
	{ (Il2CppRGCTXDataType)3, 3327 },
	{ (Il2CppRGCTXDataType)1, 103 },
	{ (Il2CppRGCTXDataType)3, 45165 },
	{ (Il2CppRGCTXDataType)1, 318 },
	{ (Il2CppRGCTXDataType)3, 3333 },
	{ (Il2CppRGCTXDataType)3, 28835 },
	{ (Il2CppRGCTXDataType)3, 3334 },
	{ (Il2CppRGCTXDataType)3, 28838 },
	{ (Il2CppRGCTXDataType)3, 2772 },
	{ (Il2CppRGCTXDataType)2, 2533 },
	{ (Il2CppRGCTXDataType)3, 3332 },
	{ (Il2CppRGCTXDataType)3, 3328 },
	{ (Il2CppRGCTXDataType)3, 3329 },
	{ (Il2CppRGCTXDataType)3, 2823 },
	{ (Il2CppRGCTXDataType)3, 2784 },
	{ (Il2CppRGCTXDataType)2, 6343 },
	{ (Il2CppRGCTXDataType)3, 36440 },
	{ (Il2CppRGCTXDataType)3, 2828 },
	{ (Il2CppRGCTXDataType)3, 2819 },
	{ (Il2CppRGCTXDataType)3, 36443 },
	{ (Il2CppRGCTXDataType)3, 2824 },
	{ (Il2CppRGCTXDataType)3, 2827 },
	{ (Il2CppRGCTXDataType)3, 2826 },
	{ (Il2CppRGCTXDataType)3, 2782 },
	{ (Il2CppRGCTXDataType)3, 2778 },
	{ (Il2CppRGCTXDataType)3, 2817 },
	{ (Il2CppRGCTXDataType)3, 2785 },
	{ (Il2CppRGCTXDataType)3, 2818 },
	{ (Il2CppRGCTXDataType)3, 2776 },
	{ (Il2CppRGCTXDataType)3, 2825 },
	{ (Il2CppRGCTXDataType)3, 2780 },
	{ (Il2CppRGCTXDataType)3, 2816 },
	{ (Il2CppRGCTXDataType)3, 3331 },
	{ (Il2CppRGCTXDataType)3, 3330 },
	{ (Il2CppRGCTXDataType)3, 2779 },
	{ (Il2CppRGCTXDataType)3, 2783 },
	{ (Il2CppRGCTXDataType)3, 2781 },
	{ (Il2CppRGCTXDataType)3, 2777 },
	{ (Il2CppRGCTXDataType)3, 2773 },
	{ (Il2CppRGCTXDataType)3, 36441 },
	{ (Il2CppRGCTXDataType)3, 36442 },
	{ (Il2CppRGCTXDataType)3, 2822 },
	{ (Il2CppRGCTXDataType)3, 2820 },
	{ (Il2CppRGCTXDataType)3, 2821 },
	{ (Il2CppRGCTXDataType)3, 45167 },
	{ (Il2CppRGCTXDataType)2, 2537 },
	{ (Il2CppRGCTXDataType)3, 45089 },
	{ (Il2CppRGCTXDataType)3, 45093 },
	{ (Il2CppRGCTXDataType)3, 2768 },
	{ (Il2CppRGCTXDataType)3, 2759 },
	{ (Il2CppRGCTXDataType)3, 2771 },
	{ (Il2CppRGCTXDataType)3, 36439 },
	{ (Il2CppRGCTXDataType)3, 2770 },
	{ (Il2CppRGCTXDataType)2, 6341 },
	{ (Il2CppRGCTXDataType)3, 36436 },
	{ (Il2CppRGCTXDataType)3, 2765 },
	{ (Il2CppRGCTXDataType)3, 2763 },
	{ (Il2CppRGCTXDataType)3, 1080 },
	{ (Il2CppRGCTXDataType)3, 18755 },
	{ (Il2CppRGCTXDataType)3, 2769 },
	{ (Il2CppRGCTXDataType)3, 2766 },
	{ (Il2CppRGCTXDataType)3, 2764 },
	{ (Il2CppRGCTXDataType)3, 2760 },
	{ (Il2CppRGCTXDataType)3, 2767 },
	{ (Il2CppRGCTXDataType)2, 2532 },
	{ (Il2CppRGCTXDataType)3, 2758 },
	{ (Il2CppRGCTXDataType)3, 36437 },
	{ (Il2CppRGCTXDataType)3, 36438 },
	{ (Il2CppRGCTXDataType)3, 2762 },
	{ (Il2CppRGCTXDataType)3, 2761 },
	{ (Il2CppRGCTXDataType)3, 45166 },
	{ (Il2CppRGCTXDataType)2, 2160 },
	{ (Il2CppRGCTXDataType)3, 68 },
	{ (Il2CppRGCTXDataType)2, 2161 },
	{ (Il2CppRGCTXDataType)3, 69 },
	{ (Il2CppRGCTXDataType)2, 2161 },
	{ (Il2CppRGCTXDataType)2, 2534 },
	{ (Il2CppRGCTXDataType)3, 2786 },
	{ (Il2CppRGCTXDataType)3, 2831 },
	{ (Il2CppRGCTXDataType)3, 3336 },
	{ (Il2CppRGCTXDataType)3, 3379 },
	{ (Il2CppRGCTXDataType)3, 2830 },
	{ (Il2CppRGCTXDataType)3, 2829 },
	{ (Il2CppRGCTXDataType)2, 1129 },
	{ (Il2CppRGCTXDataType)3, 3015 },
	{ (Il2CppRGCTXDataType)3, 2787 },
	{ (Il2CppRGCTXDataType)3, 2832 },
	{ (Il2CppRGCTXDataType)3, 36530 },
	{ (Il2CppRGCTXDataType)3, 4642 },
	{ (Il2CppRGCTXDataType)3, 4672 },
	{ (Il2CppRGCTXDataType)3, 3005 },
	{ (Il2CppRGCTXDataType)3, 4671 },
	{ (Il2CppRGCTXDataType)2, 1309 },
	{ (Il2CppRGCTXDataType)3, 2833 },
	{ (Il2CppRGCTXDataType)3, 3013 },
	{ (Il2CppRGCTXDataType)2, 2184 },
	{ (Il2CppRGCTXDataType)3, 131 },
	{ (Il2CppRGCTXDataType)3, 4789 },
	{ (Il2CppRGCTXDataType)2, 2298 },
	{ (Il2CppRGCTXDataType)3, 911 },
	{ (Il2CppRGCTXDataType)3, 45102 },
	{ (Il2CppRGCTXDataType)2, 6009 },
	{ (Il2CppRGCTXDataType)3, 31952 },
	{ (Il2CppRGCTXDataType)3, 132 },
	{ (Il2CppRGCTXDataType)2, 3395 },
	{ (Il2CppRGCTXDataType)3, 18621 },
	{ (Il2CppRGCTXDataType)2, 6416 },
	{ (Il2CppRGCTXDataType)3, 36717 },
	{ (Il2CppRGCTXDataType)3, 4788 },
	{ (Il2CppRGCTXDataType)2, 521 },
	{ (Il2CppRGCTXDataType)2, 4876 },
	{ (Il2CppRGCTXDataType)3, 36718 },
	{ (Il2CppRGCTXDataType)3, 36697 },
	{ (Il2CppRGCTXDataType)3, 31955 },
	{ (Il2CppRGCTXDataType)3, 31953 },
	{ (Il2CppRGCTXDataType)3, 36695 },
	{ (Il2CppRGCTXDataType)3, 36698 },
	{ (Il2CppRGCTXDataType)3, 18611 },
	{ (Il2CppRGCTXDataType)3, 31954 },
	{ (Il2CppRGCTXDataType)3, 45088 },
	{ (Il2CppRGCTXDataType)3, 36696 },
	{ (Il2CppRGCTXDataType)3, 36699 },
	{ (Il2CppRGCTXDataType)2, 6012 },
	{ (Il2CppRGCTXDataType)3, 31963 },
	{ (Il2CppRGCTXDataType)2, 6413 },
	{ (Il2CppRGCTXDataType)3, 36700 },
	{ (Il2CppRGCTXDataType)1, 272 },
	{ (Il2CppRGCTXDataType)3, 46584 },
	{ (Il2CppRGCTXDataType)1, 330 },
	{ (Il2CppRGCTXDataType)2, 330 },
};
extern const CustomAttributesCacheGenerator g_Grpc_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Grpc_Core_CodeGenModule;
const Il2CppCodeGenModule g_Grpc_Core_CodeGenModule = 
{
	"Grpc.Core.dll",
	1636,
	s_methodPointers,
	38,
	s_adjustorThunks,
	s_InvokerIndices,
	2,
	s_reversePInvokeIndices,
	22,
	s_rgctxIndices,
	171,
	s_rgctxValues,
	NULL,
	g_Grpc_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
