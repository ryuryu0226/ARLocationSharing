#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Func`1<Grpc.Core.Metadata>
struct Func_1_t2A57F7D726BB13DAF0490B58D77D4274C0213480;
// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49;
// System.Func`1<Grpc.Core.Status>
struct Func_1_t3F3F27BA48EAA4AB3E85D1EFF978941619F2279B;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Grpc.Core.Metadata>>
struct Func_2_tDC364CA892B95BD8EDC9FFCB198E5BA0E361BE84;
// System.Func`2<System.Object,System.Threading.Tasks.Task`1<Grpc.Core.Metadata>>
struct Func_2_tCF123A6D0FA7C2BE859DFDDBE9BF6E2E1E775B13;
// System.Func`2<System.Object,Grpc.Core.Metadata>
struct Func_2_tA845FCB2B28E381495AACEEB5C4681194ACDA673;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`2<System.Object,Grpc.Core.Status>
struct Func_2_tD88B4071026BCB29A3050CBEC78122204D9C2D36;
// System.Collections.Generic.IEnumerator`1<Grpc.Core.Metadata/Entry>
struct IEnumerator_1_t45D3F39AFF65A9242C80F86F8EEE0A9144D1D114;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<Grpc.Core.Metadata/Entry>
struct List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.TaskFactory`1<Grpc.Core.Metadata>
struct TaskFactory_1_t962EE6F688DBFA8EFFA5471B50D606C1B0C2F0E7;
// System.Threading.Tasks.Task`1<Grpc.Core.Metadata>
struct Task_1_t5B7A30CFAF23C980E8DF8A2600B07982DF59D6F2;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// Grpc.Core.Metadata/Entry[]
struct EntryU5BU5D_t63F9DC6B2C823B21AB3AAEF5A43E6F06A4721DA4;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Grpc.Core.CallCredentials
struct CallCredentials_tA3EF393B2D204B6BE467BF6A119EB73B10E43BF7;
// Grpc.Core.CallCredentialsConfiguratorBase
struct CallCredentialsConfiguratorBase_t6192020FB3CA4D6A8C6648A1570D5B1121A9231C;
// Grpc.Core.CallInvoker
struct CallInvoker_t6099D93DBBF44A7447258DAA16C8D0ED76D7DDDE;
// System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// Grpc.Core.ChannelBase
struct ChannelBase_t27741E6D85E1E4064949B777B040D975F3D400A9;
// Grpc.Core.ChannelCredentials
struct ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E;
// Grpc.Core.ChannelCredentialsConfiguratorBase
struct ChannelCredentialsConfiguratorBase_t52E86B700F09115DB67F66866A2BDF4DA2F05B68;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// Grpc.Core.ContextPropagationOptions
struct ContextPropagationOptions_tEA8DEAC93B4C5028E0E8BBFFFF6966D5237A5D7D;
// Grpc.Core.ContextPropagationToken
struct ContextPropagationToken_tA4D9F93C718C73B7727D0C9BAD75CFC6ABBE06F5;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Grpc.Core.DeserializationContext
struct DeserializationContext_t9BCDFE5CA12337CFE1B279253E42B6A9EA5217CC;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Exception
struct Exception_t;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// Grpc.Core.KeyCertificatePair
struct KeyCertificatePair_tA0E29F1A2B9C02967DCEF3AEBF14D49AB346592C;
// Grpc.Core.Metadata
struct Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6;
// Grpc.Core.RpcException
struct RpcException_t6F91CC8B9147B9981612F75CF7E9CDBF7FB173AF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Grpc.Core.SerializationContext
struct SerializationContext_t86F13C62C3B4E4DAC598CE231784D6FD78B9B538;
// Grpc.Core.SslCredentials
struct SslCredentials_t149917768B7958A3C7B569C5879C5CAFC7F43D3C;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// Grpc.Core.VerifyPeerCallback
struct VerifyPeerCallback_t80B8E9DEB9B025308E05573E757CA8136A52DD9A;
// Grpc.Core.VerifyPeerContext
struct VerifyPeerContext_t98E84F9B487F65E5C51E7787813F3186FEC12A6C;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Grpc.Core.WriteOptions
struct WriteOptions_t23E6F1264BABB93DF8CF3FC4D80395D9590D7755;
// Grpc.Core.ChannelCredentials/InsecureCredentials
struct InsecureCredentials_tE3CFB2298C8F2D23049DBAE5F6452ADDE83FF2FB;
// Grpc.Core.Metadata/Entry
struct Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ContextPropagationOptions_tEA8DEAC93B4C5028E0E8BBFFFF6966D5237A5D7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_tB6C52F7749A16CE4F8F809EB053FCBC62636EBB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t2A57F7D726BB13DAF0490B58D77D4274C0213480_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t3F3F27BA48EAA4AB3E85D1EFF978941619F2279B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tA845FCB2B28E381495AACEEB5C4681194ACDA673_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tCF123A6D0FA7C2BE859DFDDBE9BF6E2E1E775B13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tD88B4071026BCB29A3050CBEC78122204D9C2D36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InsecureCredentials_tE3CFB2298C8F2D23049DBAE5F6452ADDE83FF2FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StatusCode_tB61C04113A55E52BD6341D431D6B3DD2F7B6E2F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_1_t5B7A30CFAF23C980E8DF8A2600B07982DF59D6F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WriteOptions_t23E6F1264BABB93DF8CF3FC4D80395D9590D7755_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral320772EF40302B49A179DB96BAD02224E97B4018;
IL2CPP_EXTERN_C String_t* _stringLiteral330132604A8C7C73B4775BFE93C8FBEC4857F022;
IL2CPP_EXTERN_C String_t* _stringLiteral61B4338BE86CB9213EE71FAD62B393B8922755E8;
IL2CPP_EXTERN_C String_t* _stringLiteral822EDE75F5970A676E660AB56E0A62A92F681766;
IL2CPP_EXTERN_C String_t* _stringLiteralA00F3DF646A4521C1DC3F40012285F4CA6DB6A43;
IL2CPP_EXTERN_C String_t* _stringLiteralCC5275F31A11D4AC091381249B0215D81AB03CF9;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralEFDA3D70B0D50B492DB756FABC3B4A4E00B0F8AF;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CShutdownAsyncCoreU3Ed__6_t271F14CF380B3E2733F13BF3B798BFE1EFFC0E39_mBC26306EE5121F24663759F339CA725F778F6A10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializationContext_PayloadAsNewBuffer_m270A0A2C266E488C39A0FAA34470859E939440FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializationContext_PayloadAsReadOnlySequence_m616A017C215DBBC6097A23D5311712C673A1C8CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1_Invoke_mB804CEAA8E360082FA24C54CDCEBEB8AB72A0081_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1_Invoke_mF4449CD26738B124EBD367418747D26CCED08391_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2_Invoke_m36644356C680BF20605B481EB91255BC38FC430A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2_Invoke_m740EF5730A5CACC3FD726142B7A2D715FB90538C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2_Invoke_mDDC2FE974D00D6CF82485E8EBFF71427C3287940_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GrpcPreconditions_CheckArgument_m6238CCC08E0176844EFC420947FC9373A3C8663C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GrpcPreconditions_CheckArgument_mC10479F3B2FA86CE9D9EEC35D6F1B12DAA7D9446_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GrpcPreconditions_CheckNotNull_TisEntry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6_m2A298E2A00DBB859B663738CDA219E74EA44EF1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GrpcPreconditions_CheckNotNull_TisMetadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8_mF3A772AF477B53692357B6EC8B696BECCF9CCC37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GrpcPreconditions_CheckNotNull_TisString_t_m1F597926534506F78BD38FDED70FD259B5E4C859_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GrpcPreconditions_CheckState_m1D18F7FA9669AB2FE25782B3E301179E7637113A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GrpcPreconditions_CheckState_mF8DA7FE3DD5DF9B22AE77142D17843C1037A10F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAB0C29FF0415A94C0CB5889BBCE41ED8A9B63E6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m6DEF2A5600EC37B7540AA0A3A5FD6C8CEF1C28A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m70E782EF381196248BAA83B2342FFAF3CAA5A933_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_CopyTo_m8AAFC229CF326A5187509268A9EFD616855A5CE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m571501E172ED700DA7BA0014DA88317B282A8B6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_m90D7C2C0D9DBA4A9B5ECAE583005A9FD08EF73BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_mA08EF5AA45FE42698C0504AF89124F9CABB42232_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m93D5A695011917793BBA5F600970EC7013FEF80E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mB4BD982D59AA9FDE9595A866ECD56D163EA3F37C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m48852DFC91F76F7A10E53BC27DE9126C54D8E5DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m07A83E9E28AD24DCDF32091405F7782AAE67D32A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mAF07A62E3C37EBE2361C242FAE01BF12F7464EB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m46D170B0060CE31F054C79282BD962398F4647A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializationContext_Complete_m880989E38F9C55CFE6C9F11774DE409481A960DD_RuntimeMethod_var;
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD;;
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_com;
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_com;;
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_pinvoke;
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_pinvoke;;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t;;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_com;;
struct Exception_t_marshaled_pinvoke;
struct Exception_t_marshaled_pinvoke;;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct EntryU5BU5D_t63F9DC6B2C823B21AB3AAEF5A43E6F06A4721DA4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tD054430B1853A512C89800A779E5543E48B5C514 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Grpc.Core.Metadata/Entry>
struct List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	EntryU5BU5D_t63F9DC6B2C823B21AB3AAEF5A43E6F06A4721DA4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537, ____items_1)); }
	inline EntryU5BU5D_t63F9DC6B2C823B21AB3AAEF5A43E6F06A4721DA4* get__items_1() const { return ____items_1; }
	inline EntryU5BU5D_t63F9DC6B2C823B21AB3AAEF5A43E6F06A4721DA4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(EntryU5BU5D_t63F9DC6B2C823B21AB3AAEF5A43E6F06A4721DA4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	EntryU5BU5D_t63F9DC6B2C823B21AB3AAEF5A43E6F06A4721DA4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537_StaticFields, ____emptyArray_5)); }
	inline EntryU5BU5D_t63F9DC6B2C823B21AB3AAEF5A43E6F06A4721DA4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline EntryU5BU5D_t63F9DC6B2C823B21AB3AAEF5A43E6F06A4721DA4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(EntryU5BU5D_t63F9DC6B2C823B21AB3AAEF5A43E6F06A4721DA4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Grpc.Core.CallCredentials
struct CallCredentials_tA3EF393B2D204B6BE467BF6A119EB73B10E43BF7  : public RuntimeObject
{
public:

public:
};


// Grpc.Core.CallCredentialsConfiguratorBase
struct CallCredentialsConfiguratorBase_t6192020FB3CA4D6A8C6648A1570D5B1121A9231C  : public RuntimeObject
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


// Grpc.Core.ChannelCredentialsConfiguratorBase
struct ChannelCredentialsConfiguratorBase_t52E86B700F09115DB67F66866A2BDF4DA2F05B68  : public RuntimeObject
{
public:

public:
};


// Grpc.Core.ContextPropagationOptions
struct ContextPropagationOptions_tEA8DEAC93B4C5028E0E8BBFFFF6966D5237A5D7D  : public RuntimeObject
{
public:
	// System.Boolean Grpc.Core.ContextPropagationOptions::propagateDeadline
	bool ___propagateDeadline_1;
	// System.Boolean Grpc.Core.ContextPropagationOptions::propagateCancellation
	bool ___propagateCancellation_2;

public:
	inline static int32_t get_offset_of_propagateDeadline_1() { return static_cast<int32_t>(offsetof(ContextPropagationOptions_tEA8DEAC93B4C5028E0E8BBFFFF6966D5237A5D7D, ___propagateDeadline_1)); }
	inline bool get_propagateDeadline_1() const { return ___propagateDeadline_1; }
	inline bool* get_address_of_propagateDeadline_1() { return &___propagateDeadline_1; }
	inline void set_propagateDeadline_1(bool value)
	{
		___propagateDeadline_1 = value;
	}

	inline static int32_t get_offset_of_propagateCancellation_2() { return static_cast<int32_t>(offsetof(ContextPropagationOptions_tEA8DEAC93B4C5028E0E8BBFFFF6966D5237A5D7D, ___propagateCancellation_2)); }
	inline bool get_propagateCancellation_2() const { return ___propagateCancellation_2; }
	inline bool* get_address_of_propagateCancellation_2() { return &___propagateCancellation_2; }
	inline void set_propagateCancellation_2(bool value)
	{
		___propagateCancellation_2 = value;
	}
};

struct ContextPropagationOptions_tEA8DEAC93B4C5028E0E8BBFFFF6966D5237A5D7D_StaticFields
{
public:
	// Grpc.Core.ContextPropagationOptions Grpc.Core.ContextPropagationOptions::Default
	ContextPropagationOptions_tEA8DEAC93B4C5028E0E8BBFFFF6966D5237A5D7D * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(ContextPropagationOptions_tEA8DEAC93B4C5028E0E8BBFFFF6966D5237A5D7D_StaticFields, ___Default_0)); }
	inline ContextPropagationOptions_tEA8DEAC93B4C5028E0E8BBFFFF6966D5237A5D7D * get_Default_0() const { return ___Default_0; }
	inline ContextPropagationOptions_tEA8DEAC93B4C5028E0E8BBFFFF6966D5237A5D7D ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(ContextPropagationOptions_tEA8DEAC93B4C5028E0E8BBFFFF6966D5237A5D7D * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Default_0), (void*)value);
	}
};


// Grpc.Core.ContextPropagationToken
struct ContextPropagationToken_tA4D9F93C718C73B7727D0C9BAD75CFC6ABBE06F5  : public RuntimeObject
{
public:

public:
};


// Grpc.Core.DeserializationContext
struct DeserializationContext_t9BCDFE5CA12337CFE1B279253E42B6A9EA5217CC  : public RuntimeObject
{
public:

public:
};


// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// Grpc.Core.Api.Utils.EncodingExtensions
struct EncodingExtensions_tBC826403E5CC79009B8D7F7BD44BBA33A021AAAE  : public RuntimeObject
{
public:

public:
};


// Grpc.Core.Utils.GrpcPreconditions
struct GrpcPreconditions_tD6547A0F94646AFDE4809AD93A6164E297523BEF  : public RuntimeObject
{
public:

public:
};


// Grpc.Core.KeyCertificatePair
struct KeyCertificatePair_tA0E29F1A2B9C02967DCEF3AEBF14D49AB346592C  : public RuntimeObject
{
public:
	// System.String Grpc.Core.KeyCertificatePair::certificateChain
	String_t* ___certificateChain_0;
	// System.String Grpc.Core.KeyCertificatePair::privateKey
	String_t* ___privateKey_1;

public:
	inline static int32_t get_offset_of_certificateChain_0() { return static_cast<int32_t>(offsetof(KeyCertificatePair_tA0E29F1A2B9C02967DCEF3AEBF14D49AB346592C, ___certificateChain_0)); }
	inline String_t* get_certificateChain_0() const { return ___certificateChain_0; }
	inline String_t** get_address_of_certificateChain_0() { return &___certificateChain_0; }
	inline void set_certificateChain_0(String_t* value)
	{
		___certificateChain_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___certificateChain_0), (void*)value);
	}

	inline static int32_t get_offset_of_privateKey_1() { return static_cast<int32_t>(offsetof(KeyCertificatePair_tA0E29F1A2B9C02967DCEF3AEBF14D49AB346592C, ___privateKey_1)); }
	inline String_t* get_privateKey_1() const { return ___privateKey_1; }
	inline String_t** get_address_of_privateKey_1() { return &___privateKey_1; }
	inline void set_privateKey_1(String_t* value)
	{
		___privateKey_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___privateKey_1), (void*)value);
	}
};


// Grpc.Core.Metadata
struct Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Grpc.Core.Metadata/Entry> Grpc.Core.Metadata::entries
	List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537 * ___entries_2;
	// System.Boolean Grpc.Core.Metadata::readOnly
	bool ___readOnly_3;

public:
	inline static int32_t get_offset_of_entries_2() { return static_cast<int32_t>(offsetof(Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8, ___entries_2)); }
	inline List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537 * get_entries_2() const { return ___entries_2; }
	inline List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537 ** get_address_of_entries_2() { return &___entries_2; }
	inline void set_entries_2(List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537 * value)
	{
		___entries_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_2), (void*)value);
	}

	inline static int32_t get_offset_of_readOnly_3() { return static_cast<int32_t>(offsetof(Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8, ___readOnly_3)); }
	inline bool get_readOnly_3() const { return ___readOnly_3; }
	inline bool* get_address_of_readOnly_3() { return &___readOnly_3; }
	inline void set_readOnly_3(bool value)
	{
		___readOnly_3 = value;
	}
};

struct Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8_StaticFields
{
public:
	// Grpc.Core.Metadata Grpc.Core.Metadata::Empty
	Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * ___Empty_0;
	// System.Text.Encoding Grpc.Core.Metadata::EncodingASCII
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___EncodingASCII_1;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8_StaticFields, ___Empty_0)); }
	inline Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * get_Empty_0() const { return ___Empty_0; }
	inline Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}

	inline static int32_t get_offset_of_EncodingASCII_1() { return static_cast<int32_t>(offsetof(Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8_StaticFields, ___EncodingASCII_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_EncodingASCII_1() const { return ___EncodingASCII_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_EncodingASCII_1() { return &___EncodingASCII_1; }
	inline void set_EncodingASCII_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___EncodingASCII_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EncodingASCII_1), (void*)value);
	}
};


// Grpc.Core.SerializationContext
struct SerializationContext_t86F13C62C3B4E4DAC598CE231784D6FD78B9B538  : public RuntimeObject
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

// Grpc.Core.VerifyPeerContext
struct VerifyPeerContext_t98E84F9B487F65E5C51E7787813F3186FEC12A6C  : public RuntimeObject
{
public:
	// System.String Grpc.Core.VerifyPeerContext::<TargetName>k__BackingField
	String_t* ___U3CTargetNameU3Ek__BackingField_0;
	// System.String Grpc.Core.VerifyPeerContext::<PeerPem>k__BackingField
	String_t* ___U3CPeerPemU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CTargetNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VerifyPeerContext_t98E84F9B487F65E5C51E7787813F3186FEC12A6C, ___U3CTargetNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CTargetNameU3Ek__BackingField_0() const { return ___U3CTargetNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CTargetNameU3Ek__BackingField_0() { return &___U3CTargetNameU3Ek__BackingField_0; }
	inline void set_U3CTargetNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CTargetNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTargetNameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPeerPemU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(VerifyPeerContext_t98E84F9B487F65E5C51E7787813F3186FEC12A6C, ___U3CPeerPemU3Ek__BackingField_1)); }
	inline String_t* get_U3CPeerPemU3Ek__BackingField_1() const { return ___U3CPeerPemU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CPeerPemU3Ek__BackingField_1() { return &___U3CPeerPemU3Ek__BackingField_1; }
	inline void set_U3CPeerPemU3Ek__BackingField_1(String_t* value)
	{
		___U3CPeerPemU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPeerPemU3Ek__BackingField_1), (void*)value);
	}
};


// Grpc.Core.Metadata/Entry
struct Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6  : public RuntimeObject
{
public:
	// System.String Grpc.Core.Metadata/Entry::key
	String_t* ___key_0;
	// System.String Grpc.Core.Metadata/Entry::value
	String_t* ___value_1;
	// System.Byte[] Grpc.Core.Metadata/Entry::valueBytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___valueBytes_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}

	inline static int32_t get_offset_of_valueBytes_2() { return static_cast<int32_t>(offsetof(Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6, ___valueBytes_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_valueBytes_2() const { return ___valueBytes_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_valueBytes_2() { return &___valueBytes_2; }
	inline void set_valueBytes_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___valueBytes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___valueBytes_2), (void*)value);
	}
};

struct Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6_StaticFields
{
public:
	// System.Byte[] Grpc.Core.Metadata/Entry::EmptyByteArray
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___EmptyByteArray_3;

public:
	inline static int32_t get_offset_of_EmptyByteArray_3() { return static_cast<int32_t>(offsetof(Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6_StaticFields, ___EmptyByteArray_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_EmptyByteArray_3() const { return ___EmptyByteArray_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_EmptyByteArray_3() { return &___EmptyByteArray_3; }
	inline void set_EmptyByteArray_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___EmptyByteArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyByteArray_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<Grpc.Core.Metadata/Entry>
struct Enumerator_tB6C52F7749A16CE4F8F809EB053FCBC62636EBB7 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6C52F7749A16CE4F8F809EB053FCBC62636EBB7, ___list_0)); }
	inline List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537 * get_list_0() const { return ___list_0; }
	inline List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6C52F7749A16CE4F8F809EB053FCBC62636EBB7, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6C52F7749A16CE4F8F809EB053FCBC62636EBB7, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6C52F7749A16CE4F8F809EB053FCBC62636EBB7, ___current_3)); }
	inline Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * get_current_3() const { return ___current_3; }
	inline Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// Grpc.Core.AsyncCallState
struct AsyncCallState_tBB7A4E2B6CBA827F49F6FB405B732DB868567AF9 
{
public:
	// System.Object Grpc.Core.AsyncCallState::responseHeadersAsync
	RuntimeObject * ___responseHeadersAsync_0;
	// System.Object Grpc.Core.AsyncCallState::getStatusFunc
	RuntimeObject * ___getStatusFunc_1;
	// System.Object Grpc.Core.AsyncCallState::getTrailersFunc
	RuntimeObject * ___getTrailersFunc_2;
	// System.Object Grpc.Core.AsyncCallState::disposeAction
	RuntimeObject * ___disposeAction_3;
	// System.Object Grpc.Core.AsyncCallState::callbackState
	RuntimeObject * ___callbackState_4;

public:
	inline static int32_t get_offset_of_responseHeadersAsync_0() { return static_cast<int32_t>(offsetof(AsyncCallState_tBB7A4E2B6CBA827F49F6FB405B732DB868567AF9, ___responseHeadersAsync_0)); }
	inline RuntimeObject * get_responseHeadersAsync_0() const { return ___responseHeadersAsync_0; }
	inline RuntimeObject ** get_address_of_responseHeadersAsync_0() { return &___responseHeadersAsync_0; }
	inline void set_responseHeadersAsync_0(RuntimeObject * value)
	{
		___responseHeadersAsync_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___responseHeadersAsync_0), (void*)value);
	}

	inline static int32_t get_offset_of_getStatusFunc_1() { return static_cast<int32_t>(offsetof(AsyncCallState_tBB7A4E2B6CBA827F49F6FB405B732DB868567AF9, ___getStatusFunc_1)); }
	inline RuntimeObject * get_getStatusFunc_1() const { return ___getStatusFunc_1; }
	inline RuntimeObject ** get_address_of_getStatusFunc_1() { return &___getStatusFunc_1; }
	inline void set_getStatusFunc_1(RuntimeObject * value)
	{
		___getStatusFunc_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getStatusFunc_1), (void*)value);
	}

	inline static int32_t get_offset_of_getTrailersFunc_2() { return static_cast<int32_t>(offsetof(AsyncCallState_tBB7A4E2B6CBA827F49F6FB405B732DB868567AF9, ___getTrailersFunc_2)); }
	inline RuntimeObject * get_getTrailersFunc_2() const { return ___getTrailersFunc_2; }
	inline RuntimeObject ** get_address_of_getTrailersFunc_2() { return &___getTrailersFunc_2; }
	inline void set_getTrailersFunc_2(RuntimeObject * value)
	{
		___getTrailersFunc_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getTrailersFunc_2), (void*)value);
	}

	inline static int32_t get_offset_of_disposeAction_3() { return static_cast<int32_t>(offsetof(AsyncCallState_tBB7A4E2B6CBA827F49F6FB405B732DB868567AF9, ___disposeAction_3)); }
	inline RuntimeObject * get_disposeAction_3() const { return ___disposeAction_3; }
	inline RuntimeObject ** get_address_of_disposeAction_3() { return &___disposeAction_3; }
	inline void set_disposeAction_3(RuntimeObject * value)
	{
		___disposeAction_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___disposeAction_3), (void*)value);
	}

	inline static int32_t get_offset_of_callbackState_4() { return static_cast<int32_t>(offsetof(AsyncCallState_tBB7A4E2B6CBA827F49F6FB405B732DB868567AF9, ___callbackState_4)); }
	inline RuntimeObject * get_callbackState_4() const { return ___callbackState_4; }
	inline RuntimeObject ** get_address_of_callbackState_4() { return &___callbackState_4; }
	inline void set_callbackState_4(RuntimeObject * value)
	{
		___callbackState_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbackState_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Grpc.Core.AsyncCallState
struct AsyncCallState_tBB7A4E2B6CBA827F49F6FB405B732DB868567AF9_marshaled_pinvoke
{
	Il2CppIUnknown* ___responseHeadersAsync_0;
	Il2CppIUnknown* ___getStatusFunc_1;
	Il2CppIUnknown* ___getTrailersFunc_2;
	Il2CppIUnknown* ___disposeAction_3;
	Il2CppIUnknown* ___callbackState_4;
};
// Native definition for COM marshalling of Grpc.Core.AsyncCallState
struct AsyncCallState_tBB7A4E2B6CBA827F49F6FB405B732DB868567AF9_marshaled_com
{
	Il2CppIUnknown* ___responseHeadersAsync_0;
	Il2CppIUnknown* ___getStatusFunc_1;
	Il2CppIUnknown* ___getTrailersFunc_2;
	Il2CppIUnknown* ___disposeAction_3;
	Il2CppIUnknown* ___callbackState_4;
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


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
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

// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
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


// System.SequencePosition
struct SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A 
{
public:
	// System.Object System.SequencePosition::_object
	RuntimeObject * ____object_0;
	// System.Int32 System.SequencePosition::_integer
	int32_t ____integer_1;

public:
	inline static int32_t get_offset_of__object_0() { return static_cast<int32_t>(offsetof(SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A, ____object_0)); }
	inline RuntimeObject * get__object_0() const { return ____object_0; }
	inline RuntimeObject ** get_address_of__object_0() { return &____object_0; }
	inline void set__object_0(RuntimeObject * value)
	{
		____object_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____object_0), (void*)value);
	}

	inline static int32_t get_offset_of__integer_1() { return static_cast<int32_t>(offsetof(SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A, ____integer_1)); }
	inline int32_t get__integer_1() const { return ____integer_1; }
	inline int32_t* get_address_of__integer_1() { return &____integer_1; }
	inline void set__integer_1(int32_t value)
	{
		____integer_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.SequencePosition
struct SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____integer_1;
};
// Native definition for COM marshalling of System.SequencePosition
struct SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____integer_1;
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


// Grpc.Core.ChannelCredentials/InsecureCredentials
struct InsecureCredentials_tE3CFB2298C8F2D23049DBAE5F6452ADDE83FF2FB  : public ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E
{
public:

public:
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


// System.Buffers.ReadOnlySequence`1<System.Byte>
struct ReadOnlySequence_1_t189383CAD339D18716638372580ECEAA6265A8CE 
{
public:
	// System.SequencePosition System.Buffers.ReadOnlySequence`1::_sequenceStart
	SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A  ____sequenceStart_0;
	// System.SequencePosition System.Buffers.ReadOnlySequence`1::_sequenceEnd
	SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A  ____sequenceEnd_1;

public:
	inline static int32_t get_offset_of__sequenceStart_0() { return static_cast<int32_t>(offsetof(ReadOnlySequence_1_t189383CAD339D18716638372580ECEAA6265A8CE, ____sequenceStart_0)); }
	inline SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A  get__sequenceStart_0() const { return ____sequenceStart_0; }
	inline SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A * get_address_of__sequenceStart_0() { return &____sequenceStart_0; }
	inline void set__sequenceStart_0(SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A  value)
	{
		____sequenceStart_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____sequenceStart_0))->____object_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__sequenceEnd_1() { return static_cast<int32_t>(offsetof(ReadOnlySequence_1_t189383CAD339D18716638372580ECEAA6265A8CE, ____sequenceEnd_1)); }
	inline SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A  get__sequenceEnd_1() const { return ____sequenceEnd_1; }
	inline SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A * get_address_of__sequenceEnd_1() { return &____sequenceEnd_1; }
	inline void set__sequenceEnd_1(SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A  value)
	{
		____sequenceEnd_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____sequenceEnd_1))->____object_0), (void*)NULL);
	}
};

struct ReadOnlySequence_1_t189383CAD339D18716638372580ECEAA6265A8CE_StaticFields
{
public:
	// System.Buffers.ReadOnlySequence`1<T> System.Buffers.ReadOnlySequence`1::Empty
	ReadOnlySequence_1_t189383CAD339D18716638372580ECEAA6265A8CE  ___Empty_2;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(ReadOnlySequence_1_t189383CAD339D18716638372580ECEAA6265A8CE_StaticFields, ___Empty_2)); }
	inline ReadOnlySequence_1_t189383CAD339D18716638372580ECEAA6265A8CE  get_Empty_2() const { return ___Empty_2; }
	inline ReadOnlySequence_1_t189383CAD339D18716638372580ECEAA6265A8CE * get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(ReadOnlySequence_1_t189383CAD339D18716638372580ECEAA6265A8CE  value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Empty_2))->____sequenceStart_0))->____object_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Empty_2))->____sequenceEnd_1))->____object_0), (void*)NULL);
		#endif
	}
};


// Grpc.Core.Internal.CallFlags
struct CallFlags_t11B9C31674995C1780FB2A90D6560B19974F6F40 
{
public:
	// System.Int32 Grpc.Core.Internal.CallFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CallFlags_t11B9C31674995C1780FB2A90D6560B19974F6F40, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// Grpc.Core.MethodType
struct MethodType_tA60CE274F556B0C06A72511964663E1F637C9598 
{
public:
	// System.Int32 Grpc.Core.MethodType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MethodType_tA60CE274F556B0C06A72511964663E1F637C9598, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Grpc.Core.StatusCode
struct StatusCode_tB61C04113A55E52BD6341D431D6B3DD2F7B6E2F0 
{
public:
	// System.Int32 Grpc.Core.StatusCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StatusCode_tB61C04113A55E52BD6341D431D6B3DD2F7B6E2F0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// Grpc.Core.WriteFlags
struct WriteFlags_tD1AD84AF7BB4714696A4A34351147C1FBD7F1A46 
{
public:
	// System.Int32 Grpc.Core.WriteFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WriteFlags_tD1AD84AF7BB4714696A4A34351147C1FBD7F1A46, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task`1<Grpc.Core.Metadata>
struct Task_1_t5B7A30CFAF23C980E8DF8A2600B07982DF59D6F2  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t5B7A30CFAF23C980E8DF8A2600B07982DF59D6F2, ___m_result_22)); }
	inline Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * get_m_result_22() const { return ___m_result_22; }
	inline Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_t5B7A30CFAF23C980E8DF8A2600B07982DF59D6F2_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t962EE6F688DBFA8EFFA5471B50D606C1B0C2F0E7 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tDC364CA892B95BD8EDC9FFCB198E5BA0E361BE84 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t5B7A30CFAF23C980E8DF8A2600B07982DF59D6F2_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t962EE6F688DBFA8EFFA5471B50D606C1B0C2F0E7 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t962EE6F688DBFA8EFFA5471B50D606C1B0C2F0E7 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t962EE6F688DBFA8EFFA5471B50D606C1B0C2F0E7 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t5B7A30CFAF23C980E8DF8A2600B07982DF59D6F2_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_tDC364CA892B95BD8EDC9FFCB198E5BA0E361BE84 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_tDC364CA892B95BD8EDC9FFCB198E5BA0E361BE84 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_tDC364CA892B95BD8EDC9FFCB198E5BA0E361BE84 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
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

// Grpc.Core.CallOptions
struct CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B 
{
public:
	// Grpc.Core.Metadata Grpc.Core.CallOptions::headers
	Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * ___headers_0;
	// System.Nullable`1<System.DateTime> Grpc.Core.CallOptions::deadline
	Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  ___deadline_1;
	// System.Threading.CancellationToken Grpc.Core.CallOptions::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_2;
	// Grpc.Core.WriteOptions Grpc.Core.CallOptions::writeOptions
	WriteOptions_t23E6F1264BABB93DF8CF3FC4D80395D9590D7755 * ___writeOptions_3;
	// Grpc.Core.ContextPropagationToken Grpc.Core.CallOptions::propagationToken
	ContextPropagationToken_tA4D9F93C718C73B7727D0C9BAD75CFC6ABBE06F5 * ___propagationToken_4;
	// Grpc.Core.CallCredentials Grpc.Core.CallOptions::credentials
	CallCredentials_tA3EF393B2D204B6BE467BF6A119EB73B10E43BF7 * ___credentials_5;
	// Grpc.Core.Internal.CallFlags Grpc.Core.CallOptions::flags
	int32_t ___flags_6;

public:
	inline static int32_t get_offset_of_headers_0() { return static_cast<int32_t>(offsetof(CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B, ___headers_0)); }
	inline Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * get_headers_0() const { return ___headers_0; }
	inline Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 ** get_address_of_headers_0() { return &___headers_0; }
	inline void set_headers_0(Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * value)
	{
		___headers_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___headers_0), (void*)value);
	}

	inline static int32_t get_offset_of_deadline_1() { return static_cast<int32_t>(offsetof(CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B, ___deadline_1)); }
	inline Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  get_deadline_1() const { return ___deadline_1; }
	inline Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * get_address_of_deadline_1() { return &___deadline_1; }
	inline void set_deadline_1(Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  value)
	{
		___deadline_1 = value;
	}

	inline static int32_t get_offset_of_cancellationToken_2() { return static_cast<int32_t>(offsetof(CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B, ___cancellationToken_2)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_2() const { return ___cancellationToken_2; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_2() { return &___cancellationToken_2; }
	inline void set_cancellationToken_2(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_2))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_writeOptions_3() { return static_cast<int32_t>(offsetof(CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B, ___writeOptions_3)); }
	inline WriteOptions_t23E6F1264BABB93DF8CF3FC4D80395D9590D7755 * get_writeOptions_3() const { return ___writeOptions_3; }
	inline WriteOptions_t23E6F1264BABB93DF8CF3FC4D80395D9590D7755 ** get_address_of_writeOptions_3() { return &___writeOptions_3; }
	inline void set_writeOptions_3(WriteOptions_t23E6F1264BABB93DF8CF3FC4D80395D9590D7755 * value)
	{
		___writeOptions_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___writeOptions_3), (void*)value);
	}

	inline static int32_t get_offset_of_propagationToken_4() { return static_cast<int32_t>(offsetof(CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B, ___propagationToken_4)); }
	inline ContextPropagationToken_tA4D9F93C718C73B7727D0C9BAD75CFC6ABBE06F5 * get_propagationToken_4() const { return ___propagationToken_4; }
	inline ContextPropagationToken_tA4D9F93C718C73B7727D0C9BAD75CFC6ABBE06F5 ** get_address_of_propagationToken_4() { return &___propagationToken_4; }
	inline void set_propagationToken_4(ContextPropagationToken_tA4D9F93C718C73B7727D0C9BAD75CFC6ABBE06F5 * value)
	{
		___propagationToken_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___propagationToken_4), (void*)value);
	}

	inline static int32_t get_offset_of_credentials_5() { return static_cast<int32_t>(offsetof(CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B, ___credentials_5)); }
	inline CallCredentials_tA3EF393B2D204B6BE467BF6A119EB73B10E43BF7 * get_credentials_5() const { return ___credentials_5; }
	inline CallCredentials_tA3EF393B2D204B6BE467BF6A119EB73B10E43BF7 ** get_address_of_credentials_5() { return &___credentials_5; }
	inline void set_credentials_5(CallCredentials_tA3EF393B2D204B6BE467BF6A119EB73B10E43BF7 * value)
	{
		___credentials_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___credentials_5), (void*)value);
	}

	inline static int32_t get_offset_of_flags_6() { return static_cast<int32_t>(offsetof(CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B, ___flags_6)); }
	inline int32_t get_flags_6() const { return ___flags_6; }
	inline int32_t* get_address_of_flags_6() { return &___flags_6; }
	inline void set_flags_6(int32_t value)
	{
		___flags_6 = value;
	}
};

// Native definition for P/Invoke marshalling of Grpc.Core.CallOptions
struct CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B_marshaled_pinvoke
{
	Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * ___headers_0;
	Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  ___deadline_1;
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_pinvoke ___cancellationToken_2;
	WriteOptions_t23E6F1264BABB93DF8CF3FC4D80395D9590D7755 * ___writeOptions_3;
	ContextPropagationToken_tA4D9F93C718C73B7727D0C9BAD75CFC6ABBE06F5 * ___propagationToken_4;
	CallCredentials_tA3EF393B2D204B6BE467BF6A119EB73B10E43BF7 * ___credentials_5;
	int32_t ___flags_6;
};
// Native definition for COM marshalling of Grpc.Core.CallOptions
struct CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B_marshaled_com
{
	Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * ___headers_0;
	Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  ___deadline_1;
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_com ___cancellationToken_2;
	WriteOptions_t23E6F1264BABB93DF8CF3FC4D80395D9590D7755 * ___writeOptions_3;
	ContextPropagationToken_tA4D9F93C718C73B7727D0C9BAD75CFC6ABBE06F5 * ___propagationToken_4;
	CallCredentials_tA3EF393B2D204B6BE467BF6A119EB73B10E43BF7 * ___credentials_5;
	int32_t ___flags_6;
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

// Grpc.Core.Status
struct Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035 
{
public:
	// Grpc.Core.StatusCode Grpc.Core.Status::<StatusCode>k__BackingField
	int32_t ___U3CStatusCodeU3Ek__BackingField_2;
	// System.String Grpc.Core.Status::<Detail>k__BackingField
	String_t* ___U3CDetailU3Ek__BackingField_3;
	// System.Exception Grpc.Core.Status::<DebugException>k__BackingField
	Exception_t * ___U3CDebugExceptionU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CStatusCodeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035, ___U3CStatusCodeU3Ek__BackingField_2)); }
	inline int32_t get_U3CStatusCodeU3Ek__BackingField_2() const { return ___U3CStatusCodeU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CStatusCodeU3Ek__BackingField_2() { return &___U3CStatusCodeU3Ek__BackingField_2; }
	inline void set_U3CStatusCodeU3Ek__BackingField_2(int32_t value)
	{
		___U3CStatusCodeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CDetailU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035, ___U3CDetailU3Ek__BackingField_3)); }
	inline String_t* get_U3CDetailU3Ek__BackingField_3() const { return ___U3CDetailU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CDetailU3Ek__BackingField_3() { return &___U3CDetailU3Ek__BackingField_3; }
	inline void set_U3CDetailU3Ek__BackingField_3(String_t* value)
	{
		___U3CDetailU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDetailU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDebugExceptionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035, ___U3CDebugExceptionU3Ek__BackingField_4)); }
	inline Exception_t * get_U3CDebugExceptionU3Ek__BackingField_4() const { return ___U3CDebugExceptionU3Ek__BackingField_4; }
	inline Exception_t ** get_address_of_U3CDebugExceptionU3Ek__BackingField_4() { return &___U3CDebugExceptionU3Ek__BackingField_4; }
	inline void set_U3CDebugExceptionU3Ek__BackingField_4(Exception_t * value)
	{
		___U3CDebugExceptionU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDebugExceptionU3Ek__BackingField_4), (void*)value);
	}
};

struct Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035_StaticFields
{
public:
	// Grpc.Core.Status Grpc.Core.Status::DefaultSuccess
	Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035  ___DefaultSuccess_0;
	// Grpc.Core.Status Grpc.Core.Status::DefaultCancelled
	Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035  ___DefaultCancelled_1;

public:
	inline static int32_t get_offset_of_DefaultSuccess_0() { return static_cast<int32_t>(offsetof(Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035_StaticFields, ___DefaultSuccess_0)); }
	inline Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035  get_DefaultSuccess_0() const { return ___DefaultSuccess_0; }
	inline Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035 * get_address_of_DefaultSuccess_0() { return &___DefaultSuccess_0; }
	inline void set_DefaultSuccess_0(Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035  value)
	{
		___DefaultSuccess_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___DefaultSuccess_0))->___U3CDetailU3Ek__BackingField_3), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___DefaultSuccess_0))->___U3CDebugExceptionU3Ek__BackingField_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_DefaultCancelled_1() { return static_cast<int32_t>(offsetof(Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035_StaticFields, ___DefaultCancelled_1)); }
	inline Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035  get_DefaultCancelled_1() const { return ___DefaultCancelled_1; }
	inline Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035 * get_address_of_DefaultCancelled_1() { return &___DefaultCancelled_1; }
	inline void set_DefaultCancelled_1(Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035  value)
	{
		___DefaultCancelled_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___DefaultCancelled_1))->___U3CDetailU3Ek__BackingField_3), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___DefaultCancelled_1))->___U3CDebugExceptionU3Ek__BackingField_4), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of Grpc.Core.Status
struct Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035_marshaled_pinvoke
{
	int32_t ___U3CStatusCodeU3Ek__BackingField_2;
	char* ___U3CDetailU3Ek__BackingField_3;
	Exception_t_marshaled_pinvoke* ___U3CDebugExceptionU3Ek__BackingField_4;
};
// Native definition for COM marshalling of Grpc.Core.Status
struct Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035_marshaled_com
{
	int32_t ___U3CStatusCodeU3Ek__BackingField_2;
	Il2CppChar* ___U3CDetailU3Ek__BackingField_3;
	Exception_t_marshaled_com* ___U3CDebugExceptionU3Ek__BackingField_4;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// Grpc.Core.WriteOptions
struct WriteOptions_t23E6F1264BABB93DF8CF3FC4D80395D9590D7755  : public RuntimeObject
{
public:
	// Grpc.Core.WriteFlags Grpc.Core.WriteOptions::flags
	int32_t ___flags_1;

public:
	inline static int32_t get_offset_of_flags_1() { return static_cast<int32_t>(offsetof(WriteOptions_t23E6F1264BABB93DF8CF3FC4D80395D9590D7755, ___flags_1)); }
	inline int32_t get_flags_1() const { return ___flags_1; }
	inline int32_t* get_address_of_flags_1() { return &___flags_1; }
	inline void set_flags_1(int32_t value)
	{
		___flags_1 = value;
	}
};

struct WriteOptions_t23E6F1264BABB93DF8CF3FC4D80395D9590D7755_StaticFields
{
public:
	// Grpc.Core.WriteOptions Grpc.Core.WriteOptions::Default
	WriteOptions_t23E6F1264BABB93DF8CF3FC4D80395D9590D7755 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(WriteOptions_t23E6F1264BABB93DF8CF3FC4D80395D9590D7755_StaticFields, ___Default_0)); }
	inline WriteOptions_t23E6F1264BABB93DF8CF3FC4D80395D9590D7755 * get_Default_0() const { return ___Default_0; }
	inline WriteOptions_t23E6F1264BABB93DF8CF3FC4D80395D9590D7755 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(WriteOptions_t23E6F1264BABB93DF8CF3FC4D80395D9590D7755 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Default_0), (void*)value);
	}
};


// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<Grpc.Core.Metadata>
struct Func_1_t2A57F7D726BB13DAF0490B58D77D4274C0213480  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<Grpc.Core.Status>
struct Func_1_t3F3F27BA48EAA4AB3E85D1EFF978941619F2279B  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Threading.Tasks.Task`1<Grpc.Core.Metadata>>
struct Func_2_tCF123A6D0FA7C2BE859DFDDBE9BF6E2E1E775B13  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,Grpc.Core.Metadata>
struct Func_2_tA845FCB2B28E381495AACEEB5C4681194ACDA673  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,Grpc.Core.Status>
struct Func_2_tD88B4071026BCB29A3050CBEC78122204D9C2D36  : public MulticastDelegate_t
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


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
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


// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Grpc.Core.RpcException
struct RpcException_t6F91CC8B9147B9981612F75CF7E9CDBF7FB173AF  : public Exception_t
{
public:
	// Grpc.Core.Status Grpc.Core.RpcException::status
	Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035  ___status_17;
	// Grpc.Core.Metadata Grpc.Core.RpcException::trailers
	Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * ___trailers_18;

public:
	inline static int32_t get_offset_of_status_17() { return static_cast<int32_t>(offsetof(RpcException_t6F91CC8B9147B9981612F75CF7E9CDBF7FB173AF, ___status_17)); }
	inline Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035  get_status_17() const { return ___status_17; }
	inline Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035 * get_address_of_status_17() { return &___status_17; }
	inline void set_status_17(Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035  value)
	{
		___status_17 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___status_17))->___U3CDetailU3Ek__BackingField_3), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___status_17))->___U3CDebugExceptionU3Ek__BackingField_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_trailers_18() { return static_cast<int32_t>(offsetof(RpcException_t6F91CC8B9147B9981612F75CF7E9CDBF7FB173AF, ___trailers_18)); }
	inline Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * get_trailers_18() const { return ___trailers_18; }
	inline Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 ** get_address_of_trailers_18() { return &___trailers_18; }
	inline void set_trailers_18(Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * value)
	{
		___trailers_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trailers_18), (void*)value);
	}
};


// Grpc.Core.VerifyPeerCallback
struct VerifyPeerCallback_t80B8E9DEB9B025308E05573E757CA8136A52DD9A  : public MulticastDelegate_t
{
public:

public:
};


// Grpc.Core.ChannelBase/<ShutdownAsyncCore>d__6
struct U3CShutdownAsyncCoreU3Ed__6_t271F14CF380B3E2733F13BF3B798BFE1EFFC0E39 
{
public:
	// System.Int32 Grpc.Core.ChannelBase/<ShutdownAsyncCore>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Grpc.Core.ChannelBase/<ShutdownAsyncCore>d__6::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CShutdownAsyncCoreU3Ed__6_t271F14CF380B3E2733F13BF3B798BFE1EFFC0E39, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CShutdownAsyncCoreU3Ed__6_t271F14CF380B3E2733F13BF3B798BFE1EFFC0E39, ___U3CU3Et__builder_1)); }
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
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// Grpc.Core.Metadata/Entry[]
struct EntryU5BU5D_t63F9DC6B2C823B21AB3AAEF5A43E6F06A4721DA4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * m_Items[1];

public:
	inline Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
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

IL2CPP_EXTERN_C void CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshal_pinvoke(const CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD& unmarshaled, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshal_pinvoke_back(const CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_pinvoke& marshaled, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD& unmarshaled);
IL2CPP_EXTERN_C void CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshal_pinvoke_cleanup(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshal_com(const CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD& unmarshaled, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_com& marshaled);
IL2CPP_EXTERN_C void CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshal_com_back(const CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_com& marshaled, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD& unmarshaled);
IL2CPP_EXTERN_C void CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshal_com_cleanup(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_com& marshaled);
IL2CPP_EXTERN_C void Exception_t_marshal_pinvoke(const Exception_t& unmarshaled, Exception_t_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Exception_t_marshal_pinvoke_back(const Exception_t_marshaled_pinvoke& marshaled, Exception_t& unmarshaled);
IL2CPP_EXTERN_C void Exception_t_marshal_pinvoke_cleanup(Exception_t_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Exception_t_marshal_com(const Exception_t& unmarshaled, Exception_t_marshaled_com& marshaled);
IL2CPP_EXTERN_C void Exception_t_marshal_com_back(const Exception_t_marshaled_com& marshaled, Exception_t& unmarshaled);
IL2CPP_EXTERN_C void Exception_t_marshal_com_cleanup(Exception_t_marshaled_com& marshaled);

// !1 System.Func`2<System.Object,System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E_gshared (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___arg0, const RuntimeMethod* method);
// !0 System.Func`1<Grpc.Core.Status>::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035  Func_1_Invoke_mF4449CD26738B124EBD367418747D26CCED08391_gshared (Func_1_t3F3F27BA48EAA4AB3E85D1EFF978941619F2279B * __this, const RuntimeMethod* method);
// !1 System.Func`2<System.Object,Grpc.Core.Status>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035  Func_2_Invoke_m740EF5730A5CACC3FD726142B7A2D715FB90538C_gshared (Func_2_tD88B4071026BCB29A3050CBEC78122204D9C2D36 * __this, RuntimeObject * ___arg0, const RuntimeMethod* method);
// !0 System.Func`1<System.Object>::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.DateTime>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB_gshared (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method);
// T Grpc.Core.Utils.GrpcPreconditions::CheckNotNull<System.Object>(T,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GrpcPreconditions_CheckNotNull_TisRuntimeObject_m881C8608B71F7EF97D8A2D80D49832F554B5BFFC_gshared (RuntimeObject * ___reference0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Grpc.Core.ChannelBase/<ShutdownAsyncCore>d__6>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CShutdownAsyncCoreU3Ed__6_t271F14CF380B3E2733F13BF3B798BFE1EFFC0E39_mBC26306EE5121F24663759F339CA725F778F6A10_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CShutdownAsyncCoreU3Ed__6_t271F14CF380B3E2733F13BF3B798BFE1EFFC0E39 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m4474628ACB239463EEF6742E298897E550641533_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// T Grpc.Core.Utils.GrpcPreconditions::CheckNotNull<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GrpcPreconditions_CheckNotNull_TisRuntimeObject_m2A4EACA9BB5AAB2C57B7CB6DBEAEAE363B9D2C86_gshared (RuntimeObject * ___reference0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mFC500A19C486C8ED4E9F3BDBA9B079602D647741_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, RuntimeObject * ___item1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(!0[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mAF2E422E12551DE01B8EAAE71A2A4E1B91BD79DF_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);

// System.Void Grpc.Core.AsyncCallState::.ctor(System.Func`2<System.Object,System.Threading.Tasks.Task`1<Grpc.Core.Metadata>>,System.Func`2<System.Object,Grpc.Core.Status>,System.Func`2<System.Object,Grpc.Core.Metadata>,System.Action`1<System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncCallState__ctor_mAF2F026B2DDF4FD5B2336455FD66E253CBB586ED (AsyncCallState_tBB7A4E2B6CBA827F49F6FB405B732DB868567AF9 * __this, Func_2_tCF123A6D0FA7C2BE859DFDDBE9BF6E2E1E775B13 * ___responseHeadersAsync0, Func_2_tD88B4071026BCB29A3050CBEC78122204D9C2D36 * ___getStatusFunc1, Func_2_tA845FCB2B28E381495AACEEB5C4681194ACDA673 * ___getTrailersFunc2, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___disposeAction3, RuntimeObject * ___callbackState4, const RuntimeMethod* method);
// !1 System.Func`2<System.Object,System.Threading.Tasks.Task`1<Grpc.Core.Metadata>>::Invoke(!0)
inline Task_1_t5B7A30CFAF23C980E8DF8A2600B07982DF59D6F2 * Func_2_Invoke_mDDC2FE974D00D6CF82485E8EBFF71427C3287940 (Func_2_tCF123A6D0FA7C2BE859DFDDBE9BF6E2E1E775B13 * __this, RuntimeObject * ___arg0, const RuntimeMethod* method)
{
	return ((  Task_1_t5B7A30CFAF23C980E8DF8A2600B07982DF59D6F2 * (*) (Func_2_tCF123A6D0FA7C2BE859DFDDBE9BF6E2E1E775B13 *, RuntimeObject *, const RuntimeMethod*))Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E_gshared)(__this, ___arg0, method);
}
// System.Threading.Tasks.Task`1<Grpc.Core.Metadata> Grpc.Core.AsyncCallState::ResponseHeadersAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t5B7A30CFAF23C980E8DF8A2600B07982DF59D6F2 * AsyncCallState_ResponseHeadersAsync_m70B30B86ECEB1FCACC356F2F3373F2CA0FA9A773 (AsyncCallState_tBB7A4E2B6CBA827F49F6FB405B732DB868567AF9 * __this, const RuntimeMethod* method);
// !0 System.Func`1<Grpc.Core.Status>::Invoke()
inline Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035  Func_1_Invoke_mF4449CD26738B124EBD367418747D26CCED08391 (Func_1_t3F3F27BA48EAA4AB3E85D1EFF978941619F2279B * __this, const RuntimeMethod* method)
{
	return ((  Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035  (*) (Func_1_t3F3F27BA48EAA4AB3E85D1EFF978941619F2279B *, const RuntimeMethod*))Func_1_Invoke_mF4449CD26738B124EBD367418747D26CCED08391_gshared)(__this, method);
}
// !1 System.Func`2<System.Object,Grpc.Core.Status>::Invoke(!0)
inline Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035  Func_2_Invoke_m740EF5730A5CACC3FD726142B7A2D715FB90538C (Func_2_tD88B4071026BCB29A3050CBEC78122204D9C2D36 * __this, RuntimeObject * ___arg0, const RuntimeMethod* method)
{
	return ((  Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035  (*) (Func_2_tD88B4071026BCB29A3050CBEC78122204D9C2D36 *, RuntimeObject *, const RuntimeMethod*))Func_2_Invoke_m740EF5730A5CACC3FD726142B7A2D715FB90538C_gshared)(__this, ___arg0, method);
}
// Grpc.Core.Status Grpc.Core.AsyncCallState::GetStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035  AsyncCallState_GetStatus_m8672BAFF41DB382339A7670373956CC5FFB27A2D (AsyncCallState_tBB7A4E2B6CBA827F49F6FB405B732DB868567AF9 * __this, const RuntimeMethod* method);
// !0 System.Func`1<Grpc.Core.Metadata>::Invoke()
inline Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * Func_1_Invoke_mB804CEAA8E360082FA24C54CDCEBEB8AB72A0081 (Func_1_t2A57F7D726BB13DAF0490B58D77D4274C0213480 * __this, const RuntimeMethod* method)
{
	return ((  Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * (*) (Func_1_t2A57F7D726BB13DAF0490B58D77D4274C0213480 *, const RuntimeMethod*))Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared)(__this, method);
}
// !1 System.Func`2<System.Object,Grpc.Core.Metadata>::Invoke(!0)
inline Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * Func_2_Invoke_m36644356C680BF20605B481EB91255BC38FC430A (Func_2_tA845FCB2B28E381495AACEEB5C4681194ACDA673 * __this, RuntimeObject * ___arg0, const RuntimeMethod* method)
{
	return ((  Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * (*) (Func_2_tA845FCB2B28E381495AACEEB5C4681194ACDA673 *, RuntimeObject *, const RuntimeMethod*))Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E_gshared)(__this, ___arg0, method);
}
// Grpc.Core.Metadata Grpc.Core.AsyncCallState::GetTrailers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * AsyncCallState_GetTrailers_m94B728E17B8BD73DE2E7BF37427981053D336B2E (AsyncCallState_tBB7A4E2B6CBA827F49F6FB405B732DB868567AF9 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
inline void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744 (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *, RuntimeObject *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void Grpc.Core.AsyncCallState::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncCallState_Dispose_m028D365B2071DC0095E400A99D4C9D5573CDAE53 (AsyncCallState_tBB7A4E2B6CBA827F49F6FB405B732DB868567AF9 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// Grpc.Core.Metadata Grpc.Core.CallOptions::get_Headers()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * CallOptions_get_Headers_m7DB2D6045E675B5EADFAB4E7790E9861FF9B791D_inline (CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B * __this, const RuntimeMethod* method);
// System.Nullable`1<System.DateTime> Grpc.Core.CallOptions::get_Deadline()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  CallOptions_get_Deadline_mDF9B3BB905CEEEDDCF8F9536525B637F071528FC_inline (CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B * __this, const RuntimeMethod* method);
// System.Threading.CancellationToken Grpc.Core.CallOptions::get_CancellationToken()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  CallOptions_get_CancellationToken_mC631E51DD2518E4C41B2EA2426445CC6558F31A2_inline (CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B * __this, const RuntimeMethod* method);
// Grpc.Core.WriteOptions Grpc.Core.CallOptions::get_WriteOptions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WriteOptions_t23E6F1264BABB93DF8CF3FC4D80395D9590D7755 * CallOptions_get_WriteOptions_m0B6F41F1B39E6508CD6CB8F6680B04181856E411_inline (CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B * __this, const RuntimeMethod* method);
// Grpc.Core.ContextPropagationToken Grpc.Core.CallOptions::get_PropagationToken()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ContextPropagationToken_tA4D9F93C718C73B7727D0C9BAD75CFC6ABBE06F5 * CallOptions_get_PropagationToken_mEB07DD79D1DB3488F7095420531F4A3DAE59C67C_inline (CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B * __this, const RuntimeMethod* method);
// Grpc.Core.CallCredentials Grpc.Core.CallOptions::get_Credentials()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CallCredentials_tA3EF393B2D204B6BE467BF6A119EB73B10E43BF7 * CallOptions_get_Credentials_m17F062E54416A45F2F0C220523C0AEE0399A6976_inline (CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B * __this, const RuntimeMethod* method);
// Grpc.Core.Internal.CallFlags Grpc.Core.CallOptions::get_Flags()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CallOptions_get_Flags_m6B4AEC31DE7EFAD89F5065255E1E7F44F5C478B6_inline (CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B * __this, const RuntimeMethod* method);
// Grpc.Core.CallOptions Grpc.Core.CallOptions::WithHeaders(Grpc.Core.Metadata)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B  CallOptions_WithHeaders_m35405F9DE9E7A043D51075ECD2CCCD26C1FCEE62 (CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B * __this, Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * ___headers0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.DateTime>::.ctor(!0)
inline void Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D *, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 , const RuntimeMethod*))Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB_gshared)(__this, ___value0, method);
}
// Grpc.Core.CallOptions Grpc.Core.CallOptions::WithDeadline(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B  CallOptions_WithDeadline_m2E3DA9AD2633063C721DF4E9159DBFBF3601EE6E (CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___deadline0, const RuntimeMethod* method);
// Grpc.Core.CallOptions Grpc.Core.CallOptions::WithCancellationToken(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B  CallOptions_WithCancellationToken_m72017DC81CDA94931F8D0CC950025A131F1E041E (CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken0, const RuntimeMethod* method);
// T Grpc.Core.Utils.GrpcPreconditions::CheckNotNull<System.String>(T,System.String)
inline String_t* GrpcPreconditions_CheckNotNull_TisString_t_m1F597926534506F78BD38FDED70FD259B5E4C859 (String_t* ___reference0, String_t* ___paramName1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (String_t*, String_t*, const RuntimeMethod*))GrpcPreconditions_CheckNotNull_TisRuntimeObject_m881C8608B71F7EF97D8A2D80D49832F554B5BFFC_gshared)(___reference0, ___paramName1, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Grpc.Core.ChannelBase/<ShutdownAsyncCore>d__6>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CShutdownAsyncCoreU3Ed__6_t271F14CF380B3E2733F13BF3B798BFE1EFFC0E39_mBC26306EE5121F24663759F339CA725F778F6A10 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CShutdownAsyncCoreU3Ed__6_t271F14CF380B3E2733F13BF3B798BFE1EFFC0E39 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CShutdownAsyncCoreU3Ed__6_t271F14CF380B3E2733F13BF3B798BFE1EFFC0E39 *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CShutdownAsyncCoreU3Ed__6_t271F14CF380B3E2733F13BF3B798BFE1EFFC0E39_mBC26306EE5121F24663759F339CA725F778F6A10_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, const RuntimeMethod* method);
// System.Void Grpc.Core.ChannelCredentials/InsecureCredentials::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InsecureCredentials__ctor_mF7239EE6BC6BB020F2F7C0F2D8B47A264147F145 (InsecureCredentials_tE3CFB2298C8F2D23049DBAE5F6452ADDE83FF2FB * __this, const RuntimeMethod* method);
// System.Void Grpc.Core.ContextPropagationOptions::.ctor(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextPropagationOptions__ctor_mEF6EF94996038C57FA45686B3C6A17DDE36C5681 (ContextPropagationOptions_tEA8DEAC93B4C5028E0E8BBFFFF6966D5237A5D7D * __this, bool ___propagateDeadline0, bool ___propagateCancellation1, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83 (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * __this, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m4CBF2A74FB65655B0BB1452CA748E9CF78D974ED (String_t* __this, Il2CppChar ___c0, int32_t ___count1, const RuntimeMethod* method);
// System.Int32 System.Runtime.CompilerServices.RuntimeHelpers::get_OffsetToStringData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42 (const RuntimeMethod* method);
// System.Void* System.IntPtr::ToPointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m5C7CE32B14B6E30467B378052FEA25300833C61F_inline (intptr_t* __this, const RuntimeMethod* method);
// System.String Grpc.Core.Api.Utils.EncodingExtensions::GetString(System.Text.Encoding,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EncodingExtensions_GetString_m3627C4A66233591559DDFAF0E9E04F870041C63E (Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding0, uint8_t* ___source1, int32_t ___byteCount2, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m789B4E75608A673F2CF5DDFC2E67DA20AF440A34 (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m26BD2B620B5FBFA4376C16011C60E18A2EDC8E96 (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Grpc.Core.Metadata/Entry>::.ctor()
inline void List_1__ctor_m48852DFC91F76F7A10E53BC27DE9126C54D8E5DD (List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<Grpc.Core.Metadata/Entry>::IndexOf(!0)
inline int32_t List_1_IndexOf_m90D7C2C0D9DBA4A9B5ECAE583005A9FD08EF73BE (List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537 * __this, Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * ___item0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537 *, Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 *, const RuntimeMethod*))List_1_IndexOf_m4474628ACB239463EEF6742E298897E550641533_gshared)(__this, ___item0, method);
}
// T Grpc.Core.Utils.GrpcPreconditions::CheckNotNull<Grpc.Core.Metadata/Entry>(T)
inline Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * GrpcPreconditions_CheckNotNull_TisEntry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6_m2A298E2A00DBB859B663738CDA219E74EA44EF1B (Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * ___reference0, const RuntimeMethod* method)
{
	return ((  Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * (*) (Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 *, const RuntimeMethod*))GrpcPreconditions_CheckNotNull_TisRuntimeObject_m2A4EACA9BB5AAB2C57B7CB6DBEAEAE363B9D2C86_gshared)(___reference0, method);
}
// System.Void Grpc.Core.Metadata::CheckWriteable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Metadata_CheckWriteable_m3D19ACA0B3FC5D4AA51E1B7F141ADA8700694877 (Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Grpc.Core.Metadata/Entry>::Insert(System.Int32,!0)
inline void List_1_Insert_mA08EF5AA45FE42698C0504AF89124F9CABB42232 (List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537 * __this, int32_t ___index0, Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * ___item1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537 *, int32_t, Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 *, const RuntimeMethod*))List_1_Insert_mFC500A19C486C8ED4E9F3BDBA9B079602D647741_gshared)(__this, ___index0, ___item1, method);
}
// System.Void System.Collections.Generic.List`1<Grpc.Core.Metadata/Entry>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m93D5A695011917793BBA5F600970EC7013FEF80E (List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared)(__this, ___index0, method);
}
// !0 System.Collections.Generic.List`1<Grpc.Core.Metadata/Entry>::get_Item(System.Int32)
inline Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * List_1_get_Item_mAF07A62E3C37EBE2361C242FAE01BF12F7464EB6_inline (List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * (*) (List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<Grpc.Core.Metadata/Entry>::set_Item(System.Int32,!0)
inline void List_1_set_Item_m46D170B0060CE31F054C79282BD962398F4647A5 (List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537 * __this, int32_t ___index0, Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537 *, int32_t, Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 *, const RuntimeMethod*))List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared)(__this, ___index0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<Grpc.Core.Metadata/Entry>::Add(!0)
inline void List_1_Add_mAB0C29FF0415A94C0CB5889BBCE41ED8A9B63E6F (List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537 * __this, Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537 *, Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Grpc.Core.Metadata/Entry>::Clear()
inline void List_1_Clear_m6DEF2A5600EC37B7540AA0A3A5FD6C8CEF1C28A8 (List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<Grpc.Core.Metadata/Entry>::Contains(!0)
inline bool List_1_Contains_m70E782EF381196248BAA83B2342FFAF3CAA5A933 (List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537 * __this, Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537 *, Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 *, const RuntimeMethod*))List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Grpc.Core.Metadata/Entry>::CopyTo(!0[],System.Int32)
inline void List_1_CopyTo_m8AAFC229CF326A5187509268A9EFD616855A5CE8 (List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537 * __this, EntryU5BU5D_t63F9DC6B2C823B21AB3AAEF5A43E6F06A4721DA4* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537 *, EntryU5BU5D_t63F9DC6B2C823B21AB3AAEF5A43E6F06A4721DA4*, int32_t, const RuntimeMethod*))List_1_CopyTo_mAF2E422E12551DE01B8EAAE71A2A4E1B91BD79DF_gshared)(__this, ___array0, ___arrayIndex1, method);
}
// System.Int32 System.Collections.Generic.List`1<Grpc.Core.Metadata/Entry>::get_Count()
inline int32_t List_1_get_Count_m07A83E9E28AD24DCDF32091405F7782AAE67D32A_inline (List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<Grpc.Core.Metadata/Entry>::Remove(!0)
inline bool List_1_Remove_mB4BD982D59AA9FDE9595A866ECD56D163EA3F37C (List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537 * __this, Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537 *, Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Grpc.Core.Metadata/Entry>::GetEnumerator()
inline Enumerator_tB6C52F7749A16CE4F8F809EB053FCBC62636EBB7  List_1_GetEnumerator_m571501E172ED700DA7BA0014DA88317B282A8B6C (List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB6C52F7749A16CE4F8F809EB053FCBC62636EBB7  (*) (List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// System.Void Grpc.Core.Utils.GrpcPreconditions::CheckState(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcPreconditions_CheckState_m1D18F7FA9669AB2FE25782B3E301179E7637113A (bool ___condition0, String_t* ___errorMessage1, const RuntimeMethod* method);
// System.Void Grpc.Core.Metadata::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Metadata__ctor_mCCA8906E38BEC39980A829BDBF672D140C7E0A78 (Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * __this, const RuntimeMethod* method);
// Grpc.Core.Metadata Grpc.Core.Metadata::Freeze()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * Metadata_Freeze_m66A962D9D4D7B589175C4E62CD18AE6672F062C5 (Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * __this, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_ASCII()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_ASCII_mD3E8370997347A3F6822BDA50BC0A1DBC0059173 (const RuntimeMethod* method);
// System.String Grpc.Core.Status::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Status_ToString_mCE243D714A86853D238CBDDCF659E7F6C1233DAF (Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035 * __this, const RuntimeMethod* method);
// System.Void Grpc.Core.RpcException::.ctor(Grpc.Core.Status,Grpc.Core.Metadata,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcException__ctor_mB6F32457FAD8F182092EB6A882F2C75165B120C6 (RpcException_t6F91CC8B9147B9981612F75CF7E9CDBF7FB173AF * __this, Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035  ___status0, Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * ___trailers1, String_t* ___message2, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// T Grpc.Core.Utils.GrpcPreconditions::CheckNotNull<Grpc.Core.Metadata>(T)
inline Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * GrpcPreconditions_CheckNotNull_TisMetadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8_mF3A772AF477B53692357B6EC8B696BECCF9CCC37 (Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * ___reference0, const RuntimeMethod* method)
{
	return ((  Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * (*) (Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 *, const RuntimeMethod*))GrpcPreconditions_CheckNotNull_TisRuntimeObject_m2A4EACA9BB5AAB2C57B7CB6DBEAEAE363B9D2C86_gshared)(___reference0, method);
}
// System.Void Grpc.Core.SslCredentials::.ctor(System.String,Grpc.Core.KeyCertificatePair,Grpc.Core.VerifyPeerCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslCredentials__ctor_mDB9DFC62648BBF42707B01553A3DBAA6B2ABE04E (SslCredentials_t149917768B7958A3C7B569C5879C5CAFC7F43D3C * __this, String_t* ___rootCertificates0, KeyCertificatePair_tA0E29F1A2B9C02967DCEF3AEBF14D49AB346592C * ___keyCertificatePair1, VerifyPeerCallback_t80B8E9DEB9B025308E05573E757CA8136A52DD9A * ___verifyPeerCallback2, const RuntimeMethod* method);
// System.Void Grpc.Core.ChannelCredentials::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelCredentials__ctor_mE748B679BDC1F83CBC6AD423FF9BC0A866624945 (ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E * __this, const RuntimeMethod* method);
// System.Void Grpc.Core.Status::.ctor(Grpc.Core.StatusCode,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Status__ctor_m6C6D6985096E7E15D3685F68FAF87259023926AC (Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035 * __this, int32_t ___statusCode0, String_t* ___detail1, Exception_t * ___debugException2, const RuntimeMethod* method);
// System.Void Grpc.Core.Status::.ctor(Grpc.Core.StatusCode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Status__ctor_mD813B072F537D5F71BA8EB89DD317DAB90850572 (Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035 * __this, int32_t ___statusCode0, String_t* ___detail1, const RuntimeMethod* method);
// Grpc.Core.StatusCode Grpc.Core.Status::get_StatusCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Status_get_StatusCode_m6C049ABBAB172B6BF51F8C5A604A1472F3844A35_inline (Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035 * __this, const RuntimeMethod* method);
// System.String Grpc.Core.Status::get_Detail()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Status_get_Detail_m9F84C60B0F03E311AE703443F4936599EDA88F8C_inline (Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035 * __this, const RuntimeMethod* method);
// System.Exception Grpc.Core.Status::get_DebugException()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t * Status_get_DebugException_mC77D9F815D97104E92AFE8340C5553C71995AF53_inline (Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void Grpc.Core.WriteOptions::.ctor(Grpc.Core.WriteFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteOptions__ctor_m171A56D6247014221930FCEDF5668D3270DDF45D (WriteOptions_t23E6F1264BABB93DF8CF3FC4D80395D9590D7755 * __this, int32_t ___flags0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, const RuntimeMethod* method);
// System.Void Grpc.Core.ChannelBase/<ShutdownAsyncCore>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShutdownAsyncCoreU3Ed__6_MoveNext_m3BDB2DCC02217E72ACCF45D8D0FA7FBA99AB1054 (U3CShutdownAsyncCoreU3Ed__6_t271F14CF380B3E2733F13BF3B798BFE1EFFC0E39 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Grpc.Core.ChannelBase/<ShutdownAsyncCore>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShutdownAsyncCoreU3Ed__6_SetStateMachine_mA42AEA33EF9D2FCA74FD644E435B77E49A8D775B (U3CShutdownAsyncCoreU3Ed__6_t271F14CF380B3E2733F13BF3B798BFE1EFFC0E39 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Boolean Grpc.Core.Metadata/Entry::get_IsBinary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Entry_get_IsBinary_m0DA2962C4F2FD2E1F9EFAADEB9CD4318357DB43D (Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * __this, const RuntimeMethod* method);
// System.Boolean Grpc.Core.Metadata/Entry::HasBinaryHeaderSuffix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Entry_HasBinaryHeaderSuffix_mD5BAB0B3F6F9DEE791298A18C1018BED5870C5A0 (String_t* ___key0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m057A8067BF7212A361510EA26B24022990A07AC0 (intptr_t ___source0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method);
// System.Void Grpc.Core.Metadata/Entry::.ctor(System.String,System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entry__ctor_m1F23E2AEC76DE04614A4A6D6AA14E6F6BB7B4812 (Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * __this, String_t* ___key0, String_t* ___value1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___valueBytes2, const RuntimeMethod* method);
// System.String Grpc.Core.Api.Utils.EncodingExtensions::GetString(System.Text.Encoding,System.IntPtr,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EncodingExtensions_GetString_m0832A890E3F4D24BA31BABCB90AD9FCBEE0E88C4_inline (Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding0, intptr_t ___ptr1, int32_t ___len2, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// Conversion methods for marshalling of: Grpc.Core.AsyncCallState
IL2CPP_EXTERN_C void AsyncCallState_tBB7A4E2B6CBA827F49F6FB405B732DB868567AF9_marshal_pinvoke(const AsyncCallState_tBB7A4E2B6CBA827F49F6FB405B732DB868567AF9& unmarshaled, AsyncCallState_tBB7A4E2B6CBA827F49F6FB405B732DB868567AF9_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.get_responseHeadersAsync_0() != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_responseHeadersAsync_0()))
		{
			marshaled.___responseHeadersAsync_0 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.get_responseHeadersAsync_0()));
			(marshaled.___responseHeadersAsync_0)->AddRef();
		}
		else
		{
			marshaled.___responseHeadersAsync_0 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.get_responseHeadersAsync_0());
		}
	}
	else
	{
		marshaled.___responseHeadersAsync_0 = NULL;
	}
	if (unmarshaled.get_getStatusFunc_1() != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_getStatusFunc_1()))
		{
			marshaled.___getStatusFunc_1 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.get_getStatusFunc_1()));
			(marshaled.___getStatusFunc_1)->AddRef();
		}
		else
		{
			marshaled.___getStatusFunc_1 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.get_getStatusFunc_1());
		}
	}
	else
	{
		marshaled.___getStatusFunc_1 = NULL;
	}
	if (unmarshaled.get_getTrailersFunc_2() != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_getTrailersFunc_2()))
		{
			marshaled.___getTrailersFunc_2 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.get_getTrailersFunc_2()));
			(marshaled.___getTrailersFunc_2)->AddRef();
		}
		else
		{
			marshaled.___getTrailersFunc_2 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.get_getTrailersFunc_2());
		}
	}
	else
	{
		marshaled.___getTrailersFunc_2 = NULL;
	}
	if (unmarshaled.get_disposeAction_3() != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_disposeAction_3()))
		{
			marshaled.___disposeAction_3 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.get_disposeAction_3()));
			(marshaled.___disposeAction_3)->AddRef();
		}
		else
		{
			marshaled.___disposeAction_3 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.get_disposeAction_3());
		}
	}
	else
	{
		marshaled.___disposeAction_3 = NULL;
	}
	if (unmarshaled.get_callbackState_4() != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_callbackState_4()))
		{
			marshaled.___callbackState_4 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.get_callbackState_4()));
			(marshaled.___callbackState_4)->AddRef();
		}
		else
		{
			marshaled.___callbackState_4 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.get_callbackState_4());
		}
	}
	else
	{
		marshaled.___callbackState_4 = NULL;
	}
}
IL2CPP_EXTERN_C void AsyncCallState_tBB7A4E2B6CBA827F49F6FB405B732DB868567AF9_marshal_pinvoke_back(const AsyncCallState_tBB7A4E2B6CBA827F49F6FB405B732DB868567AF9_marshaled_pinvoke& marshaled, AsyncCallState_tBB7A4E2B6CBA827F49F6FB405B732DB868567AF9& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___responseHeadersAsync_0 != NULL)
	{
		unmarshaled.set_responseHeadersAsync_0(il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___responseHeadersAsync_0, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_responseHeadersAsync_0()))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.get_responseHeadersAsync_0()), Il2CppIUnknown::IID, marshaled.___responseHeadersAsync_0);
		}
	}
	else
	{
		unmarshaled.set_responseHeadersAsync_0(NULL);
	}
	if (marshaled.___getStatusFunc_1 != NULL)
	{
		unmarshaled.set_getStatusFunc_1(il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___getStatusFunc_1, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_getStatusFunc_1()))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.get_getStatusFunc_1()), Il2CppIUnknown::IID, marshaled.___getStatusFunc_1);
		}
	}
	else
	{
		unmarshaled.set_getStatusFunc_1(NULL);
	}
	if (marshaled.___getTrailersFunc_2 != NULL)
	{
		unmarshaled.set_getTrailersFunc_2(il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___getTrailersFunc_2, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_getTrailersFunc_2()))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.get_getTrailersFunc_2()), Il2CppIUnknown::IID, marshaled.___getTrailersFunc_2);
		}
	}
	else
	{
		unmarshaled.set_getTrailersFunc_2(NULL);
	}
	if (marshaled.___disposeAction_3 != NULL)
	{
		unmarshaled.set_disposeAction_3(il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___disposeAction_3, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_disposeAction_3()))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.get_disposeAction_3()), Il2CppIUnknown::IID, marshaled.___disposeAction_3);
		}
	}
	else
	{
		unmarshaled.set_disposeAction_3(NULL);
	}
	if (marshaled.___callbackState_4 != NULL)
	{
		unmarshaled.set_callbackState_4(il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___callbackState_4, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_callbackState_4()))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.get_callbackState_4()), Il2CppIUnknown::IID, marshaled.___callbackState_4);
		}
	}
	else
	{
		unmarshaled.set_callbackState_4(NULL);
	}
}
// Conversion method for clean up from marshalling of: Grpc.Core.AsyncCallState
IL2CPP_EXTERN_C void AsyncCallState_tBB7A4E2B6CBA827F49F6FB405B732DB868567AF9_marshal_pinvoke_cleanup(AsyncCallState_tBB7A4E2B6CBA827F49F6FB405B732DB868567AF9_marshaled_pinvoke& marshaled)
{
	if (marshaled.___responseHeadersAsync_0 != NULL)
	{
		(marshaled.___responseHeadersAsync_0)->Release();
		marshaled.___responseHeadersAsync_0 = NULL;
	}
	if (marshaled.___getStatusFunc_1 != NULL)
	{
		(marshaled.___getStatusFunc_1)->Release();
		marshaled.___getStatusFunc_1 = NULL;
	}
	if (marshaled.___getTrailersFunc_2 != NULL)
	{
		(marshaled.___getTrailersFunc_2)->Release();
		marshaled.___getTrailersFunc_2 = NULL;
	}
	if (marshaled.___disposeAction_3 != NULL)
	{
		(marshaled.___disposeAction_3)->Release();
		marshaled.___disposeAction_3 = NULL;
	}
	if (marshaled.___callbackState_4 != NULL)
	{
		(marshaled.___callbackState_4)->Release();
		marshaled.___callbackState_4 = NULL;
	}
}
// Conversion methods for marshalling of: Grpc.Core.AsyncCallState
IL2CPP_EXTERN_C void AsyncCallState_tBB7A4E2B6CBA827F49F6FB405B732DB868567AF9_marshal_com(const AsyncCallState_tBB7A4E2B6CBA827F49F6FB405B732DB868567AF9& unmarshaled, AsyncCallState_tBB7A4E2B6CBA827F49F6FB405B732DB868567AF9_marshaled_com& marshaled)
{
	if (unmarshaled.get_responseHeadersAsync_0() != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_responseHeadersAsync_0()))
		{
			marshaled.___responseHeadersAsync_0 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.get_responseHeadersAsync_0()));
			(marshaled.___responseHeadersAsync_0)->AddRef();
		}
		else
		{
			marshaled.___responseHeadersAsync_0 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.get_responseHeadersAsync_0());
		}
	}
	else
	{
		marshaled.___responseHeadersAsync_0 = NULL;
	}
	if (unmarshaled.get_getStatusFunc_1() != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_getStatusFunc_1()))
		{
			marshaled.___getStatusFunc_1 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.get_getStatusFunc_1()));
			(marshaled.___getStatusFunc_1)->AddRef();
		}
		else
		{
			marshaled.___getStatusFunc_1 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.get_getStatusFunc_1());
		}
	}
	else
	{
		marshaled.___getStatusFunc_1 = NULL;
	}
	if (unmarshaled.get_getTrailersFunc_2() != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_getTrailersFunc_2()))
		{
			marshaled.___getTrailersFunc_2 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.get_getTrailersFunc_2()));
			(marshaled.___getTrailersFunc_2)->AddRef();
		}
		else
		{
			marshaled.___getTrailersFunc_2 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.get_getTrailersFunc_2());
		}
	}
	else
	{
		marshaled.___getTrailersFunc_2 = NULL;
	}
	if (unmarshaled.get_disposeAction_3() != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_disposeAction_3()))
		{
			marshaled.___disposeAction_3 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.get_disposeAction_3()));
			(marshaled.___disposeAction_3)->AddRef();
		}
		else
		{
			marshaled.___disposeAction_3 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.get_disposeAction_3());
		}
	}
	else
	{
		marshaled.___disposeAction_3 = NULL;
	}
	if (unmarshaled.get_callbackState_4() != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_callbackState_4()))
		{
			marshaled.___callbackState_4 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.get_callbackState_4()));
			(marshaled.___callbackState_4)->AddRef();
		}
		else
		{
			marshaled.___callbackState_4 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.get_callbackState_4());
		}
	}
	else
	{
		marshaled.___callbackState_4 = NULL;
	}
}
IL2CPP_EXTERN_C void AsyncCallState_tBB7A4E2B6CBA827F49F6FB405B732DB868567AF9_marshal_com_back(const AsyncCallState_tBB7A4E2B6CBA827F49F6FB405B732DB868567AF9_marshaled_com& marshaled, AsyncCallState_tBB7A4E2B6CBA827F49F6FB405B732DB868567AF9& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___responseHeadersAsync_0 != NULL)
	{
		unmarshaled.set_responseHeadersAsync_0(il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___responseHeadersAsync_0, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_responseHeadersAsync_0()))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.get_responseHeadersAsync_0()), Il2CppIUnknown::IID, marshaled.___responseHeadersAsync_0);
		}
	}
	else
	{
		unmarshaled.set_responseHeadersAsync_0(NULL);
	}
	if (marshaled.___getStatusFunc_1 != NULL)
	{
		unmarshaled.set_getStatusFunc_1(il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___getStatusFunc_1, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_getStatusFunc_1()))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.get_getStatusFunc_1()), Il2CppIUnknown::IID, marshaled.___getStatusFunc_1);
		}
	}
	else
	{
		unmarshaled.set_getStatusFunc_1(NULL);
	}
	if (marshaled.___getTrailersFunc_2 != NULL)
	{
		unmarshaled.set_getTrailersFunc_2(il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___getTrailersFunc_2, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_getTrailersFunc_2()))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.get_getTrailersFunc_2()), Il2CppIUnknown::IID, marshaled.___getTrailersFunc_2);
		}
	}
	else
	{
		unmarshaled.set_getTrailersFunc_2(NULL);
	}
	if (marshaled.___disposeAction_3 != NULL)
	{
		unmarshaled.set_disposeAction_3(il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___disposeAction_3, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_disposeAction_3()))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.get_disposeAction_3()), Il2CppIUnknown::IID, marshaled.___disposeAction_3);
		}
	}
	else
	{
		unmarshaled.set_disposeAction_3(NULL);
	}
	if (marshaled.___callbackState_4 != NULL)
	{
		unmarshaled.set_callbackState_4(il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___callbackState_4, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_callbackState_4()))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.get_callbackState_4()), Il2CppIUnknown::IID, marshaled.___callbackState_4);
		}
	}
	else
	{
		unmarshaled.set_callbackState_4(NULL);
	}
}
// Conversion method for clean up from marshalling of: Grpc.Core.AsyncCallState
IL2CPP_EXTERN_C void AsyncCallState_tBB7A4E2B6CBA827F49F6FB405B732DB868567AF9_marshal_com_cleanup(AsyncCallState_tBB7A4E2B6CBA827F49F6FB405B732DB868567AF9_marshaled_com& marshaled)
{
	if (marshaled.___responseHeadersAsync_0 != NULL)
	{
		(marshaled.___responseHeadersAsync_0)->Release();
		marshaled.___responseHeadersAsync_0 = NULL;
	}
	if (marshaled.___getStatusFunc_1 != NULL)
	{
		(marshaled.___getStatusFunc_1)->Release();
		marshaled.___getStatusFunc_1 = NULL;
	}
	if (marshaled.___getTrailersFunc_2 != NULL)
	{
		(marshaled.___getTrailersFunc_2)->Release();
		marshaled.___getTrailersFunc_2 = NULL;
	}
	if (marshaled.___disposeAction_3 != NULL)
	{
		(marshaled.___disposeAction_3)->Release();
		marshaled.___disposeAction_3 = NULL;
	}
	if (marshaled.___callbackState_4 != NULL)
	{
		(marshaled.___callbackState_4)->Release();
		marshaled.___callbackState_4 = NULL;
	}
}
// System.Void Grpc.Core.AsyncCallState::.ctor(System.Func`2<System.Object,System.Threading.Tasks.Task`1<Grpc.Core.Metadata>>,System.Func`2<System.Object,Grpc.Core.Status>,System.Func`2<System.Object,Grpc.Core.Metadata>,System.Action`1<System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncCallState__ctor_mAF2F026B2DDF4FD5B2336455FD66E253CBB586ED (AsyncCallState_tBB7A4E2B6CBA827F49F6FB405B732DB868567AF9 * __this, Func_2_tCF123A6D0FA7C2BE859DFDDBE9BF6E2E1E775B13 * ___responseHeadersAsync0, Func_2_tD88B4071026BCB29A3050CBEC78122204D9C2D36 * ___getStatusFunc1, Func_2_tA845FCB2B28E381495AACEEB5C4681194ACDA673 * ___getTrailersFunc2, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___disposeAction3, RuntimeObject * ___callbackState4, const RuntimeMethod* method)
{
	{
		Func_2_tCF123A6D0FA7C2BE859DFDDBE9BF6E2E1E775B13 * L_0 = ___responseHeadersAsync0;
		__this->set_responseHeadersAsync_0(L_0);
		Func_2_tD88B4071026BCB29A3050CBEC78122204D9C2D36 * L_1 = ___getStatusFunc1;
		__this->set_getStatusFunc_1(L_1);
		Func_2_tA845FCB2B28E381495AACEEB5C4681194ACDA673 * L_2 = ___getTrailersFunc2;
		__this->set_getTrailersFunc_2(L_2);
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_3 = ___disposeAction3;
		__this->set_disposeAction_3(L_3);
		RuntimeObject * L_4 = ___callbackState4;
		__this->set_callbackState_4(L_4);
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncCallState__ctor_mAF2F026B2DDF4FD5B2336455FD66E253CBB586ED_AdjustorThunk (RuntimeObject * __this, Func_2_tCF123A6D0FA7C2BE859DFDDBE9BF6E2E1E775B13 * ___responseHeadersAsync0, Func_2_tD88B4071026BCB29A3050CBEC78122204D9C2D36 * ___getStatusFunc1, Func_2_tA845FCB2B28E381495AACEEB5C4681194ACDA673 * ___getTrailersFunc2, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___disposeAction3, RuntimeObject * ___callbackState4, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AsyncCallState_tBB7A4E2B6CBA827F49F6FB405B732DB868567AF9 * _thisAdjusted = reinterpret_cast<AsyncCallState_tBB7A4E2B6CBA827F49F6FB405B732DB868567AF9 *>(__this + _offset);
	AsyncCallState__ctor_mAF2F026B2DDF4FD5B2336455FD66E253CBB586ED(_thisAdjusted, ___responseHeadersAsync0, ___getStatusFunc1, ___getTrailersFunc2, ___disposeAction3, ___callbackState4, method);
}
// System.Threading.Tasks.Task`1<Grpc.Core.Metadata> Grpc.Core.AsyncCallState::ResponseHeadersAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t5B7A30CFAF23C980E8DF8A2600B07982DF59D6F2 * AsyncCallState_ResponseHeadersAsync_m70B30B86ECEB1FCACC356F2F3373F2CA0FA9A773 (AsyncCallState_tBB7A4E2B6CBA827F49F6FB405B732DB868567AF9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_Invoke_mDDC2FE974D00D6CF82485E8EBFF71427C3287940_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tCF123A6D0FA7C2BE859DFDDBE9BF6E2E1E775B13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_t5B7A30CFAF23C980E8DF8A2600B07982DF59D6F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tCF123A6D0FA7C2BE859DFDDBE9BF6E2E1E775B13 * V_0 = NULL;
	{
		RuntimeObject * L_0 = __this->get_responseHeadersAsync_0();
		V_0 = ((Func_2_tCF123A6D0FA7C2BE859DFDDBE9BF6E2E1E775B13 *)IsInstSealed((RuntimeObject*)L_0, Func_2_tCF123A6D0FA7C2BE859DFDDBE9BF6E2E1E775B13_il2cpp_TypeInfo_var));
		Func_2_tCF123A6D0FA7C2BE859DFDDBE9BF6E2E1E775B13 * L_1 = V_0;
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject * L_2 = __this->get_responseHeadersAsync_0();
		return ((Task_1_t5B7A30CFAF23C980E8DF8A2600B07982DF59D6F2 *)CastclassClass((RuntimeObject*)L_2, Task_1_t5B7A30CFAF23C980E8DF8A2600B07982DF59D6F2_il2cpp_TypeInfo_var));
	}

IL_001b:
	{
		Func_2_tCF123A6D0FA7C2BE859DFDDBE9BF6E2E1E775B13 * L_3 = V_0;
		RuntimeObject * L_4 = __this->get_callbackState_4();
		NullCheck(L_3);
		Task_1_t5B7A30CFAF23C980E8DF8A2600B07982DF59D6F2 * L_5;
		L_5 = Func_2_Invoke_mDDC2FE974D00D6CF82485E8EBFF71427C3287940(L_3, L_4, /*hidden argument*/Func_2_Invoke_mDDC2FE974D00D6CF82485E8EBFF71427C3287940_RuntimeMethod_var);
		return L_5;
	}
}
IL2CPP_EXTERN_C  Task_1_t5B7A30CFAF23C980E8DF8A2600B07982DF59D6F2 * AsyncCallState_ResponseHeadersAsync_m70B30B86ECEB1FCACC356F2F3373F2CA0FA9A773_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AsyncCallState_tBB7A4E2B6CBA827F49F6FB405B732DB868567AF9 * _thisAdjusted = reinterpret_cast<AsyncCallState_tBB7A4E2B6CBA827F49F6FB405B732DB868567AF9 *>(__this + _offset);
	Task_1_t5B7A30CFAF23C980E8DF8A2600B07982DF59D6F2 * _returnValue;
	_returnValue = AsyncCallState_ResponseHeadersAsync_m70B30B86ECEB1FCACC356F2F3373F2CA0FA9A773(_thisAdjusted, method);
	return _returnValue;
}
// Grpc.Core.Status Grpc.Core.AsyncCallState::GetStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035  AsyncCallState_GetStatus_m8672BAFF41DB382339A7670373956CC5FFB27A2D (AsyncCallState_tBB7A4E2B6CBA827F49F6FB405B732DB868567AF9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_mF4449CD26738B124EBD367418747D26CCED08391_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t3F3F27BA48EAA4AB3E85D1EFF978941619F2279B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_Invoke_m740EF5730A5CACC3FD726142B7A2D715FB90538C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tD88B4071026BCB29A3050CBEC78122204D9C2D36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tD88B4071026BCB29A3050CBEC78122204D9C2D36 * V_0 = NULL;
	{
		RuntimeObject * L_0 = __this->get_getStatusFunc_1();
		V_0 = ((Func_2_tD88B4071026BCB29A3050CBEC78122204D9C2D36 *)IsInstSealed((RuntimeObject*)L_0, Func_2_tD88B4071026BCB29A3050CBEC78122204D9C2D36_il2cpp_TypeInfo_var));
		Func_2_tD88B4071026BCB29A3050CBEC78122204D9C2D36 * L_1 = V_0;
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject * L_2 = __this->get_getStatusFunc_1();
		NullCheck(((Func_1_t3F3F27BA48EAA4AB3E85D1EFF978941619F2279B *)CastclassSealed((RuntimeObject*)L_2, Func_1_t3F3F27BA48EAA4AB3E85D1EFF978941619F2279B_il2cpp_TypeInfo_var)));
		Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035  L_3;
		L_3 = Func_1_Invoke_mF4449CD26738B124EBD367418747D26CCED08391(((Func_1_t3F3F27BA48EAA4AB3E85D1EFF978941619F2279B *)CastclassSealed((RuntimeObject*)L_2, Func_1_t3F3F27BA48EAA4AB3E85D1EFF978941619F2279B_il2cpp_TypeInfo_var)), /*hidden argument*/Func_1_Invoke_mF4449CD26738B124EBD367418747D26CCED08391_RuntimeMethod_var);
		return L_3;
	}

IL_0020:
	{
		Func_2_tD88B4071026BCB29A3050CBEC78122204D9C2D36 * L_4 = V_0;
		RuntimeObject * L_5 = __this->get_callbackState_4();
		NullCheck(L_4);
		Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035  L_6;
		L_6 = Func_2_Invoke_m740EF5730A5CACC3FD726142B7A2D715FB90538C(L_4, L_5, /*hidden argument*/Func_2_Invoke_m740EF5730A5CACC3FD726142B7A2D715FB90538C_RuntimeMethod_var);
		return L_6;
	}
}
IL2CPP_EXTERN_C  Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035  AsyncCallState_GetStatus_m8672BAFF41DB382339A7670373956CC5FFB27A2D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AsyncCallState_tBB7A4E2B6CBA827F49F6FB405B732DB868567AF9 * _thisAdjusted = reinterpret_cast<AsyncCallState_tBB7A4E2B6CBA827F49F6FB405B732DB868567AF9 *>(__this + _offset);
	Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035  _returnValue;
	_returnValue = AsyncCallState_GetStatus_m8672BAFF41DB382339A7670373956CC5FFB27A2D(_thisAdjusted, method);
	return _returnValue;
}
// Grpc.Core.Metadata Grpc.Core.AsyncCallState::GetTrailers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * AsyncCallState_GetTrailers_m94B728E17B8BD73DE2E7BF37427981053D336B2E (AsyncCallState_tBB7A4E2B6CBA827F49F6FB405B732DB868567AF9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_mB804CEAA8E360082FA24C54CDCEBEB8AB72A0081_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2A57F7D726BB13DAF0490B58D77D4274C0213480_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_Invoke_m36644356C680BF20605B481EB91255BC38FC430A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tA845FCB2B28E381495AACEEB5C4681194ACDA673_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tA845FCB2B28E381495AACEEB5C4681194ACDA673 * V_0 = NULL;
	{
		RuntimeObject * L_0 = __this->get_getTrailersFunc_2();
		V_0 = ((Func_2_tA845FCB2B28E381495AACEEB5C4681194ACDA673 *)IsInstSealed((RuntimeObject*)L_0, Func_2_tA845FCB2B28E381495AACEEB5C4681194ACDA673_il2cpp_TypeInfo_var));
		Func_2_tA845FCB2B28E381495AACEEB5C4681194ACDA673 * L_1 = V_0;
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject * L_2 = __this->get_getTrailersFunc_2();
		NullCheck(((Func_1_t2A57F7D726BB13DAF0490B58D77D4274C0213480 *)CastclassSealed((RuntimeObject*)L_2, Func_1_t2A57F7D726BB13DAF0490B58D77D4274C0213480_il2cpp_TypeInfo_var)));
		Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * L_3;
		L_3 = Func_1_Invoke_mB804CEAA8E360082FA24C54CDCEBEB8AB72A0081(((Func_1_t2A57F7D726BB13DAF0490B58D77D4274C0213480 *)CastclassSealed((RuntimeObject*)L_2, Func_1_t2A57F7D726BB13DAF0490B58D77D4274C0213480_il2cpp_TypeInfo_var)), /*hidden argument*/Func_1_Invoke_mB804CEAA8E360082FA24C54CDCEBEB8AB72A0081_RuntimeMethod_var);
		return L_3;
	}

IL_0020:
	{
		Func_2_tA845FCB2B28E381495AACEEB5C4681194ACDA673 * L_4 = V_0;
		RuntimeObject * L_5 = __this->get_callbackState_4();
		NullCheck(L_4);
		Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * L_6;
		L_6 = Func_2_Invoke_m36644356C680BF20605B481EB91255BC38FC430A(L_4, L_5, /*hidden argument*/Func_2_Invoke_m36644356C680BF20605B481EB91255BC38FC430A_RuntimeMethod_var);
		return L_6;
	}
}
IL2CPP_EXTERN_C  Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * AsyncCallState_GetTrailers_m94B728E17B8BD73DE2E7BF37427981053D336B2E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AsyncCallState_tBB7A4E2B6CBA827F49F6FB405B732DB868567AF9 * _thisAdjusted = reinterpret_cast<AsyncCallState_tBB7A4E2B6CBA827F49F6FB405B732DB868567AF9 *>(__this + _offset);
	Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * _returnValue;
	_returnValue = AsyncCallState_GetTrailers_m94B728E17B8BD73DE2E7BF37427981053D336B2E(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Grpc.Core.AsyncCallState::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncCallState_Dispose_m028D365B2071DC0095E400A99D4C9D5573CDAE53 (AsyncCallState_tBB7A4E2B6CBA827F49F6FB405B732DB868567AF9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * V_0 = NULL;
	{
		RuntimeObject * L_0 = __this->get_disposeAction_3();
		V_0 = ((Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)IsInstSealed((RuntimeObject*)L_0, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC_il2cpp_TypeInfo_var));
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_2 = V_0;
		RuntimeObject * L_3 = __this->get_callbackState_4();
		NullCheck(L_2);
		Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744(L_2, L_3, /*hidden argument*/Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_RuntimeMethod_var);
		return;
	}

IL_001c:
	{
		RuntimeObject * L_4 = __this->get_disposeAction_3();
		NullCheck(((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var)));
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncCallState_Dispose_m028D365B2071DC0095E400A99D4C9D5573CDAE53_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AsyncCallState_tBB7A4E2B6CBA827F49F6FB405B732DB868567AF9 * _thisAdjusted = reinterpret_cast<AsyncCallState_tBB7A4E2B6CBA827F49F6FB405B732DB868567AF9 *>(__this + _offset);
	AsyncCallState_Dispose_m028D365B2071DC0095E400A99D4C9D5573CDAE53(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void Grpc.Core.CallCredentialsConfiguratorBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallCredentialsConfiguratorBase__ctor_m035E8AA8542578202D84B798A078E9B73DE48044 (CallCredentialsConfiguratorBase_t6192020FB3CA4D6A8C6648A1570D5B1121A9231C * __this, const RuntimeMethod* method)
{
	{
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Grpc.Core.CallInvoker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallInvoker__ctor_m0493AFF4467C6E6CAAD94AE1B17302CA774C6716 (CallInvoker_t6099D93DBBF44A7447258DAA16C8D0ED76D7DDDE * __this, const RuntimeMethod* method)
{
	{
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


// Conversion methods for marshalling of: Grpc.Core.CallOptions
IL2CPP_EXTERN_C void CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B_marshal_pinvoke(const CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B& unmarshaled, CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B_marshaled_pinvoke& marshaled)
{
	Exception_t* ___headers_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'headers' of type 'CallOptions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___headers_0Exception, NULL);
}
IL2CPP_EXTERN_C void CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B_marshal_pinvoke_back(const CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B_marshaled_pinvoke& marshaled, CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B& unmarshaled)
{
	Exception_t* ___headers_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'headers' of type 'CallOptions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___headers_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Grpc.Core.CallOptions
IL2CPP_EXTERN_C void CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B_marshal_pinvoke_cleanup(CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: Grpc.Core.CallOptions
IL2CPP_EXTERN_C void CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B_marshal_com(const CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B& unmarshaled, CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B_marshaled_com& marshaled)
{
	Exception_t* ___headers_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'headers' of type 'CallOptions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___headers_0Exception, NULL);
}
IL2CPP_EXTERN_C void CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B_marshal_com_back(const CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B_marshaled_com& marshaled, CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B& unmarshaled)
{
	Exception_t* ___headers_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'headers' of type 'CallOptions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___headers_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Grpc.Core.CallOptions
IL2CPP_EXTERN_C void CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B_marshal_com_cleanup(CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B_marshaled_com& marshaled)
{
}
// Grpc.Core.Metadata Grpc.Core.CallOptions::get_Headers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * CallOptions_get_Headers_m7DB2D6045E675B5EADFAB4E7790E9861FF9B791D (CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B * __this, const RuntimeMethod* method)
{
	{
		Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * L_0 = __this->get_headers_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * CallOptions_get_Headers_m7DB2D6045E675B5EADFAB4E7790E9861FF9B791D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B * _thisAdjusted = reinterpret_cast<CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B *>(__this + _offset);
	Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * _returnValue;
	_returnValue = CallOptions_get_Headers_m7DB2D6045E675B5EADFAB4E7790E9861FF9B791D_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Nullable`1<System.DateTime> Grpc.Core.CallOptions::get_Deadline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  CallOptions_get_Deadline_mDF9B3BB905CEEEDDCF8F9536525B637F071528FC (CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B * __this, const RuntimeMethod* method)
{
	{
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_0 = __this->get_deadline_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  CallOptions_get_Deadline_mDF9B3BB905CEEEDDCF8F9536525B637F071528FC_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B * _thisAdjusted = reinterpret_cast<CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B *>(__this + _offset);
	Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  _returnValue;
	_returnValue = CallOptions_get_Deadline_mDF9B3BB905CEEEDDCF8F9536525B637F071528FC_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Threading.CancellationToken Grpc.Core.CallOptions::get_CancellationToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  CallOptions_get_CancellationToken_mC631E51DD2518E4C41B2EA2426445CC6558F31A2 (CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B * __this, const RuntimeMethod* method)
{
	{
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_0 = __this->get_cancellationToken_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  CallOptions_get_CancellationToken_mC631E51DD2518E4C41B2EA2426445CC6558F31A2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B * _thisAdjusted = reinterpret_cast<CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B *>(__this + _offset);
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  _returnValue;
	_returnValue = CallOptions_get_CancellationToken_mC631E51DD2518E4C41B2EA2426445CC6558F31A2_inline(_thisAdjusted, method);
	return _returnValue;
}
// Grpc.Core.WriteOptions Grpc.Core.CallOptions::get_WriteOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WriteOptions_t23E6F1264BABB93DF8CF3FC4D80395D9590D7755 * CallOptions_get_WriteOptions_m0B6F41F1B39E6508CD6CB8F6680B04181856E411 (CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B * __this, const RuntimeMethod* method)
{
	{
		WriteOptions_t23E6F1264BABB93DF8CF3FC4D80395D9590D7755 * L_0 = __this->get_writeOptions_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  WriteOptions_t23E6F1264BABB93DF8CF3FC4D80395D9590D7755 * CallOptions_get_WriteOptions_m0B6F41F1B39E6508CD6CB8F6680B04181856E411_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B * _thisAdjusted = reinterpret_cast<CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B *>(__this + _offset);
	WriteOptions_t23E6F1264BABB93DF8CF3FC4D80395D9590D7755 * _returnValue;
	_returnValue = CallOptions_get_WriteOptions_m0B6F41F1B39E6508CD6CB8F6680B04181856E411_inline(_thisAdjusted, method);
	return _returnValue;
}
// Grpc.Core.ContextPropagationToken Grpc.Core.CallOptions::get_PropagationToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContextPropagationToken_tA4D9F93C718C73B7727D0C9BAD75CFC6ABBE06F5 * CallOptions_get_PropagationToken_mEB07DD79D1DB3488F7095420531F4A3DAE59C67C (CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B * __this, const RuntimeMethod* method)
{
	{
		ContextPropagationToken_tA4D9F93C718C73B7727D0C9BAD75CFC6ABBE06F5 * L_0 = __this->get_propagationToken_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  ContextPropagationToken_tA4D9F93C718C73B7727D0C9BAD75CFC6ABBE06F5 * CallOptions_get_PropagationToken_mEB07DD79D1DB3488F7095420531F4A3DAE59C67C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B * _thisAdjusted = reinterpret_cast<CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B *>(__this + _offset);
	ContextPropagationToken_tA4D9F93C718C73B7727D0C9BAD75CFC6ABBE06F5 * _returnValue;
	_returnValue = CallOptions_get_PropagationToken_mEB07DD79D1DB3488F7095420531F4A3DAE59C67C_inline(_thisAdjusted, method);
	return _returnValue;
}
// Grpc.Core.CallCredentials Grpc.Core.CallOptions::get_Credentials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CallCredentials_tA3EF393B2D204B6BE467BF6A119EB73B10E43BF7 * CallOptions_get_Credentials_m17F062E54416A45F2F0C220523C0AEE0399A6976 (CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B * __this, const RuntimeMethod* method)
{
	{
		CallCredentials_tA3EF393B2D204B6BE467BF6A119EB73B10E43BF7 * L_0 = __this->get_credentials_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C  CallCredentials_tA3EF393B2D204B6BE467BF6A119EB73B10E43BF7 * CallOptions_get_Credentials_m17F062E54416A45F2F0C220523C0AEE0399A6976_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B * _thisAdjusted = reinterpret_cast<CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B *>(__this + _offset);
	CallCredentials_tA3EF393B2D204B6BE467BF6A119EB73B10E43BF7 * _returnValue;
	_returnValue = CallOptions_get_Credentials_m17F062E54416A45F2F0C220523C0AEE0399A6976_inline(_thisAdjusted, method);
	return _returnValue;
}
// Grpc.Core.Internal.CallFlags Grpc.Core.CallOptions::get_Flags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallOptions_get_Flags_m6B4AEC31DE7EFAD89F5065255E1E7F44F5C478B6 (CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_flags_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t CallOptions_get_Flags_m6B4AEC31DE7EFAD89F5065255E1E7F44F5C478B6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B * _thisAdjusted = reinterpret_cast<CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = CallOptions_get_Flags_m6B4AEC31DE7EFAD89F5065255E1E7F44F5C478B6_inline(_thisAdjusted, method);
	return _returnValue;
}
// Grpc.Core.CallOptions Grpc.Core.CallOptions::WithHeaders(Grpc.Core.Metadata)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B  CallOptions_WithHeaders_m35405F9DE9E7A043D51075ECD2CCCD26C1FCEE62 (CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B * __this, Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * ___headers0, const RuntimeMethod* method)
{
	CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B  L_0 = (*(CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B *)__this);
		V_0 = L_0;
		Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * L_1 = ___headers0;
		(&V_0)->set_headers_0(L_1);
		CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B  L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B  CallOptions_WithHeaders_m35405F9DE9E7A043D51075ECD2CCCD26C1FCEE62_AdjustorThunk (RuntimeObject * __this, Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * ___headers0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B * _thisAdjusted = reinterpret_cast<CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B *>(__this + _offset);
	CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B  _returnValue;
	_returnValue = CallOptions_WithHeaders_m35405F9DE9E7A043D51075ECD2CCCD26C1FCEE62(_thisAdjusted, ___headers0, method);
	return _returnValue;
}
// Grpc.Core.CallOptions Grpc.Core.CallOptions::WithDeadline(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B  CallOptions_WithDeadline_m2E3DA9AD2633063C721DF4E9159DBFBF3601EE6E (CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___deadline0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B  L_0 = (*(CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B *)__this);
		V_0 = L_0;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1 = ___deadline0;
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB((&L_2), L_1, /*hidden argument*/Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB_RuntimeMethod_var);
		(&V_0)->set_deadline_1(L_2);
		CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B  L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B  CallOptions_WithDeadline_m2E3DA9AD2633063C721DF4E9159DBFBF3601EE6E_AdjustorThunk (RuntimeObject * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___deadline0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B * _thisAdjusted = reinterpret_cast<CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B *>(__this + _offset);
	CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B  _returnValue;
	_returnValue = CallOptions_WithDeadline_m2E3DA9AD2633063C721DF4E9159DBFBF3601EE6E(_thisAdjusted, ___deadline0, method);
	return _returnValue;
}
// Grpc.Core.CallOptions Grpc.Core.CallOptions::WithCancellationToken(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B  CallOptions_WithCancellationToken_m72017DC81CDA94931F8D0CC950025A131F1E041E (CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken0, const RuntimeMethod* method)
{
	CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B  L_0 = (*(CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B *)__this);
		V_0 = L_0;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_1 = ___cancellationToken0;
		(&V_0)->set_cancellationToken_2(L_1);
		CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B  L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B  CallOptions_WithCancellationToken_m72017DC81CDA94931F8D0CC950025A131F1E041E_AdjustorThunk (RuntimeObject * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B * _thisAdjusted = reinterpret_cast<CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B *>(__this + _offset);
	CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B  _returnValue;
	_returnValue = CallOptions_WithCancellationToken_m72017DC81CDA94931F8D0CC950025A131F1E041E(_thisAdjusted, ___cancellationToken0, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Grpc.Core.ChannelBase::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelBase__ctor_m98321E935004E85838C8632F6F3C474C21077EF1 (ChannelBase_t27741E6D85E1E4064949B777B040D975F3D400A9 * __this, String_t* ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrpcPreconditions_CheckNotNull_TisString_t_m1F597926534506F78BD38FDED70FD259B5E4C859_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral320772EF40302B49A179DB96BAD02224E97B4018);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___target0;
		String_t* L_1;
		L_1 = GrpcPreconditions_CheckNotNull_TisString_t_m1F597926534506F78BD38FDED70FD259B5E4C859(L_0, _stringLiteral320772EF40302B49A179DB96BAD02224E97B4018, /*hidden argument*/GrpcPreconditions_CheckNotNull_TisString_t_m1F597926534506F78BD38FDED70FD259B5E4C859_RuntimeMethod_var);
		__this->set_target_0(L_1);
		return;
	}
}
// System.Threading.Tasks.Task Grpc.Core.ChannelBase::ShutdownAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ChannelBase_ShutdownAsync_m9E3D96850025A611947E62C91ECE8C8741656CB5 (ChannelBase_t27741E6D85E1E4064949B777B040D975F3D400A9 * __this, const RuntimeMethod* method)
{
	{
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_0;
		L_0 = VirtFuncInvoker0< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * >::Invoke(5 /* System.Threading.Tasks.Task Grpc.Core.ChannelBase::ShutdownAsyncCore() */, __this);
		return L_0;
	}
}
// System.Threading.Tasks.Task Grpc.Core.ChannelBase::ShutdownAsyncCore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ChannelBase_ShutdownAsyncCore_m1DD7982F65363921995F5485EB7D9FC98C82EB05 (ChannelBase_t27741E6D85E1E4064949B777B040D975F3D400A9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CShutdownAsyncCoreU3Ed__6_t271F14CF380B3E2733F13BF3B798BFE1EFFC0E39_mBC26306EE5121F24663759F339CA725F778F6A10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CShutdownAsyncCoreU3Ed__6_t271F14CF380B3E2733F13BF3B798BFE1EFFC0E39  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_0;
		L_0 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CShutdownAsyncCoreU3Ed__6_t271F14CF380B3E2733F13BF3B798BFE1EFFC0E39  L_1 = V_0;
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncTaskMethodBuilder_Start_TisU3CShutdownAsyncCoreU3Ed__6_t271F14CF380B3E2733F13BF3B798BFE1EFFC0E39_mBC26306EE5121F24663759F339CA725F778F6A10((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CShutdownAsyncCoreU3Ed__6_t271F14CF380B3E2733F13BF3B798BFE1EFFC0E39 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CShutdownAsyncCoreU3Ed__6_t271F14CF380B3E2733F13BF3B798BFE1EFFC0E39_mBC26306EE5121F24663759F339CA725F778F6A10_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_3 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_4;
		L_4 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_3, /*hidden argument*/NULL);
		return L_4;
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
// System.Void Grpc.Core.ChannelCredentials::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelCredentials__ctor_mE748B679BDC1F83CBC6AD423FF9BC0A866624945 (ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Grpc.Core.ChannelCredentials Grpc.Core.ChannelCredentials::get_Insecure()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E * ChannelCredentials_get_Insecure_m8D99B79F97F8B8C2D3609960E737647966A9A1F4 (const RuntimeMethod* method)
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
// System.Void Grpc.Core.ChannelCredentials::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelCredentials__cctor_mE13414DE25A46A5C5AD0CBD4220C158258533569 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InsecureCredentials_tE3CFB2298C8F2D23049DBAE5F6452ADDE83FF2FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		InsecureCredentials_tE3CFB2298C8F2D23049DBAE5F6452ADDE83FF2FB * L_0 = (InsecureCredentials_tE3CFB2298C8F2D23049DBAE5F6452ADDE83FF2FB *)il2cpp_codegen_object_new(InsecureCredentials_tE3CFB2298C8F2D23049DBAE5F6452ADDE83FF2FB_il2cpp_TypeInfo_var);
		InsecureCredentials__ctor_mF7239EE6BC6BB020F2F7C0F2D8B47A264147F145(L_0, /*hidden argument*/NULL);
		((ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E_StaticFields*)il2cpp_codegen_static_fields_for(ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E_il2cpp_TypeInfo_var))->set_InsecureInstance_0(L_0);
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
// System.Void Grpc.Core.ChannelCredentialsConfiguratorBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelCredentialsConfiguratorBase__ctor_m4B5CD42B43540A30701A162F98D11F41013D2A8E (ChannelCredentialsConfiguratorBase_t52E86B700F09115DB67F66866A2BDF4DA2F05B68 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void Grpc.Core.ContextPropagationOptions::.ctor(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextPropagationOptions__ctor_mEF6EF94996038C57FA45686B3C6A17DDE36C5681 (ContextPropagationOptions_tEA8DEAC93B4C5028E0E8BBFFFF6966D5237A5D7D * __this, bool ___propagateDeadline0, bool ___propagateCancellation1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		bool L_0 = ___propagateDeadline0;
		__this->set_propagateDeadline_1(L_0);
		bool L_1 = ___propagateCancellation1;
		__this->set_propagateCancellation_2(L_1);
		return;
	}
}
// System.Boolean Grpc.Core.ContextPropagationOptions::get_IsPropagateDeadline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ContextPropagationOptions_get_IsPropagateDeadline_m0772C88F547F60E0A18F8DA5131F077BD76D773B (ContextPropagationOptions_tEA8DEAC93B4C5028E0E8BBFFFF6966D5237A5D7D * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_propagateDeadline_1();
		return L_0;
	}
}
// System.Boolean Grpc.Core.ContextPropagationOptions::get_IsPropagateCancellation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ContextPropagationOptions_get_IsPropagateCancellation_mA5597D556B510959B46BDE1730350F1EC76DA7DD (ContextPropagationOptions_tEA8DEAC93B4C5028E0E8BBFFFF6966D5237A5D7D * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_propagateCancellation_2();
		return L_0;
	}
}
// System.Void Grpc.Core.ContextPropagationOptions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextPropagationOptions__cctor_m28BB767211B5111235309DCB442D19D90227C407 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContextPropagationOptions_tEA8DEAC93B4C5028E0E8BBFFFF6966D5237A5D7D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ContextPropagationOptions_tEA8DEAC93B4C5028E0E8BBFFFF6966D5237A5D7D * L_0 = (ContextPropagationOptions_tEA8DEAC93B4C5028E0E8BBFFFF6966D5237A5D7D *)il2cpp_codegen_object_new(ContextPropagationOptions_tEA8DEAC93B4C5028E0E8BBFFFF6966D5237A5D7D_il2cpp_TypeInfo_var);
		ContextPropagationOptions__ctor_mEF6EF94996038C57FA45686B3C6A17DDE36C5681(L_0, (bool)1, (bool)1, /*hidden argument*/NULL);
		((ContextPropagationOptions_tEA8DEAC93B4C5028E0E8BBFFFF6966D5237A5D7D_StaticFields*)il2cpp_codegen_static_fields_for(ContextPropagationOptions_tEA8DEAC93B4C5028E0E8BBFFFF6966D5237A5D7D_il2cpp_TypeInfo_var))->set_Default_0(L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Byte[] Grpc.Core.DeserializationContext::PayloadAsNewBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* DeserializationContext_PayloadAsNewBuffer_m270A0A2C266E488C39A0FAA34470859E939440FF (DeserializationContext_t9BCDFE5CA12337CFE1B279253E42B6A9EA5217CC * __this, const RuntimeMethod* method)
{
	{
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeserializationContext_PayloadAsNewBuffer_m270A0A2C266E488C39A0FAA34470859E939440FF_RuntimeMethod_var)));
	}
}
// System.Buffers.ReadOnlySequence`1<System.Byte> Grpc.Core.DeserializationContext::PayloadAsReadOnlySequence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySequence_1_t189383CAD339D18716638372580ECEAA6265A8CE  DeserializationContext_PayloadAsReadOnlySequence_m616A017C215DBBC6097A23D5311712C673A1C8CA (DeserializationContext_t9BCDFE5CA12337CFE1B279253E42B6A9EA5217CC * __this, const RuntimeMethod* method)
{
	{
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeserializationContext_PayloadAsReadOnlySequence_m616A017C215DBBC6097A23D5311712C673A1C8CA_RuntimeMethod_var)));
	}
}
// System.Void Grpc.Core.DeserializationContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeserializationContext__ctor_mF3E6811B2272C77A6C03686CE836914BE895A20D (DeserializationContext_t9BCDFE5CA12337CFE1B279253E42B6A9EA5217CC * __this, const RuntimeMethod* method)
{
	{
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
// System.String Grpc.Core.Api.Utils.EncodingExtensions::GetString(System.Text.Encoding,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EncodingExtensions_GetString_m3627C4A66233591559DDFAF0E9E04F870041C63E (Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding0, uint8_t* ___source1, int32_t ___byteCount2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppChar* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* G_B4_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		int32_t L_0 = ___byteCount2;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0009:
	{
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_1 = ___encoding0;
		uint8_t* L_2 = ___source1;
		int32_t L_3 = ___byteCount2;
		NullCheck(L_1);
		int32_t L_4;
		L_4 = VirtFuncInvoker2< int32_t, uint8_t*, int32_t >::Invoke(20 /* System.Int32 System.Text.Encoding::GetCharCount(System.Byte*,System.Int32) */, L_1, (uint8_t*)(uint8_t*)L_2, L_3);
		V_0 = L_4;
		int32_t L_5 = V_0;
		String_t* L_6;
		L_6 = String_CreateString_m4CBF2A74FB65655B0BB1452CA748E9CF78D974ED(NULL, 0, L_5, /*hidden argument*/NULL);
		String_t* L_7 = L_6;
		V_2 = L_7;
		String_t* L_8 = V_2;
		V_1 = (Il2CppChar*)((uintptr_t)L_8);
		Il2CppChar* L_9 = V_1;
		G_B3_0 = L_7;
		if (!L_9)
		{
			G_B4_0 = L_7;
			goto IL_0029;
		}
	}
	{
		Il2CppChar* L_10 = V_1;
		int32_t L_11;
		L_11 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
		V_1 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_10, (int32_t)L_11));
		G_B4_0 = G_B3_0;
	}

IL_0029:
	{
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_12 = ___encoding0;
		uint8_t* L_13 = ___source1;
		int32_t L_14 = ___byteCount2;
		Il2CppChar* L_15 = V_1;
		int32_t L_16 = V_0;
		NullCheck(L_12);
		int32_t L_17;
		L_17 = VirtFuncInvoker4< int32_t, uint8_t*, int32_t, Il2CppChar*, int32_t >::Invoke(24 /* System.Int32 System.Text.Encoding::GetChars(System.Byte*,System.Int32,System.Char*,System.Int32) */, L_12, (uint8_t*)(uint8_t*)L_13, L_14, (Il2CppChar*)(Il2CppChar*)L_15, L_16);
		V_2 = (String_t*)NULL;
		return G_B4_0;
	}
}
// System.String Grpc.Core.Api.Utils.EncodingExtensions::GetString(System.Text.Encoding,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EncodingExtensions_GetString_m0832A890E3F4D24BA31BABCB90AD9FCBEE0E88C4 (Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding0, intptr_t ___ptr1, int32_t ___len2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___len2;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_1 = ___encoding0;
		void* L_2;
		L_2 = IntPtr_ToPointer_m5C7CE32B14B6E30467B378052FEA25300833C61F_inline((intptr_t*)(&___ptr1), /*hidden argument*/NULL);
		int32_t L_3 = ___len2;
		String_t* L_4;
		L_4 = EncodingExtensions_GetString_m3627C4A66233591559DDFAF0E9E04F870041C63E(L_1, (uint8_t*)(uint8_t*)L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0012:
	{
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
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
// System.Void Grpc.Core.Utils.GrpcPreconditions::CheckArgument(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcPreconditions_CheckArgument_m6238CCC08E0176844EFC420947FC9373A3C8663C (bool ___condition0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___condition0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_1 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m789B4E75608A673F2CF5DDFC2E67DA20AF440A34(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GrpcPreconditions_CheckArgument_m6238CCC08E0176844EFC420947FC9373A3C8663C_RuntimeMethod_var)));
	}

IL_0009:
	{
		return;
	}
}
// System.Void Grpc.Core.Utils.GrpcPreconditions::CheckArgument(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcPreconditions_CheckArgument_mC10479F3B2FA86CE9D9EEC35D6F1B12DAA7D9446 (bool ___condition0, String_t* ___errorMessage1, const RuntimeMethod* method)
{
	{
		bool L_0 = ___condition0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_1 = ___errorMessage1;
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_2 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_2, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GrpcPreconditions_CheckArgument_mC10479F3B2FA86CE9D9EEC35D6F1B12DAA7D9446_RuntimeMethod_var)));
	}

IL_000a:
	{
		return;
	}
}
// System.Void Grpc.Core.Utils.GrpcPreconditions::CheckState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcPreconditions_CheckState_mF8DA7FE3DD5DF9B22AE77142D17843C1037A10F4 (bool ___condition0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___condition0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m26BD2B620B5FBFA4376C16011C60E18A2EDC8E96(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GrpcPreconditions_CheckState_mF8DA7FE3DD5DF9B22AE77142D17843C1037A10F4_RuntimeMethod_var)));
	}

IL_0009:
	{
		return;
	}
}
// System.Void Grpc.Core.Utils.GrpcPreconditions::CheckState(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrpcPreconditions_CheckState_m1D18F7FA9669AB2FE25782B3E301179E7637113A (bool ___condition0, String_t* ___errorMessage1, const RuntimeMethod* method)
{
	{
		bool L_0 = ___condition0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_1 = ___errorMessage1;
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_2, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GrpcPreconditions_CheckState_m1D18F7FA9669AB2FE25782B3E301179E7637113A_RuntimeMethod_var)));
	}

IL_000a:
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
// System.String Grpc.Core.KeyCertificatePair::get_CertificateChain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeyCertificatePair_get_CertificateChain_mB65828A5E21ACE8181362CC574C1B0BE4C440FA4 (KeyCertificatePair_tA0E29F1A2B9C02967DCEF3AEBF14D49AB346592C * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_certificateChain_0();
		return L_0;
	}
}
// System.String Grpc.Core.KeyCertificatePair::get_PrivateKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeyCertificatePair_get_PrivateKey_m9011AF9F4FD9A1323FE33EE7441B305016C95871 (KeyCertificatePair_tA0E29F1A2B9C02967DCEF3AEBF14D49AB346592C * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_privateKey_1();
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
// System.Void Grpc.Core.Metadata::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Metadata__ctor_mCCA8906E38BEC39980A829BDBF672D140C7E0A78 (Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m48852DFC91F76F7A10E53BC27DE9126C54D8E5DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537 * L_0 = (List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537 *)il2cpp_codegen_object_new(List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537_il2cpp_TypeInfo_var);
		List_1__ctor_m48852DFC91F76F7A10E53BC27DE9126C54D8E5DD(L_0, /*hidden argument*/List_1__ctor_m48852DFC91F76F7A10E53BC27DE9126C54D8E5DD_RuntimeMethod_var);
		__this->set_entries_2(L_0);
		return;
	}
}
// Grpc.Core.Metadata Grpc.Core.Metadata::Freeze()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * Metadata_Freeze_m66A962D9D4D7B589175C4E62CD18AE6672F062C5 (Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * __this, const RuntimeMethod* method)
{
	{
		__this->set_readOnly_3((bool)1);
		return __this;
	}
}
// System.Int32 Grpc.Core.Metadata::IndexOf(Grpc.Core.Metadata/Entry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Metadata_IndexOf_mBDDD72D9D40C96783300C84E007322E0D036CFF2 (Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * __this, Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m90D7C2C0D9DBA4A9B5ECAE583005A9FD08EF73BE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537 * L_0 = __this->get_entries_2();
		Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * L_1 = ___item0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = List_1_IndexOf_m90D7C2C0D9DBA4A9B5ECAE583005A9FD08EF73BE(L_0, L_1, /*hidden argument*/List_1_IndexOf_m90D7C2C0D9DBA4A9B5ECAE583005A9FD08EF73BE_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void Grpc.Core.Metadata::Insert(System.Int32,Grpc.Core.Metadata/Entry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Metadata_Insert_m072269B08A59F4AA3BFB10BFC2C1CABFA99B6392 (Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * __this, int32_t ___index0, Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrpcPreconditions_CheckNotNull_TisEntry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6_m2A298E2A00DBB859B663738CDA219E74EA44EF1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_mA08EF5AA45FE42698C0504AF89124F9CABB42232_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * L_0 = ___item1;
		Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * L_1;
		L_1 = GrpcPreconditions_CheckNotNull_TisEntry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6_m2A298E2A00DBB859B663738CDA219E74EA44EF1B(L_0, /*hidden argument*/GrpcPreconditions_CheckNotNull_TisEntry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6_m2A298E2A00DBB859B663738CDA219E74EA44EF1B_RuntimeMethod_var);
		Metadata_CheckWriteable_m3D19ACA0B3FC5D4AA51E1B7F141ADA8700694877(__this, /*hidden argument*/NULL);
		List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537 * L_2 = __this->get_entries_2();
		int32_t L_3 = ___index0;
		Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * L_4 = ___item1;
		NullCheck(L_2);
		List_1_Insert_mA08EF5AA45FE42698C0504AF89124F9CABB42232(L_2, L_3, L_4, /*hidden argument*/List_1_Insert_mA08EF5AA45FE42698C0504AF89124F9CABB42232_RuntimeMethod_var);
		return;
	}
}
// System.Void Grpc.Core.Metadata::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Metadata_RemoveAt_m197A2EBD6BD81996A062AA501ADBB981998C6016 (Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m93D5A695011917793BBA5F600970EC7013FEF80E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Metadata_CheckWriteable_m3D19ACA0B3FC5D4AA51E1B7F141ADA8700694877(__this, /*hidden argument*/NULL);
		List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537 * L_0 = __this->get_entries_2();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		List_1_RemoveAt_m93D5A695011917793BBA5F600970EC7013FEF80E(L_0, L_1, /*hidden argument*/List_1_RemoveAt_m93D5A695011917793BBA5F600970EC7013FEF80E_RuntimeMethod_var);
		return;
	}
}
// Grpc.Core.Metadata/Entry Grpc.Core.Metadata::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * Metadata_get_Item_mD4086B132B329C7D36BB86544925B58F11FC889D (Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mAF07A62E3C37EBE2361C242FAE01BF12F7464EB6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537 * L_0 = __this->get_entries_2();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * L_2;
		L_2 = List_1_get_Item_mAF07A62E3C37EBE2361C242FAE01BF12F7464EB6_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_mAF07A62E3C37EBE2361C242FAE01BF12F7464EB6_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void Grpc.Core.Metadata::set_Item(System.Int32,Grpc.Core.Metadata/Entry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Metadata_set_Item_m1747E6C321E886C171650296870A4203BF944A02 (Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * __this, int32_t ___index0, Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrpcPreconditions_CheckNotNull_TisEntry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6_m2A298E2A00DBB859B663738CDA219E74EA44EF1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m46D170B0060CE31F054C79282BD962398F4647A5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * L_0 = ___value1;
		Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * L_1;
		L_1 = GrpcPreconditions_CheckNotNull_TisEntry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6_m2A298E2A00DBB859B663738CDA219E74EA44EF1B(L_0, /*hidden argument*/GrpcPreconditions_CheckNotNull_TisEntry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6_m2A298E2A00DBB859B663738CDA219E74EA44EF1B_RuntimeMethod_var);
		Metadata_CheckWriteable_m3D19ACA0B3FC5D4AA51E1B7F141ADA8700694877(__this, /*hidden argument*/NULL);
		List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537 * L_2 = __this->get_entries_2();
		int32_t L_3 = ___index0;
		Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * L_4 = ___value1;
		NullCheck(L_2);
		List_1_set_Item_m46D170B0060CE31F054C79282BD962398F4647A5(L_2, L_3, L_4, /*hidden argument*/List_1_set_Item_m46D170B0060CE31F054C79282BD962398F4647A5_RuntimeMethod_var);
		return;
	}
}
// System.Void Grpc.Core.Metadata::Add(Grpc.Core.Metadata/Entry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Metadata_Add_m198C0CC91A01188EBF3E4C5825B877E63FFE5F22 (Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * __this, Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrpcPreconditions_CheckNotNull_TisEntry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6_m2A298E2A00DBB859B663738CDA219E74EA44EF1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAB0C29FF0415A94C0CB5889BBCE41ED8A9B63E6F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * L_0 = ___item0;
		Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * L_1;
		L_1 = GrpcPreconditions_CheckNotNull_TisEntry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6_m2A298E2A00DBB859B663738CDA219E74EA44EF1B(L_0, /*hidden argument*/GrpcPreconditions_CheckNotNull_TisEntry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6_m2A298E2A00DBB859B663738CDA219E74EA44EF1B_RuntimeMethod_var);
		Metadata_CheckWriteable_m3D19ACA0B3FC5D4AA51E1B7F141ADA8700694877(__this, /*hidden argument*/NULL);
		List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537 * L_2 = __this->get_entries_2();
		Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * L_3 = ___item0;
		NullCheck(L_2);
		List_1_Add_mAB0C29FF0415A94C0CB5889BBCE41ED8A9B63E6F(L_2, L_3, /*hidden argument*/List_1_Add_mAB0C29FF0415A94C0CB5889BBCE41ED8A9B63E6F_RuntimeMethod_var);
		return;
	}
}
// System.Void Grpc.Core.Metadata::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Metadata_Clear_m7E263C3487628DDDB7ACA00C980DF8F5D0E5914A (Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m6DEF2A5600EC37B7540AA0A3A5FD6C8CEF1C28A8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Metadata_CheckWriteable_m3D19ACA0B3FC5D4AA51E1B7F141ADA8700694877(__this, /*hidden argument*/NULL);
		List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537 * L_0 = __this->get_entries_2();
		NullCheck(L_0);
		List_1_Clear_m6DEF2A5600EC37B7540AA0A3A5FD6C8CEF1C28A8(L_0, /*hidden argument*/List_1_Clear_m6DEF2A5600EC37B7540AA0A3A5FD6C8CEF1C28A8_RuntimeMethod_var);
		return;
	}
}
// System.Boolean Grpc.Core.Metadata::Contains(Grpc.Core.Metadata/Entry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Metadata_Contains_mC5823CCE74E4081D3262063F90591F6D286E843D (Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * __this, Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m70E782EF381196248BAA83B2342FFAF3CAA5A933_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537 * L_0 = __this->get_entries_2();
		Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * L_1 = ___item0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m70E782EF381196248BAA83B2342FFAF3CAA5A933(L_0, L_1, /*hidden argument*/List_1_Contains_m70E782EF381196248BAA83B2342FFAF3CAA5A933_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void Grpc.Core.Metadata::CopyTo(Grpc.Core.Metadata/Entry[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Metadata_CopyTo_m594DF4395B2F4DE0DBF4CB7E7D632791ED786084 (Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * __this, EntryU5BU5D_t63F9DC6B2C823B21AB3AAEF5A43E6F06A4721DA4* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_CopyTo_m8AAFC229CF326A5187509268A9EFD616855A5CE8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537 * L_0 = __this->get_entries_2();
		EntryU5BU5D_t63F9DC6B2C823B21AB3AAEF5A43E6F06A4721DA4* L_1 = ___array0;
		int32_t L_2 = ___arrayIndex1;
		NullCheck(L_0);
		List_1_CopyTo_m8AAFC229CF326A5187509268A9EFD616855A5CE8(L_0, L_1, L_2, /*hidden argument*/List_1_CopyTo_m8AAFC229CF326A5187509268A9EFD616855A5CE8_RuntimeMethod_var);
		return;
	}
}
// System.Int32 Grpc.Core.Metadata::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Metadata_get_Count_m54FF72FF783943CDA17A317C58CAF8E638609EEE (Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m07A83E9E28AD24DCDF32091405F7782AAE67D32A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537 * L_0 = __this->get_entries_2();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m07A83E9E28AD24DCDF32091405F7782AAE67D32A_inline(L_0, /*hidden argument*/List_1_get_Count_m07A83E9E28AD24DCDF32091405F7782AAE67D32A_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Grpc.Core.Metadata::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Metadata_get_IsReadOnly_m36E9C844E8A80722680B2ADA927111CBACF56D3A (Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_readOnly_3();
		return L_0;
	}
}
// System.Boolean Grpc.Core.Metadata::Remove(Grpc.Core.Metadata/Entry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Metadata_Remove_mFD0F7EF37C4E823F0EFD340A1D5B464443620D0E (Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * __this, Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mB4BD982D59AA9FDE9595A866ECD56D163EA3F37C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Metadata_CheckWriteable_m3D19ACA0B3FC5D4AA51E1B7F141ADA8700694877(__this, /*hidden argument*/NULL);
		List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537 * L_0 = __this->get_entries_2();
		Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * L_1 = ___item0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_mB4BD982D59AA9FDE9595A866ECD56D163EA3F37C(L_0, L_1, /*hidden argument*/List_1_Remove_mB4BD982D59AA9FDE9595A866ECD56D163EA3F37C_RuntimeMethod_var);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<Grpc.Core.Metadata/Entry> Grpc.Core.Metadata::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Metadata_GetEnumerator_m855789C418F0D9310B065AD4386F920191259653 (Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_tB6C52F7749A16CE4F8F809EB053FCBC62636EBB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m571501E172ED700DA7BA0014DA88317B282A8B6C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537 * L_0 = __this->get_entries_2();
		NullCheck(L_0);
		Enumerator_tB6C52F7749A16CE4F8F809EB053FCBC62636EBB7  L_1;
		L_1 = List_1_GetEnumerator_m571501E172ED700DA7BA0014DA88317B282A8B6C(L_0, /*hidden argument*/List_1_GetEnumerator_m571501E172ED700DA7BA0014DA88317B282A8B6C_RuntimeMethod_var);
		Enumerator_tB6C52F7749A16CE4F8F809EB053FCBC62636EBB7  L_2 = L_1;
		RuntimeObject * L_3 = Box(Enumerator_tB6C52F7749A16CE4F8F809EB053FCBC62636EBB7_il2cpp_TypeInfo_var, &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator Grpc.Core.Metadata::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Metadata_System_Collections_IEnumerable_GetEnumerator_m8D8C79F62D49CD7ACD576A539C8F7406FA200DA6 (Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_tB6C52F7749A16CE4F8F809EB053FCBC62636EBB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m571501E172ED700DA7BA0014DA88317B282A8B6C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t263FC81BBA423CDDA5306FD45751FA53EC08C537 * L_0 = __this->get_entries_2();
		NullCheck(L_0);
		Enumerator_tB6C52F7749A16CE4F8F809EB053FCBC62636EBB7  L_1;
		L_1 = List_1_GetEnumerator_m571501E172ED700DA7BA0014DA88317B282A8B6C(L_0, /*hidden argument*/List_1_GetEnumerator_m571501E172ED700DA7BA0014DA88317B282A8B6C_RuntimeMethod_var);
		Enumerator_tB6C52F7749A16CE4F8F809EB053FCBC62636EBB7  L_2 = L_1;
		RuntimeObject * L_3 = Box(Enumerator_tB6C52F7749A16CE4F8F809EB053FCBC62636EBB7_il2cpp_TypeInfo_var, &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Void Grpc.Core.Metadata::CheckWriteable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Metadata_CheckWriteable_m3D19ACA0B3FC5D4AA51E1B7F141ADA8700694877 (Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral822EDE75F5970A676E660AB56E0A62A92F681766);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_readOnly_3();
		GrpcPreconditions_CheckState_m1D18F7FA9669AB2FE25782B3E301179E7637113A((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0), _stringLiteral822EDE75F5970A676E660AB56E0A62A92F681766, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Grpc.Core.Metadata::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Metadata__cctor_m6B0F1994247C51D8BE4FB896CDCD068DF3150F21 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * L_0 = (Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 *)il2cpp_codegen_object_new(Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8_il2cpp_TypeInfo_var);
		Metadata__ctor_mCCA8906E38BEC39980A829BDBF672D140C7E0A78(L_0, /*hidden argument*/NULL);
		NullCheck(L_0);
		Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * L_1;
		L_1 = Metadata_Freeze_m66A962D9D4D7B589175C4E62CD18AE6672F062C5(L_0, /*hidden argument*/NULL);
		((Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8_StaticFields*)il2cpp_codegen_static_fields_for(Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8_il2cpp_TypeInfo_var))->set_Empty_0(L_1);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_2;
		L_2 = Encoding_get_ASCII_mD3E8370997347A3F6822BDA50BC0A1DBC0059173(/*hidden argument*/NULL);
		((Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8_StaticFields*)il2cpp_codegen_static_fields_for(Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8_il2cpp_TypeInfo_var))->set_EncodingASCII_1(L_2);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Grpc.Core.RpcException::.ctor(Grpc.Core.Status)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcException__ctor_mE10A6DA2E34D6550E57C7A40E6F67954A55C2D2E (RpcException_t6F91CC8B9147B9981612F75CF7E9CDBF7FB173AF * __this, Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035  ___status0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035  L_0 = ___status0;
		IL2CPP_RUNTIME_CLASS_INIT(Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8_il2cpp_TypeInfo_var);
		Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * L_1 = ((Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8_StaticFields*)il2cpp_codegen_static_fields_for(Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8_il2cpp_TypeInfo_var))->get_Empty_0();
		String_t* L_2;
		L_2 = Status_ToString_mCE243D714A86853D238CBDDCF659E7F6C1233DAF((Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035 *)(&___status0), /*hidden argument*/NULL);
		RpcException__ctor_mB6F32457FAD8F182092EB6A882F2C75165B120C6(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Grpc.Core.RpcException::.ctor(Grpc.Core.Status,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcException__ctor_m75C5CB5B44B3A3309D6D1DA7F4F765CEBAD4F5CA (RpcException_t6F91CC8B9147B9981612F75CF7E9CDBF7FB173AF * __this, Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035  ___status0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035  L_0 = ___status0;
		IL2CPP_RUNTIME_CLASS_INIT(Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8_il2cpp_TypeInfo_var);
		Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * L_1 = ((Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8_StaticFields*)il2cpp_codegen_static_fields_for(Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8_il2cpp_TypeInfo_var))->get_Empty_0();
		String_t* L_2 = ___message1;
		RpcException__ctor_mB6F32457FAD8F182092EB6A882F2C75165B120C6(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Grpc.Core.RpcException::.ctor(Grpc.Core.Status,Grpc.Core.Metadata)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcException__ctor_m9F78B3407E3E9C1C716A95F58E4B2E6CC72D4943 (RpcException_t6F91CC8B9147B9981612F75CF7E9CDBF7FB173AF * __this, Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035  ___status0, Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * ___trailers1, const RuntimeMethod* method)
{
	{
		Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035  L_0 = ___status0;
		Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * L_1 = ___trailers1;
		String_t* L_2;
		L_2 = Status_ToString_mCE243D714A86853D238CBDDCF659E7F6C1233DAF((Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035 *)(&___status0), /*hidden argument*/NULL);
		RpcException__ctor_mB6F32457FAD8F182092EB6A882F2C75165B120C6(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Grpc.Core.RpcException::.ctor(Grpc.Core.Status,Grpc.Core.Metadata,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcException__ctor_mB6F32457FAD8F182092EB6A882F2C75165B120C6 (RpcException_t6F91CC8B9147B9981612F75CF7E9CDBF7FB173AF * __this, Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035  ___status0, Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * ___trailers1, String_t* ___message2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrpcPreconditions_CheckNotNull_TisMetadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8_mF3A772AF477B53692357B6EC8B696BECCF9CCC37_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message2;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(__this, L_0, /*hidden argument*/NULL);
		Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035  L_1 = ___status0;
		__this->set_status_17(L_1);
		Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * L_2 = ___trailers1;
		Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * L_3;
		L_3 = GrpcPreconditions_CheckNotNull_TisMetadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8_mF3A772AF477B53692357B6EC8B696BECCF9CCC37(L_2, /*hidden argument*/GrpcPreconditions_CheckNotNull_TisMetadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8_mF3A772AF477B53692357B6EC8B696BECCF9CCC37_RuntimeMethod_var);
		__this->set_trailers_18(L_3);
		return;
	}
}
// Grpc.Core.Status Grpc.Core.RpcException::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035  RpcException_get_Status_m8F1EB6638F3819C6DF100B0AA1FF33D7F6F148B3 (RpcException_t6F91CC8B9147B9981612F75CF7E9CDBF7FB173AF * __this, const RuntimeMethod* method)
{
	{
		Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035  L_0 = __this->get_status_17();
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
// System.Void Grpc.Core.SerializationContext::Complete(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationContext_Complete_m880989E38F9C55CFE6C9F11774DE409481A960DD (SerializationContext_t86F13C62C3B4E4DAC598CE231784D6FD78B9B538 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___payload0, const RuntimeMethod* method)
{
	{
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationContext_Complete_m880989E38F9C55CFE6C9F11774DE409481A960DD_RuntimeMethod_var)));
	}
}
// System.Void Grpc.Core.SerializationContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationContext__ctor_m5A7200322AFEF14361601F5E9B34296583757F90 (SerializationContext_t86F13C62C3B4E4DAC598CE231784D6FD78B9B538 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void Grpc.Core.SslCredentials::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslCredentials__ctor_m8B35719C14541011FB9DF867DCEDEB85B8B216D2 (SslCredentials_t149917768B7958A3C7B569C5879C5CAFC7F43D3C * __this, const RuntimeMethod* method)
{
	{
		SslCredentials__ctor_mDB9DFC62648BBF42707B01553A3DBAA6B2ABE04E(__this, (String_t*)NULL, (KeyCertificatePair_tA0E29F1A2B9C02967DCEF3AEBF14D49AB346592C *)NULL, (VerifyPeerCallback_t80B8E9DEB9B025308E05573E757CA8136A52DD9A *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Grpc.Core.SslCredentials::.ctor(System.String,Grpc.Core.KeyCertificatePair,Grpc.Core.VerifyPeerCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslCredentials__ctor_mDB9DFC62648BBF42707B01553A3DBAA6B2ABE04E (SslCredentials_t149917768B7958A3C7B569C5879C5CAFC7F43D3C * __this, String_t* ___rootCertificates0, KeyCertificatePair_tA0E29F1A2B9C02967DCEF3AEBF14D49AB346592C * ___keyCertificatePair1, VerifyPeerCallback_t80B8E9DEB9B025308E05573E757CA8136A52DD9A * ___verifyPeerCallback2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E_il2cpp_TypeInfo_var);
		ChannelCredentials__ctor_mE748B679BDC1F83CBC6AD423FF9BC0A866624945(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___rootCertificates0;
		__this->set_rootCertificates_1(L_0);
		KeyCertificatePair_tA0E29F1A2B9C02967DCEF3AEBF14D49AB346592C * L_1 = ___keyCertificatePair1;
		__this->set_keyCertificatePair_2(L_1);
		VerifyPeerCallback_t80B8E9DEB9B025308E05573E757CA8136A52DD9A * L_2 = ___verifyPeerCallback2;
		__this->set_verifyPeerCallback_3(L_2);
		return;
	}
}
// System.Void Grpc.Core.SslCredentials::InternalPopulateConfiguration(Grpc.Core.ChannelCredentialsConfiguratorBase,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslCredentials_InternalPopulateConfiguration_mAD60E0B02B81C91983ABC213902678E243E5B012 (SslCredentials_t149917768B7958A3C7B569C5879C5CAFC7F43D3C * __this, ChannelCredentialsConfiguratorBase_t52E86B700F09115DB67F66866A2BDF4DA2F05B68 * ___configurator0, RuntimeObject * ___state1, const RuntimeMethod* method)
{
	{
		ChannelCredentialsConfiguratorBase_t52E86B700F09115DB67F66866A2BDF4DA2F05B68 * L_0 = ___configurator0;
		RuntimeObject * L_1 = ___state1;
		String_t* L_2 = __this->get_rootCertificates_1();
		KeyCertificatePair_tA0E29F1A2B9C02967DCEF3AEBF14D49AB346592C * L_3 = __this->get_keyCertificatePair_2();
		VerifyPeerCallback_t80B8E9DEB9B025308E05573E757CA8136A52DD9A * L_4 = __this->get_verifyPeerCallback_3();
		NullCheck(L_0);
		VirtActionInvoker4< RuntimeObject *, String_t*, KeyCertificatePair_tA0E29F1A2B9C02967DCEF3AEBF14D49AB346592C *, VerifyPeerCallback_t80B8E9DEB9B025308E05573E757CA8136A52DD9A * >::Invoke(5 /* System.Void Grpc.Core.ChannelCredentialsConfiguratorBase::SetSslCredentials(System.Object,System.String,Grpc.Core.KeyCertificatePair,Grpc.Core.VerifyPeerCallback) */, L_0, L_1, L_2, L_3, L_4);
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


// Conversion methods for marshalling of: Grpc.Core.Status
IL2CPP_EXTERN_C void Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035_marshal_pinvoke(const Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035& unmarshaled, Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CDebugExceptionU3Ek__BackingField_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<DebugException>k__BackingField' of type 'Status': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CDebugExceptionU3Ek__BackingField_4Exception, NULL);
}
IL2CPP_EXTERN_C void Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035_marshal_pinvoke_back(const Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035_marshaled_pinvoke& marshaled, Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035& unmarshaled)
{
	Exception_t* ___U3CDebugExceptionU3Ek__BackingField_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<DebugException>k__BackingField' of type 'Status': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CDebugExceptionU3Ek__BackingField_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: Grpc.Core.Status
IL2CPP_EXTERN_C void Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035_marshal_pinvoke_cleanup(Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: Grpc.Core.Status
IL2CPP_EXTERN_C void Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035_marshal_com(const Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035& unmarshaled, Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035_marshaled_com& marshaled)
{
	Exception_t* ___U3CDebugExceptionU3Ek__BackingField_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<DebugException>k__BackingField' of type 'Status': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CDebugExceptionU3Ek__BackingField_4Exception, NULL);
}
IL2CPP_EXTERN_C void Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035_marshal_com_back(const Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035_marshaled_com& marshaled, Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035& unmarshaled)
{
	Exception_t* ___U3CDebugExceptionU3Ek__BackingField_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<DebugException>k__BackingField' of type 'Status': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CDebugExceptionU3Ek__BackingField_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: Grpc.Core.Status
IL2CPP_EXTERN_C void Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035_marshal_com_cleanup(Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035_marshaled_com& marshaled)
{
}
// System.Void Grpc.Core.Status::.ctor(Grpc.Core.StatusCode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Status__ctor_mD813B072F537D5F71BA8EB89DD317DAB90850572 (Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035 * __this, int32_t ___statusCode0, String_t* ___detail1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___statusCode0;
		String_t* L_1 = ___detail1;
		Status__ctor_m6C6D6985096E7E15D3685F68FAF87259023926AC((Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035 *)__this, L_0, L_1, (Exception_t *)NULL, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Status__ctor_mD813B072F537D5F71BA8EB89DD317DAB90850572_AdjustorThunk (RuntimeObject * __this, int32_t ___statusCode0, String_t* ___detail1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035 * _thisAdjusted = reinterpret_cast<Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035 *>(__this + _offset);
	Status__ctor_mD813B072F537D5F71BA8EB89DD317DAB90850572(_thisAdjusted, ___statusCode0, ___detail1, method);
}
// System.Void Grpc.Core.Status::.ctor(Grpc.Core.StatusCode,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Status__ctor_m6C6D6985096E7E15D3685F68FAF87259023926AC (Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035 * __this, int32_t ___statusCode0, String_t* ___detail1, Exception_t * ___debugException2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___statusCode0;
		__this->set_U3CStatusCodeU3Ek__BackingField_2(L_0);
		String_t* L_1 = ___detail1;
		__this->set_U3CDetailU3Ek__BackingField_3(L_1);
		Exception_t * L_2 = ___debugException2;
		__this->set_U3CDebugExceptionU3Ek__BackingField_4(L_2);
		return;
	}
}
IL2CPP_EXTERN_C  void Status__ctor_m6C6D6985096E7E15D3685F68FAF87259023926AC_AdjustorThunk (RuntimeObject * __this, int32_t ___statusCode0, String_t* ___detail1, Exception_t * ___debugException2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035 * _thisAdjusted = reinterpret_cast<Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035 *>(__this + _offset);
	Status__ctor_m6C6D6985096E7E15D3685F68FAF87259023926AC(_thisAdjusted, ___statusCode0, ___detail1, ___debugException2, method);
}
// Grpc.Core.StatusCode Grpc.Core.Status::get_StatusCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Status_get_StatusCode_m6C049ABBAB172B6BF51F8C5A604A1472F3844A35 (Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CStatusCodeU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Status_get_StatusCode_m6C049ABBAB172B6BF51F8C5A604A1472F3844A35_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035 * _thisAdjusted = reinterpret_cast<Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Status_get_StatusCode_m6C049ABBAB172B6BF51F8C5A604A1472F3844A35_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.String Grpc.Core.Status::get_Detail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Status_get_Detail_m9F84C60B0F03E311AE703443F4936599EDA88F8C (Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CDetailU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Status_get_Detail_m9F84C60B0F03E311AE703443F4936599EDA88F8C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035 * _thisAdjusted = reinterpret_cast<Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Status_get_Detail_m9F84C60B0F03E311AE703443F4936599EDA88F8C_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Exception Grpc.Core.Status::get_DebugException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Status_get_DebugException_mC77D9F815D97104E92AFE8340C5553C71995AF53 (Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035 * __this, const RuntimeMethod* method)
{
	{
		Exception_t * L_0 = __this->get_U3CDebugExceptionU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Exception_t * Status_get_DebugException_mC77D9F815D97104E92AFE8340C5553C71995AF53_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035 * _thisAdjusted = reinterpret_cast<Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035 *>(__this + _offset);
	Exception_t * _returnValue;
	_returnValue = Status_get_DebugException_mC77D9F815D97104E92AFE8340C5553C71995AF53_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.String Grpc.Core.Status::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Status_ToString_mCE243D714A86853D238CBDDCF659E7F6C1233DAF (Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StatusCode_tB61C04113A55E52BD6341D431D6B3DD2F7B6E2F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC5275F31A11D4AC091381249B0215D81AB03CF9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFDA3D70B0D50B492DB756FABC3B4A4E00B0F8AF);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t * L_0;
		L_0 = Status_get_DebugException_mC77D9F815D97104E92AFE8340C5553C71995AF53_inline((Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_1;
		L_1 = Status_get_StatusCode_m6C049ABBAB172B6BF51F8C5A604A1472F3844A35_inline((Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035 *)__this, /*hidden argument*/NULL);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(StatusCode_tB61C04113A55E52BD6341D431D6B3DD2F7B6E2F0_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = Status_get_Detail_m9F84C60B0F03E311AE703443F4936599EDA88F8C_inline((Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035 *)__this, /*hidden argument*/NULL);
		Exception_t * L_5;
		L_5 = Status_get_DebugException_mC77D9F815D97104E92AFE8340C5553C71995AF53_inline((Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035 *)__this, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteralEFDA3D70B0D50B492DB756FABC3B4A4E00B0F8AF, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_002a:
	{
		int32_t L_7;
		L_7 = Status_get_StatusCode_m6C049ABBAB172B6BF51F8C5A604A1472F3844A35_inline((Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035 *)__this, /*hidden argument*/NULL);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(StatusCode_tB61C04113A55E52BD6341D431D6B3DD2F7B6E2F0_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = Status_get_Detail_m9F84C60B0F03E311AE703443F4936599EDA88F8C_inline((Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035 *)__this, /*hidden argument*/NULL);
		String_t* L_11;
		L_11 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralCC5275F31A11D4AC091381249B0215D81AB03CF9, L_9, L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
IL2CPP_EXTERN_C  String_t* Status_ToString_mCE243D714A86853D238CBDDCF659E7F6C1233DAF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035 * _thisAdjusted = reinterpret_cast<Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Status_ToString_mCE243D714A86853D238CBDDCF659E7F6C1233DAF(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Grpc.Core.Status::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Status__cctor_m68386D9900F5414BA359EC4EEEF2A542EB55CD0C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Status__ctor_mD813B072F537D5F71BA8EB89DD317DAB90850572((&L_0), 0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		((Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035_StaticFields*)il2cpp_codegen_static_fields_for(Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035_il2cpp_TypeInfo_var))->set_DefaultSuccess_0(L_0);
		Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Status__ctor_mD813B072F537D5F71BA8EB89DD317DAB90850572((&L_1), 1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		((Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035_StaticFields*)il2cpp_codegen_static_fields_for(Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035_il2cpp_TypeInfo_var))->set_DefaultCancelled_1(L_1);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Grpc.Core.VerifyPeerCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerifyPeerCallback__ctor_mEF008E4B3EC8E60A26C2ADEF362AEF59C0C48085 (VerifyPeerCallback_t80B8E9DEB9B025308E05573E757CA8136A52DD9A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean Grpc.Core.VerifyPeerCallback::Invoke(Grpc.Core.VerifyPeerContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VerifyPeerCallback_Invoke_mC970C57AE692023453EE4B2BFD523EACF9A76439 (VerifyPeerCallback_t80B8E9DEB9B025308E05573E757CA8136A52DD9A * __this, VerifyPeerContext_t98E84F9B487F65E5C51E7787813F3186FEC12A6C * ___context0, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef bool (*FunctionPointerType) (VerifyPeerContext_t98E84F9B487F65E5C51E7787813F3186FEC12A6C *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___context0, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, VerifyPeerContext_t98E84F9B487F65E5C51E7787813F3186FEC12A6C *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___context0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< bool >::Invoke(targetMethod, ___context0);
					else
						result = GenericVirtFuncInvoker0< bool >::Invoke(targetMethod, ___context0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___context0);
					else
						result = VirtFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___context0);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (VerifyPeerContext_t98E84F9B487F65E5C51E7787813F3186FEC12A6C *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___context0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, VerifyPeerContext_t98E84F9B487F65E5C51E7787813F3186FEC12A6C * >::Invoke(targetMethod, targetThis, ___context0);
					else
						result = GenericVirtFuncInvoker1< bool, VerifyPeerContext_t98E84F9B487F65E5C51E7787813F3186FEC12A6C * >::Invoke(targetMethod, targetThis, ___context0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, VerifyPeerContext_t98E84F9B487F65E5C51E7787813F3186FEC12A6C * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___context0);
					else
						result = VirtFuncInvoker1< bool, VerifyPeerContext_t98E84F9B487F65E5C51E7787813F3186FEC12A6C * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___context0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef bool (*FunctionPointerType) (VerifyPeerContext_t98E84F9B487F65E5C51E7787813F3186FEC12A6C *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___context0, targetMethod);
				}
				else
				{
					typedef bool (*FunctionPointerType) (void*, VerifyPeerContext_t98E84F9B487F65E5C51E7787813F3186FEC12A6C *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___context0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Grpc.Core.VerifyPeerCallback::BeginInvoke(Grpc.Core.VerifyPeerContext,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VerifyPeerCallback_BeginInvoke_m639BD4B8B9ED1F66B5DACF16718063FFB00428A5 (VerifyPeerCallback_t80B8E9DEB9B025308E05573E757CA8136A52DD9A * __this, VerifyPeerContext_t98E84F9B487F65E5C51E7787813F3186FEC12A6C * ___context0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___context0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Boolean Grpc.Core.VerifyPeerCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VerifyPeerCallback_EndInvoke_m04E5F63DDF815D82A464DDF12685E50309B73EE5 (VerifyPeerCallback_t80B8E9DEB9B025308E05573E757CA8136A52DD9A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Grpc.Core.VerifyPeerContext::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerifyPeerContext__ctor_m79E4011388AE4D42F98B061A7D50DA2FE7D36917 (VerifyPeerContext_t98E84F9B487F65E5C51E7787813F3186FEC12A6C * __this, String_t* ___targetName0, String_t* ___peerPem1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___targetName0;
		__this->set_U3CTargetNameU3Ek__BackingField_0(L_0);
		String_t* L_1 = ___peerPem1;
		__this->set_U3CPeerPemU3Ek__BackingField_1(L_1);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Grpc.Core.WriteOptions::.ctor(Grpc.Core.WriteFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteOptions__ctor_m171A56D6247014221930FCEDF5668D3270DDF45D (WriteOptions_t23E6F1264BABB93DF8CF3FC4D80395D9590D7755 * __this, int32_t ___flags0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___flags0;
		__this->set_flags_1(L_0);
		return;
	}
}
// Grpc.Core.WriteFlags Grpc.Core.WriteOptions::get_Flags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WriteOptions_get_Flags_m25F923709D53D54D5DB52841C19A9832606D64CD (WriteOptions_t23E6F1264BABB93DF8CF3FC4D80395D9590D7755 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_flags_1();
		return L_0;
	}
}
// System.Void Grpc.Core.WriteOptions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteOptions__cctor_mD5CB859C96F87350A95D044F6423198BE2357737 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WriteOptions_t23E6F1264BABB93DF8CF3FC4D80395D9590D7755_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WriteOptions_t23E6F1264BABB93DF8CF3FC4D80395D9590D7755 * L_0 = (WriteOptions_t23E6F1264BABB93DF8CF3FC4D80395D9590D7755 *)il2cpp_codegen_object_new(WriteOptions_t23E6F1264BABB93DF8CF3FC4D80395D9590D7755_il2cpp_TypeInfo_var);
		WriteOptions__ctor_m171A56D6247014221930FCEDF5668D3270DDF45D(L_0, 0, /*hidden argument*/NULL);
		((WriteOptions_t23E6F1264BABB93DF8CF3FC4D80395D9590D7755_StaticFields*)il2cpp_codegen_static_fields_for(WriteOptions_t23E6F1264BABB93DF8CF3FC4D80395D9590D7755_il2cpp_TypeInfo_var))->set_Default_0(L_0);
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
// System.Void Grpc.Core.ChannelBase/<ShutdownAsyncCore>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShutdownAsyncCoreU3Ed__6_MoveNext_m3BDB2DCC02217E72ACCF45D8D0FA7FBA99AB1054 (U3CShutdownAsyncCoreU3Ed__6_t271F14CF380B3E2733F13BF3B798BFE1EFFC0E39 * __this, const RuntimeMethod* method)
{
	Exception_t * V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		goto IL_0019;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0002;
		}
		throw e;
	}

CATCH_0002:
	{ // begin catch(System.Exception)
		V_0 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_1 = V_0;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002c;
	} // end catch (depth: 1)

IL_0019:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_2 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_2, /*hidden argument*/NULL);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CShutdownAsyncCoreU3Ed__6_MoveNext_m3BDB2DCC02217E72ACCF45D8D0FA7FBA99AB1054_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CShutdownAsyncCoreU3Ed__6_t271F14CF380B3E2733F13BF3B798BFE1EFFC0E39 * _thisAdjusted = reinterpret_cast<U3CShutdownAsyncCoreU3Ed__6_t271F14CF380B3E2733F13BF3B798BFE1EFFC0E39 *>(__this + _offset);
	U3CShutdownAsyncCoreU3Ed__6_MoveNext_m3BDB2DCC02217E72ACCF45D8D0FA7FBA99AB1054(_thisAdjusted, method);
}
// System.Void Grpc.Core.ChannelBase/<ShutdownAsyncCore>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShutdownAsyncCoreU3Ed__6_SetStateMachine_mA42AEA33EF9D2FCA74FD644E435B77E49A8D775B (U3CShutdownAsyncCoreU3Ed__6_t271F14CF380B3E2733F13BF3B798BFE1EFFC0E39 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CShutdownAsyncCoreU3Ed__6_SetStateMachine_mA42AEA33EF9D2FCA74FD644E435B77E49A8D775B_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CShutdownAsyncCoreU3Ed__6_t271F14CF380B3E2733F13BF3B798BFE1EFFC0E39 * _thisAdjusted = reinterpret_cast<U3CShutdownAsyncCoreU3Ed__6_t271F14CF380B3E2733F13BF3B798BFE1EFFC0E39 *>(__this + _offset);
	U3CShutdownAsyncCoreU3Ed__6_SetStateMachine_mA42AEA33EF9D2FCA74FD644E435B77E49A8D775B(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Grpc.Core.ChannelCredentials/InsecureCredentials::InternalPopulateConfiguration(Grpc.Core.ChannelCredentialsConfiguratorBase,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InsecureCredentials_InternalPopulateConfiguration_mCC132BE9FB0ECE135AA8C921A921CAB9F0CC2A88 (InsecureCredentials_tE3CFB2298C8F2D23049DBAE5F6452ADDE83FF2FB * __this, ChannelCredentialsConfiguratorBase_t52E86B700F09115DB67F66866A2BDF4DA2F05B68 * ___configurator0, RuntimeObject * ___state1, const RuntimeMethod* method)
{
	{
		ChannelCredentialsConfiguratorBase_t52E86B700F09115DB67F66866A2BDF4DA2F05B68 * L_0 = ___configurator0;
		RuntimeObject * L_1 = ___state1;
		NullCheck(L_0);
		VirtActionInvoker1< RuntimeObject * >::Invoke(4 /* System.Void Grpc.Core.ChannelCredentialsConfiguratorBase::SetInsecureCredentials(System.Object) */, L_0, L_1);
		return;
	}
}
// System.Void Grpc.Core.ChannelCredentials/InsecureCredentials::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InsecureCredentials__ctor_mF7239EE6BC6BB020F2F7C0F2D8B47A264147F145 (InsecureCredentials_tE3CFB2298C8F2D23049DBAE5F6452ADDE83FF2FB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ChannelCredentials_t0E172BDC82B0B9F87D1648BB35AB04DD3CFB5A1E_il2cpp_TypeInfo_var);
		ChannelCredentials__ctor_mE748B679BDC1F83CBC6AD423FF9BC0A866624945(__this, /*hidden argument*/NULL);
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
// System.Void Grpc.Core.Metadata/Entry::.ctor(System.String,System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entry__ctor_m1F23E2AEC76DE04614A4A6D6AA14E6F6BB7B4812 (Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * __this, String_t* ___key0, String_t* ___value1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___valueBytes2, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___key0;
		__this->set_key_0(L_0);
		String_t* L_1 = ___value1;
		__this->set_value_1(L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___valueBytes2;
		__this->set_valueBytes_2(L_2);
		return;
	}
}
// System.String Grpc.Core.Metadata/Entry::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Entry_get_Key_mE8D9A267799BF3F78FD30EE7ADA83F3B41ECA5DD (Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_key_0();
		return L_0;
	}
}
// System.String Grpc.Core.Metadata/Entry::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Entry_get_Value_m9DA5222BB9A19F23156FA15A8D0791CD108CF360 (Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral330132604A8C7C73B4775BFE93C8FBEC4857F022);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = Entry_get_IsBinary_m0DA2962C4F2FD2E1F9EFAADEB9CD4318357DB43D(__this, /*hidden argument*/NULL);
		GrpcPreconditions_CheckState_m1D18F7FA9669AB2FE25782B3E301179E7637113A((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0), _stringLiteral330132604A8C7C73B4775BFE93C8FBEC4857F022, /*hidden argument*/NULL);
		String_t* L_1 = __this->get_value_1();
		return L_1;
	}
}
// System.Boolean Grpc.Core.Metadata/Entry::get_IsBinary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Entry_get_IsBinary_m0DA2962C4F2FD2E1F9EFAADEB9CD4318357DB43D (Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_value_1();
		return (bool)((((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
	}
}
// System.String Grpc.Core.Metadata/Entry::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Entry_ToString_m007C06C27DDC351B2FD781127AD2924B8A6100F5 (Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61B4338BE86CB9213EE71FAD62B393B8922755E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA00F3DF646A4521C1DC3F40012285F4CA6DB6A43);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = Entry_get_IsBinary_m0DA2962C4F2FD2E1F9EFAADEB9CD4318357DB43D(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_1 = __this->get_key_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = __this->get_valueBytes_2();
		String_t* L_3;
		L_3 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralA00F3DF646A4521C1DC3F40012285F4CA6DB6A43, L_1, (RuntimeObject *)(RuntimeObject *)L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_001f:
	{
		String_t* L_4 = __this->get_key_0();
		String_t* L_5 = __this->get_value_1();
		String_t* L_6;
		L_6 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral61B4338BE86CB9213EE71FAD62B393B8922755E8, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Byte[] Grpc.Core.Metadata/Entry::GetSerializedValueUnsafe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Entry_GetSerializedValueUnsafe_mA5C14354F2E7C781B41264BDC83BABCAFD9DF431 (Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* G_B2_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* G_B1_0 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get_valueBytes_2();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8_il2cpp_TypeInfo_var);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_2 = ((Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8_StaticFields*)il2cpp_codegen_static_fields_for(Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8_il2cpp_TypeInfo_var))->get_EncodingASCII_1();
		String_t* L_3 = __this->get_value_1();
		NullCheck(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
		L_4 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(15 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_2, L_3);
		G_B2_0 = L_4;
	}

IL_001a:
	{
		return G_B2_0;
	}
}
// Grpc.Core.Metadata/Entry Grpc.Core.Metadata/Entry::CreateUnsafe(System.String,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * Entry_CreateUnsafe_m029547FF5A58186267C21BFB2F3F0AA5A8AF92F8 (String_t* ___key0, intptr_t ___source1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		String_t* L_0 = ___key0;
		IL2CPP_RUNTIME_CLASS_INIT(Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Entry_HasBinaryHeaderSuffix_mD5BAB0B3F6F9DEE791298A18C1018BED5870C5A0(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_2 = ___length2;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ((Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6_StaticFields*)il2cpp_codegen_static_fields_for(Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6_il2cpp_TypeInfo_var))->get_EmptyByteArray_3();
		V_0 = L_3;
		goto IL_0023;
	}

IL_0013:
	{
		int32_t L_4 = ___length2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_0 = L_5;
		intptr_t L_6 = ___source1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = V_0;
		int32_t L_8 = ___length2;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_Copy_m057A8067BF7212A361510EA26B24022990A07AC0((intptr_t)L_6, L_7, 0, L_8, /*hidden argument*/NULL);
	}

IL_0023:
	{
		String_t* L_9 = ___key0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = V_0;
		Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * L_11 = (Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 *)il2cpp_codegen_object_new(Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6_il2cpp_TypeInfo_var);
		Entry__ctor_m1F23E2AEC76DE04614A4A6D6AA14E6F6BB7B4812(L_11, L_9, (String_t*)NULL, L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_002c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8_il2cpp_TypeInfo_var);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_12 = ((Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8_StaticFields*)il2cpp_codegen_static_fields_for(Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8_il2cpp_TypeInfo_var))->get_EncodingASCII_1();
		intptr_t L_13 = ___source1;
		int32_t L_14 = ___length2;
		String_t* L_15;
		L_15 = EncodingExtensions_GetString_m0832A890E3F4D24BA31BABCB90AD9FCBEE0E88C4_inline(L_12, (intptr_t)L_13, L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		String_t* L_16 = ___key0;
		String_t* L_17 = V_1;
		Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 * L_18 = (Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6 *)il2cpp_codegen_object_new(Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6_il2cpp_TypeInfo_var);
		Entry__ctor_m1F23E2AEC76DE04614A4A6D6AA14E6F6BB7B4812(L_18, L_16, L_17, (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL, /*hidden argument*/NULL);
		return L_18;
	}
}
// System.Boolean Grpc.Core.Metadata/Entry::HasBinaryHeaderSuffix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Entry_HasBinaryHeaderSuffix_mD5BAB0B3F6F9DEE791298A18C1018BED5870C5A0 (String_t* ___key0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___key0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)4)))
		{
			goto IL_0041;
		}
	}
	{
		String_t* L_3 = ___key0;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Il2CppChar L_5;
		L_5 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_3, ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)4)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0041;
		}
	}
	{
		String_t* L_6 = ___key0;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		Il2CppChar L_8;
		L_8 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_6, ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)3)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)98)))))
		{
			goto IL_0041;
		}
	}
	{
		String_t* L_9 = ___key0;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		Il2CppChar L_11;
		L_11 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_9, ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)2)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)105)))))
		{
			goto IL_0041;
		}
	}
	{
		String_t* L_12 = ___key0;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		Il2CppChar L_14;
		L_14 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_12, ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_0041;
		}
	}
	{
		return (bool)1;
	}

IL_0041:
	{
		return (bool)0;
	}
}
// System.Void Grpc.Core.Metadata/Entry::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entry__cctor_mDF7EE73E9B1B03B1CE497C6206A634778410A94A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)0);
		((Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6_StaticFields*)il2cpp_codegen_static_fields_for(Entry_t96A05393C10C46A1B2E029A5A21E978EF5713EA6_il2cpp_TypeInfo_var))->set_EmptyByteArray_3(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * CallOptions_get_Headers_m7DB2D6045E675B5EADFAB4E7790E9861FF9B791D_inline (CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B * __this, const RuntimeMethod* method)
{
	{
		Metadata_t06F0C7CE1D6F1272CAE002775FF6A5D03858DEB8 * L_0 = __this->get_headers_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  CallOptions_get_Deadline_mDF9B3BB905CEEEDDCF8F9536525B637F071528FC_inline (CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B * __this, const RuntimeMethod* method)
{
	{
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_0 = __this->get_deadline_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  CallOptions_get_CancellationToken_mC631E51DD2518E4C41B2EA2426445CC6558F31A2_inline (CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B * __this, const RuntimeMethod* method)
{
	{
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_0 = __this->get_cancellationToken_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WriteOptions_t23E6F1264BABB93DF8CF3FC4D80395D9590D7755 * CallOptions_get_WriteOptions_m0B6F41F1B39E6508CD6CB8F6680B04181856E411_inline (CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B * __this, const RuntimeMethod* method)
{
	{
		WriteOptions_t23E6F1264BABB93DF8CF3FC4D80395D9590D7755 * L_0 = __this->get_writeOptions_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ContextPropagationToken_tA4D9F93C718C73B7727D0C9BAD75CFC6ABBE06F5 * CallOptions_get_PropagationToken_mEB07DD79D1DB3488F7095420531F4A3DAE59C67C_inline (CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B * __this, const RuntimeMethod* method)
{
	{
		ContextPropagationToken_tA4D9F93C718C73B7727D0C9BAD75CFC6ABBE06F5 * L_0 = __this->get_propagationToken_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CallCredentials_tA3EF393B2D204B6BE467BF6A119EB73B10E43BF7 * CallOptions_get_Credentials_m17F062E54416A45F2F0C220523C0AEE0399A6976_inline (CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B * __this, const RuntimeMethod* method)
{
	{
		CallCredentials_tA3EF393B2D204B6BE467BF6A119EB73B10E43BF7 * L_0 = __this->get_credentials_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CallOptions_get_Flags_m6B4AEC31DE7EFAD89F5065255E1E7F44F5C478B6_inline (CallOptions_tE42305E41B50748E0548A4094BB4B48481A3053B * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_flags_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m5C7CE32B14B6E30467B378052FEA25300833C61F_inline (intptr_t* __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Status_get_StatusCode_m6C049ABBAB172B6BF51F8C5A604A1472F3844A35_inline (Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CStatusCodeU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Status_get_Detail_m9F84C60B0F03E311AE703443F4936599EDA88F8C_inline (Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CDetailU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t * Status_get_DebugException_mC77D9F815D97104E92AFE8340C5553C71995AF53_inline (Status_tF252898F7FE91D273E0A3AF2A7BA72A003F74035 * __this, const RuntimeMethod* method)
{
	{
		Exception_t * L_0 = __this->get_U3CDebugExceptionU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EncodingExtensions_GetString_m0832A890E3F4D24BA31BABCB90AD9FCBEE0E88C4_inline (Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding0, intptr_t ___ptr1, int32_t ___len2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___len2;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_1 = ___encoding0;
		void* L_2;
		L_2 = IntPtr_ToPointer_m5C7CE32B14B6E30467B378052FEA25300833C61F_inline((intptr_t*)(&___ptr1), /*hidden argument*/NULL);
		int32_t L_3 = ___len2;
		String_t* L_4;
		L_4 = EncodingExtensions_GetString_m3627C4A66233591559DDFAF0E9E04F870041C63E(L_1, (uint8_t*)(uint8_t*)L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0012:
	{
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
