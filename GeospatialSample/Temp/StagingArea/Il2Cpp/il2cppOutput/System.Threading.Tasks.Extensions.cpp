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
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Runtime.CompilerServices.AsyncMethodBuilderAttribute
struct AsyncMethodBuilderAttribute_t7AB591B0ECB9ED957ACDF33157EAAC88AAEF0F04;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t9812F68DF0E28E3567690A78FCB407D7BC452632;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Threading.Tasks.Sources.IValueTaskSource
struct IValueTaskSource_t1CC0CC2515BCB4D99FECF8867FE9A24EDE64B662;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tF5387AB3987EAE620AAFF0CECDE7BB9F98C156A4;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.Diagnostics.StackTraceHiddenAttribute
struct StackTraceHiddenAttribute_t6E98A432F8245DD0597A48BFC95038AF42B5C9D9;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// System.Runtime.CompilerServices.ValueTaskAwaiter/<>c
struct U3CU3Ec_t04590189C2E531C111230F99E4CE5CB0882F111F;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionArgument_tC54E315921E82121667FD0FF6BD75053F3D9CA8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IValueTaskSource_t1CC0CC2515BCB4D99FECF8867FE9A24EDE64B662_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t04590189C2E531C111230F99E4CE5CB0882F111F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArgumentNullException_m58505DB8941A68CDC7B5C9E720456C6464DDA71F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArgumentOutOfRangeException_m0B5663FDF1F3F8EDAA0093D162295765FCEC52B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__9_0_m892CC118EE44F242E4934434CF45123AEB902316_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unsafe_As_TisIValueTaskSource_t1CC0CC2515BCB4D99FECF8867FE9A24EDE64B662_mBD42C3E25DB5D0B01D45F0C7F30F3F3E62F796D2_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tA65760CD164494B481FD3BBCBA8C20A7780D9156 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
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


// System.ThrowHelper
struct ThrowHelper_tB695D98FDFFF3E17138EEA970A4629A69AAF08ED  : public RuntimeObject
{
public:

public:
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

// System.Runtime.CompilerServices.ValueTaskAwaiter/<>c
struct U3CU3Ec_t04590189C2E531C111230F99E4CE5CB0882F111F  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t04590189C2E531C111230F99E4CE5CB0882F111F_StaticFields
{
public:
	// System.Runtime.CompilerServices.ValueTaskAwaiter/<>c System.Runtime.CompilerServices.ValueTaskAwaiter/<>c::<>9
	U3CU3Ec_t04590189C2E531C111230F99E4CE5CB0882F111F * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t04590189C2E531C111230F99E4CE5CB0882F111F_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t04590189C2E531C111230F99E4CE5CB0882F111F * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t04590189C2E531C111230F99E4CE5CB0882F111F ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t04590189C2E531C111230F99E4CE5CB0882F111F * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderAttribute
struct AsyncMethodBuilderAttribute_t7AB591B0ECB9ED957ACDF33157EAAC88AAEF0F04  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Type System.Runtime.CompilerServices.AsyncMethodBuilderAttribute::<BuilderType>k__BackingField
	Type_t * ___U3CBuilderTypeU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CBuilderTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderAttribute_t7AB591B0ECB9ED957ACDF33157EAAC88AAEF0F04, ___U3CBuilderTypeU3Ek__BackingField_0)); }
	inline Type_t * get_U3CBuilderTypeU3Ek__BackingField_0() const { return ___U3CBuilderTypeU3Ek__BackingField_0; }
	inline Type_t ** get_address_of_U3CBuilderTypeU3Ek__BackingField_0() { return &___U3CBuilderTypeU3Ek__BackingField_0; }
	inline void set_U3CBuilderTypeU3Ek__BackingField_0(Type_t * value)
	{
		___U3CBuilderTypeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBuilderTypeU3Ek__BackingField_0), (void*)value);
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

// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t9812F68DF0E28E3567690A78FCB407D7BC452632  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
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

// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
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
struct IsReadOnlyAttribute_tF5387AB3987EAE620AAFF0CECDE7BB9F98C156A4  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Diagnostics.StackTraceHiddenAttribute
struct StackTraceHiddenAttribute_t6E98A432F8245DD0597A48BFC95038AF42B5C9D9  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
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

// System.Threading.Tasks.ValueTask
struct ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 
{
public:
	// System.Object System.Threading.Tasks.ValueTask::_obj
	RuntimeObject * ____obj_2;
	// System.Int16 System.Threading.Tasks.ValueTask::_token
	int16_t ____token_3;
	// System.Boolean System.Threading.Tasks.ValueTask::_continueOnCapturedContext
	bool ____continueOnCapturedContext_4;

public:
	inline static int32_t get_offset_of__obj_2() { return static_cast<int32_t>(offsetof(ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5, ____obj_2)); }
	inline RuntimeObject * get__obj_2() const { return ____obj_2; }
	inline RuntimeObject ** get_address_of__obj_2() { return &____obj_2; }
	inline void set__obj_2(RuntimeObject * value)
	{
		____obj_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____obj_2), (void*)value);
	}

	inline static int32_t get_offset_of__token_3() { return static_cast<int32_t>(offsetof(ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5, ____token_3)); }
	inline int16_t get__token_3() const { return ____token_3; }
	inline int16_t* get_address_of__token_3() { return &____token_3; }
	inline void set__token_3(int16_t value)
	{
		____token_3 = value;
	}

	inline static int32_t get_offset_of__continueOnCapturedContext_4() { return static_cast<int32_t>(offsetof(ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5, ____continueOnCapturedContext_4)); }
	inline bool get__continueOnCapturedContext_4() const { return ____continueOnCapturedContext_4; }
	inline bool* get_address_of__continueOnCapturedContext_4() { return &____continueOnCapturedContext_4; }
	inline void set__continueOnCapturedContext_4(bool value)
	{
		____continueOnCapturedContext_4 = value;
	}
};

struct ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5_StaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.ValueTask::s_canceledTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_canceledTask_0;
	// System.Threading.Tasks.Task System.Threading.Tasks.ValueTask::<CompletedTask>k__BackingField
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___U3CCompletedTaskU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_s_canceledTask_0() { return static_cast<int32_t>(offsetof(ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5_StaticFields, ___s_canceledTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_canceledTask_0() const { return ___s_canceledTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_canceledTask_0() { return &___s_canceledTask_0; }
	inline void set_s_canceledTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_canceledTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_canceledTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCompletedTaskU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5_StaticFields, ___U3CCompletedTaskU3Ek__BackingField_1)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_U3CCompletedTaskU3Ek__BackingField_1() const { return ___U3CCompletedTaskU3Ek__BackingField_1; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_U3CCompletedTaskU3Ek__BackingField_1() { return &___U3CCompletedTaskU3Ek__BackingField_1; }
	inline void set_U3CCompletedTaskU3Ek__BackingField_1(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___U3CCompletedTaskU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCompletedTaskU3Ek__BackingField_1), (void*)value);
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

// System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable
struct ConfiguredValueTaskAwaitable_tCE30DAA7B5E29DDAD7AA08798C520FA660007CF9 
{
public:
	// System.Threading.Tasks.ValueTask System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable::_value
	ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5  ____value_0;

public:
	inline static int32_t get_offset_of__value_0() { return static_cast<int32_t>(offsetof(ConfiguredValueTaskAwaitable_tCE30DAA7B5E29DDAD7AA08798C520FA660007CF9, ____value_0)); }
	inline ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5  get__value_0() const { return ____value_0; }
	inline ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * get_address_of__value_0() { return &____value_0; }
	inline void set__value_0(ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5  value)
	{
		____value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____value_0))->____obj_2), (void*)NULL);
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

// System.ExceptionArgument
struct ExceptionArgument_tC54E315921E82121667FD0FF6BD75053F3D9CA8D 
{
public:
	// System.Int32 System.ExceptionArgument::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExceptionArgument_tC54E315921E82121667FD0FF6BD75053F3D9CA8D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// System.Runtime.CompilerServices.ValueTaskAwaiter
struct ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA 
{
public:
	// System.Threading.Tasks.ValueTask System.Runtime.CompilerServices.ValueTaskAwaiter::_value
	ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5  ____value_1;

public:
	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA, ____value_1)); }
	inline ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5  get__value_1() const { return ____value_1; }
	inline ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5  value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____value_1))->____obj_2), (void*)NULL);
	}
};

struct ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA_StaticFields
{
public:
	// System.Action`1<System.Object> System.Runtime.CompilerServices.ValueTaskAwaiter::s_invokeActionDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_invokeActionDelegate_0;

public:
	inline static int32_t get_offset_of_s_invokeActionDelegate_0() { return static_cast<int32_t>(offsetof(ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA_StaticFields, ___s_invokeActionDelegate_0)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_invokeActionDelegate_0() const { return ___s_invokeActionDelegate_0; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_invokeActionDelegate_0() { return &___s_invokeActionDelegate_0; }
	inline void set_s_invokeActionDelegate_0(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_invokeActionDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_invokeActionDelegate_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ValueTaskAwaiter
struct ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA_marshaled_pinvoke
{
	ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5  ____value_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ValueTaskAwaiter
struct ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA_marshaled_com
{
	ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5  ____value_1;
};

// System.Threading.Tasks.Sources.ValueTaskSourceOnCompletedFlags
struct ValueTaskSourceOnCompletedFlags_tA8E51793DF55D223CF58F4306FD8371A05EA86C8 
{
public:
	// System.Int32 System.Threading.Tasks.Sources.ValueTaskSourceOnCompletedFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ValueTaskSourceOnCompletedFlags_tA8E51793DF55D223CF58F4306FD8371A05EA86C8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Sources.ValueTaskSourceStatus
struct ValueTaskSourceStatus_t97614E6E472330038278CEB5BD0D0C71D70C3619 
{
public:
	// System.Int32 System.Threading.Tasks.Sources.ValueTaskSourceStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ValueTaskSourceStatus_t97614E6E472330038278CEB5BD0D0C71D70C3619, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter
struct ConfiguredValueTaskAwaiter_t112A67291B7E35E791EA702BD9F300EAB390D6AF 
{
public:
	// System.Threading.Tasks.ValueTask System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter::_value
	ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5  ____value_0;

public:
	inline static int32_t get_offset_of__value_0() { return static_cast<int32_t>(offsetof(ConfiguredValueTaskAwaiter_t112A67291B7E35E791EA702BD9F300EAB390D6AF, ____value_0)); }
	inline ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5  get__value_0() const { return ____value_0; }
	inline ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * get_address_of__value_0() { return &____value_0; }
	inline void set__value_0(ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5  value)
	{
		____value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____value_0))->____obj_2), (void*)NULL);
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


// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC  : public MulticastDelegate_t
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


// System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder
struct AsyncValueTaskMethodBuilder_t0D3628A9C8312F3AD587AE82AF4D8A170103B1E8 
{
public:
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder::_methodBuilder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ____methodBuilder_0;
	// System.Boolean System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder::_haveResult
	bool ____haveResult_1;
	// System.Boolean System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder::_useBuilder
	bool ____useBuilder_2;

public:
	inline static int32_t get_offset_of__methodBuilder_0() { return static_cast<int32_t>(offsetof(AsyncValueTaskMethodBuilder_t0D3628A9C8312F3AD587AE82AF4D8A170103B1E8, ____methodBuilder_0)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get__methodBuilder_0() const { return ____methodBuilder_0; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of__methodBuilder_0() { return &____methodBuilder_0; }
	inline void set__methodBuilder_0(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		____methodBuilder_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&____methodBuilder_0))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&____methodBuilder_0))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&____methodBuilder_0))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__haveResult_1() { return static_cast<int32_t>(offsetof(AsyncValueTaskMethodBuilder_t0D3628A9C8312F3AD587AE82AF4D8A170103B1E8, ____haveResult_1)); }
	inline bool get__haveResult_1() const { return ____haveResult_1; }
	inline bool* get_address_of__haveResult_1() { return &____haveResult_1; }
	inline void set__haveResult_1(bool value)
	{
		____haveResult_1 = value;
	}

	inline static int32_t get_offset_of__useBuilder_2() { return static_cast<int32_t>(offsetof(AsyncValueTaskMethodBuilder_t0D3628A9C8312F3AD587AE82AF4D8A170103B1E8, ____useBuilder_2)); }
	inline bool get__useBuilder_2() const { return ____useBuilder_2; }
	inline bool* get_address_of__useBuilder_2() { return &____useBuilder_2; }
	inline void set__useBuilder_2(bool value)
	{
		____useBuilder_2 = value;
	}
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// !!0 System.Runtime.CompilerServices.Unsafe::As<System.Object>(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Unsafe_As_TisRuntimeObject_mB69494631721B5C97E5C8DFF3FB8B4E570B214AE_gshared_inline (RuntimeObject * ___o0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncValueTaskMethodBuilder_SetStateMachine_m3188B03A10264F946C66E4219B762F5E8DA834DF (AsyncValueTaskMethodBuilder_t0D3628A9C8312F3AD587AE82AF4D8A170103B1E8 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncValueTaskMethodBuilder_SetResult_m965DBAD8BBA26DB5B979D5CE7A8D30B2ED6D4AA1 (AsyncValueTaskMethodBuilder_t0D3628A9C8312F3AD587AE82AF4D8A170103B1E8 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncValueTaskMethodBuilder_SetException_m9B47529F90B538885E5FE9B831021AB356858933 (AsyncValueTaskMethodBuilder_t0D3628A9C8312F3AD587AE82AF4D8A170103B1E8 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.ValueTask::.ctor(System.Threading.Tasks.Task)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask__ctor_m975D708070BC01E6BCEE8C2E61E3DE928F8B20E4_inline (ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * __this, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___task0, const RuntimeMethod* method);
// System.Threading.Tasks.ValueTask System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5  AsyncValueTaskMethodBuilder_get_Task_m2B6F5A6C131C7300C907BA7E8F39EF07B0A9501E (AsyncValueTaskMethodBuilder_t0D3628A9C8312F3AD587AE82AF4D8A170103B1E8 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable::.ctor(System.Threading.Tasks.ValueTask)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaitable__ctor_mF772FC9DF81E1FC057B55AFCA9F3FCB870F909E0_inline (ConfiguredValueTaskAwaitable_tCE30DAA7B5E29DDAD7AA08798C520FA660007CF9 * __this, ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5  ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter::.ctor(System.Threading.Tasks.ValueTask)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaiter__ctor_mFDF59778A80420DBEA274C21F30ED02C71844A7E_inline (ConfiguredValueTaskAwaiter_t112A67291B7E35E791EA702BD9F300EAB390D6AF * __this, ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5  ___value0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredValueTaskAwaiter_t112A67291B7E35E791EA702BD9F300EAB390D6AF  ConfiguredValueTaskAwaitable_GetAwaiter_mC2CCE6DFE422B343179181781C548AD21D902816_inline (ConfiguredValueTaskAwaitable_tCE30DAA7B5E29DDAD7AA08798C520FA660007CF9 * __this, const RuntimeMethod* method);
// System.ArgumentNullException System.ThrowHelper::GetArgumentNullException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * ThrowHelper_GetArgumentNullException_m6C50728A84EC19B63F00E38CA823AD065D172971 (int32_t ___argument0, const RuntimeMethod* method);
// System.ArgumentOutOfRangeException System.ThrowHelper::GetArgumentOutOfRangeException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * ThrowHelper_GetArgumentOutOfRangeException_m51652B51B160326DEC2DD1E021CC2F9B82B28DF5 (int32_t ___argument0, const RuntimeMethod* method);
// System.String System.ThrowHelper::GetArgumentName(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR String_t* ThrowHelper_GetArgumentName_m39B4DDE930E1C01D25E88D7615CBD4D95435FB67 (int32_t ___argument0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentNullException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m58505DB8941A68CDC7B5C9E720456C6464DDA71F (int32_t ___argument0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.ValueTask::.ctor(System.Object,System.Int16,System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask__ctor_m88B2D6B5434FCDB2A0999BB9B7F810A068E37A24_inline (ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * __this, RuntimeObject * ___obj0, int16_t ___token1, bool ___continueOnCapturedContext2, const RuntimeMethod* method);
// System.Int32 System.Threading.Tasks.ValueTask::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTask_GetHashCode_m158970B1DD3DAF5234C01F4432725726CBBE220B (ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.ValueTask::Equals(System.Threading.Tasks.ValueTask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTask_Equals_m4BF54849B66845D4746F32108CA53127D15D9DB0 (ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * __this, ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5  ___other0, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.ValueTask::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTask_Equals_m7A88C17E06E7B9CA1414C8CB8803951E7144ACC9 (ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.Task::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCompleted_m7EF73EE6C4F400997345371FFB10137D8E9B4E1E (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// !!0 System.Runtime.CompilerServices.Unsafe::As<System.Threading.Tasks.Sources.IValueTaskSource>(System.Object)
inline RuntimeObject* Unsafe_As_TisIValueTaskSource_t1CC0CC2515BCB4D99FECF8867FE9A24EDE64B662_mBD42C3E25DB5D0B01D45F0C7F30F3F3E62F796D2_inline (RuntimeObject * ___o0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject *, const RuntimeMethod*))Unsafe_As_TisRuntimeObject_mB69494631721B5C97E5C8DFF3FB8B4E570B214AE_gshared_inline)(___o0, method);
}
// System.Boolean System.Threading.Tasks.ValueTask::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ValueTask_get_IsCompleted_mE1CD52AA84F269936D8037A6262D88BE14484A11_inline (ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330 (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.ValueTask::ThrowIfCompletedUnsuccessfully()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask_ThrowIfCompletedUnsuccessfully_m23861DBB8F8179889EF67AE1B736CD7779C91B2D_inline (ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable System.Threading.Tasks.ValueTask::ConfigureAwait(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredValueTaskAwaitable_tCE30DAA7B5E29DDAD7AA08798C520FA660007CF9  ValueTask_ConfigureAwait_m7E046002A7F76397BC4F793303607A99ABAA5A21_inline (ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method);
// System.Void System.Threading.CancellationToken::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationToken__ctor_m769EFF18848E3A442C63D21A4B15D2C2E4C623B7 (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * __this, bool ___canceled0, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Delay(System.Int32,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_Delay_m1CF07794A72A4AB5575AA9360D8CCEE3D9004FA6 (int32_t ___millisecondsDelay0, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken1, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Delay(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_Delay_mD54722DBAF22507493263E9B1167A7F77EDDF80E (int32_t ___millisecondsDelay0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.TaskAwaiter::OnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_OnCompleted_mF8028FE51C336F14A933AC8E177F9B517D6ECAB6 (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.ValueTask::get_CompletedTask()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ValueTask_get_CompletedTask_mF69ED79258ABA58AB101F60D67061BF7D8F4CBC2_inline (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ValueTaskAwaiter::OnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTaskAwaiter_OnCompleted_m1AF27A1417DFCA011318067EB4CCC7CCC4228C50 (ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.TaskAwaiter::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_UnsafeOnCompleted_m4AC803A6118C13715CE0DF81D765EBE2608C8677 (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ValueTaskAwaiter::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTaskAwaiter_UnsafeOnCompleted_mEDC1D020D201BA364B538D370549F8A4F22960C8 (ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158 (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ConfiguredValueTaskAwaiter_get_IsCompleted_m67C02FF242977F34B9205CA924A55FF9E8BACAC1_inline (ConfiguredValueTaskAwaiter_t112A67291B7E35E791EA702BD9F300EAB390D6AF * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter::GetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaiter_GetResult_m3F012DAAAF3AF67CECDC51CA4898A29847315E70_inline (ConfiguredValueTaskAwaiter_t112A67291B7E35E791EA702BD9F300EAB390D6AF * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable System.Threading.Tasks.Task::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  Task_ConfigureAwait_m0477031D48C23B8368049C62C53C33D32322EDCE (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  ConfiguredTaskAwaitable_GetAwaiter_m9F912D7DF74F087AFAF1F478CE59152DF22395A2_inline (ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::OnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredTaskAwaiter_OnCompleted_m19C8E00172FF04103093EB160F6F1137381A45E1 (ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter::OnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaiter_OnCompleted_mB5C7960E83D693BD03E1FE84743B100CD78D8D24 (ConfiguredValueTaskAwaiter_t112A67291B7E35E791EA702BD9F300EAB390D6AF * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredTaskAwaiter_UnsafeOnCompleted_mF815346BE1ED57CDF90E0196AC0DD564C87327C7 (ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaiter_UnsafeOnCompleted_mBCB7E4147B66024B46794BE8F5E26DC0D476618D (ConfiguredValueTaskAwaiter_t112A67291B7E35E791EA702BD9F300EAB390D6AF * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ValueTaskAwaiter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m97FE77D6EFC19182BEB6495E43E203724B8BE4F2 (U3CU3Ec_t04590189C2E531C111230F99E4CE5CB0882F111F * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m0B5663FDF1F3F8EDAA0093D162295765FCEC52B0 (int32_t ___argument0, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
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
// System.Void System.Runtime.CompilerServices.AsyncMethodBuilderAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncMethodBuilderAttribute__ctor_m4E3C84FE67413BD5777E5944C811C904D7DED2CB (AsyncMethodBuilderAttribute_t7AB591B0ECB9ED957ACDF33157EAAC88AAEF0F04 * __this, Type_t * ___builderType0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___builderType0;
		__this->set_U3CBuilderTypeU3Ek__BackingField_0(L_0);
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
// System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncValueTaskMethodBuilder_t0D3628A9C8312F3AD587AE82AF4D8A170103B1E8  AsyncValueTaskMethodBuilder_Create_m91AA50E74EDEADF35C50D6AC01C4677755A3F869 (const RuntimeMethod* method)
{
	AsyncValueTaskMethodBuilder_t0D3628A9C8312F3AD587AE82AF4D8A170103B1E8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncValueTaskMethodBuilder_t0D3628A9C8312F3AD587AE82AF4D8A170103B1E8 ));
		AsyncValueTaskMethodBuilder_t0D3628A9C8312F3AD587AE82AF4D8A170103B1E8  L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncValueTaskMethodBuilder_SetStateMachine_m3188B03A10264F946C66E4219B762F5E8DA834DF (AsyncValueTaskMethodBuilder_t0D3628A9C8312F3AD587AE82AF4D8A170103B1E8 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of__methodBuilder_0();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncValueTaskMethodBuilder_SetStateMachine_m3188B03A10264F946C66E4219B762F5E8DA834DF_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AsyncValueTaskMethodBuilder_t0D3628A9C8312F3AD587AE82AF4D8A170103B1E8 * _thisAdjusted = reinterpret_cast<AsyncValueTaskMethodBuilder_t0D3628A9C8312F3AD587AE82AF4D8A170103B1E8 *>(__this + _offset);
	AsyncValueTaskMethodBuilder_SetStateMachine_m3188B03A10264F946C66E4219B762F5E8DA834DF(_thisAdjusted, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncValueTaskMethodBuilder_SetResult_m965DBAD8BBA26DB5B979D5CE7A8D30B2ED6D4AA1 (AsyncValueTaskMethodBuilder_t0D3628A9C8312F3AD587AE82AF4D8A170103B1E8 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__useBuilder_2();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_1 = __this->get_address_of__methodBuilder_0();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_1, /*hidden argument*/NULL);
		return;
	}

IL_0014:
	{
		__this->set__haveResult_1((bool)1);
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncValueTaskMethodBuilder_SetResult_m965DBAD8BBA26DB5B979D5CE7A8D30B2ED6D4AA1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AsyncValueTaskMethodBuilder_t0D3628A9C8312F3AD587AE82AF4D8A170103B1E8 * _thisAdjusted = reinterpret_cast<AsyncValueTaskMethodBuilder_t0D3628A9C8312F3AD587AE82AF4D8A170103B1E8 *>(__this + _offset);
	AsyncValueTaskMethodBuilder_SetResult_m965DBAD8BBA26DB5B979D5CE7A8D30B2ED6D4AA1(_thisAdjusted, method);
}
// System.Void System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncValueTaskMethodBuilder_SetException_m9B47529F90B538885E5FE9B831021AB356858933 (AsyncValueTaskMethodBuilder_t0D3628A9C8312F3AD587AE82AF4D8A170103B1E8 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of__methodBuilder_0();
		Exception_t * L_1 = ___exception0;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncValueTaskMethodBuilder_SetException_m9B47529F90B538885E5FE9B831021AB356858933_AdjustorThunk (RuntimeObject * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AsyncValueTaskMethodBuilder_t0D3628A9C8312F3AD587AE82AF4D8A170103B1E8 * _thisAdjusted = reinterpret_cast<AsyncValueTaskMethodBuilder_t0D3628A9C8312F3AD587AE82AF4D8A170103B1E8 *>(__this + _offset);
	AsyncValueTaskMethodBuilder_SetException_m9B47529F90B538885E5FE9B831021AB356858933(_thisAdjusted, ___exception0, method);
}
// System.Threading.Tasks.ValueTask System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5  AsyncValueTaskMethodBuilder_get_Task_m2B6F5A6C131C7300C907BA7E8F39EF07B0A9501E (AsyncValueTaskMethodBuilder_t0D3628A9C8312F3AD587AE82AF4D8A170103B1E8 * __this, const RuntimeMethod* method)
{
	ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0 = __this->get__haveResult_1();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 ));
		ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5  L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		__this->set__useBuilder_2((bool)1);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_2 = __this->get_address_of__methodBuilder_0();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_3;
		L_3 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_2, /*hidden argument*/NULL);
		ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5  L_4;
		memset((&L_4), 0, sizeof(L_4));
		ValueTask__ctor_m975D708070BC01E6BCEE8C2E61E3DE928F8B20E4_inline((&L_4), L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5  AsyncValueTaskMethodBuilder_get_Task_m2B6F5A6C131C7300C907BA7E8F39EF07B0A9501E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AsyncValueTaskMethodBuilder_t0D3628A9C8312F3AD587AE82AF4D8A170103B1E8 * _thisAdjusted = reinterpret_cast<AsyncValueTaskMethodBuilder_t0D3628A9C8312F3AD587AE82AF4D8A170103B1E8 *>(__this + _offset);
	ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5  _returnValue;
	_returnValue = AsyncValueTaskMethodBuilder_get_Task_m2B6F5A6C131C7300C907BA7E8F39EF07B0A9501E(_thisAdjusted, method);
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
// System.Void System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable::.ctor(System.Threading.Tasks.ValueTask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaitable__ctor_mF772FC9DF81E1FC057B55AFCA9F3FCB870F909E0 (ConfiguredValueTaskAwaitable_tCE30DAA7B5E29DDAD7AA08798C520FA660007CF9 * __this, ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5  ___value0, const RuntimeMethod* method)
{
	{
		ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5  L_0 = ___value0;
		__this->set__value_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void ConfiguredValueTaskAwaitable__ctor_mF772FC9DF81E1FC057B55AFCA9F3FCB870F909E0_AdjustorThunk (RuntimeObject * __this, ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConfiguredValueTaskAwaitable_tCE30DAA7B5E29DDAD7AA08798C520FA660007CF9 * _thisAdjusted = reinterpret_cast<ConfiguredValueTaskAwaitable_tCE30DAA7B5E29DDAD7AA08798C520FA660007CF9 *>(__this + _offset);
	ConfiguredValueTaskAwaitable__ctor_mF772FC9DF81E1FC057B55AFCA9F3FCB870F909E0_inline(_thisAdjusted, ___value0, method);
}
// System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredValueTaskAwaiter_t112A67291B7E35E791EA702BD9F300EAB390D6AF  ConfiguredValueTaskAwaitable_GetAwaiter_mC2CCE6DFE422B343179181781C548AD21D902816 (ConfiguredValueTaskAwaitable_tCE30DAA7B5E29DDAD7AA08798C520FA660007CF9 * __this, const RuntimeMethod* method)
{
	{
		ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5  L_0 = __this->get__value_0();
		ConfiguredValueTaskAwaiter_t112A67291B7E35E791EA702BD9F300EAB390D6AF  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ConfiguredValueTaskAwaiter__ctor_mFDF59778A80420DBEA274C21F30ED02C71844A7E_inline((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  ConfiguredValueTaskAwaiter_t112A67291B7E35E791EA702BD9F300EAB390D6AF  ConfiguredValueTaskAwaitable_GetAwaiter_mC2CCE6DFE422B343179181781C548AD21D902816_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConfiguredValueTaskAwaitable_tCE30DAA7B5E29DDAD7AA08798C520FA660007CF9 * _thisAdjusted = reinterpret_cast<ConfiguredValueTaskAwaitable_tCE30DAA7B5E29DDAD7AA08798C520FA660007CF9 *>(__this + _offset);
	ConfiguredValueTaskAwaiter_t112A67291B7E35E791EA702BD9F300EAB390D6AF  _returnValue;
	_returnValue = ConfiguredValueTaskAwaitable_GetAwaiter_mC2CCE6DFE422B343179181781C548AD21D902816_inline(_thisAdjusted, method);
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
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_mCB1F3EC182E4244375AA5860196B7174464296EB (EmbeddedAttribute_t9812F68DF0E28E3567690A78FCB407D7BC452632 * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_m9022BF8F3F70511C759CB64F33D936A09C568E82 (IsReadOnlyAttribute_tF5387AB3987EAE620AAFF0CECDE7BB9F98C156A4 * __this, const RuntimeMethod* method)
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
// System.Void System.Diagnostics.StackTraceHiddenAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackTraceHiddenAttribute__ctor_m044B630864949DDCBF18FAC1D702A8ADF09F5F17 (StackTraceHiddenAttribute_t6E98A432F8245DD0597A48BFC95038AF42B5C9D9 * __this, const RuntimeMethod* method)
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
// System.Void System.ThrowHelper::ThrowArgumentNullException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m58505DB8941A68CDC7B5C9E720456C6464DDA71F (int32_t ___argument0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___argument0;
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1;
		L_1 = ThrowHelper_GetArgumentNullException_m6C50728A84EC19B63F00E38CA823AD065D172971(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowArgumentNullException_m58505DB8941A68CDC7B5C9E720456C6464DDA71F_RuntimeMethod_var)));
	}
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m0B5663FDF1F3F8EDAA0093D162295765FCEC52B0 (int32_t ___argument0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___argument0;
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_1;
		L_1 = ThrowHelper_GetArgumentOutOfRangeException_m51652B51B160326DEC2DD1E021CC2F9B82B28DF5(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowArgumentOutOfRangeException_m0B5663FDF1F3F8EDAA0093D162295765FCEC52B0_RuntimeMethod_var)));
	}
}
// System.ArgumentNullException System.ThrowHelper::GetArgumentNullException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * ThrowHelper_GetArgumentNullException_m6C50728A84EC19B63F00E38CA823AD065D172971 (int32_t ___argument0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___argument0;
		String_t* L_1;
		L_1 = ThrowHelper_GetArgumentName_m39B4DDE930E1C01D25E88D7615CBD4D95435FB67(L_0, /*hidden argument*/NULL);
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.ArgumentOutOfRangeException System.ThrowHelper::GetArgumentOutOfRangeException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * ThrowHelper_GetArgumentOutOfRangeException_m51652B51B160326DEC2DD1E021CC2F9B82B28DF5 (int32_t ___argument0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___argument0;
		String_t* L_1;
		L_1 = ThrowHelper_GetArgumentName_m39B4DDE930E1C01D25E88D7615CBD4D95435FB67(L_0, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_2 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_2, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String System.ThrowHelper::GetArgumentName(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR String_t* ThrowHelper_GetArgumentName_m39B4DDE930E1C01D25E88D7615CBD4D95435FB67 (int32_t ___argument0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionArgument_tC54E315921E82121667FD0FF6BD75053F3D9CA8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = Box(ExceptionArgument_tC54E315921E82121667FD0FF6BD75053F3D9CA8D_il2cpp_TypeInfo_var, (&___argument0));
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		___argument0 = *(int32_t*)UnBox(L_0);
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
// System.Threading.Tasks.Task System.Threading.Tasks.ValueTask::get_CompletedTask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ValueTask_get_CompletedTask_mF69ED79258ABA58AB101F60D67061BF7D8F4CBC2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_0 = ((ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5_StaticFields*)il2cpp_codegen_static_fields_for(ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5_il2cpp_TypeInfo_var))->get_U3CCompletedTaskU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void System.Threading.Tasks.ValueTask::.ctor(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTask__ctor_m975D708070BC01E6BCEE8C2E61E3DE928F8B20E4 (ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * __this, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___task0, const RuntimeMethod* method)
{
	{
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_0 = ___task0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m58505DB8941A68CDC7B5C9E720456C6464DDA71F(0, /*hidden argument*/NULL);
	}

IL_0009:
	{
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_1 = ___task0;
		__this->set__obj_2(L_1);
		__this->set__continueOnCapturedContext_4((bool)1);
		__this->set__token_3((int16_t)0);
		return;
	}
}
IL2CPP_EXTERN_C  void ValueTask__ctor_m975D708070BC01E6BCEE8C2E61E3DE928F8B20E4_AdjustorThunk (RuntimeObject * __this, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___task0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * _thisAdjusted = reinterpret_cast<ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 *>(__this + _offset);
	ValueTask__ctor_m975D708070BC01E6BCEE8C2E61E3DE928F8B20E4_inline(_thisAdjusted, ___task0, method);
}
// System.Void System.Threading.Tasks.ValueTask::.ctor(System.Object,System.Int16,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTask__ctor_m88B2D6B5434FCDB2A0999BB9B7F810A068E37A24 (ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * __this, RuntimeObject * ___obj0, int16_t ___token1, bool ___continueOnCapturedContext2, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		__this->set__obj_2(L_0);
		int16_t L_1 = ___token1;
		__this->set__token_3(L_1);
		bool L_2 = ___continueOnCapturedContext2;
		__this->set__continueOnCapturedContext_4(L_2);
		return;
	}
}
IL2CPP_EXTERN_C  void ValueTask__ctor_m88B2D6B5434FCDB2A0999BB9B7F810A068E37A24_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, int16_t ___token1, bool ___continueOnCapturedContext2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * _thisAdjusted = reinterpret_cast<ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 *>(__this + _offset);
	ValueTask__ctor_m88B2D6B5434FCDB2A0999BB9B7F810A068E37A24_inline(_thisAdjusted, ___obj0, ___token1, ___continueOnCapturedContext2, method);
}
// System.Int32 System.Threading.Tasks.ValueTask::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTask_GetHashCode_m158970B1DD3DAF5234C01F4432725726CBBE220B (ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * __this, const RuntimeMethod* method)
{
	RuntimeObject * G_B2_0 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	{
		RuntimeObject * L_0 = __this->get__obj_2();
		RuntimeObject * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return 0;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, G_B2_0);
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTask_GetHashCode_m158970B1DD3DAF5234C01F4432725726CBBE220B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * _thisAdjusted = reinterpret_cast<ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTask_GetHashCode_m158970B1DD3DAF5234C01F4432725726CBBE220B(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean System.Threading.Tasks.ValueTask::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTask_Equals_m7A88C17E06E7B9CA1414C8CB8803951E7144ACC9 (ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2;
		L_2 = ValueTask_Equals_m4BF54849B66845D4746F32108CA53127D15D9DB0((ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 *)__this, ((*(ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 *)((ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 *)UnBox(L_1, ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTask_Equals_m7A88C17E06E7B9CA1414C8CB8803951E7144ACC9_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * _thisAdjusted = reinterpret_cast<ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTask_Equals_m7A88C17E06E7B9CA1414C8CB8803951E7144ACC9(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean System.Threading.Tasks.ValueTask::Equals(System.Threading.Tasks.ValueTask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTask_Equals_m4BF54849B66845D4746F32108CA53127D15D9DB0 (ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * __this, ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5  ___other0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get__obj_2();
		ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5  L_1 = ___other0;
		RuntimeObject * L_2 = L_1.get__obj_2();
		if ((!(((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_001d;
		}
	}
	{
		int16_t L_3 = __this->get__token_3();
		ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5  L_4 = ___other0;
		int16_t L_5 = L_4.get__token_3();
		return (bool)((((int32_t)L_3) == ((int32_t)L_5))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTask_Equals_m4BF54849B66845D4746F32108CA53127D15D9DB0_AdjustorThunk (RuntimeObject * __this, ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * _thisAdjusted = reinterpret_cast<ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTask_Equals_m4BF54849B66845D4746F32108CA53127D15D9DB0(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean System.Threading.Tasks.ValueTask::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTask_get_IsCompleted_mE1CD52AA84F269936D8037A6262D88BE14484A11 (ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IValueTaskSource_t1CC0CC2515BCB4D99FECF8867FE9A24EDE64B662_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_As_TisIValueTaskSource_t1CC0CC2515BCB4D99FECF8867FE9A24EDE64B662_mBD42C3E25DB5D0B01D45F0C7F30F3F3E62F796D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * V_1 = NULL;
	{
		RuntimeObject * L_0 = __this->get__obj_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)1;
	}

IL_000c:
	{
		RuntimeObject * L_2 = V_0;
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_3 = ((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)IsInstClass((RuntimeObject*)L_2, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var));
		V_1 = L_3;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_4 = V_1;
		NullCheck(L_4);
		bool L_5;
		L_5 = Task_get_IsCompleted_m7EF73EE6C4F400997345371FFB10137D8E9B4E1E(L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_001d:
	{
		RuntimeObject * L_6 = V_0;
		RuntimeObject* L_7;
		L_7 = Unsafe_As_TisIValueTaskSource_t1CC0CC2515BCB4D99FECF8867FE9A24EDE64B662_mBD42C3E25DB5D0B01D45F0C7F30F3F3E62F796D2_inline(L_6, /*hidden argument*/Unsafe_As_TisIValueTaskSource_t1CC0CC2515BCB4D99FECF8867FE9A24EDE64B662_mBD42C3E25DB5D0B01D45F0C7F30F3F3E62F796D2_RuntimeMethod_var);
		int16_t L_8 = __this->get__token_3();
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* System.Threading.Tasks.Sources.ValueTaskSourceStatus System.Threading.Tasks.Sources.IValueTaskSource::GetStatus(System.Int16) */, IValueTaskSource_t1CC0CC2515BCB4D99FECF8867FE9A24EDE64B662_il2cpp_TypeInfo_var, L_7, L_8);
		return (bool)((!(((uint32_t)L_9) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool ValueTask_get_IsCompleted_mE1CD52AA84F269936D8037A6262D88BE14484A11_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * _thisAdjusted = reinterpret_cast<ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTask_get_IsCompleted_mE1CD52AA84F269936D8037A6262D88BE14484A11_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void System.Threading.Tasks.ValueTask::ThrowIfCompletedUnsuccessfully()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTask_ThrowIfCompletedUnsuccessfully_m23861DBB8F8179889EF67AE1B736CD7779C91B2D (ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IValueTaskSource_t1CC0CC2515BCB4D99FECF8867FE9A24EDE64B662_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_As_TisIValueTaskSource_t1CC0CC2515BCB4D99FECF8867FE9A24EDE64B662_mBD42C3E25DB5D0B01D45F0C7F30F3F3E62F796D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject * L_0 = __this->get__obj_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		RuntimeObject * L_2 = V_0;
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_3 = ((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)IsInstClass((RuntimeObject*)L_2, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var));
		V_1 = L_3;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_4 = V_1;
		NullCheck(L_4);
		TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_5;
		L_5 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
		return;
	}

IL_0023:
	{
		RuntimeObject * L_6 = V_0;
		RuntimeObject* L_7;
		L_7 = Unsafe_As_TisIValueTaskSource_t1CC0CC2515BCB4D99FECF8867FE9A24EDE64B662_mBD42C3E25DB5D0B01D45F0C7F30F3F3E62F796D2_inline(L_6, /*hidden argument*/Unsafe_As_TisIValueTaskSource_t1CC0CC2515BCB4D99FECF8867FE9A24EDE64B662_mBD42C3E25DB5D0B01D45F0C7F30F3F3E62F796D2_RuntimeMethod_var);
		int16_t L_8 = __this->get__token_3();
		NullCheck(L_7);
		InterfaceActionInvoker1< int16_t >::Invoke(2 /* System.Void System.Threading.Tasks.Sources.IValueTaskSource::GetResult(System.Int16) */, IValueTaskSource_t1CC0CC2515BCB4D99FECF8867FE9A24EDE64B662_il2cpp_TypeInfo_var, L_7, L_8);
	}

IL_0034:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void ValueTask_ThrowIfCompletedUnsuccessfully_m23861DBB8F8179889EF67AE1B736CD7779C91B2D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * _thisAdjusted = reinterpret_cast<ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 *>(__this + _offset);
	ValueTask_ThrowIfCompletedUnsuccessfully_m23861DBB8F8179889EF67AE1B736CD7779C91B2D_inline(_thisAdjusted, method);
}
// System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable System.Threading.Tasks.ValueTask::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredValueTaskAwaitable_tCE30DAA7B5E29DDAD7AA08798C520FA660007CF9  ValueTask_ConfigureAwait_m7E046002A7F76397BC4F793303607A99ABAA5A21 (ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get__obj_2();
		int16_t L_1 = __this->get__token_3();
		bool L_2 = ___continueOnCapturedContext0;
		ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5  L_3;
		memset((&L_3), 0, sizeof(L_3));
		ValueTask__ctor_m88B2D6B5434FCDB2A0999BB9B7F810A068E37A24_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		ConfiguredValueTaskAwaitable_tCE30DAA7B5E29DDAD7AA08798C520FA660007CF9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		ConfiguredValueTaskAwaitable__ctor_mF772FC9DF81E1FC057B55AFCA9F3FCB870F909E0_inline((&L_4), L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  ConfiguredValueTaskAwaitable_tCE30DAA7B5E29DDAD7AA08798C520FA660007CF9  ValueTask_ConfigureAwait_m7E046002A7F76397BC4F793303607A99ABAA5A21_AdjustorThunk (RuntimeObject * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * _thisAdjusted = reinterpret_cast<ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 *>(__this + _offset);
	ConfiguredValueTaskAwaitable_tCE30DAA7B5E29DDAD7AA08798C520FA660007CF9  _returnValue;
	_returnValue = ValueTask_ConfigureAwait_m7E046002A7F76397BC4F793303607A99ABAA5A21_inline(_thisAdjusted, ___continueOnCapturedContext0, method);
	return _returnValue;
}
// System.Void System.Threading.Tasks.ValueTask::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTask__cctor_m01240BD4BAF620AF055D7C8BE12B543C18F6DB70 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_0;
		memset((&L_0), 0, sizeof(L_0));
		CancellationToken__ctor_m769EFF18848E3A442C63D21A4B15D2C2E4C623B7((&L_0), (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_1;
		L_1 = Task_Delay_m1CF07794A72A4AB5575AA9360D8CCEE3D9004FA6((-1), L_0, /*hidden argument*/NULL);
		((ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5_StaticFields*)il2cpp_codegen_static_fields_for(ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5_il2cpp_TypeInfo_var))->set_s_canceledTask_0(L_1);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_2;
		L_2 = Task_Delay_mD54722DBAF22507493263E9B1167A7F77EDDF80E(0, /*hidden argument*/NULL);
		((ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5_StaticFields*)il2cpp_codegen_static_fields_for(ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5_il2cpp_TypeInfo_var))->set_U3CCompletedTaskU3Ek__BackingField_1(L_2);
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
// Conversion methods for marshalling of: System.Runtime.CompilerServices.ValueTaskAwaiter
IL2CPP_EXTERN_C void ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA_marshal_pinvoke(const ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA& unmarshaled, ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA_marshaled_pinvoke& marshaled)
{
	Exception_t* ____value_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_value' of type 'ValueTaskAwaiter'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____value_1Exception, NULL);
}
IL2CPP_EXTERN_C void ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA_marshal_pinvoke_back(const ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA_marshaled_pinvoke& marshaled, ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA& unmarshaled)
{
	Exception_t* ____value_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_value' of type 'ValueTaskAwaiter'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____value_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Runtime.CompilerServices.ValueTaskAwaiter
IL2CPP_EXTERN_C void ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA_marshal_pinvoke_cleanup(ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Runtime.CompilerServices.ValueTaskAwaiter
IL2CPP_EXTERN_C void ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA_marshal_com(const ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA& unmarshaled, ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA_marshaled_com& marshaled)
{
	Exception_t* ____value_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_value' of type 'ValueTaskAwaiter'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____value_1Exception, NULL);
}
IL2CPP_EXTERN_C void ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA_marshal_com_back(const ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA_marshaled_com& marshaled, ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA& unmarshaled)
{
	Exception_t* ____value_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_value' of type 'ValueTaskAwaiter'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____value_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Runtime.CompilerServices.ValueTaskAwaiter
IL2CPP_EXTERN_C void ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA_marshal_com_cleanup(ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA_marshaled_com& marshaled)
{
}
// System.Void System.Runtime.CompilerServices.ValueTaskAwaiter::OnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTaskAwaiter_OnCompleted_m1AF27A1417DFCA011318067EB4CCC7CCC4228C50 (ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IValueTaskSource_t1CC0CC2515BCB4D99FECF8867FE9A24EDE64B662_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_As_TisIValueTaskSource_t1CC0CC2515BCB4D99FECF8867FE9A24EDE64B662_mBD42C3E25DB5D0B01D45F0C7F30F3F3E62F796D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * L_0 = __this->get_address_of__value_1();
		RuntimeObject * L_1 = L_0->get__obj_2();
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_3 = ((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)IsInstClass((RuntimeObject*)L_2, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var));
		V_1 = L_3;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_4 = V_1;
		NullCheck(L_4);
		TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_5;
		L_5 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = ___continuation0;
		TaskAwaiter_OnCompleted_mF8028FE51C336F14A933AC8E177F9B517D6ECAB6((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), L_6, /*hidden argument*/NULL);
		return;
	}

IL_0026:
	{
		RuntimeObject * L_7 = V_0;
		if (!L_7)
		{
			goto IL_0047;
		}
	}
	{
		RuntimeObject * L_8 = V_0;
		RuntimeObject* L_9;
		L_9 = Unsafe_As_TisIValueTaskSource_t1CC0CC2515BCB4D99FECF8867FE9A24EDE64B662_mBD42C3E25DB5D0B01D45F0C7F30F3F3E62F796D2_inline(L_8, /*hidden argument*/Unsafe_As_TisIValueTaskSource_t1CC0CC2515BCB4D99FECF8867FE9A24EDE64B662_mBD42C3E25DB5D0B01D45F0C7F30F3F3E62F796D2_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA_il2cpp_TypeInfo_var);
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_10 = ((ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA_StaticFields*)il2cpp_codegen_static_fields_for(ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA_il2cpp_TypeInfo_var))->get_s_invokeActionDelegate_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_11 = ___continuation0;
		ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * L_12 = __this->get_address_of__value_1();
		int16_t L_13 = L_12->get__token_3();
		NullCheck(L_9);
		InterfaceActionInvoker4< Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *, RuntimeObject *, int16_t, int32_t >::Invoke(1 /* System.Void System.Threading.Tasks.Sources.IValueTaskSource::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16,System.Threading.Tasks.Sources.ValueTaskSourceOnCompletedFlags) */, IValueTaskSource_t1CC0CC2515BCB4D99FECF8867FE9A24EDE64B662_il2cpp_TypeInfo_var, L_9, L_10, L_11, L_13, 3);
		return;
	}

IL_0047:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_14;
		L_14 = ValueTask_get_CompletedTask_mF69ED79258ABA58AB101F60D67061BF7D8F4CBC2_inline(/*hidden argument*/NULL);
		NullCheck(L_14);
		TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_15;
		L_15 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_16 = ___continuation0;
		TaskAwaiter_OnCompleted_mF8028FE51C336F14A933AC8E177F9B517D6ECAB6((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), L_16, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ValueTaskAwaiter_OnCompleted_m1AF27A1417DFCA011318067EB4CCC7CCC4228C50_AdjustorThunk (RuntimeObject * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA * _thisAdjusted = reinterpret_cast<ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA *>(__this + _offset);
	ValueTaskAwaiter_OnCompleted_m1AF27A1417DFCA011318067EB4CCC7CCC4228C50(_thisAdjusted, ___continuation0, method);
}
// System.Void System.Runtime.CompilerServices.ValueTaskAwaiter::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTaskAwaiter_UnsafeOnCompleted_mEDC1D020D201BA364B538D370549F8A4F22960C8 (ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IValueTaskSource_t1CC0CC2515BCB4D99FECF8867FE9A24EDE64B662_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_As_TisIValueTaskSource_t1CC0CC2515BCB4D99FECF8867FE9A24EDE64B662_mBD42C3E25DB5D0B01D45F0C7F30F3F3E62F796D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * L_0 = __this->get_address_of__value_1();
		RuntimeObject * L_1 = L_0->get__obj_2();
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_3 = ((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)IsInstClass((RuntimeObject*)L_2, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var));
		V_1 = L_3;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_4 = V_1;
		NullCheck(L_4);
		TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_5;
		L_5 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = ___continuation0;
		TaskAwaiter_UnsafeOnCompleted_m4AC803A6118C13715CE0DF81D765EBE2608C8677((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), L_6, /*hidden argument*/NULL);
		return;
	}

IL_0026:
	{
		RuntimeObject * L_7 = V_0;
		if (!L_7)
		{
			goto IL_0047;
		}
	}
	{
		RuntimeObject * L_8 = V_0;
		RuntimeObject* L_9;
		L_9 = Unsafe_As_TisIValueTaskSource_t1CC0CC2515BCB4D99FECF8867FE9A24EDE64B662_mBD42C3E25DB5D0B01D45F0C7F30F3F3E62F796D2_inline(L_8, /*hidden argument*/Unsafe_As_TisIValueTaskSource_t1CC0CC2515BCB4D99FECF8867FE9A24EDE64B662_mBD42C3E25DB5D0B01D45F0C7F30F3F3E62F796D2_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA_il2cpp_TypeInfo_var);
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_10 = ((ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA_StaticFields*)il2cpp_codegen_static_fields_for(ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA_il2cpp_TypeInfo_var))->get_s_invokeActionDelegate_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_11 = ___continuation0;
		ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * L_12 = __this->get_address_of__value_1();
		int16_t L_13 = L_12->get__token_3();
		NullCheck(L_9);
		InterfaceActionInvoker4< Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *, RuntimeObject *, int16_t, int32_t >::Invoke(1 /* System.Void System.Threading.Tasks.Sources.IValueTaskSource::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16,System.Threading.Tasks.Sources.ValueTaskSourceOnCompletedFlags) */, IValueTaskSource_t1CC0CC2515BCB4D99FECF8867FE9A24EDE64B662_il2cpp_TypeInfo_var, L_9, L_10, L_11, L_13, 1);
		return;
	}

IL_0047:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_14;
		L_14 = ValueTask_get_CompletedTask_mF69ED79258ABA58AB101F60D67061BF7D8F4CBC2_inline(/*hidden argument*/NULL);
		NullCheck(L_14);
		TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_15;
		L_15 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_16 = ___continuation0;
		TaskAwaiter_UnsafeOnCompleted_m4AC803A6118C13715CE0DF81D765EBE2608C8677((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), L_16, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ValueTaskAwaiter_UnsafeOnCompleted_mEDC1D020D201BA364B538D370549F8A4F22960C8_AdjustorThunk (RuntimeObject * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA * _thisAdjusted = reinterpret_cast<ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA *>(__this + _offset);
	ValueTaskAwaiter_UnsafeOnCompleted_mEDC1D020D201BA364B538D370549F8A4F22960C8(_thisAdjusted, ___continuation0, method);
}
// System.Void System.Runtime.CompilerServices.ValueTaskAwaiter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTaskAwaiter__cctor_m411469E7C9F45F30CD81CC2225EB0BA5D062736A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__9_0_m892CC118EE44F242E4934434CF45123AEB902316_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t04590189C2E531C111230F99E4CE5CB0882F111F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t04590189C2E531C111230F99E4CE5CB0882F111F_il2cpp_TypeInfo_var);
		U3CU3Ec_t04590189C2E531C111230F99E4CE5CB0882F111F * L_0 = ((U3CU3Ec_t04590189C2E531C111230F99E4CE5CB0882F111F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t04590189C2E531C111230F99E4CE5CB0882F111F_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_1 = (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)il2cpp_codegen_object_new(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC_il2cpp_TypeInfo_var);
		Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158(L_1, L_0, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__9_0_m892CC118EE44F242E4934434CF45123AEB902316_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_RuntimeMethod_var);
		((ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA_StaticFields*)il2cpp_codegen_static_fields_for(ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA_il2cpp_TypeInfo_var))->set_s_invokeActionDelegate_0(L_1);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter::.ctor(System.Threading.Tasks.ValueTask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaiter__ctor_mFDF59778A80420DBEA274C21F30ED02C71844A7E (ConfiguredValueTaskAwaiter_t112A67291B7E35E791EA702BD9F300EAB390D6AF * __this, ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5  ___value0, const RuntimeMethod* method)
{
	{
		ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5  L_0 = ___value0;
		__this->set__value_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void ConfiguredValueTaskAwaiter__ctor_mFDF59778A80420DBEA274C21F30ED02C71844A7E_AdjustorThunk (RuntimeObject * __this, ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConfiguredValueTaskAwaiter_t112A67291B7E35E791EA702BD9F300EAB390D6AF * _thisAdjusted = reinterpret_cast<ConfiguredValueTaskAwaiter_t112A67291B7E35E791EA702BD9F300EAB390D6AF *>(__this + _offset);
	ConfiguredValueTaskAwaiter__ctor_mFDF59778A80420DBEA274C21F30ED02C71844A7E_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredValueTaskAwaiter_get_IsCompleted_m67C02FF242977F34B9205CA924A55FF9E8BACAC1 (ConfiguredValueTaskAwaiter_t112A67291B7E35E791EA702BD9F300EAB390D6AF * __this, const RuntimeMethod* method)
{
	{
		ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * L_0 = __this->get_address_of__value_0();
		bool L_1;
		L_1 = ValueTask_get_IsCompleted_mE1CD52AA84F269936D8037A6262D88BE14484A11_inline((ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool ConfiguredValueTaskAwaiter_get_IsCompleted_m67C02FF242977F34B9205CA924A55FF9E8BACAC1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConfiguredValueTaskAwaiter_t112A67291B7E35E791EA702BD9F300EAB390D6AF * _thisAdjusted = reinterpret_cast<ConfiguredValueTaskAwaiter_t112A67291B7E35E791EA702BD9F300EAB390D6AF *>(__this + _offset);
	bool _returnValue;
	_returnValue = ConfiguredValueTaskAwaiter_get_IsCompleted_m67C02FF242977F34B9205CA924A55FF9E8BACAC1_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaiter_GetResult_m3F012DAAAF3AF67CECDC51CA4898A29847315E70 (ConfiguredValueTaskAwaiter_t112A67291B7E35E791EA702BD9F300EAB390D6AF * __this, const RuntimeMethod* method)
{
	{
		ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * L_0 = __this->get_address_of__value_0();
		ValueTask_ThrowIfCompletedUnsuccessfully_m23861DBB8F8179889EF67AE1B736CD7779C91B2D_inline((ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 *)L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ConfiguredValueTaskAwaiter_GetResult_m3F012DAAAF3AF67CECDC51CA4898A29847315E70_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConfiguredValueTaskAwaiter_t112A67291B7E35E791EA702BD9F300EAB390D6AF * _thisAdjusted = reinterpret_cast<ConfiguredValueTaskAwaiter_t112A67291B7E35E791EA702BD9F300EAB390D6AF *>(__this + _offset);
	ConfiguredValueTaskAwaiter_GetResult_m3F012DAAAF3AF67CECDC51CA4898A29847315E70_inline(_thisAdjusted, method);
}
// System.Void System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter::OnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaiter_OnCompleted_mB5C7960E83D693BD03E1FE84743B100CD78D8D24 (ConfiguredValueTaskAwaiter_t112A67291B7E35E791EA702BD9F300EAB390D6AF * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IValueTaskSource_t1CC0CC2515BCB4D99FECF8867FE9A24EDE64B662_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_As_TisIValueTaskSource_t1CC0CC2515BCB4D99FECF8867FE9A24EDE64B662_mBD42C3E25DB5D0B01D45F0C7F30F3F3E62F796D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * V_1 = NULL;
	ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t G_B5_0 = 0;
	int16_t G_B5_1 = 0;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B5_2 = NULL;
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * G_B5_3 = NULL;
	RuntimeObject* G_B5_4 = NULL;
	int32_t G_B4_0 = 0;
	int16_t G_B4_1 = 0;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B4_2 = NULL;
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * G_B4_3 = NULL;
	RuntimeObject* G_B4_4 = NULL;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	int16_t G_B6_2 = 0;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B6_3 = NULL;
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * G_B6_4 = NULL;
	RuntimeObject* G_B6_5 = NULL;
	{
		ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * L_0 = __this->get_address_of__value_0();
		RuntimeObject * L_1 = L_0->get__obj_2();
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_3 = ((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)IsInstClass((RuntimeObject*)L_2, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var));
		V_1 = L_3;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_4 = V_1;
		ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * L_5 = __this->get_address_of__value_0();
		bool L_6 = L_5->get__continueOnCapturedContext_4();
		NullCheck(L_4);
		ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  L_7;
		L_7 = Task_ConfigureAwait_m0477031D48C23B8368049C62C53C33D32322EDCE(L_4, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_8;
		L_8 = ConfiguredTaskAwaitable_GetAwaiter_m9F912D7DF74F087AFAF1F478CE59152DF22395A2_inline((ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E *)(&V_2), /*hidden argument*/NULL);
		V_3 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = ___continuation0;
		ConfiguredTaskAwaiter_OnCompleted_m19C8E00172FF04103093EB160F6F1137381A45E1((ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *)(&V_3), L_9, /*hidden argument*/NULL);
		return;
	}

IL_0039:
	{
		RuntimeObject * L_10 = V_0;
		if (!L_10)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeObject * L_11 = V_0;
		RuntimeObject* L_12;
		L_12 = Unsafe_As_TisIValueTaskSource_t1CC0CC2515BCB4D99FECF8867FE9A24EDE64B662_mBD42C3E25DB5D0B01D45F0C7F30F3F3E62F796D2_inline(L_11, /*hidden argument*/Unsafe_As_TisIValueTaskSource_t1CC0CC2515BCB4D99FECF8867FE9A24EDE64B662_mBD42C3E25DB5D0B01D45F0C7F30F3F3E62F796D2_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA_il2cpp_TypeInfo_var);
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_13 = ((ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA_StaticFields*)il2cpp_codegen_static_fields_for(ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA_il2cpp_TypeInfo_var))->get_s_invokeActionDelegate_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_14 = ___continuation0;
		ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * L_15 = __this->get_address_of__value_0();
		int16_t L_16 = L_15->get__token_3();
		ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * L_17 = __this->get_address_of__value_0();
		bool L_18 = L_17->get__continueOnCapturedContext_4();
		G_B4_0 = 2;
		G_B4_1 = L_16;
		G_B4_2 = L_14;
		G_B4_3 = L_13;
		G_B4_4 = L_12;
		if (L_18)
		{
			G_B5_0 = 2;
			G_B5_1 = L_16;
			G_B5_2 = L_14;
			G_B5_3 = L_13;
			G_B5_4 = L_12;
			goto IL_0064;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		G_B6_5 = G_B4_4;
		goto IL_0065;
	}

IL_0064:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
		G_B6_5 = G_B5_4;
	}

IL_0065:
	{
		NullCheck(G_B6_5);
		InterfaceActionInvoker4< Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *, RuntimeObject *, int16_t, int32_t >::Invoke(1 /* System.Void System.Threading.Tasks.Sources.IValueTaskSource::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16,System.Threading.Tasks.Sources.ValueTaskSourceOnCompletedFlags) */, IValueTaskSource_t1CC0CC2515BCB4D99FECF8867FE9A24EDE64B662_il2cpp_TypeInfo_var, G_B6_5, G_B6_4, G_B6_3, G_B6_2, ((int32_t)((int32_t)G_B6_1|(int32_t)G_B6_0)));
		return;
	}

IL_006c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_19;
		L_19 = ValueTask_get_CompletedTask_mF69ED79258ABA58AB101F60D67061BF7D8F4CBC2_inline(/*hidden argument*/NULL);
		ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * L_20 = __this->get_address_of__value_0();
		bool L_21 = L_20->get__continueOnCapturedContext_4();
		NullCheck(L_19);
		ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  L_22;
		L_22 = Task_ConfigureAwait_m0477031D48C23B8368049C62C53C33D32322EDCE(L_19, L_21, /*hidden argument*/NULL);
		V_2 = L_22;
		ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_23;
		L_23 = ConfiguredTaskAwaitable_GetAwaiter_m9F912D7DF74F087AFAF1F478CE59152DF22395A2_inline((ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E *)(&V_2), /*hidden argument*/NULL);
		V_3 = L_23;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_24 = ___continuation0;
		ConfiguredTaskAwaiter_OnCompleted_m19C8E00172FF04103093EB160F6F1137381A45E1((ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *)(&V_3), L_24, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ConfiguredValueTaskAwaiter_OnCompleted_mB5C7960E83D693BD03E1FE84743B100CD78D8D24_AdjustorThunk (RuntimeObject * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConfiguredValueTaskAwaiter_t112A67291B7E35E791EA702BD9F300EAB390D6AF * _thisAdjusted = reinterpret_cast<ConfiguredValueTaskAwaiter_t112A67291B7E35E791EA702BD9F300EAB390D6AF *>(__this + _offset);
	ConfiguredValueTaskAwaiter_OnCompleted_mB5C7960E83D693BD03E1FE84743B100CD78D8D24(_thisAdjusted, ___continuation0, method);
}
// System.Void System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaiter_UnsafeOnCompleted_mBCB7E4147B66024B46794BE8F5E26DC0D476618D (ConfiguredValueTaskAwaiter_t112A67291B7E35E791EA702BD9F300EAB390D6AF * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IValueTaskSource_t1CC0CC2515BCB4D99FECF8867FE9A24EDE64B662_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_As_TisIValueTaskSource_t1CC0CC2515BCB4D99FECF8867FE9A24EDE64B662_mBD42C3E25DB5D0B01D45F0C7F30F3F3E62F796D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * V_1 = NULL;
	ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int16_t G_B5_0 = 0;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B5_1 = NULL;
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * G_B5_2 = NULL;
	RuntimeObject* G_B5_3 = NULL;
	int16_t G_B4_0 = 0;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B4_1 = NULL;
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * G_B4_2 = NULL;
	RuntimeObject* G_B4_3 = NULL;
	int32_t G_B6_0 = 0;
	int16_t G_B6_1 = 0;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B6_2 = NULL;
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * G_B6_3 = NULL;
	RuntimeObject* G_B6_4 = NULL;
	{
		ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * L_0 = __this->get_address_of__value_0();
		RuntimeObject * L_1 = L_0->get__obj_2();
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_3 = ((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)IsInstClass((RuntimeObject*)L_2, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var));
		V_1 = L_3;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_4 = V_1;
		ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * L_5 = __this->get_address_of__value_0();
		bool L_6 = L_5->get__continueOnCapturedContext_4();
		NullCheck(L_4);
		ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  L_7;
		L_7 = Task_ConfigureAwait_m0477031D48C23B8368049C62C53C33D32322EDCE(L_4, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_8;
		L_8 = ConfiguredTaskAwaitable_GetAwaiter_m9F912D7DF74F087AFAF1F478CE59152DF22395A2_inline((ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E *)(&V_2), /*hidden argument*/NULL);
		V_3 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = ___continuation0;
		ConfiguredTaskAwaiter_UnsafeOnCompleted_mF815346BE1ED57CDF90E0196AC0DD564C87327C7((ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *)(&V_3), L_9, /*hidden argument*/NULL);
		return;
	}

IL_0039:
	{
		RuntimeObject * L_10 = V_0;
		if (!L_10)
		{
			goto IL_006a;
		}
	}
	{
		RuntimeObject * L_11 = V_0;
		RuntimeObject* L_12;
		L_12 = Unsafe_As_TisIValueTaskSource_t1CC0CC2515BCB4D99FECF8867FE9A24EDE64B662_mBD42C3E25DB5D0B01D45F0C7F30F3F3E62F796D2_inline(L_11, /*hidden argument*/Unsafe_As_TisIValueTaskSource_t1CC0CC2515BCB4D99FECF8867FE9A24EDE64B662_mBD42C3E25DB5D0B01D45F0C7F30F3F3E62F796D2_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA_il2cpp_TypeInfo_var);
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_13 = ((ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA_StaticFields*)il2cpp_codegen_static_fields_for(ValueTaskAwaiter_t6A410E551C3D793C878C216952A50E3B5E679AAA_il2cpp_TypeInfo_var))->get_s_invokeActionDelegate_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_14 = ___continuation0;
		ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * L_15 = __this->get_address_of__value_0();
		int16_t L_16 = L_15->get__token_3();
		ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * L_17 = __this->get_address_of__value_0();
		bool L_18 = L_17->get__continueOnCapturedContext_4();
		G_B4_0 = L_16;
		G_B4_1 = L_14;
		G_B4_2 = L_13;
		G_B4_3 = L_12;
		if (L_18)
		{
			G_B5_0 = L_16;
			G_B5_1 = L_14;
			G_B5_2 = L_13;
			G_B5_3 = L_12;
			goto IL_0063;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_0064;
	}

IL_0063:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_0064:
	{
		NullCheck(G_B6_4);
		InterfaceActionInvoker4< Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *, RuntimeObject *, int16_t, int32_t >::Invoke(1 /* System.Void System.Threading.Tasks.Sources.IValueTaskSource::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16,System.Threading.Tasks.Sources.ValueTaskSourceOnCompletedFlags) */, IValueTaskSource_t1CC0CC2515BCB4D99FECF8867FE9A24EDE64B662_il2cpp_TypeInfo_var, G_B6_4, G_B6_3, G_B6_2, G_B6_1, G_B6_0);
		return;
	}

IL_006a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_19;
		L_19 = ValueTask_get_CompletedTask_mF69ED79258ABA58AB101F60D67061BF7D8F4CBC2_inline(/*hidden argument*/NULL);
		ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * L_20 = __this->get_address_of__value_0();
		bool L_21 = L_20->get__continueOnCapturedContext_4();
		NullCheck(L_19);
		ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  L_22;
		L_22 = Task_ConfigureAwait_m0477031D48C23B8368049C62C53C33D32322EDCE(L_19, L_21, /*hidden argument*/NULL);
		V_2 = L_22;
		ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_23;
		L_23 = ConfiguredTaskAwaitable_GetAwaiter_m9F912D7DF74F087AFAF1F478CE59152DF22395A2_inline((ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E *)(&V_2), /*hidden argument*/NULL);
		V_3 = L_23;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_24 = ___continuation0;
		ConfiguredTaskAwaiter_UnsafeOnCompleted_mF815346BE1ED57CDF90E0196AC0DD564C87327C7((ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *)(&V_3), L_24, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ConfiguredValueTaskAwaiter_UnsafeOnCompleted_mBCB7E4147B66024B46794BE8F5E26DC0D476618D_AdjustorThunk (RuntimeObject * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConfiguredValueTaskAwaiter_t112A67291B7E35E791EA702BD9F300EAB390D6AF * _thisAdjusted = reinterpret_cast<ConfiguredValueTaskAwaiter_t112A67291B7E35E791EA702BD9F300EAB390D6AF *>(__this + _offset);
	ConfiguredValueTaskAwaiter_UnsafeOnCompleted_mBCB7E4147B66024B46794BE8F5E26DC0D476618D(_thisAdjusted, ___continuation0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Runtime.CompilerServices.ValueTaskAwaiter/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m2C410FD88B9865F6F4A0E5345010EF28FE4EDD7E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t04590189C2E531C111230F99E4CE5CB0882F111F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t04590189C2E531C111230F99E4CE5CB0882F111F * L_0 = (U3CU3Ec_t04590189C2E531C111230F99E4CE5CB0882F111F *)il2cpp_codegen_object_new(U3CU3Ec_t04590189C2E531C111230F99E4CE5CB0882F111F_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m97FE77D6EFC19182BEB6495E43E203724B8BE4F2(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t04590189C2E531C111230F99E4CE5CB0882F111F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t04590189C2E531C111230F99E4CE5CB0882F111F_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void System.Runtime.CompilerServices.ValueTaskAwaiter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m97FE77D6EFC19182BEB6495E43E203724B8BE4F2 (U3CU3Ec_t04590189C2E531C111230F99E4CE5CB0882F111F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.CompilerServices.ValueTaskAwaiter/<>c::<.cctor>b__9_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__9_0_m892CC118EE44F242E4934434CF45123AEB902316 (U3CU3Ec_t04590189C2E531C111230F99E4CE5CB0882F111F * __this, RuntimeObject * ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___state0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)IsInstSealed((RuntimeObject*)L_0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		V_0 = L_1;
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m0B5663FDF1F3F8EDAA0093D162295765FCEC52B0(2, /*hidden argument*/NULL);
		return;
	}

IL_0011:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_0;
		NullCheck(L_2);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_2, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask__ctor_m975D708070BC01E6BCEE8C2E61E3DE928F8B20E4_inline (ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * __this, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___task0, const RuntimeMethod* method)
{
	{
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_0 = ___task0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m58505DB8941A68CDC7B5C9E720456C6464DDA71F(0, /*hidden argument*/NULL);
	}

IL_0009:
	{
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_1 = ___task0;
		__this->set__obj_2(L_1);
		__this->set__continueOnCapturedContext_4((bool)1);
		__this->set__token_3((int16_t)0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaitable__ctor_mF772FC9DF81E1FC057B55AFCA9F3FCB870F909E0_inline (ConfiguredValueTaskAwaitable_tCE30DAA7B5E29DDAD7AA08798C520FA660007CF9 * __this, ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5  ___value0, const RuntimeMethod* method)
{
	{
		ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5  L_0 = ___value0;
		__this->set__value_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaiter__ctor_mFDF59778A80420DBEA274C21F30ED02C71844A7E_inline (ConfiguredValueTaskAwaiter_t112A67291B7E35E791EA702BD9F300EAB390D6AF * __this, ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5  ___value0, const RuntimeMethod* method)
{
	{
		ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5  L_0 = ___value0;
		__this->set__value_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredValueTaskAwaiter_t112A67291B7E35E791EA702BD9F300EAB390D6AF  ConfiguredValueTaskAwaitable_GetAwaiter_mC2CCE6DFE422B343179181781C548AD21D902816_inline (ConfiguredValueTaskAwaitable_tCE30DAA7B5E29DDAD7AA08798C520FA660007CF9 * __this, const RuntimeMethod* method)
{
	{
		ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5  L_0 = __this->get__value_0();
		ConfiguredValueTaskAwaiter_t112A67291B7E35E791EA702BD9F300EAB390D6AF  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ConfiguredValueTaskAwaiter__ctor_mFDF59778A80420DBEA274C21F30ED02C71844A7E_inline((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask__ctor_m88B2D6B5434FCDB2A0999BB9B7F810A068E37A24_inline (ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * __this, RuntimeObject * ___obj0, int16_t ___token1, bool ___continueOnCapturedContext2, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		__this->set__obj_2(L_0);
		int16_t L_1 = ___token1;
		__this->set__token_3(L_1);
		bool L_2 = ___continueOnCapturedContext2;
		__this->set__continueOnCapturedContext_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ValueTask_get_IsCompleted_mE1CD52AA84F269936D8037A6262D88BE14484A11_inline (ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IValueTaskSource_t1CC0CC2515BCB4D99FECF8867FE9A24EDE64B662_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_As_TisIValueTaskSource_t1CC0CC2515BCB4D99FECF8867FE9A24EDE64B662_mBD42C3E25DB5D0B01D45F0C7F30F3F3E62F796D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * V_1 = NULL;
	{
		RuntimeObject * L_0 = __this->get__obj_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)1;
	}

IL_000c:
	{
		RuntimeObject * L_2 = V_0;
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_3 = ((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)IsInstClass((RuntimeObject*)L_2, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var));
		V_1 = L_3;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_4 = V_1;
		NullCheck(L_4);
		bool L_5;
		L_5 = Task_get_IsCompleted_m7EF73EE6C4F400997345371FFB10137D8E9B4E1E(L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_001d:
	{
		RuntimeObject * L_6 = V_0;
		RuntimeObject* L_7;
		L_7 = Unsafe_As_TisIValueTaskSource_t1CC0CC2515BCB4D99FECF8867FE9A24EDE64B662_mBD42C3E25DB5D0B01D45F0C7F30F3F3E62F796D2_inline(L_6, /*hidden argument*/Unsafe_As_TisIValueTaskSource_t1CC0CC2515BCB4D99FECF8867FE9A24EDE64B662_mBD42C3E25DB5D0B01D45F0C7F30F3F3E62F796D2_RuntimeMethod_var);
		int16_t L_8 = __this->get__token_3();
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* System.Threading.Tasks.Sources.ValueTaskSourceStatus System.Threading.Tasks.Sources.IValueTaskSource::GetStatus(System.Int16) */, IValueTaskSource_t1CC0CC2515BCB4D99FECF8867FE9A24EDE64B662_il2cpp_TypeInfo_var, L_7, L_8);
		return (bool)((!(((uint32_t)L_9) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask_ThrowIfCompletedUnsuccessfully_m23861DBB8F8179889EF67AE1B736CD7779C91B2D_inline (ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IValueTaskSource_t1CC0CC2515BCB4D99FECF8867FE9A24EDE64B662_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_As_TisIValueTaskSource_t1CC0CC2515BCB4D99FECF8867FE9A24EDE64B662_mBD42C3E25DB5D0B01D45F0C7F30F3F3E62F796D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject * L_0 = __this->get__obj_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		RuntimeObject * L_2 = V_0;
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_3 = ((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)IsInstClass((RuntimeObject*)L_2, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var));
		V_1 = L_3;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_4 = V_1;
		NullCheck(L_4);
		TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_5;
		L_5 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
		return;
	}

IL_0023:
	{
		RuntimeObject * L_6 = V_0;
		RuntimeObject* L_7;
		L_7 = Unsafe_As_TisIValueTaskSource_t1CC0CC2515BCB4D99FECF8867FE9A24EDE64B662_mBD42C3E25DB5D0B01D45F0C7F30F3F3E62F796D2_inline(L_6, /*hidden argument*/Unsafe_As_TisIValueTaskSource_t1CC0CC2515BCB4D99FECF8867FE9A24EDE64B662_mBD42C3E25DB5D0B01D45F0C7F30F3F3E62F796D2_RuntimeMethod_var);
		int16_t L_8 = __this->get__token_3();
		NullCheck(L_7);
		InterfaceActionInvoker1< int16_t >::Invoke(2 /* System.Void System.Threading.Tasks.Sources.IValueTaskSource::GetResult(System.Int16) */, IValueTaskSource_t1CC0CC2515BCB4D99FECF8867FE9A24EDE64B662_il2cpp_TypeInfo_var, L_7, L_8);
	}

IL_0034:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredValueTaskAwaitable_tCE30DAA7B5E29DDAD7AA08798C520FA660007CF9  ValueTask_ConfigureAwait_m7E046002A7F76397BC4F793303607A99ABAA5A21_inline (ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get__obj_2();
		int16_t L_1 = __this->get__token_3();
		bool L_2 = ___continueOnCapturedContext0;
		ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5  L_3;
		memset((&L_3), 0, sizeof(L_3));
		ValueTask__ctor_m88B2D6B5434FCDB2A0999BB9B7F810A068E37A24_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		ConfiguredValueTaskAwaitable_tCE30DAA7B5E29DDAD7AA08798C520FA660007CF9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		ConfiguredValueTaskAwaitable__ctor_mF772FC9DF81E1FC057B55AFCA9F3FCB870F909E0_inline((&L_4), L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ValueTask_get_CompletedTask_mF69ED79258ABA58AB101F60D67061BF7D8F4CBC2_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_0 = ((ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5_StaticFields*)il2cpp_codegen_static_fields_for(ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5_il2cpp_TypeInfo_var))->get_U3CCompletedTaskU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ConfiguredValueTaskAwaiter_get_IsCompleted_m67C02FF242977F34B9205CA924A55FF9E8BACAC1_inline (ConfiguredValueTaskAwaiter_t112A67291B7E35E791EA702BD9F300EAB390D6AF * __this, const RuntimeMethod* method)
{
	{
		ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * L_0 = __this->get_address_of__value_0();
		bool L_1;
		L_1 = ValueTask_get_IsCompleted_mE1CD52AA84F269936D8037A6262D88BE14484A11_inline((ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaiter_GetResult_m3F012DAAAF3AF67CECDC51CA4898A29847315E70_inline (ConfiguredValueTaskAwaiter_t112A67291B7E35E791EA702BD9F300EAB390D6AF * __this, const RuntimeMethod* method)
{
	{
		ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 * L_0 = __this->get_address_of__value_0();
		ValueTask_ThrowIfCompletedUnsuccessfully_m23861DBB8F8179889EF67AE1B736CD7779C91B2D_inline((ValueTask_t5CE929D164F417AB157C41C6E21C95A7D8DA9EA5 *)L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  ConfiguredTaskAwaitable_GetAwaiter_m9F912D7DF74F087AFAF1F478CE59152DF22395A2_inline (ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E * __this, const RuntimeMethod* method)
{
	{
		ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_0 = __this->get_m_configuredTaskAwaiter_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Unsafe_As_TisRuntimeObject_mB69494631721B5C97E5C8DFF3FB8B4E570B214AE_gshared_inline (RuntimeObject * ___o0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___o0;
		return (RuntimeObject *)L_0;
	}
}
