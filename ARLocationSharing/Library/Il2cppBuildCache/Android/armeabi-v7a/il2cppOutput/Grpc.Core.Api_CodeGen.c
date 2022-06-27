#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void Grpc.Core.AsyncCallState::.ctor(System.Func`2<System.Object,System.Threading.Tasks.Task`1<Grpc.Core.Metadata>>,System.Func`2<System.Object,Grpc.Core.Status>,System.Func`2<System.Object,Grpc.Core.Metadata>,System.Action`1<System.Object>,System.Object)
extern void AsyncCallState__ctor_mAF2F026B2DDF4FD5B2336455FD66E253CBB586ED (void);
// 0x00000002 System.Threading.Tasks.Task`1<Grpc.Core.Metadata> Grpc.Core.AsyncCallState::ResponseHeadersAsync()
extern void AsyncCallState_ResponseHeadersAsync_m70B30B86ECEB1FCACC356F2F3373F2CA0FA9A773 (void);
// 0x00000003 Grpc.Core.Status Grpc.Core.AsyncCallState::GetStatus()
extern void AsyncCallState_GetStatus_m8672BAFF41DB382339A7670373956CC5FFB27A2D (void);
// 0x00000004 Grpc.Core.Metadata Grpc.Core.AsyncCallState::GetTrailers()
extern void AsyncCallState_GetTrailers_m94B728E17B8BD73DE2E7BF37427981053D336B2E (void);
// 0x00000005 System.Void Grpc.Core.AsyncCallState::Dispose()
extern void AsyncCallState_Dispose_m028D365B2071DC0095E400A99D4C9D5573CDAE53 (void);
// 0x00000006 System.Threading.Tasks.Task`1<TResponse> Grpc.Core.AsyncClientStreamingCall`2::get_ResponseAsync()
// 0x00000007 System.Threading.Tasks.Task`1<Grpc.Core.Metadata> Grpc.Core.AsyncClientStreamingCall`2::get_ResponseHeadersAsync()
// 0x00000008 Grpc.Core.Status Grpc.Core.AsyncClientStreamingCall`2::GetStatus()
// 0x00000009 Grpc.Core.Metadata Grpc.Core.AsyncClientStreamingCall`2::GetTrailers()
// 0x0000000A System.Void Grpc.Core.AsyncClientStreamingCall`2::Dispose()
// 0x0000000B System.Void Grpc.Core.AsyncDuplexStreamingCall`2::.ctor(Grpc.Core.IClientStreamWriter`1<TRequest>,Grpc.Core.IAsyncStreamReader`1<TResponse>,System.Func`2<System.Object,System.Threading.Tasks.Task`1<Grpc.Core.Metadata>>,System.Func`2<System.Object,Grpc.Core.Status>,System.Func`2<System.Object,Grpc.Core.Metadata>,System.Action`1<System.Object>,System.Object)
// 0x0000000C Grpc.Core.IAsyncStreamReader`1<TResponse> Grpc.Core.AsyncDuplexStreamingCall`2::get_ResponseStream()
// 0x0000000D Grpc.Core.IClientStreamWriter`1<TRequest> Grpc.Core.AsyncDuplexStreamingCall`2::get_RequestStream()
// 0x0000000E System.Threading.Tasks.Task`1<Grpc.Core.Metadata> Grpc.Core.AsyncDuplexStreamingCall`2::get_ResponseHeadersAsync()
// 0x0000000F Grpc.Core.Status Grpc.Core.AsyncDuplexStreamingCall`2::GetStatus()
// 0x00000010 Grpc.Core.Metadata Grpc.Core.AsyncDuplexStreamingCall`2::GetTrailers()
// 0x00000011 System.Void Grpc.Core.AsyncDuplexStreamingCall`2::Dispose()
// 0x00000012 System.Threading.Tasks.Task`1<Grpc.Core.Metadata> Grpc.Core.AsyncServerStreamingCall`1::get_ResponseHeadersAsync()
// 0x00000013 Grpc.Core.Status Grpc.Core.AsyncServerStreamingCall`1::GetStatus()
// 0x00000014 Grpc.Core.Metadata Grpc.Core.AsyncServerStreamingCall`1::GetTrailers()
// 0x00000015 System.Void Grpc.Core.AsyncServerStreamingCall`1::Dispose()
// 0x00000016 System.Void Grpc.Core.AsyncUnaryCall`1::.ctor(System.Threading.Tasks.Task`1<TResponse>,System.Func`2<System.Object,System.Threading.Tasks.Task`1<Grpc.Core.Metadata>>,System.Func`2<System.Object,Grpc.Core.Status>,System.Func`2<System.Object,Grpc.Core.Metadata>,System.Action`1<System.Object>,System.Object)
// 0x00000017 System.Threading.Tasks.Task`1<TResponse> Grpc.Core.AsyncUnaryCall`1::get_ResponseAsync()
// 0x00000018 System.Threading.Tasks.Task`1<Grpc.Core.Metadata> Grpc.Core.AsyncUnaryCall`1::get_ResponseHeadersAsync()
// 0x00000019 Grpc.Core.Status Grpc.Core.AsyncUnaryCall`1::GetStatus()
// 0x0000001A Grpc.Core.Metadata Grpc.Core.AsyncUnaryCall`1::GetTrailers()
// 0x0000001B System.Void Grpc.Core.AsyncUnaryCall`1::Dispose()
// 0x0000001C System.Void Grpc.Core.CallCredentials::InternalPopulateConfiguration(Grpc.Core.CallCredentialsConfiguratorBase,System.Object)
// 0x0000001D System.Void Grpc.Core.CallCredentialsConfiguratorBase::.ctor()
extern void CallCredentialsConfiguratorBase__ctor_m035E8AA8542578202D84B798A078E9B73DE48044 (void);
// 0x0000001E Grpc.Core.AsyncUnaryCall`1<TResponse> Grpc.Core.CallInvoker::AsyncUnaryCall(Grpc.Core.Method`2<TRequest,TResponse>,System.String,Grpc.Core.CallOptions,TRequest)
// 0x0000001F Grpc.Core.AsyncDuplexStreamingCall`2<TRequest,TResponse> Grpc.Core.CallInvoker::AsyncDuplexStreamingCall(Grpc.Core.Method`2<TRequest,TResponse>,System.String,Grpc.Core.CallOptions)
// 0x00000020 System.Void Grpc.Core.CallInvoker::.ctor()
extern void CallInvoker__ctor_m0493AFF4467C6E6CAAD94AE1B17302CA774C6716 (void);
// 0x00000021 Grpc.Core.Metadata Grpc.Core.CallOptions::get_Headers()
extern void CallOptions_get_Headers_m7DB2D6045E675B5EADFAB4E7790E9861FF9B791D (void);
// 0x00000022 System.Nullable`1<System.DateTime> Grpc.Core.CallOptions::get_Deadline()
extern void CallOptions_get_Deadline_mDF9B3BB905CEEEDDCF8F9536525B637F071528FC (void);
// 0x00000023 System.Threading.CancellationToken Grpc.Core.CallOptions::get_CancellationToken()
extern void CallOptions_get_CancellationToken_mC631E51DD2518E4C41B2EA2426445CC6558F31A2 (void);
// 0x00000024 Grpc.Core.WriteOptions Grpc.Core.CallOptions::get_WriteOptions()
extern void CallOptions_get_WriteOptions_m0B6F41F1B39E6508CD6CB8F6680B04181856E411 (void);
// 0x00000025 Grpc.Core.ContextPropagationToken Grpc.Core.CallOptions::get_PropagationToken()
extern void CallOptions_get_PropagationToken_mEB07DD79D1DB3488F7095420531F4A3DAE59C67C (void);
// 0x00000026 Grpc.Core.CallCredentials Grpc.Core.CallOptions::get_Credentials()
extern void CallOptions_get_Credentials_m17F062E54416A45F2F0C220523C0AEE0399A6976 (void);
// 0x00000027 Grpc.Core.Internal.CallFlags Grpc.Core.CallOptions::get_Flags()
extern void CallOptions_get_Flags_m6B4AEC31DE7EFAD89F5065255E1E7F44F5C478B6 (void);
// 0x00000028 Grpc.Core.CallOptions Grpc.Core.CallOptions::WithHeaders(Grpc.Core.Metadata)
extern void CallOptions_WithHeaders_m35405F9DE9E7A043D51075ECD2CCCD26C1FCEE62 (void);
// 0x00000029 Grpc.Core.CallOptions Grpc.Core.CallOptions::WithDeadline(System.DateTime)
extern void CallOptions_WithDeadline_m2E3DA9AD2633063C721DF4E9159DBFBF3601EE6E (void);
// 0x0000002A Grpc.Core.CallOptions Grpc.Core.CallOptions::WithCancellationToken(System.Threading.CancellationToken)
extern void CallOptions_WithCancellationToken_m72017DC81CDA94931F8D0CC950025A131F1E041E (void);
// 0x0000002B System.Void Grpc.Core.ChannelBase::.ctor(System.String)
extern void ChannelBase__ctor_m98321E935004E85838C8632F6F3C474C21077EF1 (void);
// 0x0000002C Grpc.Core.CallInvoker Grpc.Core.ChannelBase::CreateCallInvoker()
// 0x0000002D System.Threading.Tasks.Task Grpc.Core.ChannelBase::ShutdownAsync()
extern void ChannelBase_ShutdownAsync_m9E3D96850025A611947E62C91ECE8C8741656CB5 (void);
// 0x0000002E System.Threading.Tasks.Task Grpc.Core.ChannelBase::ShutdownAsyncCore()
extern void ChannelBase_ShutdownAsyncCore_m1DD7982F65363921995F5485EB7D9FC98C82EB05 (void);
// 0x0000002F System.Void Grpc.Core.ChannelBase/<ShutdownAsyncCore>d__6::MoveNext()
extern void U3CShutdownAsyncCoreU3Ed__6_MoveNext_m3BDB2DCC02217E72ACCF45D8D0FA7FBA99AB1054 (void);
// 0x00000030 System.Void Grpc.Core.ChannelBase/<ShutdownAsyncCore>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CShutdownAsyncCoreU3Ed__6_SetStateMachine_mA42AEA33EF9D2FCA74FD644E435B77E49A8D775B (void);
// 0x00000031 System.Void Grpc.Core.ChannelCredentials::.ctor()
extern void ChannelCredentials__ctor_mE748B679BDC1F83CBC6AD423FF9BC0A866624945 (void);
// 0x00000032 Grpc.Core.ChannelCredentials Grpc.Core.ChannelCredentials::get_Insecure()
extern void ChannelCredentials_get_Insecure_m8D99B79F97F8B8C2D3609960E737647966A9A1F4 (void);
// 0x00000033 System.Void Grpc.Core.ChannelCredentials::InternalPopulateConfiguration(Grpc.Core.ChannelCredentialsConfiguratorBase,System.Object)
// 0x00000034 System.Void Grpc.Core.ChannelCredentials::.cctor()
extern void ChannelCredentials__cctor_mE13414DE25A46A5C5AD0CBD4220C158258533569 (void);
// 0x00000035 System.Void Grpc.Core.ChannelCredentials/InsecureCredentials::InternalPopulateConfiguration(Grpc.Core.ChannelCredentialsConfiguratorBase,System.Object)
extern void InsecureCredentials_InternalPopulateConfiguration_mCC132BE9FB0ECE135AA8C921A921CAB9F0CC2A88 (void);
// 0x00000036 System.Void Grpc.Core.ChannelCredentials/InsecureCredentials::.ctor()
extern void InsecureCredentials__ctor_mF7239EE6BC6BB020F2F7C0F2D8B47A264147F145 (void);
// 0x00000037 System.Void Grpc.Core.ChannelCredentialsConfiguratorBase::SetInsecureCredentials(System.Object)
// 0x00000038 System.Void Grpc.Core.ChannelCredentialsConfiguratorBase::SetSslCredentials(System.Object,System.String,Grpc.Core.KeyCertificatePair,Grpc.Core.VerifyPeerCallback)
// 0x00000039 System.Void Grpc.Core.ChannelCredentialsConfiguratorBase::.ctor()
extern void ChannelCredentialsConfiguratorBase__ctor_m4B5CD42B43540A30701A162F98D11F41013D2A8E (void);
// 0x0000003A System.Void Grpc.Core.ContextPropagationOptions::.ctor(System.Boolean,System.Boolean)
extern void ContextPropagationOptions__ctor_mEF6EF94996038C57FA45686B3C6A17DDE36C5681 (void);
// 0x0000003B System.Boolean Grpc.Core.ContextPropagationOptions::get_IsPropagateDeadline()
extern void ContextPropagationOptions_get_IsPropagateDeadline_m0772C88F547F60E0A18F8DA5131F077BD76D773B (void);
// 0x0000003C System.Boolean Grpc.Core.ContextPropagationOptions::get_IsPropagateCancellation()
extern void ContextPropagationOptions_get_IsPropagateCancellation_mA5597D556B510959B46BDE1730350F1EC76DA7DD (void);
// 0x0000003D System.Void Grpc.Core.ContextPropagationOptions::.cctor()
extern void ContextPropagationOptions__cctor_m28BB767211B5111235309DCB442D19D90227C407 (void);
// 0x0000003E System.Byte[] Grpc.Core.DeserializationContext::PayloadAsNewBuffer()
extern void DeserializationContext_PayloadAsNewBuffer_m270A0A2C266E488C39A0FAA34470859E939440FF (void);
// 0x0000003F System.Buffers.ReadOnlySequence`1<System.Byte> Grpc.Core.DeserializationContext::PayloadAsReadOnlySequence()
extern void DeserializationContext_PayloadAsReadOnlySequence_m616A017C215DBBC6097A23D5311712C673A1C8CA (void);
// 0x00000040 System.Void Grpc.Core.DeserializationContext::.ctor()
extern void DeserializationContext__ctor_mF3E6811B2272C77A6C03686CE836914BE895A20D (void);
// 0x00000041 T Grpc.Core.IAsyncStreamReader`1::get_Current()
// 0x00000042 System.Threading.Tasks.Task`1<System.Boolean> Grpc.Core.IAsyncStreamReader`1::MoveNext(System.Threading.CancellationToken)
// 0x00000043 System.Threading.Tasks.Task Grpc.Core.IAsyncStreamWriter`1::WriteAsync(T)
// 0x00000044 Grpc.Core.WriteOptions Grpc.Core.IAsyncStreamWriter`1::get_WriteOptions()
// 0x00000045 System.Void Grpc.Core.IAsyncStreamWriter`1::set_WriteOptions(Grpc.Core.WriteOptions)
// 0x00000046 System.Threading.Tasks.Task Grpc.Core.IClientStreamWriter`1::CompleteAsync()
// 0x00000047 System.String Grpc.Core.KeyCertificatePair::get_CertificateChain()
extern void KeyCertificatePair_get_CertificateChain_mB65828A5E21ACE8181362CC574C1B0BE4C440FA4 (void);
// 0x00000048 System.String Grpc.Core.KeyCertificatePair::get_PrivateKey()
extern void KeyCertificatePair_get_PrivateKey_m9011AF9F4FD9A1323FE33EE7441B305016C95871 (void);
// 0x00000049 System.Void Grpc.Core.Marshaller`1::.ctor(System.Func`2<T,System.Byte[]>,System.Func`2<System.Byte[],T>)
// 0x0000004A System.Action`2<T,Grpc.Core.SerializationContext> Grpc.Core.Marshaller`1::get_ContextualSerializer()
// 0x0000004B System.Func`2<Grpc.Core.DeserializationContext,T> Grpc.Core.Marshaller`1::get_ContextualDeserializer()
// 0x0000004C System.Void Grpc.Core.Marshaller`1::EmulateContextualSerializer(T,Grpc.Core.SerializationContext)
// 0x0000004D T Grpc.Core.Marshaller`1::EmulateContextualDeserializer(Grpc.Core.DeserializationContext)
// 0x0000004E System.Void Grpc.Core.Metadata::.ctor()
extern void Metadata__ctor_mCCA8906E38BEC39980A829BDBF672D140C7E0A78 (void);
// 0x0000004F Grpc.Core.Metadata Grpc.Core.Metadata::Freeze()
extern void Metadata_Freeze_m66A962D9D4D7B589175C4E62CD18AE6672F062C5 (void);
// 0x00000050 System.Int32 Grpc.Core.Metadata::IndexOf(Grpc.Core.Metadata/Entry)
extern void Metadata_IndexOf_mBDDD72D9D40C96783300C84E007322E0D036CFF2 (void);
// 0x00000051 System.Void Grpc.Core.Metadata::Insert(System.Int32,Grpc.Core.Metadata/Entry)
extern void Metadata_Insert_m072269B08A59F4AA3BFB10BFC2C1CABFA99B6392 (void);
// 0x00000052 System.Void Grpc.Core.Metadata::RemoveAt(System.Int32)
extern void Metadata_RemoveAt_m197A2EBD6BD81996A062AA501ADBB981998C6016 (void);
// 0x00000053 Grpc.Core.Metadata/Entry Grpc.Core.Metadata::get_Item(System.Int32)
extern void Metadata_get_Item_mD4086B132B329C7D36BB86544925B58F11FC889D (void);
// 0x00000054 System.Void Grpc.Core.Metadata::set_Item(System.Int32,Grpc.Core.Metadata/Entry)
extern void Metadata_set_Item_m1747E6C321E886C171650296870A4203BF944A02 (void);
// 0x00000055 System.Void Grpc.Core.Metadata::Add(Grpc.Core.Metadata/Entry)
extern void Metadata_Add_m198C0CC91A01188EBF3E4C5825B877E63FFE5F22 (void);
// 0x00000056 System.Void Grpc.Core.Metadata::Clear()
extern void Metadata_Clear_m7E263C3487628DDDB7ACA00C980DF8F5D0E5914A (void);
// 0x00000057 System.Boolean Grpc.Core.Metadata::Contains(Grpc.Core.Metadata/Entry)
extern void Metadata_Contains_mC5823CCE74E4081D3262063F90591F6D286E843D (void);
// 0x00000058 System.Void Grpc.Core.Metadata::CopyTo(Grpc.Core.Metadata/Entry[],System.Int32)
extern void Metadata_CopyTo_m594DF4395B2F4DE0DBF4CB7E7D632791ED786084 (void);
// 0x00000059 System.Int32 Grpc.Core.Metadata::get_Count()
extern void Metadata_get_Count_m54FF72FF783943CDA17A317C58CAF8E638609EEE (void);
// 0x0000005A System.Boolean Grpc.Core.Metadata::get_IsReadOnly()
extern void Metadata_get_IsReadOnly_m36E9C844E8A80722680B2ADA927111CBACF56D3A (void);
// 0x0000005B System.Boolean Grpc.Core.Metadata::Remove(Grpc.Core.Metadata/Entry)
extern void Metadata_Remove_mFD0F7EF37C4E823F0EFD340A1D5B464443620D0E (void);
// 0x0000005C System.Collections.Generic.IEnumerator`1<Grpc.Core.Metadata/Entry> Grpc.Core.Metadata::GetEnumerator()
extern void Metadata_GetEnumerator_m855789C418F0D9310B065AD4386F920191259653 (void);
// 0x0000005D System.Collections.IEnumerator Grpc.Core.Metadata::System.Collections.IEnumerable.GetEnumerator()
extern void Metadata_System_Collections_IEnumerable_GetEnumerator_m8D8C79F62D49CD7ACD576A539C8F7406FA200DA6 (void);
// 0x0000005E System.Void Grpc.Core.Metadata::CheckWriteable()
extern void Metadata_CheckWriteable_m3D19ACA0B3FC5D4AA51E1B7F141ADA8700694877 (void);
// 0x0000005F System.Void Grpc.Core.Metadata::.cctor()
extern void Metadata__cctor_m6B0F1994247C51D8BE4FB896CDCD068DF3150F21 (void);
// 0x00000060 System.Void Grpc.Core.Metadata/Entry::.ctor(System.String,System.String,System.Byte[])
extern void Entry__ctor_m1F23E2AEC76DE04614A4A6D6AA14E6F6BB7B4812 (void);
// 0x00000061 System.String Grpc.Core.Metadata/Entry::get_Key()
extern void Entry_get_Key_mE8D9A267799BF3F78FD30EE7ADA83F3B41ECA5DD (void);
// 0x00000062 System.String Grpc.Core.Metadata/Entry::get_Value()
extern void Entry_get_Value_m9DA5222BB9A19F23156FA15A8D0791CD108CF360 (void);
// 0x00000063 System.Boolean Grpc.Core.Metadata/Entry::get_IsBinary()
extern void Entry_get_IsBinary_m0DA2962C4F2FD2E1F9EFAADEB9CD4318357DB43D (void);
// 0x00000064 System.String Grpc.Core.Metadata/Entry::ToString()
extern void Entry_ToString_m007C06C27DDC351B2FD781127AD2924B8A6100F5 (void);
// 0x00000065 System.Byte[] Grpc.Core.Metadata/Entry::GetSerializedValueUnsafe()
extern void Entry_GetSerializedValueUnsafe_mA5C14354F2E7C781B41264BDC83BABCAFD9DF431 (void);
// 0x00000066 Grpc.Core.Metadata/Entry Grpc.Core.Metadata/Entry::CreateUnsafe(System.String,System.IntPtr,System.Int32)
extern void Entry_CreateUnsafe_m029547FF5A58186267C21BFB2F3F0AA5A8AF92F8 (void);
// 0x00000067 System.Boolean Grpc.Core.Metadata/Entry::HasBinaryHeaderSuffix(System.String)
extern void Entry_HasBinaryHeaderSuffix_mD5BAB0B3F6F9DEE791298A18C1018BED5870C5A0 (void);
// 0x00000068 System.Void Grpc.Core.Metadata/Entry::.cctor()
extern void Entry__cctor_mDF7EE73E9B1B03B1CE497C6206A634778410A94A (void);
// 0x00000069 System.Void Grpc.Core.Method`2::.ctor(Grpc.Core.MethodType,System.String,System.String,Grpc.Core.Marshaller`1<TRequest>,Grpc.Core.Marshaller`1<TResponse>)
// 0x0000006A System.String Grpc.Core.Method`2::get_ServiceName()
// 0x0000006B Grpc.Core.Marshaller`1<TRequest> Grpc.Core.Method`2::get_RequestMarshaller()
// 0x0000006C Grpc.Core.Marshaller`1<TResponse> Grpc.Core.Method`2::get_ResponseMarshaller()
// 0x0000006D System.String Grpc.Core.Method`2::get_FullName()
// 0x0000006E System.String Grpc.Core.Method`2::GetFullName(System.String,System.String)
// 0x0000006F System.Void Grpc.Core.RpcException::.ctor(Grpc.Core.Status)
extern void RpcException__ctor_mE10A6DA2E34D6550E57C7A40E6F67954A55C2D2E (void);
// 0x00000070 System.Void Grpc.Core.RpcException::.ctor(Grpc.Core.Status,System.String)
extern void RpcException__ctor_m75C5CB5B44B3A3309D6D1DA7F4F765CEBAD4F5CA (void);
// 0x00000071 System.Void Grpc.Core.RpcException::.ctor(Grpc.Core.Status,Grpc.Core.Metadata)
extern void RpcException__ctor_m9F78B3407E3E9C1C716A95F58E4B2E6CC72D4943 (void);
// 0x00000072 System.Void Grpc.Core.RpcException::.ctor(Grpc.Core.Status,Grpc.Core.Metadata,System.String)
extern void RpcException__ctor_mB6F32457FAD8F182092EB6A882F2C75165B120C6 (void);
// 0x00000073 Grpc.Core.Status Grpc.Core.RpcException::get_Status()
extern void RpcException_get_Status_m8F1EB6638F3819C6DF100B0AA1FF33D7F6F148B3 (void);
// 0x00000074 System.Void Grpc.Core.SerializationContext::Complete(System.Byte[])
extern void SerializationContext_Complete_m880989E38F9C55CFE6C9F11774DE409481A960DD (void);
// 0x00000075 System.Void Grpc.Core.SerializationContext::.ctor()
extern void SerializationContext__ctor_m5A7200322AFEF14361601F5E9B34296583757F90 (void);
// 0x00000076 System.Void Grpc.Core.VerifyPeerCallback::.ctor(System.Object,System.IntPtr)
extern void VerifyPeerCallback__ctor_mEF008E4B3EC8E60A26C2ADEF362AEF59C0C48085 (void);
// 0x00000077 System.Boolean Grpc.Core.VerifyPeerCallback::Invoke(Grpc.Core.VerifyPeerContext)
extern void VerifyPeerCallback_Invoke_mC970C57AE692023453EE4B2BFD523EACF9A76439 (void);
// 0x00000078 System.IAsyncResult Grpc.Core.VerifyPeerCallback::BeginInvoke(Grpc.Core.VerifyPeerContext,System.AsyncCallback,System.Object)
extern void VerifyPeerCallback_BeginInvoke_m639BD4B8B9ED1F66B5DACF16718063FFB00428A5 (void);
// 0x00000079 System.Boolean Grpc.Core.VerifyPeerCallback::EndInvoke(System.IAsyncResult)
extern void VerifyPeerCallback_EndInvoke_m04E5F63DDF815D82A464DDF12685E50309B73EE5 (void);
// 0x0000007A System.Void Grpc.Core.SslCredentials::.ctor()
extern void SslCredentials__ctor_m8B35719C14541011FB9DF867DCEDEB85B8B216D2 (void);
// 0x0000007B System.Void Grpc.Core.SslCredentials::.ctor(System.String,Grpc.Core.KeyCertificatePair,Grpc.Core.VerifyPeerCallback)
extern void SslCredentials__ctor_mDB9DFC62648BBF42707B01553A3DBAA6B2ABE04E (void);
// 0x0000007C System.Void Grpc.Core.SslCredentials::InternalPopulateConfiguration(Grpc.Core.ChannelCredentialsConfiguratorBase,System.Object)
extern void SslCredentials_InternalPopulateConfiguration_mAD60E0B02B81C91983ABC213902678E243E5B012 (void);
// 0x0000007D System.Void Grpc.Core.Status::.ctor(Grpc.Core.StatusCode,System.String)
extern void Status__ctor_mD813B072F537D5F71BA8EB89DD317DAB90850572 (void);
// 0x0000007E System.Void Grpc.Core.Status::.ctor(Grpc.Core.StatusCode,System.String,System.Exception)
extern void Status__ctor_m6C6D6985096E7E15D3685F68FAF87259023926AC (void);
// 0x0000007F Grpc.Core.StatusCode Grpc.Core.Status::get_StatusCode()
extern void Status_get_StatusCode_m6C049ABBAB172B6BF51F8C5A604A1472F3844A35 (void);
// 0x00000080 System.String Grpc.Core.Status::get_Detail()
extern void Status_get_Detail_m9F84C60B0F03E311AE703443F4936599EDA88F8C (void);
// 0x00000081 System.Exception Grpc.Core.Status::get_DebugException()
extern void Status_get_DebugException_mC77D9F815D97104E92AFE8340C5553C71995AF53 (void);
// 0x00000082 System.String Grpc.Core.Status::ToString()
extern void Status_ToString_mCE243D714A86853D238CBDDCF659E7F6C1233DAF (void);
// 0x00000083 System.Void Grpc.Core.Status::.cctor()
extern void Status__cctor_m68386D9900F5414BA359EC4EEEF2A542EB55CD0C (void);
// 0x00000084 System.Void Grpc.Core.VerifyPeerContext::.ctor(System.String,System.String)
extern void VerifyPeerContext__ctor_m79E4011388AE4D42F98B061A7D50DA2FE7D36917 (void);
// 0x00000085 System.Void Grpc.Core.WriteOptions::.ctor(Grpc.Core.WriteFlags)
extern void WriteOptions__ctor_m171A56D6247014221930FCEDF5668D3270DDF45D (void);
// 0x00000086 Grpc.Core.WriteFlags Grpc.Core.WriteOptions::get_Flags()
extern void WriteOptions_get_Flags_m25F923709D53D54D5DB52841C19A9832606D64CD (void);
// 0x00000087 System.Void Grpc.Core.WriteOptions::.cctor()
extern void WriteOptions__cctor_mD5CB859C96F87350A95D044F6423198BE2357737 (void);
// 0x00000088 System.Void Grpc.Core.Utils.GrpcPreconditions::CheckArgument(System.Boolean)
extern void GrpcPreconditions_CheckArgument_m6238CCC08E0176844EFC420947FC9373A3C8663C (void);
// 0x00000089 System.Void Grpc.Core.Utils.GrpcPreconditions::CheckArgument(System.Boolean,System.String)
extern void GrpcPreconditions_CheckArgument_mC10479F3B2FA86CE9D9EEC35D6F1B12DAA7D9446 (void);
// 0x0000008A T Grpc.Core.Utils.GrpcPreconditions::CheckNotNull(T)
// 0x0000008B T Grpc.Core.Utils.GrpcPreconditions::CheckNotNull(T,System.String)
// 0x0000008C System.Void Grpc.Core.Utils.GrpcPreconditions::CheckState(System.Boolean)
extern void GrpcPreconditions_CheckState_mF8DA7FE3DD5DF9B22AE77142D17843C1037A10F4 (void);
// 0x0000008D System.Void Grpc.Core.Utils.GrpcPreconditions::CheckState(System.Boolean,System.String)
extern void GrpcPreconditions_CheckState_m1D18F7FA9669AB2FE25782B3E301179E7637113A (void);
// 0x0000008E System.String Grpc.Core.Api.Utils.EncodingExtensions::GetString(System.Text.Encoding,System.Byte*,System.Int32)
extern void EncodingExtensions_GetString_m3627C4A66233591559DDFAF0E9E04F870041C63E (void);
// 0x0000008F System.String Grpc.Core.Api.Utils.EncodingExtensions::GetString(System.Text.Encoding,System.IntPtr,System.Int32)
extern void EncodingExtensions_GetString_m0832A890E3F4D24BA31BABCB90AD9FCBEE0E88C4 (void);
static Il2CppMethodPointer s_methodPointers[143] = 
{
	AsyncCallState__ctor_mAF2F026B2DDF4FD5B2336455FD66E253CBB586ED,
	AsyncCallState_ResponseHeadersAsync_m70B30B86ECEB1FCACC356F2F3373F2CA0FA9A773,
	AsyncCallState_GetStatus_m8672BAFF41DB382339A7670373956CC5FFB27A2D,
	AsyncCallState_GetTrailers_m94B728E17B8BD73DE2E7BF37427981053D336B2E,
	AsyncCallState_Dispose_m028D365B2071DC0095E400A99D4C9D5573CDAE53,
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
	CallCredentialsConfiguratorBase__ctor_m035E8AA8542578202D84B798A078E9B73DE48044,
	NULL,
	NULL,
	CallInvoker__ctor_m0493AFF4467C6E6CAAD94AE1B17302CA774C6716,
	CallOptions_get_Headers_m7DB2D6045E675B5EADFAB4E7790E9861FF9B791D,
	CallOptions_get_Deadline_mDF9B3BB905CEEEDDCF8F9536525B637F071528FC,
	CallOptions_get_CancellationToken_mC631E51DD2518E4C41B2EA2426445CC6558F31A2,
	CallOptions_get_WriteOptions_m0B6F41F1B39E6508CD6CB8F6680B04181856E411,
	CallOptions_get_PropagationToken_mEB07DD79D1DB3488F7095420531F4A3DAE59C67C,
	CallOptions_get_Credentials_m17F062E54416A45F2F0C220523C0AEE0399A6976,
	CallOptions_get_Flags_m6B4AEC31DE7EFAD89F5065255E1E7F44F5C478B6,
	CallOptions_WithHeaders_m35405F9DE9E7A043D51075ECD2CCCD26C1FCEE62,
	CallOptions_WithDeadline_m2E3DA9AD2633063C721DF4E9159DBFBF3601EE6E,
	CallOptions_WithCancellationToken_m72017DC81CDA94931F8D0CC950025A131F1E041E,
	ChannelBase__ctor_m98321E935004E85838C8632F6F3C474C21077EF1,
	NULL,
	ChannelBase_ShutdownAsync_m9E3D96850025A611947E62C91ECE8C8741656CB5,
	ChannelBase_ShutdownAsyncCore_m1DD7982F65363921995F5485EB7D9FC98C82EB05,
	U3CShutdownAsyncCoreU3Ed__6_MoveNext_m3BDB2DCC02217E72ACCF45D8D0FA7FBA99AB1054,
	U3CShutdownAsyncCoreU3Ed__6_SetStateMachine_mA42AEA33EF9D2FCA74FD644E435B77E49A8D775B,
	ChannelCredentials__ctor_mE748B679BDC1F83CBC6AD423FF9BC0A866624945,
	ChannelCredentials_get_Insecure_m8D99B79F97F8B8C2D3609960E737647966A9A1F4,
	NULL,
	ChannelCredentials__cctor_mE13414DE25A46A5C5AD0CBD4220C158258533569,
	InsecureCredentials_InternalPopulateConfiguration_mCC132BE9FB0ECE135AA8C921A921CAB9F0CC2A88,
	InsecureCredentials__ctor_mF7239EE6BC6BB020F2F7C0F2D8B47A264147F145,
	NULL,
	NULL,
	ChannelCredentialsConfiguratorBase__ctor_m4B5CD42B43540A30701A162F98D11F41013D2A8E,
	ContextPropagationOptions__ctor_mEF6EF94996038C57FA45686B3C6A17DDE36C5681,
	ContextPropagationOptions_get_IsPropagateDeadline_m0772C88F547F60E0A18F8DA5131F077BD76D773B,
	ContextPropagationOptions_get_IsPropagateCancellation_mA5597D556B510959B46BDE1730350F1EC76DA7DD,
	ContextPropagationOptions__cctor_m28BB767211B5111235309DCB442D19D90227C407,
	DeserializationContext_PayloadAsNewBuffer_m270A0A2C266E488C39A0FAA34470859E939440FF,
	DeserializationContext_PayloadAsReadOnlySequence_m616A017C215DBBC6097A23D5311712C673A1C8CA,
	DeserializationContext__ctor_mF3E6811B2272C77A6C03686CE836914BE895A20D,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	KeyCertificatePair_get_CertificateChain_mB65828A5E21ACE8181362CC574C1B0BE4C440FA4,
	KeyCertificatePair_get_PrivateKey_m9011AF9F4FD9A1323FE33EE7441B305016C95871,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Metadata__ctor_mCCA8906E38BEC39980A829BDBF672D140C7E0A78,
	Metadata_Freeze_m66A962D9D4D7B589175C4E62CD18AE6672F062C5,
	Metadata_IndexOf_mBDDD72D9D40C96783300C84E007322E0D036CFF2,
	Metadata_Insert_m072269B08A59F4AA3BFB10BFC2C1CABFA99B6392,
	Metadata_RemoveAt_m197A2EBD6BD81996A062AA501ADBB981998C6016,
	Metadata_get_Item_mD4086B132B329C7D36BB86544925B58F11FC889D,
	Metadata_set_Item_m1747E6C321E886C171650296870A4203BF944A02,
	Metadata_Add_m198C0CC91A01188EBF3E4C5825B877E63FFE5F22,
	Metadata_Clear_m7E263C3487628DDDB7ACA00C980DF8F5D0E5914A,
	Metadata_Contains_mC5823CCE74E4081D3262063F90591F6D286E843D,
	Metadata_CopyTo_m594DF4395B2F4DE0DBF4CB7E7D632791ED786084,
	Metadata_get_Count_m54FF72FF783943CDA17A317C58CAF8E638609EEE,
	Metadata_get_IsReadOnly_m36E9C844E8A80722680B2ADA927111CBACF56D3A,
	Metadata_Remove_mFD0F7EF37C4E823F0EFD340A1D5B464443620D0E,
	Metadata_GetEnumerator_m855789C418F0D9310B065AD4386F920191259653,
	Metadata_System_Collections_IEnumerable_GetEnumerator_m8D8C79F62D49CD7ACD576A539C8F7406FA200DA6,
	Metadata_CheckWriteable_m3D19ACA0B3FC5D4AA51E1B7F141ADA8700694877,
	Metadata__cctor_m6B0F1994247C51D8BE4FB896CDCD068DF3150F21,
	Entry__ctor_m1F23E2AEC76DE04614A4A6D6AA14E6F6BB7B4812,
	Entry_get_Key_mE8D9A267799BF3F78FD30EE7ADA83F3B41ECA5DD,
	Entry_get_Value_m9DA5222BB9A19F23156FA15A8D0791CD108CF360,
	Entry_get_IsBinary_m0DA2962C4F2FD2E1F9EFAADEB9CD4318357DB43D,
	Entry_ToString_m007C06C27DDC351B2FD781127AD2924B8A6100F5,
	Entry_GetSerializedValueUnsafe_mA5C14354F2E7C781B41264BDC83BABCAFD9DF431,
	Entry_CreateUnsafe_m029547FF5A58186267C21BFB2F3F0AA5A8AF92F8,
	Entry_HasBinaryHeaderSuffix_mD5BAB0B3F6F9DEE791298A18C1018BED5870C5A0,
	Entry__cctor_mDF7EE73E9B1B03B1CE497C6206A634778410A94A,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	RpcException__ctor_mE10A6DA2E34D6550E57C7A40E6F67954A55C2D2E,
	RpcException__ctor_m75C5CB5B44B3A3309D6D1DA7F4F765CEBAD4F5CA,
	RpcException__ctor_m9F78B3407E3E9C1C716A95F58E4B2E6CC72D4943,
	RpcException__ctor_mB6F32457FAD8F182092EB6A882F2C75165B120C6,
	RpcException_get_Status_m8F1EB6638F3819C6DF100B0AA1FF33D7F6F148B3,
	SerializationContext_Complete_m880989E38F9C55CFE6C9F11774DE409481A960DD,
	SerializationContext__ctor_m5A7200322AFEF14361601F5E9B34296583757F90,
	VerifyPeerCallback__ctor_mEF008E4B3EC8E60A26C2ADEF362AEF59C0C48085,
	VerifyPeerCallback_Invoke_mC970C57AE692023453EE4B2BFD523EACF9A76439,
	VerifyPeerCallback_BeginInvoke_m639BD4B8B9ED1F66B5DACF16718063FFB00428A5,
	VerifyPeerCallback_EndInvoke_m04E5F63DDF815D82A464DDF12685E50309B73EE5,
	SslCredentials__ctor_m8B35719C14541011FB9DF867DCEDEB85B8B216D2,
	SslCredentials__ctor_mDB9DFC62648BBF42707B01553A3DBAA6B2ABE04E,
	SslCredentials_InternalPopulateConfiguration_mAD60E0B02B81C91983ABC213902678E243E5B012,
	Status__ctor_mD813B072F537D5F71BA8EB89DD317DAB90850572,
	Status__ctor_m6C6D6985096E7E15D3685F68FAF87259023926AC,
	Status_get_StatusCode_m6C049ABBAB172B6BF51F8C5A604A1472F3844A35,
	Status_get_Detail_m9F84C60B0F03E311AE703443F4936599EDA88F8C,
	Status_get_DebugException_mC77D9F815D97104E92AFE8340C5553C71995AF53,
	Status_ToString_mCE243D714A86853D238CBDDCF659E7F6C1233DAF,
	Status__cctor_m68386D9900F5414BA359EC4EEEF2A542EB55CD0C,
	VerifyPeerContext__ctor_m79E4011388AE4D42F98B061A7D50DA2FE7D36917,
	WriteOptions__ctor_m171A56D6247014221930FCEDF5668D3270DDF45D,
	WriteOptions_get_Flags_m25F923709D53D54D5DB52841C19A9832606D64CD,
	WriteOptions__cctor_mD5CB859C96F87350A95D044F6423198BE2357737,
	GrpcPreconditions_CheckArgument_m6238CCC08E0176844EFC420947FC9373A3C8663C,
	GrpcPreconditions_CheckArgument_mC10479F3B2FA86CE9D9EEC35D6F1B12DAA7D9446,
	NULL,
	NULL,
	GrpcPreconditions_CheckState_mF8DA7FE3DD5DF9B22AE77142D17843C1037A10F4,
	GrpcPreconditions_CheckState_m1D18F7FA9669AB2FE25782B3E301179E7637113A,
	EncodingExtensions_GetString_m3627C4A66233591559DDFAF0E9E04F870041C63E,
	EncodingExtensions_GetString_m0832A890E3F4D24BA31BABCB90AD9FCBEE0E88C4,
};
extern void AsyncCallState__ctor_mAF2F026B2DDF4FD5B2336455FD66E253CBB586ED_AdjustorThunk (void);
extern void AsyncCallState_ResponseHeadersAsync_m70B30B86ECEB1FCACC356F2F3373F2CA0FA9A773_AdjustorThunk (void);
extern void AsyncCallState_GetStatus_m8672BAFF41DB382339A7670373956CC5FFB27A2D_AdjustorThunk (void);
extern void AsyncCallState_GetTrailers_m94B728E17B8BD73DE2E7BF37427981053D336B2E_AdjustorThunk (void);
extern void AsyncCallState_Dispose_m028D365B2071DC0095E400A99D4C9D5573CDAE53_AdjustorThunk (void);
extern void CallOptions_get_Headers_m7DB2D6045E675B5EADFAB4E7790E9861FF9B791D_AdjustorThunk (void);
extern void CallOptions_get_Deadline_mDF9B3BB905CEEEDDCF8F9536525B637F071528FC_AdjustorThunk (void);
extern void CallOptions_get_CancellationToken_mC631E51DD2518E4C41B2EA2426445CC6558F31A2_AdjustorThunk (void);
extern void CallOptions_get_WriteOptions_m0B6F41F1B39E6508CD6CB8F6680B04181856E411_AdjustorThunk (void);
extern void CallOptions_get_PropagationToken_mEB07DD79D1DB3488F7095420531F4A3DAE59C67C_AdjustorThunk (void);
extern void CallOptions_get_Credentials_m17F062E54416A45F2F0C220523C0AEE0399A6976_AdjustorThunk (void);
extern void CallOptions_get_Flags_m6B4AEC31DE7EFAD89F5065255E1E7F44F5C478B6_AdjustorThunk (void);
extern void CallOptions_WithHeaders_m35405F9DE9E7A043D51075ECD2CCCD26C1FCEE62_AdjustorThunk (void);
extern void CallOptions_WithDeadline_m2E3DA9AD2633063C721DF4E9159DBFBF3601EE6E_AdjustorThunk (void);
extern void CallOptions_WithCancellationToken_m72017DC81CDA94931F8D0CC950025A131F1E041E_AdjustorThunk (void);
extern void U3CShutdownAsyncCoreU3Ed__6_MoveNext_m3BDB2DCC02217E72ACCF45D8D0FA7FBA99AB1054_AdjustorThunk (void);
extern void U3CShutdownAsyncCoreU3Ed__6_SetStateMachine_mA42AEA33EF9D2FCA74FD644E435B77E49A8D775B_AdjustorThunk (void);
extern void Status__ctor_mD813B072F537D5F71BA8EB89DD317DAB90850572_AdjustorThunk (void);
extern void Status__ctor_m6C6D6985096E7E15D3685F68FAF87259023926AC_AdjustorThunk (void);
extern void Status_get_StatusCode_m6C049ABBAB172B6BF51F8C5A604A1472F3844A35_AdjustorThunk (void);
extern void Status_get_Detail_m9F84C60B0F03E311AE703443F4936599EDA88F8C_AdjustorThunk (void);
extern void Status_get_DebugException_mC77D9F815D97104E92AFE8340C5553C71995AF53_AdjustorThunk (void);
extern void Status_ToString_mCE243D714A86853D238CBDDCF659E7F6C1233DAF_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[23] = 
{
	{ 0x06000001, AsyncCallState__ctor_mAF2F026B2DDF4FD5B2336455FD66E253CBB586ED_AdjustorThunk },
	{ 0x06000002, AsyncCallState_ResponseHeadersAsync_m70B30B86ECEB1FCACC356F2F3373F2CA0FA9A773_AdjustorThunk },
	{ 0x06000003, AsyncCallState_GetStatus_m8672BAFF41DB382339A7670373956CC5FFB27A2D_AdjustorThunk },
	{ 0x06000004, AsyncCallState_GetTrailers_m94B728E17B8BD73DE2E7BF37427981053D336B2E_AdjustorThunk },
	{ 0x06000005, AsyncCallState_Dispose_m028D365B2071DC0095E400A99D4C9D5573CDAE53_AdjustorThunk },
	{ 0x06000021, CallOptions_get_Headers_m7DB2D6045E675B5EADFAB4E7790E9861FF9B791D_AdjustorThunk },
	{ 0x06000022, CallOptions_get_Deadline_mDF9B3BB905CEEEDDCF8F9536525B637F071528FC_AdjustorThunk },
	{ 0x06000023, CallOptions_get_CancellationToken_mC631E51DD2518E4C41B2EA2426445CC6558F31A2_AdjustorThunk },
	{ 0x06000024, CallOptions_get_WriteOptions_m0B6F41F1B39E6508CD6CB8F6680B04181856E411_AdjustorThunk },
	{ 0x06000025, CallOptions_get_PropagationToken_mEB07DD79D1DB3488F7095420531F4A3DAE59C67C_AdjustorThunk },
	{ 0x06000026, CallOptions_get_Credentials_m17F062E54416A45F2F0C220523C0AEE0399A6976_AdjustorThunk },
	{ 0x06000027, CallOptions_get_Flags_m6B4AEC31DE7EFAD89F5065255E1E7F44F5C478B6_AdjustorThunk },
	{ 0x06000028, CallOptions_WithHeaders_m35405F9DE9E7A043D51075ECD2CCCD26C1FCEE62_AdjustorThunk },
	{ 0x06000029, CallOptions_WithDeadline_m2E3DA9AD2633063C721DF4E9159DBFBF3601EE6E_AdjustorThunk },
	{ 0x0600002A, CallOptions_WithCancellationToken_m72017DC81CDA94931F8D0CC950025A131F1E041E_AdjustorThunk },
	{ 0x0600002F, U3CShutdownAsyncCoreU3Ed__6_MoveNext_m3BDB2DCC02217E72ACCF45D8D0FA7FBA99AB1054_AdjustorThunk },
	{ 0x06000030, U3CShutdownAsyncCoreU3Ed__6_SetStateMachine_mA42AEA33EF9D2FCA74FD644E435B77E49A8D775B_AdjustorThunk },
	{ 0x0600007D, Status__ctor_mD813B072F537D5F71BA8EB89DD317DAB90850572_AdjustorThunk },
	{ 0x0600007E, Status__ctor_m6C6D6985096E7E15D3685F68FAF87259023926AC_AdjustorThunk },
	{ 0x0600007F, Status_get_StatusCode_m6C049ABBAB172B6BF51F8C5A604A1472F3844A35_AdjustorThunk },
	{ 0x06000080, Status_get_Detail_m9F84C60B0F03E311AE703443F4936599EDA88F8C_AdjustorThunk },
	{ 0x06000081, Status_get_DebugException_mC77D9F815D97104E92AFE8340C5553C71995AF53_AdjustorThunk },
	{ 0x06000082, Status_ToString_mCE243D714A86853D238CBDDCF659E7F6C1233DAF_AdjustorThunk },
};
static const int32_t s_InvokerIndices[143] = 
{
	276,
	5567,
	5596,
	5567,
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
	-1,
	2376,
	5611,
	-1,
	-1,
	5611,
	5567,
	5442,
	5515,
	5567,
	5567,
	5567,
	5546,
	2832,
	2831,
	2830,
	4506,
	5567,
	5567,
	5567,
	5611,
	4506,
	5611,
	7704,
	2376,
	7721,
	2376,
	5611,
	4506,
	654,
	5611,
	2413,
	5590,
	5590,
	7721,
	5567,
	5468,
	5611,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	5567,
	5567,
	-1,
	-1,
	-1,
	-1,
	-1,
	5611,
	5567,
	3201,
	2252,
	4488,
	3343,
	2252,
	4506,
	5611,
	3900,
	2369,
	5546,
	5590,
	3900,
	5567,
	5567,
	5611,
	7721,
	1158,
	5567,
	5567,
	5590,
	5567,
	5567,
	6423,
	7559,
	7721,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	4534,
	2422,
	2422,
	1184,
	5596,
	4506,
	5611,
	2371,
	3900,
	814,
	3900,
	5611,
	1158,
	2376,
	2252,
	1124,
	5546,
	5567,
	5567,
	5567,
	7721,
	2376,
	4488,
	5546,
	7721,
	7618,
	7120,
	-1,
	-1,
	7618,
	7120,
	6415,
	6423,
};
static const Il2CppTokenRangePair s_rgctxIndices[4] = 
{
	{ 0x02000017, { 0, 10 } },
	{ 0x0200001B, { 10, 4 } },
	{ 0x0600008A, { 14, 1 } },
	{ 0x0600008B, { 15, 1 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[16] = 
{
	{ (Il2CppRGCTXDataType)3, 45638 },
	{ (Il2CppRGCTXDataType)3, 45639 },
	{ (Il2CppRGCTXDataType)3, 28873 },
	{ (Il2CppRGCTXDataType)2, 2415 },
	{ (Il2CppRGCTXDataType)3, 1136 },
	{ (Il2CppRGCTXDataType)3, 28872 },
	{ (Il2CppRGCTXDataType)2, 3534 },
	{ (Il2CppRGCTXDataType)3, 18706 },
	{ (Il2CppRGCTXDataType)3, 18672 },
	{ (Il2CppRGCTXDataType)3, 18696 },
	{ (Il2CppRGCTXDataType)3, 45641 },
	{ (Il2CppRGCTXDataType)3, 45643 },
	{ (Il2CppRGCTXDataType)3, 29042 },
	{ (Il2CppRGCTXDataType)2, 5822 },
	{ (Il2CppRGCTXDataType)2, 183 },
	{ (Il2CppRGCTXDataType)2, 184 },
};
extern const CustomAttributesCacheGenerator g_Grpc_Core_Api_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Grpc_Core_Api_CodeGenModule;
const Il2CppCodeGenModule g_Grpc_Core_Api_CodeGenModule = 
{
	"Grpc.Core.Api.dll",
	143,
	s_methodPointers,
	23,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	4,
	s_rgctxIndices,
	16,
	s_rgctxValues,
	NULL,
	g_Grpc_Core_Api_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
