#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<MagicOnion.GrpcChannelx>
struct Action_1_t549C5EF27D2CC5AD07CBB9088B404BF46A678163;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<MagicOnion.IStreamingHubMarker,System.ValueTuple`2<System.Func`1<System.Threading.Tasks.Task>,MagicOnion.Client.ManagedStreamingHubInfo>>
struct Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.Object,System.ValueTuple`2<System.Object,MagicOnion.Client.ManagedStreamingHubInfo>>
struct Dictionary_2_t39E5A8A785083F20A77F68BEA7652404575853C6;
// System.Collections.Generic.Dictionary`2<System.String,Grpc.Core.ChannelOption>
struct Dictionary_2_t8DC48E6E6D4B67BC3150106AC2D9CA9E07CA3928;
// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49;
// System.Func`1<System.Threading.Tasks.Task>
struct Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.ValueTuple`2<System.Func`1<System.Threading.Tasks.Task>,MagicOnion.Client.ManagedStreamingHubInfo>,MagicOnion.Client.ManagedStreamingHubInfo>
struct Func_2_t69A7D283CF5BDCF8AA89902CBF7815EFE642BE1A;
// System.Func`2<System.ValueTuple`2<System.Object,MagicOnion.Client.ManagedStreamingHubInfo>,MagicOnion.Client.ManagedStreamingHubInfo>
struct Func_2_t3712C8E43A56E956640C364FE07DA16A3672FFAD;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerable_1_t8ACA6B0DE7FFF63CD5FC28E90063271CA8B5DA3D;
// System.Collections.Generic.IEnumerable`1<System.ValueTuple`2<System.Func`1<System.Threading.Tasks.Task>,MagicOnion.Client.ManagedStreamingHubInfo>>
struct IEnumerable_1_t3A20606EE037567D9ED76441BECCF52473792E42;
// System.Collections.Generic.IEnumerable`1<System.ValueTuple`2<System.Object,MagicOnion.Client.ManagedStreamingHubInfo>>
struct IEnumerable_1_t23DFAD4579A47B2299FE6607C38E442DB433CA69;
// System.Collections.Generic.IEnumerable`1<Grpc.Core.ChannelOption>
struct IEnumerable_1_tEA4D246882C4D1B27BBA6CB319CA2B1757E98C9C;
// System.Collections.Generic.IEnumerable`1<MagicOnion.IStreamingHubMarker>
struct IEnumerable_1_tDCAD29ECE3FAF9B64B29E3638CB50F96851DEB61;
// System.Collections.Generic.IEnumerable`1<MagicOnion.Client.ManagedStreamingHubInfo>
struct IEnumerable_1_t84E26E9EAAE40D66E027D2999961613CC1ADB592;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t04D882226AB7D8875E8DE1B4FEDCB5060F885EBB;
// System.Collections.Generic.IEnumerator`1<Grpc.Core.ChannelOption>
struct IEnumerator_1_tD0DBD8B1E4679027060FB9298BD0B82160608233;
// System.Collections.Generic.IEqualityComparer`1<MagicOnion.IStreamingHubMarker>
struct IEqualityComparer_1_t2BCC7C5BAC75EE852ECBFCF8A5B51B35DF70B154;
// System.Collections.Generic.IReadOnlyCollection`1<MagicOnion.GrpcChannelx>
struct IReadOnlyCollection_1_t0D9E32FD5E6FA818E3BF28A708EA4446818A0FFE;
// System.Collections.Generic.IReadOnlyCollection`1<MagicOnion.Client.ManagedStreamingHubInfo>
struct IReadOnlyCollection_1_tE340BBE82E30B236342FE144C8BF752A3FE9DB4D;
// System.Collections.Generic.IReadOnlyList`1<Grpc.Core.ChannelOption>
struct IReadOnlyList_1_t38AECCFF734963DD9221BDB155A04754E7D80DDF;
// System.Collections.Generic.Dictionary`2/KeyCollection<MagicOnion.IStreamingHubMarker,System.ValueTuple`2<System.Func`1<System.Threading.Tasks.Task>,MagicOnion.Client.ManagedStreamingHubInfo>>
struct KeyCollection_t4AEA7A051859B43F915FA65449DFB8B3981A5026;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.ValueTuple`2<System.Object,MagicOnion.Client.ManagedStreamingHubInfo>>
struct KeyCollection_t9A1A40500CC77B561A48A232476858DA7881C2C3;
// System.Collections.Generic.List`1<MagicOnion.GrpcChannelx>
struct List_1_t794BA021F761B44AC15B20B38C5162FF01364CDA;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.SparselyPopulatedArrayFragment`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3;
// System.Collections.Generic.Dictionary`2/ValueCollection<MagicOnion.IStreamingHubMarker,System.ValueTuple`2<System.Func`1<System.Threading.Tasks.Task>,MagicOnion.Client.ManagedStreamingHubInfo>>
struct ValueCollection_t5FBDC3A11EBA3DF0B49FB642D9832CD1EF305B16;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.ValueTuple`2<System.Object,MagicOnion.Client.ManagedStreamingHubInfo>>
struct ValueCollection_t463F71D2E786697CCAED0CA26FE06249B1A7D2BD;
// System.Collections.Generic.Dictionary`2/Entry<MagicOnion.IStreamingHubMarker,System.ValueTuple`2<System.Func`1<System.Threading.Tasks.Task>,MagicOnion.Client.ManagedStreamingHubInfo>>[]
struct EntryU5BU5D_t7B1689A0F53494FF0D230C0BE9E720901F3CF261;
// Grpc.Core.ChannelOption[]
struct ChannelOptionU5BU5D_t40B01726AADD464802F0CC66325E43E99C532E53;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// MagicOnion.Unity.GrpcChannelProviderHost[]
struct GrpcChannelProviderHostU5BU5D_t04402EFEBDCD691AE503FEAE40C7D8FC1B69406F;
// MagicOnion.GrpcChannelx[]
struct GrpcChannelxU5BU5D_tA4631A4B0BD22B04BE95989B436ECF9A2300F417;
// MagicOnion.IStreamingHubMarker[]
struct IStreamingHubMarkerU5BU5D_tB99023F7783AA76118208888091E955A8C2504A8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// MagicOnion.Client.ManagedStreamingHubInfo[]
struct ManagedStreamingHubInfoU5BU5D_t9FDC45281B6E147C92DD1BDBD6C7AE50829A6264;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Grpc.Core.Internal.AtomicCounter
struct AtomicCounter_t721B0A794DE4C41B7F34758226C864DD12E09AB6;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// Grpc.Core.Internal.BatchCompletionDelegate
struct BatchCompletionDelegate_tC6FC3476BA8D6F43D20596136738DCE5EE4DCB45;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// Grpc.Core.CallInvoker
struct CallInvoker_t6099D93DBBF44A7447258DAA16C8D0ED76D7DDDE;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// Grpc.Core.Channel
struct Channel_t05CCFAE14C23CE3E40F26235CB6E9F42C4B736DD;
// Grpc.Core.ChannelBase
struct ChannelBase_t27741E6D85E1E4064949B777B040D975F3D400A9;
// Grpc.Core.ChannelCredentials
struct ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E;
// Grpc.Core.ChannelOption
struct ChannelOption_t220AB2C90AF6E7CEC603E337F7D70DD956976F2D;
// Grpc.Core.Internal.ChannelSafeHandle
struct ChannelSafeHandle_tD51197C1B804E1C861730CD23C96E7731837E46B;
// Grpc.Core.Internal.CompletionQueueSafeHandle
struct CompletionQueueSafeHandle_t8E312DE80BB4657D038AC09A2E11BB9A86C8EBCE;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// MagicOnion.Unity.CreateGrpcChannelContext
struct CreateGrpcChannelContext_tB9ED19C9DEE05147585D686FB12F9F574329764B;
// MagicOnion.Unity.DefaultGrpcChannelProvider
struct DefaultGrpcChannelProvider_t2D7248106FDE928590569DFC42D33470219BE80B;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t04A70E58D4C6E91ED5EC7B6523E71DA15235E137;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// MagicOnion.Unity.GrpcCCoreChannelOptions
struct GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22;
// MagicOnion.Unity.GrpcCCoreGrpcChannelProvider
struct GrpcCCoreGrpcChannelProvider_t5E6293DCD6CD392A6C78779789B14F58D5AC2ECD;
// MagicOnion.Unity.GrpcChannelOptionsBag
struct GrpcChannelOptionsBag_t3A8A75BF4444B4683CCE7492D71C0E82275A62DF;
// MagicOnion.Unity.GrpcChannelProviderBase
struct GrpcChannelProviderBase_t65F00C664A3D6A88F44A88CED2B92EF2821D115E;
// MagicOnion.Unity.GrpcChannelProviderHost
struct GrpcChannelProviderHost_t0313060C8CEE5ECBBFEE81A54E13951CBFBF32D1;
// MagicOnion.GrpcChannelx
struct GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A;
// Grpc.Core.GrpcEnvironment
struct GrpcEnvironment_tD527F4ED81655FBEFC4179C90264FB32D7435A16;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IDisposable
struct IDisposable_t099785737FC6A1E3699919A94109383715A8D807;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// MagicOnion.Unity.IGrpcChannelProvider
struct IGrpcChannelProvider_t7828BBE4FBA5C81FF47F6F92407AFE7E70CD9102;
// Grpc.Core.Logging.ILogger
struct ILogger_t6947132DEBE838184A9394B6B1B9E2D46A1661AF;
// MagicOnion.IStreamingHubMarker
struct IStreamingHubMarker_t2C4F44A9A3F142FAB7485838EE53BEDAA7D3B457;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tFDEFFADD98C33764BB9EAFBDCE3B895A1E71C671;
// Grpc.Core.KeyCertificatePair
struct KeyCertificatePair_tA0E29F1A2B9C02967DCEF3AEBF14D49AB346592C;
// MagicOnion.Unity.LoggingGrpcChannelProvider
struct LoggingGrpcChannelProvider_t3F56F5B09616592937BC8DEE6B2DD6D29E9CF919;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.ObjectDisposedException
struct ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Grpc.Core.SslCredentials
struct SslCredentials_t149917768B7958A3C7B569C5879C5CAFC7F43D3C;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Type
struct Type_t;
// MagicOnion.UnityDebugLogger
struct UnityDebugLogger_tDD33816265BBB34A9FB081316E1ED9186EEBCEC4;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.UriParser
struct UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A;
// Grpc.Core.VerifyPeerCallback
struct VerifyPeerCallback_t80B8E9DEB9B025308E05573E757CA8136A52DD9A;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// MagicOnion.ChannelExtensions/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_tDB0BFB9C6FF5E03A8EC8AB18A2C6CA4AA19D0EA6;
// MagicOnion.Unity.GrpcChannelOptionsBag/<GetValues>d__4
struct U3CGetValuesU3Ed__4_t3EC47CADB40D760F006EE3FC565ABDF09FFB0805;
// MagicOnion.GrpcChannelx/<<DisposeStreamingHubClient>g__Forget|22_0>d
struct U3CU3CDisposeStreamingHubClientU3Eg__ForgetU7C22_0U3Ed_tFB27AD025D784934ACD703C8C49741F1A04EBEA0;
// MagicOnion.GrpcChannelx/<>c
struct U3CU3Ec_t59C109BC2B57707046109D174D3A4687AE219B3E;
// MagicOnion.GrpcChannelx/<ConnectAsync>d__18
struct U3CConnectAsyncU3Ed__18_tA12E5FCEA1EEE4814A0B579677FA716E4FAD210E;
// MagicOnion.GrpcChannelx/<DisposeAsync>d__25
struct U3CDisposeAsyncU3Ed__25_tF09584D0A9406A5CADCFD8BC4C8517DD95E66BA9;
// MagicOnion.GrpcChannelx/<Forget>d__28
struct U3CForgetU3Ed__28_t7F8B2113E2AF53E5DAC93234969022BD116C7B7A;
// MagicOnion.GrpcChannelx/<ShutdownAsyncCore>d__17
struct U3CShutdownAsyncCoreU3Ed__17_tBAF5B09E5D61F137535A7FD3283E8A265F211FBC;
// MagicOnion.GrpcChannelx/<ShutdownInternalAsync>d__26
struct U3CShutdownInternalAsyncU3Ed__26_t5CAF2513D0D80A4B85B420DC910A51E7CC53F53F;
// MagicOnion.GrpcChannelx/<WaitForDisconnectAndDisposeAsync>d__21
struct U3CWaitForDisconnectAndDisposeAsyncU3Ed__21_t280549BD508F1BB867F4F32346F4B9D9A2D41C68;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// System.Uri/UriInfo
struct UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t549C5EF27D2CC5AD07CBB9088B404BF46A678163_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Channel_t05CCFAE14C23CE3E40F26235CB6E9F42C4B736DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CreateGrpcChannelContext_tB9ED19C9DEE05147585D686FB12F9F574329764B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultGrpcChannelProvider_t2D7248106FDE928590569DFC42D33470219BE80B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t69A7D283CF5BDCF8AA89902CBF7815EFE642BE1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GrpcChannelOptionsBag_t3A8A75BF4444B4683CCE7492D71C0E82275A62DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GrpcChannelProvider_t25B7C6A04DAD5F0A6968EFD8B0D4C861B0DEF85E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tEA4D246882C4D1B27BBA6CB319CA2B1757E98C9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tD0DBD8B1E4679027060FB9298BD0B82160608233_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGrpcChannelProvider_t7828BBE4FBA5C81FF47F6F92407AFE7E70CD9102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t794BA021F761B44AC15B20B38C5162FF01364CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SslCredentials_t149917768B7958A3C7B569C5879C5CAFC7F43D3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CConnectAsyncU3Ed__18_tA12E5FCEA1EEE4814A0B579677FA716E4FAD210E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDisposeAsyncU3Ed__25_tF09584D0A9406A5CADCFD8BC4C8517DD95E66BA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CForgetU3Ed__28_t7F8B2113E2AF53E5DAC93234969022BD116C7B7A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetValuesU3Ed__4_t3EC47CADB40D760F006EE3FC565ABDF09FFB0805_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShutdownAsyncCoreU3Ed__17_tBAF5B09E5D61F137535A7FD3283E8A265F211FBC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShutdownInternalAsyncU3Ed__26_t5CAF2513D0D80A4B85B420DC910A51E7CC53F53F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3CDisposeStreamingHubClientU3Eg__ForgetU7C22_0U3Ed_tFB27AD025D784934ACD703C8C49741F1A04EBEA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass0_0_tDB0BFB9C6FF5E03A8EC8AB18A2C6CA4AA19D0EA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t59C109BC2B57707046109D174D3A4687AE219B3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitForDisconnectAndDisposeAsyncU3Ed__21_t280549BD508F1BB867F4F32346F4B9D9A2D41C68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01476D682E93A51AF3F24A83D43AC817D21C116A;
IL2CPP_EXTERN_C String_t* _stringLiteral1E9918A305DD44C6C5253BF7305AB7758C686BB5;
IL2CPP_EXTERN_C String_t* _stringLiteral1EF9B00F946DD08A4FC265785A00673E08820E32;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral3AD15DA398CB207B20A11C6E89C7ABC2D98C8F8D;
IL2CPP_EXTERN_C String_t* _stringLiteral41946971DAFEE5BA32F735A63EDD75FC289FFDBD;
IL2CPP_EXTERN_C String_t* _stringLiteral44B1A5DEBA242BA8EA91EB1D4D965313185716D6;
IL2CPP_EXTERN_C String_t* _stringLiteral58B716FF5428F7961E1403E6D969E605D0F27EAF;
IL2CPP_EXTERN_C String_t* _stringLiteral98D57AB2B10DF4E3C8863A28F3B33F7502FDBBA5;
IL2CPP_EXTERN_C String_t* _stringLiteral9CDFF5FACBA3A91A992AA2257A48EBAD9DF94C5C;
IL2CPP_EXTERN_C String_t* _stringLiteralABAF37018E1F5AB9652A5C3B02A63AB17FEB688D;
IL2CPP_EXTERN_C String_t* _stringLiteralC01B6BFEC1A288F408504F67735353415939B4EA;
IL2CPP_EXTERN_C String_t* _stringLiteralD387A475340D49515D873D9D7ED5D4A97EA788BE;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralF27E4C631EBEFA337EC21BE8552E169C9DED78A2;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mF6C2D97963C01A475F13F7FBD7032D1527128646_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mED276CF4DB3F800648E9729B0E9851A1CFA23B7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisChannelOption_t220AB2C90AF6E7CEC603E337F7D70DD956976F2D_m40BCF5710134FC72F852187527F7891DCEF22BE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CShutdownAsyncCoreU3Ed__17_tBAF5B09E5D61F137535A7FD3283E8A265F211FBC_mC5583AFEA50C56C8E4EBF9BDAF16105C7E1FD352_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CShutdownInternalAsyncU3Ed__26_t5CAF2513D0D80A4B85B420DC910A51E7CC53F53F_mE505556AD7CE193300E1EACFEC5CB1235C55B02B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CConnectAsyncU3Ed__18_tA12E5FCEA1EEE4814A0B579677FA716E4FAD210E_m42744845502E0EA2F2046C1718F7DC8109024826_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDisposeAsyncU3Ed__25_tF09584D0A9406A5CADCFD8BC4C8517DD95E66BA9_mC0991FE5D312A469536D9AC403E7022B9012A5D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CWaitForDisconnectAndDisposeAsyncU3Ed__21_t280549BD508F1BB867F4F32346F4B9D9A2D41C68_mE43BD3AEEF8BB96507D207B36B5C6BDA5816A02A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CConnectAsyncU3Ed__18_tA12E5FCEA1EEE4814A0B579677FA716E4FAD210E_mE7FC36CE0985A0B7547147D29E9FA8E002B7E377_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__25_tF09584D0A9406A5CADCFD8BC4C8517DD95E66BA9_m68195054FD3534A437CF2E6255D9C8F1BB2CF847_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CShutdownAsyncCoreU3Ed__17_tBAF5B09E5D61F137535A7FD3283E8A265F211FBC_m6F69FAA1F1247A5E281D8BF53135B28154FCBDC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CShutdownInternalAsyncU3Ed__26_t5CAF2513D0D80A4B85B420DC910A51E7CC53F53F_m1AE44EB53FA1987A50298A198BBAD1A0A4DC087C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CWaitForDisconnectAndDisposeAsyncU3Ed__21_t280549BD508F1BB867F4F32346F4B9D9A2D41C68_mAE74B003557CF07AA8A48AB849ADB49C149B3F94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CForgetU3Ed__28_t7F8B2113E2AF53E5DAC93234969022BD116C7B7A_mD8D7785E8EF7A6201834970EA858CA619F49A33F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CDisposeStreamingHubClientU3Eg__ForgetU7C22_0U3Ed_tFB27AD025D784934ACD703C8C49741F1A04EBEA0_m399869676648598667F5E1461F31A251217894DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CForgetU3Ed__28_t7F8B2113E2AF53E5DAC93234969022BD116C7B7A_m387C57141FD21BACDA664BB21429060A3681E869_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CU3CDisposeStreamingHubClientU3Eg__ForgetU7C22_0U3Ed_tFB27AD025D784934ACD703C8C49741F1A04EBEA0_m5B21B272DFE568537C95A37F947C85F0CC283C2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CreateGrpcChannelContext__ctor_mEDDCDE84E563746CD94BD705C0F785262D751283_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m3B933D9EAE846AE5EC81E5A2D69CE8E65067B634_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m54F43F31867279CCBF98954FED5D0610C1188F3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mB7EE6F62BD86CCE767484A13AAA7178468BAC42D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m233C615AA249E0E68A2C7E804958E303BFF6C59B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m8A74A4870916D478DF463008FC4DCE6CA077A713_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_mDB2C1B853120B66845AEEFC5923F73915B46E51F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisValueTuple_2_tE0C83C359BD973BE064EB7B4E773F729D96E402F_TisManagedStreamingHubInfo_t91C1EAA9634FD4ED4B632E2F3C8CF2C8CE35F7F6_mB924CA443EEF56CF1AFE07904BBAC6E4C03C00E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisIStreamingHubMarker_t2C4F44A9A3F142FAB7485838EE53BEDAA7D3B457_m3D2D6884C685EEB20F67751B37D3D54FE09095A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisManagedStreamingHubInfo_t91C1EAA9634FD4ED4B632E2F3C8CF2C8CE35F7F6_mACADBEA015DCE3EF334A028707C0453EA1984558_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1_Invoke_m3B5AC943F23CE7225ACF20C2B4B5E2D3FF1EBDDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mEAC4B87A088935F2D792210E0AC61027D750B3FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisGrpcChannelProviderHost_t0313060C8CEE5ECBBFEE81A54E13951CBFBF32D1_m6DE43A920BA07378472B76794A4F8DC79013745A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GrpcCCoreGrpcChannelProvider__ctor_m95CA95CDA1131E66304AC760477720C48FD144FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GrpcChannelOptionsBag_Get_TisGrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22_m4933EA2B09EF4B54ABBA4FEBF38C7B8F2C15A949_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GrpcChannelOptionsBag_TryGet_TisGrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22_mB634A182AF11A6289AE2A1FA096F4BE0BD82FFBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GrpcChannelProvider_get_Default_m58E560AA52B3BBA0E64F3398A7DC4D01A119172E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GrpcChannelx_ThrowIfDisposed_m513418AFDA0396E0639F4ED4C526272CE3132759_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_m27D29781A94B34BD9527D2D0B29A68C5B5486B5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m08BF4E5F03F1388F39EBE158DD94298F6715346A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m1F393F26C25C24E3E0EA6435CC34C594B861FD91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m54EC22E3F1C7830916F80B76B722B3E436E9FF98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD510A3B40A1E977E832BC4964BAEBC5053A47D25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoggingGrpcChannelProvider__ctor_m31A18E1A1AAD001E3C1C80356E6F0AB8680F78D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisGrpcChannelProviderHost_t0313060C8CEE5ECBBFEE81A54E13951CBFBF32D1_m8E42EE3E0B55940E84A498B24A6C4A1074DE1580_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetValuesU3Ed__4_System_Collections_IEnumerator_Reset_m8499A1B7A657FE712272631C3125B273D868F0A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CMagicOnion_Client_IMagicOnionAwareGrpcChannel_GetAllManagedStreamingHubsU3Eb__19_0_m6628F1EDE033656F05F0B50188CF473E5AEF6AE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3CRegisterStreamingSubscriptionU3Eb__0_mE23BFDEF5E7C681161F2DDA09BF0126C328F1228_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2__ctor_mEB94A84DBAD23765C0BA082A2F16B0D49DCF66FE_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ChannelOptionU5BU5D_t40B01726AADD464802F0CC66325E43E99C532E53;
struct GrpcChannelProviderHostU5BU5D_t04402EFEBDCD691AE503FEAE40C7D8FC1B69406F;
struct GrpcChannelxU5BU5D_tA4631A4B0BD22B04BE95989B436ECF9A2300F417;
struct IStreamingHubMarkerU5BU5D_tB99023F7783AA76118208888091E955A8C2504A8;
struct ManagedStreamingHubInfoU5BU5D_t9FDC45281B6E147C92DD1BDBD6C7AE50829A6264;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t5C74911AAEC369BA75FA639F8DC7BDE584B9F6B1 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<MagicOnion.IStreamingHubMarker,System.ValueTuple`2<System.Func`1<System.Threading.Tasks.Task>,MagicOnion.Client.ManagedStreamingHubInfo>>
struct Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t7B1689A0F53494FF0D230C0BE9E720901F3CF261* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t4AEA7A051859B43F915FA65449DFB8B3981A5026 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t5FBDC3A11EBA3DF0B49FB642D9832CD1EF305B16 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320, ___entries_1)); }
	inline EntryU5BU5D_t7B1689A0F53494FF0D230C0BE9E720901F3CF261* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t7B1689A0F53494FF0D230C0BE9E720901F3CF261** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t7B1689A0F53494FF0D230C0BE9E720901F3CF261* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320, ___keys_7)); }
	inline KeyCollection_t4AEA7A051859B43F915FA65449DFB8B3981A5026 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t4AEA7A051859B43F915FA65449DFB8B3981A5026 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t4AEA7A051859B43F915FA65449DFB8B3981A5026 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320, ___values_8)); }
	inline ValueCollection_t5FBDC3A11EBA3DF0B49FB642D9832CD1EF305B16 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t5FBDC3A11EBA3DF0B49FB642D9832CD1EF305B16 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t5FBDC3A11EBA3DF0B49FB642D9832CD1EF305B16 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/KeyCollection<MagicOnion.IStreamingHubMarker,System.ValueTuple`2<System.Func`1<System.Threading.Tasks.Task>,MagicOnion.Client.ManagedStreamingHubInfo>>
struct KeyCollection_t4AEA7A051859B43F915FA65449DFB8B3981A5026  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::dictionary
	Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_t4AEA7A051859B43F915FA65449DFB8B3981A5026, ___dictionary_0)); }
	inline Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<MagicOnion.GrpcChannelx>
struct List_1_t794BA021F761B44AC15B20B38C5162FF01364CDA  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GrpcChannelxU5BU5D_tA4631A4B0BD22B04BE95989B436ECF9A2300F417* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t794BA021F761B44AC15B20B38C5162FF01364CDA, ____items_1)); }
	inline GrpcChannelxU5BU5D_tA4631A4B0BD22B04BE95989B436ECF9A2300F417* get__items_1() const { return ____items_1; }
	inline GrpcChannelxU5BU5D_tA4631A4B0BD22B04BE95989B436ECF9A2300F417** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GrpcChannelxU5BU5D_tA4631A4B0BD22B04BE95989B436ECF9A2300F417* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t794BA021F761B44AC15B20B38C5162FF01364CDA, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t794BA021F761B44AC15B20B38C5162FF01364CDA, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t794BA021F761B44AC15B20B38C5162FF01364CDA, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t794BA021F761B44AC15B20B38C5162FF01364CDA_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GrpcChannelxU5BU5D_tA4631A4B0BD22B04BE95989B436ECF9A2300F417* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t794BA021F761B44AC15B20B38C5162FF01364CDA_StaticFields, ____emptyArray_5)); }
	inline GrpcChannelxU5BU5D_tA4631A4B0BD22B04BE95989B436ECF9A2300F417* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GrpcChannelxU5BU5D_tA4631A4B0BD22B04BE95989B436ECF9A2300F417** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GrpcChannelxU5BU5D_tA4631A4B0BD22B04BE95989B436ECF9A2300F417* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<MagicOnion.IStreamingHubMarker,System.ValueTuple`2<System.Func`1<System.Threading.Tasks.Task>,MagicOnion.Client.ManagedStreamingHubInfo>>
struct ValueCollection_t5FBDC3A11EBA3DF0B49FB642D9832CD1EF305B16  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t5FBDC3A11EBA3DF0B49FB642D9832CD1EF305B16, ___dictionary_0)); }
	inline Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// Grpc.Core.CallInvoker
struct CallInvoker_t6099D93DBBF44A7447258DAA16C8D0ED76D7DDDE  : public RuntimeObject
{
public:

public:
};


// Grpc.Core.ChannelBase
struct ChannelBase_t27741E6D85E1E4064949B777B040D975F3D400A9  : public RuntimeObject
{
public:
	// System.String Grpc.Core.ChannelBase::target
	String_t* ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(ChannelBase_t27741E6D85E1E4064949B777B040D975F3D400A9, ___target_0)); }
	inline String_t* get_target_0() const { return ___target_0; }
	inline String_t** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(String_t* value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// Grpc.Core.ChannelCredentials
struct ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E  : public RuntimeObject
{
public:

public:
};

struct ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E_StaticFields
{
public:
	// Grpc.Core.ChannelCredentials Grpc.Core.ChannelCredentials::InsecureInstance
	ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E * ___InsecureInstance_0;

public:
	inline static int32_t get_offset_of_InsecureInstance_0() { return static_cast<int32_t>(offsetof(ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E_StaticFields, ___InsecureInstance_0)); }
	inline ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E * get_InsecureInstance_0() const { return ___InsecureInstance_0; }
	inline ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E ** get_address_of_InsecureInstance_0() { return &___InsecureInstance_0; }
	inline void set_InsecureInstance_0(ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E * value)
	{
		___InsecureInstance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InsecureInstance_0), (void*)value);
	}
};


// MagicOnion.ChannelExtensions
struct ChannelExtensions_t79B5F933DE23015681109DE7ECB616705E73A901  : public RuntimeObject
{
public:

public:
};


// MagicOnion.Unity.GrpcCCoreChannelOptions
struct GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22  : public RuntimeObject
{
public:
	// System.Collections.Generic.IReadOnlyList`1<Grpc.Core.ChannelOption> MagicOnion.Unity.GrpcCCoreChannelOptions::<ChannelOptions>k__BackingField
	RuntimeObject* ___U3CChannelOptionsU3Ek__BackingField_0;
	// Grpc.Core.ChannelCredentials MagicOnion.Unity.GrpcCCoreChannelOptions::<ChannelCredentials>k__BackingField
	ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E * ___U3CChannelCredentialsU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CChannelOptionsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22, ___U3CChannelOptionsU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CChannelOptionsU3Ek__BackingField_0() const { return ___U3CChannelOptionsU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CChannelOptionsU3Ek__BackingField_0() { return &___U3CChannelOptionsU3Ek__BackingField_0; }
	inline void set_U3CChannelOptionsU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CChannelOptionsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CChannelOptionsU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CChannelCredentialsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22, ___U3CChannelCredentialsU3Ek__BackingField_1)); }
	inline ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E * get_U3CChannelCredentialsU3Ek__BackingField_1() const { return ___U3CChannelCredentialsU3Ek__BackingField_1; }
	inline ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E ** get_address_of_U3CChannelCredentialsU3Ek__BackingField_1() { return &___U3CChannelCredentialsU3Ek__BackingField_1; }
	inline void set_U3CChannelCredentialsU3Ek__BackingField_1(ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E * value)
	{
		___U3CChannelCredentialsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CChannelCredentialsU3Ek__BackingField_1), (void*)value);
	}
};


// MagicOnion.Unity.GrpcChannelOptionsBag
struct GrpcChannelOptionsBag_t3A8A75BF4444B4683CCE7492D71C0E82275A62DF  : public RuntimeObject
{
public:
	// System.Object MagicOnion.Unity.GrpcChannelOptionsBag::_options
	RuntimeObject * ____options_0;

public:
	inline static int32_t get_offset_of__options_0() { return static_cast<int32_t>(offsetof(GrpcChannelOptionsBag_t3A8A75BF4444B4683CCE7492D71C0E82275A62DF, ____options_0)); }
	inline RuntimeObject * get__options_0() const { return ____options_0; }
	inline RuntimeObject ** get_address_of__options_0() { return &____options_0; }
	inline void set__options_0(RuntimeObject * value)
	{
		____options_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____options_0), (void*)value);
	}
};


// MagicOnion.Unity.GrpcChannelProvider
struct GrpcChannelProvider_t25B7C6A04DAD5F0A6968EFD8B0D4C861B0DEF85E  : public RuntimeObject
{
public:

public:
};

struct GrpcChannelProvider_t25B7C6A04DAD5F0A6968EFD8B0D4C861B0DEF85E_StaticFields
{
public:
	// MagicOnion.Unity.IGrpcChannelProvider MagicOnion.Unity.GrpcChannelProvider::_defaultProvider
	RuntimeObject* ____defaultProvider_0;

public:
	inline static int32_t get_offset_of__defaultProvider_0() { return static_cast<int32_t>(offsetof(GrpcChannelProvider_t25B7C6A04DAD5F0A6968EFD8B0D4C861B0DEF85E_StaticFields, ____defaultProvider_0)); }
	inline RuntimeObject* get__defaultProvider_0() const { return ____defaultProvider_0; }
	inline RuntimeObject** get_address_of__defaultProvider_0() { return &____defaultProvider_0; }
	inline void set__defaultProvider_0(RuntimeObject* value)
	{
		____defaultProvider_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____defaultProvider_0), (void*)value);
	}
};


// MagicOnion.Unity.GrpcChannelProviderBase
struct GrpcChannelProviderBase_t65F00C664A3D6A88F44A88CED2B92EF2821D115E  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<MagicOnion.GrpcChannelx> MagicOnion.Unity.GrpcChannelProviderBase::_channels
	List_1_t794BA021F761B44AC15B20B38C5162FF01364CDA * ____channels_0;
	// System.Int32 MagicOnion.Unity.GrpcChannelProviderBase::_seq
	int32_t ____seq_1;

public:
	inline static int32_t get_offset_of__channels_0() { return static_cast<int32_t>(offsetof(GrpcChannelProviderBase_t65F00C664A3D6A88F44A88CED2B92EF2821D115E, ____channels_0)); }
	inline List_1_t794BA021F761B44AC15B20B38C5162FF01364CDA * get__channels_0() const { return ____channels_0; }
	inline List_1_t794BA021F761B44AC15B20B38C5162FF01364CDA ** get_address_of__channels_0() { return &____channels_0; }
	inline void set__channels_0(List_1_t794BA021F761B44AC15B20B38C5162FF01364CDA * value)
	{
		____channels_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____channels_0), (void*)value);
	}

	inline static int32_t get_offset_of__seq_1() { return static_cast<int32_t>(offsetof(GrpcChannelProviderBase_t65F00C664A3D6A88F44A88CED2B92EF2821D115E, ____seq_1)); }
	inline int32_t get__seq_1() const { return ____seq_1; }
	inline int32_t* get_address_of__seq_1() { return &____seq_1; }
	inline void set__seq_1(int32_t value)
	{
		____seq_1 = value;
	}
};


// MagicOnion.Unity.GrpcChannelProviderExtensions
struct GrpcChannelProviderExtensions_t5A3F2554547EF48BE069E589D5C616175872C84D  : public RuntimeObject
{
public:

public:
};


// MagicOnion.Unity.LoggingGrpcChannelProvider
struct LoggingGrpcChannelProvider_t3F56F5B09616592937BC8DEE6B2DD6D29E9CF919  : public RuntimeObject
{
public:
	// MagicOnion.Unity.IGrpcChannelProvider MagicOnion.Unity.LoggingGrpcChannelProvider::_baseProvider
	RuntimeObject* ____baseProvider_0;

public:
	inline static int32_t get_offset_of__baseProvider_0() { return static_cast<int32_t>(offsetof(LoggingGrpcChannelProvider_t3F56F5B09616592937BC8DEE6B2DD6D29E9CF919, ____baseProvider_0)); }
	inline RuntimeObject* get__baseProvider_0() const { return ____baseProvider_0; }
	inline RuntimeObject** get_address_of__baseProvider_0() { return &____baseProvider_0; }
	inline void set__baseProvider_0(RuntimeObject* value)
	{
		____baseProvider_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____baseProvider_0), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// MagicOnion.UnityDebugLogger
struct UnityDebugLogger_tDD33816265BBB34A9FB081316E1ED9186EEBCEC4  : public RuntimeObject
{
public:
	// System.Type MagicOnion.UnityDebugLogger::forType
	Type_t * ___forType_0;
	// System.String MagicOnion.UnityDebugLogger::forTypeString
	String_t* ___forTypeString_1;
	// System.Boolean MagicOnion.UnityDebugLogger::errorToWarn
	bool ___errorToWarn_2;

public:
	inline static int32_t get_offset_of_forType_0() { return static_cast<int32_t>(offsetof(UnityDebugLogger_tDD33816265BBB34A9FB081316E1ED9186EEBCEC4, ___forType_0)); }
	inline Type_t * get_forType_0() const { return ___forType_0; }
	inline Type_t ** get_address_of_forType_0() { return &___forType_0; }
	inline void set_forType_0(Type_t * value)
	{
		___forType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___forType_0), (void*)value);
	}

	inline static int32_t get_offset_of_forTypeString_1() { return static_cast<int32_t>(offsetof(UnityDebugLogger_tDD33816265BBB34A9FB081316E1ED9186EEBCEC4, ___forTypeString_1)); }
	inline String_t* get_forTypeString_1() const { return ___forTypeString_1; }
	inline String_t** get_address_of_forTypeString_1() { return &___forTypeString_1; }
	inline void set_forTypeString_1(String_t* value)
	{
		___forTypeString_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___forTypeString_1), (void*)value);
	}

	inline static int32_t get_offset_of_errorToWarn_2() { return static_cast<int32_t>(offsetof(UnityDebugLogger_tDD33816265BBB34A9FB081316E1ED9186EEBCEC4, ___errorToWarn_2)); }
	inline bool get_errorToWarn_2() const { return ___errorToWarn_2; }
	inline bool* get_address_of_errorToWarn_2() { return &___errorToWarn_2; }
	inline void set_errorToWarn_2(bool value)
	{
		___errorToWarn_2 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// MagicOnion.ChannelExtensions/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_tDB0BFB9C6FF5E03A8EC8AB18A2C6CA4AA19D0EA6  : public RuntimeObject
{
public:
	// System.IDisposable MagicOnion.ChannelExtensions/<>c__DisplayClass0_0::subscription
	RuntimeObject* ___subscription_0;

public:
	inline static int32_t get_offset_of_subscription_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_tDB0BFB9C6FF5E03A8EC8AB18A2C6CA4AA19D0EA6, ___subscription_0)); }
	inline RuntimeObject* get_subscription_0() const { return ___subscription_0; }
	inline RuntimeObject** get_address_of_subscription_0() { return &___subscription_0; }
	inline void set_subscription_0(RuntimeObject* value)
	{
		___subscription_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subscription_0), (void*)value);
	}
};


// MagicOnion.GrpcChannelx/<>c
struct U3CU3Ec_t59C109BC2B57707046109D174D3A4687AE219B3E  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t59C109BC2B57707046109D174D3A4687AE219B3E_StaticFields
{
public:
	// MagicOnion.GrpcChannelx/<>c MagicOnion.GrpcChannelx/<>c::<>9
	U3CU3Ec_t59C109BC2B57707046109D174D3A4687AE219B3E * ___U3CU3E9_0;
	// System.Func`2<System.ValueTuple`2<System.Func`1<System.Threading.Tasks.Task>,MagicOnion.Client.ManagedStreamingHubInfo>,MagicOnion.Client.ManagedStreamingHubInfo> MagicOnion.GrpcChannelx/<>c::<>9__19_0
	Func_2_t69A7D283CF5BDCF8AA89902CBF7815EFE642BE1A * ___U3CU3E9__19_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t59C109BC2B57707046109D174D3A4687AE219B3E_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t59C109BC2B57707046109D174D3A4687AE219B3E * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t59C109BC2B57707046109D174D3A4687AE219B3E ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t59C109BC2B57707046109D174D3A4687AE219B3E * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__19_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t59C109BC2B57707046109D174D3A4687AE219B3E_StaticFields, ___U3CU3E9__19_0_1)); }
	inline Func_2_t69A7D283CF5BDCF8AA89902CBF7815EFE642BE1A * get_U3CU3E9__19_0_1() const { return ___U3CU3E9__19_0_1; }
	inline Func_2_t69A7D283CF5BDCF8AA89902CBF7815EFE642BE1A ** get_address_of_U3CU3E9__19_0_1() { return &___U3CU3E9__19_0_1; }
	inline void set_U3CU3E9__19_0_1(Func_2_t69A7D283CF5BDCF8AA89902CBF7815EFE642BE1A * value)
	{
		___U3CU3E9__19_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__19_0_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0 
{
public:
	// System.Threading.SparselyPopulatedArrayFragment`1<T> System.Threading.SparselyPopulatedArrayAddInfo`1::m_source
	SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 * ___m_source_0;
	// System.Int32 System.Threading.SparselyPopulatedArrayAddInfo`1::m_index
	int32_t ___m_index_1;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0, ___m_source_0)); }
	inline SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 * get_m_source_0() const { return ___m_source_0; }
	inline SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_index_1() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0, ___m_index_1)); }
	inline int32_t get_m_index_1() const { return ___m_index_1; }
	inline int32_t* get_address_of_m_index_1() { return &___m_index_1; }
	inline void set_m_index_1(int32_t value)
	{
		___m_index_1 = value;
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD, ___m_source_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}
};

struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActionToActionObjShunt_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_pinvoke
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_com
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};

// Grpc.Core.Channel
struct Channel_t05CCFAE14C23CE3E40F26235CB6E9F42C4B736DD  : public ChannelBase_t27741E6D85E1E4064949B777B040D975F3D400A9
{
public:
	// System.Object Grpc.Core.Channel::myLock
	RuntimeObject * ___myLock_2;
	// Grpc.Core.Internal.AtomicCounter Grpc.Core.Channel::activeCallCounter
	AtomicCounter_t721B0A794DE4C41B7F34758226C864DD12E09AB6 * ___activeCallCounter_3;
	// System.Threading.CancellationTokenSource Grpc.Core.Channel::shutdownTokenSource
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___shutdownTokenSource_4;
	// Grpc.Core.GrpcEnvironment Grpc.Core.Channel::environment
	GrpcEnvironment_tD527F4ED81655FBEFC4179C90264FB32D7435A16 * ___environment_5;
	// Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Channel::completionQueue
	CompletionQueueSafeHandle_t8E312DE80BB4657D038AC09A2E11BB9A86C8EBCE * ___completionQueue_6;
	// Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Channel::handle
	ChannelSafeHandle_tD51197C1B804E1C861730CD23C96E7731837E46B * ___handle_7;
	// System.Collections.Generic.Dictionary`2<System.String,Grpc.Core.ChannelOption> Grpc.Core.Channel::options
	Dictionary_2_t8DC48E6E6D4B67BC3150106AC2D9CA9E07CA3928 * ___options_8;
	// System.Boolean Grpc.Core.Channel::shutdownRequested
	bool ___shutdownRequested_9;

public:
	inline static int32_t get_offset_of_myLock_2() { return static_cast<int32_t>(offsetof(Channel_t05CCFAE14C23CE3E40F26235CB6E9F42C4B736DD, ___myLock_2)); }
	inline RuntimeObject * get_myLock_2() const { return ___myLock_2; }
	inline RuntimeObject ** get_address_of_myLock_2() { return &___myLock_2; }
	inline void set_myLock_2(RuntimeObject * value)
	{
		___myLock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myLock_2), (void*)value);
	}

	inline static int32_t get_offset_of_activeCallCounter_3() { return static_cast<int32_t>(offsetof(Channel_t05CCFAE14C23CE3E40F26235CB6E9F42C4B736DD, ___activeCallCounter_3)); }
	inline AtomicCounter_t721B0A794DE4C41B7F34758226C864DD12E09AB6 * get_activeCallCounter_3() const { return ___activeCallCounter_3; }
	inline AtomicCounter_t721B0A794DE4C41B7F34758226C864DD12E09AB6 ** get_address_of_activeCallCounter_3() { return &___activeCallCounter_3; }
	inline void set_activeCallCounter_3(AtomicCounter_t721B0A794DE4C41B7F34758226C864DD12E09AB6 * value)
	{
		___activeCallCounter_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeCallCounter_3), (void*)value);
	}

	inline static int32_t get_offset_of_shutdownTokenSource_4() { return static_cast<int32_t>(offsetof(Channel_t05CCFAE14C23CE3E40F26235CB6E9F42C4B736DD, ___shutdownTokenSource_4)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_shutdownTokenSource_4() const { return ___shutdownTokenSource_4; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_shutdownTokenSource_4() { return &___shutdownTokenSource_4; }
	inline void set_shutdownTokenSource_4(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___shutdownTokenSource_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shutdownTokenSource_4), (void*)value);
	}

	inline static int32_t get_offset_of_environment_5() { return static_cast<int32_t>(offsetof(Channel_t05CCFAE14C23CE3E40F26235CB6E9F42C4B736DD, ___environment_5)); }
	inline GrpcEnvironment_tD527F4ED81655FBEFC4179C90264FB32D7435A16 * get_environment_5() const { return ___environment_5; }
	inline GrpcEnvironment_tD527F4ED81655FBEFC4179C90264FB32D7435A16 ** get_address_of_environment_5() { return &___environment_5; }
	inline void set_environment_5(GrpcEnvironment_tD527F4ED81655FBEFC4179C90264FB32D7435A16 * value)
	{
		___environment_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___environment_5), (void*)value);
	}

	inline static int32_t get_offset_of_completionQueue_6() { return static_cast<int32_t>(offsetof(Channel_t05CCFAE14C23CE3E40F26235CB6E9F42C4B736DD, ___completionQueue_6)); }
	inline CompletionQueueSafeHandle_t8E312DE80BB4657D038AC09A2E11BB9A86C8EBCE * get_completionQueue_6() const { return ___completionQueue_6; }
	inline CompletionQueueSafeHandle_t8E312DE80BB4657D038AC09A2E11BB9A86C8EBCE ** get_address_of_completionQueue_6() { return &___completionQueue_6; }
	inline void set_completionQueue_6(CompletionQueueSafeHandle_t8E312DE80BB4657D038AC09A2E11BB9A86C8EBCE * value)
	{
		___completionQueue_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___completionQueue_6), (void*)value);
	}

	inline static int32_t get_offset_of_handle_7() { return static_cast<int32_t>(offsetof(Channel_t05CCFAE14C23CE3E40F26235CB6E9F42C4B736DD, ___handle_7)); }
	inline ChannelSafeHandle_tD51197C1B804E1C861730CD23C96E7731837E46B * get_handle_7() const { return ___handle_7; }
	inline ChannelSafeHandle_tD51197C1B804E1C861730CD23C96E7731837E46B ** get_address_of_handle_7() { return &___handle_7; }
	inline void set_handle_7(ChannelSafeHandle_tD51197C1B804E1C861730CD23C96E7731837E46B * value)
	{
		___handle_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handle_7), (void*)value);
	}

	inline static int32_t get_offset_of_options_8() { return static_cast<int32_t>(offsetof(Channel_t05CCFAE14C23CE3E40F26235CB6E9F42C4B736DD, ___options_8)); }
	inline Dictionary_2_t8DC48E6E6D4B67BC3150106AC2D9CA9E07CA3928 * get_options_8() const { return ___options_8; }
	inline Dictionary_2_t8DC48E6E6D4B67BC3150106AC2D9CA9E07CA3928 ** get_address_of_options_8() { return &___options_8; }
	inline void set_options_8(Dictionary_2_t8DC48E6E6D4B67BC3150106AC2D9CA9E07CA3928 * value)
	{
		___options_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___options_8), (void*)value);
	}

	inline static int32_t get_offset_of_shutdownRequested_9() { return static_cast<int32_t>(offsetof(Channel_t05CCFAE14C23CE3E40F26235CB6E9F42C4B736DD, ___shutdownRequested_9)); }
	inline bool get_shutdownRequested_9() const { return ___shutdownRequested_9; }
	inline bool* get_address_of_shutdownRequested_9() { return &___shutdownRequested_9; }
	inline void set_shutdownRequested_9(bool value)
	{
		___shutdownRequested_9 = value;
	}
};

struct Channel_t05CCFAE14C23CE3E40F26235CB6E9F42C4B736DD_StaticFields
{
public:
	// Grpc.Core.Logging.ILogger Grpc.Core.Channel::Logger
	RuntimeObject* ___Logger_1;
	// Grpc.Core.Internal.BatchCompletionDelegate Grpc.Core.Channel::WatchConnectivityStateHandler
	BatchCompletionDelegate_tC6FC3476BA8D6F43D20596136738DCE5EE4DCB45 * ___WatchConnectivityStateHandler_10;

public:
	inline static int32_t get_offset_of_Logger_1() { return static_cast<int32_t>(offsetof(Channel_t05CCFAE14C23CE3E40F26235CB6E9F42C4B736DD_StaticFields, ___Logger_1)); }
	inline RuntimeObject* get_Logger_1() const { return ___Logger_1; }
	inline RuntimeObject** get_address_of_Logger_1() { return &___Logger_1; }
	inline void set_Logger_1(RuntimeObject* value)
	{
		___Logger_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Logger_1), (void*)value);
	}

	inline static int32_t get_offset_of_WatchConnectivityStateHandler_10() { return static_cast<int32_t>(offsetof(Channel_t05CCFAE14C23CE3E40F26235CB6E9F42C4B736DD_StaticFields, ___WatchConnectivityStateHandler_10)); }
	inline BatchCompletionDelegate_tC6FC3476BA8D6F43D20596136738DCE5EE4DCB45 * get_WatchConnectivityStateHandler_10() const { return ___WatchConnectivityStateHandler_10; }
	inline BatchCompletionDelegate_tC6FC3476BA8D6F43D20596136738DCE5EE4DCB45 ** get_address_of_WatchConnectivityStateHandler_10() { return &___WatchConnectivityStateHandler_10; }
	inline void set_WatchConnectivityStateHandler_10(BatchCompletionDelegate_tC6FC3476BA8D6F43D20596136738DCE5EE4DCB45 * value)
	{
		___WatchConnectivityStateHandler_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WatchConnectivityStateHandler_10), (void*)value);
	}
};


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t04A70E58D4C6E91ED5EC7B6523E71DA15235E137  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// MagicOnion.Unity.GrpcCCoreGrpcChannelProvider
struct GrpcCCoreGrpcChannelProvider_t5E6293DCD6CD392A6C78779789B14F58D5AC2ECD  : public GrpcChannelProviderBase_t65F00C664A3D6A88F44A88CED2B92EF2821D115E
{
public:
	// MagicOnion.Unity.GrpcCCoreChannelOptions MagicOnion.Unity.GrpcCCoreGrpcChannelProvider::_defaultChannelOptions
	GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 * ____defaultChannelOptions_2;

public:
	inline static int32_t get_offset_of__defaultChannelOptions_2() { return static_cast<int32_t>(offsetof(GrpcCCoreGrpcChannelProvider_t5E6293DCD6CD392A6C78779789B14F58D5AC2ECD, ____defaultChannelOptions_2)); }
	inline GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 * get__defaultChannelOptions_2() const { return ____defaultChannelOptions_2; }
	inline GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 ** get_address_of__defaultChannelOptions_2() { return &____defaultChannelOptions_2; }
	inline void set__defaultChannelOptions_2(GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 * value)
	{
		____defaultChannelOptions_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____defaultChannelOptions_2), (void*)value);
	}
};


// MagicOnion.Unity.GrpcChannelTarget
struct GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF 
{
public:
	// System.String MagicOnion.Unity.GrpcChannelTarget::<Host>k__BackingField
	String_t* ___U3CHostU3Ek__BackingField_0;
	// System.Int32 MagicOnion.Unity.GrpcChannelTarget::<Port>k__BackingField
	int32_t ___U3CPortU3Ek__BackingField_1;
	// System.Boolean MagicOnion.Unity.GrpcChannelTarget::<IsInsecure>k__BackingField
	bool ___U3CIsInsecureU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CHostU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF, ___U3CHostU3Ek__BackingField_0)); }
	inline String_t* get_U3CHostU3Ek__BackingField_0() const { return ___U3CHostU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CHostU3Ek__BackingField_0() { return &___U3CHostU3Ek__BackingField_0; }
	inline void set_U3CHostU3Ek__BackingField_0(String_t* value)
	{
		___U3CHostU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHostU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPortU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF, ___U3CPortU3Ek__BackingField_1)); }
	inline int32_t get_U3CPortU3Ek__BackingField_1() const { return ___U3CPortU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CPortU3Ek__BackingField_1() { return &___U3CPortU3Ek__BackingField_1; }
	inline void set_U3CPortU3Ek__BackingField_1(int32_t value)
	{
		___U3CPortU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CIsInsecureU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF, ___U3CIsInsecureU3Ek__BackingField_2)); }
	inline bool get_U3CIsInsecureU3Ek__BackingField_2() const { return ___U3CIsInsecureU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIsInsecureU3Ek__BackingField_2() { return &___U3CIsInsecureU3Ek__BackingField_2; }
	inline void set_U3CIsInsecureU3Ek__BackingField_2(bool value)
	{
		___U3CIsInsecureU3Ek__BackingField_2 = value;
	}
};

// Native definition for P/Invoke marshalling of MagicOnion.Unity.GrpcChannelTarget
struct GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF_marshaled_pinvoke
{
	char* ___U3CHostU3Ek__BackingField_0;
	int32_t ___U3CPortU3Ek__BackingField_1;
	int32_t ___U3CIsInsecureU3Ek__BackingField_2;
};
// Native definition for COM marshalling of MagicOnion.Unity.GrpcChannelTarget
struct GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF_marshaled_com
{
	Il2CppChar* ___U3CHostU3Ek__BackingField_0;
	int32_t ___U3CPortU3Ek__BackingField_1;
	int32_t ___U3CIsInsecureU3Ek__BackingField_2;
};

// MagicOnion.GrpcChannelx
struct GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A  : public ChannelBase_t27741E6D85E1E4064949B777B040D975F3D400A9
{
public:
	// System.Action`1<MagicOnion.GrpcChannelx> MagicOnion.GrpcChannelx::_onDispose
	Action_1_t549C5EF27D2CC5AD07CBB9088B404BF46A678163 * ____onDispose_1;
	// System.Collections.Generic.Dictionary`2<MagicOnion.IStreamingHubMarker,System.ValueTuple`2<System.Func`1<System.Threading.Tasks.Task>,MagicOnion.Client.ManagedStreamingHubInfo>> MagicOnion.GrpcChannelx::_streamingHubs
	Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320 * ____streamingHubs_2;
	// Grpc.Core.ChannelBase MagicOnion.GrpcChannelx::_channel
	ChannelBase_t27741E6D85E1E4064949B777B040D975F3D400A9 * ____channel_3;
	// System.Boolean MagicOnion.GrpcChannelx::_disposed
	bool ____disposed_4;
	// System.Uri MagicOnion.GrpcChannelx::<TargetUri>k__BackingField
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___U3CTargetUriU3Ek__BackingField_5;
	// System.Int32 MagicOnion.GrpcChannelx::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of__onDispose_1() { return static_cast<int32_t>(offsetof(GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A, ____onDispose_1)); }
	inline Action_1_t549C5EF27D2CC5AD07CBB9088B404BF46A678163 * get__onDispose_1() const { return ____onDispose_1; }
	inline Action_1_t549C5EF27D2CC5AD07CBB9088B404BF46A678163 ** get_address_of__onDispose_1() { return &____onDispose_1; }
	inline void set__onDispose_1(Action_1_t549C5EF27D2CC5AD07CBB9088B404BF46A678163 * value)
	{
		____onDispose_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onDispose_1), (void*)value);
	}

	inline static int32_t get_offset_of__streamingHubs_2() { return static_cast<int32_t>(offsetof(GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A, ____streamingHubs_2)); }
	inline Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320 * get__streamingHubs_2() const { return ____streamingHubs_2; }
	inline Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320 ** get_address_of__streamingHubs_2() { return &____streamingHubs_2; }
	inline void set__streamingHubs_2(Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320 * value)
	{
		____streamingHubs_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____streamingHubs_2), (void*)value);
	}

	inline static int32_t get_offset_of__channel_3() { return static_cast<int32_t>(offsetof(GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A, ____channel_3)); }
	inline ChannelBase_t27741E6D85E1E4064949B777B040D975F3D400A9 * get__channel_3() const { return ____channel_3; }
	inline ChannelBase_t27741E6D85E1E4064949B777B040D975F3D400A9 ** get_address_of__channel_3() { return &____channel_3; }
	inline void set__channel_3(ChannelBase_t27741E6D85E1E4064949B777B040D975F3D400A9 * value)
	{
		____channel_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____channel_3), (void*)value);
	}

	inline static int32_t get_offset_of__disposed_4() { return static_cast<int32_t>(offsetof(GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A, ____disposed_4)); }
	inline bool get__disposed_4() const { return ____disposed_4; }
	inline bool* get_address_of__disposed_4() { return &____disposed_4; }
	inline void set__disposed_4(bool value)
	{
		____disposed_4 = value;
	}

	inline static int32_t get_offset_of_U3CTargetUriU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A, ___U3CTargetUriU3Ek__BackingField_5)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_U3CTargetUriU3Ek__BackingField_5() const { return ___U3CTargetUriU3Ek__BackingField_5; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_U3CTargetUriU3Ek__BackingField_5() { return &___U3CTargetUriU3Ek__BackingField_5; }
	inline void set_U3CTargetUriU3Ek__BackingField_5(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___U3CTargetUriU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTargetUriU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A, ___U3CIdU3Ek__BackingField_6)); }
	inline int32_t get_U3CIdU3Ek__BackingField_6() const { return ___U3CIdU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_6() { return &___U3CIdU3Ek__BackingField_6; }
	inline void set_U3CIdU3Ek__BackingField_6(int32_t value)
	{
		___U3CIdU3Ek__BackingField_6 = value;
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tFDEFFADD98C33764BB9EAFBDCE3B895A1E71C671  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// MagicOnion.Client.ManagedStreamingHubInfo
struct ManagedStreamingHubInfo_t91C1EAA9634FD4ED4B632E2F3C8CF2C8CE35F7F6 
{
public:
	// System.Type MagicOnion.Client.ManagedStreamingHubInfo::<StreamingHubType>k__BackingField
	Type_t * ___U3CStreamingHubTypeU3Ek__BackingField_0;
	// MagicOnion.IStreamingHubMarker MagicOnion.Client.ManagedStreamingHubInfo::<Client>k__BackingField
	RuntimeObject* ___U3CClientU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CStreamingHubTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ManagedStreamingHubInfo_t91C1EAA9634FD4ED4B632E2F3C8CF2C8CE35F7F6, ___U3CStreamingHubTypeU3Ek__BackingField_0)); }
	inline Type_t * get_U3CStreamingHubTypeU3Ek__BackingField_0() const { return ___U3CStreamingHubTypeU3Ek__BackingField_0; }
	inline Type_t ** get_address_of_U3CStreamingHubTypeU3Ek__BackingField_0() { return &___U3CStreamingHubTypeU3Ek__BackingField_0; }
	inline void set_U3CStreamingHubTypeU3Ek__BackingField_0(Type_t * value)
	{
		___U3CStreamingHubTypeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStreamingHubTypeU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CClientU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ManagedStreamingHubInfo_t91C1EAA9634FD4ED4B632E2F3C8CF2C8CE35F7F6, ___U3CClientU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CClientU3Ek__BackingField_1() const { return ___U3CClientU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CClientU3Ek__BackingField_1() { return &___U3CClientU3Ek__BackingField_1; }
	inline void set_U3CClientU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CClientU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClientU3Ek__BackingField_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of MagicOnion.Client.ManagedStreamingHubInfo
struct ManagedStreamingHubInfo_t91C1EAA9634FD4ED4B632E2F3C8CF2C8CE35F7F6_marshaled_pinvoke
{
	Type_t * ___U3CStreamingHubTypeU3Ek__BackingField_0;
	RuntimeObject* ___U3CClientU3Ek__BackingField_1;
};
// Native definition for COM marshalling of MagicOnion.Client.ManagedStreamingHubInfo
struct ManagedStreamingHubInfo_t91C1EAA9634FD4ED4B632E2F3C8CF2C8CE35F7F6_marshaled_com
{
	Type_t * ___U3CStreamingHubTypeU3Ek__BackingField_0;
	RuntimeObject* ___U3CClientU3Ek__BackingField_1;
};

// Grpc.Core.SslCredentials
struct SslCredentials_t149917768B7958A3C7B569C5879C5CAFC7F43D3C  : public ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E
{
public:
	// System.String Grpc.Core.SslCredentials::rootCertificates
	String_t* ___rootCertificates_1;
	// Grpc.Core.KeyCertificatePair Grpc.Core.SslCredentials::keyCertificatePair
	KeyCertificatePair_tA0E29F1A2B9C02967DCEF3AEBF14D49AB346592C * ___keyCertificatePair_2;
	// Grpc.Core.VerifyPeerCallback Grpc.Core.SslCredentials::verifyPeerCallback
	VerifyPeerCallback_t80B8E9DEB9B025308E05573E757CA8136A52DD9A * ___verifyPeerCallback_3;

public:
	inline static int32_t get_offset_of_rootCertificates_1() { return static_cast<int32_t>(offsetof(SslCredentials_t149917768B7958A3C7B569C5879C5CAFC7F43D3C, ___rootCertificates_1)); }
	inline String_t* get_rootCertificates_1() const { return ___rootCertificates_1; }
	inline String_t** get_address_of_rootCertificates_1() { return &___rootCertificates_1; }
	inline void set_rootCertificates_1(String_t* value)
	{
		___rootCertificates_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rootCertificates_1), (void*)value);
	}

	inline static int32_t get_offset_of_keyCertificatePair_2() { return static_cast<int32_t>(offsetof(SslCredentials_t149917768B7958A3C7B569C5879C5CAFC7F43D3C, ___keyCertificatePair_2)); }
	inline KeyCertificatePair_tA0E29F1A2B9C02967DCEF3AEBF14D49AB346592C * get_keyCertificatePair_2() const { return ___keyCertificatePair_2; }
	inline KeyCertificatePair_tA0E29F1A2B9C02967DCEF3AEBF14D49AB346592C ** get_address_of_keyCertificatePair_2() { return &___keyCertificatePair_2; }
	inline void set_keyCertificatePair_2(KeyCertificatePair_tA0E29F1A2B9C02967DCEF3AEBF14D49AB346592C * value)
	{
		___keyCertificatePair_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyCertificatePair_2), (void*)value);
	}

	inline static int32_t get_offset_of_verifyPeerCallback_3() { return static_cast<int32_t>(offsetof(SslCredentials_t149917768B7958A3C7B569C5879C5CAFC7F43D3C, ___verifyPeerCallback_3)); }
	inline VerifyPeerCallback_t80B8E9DEB9B025308E05573E757CA8136A52DD9A * get_verifyPeerCallback_3() const { return ___verifyPeerCallback_3; }
	inline VerifyPeerCallback_t80B8E9DEB9B025308E05573E757CA8136A52DD9A ** get_address_of_verifyPeerCallback_3() { return &___verifyPeerCallback_3; }
	inline void set_verifyPeerCallback_3(VerifyPeerCallback_t80B8E9DEB9B025308E05573E757CA8136A52DD9A * value)
	{
		___verifyPeerCallback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___verifyPeerCallback_3), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C, ___m_task_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_pinvoke
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_com
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};

// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C, ___m_task_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_marshaled_pinvoke
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_marshaled_com
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD, ___m_task_2)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Nullable`1<System.DateTime>
struct Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D 
{
public:
	// T System.Nullable`1::value
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D, ___value_0)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_value_0() const { return ___value_0; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.ValueTuple`2<System.Func`1<System.Threading.Tasks.Task>,MagicOnion.Client.ManagedStreamingHubInfo>
struct ValueTuple_2_tE0C83C359BD973BE064EB7B4E773F729D96E402F 
{
public:
	// T1 System.ValueTuple`2::Item1
	Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	ManagedStreamingHubInfo_t91C1EAA9634FD4ED4B632E2F3C8CF2C8CE35F7F6  ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_tE0C83C359BD973BE064EB7B4E773F729D96E402F, ___Item1_0)); }
	inline Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * get_Item1_0() const { return ___Item1_0; }
	inline Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_tE0C83C359BD973BE064EB7B4E773F729D96E402F, ___Item2_1)); }
	inline ManagedStreamingHubInfo_t91C1EAA9634FD4ED4B632E2F3C8CF2C8CE35F7F6  get_Item2_1() const { return ___Item2_1; }
	inline ManagedStreamingHubInfo_t91C1EAA9634FD4ED4B632E2F3C8CF2C8CE35F7F6 * get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(ManagedStreamingHubInfo_t91C1EAA9634FD4ED4B632E2F3C8CF2C8CE35F7F6  value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Item2_1))->___U3CStreamingHubTypeU3Ek__BackingField_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Item2_1))->___U3CClientU3Ek__BackingField_1), (void*)NULL);
		#endif
	}
};


// System.ValueTuple`2<System.Object,MagicOnion.Client.ManagedStreamingHubInfo>
struct ValueTuple_2_t030C397FF2B7FEA059CBBFFF5345CFC66E1AB6D2 
{
public:
	// T1 System.ValueTuple`2::Item1
	RuntimeObject * ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	ManagedStreamingHubInfo_t91C1EAA9634FD4ED4B632E2F3C8CF2C8CE35F7F6  ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_t030C397FF2B7FEA059CBBFFF5345CFC66E1AB6D2, ___Item1_0)); }
	inline RuntimeObject * get_Item1_0() const { return ___Item1_0; }
	inline RuntimeObject ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(RuntimeObject * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_t030C397FF2B7FEA059CBBFFF5345CFC66E1AB6D2, ___Item2_1)); }
	inline ManagedStreamingHubInfo_t91C1EAA9634FD4ED4B632E2F3C8CF2C8CE35F7F6  get_Item2_1() const { return ___Item2_1; }
	inline ManagedStreamingHubInfo_t91C1EAA9634FD4ED4B632E2F3C8CF2C8CE35F7F6 * get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(ManagedStreamingHubInfo_t91C1EAA9634FD4ED4B632E2F3C8CF2C8CE35F7F6  value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Item2_1))->___U3CStreamingHubTypeU3Ek__BackingField_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Item2_1))->___U3CClientU3Ek__BackingField_1), (void*)NULL);
		#endif
	}
};


// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 
{
public:
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_synchronizationContext_0() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_synchronizationContext_0)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get_m_synchronizationContext_0() const { return ___m_synchronizationContext_0; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of_m_synchronizationContext_0() { return &___m_synchronizationContext_0; }
	inline void set_m_synchronizationContext_0(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		___m_synchronizationContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_synchronizationContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_task_2)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_2() const { return ___m_task_2; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_pinvoke
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_com
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};

// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A 
{
public:
	// System.Threading.CancellationCallbackInfo System.Threading.CancellationTokenRegistration::m_callbackInfo
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_callbackInfo_0;
	// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo> System.Threading.CancellationTokenRegistration::m_registrationInfo
	SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  ___m_registrationInfo_1;

public:
	inline static int32_t get_offset_of_m_callbackInfo_0() { return static_cast<int32_t>(offsetof(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A, ___m_callbackInfo_0)); }
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * get_m_callbackInfo_0() const { return ___m_callbackInfo_0; }
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B ** get_address_of_m_callbackInfo_0() { return &___m_callbackInfo_0; }
	inline void set_m_callbackInfo_0(CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * value)
	{
		___m_callbackInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_callbackInfo_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_registrationInfo_1() { return static_cast<int32_t>(offsetof(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A, ___m_registrationInfo_1)); }
	inline SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  get_m_registrationInfo_1() const { return ___m_registrationInfo_1; }
	inline SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0 * get_address_of_m_registrationInfo_1() { return &___m_registrationInfo_1; }
	inline void set_m_registrationInfo_1(SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  value)
	{
		___m_registrationInfo_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_registrationInfo_1))->___m_source_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_marshaled_pinvoke
{
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  ___m_registrationInfo_1;
};
// Native definition for COM marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_marshaled_com
{
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  ___m_registrationInfo_1;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E_marshaled_pinvoke
{
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_marshaled_pinvoke ___m_configuredTaskAwaiter_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E_marshaled_com
{
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_marshaled_com ___m_configuredTaskAwaiter_0;
};

// MagicOnion.Unity.CreateGrpcChannelContext
struct CreateGrpcChannelContext_tB9ED19C9DEE05147585D686FB12F9F574329764B  : public RuntimeObject
{
public:
	// MagicOnion.Unity.IGrpcChannelProvider MagicOnion.Unity.CreateGrpcChannelContext::<Provider>k__BackingField
	RuntimeObject* ___U3CProviderU3Ek__BackingField_0;
	// MagicOnion.Unity.GrpcChannelTarget MagicOnion.Unity.CreateGrpcChannelContext::<Target>k__BackingField
	GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF  ___U3CTargetU3Ek__BackingField_1;
	// MagicOnion.Unity.GrpcChannelOptionsBag MagicOnion.Unity.CreateGrpcChannelContext::<ChannelOptions>k__BackingField
	GrpcChannelOptionsBag_t3A8A75BF4444B4683CCE7492D71C0E82275A62DF * ___U3CChannelOptionsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CProviderU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CreateGrpcChannelContext_tB9ED19C9DEE05147585D686FB12F9F574329764B, ___U3CProviderU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CProviderU3Ek__BackingField_0() const { return ___U3CProviderU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CProviderU3Ek__BackingField_0() { return &___U3CProviderU3Ek__BackingField_0; }
	inline void set_U3CProviderU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CProviderU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CProviderU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTargetU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CreateGrpcChannelContext_tB9ED19C9DEE05147585D686FB12F9F574329764B, ___U3CTargetU3Ek__BackingField_1)); }
	inline GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF  get_U3CTargetU3Ek__BackingField_1() const { return ___U3CTargetU3Ek__BackingField_1; }
	inline GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF * get_address_of_U3CTargetU3Ek__BackingField_1() { return &___U3CTargetU3Ek__BackingField_1; }
	inline void set_U3CTargetU3Ek__BackingField_1(GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF  value)
	{
		___U3CTargetU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CTargetU3Ek__BackingField_1))->___U3CHostU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CChannelOptionsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(CreateGrpcChannelContext_tB9ED19C9DEE05147585D686FB12F9F574329764B, ___U3CChannelOptionsU3Ek__BackingField_2)); }
	inline GrpcChannelOptionsBag_t3A8A75BF4444B4683CCE7492D71C0E82275A62DF * get_U3CChannelOptionsU3Ek__BackingField_2() const { return ___U3CChannelOptionsU3Ek__BackingField_2; }
	inline GrpcChannelOptionsBag_t3A8A75BF4444B4683CCE7492D71C0E82275A62DF ** get_address_of_U3CChannelOptionsU3Ek__BackingField_2() { return &___U3CChannelOptionsU3Ek__BackingField_2; }
	inline void set_U3CChannelOptionsU3Ek__BackingField_2(GrpcChannelOptionsBag_t3A8A75BF4444B4683CCE7492D71C0E82275A62DF * value)
	{
		___U3CChannelOptionsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CChannelOptionsU3Ek__BackingField_2), (void*)value);
	}
};


// MagicOnion.Unity.DefaultGrpcChannelProvider
struct DefaultGrpcChannelProvider_t2D7248106FDE928590569DFC42D33470219BE80B  : public GrpcCCoreGrpcChannelProvider_t5E6293DCD6CD392A6C78779789B14F58D5AC2ECD
{
public:

public:
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_15)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_18)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.UriFormat
struct UriFormat_t25C936463BDE737B16A8EC3DA05091FC31F1A71F 
{
public:
	// System.Int32 System.UriFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriFormat_t25C936463BDE737B16A8EC3DA05091FC31F1A71F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriIdnScope
struct UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriKind
struct UriKind_tFC16ACC1842283AAE2C7F50C9C70EFBF6550B3FC 
{
public:
	// System.Int32 System.UriKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriKind_tFC16ACC1842283AAE2C7F50C9C70EFBF6550B3FC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Grpc.Core.ChannelOption/OptionType
struct OptionType_t03386B266AD3EBE63D34D1B950EE76F6612647C4 
{
public:
	// System.Int32 Grpc.Core.ChannelOption/OptionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OptionType_t03386B266AD3EBE63D34D1B950EE76F6612647C4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MagicOnion.Unity.GrpcChannelOptionsBag/<GetValues>d__4
struct U3CGetValuesU3Ed__4_t3EC47CADB40D760F006EE3FC565ABDF09FFB0805  : public RuntimeObject
{
public:
	// System.Int32 MagicOnion.Unity.GrpcChannelOptionsBag/<GetValues>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<System.String,System.Object> MagicOnion.Unity.GrpcChannelOptionsBag/<GetValues>d__4::<>2__current
	KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  ___U3CU3E2__current_1;
	// System.Int32 MagicOnion.Unity.GrpcChannelOptionsBag/<GetValues>d__4::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// MagicOnion.Unity.GrpcChannelOptionsBag MagicOnion.Unity.GrpcChannelOptionsBag/<GetValues>d__4::<>4__this
	GrpcChannelOptionsBag_t3A8A75BF4444B4683CCE7492D71C0E82275A62DF * ___U3CU3E4__this_3;
	// MagicOnion.Unity.GrpcCCoreChannelOptions MagicOnion.Unity.GrpcChannelOptionsBag/<GetValues>d__4::<channelOptionsForCCore>5__1
	GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 * ___U3CchannelOptionsForCCoreU3E5__1_4;
	// System.Collections.Generic.IEnumerator`1<Grpc.Core.ChannelOption> MagicOnion.Unity.GrpcChannelOptionsBag/<GetValues>d__4::<>s__2
	RuntimeObject* ___U3CU3Es__2_5;
	// Grpc.Core.ChannelOption MagicOnion.Unity.GrpcChannelOptionsBag/<GetValues>d__4::<channelOption>5__3
	ChannelOption_t220AB2C90AF6E7CEC603E337F7D70DD956976F2D * ___U3CchannelOptionU3E5__3_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetValuesU3Ed__4_t3EC47CADB40D760F006EE3FC565ABDF09FFB0805, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetValuesU3Ed__4_t3EC47CADB40D760F006EE3FC565ABDF09FFB0805, ___U3CU3E2__current_1)); }
	inline KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetValuesU3Ed__4_t3EC47CADB40D760F006EE3FC565ABDF09FFB0805, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CGetValuesU3Ed__4_t3EC47CADB40D760F006EE3FC565ABDF09FFB0805, ___U3CU3E4__this_3)); }
	inline GrpcChannelOptionsBag_t3A8A75BF4444B4683CCE7492D71C0E82275A62DF * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline GrpcChannelOptionsBag_t3A8A75BF4444B4683CCE7492D71C0E82275A62DF ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(GrpcChannelOptionsBag_t3A8A75BF4444B4683CCE7492D71C0E82275A62DF * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CchannelOptionsForCCoreU3E5__1_4() { return static_cast<int32_t>(offsetof(U3CGetValuesU3Ed__4_t3EC47CADB40D760F006EE3FC565ABDF09FFB0805, ___U3CchannelOptionsForCCoreU3E5__1_4)); }
	inline GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 * get_U3CchannelOptionsForCCoreU3E5__1_4() const { return ___U3CchannelOptionsForCCoreU3E5__1_4; }
	inline GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 ** get_address_of_U3CchannelOptionsForCCoreU3E5__1_4() { return &___U3CchannelOptionsForCCoreU3E5__1_4; }
	inline void set_U3CchannelOptionsForCCoreU3E5__1_4(GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 * value)
	{
		___U3CchannelOptionsForCCoreU3E5__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CchannelOptionsForCCoreU3E5__1_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__2_5() { return static_cast<int32_t>(offsetof(U3CGetValuesU3Ed__4_t3EC47CADB40D760F006EE3FC565ABDF09FFB0805, ___U3CU3Es__2_5)); }
	inline RuntimeObject* get_U3CU3Es__2_5() const { return ___U3CU3Es__2_5; }
	inline RuntimeObject** get_address_of_U3CU3Es__2_5() { return &___U3CU3Es__2_5; }
	inline void set_U3CU3Es__2_5(RuntimeObject* value)
	{
		___U3CU3Es__2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Es__2_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CchannelOptionU3E5__3_6() { return static_cast<int32_t>(offsetof(U3CGetValuesU3Ed__4_t3EC47CADB40D760F006EE3FC565ABDF09FFB0805, ___U3CchannelOptionU3E5__3_6)); }
	inline ChannelOption_t220AB2C90AF6E7CEC603E337F7D70DD956976F2D * get_U3CchannelOptionU3E5__3_6() const { return ___U3CchannelOptionU3E5__3_6; }
	inline ChannelOption_t220AB2C90AF6E7CEC603E337F7D70DD956976F2D ** get_address_of_U3CchannelOptionU3E5__3_6() { return &___U3CchannelOptionU3E5__3_6; }
	inline void set_U3CchannelOptionU3E5__3_6(ChannelOption_t220AB2C90AF6E7CEC603E337F7D70DD956976F2D * value)
	{
		___U3CchannelOptionU3E5__3_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CchannelOptionU3E5__3_6), (void*)value);
	}
};


// System.Uri/Flags
struct Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4 
{
public:
	// System.UInt64 System.Uri/Flags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B 
{
public:
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;

public:
	inline static int32_t get_offset_of_m_builder_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B, ___m_builder_1)); }
	inline AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  get_m_builder_1() const { return ___m_builder_1; }
	inline AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD * get_address_of_m_builder_1() { return &___m_builder_1; }
	inline void set_m_builder_1(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  value)
	{
		___m_builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}
};

struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___s_cachedCompleted_0;

public:
	inline static int32_t get_offset_of_s_cachedCompleted_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_StaticFields, ___s_cachedCompleted_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_s_cachedCompleted_0() const { return ___s_cachedCompleted_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_s_cachedCompleted_0() { return &___s_cachedCompleted_0; }
	inline void set_s_cachedCompleted_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___s_cachedCompleted_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedCompleted_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshaled_com
{
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;
};

// Grpc.Core.ChannelOption
struct ChannelOption_t220AB2C90AF6E7CEC603E337F7D70DD956976F2D  : public RuntimeObject
{
public:
	// Grpc.Core.ChannelOption/OptionType Grpc.Core.ChannelOption::type
	int32_t ___type_0;
	// System.String Grpc.Core.ChannelOption::name
	String_t* ___name_1;
	// System.Int32 Grpc.Core.ChannelOption::intValue
	int32_t ___intValue_2;
	// System.String Grpc.Core.ChannelOption::stringValue
	String_t* ___stringValue_3;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(ChannelOption_t220AB2C90AF6E7CEC603E337F7D70DD956976F2D, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(ChannelOption_t220AB2C90AF6E7CEC603E337F7D70DD956976F2D, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}

	inline static int32_t get_offset_of_intValue_2() { return static_cast<int32_t>(offsetof(ChannelOption_t220AB2C90AF6E7CEC603E337F7D70DD956976F2D, ___intValue_2)); }
	inline int32_t get_intValue_2() const { return ___intValue_2; }
	inline int32_t* get_address_of_intValue_2() { return &___intValue_2; }
	inline void set_intValue_2(int32_t value)
	{
		___intValue_2 = value;
	}

	inline static int32_t get_offset_of_stringValue_3() { return static_cast<int32_t>(offsetof(ChannelOption_t220AB2C90AF6E7CEC603E337F7D70DD956976F2D, ___stringValue_3)); }
	inline String_t* get_stringValue_3() const { return ___stringValue_3; }
	inline String_t** get_address_of_stringValue_3() { return &___stringValue_3; }
	inline void set_stringValue_3(String_t* value)
	{
		___stringValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringValue_3), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_16;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_17;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___m_Syntax_18;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_19;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_20;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * ___m_Info_21;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_22;

public:
	inline static int32_t get_offset_of_m_String_16() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_String_16)); }
	inline String_t* get_m_String_16() const { return ___m_String_16; }
	inline String_t** get_address_of_m_String_16() { return &___m_String_16; }
	inline void set_m_String_16(String_t* value)
	{
		___m_String_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_17() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_originalUnicodeString_17)); }
	inline String_t* get_m_originalUnicodeString_17() const { return ___m_originalUnicodeString_17; }
	inline String_t** get_address_of_m_originalUnicodeString_17() { return &___m_originalUnicodeString_17; }
	inline void set_m_originalUnicodeString_17(String_t* value)
	{
		___m_originalUnicodeString_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_originalUnicodeString_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_Syntax_18() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Syntax_18)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_m_Syntax_18() const { return ___m_Syntax_18; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_m_Syntax_18() { return &___m_Syntax_18; }
	inline void set_m_Syntax_18(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___m_Syntax_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Syntax_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_19() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_DnsSafeHost_19)); }
	inline String_t* get_m_DnsSafeHost_19() const { return ___m_DnsSafeHost_19; }
	inline String_t** get_address_of_m_DnsSafeHost_19() { return &___m_DnsSafeHost_19; }
	inline void set_m_DnsSafeHost_19(String_t* value)
	{
		___m_DnsSafeHost_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DnsSafeHost_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_20() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Flags_20)); }
	inline uint64_t get_m_Flags_20() const { return ___m_Flags_20; }
	inline uint64_t* get_address_of_m_Flags_20() { return &___m_Flags_20; }
	inline void set_m_Flags_20(uint64_t value)
	{
		___m_Flags_20 = value;
	}

	inline static int32_t get_offset_of_m_Info_21() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Info_21)); }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * get_m_Info_21() const { return ___m_Info_21; }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 ** get_address_of_m_Info_21() { return &___m_Info_21; }
	inline void set_m_Info_21(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * value)
	{
		___m_Info_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Info_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_iriParsing_22() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_iriParsing_22)); }
	inline bool get_m_iriParsing_22() const { return ___m_iriParsing_22; }
	inline bool* get_address_of_m_iriParsing_22() { return &___m_iriParsing_22; }
	inline void set_m_iriParsing_22(bool value)
	{
		___m_iriParsing_22 = value;
	}
};

struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields
{
public:
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_24;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_25;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_26;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_27;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_29;
	// System.Object System.Uri::s_initLock
	RuntimeObject * ___s_initLock_30;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___HexLowerChars_34;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ____WSchars_35;

public:
	inline static int32_t get_offset_of_UriSchemeFile_0() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFile_0)); }
	inline String_t* get_UriSchemeFile_0() const { return ___UriSchemeFile_0; }
	inline String_t** get_address_of_UriSchemeFile_0() { return &___UriSchemeFile_0; }
	inline void set_UriSchemeFile_0(String_t* value)
	{
		___UriSchemeFile_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFile_0), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_1() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFtp_1)); }
	inline String_t* get_UriSchemeFtp_1() const { return ___UriSchemeFtp_1; }
	inline String_t** get_address_of_UriSchemeFtp_1() { return &___UriSchemeFtp_1; }
	inline void set_UriSchemeFtp_1(String_t* value)
	{
		___UriSchemeFtp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFtp_1), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_2() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeGopher_2)); }
	inline String_t* get_UriSchemeGopher_2() const { return ___UriSchemeGopher_2; }
	inline String_t** get_address_of_UriSchemeGopher_2() { return &___UriSchemeGopher_2; }
	inline void set_UriSchemeGopher_2(String_t* value)
	{
		___UriSchemeGopher_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeGopher_2), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_3() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttp_3)); }
	inline String_t* get_UriSchemeHttp_3() const { return ___UriSchemeHttp_3; }
	inline String_t** get_address_of_UriSchemeHttp_3() { return &___UriSchemeHttp_3; }
	inline void set_UriSchemeHttp_3(String_t* value)
	{
		___UriSchemeHttp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttp_3), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_4() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttps_4)); }
	inline String_t* get_UriSchemeHttps_4() const { return ___UriSchemeHttps_4; }
	inline String_t** get_address_of_UriSchemeHttps_4() { return &___UriSchemeHttps_4; }
	inline void set_UriSchemeHttps_4(String_t* value)
	{
		___UriSchemeHttps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttps_4), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWs_5() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWs_5)); }
	inline String_t* get_UriSchemeWs_5() const { return ___UriSchemeWs_5; }
	inline String_t** get_address_of_UriSchemeWs_5() { return &___UriSchemeWs_5; }
	inline void set_UriSchemeWs_5(String_t* value)
	{
		___UriSchemeWs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWs_5), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWss_6() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWss_6)); }
	inline String_t* get_UriSchemeWss_6() const { return ___UriSchemeWss_6; }
	inline String_t** get_address_of_UriSchemeWss_6() { return &___UriSchemeWss_6; }
	inline void set_UriSchemeWss_6(String_t* value)
	{
		___UriSchemeWss_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWss_6), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_7() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeMailto_7)); }
	inline String_t* get_UriSchemeMailto_7() const { return ___UriSchemeMailto_7; }
	inline String_t** get_address_of_UriSchemeMailto_7() { return &___UriSchemeMailto_7; }
	inline void set_UriSchemeMailto_7(String_t* value)
	{
		___UriSchemeMailto_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeMailto_7), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_8() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNews_8)); }
	inline String_t* get_UriSchemeNews_8() const { return ___UriSchemeNews_8; }
	inline String_t** get_address_of_UriSchemeNews_8() { return &___UriSchemeNews_8; }
	inline void set_UriSchemeNews_8(String_t* value)
	{
		___UriSchemeNews_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNews_8), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_9() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNntp_9)); }
	inline String_t* get_UriSchemeNntp_9() const { return ___UriSchemeNntp_9; }
	inline String_t** get_address_of_UriSchemeNntp_9() { return &___UriSchemeNntp_9; }
	inline void set_UriSchemeNntp_9(String_t* value)
	{
		___UriSchemeNntp_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNntp_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_10() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetTcp_10)); }
	inline String_t* get_UriSchemeNetTcp_10() const { return ___UriSchemeNetTcp_10; }
	inline String_t** get_address_of_UriSchemeNetTcp_10() { return &___UriSchemeNetTcp_10; }
	inline void set_UriSchemeNetTcp_10(String_t* value)
	{
		___UriSchemeNetTcp_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetTcp_10), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_11() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetPipe_11)); }
	inline String_t* get_UriSchemeNetPipe_11() const { return ___UriSchemeNetPipe_11; }
	inline String_t** get_address_of_UriSchemeNetPipe_11() { return &___UriSchemeNetPipe_11; }
	inline void set_UriSchemeNetPipe_11(String_t* value)
	{
		___UriSchemeNetPipe_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetPipe_11), (void*)value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_12() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___SchemeDelimiter_12)); }
	inline String_t* get_SchemeDelimiter_12() const { return ___SchemeDelimiter_12; }
	inline String_t** get_address_of_SchemeDelimiter_12() { return &___SchemeDelimiter_12; }
	inline void set_SchemeDelimiter_12(String_t* value)
	{
		___SchemeDelimiter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SchemeDelimiter_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_ConfigInitialized_23() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitialized_23)); }
	inline bool get_s_ConfigInitialized_23() const { return ___s_ConfigInitialized_23; }
	inline bool* get_address_of_s_ConfigInitialized_23() { return &___s_ConfigInitialized_23; }
	inline void set_s_ConfigInitialized_23(bool value)
	{
		___s_ConfigInitialized_23 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_24() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitializing_24)); }
	inline bool get_s_ConfigInitializing_24() const { return ___s_ConfigInitializing_24; }
	inline bool* get_address_of_s_ConfigInitializing_24() { return &___s_ConfigInitializing_24; }
	inline void set_s_ConfigInitializing_24(bool value)
	{
		___s_ConfigInitializing_24 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_25() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IdnScope_25)); }
	inline int32_t get_s_IdnScope_25() const { return ___s_IdnScope_25; }
	inline int32_t* get_address_of_s_IdnScope_25() { return &___s_IdnScope_25; }
	inline void set_s_IdnScope_25(int32_t value)
	{
		___s_IdnScope_25 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_26() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IriParsing_26)); }
	inline bool get_s_IriParsing_26() const { return ___s_IriParsing_26; }
	inline bool* get_address_of_s_IriParsing_26() { return &___s_IriParsing_26; }
	inline void set_s_IriParsing_26(bool value)
	{
		___s_IriParsing_26 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_27() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___useDotNetRelativeOrAbsolute_27)); }
	inline bool get_useDotNetRelativeOrAbsolute_27() const { return ___useDotNetRelativeOrAbsolute_27; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_27() { return &___useDotNetRelativeOrAbsolute_27; }
	inline void set_useDotNetRelativeOrAbsolute_27(bool value)
	{
		___useDotNetRelativeOrAbsolute_27 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_29() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___IsWindowsFileSystem_29)); }
	inline bool get_IsWindowsFileSystem_29() const { return ___IsWindowsFileSystem_29; }
	inline bool* get_address_of_IsWindowsFileSystem_29() { return &___IsWindowsFileSystem_29; }
	inline void set_IsWindowsFileSystem_29(bool value)
	{
		___IsWindowsFileSystem_29 = value;
	}

	inline static int32_t get_offset_of_s_initLock_30() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_initLock_30)); }
	inline RuntimeObject * get_s_initLock_30() const { return ___s_initLock_30; }
	inline RuntimeObject ** get_address_of_s_initLock_30() { return &___s_initLock_30; }
	inline void set_s_initLock_30(RuntimeObject * value)
	{
		___s_initLock_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_initLock_30), (void*)value);
	}

	inline static int32_t get_offset_of_HexLowerChars_34() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___HexLowerChars_34)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_HexLowerChars_34() const { return ___HexLowerChars_34; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_HexLowerChars_34() { return &___HexLowerChars_34; }
	inline void set_HexLowerChars_34(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___HexLowerChars_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HexLowerChars_34), (void*)value);
	}

	inline static int32_t get_offset_of__WSchars_35() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ____WSchars_35)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get__WSchars_35() const { return ____WSchars_35; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of__WSchars_35() { return &____WSchars_35; }
	inline void set__WSchars_35(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		____WSchars_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WSchars_35), (void*)value);
	}
};


// MagicOnion.GrpcChannelx/<<DisposeStreamingHubClient>g__Forget|22_0>d
struct U3CU3CDisposeStreamingHubClientU3Eg__ForgetU7C22_0U3Ed_tFB27AD025D784934ACD703C8C49741F1A04EBEA0  : public RuntimeObject
{
public:
	// System.Int32 MagicOnion.GrpcChannelx/<<DisposeStreamingHubClient>g__Forget|22_0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder MagicOnion.GrpcChannelx/<<DisposeStreamingHubClient>g__Forget|22_0>d::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// System.Threading.Tasks.Task MagicOnion.GrpcChannelx/<<DisposeStreamingHubClient>g__Forget|22_0>d::t
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_2;
	// System.Exception MagicOnion.GrpcChannelx/<<DisposeStreamingHubClient>g__Forget|22_0>d::<e>5__1
	Exception_t * ___U3CeU3E5__1_3;
	// System.Runtime.CompilerServices.TaskAwaiter MagicOnion.GrpcChannelx/<<DisposeStreamingHubClient>g__Forget|22_0>d::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CU3CDisposeStreamingHubClientU3Eg__ForgetU7C22_0U3Ed_tFB27AD025D784934ACD703C8C49741F1A04EBEA0, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CU3CDisposeStreamingHubClientU3Eg__ForgetU7C22_0U3Ed_tFB27AD025D784934ACD703C8C49741F1A04EBEA0, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_t_2() { return static_cast<int32_t>(offsetof(U3CU3CDisposeStreamingHubClientU3Eg__ForgetU7C22_0U3Ed_tFB27AD025D784934ACD703C8C49741F1A04EBEA0, ___t_2)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_2() const { return ___t_2; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_2() { return &___t_2; }
	inline void set_t_2(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CU3CDisposeStreamingHubClientU3Eg__ForgetU7C22_0U3Ed_tFB27AD025D784934ACD703C8C49741F1A04EBEA0, ___U3CeU3E5__1_3)); }
	inline Exception_t * get_U3CeU3E5__1_3() const { return ___U3CeU3E5__1_3; }
	inline Exception_t ** get_address_of_U3CeU3E5__1_3() { return &___U3CeU3E5__1_3; }
	inline void set_U3CeU3E5__1_3(Exception_t * value)
	{
		___U3CeU3E5__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CeU3E5__1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CU3CDisposeStreamingHubClientU3Eg__ForgetU7C22_0U3Ed_tFB27AD025D784934ACD703C8C49741F1A04EBEA0, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}
};


// MagicOnion.GrpcChannelx/<Forget>d__28
struct U3CForgetU3Ed__28_t7F8B2113E2AF53E5DAC93234969022BD116C7B7A  : public RuntimeObject
{
public:
	// System.Int32 MagicOnion.GrpcChannelx/<Forget>d__28::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder MagicOnion.GrpcChannelx/<Forget>d__28::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// System.Threading.Tasks.Task MagicOnion.GrpcChannelx/<Forget>d__28::t
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_2;
	// System.Exception MagicOnion.GrpcChannelx/<Forget>d__28::<e>5__1
	Exception_t * ___U3CeU3E5__1_3;
	// System.Runtime.CompilerServices.TaskAwaiter MagicOnion.GrpcChannelx/<Forget>d__28::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CForgetU3Ed__28_t7F8B2113E2AF53E5DAC93234969022BD116C7B7A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CForgetU3Ed__28_t7F8B2113E2AF53E5DAC93234969022BD116C7B7A, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_t_2() { return static_cast<int32_t>(offsetof(U3CForgetU3Ed__28_t7F8B2113E2AF53E5DAC93234969022BD116C7B7A, ___t_2)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_2() const { return ___t_2; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_2() { return &___t_2; }
	inline void set_t_2(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CForgetU3Ed__28_t7F8B2113E2AF53E5DAC93234969022BD116C7B7A, ___U3CeU3E5__1_3)); }
	inline Exception_t * get_U3CeU3E5__1_3() const { return ___U3CeU3E5__1_3; }
	inline Exception_t ** get_address_of_U3CeU3E5__1_3() { return &___U3CeU3E5__1_3; }
	inline void set_U3CeU3E5__1_3(Exception_t * value)
	{
		___U3CeU3E5__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CeU3E5__1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CForgetU3Ed__28_t7F8B2113E2AF53E5DAC93234969022BD116C7B7A, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}
};


// System.Action`1<MagicOnion.GrpcChannelx>
struct Action_1_t549C5EF27D2CC5AD07CBB9088B404BF46A678163  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Threading.Tasks.Task>
struct Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.ValueTuple`2<System.Func`1<System.Threading.Tasks.Task>,MagicOnion.Client.ManagedStreamingHubInfo>,MagicOnion.Client.ManagedStreamingHubInfo>
struct Func_2_t69A7D283CF5BDCF8AA89902CBF7815EFE642BE1A  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// MagicOnion.GrpcChannelx/<ConnectAsync>d__18
struct U3CConnectAsyncU3Ed__18_tA12E5FCEA1EEE4814A0B579677FA716E4FAD210E  : public RuntimeObject
{
public:
	// System.Int32 MagicOnion.GrpcChannelx/<ConnectAsync>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder MagicOnion.GrpcChannelx/<ConnectAsync>d__18::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// System.Nullable`1<System.DateTime> MagicOnion.GrpcChannelx/<ConnectAsync>d__18::deadline
	Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  ___deadline_2;
	// MagicOnion.GrpcChannelx MagicOnion.GrpcChannelx/<ConnectAsync>d__18::<>4__this
	GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * ___U3CU3E4__this_3;
	// Grpc.Core.Channel MagicOnion.GrpcChannelx/<ConnectAsync>d__18::<grpcCChannel>5__1
	Channel_t05CCFAE14C23CE3E40F26235CB6E9F42C4B736DD * ___U3CgrpcCChannelU3E5__1_4;
	// System.Runtime.CompilerServices.TaskAwaiter MagicOnion.GrpcChannelx/<ConnectAsync>d__18::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CConnectAsyncU3Ed__18_tA12E5FCEA1EEE4814A0B579677FA716E4FAD210E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CConnectAsyncU3Ed__18_tA12E5FCEA1EEE4814A0B579677FA716E4FAD210E, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_deadline_2() { return static_cast<int32_t>(offsetof(U3CConnectAsyncU3Ed__18_tA12E5FCEA1EEE4814A0B579677FA716E4FAD210E, ___deadline_2)); }
	inline Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  get_deadline_2() const { return ___deadline_2; }
	inline Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * get_address_of_deadline_2() { return &___deadline_2; }
	inline void set_deadline_2(Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  value)
	{
		___deadline_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CConnectAsyncU3Ed__18_tA12E5FCEA1EEE4814A0B579677FA716E4FAD210E, ___U3CU3E4__this_3)); }
	inline GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CgrpcCChannelU3E5__1_4() { return static_cast<int32_t>(offsetof(U3CConnectAsyncU3Ed__18_tA12E5FCEA1EEE4814A0B579677FA716E4FAD210E, ___U3CgrpcCChannelU3E5__1_4)); }
	inline Channel_t05CCFAE14C23CE3E40F26235CB6E9F42C4B736DD * get_U3CgrpcCChannelU3E5__1_4() const { return ___U3CgrpcCChannelU3E5__1_4; }
	inline Channel_t05CCFAE14C23CE3E40F26235CB6E9F42C4B736DD ** get_address_of_U3CgrpcCChannelU3E5__1_4() { return &___U3CgrpcCChannelU3E5__1_4; }
	inline void set_U3CgrpcCChannelU3E5__1_4(Channel_t05CCFAE14C23CE3E40F26235CB6E9F42C4B736DD * value)
	{
		___U3CgrpcCChannelU3E5__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgrpcCChannelU3E5__1_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CConnectAsyncU3Ed__18_tA12E5FCEA1EEE4814A0B579677FA716E4FAD210E, ___U3CU3Eu__1_5)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
	}
};


// MagicOnion.GrpcChannelx/<DisposeAsync>d__25
struct U3CDisposeAsyncU3Ed__25_tF09584D0A9406A5CADCFD8BC4C8517DD95E66BA9  : public RuntimeObject
{
public:
	// System.Int32 MagicOnion.GrpcChannelx/<DisposeAsync>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder MagicOnion.GrpcChannelx/<DisposeAsync>d__25::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// MagicOnion.GrpcChannelx MagicOnion.GrpcChannelx/<DisposeAsync>d__25::<>4__this
	GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter MagicOnion.GrpcChannelx/<DisposeAsync>d__25::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDisposeAsyncU3Ed__25_tF09584D0A9406A5CADCFD8BC4C8517DD95E66BA9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CDisposeAsyncU3Ed__25_tF09584D0A9406A5CADCFD8BC4C8517DD95E66BA9, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDisposeAsyncU3Ed__25_tF09584D0A9406A5CADCFD8BC4C8517DD95E66BA9, ___U3CU3E4__this_2)); }
	inline GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CDisposeAsyncU3Ed__25_tF09584D0A9406A5CADCFD8BC4C8517DD95E66BA9, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// MagicOnion.GrpcChannelx/<ShutdownAsyncCore>d__17
struct U3CShutdownAsyncCoreU3Ed__17_tBAF5B09E5D61F137535A7FD3283E8A265F211FBC  : public RuntimeObject
{
public:
	// System.Int32 MagicOnion.GrpcChannelx/<ShutdownAsyncCore>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder MagicOnion.GrpcChannelx/<ShutdownAsyncCore>d__17::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// MagicOnion.GrpcChannelx MagicOnion.GrpcChannelx/<ShutdownAsyncCore>d__17::<>4__this
	GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter MagicOnion.GrpcChannelx/<ShutdownAsyncCore>d__17::<>u__1
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CShutdownAsyncCoreU3Ed__17_tBAF5B09E5D61F137535A7FD3283E8A265F211FBC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CShutdownAsyncCoreU3Ed__17_tBAF5B09E5D61F137535A7FD3283E8A265F211FBC, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CShutdownAsyncCoreU3Ed__17_tBAF5B09E5D61F137535A7FD3283E8A265F211FBC, ___U3CU3E4__this_2)); }
	inline GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CShutdownAsyncCoreU3Ed__17_tBAF5B09E5D61F137535A7FD3283E8A265F211FBC, ___U3CU3Eu__1_3)); }
	inline ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// MagicOnion.GrpcChannelx/<ShutdownInternalAsync>d__26
struct U3CShutdownInternalAsyncU3Ed__26_t5CAF2513D0D80A4B85B420DC910A51E7CC53F53F  : public RuntimeObject
{
public:
	// System.Int32 MagicOnion.GrpcChannelx/<ShutdownInternalAsync>d__26::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder MagicOnion.GrpcChannelx/<ShutdownInternalAsync>d__26::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// MagicOnion.GrpcChannelx MagicOnion.GrpcChannelx/<ShutdownInternalAsync>d__26::<>4__this
	GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter MagicOnion.GrpcChannelx/<ShutdownInternalAsync>d__26::<>u__1
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CShutdownInternalAsyncU3Ed__26_t5CAF2513D0D80A4B85B420DC910A51E7CC53F53F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CShutdownInternalAsyncU3Ed__26_t5CAF2513D0D80A4B85B420DC910A51E7CC53F53F, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CShutdownInternalAsyncU3Ed__26_t5CAF2513D0D80A4B85B420DC910A51E7CC53F53F, ___U3CU3E4__this_2)); }
	inline GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CShutdownInternalAsyncU3Ed__26_t5CAF2513D0D80A4B85B420DC910A51E7CC53F53F, ___U3CU3Eu__1_3)); }
	inline ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// MagicOnion.GrpcChannelx/<WaitForDisconnectAndDisposeAsync>d__21
struct U3CWaitForDisconnectAndDisposeAsyncU3Ed__21_t280549BD508F1BB867F4F32346F4B9D9A2D41C68  : public RuntimeObject
{
public:
	// System.Int32 MagicOnion.GrpcChannelx/<WaitForDisconnectAndDisposeAsync>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder MagicOnion.GrpcChannelx/<WaitForDisconnectAndDisposeAsync>d__21::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// MagicOnion.IStreamingHubMarker MagicOnion.GrpcChannelx/<WaitForDisconnectAndDisposeAsync>d__21::streamingHub
	RuntimeObject* ___streamingHub_2;
	// System.Threading.Tasks.Task MagicOnion.GrpcChannelx/<WaitForDisconnectAndDisposeAsync>d__21::waitForDisconnect
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___waitForDisconnect_3;
	// MagicOnion.GrpcChannelx MagicOnion.GrpcChannelx/<WaitForDisconnectAndDisposeAsync>d__21::<>4__this
	GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * ___U3CU3E4__this_4;
	// System.Runtime.CompilerServices.TaskAwaiter MagicOnion.GrpcChannelx/<WaitForDisconnectAndDisposeAsync>d__21::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitForDisconnectAndDisposeAsyncU3Ed__21_t280549BD508F1BB867F4F32346F4B9D9A2D41C68, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CWaitForDisconnectAndDisposeAsyncU3Ed__21_t280549BD508F1BB867F4F32346F4B9D9A2D41C68, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_streamingHub_2() { return static_cast<int32_t>(offsetof(U3CWaitForDisconnectAndDisposeAsyncU3Ed__21_t280549BD508F1BB867F4F32346F4B9D9A2D41C68, ___streamingHub_2)); }
	inline RuntimeObject* get_streamingHub_2() const { return ___streamingHub_2; }
	inline RuntimeObject** get_address_of_streamingHub_2() { return &___streamingHub_2; }
	inline void set_streamingHub_2(RuntimeObject* value)
	{
		___streamingHub_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___streamingHub_2), (void*)value);
	}

	inline static int32_t get_offset_of_waitForDisconnect_3() { return static_cast<int32_t>(offsetof(U3CWaitForDisconnectAndDisposeAsyncU3Ed__21_t280549BD508F1BB867F4F32346F4B9D9A2D41C68, ___waitForDisconnect_3)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_waitForDisconnect_3() const { return ___waitForDisconnect_3; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_waitForDisconnect_3() { return &___waitForDisconnect_3; }
	inline void set_waitForDisconnect_3(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___waitForDisconnect_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitForDisconnect_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3CWaitForDisconnectAndDisposeAsyncU3Ed__21_t280549BD508F1BB867F4F32346F4B9D9A2D41C68, ___U3CU3E4__this_4)); }
	inline GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * get_U3CU3E4__this_4() const { return ___U3CU3E4__this_4; }
	inline GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A ** get_address_of_U3CU3E4__this_4() { return &___U3CU3E4__this_4; }
	inline void set_U3CU3E4__this_4(GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * value)
	{
		___U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CWaitForDisconnectAndDisposeAsyncU3Ed__21_t280549BD508F1BB867F4F32346F4B9D9A2D41C68, ___U3CU3Eu__1_5)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
	}
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// System.ObjectDisposedException
struct ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A  : public InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB
{
public:
	// System.String System.ObjectDisposedException::objectName
	String_t* ___objectName_17;

public:
	inline static int32_t get_offset_of_objectName_17() { return static_cast<int32_t>(offsetof(ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A, ___objectName_17)); }
	inline String_t* get_objectName_17() const { return ___objectName_17; }
	inline String_t** get_address_of_objectName_17() { return &___objectName_17; }
	inline void set_objectName_17(String_t* value)
	{
		___objectName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectName_17), (void*)value);
	}
};


// MagicOnion.Unity.GrpcChannelProviderHost
struct GrpcChannelProviderHost_t0313060C8CEE5ECBBFEE81A54E13951CBFBF32D1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// MagicOnion.Unity.IGrpcChannelProvider MagicOnion.Unity.GrpcChannelProviderHost::<Provider>k__BackingField
	RuntimeObject* ___U3CProviderU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CProviderU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(GrpcChannelProviderHost_t0313060C8CEE5ECBBFEE81A54E13951CBFBF32D1, ___U3CProviderU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CProviderU3Ek__BackingField_4() const { return ___U3CProviderU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CProviderU3Ek__BackingField_4() { return &___U3CProviderU3Ek__BackingField_4; }
	inline void set_U3CProviderU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CProviderU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CProviderU3Ek__BackingField_4), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Grpc.Core.ChannelOption[]
struct ChannelOptionU5BU5D_t40B01726AADD464802F0CC66325E43E99C532E53  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ChannelOption_t220AB2C90AF6E7CEC603E337F7D70DD956976F2D * m_Items[1];

public:
	inline ChannelOption_t220AB2C90AF6E7CEC603E337F7D70DD956976F2D * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ChannelOption_t220AB2C90AF6E7CEC603E337F7D70DD956976F2D ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ChannelOption_t220AB2C90AF6E7CEC603E337F7D70DD956976F2D * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ChannelOption_t220AB2C90AF6E7CEC603E337F7D70DD956976F2D * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ChannelOption_t220AB2C90AF6E7CEC603E337F7D70DD956976F2D ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ChannelOption_t220AB2C90AF6E7CEC603E337F7D70DD956976F2D * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// MagicOnion.GrpcChannelx[]
struct GrpcChannelxU5BU5D_tA4631A4B0BD22B04BE95989B436ECF9A2300F417  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * m_Items[1];

public:
	inline GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// MagicOnion.Unity.GrpcChannelProviderHost[]
struct GrpcChannelProviderHostU5BU5D_t04402EFEBDCD691AE503FEAE40C7D8FC1B69406F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GrpcChannelProviderHost_t0313060C8CEE5ECBBFEE81A54E13951CBFBF32D1 * m_Items[1];

public:
	inline GrpcChannelProviderHost_t0313060C8CEE5ECBBFEE81A54E13951CBFBF32D1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GrpcChannelProviderHost_t0313060C8CEE5ECBBFEE81A54E13951CBFBF32D1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GrpcChannelProviderHost_t0313060C8CEE5ECBBFEE81A54E13951CBFBF32D1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GrpcChannelProviderHost_t0313060C8CEE5ECBBFEE81A54E13951CBFBF32D1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GrpcChannelProviderHost_t0313060C8CEE5ECBBFEE81A54E13951CBFBF32D1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GrpcChannelProviderHost_t0313060C8CEE5ECBBFEE81A54E13951CBFBF32D1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// MagicOnion.Client.ManagedStreamingHubInfo[]
struct ManagedStreamingHubInfoU5BU5D_t9FDC45281B6E147C92DD1BDBD6C7AE50829A6264  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ManagedStreamingHubInfo_t91C1EAA9634FD4ED4B632E2F3C8CF2C8CE35F7F6  m_Items[1];

public:
	inline ManagedStreamingHubInfo_t91C1EAA9634FD4ED4B632E2F3C8CF2C8CE35F7F6  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ManagedStreamingHubInfo_t91C1EAA9634FD4ED4B632E2F3C8CF2C8CE35F7F6 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ManagedStreamingHubInfo_t91C1EAA9634FD4ED4B632E2F3C8CF2C8CE35F7F6  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CStreamingHubTypeU3Ek__BackingField_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CClientU3Ek__BackingField_1), (void*)NULL);
		#endif
	}
	inline ManagedStreamingHubInfo_t91C1EAA9634FD4ED4B632E2F3C8CF2C8CE35F7F6  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ManagedStreamingHubInfo_t91C1EAA9634FD4ED4B632E2F3C8CF2C8CE35F7F6 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ManagedStreamingHubInfo_t91C1EAA9634FD4ED4B632E2F3C8CF2C8CE35F7F6  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CStreamingHubTypeU3Ek__BackingField_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CClientU3Ek__BackingField_1), (void*)NULL);
		#endif
	}
};
// MagicOnion.IStreamingHubMarker[]
struct IStreamingHubMarkerU5BU5D_tB99023F7783AA76118208888091E955A8C2504A8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// T MagicOnion.Unity.GrpcChannelOptionsBag::Get<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GrpcChannelOptionsBag_Get_TisRuntimeObject_m2C06B0CA7AD9A03FDE502945B0B1960E3C0C8469_gshared (GrpcChannelOptionsBag_t3A8A75BF4444B4683CCE7492D71C0E82275A62DF * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared (const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.ValueTuple`2<System.Object,MagicOnion.Client.ManagedStreamingHubInfo>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE279B293ED1434C8E1B135BE6177F4FDD1C802ED_gshared (Dictionary_2_t39E5A8A785083F20A77F68BEA7652404575853C6 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<System.Object>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisRuntimeObject_mF158763EE84651A2D09034FFFE4818D703544376_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, RuntimeObject ** ___stateMachine0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.ValueTuple`2<System.Object,MagicOnion.Client.ManagedStreamingHubInfo>>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t463F71D2E786697CCAED0CA26FE06249B1A7D2BD * Dictionary_2_get_Values_m417CC3D7D77B3AB5641CB12A4F9ECE4BAB681DDB_gshared (Dictionary_2_t39E5A8A785083F20A77F68BEA7652404575853C6 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.ValueTuple`2<System.Object,MagicOnion.Client.ManagedStreamingHubInfo>,MagicOnion.Client.ManagedStreamingHubInfo>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m75DF1214C3A730BF531D2FB4E7A866221E0C0FC1_gshared (Func_2_t3712C8E43A56E956640C364FE07DA16A3672FFAD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.ValueTuple`2<System.Object,MagicOnion.Client.ManagedStreamingHubInfo>,MagicOnion.Client.ManagedStreamingHubInfo>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisValueTuple_2_t030C397FF2B7FEA059CBBFFF5345CFC66E1AB6D2_TisManagedStreamingHubInfo_t91C1EAA9634FD4ED4B632E2F3C8CF2C8CE35F7F6_m73281F8A857D55F04EEA8B607CB2BCC0000A2A1F_gshared (RuntimeObject* ___source0, Func_2_t3712C8E43A56E956640C364FE07DA16A3672FFAD * ___selector1, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<MagicOnion.Client.ManagedStreamingHubInfo>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ManagedStreamingHubInfoU5BU5D_t9FDC45281B6E147C92DD1BDBD6C7AE50829A6264* Enumerable_ToArray_TisManagedStreamingHubInfo_t91C1EAA9634FD4ED4B632E2F3C8CF2C8CE35F7F6_mACADBEA015DCE3EF334A028707C0453EA1984558_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.ValueTuple`2<System.Object,MagicOnion.Client.ManagedStreamingHubInfo>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_mB6793EE2E9E7264B4E9A074C006774FA8E9A8A87_gshared (ValueTuple_2_t030C397FF2B7FEA059CBBFFF5345CFC66E1AB6D2 * __this, RuntimeObject * ___item10, ManagedStreamingHubInfo_t91C1EAA9634FD4ED4B632E2F3C8CF2C8CE35F7F6  ___item21, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.ValueTuple`2<System.Object,MagicOnion.Client.ManagedStreamingHubInfo>>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m4C9490F71DD9CC5A9D76F7F6BD6ED412C77F427F_gshared (Dictionary_2_t39E5A8A785083F20A77F68BEA7652404575853C6 * __this, RuntimeObject * ___key0, ValueTuple_2_t030C397FF2B7FEA059CBBFFF5345CFC66E1AB6D2  ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.ValueTuple`2<System.Object,MagicOnion.Client.ManagedStreamingHubInfo>>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m71B96BA7E1658EFBC1F3B25AC1C8959792E3DD89_gshared (Dictionary_2_t39E5A8A785083F20A77F68BEA7652404575853C6 * __this, RuntimeObject * ___key0, ValueTuple_2_t030C397FF2B7FEA059CBBFFF5345CFC66E1AB6D2 * ___value1, const RuntimeMethod* method);
// !0 System.Func`1<System.Object>::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.ValueTuple`2<System.Object,MagicOnion.Client.ManagedStreamingHubInfo>>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m8866B427DC4F4284677EF02ACB579B5381F033BD_gshared (Dictionary_2_t39E5A8A785083F20A77F68BEA7652404575853C6 * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.ValueTuple`2<System.Object,MagicOnion.Client.ManagedStreamingHubInfo>>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t9A1A40500CC77B561A48A232476858DA7881C2C3 * Dictionary_2_get_Keys_m493C3C8338B6906932EC9935042750597C6AF324_gshared (Dictionary_2_t39E5A8A785083F20A77F68BEA7652404575853C6 * __this, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<System.Object>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisRuntimeObject_m106EE2F1FA18DC25ED42F23C4E8E8F2E11B48995_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, RuntimeObject ** ___stateMachine0, const RuntimeMethod* method);
// System.Boolean MagicOnion.Unity.GrpcChannelOptionsBag::TryGet<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GrpcChannelOptionsBag_TryGet_TisRuntimeObject_mDC56E6D85253085D64C5E3958075B4D80D0691C9_gshared (GrpcChannelOptionsBag_t3A8A75BF4444B4683CCE7492D71C0E82275A62DF * __this, RuntimeObject ** ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m74B9EB9E16A0CC0F80B0AB74B8E1E91C16E6998E_gshared (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,System.Object>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisRuntimeObject_mF3F724FDD4660E37EEA11B37B562AA2EB0FE6220_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,System.Object>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisRuntimeObject_mF6714829CDDDF820DD9BD6DDC69002FDE2E551EF_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,System.Object>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisRuntimeObject_m5C093FA6E3DF692B5FB8E90D634C790D72BFDB83_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method);

// System.Void MagicOnion.ChannelExtensions/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_mF7237C44F5DE30D6E6FD1460F7409FC2FFE7029B (U3CU3Ec__DisplayClass0_0_tDB0BFB9C6FF5E03A8EC8AB18A2C6CA4AA19D0EA6 * __this, const RuntimeMethod* method);
// System.Threading.CancellationToken Grpc.Core.Channel::get_ShutdownToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  Channel_get_ShutdownToken_m5F6F6AD8F90999F2AE0EE780B704E15FFF33BCF3 (Channel_t05CCFAE14C23CE3E40F26235CB6E9F42C4B736DD * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Threading.CancellationTokenRegistration System.Threading.CancellationToken::Register(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  CancellationToken_Register_m6C186260806A5918D17E0B3A5AF2520D8AFF0787 (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void MagicOnion.Unity.GrpcChannelOptionsBag::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcChannelOptionsBag__ctor_m6ADD6DBC238807B1ACBD73A5A97B6664A017319B (GrpcChannelOptionsBag_t3A8A75BF4444B4683CCE7492D71C0E82275A62DF * __this, RuntimeObject * ___options0, const RuntimeMethod* method);
// System.Void MagicOnion.Unity.GrpcCCoreGrpcChannelProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcCCoreGrpcChannelProvider__ctor_mAF2667949684188DC436E9F773012B9073DDDEDF (GrpcCCoreGrpcChannelProvider_t5E6293DCD6CD392A6C78779789B14F58D5AC2ECD * __this, const RuntimeMethod* method);
// System.Void MagicOnion.Unity.GrpcCCoreGrpcChannelProvider::.ctor(System.Collections.Generic.IReadOnlyList`1<Grpc.Core.ChannelOption>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcCCoreGrpcChannelProvider__ctor_m1550FF5664EBC22D31E82C2D038B4D3A438FB91C (GrpcCCoreGrpcChannelProvider_t5E6293DCD6CD392A6C78779789B14F58D5AC2ECD * __this, RuntimeObject* ___channelOptions0, const RuntimeMethod* method);
// System.Void MagicOnion.Unity.GrpcCCoreGrpcChannelProvider::.ctor(MagicOnion.Unity.GrpcCCoreChannelOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcCCoreGrpcChannelProvider__ctor_m95CA95CDA1131E66304AC760477720C48FD144FC (GrpcCCoreGrpcChannelProvider_t5E6293DCD6CD392A6C78779789B14F58D5AC2ECD * __this, GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 * ___channelOptions0, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<Grpc.Core.ChannelOption>()
inline ChannelOptionU5BU5D_t40B01726AADD464802F0CC66325E43E99C532E53* Array_Empty_TisChannelOption_t220AB2C90AF6E7CEC603E337F7D70DD956976F2D_m40BCF5710134FC72F852187527F7891DCEF22BE6_inline (const RuntimeMethod* method)
{
	return ((  ChannelOptionU5BU5D_t40B01726AADD464802F0CC66325E43E99C532E53* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// System.Void MagicOnion.Unity.GrpcCCoreChannelOptions::set_ChannelOptions(System.Collections.Generic.IReadOnlyList`1<Grpc.Core.ChannelOption>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GrpcCCoreChannelOptions_set_ChannelOptions_m280D376A513BA937D76C5E3E34DBA5868860BFC8_inline (GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void Grpc.Core.SslCredentials::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslCredentials__ctor_m8B35719C14541011FB9DF867DCEDEB85B8B216D2 (SslCredentials_t149917768B7958A3C7B569C5879C5CAFC7F43D3C * __this, const RuntimeMethod* method);
// System.Void MagicOnion.Unity.GrpcCCoreChannelOptions::set_ChannelCredentials(Grpc.Core.ChannelCredentials)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GrpcCCoreChannelOptions_set_ChannelCredentials_m00FA7932180EAC0243394630C264A57B7C301683_inline (GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 * __this, ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E * ___value0, const RuntimeMethod* method);
// System.Void MagicOnion.Unity.GrpcCCoreChannelOptions::.ctor(System.Collections.Generic.IReadOnlyList`1<Grpc.Core.ChannelOption>,Grpc.Core.ChannelCredentials)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcCCoreChannelOptions__ctor_mC021956539F5DC3A941CC5A943B71871230CE616 (GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 * __this, RuntimeObject* ___channelOptions0, ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E * ___channelCredentials1, const RuntimeMethod* method);
// System.Void MagicOnion.Unity.GrpcChannelProviderBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcChannelProviderBase__ctor_mB234D0A7860C41010D1107F2B4DCFF03DD331065 (GrpcChannelProviderBase_t65F00C664A3D6A88F44A88CED2B92EF2821D115E * __this, const RuntimeMethod* method);
// MagicOnion.Unity.GrpcChannelOptionsBag MagicOnion.Unity.CreateGrpcChannelContext::get_ChannelOptions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GrpcChannelOptionsBag_t3A8A75BF4444B4683CCE7492D71C0E82275A62DF * CreateGrpcChannelContext_get_ChannelOptions_m8E62B029F8AA2C9E7E14A0E608A8F23943F57193_inline (CreateGrpcChannelContext_tB9ED19C9DEE05147585D686FB12F9F574329764B * __this, const RuntimeMethod* method);
// T MagicOnion.Unity.GrpcChannelOptionsBag::Get<MagicOnion.Unity.GrpcCCoreChannelOptions>()
inline GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 * GrpcChannelOptionsBag_Get_TisGrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22_m4933EA2B09EF4B54ABBA4FEBF38C7B8F2C15A949 (GrpcChannelOptionsBag_t3A8A75BF4444B4683CCE7492D71C0E82275A62DF * __this, const RuntimeMethod* method)
{
	return ((  GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 * (*) (GrpcChannelOptionsBag_t3A8A75BF4444B4683CCE7492D71C0E82275A62DF *, const RuntimeMethod*))GrpcChannelOptionsBag_Get_TisRuntimeObject_m2C06B0CA7AD9A03FDE502945B0B1960E3C0C8469_gshared)(__this, method);
}
// MagicOnion.Unity.GrpcChannelTarget MagicOnion.Unity.CreateGrpcChannelContext::get_Target()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF  CreateGrpcChannelContext_get_Target_m3406B7430EC5EE62795DF1FEAFA00DF9BD9B8DF7_inline (CreateGrpcChannelContext_tB9ED19C9DEE05147585D686FB12F9F574329764B * __this, const RuntimeMethod* method);
// System.String MagicOnion.Unity.GrpcChannelTarget::get_Host()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GrpcChannelTarget_get_Host_m57BC6648F51844808220DA8B4C198C0B958C8A20_inline (GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF * __this, const RuntimeMethod* method);
// System.Int32 MagicOnion.Unity.GrpcChannelTarget::get_Port()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GrpcChannelTarget_get_Port_m3CB87BD3C76EC8030761713704B8A373D7283BEB_inline (GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF * __this, const RuntimeMethod* method);
// System.Boolean MagicOnion.Unity.GrpcChannelTarget::get_IsInsecure()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GrpcChannelTarget_get_IsInsecure_mBE46F213D425E033774E0A5F16A7053F1187041F_inline (GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF * __this, const RuntimeMethod* method);
// Grpc.Core.ChannelCredentials MagicOnion.Unity.GrpcCCoreChannelOptions::get_ChannelCredentials()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E * GrpcCCoreChannelOptions_get_ChannelCredentials_m07E4EB9F34BE72866CEF163B311DF8D1AFB56D75_inline (GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 * __this, const RuntimeMethod* method);
// Grpc.Core.ChannelCredentials Grpc.Core.ChannelCredentials::get_Insecure()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E * ChannelCredentials_get_Insecure_m8D99B79F97F8B8C2D3609960E737647966A9A1F4_inline (const RuntimeMethod* method);
// System.Collections.Generic.IReadOnlyList`1<Grpc.Core.ChannelOption> MagicOnion.Unity.GrpcCCoreChannelOptions::get_ChannelOptions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GrpcCCoreChannelOptions_get_ChannelOptions_mE5B355B7DFD22754A6A6F9E8A2D83699E0BD2DCB_inline (GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 * __this, const RuntimeMethod* method);
// System.Void Grpc.Core.Channel::.ctor(System.String,System.Int32,Grpc.Core.ChannelCredentials,System.Collections.Generic.IEnumerable`1<Grpc.Core.ChannelOption>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Channel__ctor_m178076C87D5BB98B5F3577E4FA50D56DD9722F88 (Channel_t05CCFAE14C23CE3E40F26235CB6E9F42C4B736DD * __this, String_t* ___host0, int32_t ___port1, ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E * ___credentials2, RuntimeObject* ___options3, const RuntimeMethod* method);
// MagicOnion.Unity.IGrpcChannelProvider MagicOnion.Unity.CreateGrpcChannelContext::get_Provider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CreateGrpcChannelContext_get_Provider_m91A5D7596BE905702969BB039CA4219A05ED7285_inline (CreateGrpcChannelContext_tB9ED19C9DEE05147585D686FB12F9F574329764B * __this, const RuntimeMethod* method);
// System.Void System.Action`1<MagicOnion.GrpcChannelx>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mED276CF4DB3F800648E9729B0E9851A1CFA23B7A (Action_1_t549C5EF27D2CC5AD07CBB9088B404BF46A678163 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t549C5EF27D2CC5AD07CBB9088B404BF46A678163 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m7724F43B1525624FFF97A774B6B909B075714D5C (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, String_t* ___uriString0, const RuntimeMethod* method);
// System.Void MagicOnion.GrpcChannelx::.ctor(System.Int32,System.Action`1<MagicOnion.GrpcChannelx>,Grpc.Core.ChannelBase,System.Uri,MagicOnion.Unity.GrpcChannelOptionsBag)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcChannelx__ctor_mE05D6635A710232D65B1661797CF60DE02AC5446 (GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * __this, int32_t ___id0, Action_1_t549C5EF27D2CC5AD07CBB9088B404BF46A678163 * ___onDispose1, ChannelBase_t27741E6D85E1E4064949B777B040D975F3D400A9 * ___channel2, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___targetUri3, GrpcChannelOptionsBag_t3A8A75BF4444B4683CCE7492D71C0E82275A62DF * ___channelOptions4, const RuntimeMethod* method);
// System.Void MagicOnion.Unity.GrpcChannelOptionsBag/<GetValues>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetValuesU3Ed__4__ctor_mB11662DD2AEA5497BA588D22B99B29D6C8F27D05 (U3CGetValuesU3Ed__4_t3EC47CADB40D760F006EE3FC565ABDF09FFB0805 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::Increment(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Increment_mEF7FA106280D9E57DA8A97887389A961B65E47D8 (int32_t* ___location0, const RuntimeMethod* method);
// System.Void MagicOnion.Unity.GrpcChannelProviderBase::RegisterChannel(MagicOnion.GrpcChannelx)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcChannelProviderBase_RegisterChannel_mF5ADCD5D1C16E5A7A96D044DE99C2537BED45F1D (GrpcChannelProviderBase_t65F00C664A3D6A88F44A88CED2B92EF2821D115E * __this, GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * ___channel0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<MagicOnion.GrpcChannelx>::Add(!0)
inline void List_1_Add_m08BF4E5F03F1388F39EBE158DD94298F6715346A (List_1_t794BA021F761B44AC15B20B38C5162FF01364CDA * __this, GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t794BA021F761B44AC15B20B38C5162FF01364CDA *, GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<MagicOnion.GrpcChannelx>::Remove(!0)
inline bool List_1_Remove_m1F393F26C25C24E3E0EA6435CC34C594B861FD91 (List_1_t794BA021F761B44AC15B20B38C5162FF01364CDA * __this, GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t794BA021F761B44AC15B20B38C5162FF01364CDA *, GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// !0[] System.Collections.Generic.List`1<MagicOnion.GrpcChannelx>::ToArray()
inline GrpcChannelxU5BU5D_tA4631A4B0BD22B04BE95989B436ECF9A2300F417* List_1_ToArray_m54EC22E3F1C7830916F80B76B722B3E436E9FF98 (List_1_t794BA021F761B44AC15B20B38C5162FF01364CDA * __this, const RuntimeMethod* method)
{
	return ((  GrpcChannelxU5BU5D_tA4631A4B0BD22B04BE95989B436ECF9A2300F417* (*) (List_1_t794BA021F761B44AC15B20B38C5162FF01364CDA *, const RuntimeMethod*))List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared)(__this, method);
}
// System.Void MagicOnion.GrpcChannelx::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcChannelx_Dispose_mF07EC1759F1167F38A1D5D1B33FEB4D631FB22EA (GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA (Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<MagicOnion.GrpcChannelx>::.ctor()
inline void List_1__ctor_mD510A3B40A1E977E832BC4964BAEBC5053A47D25 (List_1_t794BA021F761B44AC15B20B38C5162FF01364CDA * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t794BA021F761B44AC15B20B38C5162FF01364CDA *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void MagicOnion.Unity.CreateGrpcChannelContext::.ctor(MagicOnion.Unity.IGrpcChannelProvider,MagicOnion.Unity.GrpcChannelTarget,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateGrpcChannelContext__ctor_mEDDCDE84E563746CD94BD705C0F785262D751283 (CreateGrpcChannelContext_tB9ED19C9DEE05147585D686FB12F9F574329764B * __this, RuntimeObject* ___provider0, GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF  ___target1, RuntimeObject * ___channelOptions2, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<MagicOnion.Unity.GrpcChannelProviderHost>()
inline GrpcChannelProviderHostU5BU5D_t04402EFEBDCD691AE503FEAE40C7D8FC1B69406F* Object_FindObjectsOfType_TisGrpcChannelProviderHost_t0313060C8CEE5ECBBFEE81A54E13951CBFBF32D1_m8E42EE3E0B55940E84A498B24A6C4A1074DE1580 (const RuntimeMethod* method)
{
	return ((  GrpcChannelProviderHostU5BU5D_t04402EFEBDCD691AE503FEAE40C7D8FC1B69406F* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared)(method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<MagicOnion.Unity.GrpcChannelProviderHost>()
inline GrpcChannelProviderHost_t0313060C8CEE5ECBBFEE81A54E13951CBFBF32D1 * GameObject_AddComponent_TisGrpcChannelProviderHost_t0313060C8CEE5ECBBFEE81A54E13951CBFBF32D1_m6DE43A920BA07378472B76794A4F8DC79013745A (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  GrpcChannelProviderHost_t0313060C8CEE5ECBBFEE81A54E13951CBFBF32D1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Void MagicOnion.Unity.GrpcChannelProviderHost::InitializeCore(MagicOnion.Unity.IGrpcChannelProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcChannelProviderHost_InitializeCore_m3D7C4D0E94703477E9D5E66BE45321608F1A7789 (GrpcChannelProviderHost_t0313060C8CEE5ECBBFEE81A54E13951CBFBF32D1 * __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Void MagicOnion.Unity.DefaultGrpcChannelProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultGrpcChannelProvider__ctor_mD88A69BFE61395B0BB43BFC1944A6E2E2F330BC7 (DefaultGrpcChannelProvider_t2D7248106FDE928590569DFC42D33470219BE80B * __this, const RuntimeMethod* method);
// System.Void MagicOnion.Unity.GrpcChannelProviderHost::set_Provider(MagicOnion.Unity.IGrpcChannelProvider)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GrpcChannelProviderHost_set_Provider_m63C143840919A2FCF009C354665D5FC11C6B92EE_inline (GrpcChannelProviderHost_t0313060C8CEE5ECBBFEE81A54E13951CBFBF32D1 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// MagicOnion.Unity.IGrpcChannelProvider MagicOnion.Unity.GrpcChannelProviderHost::get_Provider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GrpcChannelProviderHost_get_Provider_mF4E3EFE483EEB08B4BCB7281049A13041528A82F_inline (GrpcChannelProviderHost_t0313060C8CEE5ECBBFEE81A54E13951CBFBF32D1 * __this, const RuntimeMethod* method);
// System.Void MagicOnion.Unity.GrpcChannelProvider::SetDefaultProvider(MagicOnion.Unity.IGrpcChannelProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcChannelProvider_SetDefaultProvider_m79BB9939CF19AF0D0531C2366AFE15AAA780A5A5 (RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void MagicOnion.Unity.GrpcChannelTarget::.ctor(System.String,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcChannelTarget__ctor_m089D35CA51C0D731334FFC93FC0FCBBFE45B2D80 (GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF * __this, String_t* ___host0, int32_t ___port1, bool ___isInsecure2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<MagicOnion.IStreamingHubMarker,System.ValueTuple`2<System.Func`1<System.Threading.Tasks.Task>,MagicOnion.Client.ManagedStreamingHubInfo>>::.ctor()
inline void Dictionary_2__ctor_m233C615AA249E0E68A2C7E804958E303BFF6C59B (Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320 *, const RuntimeMethod*))Dictionary_2__ctor_mE279B293ED1434C8E1B135BE6177F4FDD1C802ED_gshared)(__this, method);
}
// System.Void Grpc.Core.ChannelBase::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelBase__ctor_m98321E935004E85838C8632F6F3C474C21077EF1 (ChannelBase_t27741E6D85E1E4064949B777B040D975F3D400A9 * __this, String_t* ___target0, const RuntimeMethod* method);
// MagicOnion.Unity.IGrpcChannelProvider MagicOnion.Unity.GrpcChannelProvider::get_Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GrpcChannelProvider_get_Default_m58E560AA52B3BBA0E64F3398A7DC4D01A119172E (const RuntimeMethod* method);
// MagicOnion.GrpcChannelx MagicOnion.Unity.GrpcChannelProviderExtensions::CreateChannel(MagicOnion.Unity.IGrpcChannelProvider,MagicOnion.Unity.GrpcChannelTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * GrpcChannelProviderExtensions_CreateChannel_mB116D4FD106BD5DC463E2B77051DF207D2A29138 (RuntimeObject* ___provider0, GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF  ___target1, const RuntimeMethod* method);
// System.String System.Uri::get_Host()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_Host_m05E1D82C4E6B14A2369AEDED218F9089DE336E64 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.Int32 System.Uri::get_Port()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Uri_get_Port_m23A08BF55EC1DC7421B99E6E77544DDF5900099C (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.String System.Uri::get_Scheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_Scheme_mEC4980E1C82DE3963007E33C759742A02A26FF29 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// MagicOnion.GrpcChannelx MagicOnion.GrpcChannelx::ForAddress(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * GrpcChannelx_ForAddress_m4F6E5D49CACC040B9042557353676893D51ADD4D (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___target0, const RuntimeMethod* method);
// System.Void MagicOnion.GrpcChannelx::ThrowIfDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcChannelx_ThrowIfDisposed_m513418AFDA0396E0639F4ED4C526272CE3132759 (GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * __this, const RuntimeMethod* method);
// System.Void MagicOnion.GrpcChannelx/<ShutdownAsyncCore>d__17::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShutdownAsyncCoreU3Ed__17__ctor_mFA2935FEB7524E768C2FB389EB9EECB6DFB5D804 (U3CShutdownAsyncCoreU3Ed__17_tBAF5B09E5D61F137535A7FD3283E8A265F211FBC * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<MagicOnion.GrpcChannelx/<ShutdownAsyncCore>d__17>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CShutdownAsyncCoreU3Ed__17_tBAF5B09E5D61F137535A7FD3283E8A265F211FBC_m6F69FAA1F1247A5E281D8BF53135B28154FCBDC2 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CShutdownAsyncCoreU3Ed__17_tBAF5B09E5D61F137535A7FD3283E8A265F211FBC ** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CShutdownAsyncCoreU3Ed__17_tBAF5B09E5D61F137535A7FD3283E8A265F211FBC **, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisRuntimeObject_mF158763EE84651A2D09034FFFE4818D703544376_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, const RuntimeMethod* method);
// System.Void MagicOnion.GrpcChannelx/<ConnectAsync>d__18::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConnectAsyncU3Ed__18__ctor_mA57258CA4A63123550D2FD8A81AD6FBF06FB259D (U3CConnectAsyncU3Ed__18_tA12E5FCEA1EEE4814A0B579677FA716E4FAD210E * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<MagicOnion.GrpcChannelx/<ConnectAsync>d__18>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CConnectAsyncU3Ed__18_tA12E5FCEA1EEE4814A0B579677FA716E4FAD210E_mE7FC36CE0985A0B7547147D29E9FA8E002B7E377 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CConnectAsyncU3Ed__18_tA12E5FCEA1EEE4814A0B579677FA716E4FAD210E ** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CConnectAsyncU3Ed__18_tA12E5FCEA1EEE4814A0B579677FA716E4FAD210E **, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisRuntimeObject_mF158763EE84651A2D09034FFFE4818D703544376_gshared)(__this, ___stateMachine0, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<MagicOnion.IStreamingHubMarker,System.ValueTuple`2<System.Func`1<System.Threading.Tasks.Task>,MagicOnion.Client.ManagedStreamingHubInfo>>::get_Values()
inline ValueCollection_t5FBDC3A11EBA3DF0B49FB642D9832CD1EF305B16 * Dictionary_2_get_Values_mDB2C1B853120B66845AEEFC5923F73915B46E51F (Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320 * __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t5FBDC3A11EBA3DF0B49FB642D9832CD1EF305B16 * (*) (Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320 *, const RuntimeMethod*))Dictionary_2_get_Values_m417CC3D7D77B3AB5641CB12A4F9ECE4BAB681DDB_gshared)(__this, method);
}
// System.Void System.Func`2<System.ValueTuple`2<System.Func`1<System.Threading.Tasks.Task>,MagicOnion.Client.ManagedStreamingHubInfo>,MagicOnion.Client.ManagedStreamingHubInfo>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mEAC4B87A088935F2D792210E0AC61027D750B3FF (Func_2_t69A7D283CF5BDCF8AA89902CBF7815EFE642BE1A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t69A7D283CF5BDCF8AA89902CBF7815EFE642BE1A *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m75DF1214C3A730BF531D2FB4E7A866221E0C0FC1_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.ValueTuple`2<System.Func`1<System.Threading.Tasks.Task>,MagicOnion.Client.ManagedStreamingHubInfo>,MagicOnion.Client.ManagedStreamingHubInfo>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisValueTuple_2_tE0C83C359BD973BE064EB7B4E773F729D96E402F_TisManagedStreamingHubInfo_t91C1EAA9634FD4ED4B632E2F3C8CF2C8CE35F7F6_mB924CA443EEF56CF1AFE07904BBAC6E4C03C00E5 (RuntimeObject* ___source0, Func_2_t69A7D283CF5BDCF8AA89902CBF7815EFE642BE1A * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t69A7D283CF5BDCF8AA89902CBF7815EFE642BE1A *, const RuntimeMethod*))Enumerable_Select_TisValueTuple_2_t030C397FF2B7FEA059CBBFFF5345CFC66E1AB6D2_TisManagedStreamingHubInfo_t91C1EAA9634FD4ED4B632E2F3C8CF2C8CE35F7F6_m73281F8A857D55F04EEA8B607CB2BCC0000A2A1F_gshared)(___source0, ___selector1, method);
}
// !!0[] System.Linq.Enumerable::ToArray<MagicOnion.Client.ManagedStreamingHubInfo>(System.Collections.Generic.IEnumerable`1<!!0>)
inline ManagedStreamingHubInfoU5BU5D_t9FDC45281B6E147C92DD1BDBD6C7AE50829A6264* Enumerable_ToArray_TisManagedStreamingHubInfo_t91C1EAA9634FD4ED4B632E2F3C8CF2C8CE35F7F6_mACADBEA015DCE3EF334A028707C0453EA1984558 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  ManagedStreamingHubInfoU5BU5D_t9FDC45281B6E147C92DD1BDBD6C7AE50829A6264* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisManagedStreamingHubInfo_t91C1EAA9634FD4ED4B632E2F3C8CF2C8CE35F7F6_mACADBEA015DCE3EF334A028707C0453EA1984558_gshared)(___source0, method);
}
// System.Void MagicOnion.Client.ManagedStreamingHubInfo::.ctor(System.Type,MagicOnion.IStreamingHubMarker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedStreamingHubInfo__ctor_m73C0D89E2AE04C619D52DBF487FAD397B7ABA399 (ManagedStreamingHubInfo_t91C1EAA9634FD4ED4B632E2F3C8CF2C8CE35F7F6 * __this, Type_t * ___streamingHubType0, RuntimeObject* ___client1, const RuntimeMethod* method);
// System.Void System.ValueTuple`2<System.Func`1<System.Threading.Tasks.Task>,MagicOnion.Client.ManagedStreamingHubInfo>::.ctor(!0,!1)
inline void ValueTuple_2__ctor_mEB94A84DBAD23765C0BA082A2F16B0D49DCF66FE (ValueTuple_2_tE0C83C359BD973BE064EB7B4E773F729D96E402F * __this, Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * ___item10, ManagedStreamingHubInfo_t91C1EAA9634FD4ED4B632E2F3C8CF2C8CE35F7F6  ___item21, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_tE0C83C359BD973BE064EB7B4E773F729D96E402F *, Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 *, ManagedStreamingHubInfo_t91C1EAA9634FD4ED4B632E2F3C8CF2C8CE35F7F6 , const RuntimeMethod*))ValueTuple_2__ctor_mB6793EE2E9E7264B4E9A074C006774FA8E9A8A87_gshared)(__this, ___item10, ___item21, method);
}
// System.Void System.Collections.Generic.Dictionary`2<MagicOnion.IStreamingHubMarker,System.ValueTuple`2<System.Func`1<System.Threading.Tasks.Task>,MagicOnion.Client.ManagedStreamingHubInfo>>::Add(!0,!1)
inline void Dictionary_2_Add_m3B933D9EAE846AE5EC81E5A2D69CE8E65067B634 (Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320 * __this, RuntimeObject* ___key0, ValueTuple_2_tE0C83C359BD973BE064EB7B4E773F729D96E402F  ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320 *, RuntimeObject*, ValueTuple_2_tE0C83C359BD973BE064EB7B4E773F729D96E402F , const RuntimeMethod*))Dictionary_2_Add_m4C9490F71DD9CC5A9D76F7F6BD6ED412C77F427F_gshared)(__this, ___key0, ___value1, method);
}
// System.Threading.Tasks.Task MagicOnion.GrpcChannelx::WaitForDisconnectAndDisposeAsync(MagicOnion.IStreamingHubMarker,System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * GrpcChannelx_WaitForDisconnectAndDisposeAsync_m26868C1A8CEA7CA30C7EC7164F49ECE65D8D2A65 (GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * __this, RuntimeObject* ___streamingHub0, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___waitForDisconnect1, const RuntimeMethod* method);
// System.Void MagicOnion.GrpcChannelx::Forget(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcChannelx_Forget_mF5CB58949675F6C40B49C0DD887B0D1A1E699B84 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t0, const RuntimeMethod* method);
// System.Void MagicOnion.GrpcChannelx/<WaitForDisconnectAndDisposeAsync>d__21::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForDisconnectAndDisposeAsyncU3Ed__21__ctor_m3A2120FEB41C9737665E2F04AAC23384286FD8BE (U3CWaitForDisconnectAndDisposeAsyncU3Ed__21_t280549BD508F1BB867F4F32346F4B9D9A2D41C68 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<MagicOnion.GrpcChannelx/<WaitForDisconnectAndDisposeAsync>d__21>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CWaitForDisconnectAndDisposeAsyncU3Ed__21_t280549BD508F1BB867F4F32346F4B9D9A2D41C68_mAE74B003557CF07AA8A48AB849ADB49C149B3F94 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CWaitForDisconnectAndDisposeAsyncU3Ed__21_t280549BD508F1BB867F4F32346F4B9D9A2D41C68 ** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CWaitForDisconnectAndDisposeAsyncU3Ed__21_t280549BD508F1BB867F4F32346F4B9D9A2D41C68 **, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisRuntimeObject_mF158763EE84651A2D09034FFFE4818D703544376_gshared)(__this, ___stateMachine0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<MagicOnion.IStreamingHubMarker,System.ValueTuple`2<System.Func`1<System.Threading.Tasks.Task>,MagicOnion.Client.ManagedStreamingHubInfo>>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mB7EE6F62BD86CCE767484A13AAA7178468BAC42D (Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320 * __this, RuntimeObject* ___key0, ValueTuple_2_tE0C83C359BD973BE064EB7B4E773F729D96E402F * ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320 *, RuntimeObject*, ValueTuple_2_tE0C83C359BD973BE064EB7B4E773F729D96E402F *, const RuntimeMethod*))Dictionary_2_TryGetValue_m71B96BA7E1658EFBC1F3B25AC1C8959792E3DD89_gshared)(__this, ___key0, ___value1, method);
}
// !0 System.Func`1<System.Threading.Tasks.Task>::Invoke()
inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Func_1_Invoke_m3B5AC943F23CE7225ACF20C2B4B5E2D3FF1EBDDF (Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * __this, const RuntimeMethod* method)
{
	return ((  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * (*) (Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 *, const RuntimeMethod*))Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared)(__this, method);
}
// System.Void MagicOnion.GrpcChannelx::<DisposeStreamingHubClient>g__Forget|22_0(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcChannelx_U3CDisposeStreamingHubClientU3Eg__ForgetU7C22_0_m9A90966B08AE1BBB041D818B66E53CB1E6BE3F83 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<MagicOnion.IStreamingHubMarker,System.ValueTuple`2<System.Func`1<System.Threading.Tasks.Task>,MagicOnion.Client.ManagedStreamingHubInfo>>::Remove(!0)
inline bool Dictionary_2_Remove_m54F43F31867279CCBF98954FED5D0610C1188F3B (Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320 * __this, RuntimeObject* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320 *, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Remove_m8866B427DC4F4284677EF02ACB579B5381F033BD_gshared)(__this, ___key0, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<MagicOnion.IStreamingHubMarker,System.ValueTuple`2<System.Func`1<System.Threading.Tasks.Task>,MagicOnion.Client.ManagedStreamingHubInfo>>::get_Keys()
inline KeyCollection_t4AEA7A051859B43F915FA65449DFB8B3981A5026 * Dictionary_2_get_Keys_m8A74A4870916D478DF463008FC4DCE6CA077A713 (Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320 * __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t4AEA7A051859B43F915FA65449DFB8B3981A5026 * (*) (Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320 *, const RuntimeMethod*))Dictionary_2_get_Keys_m493C3C8338B6906932EC9935042750597C6AF324_gshared)(__this, method);
}
// !!0[] System.Linq.Enumerable::ToArray<MagicOnion.IStreamingHubMarker>(System.Collections.Generic.IEnumerable`1<!!0>)
inline IStreamingHubMarkerU5BU5D_tB99023F7783AA76118208888091E955A8C2504A8* Enumerable_ToArray_TisIStreamingHubMarker_t2C4F44A9A3F142FAB7485838EE53BEDAA7D3B457_m3D2D6884C685EEB20F67751B37D3D54FE09095A8 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  IStreamingHubMarkerU5BU5D_tB99023F7783AA76118208888091E955A8C2504A8* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared)(___source0, method);
}
// System.Void MagicOnion.GrpcChannelx::DisposeStreamingHubClient(MagicOnion.IStreamingHubMarker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcChannelx_DisposeStreamingHubClient_mD2F120ADAC3E492C6F9F2814AAE820E3F066AE60 (GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * __this, RuntimeObject* ___streamingHub0, const RuntimeMethod* method);
// System.Void MagicOnion.GrpcChannelx::DisposeAllManagedStreamingHubs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcChannelx_DisposeAllManagedStreamingHubs_mDAF95DADF739E6AFDCE9338A3903D62BD38884A8 (GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task MagicOnion.GrpcChannelx::ShutdownInternalAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * GrpcChannelx_ShutdownInternalAsync_m52F920B4691EF8426D26EAE8FB8EE6E30065CB1E (GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * __this, const RuntimeMethod* method);
// System.Void System.Action`1<MagicOnion.GrpcChannelx>::Invoke(!0)
inline void Action_1_Invoke_mF6C2D97963C01A475F13F7FBD7032D1527128646 (Action_1_t549C5EF27D2CC5AD07CBB9088B404BF46A678163 * __this, GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t549C5EF27D2CC5AD07CBB9088B404BF46A678163 *, GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void MagicOnion.GrpcChannelx/<DisposeAsync>d__25::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__25__ctor_mF2E691F342B5E28F68DB7E1616D1125E80156DE5 (U3CDisposeAsyncU3Ed__25_tF09584D0A9406A5CADCFD8BC4C8517DD95E66BA9 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<MagicOnion.GrpcChannelx/<DisposeAsync>d__25>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__25_tF09584D0A9406A5CADCFD8BC4C8517DD95E66BA9_m68195054FD3534A437CF2E6255D9C8F1BB2CF847 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CDisposeAsyncU3Ed__25_tF09584D0A9406A5CADCFD8BC4C8517DD95E66BA9 ** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CDisposeAsyncU3Ed__25_tF09584D0A9406A5CADCFD8BC4C8517DD95E66BA9 **, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisRuntimeObject_mF158763EE84651A2D09034FFFE4818D703544376_gshared)(__this, ___stateMachine0, method);
}
// System.Void MagicOnion.GrpcChannelx/<ShutdownInternalAsync>d__26::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShutdownInternalAsyncU3Ed__26__ctor_mF603CF4C12137D93E55CB235183541018EE7657A (U3CShutdownInternalAsyncU3Ed__26_t5CAF2513D0D80A4B85B420DC910A51E7CC53F53F * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<MagicOnion.GrpcChannelx/<ShutdownInternalAsync>d__26>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CShutdownInternalAsyncU3Ed__26_t5CAF2513D0D80A4B85B420DC910A51E7CC53F53F_m1AE44EB53FA1987A50298A198BBAD1A0A4DC087C (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CShutdownInternalAsyncU3Ed__26_t5CAF2513D0D80A4B85B420DC910A51E7CC53F53F ** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CShutdownInternalAsyncU3Ed__26_t5CAF2513D0D80A4B85B420DC910A51E7CC53F53F **, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisRuntimeObject_mF158763EE84651A2D09034FFFE4818D703544376_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.ObjectDisposedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880 (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * __this, String_t* ___objectName0, const RuntimeMethod* method);
// System.Void MagicOnion.GrpcChannelx/<Forget>d__28::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForgetU3Ed__28__ctor_m69810910EDCD4B5564EBD2E3DB1720F2CFE7F5BC (U3CForgetU3Ed__28_t7F8B2113E2AF53E5DAC93234969022BD116C7B7A * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<MagicOnion.GrpcChannelx/<Forget>d__28>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CForgetU3Ed__28_t7F8B2113E2AF53E5DAC93234969022BD116C7B7A_m387C57141FD21BACDA664BB21429060A3681E869 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CForgetU3Ed__28_t7F8B2113E2AF53E5DAC93234969022BD116C7B7A ** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, U3CForgetU3Ed__28_t7F8B2113E2AF53E5DAC93234969022BD116C7B7A **, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisRuntimeObject_m106EE2F1FA18DC25ED42F23C4E8E8F2E11B48995_gshared)(__this, ___stateMachine0, method);
}
// System.Void MagicOnion.GrpcChannelx/<<DisposeStreamingHubClient>g__Forget|22_0>d::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CDisposeStreamingHubClientU3Eg__ForgetU7C22_0U3Ed__ctor_m1CDDD6491BF6F3D08A968A7FD3D2ECBC0F17B3AF (U3CU3CDisposeStreamingHubClientU3Eg__ForgetU7C22_0U3Ed_tFB27AD025D784934ACD703C8C49741F1A04EBEA0 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<MagicOnion.GrpcChannelx/<<DisposeStreamingHubClient>g__Forget|22_0>d>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CU3CDisposeStreamingHubClientU3Eg__ForgetU7C22_0U3Ed_tFB27AD025D784934ACD703C8C49741F1A04EBEA0_m5B21B272DFE568537C95A37F947C85F0CC283C2D (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CU3CDisposeStreamingHubClientU3Eg__ForgetU7C22_0U3Ed_tFB27AD025D784934ACD703C8C49741F1A04EBEA0 ** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, U3CU3CDisposeStreamingHubClientU3Eg__ForgetU7C22_0U3Ed_tFB27AD025D784934ACD703C8C49741F1A04EBEA0 **, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisRuntimeObject_m106EE2F1FA18DC25ED42F23C4E8E8F2E11B48995_gshared)(__this, ___stateMachine0, method);
}
// System.Int32 MagicOnion.GrpcChannelx::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GrpcChannelx_get_Id_m64141C20B4724EEC34817EA703AA9892701CE84C_inline (GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Uri MagicOnion.GrpcChannelx::get_TargetUri()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * GrpcChannelx_get_TargetUri_m829529E4ABA37733226B8AD4D17FAABB92919BE9_inline (GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Void MagicOnion.UnityDebugLogger::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityDebugLogger__ctor_mC5557D55A2C1DCAF0A6A362A9778211406F97000 (UnityDebugLogger_tDD33816265BBB34A9FB081316E1ED9186EEBCEC4 * __this, Type_t * ___forType0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.String MagicOnion.UnityDebugLogger::BuildMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityDebugLogger_BuildMessage_m54B75584697EA9A7A80EDE0583C57A3C15FF6DCA (UnityDebugLogger_tDD33816265BBB34A9FB081316E1ED9186EEBCEC4 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String MagicOnion.UnityDebugLogger::BuildMessage(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityDebugLogger_BuildMessage_m2AA3C36584F4F5BE2BD5E29159A935032269ACFC (UnityDebugLogger_tDD33816265BBB34A9FB081316E1ED9186EEBCEC4 * __this, String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void MagicOnion.UnityDebugLogger::Warning(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityDebugLogger_Warning_m8D12161D4F635969A35C77E1C3E7B08C57EE1041 (UnityDebugLogger_tDD33816265BBB34A9FB081316E1ED9186EEBCEC4 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void MagicOnion.UnityDebugLogger::Error(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityDebugLogger_Error_m370D2531976F1A701C203A73CFF1484DAD4AFD0E (UnityDebugLogger_tDD33816265BBB34A9FB081316E1ED9186EEBCEC4 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D (const RuntimeMethod* method);
// System.Void MagicOnion.Unity.GrpcChannelOptionsBag/<GetValues>d__4::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetValuesU3Ed__4_U3CU3Em__Finally1_mDE8B5DEE58D6654C38F58EAAB4E0F5A13574F1FE (U3CGetValuesU3Ed__4_t3EC47CADB40D760F006EE3FC565ABDF09FFB0805 * __this, const RuntimeMethod* method);
// System.Boolean MagicOnion.Unity.GrpcChannelOptionsBag::TryGet<MagicOnion.Unity.GrpcCCoreChannelOptions>(T&)
inline bool GrpcChannelOptionsBag_TryGet_TisGrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22_mB634A182AF11A6289AE2A1FA096F4BE0BD82FFBF (GrpcChannelOptionsBag_t3A8A75BF4444B4683CCE7492D71C0E82275A62DF * __this, GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 ** ___value0, const RuntimeMethod* method)
{
	return ((  bool (*) (GrpcChannelOptionsBag_t3A8A75BF4444B4683CCE7492D71C0E82275A62DF *, GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 **, const RuntimeMethod*))GrpcChannelOptionsBag_TryGet_TisRuntimeObject_mDC56E6D85253085D64C5E3958075B4D80D0691C9_gshared)(__this, ___value0, method);
}
// System.String Grpc.Core.ChannelOption::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ChannelOption_get_Name_m7D1C506575899B8C8C6E5267241609CF33EEAC88_inline (ChannelOption_t220AB2C90AF6E7CEC603E337F7D70DD956976F2D * __this, const RuntimeMethod* method);
// Grpc.Core.ChannelOption/OptionType Grpc.Core.ChannelOption::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ChannelOption_get_Type_m523C82FC0FC670A049BA4398D9392070522D2734_inline (ChannelOption_t220AB2C90AF6E7CEC603E337F7D70DD956976F2D * __this, const RuntimeMethod* method);
// System.String Grpc.Core.ChannelOption::get_StringValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChannelOption_get_StringValue_mB07EE65A4BEBB2A5E869887C9ADBCD64ADF773B7 (ChannelOption_t220AB2C90AF6E7CEC603E337F7D70DD956976F2D * __this, const RuntimeMethod* method);
// System.Int32 Grpc.Core.ChannelOption::get_IntValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChannelOption_get_IntValue_mC54EDC6F2D250192CB2984018B81218955AC37D4 (ChannelOption_t220AB2C90AF6E7CEC603E337F7D70DD956976F2D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::.ctor(!0,!1)
inline void KeyValuePair_2__ctor_m27D29781A94B34BD9527D2D0B29A68C5B5486B5B (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *, String_t*, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m74B9EB9E16A0CC0F80B0AB74B8E1E91C16E6998E_gshared)(__this, ___key0, ___value1, method);
}
// System.Void MagicOnion.Unity.GrpcChannelOptionsBag/<GetValues>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetValuesU3Ed__4_System_IDisposable_Dispose_m3980CB5CDDB7317BA421536301DD4789FEAA3F61 (U3CGetValuesU3Ed__4_t3EC47CADB40D760F006EE3FC565ABDF09FFB0805 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> MagicOnion.Unity.GrpcChannelOptionsBag/<GetValues>d__4::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,System.Object>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetValuesU3Ed__4_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CSystem_ObjectU3EU3E_GetEnumerator_m80AE0AC192BADA976BF0CB8A2E9E5C6D19C62EAA (U3CGetValuesU3Ed__4_t3EC47CADB40D760F006EE3FC565ABDF09FFB0805 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,MagicOnion.GrpcChannelx/<<DisposeStreamingHubClient>g__Forget|22_0>d>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CDisposeStreamingHubClientU3Eg__ForgetU7C22_0U3Ed_tFB27AD025D784934ACD703C8C49741F1A04EBEA0_m399869676648598667F5E1461F31A251217894DB (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CU3CDisposeStreamingHubClientU3Eg__ForgetU7C22_0U3Ed_tFB27AD025D784934ACD703C8C49741F1A04EBEA0 ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CU3CDisposeStreamingHubClientU3Eg__ForgetU7C22_0U3Ed_tFB27AD025D784934ACD703C8C49741F1A04EBEA0 **, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisRuntimeObject_mF3F724FDD4660E37EEA11B37B562AA2EB0FE6220_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330 (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, const RuntimeMethod* method);
// System.Void MagicOnion.GrpcChannelx/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m63092DAB52536B19EC16F78C27158E331A4C624B (U3CU3Ec_t59C109BC2B57707046109D174D3A4687AE219B3E * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task Grpc.Core.Channel::ConnectAsync(System.Nullable`1<System.DateTime>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Channel_ConnectAsync_m42ABEF7D3554323EAE9354705BE14C842741309F (Channel_t05CCFAE14C23CE3E40F26235CB6E9F42C4B736DD * __this, Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  ___deadline0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,MagicOnion.GrpcChannelx/<ConnectAsync>d__18>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CConnectAsyncU3Ed__18_tA12E5FCEA1EEE4814A0B579677FA716E4FAD210E_m42744845502E0EA2F2046C1718F7DC8109024826 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CConnectAsyncU3Ed__18_tA12E5FCEA1EEE4814A0B579677FA716E4FAD210E ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CConnectAsyncU3Ed__18_tA12E5FCEA1EEE4814A0B579677FA716E4FAD210E **, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisRuntimeObject_mF6714829CDDDF820DD9BD6DDC69002FDE2E551EF_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,MagicOnion.GrpcChannelx/<DisposeAsync>d__25>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDisposeAsyncU3Ed__25_tF09584D0A9406A5CADCFD8BC4C8517DD95E66BA9_mC0991FE5D312A469536D9AC403E7022B9012A5D2 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CDisposeAsyncU3Ed__25_tF09584D0A9406A5CADCFD8BC4C8517DD95E66BA9 ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CDisposeAsyncU3Ed__25_tF09584D0A9406A5CADCFD8BC4C8517DD95E66BA9 **, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisRuntimeObject_mF6714829CDDDF820DD9BD6DDC69002FDE2E551EF_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,MagicOnion.GrpcChannelx/<Forget>d__28>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CForgetU3Ed__28_t7F8B2113E2AF53E5DAC93234969022BD116C7B7A_mD8D7785E8EF7A6201834970EA858CA619F49A33F (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CForgetU3Ed__28_t7F8B2113E2AF53E5DAC93234969022BD116C7B7A ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CForgetU3Ed__28_t7F8B2113E2AF53E5DAC93234969022BD116C7B7A **, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisRuntimeObject_mF3F724FDD4660E37EEA11B37B562AA2EB0FE6220_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable System.Threading.Tasks.Task::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  Task_ConfigureAwait_m0477031D48C23B8368049C62C53C33D32322EDCE (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  ConfiguredTaskAwaitable_GetAwaiter_m9F912D7DF74F087AFAF1F478CE59152DF22395A2_inline (ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_m98056416CC6E5741A2201994591D27D127A17730 (ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,MagicOnion.GrpcChannelx/<ShutdownAsyncCore>d__17>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CShutdownAsyncCoreU3Ed__17_tBAF5B09E5D61F137535A7FD3283E8A265F211FBC_mC5583AFEA50C56C8E4EBF9BDAF16105C7E1FD352 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * ___awaiter0, U3CShutdownAsyncCoreU3Ed__17_tBAF5B09E5D61F137535A7FD3283E8A265F211FBC ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *, U3CShutdownAsyncCoreU3Ed__17_tBAF5B09E5D61F137535A7FD3283E8A265F211FBC **, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisRuntimeObject_m5C093FA6E3DF692B5FB8E90D634C790D72BFDB83_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredTaskAwaiter_GetResult_m29A9880E9FCC4B8E9928B60E137FB53D0C8F0CE6 (ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task Grpc.Core.ChannelBase::ShutdownAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ChannelBase_ShutdownAsync_m9E3D96850025A611947E62C91ECE8C8741656CB5 (ChannelBase_t27741E6D85E1E4064949B777B040D975F3D400A9 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,MagicOnion.GrpcChannelx/<ShutdownInternalAsync>d__26>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CShutdownInternalAsyncU3Ed__26_t5CAF2513D0D80A4B85B420DC910A51E7CC53F53F_mE505556AD7CE193300E1EACFEC5CB1235C55B02B (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * ___awaiter0, U3CShutdownInternalAsyncU3Ed__26_t5CAF2513D0D80A4B85B420DC910A51E7CC53F53F ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *, U3CShutdownInternalAsyncU3Ed__26_t5CAF2513D0D80A4B85B420DC910A51E7CC53F53F **, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisRuntimeObject_m5C093FA6E3DF692B5FB8E90D634C790D72BFDB83_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,MagicOnion.GrpcChannelx/<WaitForDisconnectAndDisposeAsync>d__21>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CWaitForDisconnectAndDisposeAsyncU3Ed__21_t280549BD508F1BB867F4F32346F4B9D9A2D41C68_mE43BD3AEEF8BB96507D207B36B5C6BDA5816A02A (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CWaitForDisconnectAndDisposeAsyncU3Ed__21_t280549BD508F1BB867F4F32346F4B9D9A2D41C68 ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CWaitForDisconnectAndDisposeAsyncU3Ed__21_t280549BD508F1BB867F4F32346F4B9D9A2D41C68 **, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisRuntimeObject_mF6714829CDDDF820DD9BD6DDC69002FDE2E551EF_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MagicOnion.ChannelExtensions::RegisterStreamingSubscription(Grpc.Core.Channel,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelExtensions_RegisterStreamingSubscription_m4F519A64535C72BFAEB4BF7F7EA9A66D05060128 (Channel_t05CCFAE14C23CE3E40F26235CB6E9F42C4B736DD * ___channel0, RuntimeObject* ___subscription1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3CRegisterStreamingSubscriptionU3Eb__0_mE23BFDEF5E7C681161F2DDA09BF0126C328F1228_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_tDB0BFB9C6FF5E03A8EC8AB18A2C6CA4AA19D0EA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass0_0_tDB0BFB9C6FF5E03A8EC8AB18A2C6CA4AA19D0EA6 * V_0 = NULL;
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		U3CU3Ec__DisplayClass0_0_tDB0BFB9C6FF5E03A8EC8AB18A2C6CA4AA19D0EA6 * L_0 = (U3CU3Ec__DisplayClass0_0_tDB0BFB9C6FF5E03A8EC8AB18A2C6CA4AA19D0EA6 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_0_tDB0BFB9C6FF5E03A8EC8AB18A2C6CA4AA19D0EA6_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass0_0__ctor_mF7237C44F5DE30D6E6FD1460F7409FC2FFE7029B(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass0_0_tDB0BFB9C6FF5E03A8EC8AB18A2C6CA4AA19D0EA6 * L_1 = V_0;
		RuntimeObject* L_2 = ___subscription1;
		NullCheck(L_1);
		L_1->set_subscription_0(L_2);
		// channel.ShutdownToken.Register(() => subscription.Dispose());
		Channel_t05CCFAE14C23CE3E40F26235CB6E9F42C4B736DD * L_3 = ___channel0;
		NullCheck(L_3);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_4;
		L_4 = Channel_get_ShutdownToken_m5F6F6AD8F90999F2AE0EE780B704E15FFF33BCF3(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		U3CU3Ec__DisplayClass0_0_tDB0BFB9C6FF5E03A8EC8AB18A2C6CA4AA19D0EA6 * L_5 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass0_0_U3CRegisterStreamingSubscriptionU3Eb__0_mE23BFDEF5E7C681161F2DDA09BF0126C328F1228_RuntimeMethod_var), /*hidden argument*/NULL);
		CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  L_7;
		L_7 = CancellationToken_Register_m6C186260806A5918D17E0B3A5AF2520D8AFF0787((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)(&V_1), L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// MagicOnion.Unity.IGrpcChannelProvider MagicOnion.Unity.CreateGrpcChannelContext::get_Provider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CreateGrpcChannelContext_get_Provider_m91A5D7596BE905702969BB039CA4219A05ED7285 (CreateGrpcChannelContext_tB9ED19C9DEE05147585D686FB12F9F574329764B * __this, const RuntimeMethod* method)
{
	{
		// public IGrpcChannelProvider Provider { get; }
		RuntimeObject* L_0 = __this->get_U3CProviderU3Ek__BackingField_0();
		return L_0;
	}
}
// MagicOnion.Unity.GrpcChannelTarget MagicOnion.Unity.CreateGrpcChannelContext::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF  CreateGrpcChannelContext_get_Target_m3406B7430EC5EE62795DF1FEAFA00DF9BD9B8DF7 (CreateGrpcChannelContext_tB9ED19C9DEE05147585D686FB12F9F574329764B * __this, const RuntimeMethod* method)
{
	{
		// public GrpcChannelTarget Target { get; }
		GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF  L_0 = __this->get_U3CTargetU3Ek__BackingField_1();
		return L_0;
	}
}
// MagicOnion.Unity.GrpcChannelOptionsBag MagicOnion.Unity.CreateGrpcChannelContext::get_ChannelOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GrpcChannelOptionsBag_t3A8A75BF4444B4683CCE7492D71C0E82275A62DF * CreateGrpcChannelContext_get_ChannelOptions_m8E62B029F8AA2C9E7E14A0E608A8F23943F57193 (CreateGrpcChannelContext_tB9ED19C9DEE05147585D686FB12F9F574329764B * __this, const RuntimeMethod* method)
{
	{
		// public GrpcChannelOptionsBag ChannelOptions { get; }
		GrpcChannelOptionsBag_t3A8A75BF4444B4683CCE7492D71C0E82275A62DF * L_0 = __this->get_U3CChannelOptionsU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void MagicOnion.Unity.CreateGrpcChannelContext::.ctor(MagicOnion.Unity.IGrpcChannelProvider,MagicOnion.Unity.GrpcChannelTarget,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateGrpcChannelContext__ctor_mEDDCDE84E563746CD94BD705C0F785262D751283 (CreateGrpcChannelContext_tB9ED19C9DEE05147585D686FB12F9F574329764B * __this, RuntimeObject* ___provider0, GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF  ___target1, RuntimeObject * ___channelOptions2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrpcChannelOptionsBag_t3A8A75BF4444B4683CCE7492D71C0E82275A62DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	CreateGrpcChannelContext_tB9ED19C9DEE05147585D686FB12F9F574329764B * G_B2_1 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	CreateGrpcChannelContext_tB9ED19C9DEE05147585D686FB12F9F574329764B * G_B1_1 = NULL;
	{
		// public CreateGrpcChannelContext(IGrpcChannelProvider provider, GrpcChannelTarget target, object channelOptions = null)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Provider = provider ?? throw new ArgumentNullException(nameof(provider));
		RuntimeObject* L_0 = ___provider0;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0019;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1E9918A305DD44C6C5253BF7305AB7758C686BB5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CreateGrpcChannelContext__ctor_mEDDCDE84E563746CD94BD705C0F785262D751283_RuntimeMethod_var)));
	}

IL_0019:
	{
		NullCheck(G_B2_1);
		G_B2_1->set_U3CProviderU3Ek__BackingField_0(G_B2_0);
		// Target = target;
		GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF  L_3 = ___target1;
		__this->set_U3CTargetU3Ek__BackingField_1(L_3);
		// ChannelOptions = new GrpcChannelOptionsBag(channelOptions);
		RuntimeObject * L_4 = ___channelOptions2;
		GrpcChannelOptionsBag_t3A8A75BF4444B4683CCE7492D71C0E82275A62DF * L_5 = (GrpcChannelOptionsBag_t3A8A75BF4444B4683CCE7492D71C0E82275A62DF *)il2cpp_codegen_object_new(GrpcChannelOptionsBag_t3A8A75BF4444B4683CCE7492D71C0E82275A62DF_il2cpp_TypeInfo_var);
		GrpcChannelOptionsBag__ctor_m6ADD6DBC238807B1ACBD73A5A97B6664A017319B(L_5, L_4, /*hidden argument*/NULL);
		__this->set_U3CChannelOptionsU3Ek__BackingField_2(L_5);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MagicOnion.Unity.DefaultGrpcChannelProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultGrpcChannelProvider__ctor_mD88A69BFE61395B0BB43BFC1944A6E2E2F330BC7 (DefaultGrpcChannelProvider_t2D7248106FDE928590569DFC42D33470219BE80B * __this, const RuntimeMethod* method)
{
	{
		// public DefaultGrpcChannelProvider() : base() { }
		GrpcCCoreGrpcChannelProvider__ctor_mAF2667949684188DC436E9F773012B9073DDDEDF(__this, /*hidden argument*/NULL);
		// public DefaultGrpcChannelProvider() : base() { }
		return;
	}
}
// System.Void MagicOnion.Unity.DefaultGrpcChannelProvider::.ctor(System.Collections.Generic.IReadOnlyList`1<Grpc.Core.ChannelOption>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultGrpcChannelProvider__ctor_m55DA5F86C7AC34812C926AF22AFD1A5C2A1C2D48 (DefaultGrpcChannelProvider_t2D7248106FDE928590569DFC42D33470219BE80B * __this, RuntimeObject* ___channelOptions0, const RuntimeMethod* method)
{
	{
		// public DefaultGrpcChannelProvider(IReadOnlyList<ChannelOption> channelOptions) : base(channelOptions) { }
		RuntimeObject* L_0 = ___channelOptions0;
		GrpcCCoreGrpcChannelProvider__ctor_m1550FF5664EBC22D31E82C2D038B4D3A438FB91C(__this, L_0, /*hidden argument*/NULL);
		// public DefaultGrpcChannelProvider(IReadOnlyList<ChannelOption> channelOptions) : base(channelOptions) { }
		return;
	}
}
// System.Void MagicOnion.Unity.DefaultGrpcChannelProvider::.ctor(MagicOnion.Unity.GrpcCCoreChannelOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultGrpcChannelProvider__ctor_mF55EF6C4C97E575B46421AA6A8B170EE1C25882A (DefaultGrpcChannelProvider_t2D7248106FDE928590569DFC42D33470219BE80B * __this, GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 * ___channelOptions0, const RuntimeMethod* method)
{
	{
		// public DefaultGrpcChannelProvider(GrpcCCoreChannelOptions channelOptions) : base(channelOptions) { }
		GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 * L_0 = ___channelOptions0;
		GrpcCCoreGrpcChannelProvider__ctor_m95CA95CDA1131E66304AC760477720C48FD144FC(__this, L_0, /*hidden argument*/NULL);
		// public DefaultGrpcChannelProvider(GrpcCCoreChannelOptions channelOptions) : base(channelOptions) { }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_mCDC285562A72B8F178310FE241ECB17A48DD689B (EmbeddedAttribute_t04A70E58D4C6E91ED5EC7B6523E71DA15235E137 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.IReadOnlyList`1<Grpc.Core.ChannelOption> MagicOnion.Unity.GrpcCCoreChannelOptions::get_ChannelOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GrpcCCoreChannelOptions_get_ChannelOptions_mE5B355B7DFD22754A6A6F9E8A2D83699E0BD2DCB (GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 * __this, const RuntimeMethod* method)
{
	{
		// public IReadOnlyList<ChannelOption> ChannelOptions { get; set; }
		RuntimeObject* L_0 = __this->get_U3CChannelOptionsU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void MagicOnion.Unity.GrpcCCoreChannelOptions::set_ChannelOptions(System.Collections.Generic.IReadOnlyList`1<Grpc.Core.ChannelOption>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcCCoreChannelOptions_set_ChannelOptions_m280D376A513BA937D76C5E3E34DBA5868860BFC8 (GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public IReadOnlyList<ChannelOption> ChannelOptions { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CChannelOptionsU3Ek__BackingField_0(L_0);
		return;
	}
}
// Grpc.Core.ChannelCredentials MagicOnion.Unity.GrpcCCoreChannelOptions::get_ChannelCredentials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E * GrpcCCoreChannelOptions_get_ChannelCredentials_m07E4EB9F34BE72866CEF163B311DF8D1AFB56D75 (GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 * __this, const RuntimeMethod* method)
{
	{
		// public ChannelCredentials ChannelCredentials { get; set; }
		ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E * L_0 = __this->get_U3CChannelCredentialsU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void MagicOnion.Unity.GrpcCCoreChannelOptions::set_ChannelCredentials(Grpc.Core.ChannelCredentials)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcCCoreChannelOptions_set_ChannelCredentials_m00FA7932180EAC0243394630C264A57B7C301683 (GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 * __this, ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E * ___value0, const RuntimeMethod* method)
{
	{
		// public ChannelCredentials ChannelCredentials { get; set; }
		ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E * L_0 = ___value0;
		__this->set_U3CChannelCredentialsU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void MagicOnion.Unity.GrpcCCoreChannelOptions::.ctor(System.Collections.Generic.IReadOnlyList`1<Grpc.Core.ChannelOption>,Grpc.Core.ChannelCredentials)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcCCoreChannelOptions__ctor_mC021956539F5DC3A941CC5A943B71871230CE616 (GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 * __this, RuntimeObject* ___channelOptions0, ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E * ___channelCredentials1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisChannelOption_t220AB2C90AF6E7CEC603E337F7D70DD956976F2D_m40BCF5710134FC72F852187527F7891DCEF22BE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SslCredentials_t149917768B7958A3C7B569C5879C5CAFC7F43D3C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 * G_B2_1 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 * G_B1_1 = NULL;
	ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E * G_B4_0 = NULL;
	GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 * G_B4_1 = NULL;
	ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E * G_B3_0 = NULL;
	GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 * G_B3_1 = NULL;
	{
		// public GrpcCCoreChannelOptions(IReadOnlyList<ChannelOption> channelOptions = null, ChannelCredentials channelCredentials = null)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// ChannelOptions = channelOptions ?? Array.Empty<ChannelOption>();
		RuntimeObject* L_0 = ___channelOptions0;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0013;
		}
	}
	{
		ChannelOptionU5BU5D_t40B01726AADD464802F0CC66325E43E99C532E53* L_2;
		L_2 = Array_Empty_TisChannelOption_t220AB2C90AF6E7CEC603E337F7D70DD956976F2D_m40BCF5710134FC72F852187527F7891DCEF22BE6_inline(/*hidden argument*/Array_Empty_TisChannelOption_t220AB2C90AF6E7CEC603E337F7D70DD956976F2D_m40BCF5710134FC72F852187527F7891DCEF22BE6_RuntimeMethod_var);
		G_B2_0 = ((RuntimeObject*)(L_2));
		G_B2_1 = G_B1_1;
	}

IL_0013:
	{
		NullCheck(G_B2_1);
		GrpcCCoreChannelOptions_set_ChannelOptions_m280D376A513BA937D76C5E3E34DBA5868860BFC8_inline(G_B2_1, G_B2_0, /*hidden argument*/NULL);
		// ChannelCredentials = channelCredentials ?? new SslCredentials();
		ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E * L_3 = ___channelCredentials1;
		ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E * L_4 = L_3;
		G_B3_0 = L_4;
		G_B3_1 = __this;
		if (L_4)
		{
			G_B4_0 = L_4;
			G_B4_1 = __this;
			goto IL_0024;
		}
	}
	{
		SslCredentials_t149917768B7958A3C7B569C5879C5CAFC7F43D3C * L_5 = (SslCredentials_t149917768B7958A3C7B569C5879C5CAFC7F43D3C *)il2cpp_codegen_object_new(SslCredentials_t149917768B7958A3C7B569C5879C5CAFC7F43D3C_il2cpp_TypeInfo_var);
		SslCredentials__ctor_m8B35719C14541011FB9DF867DCEDEB85B8B216D2(L_5, /*hidden argument*/NULL);
		G_B4_0 = ((ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E *)(L_5));
		G_B4_1 = G_B3_1;
	}

IL_0024:
	{
		NullCheck(G_B4_1);
		GrpcCCoreChannelOptions_set_ChannelCredentials_m00FA7932180EAC0243394630C264A57B7C301683_inline(G_B4_1, G_B4_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MagicOnion.Unity.GrpcCCoreGrpcChannelProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcCCoreGrpcChannelProvider__ctor_mAF2667949684188DC436E9F773012B9073DDDEDF (GrpcCCoreGrpcChannelProvider_t5E6293DCD6CD392A6C78779789B14F58D5AC2ECD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : this(new GrpcCCoreChannelOptions())
		GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 * L_0 = (GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 *)il2cpp_codegen_object_new(GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22_il2cpp_TypeInfo_var);
		GrpcCCoreChannelOptions__ctor_mC021956539F5DC3A941CC5A943B71871230CE616(L_0, (RuntimeObject*)NULL, (ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E *)NULL, /*hidden argument*/NULL);
		GrpcCCoreGrpcChannelProvider__ctor_m95CA95CDA1131E66304AC760477720C48FD144FC(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MagicOnion.Unity.GrpcCCoreGrpcChannelProvider::.ctor(System.Collections.Generic.IReadOnlyList`1<Grpc.Core.ChannelOption>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcCCoreGrpcChannelProvider__ctor_m1550FF5664EBC22D31E82C2D038B4D3A438FB91C (GrpcCCoreGrpcChannelProvider_t5E6293DCD6CD392A6C78779789B14F58D5AC2ECD * __this, RuntimeObject* ___channelOptions0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : this(new GrpcCCoreChannelOptions(channelOptions))
		RuntimeObject* L_0 = ___channelOptions0;
		GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 * L_1 = (GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 *)il2cpp_codegen_object_new(GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22_il2cpp_TypeInfo_var);
		GrpcCCoreChannelOptions__ctor_mC021956539F5DC3A941CC5A943B71871230CE616(L_1, L_0, (ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E *)NULL, /*hidden argument*/NULL);
		GrpcCCoreGrpcChannelProvider__ctor_m95CA95CDA1131E66304AC760477720C48FD144FC(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MagicOnion.Unity.GrpcCCoreGrpcChannelProvider::.ctor(MagicOnion.Unity.GrpcCCoreChannelOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcCCoreGrpcChannelProvider__ctor_m95CA95CDA1131E66304AC760477720C48FD144FC (GrpcCCoreGrpcChannelProvider_t5E6293DCD6CD392A6C78779789B14F58D5AC2ECD * __this, GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 * ___channelOptions0, const RuntimeMethod* method)
{
	GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 * G_B2_0 = NULL;
	GrpcCCoreGrpcChannelProvider_t5E6293DCD6CD392A6C78779789B14F58D5AC2ECD * G_B2_1 = NULL;
	GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 * G_B1_0 = NULL;
	GrpcCCoreGrpcChannelProvider_t5E6293DCD6CD392A6C78779789B14F58D5AC2ECD * G_B1_1 = NULL;
	{
		// public GrpcCCoreGrpcChannelProvider(GrpcCCoreChannelOptions channelOptions)
		GrpcChannelProviderBase__ctor_mB234D0A7860C41010D1107F2B4DCFF03DD331065(__this, /*hidden argument*/NULL);
		// _defaultChannelOptions = channelOptions ?? throw new ArgumentNullException(nameof(channelOptions));
		GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 * L_0 = ___channelOptions0;
		GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 * L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0019;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral01476D682E93A51AF3F24A83D43AC817D21C116A)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GrpcCCoreGrpcChannelProvider__ctor_m95CA95CDA1131E66304AC760477720C48FD144FC_RuntimeMethod_var)));
	}

IL_0019:
	{
		NullCheck(G_B2_1);
		G_B2_1->set__defaultChannelOptions_2(G_B2_0);
		// }
		return;
	}
}
// MagicOnion.GrpcChannelx MagicOnion.Unity.GrpcCCoreGrpcChannelProvider::CreateChannelCore(System.Int32,MagicOnion.Unity.CreateGrpcChannelContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * GrpcCCoreGrpcChannelProvider_CreateChannelCore_m0B70EF6A462DEBD4AE78A8F40BBE445B29912B55 (GrpcCCoreGrpcChannelProvider_t5E6293DCD6CD392A6C78779789B14F58D5AC2ECD * __this, int32_t ___id0, CreateGrpcChannelContext_tB9ED19C9DEE05147585D686FB12F9F574329764B * ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mED276CF4DB3F800648E9729B0E9851A1CFA23B7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t549C5EF27D2CC5AD07CBB9088B404BF46A678163_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Channel_t05CCFAE14C23CE3E40F26235CB6E9F42C4B736DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrpcChannelOptionsBag_Get_TisGrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22_m4933EA2B09EF4B54ABBA4FEBF38C7B8F2C15A949_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrpcChannelOptionsBag_t3A8A75BF4444B4683CCE7492D71C0E82275A62DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGrpcChannelProvider_t7828BBE4FBA5C81FF47F6F92407AFE7E70CD9102_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58B716FF5428F7961E1403E6D969E605D0F27EAF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98D57AB2B10DF4E3C8863A28F3B33F7502FDBBA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF27E4C631EBEFA337EC21BE8552E169C9DED78A2);
		s_Il2CppMethodInitialized = true;
	}
	GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 * V_0 = NULL;
	Channel_t05CCFAE14C23CE3E40F26235CB6E9F42C4B736DD * V_1 = NULL;
	GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * V_2 = NULL;
	GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF  V_3;
	memset((&V_3), 0, sizeof(V_3));
	GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * V_4 = NULL;
	GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 * G_B2_0 = NULL;
	GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 * G_B1_0 = NULL;
	int32_t G_B4_0 = 0;
	String_t* G_B4_1 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = NULL;
	ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E * G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	String_t* G_B5_2 = NULL;
	Channel_t05CCFAE14C23CE3E40F26235CB6E9F42C4B736DD * G_B7_0 = NULL;
	Action_1_t549C5EF27D2CC5AD07CBB9088B404BF46A678163 * G_B7_1 = NULL;
	int32_t G_B7_2 = 0;
	Channel_t05CCFAE14C23CE3E40F26235CB6E9F42C4B736DD * G_B6_0 = NULL;
	Action_1_t549C5EF27D2CC5AD07CBB9088B404BF46A678163 * G_B6_1 = NULL;
	int32_t G_B6_2 = 0;
	String_t* G_B8_0 = NULL;
	Channel_t05CCFAE14C23CE3E40F26235CB6E9F42C4B736DD * G_B8_1 = NULL;
	Action_1_t549C5EF27D2CC5AD07CBB9088B404BF46A678163 * G_B8_2 = NULL;
	int32_t G_B8_3 = 0;
	{
		// var channelOptions = context.ChannelOptions.Get<GrpcCCoreChannelOptions>() ?? _defaultChannelOptions;
		CreateGrpcChannelContext_tB9ED19C9DEE05147585D686FB12F9F574329764B * L_0 = ___context1;
		NullCheck(L_0);
		GrpcChannelOptionsBag_t3A8A75BF4444B4683CCE7492D71C0E82275A62DF * L_1;
		L_1 = CreateGrpcChannelContext_get_ChannelOptions_m8E62B029F8AA2C9E7E14A0E608A8F23943F57193_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 * L_2;
		L_2 = GrpcChannelOptionsBag_Get_TisGrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22_m4933EA2B09EF4B54ABBA4FEBF38C7B8F2C15A949(L_1, /*hidden argument*/GrpcChannelOptionsBag_Get_TisGrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22_m4933EA2B09EF4B54ABBA4FEBF38C7B8F2C15A949_RuntimeMethod_var);
		GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 * L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0016;
		}
	}
	{
		GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 * L_4 = __this->get__defaultChannelOptions_2();
		G_B2_0 = L_4;
	}

IL_0016:
	{
		V_0 = G_B2_0;
		// var channel = new Channel(context.Target.Host, context.Target.Port, context.Target.IsInsecure ? ChannelCredentials.Insecure : channelOptions.ChannelCredentials, channelOptions.ChannelOptions);
		CreateGrpcChannelContext_tB9ED19C9DEE05147585D686FB12F9F574329764B * L_5 = ___context1;
		NullCheck(L_5);
		GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF  L_6;
		L_6 = CreateGrpcChannelContext_get_Target_m3406B7430EC5EE62795DF1FEAFA00DF9BD9B8DF7_inline(L_5, /*hidden argument*/NULL);
		V_3 = L_6;
		String_t* L_7;
		L_7 = GrpcChannelTarget_get_Host_m57BC6648F51844808220DA8B4C198C0B958C8A20_inline((GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF *)(&V_3), /*hidden argument*/NULL);
		CreateGrpcChannelContext_tB9ED19C9DEE05147585D686FB12F9F574329764B * L_8 = ___context1;
		NullCheck(L_8);
		GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF  L_9;
		L_9 = CreateGrpcChannelContext_get_Target_m3406B7430EC5EE62795DF1FEAFA00DF9BD9B8DF7_inline(L_8, /*hidden argument*/NULL);
		V_3 = L_9;
		int32_t L_10;
		L_10 = GrpcChannelTarget_get_Port_m3CB87BD3C76EC8030761713704B8A373D7283BEB_inline((GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF *)(&V_3), /*hidden argument*/NULL);
		CreateGrpcChannelContext_tB9ED19C9DEE05147585D686FB12F9F574329764B * L_11 = ___context1;
		NullCheck(L_11);
		GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF  L_12;
		L_12 = CreateGrpcChannelContext_get_Target_m3406B7430EC5EE62795DF1FEAFA00DF9BD9B8DF7_inline(L_11, /*hidden argument*/NULL);
		V_3 = L_12;
		bool L_13;
		L_13 = GrpcChannelTarget_get_IsInsecure_mBE46F213D425E033774E0A5F16A7053F1187041F_inline((GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF *)(&V_3), /*hidden argument*/NULL);
		G_B3_0 = L_10;
		G_B3_1 = L_7;
		if (L_13)
		{
			G_B4_0 = L_10;
			G_B4_1 = L_7;
			goto IL_004b;
		}
	}
	{
		GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 * L_14 = V_0;
		NullCheck(L_14);
		ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E * L_15;
		L_15 = GrpcCCoreChannelOptions_get_ChannelCredentials_m07E4EB9F34BE72866CEF163B311DF8D1AFB56D75_inline(L_14, /*hidden argument*/NULL);
		G_B5_0 = L_15;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0050;
	}

IL_004b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E_il2cpp_TypeInfo_var);
		ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E * L_16;
		L_16 = ChannelCredentials_get_Insecure_m8D99B79F97F8B8C2D3609960E737647966A9A1F4_inline(/*hidden argument*/NULL);
		G_B5_0 = L_16;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0050:
	{
		GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 * L_17 = V_0;
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = GrpcCCoreChannelOptions_get_ChannelOptions_mE5B355B7DFD22754A6A6F9E8A2D83699E0BD2DCB_inline(L_17, /*hidden argument*/NULL);
		Channel_t05CCFAE14C23CE3E40F26235CB6E9F42C4B736DD * L_19 = (Channel_t05CCFAE14C23CE3E40F26235CB6E9F42C4B736DD *)il2cpp_codegen_object_new(Channel_t05CCFAE14C23CE3E40F26235CB6E9F42C4B736DD_il2cpp_TypeInfo_var);
		Channel__ctor_m178076C87D5BB98B5F3577E4FA50D56DD9722F88(L_19, G_B5_2, G_B5_1, G_B5_0, L_18, /*hidden argument*/NULL);
		V_1 = L_19;
		// var channelHolder = new GrpcChannelx(
		//     id,
		//     context.Provider.UnregisterChannel /* Root provider may be wrapped outside this provider class. */,
		//     channel,
		//     new Uri((context.Target.IsInsecure ? "http" : "https") + $"://{context.Target.Host}:{context.Target.Port}"),
		//     new GrpcChannelOptionsBag(channelOptions)
		// );
		int32_t L_20 = ___id0;
		CreateGrpcChannelContext_tB9ED19C9DEE05147585D686FB12F9F574329764B * L_21 = ___context1;
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = CreateGrpcChannelContext_get_Provider_m91A5D7596BE905702969BB039CA4219A05ED7285_inline(L_21, /*hidden argument*/NULL);
		RuntimeObject* L_23 = L_22;
		Action_1_t549C5EF27D2CC5AD07CBB9088B404BF46A678163 * L_24 = (Action_1_t549C5EF27D2CC5AD07CBB9088B404BF46A678163 *)il2cpp_codegen_object_new(Action_1_t549C5EF27D2CC5AD07CBB9088B404BF46A678163_il2cpp_TypeInfo_var);
		Action_1__ctor_mED276CF4DB3F800648E9729B0E9851A1CFA23B7A(L_24, L_23, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_23, 1, IGrpcChannelProvider_t7828BBE4FBA5C81FF47F6F92407AFE7E70CD9102_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_mED276CF4DB3F800648E9729B0E9851A1CFA23B7A_RuntimeMethod_var);
		Channel_t05CCFAE14C23CE3E40F26235CB6E9F42C4B736DD * L_25 = V_1;
		CreateGrpcChannelContext_tB9ED19C9DEE05147585D686FB12F9F574329764B * L_26 = ___context1;
		NullCheck(L_26);
		GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF  L_27;
		L_27 = CreateGrpcChannelContext_get_Target_m3406B7430EC5EE62795DF1FEAFA00DF9BD9B8DF7_inline(L_26, /*hidden argument*/NULL);
		V_3 = L_27;
		bool L_28;
		L_28 = GrpcChannelTarget_get_IsInsecure_mBE46F213D425E033774E0A5F16A7053F1187041F_inline((GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF *)(&V_3), /*hidden argument*/NULL);
		G_B6_0 = L_25;
		G_B6_1 = L_24;
		G_B6_2 = L_20;
		if (L_28)
		{
			G_B7_0 = L_25;
			G_B7_1 = L_24;
			G_B7_2 = L_20;
			goto IL_0087;
		}
	}
	{
		G_B8_0 = _stringLiteralF27E4C631EBEFA337EC21BE8552E169C9DED78A2;
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		G_B8_3 = G_B6_2;
		goto IL_008c;
	}

IL_0087:
	{
		G_B8_0 = _stringLiteral58B716FF5428F7961E1403E6D969E605D0F27EAF;
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
		G_B8_3 = G_B7_2;
	}

IL_008c:
	{
		CreateGrpcChannelContext_tB9ED19C9DEE05147585D686FB12F9F574329764B * L_29 = ___context1;
		NullCheck(L_29);
		GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF  L_30;
		L_30 = CreateGrpcChannelContext_get_Target_m3406B7430EC5EE62795DF1FEAFA00DF9BD9B8DF7_inline(L_29, /*hidden argument*/NULL);
		V_3 = L_30;
		String_t* L_31;
		L_31 = GrpcChannelTarget_get_Host_m57BC6648F51844808220DA8B4C198C0B958C8A20_inline((GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF *)(&V_3), /*hidden argument*/NULL);
		CreateGrpcChannelContext_tB9ED19C9DEE05147585D686FB12F9F574329764B * L_32 = ___context1;
		NullCheck(L_32);
		GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF  L_33;
		L_33 = CreateGrpcChannelContext_get_Target_m3406B7430EC5EE62795DF1FEAFA00DF9BD9B8DF7_inline(L_32, /*hidden argument*/NULL);
		V_3 = L_33;
		int32_t L_34;
		L_34 = GrpcChannelTarget_get_Port_m3CB87BD3C76EC8030761713704B8A373D7283BEB_inline((GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF *)(&V_3), /*hidden argument*/NULL);
		int32_t L_35 = L_34;
		RuntimeObject * L_36 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_35);
		String_t* L_37;
		L_37 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral98D57AB2B10DF4E3C8863A28F3B33F7502FDBBA5, L_31, L_36, /*hidden argument*/NULL);
		String_t* L_38;
		L_38 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B8_0, L_37, /*hidden argument*/NULL);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_39 = (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)il2cpp_codegen_object_new(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		Uri__ctor_m7724F43B1525624FFF97A774B6B909B075714D5C(L_39, L_38, /*hidden argument*/NULL);
		GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 * L_40 = V_0;
		GrpcChannelOptionsBag_t3A8A75BF4444B4683CCE7492D71C0E82275A62DF * L_41 = (GrpcChannelOptionsBag_t3A8A75BF4444B4683CCE7492D71C0E82275A62DF *)il2cpp_codegen_object_new(GrpcChannelOptionsBag_t3A8A75BF4444B4683CCE7492D71C0E82275A62DF_il2cpp_TypeInfo_var);
		GrpcChannelOptionsBag__ctor_m6ADD6DBC238807B1ACBD73A5A97B6664A017319B(L_41, L_40, /*hidden argument*/NULL);
		GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * L_42 = (GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A *)il2cpp_codegen_object_new(GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A_il2cpp_TypeInfo_var);
		GrpcChannelx__ctor_mE05D6635A710232D65B1661797CF60DE02AC5446(L_42, G_B8_3, G_B8_2, G_B8_1, L_39, L_41, /*hidden argument*/NULL);
		V_2 = L_42;
		// return channelHolder;
		GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * L_43 = V_2;
		V_4 = L_43;
		goto IL_00d2;
	}

IL_00d2:
	{
		// }
		GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * L_44 = V_4;
		return L_44;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MagicOnion.Unity.GrpcChannelOptionsBag::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcChannelOptionsBag__ctor_m6ADD6DBC238807B1ACBD73A5A97B6664A017319B (GrpcChannelOptionsBag_t3A8A75BF4444B4683CCE7492D71C0E82275A62DF * __this, RuntimeObject * ___options0, const RuntimeMethod* method)
{
	{
		// public GrpcChannelOptionsBag(object options)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// _options = options;
		RuntimeObject * L_0 = ___options0;
		__this->set__options_0(L_0);
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> MagicOnion.Unity.GrpcChannelOptionsBag::GetValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GrpcChannelOptionsBag_GetValues_m19668A33D1A01B1E84DDA9F47CC7C761A7F6A6A1 (GrpcChannelOptionsBag_t3A8A75BF4444B4683CCE7492D71C0E82275A62DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetValuesU3Ed__4_t3EC47CADB40D760F006EE3FC565ABDF09FFB0805_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetValuesU3Ed__4_t3EC47CADB40D760F006EE3FC565ABDF09FFB0805 * L_0 = (U3CGetValuesU3Ed__4_t3EC47CADB40D760F006EE3FC565ABDF09FFB0805 *)il2cpp_codegen_object_new(U3CGetValuesU3Ed__4_t3EC47CADB40D760F006EE3FC565ABDF09FFB0805_il2cpp_TypeInfo_var);
		U3CGetValuesU3Ed__4__ctor_mB11662DD2AEA5497BA588D22B99B29D6C8F27D05(L_0, ((int32_t)-2), /*hidden argument*/NULL);
		U3CGetValuesU3Ed__4_t3EC47CADB40D760F006EE3FC565ABDF09FFB0805 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// MagicOnion.Unity.IGrpcChannelProvider MagicOnion.Unity.GrpcChannelProvider::get_Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GrpcChannelProvider_get_Default_m58E560AA52B3BBA0E64F3398A7DC4D01A119172E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrpcChannelProvider_t25B7C6A04DAD5F0A6968EFD8B0D4C861B0DEF85E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// => _defaultProvider ?? throw new InvalidOperationException("The default GrpcChannelProvider is not configured yet. Setup GrpcChannelProviderHost or initialize manually. ");
		RuntimeObject* L_0 = ((GrpcChannelProvider_t25B7C6A04DAD5F0A6968EFD8B0D4C861B0DEF85E_StaticFields*)il2cpp_codegen_static_fields_for(GrpcChannelProvider_t25B7C6A04DAD5F0A6968EFD8B0D4C861B0DEF85E_il2cpp_TypeInfo_var))->get__defaultProvider_0();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC01B6BFEC1A288F408504F67735353415939B4EA)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GrpcChannelProvider_get_Default_m58E560AA52B3BBA0E64F3398A7DC4D01A119172E_RuntimeMethod_var)));
	}

IL_0014:
	{
		return G_B2_0;
	}
}
// System.Void MagicOnion.Unity.GrpcChannelProvider::SetDefaultProvider(MagicOnion.Unity.IGrpcChannelProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcChannelProvider_SetDefaultProvider_m79BB9939CF19AF0D0531C2366AFE15AAA780A5A5 (RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrpcChannelProvider_t25B7C6A04DAD5F0A6968EFD8B0D4C861B0DEF85E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _defaultProvider = provider;
		RuntimeObject* L_0 = ___provider0;
		((GrpcChannelProvider_t25B7C6A04DAD5F0A6968EFD8B0D4C861B0DEF85E_StaticFields*)il2cpp_codegen_static_fields_for(GrpcChannelProvider_t25B7C6A04DAD5F0A6968EFD8B0D4C861B0DEF85E_il2cpp_TypeInfo_var))->set__defaultProvider_0(L_0);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// MagicOnion.GrpcChannelx MagicOnion.Unity.GrpcChannelProviderBase::CreateChannel(MagicOnion.Unity.CreateGrpcChannelContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * GrpcChannelProviderBase_CreateChannel_mE10821B7D7B36529267816CB86F25724E5DAEE39 (GrpcChannelProviderBase_t65F00C664A3D6A88F44A88CED2B92EF2821D115E * __this, CreateGrpcChannelContext_tB9ED19C9DEE05147585D686FB12F9F574329764B * ___context0, const RuntimeMethod* method)
{
	GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * V_0 = NULL;
	GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * V_1 = NULL;
	{
		// var channelHolder = CreateChannelCore(Interlocked.Increment(ref _seq), context);
		int32_t* L_0 = __this->get_address_of__seq_1();
		int32_t L_1;
		L_1 = Interlocked_Increment_mEF7FA106280D9E57DA8A97887389A961B65E47D8((int32_t*)L_0, /*hidden argument*/NULL);
		CreateGrpcChannelContext_tB9ED19C9DEE05147585D686FB12F9F574329764B * L_2 = ___context0;
		GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * L_3;
		L_3 = VirtFuncInvoker2< GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A *, int32_t, CreateGrpcChannelContext_tB9ED19C9DEE05147585D686FB12F9F574329764B * >::Invoke(8 /* MagicOnion.GrpcChannelx MagicOnion.Unity.GrpcChannelProviderBase::CreateChannelCore(System.Int32,MagicOnion.Unity.CreateGrpcChannelContext) */, __this, L_1, L_2);
		V_0 = L_3;
		// RegisterChannel(channelHolder);
		GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * L_4 = V_0;
		GrpcChannelProviderBase_RegisterChannel_mF5ADCD5D1C16E5A7A96D044DE99C2537BED45F1D(__this, L_4, /*hidden argument*/NULL);
		// return channelHolder;
		GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * L_5 = V_0;
		V_1 = L_5;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * L_6 = V_1;
		return L_6;
	}
}
// System.Void MagicOnion.Unity.GrpcChannelProviderBase::RegisterChannel(MagicOnion.GrpcChannelx)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcChannelProviderBase_RegisterChannel_mF5ADCD5D1C16E5A7A96D044DE99C2537BED45F1D (GrpcChannelProviderBase_t65F00C664A3D6A88F44A88CED2B92EF2821D115E * __this, GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * ___channel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m08BF4E5F03F1388F39EBE158DD94298F6715346A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t794BA021F761B44AC15B20B38C5162FF01364CDA * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (_channels)
		List_1_t794BA021F761B44AC15B20B38C5162FF01364CDA * L_0 = __this->get__channels_0();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		List_1_t794BA021F761B44AC15B20B38C5162FF01364CDA * L_1 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
		// _channels.Add(channel);
		List_1_t794BA021F761B44AC15B20B38C5162FF01364CDA * L_2 = __this->get__channels_0();
		GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * L_3 = ___channel0;
		NullCheck(L_2);
		List_1_Add_m08BF4E5F03F1388F39EBE158DD94298F6715346A(L_2, L_3, /*hidden argument*/List_1_Add_m08BF4E5F03F1388F39EBE158DD94298F6715346A_RuntimeMethod_var);
		IL2CPP_LEAVE(0x2F, FINALLY_0024);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0024;
	}

FINALLY_0024:
	{ // begin finally (depth: 1)
		{
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_002e;
			}
		}

IL_0027:
		{
			List_1_t794BA021F761B44AC15B20B38C5162FF01364CDA * L_5 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_5, /*hidden argument*/NULL);
		}

IL_002e:
		{
			IL2CPP_END_FINALLY(36)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(36)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2F, IL_002f)
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void MagicOnion.Unity.GrpcChannelProviderBase::UnregisterChannel(MagicOnion.GrpcChannelx)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcChannelProviderBase_UnregisterChannel_mF90D4C9A59F92839E41E6F95106E96D848589E70 (GrpcChannelProviderBase_t65F00C664A3D6A88F44A88CED2B92EF2821D115E * __this, GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * ___channel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m1F393F26C25C24E3E0EA6435CC34C594B861FD91_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t794BA021F761B44AC15B20B38C5162FF01364CDA * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (_channels)
		List_1_t794BA021F761B44AC15B20B38C5162FF01364CDA * L_0 = __this->get__channels_0();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		List_1_t794BA021F761B44AC15B20B38C5162FF01364CDA * L_1 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
		// _channels.Remove(channel);
		List_1_t794BA021F761B44AC15B20B38C5162FF01364CDA * L_2 = __this->get__channels_0();
		GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * L_3 = ___channel0;
		NullCheck(L_2);
		bool L_4;
		L_4 = List_1_Remove_m1F393F26C25C24E3E0EA6435CC34C594B861FD91(L_2, L_3, /*hidden argument*/List_1_Remove_m1F393F26C25C24E3E0EA6435CC34C594B861FD91_RuntimeMethod_var);
		IL2CPP_LEAVE(0x2F, FINALLY_0024);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0024;
	}

FINALLY_0024:
	{ // begin finally (depth: 1)
		{
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_002e;
			}
		}

IL_0027:
		{
			List_1_t794BA021F761B44AC15B20B38C5162FF01364CDA * L_6 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_6, /*hidden argument*/NULL);
		}

IL_002e:
		{
			IL2CPP_END_FINALLY(36)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(36)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2F, IL_002f)
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Collections.Generic.IReadOnlyCollection`1<MagicOnion.GrpcChannelx> MagicOnion.Unity.GrpcChannelProviderBase::GetAllChannels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GrpcChannelProviderBase_GetAllChannels_m6211536B32B959011BEF356BEE67ADCFB262878F (GrpcChannelProviderBase_t65F00C664A3D6A88F44A88CED2B92EF2821D115E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m54EC22E3F1C7830916F80B76B722B3E436E9FF98_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t794BA021F761B44AC15B20B38C5162FF01364CDA * V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (_channels)
		List_1_t794BA021F761B44AC15B20B38C5162FF01364CDA * L_0 = __this->get__channels_0();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		List_1_t794BA021F761B44AC15B20B38C5162FF01364CDA * L_1 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
		// return _channels.ToArray();
		List_1_t794BA021F761B44AC15B20B38C5162FF01364CDA * L_2 = __this->get__channels_0();
		NullCheck(L_2);
		GrpcChannelxU5BU5D_tA4631A4B0BD22B04BE95989B436ECF9A2300F417* L_3;
		L_3 = List_1_ToArray_m54EC22E3F1C7830916F80B76B722B3E436E9FF98(L_2, /*hidden argument*/List_1_ToArray_m54EC22E3F1C7830916F80B76B722B3E436E9FF98_RuntimeMethod_var);
		V_2 = (RuntimeObject*)L_3;
		IL2CPP_LEAVE(0x2D, FINALLY_0022);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0022;
	}

FINALLY_0022:
	{ // begin finally (depth: 1)
		{
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_002c;
			}
		}

IL_0025:
		{
			List_1_t794BA021F761B44AC15B20B38C5162FF01364CDA * L_5 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_5, /*hidden argument*/NULL);
		}

IL_002c:
		{
			IL2CPP_END_FINALLY(34)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(34)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2D, IL_002d)
	}

IL_002d:
	{
		// }
		RuntimeObject* L_6 = V_2;
		return L_6;
	}
}
// System.Void MagicOnion.Unity.GrpcChannelProviderBase::ShutdownAllChannels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcChannelProviderBase_ShutdownAllChannels_mCBE059AA1E9BDC018A46680C705FAD155F9DD861 (GrpcChannelProviderBase_t65F00C664A3D6A88F44A88CED2B92EF2821D115E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m54EC22E3F1C7830916F80B76B722B3E436E9FF98_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t794BA021F761B44AC15B20B38C5162FF01364CDA * V_0 = NULL;
	bool V_1 = false;
	GrpcChannelxU5BU5D_tA4631A4B0BD22B04BE95989B436ECF9A2300F417* V_2 = NULL;
	int32_t V_3 = 0;
	GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * V_4 = NULL;
	Exception_t * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		// lock (_channels)
		List_1_t794BA021F761B44AC15B20B38C5162FF01364CDA * L_0 = __this->get__channels_0();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		{
			List_1_t794BA021F761B44AC15B20B38C5162FF01364CDA * L_1 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
			// foreach (var channel in _channels.ToArray() /* snapshot */)
			List_1_t794BA021F761B44AC15B20B38C5162FF01364CDA * L_2 = __this->get__channels_0();
			NullCheck(L_2);
			GrpcChannelxU5BU5D_tA4631A4B0BD22B04BE95989B436ECF9A2300F417* L_3;
			L_3 = List_1_ToArray_m54EC22E3F1C7830916F80B76B722B3E436E9FF98(L_2, /*hidden argument*/List_1_ToArray_m54EC22E3F1C7830916F80B76B722B3E436E9FF98_RuntimeMethod_var);
			V_2 = L_3;
			V_3 = 0;
			goto IL_004a;
		}

IL_0025:
		{
			// foreach (var channel in _channels.ToArray() /* snapshot */)
			GrpcChannelxU5BU5D_tA4631A4B0BD22B04BE95989B436ECF9A2300F417* L_4 = V_2;
			int32_t L_5 = V_3;
			NullCheck(L_4);
			int32_t L_6 = L_5;
			GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
			V_4 = L_7;
		}

IL_002b:
		try
		{ // begin try (depth: 2)
			// channel.Dispose();
			GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * L_8 = V_4;
			NullCheck(L_8);
			GrpcChannelx_Dispose_mF07EC1759F1167F38A1D5D1B33FEB4D631FB22EA(L_8, /*hidden argument*/NULL);
			goto IL_0045;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0037;
			}
			throw e;
		}

CATCH_0037:
		{ // begin catch(System.Exception)
			// catch (Exception e)
			V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			// Debug.LogException(e);
			Exception_t * L_9 = V_5;
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA(L_9, /*hidden argument*/NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0045;
		} // end catch (depth: 2)

IL_0045:
		{
			int32_t L_10 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		}

IL_004a:
		{
			// foreach (var channel in _channels.ToArray() /* snapshot */)
			int32_t L_11 = V_3;
			GrpcChannelxU5BU5D_tA4631A4B0BD22B04BE95989B436ECF9A2300F417* L_12 = V_2;
			NullCheck(L_12);
			if ((((int32_t)L_11) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))
			{
				goto IL_0025;
			}
		}

IL_0050:
		{
			IL2CPP_LEAVE(0x5E, FINALLY_0053);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0053;
	}

FINALLY_0053:
	{ // begin finally (depth: 1)
		{
			bool L_13 = V_1;
			if (!L_13)
			{
				goto IL_005d;
			}
		}

IL_0056:
		{
			List_1_t794BA021F761B44AC15B20B38C5162FF01364CDA * L_14 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_14, /*hidden argument*/NULL);
		}

IL_005d:
		{
			IL2CPP_END_FINALLY(83)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(83)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5E, IL_005e)
	}

IL_005e:
	{
		// }
		return;
	}
}
// System.Void MagicOnion.Unity.GrpcChannelProviderBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcChannelProviderBase__ctor_mB234D0A7860C41010D1107F2B4DCFF03DD331065 (GrpcChannelProviderBase_t65F00C664A3D6A88F44A88CED2B92EF2821D115E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD510A3B40A1E977E832BC4964BAEBC5053A47D25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t794BA021F761B44AC15B20B38C5162FF01364CDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly List<GrpcChannelx> _channels = new List<GrpcChannelx>();
		List_1_t794BA021F761B44AC15B20B38C5162FF01364CDA * L_0 = (List_1_t794BA021F761B44AC15B20B38C5162FF01364CDA *)il2cpp_codegen_object_new(List_1_t794BA021F761B44AC15B20B38C5162FF01364CDA_il2cpp_TypeInfo_var);
		List_1__ctor_mD510A3B40A1E977E832BC4964BAEBC5053A47D25(L_0, /*hidden argument*/List_1__ctor_mD510A3B40A1E977E832BC4964BAEBC5053A47D25_RuntimeMethod_var);
		__this->set__channels_0(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// MagicOnion.GrpcChannelx MagicOnion.Unity.GrpcChannelProviderExtensions::CreateChannel(MagicOnion.Unity.IGrpcChannelProvider,MagicOnion.Unity.GrpcChannelTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * GrpcChannelProviderExtensions_CreateChannel_mB116D4FD106BD5DC463E2B77051DF207D2A29138 (RuntimeObject* ___provider0, GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF  ___target1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreateGrpcChannelContext_tB9ED19C9DEE05147585D686FB12F9F574329764B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGrpcChannelProvider_t7828BBE4FBA5C81FF47F6F92407AFE7E70CD9102_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => provider.CreateChannel(new CreateGrpcChannelContext(provider, target));
		RuntimeObject* L_0 = ___provider0;
		RuntimeObject* L_1 = ___provider0;
		GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF  L_2 = ___target1;
		CreateGrpcChannelContext_tB9ED19C9DEE05147585D686FB12F9F574329764B * L_3 = (CreateGrpcChannelContext_tB9ED19C9DEE05147585D686FB12F9F574329764B *)il2cpp_codegen_object_new(CreateGrpcChannelContext_tB9ED19C9DEE05147585D686FB12F9F574329764B_il2cpp_TypeInfo_var);
		CreateGrpcChannelContext__ctor_mEDDCDE84E563746CD94BD705C0F785262D751283(L_3, L_1, L_2, NULL, /*hidden argument*/NULL);
		NullCheck(L_0);
		GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * L_4;
		L_4 = InterfaceFuncInvoker1< GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A *, CreateGrpcChannelContext_tB9ED19C9DEE05147585D686FB12F9F574329764B * >::Invoke(0 /* MagicOnion.GrpcChannelx MagicOnion.Unity.IGrpcChannelProvider::CreateChannel(MagicOnion.Unity.CreateGrpcChannelContext) */, IGrpcChannelProvider_t7828BBE4FBA5C81FF47F6F92407AFE7E70CD9102_il2cpp_TypeInfo_var, L_0, L_3);
		return L_4;
	}
}
// MagicOnion.GrpcChannelx MagicOnion.Unity.GrpcChannelProviderExtensions::CreateChannel(MagicOnion.Unity.IGrpcChannelProvider,MagicOnion.Unity.GrpcChannelTarget,Grpc.Core.ChannelCredentials,System.Collections.Generic.IReadOnlyList`1<Grpc.Core.ChannelOption>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * GrpcChannelProviderExtensions_CreateChannel_m8B4CDC4F25EC5AA6E36FDC49D37F88C28CF5AB08 (RuntimeObject* ___provider0, GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF  ___target1, ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E * ___channelCredentials2, RuntimeObject* ___channelOptions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreateGrpcChannelContext_tB9ED19C9DEE05147585D686FB12F9F574329764B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGrpcChannelProvider_t7828BBE4FBA5C81FF47F6F92407AFE7E70CD9102_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => provider.CreateChannel(new CreateGrpcChannelContext(provider, target, new GrpcCCoreChannelOptions(channelOptions, channelCredentials)));
		RuntimeObject* L_0 = ___provider0;
		RuntimeObject* L_1 = ___provider0;
		GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF  L_2 = ___target1;
		RuntimeObject* L_3 = ___channelOptions3;
		ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E * L_4 = ___channelCredentials2;
		GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 * L_5 = (GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 *)il2cpp_codegen_object_new(GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22_il2cpp_TypeInfo_var);
		GrpcCCoreChannelOptions__ctor_mC021956539F5DC3A941CC5A943B71871230CE616(L_5, L_3, L_4, /*hidden argument*/NULL);
		CreateGrpcChannelContext_tB9ED19C9DEE05147585D686FB12F9F574329764B * L_6 = (CreateGrpcChannelContext_tB9ED19C9DEE05147585D686FB12F9F574329764B *)il2cpp_codegen_object_new(CreateGrpcChannelContext_tB9ED19C9DEE05147585D686FB12F9F574329764B_il2cpp_TypeInfo_var);
		CreateGrpcChannelContext__ctor_mEDDCDE84E563746CD94BD705C0F785262D751283(L_6, L_1, L_2, L_5, /*hidden argument*/NULL);
		NullCheck(L_0);
		GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * L_7;
		L_7 = InterfaceFuncInvoker1< GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A *, CreateGrpcChannelContext_tB9ED19C9DEE05147585D686FB12F9F574329764B * >::Invoke(0 /* MagicOnion.GrpcChannelx MagicOnion.Unity.IGrpcChannelProvider::CreateChannel(MagicOnion.Unity.CreateGrpcChannelContext) */, IGrpcChannelProvider_t7828BBE4FBA5C81FF47F6F92407AFE7E70CD9102_il2cpp_TypeInfo_var, L_0, L_6);
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// MagicOnion.Unity.IGrpcChannelProvider MagicOnion.Unity.GrpcChannelProviderHost::get_Provider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GrpcChannelProviderHost_get_Provider_mF4E3EFE483EEB08B4BCB7281049A13041528A82F (GrpcChannelProviderHost_t0313060C8CEE5ECBBFEE81A54E13951CBFBF32D1 * __this, const RuntimeMethod* method)
{
	{
		// public IGrpcChannelProvider Provider { get; private set; }
		RuntimeObject* L_0 = __this->get_U3CProviderU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void MagicOnion.Unity.GrpcChannelProviderHost::set_Provider(MagicOnion.Unity.IGrpcChannelProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcChannelProviderHost_set_Provider_m63C143840919A2FCF009C354665D5FC11C6B92EE (GrpcChannelProviderHost_t0313060C8CEE5ECBBFEE81A54E13951CBFBF32D1 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public IGrpcChannelProvider Provider { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CProviderU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void MagicOnion.Unity.GrpcChannelProviderHost::Initialize(MagicOnion.Unity.IGrpcChannelProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcChannelProviderHost_Initialize_m9ACBFBF6ABDFB88F28A7BCC5D71D18DC2D8147FB (RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisGrpcChannelProviderHost_t0313060C8CEE5ECBBFEE81A54E13951CBFBF32D1_m6DE43A920BA07378472B76794A4F8DC79013745A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisGrpcChannelProviderHost_t0313060C8CEE5ECBBFEE81A54E13951CBFBF32D1_m8E42EE3E0B55940E84A498B24A6C4A1074DE1580_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CDFF5FACBA3A91A992AA2257A48EBAD9DF94C5C);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	GrpcChannelProviderHost_t0313060C8CEE5ECBBFEE81A54E13951CBFBF32D1 * V_1 = NULL;
	GrpcChannelProviderHostU5BU5D_t04402EFEBDCD691AE503FEAE40C7D8FC1B69406F* V_2 = NULL;
	int32_t V_3 = 0;
	GrpcChannelProviderHost_t0313060C8CEE5ECBBFEE81A54E13951CBFBF32D1 * V_4 = NULL;
	bool V_5 = false;
	{
		// foreach (var instance in GameObject.FindObjectsOfType<GrpcChannelProviderHost>())
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GrpcChannelProviderHostU5BU5D_t04402EFEBDCD691AE503FEAE40C7D8FC1B69406F* L_0;
		L_0 = Object_FindObjectsOfType_TisGrpcChannelProviderHost_t0313060C8CEE5ECBBFEE81A54E13951CBFBF32D1_m8E42EE3E0B55940E84A498B24A6C4A1074DE1580(/*hidden argument*/Object_FindObjectsOfType_TisGrpcChannelProviderHost_t0313060C8CEE5ECBBFEE81A54E13951CBFBF32D1_m8E42EE3E0B55940E84A498B24A6C4A1074DE1580_RuntimeMethod_var);
		V_2 = L_0;
		V_3 = 0;
		goto IL_0039;
	}

IL_000c:
	{
		// foreach (var instance in GameObject.FindObjectsOfType<GrpcChannelProviderHost>())
		GrpcChannelProviderHostU5BU5D_t04402EFEBDCD691AE503FEAE40C7D8FC1B69406F* L_1 = V_2;
		int32_t L_2 = V_3;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GrpcChannelProviderHost_t0313060C8CEE5ECBBFEE81A54E13951CBFBF32D1 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_4 = L_4;
		// if (instance.gameObject != null)
		GrpcChannelProviderHost_t0313060C8CEE5ECBBFEE81A54E13951CBFBF32D1 * L_5 = V_4;
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_5 = L_7;
		bool L_8 = V_5;
		if (!L_8)
		{
			goto IL_0034;
		}
	}
	{
		// GameObject.Destroy(instance.gameObject);
		GrpcChannelProviderHost_t0313060C8CEE5ECBBFEE81A54E13951CBFBF32D1 * L_9 = V_4;
		NullCheck(L_9);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_10, /*hidden argument*/NULL);
	}

IL_0034:
	{
		int32_t L_11 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0039:
	{
		// foreach (var instance in GameObject.FindObjectsOfType<GrpcChannelProviderHost>())
		int32_t L_12 = V_3;
		GrpcChannelProviderHostU5BU5D_t04402EFEBDCD691AE503FEAE40C7D8FC1B69406F* L_13 = V_2;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))))
		{
			goto IL_000c;
		}
	}
	{
		// var go = new GameObject("GrpcChannelProvider");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_14, _stringLiteral9CDFF5FACBA3A91A992AA2257A48EBAD9DF94C5C, /*hidden argument*/NULL);
		V_0 = L_14;
		// var providerHost = go.AddComponent<GrpcChannelProviderHost>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = V_0;
		NullCheck(L_15);
		GrpcChannelProviderHost_t0313060C8CEE5ECBBFEE81A54E13951CBFBF32D1 * L_16;
		L_16 = GameObject_AddComponent_TisGrpcChannelProviderHost_t0313060C8CEE5ECBBFEE81A54E13951CBFBF32D1_m6DE43A920BA07378472B76794A4F8DC79013745A(L_15, /*hidden argument*/GameObject_AddComponent_TisGrpcChannelProviderHost_t0313060C8CEE5ECBBFEE81A54E13951CBFBF32D1_m6DE43A920BA07378472B76794A4F8DC79013745A_RuntimeMethod_var);
		V_1 = L_16;
		// GameObject.DontDestroyOnLoad(go);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_17, /*hidden argument*/NULL);
		// providerHost.InitializeCore(provider);
		GrpcChannelProviderHost_t0313060C8CEE5ECBBFEE81A54E13951CBFBF32D1 * L_18 = V_1;
		RuntimeObject* L_19 = ___provider0;
		NullCheck(L_18);
		GrpcChannelProviderHost_InitializeCore_m3D7C4D0E94703477E9D5E66BE45321608F1A7789(L_18, L_19, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MagicOnion.Unity.GrpcChannelProviderHost::InitializeCore(MagicOnion.Unity.IGrpcChannelProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcChannelProviderHost_InitializeCore_m3D7C4D0E94703477E9D5E66BE45321608F1A7789 (GrpcChannelProviderHost_t0313060C8CEE5ECBBFEE81A54E13951CBFBF32D1 * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultGrpcChannelProvider_t2D7248106FDE928590569DFC42D33470219BE80B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	GrpcChannelProviderHost_t0313060C8CEE5ECBBFEE81A54E13951CBFBF32D1 * G_B2_1 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	GrpcChannelProviderHost_t0313060C8CEE5ECBBFEE81A54E13951CBFBF32D1 * G_B1_1 = NULL;
	{
		// Provider = provider ?? new DefaultGrpcChannelProvider();
		RuntimeObject* L_0 = ___provider0;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_000c;
		}
	}
	{
		DefaultGrpcChannelProvider_t2D7248106FDE928590569DFC42D33470219BE80B * L_2 = (DefaultGrpcChannelProvider_t2D7248106FDE928590569DFC42D33470219BE80B *)il2cpp_codegen_object_new(DefaultGrpcChannelProvider_t2D7248106FDE928590569DFC42D33470219BE80B_il2cpp_TypeInfo_var);
		DefaultGrpcChannelProvider__ctor_mD88A69BFE61395B0BB43BFC1944A6E2E2F330BC7(L_2, /*hidden argument*/NULL);
		G_B2_0 = ((RuntimeObject*)(L_2));
		G_B2_1 = G_B1_1;
	}

IL_000c:
	{
		NullCheck(G_B2_1);
		GrpcChannelProviderHost_set_Provider_m63C143840919A2FCF009C354665D5FC11C6B92EE_inline(G_B2_1, G_B2_0, /*hidden argument*/NULL);
		// GrpcChannelProvider.SetDefaultProvider(Provider);
		RuntimeObject* L_3;
		L_3 = GrpcChannelProviderHost_get_Provider_mF4E3EFE483EEB08B4BCB7281049A13041528A82F_inline(__this, /*hidden argument*/NULL);
		GrpcChannelProvider_SetDefaultProvider_m79BB9939CF19AF0D0531C2366AFE15AAA780A5A5(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MagicOnion.Unity.GrpcChannelProviderHost::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcChannelProviderHost_OnDestroy_mB706796DC34CDA2437360138D9BE362EA25E191A (GrpcChannelProviderHost_t0313060C8CEE5ECBBFEE81A54E13951CBFBF32D1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGrpcChannelProvider_t7828BBE4FBA5C81FF47F6F92407AFE7E70CD9102_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Provider.ShutdownAllChannels();
		RuntimeObject* L_0;
		L_0 = GrpcChannelProviderHost_get_Provider_mF4E3EFE483EEB08B4BCB7281049A13041528A82F_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void MagicOnion.Unity.IGrpcChannelProvider::ShutdownAllChannels() */, IGrpcChannelProvider_t7828BBE4FBA5C81FF47F6F92407AFE7E70CD9102_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void MagicOnion.Unity.GrpcChannelProviderHost::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcChannelProviderHost_OnApplicationQuit_mCDFD4F422213863EA0A5B55369621DE2A1B62CD3 (GrpcChannelProviderHost_t0313060C8CEE5ECBBFEE81A54E13951CBFBF32D1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGrpcChannelProvider_t7828BBE4FBA5C81FF47F6F92407AFE7E70CD9102_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Provider.ShutdownAllChannels();
		RuntimeObject* L_0;
		L_0 = GrpcChannelProviderHost_get_Provider_mF4E3EFE483EEB08B4BCB7281049A13041528A82F_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void MagicOnion.Unity.IGrpcChannelProvider::ShutdownAllChannels() */, IGrpcChannelProvider_t7828BBE4FBA5C81FF47F6F92407AFE7E70CD9102_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void MagicOnion.Unity.GrpcChannelProviderHost::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcChannelProviderHost__ctor_m5F8469F8E8B6A3AD1055F32B4FD29E2E06259740 (GrpcChannelProviderHost_t0313060C8CEE5ECBBFEE81A54E13951CBFBF32D1 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: MagicOnion.Unity.GrpcChannelTarget
IL2CPP_EXTERN_C void GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF_marshal_pinvoke(const GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF& unmarshaled, GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CHostU3Ek__BackingField_0 = il2cpp_codegen_marshal_string(unmarshaled.get_U3CHostU3Ek__BackingField_0());
	marshaled.___U3CPortU3Ek__BackingField_1 = unmarshaled.get_U3CPortU3Ek__BackingField_1();
	marshaled.___U3CIsInsecureU3Ek__BackingField_2 = static_cast<int32_t>(unmarshaled.get_U3CIsInsecureU3Ek__BackingField_2());
}
IL2CPP_EXTERN_C void GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF_marshal_pinvoke_back(const GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF_marshaled_pinvoke& marshaled, GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF& unmarshaled)
{
	unmarshaled.set_U3CHostU3Ek__BackingField_0(il2cpp_codegen_marshal_string_result(marshaled.___U3CHostU3Ek__BackingField_0));
	int32_t unmarshaled_U3CPortU3Ek__BackingField_temp_1 = 0;
	unmarshaled_U3CPortU3Ek__BackingField_temp_1 = marshaled.___U3CPortU3Ek__BackingField_1;
	unmarshaled.set_U3CPortU3Ek__BackingField_1(unmarshaled_U3CPortU3Ek__BackingField_temp_1);
	bool unmarshaled_U3CIsInsecureU3Ek__BackingField_temp_2 = false;
	unmarshaled_U3CIsInsecureU3Ek__BackingField_temp_2 = static_cast<bool>(marshaled.___U3CIsInsecureU3Ek__BackingField_2);
	unmarshaled.set_U3CIsInsecureU3Ek__BackingField_2(unmarshaled_U3CIsInsecureU3Ek__BackingField_temp_2);
}
// Conversion method for clean up from marshalling of: MagicOnion.Unity.GrpcChannelTarget
IL2CPP_EXTERN_C void GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF_marshal_pinvoke_cleanup(GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___U3CHostU3Ek__BackingField_0);
	marshaled.___U3CHostU3Ek__BackingField_0 = NULL;
}
// Conversion methods for marshalling of: MagicOnion.Unity.GrpcChannelTarget
IL2CPP_EXTERN_C void GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF_marshal_com(const GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF& unmarshaled, GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF_marshaled_com& marshaled)
{
	marshaled.___U3CHostU3Ek__BackingField_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_U3CHostU3Ek__BackingField_0());
	marshaled.___U3CPortU3Ek__BackingField_1 = unmarshaled.get_U3CPortU3Ek__BackingField_1();
	marshaled.___U3CIsInsecureU3Ek__BackingField_2 = static_cast<int32_t>(unmarshaled.get_U3CIsInsecureU3Ek__BackingField_2());
}
IL2CPP_EXTERN_C void GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF_marshal_com_back(const GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF_marshaled_com& marshaled, GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF& unmarshaled)
{
	unmarshaled.set_U3CHostU3Ek__BackingField_0(il2cpp_codegen_marshal_bstring_result(marshaled.___U3CHostU3Ek__BackingField_0));
	int32_t unmarshaled_U3CPortU3Ek__BackingField_temp_1 = 0;
	unmarshaled_U3CPortU3Ek__BackingField_temp_1 = marshaled.___U3CPortU3Ek__BackingField_1;
	unmarshaled.set_U3CPortU3Ek__BackingField_1(unmarshaled_U3CPortU3Ek__BackingField_temp_1);
	bool unmarshaled_U3CIsInsecureU3Ek__BackingField_temp_2 = false;
	unmarshaled_U3CIsInsecureU3Ek__BackingField_temp_2 = static_cast<bool>(marshaled.___U3CIsInsecureU3Ek__BackingField_2);
	unmarshaled.set_U3CIsInsecureU3Ek__BackingField_2(unmarshaled_U3CIsInsecureU3Ek__BackingField_temp_2);
}
// Conversion method for clean up from marshalling of: MagicOnion.Unity.GrpcChannelTarget
IL2CPP_EXTERN_C void GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF_marshal_com_cleanup(GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CHostU3Ek__BackingField_0);
	marshaled.___U3CHostU3Ek__BackingField_0 = NULL;
}
// System.String MagicOnion.Unity.GrpcChannelTarget::get_Host()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GrpcChannelTarget_get_Host_m57BC6648F51844808220DA8B4C198C0B958C8A20 (GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF * __this, const RuntimeMethod* method)
{
	{
		// public string Host { get; }
		String_t* L_0 = __this->get_U3CHostU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* GrpcChannelTarget_get_Host_m57BC6648F51844808220DA8B4C198C0B958C8A20_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF * _thisAdjusted = reinterpret_cast<GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = GrpcChannelTarget_get_Host_m57BC6648F51844808220DA8B4C198C0B958C8A20_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 MagicOnion.Unity.GrpcChannelTarget::get_Port()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GrpcChannelTarget_get_Port_m3CB87BD3C76EC8030761713704B8A373D7283BEB (GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF * __this, const RuntimeMethod* method)
{
	{
		// public int Port { get; }
		int32_t L_0 = __this->get_U3CPortU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t GrpcChannelTarget_get_Port_m3CB87BD3C76EC8030761713704B8A373D7283BEB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF * _thisAdjusted = reinterpret_cast<GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = GrpcChannelTarget_get_Port_m3CB87BD3C76EC8030761713704B8A373D7283BEB_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean MagicOnion.Unity.GrpcChannelTarget::get_IsInsecure()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GrpcChannelTarget_get_IsInsecure_mBE46F213D425E033774E0A5F16A7053F1187041F (GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF * __this, const RuntimeMethod* method)
{
	{
		// public bool IsInsecure { get; }
		bool L_0 = __this->get_U3CIsInsecureU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool GrpcChannelTarget_get_IsInsecure_mBE46F213D425E033774E0A5F16A7053F1187041F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF * _thisAdjusted = reinterpret_cast<GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF *>(__this + _offset);
	bool _returnValue;
	_returnValue = GrpcChannelTarget_get_IsInsecure_mBE46F213D425E033774E0A5F16A7053F1187041F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void MagicOnion.Unity.GrpcChannelTarget::.ctor(System.String,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcChannelTarget__ctor_m089D35CA51C0D731334FFC93FC0FCBBFE45B2D80 (GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF * __this, String_t* ___host0, int32_t ___port1, bool ___isInsecure2, const RuntimeMethod* method)
{
	{
		// Host = host;
		String_t* L_0 = ___host0;
		__this->set_U3CHostU3Ek__BackingField_0(L_0);
		// Port = port;
		int32_t L_1 = ___port1;
		__this->set_U3CPortU3Ek__BackingField_1(L_1);
		// IsInsecure = isInsecure;
		bool L_2 = ___isInsecure2;
		__this->set_U3CIsInsecureU3Ek__BackingField_2(L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void GrpcChannelTarget__ctor_m089D35CA51C0D731334FFC93FC0FCBBFE45B2D80_AdjustorThunk (RuntimeObject * __this, String_t* ___host0, int32_t ___port1, bool ___isInsecure2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF * _thisAdjusted = reinterpret_cast<GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF *>(__this + _offset);
	GrpcChannelTarget__ctor_m089D35CA51C0D731334FFC93FC0FCBBFE45B2D80(_thisAdjusted, ___host0, ___port1, ___isInsecure2, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Uri MagicOnion.GrpcChannelx::get_TargetUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * GrpcChannelx_get_TargetUri_m829529E4ABA37733226B8AD4D17FAABB92919BE9 (GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * __this, const RuntimeMethod* method)
{
	{
		// public Uri TargetUri { get; }
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_0 = __this->get_U3CTargetUriU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Int32 MagicOnion.GrpcChannelx::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GrpcChannelx_get_Id_m64141C20B4724EEC34817EA703AA9892701CE84C (GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * __this, const RuntimeMethod* method)
{
	{
		// public int Id { get; }
		int32_t L_0 = __this->get_U3CIdU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void MagicOnion.GrpcChannelx::.ctor(System.Int32,System.Action`1<MagicOnion.GrpcChannelx>,Grpc.Core.ChannelBase,System.Uri,MagicOnion.Unity.GrpcChannelOptionsBag)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcChannelx__ctor_mE05D6635A710232D65B1661797CF60DE02AC5446 (GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * __this, int32_t ___id0, Action_1_t549C5EF27D2CC5AD07CBB9088B404BF46A678163 * ___onDispose1, ChannelBase_t27741E6D85E1E4064949B777B040D975F3D400A9 * ___channel2, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___targetUri3, GrpcChannelOptionsBag_t3A8A75BF4444B4683CCE7492D71C0E82275A62DF * ___channelOptions4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m233C615AA249E0E68A2C7E804958E303BFF6C59B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<IStreamingHubMarker, (Func<Task> DisposeAsync, ManagedStreamingHubInfo StreamingHubInfo)> _streamingHubs = new Dictionary<IStreamingHubMarker, (Func<Task>, ManagedStreamingHubInfo)>();
		Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320 * L_0 = (Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320 *)il2cpp_codegen_object_new(Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m233C615AA249E0E68A2C7E804958E303BFF6C59B(L_0, /*hidden argument*/Dictionary_2__ctor_m233C615AA249E0E68A2C7E804958E303BFF6C59B_RuntimeMethod_var);
		__this->set__streamingHubs_2(L_0);
		// : base(targetUri.ToString())
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_1 = ___targetUri3;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		ChannelBase__ctor_m98321E935004E85838C8632F6F3C474C21077EF1(__this, L_2, /*hidden argument*/NULL);
		// Id = id;
		int32_t L_3 = ___id0;
		__this->set_U3CIdU3Ek__BackingField_6(L_3);
		// TargetUri = targetUri;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_4 = ___targetUri3;
		__this->set_U3CTargetUriU3Ek__BackingField_5(L_4);
		// _onDispose = onDispose;
		Action_1_t549C5EF27D2CC5AD07CBB9088B404BF46A678163 * L_5 = ___onDispose1;
		__this->set__onDispose_1(L_5);
		// _channel = channel;
		ChannelBase_t27741E6D85E1E4064949B777B040D975F3D400A9 * L_6 = ___channel2;
		__this->set__channel_3(L_6);
		// _disposed = false;
		__this->set__disposed_4((bool)0);
		// }
		return;
	}
}
// MagicOnion.GrpcChannelx MagicOnion.GrpcChannelx::FromTarget(MagicOnion.Unity.GrpcChannelTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * GrpcChannelx_FromTarget_mD0A7136A488A68DADAF749E06970D4BFFCC431E9 (GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF  ___target0, const RuntimeMethod* method)
{
	{
		// => GrpcChannelProvider.Default.CreateChannel(target);
		RuntimeObject* L_0;
		L_0 = GrpcChannelProvider_get_Default_m58E560AA52B3BBA0E64F3398A7DC4D01A119172E(/*hidden argument*/NULL);
		GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF  L_1 = ___target0;
		GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * L_2;
		L_2 = GrpcChannelProviderExtensions_CreateChannel_mB116D4FD106BD5DC463E2B77051DF207D2A29138(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// MagicOnion.GrpcChannelx MagicOnion.GrpcChannelx::FromAddress(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * GrpcChannelx_FromAddress_m5DF80DA98D684867780E55D8912CC2277C8D5306 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58B716FF5428F7961E1403E6D969E605D0F27EAF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => GrpcChannelProvider.Default.CreateChannel(new GrpcChannelTarget(target.Host, target.Port, target.Scheme == "http"));
		RuntimeObject* L_0;
		L_0 = GrpcChannelProvider_get_Default_m58E560AA52B3BBA0E64F3398A7DC4D01A119172E(/*hidden argument*/NULL);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_1 = ___target0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Uri_get_Host_m05E1D82C4E6B14A2369AEDED218F9089DE336E64(L_1, /*hidden argument*/NULL);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_3 = ___target0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Uri_get_Port_m23A08BF55EC1DC7421B99E6E77544DDF5900099C(L_3, /*hidden argument*/NULL);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_5 = ___target0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Uri_get_Scheme_mEC4980E1C82DE3963007E33C759742A02A26FF29(L_5, /*hidden argument*/NULL);
		bool L_7;
		L_7 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_6, _stringLiteral58B716FF5428F7961E1403E6D969E605D0F27EAF, /*hidden argument*/NULL);
		GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF  L_8;
		memset((&L_8), 0, sizeof(L_8));
		GrpcChannelTarget__ctor_m089D35CA51C0D731334FFC93FC0FCBBFE45B2D80((&L_8), L_2, L_4, L_7, /*hidden argument*/NULL);
		GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * L_9;
		L_9 = GrpcChannelProviderExtensions_CreateChannel_mB116D4FD106BD5DC463E2B77051DF207D2A29138(L_0, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// MagicOnion.GrpcChannelx MagicOnion.GrpcChannelx::ForTarget(MagicOnion.Unity.GrpcChannelTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * GrpcChannelx_ForTarget_m178D718634D99B71D8C6A1A9DB5512B48331E0BF (GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF  ___target0, const RuntimeMethod* method)
{
	{
		// => GrpcChannelProvider.Default.CreateChannel(target);
		RuntimeObject* L_0;
		L_0 = GrpcChannelProvider_get_Default_m58E560AA52B3BBA0E64F3398A7DC4D01A119172E(/*hidden argument*/NULL);
		GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF  L_1 = ___target0;
		GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * L_2;
		L_2 = GrpcChannelProviderExtensions_CreateChannel_mB116D4FD106BD5DC463E2B77051DF207D2A29138(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// MagicOnion.GrpcChannelx MagicOnion.GrpcChannelx::ForAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * GrpcChannelx_ForAddress_mA344581FF8A477629BAFDF20D78EE2430002CE05 (String_t* ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => ForAddress(new Uri(target));
		String_t* L_0 = ___target0;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_1 = (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)il2cpp_codegen_object_new(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		Uri__ctor_m7724F43B1525624FFF97A774B6B909B075714D5C(L_1, L_0, /*hidden argument*/NULL);
		GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * L_2;
		L_2 = GrpcChannelx_ForAddress_m4F6E5D49CACC040B9042557353676893D51ADD4D(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// MagicOnion.GrpcChannelx MagicOnion.GrpcChannelx::ForAddress(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * GrpcChannelx_ForAddress_m4F6E5D49CACC040B9042557353676893D51ADD4D (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58B716FF5428F7961E1403E6D969E605D0F27EAF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => GrpcChannelProvider.Default.CreateChannel(new GrpcChannelTarget(target.Host, target.Port, target.Scheme == "http"));
		RuntimeObject* L_0;
		L_0 = GrpcChannelProvider_get_Default_m58E560AA52B3BBA0E64F3398A7DC4D01A119172E(/*hidden argument*/NULL);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_1 = ___target0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Uri_get_Host_m05E1D82C4E6B14A2369AEDED218F9089DE336E64(L_1, /*hidden argument*/NULL);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_3 = ___target0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Uri_get_Port_m23A08BF55EC1DC7421B99E6E77544DDF5900099C(L_3, /*hidden argument*/NULL);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_5 = ___target0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Uri_get_Scheme_mEC4980E1C82DE3963007E33C759742A02A26FF29(L_5, /*hidden argument*/NULL);
		bool L_7;
		L_7 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_6, _stringLiteral58B716FF5428F7961E1403E6D969E605D0F27EAF, /*hidden argument*/NULL);
		GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF  L_8;
		memset((&L_8), 0, sizeof(L_8));
		GrpcChannelTarget__ctor_m089D35CA51C0D731334FFC93FC0FCBBFE45B2D80((&L_8), L_2, L_4, L_7, /*hidden argument*/NULL);
		GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * L_9;
		L_9 = GrpcChannelProviderExtensions_CreateChannel_mB116D4FD106BD5DC463E2B77051DF207D2A29138(L_0, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// Grpc.Core.CallInvoker MagicOnion.GrpcChannelx::CreateCallInvoker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CallInvoker_t6099D93DBBF44A7447258DAA16C8D0ED76D7DDDE * GrpcChannelx_CreateCallInvoker_mB277F70FCCCB553483D0F332E485E80AC781690A (GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * __this, const RuntimeMethod* method)
{
	CallInvoker_t6099D93DBBF44A7447258DAA16C8D0ED76D7DDDE * V_0 = NULL;
	{
		// ThrowIfDisposed();
		GrpcChannelx_ThrowIfDisposed_m513418AFDA0396E0639F4ED4C526272CE3132759(__this, /*hidden argument*/NULL);
		// return _channel.CreateCallInvoker();
		ChannelBase_t27741E6D85E1E4064949B777B040D975F3D400A9 * L_0 = __this->get__channel_3();
		NullCheck(L_0);
		CallInvoker_t6099D93DBBF44A7447258DAA16C8D0ED76D7DDDE * L_1;
		L_1 = VirtFuncInvoker0< CallInvoker_t6099D93DBBF44A7447258DAA16C8D0ED76D7DDDE * >::Invoke(4 /* Grpc.Core.CallInvoker Grpc.Core.ChannelBase::CreateCallInvoker() */, L_0);
		V_0 = L_1;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		CallInvoker_t6099D93DBBF44A7447258DAA16C8D0ED76D7DDDE * L_2 = V_0;
		return L_2;
	}
}
// System.Threading.Tasks.Task MagicOnion.GrpcChannelx::ShutdownAsyncCore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * GrpcChannelx_ShutdownAsyncCore_mF7C346ED32E248D41BDBF2DF0A21ADA5C47C3482 (GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CShutdownAsyncCoreU3Ed__17_tBAF5B09E5D61F137535A7FD3283E8A265F211FBC_m6F69FAA1F1247A5E281D8BF53135B28154FCBDC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CShutdownAsyncCoreU3Ed__17_tBAF5B09E5D61F137535A7FD3283E8A265F211FBC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CShutdownAsyncCoreU3Ed__17_tBAF5B09E5D61F137535A7FD3283E8A265F211FBC * V_0 = NULL;
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		U3CShutdownAsyncCoreU3Ed__17_tBAF5B09E5D61F137535A7FD3283E8A265F211FBC * L_0 = (U3CShutdownAsyncCoreU3Ed__17_tBAF5B09E5D61F137535A7FD3283E8A265F211FBC *)il2cpp_codegen_object_new(U3CShutdownAsyncCoreU3Ed__17_tBAF5B09E5D61F137535A7FD3283E8A265F211FBC_il2cpp_TypeInfo_var);
		U3CShutdownAsyncCoreU3Ed__17__ctor_mFA2935FEB7524E768C2FB389EB9EECB6DFB5D804(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CShutdownAsyncCoreU3Ed__17_tBAF5B09E5D61F137535A7FD3283E8A265F211FBC * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CShutdownAsyncCoreU3Ed__17_tBAF5B09E5D61F137535A7FD3283E8A265F211FBC * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_3;
		L_3 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_U3CU3Et__builder_1(L_3);
		U3CShutdownAsyncCoreU3Ed__17_tBAF5B09E5D61F137535A7FD3283E8A265F211FBC * L_4 = V_0;
		NullCheck(L_4);
		L_4->set_U3CU3E1__state_0((-1));
		U3CShutdownAsyncCoreU3Ed__17_tBAF5B09E5D61F137535A7FD3283E8A265F211FBC * L_5 = V_0;
		NullCheck(L_5);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_6 = L_5->get_U3CU3Et__builder_1();
		V_1 = L_6;
		AsyncTaskMethodBuilder_Start_TisU3CShutdownAsyncCoreU3Ed__17_tBAF5B09E5D61F137535A7FD3283E8A265F211FBC_m6F69FAA1F1247A5E281D8BF53135B28154FCBDC2((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CShutdownAsyncCoreU3Ed__17_tBAF5B09E5D61F137535A7FD3283E8A265F211FBC **)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CShutdownAsyncCoreU3Ed__17_tBAF5B09E5D61F137535A7FD3283E8A265F211FBC_m6F69FAA1F1247A5E281D8BF53135B28154FCBDC2_RuntimeMethod_var);
		U3CShutdownAsyncCoreU3Ed__17_tBAF5B09E5D61F137535A7FD3283E8A265F211FBC * L_7 = V_0;
		NullCheck(L_7);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_8 = L_7->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_9;
		L_9 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Threading.Tasks.Task MagicOnion.GrpcChannelx::ConnectAsync(System.Nullable`1<System.DateTime>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * GrpcChannelx_ConnectAsync_mAE981232CE59408C32E24CA29929DEEBA5880815 (GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * __this, Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  ___deadline0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CConnectAsyncU3Ed__18_tA12E5FCEA1EEE4814A0B579677FA716E4FAD210E_mE7FC36CE0985A0B7547147D29E9FA8E002B7E377_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CConnectAsyncU3Ed__18_tA12E5FCEA1EEE4814A0B579677FA716E4FAD210E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CConnectAsyncU3Ed__18_tA12E5FCEA1EEE4814A0B579677FA716E4FAD210E * V_0 = NULL;
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		U3CConnectAsyncU3Ed__18_tA12E5FCEA1EEE4814A0B579677FA716E4FAD210E * L_0 = (U3CConnectAsyncU3Ed__18_tA12E5FCEA1EEE4814A0B579677FA716E4FAD210E *)il2cpp_codegen_object_new(U3CConnectAsyncU3Ed__18_tA12E5FCEA1EEE4814A0B579677FA716E4FAD210E_il2cpp_TypeInfo_var);
		U3CConnectAsyncU3Ed__18__ctor_mA57258CA4A63123550D2FD8A81AD6FBF06FB259D(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CConnectAsyncU3Ed__18_tA12E5FCEA1EEE4814A0B579677FA716E4FAD210E * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		U3CConnectAsyncU3Ed__18_tA12E5FCEA1EEE4814A0B579677FA716E4FAD210E * L_2 = V_0;
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_3 = ___deadline0;
		NullCheck(L_2);
		L_2->set_deadline_2(L_3);
		U3CConnectAsyncU3Ed__18_tA12E5FCEA1EEE4814A0B579677FA716E4FAD210E * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_5;
		L_5 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		NullCheck(L_4);
		L_4->set_U3CU3Et__builder_1(L_5);
		U3CConnectAsyncU3Ed__18_tA12E5FCEA1EEE4814A0B579677FA716E4FAD210E * L_6 = V_0;
		NullCheck(L_6);
		L_6->set_U3CU3E1__state_0((-1));
		U3CConnectAsyncU3Ed__18_tA12E5FCEA1EEE4814A0B579677FA716E4FAD210E * L_7 = V_0;
		NullCheck(L_7);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_8 = L_7->get_U3CU3Et__builder_1();
		V_1 = L_8;
		AsyncTaskMethodBuilder_Start_TisU3CConnectAsyncU3Ed__18_tA12E5FCEA1EEE4814A0B579677FA716E4FAD210E_mE7FC36CE0985A0B7547147D29E9FA8E002B7E377((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CConnectAsyncU3Ed__18_tA12E5FCEA1EEE4814A0B579677FA716E4FAD210E **)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CConnectAsyncU3Ed__18_tA12E5FCEA1EEE4814A0B579677FA716E4FAD210E_mE7FC36CE0985A0B7547147D29E9FA8E002B7E377_RuntimeMethod_var);
		U3CConnectAsyncU3Ed__18_tA12E5FCEA1EEE4814A0B579677FA716E4FAD210E * L_9 = V_0;
		NullCheck(L_9);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_10 = L_9->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_11;
		L_11 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Collections.Generic.IReadOnlyCollection`1<MagicOnion.Client.ManagedStreamingHubInfo> MagicOnion.GrpcChannelx::MagicOnion.Client.IMagicOnionAwareGrpcChannel.GetAllManagedStreamingHubs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GrpcChannelx_MagicOnion_Client_IMagicOnionAwareGrpcChannel_GetAllManagedStreamingHubs_m92264EBFD336078E0983E5BE7B4F1134A1BC96E8 (GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_mDB2C1B853120B66845AEEFC5923F73915B46E51F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisValueTuple_2_tE0C83C359BD973BE064EB7B4E773F729D96E402F_TisManagedStreamingHubInfo_t91C1EAA9634FD4ED4B632E2F3C8CF2C8CE35F7F6_mB924CA443EEF56CF1AFE07904BBAC6E4C03C00E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisManagedStreamingHubInfo_t91C1EAA9634FD4ED4B632E2F3C8CF2C8CE35F7F6_mACADBEA015DCE3EF334A028707C0453EA1984558_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mEAC4B87A088935F2D792210E0AC61027D750B3FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t69A7D283CF5BDCF8AA89902CBF7815EFE642BE1A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CMagicOnion_Client_IMagicOnionAwareGrpcChannel_GetAllManagedStreamingHubsU3Eb__19_0_m6628F1EDE033656F05F0B50188CF473E5AEF6AE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t59C109BC2B57707046109D174D3A4687AE219B3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320 * V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	Func_2_t69A7D283CF5BDCF8AA89902CBF7815EFE642BE1A * G_B3_0 = NULL;
	ValueCollection_t5FBDC3A11EBA3DF0B49FB642D9832CD1EF305B16 * G_B3_1 = NULL;
	Func_2_t69A7D283CF5BDCF8AA89902CBF7815EFE642BE1A * G_B2_0 = NULL;
	ValueCollection_t5FBDC3A11EBA3DF0B49FB642D9832CD1EF305B16 * G_B2_1 = NULL;
	{
		// lock (_streamingHubs)
		Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320 * L_0 = __this->get__streamingHubs_2();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		{
			Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320 * L_1 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
			// return _streamingHubs.Values.Select(x => x.StreamingHubInfo).ToArray();
			Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320 * L_2 = __this->get__streamingHubs_2();
			NullCheck(L_2);
			ValueCollection_t5FBDC3A11EBA3DF0B49FB642D9832CD1EF305B16 * L_3;
			L_3 = Dictionary_2_get_Values_mDB2C1B853120B66845AEEFC5923F73915B46E51F(L_2, /*hidden argument*/Dictionary_2_get_Values_mDB2C1B853120B66845AEEFC5923F73915B46E51F_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t59C109BC2B57707046109D174D3A4687AE219B3E_il2cpp_TypeInfo_var);
			Func_2_t69A7D283CF5BDCF8AA89902CBF7815EFE642BE1A * L_4 = ((U3CU3Ec_t59C109BC2B57707046109D174D3A4687AE219B3E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t59C109BC2B57707046109D174D3A4687AE219B3E_il2cpp_TypeInfo_var))->get_U3CU3E9__19_0_1();
			Func_2_t69A7D283CF5BDCF8AA89902CBF7815EFE642BE1A * L_5 = L_4;
			G_B2_0 = L_5;
			G_B2_1 = L_3;
			if (L_5)
			{
				G_B3_0 = L_5;
				G_B3_1 = L_3;
				goto IL_003e;
			}
		}

IL_0027:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t59C109BC2B57707046109D174D3A4687AE219B3E_il2cpp_TypeInfo_var);
			U3CU3Ec_t59C109BC2B57707046109D174D3A4687AE219B3E * L_6 = ((U3CU3Ec_t59C109BC2B57707046109D174D3A4687AE219B3E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t59C109BC2B57707046109D174D3A4687AE219B3E_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			Func_2_t69A7D283CF5BDCF8AA89902CBF7815EFE642BE1A * L_7 = (Func_2_t69A7D283CF5BDCF8AA89902CBF7815EFE642BE1A *)il2cpp_codegen_object_new(Func_2_t69A7D283CF5BDCF8AA89902CBF7815EFE642BE1A_il2cpp_TypeInfo_var);
			Func_2__ctor_mEAC4B87A088935F2D792210E0AC61027D750B3FF(L_7, L_6, (intptr_t)((intptr_t)U3CU3Ec_U3CMagicOnion_Client_IMagicOnionAwareGrpcChannel_GetAllManagedStreamingHubsU3Eb__19_0_m6628F1EDE033656F05F0B50188CF473E5AEF6AE7_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mEAC4B87A088935F2D792210E0AC61027D750B3FF_RuntimeMethod_var);
			Func_2_t69A7D283CF5BDCF8AA89902CBF7815EFE642BE1A * L_8 = L_7;
			((U3CU3Ec_t59C109BC2B57707046109D174D3A4687AE219B3E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t59C109BC2B57707046109D174D3A4687AE219B3E_il2cpp_TypeInfo_var))->set_U3CU3E9__19_0_1(L_8);
			G_B3_0 = L_8;
			G_B3_1 = G_B2_1;
		}

IL_003e:
		{
			RuntimeObject* L_9;
			L_9 = Enumerable_Select_TisValueTuple_2_tE0C83C359BD973BE064EB7B4E773F729D96E402F_TisManagedStreamingHubInfo_t91C1EAA9634FD4ED4B632E2F3C8CF2C8CE35F7F6_mB924CA443EEF56CF1AFE07904BBAC6E4C03C00E5(G_B3_1, G_B3_0, /*hidden argument*/Enumerable_Select_TisValueTuple_2_tE0C83C359BD973BE064EB7B4E773F729D96E402F_TisManagedStreamingHubInfo_t91C1EAA9634FD4ED4B632E2F3C8CF2C8CE35F7F6_mB924CA443EEF56CF1AFE07904BBAC6E4C03C00E5_RuntimeMethod_var);
			ManagedStreamingHubInfoU5BU5D_t9FDC45281B6E147C92DD1BDBD6C7AE50829A6264* L_10;
			L_10 = Enumerable_ToArray_TisManagedStreamingHubInfo_t91C1EAA9634FD4ED4B632E2F3C8CF2C8CE35F7F6_mACADBEA015DCE3EF334A028707C0453EA1984558(L_9, /*hidden argument*/Enumerable_ToArray_TisManagedStreamingHubInfo_t91C1EAA9634FD4ED4B632E2F3C8CF2C8CE35F7F6_mACADBEA015DCE3EF334A028707C0453EA1984558_RuntimeMethod_var);
			V_2 = (RuntimeObject*)L_10;
			IL2CPP_LEAVE(0x56, FINALLY_004b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004b;
	}

FINALLY_004b:
	{ // begin finally (depth: 1)
		{
			bool L_11 = V_1;
			if (!L_11)
			{
				goto IL_0055;
			}
		}

IL_004e:
		{
			Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320 * L_12 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_12, /*hidden argument*/NULL);
		}

IL_0055:
		{
			IL2CPP_END_FINALLY(75)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(75)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x56, IL_0056)
	}

IL_0056:
	{
		// }
		RuntimeObject* L_13 = V_2;
		return L_13;
	}
}
// System.Void MagicOnion.GrpcChannelx::MagicOnion.Client.IMagicOnionAwareGrpcChannel.ManageStreamingHubClient(System.Type,MagicOnion.IStreamingHubMarker,System.Func`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcChannelx_MagicOnion_Client_IMagicOnionAwareGrpcChannel_ManageStreamingHubClient_mE7D575430153F29325B6BC108980CC0BF85DD608 (GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * __this, Type_t * ___streamingHubType0, RuntimeObject* ___streamingHub1, Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * ___disposeAsync2, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___waitForDisconnect3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m3B933D9EAE846AE5EC81E5A2D69CE8E65067B634_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_mEB94A84DBAD23765C0BA082A2F16B0D49DCF66FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320 * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (_streamingHubs)
		Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320 * L_0 = __this->get__streamingHubs_2();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320 * L_1 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
		// _streamingHubs.Add(streamingHub, (disposeAsync, new ManagedStreamingHubInfo(streamingHubType, streamingHub)));
		Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320 * L_2 = __this->get__streamingHubs_2();
		RuntimeObject* L_3 = ___streamingHub1;
		Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * L_4 = ___disposeAsync2;
		Type_t * L_5 = ___streamingHubType0;
		RuntimeObject* L_6 = ___streamingHub1;
		ManagedStreamingHubInfo_t91C1EAA9634FD4ED4B632E2F3C8CF2C8CE35F7F6  L_7;
		memset((&L_7), 0, sizeof(L_7));
		ManagedStreamingHubInfo__ctor_m73C0D89E2AE04C619D52DBF487FAD397B7ABA399((&L_7), L_5, L_6, /*hidden argument*/NULL);
		ValueTuple_2_tE0C83C359BD973BE064EB7B4E773F729D96E402F  L_8;
		memset((&L_8), 0, sizeof(L_8));
		ValueTuple_2__ctor_mEB94A84DBAD23765C0BA082A2F16B0D49DCF66FE((&L_8), L_4, L_7, /*hidden argument*/ValueTuple_2__ctor_mEB94A84DBAD23765C0BA082A2F16B0D49DCF66FE_RuntimeMethod_var);
		NullCheck(L_2);
		Dictionary_2_Add_m3B933D9EAE846AE5EC81E5A2D69CE8E65067B634(L_2, L_3, L_8, /*hidden argument*/Dictionary_2_Add_m3B933D9EAE846AE5EC81E5A2D69CE8E65067B634_RuntimeMethod_var);
		// Forget(WaitForDisconnectAndDisposeAsync(streamingHub, waitForDisconnect));
		RuntimeObject* L_9 = ___streamingHub1;
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_10 = ___waitForDisconnect3;
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_11;
		L_11 = GrpcChannelx_WaitForDisconnectAndDisposeAsync_m26868C1A8CEA7CA30C7EC7164F49ECE65D8D2A65(__this, L_9, L_10, /*hidden argument*/NULL);
		GrpcChannelx_Forget_mF5CB58949675F6C40B49C0DD887B0D1A1E699B84(L_11, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x4B, FINALLY_0040);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		{
			bool L_12 = V_1;
			if (!L_12)
			{
				goto IL_004a;
			}
		}

IL_0043:
		{
			Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320 * L_13 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_13, /*hidden argument*/NULL);
		}

IL_004a:
		{
			IL2CPP_END_FINALLY(64)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4B, IL_004b)
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Threading.Tasks.Task MagicOnion.GrpcChannelx::WaitForDisconnectAndDisposeAsync(MagicOnion.IStreamingHubMarker,System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * GrpcChannelx_WaitForDisconnectAndDisposeAsync_m26868C1A8CEA7CA30C7EC7164F49ECE65D8D2A65 (GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * __this, RuntimeObject* ___streamingHub0, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___waitForDisconnect1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CWaitForDisconnectAndDisposeAsyncU3Ed__21_t280549BD508F1BB867F4F32346F4B9D9A2D41C68_mAE74B003557CF07AA8A48AB849ADB49C149B3F94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitForDisconnectAndDisposeAsyncU3Ed__21_t280549BD508F1BB867F4F32346F4B9D9A2D41C68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CWaitForDisconnectAndDisposeAsyncU3Ed__21_t280549BD508F1BB867F4F32346F4B9D9A2D41C68 * V_0 = NULL;
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		U3CWaitForDisconnectAndDisposeAsyncU3Ed__21_t280549BD508F1BB867F4F32346F4B9D9A2D41C68 * L_0 = (U3CWaitForDisconnectAndDisposeAsyncU3Ed__21_t280549BD508F1BB867F4F32346F4B9D9A2D41C68 *)il2cpp_codegen_object_new(U3CWaitForDisconnectAndDisposeAsyncU3Ed__21_t280549BD508F1BB867F4F32346F4B9D9A2D41C68_il2cpp_TypeInfo_var);
		U3CWaitForDisconnectAndDisposeAsyncU3Ed__21__ctor_m3A2120FEB41C9737665E2F04AAC23384286FD8BE(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CWaitForDisconnectAndDisposeAsyncU3Ed__21_t280549BD508F1BB867F4F32346F4B9D9A2D41C68 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_4(__this);
		U3CWaitForDisconnectAndDisposeAsyncU3Ed__21_t280549BD508F1BB867F4F32346F4B9D9A2D41C68 * L_2 = V_0;
		RuntimeObject* L_3 = ___streamingHub0;
		NullCheck(L_2);
		L_2->set_streamingHub_2(L_3);
		U3CWaitForDisconnectAndDisposeAsyncU3Ed__21_t280549BD508F1BB867F4F32346F4B9D9A2D41C68 * L_4 = V_0;
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_5 = ___waitForDisconnect1;
		NullCheck(L_4);
		L_4->set_waitForDisconnect_3(L_5);
		U3CWaitForDisconnectAndDisposeAsyncU3Ed__21_t280549BD508F1BB867F4F32346F4B9D9A2D41C68 * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_7;
		L_7 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->set_U3CU3Et__builder_1(L_7);
		U3CWaitForDisconnectAndDisposeAsyncU3Ed__21_t280549BD508F1BB867F4F32346F4B9D9A2D41C68 * L_8 = V_0;
		NullCheck(L_8);
		L_8->set_U3CU3E1__state_0((-1));
		U3CWaitForDisconnectAndDisposeAsyncU3Ed__21_t280549BD508F1BB867F4F32346F4B9D9A2D41C68 * L_9 = V_0;
		NullCheck(L_9);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_10 = L_9->get_U3CU3Et__builder_1();
		V_1 = L_10;
		AsyncTaskMethodBuilder_Start_TisU3CWaitForDisconnectAndDisposeAsyncU3Ed__21_t280549BD508F1BB867F4F32346F4B9D9A2D41C68_mAE74B003557CF07AA8A48AB849ADB49C149B3F94((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CWaitForDisconnectAndDisposeAsyncU3Ed__21_t280549BD508F1BB867F4F32346F4B9D9A2D41C68 **)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CWaitForDisconnectAndDisposeAsyncU3Ed__21_t280549BD508F1BB867F4F32346F4B9D9A2D41C68_mAE74B003557CF07AA8A48AB849ADB49C149B3F94_RuntimeMethod_var);
		U3CWaitForDisconnectAndDisposeAsyncU3Ed__21_t280549BD508F1BB867F4F32346F4B9D9A2D41C68 * L_11 = V_0;
		NullCheck(L_11);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_12 = L_11->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_13;
		L_13 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// System.Void MagicOnion.GrpcChannelx::DisposeStreamingHubClient(MagicOnion.IStreamingHubMarker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcChannelx_DisposeStreamingHubClient_mD2F120ADAC3E492C6F9F2814AAE820E3F066AE60 (GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * __this, RuntimeObject* ___streamingHub0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m54F43F31867279CCBF98954FED5D0610C1188F3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mB7EE6F62BD86CCE767484A13AAA7178468BAC42D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_m3B5AC943F23CE7225ACF20C2B4B5E2D3FF1EBDDF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320 * V_0 = NULL;
	bool V_1 = false;
	ValueTuple_2_tE0C83C359BD973BE064EB7B4E773F729D96E402F  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	Exception_t * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		// lock (_streamingHubs)
		Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320 * L_0 = __this->get__streamingHubs_2();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		{
			Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320 * L_1 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
			// if (_streamingHubs.TryGetValue(streamingHub, out var disposeAsyncAndStreamingHubInfo))
			Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320 * L_2 = __this->get__streamingHubs_2();
			RuntimeObject* L_3 = ___streamingHub0;
			NullCheck(L_2);
			bool L_4;
			L_4 = Dictionary_2_TryGetValue_mB7EE6F62BD86CCE767484A13AAA7178468BAC42D(L_2, L_3, (ValueTuple_2_tE0C83C359BD973BE064EB7B4E773F729D96E402F *)(&V_2), /*hidden argument*/Dictionary_2_TryGetValue_mB7EE6F62BD86CCE767484A13AAA7178468BAC42D_RuntimeMethod_var);
			V_3 = L_4;
			bool L_5 = V_3;
			if (!L_5)
			{
				goto IL_0058;
			}
		}

IL_0026:
		{
		}

IL_0027:
		try
		{ // begin try (depth: 2)
			// Forget(disposeAsyncAndStreamingHubInfo.DisposeAsync());
			ValueTuple_2_tE0C83C359BD973BE064EB7B4E773F729D96E402F  L_6 = V_2;
			Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * L_7 = L_6.get_Item1_0();
			NullCheck(L_7);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_8;
			L_8 = Func_1_Invoke_m3B5AC943F23CE7225ACF20C2B4B5E2D3FF1EBDDF(L_7, /*hidden argument*/Func_1_Invoke_m3B5AC943F23CE7225ACF20C2B4B5E2D3FF1EBDDF_RuntimeMethod_var);
			GrpcChannelx_U3CDisposeStreamingHubClientU3Eg__ForgetU7C22_0_m9A90966B08AE1BBB041D818B66E53CB1E6BE3F83(L_8, /*hidden argument*/NULL);
			goto IL_004a;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_003c;
			}
			throw e;
		}

CATCH_003c:
		{ // begin catch(System.Exception)
			// catch (Exception e)
			V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			// Debug.LogException(e);
			Exception_t * L_9 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA(L_9, /*hidden argument*/NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_004a;
		} // end catch (depth: 2)

IL_004a:
		{
			// _streamingHubs.Remove(streamingHub);
			Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320 * L_10 = __this->get__streamingHubs_2();
			RuntimeObject* L_11 = ___streamingHub0;
			NullCheck(L_10);
			bool L_12;
			L_12 = Dictionary_2_Remove_m54F43F31867279CCBF98954FED5D0610C1188F3B(L_10, L_11, /*hidden argument*/Dictionary_2_Remove_m54F43F31867279CCBF98954FED5D0610C1188F3B_RuntimeMethod_var);
		}

IL_0058:
		{
			IL2CPP_LEAVE(0x66, FINALLY_005b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005b;
	}

FINALLY_005b:
	{ // begin finally (depth: 1)
		{
			bool L_13 = V_1;
			if (!L_13)
			{
				goto IL_0065;
			}
		}

IL_005e:
		{
			Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320 * L_14 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_14, /*hidden argument*/NULL);
		}

IL_0065:
		{
			IL2CPP_END_FINALLY(91)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(91)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x66, IL_0066)
	}

IL_0066:
	{
		// }
		return;
	}
}
// System.Void MagicOnion.GrpcChannelx::DisposeAllManagedStreamingHubs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcChannelx_DisposeAllManagedStreamingHubs_mDAF95DADF739E6AFDCE9338A3903D62BD38884A8 (GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m8A74A4870916D478DF463008FC4DCE6CA077A713_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisIStreamingHubMarker_t2C4F44A9A3F142FAB7485838EE53BEDAA7D3B457_m3D2D6884C685EEB20F67751B37D3D54FE09095A8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320 * V_0 = NULL;
	bool V_1 = false;
	IStreamingHubMarkerU5BU5D_tB99023F7783AA76118208888091E955A8C2504A8* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (_streamingHubs)
		Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320 * L_0 = __this->get__streamingHubs_2();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		{
			Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320 * L_1 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
			// foreach (var streamingHub in _streamingHubs.Keys.ToArray() /* Snapshot */)
			Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320 * L_2 = __this->get__streamingHubs_2();
			NullCheck(L_2);
			KeyCollection_t4AEA7A051859B43F915FA65449DFB8B3981A5026 * L_3;
			L_3 = Dictionary_2_get_Keys_m8A74A4870916D478DF463008FC4DCE6CA077A713(L_2, /*hidden argument*/Dictionary_2_get_Keys_m8A74A4870916D478DF463008FC4DCE6CA077A713_RuntimeMethod_var);
			IStreamingHubMarkerU5BU5D_tB99023F7783AA76118208888091E955A8C2504A8* L_4;
			L_4 = Enumerable_ToArray_TisIStreamingHubMarker_t2C4F44A9A3F142FAB7485838EE53BEDAA7D3B457_m3D2D6884C685EEB20F67751B37D3D54FE09095A8(L_3, /*hidden argument*/Enumerable_ToArray_TisIStreamingHubMarker_t2C4F44A9A3F142FAB7485838EE53BEDAA7D3B457_m3D2D6884C685EEB20F67751B37D3D54FE09095A8_RuntimeMethod_var);
			V_2 = L_4;
			V_3 = 0;
			goto IL_003e;
		}

IL_002a:
		{
			// foreach (var streamingHub in _streamingHubs.Keys.ToArray() /* Snapshot */)
			IStreamingHubMarkerU5BU5D_tB99023F7783AA76118208888091E955A8C2504A8* L_5 = V_2;
			int32_t L_6 = V_3;
			NullCheck(L_5);
			int32_t L_7 = L_6;
			RuntimeObject* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
			V_4 = L_8;
			// DisposeStreamingHubClient(streamingHub);
			RuntimeObject* L_9 = V_4;
			GrpcChannelx_DisposeStreamingHubClient_mD2F120ADAC3E492C6F9F2814AAE820E3F066AE60(__this, L_9, /*hidden argument*/NULL);
			int32_t L_10 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		}

IL_003e:
		{
			// foreach (var streamingHub in _streamingHubs.Keys.ToArray() /* Snapshot */)
			int32_t L_11 = V_3;
			IStreamingHubMarkerU5BU5D_tB99023F7783AA76118208888091E955A8C2504A8* L_12 = V_2;
			NullCheck(L_12);
			if ((((int32_t)L_11) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))
			{
				goto IL_002a;
			}
		}

IL_0044:
		{
			IL2CPP_LEAVE(0x52, FINALLY_0047);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0047;
	}

FINALLY_0047:
	{ // begin finally (depth: 1)
		{
			bool L_13 = V_1;
			if (!L_13)
			{
				goto IL_0051;
			}
		}

IL_004a:
		{
			Dictionary_2_t916A3D5792509795C3EC5828A934B377D6C12320 * L_14 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_14, /*hidden argument*/NULL);
		}

IL_0051:
		{
			IL2CPP_END_FINALLY(71)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(71)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x52, IL_0052)
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void MagicOnion.GrpcChannelx::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcChannelx_Dispose_mF07EC1759F1167F38A1D5D1B33FEB4D631FB22EA (GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mF6C2D97963C01A475F13F7FBD7032D1527128646_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (_disposed) return;
		bool L_0 = __this->get__disposed_4();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		// if (_disposed) return;
		goto IL_003b;
	}

IL_000d:
	{
		// _disposed = true;
		__this->set__disposed_4((bool)1);
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		// DisposeAllManagedStreamingHubs();
		GrpcChannelx_DisposeAllManagedStreamingHubs_mDAF95DADF739E6AFDCE9338A3903D62BD38884A8(__this, /*hidden argument*/NULL);
		// Forget(ShutdownInternalAsync());
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_2;
		L_2 = GrpcChannelx_ShutdownInternalAsync_m52F920B4691EF8426D26EAE8FB8EE6E30065CB1E(__this, /*hidden argument*/NULL);
		GrpcChannelx_Forget_mF5CB58949675F6C40B49C0DD887B0D1A1E699B84(L_2, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x3B, FINALLY_002b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002b;
	}

FINALLY_002b:
	{ // begin finally (depth: 1)
		// _onDispose(this);
		Action_1_t549C5EF27D2CC5AD07CBB9088B404BF46A678163 * L_3 = __this->get__onDispose_1();
		NullCheck(L_3);
		Action_1_Invoke_mF6C2D97963C01A475F13F7FBD7032D1527128646(L_3, __this, /*hidden argument*/Action_1_Invoke_mF6C2D97963C01A475F13F7FBD7032D1527128646_RuntimeMethod_var);
		IL2CPP_END_FINALLY(43)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(43)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Threading.Tasks.Task MagicOnion.GrpcChannelx::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * GrpcChannelx_DisposeAsync_m77CA6142A70B18BD0E1EA9F8C5D7FE32498C3F1C (GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__25_tF09584D0A9406A5CADCFD8BC4C8517DD95E66BA9_m68195054FD3534A437CF2E6255D9C8F1BB2CF847_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDisposeAsyncU3Ed__25_tF09584D0A9406A5CADCFD8BC4C8517DD95E66BA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CDisposeAsyncU3Ed__25_tF09584D0A9406A5CADCFD8BC4C8517DD95E66BA9 * V_0 = NULL;
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		U3CDisposeAsyncU3Ed__25_tF09584D0A9406A5CADCFD8BC4C8517DD95E66BA9 * L_0 = (U3CDisposeAsyncU3Ed__25_tF09584D0A9406A5CADCFD8BC4C8517DD95E66BA9 *)il2cpp_codegen_object_new(U3CDisposeAsyncU3Ed__25_tF09584D0A9406A5CADCFD8BC4C8517DD95E66BA9_il2cpp_TypeInfo_var);
		U3CDisposeAsyncU3Ed__25__ctor_mF2E691F342B5E28F68DB7E1616D1125E80156DE5(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CDisposeAsyncU3Ed__25_tF09584D0A9406A5CADCFD8BC4C8517DD95E66BA9 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CDisposeAsyncU3Ed__25_tF09584D0A9406A5CADCFD8BC4C8517DD95E66BA9 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_3;
		L_3 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_U3CU3Et__builder_1(L_3);
		U3CDisposeAsyncU3Ed__25_tF09584D0A9406A5CADCFD8BC4C8517DD95E66BA9 * L_4 = V_0;
		NullCheck(L_4);
		L_4->set_U3CU3E1__state_0((-1));
		U3CDisposeAsyncU3Ed__25_tF09584D0A9406A5CADCFD8BC4C8517DD95E66BA9 * L_5 = V_0;
		NullCheck(L_5);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_6 = L_5->get_U3CU3Et__builder_1();
		V_1 = L_6;
		AsyncTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__25_tF09584D0A9406A5CADCFD8BC4C8517DD95E66BA9_m68195054FD3534A437CF2E6255D9C8F1BB2CF847((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CDisposeAsyncU3Ed__25_tF09584D0A9406A5CADCFD8BC4C8517DD95E66BA9 **)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__25_tF09584D0A9406A5CADCFD8BC4C8517DD95E66BA9_m68195054FD3534A437CF2E6255D9C8F1BB2CF847_RuntimeMethod_var);
		U3CDisposeAsyncU3Ed__25_tF09584D0A9406A5CADCFD8BC4C8517DD95E66BA9 * L_7 = V_0;
		NullCheck(L_7);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_8 = L_7->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_9;
		L_9 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Threading.Tasks.Task MagicOnion.GrpcChannelx::ShutdownInternalAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * GrpcChannelx_ShutdownInternalAsync_m52F920B4691EF8426D26EAE8FB8EE6E30065CB1E (GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CShutdownInternalAsyncU3Ed__26_t5CAF2513D0D80A4B85B420DC910A51E7CC53F53F_m1AE44EB53FA1987A50298A198BBAD1A0A4DC087C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CShutdownInternalAsyncU3Ed__26_t5CAF2513D0D80A4B85B420DC910A51E7CC53F53F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CShutdownInternalAsyncU3Ed__26_t5CAF2513D0D80A4B85B420DC910A51E7CC53F53F * V_0 = NULL;
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		U3CShutdownInternalAsyncU3Ed__26_t5CAF2513D0D80A4B85B420DC910A51E7CC53F53F * L_0 = (U3CShutdownInternalAsyncU3Ed__26_t5CAF2513D0D80A4B85B420DC910A51E7CC53F53F *)il2cpp_codegen_object_new(U3CShutdownInternalAsyncU3Ed__26_t5CAF2513D0D80A4B85B420DC910A51E7CC53F53F_il2cpp_TypeInfo_var);
		U3CShutdownInternalAsyncU3Ed__26__ctor_mF603CF4C12137D93E55CB235183541018EE7657A(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CShutdownInternalAsyncU3Ed__26_t5CAF2513D0D80A4B85B420DC910A51E7CC53F53F * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CShutdownInternalAsyncU3Ed__26_t5CAF2513D0D80A4B85B420DC910A51E7CC53F53F * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_3;
		L_3 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_U3CU3Et__builder_1(L_3);
		U3CShutdownInternalAsyncU3Ed__26_t5CAF2513D0D80A4B85B420DC910A51E7CC53F53F * L_4 = V_0;
		NullCheck(L_4);
		L_4->set_U3CU3E1__state_0((-1));
		U3CShutdownInternalAsyncU3Ed__26_t5CAF2513D0D80A4B85B420DC910A51E7CC53F53F * L_5 = V_0;
		NullCheck(L_5);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_6 = L_5->get_U3CU3Et__builder_1();
		V_1 = L_6;
		AsyncTaskMethodBuilder_Start_TisU3CShutdownInternalAsyncU3Ed__26_t5CAF2513D0D80A4B85B420DC910A51E7CC53F53F_m1AE44EB53FA1987A50298A198BBAD1A0A4DC087C((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CShutdownInternalAsyncU3Ed__26_t5CAF2513D0D80A4B85B420DC910A51E7CC53F53F **)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CShutdownInternalAsyncU3Ed__26_t5CAF2513D0D80A4B85B420DC910A51E7CC53F53F_m1AE44EB53FA1987A50298A198BBAD1A0A4DC087C_RuntimeMethod_var);
		U3CShutdownInternalAsyncU3Ed__26_t5CAF2513D0D80A4B85B420DC910A51E7CC53F53F * L_7 = V_0;
		NullCheck(L_7);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_8 = L_7->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_9;
		L_9 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Void MagicOnion.GrpcChannelx::ThrowIfDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcChannelx_ThrowIfDisposed_m513418AFDA0396E0639F4ED4C526272CE3132759 (GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (_disposed) throw new ObjectDisposedException(nameof(GrpcChannelx));
		bool L_0 = __this->get__disposed_4();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// if (_disposed) throw new ObjectDisposedException(nameof(GrpcChannelx));
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_2 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral44B1A5DEBA242BA8EA91EB1D4D965313185716D6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GrpcChannelx_ThrowIfDisposed_m513418AFDA0396E0639F4ED4C526272CE3132759_RuntimeMethod_var)));
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void MagicOnion.GrpcChannelx::Forget(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcChannelx_Forget_mF5CB58949675F6C40B49C0DD887B0D1A1E699B84 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CForgetU3Ed__28_t7F8B2113E2AF53E5DAC93234969022BD116C7B7A_m387C57141FD21BACDA664BB21429060A3681E869_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CForgetU3Ed__28_t7F8B2113E2AF53E5DAC93234969022BD116C7B7A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CForgetU3Ed__28_t7F8B2113E2AF53E5DAC93234969022BD116C7B7A * V_0 = NULL;
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		U3CForgetU3Ed__28_t7F8B2113E2AF53E5DAC93234969022BD116C7B7A * L_0 = (U3CForgetU3Ed__28_t7F8B2113E2AF53E5DAC93234969022BD116C7B7A *)il2cpp_codegen_object_new(U3CForgetU3Ed__28_t7F8B2113E2AF53E5DAC93234969022BD116C7B7A_il2cpp_TypeInfo_var);
		U3CForgetU3Ed__28__ctor_m69810910EDCD4B5564EBD2E3DB1720F2CFE7F5BC(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CForgetU3Ed__28_t7F8B2113E2AF53E5DAC93234969022BD116C7B7A * L_1 = V_0;
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_2 = ___t0;
		NullCheck(L_1);
		L_1->set_t_2(L_2);
		U3CForgetU3Ed__28_t7F8B2113E2AF53E5DAC93234969022BD116C7B7A * L_3 = V_0;
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_4;
		L_4 = AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5(/*hidden argument*/NULL);
		NullCheck(L_3);
		L_3->set_U3CU3Et__builder_1(L_4);
		U3CForgetU3Ed__28_t7F8B2113E2AF53E5DAC93234969022BD116C7B7A * L_5 = V_0;
		NullCheck(L_5);
		L_5->set_U3CU3E1__state_0((-1));
		U3CForgetU3Ed__28_t7F8B2113E2AF53E5DAC93234969022BD116C7B7A * L_6 = V_0;
		NullCheck(L_6);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_7 = L_6->get_U3CU3Et__builder_1();
		V_1 = L_7;
		AsyncVoidMethodBuilder_Start_TisU3CForgetU3Ed__28_t7F8B2113E2AF53E5DAC93234969022BD116C7B7A_m387C57141FD21BACDA664BB21429060A3681E869((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)(&V_1), (U3CForgetU3Ed__28_t7F8B2113E2AF53E5DAC93234969022BD116C7B7A **)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CForgetU3Ed__28_t7F8B2113E2AF53E5DAC93234969022BD116C7B7A_m387C57141FD21BACDA664BB21429060A3681E869_RuntimeMethod_var);
		return;
	}
}
// System.Void MagicOnion.GrpcChannelx::<DisposeStreamingHubClient>g__Forget|22_0(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcChannelx_U3CDisposeStreamingHubClientU3Eg__ForgetU7C22_0_m9A90966B08AE1BBB041D818B66E53CB1E6BE3F83 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CU3CDisposeStreamingHubClientU3Eg__ForgetU7C22_0U3Ed_tFB27AD025D784934ACD703C8C49741F1A04EBEA0_m5B21B272DFE568537C95A37F947C85F0CC283C2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3CDisposeStreamingHubClientU3Eg__ForgetU7C22_0U3Ed_tFB27AD025D784934ACD703C8C49741F1A04EBEA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3CDisposeStreamingHubClientU3Eg__ForgetU7C22_0U3Ed_tFB27AD025D784934ACD703C8C49741F1A04EBEA0 * V_0 = NULL;
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		U3CU3CDisposeStreamingHubClientU3Eg__ForgetU7C22_0U3Ed_tFB27AD025D784934ACD703C8C49741F1A04EBEA0 * L_0 = (U3CU3CDisposeStreamingHubClientU3Eg__ForgetU7C22_0U3Ed_tFB27AD025D784934ACD703C8C49741F1A04EBEA0 *)il2cpp_codegen_object_new(U3CU3CDisposeStreamingHubClientU3Eg__ForgetU7C22_0U3Ed_tFB27AD025D784934ACD703C8C49741F1A04EBEA0_il2cpp_TypeInfo_var);
		U3CU3CDisposeStreamingHubClientU3Eg__ForgetU7C22_0U3Ed__ctor_m1CDDD6491BF6F3D08A968A7FD3D2ECBC0F17B3AF(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3CDisposeStreamingHubClientU3Eg__ForgetU7C22_0U3Ed_tFB27AD025D784934ACD703C8C49741F1A04EBEA0 * L_1 = V_0;
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_2 = ___t0;
		NullCheck(L_1);
		L_1->set_t_2(L_2);
		U3CU3CDisposeStreamingHubClientU3Eg__ForgetU7C22_0U3Ed_tFB27AD025D784934ACD703C8C49741F1A04EBEA0 * L_3 = V_0;
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_4;
		L_4 = AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5(/*hidden argument*/NULL);
		NullCheck(L_3);
		L_3->set_U3CU3Et__builder_1(L_4);
		U3CU3CDisposeStreamingHubClientU3Eg__ForgetU7C22_0U3Ed_tFB27AD025D784934ACD703C8C49741F1A04EBEA0 * L_5 = V_0;
		NullCheck(L_5);
		L_5->set_U3CU3E1__state_0((-1));
		U3CU3CDisposeStreamingHubClientU3Eg__ForgetU7C22_0U3Ed_tFB27AD025D784934ACD703C8C49741F1A04EBEA0 * L_6 = V_0;
		NullCheck(L_6);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_7 = L_6->get_U3CU3Et__builder_1();
		V_1 = L_7;
		AsyncVoidMethodBuilder_Start_TisU3CU3CDisposeStreamingHubClientU3Eg__ForgetU7C22_0U3Ed_tFB27AD025D784934ACD703C8C49741F1A04EBEA0_m5B21B272DFE568537C95A37F947C85F0CC283C2D((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)(&V_1), (U3CU3CDisposeStreamingHubClientU3Eg__ForgetU7C22_0U3Ed_tFB27AD025D784934ACD703C8C49741F1A04EBEA0 **)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CU3CDisposeStreamingHubClientU3Eg__ForgetU7C22_0U3Ed_tFB27AD025D784934ACD703C8C49741F1A04EBEA0_m5B21B272DFE568537C95A37F947C85F0CC283C2D_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_mF1C6BD9922856C26F30BFBD7DA3EC3FFBE809ED1 (IsReadOnlyAttribute_tFDEFFADD98C33764BB9EAFBDCE3B895A1E71C671 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MagicOnion.Unity.LoggingGrpcChannelProvider::.ctor(MagicOnion.Unity.IGrpcChannelProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggingGrpcChannelProvider__ctor_m31A18E1A1AAD001E3C1C80356E6F0AB8680F78D1 (LoggingGrpcChannelProvider_t3F56F5B09616592937BC8DEE6B2DD6D29E9CF919 * __this, RuntimeObject* ___baseProvider0, const RuntimeMethod* method)
{
	RuntimeObject* G_B2_0 = NULL;
	LoggingGrpcChannelProvider_t3F56F5B09616592937BC8DEE6B2DD6D29E9CF919 * G_B2_1 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	LoggingGrpcChannelProvider_t3F56F5B09616592937BC8DEE6B2DD6D29E9CF919 * G_B1_1 = NULL;
	{
		// public LoggingGrpcChannelProvider(IGrpcChannelProvider baseProvider)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// _baseProvider = baseProvider ?? throw new ArgumentNullException(nameof(baseProvider));
		RuntimeObject* L_0 = ___baseProvider0;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0019;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral41946971DAFEE5BA32F735A63EDD75FC289FFDBD)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LoggingGrpcChannelProvider__ctor_m31A18E1A1AAD001E3C1C80356E6F0AB8680F78D1_RuntimeMethod_var)));
	}

IL_0019:
	{
		NullCheck(G_B2_1);
		G_B2_1->set__baseProvider_0(G_B2_0);
		// }
		return;
	}
}
// MagicOnion.GrpcChannelx MagicOnion.Unity.LoggingGrpcChannelProvider::CreateChannel(MagicOnion.Unity.CreateGrpcChannelContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * LoggingGrpcChannelProvider_CreateChannel_m4DA854478A2EBAEDB00DB96972421233357D7338 (LoggingGrpcChannelProvider_t3F56F5B09616592937BC8DEE6B2DD6D29E9CF919 * __this, CreateGrpcChannelContext_tB9ED19C9DEE05147585D686FB12F9F574329764B * ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGrpcChannelProvider_t7828BBE4FBA5C81FF47F6F92407AFE7E70CD9102_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AD15DA398CB207B20A11C6E89C7ABC2D98C8F8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABAF37018E1F5AB9652A5C3B02A63AB17FEB688D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD387A475340D49515D873D9D7ED5D4A97EA788BE);
		s_Il2CppMethodInitialized = true;
	}
	GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * V_0 = NULL;
	GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF  V_1;
	memset((&V_1), 0, sizeof(V_1));
	GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * V_2 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B1_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_2 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	{
		// var channel = _baseProvider.CreateChannel(context);
		RuntimeObject* L_0 = __this->get__baseProvider_0();
		CreateGrpcChannelContext_tB9ED19C9DEE05147585D686FB12F9F574329764B * L_1 = ___context0;
		NullCheck(L_0);
		GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * L_2;
		L_2 = InterfaceFuncInvoker1< GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A *, CreateGrpcChannelContext_tB9ED19C9DEE05147585D686FB12F9F574329764B * >::Invoke(0 /* MagicOnion.GrpcChannelx MagicOnion.Unity.IGrpcChannelProvider::CreateChannel(MagicOnion.Unity.CreateGrpcChannelContext) */, IGrpcChannelProvider_t7828BBE4FBA5C81FF47F6F92407AFE7E70CD9102_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		// Debug.Log($"Channel Created: {context.Target.Host}:{context.Target.Port} ({(context.Target.IsInsecure ? "Insecure" : "Secure")}) [{channel.Id}]");
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_3;
		CreateGrpcChannelContext_tB9ED19C9DEE05147585D686FB12F9F574329764B * L_5 = ___context0;
		NullCheck(L_5);
		GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF  L_6;
		L_6 = CreateGrpcChannelContext_get_Target_m3406B7430EC5EE62795DF1FEAFA00DF9BD9B8DF7_inline(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		String_t* L_7;
		L_7 = GrpcChannelTarget_get_Host_m57BC6648F51844808220DA8B4C198C0B958C8A20_inline((GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF *)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_4;
		CreateGrpcChannelContext_tB9ED19C9DEE05147585D686FB12F9F574329764B * L_9 = ___context0;
		NullCheck(L_9);
		GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF  L_10;
		L_10 = CreateGrpcChannelContext_get_Target_m3406B7430EC5EE62795DF1FEAFA00DF9BD9B8DF7_inline(L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		int32_t L_11;
		L_11 = GrpcChannelTarget_get_Port_m3CB87BD3C76EC8030761713704B8A373D7283BEB_inline((GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF *)(&V_1), /*hidden argument*/NULL);
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_13);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_13);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = L_8;
		CreateGrpcChannelContext_tB9ED19C9DEE05147585D686FB12F9F574329764B * L_15 = ___context0;
		NullCheck(L_15);
		GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF  L_16;
		L_16 = CreateGrpcChannelContext_get_Target_m3406B7430EC5EE62795DF1FEAFA00DF9BD9B8DF7_inline(L_15, /*hidden argument*/NULL);
		V_1 = L_16;
		bool L_17;
		L_17 = GrpcChannelTarget_get_IsInsecure_mBE46F213D425E033774E0A5F16A7053F1187041F_inline((GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF *)(&V_1), /*hidden argument*/NULL);
		G_B1_0 = 2;
		G_B1_1 = L_14;
		G_B1_2 = L_14;
		G_B1_3 = _stringLiteral3AD15DA398CB207B20A11C6E89C7ABC2D98C8F8D;
		if (L_17)
		{
			G_B2_0 = 2;
			G_B2_1 = L_14;
			G_B2_2 = L_14;
			G_B2_3 = _stringLiteral3AD15DA398CB207B20A11C6E89C7ABC2D98C8F8D;
			goto IL_0059;
		}
	}
	{
		G_B3_0 = _stringLiteralABAF37018E1F5AB9652A5C3B02A63AB17FEB688D;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_005e;
	}

IL_0059:
	{
		G_B3_0 = _stringLiteralD387A475340D49515D873D9D7ED5D4A97EA788BE;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_005e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject *)G_B3_0);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_18 = G_B3_3;
		GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = GrpcChannelx_get_Id_m64141C20B4724EEC34817EA703AA9892701CE84C_inline(L_19, /*hidden argument*/NULL);
		int32_t L_21 = L_20;
		RuntimeObject * L_22 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_22);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_22);
		String_t* L_23;
		L_23 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(G_B3_4, L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_23, /*hidden argument*/NULL);
		// return channel;
		GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * L_24 = V_0;
		V_2 = L_24;
		goto IL_007c;
	}

IL_007c:
	{
		// }
		GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * L_25 = V_2;
		return L_25;
	}
}
// System.Collections.Generic.IReadOnlyCollection`1<MagicOnion.GrpcChannelx> MagicOnion.Unity.LoggingGrpcChannelProvider::GetAllChannels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoggingGrpcChannelProvider_GetAllChannels_mB130778DC084C9245170C1EFACE95DBF8578859A (LoggingGrpcChannelProvider_t3F56F5B09616592937BC8DEE6B2DD6D29E9CF919 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGrpcChannelProvider_t7828BBE4FBA5C81FF47F6F92407AFE7E70CD9102_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return _baseProvider.GetAllChannels();
		RuntimeObject* L_0 = __this->get__baseProvider_0();
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.Generic.IReadOnlyCollection`1<MagicOnion.GrpcChannelx> MagicOnion.Unity.IGrpcChannelProvider::GetAllChannels() */, IGrpcChannelProvider_t7828BBE4FBA5C81FF47F6F92407AFE7E70CD9102_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		RuntimeObject* L_2 = V_0;
		return L_2;
	}
}
// System.Void MagicOnion.Unity.LoggingGrpcChannelProvider::UnregisterChannel(MagicOnion.GrpcChannelx)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggingGrpcChannelProvider_UnregisterChannel_m3119F14A5E6624C95204AA610CF4DDB126424CD1 (LoggingGrpcChannelProvider_t3F56F5B09616592937BC8DEE6B2DD6D29E9CF919 * __this, GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * ___channel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGrpcChannelProvider_t7828BBE4FBA5C81FF47F6F92407AFE7E70CD9102_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EF9B00F946DD08A4FC265785A00673E08820E32);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _baseProvider.UnregisterChannel(channel);
		RuntimeObject* L_0 = __this->get__baseProvider_0();
		GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * L_1 = ___channel0;
		NullCheck(L_0);
		InterfaceActionInvoker1< GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * >::Invoke(1 /* System.Void MagicOnion.Unity.IGrpcChannelProvider::UnregisterChannel(MagicOnion.GrpcChannelx) */, IGrpcChannelProvider_t7828BBE4FBA5C81FF47F6F92407AFE7E70CD9102_il2cpp_TypeInfo_var, L_0, L_1);
		// Debug.Log($"Channel Unregistered: {channel.TargetUri.Host}:{channel.TargetUri.Port} [{channel.Id}]");
		GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * L_2 = ___channel0;
		NullCheck(L_2);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_3;
		L_3 = GrpcChannelx_get_TargetUri_m829529E4ABA37733226B8AD4D17FAABB92919BE9_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Uri_get_Host_m05E1D82C4E6B14A2369AEDED218F9089DE336E64(L_3, /*hidden argument*/NULL);
		GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * L_5 = ___channel0;
		NullCheck(L_5);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_6;
		L_6 = GrpcChannelx_get_TargetUri_m829529E4ABA37733226B8AD4D17FAABB92919BE9_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Uri_get_Port_m23A08BF55EC1DC7421B99E6E77544DDF5900099C(L_6, /*hidden argument*/NULL);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_8);
		GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * L_10 = ___channel0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = GrpcChannelx_get_Id_m64141C20B4724EEC34817EA703AA9892701CE84C_inline(L_10, /*hidden argument*/NULL);
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14;
		L_14 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteral1EF9B00F946DD08A4FC265785A00673E08820E32, L_4, L_9, L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MagicOnion.Unity.LoggingGrpcChannelProvider::ShutdownAllChannels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggingGrpcChannelProvider_ShutdownAllChannels_m0D95BFB30E7EA96F34873E36A0C4B167B518BFDE (LoggingGrpcChannelProvider_t3F56F5B09616592937BC8DEE6B2DD6D29E9CF919 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGrpcChannelProvider_t7828BBE4FBA5C81FF47F6F92407AFE7E70CD9102_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _baseProvider.ShutdownAllChannels();
		RuntimeObject* L_0 = __this->get__baseProvider_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void MagicOnion.Unity.IGrpcChannelProvider::ShutdownAllChannels() */, IGrpcChannelProvider_t7828BBE4FBA5C81FF47F6F92407AFE7E70CD9102_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MagicOnion.UnityDebugLogger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityDebugLogger__ctor_mA96D6ACC5535F7A83318D9905197D434A29DB199 (UnityDebugLogger_tDD33816265BBB34A9FB081316E1ED9186EEBCEC4 * __this, const RuntimeMethod* method)
{
	{
		// : this(null)
		UnityDebugLogger__ctor_mC5557D55A2C1DCAF0A6A362A9778211406F97000(__this, (Type_t *)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MagicOnion.UnityDebugLogger::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityDebugLogger__ctor_mB81677889CC3C38B49373831900C3E5074A447CF (UnityDebugLogger_tDD33816265BBB34A9FB081316E1ED9186EEBCEC4 * __this, bool ___errorToWarn0, const RuntimeMethod* method)
{
	{
		// : this(null)
		UnityDebugLogger__ctor_mC5557D55A2C1DCAF0A6A362A9778211406F97000(__this, (Type_t *)NULL, /*hidden argument*/NULL);
		// this.errorToWarn = errorToWarn;
		bool L_0 = ___errorToWarn0;
		__this->set_errorToWarn_2(L_0);
		// }
		return;
	}
}
// System.Void MagicOnion.UnityDebugLogger::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityDebugLogger__ctor_mC5557D55A2C1DCAF0A6A362A9778211406F97000 (UnityDebugLogger_tDD33816265BBB34A9FB081316E1ED9186EEBCEC4 * __this, Type_t * ___forType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	bool V_2 = false;
	String_t* G_B3_0 = NULL;
	String_t* G_B2_0 = NULL;
	{
		// readonly bool errorToWarn = true; // default is true(gRPC internal log show to warn)
		__this->set_errorToWarn_2((bool)1);
		// protected UnityDebugLogger(Type forType)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.forType = forType;
		Type_t * L_0 = ___forType0;
		__this->set_forType_0(L_0);
		// if (forType != null)
		Type_t * L_1 = ___forType0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_1, (Type_t *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0067;
		}
	}
	{
		// var namespaceStr = forType.Namespace ?? "";
		Type_t * L_4 = ___forType0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_Namespace() */, L_4);
		String_t* L_6 = L_5;
		G_B2_0 = L_6;
		if (L_6)
		{
			G_B3_0 = L_6;
			goto IL_0031;
		}
	}
	{
		G_B3_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0031:
	{
		V_1 = G_B3_0;
		// if (namespaceStr.Length > 0)
		String_t* L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_7, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_8) > ((int32_t)0))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_004d;
		}
	}
	{
		// namespaceStr += ".";
		String_t* L_10 = V_1;
		String_t* L_11;
		L_11 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_10, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, /*hidden argument*/NULL);
		V_1 = L_11;
	}

IL_004d:
	{
		// this.forTypeString = namespaceStr + forType.Name + " ";
		String_t* L_12 = V_1;
		Type_t * L_13 = ___forType0;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_13);
		String_t* L_15;
		L_15 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_12, L_14, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, /*hidden argument*/NULL);
		__this->set_forTypeString_1(L_15);
		goto IL_0074;
	}

IL_0067:
	{
		// this.forTypeString = "";
		__this->set_forTypeString_1(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
	}

IL_0074:
	{
		// }
		return;
	}
}
// System.Void MagicOnion.UnityDebugLogger::Debug(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityDebugLogger_Debug_m19B171672F4133207792AFBF34ED5D5FA64DECA3 (UnityDebugLogger_tDD33816265BBB34A9FB081316E1ED9186EEBCEC4 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Debug.Log(BuildMessage(message));
		String_t* L_0 = ___message0;
		String_t* L_1;
		L_1 = UnityDebugLogger_BuildMessage_m54B75584697EA9A7A80EDE0583C57A3C15FF6DCA(__this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MagicOnion.UnityDebugLogger::Debug(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityDebugLogger_Debug_mE09C6C3C82B6383665F280247B546E7C7E81A280 (UnityDebugLogger_tDD33816265BBB34A9FB081316E1ED9186EEBCEC4 * __this, String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___formatArgs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Debug.Log(BuildMessage(format, formatArgs));
		String_t* L_0 = ___format0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = ___formatArgs1;
		String_t* L_2;
		L_2 = UnityDebugLogger_BuildMessage_m2AA3C36584F4F5BE2BD5E29159A935032269ACFC(__this, L_0, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MagicOnion.UnityDebugLogger::Info(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityDebugLogger_Info_m7750DB627BDDFD83D92C51A4D1A7344B4E3CEBC2 (UnityDebugLogger_tDD33816265BBB34A9FB081316E1ED9186EEBCEC4 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Debug.Log(BuildMessage(message));
		String_t* L_0 = ___message0;
		String_t* L_1;
		L_1 = UnityDebugLogger_BuildMessage_m54B75584697EA9A7A80EDE0583C57A3C15FF6DCA(__this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MagicOnion.UnityDebugLogger::Info(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityDebugLogger_Info_m8FDCD1B80EB4619E46E4D6A60CE82291BC5EA399 (UnityDebugLogger_tDD33816265BBB34A9FB081316E1ED9186EEBCEC4 * __this, String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___formatArgs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Debug.Log(BuildMessage(format, formatArgs));
		String_t* L_0 = ___format0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = ___formatArgs1;
		String_t* L_2;
		L_2 = UnityDebugLogger_BuildMessage_m2AA3C36584F4F5BE2BD5E29159A935032269ACFC(__this, L_0, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MagicOnion.UnityDebugLogger::Warning(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityDebugLogger_Warning_m8D12161D4F635969A35C77E1C3E7B08C57EE1041 (UnityDebugLogger_tDD33816265BBB34A9FB081316E1ED9186EEBCEC4 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Debug.LogWarning(BuildMessage(message));
		String_t* L_0 = ___message0;
		String_t* L_1;
		L_1 = UnityDebugLogger_BuildMessage_m54B75584697EA9A7A80EDE0583C57A3C15FF6DCA(__this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MagicOnion.UnityDebugLogger::Warning(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityDebugLogger_Warning_mAD436BD23D099CC9D0338373DA1404610D1448E7 (UnityDebugLogger_tDD33816265BBB34A9FB081316E1ED9186EEBCEC4 * __this, String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___formatArgs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Debug.LogWarning(BuildMessage(format, formatArgs));
		String_t* L_0 = ___format0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = ___formatArgs1;
		String_t* L_2;
		L_2 = UnityDebugLogger_BuildMessage_m2AA3C36584F4F5BE2BD5E29159A935032269ACFC(__this, L_0, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MagicOnion.UnityDebugLogger::Warning(System.Exception,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityDebugLogger_Warning_m33F647ED6B6AAF8BE1B65176EECA3F70FE08CD09 (UnityDebugLogger_tDD33816265BBB34A9FB081316E1ED9186EEBCEC4 * __this, Exception_t * ___exception0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	UnityDebugLogger_tDD33816265BBB34A9FB081316E1ED9186EEBCEC4 * G_B2_3 = NULL;
	Exception_t * G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	UnityDebugLogger_tDD33816265BBB34A9FB081316E1ED9186EEBCEC4 * G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	UnityDebugLogger_tDD33816265BBB34A9FB081316E1ED9186EEBCEC4 * G_B3_3 = NULL;
	{
		// Warning(message + " " + exception);
		String_t* L_0 = ___message1;
		Exception_t * L_1 = ___exception0;
		Exception_t * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
		G_B1_2 = L_0;
		G_B1_3 = __this;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
			G_B2_2 = L_0;
			G_B2_3 = __this;
			goto IL_0010;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		G_B3_3 = G_B1_3;
		goto IL_0015;
	}

IL_0010:
	{
		NullCheck(G_B2_0);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
	}

IL_0015:
	{
		String_t* L_4;
		L_4 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		NullCheck(G_B3_3);
		UnityDebugLogger_Warning_m8D12161D4F635969A35C77E1C3E7B08C57EE1041(G_B3_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MagicOnion.UnityDebugLogger::Error(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityDebugLogger_Error_m370D2531976F1A701C203A73CFF1484DAD4AFD0E (UnityDebugLogger_tDD33816265BBB34A9FB081316E1ED9186EEBCEC4 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (errorToWarn)
		bool L_0 = __this->get_errorToWarn_2();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// UnityEngine.Debug.LogWarning(BuildMessage(message));
		String_t* L_2 = ___message0;
		String_t* L_3;
		L_3 = UnityDebugLogger_BuildMessage_m54B75584697EA9A7A80EDE0583C57A3C15FF6DCA(__this, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_3, /*hidden argument*/NULL);
		goto IL_002b;
	}

IL_001c:
	{
		// UnityEngine.Debug.LogError(BuildMessage(message));
		String_t* L_4 = ___message0;
		String_t* L_5;
		L_5 = UnityDebugLogger_BuildMessage_m54B75584697EA9A7A80EDE0583C57A3C15FF6DCA(__this, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_5, /*hidden argument*/NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void MagicOnion.UnityDebugLogger::Error(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityDebugLogger_Error_mAB129D8F2279E4AB9A3BA4061EDD0F09D111BA45 (UnityDebugLogger_tDD33816265BBB34A9FB081316E1ED9186EEBCEC4 * __this, String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___formatArgs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (errorToWarn)
		bool L_0 = __this->get_errorToWarn_2();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// UnityEngine.Debug.LogWarning(BuildMessage(format, formatArgs));
		String_t* L_2 = ___format0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___formatArgs1;
		String_t* L_4;
		L_4 = UnityDebugLogger_BuildMessage_m2AA3C36584F4F5BE2BD5E29159A935032269ACFC(__this, L_2, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_4, /*hidden argument*/NULL);
		goto IL_002d;
	}

IL_001d:
	{
		// UnityEngine.Debug.LogError(BuildMessage(format, formatArgs));
		String_t* L_5 = ___format0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = ___formatArgs1;
		String_t* L_7;
		L_7 = UnityDebugLogger_BuildMessage_m2AA3C36584F4F5BE2BD5E29159A935032269ACFC(__this, L_5, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_7, /*hidden argument*/NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void MagicOnion.UnityDebugLogger::Error(System.Exception,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityDebugLogger_Error_mE3B9E57B9A15498EE8DBF965E4CD385ED5AC418E (UnityDebugLogger_tDD33816265BBB34A9FB081316E1ED9186EEBCEC4 * __this, Exception_t * ___exception0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	UnityDebugLogger_tDD33816265BBB34A9FB081316E1ED9186EEBCEC4 * G_B2_3 = NULL;
	Exception_t * G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	UnityDebugLogger_tDD33816265BBB34A9FB081316E1ED9186EEBCEC4 * G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	UnityDebugLogger_tDD33816265BBB34A9FB081316E1ED9186EEBCEC4 * G_B3_3 = NULL;
	{
		// Error(message + " " + exception);
		String_t* L_0 = ___message1;
		Exception_t * L_1 = ___exception0;
		Exception_t * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
		G_B1_2 = L_0;
		G_B1_3 = __this;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
			G_B2_2 = L_0;
			G_B2_3 = __this;
			goto IL_0010;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		G_B3_3 = G_B1_3;
		goto IL_0015;
	}

IL_0010:
	{
		NullCheck(G_B2_0);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
	}

IL_0015:
	{
		String_t* L_4;
		L_4 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		NullCheck(G_B3_3);
		UnityDebugLogger_Error_m370D2531976F1A701C203A73CFF1484DAD4AFD0E(G_B3_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Type MagicOnion.UnityDebugLogger::get_AssociatedType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * UnityDebugLogger_get_AssociatedType_m245D339E12FB4D2A0C361EA5895AF8D4CC759390 (UnityDebugLogger_tDD33816265BBB34A9FB081316E1ED9186EEBCEC4 * __this, const RuntimeMethod* method)
{
	Type_t * V_0 = NULL;
	{
		// get { return forType; }
		Type_t * L_0 = __this->get_forType_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return forType; }
		Type_t * L_1 = V_0;
		return L_1;
	}
}
// System.String MagicOnion.UnityDebugLogger::BuildMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityDebugLogger_BuildMessage_m54B75584697EA9A7A80EDE0583C57A3C15FF6DCA (UnityDebugLogger_tDD33816265BBB34A9FB081316E1ED9186EEBCEC4 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		// if (forType != null)
		Type_t * L_0 = __this->get_forType_0();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_0, (Type_t *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// return forTypeString + message;
		String_t* L_3 = __this->get_forTypeString_1();
		String_t* L_4 = ___message0;
		String_t* L_5;
		L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		goto IL_0026;
	}

IL_0021:
	{
		// return message;
		String_t* L_6 = ___message0;
		V_1 = L_6;
		goto IL_0026;
	}

IL_0026:
	{
		// }
		String_t* L_7 = V_1;
		return L_7;
	}
}
// System.String MagicOnion.UnityDebugLogger::BuildMessage(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityDebugLogger_BuildMessage_m2AA3C36584F4F5BE2BD5E29159A935032269ACFC (UnityDebugLogger_tDD33816265BBB34A9FB081316E1ED9186EEBCEC4 * __this, String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		// if (forType != null)
		Type_t * L_0 = __this->get_forType_0();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_0, (Type_t *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// return forTypeString + string.Format(format, args);
		String_t* L_3 = __this->get_forTypeString_1();
		String_t* L_4 = ___format0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = ___args1;
		String_t* L_6;
		L_6 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(L_4, L_5, /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_3, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		goto IL_0032;
	}

IL_0027:
	{
		// return string.Format(format, args);
		String_t* L_8 = ___format0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = ___args1;
		String_t* L_10;
		L_10 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(L_8, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		goto IL_0032;
	}

IL_0032:
	{
		// }
		String_t* L_11 = V_1;
		return L_11;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MagicOnion.ChannelExtensions/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_mF7237C44F5DE30D6E6FD1460F7409FC2FFE7029B (U3CU3Ec__DisplayClass0_0_tDB0BFB9C6FF5E03A8EC8AB18A2C6CA4AA19D0EA6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MagicOnion.ChannelExtensions/<>c__DisplayClass0_0::<RegisterStreamingSubscription>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0_U3CRegisterStreamingSubscriptionU3Eb__0_mE23BFDEF5E7C681161F2DDA09BF0126C328F1228 (U3CU3Ec__DisplayClass0_0_tDB0BFB9C6FF5E03A8EC8AB18A2C6CA4AA19D0EA6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// channel.ShutdownToken.Register(() => subscription.Dispose());
		RuntimeObject* L_0 = __this->get_subscription_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MagicOnion.Unity.GrpcChannelOptionsBag/<GetValues>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetValuesU3Ed__4__ctor_mB11662DD2AEA5497BA588D22B99B29D6C8F27D05 (U3CGetValuesU3Ed__4_t3EC47CADB40D760F006EE3FC565ABDF09FFB0805 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void MagicOnion.Unity.GrpcChannelOptionsBag/<GetValues>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetValuesU3Ed__4_System_IDisposable_Dispose_m3980CB5CDDB7317BA421536301DD4789FEAA3F61 (U3CGetValuesU3Ed__4_t3EC47CADB40D760F006EE3FC565ABDF09FFB0805 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0020;
	}

IL_0014:
	{
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1E, FINALLY_0017);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0017;
	}

FINALLY_0017:
	{ // begin finally (depth: 1)
		U3CGetValuesU3Ed__4_U3CU3Em__Finally1_mDE8B5DEE58D6654C38F58EAAB4E0F5A13574F1FE(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(23)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(23)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1E, IL_001e)
	}

IL_001e:
	{
		goto IL_0020;
	}

IL_0020:
	{
		return;
	}
}
// System.Boolean MagicOnion.Unity.GrpcChannelOptionsBag/<GetValues>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetValuesU3Ed__4_MoveNext_m7829201B0549115837AB8F38B21FC745BFC92A4C (U3CGetValuesU3Ed__4_t3EC47CADB40D760F006EE3FC565ABDF09FFB0805 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrpcChannelOptionsBag_TryGet_TisGrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22_mB634A182AF11A6289AE2A1FA096F4BE0BD82FFBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tEA4D246882C4D1B27BBA6CB319CA2B1757E98C9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD0DBD8B1E4679027060FB9298BD0B82160608233_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_m27D29781A94B34BD9527D2D0B29A68C5B5486B5B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	String_t* G_B11_0 = NULL;
	U3CGetValuesU3Ed__4_t3EC47CADB40D760F006EE3FC565ABDF09FFB0805 * G_B11_1 = NULL;
	String_t* G_B10_0 = NULL;
	U3CGetValuesU3Ed__4_t3EC47CADB40D760F006EE3FC565ABDF09FFB0805 * G_B10_1 = NULL;
	RuntimeObject * G_B12_0 = NULL;
	String_t* G_B12_1 = NULL;
	U3CGetValuesU3Ed__4_t3EC47CADB40D760F006EE3FC565ABDF09FFB0805 * G_B12_2 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			int32_t L_1 = V_1;
			if (!L_1)
			{
				goto IL_0012;
			}
		}

IL_000a:
		{
			goto IL_000c;
		}

IL_000c:
		{
			int32_t L_2 = V_1;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0014;
			}
		}

IL_0010:
		{
			goto IL_0019;
		}

IL_0012:
		{
			goto IL_0020;
		}

IL_0014:
		{
			goto IL_00bf;
		}

IL_0019:
		{
			V_0 = (bool)0;
			goto IL_00f7;
		}

IL_0020:
		{
			__this->set_U3CU3E1__state_0((-1));
			// if (TryGet<GrpcCCoreChannelOptions>(out var channelOptionsForCCore))
			GrpcChannelOptionsBag_t3A8A75BF4444B4683CCE7492D71C0E82275A62DF * L_3 = __this->get_U3CU3E4__this_3();
			GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 ** L_4 = __this->get_address_of_U3CchannelOptionsForCCoreU3E5__1_4();
			NullCheck(L_3);
			bool L_5;
			L_5 = GrpcChannelOptionsBag_TryGet_TisGrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22_mB634A182AF11A6289AE2A1FA096F4BE0BD82FFBF(L_3, (GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 **)L_4, /*hidden argument*/GrpcChannelOptionsBag_TryGet_TisGrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22_mB634A182AF11A6289AE2A1FA096F4BE0BD82FFBF_RuntimeMethod_var);
			V_2 = L_5;
			bool L_6 = V_2;
			if (!L_6)
			{
				goto IL_00eb;
			}
		}

IL_0040:
		{
			// foreach (var channelOption in channelOptionsForCCore.ChannelOptions)
			GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 * L_7 = __this->get_U3CchannelOptionsForCCoreU3E5__1_4();
			NullCheck(L_7);
			RuntimeObject* L_8;
			L_8 = GrpcCCoreChannelOptions_get_ChannelOptions_mE5B355B7DFD22754A6A6F9E8A2D83699E0BD2DCB_inline(L_7, /*hidden argument*/NULL);
			NullCheck(L_8);
			RuntimeObject* L_9;
			L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Grpc.Core.ChannelOption>::GetEnumerator() */, IEnumerable_1_tEA4D246882C4D1B27BBA6CB319CA2B1757E98C9C_il2cpp_TypeInfo_var, L_8);
			__this->set_U3CU3Es__2_5(L_9);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_00cf;
		}

IL_0062:
		{
			// foreach (var channelOption in channelOptionsForCCore.ChannelOptions)
			RuntimeObject* L_10 = __this->get_U3CU3Es__2_5();
			NullCheck(L_10);
			ChannelOption_t220AB2C90AF6E7CEC603E337F7D70DD956976F2D * L_11;
			L_11 = InterfaceFuncInvoker0< ChannelOption_t220AB2C90AF6E7CEC603E337F7D70DD956976F2D * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Grpc.Core.ChannelOption>::get_Current() */, IEnumerator_1_tD0DBD8B1E4679027060FB9298BD0B82160608233_il2cpp_TypeInfo_var, L_10);
			__this->set_U3CchannelOptionU3E5__3_6(L_11);
			// yield return new KeyValuePair<string, object>(channelOption.Name, channelOption.Type == ChannelOption.OptionType.Integer ? (object)channelOption.IntValue : channelOption.StringValue);
			ChannelOption_t220AB2C90AF6E7CEC603E337F7D70DD956976F2D * L_12 = __this->get_U3CchannelOptionU3E5__3_6();
			NullCheck(L_12);
			String_t* L_13;
			L_13 = ChannelOption_get_Name_m7D1C506575899B8C8C6E5267241609CF33EEAC88_inline(L_12, /*hidden argument*/NULL);
			ChannelOption_t220AB2C90AF6E7CEC603E337F7D70DD956976F2D * L_14 = __this->get_U3CchannelOptionU3E5__3_6();
			NullCheck(L_14);
			int32_t L_15;
			L_15 = ChannelOption_get_Type_m523C82FC0FC670A049BA4398D9392070522D2734_inline(L_14, /*hidden argument*/NULL);
			G_B10_0 = L_13;
			G_B10_1 = __this;
			if (!L_15)
			{
				G_B11_0 = L_13;
				G_B11_1 = __this;
				goto IL_009a;
			}
		}

IL_008d:
		{
			ChannelOption_t220AB2C90AF6E7CEC603E337F7D70DD956976F2D * L_16 = __this->get_U3CchannelOptionU3E5__3_6();
			NullCheck(L_16);
			String_t* L_17;
			L_17 = ChannelOption_get_StringValue_mB07EE65A4BEBB2A5E869887C9ADBCD64ADF773B7(L_16, /*hidden argument*/NULL);
			G_B12_0 = ((RuntimeObject *)(L_17));
			G_B12_1 = G_B10_0;
			G_B12_2 = G_B10_1;
			goto IL_00aa;
		}

IL_009a:
		{
			ChannelOption_t220AB2C90AF6E7CEC603E337F7D70DD956976F2D * L_18 = __this->get_U3CchannelOptionU3E5__3_6();
			NullCheck(L_18);
			int32_t L_19;
			L_19 = ChannelOption_get_IntValue_mC54EDC6F2D250192CB2984018B81218955AC37D4(L_18, /*hidden argument*/NULL);
			int32_t L_20 = L_19;
			RuntimeObject * L_21 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_20);
			G_B12_0 = L_21;
			G_B12_1 = G_B11_0;
			G_B12_2 = G_B11_1;
		}

IL_00aa:
		{
			KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  L_22;
			memset((&L_22), 0, sizeof(L_22));
			KeyValuePair_2__ctor_m27D29781A94B34BD9527D2D0B29A68C5B5486B5B((&L_22), G_B12_1, G_B12_0, /*hidden argument*/KeyValuePair_2__ctor_m27D29781A94B34BD9527D2D0B29A68C5B5486B5B_RuntimeMethod_var);
			NullCheck(G_B12_2);
			G_B12_2->set_U3CU3E2__current_1(L_22);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_00f7;
		}

IL_00bf:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			__this->set_U3CchannelOptionU3E5__3_6((ChannelOption_t220AB2C90AF6E7CEC603E337F7D70DD956976F2D *)NULL);
		}

IL_00cf:
		{
			// foreach (var channelOption in channelOptionsForCCore.ChannelOptions)
			RuntimeObject* L_23 = __this->get_U3CU3Es__2_5();
			NullCheck(L_23);
			bool L_24;
			L_24 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_23);
			if (L_24)
			{
				goto IL_0062;
			}
		}

IL_00dc:
		{
			U3CGetValuesU3Ed__4_U3CU3Em__Finally1_mDE8B5DEE58D6654C38F58EAAB4E0F5A13574F1FE(__this, /*hidden argument*/NULL);
			__this->set_U3CU3Es__2_5((RuntimeObject*)NULL);
		}

IL_00eb:
		{
			// }
			V_0 = (bool)0;
			goto IL_00f7;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_00ef;
	}

FAULT_00ef:
	{ // begin fault (depth: 1)
		U3CGetValuesU3Ed__4_System_IDisposable_Dispose_m3980CB5CDDB7317BA421536301DD4789FEAA3F61(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(239)
	} // end fault
	IL2CPP_CLEANUP(239)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00f7:
	{
		bool L_25 = V_0;
		return L_25;
	}
}
// System.Void MagicOnion.Unity.GrpcChannelOptionsBag/<GetValues>d__4::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetValuesU3Ed__4_U3CU3Em__Finally1_mDE8B5DEE58D6654C38F58EAAB4E0F5A13574F1FE (U3CGetValuesU3Ed__4_t3EC47CADB40D760F006EE3FC565ABDF09FFB0805 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3Es__2_5();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3Es__2_5();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001b:
	{
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object> MagicOnion.Unity.GrpcChannelOptionsBag/<GetValues>d__4::System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,System.Object>>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  U3CGetValuesU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CSystem_ObjectU3EU3E_get_Current_m76D3A15029C4A372ECA467D62E46334EB9DB361A (U3CGetValuesU3Ed__4_t3EC47CADB40D760F006EE3FC565ABDF09FFB0805 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void MagicOnion.Unity.GrpcChannelOptionsBag/<GetValues>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetValuesU3Ed__4_System_Collections_IEnumerator_Reset_m8499A1B7A657FE712272631C3125B273D868F0A5 (U3CGetValuesU3Ed__4_t3EC47CADB40D760F006EE3FC565ABDF09FFB0805 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetValuesU3Ed__4_System_Collections_IEnumerator_Reset_m8499A1B7A657FE712272631C3125B273D868F0A5_RuntimeMethod_var)));
	}
}
// System.Object MagicOnion.Unity.GrpcChannelOptionsBag/<GetValues>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetValuesU3Ed__4_System_Collections_IEnumerator_get_Current_m852B945F3D1D95A7EEF6FF04BBEE2E1AE9B131DD (U3CGetValuesU3Ed__4_t3EC47CADB40D760F006EE3FC565ABDF09FFB0805 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  L_0 = __this->get_U3CU3E2__current_1();
		KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  L_1 = L_0;
		RuntimeObject * L_2 = Box(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> MagicOnion.Unity.GrpcChannelOptionsBag/<GetValues>d__4::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,System.Object>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetValuesU3Ed__4_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CSystem_ObjectU3EU3E_GetEnumerator_m80AE0AC192BADA976BF0CB8A2E9E5C6D19C62EAA (U3CGetValuesU3Ed__4_t3EC47CADB40D760F006EE3FC565ABDF09FFB0805 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetValuesU3Ed__4_t3EC47CADB40D760F006EE3FC565ABDF09FFB0805_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetValuesU3Ed__4_t3EC47CADB40D760F006EE3FC565ABDF09FFB0805 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CGetValuesU3Ed__4_t3EC47CADB40D760F006EE3FC565ABDF09FFB0805 * L_3 = (U3CGetValuesU3Ed__4_t3EC47CADB40D760F006EE3FC565ABDF09FFB0805 *)il2cpp_codegen_object_new(U3CGetValuesU3Ed__4_t3EC47CADB40D760F006EE3FC565ABDF09FFB0805_il2cpp_TypeInfo_var);
		U3CGetValuesU3Ed__4__ctor_mB11662DD2AEA5497BA588D22B99B29D6C8F27D05(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3CGetValuesU3Ed__4_t3EC47CADB40D760F006EE3FC565ABDF09FFB0805 * L_4 = V_0;
		GrpcChannelOptionsBag_t3A8A75BF4444B4683CCE7492D71C0E82275A62DF * L_5 = __this->get_U3CU3E4__this_3();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_3(L_5);
	}

IL_0035:
	{
		U3CGetValuesU3Ed__4_t3EC47CADB40D760F006EE3FC565ABDF09FFB0805 * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator MagicOnion.Unity.GrpcChannelOptionsBag/<GetValues>d__4::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetValuesU3Ed__4_System_Collections_IEnumerable_GetEnumerator_m290C260E9C8082DCF88D77636D0ED03F70B28274 (U3CGetValuesU3Ed__4_t3EC47CADB40D760F006EE3FC565ABDF09FFB0805 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetValuesU3Ed__4_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CSystem_ObjectU3EU3E_GetEnumerator_m80AE0AC192BADA976BF0CB8A2E9E5C6D19C62EAA(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MagicOnion.GrpcChannelx/<<DisposeStreamingHubClient>g__Forget|22_0>d::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CDisposeStreamingHubClientU3Eg__ForgetU7C22_0U3Ed__ctor_m1CDDD6491BF6F3D08A968A7FD3D2ECBC0F17B3AF (U3CU3CDisposeStreamingHubClientU3Eg__ForgetU7C22_0U3Ed_tFB27AD025D784934ACD703C8C49741F1A04EBEA0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MagicOnion.GrpcChannelx/<<DisposeStreamingHubClient>g__Forget|22_0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CDisposeStreamingHubClientU3Eg__ForgetU7C22_0U3Ed_MoveNext_mFEC2E61773B69FCABA0AE104A47D45056A7C4E30 (U3CU3CDisposeStreamingHubClientU3Eg__ForgetU7C22_0U3Ed_tFB27AD025D784934ACD703C8C49741F1A04EBEA0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CDisposeStreamingHubClientU3Eg__ForgetU7C22_0U3Ed_tFB27AD025D784934ACD703C8C49741F1A04EBEA0_m399869676648598667F5E1461F31A251217894DB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3CU3CDisposeStreamingHubClientU3Eg__ForgetU7C22_0U3Ed_tFB27AD025D784934ACD703C8C49741F1A04EBEA0 * V_2 = NULL;
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c;
			}
		}

IL_000a:
		{
			goto IL_000e;
		}

IL_000c:
		{
			goto IL_000f;
		}

IL_000e:
		{
		}

IL_000f:
		{
		}

IL_0010:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_2 = V_0;
				if (!L_2)
				{
					goto IL_0015;
				}
			}

IL_0013:
			{
				goto IL_0017;
			}

IL_0015:
			{
				goto IL_0051;
			}

IL_0017:
			{
				// await t;
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_3 = __this->get_t_2();
				NullCheck(L_3);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_4;
				L_4 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_3, /*hidden argument*/NULL);
				V_1 = L_4;
				bool L_5;
				L_5 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), /*hidden argument*/NULL);
				if (L_5)
				{
					goto IL_006d;
				}
			}

IL_002d:
			{
				int32_t L_6 = 0;
				V_0 = L_6;
				__this->set_U3CU3E1__state_0(L_6);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_7 = V_1;
				__this->set_U3CU3Eu__1_4(L_7);
				V_2 = __this;
				AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_8 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CDisposeStreamingHubClientU3Eg__ForgetU7C22_0U3Ed_tFB27AD025D784934ACD703C8C49741F1A04EBEA0_m399869676648598667F5E1461F31A251217894DB((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_8, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), (U3CU3CDisposeStreamingHubClientU3Eg__ForgetU7C22_0U3Ed_tFB27AD025D784934ACD703C8C49741F1A04EBEA0 **)(&V_2), /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CDisposeStreamingHubClientU3Eg__ForgetU7C22_0U3Ed_tFB27AD025D784934ACD703C8C49741F1A04EBEA0_m399869676648598667F5E1461F31A251217894DB_RuntimeMethod_var);
				goto IL_00be;
			}

IL_0051:
			{
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_9 = __this->get_U3CU3Eu__1_4();
				V_1 = L_9;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_10 = __this->get_address_of_U3CU3Eu__1_4();
				il2cpp_codegen_initobj(L_10, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
				int32_t L_11 = (-1);
				V_0 = L_11;
				__this->set_U3CU3E1__state_0(L_11);
			}

IL_006d:
			{
				TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), /*hidden argument*/NULL);
				goto IL_0090;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0078;
			}
			throw e;
		}

CATCH_0078:
		{ // begin catch(System.Exception)
			// catch (Exception e)
			V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			Exception_t * L_12 = V_3;
			__this->set_U3CeU3E5__1_3(L_12);
			// Debug.LogException(e);
			Exception_t * L_13 = __this->get_U3CeU3E5__1_3();
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA(L_13, /*hidden argument*/NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0090;
		} // end catch (depth: 2)

IL_0090:
		{
			goto IL_00aa;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0092;
		}
		throw e;
	}

CATCH_0092:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_14 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_15 = V_3;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_14, L_15, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00be;
	} // end catch (depth: 1)

IL_00aa:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_16 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_16, /*hidden argument*/NULL);
	}

IL_00be:
	{
		return;
	}
}
// System.Void MagicOnion.GrpcChannelx/<<DisposeStreamingHubClient>g__Forget|22_0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CDisposeStreamingHubClientU3Eg__ForgetU7C22_0U3Ed_SetStateMachine_m6A75877DF284EA58F1D576B121ED0719E629E7FE (U3CU3CDisposeStreamingHubClientU3Eg__ForgetU7C22_0U3Ed_tFB27AD025D784934ACD703C8C49741F1A04EBEA0 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MagicOnion.GrpcChannelx/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m1F37E351B80BCFA1D6BA75CFBB3C5B10702054AB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t59C109BC2B57707046109D174D3A4687AE219B3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t59C109BC2B57707046109D174D3A4687AE219B3E * L_0 = (U3CU3Ec_t59C109BC2B57707046109D174D3A4687AE219B3E *)il2cpp_codegen_object_new(U3CU3Ec_t59C109BC2B57707046109D174D3A4687AE219B3E_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m63092DAB52536B19EC16F78C27158E331A4C624B(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t59C109BC2B57707046109D174D3A4687AE219B3E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t59C109BC2B57707046109D174D3A4687AE219B3E_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void MagicOnion.GrpcChannelx/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m63092DAB52536B19EC16F78C27158E331A4C624B (U3CU3Ec_t59C109BC2B57707046109D174D3A4687AE219B3E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// MagicOnion.Client.ManagedStreamingHubInfo MagicOnion.GrpcChannelx/<>c::<MagicOnion.Client.IMagicOnionAwareGrpcChannel.GetAllManagedStreamingHubs>b__19_0(System.ValueTuple`2<System.Func`1<System.Threading.Tasks.Task>,MagicOnion.Client.ManagedStreamingHubInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ManagedStreamingHubInfo_t91C1EAA9634FD4ED4B632E2F3C8CF2C8CE35F7F6  U3CU3Ec_U3CMagicOnion_Client_IMagicOnionAwareGrpcChannel_GetAllManagedStreamingHubsU3Eb__19_0_m6628F1EDE033656F05F0B50188CF473E5AEF6AE7 (U3CU3Ec_t59C109BC2B57707046109D174D3A4687AE219B3E * __this, ValueTuple_2_tE0C83C359BD973BE064EB7B4E773F729D96E402F  ___x0, const RuntimeMethod* method)
{
	{
		// return _streamingHubs.Values.Select(x => x.StreamingHubInfo).ToArray();
		ValueTuple_2_tE0C83C359BD973BE064EB7B4E773F729D96E402F  L_0 = ___x0;
		ManagedStreamingHubInfo_t91C1EAA9634FD4ED4B632E2F3C8CF2C8CE35F7F6  L_1 = L_0.get_Item2_1();
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MagicOnion.GrpcChannelx/<ConnectAsync>d__18::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConnectAsyncU3Ed__18__ctor_mA57258CA4A63123550D2FD8A81AD6FBF06FB259D (U3CConnectAsyncU3Ed__18_tA12E5FCEA1EEE4814A0B579677FA716E4FAD210E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MagicOnion.GrpcChannelx/<ConnectAsync>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConnectAsyncU3Ed__18_MoveNext_m7F395FDA828923F8BB47F98A666768D6CF53F929 (U3CConnectAsyncU3Ed__18_tA12E5FCEA1EEE4814A0B579677FA716E4FAD210E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CConnectAsyncU3Ed__18_tA12E5FCEA1EEE4814A0B579677FA716E4FAD210E_m42744845502E0EA2F2046C1718F7DC8109024826_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Channel_t05CCFAE14C23CE3E40F26235CB6E9F42C4B736DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	ChannelBase_t27741E6D85E1E4064949B777B040D975F3D400A9 * V_2 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CConnectAsyncU3Ed__18_tA12E5FCEA1EEE4814A0B579677FA716E4FAD210E * V_4 = NULL;
	Exception_t * V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c;
			}
		}

IL_000a:
		{
			goto IL_000e;
		}

IL_000c:
		{
			goto IL_0086;
		}

IL_000e:
		{
			// ThrowIfDisposed();
			GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * L_2 = __this->get_U3CU3E4__this_3();
			NullCheck(L_2);
			GrpcChannelx_ThrowIfDisposed_m513418AFDA0396E0639F4ED4C526272CE3132759(L_2, /*hidden argument*/NULL);
			// if (_channel is Channel grpcCChannel)
			GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * L_3 = __this->get_U3CU3E4__this_3();
			NullCheck(L_3);
			ChannelBase_t27741E6D85E1E4064949B777B040D975F3D400A9 * L_4 = L_3->get__channel_3();
			V_2 = L_4;
			ChannelBase_t27741E6D85E1E4064949B777B040D975F3D400A9 * L_5 = V_2;
			__this->set_U3CgrpcCChannelU3E5__1_4(((Channel_t05CCFAE14C23CE3E40F26235CB6E9F42C4B736DD *)IsInstClass((RuntimeObject*)L_5, Channel_t05CCFAE14C23CE3E40F26235CB6E9F42C4B736DD_il2cpp_TypeInfo_var)));
			Channel_t05CCFAE14C23CE3E40F26235CB6E9F42C4B736DD * L_6 = __this->get_U3CgrpcCChannelU3E5__1_4();
			V_1 = (bool)((!(((RuntimeObject*)(Channel_t05CCFAE14C23CE3E40F26235CB6E9F42C4B736DD *)L_6) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_7 = V_1;
			if (!L_7)
			{
				goto IL_00ab;
			}
		}

IL_0040:
		{
			// await grpcCChannel.ConnectAsync(deadline);
			Channel_t05CCFAE14C23CE3E40F26235CB6E9F42C4B736DD * L_8 = __this->get_U3CgrpcCChannelU3E5__1_4();
			Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_9 = __this->get_deadline_2();
			NullCheck(L_8);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_10;
			L_10 = Channel_ConnectAsync_m42ABEF7D3554323EAE9354705BE14C842741309F(L_8, L_9, /*hidden argument*/NULL);
			NullCheck(L_10);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_11;
			L_11 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_10, /*hidden argument*/NULL);
			V_3 = L_11;
			bool L_12;
			L_12 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
			if (L_12)
			{
				goto IL_00a2;
			}
		}

IL_0061:
		{
			int32_t L_13 = 0;
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_14 = V_3;
			__this->set_U3CU3Eu__1_5(L_14);
			V_4 = __this;
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_15 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CConnectAsyncU3Ed__18_tA12E5FCEA1EEE4814A0B579677FA716E4FAD210E_m42744845502E0EA2F2046C1718F7DC8109024826((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_15, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), (U3CConnectAsyncU3Ed__18_tA12E5FCEA1EEE4814A0B579677FA716E4FAD210E **)(&V_4), /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CConnectAsyncU3Ed__18_tA12E5FCEA1EEE4814A0B579677FA716E4FAD210E_m42744845502E0EA2F2046C1718F7DC8109024826_RuntimeMethod_var);
			goto IL_00e9;
		}

IL_0086:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_16 = __this->get_U3CU3Eu__1_5();
			V_3 = L_16;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_17 = __this->get_address_of_U3CU3Eu__1_5();
			il2cpp_codegen_initobj(L_17, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_18 = (-1);
			V_0 = L_18;
			__this->set_U3CU3E1__state_0(L_18);
		}

IL_00a2:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
		}

IL_00ab:
		{
			goto IL_00ce;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00ad;
		}
		throw e;
	}

CATCH_00ad:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CgrpcCChannelU3E5__1_4((Channel_t05CCFAE14C23CE3E40F26235CB6E9F42C4B736DD *)NULL);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_19 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_20 = V_5;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_19, L_20, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00e9;
	} // end catch (depth: 1)

IL_00ce:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CgrpcCChannelU3E5__1_4((Channel_t05CCFAE14C23CE3E40F26235CB6E9F42C4B736DD *)NULL);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_21 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_21, /*hidden argument*/NULL);
	}

IL_00e9:
	{
		return;
	}
}
// System.Void MagicOnion.GrpcChannelx/<ConnectAsync>d__18::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConnectAsyncU3Ed__18_SetStateMachine_m1BBA90B229C72741B6EFE9F69EC11FEEEF00C9EB (U3CConnectAsyncU3Ed__18_tA12E5FCEA1EEE4814A0B579677FA716E4FAD210E * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MagicOnion.GrpcChannelx/<DisposeAsync>d__25::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__25__ctor_mF2E691F342B5E28F68DB7E1616D1125E80156DE5 (U3CDisposeAsyncU3Ed__25_tF09584D0A9406A5CADCFD8BC4C8517DD95E66BA9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MagicOnion.GrpcChannelx/<DisposeAsync>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__25_MoveNext_mD0E45C1716AC78E8E9D825CE4535FA46B6248283 (U3CDisposeAsyncU3Ed__25_tF09584D0A9406A5CADCFD8BC4C8517DD95E66BA9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mF6C2D97963C01A475F13F7FBD7032D1527128646_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDisposeAsyncU3Ed__25_tF09584D0A9406A5CADCFD8BC4C8517DD95E66BA9_mC0991FE5D312A469536D9AC403E7022B9012A5D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CDisposeAsyncU3Ed__25_tF09584D0A9406A5CADCFD8BC4C8517DD95E66BA9 * V_3 = NULL;
	Exception_t * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c;
			}
		}

IL_000a:
		{
			goto IL_000e;
		}

IL_000c:
		{
			goto IL_002f;
		}

IL_000e:
		{
			// if (_disposed) return;
			GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * L_2 = __this->get_U3CU3E4__this_2();
			NullCheck(L_2);
			bool L_3 = L_2->get__disposed_4();
			V_1 = L_3;
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_0023;
			}
		}

IL_001e:
		{
			// if (_disposed) return;
			goto IL_00e3;
		}

IL_0023:
		{
			// _disposed = true;
			GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * L_5 = __this->get_U3CU3E4__this_2();
			NullCheck(L_5);
			L_5->set__disposed_4((bool)1);
		}

IL_002f:
		{
		}

IL_0030:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_0035;
				}
			}

IL_0033:
			{
				goto IL_0037;
			}

IL_0035:
			{
				goto IL_0082;
			}

IL_0037:
			{
				// DisposeAllManagedStreamingHubs();
				GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * L_7 = __this->get_U3CU3E4__this_2();
				NullCheck(L_7);
				GrpcChannelx_DisposeAllManagedStreamingHubs_mDAF95DADF739E6AFDCE9338A3903D62BD38884A8(L_7, /*hidden argument*/NULL);
				// await ShutdownInternalAsync();
				GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * L_8 = __this->get_U3CU3E4__this_2();
				NullCheck(L_8);
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_9;
				L_9 = GrpcChannelx_ShutdownInternalAsync_m52F920B4691EF8426D26EAE8FB8EE6E30065CB1E(L_8, /*hidden argument*/NULL);
				NullCheck(L_9);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_10;
				L_10 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_9, /*hidden argument*/NULL);
				V_2 = L_10;
				bool L_11;
				L_11 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
				if (L_11)
				{
					goto IL_009e;
				}
			}

IL_005e:
			{
				int32_t L_12 = 0;
				V_0 = L_12;
				__this->set_U3CU3E1__state_0(L_12);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_13 = V_2;
				__this->set_U3CU3Eu__1_3(L_13);
				V_3 = __this;
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_14 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDisposeAsyncU3Ed__25_tF09584D0A9406A5CADCFD8BC4C8517DD95E66BA9_mC0991FE5D312A469536D9AC403E7022B9012A5D2((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_14, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CDisposeAsyncU3Ed__25_tF09584D0A9406A5CADCFD8BC4C8517DD95E66BA9 **)(&V_3), /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDisposeAsyncU3Ed__25_tF09584D0A9406A5CADCFD8BC4C8517DD95E66BA9_mC0991FE5D312A469536D9AC403E7022B9012A5D2_RuntimeMethod_var);
				IL2CPP_LEAVE(0xF7, FINALLY_00a9);
			}

IL_0082:
			{
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_15 = __this->get_U3CU3Eu__1_3();
				V_2 = L_15;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_16 = __this->get_address_of_U3CU3Eu__1_3();
				il2cpp_codegen_initobj(L_16, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
				int32_t L_17 = (-1);
				V_0 = L_17;
				__this->set_U3CU3E1__state_0(L_17);
			}

IL_009e:
			{
				TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
				IL2CPP_LEAVE(0xC7, FINALLY_00a9);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00a9;
		}

FINALLY_00a9:
		{ // begin finally (depth: 2)
			{
				int32_t L_18 = V_0;
				if ((((int32_t)L_18) >= ((int32_t)0)))
				{
					goto IL_00c6;
				}
			}

IL_00ad:
			{
				// _onDispose(this);
				GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * L_19 = __this->get_U3CU3E4__this_2();
				NullCheck(L_19);
				Action_1_t549C5EF27D2CC5AD07CBB9088B404BF46A678163 * L_20 = L_19->get__onDispose_1();
				GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * L_21 = __this->get_U3CU3E4__this_2();
				NullCheck(L_20);
				Action_1_Invoke_mF6C2D97963C01A475F13F7FBD7032D1527128646(L_20, L_21, /*hidden argument*/Action_1_Invoke_mF6C2D97963C01A475F13F7FBD7032D1527128646_RuntimeMethod_var);
			}

IL_00c6:
			{
				IL2CPP_END_FINALLY(169)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(169)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0xF7, IL_00f7)
			IL2CPP_JUMP_TBL(0xC7, IL_00c7)
		}

IL_00c7:
		{
			goto IL_00e3;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00c9;
		}
		throw e;
	}

CATCH_00c9:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_22 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_23 = V_4;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_22, L_23, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00f7;
	} // end catch (depth: 1)

IL_00e3:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_24 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_24, /*hidden argument*/NULL);
	}

IL_00f7:
	{
		return;
	}
}
// System.Void MagicOnion.GrpcChannelx/<DisposeAsync>d__25::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__25_SetStateMachine_m055F4DE5CBA479447D0A2C9349890F3C8246733B (U3CDisposeAsyncU3Ed__25_tF09584D0A9406A5CADCFD8BC4C8517DD95E66BA9 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MagicOnion.GrpcChannelx/<Forget>d__28::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForgetU3Ed__28__ctor_m69810910EDCD4B5564EBD2E3DB1720F2CFE7F5BC (U3CForgetU3Ed__28_t7F8B2113E2AF53E5DAC93234969022BD116C7B7A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MagicOnion.GrpcChannelx/<Forget>d__28::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForgetU3Ed__28_MoveNext_mBC438E8FCC704B3920E4645A0BC91B6C5C0962DF (U3CForgetU3Ed__28_t7F8B2113E2AF53E5DAC93234969022BD116C7B7A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CForgetU3Ed__28_t7F8B2113E2AF53E5DAC93234969022BD116C7B7A_mD8D7785E8EF7A6201834970EA858CA619F49A33F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3CForgetU3Ed__28_t7F8B2113E2AF53E5DAC93234969022BD116C7B7A * V_2 = NULL;
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c;
			}
		}

IL_000a:
		{
			goto IL_000e;
		}

IL_000c:
		{
			goto IL_000f;
		}

IL_000e:
		{
		}

IL_000f:
		{
		}

IL_0010:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_2 = V_0;
				if (!L_2)
				{
					goto IL_0015;
				}
			}

IL_0013:
			{
				goto IL_0017;
			}

IL_0015:
			{
				goto IL_0051;
			}

IL_0017:
			{
				// await t;
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_3 = __this->get_t_2();
				NullCheck(L_3);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_4;
				L_4 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_3, /*hidden argument*/NULL);
				V_1 = L_4;
				bool L_5;
				L_5 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), /*hidden argument*/NULL);
				if (L_5)
				{
					goto IL_006d;
				}
			}

IL_002d:
			{
				int32_t L_6 = 0;
				V_0 = L_6;
				__this->set_U3CU3E1__state_0(L_6);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_7 = V_1;
				__this->set_U3CU3Eu__1_4(L_7);
				V_2 = __this;
				AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_8 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CForgetU3Ed__28_t7F8B2113E2AF53E5DAC93234969022BD116C7B7A_mD8D7785E8EF7A6201834970EA858CA619F49A33F((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_8, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), (U3CForgetU3Ed__28_t7F8B2113E2AF53E5DAC93234969022BD116C7B7A **)(&V_2), /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CForgetU3Ed__28_t7F8B2113E2AF53E5DAC93234969022BD116C7B7A_mD8D7785E8EF7A6201834970EA858CA619F49A33F_RuntimeMethod_var);
				goto IL_00be;
			}

IL_0051:
			{
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_9 = __this->get_U3CU3Eu__1_4();
				V_1 = L_9;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_10 = __this->get_address_of_U3CU3Eu__1_4();
				il2cpp_codegen_initobj(L_10, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
				int32_t L_11 = (-1);
				V_0 = L_11;
				__this->set_U3CU3E1__state_0(L_11);
			}

IL_006d:
			{
				TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), /*hidden argument*/NULL);
				goto IL_0090;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0078;
			}
			throw e;
		}

CATCH_0078:
		{ // begin catch(System.Exception)
			// catch (Exception e)
			V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			Exception_t * L_12 = V_3;
			__this->set_U3CeU3E5__1_3(L_12);
			// Debug.LogException(e);
			Exception_t * L_13 = __this->get_U3CeU3E5__1_3();
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA(L_13, /*hidden argument*/NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0090;
		} // end catch (depth: 2)

IL_0090:
		{
			goto IL_00aa;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0092;
		}
		throw e;
	}

CATCH_0092:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_14 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_15 = V_3;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_14, L_15, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00be;
	} // end catch (depth: 1)

IL_00aa:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_16 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_16, /*hidden argument*/NULL);
	}

IL_00be:
	{
		return;
	}
}
// System.Void MagicOnion.GrpcChannelx/<Forget>d__28::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForgetU3Ed__28_SetStateMachine_m1061654AB11C2289E6A6623CF0F4CEB36566E3BA (U3CForgetU3Ed__28_t7F8B2113E2AF53E5DAC93234969022BD116C7B7A * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MagicOnion.GrpcChannelx/<ShutdownAsyncCore>d__17::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShutdownAsyncCoreU3Ed__17__ctor_mFA2935FEB7524E768C2FB389EB9EECB6DFB5D804 (U3CShutdownAsyncCoreU3Ed__17_tBAF5B09E5D61F137535A7FD3283E8A265F211FBC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MagicOnion.GrpcChannelx/<ShutdownAsyncCore>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShutdownAsyncCoreU3Ed__17_MoveNext_mB30A1A9E6BF59722BB8744CB0B8FF66F81ED799D (U3CShutdownAsyncCoreU3Ed__17_tBAF5B09E5D61F137535A7FD3283E8A265F211FBC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CShutdownAsyncCoreU3Ed__17_tBAF5B09E5D61F137535A7FD3283E8A265F211FBC_mC5583AFEA50C56C8E4EBF9BDAF16105C7E1FD352_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CShutdownAsyncCoreU3Ed__17_tBAF5B09E5D61F137535A7FD3283E8A265F211FBC * V_3 = NULL;
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c;
			}
		}

IL_000a:
		{
			goto IL_000e;
		}

IL_000c:
		{
			goto IL_0056;
		}

IL_000e:
		{
			// await ShutdownInternalAsync().ConfigureAwait(false);
			GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * L_2 = __this->get_U3CU3E4__this_2();
			NullCheck(L_2);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_3;
			L_3 = GrpcChannelx_ShutdownInternalAsync_m52F920B4691EF8426D26EAE8FB8EE6E30065CB1E(L_2, /*hidden argument*/NULL);
			NullCheck(L_3);
			ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  L_4;
			L_4 = Task_ConfigureAwait_m0477031D48C23B8368049C62C53C33D32322EDCE(L_3, (bool)0, /*hidden argument*/NULL);
			V_2 = L_4;
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_5;
			L_5 = ConfiguredTaskAwaitable_GetAwaiter_m9F912D7DF74F087AFAF1F478CE59152DF22395A2_inline((ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E *)(&V_2), /*hidden argument*/NULL);
			V_1 = L_5;
			bool L_6;
			L_6 = ConfiguredTaskAwaiter_get_IsCompleted_m98056416CC6E5741A2201994591D27D127A17730((ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *)(&V_1), /*hidden argument*/NULL);
			if (L_6)
			{
				goto IL_0072;
			}
		}

IL_0032:
		{
			int32_t L_7 = 0;
			V_0 = L_7;
			__this->set_U3CU3E1__state_0(L_7);
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_8 = V_1;
			__this->set_U3CU3Eu__1_3(L_8);
			V_3 = __this;
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_9 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CShutdownAsyncCoreU3Ed__17_tBAF5B09E5D61F137535A7FD3283E8A265F211FBC_mC5583AFEA50C56C8E4EBF9BDAF16105C7E1FD352((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_9, (ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *)(&V_1), (U3CShutdownAsyncCoreU3Ed__17_tBAF5B09E5D61F137535A7FD3283E8A265F211FBC **)(&V_3), /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CShutdownAsyncCoreU3Ed__17_tBAF5B09E5D61F137535A7FD3283E8A265F211FBC_mC5583AFEA50C56C8E4EBF9BDAF16105C7E1FD352_RuntimeMethod_var);
			goto IL_00aa;
		}

IL_0056:
		{
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_10 = __this->get_U3CU3Eu__1_3();
			V_1 = L_10;
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * L_11 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_11, sizeof(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C ));
			int32_t L_12 = (-1);
			V_0 = L_12;
			__this->set_U3CU3E1__state_0(L_12);
		}

IL_0072:
		{
			ConfiguredTaskAwaiter_GetResult_m29A9880E9FCC4B8E9928B60E137FB53D0C8F0CE6((ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *)(&V_1), /*hidden argument*/NULL);
			goto IL_0096;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_007c;
		}
		throw e;
	}

CATCH_007c:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_13 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_14 = V_4;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_13, L_14, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00aa;
	} // end catch (depth: 1)

IL_0096:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_15 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_15, /*hidden argument*/NULL);
	}

IL_00aa:
	{
		return;
	}
}
// System.Void MagicOnion.GrpcChannelx/<ShutdownAsyncCore>d__17::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShutdownAsyncCoreU3Ed__17_SetStateMachine_m283CB4B6C19094B4A36FF663796873302587FF61 (U3CShutdownAsyncCoreU3Ed__17_tBAF5B09E5D61F137535A7FD3283E8A265F211FBC * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MagicOnion.GrpcChannelx/<ShutdownInternalAsync>d__26::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShutdownInternalAsyncU3Ed__26__ctor_mF603CF4C12137D93E55CB235183541018EE7657A (U3CShutdownInternalAsyncU3Ed__26_t5CAF2513D0D80A4B85B420DC910A51E7CC53F53F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MagicOnion.GrpcChannelx/<ShutdownInternalAsync>d__26::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShutdownInternalAsyncU3Ed__26_MoveNext_m1570C596F1A362248A5F89680BCF25A921D1BFBD (U3CShutdownInternalAsyncU3Ed__26_t5CAF2513D0D80A4B85B420DC910A51E7CC53F53F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CShutdownInternalAsyncU3Ed__26_t5CAF2513D0D80A4B85B420DC910A51E7CC53F53F_mE505556AD7CE193300E1EACFEC5CB1235C55B02B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CShutdownInternalAsyncU3Ed__26_t5CAF2513D0D80A4B85B420DC910A51E7CC53F53F * V_3 = NULL;
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c;
			}
		}

IL_000a:
		{
			goto IL_000e;
		}

IL_000c:
		{
			goto IL_005b;
		}

IL_000e:
		{
			// await _channel.ShutdownAsync().ConfigureAwait(false);
			GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * L_2 = __this->get_U3CU3E4__this_2();
			NullCheck(L_2);
			ChannelBase_t27741E6D85E1E4064949B777B040D975F3D400A9 * L_3 = L_2->get__channel_3();
			NullCheck(L_3);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_4;
			L_4 = ChannelBase_ShutdownAsync_m9E3D96850025A611947E62C91ECE8C8741656CB5(L_3, /*hidden argument*/NULL);
			NullCheck(L_4);
			ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  L_5;
			L_5 = Task_ConfigureAwait_m0477031D48C23B8368049C62C53C33D32322EDCE(L_4, (bool)0, /*hidden argument*/NULL);
			V_2 = L_5;
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_6;
			L_6 = ConfiguredTaskAwaitable_GetAwaiter_m9F912D7DF74F087AFAF1F478CE59152DF22395A2_inline((ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E *)(&V_2), /*hidden argument*/NULL);
			V_1 = L_6;
			bool L_7;
			L_7 = ConfiguredTaskAwaiter_get_IsCompleted_m98056416CC6E5741A2201994591D27D127A17730((ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *)(&V_1), /*hidden argument*/NULL);
			if (L_7)
			{
				goto IL_0077;
			}
		}

IL_0037:
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->set_U3CU3E1__state_0(L_8);
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_9 = V_1;
			__this->set_U3CU3Eu__1_3(L_9);
			V_3 = __this;
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_10 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CShutdownInternalAsyncU3Ed__26_t5CAF2513D0D80A4B85B420DC910A51E7CC53F53F_mE505556AD7CE193300E1EACFEC5CB1235C55B02B((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_10, (ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *)(&V_1), (U3CShutdownInternalAsyncU3Ed__26_t5CAF2513D0D80A4B85B420DC910A51E7CC53F53F **)(&V_3), /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CShutdownInternalAsyncU3Ed__26_t5CAF2513D0D80A4B85B420DC910A51E7CC53F53F_mE505556AD7CE193300E1EACFEC5CB1235C55B02B_RuntimeMethod_var);
			goto IL_00af;
		}

IL_005b:
		{
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_11 = __this->get_U3CU3Eu__1_3();
			V_1 = L_11;
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * L_12 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_12, sizeof(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C ));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
		}

IL_0077:
		{
			ConfiguredTaskAwaiter_GetResult_m29A9880E9FCC4B8E9928B60E137FB53D0C8F0CE6((ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *)(&V_1), /*hidden argument*/NULL);
			goto IL_009b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0081;
		}
		throw e;
	}

CATCH_0081:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_14 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_15 = V_4;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_14, L_15, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00af;
	} // end catch (depth: 1)

IL_009b:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_16 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_16, /*hidden argument*/NULL);
	}

IL_00af:
	{
		return;
	}
}
// System.Void MagicOnion.GrpcChannelx/<ShutdownInternalAsync>d__26::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShutdownInternalAsyncU3Ed__26_SetStateMachine_mBCADBC314620EBE3FC45B5C7C32BDBC1799A58E0 (U3CShutdownInternalAsyncU3Ed__26_t5CAF2513D0D80A4B85B420DC910A51E7CC53F53F * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MagicOnion.GrpcChannelx/<WaitForDisconnectAndDisposeAsync>d__21::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForDisconnectAndDisposeAsyncU3Ed__21__ctor_m3A2120FEB41C9737665E2F04AAC23384286FD8BE (U3CWaitForDisconnectAndDisposeAsyncU3Ed__21_t280549BD508F1BB867F4F32346F4B9D9A2D41C68 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MagicOnion.GrpcChannelx/<WaitForDisconnectAndDisposeAsync>d__21::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForDisconnectAndDisposeAsyncU3Ed__21_MoveNext_m3443E2A62BAD3A3CD3C333B3D217058795B54B3A (U3CWaitForDisconnectAndDisposeAsyncU3Ed__21_t280549BD508F1BB867F4F32346F4B9D9A2D41C68 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CWaitForDisconnectAndDisposeAsyncU3Ed__21_t280549BD508F1BB867F4F32346F4B9D9A2D41C68_mE43BD3AEEF8BB96507D207B36B5C6BDA5816A02A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3CWaitForDisconnectAndDisposeAsyncU3Ed__21_t280549BD508F1BB867F4F32346F4B9D9A2D41C68 * V_2 = NULL;
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c;
			}
		}

IL_000a:
		{
			goto IL_000e;
		}

IL_000c:
		{
			goto IL_0048;
		}

IL_000e:
		{
			// await waitForDisconnect;
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_2 = __this->get_waitForDisconnect_3();
			NullCheck(L_2);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_3;
			L_3 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_2, /*hidden argument*/NULL);
			V_1 = L_3;
			bool L_4;
			L_4 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), /*hidden argument*/NULL);
			if (L_4)
			{
				goto IL_0064;
			}
		}

IL_0024:
		{
			int32_t L_5 = 0;
			V_0 = L_5;
			__this->set_U3CU3E1__state_0(L_5);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_6 = V_1;
			__this->set_U3CU3Eu__1_5(L_6);
			V_2 = __this;
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_7 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CWaitForDisconnectAndDisposeAsyncU3Ed__21_t280549BD508F1BB867F4F32346F4B9D9A2D41C68_mE43BD3AEEF8BB96507D207B36B5C6BDA5816A02A((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_7, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), (U3CWaitForDisconnectAndDisposeAsyncU3Ed__21_t280549BD508F1BB867F4F32346F4B9D9A2D41C68 **)(&V_2), /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CWaitForDisconnectAndDisposeAsyncU3Ed__21_t280549BD508F1BB867F4F32346F4B9D9A2D41C68_mE43BD3AEEF8BB96507D207B36B5C6BDA5816A02A_RuntimeMethod_var);
			goto IL_00ac;
		}

IL_0048:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_8 = __this->get_U3CU3Eu__1_5();
			V_1 = L_8;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_9 = __this->get_address_of_U3CU3Eu__1_5();
			il2cpp_codegen_initobj(L_9, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_10 = (-1);
			V_0 = L_10;
			__this->set_U3CU3E1__state_0(L_10);
		}

IL_0064:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), /*hidden argument*/NULL);
			// DisposeStreamingHubClient(streamingHub);
			GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * L_11 = __this->get_U3CU3E4__this_4();
			RuntimeObject* L_12 = __this->get_streamingHub_2();
			NullCheck(L_11);
			GrpcChannelx_DisposeStreamingHubClient_mD2F120ADAC3E492C6F9F2814AAE820E3F066AE60(L_11, L_12, /*hidden argument*/NULL);
			goto IL_0098;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0080;
		}
		throw e;
	}

CATCH_0080:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_13 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_14 = V_3;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_13, L_14, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00ac;
	} // end catch (depth: 1)

IL_0098:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_15 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_15, /*hidden argument*/NULL);
	}

IL_00ac:
	{
		return;
	}
}
// System.Void MagicOnion.GrpcChannelx/<WaitForDisconnectAndDisposeAsync>d__21::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForDisconnectAndDisposeAsyncU3Ed__21_SetStateMachine_mC3A3D6D62615632BFD119BB140DEE135AF6278AE (U3CWaitForDisconnectAndDisposeAsyncU3Ed__21_t280549BD508F1BB867F4F32346F4B9D9A2D41C68 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GrpcCCoreChannelOptions_set_ChannelOptions_m280D376A513BA937D76C5E3E34DBA5868860BFC8_inline (GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public IReadOnlyList<ChannelOption> ChannelOptions { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CChannelOptionsU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GrpcCCoreChannelOptions_set_ChannelCredentials_m00FA7932180EAC0243394630C264A57B7C301683_inline (GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 * __this, ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E * ___value0, const RuntimeMethod* method)
{
	{
		// public ChannelCredentials ChannelCredentials { get; set; }
		ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E * L_0 = ___value0;
		__this->set_U3CChannelCredentialsU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GrpcChannelOptionsBag_t3A8A75BF4444B4683CCE7492D71C0E82275A62DF * CreateGrpcChannelContext_get_ChannelOptions_m8E62B029F8AA2C9E7E14A0E608A8F23943F57193_inline (CreateGrpcChannelContext_tB9ED19C9DEE05147585D686FB12F9F574329764B * __this, const RuntimeMethod* method)
{
	{
		// public GrpcChannelOptionsBag ChannelOptions { get; }
		GrpcChannelOptionsBag_t3A8A75BF4444B4683CCE7492D71C0E82275A62DF * L_0 = __this->get_U3CChannelOptionsU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF  CreateGrpcChannelContext_get_Target_m3406B7430EC5EE62795DF1FEAFA00DF9BD9B8DF7_inline (CreateGrpcChannelContext_tB9ED19C9DEE05147585D686FB12F9F574329764B * __this, const RuntimeMethod* method)
{
	{
		// public GrpcChannelTarget Target { get; }
		GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF  L_0 = __this->get_U3CTargetU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GrpcChannelTarget_get_Host_m57BC6648F51844808220DA8B4C198C0B958C8A20_inline (GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF * __this, const RuntimeMethod* method)
{
	{
		// public string Host { get; }
		String_t* L_0 = __this->get_U3CHostU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GrpcChannelTarget_get_Port_m3CB87BD3C76EC8030761713704B8A373D7283BEB_inline (GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF * __this, const RuntimeMethod* method)
{
	{
		// public int Port { get; }
		int32_t L_0 = __this->get_U3CPortU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GrpcChannelTarget_get_IsInsecure_mBE46F213D425E033774E0A5F16A7053F1187041F_inline (GrpcChannelTarget_t6115E02373987F1BA4E5D36BF71FAE82296281DF * __this, const RuntimeMethod* method)
{
	{
		// public bool IsInsecure { get; }
		bool L_0 = __this->get_U3CIsInsecureU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E * GrpcCCoreChannelOptions_get_ChannelCredentials_m07E4EB9F34BE72866CEF163B311DF8D1AFB56D75_inline (GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 * __this, const RuntimeMethod* method)
{
	{
		// public ChannelCredentials ChannelCredentials { get; set; }
		ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E * L_0 = __this->get_U3CChannelCredentialsU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E * ChannelCredentials_get_Insecure_m8D99B79F97F8B8C2D3609960E737647966A9A1F4_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E_il2cpp_TypeInfo_var);
		ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E * L_0 = ((ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E_StaticFields*)il2cpp_codegen_static_fields_for(ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E_il2cpp_TypeInfo_var))->get_InsecureInstance_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GrpcCCoreChannelOptions_get_ChannelOptions_mE5B355B7DFD22754A6A6F9E8A2D83699E0BD2DCB_inline (GrpcCCoreChannelOptions_tD84D80FDE4FB370280059E87555B4534D2AB8C22 * __this, const RuntimeMethod* method)
{
	{
		// public IReadOnlyList<ChannelOption> ChannelOptions { get; set; }
		RuntimeObject* L_0 = __this->get_U3CChannelOptionsU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CreateGrpcChannelContext_get_Provider_m91A5D7596BE905702969BB039CA4219A05ED7285_inline (CreateGrpcChannelContext_tB9ED19C9DEE05147585D686FB12F9F574329764B * __this, const RuntimeMethod* method)
{
	{
		// public IGrpcChannelProvider Provider { get; }
		RuntimeObject* L_0 = __this->get_U3CProviderU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GrpcChannelProviderHost_set_Provider_m63C143840919A2FCF009C354665D5FC11C6B92EE_inline (GrpcChannelProviderHost_t0313060C8CEE5ECBBFEE81A54E13951CBFBF32D1 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public IGrpcChannelProvider Provider { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CProviderU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GrpcChannelProviderHost_get_Provider_mF4E3EFE483EEB08B4BCB7281049A13041528A82F_inline (GrpcChannelProviderHost_t0313060C8CEE5ECBBFEE81A54E13951CBFBF32D1 * __this, const RuntimeMethod* method)
{
	{
		// public IGrpcChannelProvider Provider { get; private set; }
		RuntimeObject* L_0 = __this->get_U3CProviderU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GrpcChannelx_get_Id_m64141C20B4724EEC34817EA703AA9892701CE84C_inline (GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * __this, const RuntimeMethod* method)
{
	{
		// public int Id { get; }
		int32_t L_0 = __this->get_U3CIdU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * GrpcChannelx_get_TargetUri_m829529E4ABA37733226B8AD4D17FAABB92919BE9_inline (GrpcChannelx_tD4AF695EA9B01A90166B15678D6ABB39CC959A1A * __this, const RuntimeMethod* method)
{
	{
		// public Uri TargetUri { get; }
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_0 = __this->get_U3CTargetUriU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ChannelOption_get_Name_m7D1C506575899B8C8C6E5267241609CF33EEAC88_inline (ChannelOption_t220AB2C90AF6E7CEC603E337F7D70DD956976F2D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_name_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ChannelOption_get_Type_m523C82FC0FC670A049BA4398D9392070522D2734_inline (ChannelOption_t220AB2C90AF6E7CEC603E337F7D70DD956976F2D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_type_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  ConfiguredTaskAwaitable_GetAwaiter_m9F912D7DF74F087AFAF1F478CE59152DF22395A2_inline (ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E * __this, const RuntimeMethod* method)
{
	{
		ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_0 = __this->get_m_configuredTaskAwaiter_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
