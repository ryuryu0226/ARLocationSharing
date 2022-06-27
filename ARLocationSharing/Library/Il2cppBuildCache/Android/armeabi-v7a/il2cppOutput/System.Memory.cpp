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
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
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

// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet>
struct Dictionary_2_tF591ED968D904B93A92B04B711C65E797B9D6E5E;
// System.Pinnable`1<System.Byte>
struct Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110;
// System.Pinnable`1<System.Char>
struct Pinnable_1_t95E8BF0F62016718CAF24D71446F85A32986715C;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.SByte[]
struct SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// System.UInt64[]
struct UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.ArrayTypeMismatchException
struct ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784;
// System.Reflection.Assembly
struct Assembly_t;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t9B89B1C38B332E83EF5D9D1D6F6088C7AC3E6EFB;
// System.Exception
struct Exception_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.FormatException
struct FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Buffers.IPinnable
struct IPinnable_t5F43661062D3A813291C43D3D17B9FA43963D6F3;
// System.Resources.IResourceGroveler
struct IResourceGroveler_tD738FE6B83F63AC66FDD73BCD3193016FDEBFAB0;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Runtime.CompilerServices.IsByRefLikeAttribute
struct IsByRefLikeAttribute_t4ED9D8CF7709ED7300B718C603BBF8F8AF65EF38;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tEE4069DE19AA2D2FEF7D3142EAE79311F7BB26E9;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.ObjectDisposedException
struct ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Resources.ResourceManager
struct ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A;
// System.Reflection.RuntimeAssembly
struct RuntimeAssembly_t799877C849878A70E10D25C690D7B0476DAF0B56;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// System.Reflection.TypeInfo
struct TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F;
// System.Version
struct Version_tBDAEDED25425A1D09910468B8BD1759115646E3C;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Resources.ResourceManager/CultureNameResourceSetPair
struct CultureNameResourceSetPair_t7DF2947B0015A29C8148DB0F32695ECB59369A84;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionArgument_t11B098DD9AD21AB015871A94DB7DC9A70A10509F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t554F555DED6A50C2365AB566A880644171B50636_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t0DF027D1C7415CBB03F663A5D5ACE52D29226059_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t620905184FE92C7CD2128B5FE4079C455117C4B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPinnable_t5F43661062D3A813291C43D3D17B9FA43963D6F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryExtensions_t3692531D647148747BC65C4610E740AEE9983A40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingManifestResourceException_tAC74F21ADC46CCB2BCC710464434E3B97F72FACB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Number_tF582821FDF819A5C8F89A4AEEEA382F75E061EC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParserHelpers_t8A97CC8777CE0C4CF09BEDF76F17F057486C5E0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Utf8Formatter_t40DEB6F6F7963F03A97169CEE107888F2B29B591_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Utf8Parser_tBAC6DC53DE4F4A96AE1B0E66D73BE343EFA379FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t2BE371A826DE714388CB1A6D368F18406BAB06B2____2B2055E39CBB1C111FB5C1C05492B3E5AAC607ED_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t2BE371A826DE714388CB1A6D368F18406BAB06B2____3CDA7449B0586AB873C75C04BB11D4864F5D7392_1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t2BE371A826DE714388CB1A6D368F18406BAB06B2____608454F961E288A48E34666C94032BEDEFD399E1_2_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t2BE371A826DE714388CB1A6D368F18406BAB06B2____B8B960BE929E7BAB90AE2CAEF2468C56CD5414C1_3_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t2BE371A826DE714388CB1A6D368F18406BAB06B2____BD20BFA840DDF83194ECD4397DA071ECD4C1C72F_4_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t2BE371A826DE714388CB1A6D368F18406BAB06B2____C3FB1115E83603E7E71244A6F2D43E22B790B5D1_5_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t2BE371A826DE714388CB1A6D368F18406BAB06B2____C4C38BC485A320D4B7D737DB85E705077FA38BEF_6_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t2BE371A826DE714388CB1A6D368F18406BAB06B2____DB5930245CE35BDE5EDC35035275D8DD55E139CF_7_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t2BE371A826DE714388CB1A6D368F18406BAB06B2____DD3AEFEADB1CD615F3017763F1568179FEE640B0_8_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t2BE371A826DE714388CB1A6D368F18406BAB06B2____E92B39D8233061927D9ACDE54665E68E7535635A_9_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t2BE371A826DE714388CB1A6D368F18406BAB06B2____EE0B1C00D481FCA3559F2937C3DD3127C35B2FE3_10_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78;
IL2CPP_EXTERN_C String_t* _stringLiteral2EA6B6BC14F437F961450987DE5D02563ADE55C3;
IL2CPP_EXTERN_C String_t* _stringLiteral37FA0EDE6488E25C5E7ECFF869A075843387FBB3;
IL2CPP_EXTERN_C String_t* _stringLiteral44B6E521D3C115CEA4878E4F981B5C2ACC1C885A;
IL2CPP_EXTERN_C String_t* _stringLiteral4CC20FA775B7CE5630588715DBC10889D01DC6F1;
IL2CPP_EXTERN_C String_t* _stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral7B09D270142D175BC50AB815A5770EE2CE9AFE9D;
IL2CPP_EXTERN_C String_t* _stringLiteral819CA64A4459548685C67A2CD1C9D5E94F49CCD5;
IL2CPP_EXTERN_C String_t* _stringLiteral88BDF3D0791A560245652E772545C49897854443;
IL2CPP_EXTERN_C String_t* _stringLiteral89BF668EA220E1F9C98F61872576447AF8F92A3F;
IL2CPP_EXTERN_C String_t* _stringLiteral9C540348BA11A2EE6516FA67EED1B5091F940BED;
IL2CPP_EXTERN_C String_t* _stringLiteralA00991B7716AB182854FDC90C9847A063B6CEDE6;
IL2CPP_EXTERN_C String_t* _stringLiteralC8B5F8CFFD59A7B59061F52A426CC740232A7314;
IL2CPP_EXTERN_C String_t* _stringLiteralD2E80D292EF114389BA7BA391D7EA63456D3073D;
IL2CPP_EXTERN_C String_t* _stringLiteralD47A3426BF2C027AE854619E7EAB1FEB5E8491AD;
IL2CPP_EXTERN_C String_t* _stringLiteralEBBE4103F42E1AE6A20FF78921B5E4A3398E0041;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryExtensions_IndexOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m16C2BDD6B446AEB6579BC57176D87011B59FBFCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyMemory_1_GetObjectStartLength_m9D3D7EA6E312C2FD16F180B249FCB80CB1DFDECF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyMemory_1__ctor_m0DAE24A1907E131407ECEAE406269A6A57999CFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySequence_1_TryGetString_mB307BB510E5976759C0AAB8B9345AAF4C4C88F75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_CopyTo_m4252FBCA62EB3368E39115E35C1E4D74B89C53DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_Slice_m7069C54604C1694CDCF61CE35A3A09F55D9C9FDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_Slice_m750CD52402E65B69E811EF1A7245A9283C8EEFDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_Slice_mC8E25AC937B49CDD57AA85FF493D7F42595F8EAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1__ctor_m776684B7035275EC1AA7A23157CFEE0E596AE782_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Length_m4BFDA5E41279728ADF75E310F780E357ECB1923B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_op_Implicit_m4DF231FE4EDB6F473374D63CC83755F09BF582F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArgumentException_DestinationTooShort_mD9C82D6A62948DA443166283990BF760F77C76C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_m4A71872D4B069AF36758A61E4CA3FB663B4E8EC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArgumentNullException_m3B4D674B817C817E97F4687F0130007D315F8B34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArgumentOutOfRangeException_OffsetOutOfRange_m33BB375A469C5D43F27FAF1E1573659C8D6D46B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArgumentOutOfRangeException_PositionOutOfRange_mE66B589C0CE79CD3252C96D133A4DA6BFF64228D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArgumentOutOfRangeException_PrecisionTooLarge_mAC345A1F72DBC919354CCB54CC6C24EF44BE48C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArgumentOutOfRangeException_SymbolDoesNotFit_m601A3BCC469FE8A7420CC33708307189B6C48B61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArgumentOutOfRangeException_m86EB6B05BDE45B6F92A7599E80E0179C17391AB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArgumentOutOfRangeException_mB72471F11341E214DA380AF2B87C3F28EC51CA59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArgumentValidationException_m02E99F21139D9C2446BCF31922E6B9A1FB6CBFE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArrayTypeMismatchException_mFC0D7756FD2EA1A7E41D8426D819369FDBD728FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowFormatException_BadFormatSpecifier_m1E35DA4BEAAC3A721CFB9CE82029EBABF763EA8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowIndexOutOfRangeException_m4D1EB8558F17DFE372ECF87D9BCAD112A7F5E6BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowInvalidOperationException_EndPositionNotReached_m67B5DCC8C43494E0A491781D118E147337664DB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowInvalidOperationException_mC18897E999FE00AE3ACC3543A468201068A217F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowObjectDisposedException_ArrayMemoryPoolBuffer_m6149121F51A2DAB89FA54460F0EB9F6154861E6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowStartOrEndArgumentValidationException_m0BB9EBD3A2B133B27075024CE04996C5626E7C38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_TryParseThrowFormatException_TisDecimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_m4D90369D4FECA72454279EE77D57AE7E65573515_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unsafe_Add_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m9ABE4DAAE83872C0A6C84A181092107B74F1D8A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unsafe_Add_TisIntPtr_t_mB992699F82D75AE06CED0336266F16A57402FB19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unsafe_AreSame_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m432CDE821F63BC587F0A2EF35562935875F9C5DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unsafe_AsPointer_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m4D8C6780EB1987171FBA08936AA2C2F9631031C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unsafe_AsRef_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m0D4660657D5ED75911BE5AB9BFF6B695957BAB9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unsafe_As_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mB9705B879316869DF89311F9ADB5B6BEE2629DC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unsafe_As_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m4AA2C39DA9491860F8AD8CBAD08F187AA089ACEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unsafe_As_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisReg16_t8B2CE150B820232BE56C005C405133CCA7A58CD4_mE8689C68ADE79915D3B986C19516728B2E4740DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unsafe_As_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisReg32_tA8676F8C245F150C7985C4A3BC3CD44E58D3B923_m820456769F6EA3078E6F4C2AF4CF5C885B0B9D60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unsafe_As_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisReg64_t4A40DA33D6F4C8FB3A17A3B3D9E6FB5B1FEEE9B3_m88C65D2DA086C658FD4F56AAD9F8E156C070FBEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unsafe_As_TisDecimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_TisMutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D_mF24EB96C9EC3B1D2268AD5413133398FE712084E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unsafe_As_TisMutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D_TisDecimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_mE2A3068F655E44854F360A5B8315CFA5A9A7706C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unsafe_As_TisPinnable_1_t95E8BF0F62016718CAF24D71446F85A32986715C_m1880DC1B1C8534150F7BE5E5E3CF1F2FFD4E3AA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unsafe_ByteOffset_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m13722CE0E9DE760114AB69C5D315B218541FFA6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unsafe_Read_TisVector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC_m80308A9BAF3E599D0E46C16D30B25F6DBBA8983F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unsafe_SizeOf_TisVector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC_m630621324270B1BB57F6A7D0A02C0E4C8218FB7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utf8Formatter_TryFormat_m6791AE969A684DF1A5141E89B2748A0491B16DA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector_1_Equals_mAB571D1F19A77D7F9736F214B43B853570ADE33D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector_1_Equals_mAD33337AD07ECF6DF2BC0F1008BC963251A9A96B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector_1__ctor_m91A33CB1C548BFAC5BB414B8F5CAE0E156EF269E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector_1__ctor_mD4A0CE968AC976EDE49DE043EDDE1452D527E638_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector_1_get_Count_m08C2BE69EF27B3ABF0C49C66D4EBD63DB4CEBD69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector_1_get_Count_m0A3F1124AD2731436A2A593F00FC37F717CD6CCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector_1_get_Count_m6F1F8DDBF49AFE0B82F12C94AA096F26FA8DBC37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector_1_get_Item_mEB12DE8C060BF68B5D7CEC3DB61FA217DEC41080_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector_1_get_Zero_m16C1E63064B0566B3729C7A6EAA36DB3BF4B35D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector_1_get_Zero_m9CA624B7E05E36937BB783931B77F8E607C4A074_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector_1_op_Equality_mD995A6FD72036B2C240A912C4AA19D5701A43D18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector_1_op_Inequality_mBA4346A92E18E027DD3E765840093720AFBE15E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector_AsVectorByte_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m372B582B265FA776E8B53D51A552A9743572F82B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector_AsVectorUInt64_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mC567616F831B415B272343591343975A63D69EFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector_AsVectorUInt64_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_mC04146E01E097E2AAA1EB93B5D9384A22541DF08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector_Equals_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mD81667356EC7F90AAC00124EAD110C46700DBAA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector_Equals_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_mC5EF21D75B8379A25C2F8EABEFC56653DEE6DF25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SR_t4D39A8EE0C8A926B38B7B1CC0A2E24A82350D16D_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7;
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
struct UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tDCF4F358E642BBA69DFA9FB7B49D03098113B765 
{
public:

public:
};


// System.Object


// System.Pinnable`1<System.Byte>
struct Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110  : public RuntimeObject
{
public:
	// T System.Pinnable`1::Data
	uint8_t ___Data_0;

public:
	inline static int32_t get_offset_of_Data_0() { return static_cast<int32_t>(offsetof(Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110, ___Data_0)); }
	inline uint8_t get_Data_0() const { return ___Data_0; }
	inline uint8_t* get_address_of_Data_0() { return &___Data_0; }
	inline void set_Data_0(uint8_t value)
	{
		___Data_0 = value;
	}
};


// System.Pinnable`1<System.Char>
struct Pinnable_1_t95E8BF0F62016718CAF24D71446F85A32986715C  : public RuntimeObject
{
public:
	// T System.Pinnable`1::Data
	Il2CppChar ___Data_0;

public:
	inline static int32_t get_offset_of_Data_0() { return static_cast<int32_t>(offsetof(Pinnable_1_t95E8BF0F62016718CAF24D71446F85A32986715C, ___Data_0)); }
	inline Il2CppChar get_Data_0() const { return ___Data_0; }
	inline Il2CppChar* get_address_of_Data_0() { return &___Data_0; }
	inline void set_Data_0(Il2CppChar value)
	{
		___Data_0 = value;
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


// System.Buffers.Binary.BinaryPrimitives
struct BinaryPrimitives_t1397D484B5501CC80CB2C442A0AC8FB552F346C6  : public RuntimeObject
{
public:

public:
};


// System.Buffers.BuffersExtensions
struct BuffersExtensions_t159E6EC6DF5EB44D12B89509430E2C83C7FF2AE4  : public RuntimeObject
{
public:

public:
};


// System.DecimalDecCalc
struct DecimalDecCalc_t787D24480A6B238C76BD041C3DE5FE4CF7269025  : public RuntimeObject
{
public:

public:
};


// System.Numerics.Hashing.HashHelpers
struct HashHelpers_t554F555DED6A50C2365AB566A880644171B50636  : public RuntimeObject
{
public:

public:
};

struct HashHelpers_t554F555DED6A50C2365AB566A880644171B50636_StaticFields
{
public:
	// System.Int32 System.Numerics.Hashing.HashHelpers::RandomSeed
	int32_t ___RandomSeed_0;

public:
	inline static int32_t get_offset_of_RandomSeed_0() { return static_cast<int32_t>(offsetof(HashHelpers_t554F555DED6A50C2365AB566A880644171B50636_StaticFields, ___RandomSeed_0)); }
	inline int32_t get_RandomSeed_0() const { return ___RandomSeed_0; }
	inline int32_t* get_address_of_RandomSeed_0() { return &___RandomSeed_0; }
	inline void set_RandomSeed_0(int32_t value)
	{
		___RandomSeed_0 = value;
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.Runtime.InteropServices.MemoryMarshal
struct MemoryMarshal_tD214653E01E6F3453947FFC66D4D1527D20C33F9  : public RuntimeObject
{
public:

public:
};


// System.Number
struct Number_tF582821FDF819A5C8F89A4AEEEA382F75E061EC1  : public RuntimeObject
{
public:

public:
};

struct Number_tF582821FDF819A5C8F89A4AEEEA382F75E061EC1_StaticFields
{
public:
	// System.UInt64[] System.Number::s_rgval64Power10
	UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ___s_rgval64Power10_0;
	// System.SByte[] System.Number::s_rgexp64Power10
	SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* ___s_rgexp64Power10_1;
	// System.UInt64[] System.Number::s_rgval64Power10By16
	UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ___s_rgval64Power10By16_2;
	// System.Int16[] System.Number::s_rgexp64Power10By16
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___s_rgexp64Power10By16_3;

public:
	inline static int32_t get_offset_of_s_rgval64Power10_0() { return static_cast<int32_t>(offsetof(Number_tF582821FDF819A5C8F89A4AEEEA382F75E061EC1_StaticFields, ___s_rgval64Power10_0)); }
	inline UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* get_s_rgval64Power10_0() const { return ___s_rgval64Power10_0; }
	inline UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2** get_address_of_s_rgval64Power10_0() { return &___s_rgval64Power10_0; }
	inline void set_s_rgval64Power10_0(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* value)
	{
		___s_rgval64Power10_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_rgval64Power10_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_rgexp64Power10_1() { return static_cast<int32_t>(offsetof(Number_tF582821FDF819A5C8F89A4AEEEA382F75E061EC1_StaticFields, ___s_rgexp64Power10_1)); }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* get_s_rgexp64Power10_1() const { return ___s_rgexp64Power10_1; }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7** get_address_of_s_rgexp64Power10_1() { return &___s_rgexp64Power10_1; }
	inline void set_s_rgexp64Power10_1(SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* value)
	{
		___s_rgexp64Power10_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_rgexp64Power10_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_rgval64Power10By16_2() { return static_cast<int32_t>(offsetof(Number_tF582821FDF819A5C8F89A4AEEEA382F75E061EC1_StaticFields, ___s_rgval64Power10By16_2)); }
	inline UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* get_s_rgval64Power10By16_2() const { return ___s_rgval64Power10By16_2; }
	inline UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2** get_address_of_s_rgval64Power10By16_2() { return &___s_rgval64Power10By16_2; }
	inline void set_s_rgval64Power10By16_2(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* value)
	{
		___s_rgval64Power10By16_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_rgval64Power10By16_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_rgexp64Power10By16_3() { return static_cast<int32_t>(offsetof(Number_tF582821FDF819A5C8F89A4AEEEA382F75E061EC1_StaticFields, ___s_rgexp64Power10By16_3)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_s_rgexp64Power10By16_3() const { return ___s_rgexp64Power10By16_3; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_s_rgexp64Power10By16_3() { return &___s_rgexp64Power10By16_3; }
	inline void set_s_rgexp64Power10By16_3(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___s_rgexp64Power10By16_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_rgexp64Power10By16_3), (void*)value);
	}
};


// System.Buffers.Text.ParserHelpers
struct ParserHelpers_t8A97CC8777CE0C4CF09BEDF76F17F057486C5E0A  : public RuntimeObject
{
public:

public:
};

struct ParserHelpers_t8A97CC8777CE0C4CF09BEDF76F17F057486C5E0A_StaticFields
{
public:
	// System.Byte[] System.Buffers.Text.ParserHelpers::s_hexLookup
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___s_hexLookup_0;

public:
	inline static int32_t get_offset_of_s_hexLookup_0() { return static_cast<int32_t>(offsetof(ParserHelpers_t8A97CC8777CE0C4CF09BEDF76F17F057486C5E0A_StaticFields, ___s_hexLookup_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_s_hexLookup_0() const { return ___s_hexLookup_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_s_hexLookup_0() { return &___s_hexLookup_0; }
	inline void set_s_hexLookup_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___s_hexLookup_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_hexLookup_0), (void*)value);
	}
};


// System.Buffers.ReadOnlySequence
struct ReadOnlySequence_tF9C82F498AD9F37DFD4610069EAB7F596F8B8E80  : public RuntimeObject
{
public:

public:
};


// FxResources.System.Memory.SR
struct SR_t4D39A8EE0C8A926B38B7B1CC0A2E24A82350D16D  : public RuntimeObject
{
public:

public:
};


// System.SR
struct SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF  : public RuntimeObject
{
public:

public:
};

struct SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_StaticFields
{
public:
	// System.Resources.ResourceManager System.SR::s_resourceManager
	ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * ___s_resourceManager_0;
	// System.Type System.SR::<ResourceType>k__BackingField
	Type_t * ___U3CResourceTypeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_s_resourceManager_0() { return static_cast<int32_t>(offsetof(SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_StaticFields, ___s_resourceManager_0)); }
	inline ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * get_s_resourceManager_0() const { return ___s_resourceManager_0; }
	inline ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A ** get_address_of_s_resourceManager_0() { return &___s_resourceManager_0; }
	inline void set_s_resourceManager_0(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * value)
	{
		___s_resourceManager_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_resourceManager_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResourceTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_StaticFields, ___U3CResourceTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CResourceTypeU3Ek__BackingField_1() const { return ___U3CResourceTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CResourceTypeU3Ek__BackingField_1() { return &___U3CResourceTypeU3Ek__BackingField_1; }
	inline void set_U3CResourceTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CResourceTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResourceTypeU3Ek__BackingField_1), (void*)value);
	}
};


// System.Runtime.InteropServices.SequenceMarshal
struct SequenceMarshal_tA04C0C37E881E8C3CB8270E79C8C40FCA644E382  : public RuntimeObject
{
public:

public:
};


// System.SpanHelpers
struct SpanHelpers_t43B4372273814AD441D829F43044F265A20EB152  : public RuntimeObject
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


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// System.ThrowHelper
struct ThrowHelper_t6FEE8E226685E1C0DA06AA73F71F45104987D3DE  : public RuntimeObject
{
public:

public:
};


// System.Buffers.Text.Utf8Formatter
struct Utf8Formatter_t40DEB6F6F7963F03A97169CEE107888F2B29B591  : public RuntimeObject
{
public:

public:
};

struct Utf8Formatter_t40DEB6F6F7963F03A97169CEE107888F2B29B591_StaticFields
{
public:
	// System.UInt32[] System.Buffers.Text.Utf8Formatter::DayAbbreviations
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___DayAbbreviations_0;
	// System.UInt32[] System.Buffers.Text.Utf8Formatter::DayAbbreviationsLowercase
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___DayAbbreviationsLowercase_1;
	// System.UInt32[] System.Buffers.Text.Utf8Formatter::MonthAbbreviations
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___MonthAbbreviations_2;
	// System.UInt32[] System.Buffers.Text.Utf8Formatter::MonthAbbreviationsLowercase
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___MonthAbbreviationsLowercase_3;

public:
	inline static int32_t get_offset_of_DayAbbreviations_0() { return static_cast<int32_t>(offsetof(Utf8Formatter_t40DEB6F6F7963F03A97169CEE107888F2B29B591_StaticFields, ___DayAbbreviations_0)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_DayAbbreviations_0() const { return ___DayAbbreviations_0; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_DayAbbreviations_0() { return &___DayAbbreviations_0; }
	inline void set_DayAbbreviations_0(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___DayAbbreviations_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DayAbbreviations_0), (void*)value);
	}

	inline static int32_t get_offset_of_DayAbbreviationsLowercase_1() { return static_cast<int32_t>(offsetof(Utf8Formatter_t40DEB6F6F7963F03A97169CEE107888F2B29B591_StaticFields, ___DayAbbreviationsLowercase_1)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_DayAbbreviationsLowercase_1() const { return ___DayAbbreviationsLowercase_1; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_DayAbbreviationsLowercase_1() { return &___DayAbbreviationsLowercase_1; }
	inline void set_DayAbbreviationsLowercase_1(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___DayAbbreviationsLowercase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DayAbbreviationsLowercase_1), (void*)value);
	}

	inline static int32_t get_offset_of_MonthAbbreviations_2() { return static_cast<int32_t>(offsetof(Utf8Formatter_t40DEB6F6F7963F03A97169CEE107888F2B29B591_StaticFields, ___MonthAbbreviations_2)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_MonthAbbreviations_2() const { return ___MonthAbbreviations_2; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_MonthAbbreviations_2() { return &___MonthAbbreviations_2; }
	inline void set_MonthAbbreviations_2(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___MonthAbbreviations_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MonthAbbreviations_2), (void*)value);
	}

	inline static int32_t get_offset_of_MonthAbbreviationsLowercase_3() { return static_cast<int32_t>(offsetof(Utf8Formatter_t40DEB6F6F7963F03A97169CEE107888F2B29B591_StaticFields, ___MonthAbbreviationsLowercase_3)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_MonthAbbreviationsLowercase_3() const { return ___MonthAbbreviationsLowercase_3; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_MonthAbbreviationsLowercase_3() { return &___MonthAbbreviationsLowercase_3; }
	inline void set_MonthAbbreviationsLowercase_3(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___MonthAbbreviationsLowercase_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MonthAbbreviationsLowercase_3), (void*)value);
	}
};


// System.Buffers.Text.Utf8Parser
struct Utf8Parser_tBAC6DC53DE4F4A96AE1B0E66D73BE343EFA379FC  : public RuntimeObject
{
public:

public:
};

struct Utf8Parser_tBAC6DC53DE4F4A96AE1B0E66D73BE343EFA379FC_StaticFields
{
public:
	// System.Int32[] System.Buffers.Text.Utf8Parser::s_daysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___s_daysToMonth365_0;
	// System.Int32[] System.Buffers.Text.Utf8Parser::s_daysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___s_daysToMonth366_1;

public:
	inline static int32_t get_offset_of_s_daysToMonth365_0() { return static_cast<int32_t>(offsetof(Utf8Parser_tBAC6DC53DE4F4A96AE1B0E66D73BE343EFA379FC_StaticFields, ___s_daysToMonth365_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_s_daysToMonth365_0() const { return ___s_daysToMonth365_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_s_daysToMonth365_0() { return &___s_daysToMonth365_0; }
	inline void set_s_daysToMonth365_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___s_daysToMonth365_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_daysToMonth365_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_daysToMonth366_1() { return static_cast<int32_t>(offsetof(Utf8Parser_tBAC6DC53DE4F4A96AE1B0E66D73BE343EFA379FC_StaticFields, ___s_daysToMonth366_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_s_daysToMonth366_1() const { return ___s_daysToMonth366_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_s_daysToMonth366_1() { return &___s_daysToMonth366_1; }
	inline void set_s_daysToMonth366_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___s_daysToMonth366_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_daysToMonth366_1), (void*)value);
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

// System.ReadOnlyMemory`1<System.Char>
struct ReadOnlyMemory_1_t8210C81C55F6DD2001CB109C5F2BA0DA96F947DE 
{
public:
	// System.Object System.ReadOnlyMemory`1::_object
	RuntimeObject * ____object_0;
	// System.Int32 System.ReadOnlyMemory`1::_index
	int32_t ____index_1;
	// System.Int32 System.ReadOnlyMemory`1::_length
	int32_t ____length_2;

public:
	inline static int32_t get_offset_of__object_0() { return static_cast<int32_t>(offsetof(ReadOnlyMemory_1_t8210C81C55F6DD2001CB109C5F2BA0DA96F947DE, ____object_0)); }
	inline RuntimeObject * get__object_0() const { return ____object_0; }
	inline RuntimeObject ** get_address_of__object_0() { return &____object_0; }
	inline void set__object_0(RuntimeObject * value)
	{
		____object_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____object_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(ReadOnlyMemory_1_t8210C81C55F6DD2001CB109C5F2BA0DA96F947DE, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(ReadOnlyMemory_1_t8210C81C55F6DD2001CB109C5F2BA0DA96F947DE, ____length_2)); }
	inline int32_t get__length_2() const { return ____length_2; }
	inline int32_t* get_address_of__length_2() { return &____length_2; }
	inline void set__length_2(int32_t value)
	{
		____length_2 = value;
	}
};

// Native definition for P/Invoke marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_tAAA9CB78753D364C1C68F98E1112328AEB5C264A_marshaled_pinvoke_define
#define ReadOnlyMemory_1_tAAA9CB78753D364C1C68F98E1112328AEB5C264A_marshaled_pinvoke_define
struct ReadOnlyMemory_1_tAAA9CB78753D364C1C68F98E1112328AEB5C264A_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif
// Native definition for COM marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_tAAA9CB78753D364C1C68F98E1112328AEB5C264A_marshaled_com_define
#define ReadOnlyMemory_1_tAAA9CB78753D364C1C68F98E1112328AEB5C264A_marshaled_com_define
struct ReadOnlyMemory_1_tAAA9CB78753D364C1C68F98E1112328AEB5C264A_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif

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


// System.Decimal
struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Zero_7)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___One_8)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_One_8() const { return ___One_8; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinValue_11)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearPositiveZero_13 = value;
	}
};


// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t9B89B1C38B332E83EF5D9D1D6F6088C7AC3E6EFB  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
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

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Runtime.InteropServices.GCHandle
struct GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
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


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// System.Runtime.CompilerServices.IsByRefLikeAttribute
struct IsByRefLikeAttribute_t4ED9D8CF7709ED7300B718C603BBF8F8AF65EF38  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tEE4069DE19AA2D2FEF7D3142EAE79311F7BB26E9  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.MutableDecimal
struct MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D 
{
public:
	// System.UInt32 System.MutableDecimal::Flags
	uint32_t ___Flags_0;
	// System.UInt32 System.MutableDecimal::High
	uint32_t ___High_1;
	// System.UInt32 System.MutableDecimal::Low
	uint32_t ___Low_2;
	// System.UInt32 System.MutableDecimal::Mid
	uint32_t ___Mid_3;

public:
	inline static int32_t get_offset_of_Flags_0() { return static_cast<int32_t>(offsetof(MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D, ___Flags_0)); }
	inline uint32_t get_Flags_0() const { return ___Flags_0; }
	inline uint32_t* get_address_of_Flags_0() { return &___Flags_0; }
	inline void set_Flags_0(uint32_t value)
	{
		___Flags_0 = value;
	}

	inline static int32_t get_offset_of_High_1() { return static_cast<int32_t>(offsetof(MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D, ___High_1)); }
	inline uint32_t get_High_1() const { return ___High_1; }
	inline uint32_t* get_address_of_High_1() { return &___High_1; }
	inline void set_High_1(uint32_t value)
	{
		___High_1 = value;
	}

	inline static int32_t get_offset_of_Low_2() { return static_cast<int32_t>(offsetof(MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D, ___Low_2)); }
	inline uint32_t get_Low_2() const { return ___Low_2; }
	inline uint32_t* get_address_of_Low_2() { return &___Low_2; }
	inline void set_Low_2(uint32_t value)
	{
		___Low_2 = value;
	}

	inline static int32_t get_offset_of_Mid_3() { return static_cast<int32_t>(offsetof(MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D, ___Mid_3)); }
	inline uint32_t get_Mid_3() const { return ___Mid_3; }
	inline uint32_t* get_address_of_Mid_3() { return &___Mid_3; }
	inline void set_Mid_3(uint32_t value)
	{
		___Mid_3 = value;
	}
};


// System.NUInt
struct NUInt_t6097F6D5A9138404C7786F1B3E1654AD18E030F5 
{
public:
	// System.Void* System.NUInt::_value
	void* ____value_0;

public:
	inline static int32_t get_offset_of__value_0() { return static_cast<int32_t>(offsetof(NUInt_t6097F6D5A9138404C7786F1B3E1654AD18E030F5, ____value_0)); }
	inline void* get__value_0() const { return ____value_0; }
	inline void** get_address_of__value_0() { return &____value_0; }
	inline void set__value_0(void* value)
	{
		____value_0 = value;
	}
};


// System.NumberBuffer
struct NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 
{
public:
	// System.Int32 System.NumberBuffer::Scale
	int32_t ___Scale_0;
	// System.Boolean System.NumberBuffer::IsNegative
	bool ___IsNegative_1;
	// System.Byte System.NumberBuffer::_b0
	uint8_t ____b0_2;
	// System.Byte System.NumberBuffer::_b1
	uint8_t ____b1_3;
	// System.Byte System.NumberBuffer::_b2
	uint8_t ____b2_4;
	// System.Byte System.NumberBuffer::_b3
	uint8_t ____b3_5;
	// System.Byte System.NumberBuffer::_b4
	uint8_t ____b4_6;
	// System.Byte System.NumberBuffer::_b5
	uint8_t ____b5_7;
	// System.Byte System.NumberBuffer::_b6
	uint8_t ____b6_8;
	// System.Byte System.NumberBuffer::_b7
	uint8_t ____b7_9;
	// System.Byte System.NumberBuffer::_b8
	uint8_t ____b8_10;
	// System.Byte System.NumberBuffer::_b9
	uint8_t ____b9_11;
	// System.Byte System.NumberBuffer::_b10
	uint8_t ____b10_12;
	// System.Byte System.NumberBuffer::_b11
	uint8_t ____b11_13;
	// System.Byte System.NumberBuffer::_b12
	uint8_t ____b12_14;
	// System.Byte System.NumberBuffer::_b13
	uint8_t ____b13_15;
	// System.Byte System.NumberBuffer::_b14
	uint8_t ____b14_16;
	// System.Byte System.NumberBuffer::_b15
	uint8_t ____b15_17;
	// System.Byte System.NumberBuffer::_b16
	uint8_t ____b16_18;
	// System.Byte System.NumberBuffer::_b17
	uint8_t ____b17_19;
	// System.Byte System.NumberBuffer::_b18
	uint8_t ____b18_20;
	// System.Byte System.NumberBuffer::_b19
	uint8_t ____b19_21;
	// System.Byte System.NumberBuffer::_b20
	uint8_t ____b20_22;
	// System.Byte System.NumberBuffer::_b21
	uint8_t ____b21_23;
	// System.Byte System.NumberBuffer::_b22
	uint8_t ____b22_24;
	// System.Byte System.NumberBuffer::_b23
	uint8_t ____b23_25;
	// System.Byte System.NumberBuffer::_b24
	uint8_t ____b24_26;
	// System.Byte System.NumberBuffer::_b25
	uint8_t ____b25_27;
	// System.Byte System.NumberBuffer::_b26
	uint8_t ____b26_28;
	// System.Byte System.NumberBuffer::_b27
	uint8_t ____b27_29;
	// System.Byte System.NumberBuffer::_b28
	uint8_t ____b28_30;
	// System.Byte System.NumberBuffer::_b29
	uint8_t ____b29_31;
	// System.Byte System.NumberBuffer::_b30
	uint8_t ____b30_32;
	// System.Byte System.NumberBuffer::_b31
	uint8_t ____b31_33;
	// System.Byte System.NumberBuffer::_b32
	uint8_t ____b32_34;
	// System.Byte System.NumberBuffer::_b33
	uint8_t ____b33_35;
	// System.Byte System.NumberBuffer::_b34
	uint8_t ____b34_36;
	// System.Byte System.NumberBuffer::_b35
	uint8_t ____b35_37;
	// System.Byte System.NumberBuffer::_b36
	uint8_t ____b36_38;
	// System.Byte System.NumberBuffer::_b37
	uint8_t ____b37_39;
	// System.Byte System.NumberBuffer::_b38
	uint8_t ____b38_40;
	// System.Byte System.NumberBuffer::_b39
	uint8_t ____b39_41;
	// System.Byte System.NumberBuffer::_b40
	uint8_t ____b40_42;
	// System.Byte System.NumberBuffer::_b41
	uint8_t ____b41_43;
	// System.Byte System.NumberBuffer::_b42
	uint8_t ____b42_44;
	// System.Byte System.NumberBuffer::_b43
	uint8_t ____b43_45;
	// System.Byte System.NumberBuffer::_b44
	uint8_t ____b44_46;
	// System.Byte System.NumberBuffer::_b45
	uint8_t ____b45_47;
	// System.Byte System.NumberBuffer::_b46
	uint8_t ____b46_48;
	// System.Byte System.NumberBuffer::_b47
	uint8_t ____b47_49;
	// System.Byte System.NumberBuffer::_b48
	uint8_t ____b48_50;
	// System.Byte System.NumberBuffer::_b49
	uint8_t ____b49_51;
	// System.Byte System.NumberBuffer::_b50
	uint8_t ____b50_52;

public:
	inline static int32_t get_offset_of_Scale_0() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ___Scale_0)); }
	inline int32_t get_Scale_0() const { return ___Scale_0; }
	inline int32_t* get_address_of_Scale_0() { return &___Scale_0; }
	inline void set_Scale_0(int32_t value)
	{
		___Scale_0 = value;
	}

	inline static int32_t get_offset_of_IsNegative_1() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ___IsNegative_1)); }
	inline bool get_IsNegative_1() const { return ___IsNegative_1; }
	inline bool* get_address_of_IsNegative_1() { return &___IsNegative_1; }
	inline void set_IsNegative_1(bool value)
	{
		___IsNegative_1 = value;
	}

	inline static int32_t get_offset_of__b0_2() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b0_2)); }
	inline uint8_t get__b0_2() const { return ____b0_2; }
	inline uint8_t* get_address_of__b0_2() { return &____b0_2; }
	inline void set__b0_2(uint8_t value)
	{
		____b0_2 = value;
	}

	inline static int32_t get_offset_of__b1_3() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b1_3)); }
	inline uint8_t get__b1_3() const { return ____b1_3; }
	inline uint8_t* get_address_of__b1_3() { return &____b1_3; }
	inline void set__b1_3(uint8_t value)
	{
		____b1_3 = value;
	}

	inline static int32_t get_offset_of__b2_4() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b2_4)); }
	inline uint8_t get__b2_4() const { return ____b2_4; }
	inline uint8_t* get_address_of__b2_4() { return &____b2_4; }
	inline void set__b2_4(uint8_t value)
	{
		____b2_4 = value;
	}

	inline static int32_t get_offset_of__b3_5() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b3_5)); }
	inline uint8_t get__b3_5() const { return ____b3_5; }
	inline uint8_t* get_address_of__b3_5() { return &____b3_5; }
	inline void set__b3_5(uint8_t value)
	{
		____b3_5 = value;
	}

	inline static int32_t get_offset_of__b4_6() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b4_6)); }
	inline uint8_t get__b4_6() const { return ____b4_6; }
	inline uint8_t* get_address_of__b4_6() { return &____b4_6; }
	inline void set__b4_6(uint8_t value)
	{
		____b4_6 = value;
	}

	inline static int32_t get_offset_of__b5_7() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b5_7)); }
	inline uint8_t get__b5_7() const { return ____b5_7; }
	inline uint8_t* get_address_of__b5_7() { return &____b5_7; }
	inline void set__b5_7(uint8_t value)
	{
		____b5_7 = value;
	}

	inline static int32_t get_offset_of__b6_8() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b6_8)); }
	inline uint8_t get__b6_8() const { return ____b6_8; }
	inline uint8_t* get_address_of__b6_8() { return &____b6_8; }
	inline void set__b6_8(uint8_t value)
	{
		____b6_8 = value;
	}

	inline static int32_t get_offset_of__b7_9() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b7_9)); }
	inline uint8_t get__b7_9() const { return ____b7_9; }
	inline uint8_t* get_address_of__b7_9() { return &____b7_9; }
	inline void set__b7_9(uint8_t value)
	{
		____b7_9 = value;
	}

	inline static int32_t get_offset_of__b8_10() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b8_10)); }
	inline uint8_t get__b8_10() const { return ____b8_10; }
	inline uint8_t* get_address_of__b8_10() { return &____b8_10; }
	inline void set__b8_10(uint8_t value)
	{
		____b8_10 = value;
	}

	inline static int32_t get_offset_of__b9_11() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b9_11)); }
	inline uint8_t get__b9_11() const { return ____b9_11; }
	inline uint8_t* get_address_of__b9_11() { return &____b9_11; }
	inline void set__b9_11(uint8_t value)
	{
		____b9_11 = value;
	}

	inline static int32_t get_offset_of__b10_12() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b10_12)); }
	inline uint8_t get__b10_12() const { return ____b10_12; }
	inline uint8_t* get_address_of__b10_12() { return &____b10_12; }
	inline void set__b10_12(uint8_t value)
	{
		____b10_12 = value;
	}

	inline static int32_t get_offset_of__b11_13() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b11_13)); }
	inline uint8_t get__b11_13() const { return ____b11_13; }
	inline uint8_t* get_address_of__b11_13() { return &____b11_13; }
	inline void set__b11_13(uint8_t value)
	{
		____b11_13 = value;
	}

	inline static int32_t get_offset_of__b12_14() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b12_14)); }
	inline uint8_t get__b12_14() const { return ____b12_14; }
	inline uint8_t* get_address_of__b12_14() { return &____b12_14; }
	inline void set__b12_14(uint8_t value)
	{
		____b12_14 = value;
	}

	inline static int32_t get_offset_of__b13_15() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b13_15)); }
	inline uint8_t get__b13_15() const { return ____b13_15; }
	inline uint8_t* get_address_of__b13_15() { return &____b13_15; }
	inline void set__b13_15(uint8_t value)
	{
		____b13_15 = value;
	}

	inline static int32_t get_offset_of__b14_16() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b14_16)); }
	inline uint8_t get__b14_16() const { return ____b14_16; }
	inline uint8_t* get_address_of__b14_16() { return &____b14_16; }
	inline void set__b14_16(uint8_t value)
	{
		____b14_16 = value;
	}

	inline static int32_t get_offset_of__b15_17() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b15_17)); }
	inline uint8_t get__b15_17() const { return ____b15_17; }
	inline uint8_t* get_address_of__b15_17() { return &____b15_17; }
	inline void set__b15_17(uint8_t value)
	{
		____b15_17 = value;
	}

	inline static int32_t get_offset_of__b16_18() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b16_18)); }
	inline uint8_t get__b16_18() const { return ____b16_18; }
	inline uint8_t* get_address_of__b16_18() { return &____b16_18; }
	inline void set__b16_18(uint8_t value)
	{
		____b16_18 = value;
	}

	inline static int32_t get_offset_of__b17_19() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b17_19)); }
	inline uint8_t get__b17_19() const { return ____b17_19; }
	inline uint8_t* get_address_of__b17_19() { return &____b17_19; }
	inline void set__b17_19(uint8_t value)
	{
		____b17_19 = value;
	}

	inline static int32_t get_offset_of__b18_20() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b18_20)); }
	inline uint8_t get__b18_20() const { return ____b18_20; }
	inline uint8_t* get_address_of__b18_20() { return &____b18_20; }
	inline void set__b18_20(uint8_t value)
	{
		____b18_20 = value;
	}

	inline static int32_t get_offset_of__b19_21() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b19_21)); }
	inline uint8_t get__b19_21() const { return ____b19_21; }
	inline uint8_t* get_address_of__b19_21() { return &____b19_21; }
	inline void set__b19_21(uint8_t value)
	{
		____b19_21 = value;
	}

	inline static int32_t get_offset_of__b20_22() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b20_22)); }
	inline uint8_t get__b20_22() const { return ____b20_22; }
	inline uint8_t* get_address_of__b20_22() { return &____b20_22; }
	inline void set__b20_22(uint8_t value)
	{
		____b20_22 = value;
	}

	inline static int32_t get_offset_of__b21_23() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b21_23)); }
	inline uint8_t get__b21_23() const { return ____b21_23; }
	inline uint8_t* get_address_of__b21_23() { return &____b21_23; }
	inline void set__b21_23(uint8_t value)
	{
		____b21_23 = value;
	}

	inline static int32_t get_offset_of__b22_24() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b22_24)); }
	inline uint8_t get__b22_24() const { return ____b22_24; }
	inline uint8_t* get_address_of__b22_24() { return &____b22_24; }
	inline void set__b22_24(uint8_t value)
	{
		____b22_24 = value;
	}

	inline static int32_t get_offset_of__b23_25() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b23_25)); }
	inline uint8_t get__b23_25() const { return ____b23_25; }
	inline uint8_t* get_address_of__b23_25() { return &____b23_25; }
	inline void set__b23_25(uint8_t value)
	{
		____b23_25 = value;
	}

	inline static int32_t get_offset_of__b24_26() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b24_26)); }
	inline uint8_t get__b24_26() const { return ____b24_26; }
	inline uint8_t* get_address_of__b24_26() { return &____b24_26; }
	inline void set__b24_26(uint8_t value)
	{
		____b24_26 = value;
	}

	inline static int32_t get_offset_of__b25_27() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b25_27)); }
	inline uint8_t get__b25_27() const { return ____b25_27; }
	inline uint8_t* get_address_of__b25_27() { return &____b25_27; }
	inline void set__b25_27(uint8_t value)
	{
		____b25_27 = value;
	}

	inline static int32_t get_offset_of__b26_28() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b26_28)); }
	inline uint8_t get__b26_28() const { return ____b26_28; }
	inline uint8_t* get_address_of__b26_28() { return &____b26_28; }
	inline void set__b26_28(uint8_t value)
	{
		____b26_28 = value;
	}

	inline static int32_t get_offset_of__b27_29() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b27_29)); }
	inline uint8_t get__b27_29() const { return ____b27_29; }
	inline uint8_t* get_address_of__b27_29() { return &____b27_29; }
	inline void set__b27_29(uint8_t value)
	{
		____b27_29 = value;
	}

	inline static int32_t get_offset_of__b28_30() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b28_30)); }
	inline uint8_t get__b28_30() const { return ____b28_30; }
	inline uint8_t* get_address_of__b28_30() { return &____b28_30; }
	inline void set__b28_30(uint8_t value)
	{
		____b28_30 = value;
	}

	inline static int32_t get_offset_of__b29_31() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b29_31)); }
	inline uint8_t get__b29_31() const { return ____b29_31; }
	inline uint8_t* get_address_of__b29_31() { return &____b29_31; }
	inline void set__b29_31(uint8_t value)
	{
		____b29_31 = value;
	}

	inline static int32_t get_offset_of__b30_32() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b30_32)); }
	inline uint8_t get__b30_32() const { return ____b30_32; }
	inline uint8_t* get_address_of__b30_32() { return &____b30_32; }
	inline void set__b30_32(uint8_t value)
	{
		____b30_32 = value;
	}

	inline static int32_t get_offset_of__b31_33() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b31_33)); }
	inline uint8_t get__b31_33() const { return ____b31_33; }
	inline uint8_t* get_address_of__b31_33() { return &____b31_33; }
	inline void set__b31_33(uint8_t value)
	{
		____b31_33 = value;
	}

	inline static int32_t get_offset_of__b32_34() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b32_34)); }
	inline uint8_t get__b32_34() const { return ____b32_34; }
	inline uint8_t* get_address_of__b32_34() { return &____b32_34; }
	inline void set__b32_34(uint8_t value)
	{
		____b32_34 = value;
	}

	inline static int32_t get_offset_of__b33_35() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b33_35)); }
	inline uint8_t get__b33_35() const { return ____b33_35; }
	inline uint8_t* get_address_of__b33_35() { return &____b33_35; }
	inline void set__b33_35(uint8_t value)
	{
		____b33_35 = value;
	}

	inline static int32_t get_offset_of__b34_36() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b34_36)); }
	inline uint8_t get__b34_36() const { return ____b34_36; }
	inline uint8_t* get_address_of__b34_36() { return &____b34_36; }
	inline void set__b34_36(uint8_t value)
	{
		____b34_36 = value;
	}

	inline static int32_t get_offset_of__b35_37() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b35_37)); }
	inline uint8_t get__b35_37() const { return ____b35_37; }
	inline uint8_t* get_address_of__b35_37() { return &____b35_37; }
	inline void set__b35_37(uint8_t value)
	{
		____b35_37 = value;
	}

	inline static int32_t get_offset_of__b36_38() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b36_38)); }
	inline uint8_t get__b36_38() const { return ____b36_38; }
	inline uint8_t* get_address_of__b36_38() { return &____b36_38; }
	inline void set__b36_38(uint8_t value)
	{
		____b36_38 = value;
	}

	inline static int32_t get_offset_of__b37_39() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b37_39)); }
	inline uint8_t get__b37_39() const { return ____b37_39; }
	inline uint8_t* get_address_of__b37_39() { return &____b37_39; }
	inline void set__b37_39(uint8_t value)
	{
		____b37_39 = value;
	}

	inline static int32_t get_offset_of__b38_40() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b38_40)); }
	inline uint8_t get__b38_40() const { return ____b38_40; }
	inline uint8_t* get_address_of__b38_40() { return &____b38_40; }
	inline void set__b38_40(uint8_t value)
	{
		____b38_40 = value;
	}

	inline static int32_t get_offset_of__b39_41() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b39_41)); }
	inline uint8_t get__b39_41() const { return ____b39_41; }
	inline uint8_t* get_address_of__b39_41() { return &____b39_41; }
	inline void set__b39_41(uint8_t value)
	{
		____b39_41 = value;
	}

	inline static int32_t get_offset_of__b40_42() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b40_42)); }
	inline uint8_t get__b40_42() const { return ____b40_42; }
	inline uint8_t* get_address_of__b40_42() { return &____b40_42; }
	inline void set__b40_42(uint8_t value)
	{
		____b40_42 = value;
	}

	inline static int32_t get_offset_of__b41_43() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b41_43)); }
	inline uint8_t get__b41_43() const { return ____b41_43; }
	inline uint8_t* get_address_of__b41_43() { return &____b41_43; }
	inline void set__b41_43(uint8_t value)
	{
		____b41_43 = value;
	}

	inline static int32_t get_offset_of__b42_44() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b42_44)); }
	inline uint8_t get__b42_44() const { return ____b42_44; }
	inline uint8_t* get_address_of__b42_44() { return &____b42_44; }
	inline void set__b42_44(uint8_t value)
	{
		____b42_44 = value;
	}

	inline static int32_t get_offset_of__b43_45() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b43_45)); }
	inline uint8_t get__b43_45() const { return ____b43_45; }
	inline uint8_t* get_address_of__b43_45() { return &____b43_45; }
	inline void set__b43_45(uint8_t value)
	{
		____b43_45 = value;
	}

	inline static int32_t get_offset_of__b44_46() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b44_46)); }
	inline uint8_t get__b44_46() const { return ____b44_46; }
	inline uint8_t* get_address_of__b44_46() { return &____b44_46; }
	inline void set__b44_46(uint8_t value)
	{
		____b44_46 = value;
	}

	inline static int32_t get_offset_of__b45_47() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b45_47)); }
	inline uint8_t get__b45_47() const { return ____b45_47; }
	inline uint8_t* get_address_of__b45_47() { return &____b45_47; }
	inline void set__b45_47(uint8_t value)
	{
		____b45_47 = value;
	}

	inline static int32_t get_offset_of__b46_48() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b46_48)); }
	inline uint8_t get__b46_48() const { return ____b46_48; }
	inline uint8_t* get_address_of__b46_48() { return &____b46_48; }
	inline void set__b46_48(uint8_t value)
	{
		____b46_48 = value;
	}

	inline static int32_t get_offset_of__b47_49() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b47_49)); }
	inline uint8_t get__b47_49() const { return ____b47_49; }
	inline uint8_t* get_address_of__b47_49() { return &____b47_49; }
	inline void set__b47_49(uint8_t value)
	{
		____b47_49 = value;
	}

	inline static int32_t get_offset_of__b48_50() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b48_50)); }
	inline uint8_t get__b48_50() const { return ____b48_50; }
	inline uint8_t* get_address_of__b48_50() { return &____b48_50; }
	inline void set__b48_50(uint8_t value)
	{
		____b48_50 = value;
	}

	inline static int32_t get_offset_of__b49_51() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b49_51)); }
	inline uint8_t get__b49_51() const { return ____b49_51; }
	inline uint8_t* get_address_of__b49_51() { return &____b49_51; }
	inline void set__b49_51(uint8_t value)
	{
		____b49_51 = value;
	}

	inline static int32_t get_offset_of__b50_52() { return static_cast<int32_t>(offsetof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437, ____b50_52)); }
	inline uint8_t get__b50_52() const { return ____b50_52; }
	inline uint8_t* get_address_of__b50_52() { return &____b50_52; }
	inline void set__b50_52(uint8_t value)
	{
		____b50_52 = value;
	}
};

// Native definition for P/Invoke marshalling of System.NumberBuffer
struct NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437_marshaled_pinvoke
{
	int32_t ___Scale_0;
	int32_t ___IsNegative_1;
	uint8_t ____b0_2;
	uint8_t ____b1_3;
	uint8_t ____b2_4;
	uint8_t ____b3_5;
	uint8_t ____b4_6;
	uint8_t ____b5_7;
	uint8_t ____b6_8;
	uint8_t ____b7_9;
	uint8_t ____b8_10;
	uint8_t ____b9_11;
	uint8_t ____b10_12;
	uint8_t ____b11_13;
	uint8_t ____b12_14;
	uint8_t ____b13_15;
	uint8_t ____b14_16;
	uint8_t ____b15_17;
	uint8_t ____b16_18;
	uint8_t ____b17_19;
	uint8_t ____b18_20;
	uint8_t ____b19_21;
	uint8_t ____b20_22;
	uint8_t ____b21_23;
	uint8_t ____b22_24;
	uint8_t ____b23_25;
	uint8_t ____b24_26;
	uint8_t ____b25_27;
	uint8_t ____b26_28;
	uint8_t ____b27_29;
	uint8_t ____b28_30;
	uint8_t ____b29_31;
	uint8_t ____b30_32;
	uint8_t ____b31_33;
	uint8_t ____b32_34;
	uint8_t ____b33_35;
	uint8_t ____b34_36;
	uint8_t ____b35_37;
	uint8_t ____b36_38;
	uint8_t ____b37_39;
	uint8_t ____b38_40;
	uint8_t ____b39_41;
	uint8_t ____b40_42;
	uint8_t ____b41_43;
	uint8_t ____b42_44;
	uint8_t ____b43_45;
	uint8_t ____b44_46;
	uint8_t ____b45_47;
	uint8_t ____b46_48;
	uint8_t ____b47_49;
	uint8_t ____b48_50;
	uint8_t ____b49_51;
	uint8_t ____b50_52;
};
// Native definition for COM marshalling of System.NumberBuffer
struct NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437_marshaled_com
{
	int32_t ___Scale_0;
	int32_t ___IsNegative_1;
	uint8_t ____b0_2;
	uint8_t ____b1_3;
	uint8_t ____b2_4;
	uint8_t ____b3_5;
	uint8_t ____b4_6;
	uint8_t ____b5_7;
	uint8_t ____b6_8;
	uint8_t ____b7_9;
	uint8_t ____b8_10;
	uint8_t ____b9_11;
	uint8_t ____b10_12;
	uint8_t ____b11_13;
	uint8_t ____b12_14;
	uint8_t ____b13_15;
	uint8_t ____b14_16;
	uint8_t ____b15_17;
	uint8_t ____b16_18;
	uint8_t ____b17_19;
	uint8_t ____b18_20;
	uint8_t ____b19_21;
	uint8_t ____b20_22;
	uint8_t ____b21_23;
	uint8_t ____b22_24;
	uint8_t ____b23_25;
	uint8_t ____b24_26;
	uint8_t ____b25_27;
	uint8_t ____b26_28;
	uint8_t ____b27_29;
	uint8_t ____b28_30;
	uint8_t ____b29_31;
	uint8_t ____b30_32;
	uint8_t ____b31_33;
	uint8_t ____b32_34;
	uint8_t ____b33_35;
	uint8_t ____b34_36;
	uint8_t ____b35_37;
	uint8_t ____b36_38;
	uint8_t ____b37_39;
	uint8_t ____b38_40;
	uint8_t ____b39_41;
	uint8_t ____b40_42;
	uint8_t ____b41_43;
	uint8_t ____b42_44;
	uint8_t ____b43_45;
	uint8_t ____b44_46;
	uint8_t ____b45_47;
	uint8_t ____b46_48;
	uint8_t ____b47_49;
	uint8_t ____b48_50;
	uint8_t ____b49_51;
	uint8_t ____b50_52;
};

// System.Numerics.Register
struct Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte System.Numerics.Register::byte_0
			uint8_t ___byte_0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___byte_0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_1_1_OffsetPadding[1];
			// System.Byte System.Numerics.Register::byte_1
			uint8_t ___byte_1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___byte_1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_2_2_OffsetPadding[2];
			// System.Byte System.Numerics.Register::byte_2
			uint8_t ___byte_2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___byte_2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_3_3_OffsetPadding[3];
			// System.Byte System.Numerics.Register::byte_3
			uint8_t ___byte_3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___byte_3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_4_4_OffsetPadding[4];
			// System.Byte System.Numerics.Register::byte_4
			uint8_t ___byte_4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_4_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___byte_4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_5_5_OffsetPadding[5];
			// System.Byte System.Numerics.Register::byte_5
			uint8_t ___byte_5_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_5_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___byte_5_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_6_6_OffsetPadding[6];
			// System.Byte System.Numerics.Register::byte_6
			uint8_t ___byte_6_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_6_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___byte_6_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_7_7_OffsetPadding[7];
			// System.Byte System.Numerics.Register::byte_7
			uint8_t ___byte_7_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_7_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___byte_7_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_8_8_OffsetPadding[8];
			// System.Byte System.Numerics.Register::byte_8
			uint8_t ___byte_8_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_8_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___byte_8_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_9_9_OffsetPadding[9];
			// System.Byte System.Numerics.Register::byte_9
			uint8_t ___byte_9_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_9_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___byte_9_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_10_10_OffsetPadding[10];
			// System.Byte System.Numerics.Register::byte_10
			uint8_t ___byte_10_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_10_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___byte_10_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_11_11_OffsetPadding[11];
			// System.Byte System.Numerics.Register::byte_11
			uint8_t ___byte_11_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_11_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___byte_11_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_12_12_OffsetPadding[12];
			// System.Byte System.Numerics.Register::byte_12
			uint8_t ___byte_12_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_12_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___byte_12_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_13_13_OffsetPadding[13];
			// System.Byte System.Numerics.Register::byte_13
			uint8_t ___byte_13_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_13_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___byte_13_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_14_14_OffsetPadding[14];
			// System.Byte System.Numerics.Register::byte_14
			uint8_t ___byte_14_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_14_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___byte_14_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_15_15_OffsetPadding[15];
			// System.Byte System.Numerics.Register::byte_15
			uint8_t ___byte_15_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_15_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___byte_15_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte System.Numerics.Register::sbyte_0
			int8_t ___sbyte_0_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___sbyte_0_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_1_17_OffsetPadding[1];
			// System.SByte System.Numerics.Register::sbyte_1
			int8_t ___sbyte_1_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_1_17_OffsetPadding_forAlignmentOnly[1];
			int8_t ___sbyte_1_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_2_18_OffsetPadding[2];
			// System.SByte System.Numerics.Register::sbyte_2
			int8_t ___sbyte_2_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_2_18_OffsetPadding_forAlignmentOnly[2];
			int8_t ___sbyte_2_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_3_19_OffsetPadding[3];
			// System.SByte System.Numerics.Register::sbyte_3
			int8_t ___sbyte_3_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_3_19_OffsetPadding_forAlignmentOnly[3];
			int8_t ___sbyte_3_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_4_20_OffsetPadding[4];
			// System.SByte System.Numerics.Register::sbyte_4
			int8_t ___sbyte_4_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_4_20_OffsetPadding_forAlignmentOnly[4];
			int8_t ___sbyte_4_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_5_21_OffsetPadding[5];
			// System.SByte System.Numerics.Register::sbyte_5
			int8_t ___sbyte_5_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_5_21_OffsetPadding_forAlignmentOnly[5];
			int8_t ___sbyte_5_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_6_22_OffsetPadding[6];
			// System.SByte System.Numerics.Register::sbyte_6
			int8_t ___sbyte_6_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_6_22_OffsetPadding_forAlignmentOnly[6];
			int8_t ___sbyte_6_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_7_23_OffsetPadding[7];
			// System.SByte System.Numerics.Register::sbyte_7
			int8_t ___sbyte_7_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_7_23_OffsetPadding_forAlignmentOnly[7];
			int8_t ___sbyte_7_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_8_24_OffsetPadding[8];
			// System.SByte System.Numerics.Register::sbyte_8
			int8_t ___sbyte_8_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_8_24_OffsetPadding_forAlignmentOnly[8];
			int8_t ___sbyte_8_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_9_25_OffsetPadding[9];
			// System.SByte System.Numerics.Register::sbyte_9
			int8_t ___sbyte_9_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_9_25_OffsetPadding_forAlignmentOnly[9];
			int8_t ___sbyte_9_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_10_26_OffsetPadding[10];
			// System.SByte System.Numerics.Register::sbyte_10
			int8_t ___sbyte_10_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_10_26_OffsetPadding_forAlignmentOnly[10];
			int8_t ___sbyte_10_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_11_27_OffsetPadding[11];
			// System.SByte System.Numerics.Register::sbyte_11
			int8_t ___sbyte_11_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_11_27_OffsetPadding_forAlignmentOnly[11];
			int8_t ___sbyte_11_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_12_28_OffsetPadding[12];
			// System.SByte System.Numerics.Register::sbyte_12
			int8_t ___sbyte_12_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_12_28_OffsetPadding_forAlignmentOnly[12];
			int8_t ___sbyte_12_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_13_29_OffsetPadding[13];
			// System.SByte System.Numerics.Register::sbyte_13
			int8_t ___sbyte_13_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_13_29_OffsetPadding_forAlignmentOnly[13];
			int8_t ___sbyte_13_29_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_14_30_OffsetPadding[14];
			// System.SByte System.Numerics.Register::sbyte_14
			int8_t ___sbyte_14_30;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_14_30_OffsetPadding_forAlignmentOnly[14];
			int8_t ___sbyte_14_30_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_15_31_OffsetPadding[15];
			// System.SByte System.Numerics.Register::sbyte_15
			int8_t ___sbyte_15_31;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_15_31_OffsetPadding_forAlignmentOnly[15];
			int8_t ___sbyte_15_31_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt16 System.Numerics.Register::uint16_0
			uint16_t ___uint16_0_32;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___uint16_0_32_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_1_33_OffsetPadding[2];
			// System.UInt16 System.Numerics.Register::uint16_1
			uint16_t ___uint16_1_33;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_1_33_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___uint16_1_33_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_2_34_OffsetPadding[4];
			// System.UInt16 System.Numerics.Register::uint16_2
			uint16_t ___uint16_2_34;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_2_34_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___uint16_2_34_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_3_35_OffsetPadding[6];
			// System.UInt16 System.Numerics.Register::uint16_3
			uint16_t ___uint16_3_35;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_3_35_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___uint16_3_35_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_4_36_OffsetPadding[8];
			// System.UInt16 System.Numerics.Register::uint16_4
			uint16_t ___uint16_4_36;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_4_36_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___uint16_4_36_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_5_37_OffsetPadding[10];
			// System.UInt16 System.Numerics.Register::uint16_5
			uint16_t ___uint16_5_37;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_5_37_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___uint16_5_37_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_6_38_OffsetPadding[12];
			// System.UInt16 System.Numerics.Register::uint16_6
			uint16_t ___uint16_6_38;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_6_38_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___uint16_6_38_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_7_39_OffsetPadding[14];
			// System.UInt16 System.Numerics.Register::uint16_7
			uint16_t ___uint16_7_39;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_7_39_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___uint16_7_39_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 System.Numerics.Register::int16_0
			int16_t ___int16_0_40;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___int16_0_40_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_1_41_OffsetPadding[2];
			// System.Int16 System.Numerics.Register::int16_1
			int16_t ___int16_1_41;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_1_41_OffsetPadding_forAlignmentOnly[2];
			int16_t ___int16_1_41_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_2_42_OffsetPadding[4];
			// System.Int16 System.Numerics.Register::int16_2
			int16_t ___int16_2_42;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_2_42_OffsetPadding_forAlignmentOnly[4];
			int16_t ___int16_2_42_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_3_43_OffsetPadding[6];
			// System.Int16 System.Numerics.Register::int16_3
			int16_t ___int16_3_43;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_3_43_OffsetPadding_forAlignmentOnly[6];
			int16_t ___int16_3_43_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_4_44_OffsetPadding[8];
			// System.Int16 System.Numerics.Register::int16_4
			int16_t ___int16_4_44;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_4_44_OffsetPadding_forAlignmentOnly[8];
			int16_t ___int16_4_44_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_5_45_OffsetPadding[10];
			// System.Int16 System.Numerics.Register::int16_5
			int16_t ___int16_5_45;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_5_45_OffsetPadding_forAlignmentOnly[10];
			int16_t ___int16_5_45_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_6_46_OffsetPadding[12];
			// System.Int16 System.Numerics.Register::int16_6
			int16_t ___int16_6_46;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_6_46_OffsetPadding_forAlignmentOnly[12];
			int16_t ___int16_6_46_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_7_47_OffsetPadding[14];
			// System.Int16 System.Numerics.Register::int16_7
			int16_t ___int16_7_47;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_7_47_OffsetPadding_forAlignmentOnly[14];
			int16_t ___int16_7_47_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 System.Numerics.Register::uint32_0
			uint32_t ___uint32_0_48;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___uint32_0_48_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_1_49_OffsetPadding[4];
			// System.UInt32 System.Numerics.Register::uint32_1
			uint32_t ___uint32_1_49;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_1_49_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___uint32_1_49_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_2_50_OffsetPadding[8];
			// System.UInt32 System.Numerics.Register::uint32_2
			uint32_t ___uint32_2_50;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_2_50_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___uint32_2_50_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_3_51_OffsetPadding[12];
			// System.UInt32 System.Numerics.Register::uint32_3
			uint32_t ___uint32_3_51;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_3_51_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___uint32_3_51_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Numerics.Register::int32_0
			int32_t ___int32_0_52;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___int32_0_52_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_1_53_OffsetPadding[4];
			// System.Int32 System.Numerics.Register::int32_1
			int32_t ___int32_1_53;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_1_53_OffsetPadding_forAlignmentOnly[4];
			int32_t ___int32_1_53_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_2_54_OffsetPadding[8];
			// System.Int32 System.Numerics.Register::int32_2
			int32_t ___int32_2_54;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_2_54_OffsetPadding_forAlignmentOnly[8];
			int32_t ___int32_2_54_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_3_55_OffsetPadding[12];
			// System.Int32 System.Numerics.Register::int32_3
			int32_t ___int32_3_55;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_3_55_OffsetPadding_forAlignmentOnly[12];
			int32_t ___int32_3_55_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 System.Numerics.Register::uint64_0
			uint64_t ___uint64_0_56;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___uint64_0_56_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint64_1_57_OffsetPadding[8];
			// System.UInt64 System.Numerics.Register::uint64_1
			uint64_t ___uint64_1_57;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint64_1_57_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___uint64_1_57_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 System.Numerics.Register::int64_0
			int64_t ___int64_0_58;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___int64_0_58_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int64_1_59_OffsetPadding[8];
			// System.Int64 System.Numerics.Register::int64_1
			int64_t ___int64_1_59;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int64_1_59_OffsetPadding_forAlignmentOnly[8];
			int64_t ___int64_1_59_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single System.Numerics.Register::single_0
			float ___single_0_60;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___single_0_60_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_1_61_OffsetPadding[4];
			// System.Single System.Numerics.Register::single_1
			float ___single_1_61;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_1_61_OffsetPadding_forAlignmentOnly[4];
			float ___single_1_61_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_2_62_OffsetPadding[8];
			// System.Single System.Numerics.Register::single_2
			float ___single_2_62;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_2_62_OffsetPadding_forAlignmentOnly[8];
			float ___single_2_62_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_3_63_OffsetPadding[12];
			// System.Single System.Numerics.Register::single_3
			float ___single_3_63;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_3_63_OffsetPadding_forAlignmentOnly[12];
			float ___single_3_63_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double System.Numerics.Register::double_0
			double ___double_0_64;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___double_0_64_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___double_1_65_OffsetPadding[8];
			// System.Double System.Numerics.Register::double_1
			double ___double_1_65;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___double_1_65_OffsetPadding_forAlignmentOnly[8];
			double ___double_1_65_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_byte_0_0() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___byte_0_0)); }
	inline uint8_t get_byte_0_0() const { return ___byte_0_0; }
	inline uint8_t* get_address_of_byte_0_0() { return &___byte_0_0; }
	inline void set_byte_0_0(uint8_t value)
	{
		___byte_0_0 = value;
	}

	inline static int32_t get_offset_of_byte_1_1() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___byte_1_1)); }
	inline uint8_t get_byte_1_1() const { return ___byte_1_1; }
	inline uint8_t* get_address_of_byte_1_1() { return &___byte_1_1; }
	inline void set_byte_1_1(uint8_t value)
	{
		___byte_1_1 = value;
	}

	inline static int32_t get_offset_of_byte_2_2() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___byte_2_2)); }
	inline uint8_t get_byte_2_2() const { return ___byte_2_2; }
	inline uint8_t* get_address_of_byte_2_2() { return &___byte_2_2; }
	inline void set_byte_2_2(uint8_t value)
	{
		___byte_2_2 = value;
	}

	inline static int32_t get_offset_of_byte_3_3() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___byte_3_3)); }
	inline uint8_t get_byte_3_3() const { return ___byte_3_3; }
	inline uint8_t* get_address_of_byte_3_3() { return &___byte_3_3; }
	inline void set_byte_3_3(uint8_t value)
	{
		___byte_3_3 = value;
	}

	inline static int32_t get_offset_of_byte_4_4() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___byte_4_4)); }
	inline uint8_t get_byte_4_4() const { return ___byte_4_4; }
	inline uint8_t* get_address_of_byte_4_4() { return &___byte_4_4; }
	inline void set_byte_4_4(uint8_t value)
	{
		___byte_4_4 = value;
	}

	inline static int32_t get_offset_of_byte_5_5() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___byte_5_5)); }
	inline uint8_t get_byte_5_5() const { return ___byte_5_5; }
	inline uint8_t* get_address_of_byte_5_5() { return &___byte_5_5; }
	inline void set_byte_5_5(uint8_t value)
	{
		___byte_5_5 = value;
	}

	inline static int32_t get_offset_of_byte_6_6() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___byte_6_6)); }
	inline uint8_t get_byte_6_6() const { return ___byte_6_6; }
	inline uint8_t* get_address_of_byte_6_6() { return &___byte_6_6; }
	inline void set_byte_6_6(uint8_t value)
	{
		___byte_6_6 = value;
	}

	inline static int32_t get_offset_of_byte_7_7() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___byte_7_7)); }
	inline uint8_t get_byte_7_7() const { return ___byte_7_7; }
	inline uint8_t* get_address_of_byte_7_7() { return &___byte_7_7; }
	inline void set_byte_7_7(uint8_t value)
	{
		___byte_7_7 = value;
	}

	inline static int32_t get_offset_of_byte_8_8() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___byte_8_8)); }
	inline uint8_t get_byte_8_8() const { return ___byte_8_8; }
	inline uint8_t* get_address_of_byte_8_8() { return &___byte_8_8; }
	inline void set_byte_8_8(uint8_t value)
	{
		___byte_8_8 = value;
	}

	inline static int32_t get_offset_of_byte_9_9() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___byte_9_9)); }
	inline uint8_t get_byte_9_9() const { return ___byte_9_9; }
	inline uint8_t* get_address_of_byte_9_9() { return &___byte_9_9; }
	inline void set_byte_9_9(uint8_t value)
	{
		___byte_9_9 = value;
	}

	inline static int32_t get_offset_of_byte_10_10() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___byte_10_10)); }
	inline uint8_t get_byte_10_10() const { return ___byte_10_10; }
	inline uint8_t* get_address_of_byte_10_10() { return &___byte_10_10; }
	inline void set_byte_10_10(uint8_t value)
	{
		___byte_10_10 = value;
	}

	inline static int32_t get_offset_of_byte_11_11() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___byte_11_11)); }
	inline uint8_t get_byte_11_11() const { return ___byte_11_11; }
	inline uint8_t* get_address_of_byte_11_11() { return &___byte_11_11; }
	inline void set_byte_11_11(uint8_t value)
	{
		___byte_11_11 = value;
	}

	inline static int32_t get_offset_of_byte_12_12() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___byte_12_12)); }
	inline uint8_t get_byte_12_12() const { return ___byte_12_12; }
	inline uint8_t* get_address_of_byte_12_12() { return &___byte_12_12; }
	inline void set_byte_12_12(uint8_t value)
	{
		___byte_12_12 = value;
	}

	inline static int32_t get_offset_of_byte_13_13() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___byte_13_13)); }
	inline uint8_t get_byte_13_13() const { return ___byte_13_13; }
	inline uint8_t* get_address_of_byte_13_13() { return &___byte_13_13; }
	inline void set_byte_13_13(uint8_t value)
	{
		___byte_13_13 = value;
	}

	inline static int32_t get_offset_of_byte_14_14() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___byte_14_14)); }
	inline uint8_t get_byte_14_14() const { return ___byte_14_14; }
	inline uint8_t* get_address_of_byte_14_14() { return &___byte_14_14; }
	inline void set_byte_14_14(uint8_t value)
	{
		___byte_14_14 = value;
	}

	inline static int32_t get_offset_of_byte_15_15() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___byte_15_15)); }
	inline uint8_t get_byte_15_15() const { return ___byte_15_15; }
	inline uint8_t* get_address_of_byte_15_15() { return &___byte_15_15; }
	inline void set_byte_15_15(uint8_t value)
	{
		___byte_15_15 = value;
	}

	inline static int32_t get_offset_of_sbyte_0_16() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___sbyte_0_16)); }
	inline int8_t get_sbyte_0_16() const { return ___sbyte_0_16; }
	inline int8_t* get_address_of_sbyte_0_16() { return &___sbyte_0_16; }
	inline void set_sbyte_0_16(int8_t value)
	{
		___sbyte_0_16 = value;
	}

	inline static int32_t get_offset_of_sbyte_1_17() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___sbyte_1_17)); }
	inline int8_t get_sbyte_1_17() const { return ___sbyte_1_17; }
	inline int8_t* get_address_of_sbyte_1_17() { return &___sbyte_1_17; }
	inline void set_sbyte_1_17(int8_t value)
	{
		___sbyte_1_17 = value;
	}

	inline static int32_t get_offset_of_sbyte_2_18() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___sbyte_2_18)); }
	inline int8_t get_sbyte_2_18() const { return ___sbyte_2_18; }
	inline int8_t* get_address_of_sbyte_2_18() { return &___sbyte_2_18; }
	inline void set_sbyte_2_18(int8_t value)
	{
		___sbyte_2_18 = value;
	}

	inline static int32_t get_offset_of_sbyte_3_19() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___sbyte_3_19)); }
	inline int8_t get_sbyte_3_19() const { return ___sbyte_3_19; }
	inline int8_t* get_address_of_sbyte_3_19() { return &___sbyte_3_19; }
	inline void set_sbyte_3_19(int8_t value)
	{
		___sbyte_3_19 = value;
	}

	inline static int32_t get_offset_of_sbyte_4_20() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___sbyte_4_20)); }
	inline int8_t get_sbyte_4_20() const { return ___sbyte_4_20; }
	inline int8_t* get_address_of_sbyte_4_20() { return &___sbyte_4_20; }
	inline void set_sbyte_4_20(int8_t value)
	{
		___sbyte_4_20 = value;
	}

	inline static int32_t get_offset_of_sbyte_5_21() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___sbyte_5_21)); }
	inline int8_t get_sbyte_5_21() const { return ___sbyte_5_21; }
	inline int8_t* get_address_of_sbyte_5_21() { return &___sbyte_5_21; }
	inline void set_sbyte_5_21(int8_t value)
	{
		___sbyte_5_21 = value;
	}

	inline static int32_t get_offset_of_sbyte_6_22() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___sbyte_6_22)); }
	inline int8_t get_sbyte_6_22() const { return ___sbyte_6_22; }
	inline int8_t* get_address_of_sbyte_6_22() { return &___sbyte_6_22; }
	inline void set_sbyte_6_22(int8_t value)
	{
		___sbyte_6_22 = value;
	}

	inline static int32_t get_offset_of_sbyte_7_23() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___sbyte_7_23)); }
	inline int8_t get_sbyte_7_23() const { return ___sbyte_7_23; }
	inline int8_t* get_address_of_sbyte_7_23() { return &___sbyte_7_23; }
	inline void set_sbyte_7_23(int8_t value)
	{
		___sbyte_7_23 = value;
	}

	inline static int32_t get_offset_of_sbyte_8_24() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___sbyte_8_24)); }
	inline int8_t get_sbyte_8_24() const { return ___sbyte_8_24; }
	inline int8_t* get_address_of_sbyte_8_24() { return &___sbyte_8_24; }
	inline void set_sbyte_8_24(int8_t value)
	{
		___sbyte_8_24 = value;
	}

	inline static int32_t get_offset_of_sbyte_9_25() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___sbyte_9_25)); }
	inline int8_t get_sbyte_9_25() const { return ___sbyte_9_25; }
	inline int8_t* get_address_of_sbyte_9_25() { return &___sbyte_9_25; }
	inline void set_sbyte_9_25(int8_t value)
	{
		___sbyte_9_25 = value;
	}

	inline static int32_t get_offset_of_sbyte_10_26() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___sbyte_10_26)); }
	inline int8_t get_sbyte_10_26() const { return ___sbyte_10_26; }
	inline int8_t* get_address_of_sbyte_10_26() { return &___sbyte_10_26; }
	inline void set_sbyte_10_26(int8_t value)
	{
		___sbyte_10_26 = value;
	}

	inline static int32_t get_offset_of_sbyte_11_27() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___sbyte_11_27)); }
	inline int8_t get_sbyte_11_27() const { return ___sbyte_11_27; }
	inline int8_t* get_address_of_sbyte_11_27() { return &___sbyte_11_27; }
	inline void set_sbyte_11_27(int8_t value)
	{
		___sbyte_11_27 = value;
	}

	inline static int32_t get_offset_of_sbyte_12_28() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___sbyte_12_28)); }
	inline int8_t get_sbyte_12_28() const { return ___sbyte_12_28; }
	inline int8_t* get_address_of_sbyte_12_28() { return &___sbyte_12_28; }
	inline void set_sbyte_12_28(int8_t value)
	{
		___sbyte_12_28 = value;
	}

	inline static int32_t get_offset_of_sbyte_13_29() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___sbyte_13_29)); }
	inline int8_t get_sbyte_13_29() const { return ___sbyte_13_29; }
	inline int8_t* get_address_of_sbyte_13_29() { return &___sbyte_13_29; }
	inline void set_sbyte_13_29(int8_t value)
	{
		___sbyte_13_29 = value;
	}

	inline static int32_t get_offset_of_sbyte_14_30() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___sbyte_14_30)); }
	inline int8_t get_sbyte_14_30() const { return ___sbyte_14_30; }
	inline int8_t* get_address_of_sbyte_14_30() { return &___sbyte_14_30; }
	inline void set_sbyte_14_30(int8_t value)
	{
		___sbyte_14_30 = value;
	}

	inline static int32_t get_offset_of_sbyte_15_31() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___sbyte_15_31)); }
	inline int8_t get_sbyte_15_31() const { return ___sbyte_15_31; }
	inline int8_t* get_address_of_sbyte_15_31() { return &___sbyte_15_31; }
	inline void set_sbyte_15_31(int8_t value)
	{
		___sbyte_15_31 = value;
	}

	inline static int32_t get_offset_of_uint16_0_32() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___uint16_0_32)); }
	inline uint16_t get_uint16_0_32() const { return ___uint16_0_32; }
	inline uint16_t* get_address_of_uint16_0_32() { return &___uint16_0_32; }
	inline void set_uint16_0_32(uint16_t value)
	{
		___uint16_0_32 = value;
	}

	inline static int32_t get_offset_of_uint16_1_33() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___uint16_1_33)); }
	inline uint16_t get_uint16_1_33() const { return ___uint16_1_33; }
	inline uint16_t* get_address_of_uint16_1_33() { return &___uint16_1_33; }
	inline void set_uint16_1_33(uint16_t value)
	{
		___uint16_1_33 = value;
	}

	inline static int32_t get_offset_of_uint16_2_34() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___uint16_2_34)); }
	inline uint16_t get_uint16_2_34() const { return ___uint16_2_34; }
	inline uint16_t* get_address_of_uint16_2_34() { return &___uint16_2_34; }
	inline void set_uint16_2_34(uint16_t value)
	{
		___uint16_2_34 = value;
	}

	inline static int32_t get_offset_of_uint16_3_35() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___uint16_3_35)); }
	inline uint16_t get_uint16_3_35() const { return ___uint16_3_35; }
	inline uint16_t* get_address_of_uint16_3_35() { return &___uint16_3_35; }
	inline void set_uint16_3_35(uint16_t value)
	{
		___uint16_3_35 = value;
	}

	inline static int32_t get_offset_of_uint16_4_36() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___uint16_4_36)); }
	inline uint16_t get_uint16_4_36() const { return ___uint16_4_36; }
	inline uint16_t* get_address_of_uint16_4_36() { return &___uint16_4_36; }
	inline void set_uint16_4_36(uint16_t value)
	{
		___uint16_4_36 = value;
	}

	inline static int32_t get_offset_of_uint16_5_37() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___uint16_5_37)); }
	inline uint16_t get_uint16_5_37() const { return ___uint16_5_37; }
	inline uint16_t* get_address_of_uint16_5_37() { return &___uint16_5_37; }
	inline void set_uint16_5_37(uint16_t value)
	{
		___uint16_5_37 = value;
	}

	inline static int32_t get_offset_of_uint16_6_38() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___uint16_6_38)); }
	inline uint16_t get_uint16_6_38() const { return ___uint16_6_38; }
	inline uint16_t* get_address_of_uint16_6_38() { return &___uint16_6_38; }
	inline void set_uint16_6_38(uint16_t value)
	{
		___uint16_6_38 = value;
	}

	inline static int32_t get_offset_of_uint16_7_39() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___uint16_7_39)); }
	inline uint16_t get_uint16_7_39() const { return ___uint16_7_39; }
	inline uint16_t* get_address_of_uint16_7_39() { return &___uint16_7_39; }
	inline void set_uint16_7_39(uint16_t value)
	{
		___uint16_7_39 = value;
	}

	inline static int32_t get_offset_of_int16_0_40() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___int16_0_40)); }
	inline int16_t get_int16_0_40() const { return ___int16_0_40; }
	inline int16_t* get_address_of_int16_0_40() { return &___int16_0_40; }
	inline void set_int16_0_40(int16_t value)
	{
		___int16_0_40 = value;
	}

	inline static int32_t get_offset_of_int16_1_41() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___int16_1_41)); }
	inline int16_t get_int16_1_41() const { return ___int16_1_41; }
	inline int16_t* get_address_of_int16_1_41() { return &___int16_1_41; }
	inline void set_int16_1_41(int16_t value)
	{
		___int16_1_41 = value;
	}

	inline static int32_t get_offset_of_int16_2_42() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___int16_2_42)); }
	inline int16_t get_int16_2_42() const { return ___int16_2_42; }
	inline int16_t* get_address_of_int16_2_42() { return &___int16_2_42; }
	inline void set_int16_2_42(int16_t value)
	{
		___int16_2_42 = value;
	}

	inline static int32_t get_offset_of_int16_3_43() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___int16_3_43)); }
	inline int16_t get_int16_3_43() const { return ___int16_3_43; }
	inline int16_t* get_address_of_int16_3_43() { return &___int16_3_43; }
	inline void set_int16_3_43(int16_t value)
	{
		___int16_3_43 = value;
	}

	inline static int32_t get_offset_of_int16_4_44() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___int16_4_44)); }
	inline int16_t get_int16_4_44() const { return ___int16_4_44; }
	inline int16_t* get_address_of_int16_4_44() { return &___int16_4_44; }
	inline void set_int16_4_44(int16_t value)
	{
		___int16_4_44 = value;
	}

	inline static int32_t get_offset_of_int16_5_45() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___int16_5_45)); }
	inline int16_t get_int16_5_45() const { return ___int16_5_45; }
	inline int16_t* get_address_of_int16_5_45() { return &___int16_5_45; }
	inline void set_int16_5_45(int16_t value)
	{
		___int16_5_45 = value;
	}

	inline static int32_t get_offset_of_int16_6_46() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___int16_6_46)); }
	inline int16_t get_int16_6_46() const { return ___int16_6_46; }
	inline int16_t* get_address_of_int16_6_46() { return &___int16_6_46; }
	inline void set_int16_6_46(int16_t value)
	{
		___int16_6_46 = value;
	}

	inline static int32_t get_offset_of_int16_7_47() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___int16_7_47)); }
	inline int16_t get_int16_7_47() const { return ___int16_7_47; }
	inline int16_t* get_address_of_int16_7_47() { return &___int16_7_47; }
	inline void set_int16_7_47(int16_t value)
	{
		___int16_7_47 = value;
	}

	inline static int32_t get_offset_of_uint32_0_48() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___uint32_0_48)); }
	inline uint32_t get_uint32_0_48() const { return ___uint32_0_48; }
	inline uint32_t* get_address_of_uint32_0_48() { return &___uint32_0_48; }
	inline void set_uint32_0_48(uint32_t value)
	{
		___uint32_0_48 = value;
	}

	inline static int32_t get_offset_of_uint32_1_49() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___uint32_1_49)); }
	inline uint32_t get_uint32_1_49() const { return ___uint32_1_49; }
	inline uint32_t* get_address_of_uint32_1_49() { return &___uint32_1_49; }
	inline void set_uint32_1_49(uint32_t value)
	{
		___uint32_1_49 = value;
	}

	inline static int32_t get_offset_of_uint32_2_50() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___uint32_2_50)); }
	inline uint32_t get_uint32_2_50() const { return ___uint32_2_50; }
	inline uint32_t* get_address_of_uint32_2_50() { return &___uint32_2_50; }
	inline void set_uint32_2_50(uint32_t value)
	{
		___uint32_2_50 = value;
	}

	inline static int32_t get_offset_of_uint32_3_51() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___uint32_3_51)); }
	inline uint32_t get_uint32_3_51() const { return ___uint32_3_51; }
	inline uint32_t* get_address_of_uint32_3_51() { return &___uint32_3_51; }
	inline void set_uint32_3_51(uint32_t value)
	{
		___uint32_3_51 = value;
	}

	inline static int32_t get_offset_of_int32_0_52() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___int32_0_52)); }
	inline int32_t get_int32_0_52() const { return ___int32_0_52; }
	inline int32_t* get_address_of_int32_0_52() { return &___int32_0_52; }
	inline void set_int32_0_52(int32_t value)
	{
		___int32_0_52 = value;
	}

	inline static int32_t get_offset_of_int32_1_53() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___int32_1_53)); }
	inline int32_t get_int32_1_53() const { return ___int32_1_53; }
	inline int32_t* get_address_of_int32_1_53() { return &___int32_1_53; }
	inline void set_int32_1_53(int32_t value)
	{
		___int32_1_53 = value;
	}

	inline static int32_t get_offset_of_int32_2_54() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___int32_2_54)); }
	inline int32_t get_int32_2_54() const { return ___int32_2_54; }
	inline int32_t* get_address_of_int32_2_54() { return &___int32_2_54; }
	inline void set_int32_2_54(int32_t value)
	{
		___int32_2_54 = value;
	}

	inline static int32_t get_offset_of_int32_3_55() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___int32_3_55)); }
	inline int32_t get_int32_3_55() const { return ___int32_3_55; }
	inline int32_t* get_address_of_int32_3_55() { return &___int32_3_55; }
	inline void set_int32_3_55(int32_t value)
	{
		___int32_3_55 = value;
	}

	inline static int32_t get_offset_of_uint64_0_56() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___uint64_0_56)); }
	inline uint64_t get_uint64_0_56() const { return ___uint64_0_56; }
	inline uint64_t* get_address_of_uint64_0_56() { return &___uint64_0_56; }
	inline void set_uint64_0_56(uint64_t value)
	{
		___uint64_0_56 = value;
	}

	inline static int32_t get_offset_of_uint64_1_57() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___uint64_1_57)); }
	inline uint64_t get_uint64_1_57() const { return ___uint64_1_57; }
	inline uint64_t* get_address_of_uint64_1_57() { return &___uint64_1_57; }
	inline void set_uint64_1_57(uint64_t value)
	{
		___uint64_1_57 = value;
	}

	inline static int32_t get_offset_of_int64_0_58() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___int64_0_58)); }
	inline int64_t get_int64_0_58() const { return ___int64_0_58; }
	inline int64_t* get_address_of_int64_0_58() { return &___int64_0_58; }
	inline void set_int64_0_58(int64_t value)
	{
		___int64_0_58 = value;
	}

	inline static int32_t get_offset_of_int64_1_59() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___int64_1_59)); }
	inline int64_t get_int64_1_59() const { return ___int64_1_59; }
	inline int64_t* get_address_of_int64_1_59() { return &___int64_1_59; }
	inline void set_int64_1_59(int64_t value)
	{
		___int64_1_59 = value;
	}

	inline static int32_t get_offset_of_single_0_60() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___single_0_60)); }
	inline float get_single_0_60() const { return ___single_0_60; }
	inline float* get_address_of_single_0_60() { return &___single_0_60; }
	inline void set_single_0_60(float value)
	{
		___single_0_60 = value;
	}

	inline static int32_t get_offset_of_single_1_61() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___single_1_61)); }
	inline float get_single_1_61() const { return ___single_1_61; }
	inline float* get_address_of_single_1_61() { return &___single_1_61; }
	inline void set_single_1_61(float value)
	{
		___single_1_61 = value;
	}

	inline static int32_t get_offset_of_single_2_62() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___single_2_62)); }
	inline float get_single_2_62() const { return ___single_2_62; }
	inline float* get_address_of_single_2_62() { return &___single_2_62; }
	inline void set_single_2_62(float value)
	{
		___single_2_62 = value;
	}

	inline static int32_t get_offset_of_single_3_63() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___single_3_63)); }
	inline float get_single_3_63() const { return ___single_3_63; }
	inline float* get_address_of_single_3_63() { return &___single_3_63; }
	inline void set_single_3_63(float value)
	{
		___single_3_63 = value;
	}

	inline static int32_t get_offset_of_double_0_64() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___double_0_64)); }
	inline double get_double_0_64() const { return ___double_0_64; }
	inline double* get_address_of_double_0_64() { return &___double_0_64; }
	inline void set_double_0_64(double value)
	{
		___double_0_64 = value;
	}

	inline static int32_t get_offset_of_double_1_65() { return static_cast<int32_t>(offsetof(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B, ___double_1_65)); }
	inline double get_double_1_65() const { return ___double_1_65; }
	inline double* get_address_of_double_1_65() { return &___double_1_65; }
	inline void set_double_1_65(double value)
	{
		___double_1_65 = value;
	}
};


// System.SByte
struct SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
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

// System.Buffers.StandardFormat
struct StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12 
{
public:
	// System.Byte System.Buffers.StandardFormat::_format
	uint8_t ____format_0;
	// System.Byte System.Buffers.StandardFormat::_precision
	uint8_t ____precision_1;

public:
	inline static int32_t get_offset_of__format_0() { return static_cast<int32_t>(offsetof(StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12, ____format_0)); }
	inline uint8_t get__format_0() const { return ____format_0; }
	inline uint8_t* get_address_of__format_0() { return &____format_0; }
	inline void set__format_0(uint8_t value)
	{
		____format_0 = value;
	}

	inline static int32_t get_offset_of__precision_1() { return static_cast<int32_t>(offsetof(StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12, ____precision_1)); }
	inline uint8_t get__precision_1() const { return ____precision_1; }
	inline uint8_t* get_address_of__precision_1() { return &____precision_1; }
	inline void set__precision_1(uint8_t value)
	{
		____precision_1 = value;
	}
};


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.UIntPtr
struct UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline uintptr_t get_Zero_0() const { return ___Zero_0; }
	inline uintptr_t* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(uintptr_t value)
	{
		___Zero_0 = value;
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


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=15
struct __StaticArrayInitTypeSizeU3D15_tFDD1A816369AE084F22FD29F078F73F333A12342 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D15_tFDD1A816369AE084F22FD29F078F73F333A12342__padding[15];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=240
struct __StaticArrayInitTypeSizeU3D240_t86A6BCDBD123AE0F7213756E09A85BA83830F606 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D240_t86A6BCDBD123AE0F7213756E09A85BA83830F606__padding[240];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256
struct __StaticArrayInitTypeSizeU3D256_t0E3B36448CAF2F56AD31DFBEBE04B27795E0031F 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_t0E3B36448CAF2F56AD31DFBEBE04B27795E0031F__padding[256];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28
struct __StaticArrayInitTypeSizeU3D28_t8A0E932C0F84B32323B1BAA3A8ACB60527E611CC 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D28_t8A0E932C0F84B32323B1BAA3A8ACB60527E611CC__padding[28];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=336
struct __StaticArrayInitTypeSizeU3D336_tC86079EE10CB2CCB1ACD8062F312444799F42389 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D336_tC86079EE10CB2CCB1ACD8062F312444799F42389__padding[336];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=42
struct __StaticArrayInitTypeSizeU3D42_t6B99FFC41ABCD9C00B7389925465667BDEB4F35A 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D42_t6B99FFC41ABCD9C00B7389925465667BDEB4F35A__padding[42];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48
struct __StaticArrayInitTypeSizeU3D48_t35EB075E355448543434E39F679FD52347B0395D 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D48_t35EB075E355448543434E39F679FD52347B0395D__padding[48];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52
struct __StaticArrayInitTypeSizeU3D52_tFEE7AE3A3BDBFAE41EED8530A55ACF71D299BF31 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D52_tFEE7AE3A3BDBFAE41EED8530A55ACF71D299BF31__padding[52];
	};

public:
};


// System.SpanHelpers/Reg16
struct Reg16_t8B2CE150B820232BE56C005C405133CCA7A58CD4 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Reg16_t8B2CE150B820232BE56C005C405133CCA7A58CD4__padding[16];
	};

public:
};


// System.SpanHelpers/Reg32
struct Reg32_tA8676F8C245F150C7985C4A3BC3CD44E58D3B923 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Reg32_tA8676F8C245F150C7985C4A3BC3CD44E58D3B923__padding[32];
	};

public:
};


// System.SpanHelpers/Reg64
struct Reg64_t4A40DA33D6F4C8FB3A17A3B3D9E6FB5B1FEEE9B3 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Reg64_t4A40DA33D6F4C8FB3A17A3B3D9E6FB5B1FEEE9B3__padding[64];
	};

public:
};


// System.Buffers.ReadOnlySequence`1<System.Char>
struct ReadOnlySequence_1_tC3D00D191DBB156549182F67D40D3919D974CF7D 
{
public:
	// System.SequencePosition System.Buffers.ReadOnlySequence`1::_sequenceStart
	SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A  ____sequenceStart_0;
	// System.SequencePosition System.Buffers.ReadOnlySequence`1::_sequenceEnd
	SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A  ____sequenceEnd_1;

public:
	inline static int32_t get_offset_of__sequenceStart_0() { return static_cast<int32_t>(offsetof(ReadOnlySequence_1_tC3D00D191DBB156549182F67D40D3919D974CF7D, ____sequenceStart_0)); }
	inline SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A  get__sequenceStart_0() const { return ____sequenceStart_0; }
	inline SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A * get_address_of__sequenceStart_0() { return &____sequenceStart_0; }
	inline void set__sequenceStart_0(SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A  value)
	{
		____sequenceStart_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____sequenceStart_0))->____object_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__sequenceEnd_1() { return static_cast<int32_t>(offsetof(ReadOnlySequence_1_tC3D00D191DBB156549182F67D40D3919D974CF7D, ____sequenceEnd_1)); }
	inline SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A  get__sequenceEnd_1() const { return ____sequenceEnd_1; }
	inline SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A * get_address_of__sequenceEnd_1() { return &____sequenceEnd_1; }
	inline void set__sequenceEnd_1(SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A  value)
	{
		____sequenceEnd_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____sequenceEnd_1))->____object_0), (void*)NULL);
	}
};

struct ReadOnlySequence_1_tC3D00D191DBB156549182F67D40D3919D974CF7D_StaticFields
{
public:
	// System.Buffers.ReadOnlySequence`1<T> System.Buffers.ReadOnlySequence`1::Empty
	ReadOnlySequence_1_tC3D00D191DBB156549182F67D40D3919D974CF7D  ___Empty_2;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(ReadOnlySequence_1_tC3D00D191DBB156549182F67D40D3919D974CF7D_StaticFields, ___Empty_2)); }
	inline ReadOnlySequence_1_tC3D00D191DBB156549182F67D40D3919D974CF7D  get_Empty_2() const { return ___Empty_2; }
	inline ReadOnlySequence_1_tC3D00D191DBB156549182F67D40D3919D974CF7D * get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(ReadOnlySequence_1_tC3D00D191DBB156549182F67D40D3919D974CF7D  value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Empty_2))->____sequenceStart_0))->____object_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Empty_2))->____sequenceEnd_1))->____object_0), (void*)NULL);
		#endif
	}
};


// System.ReadOnlySpan`1<System.Byte>
struct ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 
{
public:
	// System.Pinnable`1<T> System.ReadOnlySpan`1::_pinnable
	Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 * ____pinnable_0;
	// System.IntPtr System.ReadOnlySpan`1::_byteOffset
	intptr_t ____byteOffset_1;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_2;

public:
	inline static int32_t get_offset_of__pinnable_0() { return static_cast<int32_t>(offsetof(ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726, ____pinnable_0)); }
	inline Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 * get__pinnable_0() const { return ____pinnable_0; }
	inline Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 ** get_address_of__pinnable_0() { return &____pinnable_0; }
	inline void set__pinnable_0(Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 * value)
	{
		____pinnable_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pinnable_0), (void*)value);
	}

	inline static int32_t get_offset_of__byteOffset_1() { return static_cast<int32_t>(offsetof(ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726, ____byteOffset_1)); }
	inline intptr_t get__byteOffset_1() const { return ____byteOffset_1; }
	inline intptr_t* get_address_of__byteOffset_1() { return &____byteOffset_1; }
	inline void set__byteOffset_1(intptr_t value)
	{
		____byteOffset_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726, ____length_2)); }
	inline int32_t get__length_2() const { return ____length_2; }
	inline int32_t* get_address_of__length_2() { return &____length_2; }
	inline void set__length_2(int32_t value)
	{
		____length_2 = value;
	}
};


// System.Span`1<System.Byte>
struct Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 
{
public:
	// System.Pinnable`1<T> System.Span`1::_pinnable
	Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 * ____pinnable_0;
	// System.IntPtr System.Span`1::_byteOffset
	intptr_t ____byteOffset_1;
	// System.Int32 System.Span`1::_length
	int32_t ____length_2;

public:
	inline static int32_t get_offset_of__pinnable_0() { return static_cast<int32_t>(offsetof(Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83, ____pinnable_0)); }
	inline Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 * get__pinnable_0() const { return ____pinnable_0; }
	inline Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 ** get_address_of__pinnable_0() { return &____pinnable_0; }
	inline void set__pinnable_0(Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 * value)
	{
		____pinnable_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pinnable_0), (void*)value);
	}

	inline static int32_t get_offset_of__byteOffset_1() { return static_cast<int32_t>(offsetof(Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83, ____byteOffset_1)); }
	inline intptr_t get__byteOffset_1() const { return ____byteOffset_1; }
	inline intptr_t* get_address_of__byteOffset_1() { return &____byteOffset_1; }
	inline void set__byteOffset_1(intptr_t value)
	{
		____byteOffset_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83, ____length_2)); }
	inline int32_t get__length_2() const { return ____length_2; }
	inline int32_t* get_address_of__length_2() { return &____length_2; }
	inline void set__length_2(int32_t value)
	{
		____length_2 = value;
	}
};


// System.Numerics.Vector`1<System.Byte>
struct Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08 
{
public:
	// System.Numerics.Register System.Numerics.Vector`1::register
	Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B  ___register_0;

public:
	inline static int32_t get_offset_of_register_0() { return static_cast<int32_t>(offsetof(Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08, ___register_0)); }
	inline Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B  get_register_0() const { return ___register_0; }
	inline Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B * get_address_of_register_0() { return &___register_0; }
	inline void set_register_0(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B  value)
	{
		___register_0 = value;
	}
};

struct Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08_StaticFields
{
public:
	// System.Int32 System.Numerics.Vector`1::s_count
	int32_t ___s_count_1;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::zero
	Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  ___zero_2;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::one
	Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  ___one_3;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::allOnes
	Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  ___allOnes_4;

public:
	inline static int32_t get_offset_of_s_count_1() { return static_cast<int32_t>(offsetof(Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08_StaticFields, ___s_count_1)); }
	inline int32_t get_s_count_1() const { return ___s_count_1; }
	inline int32_t* get_address_of_s_count_1() { return &___s_count_1; }
	inline void set_s_count_1(int32_t value)
	{
		___s_count_1 = value;
	}

	inline static int32_t get_offset_of_zero_2() { return static_cast<int32_t>(offsetof(Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08_StaticFields, ___zero_2)); }
	inline Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  get_zero_2() const { return ___zero_2; }
	inline Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08 * get_address_of_zero_2() { return &___zero_2; }
	inline void set_zero_2(Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  value)
	{
		___zero_2 = value;
	}

	inline static int32_t get_offset_of_one_3() { return static_cast<int32_t>(offsetof(Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08_StaticFields, ___one_3)); }
	inline Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  get_one_3() const { return ___one_3; }
	inline Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08 * get_address_of_one_3() { return &___one_3; }
	inline void set_one_3(Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  value)
	{
		___one_3 = value;
	}

	inline static int32_t get_offset_of_allOnes_4() { return static_cast<int32_t>(offsetof(Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08_StaticFields, ___allOnes_4)); }
	inline Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  get_allOnes_4() const { return ___allOnes_4; }
	inline Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08 * get_address_of_allOnes_4() { return &___allOnes_4; }
	inline void set_allOnes_4(Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  value)
	{
		___allOnes_4 = value;
	}
};


// System.Numerics.Vector`1<System.UInt16>
struct Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC 
{
public:
	// System.Numerics.Register System.Numerics.Vector`1::register
	Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B  ___register_0;

public:
	inline static int32_t get_offset_of_register_0() { return static_cast<int32_t>(offsetof(Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC, ___register_0)); }
	inline Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B  get_register_0() const { return ___register_0; }
	inline Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B * get_address_of_register_0() { return &___register_0; }
	inline void set_register_0(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B  value)
	{
		___register_0 = value;
	}
};

struct Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC_StaticFields
{
public:
	// System.Int32 System.Numerics.Vector`1::s_count
	int32_t ___s_count_1;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::zero
	Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  ___zero_2;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::one
	Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  ___one_3;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::allOnes
	Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  ___allOnes_4;

public:
	inline static int32_t get_offset_of_s_count_1() { return static_cast<int32_t>(offsetof(Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC_StaticFields, ___s_count_1)); }
	inline int32_t get_s_count_1() const { return ___s_count_1; }
	inline int32_t* get_address_of_s_count_1() { return &___s_count_1; }
	inline void set_s_count_1(int32_t value)
	{
		___s_count_1 = value;
	}

	inline static int32_t get_offset_of_zero_2() { return static_cast<int32_t>(offsetof(Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC_StaticFields, ___zero_2)); }
	inline Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  get_zero_2() const { return ___zero_2; }
	inline Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC * get_address_of_zero_2() { return &___zero_2; }
	inline void set_zero_2(Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  value)
	{
		___zero_2 = value;
	}

	inline static int32_t get_offset_of_one_3() { return static_cast<int32_t>(offsetof(Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC_StaticFields, ___one_3)); }
	inline Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  get_one_3() const { return ___one_3; }
	inline Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC * get_address_of_one_3() { return &___one_3; }
	inline void set_one_3(Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  value)
	{
		___one_3 = value;
	}

	inline static int32_t get_offset_of_allOnes_4() { return static_cast<int32_t>(offsetof(Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC_StaticFields, ___allOnes_4)); }
	inline Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  get_allOnes_4() const { return ___allOnes_4; }
	inline Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC * get_address_of_allOnes_4() { return &___allOnes_4; }
	inline void set_allOnes_4(Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  value)
	{
		___allOnes_4 = value;
	}
};


// System.Numerics.Vector`1<System.UInt32>
struct Vector_1_tF47DE392A41397C167EDBF371E6B4E8AA79D7030 
{
public:
	// System.Numerics.Register System.Numerics.Vector`1::register
	Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B  ___register_0;

public:
	inline static int32_t get_offset_of_register_0() { return static_cast<int32_t>(offsetof(Vector_1_tF47DE392A41397C167EDBF371E6B4E8AA79D7030, ___register_0)); }
	inline Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B  get_register_0() const { return ___register_0; }
	inline Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B * get_address_of_register_0() { return &___register_0; }
	inline void set_register_0(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B  value)
	{
		___register_0 = value;
	}
};

struct Vector_1_tF47DE392A41397C167EDBF371E6B4E8AA79D7030_StaticFields
{
public:
	// System.Int32 System.Numerics.Vector`1::s_count
	int32_t ___s_count_1;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::zero
	Vector_1_tF47DE392A41397C167EDBF371E6B4E8AA79D7030  ___zero_2;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::one
	Vector_1_tF47DE392A41397C167EDBF371E6B4E8AA79D7030  ___one_3;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::allOnes
	Vector_1_tF47DE392A41397C167EDBF371E6B4E8AA79D7030  ___allOnes_4;

public:
	inline static int32_t get_offset_of_s_count_1() { return static_cast<int32_t>(offsetof(Vector_1_tF47DE392A41397C167EDBF371E6B4E8AA79D7030_StaticFields, ___s_count_1)); }
	inline int32_t get_s_count_1() const { return ___s_count_1; }
	inline int32_t* get_address_of_s_count_1() { return &___s_count_1; }
	inline void set_s_count_1(int32_t value)
	{
		___s_count_1 = value;
	}

	inline static int32_t get_offset_of_zero_2() { return static_cast<int32_t>(offsetof(Vector_1_tF47DE392A41397C167EDBF371E6B4E8AA79D7030_StaticFields, ___zero_2)); }
	inline Vector_1_tF47DE392A41397C167EDBF371E6B4E8AA79D7030  get_zero_2() const { return ___zero_2; }
	inline Vector_1_tF47DE392A41397C167EDBF371E6B4E8AA79D7030 * get_address_of_zero_2() { return &___zero_2; }
	inline void set_zero_2(Vector_1_tF47DE392A41397C167EDBF371E6B4E8AA79D7030  value)
	{
		___zero_2 = value;
	}

	inline static int32_t get_offset_of_one_3() { return static_cast<int32_t>(offsetof(Vector_1_tF47DE392A41397C167EDBF371E6B4E8AA79D7030_StaticFields, ___one_3)); }
	inline Vector_1_tF47DE392A41397C167EDBF371E6B4E8AA79D7030  get_one_3() const { return ___one_3; }
	inline Vector_1_tF47DE392A41397C167EDBF371E6B4E8AA79D7030 * get_address_of_one_3() { return &___one_3; }
	inline void set_one_3(Vector_1_tF47DE392A41397C167EDBF371E6B4E8AA79D7030  value)
	{
		___one_3 = value;
	}

	inline static int32_t get_offset_of_allOnes_4() { return static_cast<int32_t>(offsetof(Vector_1_tF47DE392A41397C167EDBF371E6B4E8AA79D7030_StaticFields, ___allOnes_4)); }
	inline Vector_1_tF47DE392A41397C167EDBF371E6B4E8AA79D7030  get_allOnes_4() const { return ___allOnes_4; }
	inline Vector_1_tF47DE392A41397C167EDBF371E6B4E8AA79D7030 * get_address_of_allOnes_4() { return &___allOnes_4; }
	inline void set_allOnes_4(Vector_1_tF47DE392A41397C167EDBF371E6B4E8AA79D7030  value)
	{
		___allOnes_4 = value;
	}
};


// System.Numerics.Vector`1<System.UInt64>
struct Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B 
{
public:
	// System.Numerics.Register System.Numerics.Vector`1::register
	Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B  ___register_0;

public:
	inline static int32_t get_offset_of_register_0() { return static_cast<int32_t>(offsetof(Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B, ___register_0)); }
	inline Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B  get_register_0() const { return ___register_0; }
	inline Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B * get_address_of_register_0() { return &___register_0; }
	inline void set_register_0(Register_tF366152D918C68107E05D2B52D1E2FCD477BF89B  value)
	{
		___register_0 = value;
	}
};

struct Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B_StaticFields
{
public:
	// System.Int32 System.Numerics.Vector`1::s_count
	int32_t ___s_count_1;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::zero
	Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B  ___zero_2;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::one
	Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B  ___one_3;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::allOnes
	Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B  ___allOnes_4;

public:
	inline static int32_t get_offset_of_s_count_1() { return static_cast<int32_t>(offsetof(Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B_StaticFields, ___s_count_1)); }
	inline int32_t get_s_count_1() const { return ___s_count_1; }
	inline int32_t* get_address_of_s_count_1() { return &___s_count_1; }
	inline void set_s_count_1(int32_t value)
	{
		___s_count_1 = value;
	}

	inline static int32_t get_offset_of_zero_2() { return static_cast<int32_t>(offsetof(Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B_StaticFields, ___zero_2)); }
	inline Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B  get_zero_2() const { return ___zero_2; }
	inline Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B * get_address_of_zero_2() { return &___zero_2; }
	inline void set_zero_2(Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B  value)
	{
		___zero_2 = value;
	}

	inline static int32_t get_offset_of_one_3() { return static_cast<int32_t>(offsetof(Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B_StaticFields, ___one_3)); }
	inline Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B  get_one_3() const { return ___one_3; }
	inline Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B * get_address_of_one_3() { return &___one_3; }
	inline void set_one_3(Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B  value)
	{
		___one_3 = value;
	}

	inline static int32_t get_offset_of_allOnes_4() { return static_cast<int32_t>(offsetof(Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B_StaticFields, ___allOnes_4)); }
	inline Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B  get_allOnes_4() const { return ___allOnes_4; }
	inline Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B * get_address_of_allOnes_4() { return &___allOnes_4; }
	inline void set_allOnes_4(Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B  value)
	{
		___allOnes_4 = value;
	}
};


// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t2BE371A826DE714388CB1A6D368F18406BAB06B2  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t2BE371A826DE714388CB1A6D368F18406BAB06B2_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=336 <PrivateImplementationDetails>::2B2055E39CBB1C111FB5C1C05492B3E5AAC607ED
	__StaticArrayInitTypeSizeU3D336_tC86079EE10CB2CCB1ACD8062F312444799F42389  ___2B2055E39CBB1C111FB5C1C05492B3E5AAC607ED_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::3CDA7449B0586AB873C75C04BB11D4864F5D7392
	__StaticArrayInitTypeSizeU3D256_t0E3B36448CAF2F56AD31DFBEBE04B27795E0031F  ___3CDA7449B0586AB873C75C04BB11D4864F5D7392_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=240 <PrivateImplementationDetails>::608454F961E288A48E34666C94032BEDEFD399E1
	__StaticArrayInitTypeSizeU3D240_t86A6BCDBD123AE0F7213756E09A85BA83830F606  ___608454F961E288A48E34666C94032BEDEFD399E1_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::B8B960BE929E7BAB90AE2CAEF2468C56CD5414C1
	__StaticArrayInitTypeSizeU3D48_t35EB075E355448543434E39F679FD52347B0395D  ___B8B960BE929E7BAB90AE2CAEF2468C56CD5414C1_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::BD20BFA840DDF83194ECD4397DA071ECD4C1C72F
	__StaticArrayInitTypeSizeU3D28_t8A0E932C0F84B32323B1BAA3A8ACB60527E611CC  ___BD20BFA840DDF83194ECD4397DA071ECD4C1C72F_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=15 <PrivateImplementationDetails>::C3FB1115E83603E7E71244A6F2D43E22B790B5D1
	__StaticArrayInitTypeSizeU3D15_tFDD1A816369AE084F22FD29F078F73F333A12342  ___C3FB1115E83603E7E71244A6F2D43E22B790B5D1_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::C4C38BC485A320D4B7D737DB85E705077FA38BEF
	__StaticArrayInitTypeSizeU3D48_t35EB075E355448543434E39F679FD52347B0395D  ___C4C38BC485A320D4B7D737DB85E705077FA38BEF_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=42 <PrivateImplementationDetails>::DB5930245CE35BDE5EDC35035275D8DD55E139CF
	__StaticArrayInitTypeSizeU3D42_t6B99FFC41ABCD9C00B7389925465667BDEB4F35A  ___DB5930245CE35BDE5EDC35035275D8DD55E139CF_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::DD3AEFEADB1CD615F3017763F1568179FEE640B0
	__StaticArrayInitTypeSizeU3D52_tFEE7AE3A3BDBFAE41EED8530A55ACF71D299BF31  ___DD3AEFEADB1CD615F3017763F1568179FEE640B0_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::E92B39D8233061927D9ACDE54665E68E7535635A
	__StaticArrayInitTypeSizeU3D52_tFEE7AE3A3BDBFAE41EED8530A55ACF71D299BF31  ___E92B39D8233061927D9ACDE54665E68E7535635A_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::EE0B1C00D481FCA3559F2937C3DD3127C35B2FE3
	__StaticArrayInitTypeSizeU3D28_t8A0E932C0F84B32323B1BAA3A8ACB60527E611CC  ___EE0B1C00D481FCA3559F2937C3DD3127C35B2FE3_10;

public:
	inline static int32_t get_offset_of_U32B2055E39CBB1C111FB5C1C05492B3E5AAC607ED_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2BE371A826DE714388CB1A6D368F18406BAB06B2_StaticFields, ___2B2055E39CBB1C111FB5C1C05492B3E5AAC607ED_0)); }
	inline __StaticArrayInitTypeSizeU3D336_tC86079EE10CB2CCB1ACD8062F312444799F42389  get_U32B2055E39CBB1C111FB5C1C05492B3E5AAC607ED_0() const { return ___2B2055E39CBB1C111FB5C1C05492B3E5AAC607ED_0; }
	inline __StaticArrayInitTypeSizeU3D336_tC86079EE10CB2CCB1ACD8062F312444799F42389 * get_address_of_U32B2055E39CBB1C111FB5C1C05492B3E5AAC607ED_0() { return &___2B2055E39CBB1C111FB5C1C05492B3E5AAC607ED_0; }
	inline void set_U32B2055E39CBB1C111FB5C1C05492B3E5AAC607ED_0(__StaticArrayInitTypeSizeU3D336_tC86079EE10CB2CCB1ACD8062F312444799F42389  value)
	{
		___2B2055E39CBB1C111FB5C1C05492B3E5AAC607ED_0 = value;
	}

	inline static int32_t get_offset_of_U33CDA7449B0586AB873C75C04BB11D4864F5D7392_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2BE371A826DE714388CB1A6D368F18406BAB06B2_StaticFields, ___3CDA7449B0586AB873C75C04BB11D4864F5D7392_1)); }
	inline __StaticArrayInitTypeSizeU3D256_t0E3B36448CAF2F56AD31DFBEBE04B27795E0031F  get_U33CDA7449B0586AB873C75C04BB11D4864F5D7392_1() const { return ___3CDA7449B0586AB873C75C04BB11D4864F5D7392_1; }
	inline __StaticArrayInitTypeSizeU3D256_t0E3B36448CAF2F56AD31DFBEBE04B27795E0031F * get_address_of_U33CDA7449B0586AB873C75C04BB11D4864F5D7392_1() { return &___3CDA7449B0586AB873C75C04BB11D4864F5D7392_1; }
	inline void set_U33CDA7449B0586AB873C75C04BB11D4864F5D7392_1(__StaticArrayInitTypeSizeU3D256_t0E3B36448CAF2F56AD31DFBEBE04B27795E0031F  value)
	{
		___3CDA7449B0586AB873C75C04BB11D4864F5D7392_1 = value;
	}

	inline static int32_t get_offset_of_U3608454F961E288A48E34666C94032BEDEFD399E1_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2BE371A826DE714388CB1A6D368F18406BAB06B2_StaticFields, ___608454F961E288A48E34666C94032BEDEFD399E1_2)); }
	inline __StaticArrayInitTypeSizeU3D240_t86A6BCDBD123AE0F7213756E09A85BA83830F606  get_U3608454F961E288A48E34666C94032BEDEFD399E1_2() const { return ___608454F961E288A48E34666C94032BEDEFD399E1_2; }
	inline __StaticArrayInitTypeSizeU3D240_t86A6BCDBD123AE0F7213756E09A85BA83830F606 * get_address_of_U3608454F961E288A48E34666C94032BEDEFD399E1_2() { return &___608454F961E288A48E34666C94032BEDEFD399E1_2; }
	inline void set_U3608454F961E288A48E34666C94032BEDEFD399E1_2(__StaticArrayInitTypeSizeU3D240_t86A6BCDBD123AE0F7213756E09A85BA83830F606  value)
	{
		___608454F961E288A48E34666C94032BEDEFD399E1_2 = value;
	}

	inline static int32_t get_offset_of_B8B960BE929E7BAB90AE2CAEF2468C56CD5414C1_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2BE371A826DE714388CB1A6D368F18406BAB06B2_StaticFields, ___B8B960BE929E7BAB90AE2CAEF2468C56CD5414C1_3)); }
	inline __StaticArrayInitTypeSizeU3D48_t35EB075E355448543434E39F679FD52347B0395D  get_B8B960BE929E7BAB90AE2CAEF2468C56CD5414C1_3() const { return ___B8B960BE929E7BAB90AE2CAEF2468C56CD5414C1_3; }
	inline __StaticArrayInitTypeSizeU3D48_t35EB075E355448543434E39F679FD52347B0395D * get_address_of_B8B960BE929E7BAB90AE2CAEF2468C56CD5414C1_3() { return &___B8B960BE929E7BAB90AE2CAEF2468C56CD5414C1_3; }
	inline void set_B8B960BE929E7BAB90AE2CAEF2468C56CD5414C1_3(__StaticArrayInitTypeSizeU3D48_t35EB075E355448543434E39F679FD52347B0395D  value)
	{
		___B8B960BE929E7BAB90AE2CAEF2468C56CD5414C1_3 = value;
	}

	inline static int32_t get_offset_of_BD20BFA840DDF83194ECD4397DA071ECD4C1C72F_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2BE371A826DE714388CB1A6D368F18406BAB06B2_StaticFields, ___BD20BFA840DDF83194ECD4397DA071ECD4C1C72F_4)); }
	inline __StaticArrayInitTypeSizeU3D28_t8A0E932C0F84B32323B1BAA3A8ACB60527E611CC  get_BD20BFA840DDF83194ECD4397DA071ECD4C1C72F_4() const { return ___BD20BFA840DDF83194ECD4397DA071ECD4C1C72F_4; }
	inline __StaticArrayInitTypeSizeU3D28_t8A0E932C0F84B32323B1BAA3A8ACB60527E611CC * get_address_of_BD20BFA840DDF83194ECD4397DA071ECD4C1C72F_4() { return &___BD20BFA840DDF83194ECD4397DA071ECD4C1C72F_4; }
	inline void set_BD20BFA840DDF83194ECD4397DA071ECD4C1C72F_4(__StaticArrayInitTypeSizeU3D28_t8A0E932C0F84B32323B1BAA3A8ACB60527E611CC  value)
	{
		___BD20BFA840DDF83194ECD4397DA071ECD4C1C72F_4 = value;
	}

	inline static int32_t get_offset_of_C3FB1115E83603E7E71244A6F2D43E22B790B5D1_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2BE371A826DE714388CB1A6D368F18406BAB06B2_StaticFields, ___C3FB1115E83603E7E71244A6F2D43E22B790B5D1_5)); }
	inline __StaticArrayInitTypeSizeU3D15_tFDD1A816369AE084F22FD29F078F73F333A12342  get_C3FB1115E83603E7E71244A6F2D43E22B790B5D1_5() const { return ___C3FB1115E83603E7E71244A6F2D43E22B790B5D1_5; }
	inline __StaticArrayInitTypeSizeU3D15_tFDD1A816369AE084F22FD29F078F73F333A12342 * get_address_of_C3FB1115E83603E7E71244A6F2D43E22B790B5D1_5() { return &___C3FB1115E83603E7E71244A6F2D43E22B790B5D1_5; }
	inline void set_C3FB1115E83603E7E71244A6F2D43E22B790B5D1_5(__StaticArrayInitTypeSizeU3D15_tFDD1A816369AE084F22FD29F078F73F333A12342  value)
	{
		___C3FB1115E83603E7E71244A6F2D43E22B790B5D1_5 = value;
	}

	inline static int32_t get_offset_of_C4C38BC485A320D4B7D737DB85E705077FA38BEF_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2BE371A826DE714388CB1A6D368F18406BAB06B2_StaticFields, ___C4C38BC485A320D4B7D737DB85E705077FA38BEF_6)); }
	inline __StaticArrayInitTypeSizeU3D48_t35EB075E355448543434E39F679FD52347B0395D  get_C4C38BC485A320D4B7D737DB85E705077FA38BEF_6() const { return ___C4C38BC485A320D4B7D737DB85E705077FA38BEF_6; }
	inline __StaticArrayInitTypeSizeU3D48_t35EB075E355448543434E39F679FD52347B0395D * get_address_of_C4C38BC485A320D4B7D737DB85E705077FA38BEF_6() { return &___C4C38BC485A320D4B7D737DB85E705077FA38BEF_6; }
	inline void set_C4C38BC485A320D4B7D737DB85E705077FA38BEF_6(__StaticArrayInitTypeSizeU3D48_t35EB075E355448543434E39F679FD52347B0395D  value)
	{
		___C4C38BC485A320D4B7D737DB85E705077FA38BEF_6 = value;
	}

	inline static int32_t get_offset_of_DB5930245CE35BDE5EDC35035275D8DD55E139CF_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2BE371A826DE714388CB1A6D368F18406BAB06B2_StaticFields, ___DB5930245CE35BDE5EDC35035275D8DD55E139CF_7)); }
	inline __StaticArrayInitTypeSizeU3D42_t6B99FFC41ABCD9C00B7389925465667BDEB4F35A  get_DB5930245CE35BDE5EDC35035275D8DD55E139CF_7() const { return ___DB5930245CE35BDE5EDC35035275D8DD55E139CF_7; }
	inline __StaticArrayInitTypeSizeU3D42_t6B99FFC41ABCD9C00B7389925465667BDEB4F35A * get_address_of_DB5930245CE35BDE5EDC35035275D8DD55E139CF_7() { return &___DB5930245CE35BDE5EDC35035275D8DD55E139CF_7; }
	inline void set_DB5930245CE35BDE5EDC35035275D8DD55E139CF_7(__StaticArrayInitTypeSizeU3D42_t6B99FFC41ABCD9C00B7389925465667BDEB4F35A  value)
	{
		___DB5930245CE35BDE5EDC35035275D8DD55E139CF_7 = value;
	}

	inline static int32_t get_offset_of_DD3AEFEADB1CD615F3017763F1568179FEE640B0_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2BE371A826DE714388CB1A6D368F18406BAB06B2_StaticFields, ___DD3AEFEADB1CD615F3017763F1568179FEE640B0_8)); }
	inline __StaticArrayInitTypeSizeU3D52_tFEE7AE3A3BDBFAE41EED8530A55ACF71D299BF31  get_DD3AEFEADB1CD615F3017763F1568179FEE640B0_8() const { return ___DD3AEFEADB1CD615F3017763F1568179FEE640B0_8; }
	inline __StaticArrayInitTypeSizeU3D52_tFEE7AE3A3BDBFAE41EED8530A55ACF71D299BF31 * get_address_of_DD3AEFEADB1CD615F3017763F1568179FEE640B0_8() { return &___DD3AEFEADB1CD615F3017763F1568179FEE640B0_8; }
	inline void set_DD3AEFEADB1CD615F3017763F1568179FEE640B0_8(__StaticArrayInitTypeSizeU3D52_tFEE7AE3A3BDBFAE41EED8530A55ACF71D299BF31  value)
	{
		___DD3AEFEADB1CD615F3017763F1568179FEE640B0_8 = value;
	}

	inline static int32_t get_offset_of_E92B39D8233061927D9ACDE54665E68E7535635A_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2BE371A826DE714388CB1A6D368F18406BAB06B2_StaticFields, ___E92B39D8233061927D9ACDE54665E68E7535635A_9)); }
	inline __StaticArrayInitTypeSizeU3D52_tFEE7AE3A3BDBFAE41EED8530A55ACF71D299BF31  get_E92B39D8233061927D9ACDE54665E68E7535635A_9() const { return ___E92B39D8233061927D9ACDE54665E68E7535635A_9; }
	inline __StaticArrayInitTypeSizeU3D52_tFEE7AE3A3BDBFAE41EED8530A55ACF71D299BF31 * get_address_of_E92B39D8233061927D9ACDE54665E68E7535635A_9() { return &___E92B39D8233061927D9ACDE54665E68E7535635A_9; }
	inline void set_E92B39D8233061927D9ACDE54665E68E7535635A_9(__StaticArrayInitTypeSizeU3D52_tFEE7AE3A3BDBFAE41EED8530A55ACF71D299BF31  value)
	{
		___E92B39D8233061927D9ACDE54665E68E7535635A_9 = value;
	}

	inline static int32_t get_offset_of_EE0B1C00D481FCA3559F2937C3DD3127C35B2FE3_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2BE371A826DE714388CB1A6D368F18406BAB06B2_StaticFields, ___EE0B1C00D481FCA3559F2937C3DD3127C35B2FE3_10)); }
	inline __StaticArrayInitTypeSizeU3D28_t8A0E932C0F84B32323B1BAA3A8ACB60527E611CC  get_EE0B1C00D481FCA3559F2937C3DD3127C35B2FE3_10() const { return ___EE0B1C00D481FCA3559F2937C3DD3127C35B2FE3_10; }
	inline __StaticArrayInitTypeSizeU3D28_t8A0E932C0F84B32323B1BAA3A8ACB60527E611CC * get_address_of_EE0B1C00D481FCA3559F2937C3DD3127C35B2FE3_10() { return &___EE0B1C00D481FCA3559F2937C3DD3127C35B2FE3_10; }
	inline void set_EE0B1C00D481FCA3559F2937C3DD3127C35B2FE3_10(__StaticArrayInitTypeSizeU3D28_t8A0E932C0F84B32323B1BAA3A8ACB60527E611CC  value)
	{
		___EE0B1C00D481FCA3559F2937C3DD3127C35B2FE3_10 = value;
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
struct ExceptionArgument_t11B098DD9AD21AB015871A94DB7DC9A70A10509F 
{
public:
	// System.Int32 System.ExceptionArgument::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExceptionArgument_t11B098DD9AD21AB015871A94DB7DC9A70A10509F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MemoryExtensions
struct MemoryExtensions_t3692531D647148747BC65C4610E740AEE9983A40  : public RuntimeObject
{
public:

public:
};

struct MemoryExtensions_t3692531D647148747BC65C4610E740AEE9983A40_StaticFields
{
public:
	// System.IntPtr System.MemoryExtensions::StringAdjustment
	intptr_t ___StringAdjustment_0;

public:
	inline static int32_t get_offset_of_StringAdjustment_0() { return static_cast<int32_t>(offsetof(MemoryExtensions_t3692531D647148747BC65C4610E740AEE9983A40_StaticFields, ___StringAdjustment_0)); }
	inline intptr_t get_StringAdjustment_0() const { return ___StringAdjustment_0; }
	inline intptr_t* get_address_of_StringAdjustment_0() { return &___StringAdjustment_0; }
	inline void set_StringAdjustment_0(intptr_t value)
	{
		___StringAdjustment_0 = value;
	}
};


// System.Buffers.MemoryHandle
struct MemoryHandle_t32246FDA186EE62ADBC37E8AE98087BF6330429C 
{
public:
	// System.Void* System.Buffers.MemoryHandle::_pointer
	void* ____pointer_0;
	// System.Runtime.InteropServices.GCHandle System.Buffers.MemoryHandle::_handle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ____handle_1;
	// System.Buffers.IPinnable System.Buffers.MemoryHandle::_pinnable
	RuntimeObject* ____pinnable_2;

public:
	inline static int32_t get_offset_of__pointer_0() { return static_cast<int32_t>(offsetof(MemoryHandle_t32246FDA186EE62ADBC37E8AE98087BF6330429C, ____pointer_0)); }
	inline void* get__pointer_0() const { return ____pointer_0; }
	inline void** get_address_of__pointer_0() { return &____pointer_0; }
	inline void set__pointer_0(void* value)
	{
		____pointer_0 = value;
	}

	inline static int32_t get_offset_of__handle_1() { return static_cast<int32_t>(offsetof(MemoryHandle_t32246FDA186EE62ADBC37E8AE98087BF6330429C, ____handle_1)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get__handle_1() const { return ____handle_1; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of__handle_1() { return &____handle_1; }
	inline void set__handle_1(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		____handle_1 = value;
	}

	inline static int32_t get_offset_of__pinnable_2() { return static_cast<int32_t>(offsetof(MemoryHandle_t32246FDA186EE62ADBC37E8AE98087BF6330429C, ____pinnable_2)); }
	inline RuntimeObject* get__pinnable_2() const { return ____pinnable_2; }
	inline RuntimeObject** get_address_of__pinnable_2() { return &____pinnable_2; }
	inline void set__pinnable_2(RuntimeObject* value)
	{
		____pinnable_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pinnable_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Buffers.MemoryHandle
struct MemoryHandle_t32246FDA186EE62ADBC37E8AE98087BF6330429C_marshaled_pinvoke
{
	void* ____pointer_0;
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ____handle_1;
	RuntimeObject* ____pinnable_2;
};
// Native definition for COM marshalling of System.Buffers.MemoryHandle
struct MemoryHandle_t32246FDA186EE62ADBC37E8AE98087BF6330429C_marshaled_com
{
	void* ____pointer_0;
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ____handle_1;
	RuntimeObject* ____pinnable_2;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
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


// System.StringComparison
struct StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Resources.UltimateResourceFallbackLocation
struct UltimateResourceFallbackLocation_tA4EBEA627CD0C386314EBB60D7A4225C435D0F0B 
{
public:
	// System.Int32 System.Resources.UltimateResourceFallbackLocation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UltimateResourceFallbackLocation_tA4EBEA627CD0C386314EBB60D7A4225C435D0F0B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Buffers.Text.Utf8Parser/ParseNumberOptions
struct ParseNumberOptions_t7571ADB62B71A57E3A8D474B452069B0D13D2D97 
{
public:
	// System.Int32 System.Buffers.Text.Utf8Parser/ParseNumberOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParseNumberOptions_t7571ADB62B71A57E3A8D474B452069B0D13D2D97, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Resources.ResourceManager
struct ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A  : public RuntimeObject
{
public:
	// System.String System.Resources.ResourceManager::BaseNameField
	String_t* ___BaseNameField_0;
	// System.Collections.Hashtable System.Resources.ResourceManager::ResourceSets
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___ResourceSets_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet> System.Resources.ResourceManager::_resourceSets
	Dictionary_2_tF591ED968D904B93A92B04B711C65E797B9D6E5E * ____resourceSets_2;
	// System.String System.Resources.ResourceManager::moduleDir
	String_t* ___moduleDir_3;
	// System.Reflection.Assembly System.Resources.ResourceManager::MainAssembly
	Assembly_t * ___MainAssembly_4;
	// System.Type System.Resources.ResourceManager::_locationInfo
	Type_t * ____locationInfo_5;
	// System.Type System.Resources.ResourceManager::_userResourceSet
	Type_t * ____userResourceSet_6;
	// System.Globalization.CultureInfo System.Resources.ResourceManager::_neutralResourcesCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ____neutralResourcesCulture_7;
	// System.Resources.ResourceManager/CultureNameResourceSetPair System.Resources.ResourceManager::_lastUsedResourceCache
	CultureNameResourceSetPair_t7DF2947B0015A29C8148DB0F32695ECB59369A84 * ____lastUsedResourceCache_8;
	// System.Boolean System.Resources.ResourceManager::_ignoreCase
	bool ____ignoreCase_9;
	// System.Boolean System.Resources.ResourceManager::UseManifest
	bool ___UseManifest_10;
	// System.Boolean System.Resources.ResourceManager::UseSatelliteAssem
	bool ___UseSatelliteAssem_11;
	// System.Resources.UltimateResourceFallbackLocation System.Resources.ResourceManager::_fallbackLoc
	int32_t ____fallbackLoc_12;
	// System.Version System.Resources.ResourceManager::_satelliteContractVersion
	Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * ____satelliteContractVersion_13;
	// System.Boolean System.Resources.ResourceManager::_lookedForSatelliteContractVersion
	bool ____lookedForSatelliteContractVersion_14;
	// System.Reflection.Assembly System.Resources.ResourceManager::_callingAssembly
	Assembly_t * ____callingAssembly_15;
	// System.Reflection.RuntimeAssembly System.Resources.ResourceManager::m_callingAssembly
	RuntimeAssembly_t799877C849878A70E10D25C690D7B0476DAF0B56 * ___m_callingAssembly_16;
	// System.Resources.IResourceGroveler System.Resources.ResourceManager::resourceGroveler
	RuntimeObject* ___resourceGroveler_17;

public:
	inline static int32_t get_offset_of_BaseNameField_0() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ___BaseNameField_0)); }
	inline String_t* get_BaseNameField_0() const { return ___BaseNameField_0; }
	inline String_t** get_address_of_BaseNameField_0() { return &___BaseNameField_0; }
	inline void set_BaseNameField_0(String_t* value)
	{
		___BaseNameField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BaseNameField_0), (void*)value);
	}

	inline static int32_t get_offset_of_ResourceSets_1() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ___ResourceSets_1)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_ResourceSets_1() const { return ___ResourceSets_1; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_ResourceSets_1() { return &___ResourceSets_1; }
	inline void set_ResourceSets_1(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___ResourceSets_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ResourceSets_1), (void*)value);
	}

	inline static int32_t get_offset_of__resourceSets_2() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____resourceSets_2)); }
	inline Dictionary_2_tF591ED968D904B93A92B04B711C65E797B9D6E5E * get__resourceSets_2() const { return ____resourceSets_2; }
	inline Dictionary_2_tF591ED968D904B93A92B04B711C65E797B9D6E5E ** get_address_of__resourceSets_2() { return &____resourceSets_2; }
	inline void set__resourceSets_2(Dictionary_2_tF591ED968D904B93A92B04B711C65E797B9D6E5E * value)
	{
		____resourceSets_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____resourceSets_2), (void*)value);
	}

	inline static int32_t get_offset_of_moduleDir_3() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ___moduleDir_3)); }
	inline String_t* get_moduleDir_3() const { return ___moduleDir_3; }
	inline String_t** get_address_of_moduleDir_3() { return &___moduleDir_3; }
	inline void set_moduleDir_3(String_t* value)
	{
		___moduleDir_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moduleDir_3), (void*)value);
	}

	inline static int32_t get_offset_of_MainAssembly_4() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ___MainAssembly_4)); }
	inline Assembly_t * get_MainAssembly_4() const { return ___MainAssembly_4; }
	inline Assembly_t ** get_address_of_MainAssembly_4() { return &___MainAssembly_4; }
	inline void set_MainAssembly_4(Assembly_t * value)
	{
		___MainAssembly_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MainAssembly_4), (void*)value);
	}

	inline static int32_t get_offset_of__locationInfo_5() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____locationInfo_5)); }
	inline Type_t * get__locationInfo_5() const { return ____locationInfo_5; }
	inline Type_t ** get_address_of__locationInfo_5() { return &____locationInfo_5; }
	inline void set__locationInfo_5(Type_t * value)
	{
		____locationInfo_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____locationInfo_5), (void*)value);
	}

	inline static int32_t get_offset_of__userResourceSet_6() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____userResourceSet_6)); }
	inline Type_t * get__userResourceSet_6() const { return ____userResourceSet_6; }
	inline Type_t ** get_address_of__userResourceSet_6() { return &____userResourceSet_6; }
	inline void set__userResourceSet_6(Type_t * value)
	{
		____userResourceSet_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____userResourceSet_6), (void*)value);
	}

	inline static int32_t get_offset_of__neutralResourcesCulture_7() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____neutralResourcesCulture_7)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get__neutralResourcesCulture_7() const { return ____neutralResourcesCulture_7; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of__neutralResourcesCulture_7() { return &____neutralResourcesCulture_7; }
	inline void set__neutralResourcesCulture_7(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		____neutralResourcesCulture_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____neutralResourcesCulture_7), (void*)value);
	}

	inline static int32_t get_offset_of__lastUsedResourceCache_8() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____lastUsedResourceCache_8)); }
	inline CultureNameResourceSetPair_t7DF2947B0015A29C8148DB0F32695ECB59369A84 * get__lastUsedResourceCache_8() const { return ____lastUsedResourceCache_8; }
	inline CultureNameResourceSetPair_t7DF2947B0015A29C8148DB0F32695ECB59369A84 ** get_address_of__lastUsedResourceCache_8() { return &____lastUsedResourceCache_8; }
	inline void set__lastUsedResourceCache_8(CultureNameResourceSetPair_t7DF2947B0015A29C8148DB0F32695ECB59369A84 * value)
	{
		____lastUsedResourceCache_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastUsedResourceCache_8), (void*)value);
	}

	inline static int32_t get_offset_of__ignoreCase_9() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____ignoreCase_9)); }
	inline bool get__ignoreCase_9() const { return ____ignoreCase_9; }
	inline bool* get_address_of__ignoreCase_9() { return &____ignoreCase_9; }
	inline void set__ignoreCase_9(bool value)
	{
		____ignoreCase_9 = value;
	}

	inline static int32_t get_offset_of_UseManifest_10() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ___UseManifest_10)); }
	inline bool get_UseManifest_10() const { return ___UseManifest_10; }
	inline bool* get_address_of_UseManifest_10() { return &___UseManifest_10; }
	inline void set_UseManifest_10(bool value)
	{
		___UseManifest_10 = value;
	}

	inline static int32_t get_offset_of_UseSatelliteAssem_11() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ___UseSatelliteAssem_11)); }
	inline bool get_UseSatelliteAssem_11() const { return ___UseSatelliteAssem_11; }
	inline bool* get_address_of_UseSatelliteAssem_11() { return &___UseSatelliteAssem_11; }
	inline void set_UseSatelliteAssem_11(bool value)
	{
		___UseSatelliteAssem_11 = value;
	}

	inline static int32_t get_offset_of__fallbackLoc_12() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____fallbackLoc_12)); }
	inline int32_t get__fallbackLoc_12() const { return ____fallbackLoc_12; }
	inline int32_t* get_address_of__fallbackLoc_12() { return &____fallbackLoc_12; }
	inline void set__fallbackLoc_12(int32_t value)
	{
		____fallbackLoc_12 = value;
	}

	inline static int32_t get_offset_of__satelliteContractVersion_13() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____satelliteContractVersion_13)); }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * get__satelliteContractVersion_13() const { return ____satelliteContractVersion_13; }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C ** get_address_of__satelliteContractVersion_13() { return &____satelliteContractVersion_13; }
	inline void set__satelliteContractVersion_13(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * value)
	{
		____satelliteContractVersion_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____satelliteContractVersion_13), (void*)value);
	}

	inline static int32_t get_offset_of__lookedForSatelliteContractVersion_14() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____lookedForSatelliteContractVersion_14)); }
	inline bool get__lookedForSatelliteContractVersion_14() const { return ____lookedForSatelliteContractVersion_14; }
	inline bool* get_address_of__lookedForSatelliteContractVersion_14() { return &____lookedForSatelliteContractVersion_14; }
	inline void set__lookedForSatelliteContractVersion_14(bool value)
	{
		____lookedForSatelliteContractVersion_14 = value;
	}

	inline static int32_t get_offset_of__callingAssembly_15() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____callingAssembly_15)); }
	inline Assembly_t * get__callingAssembly_15() const { return ____callingAssembly_15; }
	inline Assembly_t ** get_address_of__callingAssembly_15() { return &____callingAssembly_15; }
	inline void set__callingAssembly_15(Assembly_t * value)
	{
		____callingAssembly_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____callingAssembly_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_callingAssembly_16() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ___m_callingAssembly_16)); }
	inline RuntimeAssembly_t799877C849878A70E10D25C690D7B0476DAF0B56 * get_m_callingAssembly_16() const { return ___m_callingAssembly_16; }
	inline RuntimeAssembly_t799877C849878A70E10D25C690D7B0476DAF0B56 ** get_address_of_m_callingAssembly_16() { return &___m_callingAssembly_16; }
	inline void set_m_callingAssembly_16(RuntimeAssembly_t799877C849878A70E10D25C690D7B0476DAF0B56 * value)
	{
		___m_callingAssembly_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_callingAssembly_16), (void*)value);
	}

	inline static int32_t get_offset_of_resourceGroveler_17() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ___resourceGroveler_17)); }
	inline RuntimeObject* get_resourceGroveler_17() const { return ___resourceGroveler_17; }
	inline RuntimeObject** get_address_of_resourceGroveler_17() { return &___resourceGroveler_17; }
	inline void set_resourceGroveler_17(RuntimeObject* value)
	{
		___resourceGroveler_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resourceGroveler_17), (void*)value);
	}
};

struct ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_StaticFields
{
public:
	// System.Int32 System.Resources.ResourceManager::MagicNumber
	int32_t ___MagicNumber_18;
	// System.Int32 System.Resources.ResourceManager::HeaderVersionNumber
	int32_t ___HeaderVersionNumber_19;
	// System.Type System.Resources.ResourceManager::_minResourceSet
	Type_t * ____minResourceSet_20;
	// System.String System.Resources.ResourceManager::ResReaderTypeName
	String_t* ___ResReaderTypeName_21;
	// System.String System.Resources.ResourceManager::ResSetTypeName
	String_t* ___ResSetTypeName_22;
	// System.String System.Resources.ResourceManager::MscorlibName
	String_t* ___MscorlibName_23;
	// System.Int32 System.Resources.ResourceManager::DEBUG
	int32_t ___DEBUG_24;

public:
	inline static int32_t get_offset_of_MagicNumber_18() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_StaticFields, ___MagicNumber_18)); }
	inline int32_t get_MagicNumber_18() const { return ___MagicNumber_18; }
	inline int32_t* get_address_of_MagicNumber_18() { return &___MagicNumber_18; }
	inline void set_MagicNumber_18(int32_t value)
	{
		___MagicNumber_18 = value;
	}

	inline static int32_t get_offset_of_HeaderVersionNumber_19() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_StaticFields, ___HeaderVersionNumber_19)); }
	inline int32_t get_HeaderVersionNumber_19() const { return ___HeaderVersionNumber_19; }
	inline int32_t* get_address_of_HeaderVersionNumber_19() { return &___HeaderVersionNumber_19; }
	inline void set_HeaderVersionNumber_19(int32_t value)
	{
		___HeaderVersionNumber_19 = value;
	}

	inline static int32_t get_offset_of__minResourceSet_20() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_StaticFields, ____minResourceSet_20)); }
	inline Type_t * get__minResourceSet_20() const { return ____minResourceSet_20; }
	inline Type_t ** get_address_of__minResourceSet_20() { return &____minResourceSet_20; }
	inline void set__minResourceSet_20(Type_t * value)
	{
		____minResourceSet_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____minResourceSet_20), (void*)value);
	}

	inline static int32_t get_offset_of_ResReaderTypeName_21() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_StaticFields, ___ResReaderTypeName_21)); }
	inline String_t* get_ResReaderTypeName_21() const { return ___ResReaderTypeName_21; }
	inline String_t** get_address_of_ResReaderTypeName_21() { return &___ResReaderTypeName_21; }
	inline void set_ResReaderTypeName_21(String_t* value)
	{
		___ResReaderTypeName_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ResReaderTypeName_21), (void*)value);
	}

	inline static int32_t get_offset_of_ResSetTypeName_22() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_StaticFields, ___ResSetTypeName_22)); }
	inline String_t* get_ResSetTypeName_22() const { return ___ResSetTypeName_22; }
	inline String_t** get_address_of_ResSetTypeName_22() { return &___ResSetTypeName_22; }
	inline void set_ResSetTypeName_22(String_t* value)
	{
		___ResSetTypeName_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ResSetTypeName_22), (void*)value);
	}

	inline static int32_t get_offset_of_MscorlibName_23() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_StaticFields, ___MscorlibName_23)); }
	inline String_t* get_MscorlibName_23() const { return ___MscorlibName_23; }
	inline String_t** get_address_of_MscorlibName_23() { return &___MscorlibName_23; }
	inline void set_MscorlibName_23(String_t* value)
	{
		___MscorlibName_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MscorlibName_23), (void*)value);
	}

	inline static int32_t get_offset_of_DEBUG_24() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_StaticFields, ___DEBUG_24)); }
	inline int32_t get_DEBUG_24() const { return ___DEBUG_24; }
	inline int32_t* get_address_of_DEBUG_24() { return &___DEBUG_24; }
	inline void set_DEBUG_24(int32_t value)
	{
		___DEBUG_24 = value;
	}
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


// System.ArrayTypeMismatchException
struct ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.FormatException
struct FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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


// System.Resources.MissingManifestResourceException
struct MissingManifestResourceException_tAC74F21ADC46CCB2BCC710464434E3B97F72FACB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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


// System.Reflection.TypeInfo
struct TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F  : public Type_t
{
public:

public:
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.UInt64[]
struct UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint64_t m_Items[1];

public:
	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};
// System.SByte[]
struct SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int8_t m_Items[1];

public:
	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int16_t m_Items[1];

public:
	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
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
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.ReadOnlyMemory`1<System.Char>::.ctor(System.Object,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlyMemory_1__ctor_m0DAE24A1907E131407ECEAE406269A6A57999CFA_gshared_inline (ReadOnlyMemory_1_t8210C81C55F6DD2001CB109C5F2BA0DA96F947DE * __this, RuntimeObject * ___obj0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method);
// !!0 System.Runtime.CompilerServices.Unsafe::As<System.Object>(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Unsafe_As_TisRuntimeObject_mB69494631721B5C97E5C8DFF3FB8B4E570B214AE_gshared_inline (RuntimeObject * ___o0, const RuntimeMethod* method);
// !!0& System.Runtime.CompilerServices.Unsafe::AsRef<System.Char>(System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_AsRef_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m0D4660657D5ED75911BE5AB9BFF6B695957BAB9B_gshared_inline (void* ___source0, const RuntimeMethod* method);
// System.IntPtr System.Runtime.CompilerServices.Unsafe::ByteOffset<System.Char>(!!0&,!!0&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t Unsafe_ByteOffset_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m13722CE0E9DE760114AB69C5D315B218541FFA6E_gshared_inline (Il2CppChar* ___origin0, Il2CppChar* ___target1, const RuntimeMethod* method);
// System.Object System.ReadOnlyMemory`1<System.Char>::GetObjectStartLength(System.Int32&,System.Int32&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * ReadOnlyMemory_1_GetObjectStartLength_m9D3D7EA6E312C2FD16F180B249FCB80CB1DFDECF_gshared_inline (ReadOnlyMemory_1_t8210C81C55F6DD2001CB109C5F2BA0DA96F947DE * __this, int32_t* ___start0, int32_t* ___length1, const RuntimeMethod* method);
// T& System.Span`1<System.Byte>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_gshared_inline (Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 * __this, int32_t ___index0, const RuntimeMethod* method);
// !!1& System.Runtime.CompilerServices.Unsafe::As<System.MutableDecimal,System.Decimal>(!!0&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * Unsafe_As_TisMutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D_TisDecimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_mE2A3068F655E44854F360A5B8315CFA5A9A7706C_gshared_inline (MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * ___source0, const RuntimeMethod* method);
// !!1& System.Runtime.CompilerServices.Unsafe::As<System.Decimal,System.MutableDecimal>(!!0&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * Unsafe_As_TisDecimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_TisMutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D_mF24EB96C9EC3B1D2268AD5413133398FE712084E_gshared_inline (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * ___source0, const RuntimeMethod* method);
// System.Void* System.Runtime.CompilerServices.Unsafe::AsPointer<System.Byte>(!!0&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* Unsafe_AsPointer_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m4D8C6780EB1987171FBA08936AA2C2F9631031C7_gshared_inline (uint8_t* ___value0, const RuntimeMethod* method);
// System.Void System.Span`1<System.Byte>::.ctor(System.Void*,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m776684B7035275EC1AA7A23157CFEE0E596AE782_gshared_inline (Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 * __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method);
// System.Int32 System.MemoryExtensions::IndexOf<System.Byte>(System.Span`1<T>,T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MemoryExtensions_IndexOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m16C2BDD6B446AEB6579BC57176D87011B59FBFCD_gshared_inline (Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  ___span0, uint8_t ___value1, const RuntimeMethod* method);
// System.Boolean System.Buffers.ReadOnlySequence`1<System.Char>::TryGetString(System.String&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySequence_1_TryGetString_mB307BB510E5976759C0AAB8B9345AAF4C4C88F75_gshared (ReadOnlySequence_1_tC3D00D191DBB156549182F67D40D3919D974CF7D * __this, String_t** ___text0, int32_t* ___start1, int32_t* ___length2, const RuntimeMethod* method);
// System.Int32 System.Numerics.Vector`1<System.Byte>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_m6F1F8DDBF49AFE0B82F12C94AA096F26FA8DBC37_gshared_inline (const RuntimeMethod* method);
// !!0& System.Runtime.CompilerServices.Unsafe::AddByteOffset<System.Byte>(!!0&,System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_gshared_inline (uint8_t* ___source0, intptr_t ___byteOffset1, const RuntimeMethod* method);
// System.Numerics.Vector`1<!!0> System.Numerics.Vector::Equals<System.Byte>(System.Numerics.Vector`1<!!0>,System.Numerics.Vector`1<!!0>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  Vector_Equals_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mD81667356EC7F90AAC00124EAD110C46700DBAA5_gshared_inline (Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  ___left0, Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  ___right1, const RuntimeMethod* method);
// System.Numerics.Vector`1<!0> System.Numerics.Vector`1<System.Byte>::get_Zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  Vector_1_get_Zero_m9CA624B7E05E36937BB783931B77F8E607C4A074_gshared_inline (const RuntimeMethod* method);
// System.Boolean System.Numerics.Vector`1<System.Byte>::Equals(System.Numerics.Vector`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_Equals_mAD33337AD07ECF6DF2BC0F1008BC963251A9A96B_gshared (Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08 * __this, Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  ___other0, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.Unsafe::AreSame<System.Byte>(!!0&,!!0&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Unsafe_AreSame_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m432CDE821F63BC587F0A2EF35562935875F9C5DA_gshared_inline (uint8_t* ___left0, uint8_t* ___right1, const RuntimeMethod* method);
// System.Boolean System.Numerics.Vector`1<System.Byte>::op_Inequality(System.Numerics.Vector`1<!0>,System.Numerics.Vector`1<!0>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_op_Inequality_mBA4346A92E18E027DD3E765840093720AFBE15E3_gshared_inline (Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  ___left0, Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  ___right1, const RuntimeMethod* method);
// System.Boolean System.Numerics.Vector`1<System.Byte>::op_Equality(System.Numerics.Vector`1<!0>,System.Numerics.Vector`1<!0>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_op_Equality_mD995A6FD72036B2C240A912C4AA19D5701A43D18_gshared_inline (Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  ___left0, Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  ___right1, const RuntimeMethod* method);
// System.Numerics.Vector`1<System.UInt64> System.Numerics.Vector::AsVectorUInt64<System.Byte>(System.Numerics.Vector`1<!!0>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B  Vector_AsVectorUInt64_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mC567616F831B415B272343591343975A63D69EFC_gshared_inline (Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  ___value0, const RuntimeMethod* method);
// !0 System.Numerics.Vector`1<System.UInt64>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Vector_1_get_Item_mEB12DE8C060BF68B5D7CEC3DB61FA217DEC41080_gshared (Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Numerics.Vector`1<System.UInt64>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_m0A3F1124AD2731436A2A593F00FC37F717CD6CCB_gshared_inline (const RuntimeMethod* method);
// System.Void System.Numerics.Vector`1<System.UInt32>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m91A33CB1C548BFAC5BB414B8F5CAE0E156EF269E_gshared (Vector_1_tF47DE392A41397C167EDBF371E6B4E8AA79D7030 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Numerics.Vector`1<System.Byte> System.Numerics.Vector::AsVectorByte<System.UInt32>(System.Numerics.Vector`1<!!0>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  Vector_AsVectorByte_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m372B582B265FA776E8B53D51A552A9743572F82B_gshared_inline (Vector_1_tF47DE392A41397C167EDBF371E6B4E8AA79D7030  ___value0, const RuntimeMethod* method);
// System.Int32 System.Numerics.Vector`1<System.UInt16>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_m08C2BE69EF27B3ABF0C49C66D4EBD63DB4CEBD69_gshared_inline (const RuntimeMethod* method);
// System.Int32 System.Runtime.CompilerServices.Unsafe::SizeOf<System.Numerics.Vector`1<System.UInt16>>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisVector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC_m630621324270B1BB57F6A7D0A02C0E4C8218FB7A_gshared_inline (const RuntimeMethod* method);
// System.Void System.Numerics.Vector`1<System.UInt16>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mD4A0CE968AC976EDE49DE043EDDE1452D527E638_gshared (Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC * __this, uint16_t ___value0, const RuntimeMethod* method);
// !!0 System.Runtime.CompilerServices.Unsafe::Read<System.Numerics.Vector`1<System.UInt16>>(System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  Unsafe_Read_TisVector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC_m80308A9BAF3E599D0E46C16D30B25F6DBBA8983F_gshared_inline (void* ___source0, const RuntimeMethod* method);
// System.Numerics.Vector`1<!!0> System.Numerics.Vector::Equals<System.UInt16>(System.Numerics.Vector`1<!!0>,System.Numerics.Vector`1<!!0>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  Vector_Equals_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_mC5EF21D75B8379A25C2F8EABEFC56653DEE6DF25_gshared_inline (Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  ___left0, Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  ___right1, const RuntimeMethod* method);
// System.Numerics.Vector`1<!0> System.Numerics.Vector`1<System.UInt16>::get_Zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  Vector_1_get_Zero_m16C1E63064B0566B3729C7A6EAA36DB3BF4B35D8_gshared_inline (const RuntimeMethod* method);
// System.Boolean System.Numerics.Vector`1<System.UInt16>::Equals(System.Numerics.Vector`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_Equals_mAB571D1F19A77D7F9736F214B43B853570ADE33D_gshared (Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC * __this, Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  ___other0, const RuntimeMethod* method);
// System.Numerics.Vector`1<System.UInt64> System.Numerics.Vector::AsVectorUInt64<System.UInt16>(System.Numerics.Vector`1<!!0>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B  Vector_AsVectorUInt64_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_mC04146E01E097E2AAA1EB93B5D9384A22541DF08_gshared_inline (Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  ___value0, const RuntimeMethod* method);
// !!0& System.Runtime.CompilerServices.Unsafe::Add<System.Byte>(!!0&,System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Unsafe_Add_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m9ABE4DAAE83872C0A6C84A181092107B74F1D8A7_gshared_inline (uint8_t* ___source0, intptr_t ___elementOffset1, const RuntimeMethod* method);
// !!1& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.SpanHelpers/Reg64>(!!0&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Reg64_t4A40DA33D6F4C8FB3A17A3B3D9E6FB5B1FEEE9B3 * Unsafe_As_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisReg64_t4A40DA33D6F4C8FB3A17A3B3D9E6FB5B1FEEE9B3_m88C65D2DA086C658FD4F56AAD9F8E156C070FBEF_gshared_inline (uint8_t* ___source0, const RuntimeMethod* method);
// !!1& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.SpanHelpers/Reg32>(!!0&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Reg32_tA8676F8C245F150C7985C4A3BC3CD44E58D3B923 * Unsafe_As_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisReg32_tA8676F8C245F150C7985C4A3BC3CD44E58D3B923_m820456769F6EA3078E6F4C2AF4CF5C885B0B9D60_gshared_inline (uint8_t* ___source0, const RuntimeMethod* method);
// !!1& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.SpanHelpers/Reg16>(!!0&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Reg16_t8B2CE150B820232BE56C005C405133CCA7A58CD4 * Unsafe_As_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisReg16_t8B2CE150B820232BE56C005C405133CCA7A58CD4_mE8689C68ADE79915D3B986C19516728B2E4740DF_gshared_inline (uint8_t* ___source0, const RuntimeMethod* method);
// !!1& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.Int64>(!!0&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t* Unsafe_As_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m4AA2C39DA9491860F8AD8CBAD08F187AA089ACEA_gshared_inline (uint8_t* ___source0, const RuntimeMethod* method);
// !!1& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.Int32>(!!0&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t* Unsafe_As_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mB9705B879316869DF89311F9ADB5B6BEE2629DC6_gshared_inline (uint8_t* ___source0, const RuntimeMethod* method);
// !!0& System.Runtime.CompilerServices.Unsafe::Add<System.IntPtr>(!!0&,System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t* Unsafe_Add_TisIntPtr_t_mB992699F82D75AE06CED0336266F16A57402FB19_gshared_inline (intptr_t* ___source0, intptr_t ___elementOffset1, const RuntimeMethod* method);
// System.ReadOnlySpan`1<T> System.Span`1<System.Byte>::op_Implicit(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  Span_1_op_Implicit_m4DF231FE4EDB6F473374D63CC83755F09BF582F5_gshared (Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  ___span0, const RuntimeMethod* method);
// System.Int32 System.Span`1<System.Byte>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m4BFDA5E41279728ADF75E310F780E357ECB1923B_gshared_inline (Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 * __this, const RuntimeMethod* method);
// T& modreq(System.Runtime.InteropServices.InAttribute) System.ReadOnlySpan`1<System.Byte>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_gshared_inline (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.ThrowHelper::TryParseThrowFormatException<System.Decimal>(T&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThrowHelper_TryParseThrowFormatException_TisDecimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_m4D90369D4FECA72454279EE77D57AE7E65573515_gshared (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * ___value0, int32_t* ___bytesConsumed1, const RuntimeMethod* method);
// System.Int32 System.ReadOnlySpan`1<System.Byte>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_gshared_inline (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 * __this, const RuntimeMethod* method);
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::Slice(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  ReadOnlySpan_1_Slice_m750CD52402E65B69E811EF1A7245A9283C8EEFDE_gshared_inline (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 * __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method);
// System.Void System.ReadOnlySpan`1<System.Byte>::CopyTo(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m4252FBCA62EB3368E39115E35C1E4D74B89C53DA_gshared (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 * __this, Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  ___destination0, const RuntimeMethod* method);
// System.Span`1<T> System.Span`1<System.Byte>::Slice(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  Span_1_Slice_mC8E25AC937B49CDD57AA85FF493D7F42595F8EAA_gshared_inline (Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 * __this, int32_t ___start0, const RuntimeMethod* method);
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::Slice(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  ReadOnlySpan_1_Slice_m7069C54604C1694CDCF61CE35A3A09F55D9C9FDA_gshared_inline (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 * __this, int32_t ___start0, const RuntimeMethod* method);
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(System.Pinnable`1<T>,System.IntPtr,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m4CA9E88EFFD291B2EC7CA13E284B5E77D1EF0994_gshared_inline (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 * __this, Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 * ___pinnable0, intptr_t ___byteOffset1, int32_t ___length2, const RuntimeMethod* method);
// System.Void System.Span`1<System.Byte>::.ctor(System.Pinnable`1<T>,System.IntPtr,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mFF8F544A7E3798F8239A0FEB4D32301758CBFCCA_gshared_inline (Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 * __this, Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 * ___pinnable0, intptr_t ___byteOffset1, int32_t ___length2, const RuntimeMethod* method);

// System.UInt32 System.Buffers.Binary.BinaryPrimitives::ReverseEndianness(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t BinaryPrimitives_ReverseEndianness_m7C562C76F215F77432B9600686CB25A54E88CC20_inline (uint32_t ___value0, const RuntimeMethod* method);
// System.UInt64 System.Buffers.Binary.BinaryPrimitives::ReverseEndianness(System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t BinaryPrimitives_ReverseEndianness_m6268D4E81221B0851A9F12D3446F3B488B804696_inline (uint64_t ___value0, const RuntimeMethod* method);
// System.UInt32 System.DecimalDecCalc::D32DivMod1E9(System.UInt32,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t DecimalDecCalc_D32DivMod1E9_mAD8A67341D4FAFC5C7B8166220023AA68003ABBF (uint32_t ___hi320, uint32_t* ___lo321, const RuntimeMethod* method);
// System.Boolean System.DecimalDecCalc::D32AddCarry(System.UInt32&,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DecimalDecCalc_D32AddCarry_m12237332B16193F0B942AEFC955A62400D3F51B9 (uint32_t* ___value0, uint32_t ___i1, const RuntimeMethod* method);
// System.Void System.DecimalDecCalc::DecShiftLeft(System.MutableDecimal&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecimalDecCalc_DecShiftLeft_m63A7A170CA5CF4A864BAAD95D88C299D5AFB71F3 (MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * ___value0, const RuntimeMethod* method);
// System.Void System.DecimalDecCalc::DecAdd(System.MutableDecimal&,System.MutableDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecimalDecCalc_DecAdd_m52E651ADFE94ACFD0CDDC8C14A50D2830E46E3D5 (MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * ___value0, MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D  ___d1, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  Guid_NewGuid_m5BD19325820690ED6ECA31D67BC2CD474DC4FDB0 (const RuntimeMethod* method);
// System.Int32 System.Guid::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Guid_GetHashCode_mD32F5054E937C98B3D082594B3849808F1E92AE7 (Guid_t * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m86EB6B05BDE45B6F92A7599E80E0179C17391AB5 (int32_t ___argument0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Void System.ReadOnlyMemory`1<System.Char>::.ctor(System.Object,System.Int32,System.Int32)
inline void ReadOnlyMemory_1__ctor_m0DAE24A1907E131407ECEAE406269A6A57999CFA_inline (ReadOnlyMemory_1_t8210C81C55F6DD2001CB109C5F2BA0DA96F947DE * __this, RuntimeObject * ___obj0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyMemory_1_t8210C81C55F6DD2001CB109C5F2BA0DA96F947DE *, RuntimeObject *, int32_t, int32_t, const RuntimeMethod*))ReadOnlyMemory_1__ctor_m0DAE24A1907E131407ECEAE406269A6A57999CFA_gshared_inline)(__this, ___obj0, ___start1, ___length2, method);
}
// System.Int32 System.Runtime.CompilerServices.RuntimeHelpers::get_OffsetToStringData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42 (const RuntimeMethod* method);
// !!0 System.Runtime.CompilerServices.Unsafe::As<System.Pinnable`1<System.Char>>(System.Object)
inline Pinnable_1_t95E8BF0F62016718CAF24D71446F85A32986715C * Unsafe_As_TisPinnable_1_t95E8BF0F62016718CAF24D71446F85A32986715C_m1880DC1B1C8534150F7BE5E5E3CF1F2FFD4E3AA2_inline (RuntimeObject * ___o0, const RuntimeMethod* method)
{
	return ((  Pinnable_1_t95E8BF0F62016718CAF24D71446F85A32986715C * (*) (RuntimeObject *, const RuntimeMethod*))Unsafe_As_TisRuntimeObject_mB69494631721B5C97E5C8DFF3FB8B4E570B214AE_gshared_inline)(___o0, method);
}
// !!0& System.Runtime.CompilerServices.Unsafe::AsRef<System.Char>(System.Void*)
inline Il2CppChar* Unsafe_AsRef_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m0D4660657D5ED75911BE5AB9BFF6B695957BAB9B_inline (void* ___source0, const RuntimeMethod* method)
{
	return ((  Il2CppChar* (*) (void*, const RuntimeMethod*))Unsafe_AsRef_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m0D4660657D5ED75911BE5AB9BFF6B695957BAB9B_gshared_inline)(___source0, method);
}
// System.IntPtr System.Runtime.CompilerServices.Unsafe::ByteOffset<System.Char>(!!0&,!!0&)
inline intptr_t Unsafe_ByteOffset_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m13722CE0E9DE760114AB69C5D315B218541FFA6E_inline (Il2CppChar* ___origin0, Il2CppChar* ___target1, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (Il2CppChar*, Il2CppChar*, const RuntimeMethod*))Unsafe_ByteOffset_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m13722CE0E9DE760114AB69C5D315B218541FFA6E_gshared_inline)(___origin0, ___target1, method);
}
// System.IntPtr System.MemoryExtensions::MeasureStringAdjustment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MemoryExtensions_MeasureStringAdjustment_m8E2719E3CCAD24803BEF8B9C9873DDFAA528C762 (const RuntimeMethod* method);
// System.Void System.Buffers.MemoryHandle::.ctor(System.Void*,System.Runtime.InteropServices.GCHandle,System.Buffers.IPinnable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryHandle__ctor_mD254CBC13788969FCC315DF2B1C8615A945F18B3 (MemoryHandle_t32246FDA186EE62ADBC37E8AE98087BF6330429C * __this, void* ___pointer0, GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___handle1, RuntimeObject* ___pinnable2, const RuntimeMethod* method);
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_mEDA4DAC6AD6D881110E96CAFDAB78C068F5B144D (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Void System.Buffers.MemoryHandle::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryHandle_Dispose_mE19418148935D11619DD13966114889837089E9A (MemoryHandle_t32246FDA186EE62ADBC37E8AE98087BF6330429C * __this, const RuntimeMethod* method);
// System.Object System.ReadOnlyMemory`1<System.Char>::GetObjectStartLength(System.Int32&,System.Int32&)
inline RuntimeObject * ReadOnlyMemory_1_GetObjectStartLength_m9D3D7EA6E312C2FD16F180B249FCB80CB1DFDECF_inline (ReadOnlyMemory_1_t8210C81C55F6DD2001CB109C5F2BA0DA96F947DE * __this, int32_t* ___start0, int32_t* ___length1, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (ReadOnlyMemory_1_t8210C81C55F6DD2001CB109C5F2BA0DA96F947DE *, int32_t*, int32_t*, const RuntimeMethod*))ReadOnlyMemory_1_GetObjectStartLength_m9D3D7EA6E312C2FD16F180B249FCB80CB1DFDECF_gshared_inline)(__this, ___start0, ___length1, method);
}
// System.Boolean System.MutableDecimal::get_IsNegative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MutableDecimal_get_IsNegative_m6CC9630C1FE5DAABD29CEE9EF5281C37D12CE702 (MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * __this, const RuntimeMethod* method);
// System.Void System.MutableDecimal::set_IsNegative(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MutableDecimal_set_IsNegative_mF373061A5BA3F192A2AA544BCB933C81BF71AC67 (MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 System.MutableDecimal::get_Scale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MutableDecimal_get_Scale_mD47D52938E7026D2EC3AA837BABF7162C4F727A3 (MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * __this, const RuntimeMethod* method);
// System.Void System.MutableDecimal::set_Scale(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MutableDecimal_set_Scale_m9253E0BBFF59D428FF76EA0A530D644053C3075C (MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.NUInt::.ctor(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NUInt__ctor_m34A1178C5D59B395E905B670FCF390D1AA5DC85E (NUInt_t6097F6D5A9138404C7786F1B3E1654AD18E030F5 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Void System.NUInt::.ctor(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NUInt__ctor_mBD99E19E274774DF07488C672C5DFC90F4B21973 (NUInt_t6097F6D5A9138404C7786F1B3E1654AD18E030F5 * __this, uint64_t ___value0, const RuntimeMethod* method);
// System.Span`1<System.Byte> System.NumberBuffer::get_Digits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  NumberBuffer_get_Digits_m77F55E994E325F745CBEE5598D24263834F34F3B (NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * __this, const RuntimeMethod* method);
// T& System.Span`1<System.Byte>::get_Item(System.Int32)
inline uint8_t* Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_inline (Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *, int32_t, const RuntimeMethod*))Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_gshared_inline)(__this, ___index0, method);
}
// System.Byte* System.NumberBuffer::get_UnsafeDigits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* NumberBuffer_get_UnsafeDigits_m95B0D74B60926B0E8788E7E6FDC551E7240F40FE (NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * __this, const RuntimeMethod* method);
// System.Void System.DecimalDecCalc::DecMul10(System.MutableDecimal&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecimalDecCalc_DecMul10_m937563702D52CBD29F01CC75B62F626BEC117892 (MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * ___value0, const RuntimeMethod* method);
// System.Void System.DecimalDecCalc::DecAddInt32(System.MutableDecimal&,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecimalDecCalc_DecAddInt32_mCA42EB3D01D859FA31D304138E4BEF39FEB549AE (MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * ___value0, uint32_t ___i1, const RuntimeMethod* method);
// !!1& System.Runtime.CompilerServices.Unsafe::As<System.MutableDecimal,System.Decimal>(!!0&)
inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * Unsafe_As_TisMutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D_TisDecimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_mE2A3068F655E44854F360A5B8315CFA5A9A7706C_inline (MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * ___source0, const RuntimeMethod* method)
{
	return ((  Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * (*) (MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D *, const RuntimeMethod*))Unsafe_As_TisMutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D_TisDecimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_mE2A3068F655E44854F360A5B8315CFA5A9A7706C_gshared_inline)(___source0, method);
}
// !!1& System.Runtime.CompilerServices.Unsafe::As<System.Decimal,System.MutableDecimal>(!!0&)
inline MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * Unsafe_As_TisDecimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_TisMutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D_mF24EB96C9EC3B1D2268AD5413133398FE712084E_inline (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * ___source0, const RuntimeMethod* method)
{
	return ((  MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * (*) (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 *, const RuntimeMethod*))Unsafe_As_TisDecimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_TisMutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D_mF24EB96C9EC3B1D2268AD5413133398FE712084E_gshared_inline)(___source0, method);
}
// System.UInt32 System.DecimalDecCalc::DecDivMod1E9(System.MutableDecimal&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t DecimalDecCalc_DecDivMod1E9_mEBD288904D9655A6FFF62BA3620C6C55FF28B8B6 (MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.Void* System.Runtime.CompilerServices.Unsafe::AsPointer<System.Byte>(!!0&)
inline void* Unsafe_AsPointer_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m4D8C6780EB1987171FBA08936AA2C2F9631031C7_inline (uint8_t* ___value0, const RuntimeMethod* method)
{
	return ((  void* (*) (uint8_t*, const RuntimeMethod*))Unsafe_AsPointer_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m4D8C6780EB1987171FBA08936AA2C2F9631031C7_gshared_inline)(___value0, method);
}
// System.Void System.Span`1<System.Byte>::.ctor(System.Void*,System.Int32)
inline void Span_1__ctor_m776684B7035275EC1AA7A23157CFEE0E596AE782_inline (Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 * __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *, void*, int32_t, const RuntimeMethod*))Span_1__ctor_m776684B7035275EC1AA7A23157CFEE0E596AE782_gshared_inline)(__this, ___pointer0, ___length1, method);
}
// System.Int32 System.MemoryExtensions::IndexOf<System.Byte>(System.Span`1<T>,T)
inline int32_t MemoryExtensions_IndexOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m16C2BDD6B446AEB6579BC57176D87011B59FBFCD_inline (Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  ___span0, uint8_t ___value1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 , uint8_t, const RuntimeMethod*))MemoryExtensions_IndexOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m16C2BDD6B446AEB6579BC57176D87011B59FBFCD_gshared_inline)(___span0, ___value1, method);
}
// System.Int32 System.NumberBuffer::get_NumDigits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberBuffer_get_NumDigits_mC0AF0400D548D41907EA3204965C78A10DB463D5 (NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C (bool* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String System.NumberBuffer::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NumberBuffer_ToString_m64B3ED10515B329DDED1167F97E5BE0B297955AD (NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * __this, const RuntimeMethod* method);
// System.Type System.SR::get_ResourceType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * SR_get_ResourceType_mA677195FD1721150495B84739EFFDCB9366A5541_inline (const RuntimeMethod* method);
// System.Void System.Resources.ResourceManager::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ResourceManager__ctor_mC8A203D5697A2FAD2B336CF3534C21276918BD25 (ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * __this, Type_t * ___resourceSource0, const RuntimeMethod* method);
// System.Resources.ResourceManager System.SR::get_ResourceManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * SR_get_ResourceManager_m18A791F4D611559D5B214B3020BAB11F2AC869EC (const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m62F0586691097AA2EE48F1596A130170BCFBF7F6 (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method);
// System.Boolean System.SR::UsingResourceKeys()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_m08DBDDDDF80E9F0013615CAB611F552F836BB526 (const RuntimeMethod* method);
// System.String System.String::Join(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m7BEA4678919FD9393062F8E8B5328A4DBB1A95E5 (String_t* ___separator0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___values1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.String System.SR::GetResourceString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetResourceString_mEC79B3C28B26B1540E26C3CD899938CC955A4748 (String_t* ___resourceKey0, String_t* ___defaultString1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Boolean System.Buffers.ReadOnlySequence`1<System.Char>::TryGetString(System.String&,System.Int32&,System.Int32&)
inline bool ReadOnlySequence_1_TryGetString_mB307BB510E5976759C0AAB8B9345AAF4C4C88F75 (ReadOnlySequence_1_tC3D00D191DBB156549182F67D40D3919D974CF7D * __this, String_t** ___text0, int32_t* ___start1, int32_t* ___length2, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySequence_1_tC3D00D191DBB156549182F67D40D3919D974CF7D *, String_t**, int32_t*, int32_t*, const RuntimeMethod*))ReadOnlySequence_1_TryGetString_mB307BB510E5976759C0AAB8B9345AAF4C4C88F75_gshared)(__this, ___text0, ___start1, ___length2, method);
}
// System.Void System.SequencePosition::.ctor(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SequencePosition__ctor_m881E247213B0B28B3903475A1FC0237C56B5F0B0 (SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A * __this, RuntimeObject * ___object0, int32_t ___integer1, const RuntimeMethod* method);
// System.Object System.SequencePosition::GetObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * SequencePosition_GetObject_m33D4D02B2042DFCCC2549006639381910F1F3525_inline (SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A * __this, const RuntimeMethod* method);
// System.Int32 System.SequencePosition::GetInteger()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SequencePosition_GetInteger_mE4D2683EB441F31A3C1474845ABBD0FA78C130DE_inline (SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A * __this, const RuntimeMethod* method);
// System.Boolean System.Object::Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053 (RuntimeObject * ___objA0, RuntimeObject * ___objB1, const RuntimeMethod* method);
// System.Boolean System.SequencePosition::Equals(System.SequencePosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SequencePosition_Equals_mEA7C1FF9F5C4661547A30C192DC3702CB7647795 (SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A * __this, SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A  ___other0, const RuntimeMethod* method);
// System.Boolean System.SequencePosition::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SequencePosition_Equals_mEA56903889413D851A4F93FC2C96D0A6BA823A58 (SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.Numerics.Hashing.HashHelpers::Combine(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_Combine_m0B422F3A90AC3CD046375C8195F8ED339B83ED46 (int32_t ___h10, int32_t ___h21, const RuntimeMethod* method);
// System.Int32 System.SequencePosition::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SequencePosition_GetHashCode_m1BEFA85FBA8965A92F4A2408AA491758C0CD7DF2 (SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A * __this, const RuntimeMethod* method);
// System.IntPtr System.IntPtr::op_Explicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_m9092E57CE669E7B9CCDCF5ADD6DFB758D6545FBF (int32_t ___value0, const RuntimeMethod* method);
// System.Boolean System.Numerics.Vector::get_IsHardwareAccelerated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_get_IsHardwareAccelerated_m282E2F7F13A15EAEFC4059305F18867139398D74 (const RuntimeMethod* method);
// System.Int32 System.Numerics.Vector`1<System.Byte>::get_Count()
inline int32_t Vector_1_get_Count_m6F1F8DDBF49AFE0B82F12C94AA096F26FA8DBC37_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))Vector_1_get_Count_m6F1F8DDBF49AFE0B82F12C94AA096F26FA8DBC37_gshared_inline)(method);
}
// System.IntPtr System.IntPtr::op_Subtraction(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Subtraction_m02F3295A959F0DF44F66D04D88F3EE66DFC4BFD9 (intptr_t ___pointer0, int32_t ___offset1, const RuntimeMethod* method);
// !!0& System.Runtime.CompilerServices.Unsafe::AddByteOffset<System.Byte>(!!0&,System.IntPtr)
inline uint8_t* Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_inline (uint8_t* ___source0, intptr_t ___byteOffset1, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (uint8_t*, intptr_t, const RuntimeMethod*))Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_gshared_inline)(___source0, ___byteOffset1, method);
}
// System.IntPtr System.IntPtr::op_Addition(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD (intptr_t ___pointer0, int32_t ___offset1, const RuntimeMethod* method);
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD (intptr_t ___value0, const RuntimeMethod* method);
// System.Numerics.Vector`1<System.Byte> System.SpanHelpers::GetVector(System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  SpanHelpers_GetVector_mB6C94E0B80F7E5A77D84E2B202C1B8DD742E9FD9_inline (uint8_t ___vectorByte0, const RuntimeMethod* method);
// System.Numerics.Vector`1<!!0> System.Numerics.Vector::Equals<System.Byte>(System.Numerics.Vector`1<!!0>,System.Numerics.Vector`1<!!0>)
inline Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  Vector_Equals_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mD81667356EC7F90AAC00124EAD110C46700DBAA5_inline (Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  ___left0, Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  ___right1, const RuntimeMethod* method)
{
	return ((  Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  (*) (Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08 , Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08 , const RuntimeMethod*))Vector_Equals_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mD81667356EC7F90AAC00124EAD110C46700DBAA5_gshared_inline)(___left0, ___right1, method);
}
// System.Numerics.Vector`1<!0> System.Numerics.Vector`1<System.Byte>::get_Zero()
inline Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  Vector_1_get_Zero_m9CA624B7E05E36937BB783931B77F8E607C4A074_inline (const RuntimeMethod* method)
{
	return ((  Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  (*) (const RuntimeMethod*))Vector_1_get_Zero_m9CA624B7E05E36937BB783931B77F8E607C4A074_gshared_inline)(method);
}
// System.Boolean System.Numerics.Vector`1<System.Byte>::Equals(System.Numerics.Vector`1<!0>)
inline bool Vector_1_Equals_mAD33337AD07ECF6DF2BC0F1008BC963251A9A96B (Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08 * __this, Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08 *, Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08 , const RuntimeMethod*))Vector_1_Equals_mAD33337AD07ECF6DF2BC0F1008BC963251A9A96B_gshared)(__this, ___other0, method);
}
// System.Int32 System.SpanHelpers::LocateFirstFoundByte(System.Numerics.Vector`1<System.Byte>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SpanHelpers_LocateFirstFoundByte_m419FAFA78D34AB13ADED0E04C54AD68D69551E83_inline (Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  ___match0, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.Unsafe::AreSame<System.Byte>(!!0&,!!0&)
inline bool Unsafe_AreSame_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m432CDE821F63BC587F0A2EF35562935875F9C5DA_inline (uint8_t* ___left0, uint8_t* ___right1, const RuntimeMethod* method)
{
	return ((  bool (*) (uint8_t*, uint8_t*, const RuntimeMethod*))Unsafe_AreSame_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m432CDE821F63BC587F0A2EF35562935875F9C5DA_gshared_inline)(___left0, ___right1, method);
}
// System.Void* System.NUInt::op_Explicit(System.NUInt)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NUInt_op_Explicit_mAC8186F05FC1F16BAEB9A73957491CB24A067D46_inline (NUInt_t6097F6D5A9138404C7786F1B3E1654AD18E030F5  ___value0, const RuntimeMethod* method);
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mBD40223EE90BDDF40A24C0F321D3398DEA300495 (void* ___value0, const RuntimeMethod* method);
// System.Boolean System.Numerics.Vector`1<System.Byte>::op_Inequality(System.Numerics.Vector`1<!0>,System.Numerics.Vector`1<!0>)
inline bool Vector_1_op_Inequality_mBA4346A92E18E027DD3E765840093720AFBE15E3_inline (Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  ___left0, Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  ___right1, const RuntimeMethod* method)
{
	return ((  bool (*) (Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08 , Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08 , const RuntimeMethod*))Vector_1_op_Inequality_mBA4346A92E18E027DD3E765840093720AFBE15E3_gshared_inline)(___left0, ___right1, method);
}
// System.Boolean System.Numerics.Vector`1<System.Byte>::op_Equality(System.Numerics.Vector`1<!0>,System.Numerics.Vector`1<!0>)
inline bool Vector_1_op_Equality_mD995A6FD72036B2C240A912C4AA19D5701A43D18_inline (Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  ___left0, Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  ___right1, const RuntimeMethod* method)
{
	return ((  bool (*) (Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08 , Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08 , const RuntimeMethod*))Vector_1_op_Equality_mD995A6FD72036B2C240A912C4AA19D5701A43D18_gshared_inline)(___left0, ___right1, method);
}
// System.Boolean System.UIntPtr::op_Inequality(System.UIntPtr,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIntPtr_op_Inequality_m7D22151019093F083240F615DA4B70CE2CF494B4 (uintptr_t ___value10, uintptr_t ___value21, const RuntimeMethod* method);
// System.Boolean System.UIntPtr::op_Equality(System.UIntPtr,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIntPtr_op_Equality_mA909564C1AAE89E5119A6BD536C1A1B260625A5D (uintptr_t ___value10, uintptr_t ___value21, const RuntimeMethod* method);
// System.Numerics.Vector`1<System.UInt64> System.Numerics.Vector::AsVectorUInt64<System.Byte>(System.Numerics.Vector`1<!!0>)
inline Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B  Vector_AsVectorUInt64_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mC567616F831B415B272343591343975A63D69EFC_inline (Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  ___value0, const RuntimeMethod* method)
{
	return ((  Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B  (*) (Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08 , const RuntimeMethod*))Vector_AsVectorUInt64_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mC567616F831B415B272343591343975A63D69EFC_gshared_inline)(___value0, method);
}
// !0 System.Numerics.Vector`1<System.UInt64>::get_Item(System.Int32)
inline uint64_t Vector_1_get_Item_mEB12DE8C060BF68B5D7CEC3DB61FA217DEC41080 (Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  uint64_t (*) (Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B *, int32_t, const RuntimeMethod*))Vector_1_get_Item_mEB12DE8C060BF68B5D7CEC3DB61FA217DEC41080_gshared)(__this, ___index0, method);
}
// System.Int32 System.Numerics.Vector`1<System.UInt64>::get_Count()
inline int32_t Vector_1_get_Count_m0A3F1124AD2731436A2A593F00FC37F717CD6CCB_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))Vector_1_get_Count_m0A3F1124AD2731436A2A593F00FC37F717CD6CCB_gshared_inline)(method);
}
// System.Int32 System.SpanHelpers::LocateFirstFoundByte(System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SpanHelpers_LocateFirstFoundByte_m6AEEBF64B95585D577D0041CE56E0BE6F28AEFE4_inline (uint64_t ___match0, const RuntimeMethod* method);
// System.Void System.Numerics.Vector`1<System.UInt32>::.ctor(!0)
inline void Vector_1__ctor_m91A33CB1C548BFAC5BB414B8F5CAE0E156EF269E (Vector_1_tF47DE392A41397C167EDBF371E6B4E8AA79D7030 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_tF47DE392A41397C167EDBF371E6B4E8AA79D7030 *, uint32_t, const RuntimeMethod*))Vector_1__ctor_m91A33CB1C548BFAC5BB414B8F5CAE0E156EF269E_gshared)(__this, ___value0, method);
}
// System.Numerics.Vector`1<System.Byte> System.Numerics.Vector::AsVectorByte<System.UInt32>(System.Numerics.Vector`1<!!0>)
inline Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  Vector_AsVectorByte_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m372B582B265FA776E8B53D51A552A9743572F82B_inline (Vector_1_tF47DE392A41397C167EDBF371E6B4E8AA79D7030  ___value0, const RuntimeMethod* method)
{
	return ((  Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  (*) (Vector_1_tF47DE392A41397C167EDBF371E6B4E8AA79D7030 , const RuntimeMethod*))Vector_AsVectorByte_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m372B582B265FA776E8B53D51A552A9743572F82B_gshared_inline)(___value0, method);
}
// System.Int32 System.Numerics.Vector`1<System.UInt16>::get_Count()
inline int32_t Vector_1_get_Count_m08C2BE69EF27B3ABF0C49C66D4EBD63DB4CEBD69_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))Vector_1_get_Count_m08C2BE69EF27B3ABF0C49C66D4EBD63DB4CEBD69_gshared_inline)(method);
}
// System.Int32 System.Runtime.CompilerServices.Unsafe::SizeOf<System.Numerics.Vector`1<System.UInt16>>()
inline int32_t Unsafe_SizeOf_TisVector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC_m630621324270B1BB57F6A7D0A02C0E4C8218FB7A_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))Unsafe_SizeOf_TisVector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC_m630621324270B1BB57F6A7D0A02C0E4C8218FB7A_gshared_inline)(method);
}
// System.Void System.Numerics.Vector`1<System.UInt16>::.ctor(!0)
inline void Vector_1__ctor_mD4A0CE968AC976EDE49DE043EDDE1452D527E638 (Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC *, uint16_t, const RuntimeMethod*))Vector_1__ctor_mD4A0CE968AC976EDE49DE043EDDE1452D527E638_gshared)(__this, ___value0, method);
}
// !!0 System.Runtime.CompilerServices.Unsafe::Read<System.Numerics.Vector`1<System.UInt16>>(System.Void*)
inline Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  Unsafe_Read_TisVector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC_m80308A9BAF3E599D0E46C16D30B25F6DBBA8983F_inline (void* ___source0, const RuntimeMethod* method)
{
	return ((  Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  (*) (void*, const RuntimeMethod*))Unsafe_Read_TisVector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC_m80308A9BAF3E599D0E46C16D30B25F6DBBA8983F_gshared_inline)(___source0, method);
}
// System.Numerics.Vector`1<!!0> System.Numerics.Vector::Equals<System.UInt16>(System.Numerics.Vector`1<!!0>,System.Numerics.Vector`1<!!0>)
inline Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  Vector_Equals_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_mC5EF21D75B8379A25C2F8EABEFC56653DEE6DF25_inline (Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  ___left0, Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  ___right1, const RuntimeMethod* method)
{
	return ((  Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  (*) (Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC , Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC , const RuntimeMethod*))Vector_Equals_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_mC5EF21D75B8379A25C2F8EABEFC56653DEE6DF25_gshared_inline)(___left0, ___right1, method);
}
// System.Numerics.Vector`1<!0> System.Numerics.Vector`1<System.UInt16>::get_Zero()
inline Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  Vector_1_get_Zero_m16C1E63064B0566B3729C7A6EAA36DB3BF4B35D8_inline (const RuntimeMethod* method)
{
	return ((  Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  (*) (const RuntimeMethod*))Vector_1_get_Zero_m16C1E63064B0566B3729C7A6EAA36DB3BF4B35D8_gshared_inline)(method);
}
// System.Boolean System.Numerics.Vector`1<System.UInt16>::Equals(System.Numerics.Vector`1<!0>)
inline bool Vector_1_Equals_mAB571D1F19A77D7F9736F214B43B853570ADE33D (Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC * __this, Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC *, Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC , const RuntimeMethod*))Vector_1_Equals_mAB571D1F19A77D7F9736F214B43B853570ADE33D_gshared)(__this, ___other0, method);
}
// System.Int32 System.SpanHelpers::LocateFirstFoundChar(System.Numerics.Vector`1<System.UInt16>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SpanHelpers_LocateFirstFoundChar_m6F7002BE58BB1D79412002F2AEF2E430F8720F97_inline (Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  ___match0, const RuntimeMethod* method);
// System.Numerics.Vector`1<System.UInt64> System.Numerics.Vector::AsVectorUInt64<System.UInt16>(System.Numerics.Vector`1<!!0>)
inline Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B  Vector_AsVectorUInt64_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_mC04146E01E097E2AAA1EB93B5D9384A22541DF08_inline (Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  ___value0, const RuntimeMethod* method)
{
	return ((  Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B  (*) (Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC , const RuntimeMethod*))Vector_AsVectorUInt64_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_mC04146E01E097E2AAA1EB93B5D9384A22541DF08_gshared_inline)(___value0, method);
}
// System.Int32 System.SpanHelpers::LocateFirstFoundChar(System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SpanHelpers_LocateFirstFoundChar_m7B3D3FD47EB5BA8837CE3E8CE2D2BBA7BFC62CE3_inline (uint64_t ___match0, const RuntimeMethod* method);
// System.Reflection.TypeInfo System.Reflection.IntrospectionExtensions::GetTypeInfo(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * IntrospectionExtensions_GetTypeInfo_m77034F8576BE695819427C13103C591277C1B636 (Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsPrimitive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3 (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsValueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB (Type_t * __this, const RuntimeMethod* method);
// System.Type System.Nullable::GetUnderlyingType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Nullable_GetUnderlyingType_mC5699E7E11E1AFE25365CAB564A48F0193318629 (Type_t * ___nullableType0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Boolean System.Reflection.FieldInfo::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_get_IsStatic_mE36F3A5B2DFF613C704AA56989D90D72760391EB (FieldInfo_t * __this, const RuntimeMethod* method);
// System.Boolean System.SpanHelpers::IsReferenceOrContainsReferencesCore(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferencesCore_m4046A8EAD00DA02AA423C292A8FCBB08268AD781 (Type_t * ___type0, const RuntimeMethod* method);
// System.UInt32 System.UIntPtr::op_Explicit(System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UIntPtr_op_Explicit_m8EF5FC1C0CAF58F8F2310C0D989F20F0694CD7CF (uintptr_t ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.Unsafe::InitBlockUnaligned(System.Void*,System.Byte,System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Unsafe_InitBlockUnaligned_m052F07F8475562B2C26782A0926C742F718BDA22_inline (void* ___startAddress0, uint8_t ___value1, uint32_t ___byteCount2, const RuntimeMethod* method);
// System.UInt64 System.UIntPtr::op_Explicit(System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UIntPtr_op_Explicit_mEEA1D4A964FBFCC95BE2B91ADDD52EF7067C312D (uintptr_t ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.Unsafe::InitBlockUnaligned(System.Byte&,System.Byte,System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Unsafe_InitBlockUnaligned_m19BEDC2C614CA372758548BB4D1622F8CC53FF4F_inline (uint8_t* ___startAddress0, uint8_t ___value1, uint32_t ___byteCount2, const RuntimeMethod* method);
// System.IntPtr System.IntPtr::op_Explicit(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_m65D141119BA83745D73EE5F94267165F88D15B51 (int64_t ___value0, const RuntimeMethod* method);
// !!0& System.Runtime.CompilerServices.Unsafe::Add<System.Byte>(!!0&,System.IntPtr)
inline uint8_t* Unsafe_Add_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m9ABE4DAAE83872C0A6C84A181092107B74F1D8A7_inline (uint8_t* ___source0, intptr_t ___elementOffset1, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (uint8_t*, intptr_t, const RuntimeMethod*))Unsafe_Add_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m9ABE4DAAE83872C0A6C84A181092107B74F1D8A7_gshared_inline)(___source0, ___elementOffset1, method);
}
// !!1& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.SpanHelpers/Reg64>(!!0&)
inline Reg64_t4A40DA33D6F4C8FB3A17A3B3D9E6FB5B1FEEE9B3 * Unsafe_As_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisReg64_t4A40DA33D6F4C8FB3A17A3B3D9E6FB5B1FEEE9B3_m88C65D2DA086C658FD4F56AAD9F8E156C070FBEF_inline (uint8_t* ___source0, const RuntimeMethod* method)
{
	return ((  Reg64_t4A40DA33D6F4C8FB3A17A3B3D9E6FB5B1FEEE9B3 * (*) (uint8_t*, const RuntimeMethod*))Unsafe_As_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisReg64_t4A40DA33D6F4C8FB3A17A3B3D9E6FB5B1FEEE9B3_m88C65D2DA086C658FD4F56AAD9F8E156C070FBEF_gshared_inline)(___source0, method);
}
// System.UIntPtr System.UIntPtr::op_Subtraction(System.UIntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t UIntPtr_op_Subtraction_m455602034049E11A086A49C915EDF9DAEC43C91D (uintptr_t ___pointer0, int32_t ___offset1, const RuntimeMethod* method);
// System.Boolean System.SpanHelpers::LessThanEqual(System.IntPtr,System.UIntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_LessThanEqual_mCFA5E9CC05F428B1EDA65967FEF81267F917E88C_inline (intptr_t ___index0, uintptr_t ___length1, const RuntimeMethod* method);
// !!1& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.SpanHelpers/Reg32>(!!0&)
inline Reg32_tA8676F8C245F150C7985C4A3BC3CD44E58D3B923 * Unsafe_As_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisReg32_tA8676F8C245F150C7985C4A3BC3CD44E58D3B923_m820456769F6EA3078E6F4C2AF4CF5C885B0B9D60_inline (uint8_t* ___source0, const RuntimeMethod* method)
{
	return ((  Reg32_tA8676F8C245F150C7985C4A3BC3CD44E58D3B923 * (*) (uint8_t*, const RuntimeMethod*))Unsafe_As_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisReg32_tA8676F8C245F150C7985C4A3BC3CD44E58D3B923_m820456769F6EA3078E6F4C2AF4CF5C885B0B9D60_gshared_inline)(___source0, method);
}
// !!1& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.SpanHelpers/Reg16>(!!0&)
inline Reg16_t8B2CE150B820232BE56C005C405133CCA7A58CD4 * Unsafe_As_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisReg16_t8B2CE150B820232BE56C005C405133CCA7A58CD4_mE8689C68ADE79915D3B986C19516728B2E4740DF_inline (uint8_t* ___source0, const RuntimeMethod* method)
{
	return ((  Reg16_t8B2CE150B820232BE56C005C405133CCA7A58CD4 * (*) (uint8_t*, const RuntimeMethod*))Unsafe_As_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisReg16_t8B2CE150B820232BE56C005C405133CCA7A58CD4_mE8689C68ADE79915D3B986C19516728B2E4740DF_gshared_inline)(___source0, method);
}
// !!1& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.Int64>(!!0&)
inline int64_t* Unsafe_As_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m4AA2C39DA9491860F8AD8CBAD08F187AA089ACEA_inline (uint8_t* ___source0, const RuntimeMethod* method)
{
	return ((  int64_t* (*) (uint8_t*, const RuntimeMethod*))Unsafe_As_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m4AA2C39DA9491860F8AD8CBAD08F187AA089ACEA_gshared_inline)(___source0, method);
}
// !!1& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.Int32>(!!0&)
inline int32_t* Unsafe_As_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mB9705B879316869DF89311F9ADB5B6BEE2629DC6_inline (uint8_t* ___source0, const RuntimeMethod* method)
{
	return ((  int32_t* (*) (uint8_t*, const RuntimeMethod*))Unsafe_As_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mB9705B879316869DF89311F9ADB5B6BEE2629DC6_gshared_inline)(___source0, method);
}
// !!0& System.Runtime.CompilerServices.Unsafe::Add<System.IntPtr>(!!0&,System.IntPtr)
inline intptr_t* Unsafe_Add_TisIntPtr_t_mB992699F82D75AE06CED0336266F16A57402FB19_inline (intptr_t* ___source0, intptr_t ___elementOffset1, const RuntimeMethod* method)
{
	return ((  intptr_t* (*) (intptr_t*, intptr_t, const RuntimeMethod*))Unsafe_Add_TisIntPtr_t_mB992699F82D75AE06CED0336266F16A57402FB19_gshared_inline)(___source0, ___elementOffset1, method);
}
// System.Int64 System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t IntPtr_op_Explicit_m17B168C05CF9F2917BC28FA8AF6F4F3281C377EB (intptr_t ___value0, const RuntimeMethod* method);
// System.Int32 System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_op_Explicit_m9C2CBDF65A4D7B2C0DCF4D38A4174A2CC07A18E3 (intptr_t ___value0, const RuntimeMethod* method);
// System.Char System.Buffers.StandardFormat::get_Symbol()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar StandardFormat_get_Symbol_mF8A6168808E4EEB455E2F8695DD243231285B0F2_inline (StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12 * __this, const RuntimeMethod* method);
// System.Byte System.Buffers.StandardFormat::get_Precision()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t StandardFormat_get_Precision_m0080A4421E19B1702147DF794C3D4C2D1035C5B6_inline (StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12 * __this, const RuntimeMethod* method);
// System.Boolean System.Buffers.StandardFormat::get_IsDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StandardFormat_get_IsDefault_mA235EA7D61B74384AF56AEC5174D2ACD568AE144 (StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12 * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException_PrecisionTooLarge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_PrecisionTooLarge_mAC345A1F72DBC919354CCB54CC6C24EF44BE48C1 (const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException_SymbolDoesNotFit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_SymbolDoesNotFit_m601A3BCC469FE8A7420CC33708307189B6C48B61 (const RuntimeMethod* method);
// System.Void System.Buffers.StandardFormat::.ctor(System.Char,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardFormat__ctor_mEDC33761CDF50C5F7D01BF0DD6D673658931D43F (StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12 * __this, Il2CppChar ___symbol0, uint8_t ___precision1, const RuntimeMethod* method);
// System.Boolean System.Buffers.StandardFormat::Equals(System.Buffers.StandardFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StandardFormat_Equals_m6AAD6931E6B7620BC5676B60FDE95DEBDCC6A011 (StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12 * __this, StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12  ___other0, const RuntimeMethod* method);
// System.Boolean System.Buffers.StandardFormat::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StandardFormat_Equals_mB63E4B0879F9B74C0783E32117A22592050C887A (StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.Byte::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Byte_GetHashCode_m5111B9229C948E0B734597AED742936F9542E093 (uint8_t* __this, const RuntimeMethod* method);
// System.Int32 System.Buffers.StandardFormat::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StandardFormat_GetHashCode_mA2398AB63B3856075F7E8F9A26D142878DDAB119 (StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12 * __this, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m854F19B67F5E1B63737E096BF53CC56AB12AF777 (String_t* __this, Il2CppChar* ___value0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method);
// System.String System.Buffers.StandardFormat::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StandardFormat_ToString_m1391A69E60EF500E59D59A29124BAD2C1D28CE6D (StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12 * __this, const RuntimeMethod* method);
// System.Exception System.ThrowHelper::CreateArgumentNullException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArgumentNullException_mA70D942EBA7503962BA72170F026A966513590FC (int32_t ___argument0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Exception System.ThrowHelper::CreateArrayTypeMismatchException()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArrayTypeMismatchException_m23F27BF82F951A64682A2CF14E0EDE9F3B54C93F (const RuntimeMethod* method);
// System.Void System.ArrayTypeMismatchException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayTypeMismatchException__ctor_m76932588D9A980CDB675D12B0479F8EAC2D5E96D (ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784 * __this, const RuntimeMethod* method);
// System.Exception System.ThrowHelper::CreateArgumentException_InvalidTypeWithPointersNotSupported(System.Type)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArgumentException_InvalidTypeWithPointersNotSupported_m4019588ED8511C985604C8CC9AD4AB6414676945 (Type_t * ___type0, const RuntimeMethod* method);
// System.String System.SR::get_Argument_InvalidTypeWithPointersNotSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Argument_InvalidTypeWithPointersNotSupported_m2FD2DCBFF1853C8F9616D4C55DD1C14163A06B75 (const RuntimeMethod* method);
// System.String System.SR::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m4480ECD777F2A905A368094827DDCB43478A8053 (String_t* ___resourceFormat0, RuntimeObject * ___p11, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Exception System.ThrowHelper::CreateArgumentException_DestinationTooShort()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArgumentException_DestinationTooShort_m75CF4B3D7F56B0383E0BC84D86C085AA0CE90CD1 (const RuntimeMethod* method);
// System.String System.SR::get_Argument_DestinationTooShort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Argument_DestinationTooShort_mDD536A55FFA1BD1CF5C34D9E074420C183905559 (const RuntimeMethod* method);
// System.Exception System.ThrowHelper::CreateIndexOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateIndexOutOfRangeException_m8C8886676269B09CC5241BA6F5330D78B26F527B (const RuntimeMethod* method);
// System.Void System.IndexOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_m84F1D8D46E48427F4DFAC350A5F1E0D345C68523 (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * __this, const RuntimeMethod* method);
// System.Exception System.ThrowHelper::CreateArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArgumentOutOfRangeException_m0841E9BF864372D7BF0512A13456F985C53FC03D (const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m81CEEF1FCB5EFBBAA39071F48BCFBC16AED0C915 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, const RuntimeMethod* method);
// System.Exception System.ThrowHelper::CreateArgumentOutOfRangeException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArgumentOutOfRangeException_m3ED3DA6D593699354BA4D397790440F3BFE84AEA (int32_t ___argument0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Exception System.ThrowHelper::CreateArgumentOutOfRangeException_PrecisionTooLarge()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArgumentOutOfRangeException_PrecisionTooLarge_mC1889FF89FD22816EB8D105C942166D0BF6ADFAD (const RuntimeMethod* method);
// System.String System.SR::get_Argument_PrecisionTooLarge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Argument_PrecisionTooLarge_m42EED38BF28506133A0AB30447E3C35CCA120A7F (const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Exception System.ThrowHelper::CreateArgumentOutOfRangeException_SymbolDoesNotFit()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArgumentOutOfRangeException_SymbolDoesNotFit_m903F8FB8357FE1BAB8BF450E0F95A79117EF2D19 (const RuntimeMethod* method);
// System.String System.SR::get_Argument_BadFormatSpecifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Argument_BadFormatSpecifier_mFE81E4F926274AB402B890E679E6CAB600E61433 (const RuntimeMethod* method);
// System.Exception System.ThrowHelper::CreateInvalidOperationException()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateInvalidOperationException_mAA36D488898B83C836372B8D095EFEC4136121B3 (const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m26BD2B620B5FBFA4376C16011C60E18A2EDC8E96 (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, const RuntimeMethod* method);
// System.Exception System.ThrowHelper::CreateInvalidOperationException_EndPositionNotReached()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateInvalidOperationException_EndPositionNotReached_m35A30B605551B8CACAE6B842C8B525BC7078FE72 (const RuntimeMethod* method);
// System.String System.SR::get_EndPositionNotReached()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_EndPositionNotReached_m26E126334F58B1570EEAAA53A48B9518F3C17913 (const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Exception System.ThrowHelper::CreateArgumentOutOfRangeException_PositionOutOfRange()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArgumentOutOfRangeException_PositionOutOfRange_m09B8EF6F30DDB19BF9AD63605556AED12E7DE03A (const RuntimeMethod* method);
// System.Exception System.ThrowHelper::CreateArgumentOutOfRangeException_OffsetOutOfRange()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArgumentOutOfRangeException_OffsetOutOfRange_m4006B68C0940F1864B48E9E2CAE0A62FE91910F9 (const RuntimeMethod* method);
// System.Exception System.ThrowHelper::CreateObjectDisposedException_ArrayMemoryPoolBuffer()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateObjectDisposedException_ArrayMemoryPoolBuffer_m1F7F47B74B90A8F024A3325C85416CBB433838BC (const RuntimeMethod* method);
// System.Void System.ObjectDisposedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880 (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * __this, String_t* ___objectName0, const RuntimeMethod* method);
// System.Exception System.ThrowHelper::CreateFormatException_BadFormatSpecifier()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateFormatException_BadFormatSpecifier_mA1D2DB12AB680960531A3C1A97098925F5154FDB (const RuntimeMethod* method);
// System.Void System.FormatException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatException__ctor_mB8F9A26F985EF9A6C0C082F7D70CFDF2DBDBB23B (FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowFormatException_BadFormatSpecifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowFormatException_BadFormatSpecifier_m1E35DA4BEAAC3A721CFB9CE82029EBABF763EA8D (const RuntimeMethod* method);
// System.Exception System.ThrowHelper::CreateArgumentValidationException(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArgumentValidationException_mA1BAB2087749EF0A3433426D6B4886903B64C893 (RuntimeArray * ___array0, int32_t ___start1, const RuntimeMethod* method);
// System.Int32 System.Array::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10 (RuntimeArray * __this, const RuntimeMethod* method);
// System.Exception System.ThrowHelper::CreateStartOrEndArgumentValidationException(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateStartOrEndArgumentValidationException_mC18923AF89FCBE538463BC90C517FA9E4691734C (int64_t ___start0, const RuntimeMethod* method);
// System.Buffers.StandardFormat System.Buffers.StandardFormat::op_Implicit(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12  StandardFormat_op_Implicit_mC7AEDB177670024F660C1AA4BA07616FB27B29BD (Il2CppChar ___symbol0, const RuntimeMethod* method);
// System.String System.SR::get_Argument_GWithPrecisionNotSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Argument_GWithPrecisionNotSupported_mF77D1EF96FE22465E62C65C5895E968E7FB10019 (const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90 (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Number::DecimalToNumber(System.Decimal,System.NumberBuffer&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Number_DecimalToNumber_mDB370C6FEDCCE206F35651207AE2E13ABF525408 (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value0, NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * ___number1, const RuntimeMethod* method);
// System.Boolean System.Buffers.Text.Utf8Formatter::TryFormatDecimalG(System.NumberBuffer&,System.Span`1<System.Byte>,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatDecimalG_m9209EBD3DB9F8ADBD39C4F69246BF2D2B7E2B86B (NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * ___number0, Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  ___destination1, int32_t* ___bytesWritten2, const RuntimeMethod* method);
// System.Void System.Number::RoundNumber(System.NumberBuffer&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Number_RoundNumber_mEC3B9B63F68460A64F6F6913BB80F3BEBB780F07 (NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * ___number0, int32_t ___pos1, const RuntimeMethod* method);
// System.Boolean System.Buffers.Text.Utf8Formatter::TryFormatDecimalF(System.NumberBuffer&,System.Span`1<System.Byte>,System.Int32&,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatDecimalF_mB3F592FC02FDB10D2F065AAC4993754DCE801384 (NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * ___number0, Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  ___destination1, int32_t* ___bytesWritten2, uint8_t ___precision3, const RuntimeMethod* method);
// System.Boolean System.Buffers.Text.Utf8Formatter::TryFormatDecimalE(System.NumberBuffer&,System.Span`1<System.Byte>,System.Int32&,System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatDecimalE_m5EE850421F5ECD53EB303F5E20F42E989BC7B679 (NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * ___number0, Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  ___destination1, int32_t* ___bytesWritten2, uint8_t ___precision3, uint8_t ___exponentSymbol4, const RuntimeMethod* method);
// System.Boolean System.ThrowHelper::TryFormatThrowFormatException(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThrowHelper_TryFormatThrowFormatException_mAE469FD4BD034BFD4FB18C512DAD188188AADFCA (int32_t* ___bytesWritten0, const RuntimeMethod* method);
// System.ReadOnlySpan`1<T> System.Span`1<System.Byte>::op_Implicit(System.Span`1<T>)
inline ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  Span_1_op_Implicit_m4DF231FE4EDB6F473374D63CC83755F09BF582F5 (Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  ___span0, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  (*) (Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 , const RuntimeMethod*))Span_1_op_Implicit_m4DF231FE4EDB6F473374D63CC83755F09BF582F5_gshared)(___span0, method);
}
// System.Int32 System.Span`1<System.Byte>::get_Length()
inline int32_t Span_1_get_Length_m4BFDA5E41279728ADF75E310F780E357ECB1923B_inline (Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *, const RuntimeMethod*))Span_1_get_Length_m4BFDA5E41279728ADF75E310F780E357ECB1923B_gshared_inline)(__this, method);
}
// T& modreq(System.Runtime.InteropServices.InAttribute) System.ReadOnlySpan`1<System.Byte>::get_Item(System.Int32)
inline uint8_t* ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_inline (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *, int32_t, const RuntimeMethod*))ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_gshared_inline)(__this, ___index0, method);
}
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Boolean System.ThrowHelper::TryParseThrowFormatException<System.Decimal>(T&,System.Int32&)
inline bool ThrowHelper_TryParseThrowFormatException_TisDecimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_m4D90369D4FECA72454279EE77D57AE7E65573515 (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * ___value0, int32_t* ___bytesConsumed1, const RuntimeMethod* method)
{
	return ((  bool (*) (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 *, int32_t*, const RuntimeMethod*))ThrowHelper_TryParseThrowFormatException_TisDecimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_m4D90369D4FECA72454279EE77D57AE7E65573515_gshared)(___value0, ___bytesConsumed1, method);
}
// System.Boolean System.Buffers.Text.Utf8Parser::TryParseNumber(System.ReadOnlySpan`1<System.Byte>,System.NumberBuffer&,System.Int32&,System.Buffers.Text.Utf8Parser/ParseNumberOptions,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseNumber_m18BE8E49AA5F029B6111509C59D74FFA0F35E38C (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  ___source0, NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * ___number1, int32_t* ___bytesConsumed2, int32_t ___options3, bool* ___textUsedExponentNotation4, const RuntimeMethod* method);
// System.Boolean System.Number::NumberBufferToDecimal(System.NumberBuffer&,System.Decimal&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Number_NumberBufferToDecimal_m9EC553B819A7A5F0260E71EE5684E7EA7CEE6D42 (NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * ___number0, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * ___value1, const RuntimeMethod* method);
// System.Int32 System.ReadOnlySpan`1<System.Byte>::get_Length()
inline int32_t ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_inline (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_gshared_inline)(__this, method);
}
// System.Boolean System.Buffers.Text.ParserHelpers::IsDigit(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ParserHelpers_IsDigit_m741C974EC477EA1F49439BA55D1C3142EA1D784D_inline (int32_t ___i0, const RuntimeMethod* method);
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::Slice(System.Int32,System.Int32)
inline ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  ReadOnlySpan_1_Slice_m750CD52402E65B69E811EF1A7245A9283C8EEFDE_inline (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 * __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  (*) (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *, int32_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1_Slice_m750CD52402E65B69E811EF1A7245A9283C8EEFDE_gshared_inline)(__this, ___start0, ___length1, method);
}
// System.Void System.ReadOnlySpan`1<System.Byte>::CopyTo(System.Span`1<T>)
inline void ReadOnlySpan_1_CopyTo_m4252FBCA62EB3368E39115E35C1E4D74B89C53DA (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 * __this, Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  ___destination0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *, Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 , const RuntimeMethod*))ReadOnlySpan_1_CopyTo_m4252FBCA62EB3368E39115E35C1E4D74B89C53DA_gshared)(__this, ___destination0, method);
}
// System.Span`1<T> System.Span`1<System.Byte>::Slice(System.Int32)
inline Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  Span_1_Slice_mC8E25AC937B49CDD57AA85FF493D7F42595F8EAA_inline (Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 * __this, int32_t ___start0, const RuntimeMethod* method)
{
	return ((  Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  (*) (Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *, int32_t, const RuntimeMethod*))Span_1_Slice_mC8E25AC937B49CDD57AA85FF493D7F42595F8EAA_gshared_inline)(__this, ___start0, method);
}
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::Slice(System.Int32)
inline ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  ReadOnlySpan_1_Slice_m7069C54604C1694CDCF61CE35A3A09F55D9C9FDA_inline (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 * __this, int32_t ___start0, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  (*) (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *, int32_t, const RuntimeMethod*))ReadOnlySpan_1_Slice_m7069C54604C1694CDCF61CE35A3A09F55D9C9FDA_gshared_inline)(__this, ___start0, method);
}
// System.Boolean System.Buffers.Text.Utf8Parser::TryParseUInt32D(System.ReadOnlySpan`1<System.Byte>,System.UInt32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseUInt32D_m5F723DCD7B0E8614C4BC8DC76816B62AAFED195E (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  ___source0, uint32_t* ___value1, int32_t* ___bytesConsumed2, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowIndexOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexOutOfRangeException_m4D1EB8558F17DFE372ECF87D9BCAD112A7F5E6BC (const RuntimeMethod* method);
// System.Void* System.IntPtr::ToPointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m5C7CE32B14B6E30467B378052FEA25300833C61F_inline (intptr_t* __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentException_InvalidTypeWithPointersNotSupported(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_m4A71872D4B069AF36758A61E4CA3FB663B4E8EC4 (Type_t * ___type0, const RuntimeMethod* method);
// System.Void System.IntPtr::.ctor(System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_mBB7AF6DA6350129AD6422DE474FD52F715CC0C40_inline (intptr_t* __this, void* ___value0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Int32 System.SpanHelpers::IndexOf(System.Byte&,System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_m996881920138B2EC72C814473789D6AB958B92F2 (uint8_t* ___searchSpace0, uint8_t ___value1, int32_t ___length2, const RuntimeMethod* method);
// System.Int32 System.SpanHelpers::IndexOf(System.Char&,System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_m0740DDBBE5723E3595EADF2552551F636C18A259 (Il2CppChar* ___searchSpace0, Il2CppChar ___value1, int32_t ___length2, const RuntimeMethod* method);
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(System.Pinnable`1<T>,System.IntPtr,System.Int32)
inline void ReadOnlySpan_1__ctor_m4CA9E88EFFD291B2EC7CA13E284B5E77D1EF0994_inline (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 * __this, Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 * ___pinnable0, intptr_t ___byteOffset1, int32_t ___length2, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *, Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 *, intptr_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m4CA9E88EFFD291B2EC7CA13E284B5E77D1EF0994_gshared_inline)(__this, ___pinnable0, ___byteOffset1, ___length2, method);
}
// System.Void System.Span`1<System.Byte>::.ctor(System.Pinnable`1<T>,System.IntPtr,System.Int32)
inline void Span_1__ctor_mFF8F544A7E3798F8239A0FEB4D32301758CBFCCA_inline (Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 * __this, Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 * ___pinnable0, intptr_t ___byteOffset1, int32_t ___length2, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *, Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 *, intptr_t, int32_t, const RuntimeMethod*))Span_1__ctor_mFF8F544A7E3798F8239A0FEB4D32301758CBFCCA_gshared_inline)(__this, ___pinnable0, ___byteOffset1, ___length2, method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int16 System.Buffers.Binary.BinaryPrimitives::ReverseEndianness(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t BinaryPrimitives_ReverseEndianness_m8876275E8BB85919AF8D1502C7FF7C7C74B2C43C (int16_t ___value0, const RuntimeMethod* method)
{
	{
		int16_t L_0 = ___value0;
		int16_t L_1 = ___value0;
		return ((int16_t)((int16_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)255)))<<(int32_t)8))|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)65280)))>>(int32_t)8))))));
	}
}
// System.Int32 System.Buffers.Binary.BinaryPrimitives::ReverseEndianness(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BinaryPrimitives_ReverseEndianness_mCE965B137F559DCC5D929E83D08CFD360DCA56D0 (int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		uint32_t L_1;
		L_1 = BinaryPrimitives_ReverseEndianness_m7C562C76F215F77432B9600686CB25A54E88CC20_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int64 System.Buffers.Binary.BinaryPrimitives::ReverseEndianness(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BinaryPrimitives_ReverseEndianness_mFA572A602247E6FA6B42E96E59EE84EDB0EFC1E4 (int64_t ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___value0;
		uint64_t L_1;
		L_1 = BinaryPrimitives_ReverseEndianness_m6268D4E81221B0851A9F12D3446F3B488B804696_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.UInt32 System.Buffers.Binary.BinaryPrimitives::ReverseEndianness(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BinaryPrimitives_ReverseEndianness_m7C562C76F215F77432B9600686CB25A54E88CC20 (uint32_t ___value0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint32_t L_0 = ___value0;
		V_0 = ((int32_t)((int32_t)L_0&(int32_t)((int32_t)16711935)));
		uint32_t L_1 = ___value0;
		V_1 = ((int32_t)((int32_t)L_1&(int32_t)((int32_t)-16711936)));
		uint32_t L_2 = V_0;
		uint32_t L_3 = V_0;
		uint32_t L_4 = V_1;
		uint32_t L_5 = V_1;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_2>>8))|(int32_t)((int32_t)((int32_t)L_3<<(int32_t)((int32_t)24))))), (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_4<<(int32_t)8))|(int32_t)((int32_t)((uint32_t)L_5>>((int32_t)24)))))));
	}
}
// System.UInt64 System.Buffers.Binary.BinaryPrimitives::ReverseEndianness(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t BinaryPrimitives_ReverseEndianness_m6268D4E81221B0851A9F12D3446F3B488B804696 (uint64_t ___value0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___value0;
		uint32_t L_1;
		L_1 = BinaryPrimitives_ReverseEndianness_m7C562C76F215F77432B9600686CB25A54E88CC20_inline(((int32_t)((uint32_t)L_0)), /*hidden argument*/NULL);
		uint64_t L_2 = ___value0;
		uint32_t L_3;
		L_3 = BinaryPrimitives_ReverseEndianness_m7C562C76F215F77432B9600686CB25A54E88CC20_inline(((int32_t)((uint32_t)((int64_t)((uint64_t)L_2>>((int32_t)32))))), /*hidden argument*/NULL);
		return ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_1))<<(int32_t)((int32_t)32))), (int64_t)((int64_t)((uint64_t)L_3))));
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
// System.UInt32 System.DecimalDecCalc::D32DivMod1E9(System.UInt32,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t DecimalDecCalc_D32DivMod1E9_mAD8A67341D4FAFC5C7B8166220023AA68003ABBF (uint32_t ___hi320, uint32_t* ___lo321, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		uint32_t L_0 = ___hi320;
		uint32_t* L_1 = ___lo321;
		int32_t L_2 = *((uint32_t*)L_1);
		V_0 = ((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_0))<<(int32_t)((int32_t)32)))|(int64_t)((int64_t)((uint64_t)((uint32_t)((uint32_t)L_2))))));
		uint32_t* L_3 = ___lo321;
		uint64_t L_4 = V_0;
		*((int32_t*)L_3) = (int32_t)((int32_t)((uint32_t)((int64_t)((uint64_t)(int64_t)L_4/(uint64_t)(int64_t)((int64_t)((int64_t)((int32_t)1000000000)))))));
		uint64_t L_5 = V_0;
		return ((int32_t)((uint32_t)((int64_t)((uint64_t)(int64_t)L_5%(uint64_t)(int64_t)((int64_t)((int64_t)((int32_t)1000000000)))))));
	}
}
// System.UInt32 System.DecimalDecCalc::DecDivMod1E9(System.MutableDecimal&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t DecimalDecCalc_DecDivMod1E9_mEBD288904D9655A6FFF62BA3620C6C55FF28B8B6 (MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * ___value0, const RuntimeMethod* method)
{
	{
		MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * L_0 = ___value0;
		uint32_t* L_1 = L_0->get_address_of_High_1();
		uint32_t L_2;
		L_2 = DecimalDecCalc_D32DivMod1E9_mAD8A67341D4FAFC5C7B8166220023AA68003ABBF(0, (uint32_t*)L_1, /*hidden argument*/NULL);
		MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * L_3 = ___value0;
		uint32_t* L_4 = L_3->get_address_of_Mid_3();
		uint32_t L_5;
		L_5 = DecimalDecCalc_D32DivMod1E9_mAD8A67341D4FAFC5C7B8166220023AA68003ABBF(L_2, (uint32_t*)L_4, /*hidden argument*/NULL);
		MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * L_6 = ___value0;
		uint32_t* L_7 = L_6->get_address_of_Low_2();
		uint32_t L_8;
		L_8 = DecimalDecCalc_D32DivMod1E9_mAD8A67341D4FAFC5C7B8166220023AA68003ABBF(L_5, (uint32_t*)L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Void System.DecimalDecCalc::DecAddInt32(System.MutableDecimal&,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecimalDecCalc_DecAddInt32_mCA42EB3D01D859FA31D304138E4BEF39FEB549AE (MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * ___value0, uint32_t ___i1, const RuntimeMethod* method)
{
	{
		MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * L_0 = ___value0;
		uint32_t* L_1 = L_0->get_address_of_Low_2();
		uint32_t L_2 = ___i1;
		bool L_3;
		L_3 = DecimalDecCalc_D32AddCarry_m12237332B16193F0B942AEFC955A62400D3F51B9((uint32_t*)L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * L_4 = ___value0;
		uint32_t* L_5 = L_4->get_address_of_Mid_3();
		bool L_6;
		L_6 = DecimalDecCalc_D32AddCarry_m12237332B16193F0B942AEFC955A62400D3F51B9((uint32_t*)L_5, 1, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0029;
		}
	}
	{
		MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * L_7 = ___value0;
		uint32_t* L_8 = L_7->get_address_of_High_1();
		bool L_9;
		L_9 = DecimalDecCalc_D32AddCarry_m12237332B16193F0B942AEFC955A62400D3F51B9((uint32_t*)L_8, 1, /*hidden argument*/NULL);
	}

IL_0029:
	{
		return;
	}
}
// System.Boolean System.DecimalDecCalc::D32AddCarry(System.UInt32&,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DecimalDecCalc_D32AddCarry_m12237332B16193F0B942AEFC955A62400D3F51B9 (uint32_t* ___value0, uint32_t ___i1, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint32_t* L_0 = ___value0;
		int32_t L_1 = *((uint32_t*)L_0);
		V_0 = L_1;
		uint32_t L_2 = V_0;
		uint32_t L_3 = ___i1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3));
		uint32_t* L_4 = ___value0;
		uint32_t L_5 = V_1;
		*((int32_t*)L_4) = (int32_t)L_5;
		uint32_t L_6 = V_1;
		uint32_t L_7 = V_0;
		if ((!(((uint32_t)L_6) >= ((uint32_t)L_7))))
		{
			goto IL_0013;
		}
	}
	{
		uint32_t L_8 = V_1;
		uint32_t L_9 = ___i1;
		return (bool)((!(((uint32_t)L_8) >= ((uint32_t)L_9)))? 1 : 0);
	}

IL_0013:
	{
		return (bool)1;
	}
}
// System.Void System.DecimalDecCalc::DecMul10(System.MutableDecimal&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecimalDecCalc_DecMul10_m937563702D52CBD29F01CC75B62F626BEC117892 (MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * ___value0, const RuntimeMethod* method)
{
	MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * L_0 = ___value0;
		MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D  L_1 = (*(MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D *)L_0);
		V_0 = L_1;
		MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * L_2 = ___value0;
		DecimalDecCalc_DecShiftLeft_m63A7A170CA5CF4A864BAAD95D88C299D5AFB71F3((MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D *)L_2, /*hidden argument*/NULL);
		MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * L_3 = ___value0;
		DecimalDecCalc_DecShiftLeft_m63A7A170CA5CF4A864BAAD95D88C299D5AFB71F3((MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D *)L_3, /*hidden argument*/NULL);
		MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * L_4 = ___value0;
		MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D  L_5 = V_0;
		DecimalDecCalc_DecAdd_m52E651ADFE94ACFD0CDDC8C14A50D2830E46E3D5((MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D *)L_4, L_5, /*hidden argument*/NULL);
		MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * L_6 = ___value0;
		DecimalDecCalc_DecShiftLeft_m63A7A170CA5CF4A864BAAD95D88C299D5AFB71F3((MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D *)L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.DecimalDecCalc::DecShiftLeft(System.MutableDecimal&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecimalDecCalc_DecShiftLeft_m63A7A170CA5CF4A864BAAD95D88C299D5AFB71F3 (MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * ___value0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	{
		MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * L_0 = ___value0;
		uint32_t L_1 = L_0->get_Low_2();
		if (((int32_t)((int32_t)L_1&(int32_t)((int32_t)-2147483648LL))))
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
	}

IL_0012:
	{
		V_0 = G_B3_0;
		MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * L_2 = ___value0;
		uint32_t L_3 = L_2->get_Mid_3();
		if (((int32_t)((int32_t)L_3&(int32_t)((int32_t)-2147483648LL))))
		{
			goto IL_0024;
		}
	}
	{
		G_B6_0 = 0;
		goto IL_0025;
	}

IL_0024:
	{
		G_B6_0 = 1;
	}

IL_0025:
	{
		V_1 = G_B6_0;
		MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * L_4 = ___value0;
		MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * L_5 = ___value0;
		uint32_t L_6 = L_5->get_Low_2();
		L_4->set_Low_2(((int32_t)((int32_t)L_6<<(int32_t)1)));
		MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * L_7 = ___value0;
		MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * L_8 = ___value0;
		uint32_t L_9 = L_8->get_Mid_3();
		uint32_t L_10 = V_0;
		L_7->set_Mid_3(((int32_t)((int32_t)((int32_t)((int32_t)L_9<<(int32_t)1))|(int32_t)L_10)));
		MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * L_11 = ___value0;
		MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * L_12 = ___value0;
		uint32_t L_13 = L_12->get_High_1();
		uint32_t L_14 = V_1;
		L_11->set_High_1(((int32_t)((int32_t)((int32_t)((int32_t)L_13<<(int32_t)1))|(int32_t)L_14)));
		return;
	}
}
// System.Void System.DecimalDecCalc::DecAdd(System.MutableDecimal&,System.MutableDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecimalDecCalc_DecAdd_m52E651ADFE94ACFD0CDDC8C14A50D2830E46E3D5 (MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * ___value0, MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D  ___d1, const RuntimeMethod* method)
{
	{
		MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * L_0 = ___value0;
		uint32_t* L_1 = L_0->get_address_of_Low_2();
		MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D  L_2 = ___d1;
		uint32_t L_3 = L_2.get_Low_2();
		bool L_4;
		L_4 = DecimalDecCalc_D32AddCarry_m12237332B16193F0B942AEFC955A62400D3F51B9((uint32_t*)L_1, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * L_5 = ___value0;
		uint32_t* L_6 = L_5->get_address_of_Mid_3();
		bool L_7;
		L_7 = DecimalDecCalc_D32AddCarry_m12237332B16193F0B942AEFC955A62400D3F51B9((uint32_t*)L_6, 1, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_002e;
		}
	}
	{
		MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * L_8 = ___value0;
		uint32_t* L_9 = L_8->get_address_of_High_1();
		bool L_10;
		L_10 = DecimalDecCalc_D32AddCarry_m12237332B16193F0B942AEFC955A62400D3F51B9((uint32_t*)L_9, 1, /*hidden argument*/NULL);
	}

IL_002e:
	{
		MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * L_11 = ___value0;
		uint32_t* L_12 = L_11->get_address_of_Mid_3();
		MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D  L_13 = ___d1;
		uint32_t L_14 = L_13.get_Mid_3();
		bool L_15;
		L_15 = DecimalDecCalc_D32AddCarry_m12237332B16193F0B942AEFC955A62400D3F51B9((uint32_t*)L_12, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_004e;
		}
	}
	{
		MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * L_16 = ___value0;
		uint32_t* L_17 = L_16->get_address_of_High_1();
		bool L_18;
		L_18 = DecimalDecCalc_D32AddCarry_m12237332B16193F0B942AEFC955A62400D3F51B9((uint32_t*)L_17, 1, /*hidden argument*/NULL);
	}

IL_004e:
	{
		MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * L_19 = ___value0;
		uint32_t* L_20 = L_19->get_address_of_High_1();
		MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D  L_21 = ___d1;
		uint32_t L_22 = L_21.get_High_1();
		bool L_23;
		L_23 = DecimalDecCalc_D32AddCarry_m12237332B16193F0B942AEFC955A62400D3F51B9((uint32_t*)L_20, L_22, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m7D7D024DA2EA05AEDF8B8C470F678A5DA96C8EB8 (EmbeddedAttribute_t9B89B1C38B332E83EF5D9D1D6F6088C7AC3E6EFB * __this, const RuntimeMethod* method)
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
// System.Int32 System.Numerics.Hashing.HashHelpers::Combine(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_Combine_m0B422F3A90AC3CD046375C8195F8ED339B83ED46 (int32_t ___h10, int32_t ___h21, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		int32_t L_0 = ___h10;
		int32_t L_1 = ___h10;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0<<(int32_t)5))|(int32_t)((int32_t)((uint32_t)L_1>>((int32_t)27)))));
		uint32_t L_2 = V_0;
		int32_t L_3 = ___h10;
		int32_t L_4 = ___h21;
		return ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3))^(int32_t)L_4));
	}
}
// System.Void System.Numerics.Hashing.HashHelpers::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashHelpers__cctor_mE4D846284DBD325D39520B0D94CE6D08B7A937E2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t554F555DED6A50C2365AB566A880644171B50636_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_0;
		L_0 = Guid_NewGuid_m5BD19325820690ED6ECA31D67BC2CD474DC4FDB0(/*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Guid_GetHashCode_mD32F5054E937C98B3D082594B3849808F1E92AE7((Guid_t *)(&V_0), /*hidden argument*/NULL);
		((HashHelpers_t554F555DED6A50C2365AB566A880644171B50636_StaticFields*)il2cpp_codegen_static_fields_for(HashHelpers_t554F555DED6A50C2365AB566A880644171B50636_il2cpp_TypeInfo_var))->set_RandomSeed_0(L_1);
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
// System.Void System.Runtime.CompilerServices.IsByRefLikeAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsByRefLikeAttribute__ctor_m3F813C04C0FAF02B5AF712ED98929300CD6E44DD (IsByRefLikeAttribute_t4ED9D8CF7709ED7300B718C603BBF8F8AF65EF38 * __this, const RuntimeMethod* method)
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
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_m07A8C937D13DE79AF8ED555F18E5AE9FDA6C3879 (IsReadOnlyAttribute_tEE4069DE19AA2D2FEF7D3142EAE79311F7BB26E9 * __this, const RuntimeMethod* method)
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
// System.ReadOnlyMemory`1<System.Char> System.MemoryExtensions::AsMemory(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyMemory_1_t8210C81C55F6DD2001CB109C5F2BA0DA96F947DE  MemoryExtensions_AsMemory_m9F2378B1710076CA61B1FC3E687A06BC6063A9DC (String_t* ___text0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyMemory_1__ctor_m0DAE24A1907E131407ECEAE406269A6A57999CFA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlyMemory_1_t8210C81C55F6DD2001CB109C5F2BA0DA96F947DE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___text0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1 = ___start1;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___length2;
		if (!L_2)
		{
			goto IL_000f;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m86EB6B05BDE45B6F92A7599E80E0179C17391AB5(1, /*hidden argument*/NULL);
	}

IL_000f:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ReadOnlyMemory_1_t8210C81C55F6DD2001CB109C5F2BA0DA96F947DE ));
		ReadOnlyMemory_1_t8210C81C55F6DD2001CB109C5F2BA0DA96F947DE  L_3 = V_0;
		return L_3;
	}

IL_0019:
	{
		int32_t L_4 = ___start1;
		String_t* L_5 = ___text0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_5, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_7 = ___length2;
		String_t* L_8 = ___text0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_8, /*hidden argument*/NULL);
		int32_t L_10 = ___start1;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)L_10))))))
		{
			goto IL_0033;
		}
	}

IL_002d:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m86EB6B05BDE45B6F92A7599E80E0179C17391AB5(1, /*hidden argument*/NULL);
	}

IL_0033:
	{
		String_t* L_11 = ___text0;
		int32_t L_12 = ___start1;
		int32_t L_13 = ___length2;
		ReadOnlyMemory_1_t8210C81C55F6DD2001CB109C5F2BA0DA96F947DE  L_14;
		memset((&L_14), 0, sizeof(L_14));
		ReadOnlyMemory_1__ctor_m0DAE24A1907E131407ECEAE406269A6A57999CFA_inline((&L_14), L_11, L_12, L_13, /*hidden argument*/ReadOnlyMemory_1__ctor_m0DAE24A1907E131407ECEAE406269A6A57999CFA_RuntimeMethod_var);
		return L_14;
	}
}
// System.IntPtr System.MemoryExtensions::MeasureStringAdjustment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MemoryExtensions_MeasureStringAdjustment_m8E2719E3CCAD24803BEF8B9C9873DDFAA528C762 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_AsRef_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m0D4660657D5ED75911BE5AB9BFF6B695957BAB9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_As_TisPinnable_1_t95E8BF0F62016718CAF24D71446F85A32986715C_m1880DC1B1C8534150F7BE5E5E3CF1F2FFD4E3AA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_ByteOffset_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m13722CE0E9DE760114AB69C5D315B218541FFA6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Il2CppChar* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		V_0 = _stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78;
		String_t* L_0 = V_0;
		V_2 = L_0;
		String_t* L_1 = V_2;
		V_1 = (Il2CppChar*)((uintptr_t)L_1);
		Il2CppChar* L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		Il2CppChar* L_3 = V_1;
		int32_t L_4;
		L_4 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
		V_1 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_3, (int32_t)L_4));
	}

IL_0016:
	{
		String_t* L_5 = V_0;
		Pinnable_1_t95E8BF0F62016718CAF24D71446F85A32986715C * L_6;
		L_6 = Unsafe_As_TisPinnable_1_t95E8BF0F62016718CAF24D71446F85A32986715C_m1880DC1B1C8534150F7BE5E5E3CF1F2FFD4E3AA2_inline(L_5, /*hidden argument*/Unsafe_As_TisPinnable_1_t95E8BF0F62016718CAF24D71446F85A32986715C_m1880DC1B1C8534150F7BE5E5E3CF1F2FFD4E3AA2_RuntimeMethod_var);
		NullCheck(L_6);
		Il2CppChar* L_7 = L_6->get_address_of_Data_0();
		Il2CppChar* L_8 = V_1;
		Il2CppChar* L_9;
		L_9 = Unsafe_AsRef_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m0D4660657D5ED75911BE5AB9BFF6B695957BAB9B_inline((void*)(void*)L_8, /*hidden argument*/Unsafe_AsRef_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m0D4660657D5ED75911BE5AB9BFF6B695957BAB9B_RuntimeMethod_var);
		intptr_t L_10;
		L_10 = Unsafe_ByteOffset_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m13722CE0E9DE760114AB69C5D315B218541FFA6E_inline((Il2CppChar*)L_7, (Il2CppChar*)L_9, /*hidden argument*/Unsafe_ByteOffset_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m13722CE0E9DE760114AB69C5D315B218541FFA6E_RuntimeMethod_var);
		return (intptr_t)L_10;
	}
}
// System.Void System.MemoryExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryExtensions__cctor_mC634116818572F66DC5A4416FB29AFBFCE859EBE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_t3692531D647148747BC65C4610E740AEE9983A40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0;
		L_0 = MemoryExtensions_MeasureStringAdjustment_m8E2719E3CCAD24803BEF8B9C9873DDFAA528C762(/*hidden argument*/NULL);
		((MemoryExtensions_t3692531D647148747BC65C4610E740AEE9983A40_StaticFields*)il2cpp_codegen_static_fields_for(MemoryExtensions_t3692531D647148747BC65C4610E740AEE9983A40_il2cpp_TypeInfo_var))->set_StringAdjustment_0((intptr_t)L_0);
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
// Conversion methods for marshalling of: System.Buffers.MemoryHandle
IL2CPP_EXTERN_C void MemoryHandle_t32246FDA186EE62ADBC37E8AE98087BF6330429C_marshal_pinvoke(const MemoryHandle_t32246FDA186EE62ADBC37E8AE98087BF6330429C& unmarshaled, MemoryHandle_t32246FDA186EE62ADBC37E8AE98087BF6330429C_marshaled_pinvoke& marshaled)
{
	Exception_t* ____pinnable_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_pinnable' of type 'MemoryHandle': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____pinnable_2Exception, NULL);
}
IL2CPP_EXTERN_C void MemoryHandle_t32246FDA186EE62ADBC37E8AE98087BF6330429C_marshal_pinvoke_back(const MemoryHandle_t32246FDA186EE62ADBC37E8AE98087BF6330429C_marshaled_pinvoke& marshaled, MemoryHandle_t32246FDA186EE62ADBC37E8AE98087BF6330429C& unmarshaled)
{
	Exception_t* ____pinnable_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_pinnable' of type 'MemoryHandle': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____pinnable_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Buffers.MemoryHandle
IL2CPP_EXTERN_C void MemoryHandle_t32246FDA186EE62ADBC37E8AE98087BF6330429C_marshal_pinvoke_cleanup(MemoryHandle_t32246FDA186EE62ADBC37E8AE98087BF6330429C_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Buffers.MemoryHandle
IL2CPP_EXTERN_C void MemoryHandle_t32246FDA186EE62ADBC37E8AE98087BF6330429C_marshal_com(const MemoryHandle_t32246FDA186EE62ADBC37E8AE98087BF6330429C& unmarshaled, MemoryHandle_t32246FDA186EE62ADBC37E8AE98087BF6330429C_marshaled_com& marshaled)
{
	Exception_t* ____pinnable_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_pinnable' of type 'MemoryHandle': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____pinnable_2Exception, NULL);
}
IL2CPP_EXTERN_C void MemoryHandle_t32246FDA186EE62ADBC37E8AE98087BF6330429C_marshal_com_back(const MemoryHandle_t32246FDA186EE62ADBC37E8AE98087BF6330429C_marshaled_com& marshaled, MemoryHandle_t32246FDA186EE62ADBC37E8AE98087BF6330429C& unmarshaled)
{
	Exception_t* ____pinnable_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_pinnable' of type 'MemoryHandle': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____pinnable_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Buffers.MemoryHandle
IL2CPP_EXTERN_C void MemoryHandle_t32246FDA186EE62ADBC37E8AE98087BF6330429C_marshal_com_cleanup(MemoryHandle_t32246FDA186EE62ADBC37E8AE98087BF6330429C_marshaled_com& marshaled)
{
}
// System.Void System.Buffers.MemoryHandle::.ctor(System.Void*,System.Runtime.InteropServices.GCHandle,System.Buffers.IPinnable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryHandle__ctor_mD254CBC13788969FCC315DF2B1C8615A945F18B3 (MemoryHandle_t32246FDA186EE62ADBC37E8AE98087BF6330429C * __this, void* ___pointer0, GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___handle1, RuntimeObject* ___pinnable2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___pointer0;
		__this->set__pointer_0((void*)L_0);
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_1 = ___handle1;
		__this->set__handle_1(L_1);
		RuntimeObject* L_2 = ___pinnable2;
		__this->set__pinnable_2(L_2);
		return;
	}
}
IL2CPP_EXTERN_C  void MemoryHandle__ctor_mD254CBC13788969FCC315DF2B1C8615A945F18B3_AdjustorThunk (RuntimeObject * __this, void* ___pointer0, GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___handle1, RuntimeObject* ___pinnable2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MemoryHandle_t32246FDA186EE62ADBC37E8AE98087BF6330429C * _thisAdjusted = reinterpret_cast<MemoryHandle_t32246FDA186EE62ADBC37E8AE98087BF6330429C *>(__this + _offset);
	MemoryHandle__ctor_mD254CBC13788969FCC315DF2B1C8615A945F18B3(_thisAdjusted, ___pointer0, ___handle1, ___pinnable2, method);
}
// System.Void System.Buffers.MemoryHandle::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryHandle_Dispose_mE19418148935D11619DD13966114889837089E9A (MemoryHandle_t32246FDA186EE62ADBC37E8AE98087BF6330429C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPinnable_t5F43661062D3A813291C43D3D17B9FA43963D6F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_0 = __this->get_address_of__handle_1();
		bool L_1;
		L_1 = GCHandle_get_IsAllocated_mEDA4DAC6AD6D881110E96CAFDAB78C068F5B144D((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_2 = __this->get_address_of__handle_1();
		GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->get__pinnable_2();
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_4 = __this->get__pinnable_2();
		NullCheck(L_4);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.Buffers.IPinnable::Unpin() */, IPinnable_t5F43661062D3A813291C43D3D17B9FA43963D6F3_il2cpp_TypeInfo_var, L_4);
		__this->set__pinnable_2((RuntimeObject*)NULL);
	}

IL_0032:
	{
		__this->set__pointer_0((void*)((uintptr_t)0));
		return;
	}
}
IL2CPP_EXTERN_C  void MemoryHandle_Dispose_mE19418148935D11619DD13966114889837089E9A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MemoryHandle_t32246FDA186EE62ADBC37E8AE98087BF6330429C * _thisAdjusted = reinterpret_cast<MemoryHandle_t32246FDA186EE62ADBC37E8AE98087BF6330429C *>(__this + _offset);
	MemoryHandle_Dispose_mE19418148935D11619DD13966114889837089E9A(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean System.Runtime.InteropServices.MemoryMarshal::TryGetString(System.ReadOnlyMemory`1<System.Char>,System.String&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryMarshal_TryGetString_mF59A4FBC01B0F61BFCAD2BA3960B9670FADB0C09 (ReadOnlyMemory_1_t8210C81C55F6DD2001CB109C5F2BA0DA96F947DE  ___memory0, String_t** ___text1, int32_t* ___start2, int32_t* ___length3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyMemory_1_GetObjectStartLength_m9D3D7EA6E312C2FD16F180B249FCB80CB1DFDECF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		RuntimeObject * L_0;
		L_0 = ReadOnlyMemory_1_GetObjectStartLength_m9D3D7EA6E312C2FD16F180B249FCB80CB1DFDECF_inline((ReadOnlyMemory_1_t8210C81C55F6DD2001CB109C5F2BA0DA96F947DE *)(&___memory0), (int32_t*)(&V_0), (int32_t*)(&V_1), /*hidden argument*/ReadOnlyMemory_1_GetObjectStartLength_m9D3D7EA6E312C2FD16F180B249FCB80CB1DFDECF_RuntimeMethod_var);
		String_t* L_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var));
		V_2 = L_1;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t** L_2 = ___text1;
		String_t* L_3 = V_2;
		*((RuntimeObject **)L_2) = (RuntimeObject *)L_3;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_2, (void*)(RuntimeObject *)L_3);
		int32_t* L_4 = ___start2;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		int32_t* L_6 = ___length3;
		int32_t L_7 = V_1;
		*((int32_t*)L_6) = (int32_t)L_7;
		return (bool)1;
	}

IL_001f:
	{
		String_t** L_8 = ___text1;
		*((RuntimeObject **)L_8) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_8, (void*)(RuntimeObject *)NULL);
		int32_t* L_9 = ___start2;
		*((int32_t*)L_9) = (int32_t)0;
		int32_t* L_10 = ___length3;
		*((int32_t*)L_10) = (int32_t)0;
		return (bool)0;
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
// System.Boolean System.MutableDecimal::get_IsNegative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MutableDecimal_get_IsNegative_m6CC9630C1FE5DAABD29CEE9EF5281C37D12CE702 (MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * __this, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = __this->get_Flags_0();
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool MutableDecimal_get_IsNegative_m6CC9630C1FE5DAABD29CEE9EF5281C37D12CE702_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * _thisAdjusted = reinterpret_cast<MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D *>(__this + _offset);
	bool _returnValue;
	_returnValue = MutableDecimal_get_IsNegative_m6CC9630C1FE5DAABD29CEE9EF5281C37D12CE702(_thisAdjusted, method);
	return _returnValue;
}
// System.Void System.MutableDecimal::set_IsNegative(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MutableDecimal_set_IsNegative_mF373061A5BA3F192A2AA544BCB933C81BF71AC67 (MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * __this, bool ___value0, const RuntimeMethod* method)
{
	uint32_t G_B2_0 = 0;
	MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * G_B2_1 = NULL;
	uint32_t G_B1_0 = 0;
	MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	uint32_t G_B3_1 = 0;
	MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * G_B3_2 = NULL;
	{
		uint32_t L_0 = __this->get_Flags_0();
		bool L_1 = ___value0;
		G_B1_0 = ((uint32_t)(((int32_t)((int32_t)L_0&(int32_t)((int32_t)2147483647LL)))));
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = ((uint32_t)(((int32_t)((int32_t)L_0&(int32_t)((int32_t)2147483647LL)))));
			G_B2_1 = __this;
			goto IL_0013;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0018;
	}

IL_0013:
	{
		G_B3_0 = ((int32_t)-2147483648LL);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0018:
	{
		G_B3_2->set_Flags_0(((int32_t)((int32_t)G_B3_1|(int32_t)G_B3_0)));
		return;
	}
}
IL2CPP_EXTERN_C  void MutableDecimal_set_IsNegative_mF373061A5BA3F192A2AA544BCB933C81BF71AC67_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * _thisAdjusted = reinterpret_cast<MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D *>(__this + _offset);
	MutableDecimal_set_IsNegative_mF373061A5BA3F192A2AA544BCB933C81BF71AC67(_thisAdjusted, ___value0, method);
}
// System.Int32 System.MutableDecimal::get_Scale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MutableDecimal_get_Scale_mD47D52938E7026D2EC3AA837BABF7162C4F727A3 (MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * __this, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = __this->get_Flags_0();
		return ((int32_t)((uint8_t)((int32_t)((uint32_t)L_0>>((int32_t)16)))));
	}
}
IL2CPP_EXTERN_C  int32_t MutableDecimal_get_Scale_mD47D52938E7026D2EC3AA837BABF7162C4F727A3_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * _thisAdjusted = reinterpret_cast<MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MutableDecimal_get_Scale_mD47D52938E7026D2EC3AA837BABF7162C4F727A3(_thisAdjusted, method);
	return _returnValue;
}
// System.Void System.MutableDecimal::set_Scale(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MutableDecimal_set_Scale_m9253E0BBFF59D428FF76EA0A530D644053C3075C (MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = __this->get_Flags_0();
		int32_t L_1 = ___value0;
		__this->set_Flags_0(((int32_t)((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)-16711681)))|(int32_t)((int32_t)((int32_t)L_1<<(int32_t)((int32_t)16))))));
		return;
	}
}
IL2CPP_EXTERN_C  void MutableDecimal_set_Scale_m9253E0BBFF59D428FF76EA0A530D644053C3075C_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * _thisAdjusted = reinterpret_cast<MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D *>(__this + _offset);
	MutableDecimal_set_Scale_m9253E0BBFF59D428FF76EA0A530D644053C3075C(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.NUInt::.ctor(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NUInt__ctor_m34A1178C5D59B395E905B670FCF390D1AA5DC85E (NUInt_t6097F6D5A9138404C7786F1B3E1654AD18E030F5 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___value0;
		__this->set__value_0((void*)((uintptr_t)L_0));
		return;
	}
}
IL2CPP_EXTERN_C  void NUInt__ctor_m34A1178C5D59B395E905B670FCF390D1AA5DC85E_AdjustorThunk (RuntimeObject * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NUInt_t6097F6D5A9138404C7786F1B3E1654AD18E030F5 * _thisAdjusted = reinterpret_cast<NUInt_t6097F6D5A9138404C7786F1B3E1654AD18E030F5 *>(__this + _offset);
	NUInt__ctor_m34A1178C5D59B395E905B670FCF390D1AA5DC85E(_thisAdjusted, ___value0, method);
}
// System.Void System.NUInt::.ctor(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NUInt__ctor_mBD99E19E274774DF07488C672C5DFC90F4B21973 (NUInt_t6097F6D5A9138404C7786F1B3E1654AD18E030F5 * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___value0;
		__this->set__value_0((void*)((uintptr_t)L_0));
		return;
	}
}
IL2CPP_EXTERN_C  void NUInt__ctor_mBD99E19E274774DF07488C672C5DFC90F4B21973_AdjustorThunk (RuntimeObject * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NUInt_t6097F6D5A9138404C7786F1B3E1654AD18E030F5 * _thisAdjusted = reinterpret_cast<NUInt_t6097F6D5A9138404C7786F1B3E1654AD18E030F5 *>(__this + _offset);
	NUInt__ctor_mBD99E19E274774DF07488C672C5DFC90F4B21973(_thisAdjusted, ___value0, method);
}
// System.NUInt System.NUInt::op_Explicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NUInt_t6097F6D5A9138404C7786F1B3E1654AD18E030F5  NUInt_op_Explicit_m680513883587956D1452B1EB6D321D4C3A0C8366 (int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		NUInt_t6097F6D5A9138404C7786F1B3E1654AD18E030F5  L_1;
		memset((&L_1), 0, sizeof(L_1));
		NUInt__ctor_m34A1178C5D59B395E905B670FCF390D1AA5DC85E((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void* System.NUInt::op_Explicit(System.NUInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NUInt_op_Explicit_mAC8186F05FC1F16BAEB9A73957491CB24A067D46 (NUInt_t6097F6D5A9138404C7786F1B3E1654AD18E030F5  ___value0, const RuntimeMethod* method)
{
	{
		NUInt_t6097F6D5A9138404C7786F1B3E1654AD18E030F5  L_0 = ___value0;
		void* L_1 = L_0.get__value_0();
		return (void*)(L_1);
	}
}
// System.NUInt System.NUInt::op_Multiply(System.NUInt,System.NUInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NUInt_t6097F6D5A9138404C7786F1B3E1654AD18E030F5  NUInt_op_Multiply_mABFB3E10A51F74FDC0CD9B799B7BF35C2C5D8D85 (NUInt_t6097F6D5A9138404C7786F1B3E1654AD18E030F5  ___left0, NUInt_t6097F6D5A9138404C7786F1B3E1654AD18E030F5  ___right1, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(intptr_t);
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_001e;
		}
	}
	{
		NUInt_t6097F6D5A9138404C7786F1B3E1654AD18E030F5  L_1 = ___left0;
		void* L_2 = L_1.get__value_0();
		NUInt_t6097F6D5A9138404C7786F1B3E1654AD18E030F5  L_3 = ___right1;
		void* L_4 = L_3.get__value_0();
		NUInt_t6097F6D5A9138404C7786F1B3E1654AD18E030F5  L_5;
		memset((&L_5), 0, sizeof(L_5));
		NUInt__ctor_mBD99E19E274774DF07488C672C5DFC90F4B21973((&L_5), ((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((uint64_t)(intptr_t)L_2)), (int64_t)((int64_t)((uint64_t)(intptr_t)L_4)))), /*hidden argument*/NULL);
		return L_5;
	}

IL_001e:
	{
		NUInt_t6097F6D5A9138404C7786F1B3E1654AD18E030F5  L_6 = ___left0;
		void* L_7 = L_6.get__value_0();
		NUInt_t6097F6D5A9138404C7786F1B3E1654AD18E030F5  L_8 = ___right1;
		void* L_9 = L_8.get__value_0();
		NUInt_t6097F6D5A9138404C7786F1B3E1654AD18E030F5  L_10;
		memset((&L_10), 0, sizeof(L_10));
		NUInt__ctor_m34A1178C5D59B395E905B670FCF390D1AA5DC85E((&L_10), ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((uint32_t)(intptr_t)L_7)), (int32_t)((int32_t)((uint32_t)(intptr_t)L_9)))), /*hidden argument*/NULL);
		return L_10;
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
// System.Void System.Number::RoundNumber(System.NumberBuffer&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Number_RoundNumber_mEC3B9B63F68460A64F6F6913BB80F3BEBB780F07 (NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * ___number0, int32_t ___pos1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * L_0 = ___number0;
		Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  L_1;
		L_1 = NumberBuffer_get_Digits_m77F55E994E325F745CBEE5598D24263834F34F3B((NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 *)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = 0;
		goto IL_000f;
	}

IL_000b:
	{
		int32_t L_2 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_000f:
	{
		int32_t L_3 = V_1;
		int32_t L_4 = ___pos1;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_5 = V_1;
		uint8_t* L_6;
		L_6 = Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&V_0), L_5, /*hidden argument*/Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		int32_t L_7 = *((uint8_t*)L_6);
		if (L_7)
		{
			goto IL_000b;
		}
	}

IL_001e:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = ___pos1;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_007c;
		}
	}
	{
		int32_t L_10 = V_1;
		uint8_t* L_11;
		L_11 = Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&V_0), L_10, /*hidden argument*/Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		int32_t L_12 = *((uint8_t*)L_11);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)53))))
		{
			goto IL_007c;
		}
	}
	{
		goto IL_0035;
	}

IL_0031:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1));
	}

IL_0035:
	{
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_15 = V_1;
		uint8_t* L_16;
		L_16 = Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&V_0), ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1)), /*hidden argument*/Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		int32_t L_17 = *((uint8_t*)L_16);
		if ((((int32_t)L_17) == ((int32_t)((int32_t)57))))
		{
			goto IL_0031;
		}
	}

IL_0048:
	{
		int32_t L_18 = V_1;
		if ((((int32_t)L_18) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_19 = V_1;
		uint8_t* L_20;
		L_20 = Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&V_0), ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1)), /*hidden argument*/Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		uint8_t* L_21 = L_20;
		int32_t L_22 = *((uint8_t*)L_21);
		*((int8_t*)L_21) = (int8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1))));
		goto IL_008f;
	}

IL_005e:
	{
		NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * L_23 = ___number0;
		int32_t* L_24 = L_23->get_address_of_Scale_0();
		int32_t* L_25 = L_24;
		int32_t L_26 = *((int32_t*)L_25);
		*((int32_t*)L_25) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
		uint8_t* L_27;
		L_27 = Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&V_0), 0, /*hidden argument*/Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		*((int8_t*)L_27) = (int8_t)((int32_t)49);
		V_1 = 1;
		goto IL_008f;
	}

IL_0078:
	{
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)1));
	}

IL_007c:
	{
		int32_t L_29 = V_1;
		if ((((int32_t)L_29) <= ((int32_t)0)))
		{
			goto IL_008f;
		}
	}
	{
		int32_t L_30 = V_1;
		uint8_t* L_31;
		L_31 = Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&V_0), ((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)1)), /*hidden argument*/Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		int32_t L_32 = *((uint8_t*)L_31);
		if ((((int32_t)L_32) == ((int32_t)((int32_t)48))))
		{
			goto IL_0078;
		}
	}

IL_008f:
	{
		int32_t L_33 = V_1;
		if (L_33)
		{
			goto IL_00a0;
		}
	}
	{
		NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * L_34 = ___number0;
		L_34->set_Scale_0(0);
		NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * L_35 = ___number0;
		L_35->set_IsNegative_1((bool)0);
	}

IL_00a0:
	{
		int32_t L_36 = V_1;
		uint8_t* L_37;
		L_37 = Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&V_0), L_36, /*hidden argument*/Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		*((int8_t*)L_37) = (int8_t)0;
		return;
	}
}
// System.Boolean System.Number::NumberBufferToDecimal(System.NumberBuffer&,System.Decimal&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Number_NumberBufferToDecimal_m9EC553B819A7A5F0260E71EE5684E7EA7CEE6D42 (NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * ___number0, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_As_TisMutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D_TisDecimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_mE2A3068F655E44854F360A5B8315CFA5A9A7706C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D ));
		NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * L_0 = ___number0;
		uint8_t* L_1;
		L_1 = NumberBuffer_get_UnsafeDigits_m95B0D74B60926B0E8788E7E6FDC551E7240F40FE((NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 *)L_0, /*hidden argument*/NULL);
		V_1 = (uint8_t*)L_1;
		NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * L_2 = ___number0;
		int32_t L_3 = L_2->get_Scale_0();
		V_2 = L_3;
		uint8_t* L_4 = V_1;
		int32_t L_5 = *((uint8_t*)L_4);
		if (L_5)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0138;
		}
	}
	{
		V_2 = 0;
		goto IL_0138;
	}

IL_0028:
	{
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)29))))
		{
			goto IL_004e;
		}
	}
	{
		return (bool)0;
	}

IL_002f:
	{
		DecimalDecCalc_DecMul10_m937563702D52CBD29F01CC75B62F626BEC117892((MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D *)(&V_0), /*hidden argument*/NULL);
		uint8_t* L_8 = V_1;
		int32_t L_9 = *((uint8_t*)L_8);
		if (!L_9)
		{
			goto IL_004a;
		}
	}
	{
		uint8_t* L_10 = V_1;
		uint8_t* L_11 = (uint8_t*)L_10;
		V_1 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_11, (int32_t)1));
		int32_t L_12 = *((uint8_t*)L_11);
		DecimalDecCalc_DecAddInt32_mCA42EB3D01D859FA31D304138E4BEF39FEB549AE((MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D *)(&V_0), ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)((int32_t)48))), /*hidden argument*/NULL);
	}

IL_004a:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1));
	}

IL_004e:
	{
		int32_t L_14 = V_2;
		if ((((int32_t)L_14) > ((int32_t)0)))
		{
			goto IL_005b;
		}
	}
	{
		uint8_t* L_15 = V_1;
		int32_t L_16 = *((uint8_t*)L_15);
		if (!L_16)
		{
			goto IL_00af;
		}
	}
	{
		int32_t L_17 = V_2;
		if ((((int32_t)L_17) <= ((int32_t)((int32_t)-28))))
		{
			goto IL_00af;
		}
	}

IL_005b:
	{
		MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D  L_18 = V_0;
		uint32_t L_19 = L_18.get_High_1();
		if ((!(((uint32_t)L_19) >= ((uint32_t)((int32_t)429496729)))))
		{
			goto IL_002f;
		}
	}
	{
		MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D  L_20 = V_0;
		uint32_t L_21 = L_20.get_High_1();
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)429496729)))))
		{
			goto IL_00af;
		}
	}
	{
		MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D  L_22 = V_0;
		uint32_t L_23 = L_22.get_Mid_3();
		if ((!(((uint32_t)L_23) >= ((uint32_t)((int32_t)-1717986919)))))
		{
			goto IL_002f;
		}
	}
	{
		MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D  L_24 = V_0;
		uint32_t L_25 = L_24.get_Mid_3();
		if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)-1717986919)))))
		{
			goto IL_00af;
		}
	}
	{
		MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D  L_26 = V_0;
		uint32_t L_27 = L_26.get_Low_2();
		if ((!(((uint32_t)L_27) >= ((uint32_t)((int32_t)-1717986919)))))
		{
			goto IL_002f;
		}
	}
	{
		MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D  L_28 = V_0;
		uint32_t L_29 = L_28.get_Low_2();
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)-1717986919)))))
		{
			goto IL_00af;
		}
	}
	{
		uint8_t* L_30 = V_1;
		int32_t L_31 = *((uint8_t*)L_30);
		if ((((int32_t)L_31) <= ((int32_t)((int32_t)53))))
		{
			goto IL_002f;
		}
	}

IL_00af:
	{
		uint8_t* L_32 = V_1;
		uint8_t* L_33 = (uint8_t*)L_32;
		V_1 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_33, (int32_t)1));
		int32_t L_34 = *((uint8_t*)L_33);
		if ((((int32_t)L_34) < ((int32_t)((int32_t)53))))
		{
			goto IL_0138;
		}
	}
	{
		V_3 = (bool)1;
		uint8_t* L_35 = V_1;
		int32_t L_36 = *((uint8_t*)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_35, (int32_t)1)));
		if ((!(((uint32_t)L_36) == ((uint32_t)((int32_t)53)))))
		{
			goto IL_00ef;
		}
	}
	{
		uint8_t* L_37 = V_1;
		int32_t L_38 = *((uint8_t*)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_37, (int32_t)2)));
		if (((int32_t)((int32_t)L_38%(int32_t)2)))
		{
			goto IL_00ef;
		}
	}
	{
		V_4 = ((int32_t)20);
		goto IL_00db;
	}

IL_00d1:
	{
		uint8_t* L_39 = V_1;
		V_1 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_39, (int32_t)1));
		int32_t L_40 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_40, (int32_t)1));
	}

IL_00db:
	{
		uint8_t* L_41 = V_1;
		int32_t L_42 = *((uint8_t*)L_41);
		if ((!(((uint32_t)L_42) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_00e5;
		}
	}
	{
		int32_t L_43 = V_4;
		if (L_43)
		{
			goto IL_00d1;
		}
	}

IL_00e5:
	{
		uint8_t* L_44 = V_1;
		int32_t L_45 = *((uint8_t*)L_44);
		if (!L_45)
		{
			goto IL_00ed;
		}
	}
	{
		int32_t L_46 = V_4;
		if (L_46)
		{
			goto IL_00ef;
		}
	}

IL_00ed:
	{
		V_3 = (bool)0;
	}

IL_00ef:
	{
		bool L_47 = V_3;
		if (!L_47)
		{
			goto IL_0138;
		}
	}
	{
		DecimalDecCalc_DecAddInt32_mCA42EB3D01D859FA31D304138E4BEF39FEB549AE((MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D *)(&V_0), 1, /*hidden argument*/NULL);
		MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D  L_48 = V_0;
		uint32_t L_49 = L_48.get_High_1();
		MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D  L_50 = V_0;
		uint32_t L_51 = L_50.get_Mid_3();
		MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D  L_52 = V_0;
		uint32_t L_53 = L_52.get_Low_2();
		if (((int32_t)((int32_t)((int32_t)((int32_t)L_49|(int32_t)L_51))|(int32_t)L_53)))
		{
			goto IL_0138;
		}
	}
	{
		(&V_0)->set_High_1(((int32_t)429496729));
		(&V_0)->set_Mid_3(((int32_t)-1717986919));
		(&V_0)->set_Low_2(((int32_t)-1717986918));
		int32_t L_54 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1));
	}

IL_0138:
	{
		int32_t L_55 = V_2;
		if ((((int32_t)L_55) <= ((int32_t)0)))
		{
			goto IL_013e;
		}
	}
	{
		return (bool)0;
	}

IL_013e:
	{
		int32_t L_56 = V_2;
		if ((((int32_t)L_56) > ((int32_t)((int32_t)-29))))
		{
			goto IL_0166;
		}
	}
	{
		(&V_0)->set_High_1(0);
		(&V_0)->set_Low_2(0);
		(&V_0)->set_Mid_3(0);
		MutableDecimal_set_Scale_m9253E0BBFF59D428FF76EA0A530D644053C3075C((MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D *)(&V_0), ((int32_t)28), /*hidden argument*/NULL);
		goto IL_016f;
	}

IL_0166:
	{
		int32_t L_57 = V_2;
		MutableDecimal_set_Scale_m9253E0BBFF59D428FF76EA0A530D644053C3075C((MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D *)(&V_0), ((-L_57)), /*hidden argument*/NULL);
	}

IL_016f:
	{
		NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * L_58 = ___number0;
		bool L_59 = L_58->get_IsNegative_1();
		MutableDecimal_set_IsNegative_mF373061A5BA3F192A2AA544BCB933C81BF71AC67((MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D *)(&V_0), L_59, /*hidden argument*/NULL);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * L_60 = ___value1;
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * L_61;
		L_61 = Unsafe_As_TisMutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D_TisDecimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_mE2A3068F655E44854F360A5B8315CFA5A9A7706C_inline((MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D *)(&V_0), /*hidden argument*/Unsafe_As_TisMutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D_TisDecimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_mE2A3068F655E44854F360A5B8315CFA5A9A7706C_RuntimeMethod_var);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_62 = (*(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 *)L_61);
		*(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 *)L_60 = L_62;
		return (bool)1;
	}
}
// System.Void System.Number::DecimalToNumber(System.Decimal,System.NumberBuffer&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Number_DecimalToNumber_mDB370C6FEDCCE206F35651207AE2E13ABF525408 (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value0, NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * ___number1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_As_TisDecimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_TisMutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D_mF24EB96C9EC3B1D2268AD5413133398FE712084E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * V_0 = NULL;
	Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	uint32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * L_0;
		L_0 = Unsafe_As_TisDecimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_TisMutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D_mF24EB96C9EC3B1D2268AD5413133398FE712084E_inline((Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 *)(&___value0), /*hidden argument*/Unsafe_As_TisDecimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_TisMutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D_mF24EB96C9EC3B1D2268AD5413133398FE712084E_RuntimeMethod_var);
		V_0 = (MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D *)L_0;
		NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * L_1 = ___number1;
		Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  L_2;
		L_2 = NumberBuffer_get_Digits_m77F55E994E325F745CBEE5598D24263834F34F3B((NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 *)L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * L_3 = ___number1;
		MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * L_4 = V_0;
		bool L_5;
		L_5 = MutableDecimal_get_IsNegative_m6CC9630C1FE5DAABD29CEE9EF5281C37D12CE702((MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D *)L_4, /*hidden argument*/NULL);
		L_3->set_IsNegative_1(L_5);
		V_2 = ((int32_t)29);
		goto IL_0056;
	}

IL_0020:
	{
		MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * L_6 = V_0;
		uint32_t L_7;
		L_7 = DecimalDecCalc_DecDivMod1E9_mEBD288904D9655A6FFF62BA3620C6C55FF28B8B6((MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D *)L_6, /*hidden argument*/NULL);
		V_7 = L_7;
		V_8 = 0;
		goto IL_0050;
	}

IL_002d:
	{
		int32_t L_8 = V_2;
		int32_t L_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1));
		V_2 = L_9;
		uint8_t* L_10;
		L_10 = Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&V_1), L_9, /*hidden argument*/Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		uint32_t L_11 = V_7;
		*((int8_t*)L_10) = (int8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((uint32_t)(int32_t)L_11%(uint32_t)(int32_t)((int32_t)10))), (int32_t)((int32_t)48)))));
		uint32_t L_12 = V_7;
		V_7 = ((int32_t)((uint32_t)(int32_t)L_12/(uint32_t)(int32_t)((int32_t)10)));
		int32_t L_13 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0050:
	{
		int32_t L_14 = V_8;
		if ((((int32_t)L_14) < ((int32_t)((int32_t)9))))
		{
			goto IL_002d;
		}
	}

IL_0056:
	{
		MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * L_15 = V_0;
		uint32_t L_16 = L_15->get_Mid_3();
		MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * L_17 = V_0;
		uint32_t L_18 = L_17->get_High_1();
		if (((int32_t)((int32_t)((!(((uint32_t)L_16) <= ((uint32_t)0)))? 1 : 0)|(int32_t)((!(((uint32_t)L_18) <= ((uint32_t)0)))? 1 : 0))))
		{
			goto IL_0020;
		}
	}
	{
		MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * L_19 = V_0;
		uint32_t L_20 = L_19->get_Low_2();
		V_3 = L_20;
		goto IL_008e;
	}

IL_0074:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1));
		V_2 = L_22;
		uint8_t* L_23;
		L_23 = Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&V_1), L_22, /*hidden argument*/Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		uint32_t L_24 = V_3;
		*((int8_t*)L_23) = (int8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((uint32_t)(int32_t)L_24%(uint32_t)(int32_t)((int32_t)10))), (int32_t)((int32_t)48)))));
		uint32_t L_25 = V_3;
		V_3 = ((int32_t)((uint32_t)(int32_t)L_25/(uint32_t)(int32_t)((int32_t)10)));
	}

IL_008e:
	{
		uint32_t L_26 = V_3;
		if (L_26)
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_27 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)29), (int32_t)L_27));
		NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * L_28 = ___number1;
		int32_t L_29 = V_4;
		MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * L_30 = V_0;
		int32_t L_31;
		L_31 = MutableDecimal_get_Scale_mD47D52938E7026D2EC3AA837BABF7162C4F727A3((MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D *)L_30, /*hidden argument*/NULL);
		L_28->set_Scale_0(((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)L_31)));
		NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * L_32 = ___number1;
		Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  L_33;
		L_33 = NumberBuffer_get_Digits_m77F55E994E325F745CBEE5598D24263834F34F3B((NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 *)L_32, /*hidden argument*/NULL);
		V_5 = L_33;
		V_6 = 0;
		goto IL_00cf;
	}

IL_00b3:
	{
		int32_t L_34 = V_6;
		int32_t L_35 = L_34;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
		uint8_t* L_36;
		L_36 = Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&V_5), L_35, /*hidden argument*/Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		int32_t L_37 = V_2;
		int32_t L_38 = L_37;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
		uint8_t* L_39;
		L_39 = Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&V_1), L_38, /*hidden argument*/Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		int32_t L_40 = *((uint8_t*)L_39);
		*((int8_t*)L_36) = (int8_t)L_40;
	}

IL_00cf:
	{
		int32_t L_41 = V_4;
		int32_t L_42 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_41, (int32_t)1));
		V_4 = L_42;
		if ((((int32_t)L_42) >= ((int32_t)0)))
		{
			goto IL_00b3;
		}
	}
	{
		int32_t L_43 = V_6;
		uint8_t* L_44;
		L_44 = Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&V_5), L_43, /*hidden argument*/Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		*((int8_t*)L_44) = (int8_t)0;
		return;
	}
}
// System.Void System.Number::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Number__cctor_m13165024FAE32EB10AAF002D913A479A756870CB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Number_tF582821FDF819A5C8F89A4AEEEA382F75E061EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t2BE371A826DE714388CB1A6D368F18406BAB06B2____2B2055E39CBB1C111FB5C1C05492B3E5AAC607ED_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t2BE371A826DE714388CB1A6D368F18406BAB06B2____608454F961E288A48E34666C94032BEDEFD399E1_2_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t2BE371A826DE714388CB1A6D368F18406BAB06B2____C3FB1115E83603E7E71244A6F2D43E22B790B5D1_5_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t2BE371A826DE714388CB1A6D368F18406BAB06B2____DB5930245CE35BDE5EDC35035275D8DD55E139CF_7_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_0 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t2BE371A826DE714388CB1A6D368F18406BAB06B2____608454F961E288A48E34666C94032BEDEFD399E1_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((Number_tF582821FDF819A5C8F89A4AEEEA382F75E061EC1_StaticFields*)il2cpp_codegen_static_fields_for(Number_tF582821FDF819A5C8F89A4AEEEA382F75E061EC1_il2cpp_TypeInfo_var))->set_s_rgval64Power10_0(L_1);
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_3 = (SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7*)(SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7*)SZArrayNew(SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7_il2cpp_TypeInfo_var, (uint32_t)((int32_t)15));
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_4 = L_3;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t2BE371A826DE714388CB1A6D368F18406BAB06B2____C3FB1115E83603E7E71244A6F2D43E22B790B5D1_5_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_4, L_5, /*hidden argument*/NULL);
		((Number_tF582821FDF819A5C8F89A4AEEEA382F75E061EC1_StaticFields*)il2cpp_codegen_static_fields_for(Number_tF582821FDF819A5C8F89A4AEEEA382F75E061EC1_il2cpp_TypeInfo_var))->set_s_rgexp64Power10_1(L_4);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_6 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)((int32_t)42));
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_7 = L_6;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t2BE371A826DE714388CB1A6D368F18406BAB06B2____2B2055E39CBB1C111FB5C1C05492B3E5AAC607ED_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_7, L_8, /*hidden argument*/NULL);
		((Number_tF582821FDF819A5C8F89A4AEEEA382F75E061EC1_StaticFields*)il2cpp_codegen_static_fields_for(Number_tF582821FDF819A5C8F89A4AEEEA382F75E061EC1_il2cpp_TypeInfo_var))->set_s_rgval64Power10By16_2(L_7);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_9 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)((int32_t)21));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_10 = L_9;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_11 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t2BE371A826DE714388CB1A6D368F18406BAB06B2____DB5930245CE35BDE5EDC35035275D8DD55E139CF_7_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_10, L_11, /*hidden argument*/NULL);
		((Number_tF582821FDF819A5C8F89A4AEEEA382F75E061EC1_StaticFields*)il2cpp_codegen_static_fields_for(Number_tF582821FDF819A5C8F89A4AEEEA382F75E061EC1_il2cpp_TypeInfo_var))->set_s_rgexp64Power10By16_3(L_10);
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
// Conversion methods for marshalling of: System.NumberBuffer
IL2CPP_EXTERN_C void NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437_marshal_pinvoke(const NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437& unmarshaled, NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437_marshaled_pinvoke& marshaled)
{
	marshaled.___Scale_0 = unmarshaled.get_Scale_0();
	marshaled.___IsNegative_1 = static_cast<int32_t>(unmarshaled.get_IsNegative_1());
	marshaled.____b0_2 = unmarshaled.get__b0_2();
	marshaled.____b1_3 = unmarshaled.get__b1_3();
	marshaled.____b2_4 = unmarshaled.get__b2_4();
	marshaled.____b3_5 = unmarshaled.get__b3_5();
	marshaled.____b4_6 = unmarshaled.get__b4_6();
	marshaled.____b5_7 = unmarshaled.get__b5_7();
	marshaled.____b6_8 = unmarshaled.get__b6_8();
	marshaled.____b7_9 = unmarshaled.get__b7_9();
	marshaled.____b8_10 = unmarshaled.get__b8_10();
	marshaled.____b9_11 = unmarshaled.get__b9_11();
	marshaled.____b10_12 = unmarshaled.get__b10_12();
	marshaled.____b11_13 = unmarshaled.get__b11_13();
	marshaled.____b12_14 = unmarshaled.get__b12_14();
	marshaled.____b13_15 = unmarshaled.get__b13_15();
	marshaled.____b14_16 = unmarshaled.get__b14_16();
	marshaled.____b15_17 = unmarshaled.get__b15_17();
	marshaled.____b16_18 = unmarshaled.get__b16_18();
	marshaled.____b17_19 = unmarshaled.get__b17_19();
	marshaled.____b18_20 = unmarshaled.get__b18_20();
	marshaled.____b19_21 = unmarshaled.get__b19_21();
	marshaled.____b20_22 = unmarshaled.get__b20_22();
	marshaled.____b21_23 = unmarshaled.get__b21_23();
	marshaled.____b22_24 = unmarshaled.get__b22_24();
	marshaled.____b23_25 = unmarshaled.get__b23_25();
	marshaled.____b24_26 = unmarshaled.get__b24_26();
	marshaled.____b25_27 = unmarshaled.get__b25_27();
	marshaled.____b26_28 = unmarshaled.get__b26_28();
	marshaled.____b27_29 = unmarshaled.get__b27_29();
	marshaled.____b28_30 = unmarshaled.get__b28_30();
	marshaled.____b29_31 = unmarshaled.get__b29_31();
	marshaled.____b30_32 = unmarshaled.get__b30_32();
	marshaled.____b31_33 = unmarshaled.get__b31_33();
	marshaled.____b32_34 = unmarshaled.get__b32_34();
	marshaled.____b33_35 = unmarshaled.get__b33_35();
	marshaled.____b34_36 = unmarshaled.get__b34_36();
	marshaled.____b35_37 = unmarshaled.get__b35_37();
	marshaled.____b36_38 = unmarshaled.get__b36_38();
	marshaled.____b37_39 = unmarshaled.get__b37_39();
	marshaled.____b38_40 = unmarshaled.get__b38_40();
	marshaled.____b39_41 = unmarshaled.get__b39_41();
	marshaled.____b40_42 = unmarshaled.get__b40_42();
	marshaled.____b41_43 = unmarshaled.get__b41_43();
	marshaled.____b42_44 = unmarshaled.get__b42_44();
	marshaled.____b43_45 = unmarshaled.get__b43_45();
	marshaled.____b44_46 = unmarshaled.get__b44_46();
	marshaled.____b45_47 = unmarshaled.get__b45_47();
	marshaled.____b46_48 = unmarshaled.get__b46_48();
	marshaled.____b47_49 = unmarshaled.get__b47_49();
	marshaled.____b48_50 = unmarshaled.get__b48_50();
	marshaled.____b49_51 = unmarshaled.get__b49_51();
	marshaled.____b50_52 = unmarshaled.get__b50_52();
}
IL2CPP_EXTERN_C void NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437_marshal_pinvoke_back(const NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437_marshaled_pinvoke& marshaled, NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437& unmarshaled)
{
	int32_t unmarshaled_Scale_temp_0 = 0;
	unmarshaled_Scale_temp_0 = marshaled.___Scale_0;
	unmarshaled.set_Scale_0(unmarshaled_Scale_temp_0);
	bool unmarshaled_IsNegative_temp_1 = false;
	unmarshaled_IsNegative_temp_1 = static_cast<bool>(marshaled.___IsNegative_1);
	unmarshaled.set_IsNegative_1(unmarshaled_IsNegative_temp_1);
	uint8_t unmarshaled__b0_temp_2 = 0x0;
	unmarshaled__b0_temp_2 = marshaled.____b0_2;
	unmarshaled.set__b0_2(unmarshaled__b0_temp_2);
	uint8_t unmarshaled__b1_temp_3 = 0x0;
	unmarshaled__b1_temp_3 = marshaled.____b1_3;
	unmarshaled.set__b1_3(unmarshaled__b1_temp_3);
	uint8_t unmarshaled__b2_temp_4 = 0x0;
	unmarshaled__b2_temp_4 = marshaled.____b2_4;
	unmarshaled.set__b2_4(unmarshaled__b2_temp_4);
	uint8_t unmarshaled__b3_temp_5 = 0x0;
	unmarshaled__b3_temp_5 = marshaled.____b3_5;
	unmarshaled.set__b3_5(unmarshaled__b3_temp_5);
	uint8_t unmarshaled__b4_temp_6 = 0x0;
	unmarshaled__b4_temp_6 = marshaled.____b4_6;
	unmarshaled.set__b4_6(unmarshaled__b4_temp_6);
	uint8_t unmarshaled__b5_temp_7 = 0x0;
	unmarshaled__b5_temp_7 = marshaled.____b5_7;
	unmarshaled.set__b5_7(unmarshaled__b5_temp_7);
	uint8_t unmarshaled__b6_temp_8 = 0x0;
	unmarshaled__b6_temp_8 = marshaled.____b6_8;
	unmarshaled.set__b6_8(unmarshaled__b6_temp_8);
	uint8_t unmarshaled__b7_temp_9 = 0x0;
	unmarshaled__b7_temp_9 = marshaled.____b7_9;
	unmarshaled.set__b7_9(unmarshaled__b7_temp_9);
	uint8_t unmarshaled__b8_temp_10 = 0x0;
	unmarshaled__b8_temp_10 = marshaled.____b8_10;
	unmarshaled.set__b8_10(unmarshaled__b8_temp_10);
	uint8_t unmarshaled__b9_temp_11 = 0x0;
	unmarshaled__b9_temp_11 = marshaled.____b9_11;
	unmarshaled.set__b9_11(unmarshaled__b9_temp_11);
	uint8_t unmarshaled__b10_temp_12 = 0x0;
	unmarshaled__b10_temp_12 = marshaled.____b10_12;
	unmarshaled.set__b10_12(unmarshaled__b10_temp_12);
	uint8_t unmarshaled__b11_temp_13 = 0x0;
	unmarshaled__b11_temp_13 = marshaled.____b11_13;
	unmarshaled.set__b11_13(unmarshaled__b11_temp_13);
	uint8_t unmarshaled__b12_temp_14 = 0x0;
	unmarshaled__b12_temp_14 = marshaled.____b12_14;
	unmarshaled.set__b12_14(unmarshaled__b12_temp_14);
	uint8_t unmarshaled__b13_temp_15 = 0x0;
	unmarshaled__b13_temp_15 = marshaled.____b13_15;
	unmarshaled.set__b13_15(unmarshaled__b13_temp_15);
	uint8_t unmarshaled__b14_temp_16 = 0x0;
	unmarshaled__b14_temp_16 = marshaled.____b14_16;
	unmarshaled.set__b14_16(unmarshaled__b14_temp_16);
	uint8_t unmarshaled__b15_temp_17 = 0x0;
	unmarshaled__b15_temp_17 = marshaled.____b15_17;
	unmarshaled.set__b15_17(unmarshaled__b15_temp_17);
	uint8_t unmarshaled__b16_temp_18 = 0x0;
	unmarshaled__b16_temp_18 = marshaled.____b16_18;
	unmarshaled.set__b16_18(unmarshaled__b16_temp_18);
	uint8_t unmarshaled__b17_temp_19 = 0x0;
	unmarshaled__b17_temp_19 = marshaled.____b17_19;
	unmarshaled.set__b17_19(unmarshaled__b17_temp_19);
	uint8_t unmarshaled__b18_temp_20 = 0x0;
	unmarshaled__b18_temp_20 = marshaled.____b18_20;
	unmarshaled.set__b18_20(unmarshaled__b18_temp_20);
	uint8_t unmarshaled__b19_temp_21 = 0x0;
	unmarshaled__b19_temp_21 = marshaled.____b19_21;
	unmarshaled.set__b19_21(unmarshaled__b19_temp_21);
	uint8_t unmarshaled__b20_temp_22 = 0x0;
	unmarshaled__b20_temp_22 = marshaled.____b20_22;
	unmarshaled.set__b20_22(unmarshaled__b20_temp_22);
	uint8_t unmarshaled__b21_temp_23 = 0x0;
	unmarshaled__b21_temp_23 = marshaled.____b21_23;
	unmarshaled.set__b21_23(unmarshaled__b21_temp_23);
	uint8_t unmarshaled__b22_temp_24 = 0x0;
	unmarshaled__b22_temp_24 = marshaled.____b22_24;
	unmarshaled.set__b22_24(unmarshaled__b22_temp_24);
	uint8_t unmarshaled__b23_temp_25 = 0x0;
	unmarshaled__b23_temp_25 = marshaled.____b23_25;
	unmarshaled.set__b23_25(unmarshaled__b23_temp_25);
	uint8_t unmarshaled__b24_temp_26 = 0x0;
	unmarshaled__b24_temp_26 = marshaled.____b24_26;
	unmarshaled.set__b24_26(unmarshaled__b24_temp_26);
	uint8_t unmarshaled__b25_temp_27 = 0x0;
	unmarshaled__b25_temp_27 = marshaled.____b25_27;
	unmarshaled.set__b25_27(unmarshaled__b25_temp_27);
	uint8_t unmarshaled__b26_temp_28 = 0x0;
	unmarshaled__b26_temp_28 = marshaled.____b26_28;
	unmarshaled.set__b26_28(unmarshaled__b26_temp_28);
	uint8_t unmarshaled__b27_temp_29 = 0x0;
	unmarshaled__b27_temp_29 = marshaled.____b27_29;
	unmarshaled.set__b27_29(unmarshaled__b27_temp_29);
	uint8_t unmarshaled__b28_temp_30 = 0x0;
	unmarshaled__b28_temp_30 = marshaled.____b28_30;
	unmarshaled.set__b28_30(unmarshaled__b28_temp_30);
	uint8_t unmarshaled__b29_temp_31 = 0x0;
	unmarshaled__b29_temp_31 = marshaled.____b29_31;
	unmarshaled.set__b29_31(unmarshaled__b29_temp_31);
	uint8_t unmarshaled__b30_temp_32 = 0x0;
	unmarshaled__b30_temp_32 = marshaled.____b30_32;
	unmarshaled.set__b30_32(unmarshaled__b30_temp_32);
	uint8_t unmarshaled__b31_temp_33 = 0x0;
	unmarshaled__b31_temp_33 = marshaled.____b31_33;
	unmarshaled.set__b31_33(unmarshaled__b31_temp_33);
	uint8_t unmarshaled__b32_temp_34 = 0x0;
	unmarshaled__b32_temp_34 = marshaled.____b32_34;
	unmarshaled.set__b32_34(unmarshaled__b32_temp_34);
	uint8_t unmarshaled__b33_temp_35 = 0x0;
	unmarshaled__b33_temp_35 = marshaled.____b33_35;
	unmarshaled.set__b33_35(unmarshaled__b33_temp_35);
	uint8_t unmarshaled__b34_temp_36 = 0x0;
	unmarshaled__b34_temp_36 = marshaled.____b34_36;
	unmarshaled.set__b34_36(unmarshaled__b34_temp_36);
	uint8_t unmarshaled__b35_temp_37 = 0x0;
	unmarshaled__b35_temp_37 = marshaled.____b35_37;
	unmarshaled.set__b35_37(unmarshaled__b35_temp_37);
	uint8_t unmarshaled__b36_temp_38 = 0x0;
	unmarshaled__b36_temp_38 = marshaled.____b36_38;
	unmarshaled.set__b36_38(unmarshaled__b36_temp_38);
	uint8_t unmarshaled__b37_temp_39 = 0x0;
	unmarshaled__b37_temp_39 = marshaled.____b37_39;
	unmarshaled.set__b37_39(unmarshaled__b37_temp_39);
	uint8_t unmarshaled__b38_temp_40 = 0x0;
	unmarshaled__b38_temp_40 = marshaled.____b38_40;
	unmarshaled.set__b38_40(unmarshaled__b38_temp_40);
	uint8_t unmarshaled__b39_temp_41 = 0x0;
	unmarshaled__b39_temp_41 = marshaled.____b39_41;
	unmarshaled.set__b39_41(unmarshaled__b39_temp_41);
	uint8_t unmarshaled__b40_temp_42 = 0x0;
	unmarshaled__b40_temp_42 = marshaled.____b40_42;
	unmarshaled.set__b40_42(unmarshaled__b40_temp_42);
	uint8_t unmarshaled__b41_temp_43 = 0x0;
	unmarshaled__b41_temp_43 = marshaled.____b41_43;
	unmarshaled.set__b41_43(unmarshaled__b41_temp_43);
	uint8_t unmarshaled__b42_temp_44 = 0x0;
	unmarshaled__b42_temp_44 = marshaled.____b42_44;
	unmarshaled.set__b42_44(unmarshaled__b42_temp_44);
	uint8_t unmarshaled__b43_temp_45 = 0x0;
	unmarshaled__b43_temp_45 = marshaled.____b43_45;
	unmarshaled.set__b43_45(unmarshaled__b43_temp_45);
	uint8_t unmarshaled__b44_temp_46 = 0x0;
	unmarshaled__b44_temp_46 = marshaled.____b44_46;
	unmarshaled.set__b44_46(unmarshaled__b44_temp_46);
	uint8_t unmarshaled__b45_temp_47 = 0x0;
	unmarshaled__b45_temp_47 = marshaled.____b45_47;
	unmarshaled.set__b45_47(unmarshaled__b45_temp_47);
	uint8_t unmarshaled__b46_temp_48 = 0x0;
	unmarshaled__b46_temp_48 = marshaled.____b46_48;
	unmarshaled.set__b46_48(unmarshaled__b46_temp_48);
	uint8_t unmarshaled__b47_temp_49 = 0x0;
	unmarshaled__b47_temp_49 = marshaled.____b47_49;
	unmarshaled.set__b47_49(unmarshaled__b47_temp_49);
	uint8_t unmarshaled__b48_temp_50 = 0x0;
	unmarshaled__b48_temp_50 = marshaled.____b48_50;
	unmarshaled.set__b48_50(unmarshaled__b48_temp_50);
	uint8_t unmarshaled__b49_temp_51 = 0x0;
	unmarshaled__b49_temp_51 = marshaled.____b49_51;
	unmarshaled.set__b49_51(unmarshaled__b49_temp_51);
	uint8_t unmarshaled__b50_temp_52 = 0x0;
	unmarshaled__b50_temp_52 = marshaled.____b50_52;
	unmarshaled.set__b50_52(unmarshaled__b50_temp_52);
}
// Conversion method for clean up from marshalling of: System.NumberBuffer
IL2CPP_EXTERN_C void NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437_marshal_pinvoke_cleanup(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.NumberBuffer
IL2CPP_EXTERN_C void NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437_marshal_com(const NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437& unmarshaled, NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437_marshaled_com& marshaled)
{
	marshaled.___Scale_0 = unmarshaled.get_Scale_0();
	marshaled.___IsNegative_1 = static_cast<int32_t>(unmarshaled.get_IsNegative_1());
	marshaled.____b0_2 = unmarshaled.get__b0_2();
	marshaled.____b1_3 = unmarshaled.get__b1_3();
	marshaled.____b2_4 = unmarshaled.get__b2_4();
	marshaled.____b3_5 = unmarshaled.get__b3_5();
	marshaled.____b4_6 = unmarshaled.get__b4_6();
	marshaled.____b5_7 = unmarshaled.get__b5_7();
	marshaled.____b6_8 = unmarshaled.get__b6_8();
	marshaled.____b7_9 = unmarshaled.get__b7_9();
	marshaled.____b8_10 = unmarshaled.get__b8_10();
	marshaled.____b9_11 = unmarshaled.get__b9_11();
	marshaled.____b10_12 = unmarshaled.get__b10_12();
	marshaled.____b11_13 = unmarshaled.get__b11_13();
	marshaled.____b12_14 = unmarshaled.get__b12_14();
	marshaled.____b13_15 = unmarshaled.get__b13_15();
	marshaled.____b14_16 = unmarshaled.get__b14_16();
	marshaled.____b15_17 = unmarshaled.get__b15_17();
	marshaled.____b16_18 = unmarshaled.get__b16_18();
	marshaled.____b17_19 = unmarshaled.get__b17_19();
	marshaled.____b18_20 = unmarshaled.get__b18_20();
	marshaled.____b19_21 = unmarshaled.get__b19_21();
	marshaled.____b20_22 = unmarshaled.get__b20_22();
	marshaled.____b21_23 = unmarshaled.get__b21_23();
	marshaled.____b22_24 = unmarshaled.get__b22_24();
	marshaled.____b23_25 = unmarshaled.get__b23_25();
	marshaled.____b24_26 = unmarshaled.get__b24_26();
	marshaled.____b25_27 = unmarshaled.get__b25_27();
	marshaled.____b26_28 = unmarshaled.get__b26_28();
	marshaled.____b27_29 = unmarshaled.get__b27_29();
	marshaled.____b28_30 = unmarshaled.get__b28_30();
	marshaled.____b29_31 = unmarshaled.get__b29_31();
	marshaled.____b30_32 = unmarshaled.get__b30_32();
	marshaled.____b31_33 = unmarshaled.get__b31_33();
	marshaled.____b32_34 = unmarshaled.get__b32_34();
	marshaled.____b33_35 = unmarshaled.get__b33_35();
	marshaled.____b34_36 = unmarshaled.get__b34_36();
	marshaled.____b35_37 = unmarshaled.get__b35_37();
	marshaled.____b36_38 = unmarshaled.get__b36_38();
	marshaled.____b37_39 = unmarshaled.get__b37_39();
	marshaled.____b38_40 = unmarshaled.get__b38_40();
	marshaled.____b39_41 = unmarshaled.get__b39_41();
	marshaled.____b40_42 = unmarshaled.get__b40_42();
	marshaled.____b41_43 = unmarshaled.get__b41_43();
	marshaled.____b42_44 = unmarshaled.get__b42_44();
	marshaled.____b43_45 = unmarshaled.get__b43_45();
	marshaled.____b44_46 = unmarshaled.get__b44_46();
	marshaled.____b45_47 = unmarshaled.get__b45_47();
	marshaled.____b46_48 = unmarshaled.get__b46_48();
	marshaled.____b47_49 = unmarshaled.get__b47_49();
	marshaled.____b48_50 = unmarshaled.get__b48_50();
	marshaled.____b49_51 = unmarshaled.get__b49_51();
	marshaled.____b50_52 = unmarshaled.get__b50_52();
}
IL2CPP_EXTERN_C void NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437_marshal_com_back(const NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437_marshaled_com& marshaled, NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437& unmarshaled)
{
	int32_t unmarshaled_Scale_temp_0 = 0;
	unmarshaled_Scale_temp_0 = marshaled.___Scale_0;
	unmarshaled.set_Scale_0(unmarshaled_Scale_temp_0);
	bool unmarshaled_IsNegative_temp_1 = false;
	unmarshaled_IsNegative_temp_1 = static_cast<bool>(marshaled.___IsNegative_1);
	unmarshaled.set_IsNegative_1(unmarshaled_IsNegative_temp_1);
	uint8_t unmarshaled__b0_temp_2 = 0x0;
	unmarshaled__b0_temp_2 = marshaled.____b0_2;
	unmarshaled.set__b0_2(unmarshaled__b0_temp_2);
	uint8_t unmarshaled__b1_temp_3 = 0x0;
	unmarshaled__b1_temp_3 = marshaled.____b1_3;
	unmarshaled.set__b1_3(unmarshaled__b1_temp_3);
	uint8_t unmarshaled__b2_temp_4 = 0x0;
	unmarshaled__b2_temp_4 = marshaled.____b2_4;
	unmarshaled.set__b2_4(unmarshaled__b2_temp_4);
	uint8_t unmarshaled__b3_temp_5 = 0x0;
	unmarshaled__b3_temp_5 = marshaled.____b3_5;
	unmarshaled.set__b3_5(unmarshaled__b3_temp_5);
	uint8_t unmarshaled__b4_temp_6 = 0x0;
	unmarshaled__b4_temp_6 = marshaled.____b4_6;
	unmarshaled.set__b4_6(unmarshaled__b4_temp_6);
	uint8_t unmarshaled__b5_temp_7 = 0x0;
	unmarshaled__b5_temp_7 = marshaled.____b5_7;
	unmarshaled.set__b5_7(unmarshaled__b5_temp_7);
	uint8_t unmarshaled__b6_temp_8 = 0x0;
	unmarshaled__b6_temp_8 = marshaled.____b6_8;
	unmarshaled.set__b6_8(unmarshaled__b6_temp_8);
	uint8_t unmarshaled__b7_temp_9 = 0x0;
	unmarshaled__b7_temp_9 = marshaled.____b7_9;
	unmarshaled.set__b7_9(unmarshaled__b7_temp_9);
	uint8_t unmarshaled__b8_temp_10 = 0x0;
	unmarshaled__b8_temp_10 = marshaled.____b8_10;
	unmarshaled.set__b8_10(unmarshaled__b8_temp_10);
	uint8_t unmarshaled__b9_temp_11 = 0x0;
	unmarshaled__b9_temp_11 = marshaled.____b9_11;
	unmarshaled.set__b9_11(unmarshaled__b9_temp_11);
	uint8_t unmarshaled__b10_temp_12 = 0x0;
	unmarshaled__b10_temp_12 = marshaled.____b10_12;
	unmarshaled.set__b10_12(unmarshaled__b10_temp_12);
	uint8_t unmarshaled__b11_temp_13 = 0x0;
	unmarshaled__b11_temp_13 = marshaled.____b11_13;
	unmarshaled.set__b11_13(unmarshaled__b11_temp_13);
	uint8_t unmarshaled__b12_temp_14 = 0x0;
	unmarshaled__b12_temp_14 = marshaled.____b12_14;
	unmarshaled.set__b12_14(unmarshaled__b12_temp_14);
	uint8_t unmarshaled__b13_temp_15 = 0x0;
	unmarshaled__b13_temp_15 = marshaled.____b13_15;
	unmarshaled.set__b13_15(unmarshaled__b13_temp_15);
	uint8_t unmarshaled__b14_temp_16 = 0x0;
	unmarshaled__b14_temp_16 = marshaled.____b14_16;
	unmarshaled.set__b14_16(unmarshaled__b14_temp_16);
	uint8_t unmarshaled__b15_temp_17 = 0x0;
	unmarshaled__b15_temp_17 = marshaled.____b15_17;
	unmarshaled.set__b15_17(unmarshaled__b15_temp_17);
	uint8_t unmarshaled__b16_temp_18 = 0x0;
	unmarshaled__b16_temp_18 = marshaled.____b16_18;
	unmarshaled.set__b16_18(unmarshaled__b16_temp_18);
	uint8_t unmarshaled__b17_temp_19 = 0x0;
	unmarshaled__b17_temp_19 = marshaled.____b17_19;
	unmarshaled.set__b17_19(unmarshaled__b17_temp_19);
	uint8_t unmarshaled__b18_temp_20 = 0x0;
	unmarshaled__b18_temp_20 = marshaled.____b18_20;
	unmarshaled.set__b18_20(unmarshaled__b18_temp_20);
	uint8_t unmarshaled__b19_temp_21 = 0x0;
	unmarshaled__b19_temp_21 = marshaled.____b19_21;
	unmarshaled.set__b19_21(unmarshaled__b19_temp_21);
	uint8_t unmarshaled__b20_temp_22 = 0x0;
	unmarshaled__b20_temp_22 = marshaled.____b20_22;
	unmarshaled.set__b20_22(unmarshaled__b20_temp_22);
	uint8_t unmarshaled__b21_temp_23 = 0x0;
	unmarshaled__b21_temp_23 = marshaled.____b21_23;
	unmarshaled.set__b21_23(unmarshaled__b21_temp_23);
	uint8_t unmarshaled__b22_temp_24 = 0x0;
	unmarshaled__b22_temp_24 = marshaled.____b22_24;
	unmarshaled.set__b22_24(unmarshaled__b22_temp_24);
	uint8_t unmarshaled__b23_temp_25 = 0x0;
	unmarshaled__b23_temp_25 = marshaled.____b23_25;
	unmarshaled.set__b23_25(unmarshaled__b23_temp_25);
	uint8_t unmarshaled__b24_temp_26 = 0x0;
	unmarshaled__b24_temp_26 = marshaled.____b24_26;
	unmarshaled.set__b24_26(unmarshaled__b24_temp_26);
	uint8_t unmarshaled__b25_temp_27 = 0x0;
	unmarshaled__b25_temp_27 = marshaled.____b25_27;
	unmarshaled.set__b25_27(unmarshaled__b25_temp_27);
	uint8_t unmarshaled__b26_temp_28 = 0x0;
	unmarshaled__b26_temp_28 = marshaled.____b26_28;
	unmarshaled.set__b26_28(unmarshaled__b26_temp_28);
	uint8_t unmarshaled__b27_temp_29 = 0x0;
	unmarshaled__b27_temp_29 = marshaled.____b27_29;
	unmarshaled.set__b27_29(unmarshaled__b27_temp_29);
	uint8_t unmarshaled__b28_temp_30 = 0x0;
	unmarshaled__b28_temp_30 = marshaled.____b28_30;
	unmarshaled.set__b28_30(unmarshaled__b28_temp_30);
	uint8_t unmarshaled__b29_temp_31 = 0x0;
	unmarshaled__b29_temp_31 = marshaled.____b29_31;
	unmarshaled.set__b29_31(unmarshaled__b29_temp_31);
	uint8_t unmarshaled__b30_temp_32 = 0x0;
	unmarshaled__b30_temp_32 = marshaled.____b30_32;
	unmarshaled.set__b30_32(unmarshaled__b30_temp_32);
	uint8_t unmarshaled__b31_temp_33 = 0x0;
	unmarshaled__b31_temp_33 = marshaled.____b31_33;
	unmarshaled.set__b31_33(unmarshaled__b31_temp_33);
	uint8_t unmarshaled__b32_temp_34 = 0x0;
	unmarshaled__b32_temp_34 = marshaled.____b32_34;
	unmarshaled.set__b32_34(unmarshaled__b32_temp_34);
	uint8_t unmarshaled__b33_temp_35 = 0x0;
	unmarshaled__b33_temp_35 = marshaled.____b33_35;
	unmarshaled.set__b33_35(unmarshaled__b33_temp_35);
	uint8_t unmarshaled__b34_temp_36 = 0x0;
	unmarshaled__b34_temp_36 = marshaled.____b34_36;
	unmarshaled.set__b34_36(unmarshaled__b34_temp_36);
	uint8_t unmarshaled__b35_temp_37 = 0x0;
	unmarshaled__b35_temp_37 = marshaled.____b35_37;
	unmarshaled.set__b35_37(unmarshaled__b35_temp_37);
	uint8_t unmarshaled__b36_temp_38 = 0x0;
	unmarshaled__b36_temp_38 = marshaled.____b36_38;
	unmarshaled.set__b36_38(unmarshaled__b36_temp_38);
	uint8_t unmarshaled__b37_temp_39 = 0x0;
	unmarshaled__b37_temp_39 = marshaled.____b37_39;
	unmarshaled.set__b37_39(unmarshaled__b37_temp_39);
	uint8_t unmarshaled__b38_temp_40 = 0x0;
	unmarshaled__b38_temp_40 = marshaled.____b38_40;
	unmarshaled.set__b38_40(unmarshaled__b38_temp_40);
	uint8_t unmarshaled__b39_temp_41 = 0x0;
	unmarshaled__b39_temp_41 = marshaled.____b39_41;
	unmarshaled.set__b39_41(unmarshaled__b39_temp_41);
	uint8_t unmarshaled__b40_temp_42 = 0x0;
	unmarshaled__b40_temp_42 = marshaled.____b40_42;
	unmarshaled.set__b40_42(unmarshaled__b40_temp_42);
	uint8_t unmarshaled__b41_temp_43 = 0x0;
	unmarshaled__b41_temp_43 = marshaled.____b41_43;
	unmarshaled.set__b41_43(unmarshaled__b41_temp_43);
	uint8_t unmarshaled__b42_temp_44 = 0x0;
	unmarshaled__b42_temp_44 = marshaled.____b42_44;
	unmarshaled.set__b42_44(unmarshaled__b42_temp_44);
	uint8_t unmarshaled__b43_temp_45 = 0x0;
	unmarshaled__b43_temp_45 = marshaled.____b43_45;
	unmarshaled.set__b43_45(unmarshaled__b43_temp_45);
	uint8_t unmarshaled__b44_temp_46 = 0x0;
	unmarshaled__b44_temp_46 = marshaled.____b44_46;
	unmarshaled.set__b44_46(unmarshaled__b44_temp_46);
	uint8_t unmarshaled__b45_temp_47 = 0x0;
	unmarshaled__b45_temp_47 = marshaled.____b45_47;
	unmarshaled.set__b45_47(unmarshaled__b45_temp_47);
	uint8_t unmarshaled__b46_temp_48 = 0x0;
	unmarshaled__b46_temp_48 = marshaled.____b46_48;
	unmarshaled.set__b46_48(unmarshaled__b46_temp_48);
	uint8_t unmarshaled__b47_temp_49 = 0x0;
	unmarshaled__b47_temp_49 = marshaled.____b47_49;
	unmarshaled.set__b47_49(unmarshaled__b47_temp_49);
	uint8_t unmarshaled__b48_temp_50 = 0x0;
	unmarshaled__b48_temp_50 = marshaled.____b48_50;
	unmarshaled.set__b48_50(unmarshaled__b48_temp_50);
	uint8_t unmarshaled__b49_temp_51 = 0x0;
	unmarshaled__b49_temp_51 = marshaled.____b49_51;
	unmarshaled.set__b49_51(unmarshaled__b49_temp_51);
	uint8_t unmarshaled__b50_temp_52 = 0x0;
	unmarshaled__b50_temp_52 = marshaled.____b50_52;
	unmarshaled.set__b50_52(unmarshaled__b50_temp_52);
}
// Conversion method for clean up from marshalling of: System.NumberBuffer
IL2CPP_EXTERN_C void NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437_marshal_com_cleanup(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437_marshaled_com& marshaled)
{
}
// System.Span`1<System.Byte> System.NumberBuffer::get_Digits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  NumberBuffer_get_Digits_m77F55E994E325F745CBEE5598D24263834F34F3B (NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m776684B7035275EC1AA7A23157CFEE0E596AE782_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_AsPointer_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m4D8C6780EB1987171FBA08936AA2C2F9631031C7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t* L_0 = __this->get_address_of__b0_2();
		void* L_1;
		L_1 = Unsafe_AsPointer_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m4D8C6780EB1987171FBA08936AA2C2F9631031C7_inline((uint8_t*)L_0, /*hidden argument*/Unsafe_AsPointer_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m4D8C6780EB1987171FBA08936AA2C2F9631031C7_RuntimeMethod_var);
		Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Span_1__ctor_m776684B7035275EC1AA7A23157CFEE0E596AE782_inline((&L_2), (void*)(void*)L_1, ((int32_t)51), /*hidden argument*/Span_1__ctor_m776684B7035275EC1AA7A23157CFEE0E596AE782_RuntimeMethod_var);
		return L_2;
	}
}
IL2CPP_EXTERN_C  Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  NumberBuffer_get_Digits_m77F55E994E325F745CBEE5598D24263834F34F3B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * _thisAdjusted = reinterpret_cast<NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 *>(__this + _offset);
	Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  _returnValue;
	_returnValue = NumberBuffer_get_Digits_m77F55E994E325F745CBEE5598D24263834F34F3B(_thisAdjusted, method);
	return _returnValue;
}
// System.Byte* System.NumberBuffer::get_UnsafeDigits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* NumberBuffer_get_UnsafeDigits_m95B0D74B60926B0E8788E7E6FDC551E7240F40FE (NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_AsPointer_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m4D8C6780EB1987171FBA08936AA2C2F9631031C7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t* L_0 = __this->get_address_of__b0_2();
		void* L_1;
		L_1 = Unsafe_AsPointer_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m4D8C6780EB1987171FBA08936AA2C2F9631031C7_inline((uint8_t*)L_0, /*hidden argument*/Unsafe_AsPointer_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m4D8C6780EB1987171FBA08936AA2C2F9631031C7_RuntimeMethod_var);
		return (uint8_t*)(L_1);
	}
}
IL2CPP_EXTERN_C  uint8_t* NumberBuffer_get_UnsafeDigits_m95B0D74B60926B0E8788E7E6FDC551E7240F40FE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * _thisAdjusted = reinterpret_cast<NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 *>(__this + _offset);
	uint8_t* _returnValue;
	_returnValue = NumberBuffer_get_UnsafeDigits_m95B0D74B60926B0E8788E7E6FDC551E7240F40FE(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.NumberBuffer::get_NumDigits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberBuffer_get_NumDigits_mC0AF0400D548D41907EA3204965C78A10DB463D5 (NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_IndexOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m16C2BDD6B446AEB6579BC57176D87011B59FBFCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_t3692531D647148747BC65C4610E740AEE9983A40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  L_0;
		L_0 = NumberBuffer_get_Digits_m77F55E994E325F745CBEE5598D24263834F34F3B((NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MemoryExtensions_t3692531D647148747BC65C4610E740AEE9983A40_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = MemoryExtensions_IndexOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m16C2BDD6B446AEB6579BC57176D87011B59FBFCD_inline(L_0, (uint8_t)0, /*hidden argument*/MemoryExtensions_IndexOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m16C2BDD6B446AEB6579BC57176D87011B59FBFCD_RuntimeMethod_var);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t NumberBuffer_get_NumDigits_mC0AF0400D548D41907EA3204965C78A10DB463D5_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * _thisAdjusted = reinterpret_cast<NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = NumberBuffer_get_NumDigits_mC0AF0400D548D41907EA3204965C78A10DB463D5(_thisAdjusted, method);
	return _returnValue;
}
// System.String System.NumberBuffer::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NumberBuffer_ToString_m64B3ED10515B329DDED1167F97E5BE0B297955AD (NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA00991B7716AB182854FDC90C9847A063B6CEDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBBE4103F42E1AE6A20FF78921B5E4A3398E0041);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_1, ((int32_t)91), /*hidden argument*/NULL);
		StringBuilder_t * L_3 = V_0;
		NullCheck(L_3);
		StringBuilder_t * L_4;
		L_4 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_3, ((int32_t)34), /*hidden argument*/NULL);
		Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  L_5;
		L_5 = NumberBuffer_get_Digits_m77F55E994E325F745CBEE5598D24263834F34F3B((NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 *)__this, /*hidden argument*/NULL);
		V_1 = L_5;
		V_2 = 0;
		goto IL_003c;
	}

IL_0023:
	{
		int32_t L_6 = V_2;
		uint8_t* L_7;
		L_7 = Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&V_1), L_6, /*hidden argument*/Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		int32_t L_8 = *((uint8_t*)L_7);
		V_3 = (uint8_t)L_8;
		uint8_t L_9 = V_3;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		StringBuilder_t * L_10 = V_0;
		uint8_t L_11 = V_3;
		NullCheck(L_10);
		StringBuilder_t * L_12;
		L_12 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_10, L_11, /*hidden argument*/NULL);
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_003c:
	{
		int32_t L_14 = V_2;
		if ((((int32_t)L_14) < ((int32_t)((int32_t)51))))
		{
			goto IL_0023;
		}
	}

IL_0041:
	{
		StringBuilder_t * L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_15, ((int32_t)34), /*hidden argument*/NULL);
		StringBuilder_t * L_17 = V_0;
		int32_t L_18 = __this->get_Scale_0();
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_19);
		String_t* L_21;
		L_21 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(_stringLiteralA00991B7716AB182854FDC90C9847A063B6CEDE6, L_20, /*hidden argument*/NULL);
		NullCheck(L_17);
		StringBuilder_t * L_22;
		L_22 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_17, L_21, /*hidden argument*/NULL);
		StringBuilder_t * L_23 = V_0;
		bool* L_24 = __this->get_address_of_IsNegative_1();
		String_t* L_25;
		L_25 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)L_24, /*hidden argument*/NULL);
		String_t* L_26;
		L_26 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralEBBE4103F42E1AE6A20FF78921B5E4A3398E0041, L_25, /*hidden argument*/NULL);
		NullCheck(L_23);
		StringBuilder_t * L_27;
		L_27 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_23, L_26, /*hidden argument*/NULL);
		StringBuilder_t * L_28 = V_0;
		NullCheck(L_28);
		StringBuilder_t * L_29;
		L_29 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_28, ((int32_t)93), /*hidden argument*/NULL);
		StringBuilder_t * L_30 = V_0;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_30);
		return L_31;
	}
}
IL2CPP_EXTERN_C  String_t* NumberBuffer_ToString_m64B3ED10515B329DDED1167F97E5BE0B297955AD_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * _thisAdjusted = reinterpret_cast<NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = NumberBuffer_ToString_m64B3ED10515B329DDED1167F97E5BE0B297955AD(_thisAdjusted, method);
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
// System.Boolean System.Buffers.Text.ParserHelpers::IsDigit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParserHelpers_IsDigit_m741C974EC477EA1F49439BA55D1C3142EA1D784D (int32_t ___i0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___i0;
		return (bool)((((int32_t)((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)((int32_t)48)))) <= ((uint32_t)((int32_t)9))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Buffers.Text.ParserHelpers::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParserHelpers__cctor_m98371EB2AB06474B2928A3F9F4B8A598E17CEAB1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParserHelpers_t8A97CC8777CE0C4CF09BEDF76F17F057486C5E0A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t2BE371A826DE714388CB1A6D368F18406BAB06B2____3CDA7449B0586AB873C75C04BB11D4864F5D7392_1_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t2BE371A826DE714388CB1A6D368F18406BAB06B2____3CDA7449B0586AB873C75C04BB11D4864F5D7392_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((ParserHelpers_t8A97CC8777CE0C4CF09BEDF76F17F057486C5E0A_StaticFields*)il2cpp_codegen_static_fields_for(ParserHelpers_t8A97CC8777CE0C4CF09BEDF76F17F057486C5E0A_il2cpp_TypeInfo_var))->set_s_hexLookup_0(L_1);
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
// System.Int32 System.Buffers.ReadOnlySequence::SegmentToSequenceStart(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySequence_SegmentToSequenceStart_mEE6CF5E985234E355289D641D4E49D4BAA9E3083 (int32_t ___startIndex0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___startIndex0;
		return ((int32_t)((int32_t)L_0|(int32_t)0));
	}
}
// System.Int32 System.Buffers.ReadOnlySequence::SegmentToSequenceEnd(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySequence_SegmentToSequenceEnd_mFFDFAE7585A75266241B8973C55046431260BBDE (int32_t ___endIndex0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___endIndex0;
		return ((int32_t)((int32_t)L_0|(int32_t)0));
	}
}
// System.Int32 System.Buffers.ReadOnlySequence::ArrayToSequenceStart(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySequence_ArrayToSequenceStart_mCEAF0855FE164270628814C10B531646278E0855 (int32_t ___startIndex0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___startIndex0;
		return ((int32_t)((int32_t)L_0|(int32_t)0));
	}
}
// System.Int32 System.Buffers.ReadOnlySequence::ArrayToSequenceEnd(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySequence_ArrayToSequenceEnd_mFF69FF0508B383A32C7EF9F89E701787D112BAB6 (int32_t ___endIndex0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___endIndex0;
		return ((int32_t)((int32_t)L_0|(int32_t)((int32_t)-2147483648LL)));
	}
}
// System.Int32 System.Buffers.ReadOnlySequence::MemoryManagerToSequenceStart(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySequence_MemoryManagerToSequenceStart_mFD1015C3FF75727F14979508EE405C50AA456138 (int32_t ___startIndex0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___startIndex0;
		return ((int32_t)((int32_t)L_0|(int32_t)((int32_t)-2147483648LL)));
	}
}
// System.Int32 System.Buffers.ReadOnlySequence::MemoryManagerToSequenceEnd(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySequence_MemoryManagerToSequenceEnd_m85705DE4E192CFB7B915CFDFE2DC5C47870E895D (int32_t ___endIndex0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___endIndex0;
		return ((int32_t)((int32_t)L_0|(int32_t)0));
	}
}
// System.Int32 System.Buffers.ReadOnlySequence::StringToSequenceStart(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySequence_StringToSequenceStart_mBB3640B275AF4DFA2FDBEA7CFAE5D539FB4D6B6A (int32_t ___startIndex0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___startIndex0;
		return ((int32_t)((int32_t)L_0|(int32_t)((int32_t)-2147483648LL)));
	}
}
// System.Int32 System.Buffers.ReadOnlySequence::StringToSequenceEnd(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySequence_StringToSequenceEnd_m969959A7F05E83C60ECC577C1EACF3C2ECA6DE91 (int32_t ___endIndex0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___endIndex0;
		return ((int32_t)((int32_t)L_0|(int32_t)((int32_t)-2147483648LL)));
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
// System.Resources.ResourceManager System.SR::get_ResourceManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * SR_get_ResourceManager_m18A791F4D611559D5B214B3020BAB11F2AC869EC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * G_B2_0 = NULL;
	ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * L_0 = ((SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_StaticFields*)il2cpp_codegen_static_fields_for(SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var))->get_s_resourceManager_0();
		ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = SR_get_ResourceType_mA677195FD1721150495B84739EFFDCB9366A5541_inline(/*hidden argument*/NULL);
		ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * L_3 = (ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A *)il2cpp_codegen_object_new(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_il2cpp_TypeInfo_var);
		ResourceManager__ctor_mC8A203D5697A2FAD2B336CF3534C21276918BD25(L_3, L_2, /*hidden argument*/NULL);
		ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * L_4 = L_3;
		((SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_StaticFields*)il2cpp_codegen_static_fields_for(SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var))->set_s_resourceManager_0(L_4);
		G_B2_0 = L_4;
	}

IL_0019:
	{
		return G_B2_0;
	}
}
// System.Boolean System.SR::UsingResourceKeys()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_m08DBDDDDF80E9F0013615CAB611F552F836BB526 (const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.String System.SR::GetResourceString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetResourceString_mEC79B3C28B26B1540E26C3CD899938CC955A4748 (String_t* ___resourceKey0, String_t* ___defaultString1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		V_0 = (String_t*)NULL;
	}

IL_0002:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * L_0;
		L_0 = SR_get_ResourceManager_m18A791F4D611559D5B214B3020BAB11F2AC869EC(/*hidden argument*/NULL);
		String_t* L_1 = ___resourceKey0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(7 /* System.String System.Resources.ResourceManager::GetString(System.String) */, L_0, L_1);
		V_0 = L_2;
		goto IL_0013;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingManifestResourceException_tAC74F21ADC46CCB2BCC710464434E3B97F72FACB_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0010;
		}
		throw e;
	}

CATCH_0010:
	{ // begin catch(System.Resources.MissingManifestResourceException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0013;
	} // end catch (depth: 1)

IL_0013:
	{
		String_t* L_3 = ___defaultString1;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_4 = ___resourceKey0;
		String_t* L_5 = V_0;
		NullCheck(L_4);
		bool L_6;
		L_6 = String_Equals_m62F0586691097AA2EE48F1596A130170BCFBF7F6(L_4, L_5, 4, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_7 = ___defaultString1;
		return L_7;
	}

IL_0022:
	{
		String_t* L_8 = V_0;
		return L_8;
	}
}
// System.String System.SR::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m4480ECD777F2A905A368094827DDCB43478A8053 (String_t* ___resourceFormat0, RuntimeObject * ___p11, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = SR_UsingResourceKeys_m08DBDDDDF80E9F0013615CAB611F552F836BB526(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___resourceFormat0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		RuntimeObject * L_5 = ___p11;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		String_t* L_6;
		L_6 = String_Join_m7BEA4678919FD9393062F8E8B5328A4DBB1A95E5(_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_4, /*hidden argument*/NULL);
		return L_6;
	}

IL_0020:
	{
		String_t* L_7 = ___resourceFormat0;
		RuntimeObject * L_8 = ___p11;
		String_t* L_9;
		L_9 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Type System.SR::get_ResourceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * SR_get_ResourceType_mA677195FD1721150495B84739EFFDCB9366A5541 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		Type_t * L_0 = ((SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_StaticFields*)il2cpp_codegen_static_fields_for(SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var))->get_U3CResourceTypeU3Ek__BackingField_1();
		return L_0;
	}
}
// System.String System.SR::get_NotSupported_CannotCallEqualsOnSpan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_NotSupported_CannotCallEqualsOnSpan_mACE24A88A0ADF9880C315FDC0963BA17E66B0394 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89BF668EA220E1F9C98F61872576447AF8F92A3F);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_mEC79B3C28B26B1540E26C3CD899938CC955A4748(_stringLiteral89BF668EA220E1F9C98F61872576447AF8F92A3F, (String_t*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.SR::get_NotSupported_CannotCallGetHashCodeOnSpan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_NotSupported_CannotCallGetHashCodeOnSpan_m4BC3D1B6994913E69BDD4028026F18A279A9DBDB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral819CA64A4459548685C67A2CD1C9D5E94F49CCD5);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_mEC79B3C28B26B1540E26C3CD899938CC955A4748(_stringLiteral819CA64A4459548685C67A2CD1C9D5E94F49CCD5, (String_t*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.SR::get_Argument_InvalidTypeWithPointersNotSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Argument_InvalidTypeWithPointersNotSupported_m2FD2DCBFF1853C8F9616D4C55DD1C14163A06B75 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CC20FA775B7CE5630588715DBC10889D01DC6F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_mEC79B3C28B26B1540E26C3CD899938CC955A4748(_stringLiteral4CC20FA775B7CE5630588715DBC10889D01DC6F1, (String_t*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.SR::get_Argument_DestinationTooShort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Argument_DestinationTooShort_mDD536A55FFA1BD1CF5C34D9E074420C183905559 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44B6E521D3C115CEA4878E4F981B5C2ACC1C885A);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_mEC79B3C28B26B1540E26C3CD899938CC955A4748(_stringLiteral44B6E521D3C115CEA4878E4F981B5C2ACC1C885A, (String_t*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.SR::get_Argument_BadFormatSpecifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Argument_BadFormatSpecifier_mFE81E4F926274AB402B890E679E6CAB600E61433 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37FA0EDE6488E25C5E7ECFF869A075843387FBB3);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_mEC79B3C28B26B1540E26C3CD899938CC955A4748(_stringLiteral37FA0EDE6488E25C5E7ECFF869A075843387FBB3, (String_t*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.SR::get_Argument_GWithPrecisionNotSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Argument_GWithPrecisionNotSupported_mF77D1EF96FE22465E62C65C5895E968E7FB10019 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C540348BA11A2EE6516FA67EED1B5091F940BED);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_mEC79B3C28B26B1540E26C3CD899938CC955A4748(_stringLiteral9C540348BA11A2EE6516FA67EED1B5091F940BED, (String_t*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.SR::get_Argument_PrecisionTooLarge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Argument_PrecisionTooLarge_m42EED38BF28506133A0AB30447E3C35CCA120A7F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B09D270142D175BC50AB815A5770EE2CE9AFE9D);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_mEC79B3C28B26B1540E26C3CD899938CC955A4748(_stringLiteral7B09D270142D175BC50AB815A5770EE2CE9AFE9D, (String_t*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.SR::get_EndPositionNotReached()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_EndPositionNotReached_m26E126334F58B1570EEAAA53A48B9518F3C17913 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD47A3426BF2C027AE854619E7EAB1FEB5E8491AD);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_mEC79B3C28B26B1540E26C3CD899938CC955A4748(_stringLiteralD47A3426BF2C027AE854619E7EAB1FEB5E8491AD, (String_t*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.SR::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SR__cctor_m4CA77DF9E538A3B432DD3F12C4D3E655983629DB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t4D39A8EE0C8A926B38B7B1CC0A2E24A82350D16D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (SR_t4D39A8EE0C8A926B38B7B1CC0A2E24A82350D16D_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		((SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_StaticFields*)il2cpp_codegen_static_fields_for(SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var))->set_U3CResourceTypeU3Ek__BackingField_1(L_1);
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
// System.Boolean System.Runtime.InteropServices.SequenceMarshal::TryGetString(System.Buffers.ReadOnlySequence`1<System.Char>,System.String&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SequenceMarshal_TryGetString_mBA81A10F83642193C6BB3862B3E847222BE88F7B (ReadOnlySequence_1_tC3D00D191DBB156549182F67D40D3919D974CF7D  ___sequence0, String_t** ___text1, int32_t* ___start2, int32_t* ___length3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySequence_1_TryGetString_mB307BB510E5976759C0AAB8B9345AAF4C4C88F75_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t** L_0 = ___text1;
		int32_t* L_1 = ___start2;
		int32_t* L_2 = ___length3;
		bool L_3;
		L_3 = ReadOnlySequence_1_TryGetString_mB307BB510E5976759C0AAB8B9345AAF4C4C88F75((ReadOnlySequence_1_tC3D00D191DBB156549182F67D40D3919D974CF7D *)(&___sequence0), (String_t**)L_0, (int32_t*)L_1, (int32_t*)L_2, /*hidden argument*/ReadOnlySequence_1_TryGetString_mB307BB510E5976759C0AAB8B9345AAF4C4C88F75_RuntimeMethod_var);
		return L_3;
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
// Conversion methods for marshalling of: System.SequencePosition
IL2CPP_EXTERN_C void SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A_marshal_pinvoke(const SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A& unmarshaled, SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.get__object_0() != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get__object_0()))
		{
			marshaled.____object_0 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.get__object_0()));
			(marshaled.____object_0)->AddRef();
		}
		else
		{
			marshaled.____object_0 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.get__object_0());
		}
	}
	else
	{
		marshaled.____object_0 = NULL;
	}
	marshaled.____integer_1 = unmarshaled.get__integer_1();
}
IL2CPP_EXTERN_C void SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A_marshal_pinvoke_back(const SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A_marshaled_pinvoke& marshaled, SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____object_0 != NULL)
	{
		unmarshaled.set__object_0(il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____object_0, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get__object_0()))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.get__object_0()), Il2CppIUnknown::IID, marshaled.____object_0);
		}
	}
	else
	{
		unmarshaled.set__object_0(NULL);
	}
	int32_t unmarshaled__integer_temp_1 = 0;
	unmarshaled__integer_temp_1 = marshaled.____integer_1;
	unmarshaled.set__integer_1(unmarshaled__integer_temp_1);
}
// Conversion method for clean up from marshalling of: System.SequencePosition
IL2CPP_EXTERN_C void SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A_marshal_pinvoke_cleanup(SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A_marshaled_pinvoke& marshaled)
{
	if (marshaled.____object_0 != NULL)
	{
		(marshaled.____object_0)->Release();
		marshaled.____object_0 = NULL;
	}
}
// Conversion methods for marshalling of: System.SequencePosition
IL2CPP_EXTERN_C void SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A_marshal_com(const SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A& unmarshaled, SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A_marshaled_com& marshaled)
{
	if (unmarshaled.get__object_0() != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get__object_0()))
		{
			marshaled.____object_0 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.get__object_0()));
			(marshaled.____object_0)->AddRef();
		}
		else
		{
			marshaled.____object_0 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.get__object_0());
		}
	}
	else
	{
		marshaled.____object_0 = NULL;
	}
	marshaled.____integer_1 = unmarshaled.get__integer_1();
}
IL2CPP_EXTERN_C void SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A_marshal_com_back(const SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A_marshaled_com& marshaled, SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____object_0 != NULL)
	{
		unmarshaled.set__object_0(il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____object_0, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get__object_0()))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.get__object_0()), Il2CppIUnknown::IID, marshaled.____object_0);
		}
	}
	else
	{
		unmarshaled.set__object_0(NULL);
	}
	int32_t unmarshaled__integer_temp_1 = 0;
	unmarshaled__integer_temp_1 = marshaled.____integer_1;
	unmarshaled.set__integer_1(unmarshaled__integer_temp_1);
}
// Conversion method for clean up from marshalling of: System.SequencePosition
IL2CPP_EXTERN_C void SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A_marshal_com_cleanup(SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A_marshaled_com& marshaled)
{
	if (marshaled.____object_0 != NULL)
	{
		(marshaled.____object_0)->Release();
		marshaled.____object_0 = NULL;
	}
}
// System.Void System.SequencePosition::.ctor(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SequencePosition__ctor_m881E247213B0B28B3903475A1FC0237C56B5F0B0 (SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A * __this, RuntimeObject * ___object0, int32_t ___integer1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___object0;
		__this->set__object_0(L_0);
		int32_t L_1 = ___integer1;
		__this->set__integer_1(L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void SequencePosition__ctor_m881E247213B0B28B3903475A1FC0237C56B5F0B0_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___object0, int32_t ___integer1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A * _thisAdjusted = reinterpret_cast<SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A *>(__this + _offset);
	SequencePosition__ctor_m881E247213B0B28B3903475A1FC0237C56B5F0B0(_thisAdjusted, ___object0, ___integer1, method);
}
// System.Object System.SequencePosition::GetObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SequencePosition_GetObject_m33D4D02B2042DFCCC2549006639381910F1F3525 (SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get__object_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  RuntimeObject * SequencePosition_GetObject_m33D4D02B2042DFCCC2549006639381910F1F3525_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A * _thisAdjusted = reinterpret_cast<SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A *>(__this + _offset);
	RuntimeObject * _returnValue;
	_returnValue = SequencePosition_GetObject_m33D4D02B2042DFCCC2549006639381910F1F3525_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.SequencePosition::GetInteger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SequencePosition_GetInteger_mE4D2683EB441F31A3C1474845ABBD0FA78C130DE (SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__integer_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t SequencePosition_GetInteger_mE4D2683EB441F31A3C1474845ABBD0FA78C130DE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A * _thisAdjusted = reinterpret_cast<SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SequencePosition_GetInteger_mE4D2683EB441F31A3C1474845ABBD0FA78C130DE_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean System.SequencePosition::Equals(System.SequencePosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SequencePosition_Equals_mEA7C1FF9F5C4661547A30C192DC3702CB7647795 (SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A * __this, SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A  ___other0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__integer_1();
		SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A  L_1 = ___other0;
		int32_t L_2 = L_1.get__integer_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject * L_3 = __this->get__object_0();
		SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A  L_4 = ___other0;
		RuntimeObject * L_5 = L_4.get__object_0();
		bool L_6;
		L_6 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_3, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0020:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool SequencePosition_Equals_mEA7C1FF9F5C4661547A30C192DC3702CB7647795_AdjustorThunk (RuntimeObject * __this, SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A * _thisAdjusted = reinterpret_cast<SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A *>(__this + _offset);
	bool _returnValue;
	_returnValue = SequencePosition_Equals_mEA7C1FF9F5C4661547A30C192DC3702CB7647795(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean System.SequencePosition::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SequencePosition_Equals_mEA56903889413D851A4F93FC2C96D0A6BA823A58 (SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	{
		RuntimeObject * L_0 = ___obj0;
		RuntimeObject * L_1 = L_0;
		V_1 = L_1;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A_il2cpp_TypeInfo_var)))
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject * L_2 = V_1;
		V_0 = ((*(SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A *)((SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A *)UnBox(L_2, SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A_il2cpp_TypeInfo_var))));
		SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A  L_3 = V_0;
		bool L_4;
		L_4 = SequencePosition_Equals_mEA7C1FF9F5C4661547A30C192DC3702CB7647795((SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A *)__this, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0019:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool SequencePosition_Equals_mEA56903889413D851A4F93FC2C96D0A6BA823A58_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A * _thisAdjusted = reinterpret_cast<SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A *>(__this + _offset);
	bool _returnValue;
	_returnValue = SequencePosition_Equals_mEA56903889413D851A4F93FC2C96D0A6BA823A58(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 System.SequencePosition::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SequencePosition_GetHashCode_m1BEFA85FBA8965A92F4A2408AA491758C0CD7DF2 (SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t554F555DED6A50C2365AB566A880644171B50636_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * G_B2_0 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject * L_0 = __this->get__object_0();
		RuntimeObject * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0012;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, G_B2_0);
		G_B3_0 = L_2;
	}

IL_0012:
	{
		int32_t L_3 = __this->get__integer_1();
		IL2CPP_RUNTIME_CLASS_INIT(HashHelpers_t554F555DED6A50C2365AB566A880644171B50636_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = HashHelpers_Combine_m0B422F3A90AC3CD046375C8195F8ED339B83ED46(G_B3_0, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t SequencePosition_GetHashCode_m1BEFA85FBA8965A92F4A2408AA491758C0CD7DF2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A * _thisAdjusted = reinterpret_cast<SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SequencePosition_GetHashCode_m1BEFA85FBA8965A92F4A2408AA491758C0CD7DF2(_thisAdjusted, method);
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
// System.Int32 System.SpanHelpers::IndexOf(System.Byte&,System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_m996881920138B2EC72C814473789D6AB958B92F2 (uint8_t* ___searchSpace0, uint8_t ___value1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_AsPointer_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m4D8C6780EB1987171FBA08936AA2C2F9631031C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1_Equals_mAD33337AD07ECF6DF2BC0F1008BC963251A9A96B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1_get_Count_m6F1F8DDBF49AFE0B82F12C94AA096F26FA8DBC37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1_get_Zero_m9CA624B7E05E36937BB783931B77F8E607C4A074_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_Equals_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mD81667356EC7F90AAC00124EAD110C46700DBAA5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		uint8_t L_0 = ___value1;
		V_0 = L_0;
		intptr_t L_1;
		L_1 = IntPtr_op_Explicit_m9092E57CE669E7B9CCDCF5ADD6DFB758D6545FBF(0, /*hidden argument*/NULL);
		V_1 = (intptr_t)L_1;
		int32_t L_2 = ___length2;
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_m9092E57CE669E7B9CCDCF5ADD6DFB758D6545FBF(L_2, /*hidden argument*/NULL);
		V_2 = (intptr_t)L_3;
		bool L_4;
		L_4 = Vector_get_IsHardwareAccelerated_m282E2F7F13A15EAEFC4059305F18867139398D74(/*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_5 = ___length2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Vector_1_get_Count_m6F1F8DDBF49AFE0B82F12C94AA096F26FA8DBC37_inline(/*hidden argument*/Vector_1_get_Count_m6F1F8DDBF49AFE0B82F12C94AA096F26FA8DBC37_RuntimeMethod_var);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)2)))))
		{
			goto IL_00fb;
		}
	}
	{
		uint8_t* L_7 = ___searchSpace0;
		void* L_8;
		L_8 = Unsafe_AsPointer_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m4D8C6780EB1987171FBA08936AA2C2F9631031C7_inline((uint8_t*)L_7, /*hidden argument*/Unsafe_AsPointer_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m4D8C6780EB1987171FBA08936AA2C2F9631031C7_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = Vector_1_get_Count_m6F1F8DDBF49AFE0B82F12C94AA096F26FA8DBC37_inline(/*hidden argument*/Vector_1_get_Count_m6F1F8DDBF49AFE0B82F12C94AA096F26FA8DBC37_RuntimeMethod_var);
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)(intptr_t)L_8))&(int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1))));
		int32_t L_10;
		L_10 = Vector_1_get_Count_m6F1F8DDBF49AFE0B82F12C94AA096F26FA8DBC37_inline(/*hidden argument*/Vector_1_get_Count_m6F1F8DDBF49AFE0B82F12C94AA096F26FA8DBC37_RuntimeMethod_var);
		int32_t L_11 = V_3;
		int32_t L_12;
		L_12 = Vector_1_get_Count_m6F1F8DDBF49AFE0B82F12C94AA096F26FA8DBC37_inline(/*hidden argument*/Vector_1_get_Count_m6F1F8DDBF49AFE0B82F12C94AA096F26FA8DBC37_RuntimeMethod_var);
		intptr_t L_13;
		L_13 = IntPtr_op_Explicit_m9092E57CE669E7B9CCDCF5ADD6DFB758D6545FBF(((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)L_11))&(int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1)))), /*hidden argument*/NULL);
		V_2 = (intptr_t)L_13;
		goto IL_00fb;
	}

IL_0051:
	{
		intptr_t L_14 = V_2;
		intptr_t L_15;
		L_15 = IntPtr_op_Subtraction_m02F3295A959F0DF44F66D04D88F3EE66DFC4BFD9((intptr_t)L_14, 8, /*hidden argument*/NULL);
		V_2 = (intptr_t)L_15;
		uint32_t L_16 = V_0;
		uint8_t* L_17 = ___searchSpace0;
		intptr_t L_18 = V_1;
		uint8_t* L_19;
		L_19 = Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_inline((uint8_t*)L_17, (intptr_t)L_18, /*hidden argument*/Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_RuntimeMethod_var);
		int32_t L_20 = *((uint8_t*)L_19);
		if ((((int32_t)L_16) == ((int32_t)L_20)))
		{
			goto IL_0242;
		}
	}
	{
		uint32_t L_21 = V_0;
		uint8_t* L_22 = ___searchSpace0;
		intptr_t L_23 = V_1;
		intptr_t L_24;
		L_24 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_23, 1, /*hidden argument*/NULL);
		uint8_t* L_25;
		L_25 = Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_inline((uint8_t*)L_22, (intptr_t)L_24, /*hidden argument*/Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_RuntimeMethod_var);
		int32_t L_26 = *((uint8_t*)L_25);
		if ((((int32_t)L_21) == ((int32_t)L_26)))
		{
			goto IL_024a;
		}
	}
	{
		uint32_t L_27 = V_0;
		uint8_t* L_28 = ___searchSpace0;
		intptr_t L_29 = V_1;
		intptr_t L_30;
		L_30 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_29, 2, /*hidden argument*/NULL);
		uint8_t* L_31;
		L_31 = Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_inline((uint8_t*)L_28, (intptr_t)L_30, /*hidden argument*/Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_RuntimeMethod_var);
		int32_t L_32 = *((uint8_t*)L_31);
		if ((((int32_t)L_27) == ((int32_t)L_32)))
		{
			goto IL_0258;
		}
	}
	{
		uint32_t L_33 = V_0;
		uint8_t* L_34 = ___searchSpace0;
		intptr_t L_35 = V_1;
		intptr_t L_36;
		L_36 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_35, 3, /*hidden argument*/NULL);
		uint8_t* L_37;
		L_37 = Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_inline((uint8_t*)L_34, (intptr_t)L_36, /*hidden argument*/Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_RuntimeMethod_var);
		int32_t L_38 = *((uint8_t*)L_37);
		if ((((int32_t)L_33) == ((int32_t)L_38)))
		{
			goto IL_0266;
		}
	}
	{
		uint32_t L_39 = V_0;
		uint8_t* L_40 = ___searchSpace0;
		intptr_t L_41 = V_1;
		intptr_t L_42;
		L_42 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_41, 4, /*hidden argument*/NULL);
		uint8_t* L_43;
		L_43 = Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_inline((uint8_t*)L_40, (intptr_t)L_42, /*hidden argument*/Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_RuntimeMethod_var);
		int32_t L_44 = *((uint8_t*)L_43);
		if ((((int32_t)L_39) == ((int32_t)L_44)))
		{
			goto IL_0274;
		}
	}
	{
		uint32_t L_45 = V_0;
		uint8_t* L_46 = ___searchSpace0;
		intptr_t L_47 = V_1;
		intptr_t L_48;
		L_48 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_47, 5, /*hidden argument*/NULL);
		uint8_t* L_49;
		L_49 = Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_inline((uint8_t*)L_46, (intptr_t)L_48, /*hidden argument*/Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_RuntimeMethod_var);
		int32_t L_50 = *((uint8_t*)L_49);
		if ((((int32_t)L_45) == ((int32_t)L_50)))
		{
			goto IL_0282;
		}
	}
	{
		uint32_t L_51 = V_0;
		uint8_t* L_52 = ___searchSpace0;
		intptr_t L_53 = V_1;
		intptr_t L_54;
		L_54 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_53, 6, /*hidden argument*/NULL);
		uint8_t* L_55;
		L_55 = Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_inline((uint8_t*)L_52, (intptr_t)L_54, /*hidden argument*/Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_RuntimeMethod_var);
		int32_t L_56 = *((uint8_t*)L_55);
		if ((((int32_t)L_51) == ((int32_t)L_56)))
		{
			goto IL_0290;
		}
	}
	{
		uint32_t L_57 = V_0;
		uint8_t* L_58 = ___searchSpace0;
		intptr_t L_59 = V_1;
		intptr_t L_60;
		L_60 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_59, 7, /*hidden argument*/NULL);
		uint8_t* L_61;
		L_61 = Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_inline((uint8_t*)L_58, (intptr_t)L_60, /*hidden argument*/Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_RuntimeMethod_var);
		int32_t L_62 = *((uint8_t*)L_61);
		if ((((int32_t)L_57) == ((int32_t)L_62)))
		{
			goto IL_029e;
		}
	}
	{
		intptr_t L_63 = V_1;
		intptr_t L_64;
		L_64 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_63, 8, /*hidden argument*/NULL);
		V_1 = (intptr_t)L_64;
	}

IL_00fb:
	{
		intptr_t L_65 = V_2;
		void* L_66;
		L_66 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_65, /*hidden argument*/NULL);
		if ((!(((uintptr_t)L_66) < ((uintptr_t)((intptr_t)8)))))
		{
			goto IL_0051;
		}
	}
	{
		intptr_t L_67 = V_2;
		void* L_68;
		L_68 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_67, /*hidden argument*/NULL);
		if ((!(((uintptr_t)L_68) >= ((uintptr_t)((intptr_t)4)))))
		{
			goto IL_018c;
		}
	}
	{
		intptr_t L_69 = V_2;
		intptr_t L_70;
		L_70 = IntPtr_op_Subtraction_m02F3295A959F0DF44F66D04D88F3EE66DFC4BFD9((intptr_t)L_69, 4, /*hidden argument*/NULL);
		V_2 = (intptr_t)L_70;
		uint32_t L_71 = V_0;
		uint8_t* L_72 = ___searchSpace0;
		intptr_t L_73 = V_1;
		uint8_t* L_74;
		L_74 = Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_inline((uint8_t*)L_72, (intptr_t)L_73, /*hidden argument*/Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_RuntimeMethod_var);
		int32_t L_75 = *((uint8_t*)L_74);
		if ((((int32_t)L_71) == ((int32_t)L_75)))
		{
			goto IL_0242;
		}
	}
	{
		uint32_t L_76 = V_0;
		uint8_t* L_77 = ___searchSpace0;
		intptr_t L_78 = V_1;
		intptr_t L_79;
		L_79 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_78, 1, /*hidden argument*/NULL);
		uint8_t* L_80;
		L_80 = Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_inline((uint8_t*)L_77, (intptr_t)L_79, /*hidden argument*/Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_RuntimeMethod_var);
		int32_t L_81 = *((uint8_t*)L_80);
		if ((((int32_t)L_76) == ((int32_t)L_81)))
		{
			goto IL_024a;
		}
	}
	{
		uint32_t L_82 = V_0;
		uint8_t* L_83 = ___searchSpace0;
		intptr_t L_84 = V_1;
		intptr_t L_85;
		L_85 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_84, 2, /*hidden argument*/NULL);
		uint8_t* L_86;
		L_86 = Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_inline((uint8_t*)L_83, (intptr_t)L_85, /*hidden argument*/Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_RuntimeMethod_var);
		int32_t L_87 = *((uint8_t*)L_86);
		if ((((int32_t)L_82) == ((int32_t)L_87)))
		{
			goto IL_0258;
		}
	}
	{
		uint32_t L_88 = V_0;
		uint8_t* L_89 = ___searchSpace0;
		intptr_t L_90 = V_1;
		intptr_t L_91;
		L_91 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_90, 3, /*hidden argument*/NULL);
		uint8_t* L_92;
		L_92 = Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_inline((uint8_t*)L_89, (intptr_t)L_91, /*hidden argument*/Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_RuntimeMethod_var);
		int32_t L_93 = *((uint8_t*)L_92);
		if ((((int32_t)L_88) == ((int32_t)L_93)))
		{
			goto IL_0266;
		}
	}
	{
		intptr_t L_94 = V_1;
		intptr_t L_95;
		L_95 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_94, 4, /*hidden argument*/NULL);
		V_1 = (intptr_t)L_95;
		goto IL_018c;
	}

IL_016e:
	{
		intptr_t L_96 = V_2;
		intptr_t L_97;
		L_97 = IntPtr_op_Subtraction_m02F3295A959F0DF44F66D04D88F3EE66DFC4BFD9((intptr_t)L_96, 1, /*hidden argument*/NULL);
		V_2 = (intptr_t)L_97;
		uint32_t L_98 = V_0;
		uint8_t* L_99 = ___searchSpace0;
		intptr_t L_100 = V_1;
		uint8_t* L_101;
		L_101 = Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_inline((uint8_t*)L_99, (intptr_t)L_100, /*hidden argument*/Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_RuntimeMethod_var);
		int32_t L_102 = *((uint8_t*)L_101);
		if ((((int32_t)L_98) == ((int32_t)L_102)))
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_103 = V_1;
		intptr_t L_104;
		L_104 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_103, 1, /*hidden argument*/NULL);
		V_1 = (intptr_t)L_104;
	}

IL_018c:
	{
		intptr_t L_105 = V_2;
		void* L_106;
		L_106 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_105, /*hidden argument*/NULL);
		if ((!(((uintptr_t)L_106) <= ((uintptr_t)((intptr_t)0)))))
		{
			goto IL_016e;
		}
	}
	{
		bool L_107;
		L_107 = Vector_get_IsHardwareAccelerated_m282E2F7F13A15EAEFC4059305F18867139398D74(/*hidden argument*/NULL);
		if (!L_107)
		{
			goto IL_0240;
		}
	}
	{
		intptr_t L_108 = V_1;
		void* L_109;
		L_109 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_108, /*hidden argument*/NULL);
		int32_t L_110 = ___length2;
		if ((((int32_t)((int32_t)((int32_t)(intptr_t)L_109))) >= ((int32_t)L_110)))
		{
			goto IL_0240;
		}
	}
	{
		int32_t L_111 = ___length2;
		intptr_t L_112 = V_1;
		void* L_113;
		L_113 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_112, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08_il2cpp_TypeInfo_var);
		int32_t L_114;
		L_114 = Vector_1_get_Count_m6F1F8DDBF49AFE0B82F12C94AA096F26FA8DBC37_inline(/*hidden argument*/Vector_1_get_Count_m6F1F8DDBF49AFE0B82F12C94AA096F26FA8DBC37_RuntimeMethod_var);
		intptr_t L_115;
		L_115 = IntPtr_op_Explicit_m9092E57CE669E7B9CCDCF5ADD6DFB758D6545FBF(((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_111, (int32_t)((int32_t)((int32_t)(intptr_t)L_113))))&(int32_t)((~((int32_t)il2cpp_codegen_subtract((int32_t)L_114, (int32_t)1)))))), /*hidden argument*/NULL);
		V_2 = (intptr_t)L_115;
		uint8_t L_116 = ___value1;
		Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  L_117;
		L_117 = SpanHelpers_GetVector_mB6C94E0B80F7E5A77D84E2B202C1B8DD742E9FD9_inline(L_116, /*hidden argument*/NULL);
		V_4 = L_117;
		goto IL_0214;
	}

IL_01cf:
	{
		Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  L_118 = V_4;
		uint8_t* L_119 = ___searchSpace0;
		intptr_t L_120 = V_1;
		uint8_t* L_121;
		L_121 = Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_inline((uint8_t*)L_119, (intptr_t)L_120, /*hidden argument*/Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_RuntimeMethod_var);
		Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  L_122;
		L_122 = IL2CPP_UNSAFE_READ_UNALIGNED(Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08 , (uint8_t*)L_121);
		Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  L_123;
		L_123 = Vector_Equals_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mD81667356EC7F90AAC00124EAD110C46700DBAA5_inline(L_118, L_122, /*hidden argument*/Vector_Equals_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mD81667356EC7F90AAC00124EAD110C46700DBAA5_RuntimeMethod_var);
		V_5 = L_123;
		IL2CPP_RUNTIME_CLASS_INIT(Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08_il2cpp_TypeInfo_var);
		Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  L_124;
		L_124 = Vector_1_get_Zero_m9CA624B7E05E36937BB783931B77F8E607C4A074_inline(/*hidden argument*/Vector_1_get_Zero_m9CA624B7E05E36937BB783931B77F8E607C4A074_RuntimeMethod_var);
		V_6 = L_124;
		Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  L_125 = V_5;
		bool L_126;
		L_126 = Vector_1_Equals_mAD33337AD07ECF6DF2BC0F1008BC963251A9A96B((Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08 *)(&V_6), L_125, /*hidden argument*/Vector_1_Equals_mAD33337AD07ECF6DF2BC0F1008BC963251A9A96B_RuntimeMethod_var);
		if (!L_126)
		{
			goto IL_0204;
		}
	}
	{
		intptr_t L_127 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08_il2cpp_TypeInfo_var);
		int32_t L_128;
		L_128 = Vector_1_get_Count_m6F1F8DDBF49AFE0B82F12C94AA096F26FA8DBC37_inline(/*hidden argument*/Vector_1_get_Count_m6F1F8DDBF49AFE0B82F12C94AA096F26FA8DBC37_RuntimeMethod_var);
		intptr_t L_129;
		L_129 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_127, L_128, /*hidden argument*/NULL);
		V_1 = (intptr_t)L_129;
		goto IL_0214;
	}

IL_0204:
	{
		intptr_t L_130 = V_1;
		void* L_131;
		L_131 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_130, /*hidden argument*/NULL);
		Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  L_132 = V_5;
		int32_t L_133;
		L_133 = SpanHelpers_LocateFirstFoundByte_m419FAFA78D34AB13ADED0E04C54AD68D69551E83_inline(L_132, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(intptr_t)L_131)), (int32_t)L_133));
	}

IL_0214:
	{
		intptr_t L_134 = V_2;
		void* L_135;
		L_135 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_134, /*hidden argument*/NULL);
		intptr_t L_136 = V_1;
		void* L_137;
		L_137 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_136, /*hidden argument*/NULL);
		if ((!(((uintptr_t)L_135) <= ((uintptr_t)L_137))))
		{
			goto IL_01cf;
		}
	}
	{
		intptr_t L_138 = V_1;
		void* L_139;
		L_139 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_138, /*hidden argument*/NULL);
		int32_t L_140 = ___length2;
		if ((((int32_t)((int32_t)((int32_t)(intptr_t)L_139))) >= ((int32_t)L_140)))
		{
			goto IL_0240;
		}
	}
	{
		int32_t L_141 = ___length2;
		intptr_t L_142 = V_1;
		void* L_143;
		L_143 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_142, /*hidden argument*/NULL);
		intptr_t L_144;
		L_144 = IntPtr_op_Explicit_m9092E57CE669E7B9CCDCF5ADD6DFB758D6545FBF(((int32_t)il2cpp_codegen_subtract((int32_t)L_141, (int32_t)((int32_t)((int32_t)(intptr_t)L_143)))), /*hidden argument*/NULL);
		V_2 = (intptr_t)L_144;
		goto IL_00fb;
	}

IL_0240:
	{
		return (-1);
	}

IL_0242:
	{
		intptr_t L_145 = V_1;
		void* L_146;
		L_146 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_145, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)(intptr_t)L_146));
	}

IL_024a:
	{
		intptr_t L_147 = V_1;
		intptr_t L_148;
		L_148 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_147, 1, /*hidden argument*/NULL);
		void* L_149;
		L_149 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_148, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)(intptr_t)L_149));
	}

IL_0258:
	{
		intptr_t L_150 = V_1;
		intptr_t L_151;
		L_151 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_150, 2, /*hidden argument*/NULL);
		void* L_152;
		L_152 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_151, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)(intptr_t)L_152));
	}

IL_0266:
	{
		intptr_t L_153 = V_1;
		intptr_t L_154;
		L_154 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_153, 3, /*hidden argument*/NULL);
		void* L_155;
		L_155 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_154, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)(intptr_t)L_155));
	}

IL_0274:
	{
		intptr_t L_156 = V_1;
		intptr_t L_157;
		L_157 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_156, 4, /*hidden argument*/NULL);
		void* L_158;
		L_158 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_157, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)(intptr_t)L_158));
	}

IL_0282:
	{
		intptr_t L_159 = V_1;
		intptr_t L_160;
		L_160 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_159, 5, /*hidden argument*/NULL);
		void* L_161;
		L_161 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_160, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)(intptr_t)L_161));
	}

IL_0290:
	{
		intptr_t L_162 = V_1;
		intptr_t L_163;
		L_163 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_162, 6, /*hidden argument*/NULL);
		void* L_164;
		L_164 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_163, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)(intptr_t)L_164));
	}

IL_029e:
	{
		intptr_t L_165 = V_1;
		intptr_t L_166;
		L_166 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_165, 7, /*hidden argument*/NULL);
		void* L_167;
		L_167 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_166, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)(intptr_t)L_167));
	}
}
// System.Boolean System.SpanHelpers::SequenceEqual(System.Byte&,System.Byte&,System.NUInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_SequenceEqual_mDEB0F358BB173EA24BEEB0609454A997E9273A89 (uint8_t* ___first0, uint8_t* ___second1, NUInt_t6097F6D5A9138404C7786F1B3E1654AD18E030F5  ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_AreSame_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m432CDE821F63BC587F0A2EF35562935875F9C5DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1_get_Count_m6F1F8DDBF49AFE0B82F12C94AA096F26FA8DBC37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1_op_Equality_mD995A6FD72036B2C240A912C4AA19D5701A43D18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1_op_Inequality_mBA4346A92E18E027DD3E765840093720AFBE15E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		uint8_t* L_0 = ___first0;
		uint8_t* L_1 = ___second1;
		bool L_2;
		L_2 = Unsafe_AreSame_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m432CDE821F63BC587F0A2EF35562935875F9C5DA_inline((uint8_t*)L_0, (uint8_t*)L_1, /*hidden argument*/Unsafe_AreSame_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m432CDE821F63BC587F0A2EF35562935875F9C5DA_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_013d;
		}
	}
	{
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_m9092E57CE669E7B9CCDCF5ADD6DFB758D6545FBF(0, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_3;
		NUInt_t6097F6D5A9138404C7786F1B3E1654AD18E030F5  L_4 = ___length2;
		void* L_5;
		L_5 = NUInt_op_Explicit_mAC8186F05FC1F16BAEB9A73957491CB24A067D46_inline(L_4, /*hidden argument*/NULL);
		intptr_t L_6;
		L_6 = IntPtr_op_Explicit_mBD40223EE90BDDF40A24C0F321D3398DEA300495((void*)(void*)L_5, /*hidden argument*/NULL);
		V_1 = (intptr_t)L_6;
		bool L_7;
		L_7 = Vector_get_IsHardwareAccelerated_m282E2F7F13A15EAEFC4059305F18867139398D74(/*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_009c;
		}
	}
	{
		intptr_t L_8 = V_1;
		void* L_9;
		L_9 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = Vector_1_get_Count_m6F1F8DDBF49AFE0B82F12C94AA096F26FA8DBC37_inline(/*hidden argument*/Vector_1_get_Count_m6F1F8DDBF49AFE0B82F12C94AA096F26FA8DBC37_RuntimeMethod_var);
		if ((!(((uintptr_t)L_9) >= ((uintptr_t)((intptr_t)L_10)))))
		{
			goto IL_009c;
		}
	}
	{
		intptr_t L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08_il2cpp_TypeInfo_var);
		int32_t L_12;
		L_12 = Vector_1_get_Count_m6F1F8DDBF49AFE0B82F12C94AA096F26FA8DBC37_inline(/*hidden argument*/Vector_1_get_Count_m6F1F8DDBF49AFE0B82F12C94AA096F26FA8DBC37_RuntimeMethod_var);
		intptr_t L_13;
		L_13 = IntPtr_op_Subtraction_m02F3295A959F0DF44F66D04D88F3EE66DFC4BFD9((intptr_t)L_11, L_12, /*hidden argument*/NULL);
		V_1 = (intptr_t)L_13;
		goto IL_0070;
	}

IL_0042:
	{
		uint8_t* L_14 = ___first0;
		intptr_t L_15 = V_0;
		uint8_t* L_16;
		L_16 = Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_inline((uint8_t*)L_14, (intptr_t)L_15, /*hidden argument*/Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_RuntimeMethod_var);
		Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  L_17;
		L_17 = IL2CPP_UNSAFE_READ_UNALIGNED(Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08 , (uint8_t*)L_16);
		uint8_t* L_18 = ___second1;
		intptr_t L_19 = V_0;
		uint8_t* L_20;
		L_20 = Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_inline((uint8_t*)L_18, (intptr_t)L_19, /*hidden argument*/Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_RuntimeMethod_var);
		Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  L_21;
		L_21 = IL2CPP_UNSAFE_READ_UNALIGNED(Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08 , (uint8_t*)L_20);
		IL2CPP_RUNTIME_CLASS_INIT(Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Vector_1_op_Inequality_mBA4346A92E18E027DD3E765840093720AFBE15E3_inline(L_17, L_21, /*hidden argument*/Vector_1_op_Inequality_mBA4346A92E18E027DD3E765840093720AFBE15E3_RuntimeMethod_var);
		if (L_22)
		{
			goto IL_013f;
		}
	}
	{
		intptr_t L_23 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08_il2cpp_TypeInfo_var);
		int32_t L_24;
		L_24 = Vector_1_get_Count_m6F1F8DDBF49AFE0B82F12C94AA096F26FA8DBC37_inline(/*hidden argument*/Vector_1_get_Count_m6F1F8DDBF49AFE0B82F12C94AA096F26FA8DBC37_RuntimeMethod_var);
		intptr_t L_25;
		L_25 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_23, L_24, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_25;
	}

IL_0070:
	{
		intptr_t L_26 = V_1;
		void* L_27;
		L_27 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_26, /*hidden argument*/NULL);
		intptr_t L_28 = V_0;
		void* L_29;
		L_29 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_28, /*hidden argument*/NULL);
		if ((!(((uintptr_t)L_27) <= ((uintptr_t)L_29))))
		{
			goto IL_0042;
		}
	}
	{
		uint8_t* L_30 = ___first0;
		intptr_t L_31 = V_1;
		uint8_t* L_32;
		L_32 = Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_inline((uint8_t*)L_30, (intptr_t)L_31, /*hidden argument*/Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_RuntimeMethod_var);
		Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  L_33;
		L_33 = IL2CPP_UNSAFE_READ_UNALIGNED(Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08 , (uint8_t*)L_32);
		uint8_t* L_34 = ___second1;
		intptr_t L_35 = V_1;
		uint8_t* L_36;
		L_36 = Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_inline((uint8_t*)L_34, (intptr_t)L_35, /*hidden argument*/Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_RuntimeMethod_var);
		Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  L_37;
		L_37 = IL2CPP_UNSAFE_READ_UNALIGNED(Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08 , (uint8_t*)L_36);
		IL2CPP_RUNTIME_CLASS_INIT(Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Vector_1_op_Equality_mD995A6FD72036B2C240A912C4AA19D5701A43D18_inline(L_33, L_37, /*hidden argument*/Vector_1_op_Equality_mD995A6FD72036B2C240A912C4AA19D5701A43D18_RuntimeMethod_var);
		return L_38;
	}

IL_009c:
	{
		intptr_t L_39 = V_1;
		void* L_40;
		L_40 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_39, /*hidden argument*/NULL);
		uint32_t L_41 = sizeof(uintptr_t);
		if ((!(((uintptr_t)L_40) >= ((uintptr_t)((intptr_t)L_41)))))
		{
			goto IL_012f;
		}
	}
	{
		intptr_t L_42 = V_1;
		uint32_t L_43 = sizeof(uintptr_t);
		intptr_t L_44;
		L_44 = IntPtr_op_Subtraction_m02F3295A959F0DF44F66D04D88F3EE66DFC4BFD9((intptr_t)L_42, L_43, /*hidden argument*/NULL);
		V_1 = (intptr_t)L_44;
		goto IL_00e9;
	}

IL_00bd:
	{
		uint8_t* L_45 = ___first0;
		intptr_t L_46 = V_0;
		uint8_t* L_47;
		L_47 = Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_inline((uint8_t*)L_45, (intptr_t)L_46, /*hidden argument*/Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_RuntimeMethod_var);
		uintptr_t L_48;
		L_48 = IL2CPP_UNSAFE_READ_UNALIGNED(uintptr_t, (uint8_t*)L_47);
		uint8_t* L_49 = ___second1;
		intptr_t L_50 = V_0;
		uint8_t* L_51;
		L_51 = Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_inline((uint8_t*)L_49, (intptr_t)L_50, /*hidden argument*/Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_RuntimeMethod_var);
		uintptr_t L_52;
		L_52 = IL2CPP_UNSAFE_READ_UNALIGNED(uintptr_t, (uint8_t*)L_51);
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		bool L_53;
		L_53 = UIntPtr_op_Inequality_m7D22151019093F083240F615DA4B70CE2CF494B4(L_48, L_52, /*hidden argument*/NULL);
		if (L_53)
		{
			goto IL_013f;
		}
	}
	{
		intptr_t L_54 = V_0;
		uint32_t L_55 = sizeof(uintptr_t);
		intptr_t L_56;
		L_56 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_54, L_55, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_56;
	}

IL_00e9:
	{
		intptr_t L_57 = V_1;
		void* L_58;
		L_58 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_57, /*hidden argument*/NULL);
		intptr_t L_59 = V_0;
		void* L_60;
		L_60 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_59, /*hidden argument*/NULL);
		if ((!(((uintptr_t)L_58) <= ((uintptr_t)L_60))))
		{
			goto IL_00bd;
		}
	}
	{
		uint8_t* L_61 = ___first0;
		intptr_t L_62 = V_1;
		uint8_t* L_63;
		L_63 = Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_inline((uint8_t*)L_61, (intptr_t)L_62, /*hidden argument*/Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_RuntimeMethod_var);
		uintptr_t L_64;
		L_64 = IL2CPP_UNSAFE_READ_UNALIGNED(uintptr_t, (uint8_t*)L_63);
		uint8_t* L_65 = ___second1;
		intptr_t L_66 = V_1;
		uint8_t* L_67;
		L_67 = Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_inline((uint8_t*)L_65, (intptr_t)L_66, /*hidden argument*/Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_RuntimeMethod_var);
		uintptr_t L_68;
		L_68 = IL2CPP_UNSAFE_READ_UNALIGNED(uintptr_t, (uint8_t*)L_67);
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		bool L_69;
		L_69 = UIntPtr_op_Equality_mA909564C1AAE89E5119A6BD536C1A1B260625A5D(L_64, L_68, /*hidden argument*/NULL);
		return L_69;
	}

IL_0115:
	{
		uint8_t* L_70 = ___first0;
		intptr_t L_71 = V_0;
		uint8_t* L_72;
		L_72 = Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_inline((uint8_t*)L_70, (intptr_t)L_71, /*hidden argument*/Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_RuntimeMethod_var);
		int32_t L_73 = *((uint8_t*)L_72);
		uint8_t* L_74 = ___second1;
		intptr_t L_75 = V_0;
		uint8_t* L_76;
		L_76 = Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_inline((uint8_t*)L_74, (intptr_t)L_75, /*hidden argument*/Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_RuntimeMethod_var);
		int32_t L_77 = *((uint8_t*)L_76);
		if ((!(((uint32_t)L_73) == ((uint32_t)L_77))))
		{
			goto IL_013f;
		}
	}
	{
		intptr_t L_78 = V_0;
		intptr_t L_79;
		L_79 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_78, 1, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_79;
	}

IL_012f:
	{
		intptr_t L_80 = V_1;
		void* L_81;
		L_81 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_80, /*hidden argument*/NULL);
		intptr_t L_82 = V_0;
		void* L_83;
		L_83 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_82, /*hidden argument*/NULL);
		if ((!(((uintptr_t)L_81) <= ((uintptr_t)L_83))))
		{
			goto IL_0115;
		}
	}

IL_013d:
	{
		return (bool)1;
	}

IL_013f:
	{
		return (bool)0;
	}
}
// System.Int32 System.SpanHelpers::LocateFirstFoundByte(System.Numerics.Vector`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_LocateFirstFoundByte_m419FAFA78D34AB13ADED0E04C54AD68D69551E83 (Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  ___match0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1_get_Count_m0A3F1124AD2731436A2A593F00FC37F717CD6CCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1_get_Item_mEB12DE8C060BF68B5D7CEC3DB61FA217DEC41080_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_AsVectorUInt64_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mC567616F831B415B272343591343975A63D69EFC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint64_t V_1 = 0;
	int32_t V_2 = 0;
	{
		Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  L_0 = ___match0;
		Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B  L_1;
		L_1 = Vector_AsVectorUInt64_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mC567616F831B415B272343591343975A63D69EFC_inline(L_0, /*hidden argument*/Vector_AsVectorUInt64_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mC567616F831B415B272343591343975A63D69EFC_RuntimeMethod_var);
		V_0 = L_1;
		V_1 = ((int64_t)((int64_t)0));
		V_2 = 0;
		goto IL_001e;
	}

IL_000e:
	{
		int32_t L_2 = V_2;
		uint64_t L_3;
		L_3 = Vector_1_get_Item_mEB12DE8C060BF68B5D7CEC3DB61FA217DEC41080((Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B *)(&V_0), L_2, /*hidden argument*/Vector_1_get_Item_mEB12DE8C060BF68B5D7CEC3DB61FA217DEC41080_RuntimeMethod_var);
		V_1 = L_3;
		uint64_t L_4 = V_1;
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_5 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_001e:
	{
		int32_t L_6 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Vector_1_get_Count_m0A3F1124AD2731436A2A593F00FC37F717CD6CCB_inline(/*hidden argument*/Vector_1_get_Count_m0A3F1124AD2731436A2A593F00FC37F717CD6CCB_RuntimeMethod_var);
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_000e;
		}
	}

IL_0026:
	{
		int32_t L_8 = V_2;
		uint64_t L_9 = V_1;
		int32_t L_10;
		L_10 = SpanHelpers_LocateFirstFoundByte_m6AEEBF64B95585D577D0041CE56E0BE6F28AEFE4_inline(L_9, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)8)), (int32_t)L_10));
	}
}
// System.Int32 System.SpanHelpers::LocateFirstFoundByte(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_LocateFirstFoundByte_m6AEEBF64B95585D577D0041CE56E0BE6F28AEFE4 (uint64_t ___match0, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		uint64_t L_0 = ___match0;
		uint64_t L_1 = ___match0;
		V_0 = ((int64_t)((int64_t)L_0^(int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_1, (int64_t)((int64_t)((int64_t)1))))));
		uint64_t L_2 = V_0;
		return ((int32_t)((int32_t)((int64_t)((uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_2, (int64_t)((int64_t)283686952306184LL)))>>((int32_t)57)))));
	}
}
// System.Numerics.Vector`1<System.Byte> System.SpanHelpers::GetVector(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  SpanHelpers_GetVector_mB6C94E0B80F7E5A77D84E2B202C1B8DD742E9FD9 (uint8_t ___vectorByte0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1__ctor_m91A33CB1C548BFAC5BB414B8F5CAE0E156EF269E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_AsVectorByte_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m372B582B265FA776E8B53D51A552A9743572F82B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t L_0 = ___vectorByte0;
		Vector_1_tF47DE392A41397C167EDBF371E6B4E8AA79D7030  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector_1__ctor_m91A33CB1C548BFAC5BB414B8F5CAE0E156EF269E((&L_1), ((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)16843009))), /*hidden argument*/Vector_1__ctor_m91A33CB1C548BFAC5BB414B8F5CAE0E156EF269E_RuntimeMethod_var);
		Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  L_2;
		L_2 = Vector_AsVectorByte_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m372B582B265FA776E8B53D51A552A9743572F82B_inline(L_1, /*hidden argument*/Vector_AsVectorByte_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m372B582B265FA776E8B53D51A552A9743572F82B_RuntimeMethod_var);
		return L_2;
	}
}
// System.Int32 System.SpanHelpers::IndexOf(System.Char&,System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_m0740DDBBE5723E3595EADF2552551F636C18A259 (Il2CppChar* ___searchSpace0, Il2CppChar ___value1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_Read_TisVector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC_m80308A9BAF3E599D0E46C16D30B25F6DBBA8983F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_SizeOf_TisVector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC_m630621324270B1BB57F6A7D0A02C0E4C8218FB7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1_Equals_mAB571D1F19A77D7F9736F214B43B853570ADE33D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1__ctor_mD4A0CE968AC976EDE49DE043EDDE1452D527E638_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1_get_Count_m08C2BE69EF27B3ABF0C49C66D4EBD63DB4CEBD69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1_get_Zero_m16C1E63064B0566B3729C7A6EAA36DB3BF4B35D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_Equals_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_mC5EF21D75B8379A25C2F8EABEFC56653DEE6DF25_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	Il2CppChar* V_1 = NULL;
	Il2CppChar* V_2 = NULL;
	Il2CppChar* V_3 = NULL;
	int32_t V_4 = 0;
	Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		Il2CppChar* L_0 = ___searchSpace0;
		V_1 = (Il2CppChar*)L_0;
		Il2CppChar* L_1 = V_1;
		V_0 = (Il2CppChar*)((uintptr_t)L_1);
		Il2CppChar* L_2 = V_0;
		V_2 = (Il2CppChar*)L_2;
		Il2CppChar* L_3 = V_2;
		int32_t L_4 = ___length2;
		V_3 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_3, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_4), (int32_t)2))));
		bool L_5;
		L_5 = Vector_get_IsHardwareAccelerated_m282E2F7F13A15EAEFC4059305F18867139398D74(/*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_6 = ___length2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Vector_1_get_Count_m08C2BE69EF27B3ABF0C49C66D4EBD63DB4CEBD69_inline(/*hidden argument*/Vector_1_get_Count_m08C2BE69EF27B3ABF0C49C66D4EBD63DB4CEBD69_RuntimeMethod_var);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_7, (int32_t)2)))))
		{
			goto IL_0079;
		}
	}
	{
		Il2CppChar* L_8 = V_2;
		int32_t L_9;
		L_9 = Unsafe_SizeOf_TisVector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC_m630621324270B1BB57F6A7D0A02C0E4C8218FB7A_inline(/*hidden argument*/Unsafe_SizeOf_TisVector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC_m630621324270B1BB57F6A7D0A02C0E4C8218FB7A_RuntimeMethod_var);
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(intptr_t)L_8))&(int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1))))/(int32_t)2));
		IL2CPP_RUNTIME_CLASS_INIT(Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = Vector_1_get_Count_m08C2BE69EF27B3ABF0C49C66D4EBD63DB4CEBD69_inline(/*hidden argument*/Vector_1_get_Count_m08C2BE69EF27B3ABF0C49C66D4EBD63DB4CEBD69_RuntimeMethod_var);
		int32_t L_11 = V_4;
		int32_t L_12;
		L_12 = Vector_1_get_Count_m08C2BE69EF27B3ABF0C49C66D4EBD63DB4CEBD69_inline(/*hidden argument*/Vector_1_get_Count_m08C2BE69EF27B3ABF0C49C66D4EBD63DB4CEBD69_RuntimeMethod_var);
		___length2 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)L_11))&(int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1))));
		goto IL_0079;
	}

IL_0041:
	{
		int32_t L_13 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)4));
		Il2CppChar* L_14 = V_2;
		int32_t L_15 = *((uint16_t*)L_14);
		Il2CppChar L_16 = ___value1;
		if ((((int32_t)L_15) == ((int32_t)L_16)))
		{
			goto IL_0127;
		}
	}
	{
		Il2CppChar* L_17 = V_2;
		int32_t L_18 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_17, (int32_t)2)));
		Il2CppChar L_19 = ___value1;
		if ((((int32_t)L_18) == ((int32_t)L_19)))
		{
			goto IL_0123;
		}
	}
	{
		Il2CppChar* L_20 = V_2;
		int32_t L_21 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_20, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)2), (int32_t)2)))));
		Il2CppChar L_22 = ___value1;
		if ((((int32_t)L_21) == ((int32_t)L_22)))
		{
			goto IL_011f;
		}
	}
	{
		Il2CppChar* L_23 = V_2;
		int32_t L_24 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_23, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)3), (int32_t)2)))));
		Il2CppChar L_25 = ___value1;
		if ((((int32_t)L_24) == ((int32_t)L_25)))
		{
			goto IL_011b;
		}
	}
	{
		Il2CppChar* L_26 = V_2;
		V_2 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_26, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)4), (int32_t)2))));
	}

IL_0079:
	{
		int32_t L_27 = ___length2;
		if ((((int32_t)L_27) >= ((int32_t)4)))
		{
			goto IL_0041;
		}
	}
	{
		goto IL_0090;
	}

IL_007f:
	{
		int32_t L_28 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)1));
		Il2CppChar* L_29 = V_2;
		int32_t L_30 = *((uint16_t*)L_29);
		Il2CppChar L_31 = ___value1;
		if ((((int32_t)L_30) == ((int32_t)L_31)))
		{
			goto IL_0127;
		}
	}
	{
		Il2CppChar* L_32 = V_2;
		V_2 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_32, (int32_t)2));
	}

IL_0090:
	{
		int32_t L_33 = ___length2;
		if ((((int32_t)L_33) > ((int32_t)0)))
		{
			goto IL_007f;
		}
	}
	{
		bool L_34;
		L_34 = Vector_get_IsHardwareAccelerated_m282E2F7F13A15EAEFC4059305F18867139398D74(/*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_0119;
		}
	}
	{
		Il2CppChar* L_35 = V_2;
		Il2CppChar* L_36 = V_3;
		if ((!(((uintptr_t)L_35) < ((uintptr_t)L_36))))
		{
			goto IL_0119;
		}
	}
	{
		Il2CppChar* L_37 = V_3;
		Il2CppChar* L_38 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC_il2cpp_TypeInfo_var);
		int32_t L_39;
		L_39 = Vector_1_get_Count_m08C2BE69EF27B3ABF0C49C66D4EBD63DB4CEBD69_inline(/*hidden argument*/Vector_1_get_Count_m08C2BE69EF27B3ABF0C49C66D4EBD63DB4CEBD69_RuntimeMethod_var);
		___length2 = ((int32_t)((int32_t)((int64_t)((int64_t)((int64_t)((int64_t)(intptr_t)((Il2CppChar*)((intptr_t)((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)L_37, (intptr_t)L_38))/(int32_t)2))))&(int64_t)((int64_t)((int64_t)((~((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)1))))))))));
		Il2CppChar L_40 = ___value1;
		Vector_1__ctor_mD4A0CE968AC976EDE49DE043EDDE1452D527E638((Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC *)(&V_5), L_40, /*hidden argument*/Vector_1__ctor_mD4A0CE968AC976EDE49DE043EDDE1452D527E638_RuntimeMethod_var);
		goto IL_0103;
	}

IL_00bc:
	{
		Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  L_41 = V_5;
		Il2CppChar* L_42 = V_2;
		Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  L_43;
		L_43 = Unsafe_Read_TisVector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC_m80308A9BAF3E599D0E46C16D30B25F6DBBA8983F_inline((void*)(void*)L_42, /*hidden argument*/Unsafe_Read_TisVector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC_m80308A9BAF3E599D0E46C16D30B25F6DBBA8983F_RuntimeMethod_var);
		Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  L_44;
		L_44 = Vector_Equals_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_mC5EF21D75B8379A25C2F8EABEFC56653DEE6DF25_inline(L_41, L_43, /*hidden argument*/Vector_Equals_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_mC5EF21D75B8379A25C2F8EABEFC56653DEE6DF25_RuntimeMethod_var);
		V_6 = L_44;
		IL2CPP_RUNTIME_CLASS_INIT(Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC_il2cpp_TypeInfo_var);
		Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  L_45;
		L_45 = Vector_1_get_Zero_m16C1E63064B0566B3729C7A6EAA36DB3BF4B35D8_inline(/*hidden argument*/Vector_1_get_Zero_m16C1E63064B0566B3729C7A6EAA36DB3BF4B35D8_RuntimeMethod_var);
		V_7 = L_45;
		Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  L_46 = V_6;
		bool L_47;
		L_47 = Vector_1_Equals_mAB571D1F19A77D7F9736F214B43B853570ADE33D((Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC *)(&V_7), L_46, /*hidden argument*/Vector_1_Equals_mAB571D1F19A77D7F9736F214B43B853570ADE33D_RuntimeMethod_var);
		if (!L_47)
		{
			goto IL_00f3;
		}
	}
	{
		Il2CppChar* L_48 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC_il2cpp_TypeInfo_var);
		int32_t L_49;
		L_49 = Vector_1_get_Count_m08C2BE69EF27B3ABF0C49C66D4EBD63DB4CEBD69_inline(/*hidden argument*/Vector_1_get_Count_m08C2BE69EF27B3ABF0C49C66D4EBD63DB4CEBD69_RuntimeMethod_var);
		V_2 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_48, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_49), (int32_t)2))));
		int32_t L_50 = ___length2;
		int32_t L_51;
		L_51 = Vector_1_get_Count_m08C2BE69EF27B3ABF0C49C66D4EBD63DB4CEBD69_inline(/*hidden argument*/Vector_1_get_Count_m08C2BE69EF27B3ABF0C49C66D4EBD63DB4CEBD69_RuntimeMethod_var);
		___length2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_50, (int32_t)L_51));
		goto IL_0103;
	}

IL_00f3:
	{
		Il2CppChar* L_52 = V_2;
		Il2CppChar* L_53 = V_0;
		Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  L_54 = V_6;
		int32_t L_55;
		L_55 = SpanHelpers_LocateFirstFoundChar_m6F7002BE58BB1D79412002F2AEF2E430F8720F97_inline(L_54, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)((int64_t)((int64_t)(intptr_t)((Il2CppChar*)((intptr_t)((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)L_52, (intptr_t)L_53))/(int32_t)2)))))), (int32_t)L_55));
	}

IL_0103:
	{
		int32_t L_56 = ___length2;
		if ((((int32_t)L_56) > ((int32_t)0)))
		{
			goto IL_00bc;
		}
	}
	{
		Il2CppChar* L_57 = V_2;
		Il2CppChar* L_58 = V_3;
		if ((!(((uintptr_t)L_57) < ((uintptr_t)L_58))))
		{
			goto IL_0119;
		}
	}
	{
		Il2CppChar* L_59 = V_3;
		Il2CppChar* L_60 = V_2;
		___length2 = ((int32_t)((int32_t)((int64_t)((int64_t)(intptr_t)((Il2CppChar*)((intptr_t)((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)L_59, (intptr_t)L_60))/(int32_t)2))))));
		goto IL_0079;
	}

IL_0119:
	{
		return (-1);
	}

IL_011b:
	{
		Il2CppChar* L_61 = V_2;
		V_2 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_61, (int32_t)2));
	}

IL_011f:
	{
		Il2CppChar* L_62 = V_2;
		V_2 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_62, (int32_t)2));
	}

IL_0123:
	{
		Il2CppChar* L_63 = V_2;
		V_2 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_63, (int32_t)2));
	}

IL_0127:
	{
		Il2CppChar* L_64 = V_2;
		Il2CppChar* L_65 = V_0;
		return ((int32_t)((int32_t)((int64_t)((int64_t)(intptr_t)((Il2CppChar*)((intptr_t)((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)L_64, (intptr_t)L_65))/(int32_t)2))))));
	}
}
// System.Int32 System.SpanHelpers::LocateFirstFoundChar(System.Numerics.Vector`1<System.UInt16>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_LocateFirstFoundChar_m6F7002BE58BB1D79412002F2AEF2E430F8720F97 (Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  ___match0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1_get_Count_m0A3F1124AD2731436A2A593F00FC37F717CD6CCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1_get_Item_mEB12DE8C060BF68B5D7CEC3DB61FA217DEC41080_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_AsVectorUInt64_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_mC04146E01E097E2AAA1EB93B5D9384A22541DF08_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint64_t V_1 = 0;
	int32_t V_2 = 0;
	{
		Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  L_0 = ___match0;
		Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B  L_1;
		L_1 = Vector_AsVectorUInt64_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_mC04146E01E097E2AAA1EB93B5D9384A22541DF08_inline(L_0, /*hidden argument*/Vector_AsVectorUInt64_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_mC04146E01E097E2AAA1EB93B5D9384A22541DF08_RuntimeMethod_var);
		V_0 = L_1;
		V_1 = ((int64_t)((int64_t)0));
		V_2 = 0;
		goto IL_001e;
	}

IL_000e:
	{
		int32_t L_2 = V_2;
		uint64_t L_3;
		L_3 = Vector_1_get_Item_mEB12DE8C060BF68B5D7CEC3DB61FA217DEC41080((Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B *)(&V_0), L_2, /*hidden argument*/Vector_1_get_Item_mEB12DE8C060BF68B5D7CEC3DB61FA217DEC41080_RuntimeMethod_var);
		V_1 = L_3;
		uint64_t L_4 = V_1;
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_5 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_001e:
	{
		int32_t L_6 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Vector_1_get_Count_m0A3F1124AD2731436A2A593F00FC37F717CD6CCB_inline(/*hidden argument*/Vector_1_get_Count_m0A3F1124AD2731436A2A593F00FC37F717CD6CCB_RuntimeMethod_var);
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_000e;
		}
	}

IL_0026:
	{
		int32_t L_8 = V_2;
		uint64_t L_9 = V_1;
		int32_t L_10;
		L_10 = SpanHelpers_LocateFirstFoundChar_m7B3D3FD47EB5BA8837CE3E8CE2D2BBA7BFC62CE3_inline(L_9, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)4)), (int32_t)L_10));
	}
}
// System.Int32 System.SpanHelpers::LocateFirstFoundChar(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_LocateFirstFoundChar_m7B3D3FD47EB5BA8837CE3E8CE2D2BBA7BFC62CE3 (uint64_t ___match0, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		uint64_t L_0 = ___match0;
		uint64_t L_1 = ___match0;
		V_0 = ((int64_t)((int64_t)L_0^(int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_1, (int64_t)((int64_t)((int64_t)1))))));
		uint64_t L_2 = V_0;
		return ((int32_t)((int32_t)((int64_t)((uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_2, (int64_t)((int64_t)4295098372LL)))>>((int32_t)49)))));
	}
}
// System.Boolean System.SpanHelpers::IsReferenceOrContainsReferencesCore(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferencesCore_m4046A8EAD00DA02AA423C292A8FCBB08268AD781 (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t0DF027D1C7415CBB03F663A5D5ACE52D29226059_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t620905184FE92C7CD2128B5FE4079C455117C4B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	FieldInfo_t * V_2 = NULL;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		Type_t * L_0 = ___type0;
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_1;
		L_1 = IntrospectionExtensions_GetTypeInfo_m77034F8576BE695819427C13103C591277C1B636(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		Type_t * L_3 = ___type0;
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_4;
		L_4 = IntrospectionExtensions_GetTypeInfo_m77034F8576BE695819427C13103C591277C1B636(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		Type_t * L_6 = ___type0;
		Type_t * L_7;
		L_7 = Nullable_GetUnderlyingType_mC5699E7E11E1AFE25365CAB564A48F0193318629(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		Type_t * L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_8, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0031;
		}
	}
	{
		Type_t * L_10 = V_0;
		___type0 = L_10;
	}

IL_0031:
	{
		Type_t * L_11 = ___type0;
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_12;
		L_12 = IntrospectionExtensions_GetTypeInfo_m77034F8576BE695819427C13103C591277C1B636(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		bool L_13;
		L_13 = VirtFuncInvoker0< bool >::Invoke(68 /* System.Boolean System.Type::get_IsEnum() */, L_12);
		if (!L_13)
		{
			goto IL_0040;
		}
	}
	{
		return (bool)0;
	}

IL_0040:
	{
		Type_t * L_14 = ___type0;
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_15;
		L_15 = IntrospectionExtensions_GetTypeInfo_m77034F8576BE695819427C13103C591277C1B636(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = VirtFuncInvoker0< RuntimeObject* >::Invoke(118 /* System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo> System.Reflection.TypeInfo::get_DeclaredFields() */, L_15);
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>::GetEnumerator() */, IEnumerable_1_t0DF027D1C7415CBB03F663A5D5ACE52D29226059_il2cpp_TypeInfo_var, L_16);
		V_1 = L_17;
	}

IL_0051:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0073;
		}

IL_0053:
		{
			RuntimeObject* L_18 = V_1;
			NullCheck(L_18);
			FieldInfo_t * L_19;
			L_19 = InterfaceFuncInvoker0< FieldInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.FieldInfo>::get_Current() */, IEnumerator_1_t620905184FE92C7CD2128B5FE4079C455117C4B8_il2cpp_TypeInfo_var, L_18);
			V_2 = L_19;
			FieldInfo_t * L_20 = V_2;
			NullCheck(L_20);
			bool L_21;
			L_21 = FieldInfo_get_IsStatic_mE36F3A5B2DFF613C704AA56989D90D72760391EB(L_20, /*hidden argument*/NULL);
			if (L_21)
			{
				goto IL_0073;
			}
		}

IL_0062:
		{
			FieldInfo_t * L_22 = V_2;
			NullCheck(L_22);
			Type_t * L_23;
			L_23 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_22);
			bool L_24;
			L_24 = SpanHelpers_IsReferenceOrContainsReferencesCore_m4046A8EAD00DA02AA423C292A8FCBB08268AD781(L_23, /*hidden argument*/NULL);
			if (!L_24)
			{
				goto IL_0073;
			}
		}

IL_006f:
		{
			V_3 = (bool)1;
			IL2CPP_LEAVE(0x89, FINALLY_007d);
		}

IL_0073:
		{
			RuntimeObject* L_25 = V_1;
			NullCheck(L_25);
			bool L_26;
			L_26 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_25);
			if (L_26)
			{
				goto IL_0053;
			}
		}

IL_007b:
		{
			IL2CPP_LEAVE(0x87, FINALLY_007d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007d;
	}

FINALLY_007d:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_27 = V_1;
			if (!L_27)
			{
				goto IL_0086;
			}
		}

IL_0080:
		{
			RuntimeObject* L_28 = V_1;
			NullCheck(L_28);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_28);
		}

IL_0086:
		{
			IL2CPP_END_FINALLY(125)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(125)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x89, IL_0089)
		IL2CPP_JUMP_TBL(0x87, IL_0087)
	}

IL_0087:
	{
		return (bool)0;
	}

IL_0089:
	{
		bool L_29 = V_3;
		return L_29;
	}
}
// System.Void System.SpanHelpers::ClearLessThanPointerSized(System.Byte*,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanHelpers_ClearLessThanPointerSized_m257390BAE1A54335F742BD17D85AF6D8FC03C831 (uint8_t* ___ptr0, uintptr_t ___byteLength1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t G_B6_0 = 0;
	{
		uint32_t L_0 = sizeof(uintptr_t);
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0017;
		}
	}
	{
		uint8_t* L_1 = ___ptr0;
		uintptr_t L_2 = ___byteLength1;
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uint32_t L_3;
		L_3 = UIntPtr_op_Explicit_m8EF5FC1C0CAF58F8F2310C0D989F20F0694CD7CF(L_2, /*hidden argument*/NULL);
		Unsafe_InitBlockUnaligned_m052F07F8475562B2C26782A0926C742F718BDA22_inline((void*)(void*)L_1, (uint8_t)0, L_3, /*hidden argument*/NULL);
		return;
	}

IL_0017:
	{
		uintptr_t L_4 = ___byteLength1;
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uint64_t L_5;
		L_5 = UIntPtr_op_Explicit_mEEA1D4A964FBFCC95BE2B91ADDD52EF7067C312D(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		uint64_t L_6 = V_0;
		V_1 = ((int32_t)((uint32_t)((int64_t)((int64_t)L_6&(int64_t)((int64_t)((uint64_t)((uint32_t)((uint32_t)(-1)))))))));
		uint8_t* L_7 = ___ptr0;
		uint32_t L_8 = V_1;
		Unsafe_InitBlockUnaligned_m052F07F8475562B2C26782A0926C742F718BDA22_inline((void*)(void*)L_7, (uint8_t)0, L_8, /*hidden argument*/NULL);
		uint64_t L_9 = V_0;
		uint32_t L_10 = V_1;
		V_0 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_9, (int64_t)((int64_t)((uint64_t)L_10))));
		uint8_t* L_11 = ___ptr0;
		uint32_t L_12 = V_1;
		___ptr0 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_11, (intptr_t)((uintptr_t)L_12)));
		goto IL_0057;
	}

IL_0039:
	{
		uint64_t L_13 = V_0;
		if ((!(((uint64_t)L_13) < ((uint64_t)((int64_t)((uint64_t)((uint32_t)((uint32_t)(-1)))))))))
		{
			goto IL_0042;
		}
	}
	{
		uint64_t L_14 = V_0;
		G_B6_0 = ((int32_t)((uint32_t)L_14));
		goto IL_0043;
	}

IL_0042:
	{
		G_B6_0 = (-1);
	}

IL_0043:
	{
		V_1 = G_B6_0;
		uint8_t* L_15 = ___ptr0;
		uint32_t L_16 = V_1;
		Unsafe_InitBlockUnaligned_m052F07F8475562B2C26782A0926C742F718BDA22_inline((void*)(void*)L_15, (uint8_t)0, L_16, /*hidden argument*/NULL);
		uint8_t* L_17 = ___ptr0;
		uint32_t L_18 = V_1;
		___ptr0 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, (intptr_t)((uintptr_t)L_18)));
		uint64_t L_19 = V_0;
		uint32_t L_20 = V_1;
		V_0 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_19, (int64_t)((int64_t)((uint64_t)L_20))));
	}

IL_0057:
	{
		uint64_t L_21 = V_0;
		if ((!(((uint64_t)L_21) <= ((uint64_t)((int64_t)((int64_t)0))))))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Void System.SpanHelpers::ClearLessThanPointerSized(System.Byte&,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanHelpers_ClearLessThanPointerSized_mDD75E922D42E70B6F76DB1A1EC1A96F59CAFF0B5 (uint8_t* ___b0, uintptr_t ___byteLength1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_Add_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m9ABE4DAAE83872C0A6C84A181092107B74F1D8A7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	uint32_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	int32_t G_B6_0 = 0;
	{
		uint32_t L_0 = sizeof(uintptr_t);
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0017;
		}
	}
	{
		uint8_t* L_1 = ___b0;
		uintptr_t L_2 = ___byteLength1;
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uint32_t L_3;
		L_3 = UIntPtr_op_Explicit_m8EF5FC1C0CAF58F8F2310C0D989F20F0694CD7CF(L_2, /*hidden argument*/NULL);
		Unsafe_InitBlockUnaligned_m19BEDC2C614CA372758548BB4D1622F8CC53FF4F_inline((uint8_t*)L_1, (uint8_t)0, L_3, /*hidden argument*/NULL);
		return;
	}

IL_0017:
	{
		uintptr_t L_4 = ___byteLength1;
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uint64_t L_5;
		L_5 = UIntPtr_op_Explicit_mEEA1D4A964FBFCC95BE2B91ADDD52EF7067C312D(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		uint64_t L_6 = V_0;
		V_1 = ((int32_t)((uint32_t)((int64_t)((int64_t)L_6&(int64_t)((int64_t)((uint64_t)((uint32_t)((uint32_t)(-1)))))))));
		uint8_t* L_7 = ___b0;
		uint32_t L_8 = V_1;
		Unsafe_InitBlockUnaligned_m19BEDC2C614CA372758548BB4D1622F8CC53FF4F_inline((uint8_t*)L_7, (uint8_t)0, L_8, /*hidden argument*/NULL);
		uint64_t L_9 = V_0;
		uint32_t L_10 = V_1;
		V_0 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_9, (int64_t)((int64_t)((uint64_t)L_10))));
		uint32_t L_11 = V_1;
		V_2 = ((int64_t)((uint64_t)L_11));
		goto IL_0060;
	}

IL_0036:
	{
		uint64_t L_12 = V_0;
		if ((!(((uint64_t)L_12) < ((uint64_t)((int64_t)((uint64_t)((uint32_t)((uint32_t)(-1)))))))))
		{
			goto IL_003f;
		}
	}
	{
		uint64_t L_13 = V_0;
		G_B6_0 = ((int32_t)((uint32_t)L_13));
		goto IL_0040;
	}

IL_003f:
	{
		G_B6_0 = (-1);
	}

IL_0040:
	{
		V_1 = G_B6_0;
		uint8_t* L_14 = ___b0;
		int64_t L_15 = V_2;
		intptr_t L_16;
		L_16 = IntPtr_op_Explicit_m65D141119BA83745D73EE5F94267165F88D15B51(L_15, /*hidden argument*/NULL);
		uint8_t* L_17;
		L_17 = Unsafe_Add_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m9ABE4DAAE83872C0A6C84A181092107B74F1D8A7_inline((uint8_t*)L_14, (intptr_t)L_16, /*hidden argument*/Unsafe_Add_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m9ABE4DAAE83872C0A6C84A181092107B74F1D8A7_RuntimeMethod_var);
		V_3 = (uint8_t*)L_17;
		uint8_t* L_18 = V_3;
		uint32_t L_19 = V_1;
		Unsafe_InitBlockUnaligned_m19BEDC2C614CA372758548BB4D1622F8CC53FF4F_inline((uint8_t*)L_18, (uint8_t)0, L_19, /*hidden argument*/NULL);
		int64_t L_20 = V_2;
		uint32_t L_21 = V_1;
		V_2 = ((int64_t)il2cpp_codegen_add((int64_t)L_20, (int64_t)((int64_t)((uint64_t)L_21))));
		uint64_t L_22 = V_0;
		uint32_t L_23 = V_1;
		V_0 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_22, (int64_t)((int64_t)((uint64_t)L_23))));
	}

IL_0060:
	{
		uint64_t L_24 = V_0;
		if ((!(((uint64_t)L_24) <= ((uint64_t)((int64_t)((int64_t)0))))))
		{
			goto IL_0036;
		}
	}
	{
		return;
	}
}
// System.Void System.SpanHelpers::ClearPointerSizedWithoutReferences(System.Byte&,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanHelpers_ClearPointerSizedWithoutReferences_mC6EF2B959C4B0E58F8D4B8C9A5EF341F948FFAAA (uint8_t* ___b0, uintptr_t ___byteLength1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_Add_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m9ABE4DAAE83872C0A6C84A181092107B74F1D8A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_As_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mB9705B879316869DF89311F9ADB5B6BEE2629DC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_As_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m4AA2C39DA9491860F8AD8CBAD08F187AA089ACEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_As_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisReg16_t8B2CE150B820232BE56C005C405133CCA7A58CD4_mE8689C68ADE79915D3B986C19516728B2E4740DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_As_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisReg32_tA8676F8C245F150C7985C4A3BC3CD44E58D3B923_m820456769F6EA3078E6F4C2AF4CF5C885B0B9D60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_As_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisReg64_t4A40DA33D6F4C8FB3A17A3B3D9E6FB5B1FEEE9B3_m88C65D2DA086C658FD4F56AAD9F8E156C070FBEF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		V_0 = (intptr_t)(0);
		goto IL_0027;
	}

IL_0008:
	{
		uint8_t* L_0 = ___b0;
		intptr_t L_1 = V_0;
		uint8_t* L_2;
		L_2 = Unsafe_Add_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m9ABE4DAAE83872C0A6C84A181092107B74F1D8A7_inline((uint8_t*)L_0, (intptr_t)L_1, /*hidden argument*/Unsafe_Add_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m9ABE4DAAE83872C0A6C84A181092107B74F1D8A7_RuntimeMethod_var);
		Reg64_t4A40DA33D6F4C8FB3A17A3B3D9E6FB5B1FEEE9B3 * L_3;
		L_3 = Unsafe_As_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisReg64_t4A40DA33D6F4C8FB3A17A3B3D9E6FB5B1FEEE9B3_m88C65D2DA086C658FD4F56AAD9F8E156C070FBEF_inline((uint8_t*)L_2, /*hidden argument*/Unsafe_As_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisReg64_t4A40DA33D6F4C8FB3A17A3B3D9E6FB5B1FEEE9B3_m88C65D2DA086C658FD4F56AAD9F8E156C070FBEF_RuntimeMethod_var);
		il2cpp_codegen_initobj(L_3, sizeof(Reg64_t4A40DA33D6F4C8FB3A17A3B3D9E6FB5B1FEEE9B3 ));
		intptr_t L_4 = V_0;
		uint32_t L_5 = sizeof(Reg64_t4A40DA33D6F4C8FB3A17A3B3D9E6FB5B1FEEE9B3 );
		intptr_t L_6;
		L_6 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_4, L_5, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_6;
	}

IL_0027:
	{
		intptr_t L_7 = V_0;
		uintptr_t L_8 = ___byteLength1;
		uint32_t L_9 = sizeof(Reg64_t4A40DA33D6F4C8FB3A17A3B3D9E6FB5B1FEEE9B3 );
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_10;
		L_10 = UIntPtr_op_Subtraction_m455602034049E11A086A49C915EDF9DAEC43C91D(L_8, L_9, /*hidden argument*/NULL);
		bool L_11;
		L_11 = SpanHelpers_LessThanEqual_mCFA5E9CC05F428B1EDA65967FEF81267F917E88C_inline((intptr_t)L_7, L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0008;
		}
	}
	{
		intptr_t L_12 = V_0;
		uintptr_t L_13 = ___byteLength1;
		uint32_t L_14 = sizeof(Reg32_tA8676F8C245F150C7985C4A3BC3CD44E58D3B923 );
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_15;
		L_15 = UIntPtr_op_Subtraction_m455602034049E11A086A49C915EDF9DAEC43C91D(L_13, L_14, /*hidden argument*/NULL);
		bool L_16;
		L_16 = SpanHelpers_LessThanEqual_mCFA5E9CC05F428B1EDA65967FEF81267F917E88C_inline((intptr_t)L_12, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_006e;
		}
	}
	{
		uint8_t* L_17 = ___b0;
		intptr_t L_18 = V_0;
		uint8_t* L_19;
		L_19 = Unsafe_Add_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m9ABE4DAAE83872C0A6C84A181092107B74F1D8A7_inline((uint8_t*)L_17, (intptr_t)L_18, /*hidden argument*/Unsafe_Add_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m9ABE4DAAE83872C0A6C84A181092107B74F1D8A7_RuntimeMethod_var);
		Reg32_tA8676F8C245F150C7985C4A3BC3CD44E58D3B923 * L_20;
		L_20 = Unsafe_As_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisReg32_tA8676F8C245F150C7985C4A3BC3CD44E58D3B923_m820456769F6EA3078E6F4C2AF4CF5C885B0B9D60_inline((uint8_t*)L_19, /*hidden argument*/Unsafe_As_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisReg32_tA8676F8C245F150C7985C4A3BC3CD44E58D3B923_m820456769F6EA3078E6F4C2AF4CF5C885B0B9D60_RuntimeMethod_var);
		il2cpp_codegen_initobj(L_20, sizeof(Reg32_tA8676F8C245F150C7985C4A3BC3CD44E58D3B923 ));
		intptr_t L_21 = V_0;
		uint32_t L_22 = sizeof(Reg32_tA8676F8C245F150C7985C4A3BC3CD44E58D3B923 );
		intptr_t L_23;
		L_23 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_21, L_22, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_23;
	}

IL_006e:
	{
		intptr_t L_24 = V_0;
		uintptr_t L_25 = ___byteLength1;
		uint32_t L_26 = sizeof(Reg16_t8B2CE150B820232BE56C005C405133CCA7A58CD4 );
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_27;
		L_27 = UIntPtr_op_Subtraction_m455602034049E11A086A49C915EDF9DAEC43C91D(L_25, L_26, /*hidden argument*/NULL);
		bool L_28;
		L_28 = SpanHelpers_LessThanEqual_mCFA5E9CC05F428B1EDA65967FEF81267F917E88C_inline((intptr_t)L_24, L_27, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00a1;
		}
	}
	{
		uint8_t* L_29 = ___b0;
		intptr_t L_30 = V_0;
		uint8_t* L_31;
		L_31 = Unsafe_Add_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m9ABE4DAAE83872C0A6C84A181092107B74F1D8A7_inline((uint8_t*)L_29, (intptr_t)L_30, /*hidden argument*/Unsafe_Add_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m9ABE4DAAE83872C0A6C84A181092107B74F1D8A7_RuntimeMethod_var);
		Reg16_t8B2CE150B820232BE56C005C405133CCA7A58CD4 * L_32;
		L_32 = Unsafe_As_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisReg16_t8B2CE150B820232BE56C005C405133CCA7A58CD4_mE8689C68ADE79915D3B986C19516728B2E4740DF_inline((uint8_t*)L_31, /*hidden argument*/Unsafe_As_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisReg16_t8B2CE150B820232BE56C005C405133CCA7A58CD4_mE8689C68ADE79915D3B986C19516728B2E4740DF_RuntimeMethod_var);
		il2cpp_codegen_initobj(L_32, sizeof(Reg16_t8B2CE150B820232BE56C005C405133CCA7A58CD4 ));
		intptr_t L_33 = V_0;
		uint32_t L_34 = sizeof(Reg16_t8B2CE150B820232BE56C005C405133CCA7A58CD4 );
		intptr_t L_35;
		L_35 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_33, L_34, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_35;
	}

IL_00a1:
	{
		intptr_t L_36 = V_0;
		uintptr_t L_37 = ___byteLength1;
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_38;
		L_38 = UIntPtr_op_Subtraction_m455602034049E11A086A49C915EDF9DAEC43C91D(L_37, 8, /*hidden argument*/NULL);
		bool L_39;
		L_39 = SpanHelpers_LessThanEqual_mCFA5E9CC05F428B1EDA65967FEF81267F917E88C_inline((intptr_t)L_36, L_38, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_00c7;
		}
	}
	{
		uint8_t* L_40 = ___b0;
		intptr_t L_41 = V_0;
		uint8_t* L_42;
		L_42 = Unsafe_Add_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m9ABE4DAAE83872C0A6C84A181092107B74F1D8A7_inline((uint8_t*)L_40, (intptr_t)L_41, /*hidden argument*/Unsafe_Add_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m9ABE4DAAE83872C0A6C84A181092107B74F1D8A7_RuntimeMethod_var);
		int64_t* L_43;
		L_43 = Unsafe_As_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m4AA2C39DA9491860F8AD8CBAD08F187AA089ACEA_inline((uint8_t*)L_42, /*hidden argument*/Unsafe_As_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m4AA2C39DA9491860F8AD8CBAD08F187AA089ACEA_RuntimeMethod_var);
		*((int64_t*)L_43) = (int64_t)((int64_t)((int64_t)0));
		intptr_t L_44 = V_0;
		intptr_t L_45;
		L_45 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_44, 8, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_45;
	}

IL_00c7:
	{
		uint32_t L_46 = sizeof(intptr_t);
		if ((!(((uint32_t)L_46) == ((uint32_t)4))))
		{
			goto IL_00f5;
		}
	}
	{
		intptr_t L_47 = V_0;
		uintptr_t L_48 = ___byteLength1;
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_49;
		L_49 = UIntPtr_op_Subtraction_m455602034049E11A086A49C915EDF9DAEC43C91D(L_48, 4, /*hidden argument*/NULL);
		bool L_50;
		L_50 = SpanHelpers_LessThanEqual_mCFA5E9CC05F428B1EDA65967FEF81267F917E88C_inline((intptr_t)L_47, L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_00f5;
		}
	}
	{
		uint8_t* L_51 = ___b0;
		intptr_t L_52 = V_0;
		uint8_t* L_53;
		L_53 = Unsafe_Add_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m9ABE4DAAE83872C0A6C84A181092107B74F1D8A7_inline((uint8_t*)L_51, (intptr_t)L_52, /*hidden argument*/Unsafe_Add_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m9ABE4DAAE83872C0A6C84A181092107B74F1D8A7_RuntimeMethod_var);
		int32_t* L_54;
		L_54 = Unsafe_As_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mB9705B879316869DF89311F9ADB5B6BEE2629DC6_inline((uint8_t*)L_53, /*hidden argument*/Unsafe_As_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mB9705B879316869DF89311F9ADB5B6BEE2629DC6_RuntimeMethod_var);
		*((int32_t*)L_54) = (int32_t)0;
		intptr_t L_55 = V_0;
		intptr_t L_56;
		L_56 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_55, 4, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_56;
	}

IL_00f5:
	{
		return;
	}
}
// System.Void System.SpanHelpers::ClearPointerSizedWithReferences(System.IntPtr&,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanHelpers_ClearPointerSizedWithReferences_m45CDDDFAE259A9678B759645C7AB467860D44BAE (intptr_t* ___ip0, uintptr_t ___pointerSizeLength1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_Add_TisIntPtr_t_mB992699F82D75AE06CED0336266F16A57402FB19_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (intptr_t)(0);
		V_1 = (intptr_t)(0);
		goto IL_00ab;
	}

IL_0011:
	{
		intptr_t* L_0 = ___ip0;
		intptr_t L_1 = V_0;
		intptr_t L_2;
		L_2 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_1, 0, /*hidden argument*/NULL);
		intptr_t* L_3;
		L_3 = Unsafe_Add_TisIntPtr_t_mB992699F82D75AE06CED0336266F16A57402FB19_inline((intptr_t*)L_0, (intptr_t)L_2, /*hidden argument*/Unsafe_Add_TisIntPtr_t_mB992699F82D75AE06CED0336266F16A57402FB19_RuntimeMethod_var);
		il2cpp_codegen_initobj(L_3, sizeof(intptr_t));
		intptr_t* L_4 = ___ip0;
		intptr_t L_5 = V_0;
		intptr_t L_6;
		L_6 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_5, 1, /*hidden argument*/NULL);
		intptr_t* L_7;
		L_7 = Unsafe_Add_TisIntPtr_t_mB992699F82D75AE06CED0336266F16A57402FB19_inline((intptr_t*)L_4, (intptr_t)L_6, /*hidden argument*/Unsafe_Add_TisIntPtr_t_mB992699F82D75AE06CED0336266F16A57402FB19_RuntimeMethod_var);
		il2cpp_codegen_initobj(L_7, sizeof(intptr_t));
		intptr_t* L_8 = ___ip0;
		intptr_t L_9 = V_0;
		intptr_t L_10;
		L_10 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_9, 2, /*hidden argument*/NULL);
		intptr_t* L_11;
		L_11 = Unsafe_Add_TisIntPtr_t_mB992699F82D75AE06CED0336266F16A57402FB19_inline((intptr_t*)L_8, (intptr_t)L_10, /*hidden argument*/Unsafe_Add_TisIntPtr_t_mB992699F82D75AE06CED0336266F16A57402FB19_RuntimeMethod_var);
		il2cpp_codegen_initobj(L_11, sizeof(intptr_t));
		intptr_t* L_12 = ___ip0;
		intptr_t L_13 = V_0;
		intptr_t L_14;
		L_14 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_13, 3, /*hidden argument*/NULL);
		intptr_t* L_15;
		L_15 = Unsafe_Add_TisIntPtr_t_mB992699F82D75AE06CED0336266F16A57402FB19_inline((intptr_t*)L_12, (intptr_t)L_14, /*hidden argument*/Unsafe_Add_TisIntPtr_t_mB992699F82D75AE06CED0336266F16A57402FB19_RuntimeMethod_var);
		il2cpp_codegen_initobj(L_15, sizeof(intptr_t));
		intptr_t* L_16 = ___ip0;
		intptr_t L_17 = V_0;
		intptr_t L_18;
		L_18 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_17, 4, /*hidden argument*/NULL);
		intptr_t* L_19;
		L_19 = Unsafe_Add_TisIntPtr_t_mB992699F82D75AE06CED0336266F16A57402FB19_inline((intptr_t*)L_16, (intptr_t)L_18, /*hidden argument*/Unsafe_Add_TisIntPtr_t_mB992699F82D75AE06CED0336266F16A57402FB19_RuntimeMethod_var);
		il2cpp_codegen_initobj(L_19, sizeof(intptr_t));
		intptr_t* L_20 = ___ip0;
		intptr_t L_21 = V_0;
		intptr_t L_22;
		L_22 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_21, 5, /*hidden argument*/NULL);
		intptr_t* L_23;
		L_23 = Unsafe_Add_TisIntPtr_t_mB992699F82D75AE06CED0336266F16A57402FB19_inline((intptr_t*)L_20, (intptr_t)L_22, /*hidden argument*/Unsafe_Add_TisIntPtr_t_mB992699F82D75AE06CED0336266F16A57402FB19_RuntimeMethod_var);
		il2cpp_codegen_initobj(L_23, sizeof(intptr_t));
		intptr_t* L_24 = ___ip0;
		intptr_t L_25 = V_0;
		intptr_t L_26;
		L_26 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_25, 6, /*hidden argument*/NULL);
		intptr_t* L_27;
		L_27 = Unsafe_Add_TisIntPtr_t_mB992699F82D75AE06CED0336266F16A57402FB19_inline((intptr_t*)L_24, (intptr_t)L_26, /*hidden argument*/Unsafe_Add_TisIntPtr_t_mB992699F82D75AE06CED0336266F16A57402FB19_RuntimeMethod_var);
		il2cpp_codegen_initobj(L_27, sizeof(intptr_t));
		intptr_t* L_28 = ___ip0;
		intptr_t L_29 = V_0;
		intptr_t L_30;
		L_30 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_29, 7, /*hidden argument*/NULL);
		intptr_t* L_31;
		L_31 = Unsafe_Add_TisIntPtr_t_mB992699F82D75AE06CED0336266F16A57402FB19_inline((intptr_t*)L_28, (intptr_t)L_30, /*hidden argument*/Unsafe_Add_TisIntPtr_t_mB992699F82D75AE06CED0336266F16A57402FB19_RuntimeMethod_var);
		il2cpp_codegen_initobj(L_31, sizeof(intptr_t));
		intptr_t L_32 = V_1;
		V_0 = (intptr_t)L_32;
	}

IL_00ab:
	{
		intptr_t L_33 = V_0;
		intptr_t L_34;
		L_34 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_33, 8, /*hidden argument*/NULL);
		intptr_t L_35 = (intptr_t)L_34;
		V_1 = (intptr_t)L_35;
		uintptr_t L_36 = ___pointerSizeLength1;
		bool L_37;
		L_37 = SpanHelpers_LessThanEqual_mCFA5E9CC05F428B1EDA65967FEF81267F917E88C_inline((intptr_t)L_35, L_36, /*hidden argument*/NULL);
		if (L_37)
		{
			goto IL_0011;
		}
	}
	{
		intptr_t L_38 = V_0;
		intptr_t L_39;
		L_39 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_38, 4, /*hidden argument*/NULL);
		intptr_t L_40 = (intptr_t)L_39;
		V_1 = (intptr_t)L_40;
		uintptr_t L_41 = ___pointerSizeLength1;
		bool L_42;
		L_42 = SpanHelpers_LessThanEqual_mCFA5E9CC05F428B1EDA65967FEF81267F917E88C_inline((intptr_t)L_40, L_41, /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_011e;
		}
	}
	{
		intptr_t* L_43 = ___ip0;
		intptr_t L_44 = V_0;
		intptr_t L_45;
		L_45 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_44, 0, /*hidden argument*/NULL);
		intptr_t* L_46;
		L_46 = Unsafe_Add_TisIntPtr_t_mB992699F82D75AE06CED0336266F16A57402FB19_inline((intptr_t*)L_43, (intptr_t)L_45, /*hidden argument*/Unsafe_Add_TisIntPtr_t_mB992699F82D75AE06CED0336266F16A57402FB19_RuntimeMethod_var);
		il2cpp_codegen_initobj(L_46, sizeof(intptr_t));
		intptr_t* L_47 = ___ip0;
		intptr_t L_48 = V_0;
		intptr_t L_49;
		L_49 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_48, 1, /*hidden argument*/NULL);
		intptr_t* L_50;
		L_50 = Unsafe_Add_TisIntPtr_t_mB992699F82D75AE06CED0336266F16A57402FB19_inline((intptr_t*)L_47, (intptr_t)L_49, /*hidden argument*/Unsafe_Add_TisIntPtr_t_mB992699F82D75AE06CED0336266F16A57402FB19_RuntimeMethod_var);
		il2cpp_codegen_initobj(L_50, sizeof(intptr_t));
		intptr_t* L_51 = ___ip0;
		intptr_t L_52 = V_0;
		intptr_t L_53;
		L_53 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_52, 2, /*hidden argument*/NULL);
		intptr_t* L_54;
		L_54 = Unsafe_Add_TisIntPtr_t_mB992699F82D75AE06CED0336266F16A57402FB19_inline((intptr_t*)L_51, (intptr_t)L_53, /*hidden argument*/Unsafe_Add_TisIntPtr_t_mB992699F82D75AE06CED0336266F16A57402FB19_RuntimeMethod_var);
		il2cpp_codegen_initobj(L_54, sizeof(intptr_t));
		intptr_t* L_55 = ___ip0;
		intptr_t L_56 = V_0;
		intptr_t L_57;
		L_57 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_56, 3, /*hidden argument*/NULL);
		intptr_t* L_58;
		L_58 = Unsafe_Add_TisIntPtr_t_mB992699F82D75AE06CED0336266F16A57402FB19_inline((intptr_t*)L_55, (intptr_t)L_57, /*hidden argument*/Unsafe_Add_TisIntPtr_t_mB992699F82D75AE06CED0336266F16A57402FB19_RuntimeMethod_var);
		il2cpp_codegen_initobj(L_58, sizeof(intptr_t));
		intptr_t L_59 = V_1;
		V_0 = (intptr_t)L_59;
	}

IL_011e:
	{
		intptr_t L_60 = V_0;
		intptr_t L_61;
		L_61 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_60, 2, /*hidden argument*/NULL);
		intptr_t L_62 = (intptr_t)L_61;
		V_1 = (intptr_t)L_62;
		uintptr_t L_63 = ___pointerSizeLength1;
		bool L_64;
		L_64 = SpanHelpers_LessThanEqual_mCFA5E9CC05F428B1EDA65967FEF81267F917E88C_inline((intptr_t)L_62, L_63, /*hidden argument*/NULL);
		if (!L_64)
		{
			goto IL_0157;
		}
	}
	{
		intptr_t* L_65 = ___ip0;
		intptr_t L_66 = V_0;
		intptr_t L_67;
		L_67 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_66, 0, /*hidden argument*/NULL);
		intptr_t* L_68;
		L_68 = Unsafe_Add_TisIntPtr_t_mB992699F82D75AE06CED0336266F16A57402FB19_inline((intptr_t*)L_65, (intptr_t)L_67, /*hidden argument*/Unsafe_Add_TisIntPtr_t_mB992699F82D75AE06CED0336266F16A57402FB19_RuntimeMethod_var);
		il2cpp_codegen_initobj(L_68, sizeof(intptr_t));
		intptr_t* L_69 = ___ip0;
		intptr_t L_70 = V_0;
		intptr_t L_71;
		L_71 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_70, 1, /*hidden argument*/NULL);
		intptr_t* L_72;
		L_72 = Unsafe_Add_TisIntPtr_t_mB992699F82D75AE06CED0336266F16A57402FB19_inline((intptr_t*)L_69, (intptr_t)L_71, /*hidden argument*/Unsafe_Add_TisIntPtr_t_mB992699F82D75AE06CED0336266F16A57402FB19_RuntimeMethod_var);
		il2cpp_codegen_initobj(L_72, sizeof(intptr_t));
		intptr_t L_73 = V_1;
		V_0 = (intptr_t)L_73;
	}

IL_0157:
	{
		intptr_t L_74 = V_0;
		intptr_t L_75;
		L_75 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_74, 1, /*hidden argument*/NULL);
		uintptr_t L_76 = ___pointerSizeLength1;
		bool L_77;
		L_77 = SpanHelpers_LessThanEqual_mCFA5E9CC05F428B1EDA65967FEF81267F917E88C_inline((intptr_t)L_75, L_76, /*hidden argument*/NULL);
		if (!L_77)
		{
			goto IL_0173;
		}
	}
	{
		intptr_t* L_78 = ___ip0;
		intptr_t L_79 = V_0;
		intptr_t* L_80;
		L_80 = Unsafe_Add_TisIntPtr_t_mB992699F82D75AE06CED0336266F16A57402FB19_inline((intptr_t*)L_78, (intptr_t)L_79, /*hidden argument*/Unsafe_Add_TisIntPtr_t_mB992699F82D75AE06CED0336266F16A57402FB19_RuntimeMethod_var);
		il2cpp_codegen_initobj(L_80, sizeof(intptr_t));
	}

IL_0173:
	{
		return;
	}
}
// System.Boolean System.SpanHelpers::LessThanEqual(System.IntPtr,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_LessThanEqual_mCFA5E9CC05F428B1EDA65967FEF81267F917E88C (intptr_t ___index0, uintptr_t ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = sizeof(uintptr_t);
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_001b;
		}
	}
	{
		intptr_t L_1 = ___index0;
		int64_t L_2;
		L_2 = IntPtr_op_Explicit_m17B168C05CF9F2917BC28FA8AF6F4F3281C377EB((intptr_t)L_1, /*hidden argument*/NULL);
		uintptr_t L_3 = ___length1;
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uint64_t L_4;
		L_4 = UIntPtr_op_Explicit_mEEA1D4A964FBFCC95BE2B91ADDD52EF7067C312D(L_3, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int64_t)L_2) > ((int64_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_001b:
	{
		intptr_t L_5 = ___index0;
		int32_t L_6;
		L_6 = IntPtr_op_Explicit_m9C2CBDF65A4D7B2C0DCF4D38A4174A2CC07A18E3((intptr_t)L_5, /*hidden argument*/NULL);
		uintptr_t L_7 = ___length1;
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uint32_t L_8;
		L_8 = UIntPtr_op_Explicit_m8EF5FC1C0CAF58F8F2310C0D989F20F0694CD7CF(L_7, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_6) > ((int32_t)L_8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
// System.Char System.Buffers.StandardFormat::get_Symbol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar StandardFormat_get_Symbol_mF8A6168808E4EEB455E2F8695DD243231285B0F2 (StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get__format_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Il2CppChar StandardFormat_get_Symbol_mF8A6168808E4EEB455E2F8695DD243231285B0F2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12 * _thisAdjusted = reinterpret_cast<StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12 *>(__this + _offset);
	Il2CppChar _returnValue;
	_returnValue = StandardFormat_get_Symbol_mF8A6168808E4EEB455E2F8695DD243231285B0F2_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Byte System.Buffers.StandardFormat::get_Precision()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t StandardFormat_get_Precision_m0080A4421E19B1702147DF794C3D4C2D1035C5B6 (StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get__precision_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  uint8_t StandardFormat_get_Precision_m0080A4421E19B1702147DF794C3D4C2D1035C5B6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12 * _thisAdjusted = reinterpret_cast<StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12 *>(__this + _offset);
	uint8_t _returnValue;
	_returnValue = StandardFormat_get_Precision_m0080A4421E19B1702147DF794C3D4C2D1035C5B6_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean System.Buffers.StandardFormat::get_IsDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StandardFormat_get_IsDefault_mA235EA7D61B74384AF56AEC5174D2ACD568AE144 (StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get__format_0();
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		uint8_t L_1 = __this->get__precision_1();
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}

IL_0012:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool StandardFormat_get_IsDefault_mA235EA7D61B74384AF56AEC5174D2ACD568AE144_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12 * _thisAdjusted = reinterpret_cast<StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12 *>(__this + _offset);
	bool _returnValue;
	_returnValue = StandardFormat_get_IsDefault_mA235EA7D61B74384AF56AEC5174D2ACD568AE144(_thisAdjusted, method);
	return _returnValue;
}
// System.Void System.Buffers.StandardFormat::.ctor(System.Char,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardFormat__ctor_mEDC33761CDF50C5F7D01BF0DD6D673658931D43F (StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12 * __this, Il2CppChar ___symbol0, uint8_t ___precision1, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___precision1;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)255))))
		{
			goto IL_0012;
		}
	}
	{
		uint8_t L_1 = ___precision1;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)99))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_PrecisionTooLarge_mAC345A1F72DBC919354CCB54CC6C24EF44BE48C1(/*hidden argument*/NULL);
	}

IL_0012:
	{
		Il2CppChar L_2 = ___symbol0;
		Il2CppChar L_3 = ___symbol0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)((uint8_t)L_3)))))
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_SymbolDoesNotFit_m601A3BCC469FE8A7420CC33708307189B6C48B61(/*hidden argument*/NULL);
	}

IL_001c:
	{
		Il2CppChar L_4 = ___symbol0;
		__this->set__format_0((uint8_t)((int32_t)((uint8_t)L_4)));
		uint8_t L_5 = ___precision1;
		__this->set__precision_1(L_5);
		return;
	}
}
IL2CPP_EXTERN_C  void StandardFormat__ctor_mEDC33761CDF50C5F7D01BF0DD6D673658931D43F_AdjustorThunk (RuntimeObject * __this, Il2CppChar ___symbol0, uint8_t ___precision1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12 * _thisAdjusted = reinterpret_cast<StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12 *>(__this + _offset);
	StandardFormat__ctor_mEDC33761CDF50C5F7D01BF0DD6D673658931D43F(_thisAdjusted, ___symbol0, ___precision1, method);
}
// System.Buffers.StandardFormat System.Buffers.StandardFormat::op_Implicit(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12  StandardFormat_op_Implicit_mC7AEDB177670024F660C1AA4BA07616FB27B29BD (Il2CppChar ___symbol0, const RuntimeMethod* method)
{
	{
		Il2CppChar L_0 = ___symbol0;
		StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12  L_1;
		memset((&L_1), 0, sizeof(L_1));
		StandardFormat__ctor_mEDC33761CDF50C5F7D01BF0DD6D673658931D43F((&L_1), L_0, (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Buffers.StandardFormat::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StandardFormat_Equals_mB63E4B0879F9B74C0783E32117A22592050C887A (StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	{
		RuntimeObject * L_0 = ___obj0;
		RuntimeObject * L_1 = L_0;
		V_1 = L_1;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12_il2cpp_TypeInfo_var)))
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject * L_2 = V_1;
		V_0 = ((*(StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12 *)((StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12 *)UnBox(L_2, StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12_il2cpp_TypeInfo_var))));
		StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12  L_3 = V_0;
		bool L_4;
		L_4 = StandardFormat_Equals_m6AAD6931E6B7620BC5676B60FDE95DEBDCC6A011((StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12 *)__this, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0019:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool StandardFormat_Equals_mB63E4B0879F9B74C0783E32117A22592050C887A_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12 * _thisAdjusted = reinterpret_cast<StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12 *>(__this + _offset);
	bool _returnValue;
	_returnValue = StandardFormat_Equals_mB63E4B0879F9B74C0783E32117A22592050C887A(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 System.Buffers.StandardFormat::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StandardFormat_GetHashCode_mA2398AB63B3856075F7E8F9A26D142878DDAB119 (StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12 * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		uint8_t L_0 = __this->get__format_0();
		V_0 = L_0;
		int32_t L_1;
		L_1 = Byte_GetHashCode_m5111B9229C948E0B734597AED742936F9542E093((uint8_t*)(&V_0), /*hidden argument*/NULL);
		uint8_t L_2 = __this->get__precision_1();
		V_0 = L_2;
		int32_t L_3;
		L_3 = Byte_GetHashCode_m5111B9229C948E0B734597AED742936F9542E093((uint8_t*)(&V_0), /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_1^(int32_t)L_3));
	}
}
IL2CPP_EXTERN_C  int32_t StandardFormat_GetHashCode_mA2398AB63B3856075F7E8F9A26D142878DDAB119_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12 * _thisAdjusted = reinterpret_cast<StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = StandardFormat_GetHashCode_mA2398AB63B3856075F7E8F9A26D142878DDAB119(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean System.Buffers.StandardFormat::Equals(System.Buffers.StandardFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StandardFormat_Equals_m6AAD6931E6B7620BC5676B60FDE95DEBDCC6A011 (StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12 * __this, StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12  ___other0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get__format_0();
		StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12  L_1 = ___other0;
		uint8_t L_2 = L_1.get__format_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_001d;
		}
	}
	{
		uint8_t L_3 = __this->get__precision_1();
		StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12  L_4 = ___other0;
		uint8_t L_5 = L_4.get__precision_1();
		return (bool)((((int32_t)L_3) == ((int32_t)L_5))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool StandardFormat_Equals_m6AAD6931E6B7620BC5676B60FDE95DEBDCC6A011_AdjustorThunk (RuntimeObject * __this, StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12 * _thisAdjusted = reinterpret_cast<StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12 *>(__this + _offset);
	bool _returnValue;
	_returnValue = StandardFormat_Equals_m6AAD6931E6B7620BC5676B60FDE95DEBDCC6A011(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.String System.Buffers.StandardFormat::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StandardFormat_ToString_m1391A69E60EF500E59D59A29124BAD2C1D28CE6D (StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12 * __this, const RuntimeMethod* method)
{
	Il2CppChar* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	uint8_t V_3 = 0x0;
	{
		int8_t* L_0 = (int8_t*) alloca(((uintptr_t)8));
		memset(L_0, 0, ((uintptr_t)8));
		V_0 = (Il2CppChar*)(L_0);
		V_1 = 0;
		Il2CppChar L_1;
		L_1 = StandardFormat_get_Symbol_mF8A6168808E4EEB455E2F8695DD243231285B0F2_inline((StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12 *)__this, /*hidden argument*/NULL);
		V_2 = L_1;
		Il2CppChar L_2 = V_2;
		if (!L_2)
		{
			goto IL_007e;
		}
	}
	{
		Il2CppChar* L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		Il2CppChar L_6 = V_2;
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_3, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_5), (int32_t)2))))) = (int16_t)L_6;
		uint8_t L_7;
		L_7 = StandardFormat_get_Precision_m0080A4421E19B1702147DF794C3D4C2D1035C5B6_inline((StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12 *)__this, /*hidden argument*/NULL);
		V_3 = L_7;
		uint8_t L_8 = V_3;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)255))))
		{
			goto IL_007e;
		}
	}
	{
		uint8_t L_9 = V_3;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)100))))
		{
			goto IL_004d;
		}
	}
	{
		Il2CppChar* L_10 = V_0;
		int32_t L_11 = V_1;
		int32_t L_12 = L_11;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		uint8_t L_13 = V_3;
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_10, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_12), (int32_t)2))))) = (int16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)48), (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_13/(int32_t)((int32_t)100)))%(int32_t)((int32_t)10)))))));
		uint8_t L_14 = V_3;
		V_3 = (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_14%(int32_t)((int32_t)100)))));
	}

IL_004d:
	{
		uint8_t L_15 = V_3;
		if ((((int32_t)L_15) < ((int32_t)((int32_t)10))))
		{
			goto IL_006e;
		}
	}
	{
		Il2CppChar* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = L_17;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
		uint8_t L_19 = V_3;
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_16, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_18), (int32_t)2))))) = (int16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)48), (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_19/(int32_t)((int32_t)10)))%(int32_t)((int32_t)10)))))));
		uint8_t L_20 = V_3;
		V_3 = (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_20%(int32_t)((int32_t)10)))));
	}

IL_006e:
	{
		Il2CppChar* L_21 = V_0;
		int32_t L_22 = V_1;
		int32_t L_23 = L_22;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		uint8_t L_24 = V_3;
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_21, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_23), (int32_t)2))))) = (int16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)48), (int32_t)L_24))));
	}

IL_007e:
	{
		Il2CppChar* L_25 = V_0;
		int32_t L_26 = V_1;
		String_t* L_27;
		L_27 = String_CreateString_m854F19B67F5E1B63737E096BF53CC56AB12AF777(NULL, (Il2CppChar*)(Il2CppChar*)L_25, 0, L_26, /*hidden argument*/NULL);
		return L_27;
	}
}
IL2CPP_EXTERN_C  String_t* StandardFormat_ToString_m1391A69E60EF500E59D59A29124BAD2C1D28CE6D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12 * _thisAdjusted = reinterpret_cast<StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = StandardFormat_ToString_m1391A69E60EF500E59D59A29124BAD2C1D28CE6D(_thisAdjusted, method);
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
// System.Void System.ThrowHelper::ThrowArgumentNullException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m3B4D674B817C817E97F4687F0130007D315F8B34 (int32_t ___argument0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___argument0;
		Exception_t * L_1;
		L_1 = ThrowHelper_CreateArgumentNullException_mA70D942EBA7503962BA72170F026A966513590FC(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowArgumentNullException_m3B4D674B817C817E97F4687F0130007D315F8B34_RuntimeMethod_var)));
	}
}
// System.Exception System.ThrowHelper::CreateArgumentNullException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArgumentNullException_mA70D942EBA7503962BA72170F026A966513590FC (int32_t ___argument0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionArgument_t11B098DD9AD21AB015871A94DB7DC9A70A10509F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = Box(ExceptionArgument_t11B098DD9AD21AB015871A94DB7DC9A70A10509F_il2cpp_TypeInfo_var, (&___argument0));
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		___argument0 = *(int32_t*)UnBox(L_0);
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void System.ThrowHelper::ThrowArrayTypeMismatchException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArrayTypeMismatchException_mFC0D7756FD2EA1A7E41D8426D819369FDBD728FC (const RuntimeMethod* method)
{
	{
		Exception_t * L_0;
		L_0 = ThrowHelper_CreateArrayTypeMismatchException_m23F27BF82F951A64682A2CF14E0EDE9F3B54C93F(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowArrayTypeMismatchException_mFC0D7756FD2EA1A7E41D8426D819369FDBD728FC_RuntimeMethod_var)));
	}
}
// System.Exception System.ThrowHelper::CreateArrayTypeMismatchException()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArrayTypeMismatchException_m23F27BF82F951A64682A2CF14E0EDE9F3B54C93F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784 * L_0 = (ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784 *)il2cpp_codegen_object_new(ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784_il2cpp_TypeInfo_var);
		ArrayTypeMismatchException__ctor_m76932588D9A980CDB675D12B0479F8EAC2D5E96D(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.ThrowHelper::ThrowArgumentException_InvalidTypeWithPointersNotSupported(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_m4A71872D4B069AF36758A61E4CA3FB663B4E8EC4 (Type_t * ___type0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		Exception_t * L_1;
		L_1 = ThrowHelper_CreateArgumentException_InvalidTypeWithPointersNotSupported_m4019588ED8511C985604C8CC9AD4AB6414676945(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_m4A71872D4B069AF36758A61E4CA3FB663B4E8EC4_RuntimeMethod_var)));
	}
}
// System.Exception System.ThrowHelper::CreateArgumentException_InvalidTypeWithPointersNotSupported(System.Type)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArgumentException_InvalidTypeWithPointersNotSupported_m4019588ED8511C985604C8CC9AD4AB6414676945 (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_get_Argument_InvalidTypeWithPointersNotSupported_m2FD2DCBFF1853C8F9616D4C55DD1C14163A06B75(/*hidden argument*/NULL);
		Type_t * L_1 = ___type0;
		String_t* L_2;
		L_2 = SR_Format_m4480ECD777F2A905A368094827DDCB43478A8053(L_0, L_1, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_3 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_3, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void System.ThrowHelper::ThrowArgumentException_DestinationTooShort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_DestinationTooShort_mD9C82D6A62948DA443166283990BF760F77C76C8 (const RuntimeMethod* method)
{
	{
		Exception_t * L_0;
		L_0 = ThrowHelper_CreateArgumentException_DestinationTooShort_m75CF4B3D7F56B0383E0BC84D86C085AA0CE90CD1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowArgumentException_DestinationTooShort_mD9C82D6A62948DA443166283990BF760F77C76C8_RuntimeMethod_var)));
	}
}
// System.Exception System.ThrowHelper::CreateArgumentException_DestinationTooShort()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArgumentException_DestinationTooShort_m75CF4B3D7F56B0383E0BC84D86C085AA0CE90CD1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_get_Argument_DestinationTooShort_mDD536A55FFA1BD1CF5C34D9E074420C183905559(/*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_1 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.ThrowHelper::ThrowIndexOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexOutOfRangeException_m4D1EB8558F17DFE372ECF87D9BCAD112A7F5E6BC (const RuntimeMethod* method)
{
	{
		Exception_t * L_0;
		L_0 = ThrowHelper_CreateIndexOutOfRangeException_m8C8886676269B09CC5241BA6F5330D78B26F527B(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowIndexOutOfRangeException_m4D1EB8558F17DFE372ECF87D9BCAD112A7F5E6BC_RuntimeMethod_var)));
	}
}
// System.Exception System.ThrowHelper::CreateIndexOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateIndexOutOfRangeException_m8C8886676269B09CC5241BA6F5330D78B26F527B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * L_0 = (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD *)il2cpp_codegen_object_new(IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m84F1D8D46E48427F4DFAC350A5F1E0D345C68523(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mB72471F11341E214DA380AF2B87C3F28EC51CA59 (const RuntimeMethod* method)
{
	{
		Exception_t * L_0;
		L_0 = ThrowHelper_CreateArgumentOutOfRangeException_m0841E9BF864372D7BF0512A13456F985C53FC03D(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowArgumentOutOfRangeException_mB72471F11341E214DA380AF2B87C3F28EC51CA59_RuntimeMethod_var)));
	}
}
// System.Exception System.ThrowHelper::CreateArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArgumentOutOfRangeException_m0841E9BF864372D7BF0512A13456F985C53FC03D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_0 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m81CEEF1FCB5EFBBAA39071F48BCFBC16AED0C915(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m86EB6B05BDE45B6F92A7599E80E0179C17391AB5 (int32_t ___argument0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___argument0;
		Exception_t * L_1;
		L_1 = ThrowHelper_CreateArgumentOutOfRangeException_m3ED3DA6D593699354BA4D397790440F3BFE84AEA(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowArgumentOutOfRangeException_m86EB6B05BDE45B6F92A7599E80E0179C17391AB5_RuntimeMethod_var)));
	}
}
// System.Exception System.ThrowHelper::CreateArgumentOutOfRangeException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArgumentOutOfRangeException_m3ED3DA6D593699354BA4D397790440F3BFE84AEA (int32_t ___argument0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionArgument_t11B098DD9AD21AB015871A94DB7DC9A70A10509F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = Box(ExceptionArgument_t11B098DD9AD21AB015871A94DB7DC9A70A10509F_il2cpp_TypeInfo_var, (&___argument0));
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		___argument0 = *(int32_t*)UnBox(L_0);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_2 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_2, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException_PrecisionTooLarge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_PrecisionTooLarge_mAC345A1F72DBC919354CCB54CC6C24EF44BE48C1 (const RuntimeMethod* method)
{
	{
		Exception_t * L_0;
		L_0 = ThrowHelper_CreateArgumentOutOfRangeException_PrecisionTooLarge_mC1889FF89FD22816EB8D105C942166D0BF6ADFAD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowArgumentOutOfRangeException_PrecisionTooLarge_mAC345A1F72DBC919354CCB54CC6C24EF44BE48C1_RuntimeMethod_var)));
	}
}
// System.Exception System.ThrowHelper::CreateArgumentOutOfRangeException_PrecisionTooLarge()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArgumentOutOfRangeException_PrecisionTooLarge_mC1889FF89FD22816EB8D105C942166D0BF6ADFAD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8B5F8CFFD59A7B59061F52A426CC740232A7314);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_get_Argument_PrecisionTooLarge_m42EED38BF28506133A0AB30447E3C35CCA120A7F(/*hidden argument*/NULL);
		uint8_t L_1 = ((uint8_t)((int32_t)99));
		RuntimeObject * L_2 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = SR_Format_m4480ECD777F2A905A368094827DDCB43478A8053(L_0, L_2, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_4 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_4, _stringLiteralC8B5F8CFFD59A7B59061F52A426CC740232A7314, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException_SymbolDoesNotFit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_SymbolDoesNotFit_m601A3BCC469FE8A7420CC33708307189B6C48B61 (const RuntimeMethod* method)
{
	{
		Exception_t * L_0;
		L_0 = ThrowHelper_CreateArgumentOutOfRangeException_SymbolDoesNotFit_m903F8FB8357FE1BAB8BF450E0F95A79117EF2D19(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowArgumentOutOfRangeException_SymbolDoesNotFit_m601A3BCC469FE8A7420CC33708307189B6C48B61_RuntimeMethod_var)));
	}
}
// System.Exception System.ThrowHelper::CreateArgumentOutOfRangeException_SymbolDoesNotFit()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArgumentOutOfRangeException_SymbolDoesNotFit_m903F8FB8357FE1BAB8BF450E0F95A79117EF2D19 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2E80D292EF114389BA7BA391D7EA63456D3073D);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_get_Argument_BadFormatSpecifier_mFE81E4F926274AB402B890E679E6CAB600E61433(/*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_1 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_1, _stringLiteralD2E80D292EF114389BA7BA391D7EA63456D3073D, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.ThrowHelper::ThrowInvalidOperationException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_mC18897E999FE00AE3ACC3543A468201068A217F8 (const RuntimeMethod* method)
{
	{
		Exception_t * L_0;
		L_0 = ThrowHelper_CreateInvalidOperationException_mAA36D488898B83C836372B8D095EFEC4136121B3(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowInvalidOperationException_mC18897E999FE00AE3ACC3543A468201068A217F8_RuntimeMethod_var)));
	}
}
// System.Exception System.ThrowHelper::CreateInvalidOperationException()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateInvalidOperationException_mAA36D488898B83C836372B8D095EFEC4136121B3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_0 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m26BD2B620B5FBFA4376C16011C60E18A2EDC8E96(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.ThrowHelper::ThrowInvalidOperationException_EndPositionNotReached()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_EndPositionNotReached_m67B5DCC8C43494E0A491781D118E147337664DB0 (const RuntimeMethod* method)
{
	{
		Exception_t * L_0;
		L_0 = ThrowHelper_CreateInvalidOperationException_EndPositionNotReached_m35A30B605551B8CACAE6B842C8B525BC7078FE72(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowInvalidOperationException_EndPositionNotReached_m67B5DCC8C43494E0A491781D118E147337664DB0_RuntimeMethod_var)));
	}
}
// System.Exception System.ThrowHelper::CreateInvalidOperationException_EndPositionNotReached()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateInvalidOperationException_EndPositionNotReached_m35A30B605551B8CACAE6B842C8B525BC7078FE72 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_get_EndPositionNotReached_m26E126334F58B1570EEAAA53A48B9518F3C17913(/*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException_PositionOutOfRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_PositionOutOfRange_mE66B589C0CE79CD3252C96D133A4DA6BFF64228D (const RuntimeMethod* method)
{
	{
		Exception_t * L_0;
		L_0 = ThrowHelper_CreateArgumentOutOfRangeException_PositionOutOfRange_m09B8EF6F30DDB19BF9AD63605556AED12E7DE03A(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowArgumentOutOfRangeException_PositionOutOfRange_mE66B589C0CE79CD3252C96D133A4DA6BFF64228D_RuntimeMethod_var)));
	}
}
// System.Exception System.ThrowHelper::CreateArgumentOutOfRangeException_PositionOutOfRange()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArgumentOutOfRangeException_PositionOutOfRange_m09B8EF6F30DDB19BF9AD63605556AED12E7DE03A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BDF3D0791A560245652E772545C49897854443);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_0 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_0, _stringLiteral88BDF3D0791A560245652E772545C49897854443, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException_OffsetOutOfRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_OffsetOutOfRange_m33BB375A469C5D43F27FAF1E1573659C8D6D46B6 (const RuntimeMethod* method)
{
	{
		Exception_t * L_0;
		L_0 = ThrowHelper_CreateArgumentOutOfRangeException_OffsetOutOfRange_m4006B68C0940F1864B48E9E2CAE0A62FE91910F9(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowArgumentOutOfRangeException_OffsetOutOfRange_m33BB375A469C5D43F27FAF1E1573659C8D6D46B6_RuntimeMethod_var)));
	}
}
// System.Exception System.ThrowHelper::CreateArgumentOutOfRangeException_OffsetOutOfRange()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArgumentOutOfRangeException_OffsetOutOfRange_m4006B68C0940F1864B48E9E2CAE0A62FE91910F9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_0 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_0, _stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.ThrowHelper::ThrowObjectDisposedException_ArrayMemoryPoolBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowObjectDisposedException_ArrayMemoryPoolBuffer_m6149121F51A2DAB89FA54460F0EB9F6154861E6A (const RuntimeMethod* method)
{
	{
		Exception_t * L_0;
		L_0 = ThrowHelper_CreateObjectDisposedException_ArrayMemoryPoolBuffer_m1F7F47B74B90A8F024A3325C85416CBB433838BC(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowObjectDisposedException_ArrayMemoryPoolBuffer_m6149121F51A2DAB89FA54460F0EB9F6154861E6A_RuntimeMethod_var)));
	}
}
// System.Exception System.ThrowHelper::CreateObjectDisposedException_ArrayMemoryPoolBuffer()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateObjectDisposedException_ArrayMemoryPoolBuffer_m1F7F47B74B90A8F024A3325C85416CBB433838BC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EA6B6BC14F437F961450987DE5D02563ADE55C3);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_0 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880(L_0, _stringLiteral2EA6B6BC14F437F961450987DE5D02563ADE55C3, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.ThrowHelper::ThrowFormatException_BadFormatSpecifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowFormatException_BadFormatSpecifier_m1E35DA4BEAAC3A721CFB9CE82029EBABF763EA8D (const RuntimeMethod* method)
{
	{
		Exception_t * L_0;
		L_0 = ThrowHelper_CreateFormatException_BadFormatSpecifier_mA1D2DB12AB680960531A3C1A97098925F5154FDB(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowFormatException_BadFormatSpecifier_m1E35DA4BEAAC3A721CFB9CE82029EBABF763EA8D_RuntimeMethod_var)));
	}
}
// System.Exception System.ThrowHelper::CreateFormatException_BadFormatSpecifier()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateFormatException_BadFormatSpecifier_mA1D2DB12AB680960531A3C1A97098925F5154FDB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_get_Argument_BadFormatSpecifier_mFE81E4F926274AB402B890E679E6CAB600E61433(/*hidden argument*/NULL);
		FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 * L_1 = (FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 *)il2cpp_codegen_object_new(FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759_il2cpp_TypeInfo_var);
		FormatException__ctor_mB8F9A26F985EF9A6C0C082F7D70CFDF2DBDBB23B(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.ThrowHelper::TryFormatThrowFormatException(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThrowHelper_TryFormatThrowFormatException_mAE469FD4BD034BFD4FB18C512DAD188188AADFCA (int32_t* ___bytesWritten0, const RuntimeMethod* method)
{
	{
		int32_t* L_0 = ___bytesWritten0;
		*((int32_t*)L_0) = (int32_t)0;
		ThrowHelper_ThrowFormatException_BadFormatSpecifier_m1E35DA4BEAAC3A721CFB9CE82029EBABF763EA8D(/*hidden argument*/NULL);
		return (bool)0;
	}
}
// System.Void System.ThrowHelper::ThrowArgumentValidationException(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentValidationException_m02E99F21139D9C2446BCF31922E6B9A1FB6CBFE9 (RuntimeArray * ___array0, int32_t ___start1, const RuntimeMethod* method)
{
	{
		RuntimeArray * L_0 = ___array0;
		int32_t L_1 = ___start1;
		Exception_t * L_2;
		L_2 = ThrowHelper_CreateArgumentValidationException_mA1BAB2087749EF0A3433426D6B4886903B64C893(L_0, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowArgumentValidationException_m02E99F21139D9C2446BCF31922E6B9A1FB6CBFE9_RuntimeMethod_var)));
	}
}
// System.Exception System.ThrowHelper::CreateArgumentValidationException(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArgumentValidationException_mA1BAB2087749EF0A3433426D6B4886903B64C893 (RuntimeArray * ___array0, int32_t ___start1, const RuntimeMethod* method)
{
	{
		RuntimeArray * L_0 = ___array0;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		Exception_t * L_1;
		L_1 = ThrowHelper_CreateArgumentNullException_mA70D942EBA7503962BA72170F026A966513590FC(((int32_t)12), /*hidden argument*/NULL);
		return L_1;
	}

IL_000b:
	{
		int32_t L_2 = ___start1;
		RuntimeArray * L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10(L_3, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) > ((uint32_t)L_4))))
		{
			goto IL_001b;
		}
	}
	{
		Exception_t * L_5;
		L_5 = ThrowHelper_CreateArgumentOutOfRangeException_m3ED3DA6D593699354BA4D397790440F3BFE84AEA(1, /*hidden argument*/NULL);
		return L_5;
	}

IL_001b:
	{
		Exception_t * L_6;
		L_6 = ThrowHelper_CreateArgumentOutOfRangeException_m3ED3DA6D593699354BA4D397790440F3BFE84AEA(0, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void System.ThrowHelper::ThrowStartOrEndArgumentValidationException(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowStartOrEndArgumentValidationException_m0BB9EBD3A2B133B27075024CE04996C5626E7C38 (int64_t ___start0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___start0;
		Exception_t * L_1;
		L_1 = ThrowHelper_CreateStartOrEndArgumentValidationException_mC18923AF89FCBE538463BC90C517FA9E4691734C(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowStartOrEndArgumentValidationException_m0BB9EBD3A2B133B27075024CE04996C5626E7C38_RuntimeMethod_var)));
	}
}
// System.Exception System.ThrowHelper::CreateStartOrEndArgumentValidationException(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateStartOrEndArgumentValidationException_mC18923AF89FCBE538463BC90C517FA9E4691734C (int64_t ___start0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___start0;
		if ((((int64_t)L_0) >= ((int64_t)((int64_t)((int64_t)0)))))
		{
			goto IL_000c;
		}
	}
	{
		Exception_t * L_1;
		L_1 = ThrowHelper_CreateArgumentOutOfRangeException_m3ED3DA6D593699354BA4D397790440F3BFE84AEA(1, /*hidden argument*/NULL);
		return L_1;
	}

IL_000c:
	{
		Exception_t * L_2;
		L_2 = ThrowHelper_CreateArgumentOutOfRangeException_m3ED3DA6D593699354BA4D397790440F3BFE84AEA(0, /*hidden argument*/NULL);
		return L_2;
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
// System.Boolean System.Buffers.Text.Utf8Formatter::TryFormat(System.Decimal,System.Span`1<System.Byte>,System.Int32&,System.Buffers.StandardFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormat_m6791AE969A684DF1A5141E89B2748A0491B16DA1 (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value0, Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  ___destination1, int32_t* ___bytesWritten2, StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12  ___format3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Number_tF582821FDF819A5C8F89A4AEEEA382F75E061EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Formatter_t40DEB6F6F7963F03A97169CEE107888F2B29B591_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  V_3;
	memset((&V_3), 0, sizeof(V_3));
	NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437  V_4;
	memset((&V_4), 0, sizeof(V_4));
	uint8_t V_5 = 0x0;
	NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437  V_6;
	memset((&V_6), 0, sizeof(V_6));
	uint8_t V_7 = 0x0;
	int32_t G_B13_0 = 0;
	int32_t G_B17_0 = 0;
	{
		bool L_0;
		L_0 = StandardFormat_get_IsDefault_mA235EA7D61B74384AF56AEC5174D2ACD568AE144((StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12 *)(&___format3), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12  L_1;
		L_1 = StandardFormat_op_Implicit_mC7AEDB177670024F660C1AA4BA07616FB27B29BD(((int32_t)71), /*hidden argument*/NULL);
		___format3 = L_1;
	}

IL_0012:
	{
		Il2CppChar L_2;
		L_2 = StandardFormat_get_Symbol_mF8A6168808E4EEB455E2F8695DD243231285B0F2_inline((StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12 *)(&___format3), /*hidden argument*/NULL);
		V_0 = L_2;
		Il2CppChar L_3 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)((int32_t)69))))
		{
			case 0:
			{
				goto IL_00e0;
			}
			case 1:
			{
				goto IL_0099;
			}
			case 2:
			{
				goto IL_0049;
			}
		}
	}
	{
		Il2CppChar L_4 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)((int32_t)101))))
		{
			case 0:
			{
				goto IL_00e0;
			}
			case 1:
			{
				goto IL_0099;
			}
			case 2:
			{
				goto IL_0049;
			}
		}
	}
	{
		goto IL_0129;
	}

IL_0049:
	{
		uint8_t L_5;
		L_5 = StandardFormat_get_Precision_m0080A4421E19B1702147DF794C3D4C2D1035C5B6_inline((StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12 *)(&___format3), /*hidden argument*/NULL);
		if ((((int32_t)L_5) == ((int32_t)((int32_t)255))))
		{
			goto IL_0062;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var)));
		String_t* L_6;
		L_6 = SR_get_Argument_GWithPrecisionNotSupported_mF77D1EF96FE22465E62C65C5895E968E7FB10019(/*hidden argument*/NULL);
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_7 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utf8Formatter_TryFormat_m6791AE969A684DF1A5141E89B2748A0491B16DA1_RuntimeMethod_var)));
	}

IL_0062:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 ));
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_8 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Number_tF582821FDF819A5C8F89A4AEEEA382F75E061EC1_il2cpp_TypeInfo_var);
		Number_DecimalToNumber_mDB370C6FEDCCE206F35651207AE2E13ABF525408(L_8, (NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 *)(&V_1), /*hidden argument*/NULL);
		Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  L_9;
		L_9 = NumberBuffer_get_Digits_m77F55E994E325F745CBEE5598D24263834F34F3B((NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 *)(&V_1), /*hidden argument*/NULL);
		V_3 = L_9;
		uint8_t* L_10;
		L_10 = Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&V_3), 0, /*hidden argument*/Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		int32_t L_11 = *((uint8_t*)L_10);
		if (L_11)
		{
			goto IL_008d;
		}
	}
	{
		(&V_1)->set_IsNegative_1((bool)0);
	}

IL_008d:
	{
		Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  L_12 = ___destination1;
		int32_t* L_13 = ___bytesWritten2;
		IL2CPP_RUNTIME_CLASS_INIT(Utf8Formatter_t40DEB6F6F7963F03A97169CEE107888F2B29B591_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Utf8Formatter_TryFormatDecimalG_m9209EBD3DB9F8ADBD39C4F69246BF2D2B7E2B86B((NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 *)(&V_1), L_12, (int32_t*)L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		bool L_15 = V_2;
		return L_15;
	}

IL_0099:
	{
		il2cpp_codegen_initobj((&V_4), sizeof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 ));
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_16 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Number_tF582821FDF819A5C8F89A4AEEEA382F75E061EC1_il2cpp_TypeInfo_var);
		Number_DecimalToNumber_mDB370C6FEDCCE206F35651207AE2E13ABF525408(L_16, (NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 *)(&V_4), /*hidden argument*/NULL);
		uint8_t L_17;
		L_17 = StandardFormat_get_Precision_m0080A4421E19B1702147DF794C3D4C2D1035C5B6_inline((StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12 *)(&___format3), /*hidden argument*/NULL);
		if ((((int32_t)L_17) == ((int32_t)((int32_t)255))))
		{
			goto IL_00c0;
		}
	}
	{
		uint8_t L_18;
		L_18 = StandardFormat_get_Precision_m0080A4421E19B1702147DF794C3D4C2D1035C5B6_inline((StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12 *)(&___format3), /*hidden argument*/NULL);
		G_B13_0 = ((int32_t)(L_18));
		goto IL_00c1;
	}

IL_00c0:
	{
		G_B13_0 = 2;
	}

IL_00c1:
	{
		V_5 = (uint8_t)G_B13_0;
		NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437  L_19 = V_4;
		int32_t L_20 = L_19.get_Scale_0();
		uint8_t L_21 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Number_tF582821FDF819A5C8F89A4AEEEA382F75E061EC1_il2cpp_TypeInfo_var);
		Number_RoundNumber_mEC3B9B63F68460A64F6F6913BB80F3BEBB780F07((NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 *)(&V_4), ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)L_21)), /*hidden argument*/NULL);
		Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  L_22 = ___destination1;
		int32_t* L_23 = ___bytesWritten2;
		uint8_t L_24 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Utf8Formatter_t40DEB6F6F7963F03A97169CEE107888F2B29B591_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Utf8Formatter_TryFormatDecimalF_mB3F592FC02FDB10D2F065AAC4993754DCE801384((NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 *)(&V_4), L_22, (int32_t*)L_23, L_24, /*hidden argument*/NULL);
		return L_25;
	}

IL_00e0:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 ));
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_26 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Number_tF582821FDF819A5C8F89A4AEEEA382F75E061EC1_il2cpp_TypeInfo_var);
		Number_DecimalToNumber_mDB370C6FEDCCE206F35651207AE2E13ABF525408(L_26, (NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 *)(&V_6), /*hidden argument*/NULL);
		uint8_t L_27;
		L_27 = StandardFormat_get_Precision_m0080A4421E19B1702147DF794C3D4C2D1035C5B6_inline((StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12 *)(&___format3), /*hidden argument*/NULL);
		if ((((int32_t)L_27) == ((int32_t)((int32_t)255))))
		{
			goto IL_0107;
		}
	}
	{
		uint8_t L_28;
		L_28 = StandardFormat_get_Precision_m0080A4421E19B1702147DF794C3D4C2D1035C5B6_inline((StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12 *)(&___format3), /*hidden argument*/NULL);
		G_B17_0 = ((int32_t)(L_28));
		goto IL_0108;
	}

IL_0107:
	{
		G_B17_0 = 6;
	}

IL_0108:
	{
		V_7 = (uint8_t)G_B17_0;
		uint8_t L_29 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Number_tF582821FDF819A5C8F89A4AEEEA382F75E061EC1_il2cpp_TypeInfo_var);
		Number_RoundNumber_mEC3B9B63F68460A64F6F6913BB80F3BEBB780F07((NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 *)(&V_6), ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1)), /*hidden argument*/NULL);
		Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  L_30 = ___destination1;
		int32_t* L_31 = ___bytesWritten2;
		uint8_t L_32 = V_7;
		Il2CppChar L_33;
		L_33 = StandardFormat_get_Symbol_mF8A6168808E4EEB455E2F8695DD243231285B0F2_inline((StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12 *)(&___format3), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Utf8Formatter_t40DEB6F6F7963F03A97169CEE107888F2B29B591_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Utf8Formatter_TryFormatDecimalE_m5EE850421F5ECD53EB303F5E20F42E989BC7B679((NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 *)(&V_6), L_30, (int32_t*)L_31, L_32, (uint8_t)((int32_t)((uint8_t)L_33)), /*hidden argument*/NULL);
		return L_34;
	}

IL_0129:
	{
		int32_t* L_35 = ___bytesWritten2;
		bool L_36;
		L_36 = ThrowHelper_TryFormatThrowFormatException_mAE469FD4BD034BFD4FB18C512DAD188188AADFCA((int32_t*)L_35, /*hidden argument*/NULL);
		return L_36;
	}
}
// System.Boolean System.Buffers.Text.Utf8Formatter::TryFormatDecimalE(System.NumberBuffer&,System.Span`1<System.Byte>,System.Int32&,System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatDecimalE_m5EE850421F5ECD53EB303F5E20F42E989BC7B679 (NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * ___number0, Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  ___destination1, int32_t* ___bytesWritten2, uint8_t ___precision3, uint8_t ___exponentSymbol4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m4BFDA5E41279728ADF75E310F780E357ECB1923B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_m4DF231FE4EDB6F473374D63CC83755F09BF582F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	uint8_t V_6 = 0x0;
	int32_t V_7 = 0;
	uint8_t V_8 = 0x0;
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	{
		NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * L_0 = ___number0;
		int32_t L_1 = L_0->get_Scale_0();
		V_0 = L_1;
		NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * L_2 = ___number0;
		Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  L_3;
		L_3 = NumberBuffer_get_Digits_m77F55E994E325F745CBEE5598D24263834F34F3B((NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 *)L_2, /*hidden argument*/NULL);
		ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  L_4;
		L_4 = Span_1_op_Implicit_m4DF231FE4EDB6F473374D63CC83755F09BF582F5(L_3, /*hidden argument*/Span_1_op_Implicit_m4DF231FE4EDB6F473374D63CC83755F09BF582F5_RuntimeMethod_var);
		V_1 = L_4;
		NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * L_5 = ___number0;
		bool L_6 = L_5->get_IsNegative_1();
		if (L_6)
		{
			goto IL_001e;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 1;
	}

IL_001f:
	{
		uint8_t L_7 = ___precision3;
		G_B4_0 = ((int32_t)il2cpp_codegen_add((int32_t)G_B3_0, (int32_t)1));
		if (!L_7)
		{
			G_B5_0 = ((int32_t)il2cpp_codegen_add((int32_t)G_B3_0, (int32_t)1));
			goto IL_0029;
		}
	}
	{
		uint8_t L_8 = ___precision3;
		G_B6_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		G_B6_1 = G_B4_0;
		goto IL_002a;
	}

IL_0029:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_002a:
	{
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)G_B6_1, (int32_t)G_B6_0)), (int32_t)2)), (int32_t)3));
		int32_t L_9;
		L_9 = Span_1_get_Length_m4BFDA5E41279728ADF75E310F780E357ECB1923B_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&___destination1), /*hidden argument*/Span_1_get_Length_m4BFDA5E41279728ADF75E310F780E357ECB1923B_RuntimeMethod_var);
		int32_t L_10 = V_2;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_003f;
		}
	}
	{
		int32_t* L_11 = ___bytesWritten2;
		*((int32_t*)L_11) = (int32_t)0;
		return (bool)0;
	}

IL_003f:
	{
		V_3 = 0;
		V_4 = 0;
		NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * L_12 = ___number0;
		bool L_13 = L_12->get_IsNegative_1();
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_14 = V_3;
		int32_t L_15 = L_14;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		uint8_t* L_16;
		L_16 = Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&___destination1), L_15, /*hidden argument*/Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		*((int8_t*)L_16) = (int8_t)((int32_t)45);
	}

IL_005b:
	{
		int32_t L_17 = V_4;
		uint8_t* L_18;
		L_18 = ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&V_1), L_17, /*hidden argument*/ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_RuntimeMethod_var);
		int32_t L_19 = *((uint8_t*)L_18);
		V_6 = (uint8_t)L_19;
		uint8_t L_20 = V_6;
		if (L_20)
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_21 = V_3;
		int32_t L_22 = L_21;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
		uint8_t* L_23;
		L_23 = Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&___destination1), L_22, /*hidden argument*/Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		*((int8_t*)L_23) = (int8_t)((int32_t)48);
		V_5 = 0;
		goto IL_0099;
	}

IL_007f:
	{
		int32_t L_24 = V_3;
		int32_t L_25 = L_24;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
		uint8_t* L_26;
		L_26 = Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&___destination1), L_25, /*hidden argument*/Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		uint8_t L_27 = V_6;
		*((int8_t*)L_26) = (int8_t)L_27;
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
		int32_t L_29 = V_0;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)1));
	}

IL_0099:
	{
		uint8_t L_30 = ___precision3;
		if ((((int32_t)L_30) <= ((int32_t)0)))
		{
			goto IL_00fe;
		}
	}
	{
		int32_t L_31 = V_3;
		int32_t L_32 = L_31;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
		uint8_t* L_33;
		L_33 = Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&___destination1), L_32, /*hidden argument*/Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		*((int8_t*)L_33) = (int8_t)((int32_t)46);
		V_7 = 0;
		goto IL_00f9;
	}

IL_00b1:
	{
		int32_t L_34 = V_4;
		uint8_t* L_35;
		L_35 = ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&V_1), L_34, /*hidden argument*/ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_RuntimeMethod_var);
		int32_t L_36 = *((uint8_t*)L_35);
		V_8 = (uint8_t)L_36;
		uint8_t L_37 = V_8;
		if (L_37)
		{
			goto IL_00de;
		}
	}
	{
		goto IL_00d2;
	}

IL_00c3:
	{
		int32_t L_38 = V_3;
		int32_t L_39 = L_38;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
		uint8_t* L_40;
		L_40 = Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&___destination1), L_39, /*hidden argument*/Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		*((int8_t*)L_40) = (int8_t)((int32_t)48);
	}

IL_00d2:
	{
		int32_t L_41 = V_7;
		int32_t L_42 = L_41;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
		uint8_t L_43 = ___precision3;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_00c3;
		}
	}
	{
		goto IL_00fe;
	}

IL_00de:
	{
		int32_t L_44 = V_3;
		int32_t L_45 = L_44;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
		uint8_t* L_46;
		L_46 = Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&___destination1), L_45, /*hidden argument*/Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		uint8_t L_47 = V_8;
		*((int8_t*)L_46) = (int8_t)L_47;
		int32_t L_48 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1));
		int32_t L_49 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
	}

IL_00f9:
	{
		int32_t L_50 = V_7;
		uint8_t L_51 = ___precision3;
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_00b1;
		}
	}

IL_00fe:
	{
		int32_t L_52 = V_3;
		int32_t L_53 = L_52;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1));
		uint8_t* L_54;
		L_54 = Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&___destination1), L_53, /*hidden argument*/Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		uint8_t L_55 = ___exponentSymbol4;
		*((int8_t*)L_54) = (int8_t)L_55;
		int32_t L_56 = V_5;
		if ((((int32_t)L_56) < ((int32_t)0)))
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_57 = V_3;
		int32_t L_58 = L_57;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
		uint8_t* L_59;
		L_59 = Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&___destination1), L_58, /*hidden argument*/Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		*((int8_t*)L_59) = (int8_t)((int32_t)43);
		goto IL_0137;
	}

IL_0123:
	{
		int32_t L_60 = V_3;
		int32_t L_61 = L_60;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)1));
		uint8_t* L_62;
		L_62 = Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&___destination1), L_61, /*hidden argument*/Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		*((int8_t*)L_62) = (int8_t)((int32_t)45);
		int32_t L_63 = V_5;
		V_5 = ((-L_63));
	}

IL_0137:
	{
		int32_t L_64 = V_3;
		int32_t L_65 = L_64;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)1));
		uint8_t* L_66;
		L_66 = Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&___destination1), L_65, /*hidden argument*/Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		*((int8_t*)L_66) = (int8_t)((int32_t)48);
		int32_t L_67 = V_3;
		int32_t L_68 = L_67;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)1));
		uint8_t* L_69;
		L_69 = Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&___destination1), L_68, /*hidden argument*/Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		int32_t L_70 = V_5;
		*((int8_t*)L_69) = (int8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_70/(int32_t)((int32_t)10))), (int32_t)((int32_t)48)))));
		int32_t L_71 = V_3;
		int32_t L_72 = L_71;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)1));
		uint8_t* L_73;
		L_73 = Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&___destination1), L_72, /*hidden argument*/Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		int32_t L_74 = V_5;
		*((int8_t*)L_73) = (int8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_74%(int32_t)((int32_t)10))), (int32_t)((int32_t)48)))));
		int32_t* L_75 = ___bytesWritten2;
		int32_t L_76 = V_2;
		*((int32_t*)L_75) = (int32_t)L_76;
		return (bool)1;
	}
}
// System.Boolean System.Buffers.Text.Utf8Formatter::TryFormatDecimalF(System.NumberBuffer&,System.Span`1<System.Byte>,System.Int32&,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatDecimalF_mB3F592FC02FDB10D2F065AAC4993754DCE801384 (NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * ___number0, Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  ___destination1, int32_t* ___bytesWritten2, uint8_t ___precision3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m4BFDA5E41279728ADF75E310F780E357ECB1923B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_m4DF231FE4EDB6F473374D63CC83755F09BF582F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	uint8_t V_5 = 0x0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	uint8_t V_11 = 0x0;
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	{
		NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * L_0 = ___number0;
		int32_t L_1 = L_0->get_Scale_0();
		V_0 = L_1;
		NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * L_2 = ___number0;
		Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  L_3;
		L_3 = NumberBuffer_get_Digits_m77F55E994E325F745CBEE5598D24263834F34F3B((NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 *)L_2, /*hidden argument*/NULL);
		ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  L_4;
		L_4 = Span_1_op_Implicit_m4DF231FE4EDB6F473374D63CC83755F09BF582F5(L_3, /*hidden argument*/Span_1_op_Implicit_m4DF231FE4EDB6F473374D63CC83755F09BF582F5_RuntimeMethod_var);
		V_1 = L_4;
		NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * L_5 = ___number0;
		bool L_6 = L_5->get_IsNegative_1();
		if (L_6)
		{
			goto IL_001e;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 1;
	}

IL_001f:
	{
		int32_t L_7 = V_0;
		G_B4_0 = G_B3_0;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			G_B5_0 = G_B3_0;
			goto IL_0026;
		}
	}
	{
		int32_t L_8 = V_0;
		G_B6_0 = L_8;
		G_B6_1 = G_B4_0;
		goto IL_0027;
	}

IL_0026:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_0027:
	{
		uint8_t L_9 = ___precision3;
		G_B7_0 = ((int32_t)il2cpp_codegen_add((int32_t)G_B6_1, (int32_t)G_B6_0));
		if (!L_9)
		{
			G_B8_0 = ((int32_t)il2cpp_codegen_add((int32_t)G_B6_1, (int32_t)G_B6_0));
			goto IL_0030;
		}
	}
	{
		uint8_t L_10 = ___precision3;
		G_B9_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		G_B9_1 = G_B7_0;
		goto IL_0031;
	}

IL_0030:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B8_0;
	}

IL_0031:
	{
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)G_B9_1, (int32_t)G_B9_0));
		int32_t L_11;
		L_11 = Span_1_get_Length_m4BFDA5E41279728ADF75E310F780E357ECB1923B_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&___destination1), /*hidden argument*/Span_1_get_Length_m4BFDA5E41279728ADF75E310F780E357ECB1923B_RuntimeMethod_var);
		int32_t L_12 = V_2;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t* L_13 = ___bytesWritten2;
		*((int32_t*)L_13) = (int32_t)0;
		return (bool)0;
	}

IL_0042:
	{
		V_3 = 0;
		V_4 = 0;
		NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * L_14 = ___number0;
		bool L_15 = L_14->get_IsNegative_1();
		if (!L_15)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_16 = V_4;
		int32_t L_17 = L_16;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		uint8_t* L_18;
		L_18 = Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&___destination1), L_17, /*hidden argument*/Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		*((int8_t*)L_18) = (int8_t)((int32_t)45);
	}

IL_0060:
	{
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) > ((int32_t)0)))
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_20 = V_4;
		int32_t L_21 = L_20;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
		uint8_t* L_22;
		L_22 = Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&___destination1), L_21, /*hidden argument*/Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		*((int8_t*)L_22) = (int8_t)((int32_t)48);
		goto IL_00c8;
	}

IL_0077:
	{
		int32_t L_23 = V_3;
		uint8_t* L_24;
		L_24 = ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&V_1), L_23, /*hidden argument*/ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_RuntimeMethod_var);
		int32_t L_25 = *((uint8_t*)L_24);
		V_5 = (uint8_t)L_25;
		uint8_t L_26 = V_5;
		if (L_26)
		{
			goto IL_00af;
		}
	}
	{
		int32_t L_27 = V_0;
		int32_t L_28 = V_3;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)L_28));
		V_7 = 0;
		goto IL_00a7;
	}

IL_0090:
	{
		int32_t L_29 = V_4;
		int32_t L_30 = L_29;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
		uint8_t* L_31;
		L_31 = Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&___destination1), L_30, /*hidden argument*/Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		*((int8_t*)L_31) = (int8_t)((int32_t)48);
		int32_t L_32 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_00a7:
	{
		int32_t L_33 = V_7;
		int32_t L_34 = V_6;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0090;
		}
	}
	{
		goto IL_00c8;
	}

IL_00af:
	{
		int32_t L_35 = V_4;
		int32_t L_36 = L_35;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
		uint8_t* L_37;
		L_37 = Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&___destination1), L_36, /*hidden argument*/Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		uint8_t L_38 = V_5;
		*((int8_t*)L_37) = (int8_t)L_38;
		int32_t L_39 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_00c4:
	{
		int32_t L_40 = V_3;
		int32_t L_41 = V_0;
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_0077;
		}
	}

IL_00c8:
	{
		uint8_t L_42 = ___precision3;
		if ((((int32_t)L_42) <= ((int32_t)0)))
		{
			goto IL_016a;
		}
	}
	{
		int32_t L_43 = V_4;
		int32_t L_44 = L_43;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
		uint8_t* L_45;
		L_45 = Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&___destination1), L_44, /*hidden argument*/Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		*((int8_t*)L_45) = (int8_t)((int32_t)46);
		V_8 = 0;
		int32_t L_46 = V_0;
		if ((((int32_t)L_46) >= ((int32_t)0)))
		{
			goto IL_0165;
		}
	}
	{
		uint8_t L_47 = ___precision3;
		int32_t L_48 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_49;
		L_49 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574(L_47, ((-L_48)), /*hidden argument*/NULL);
		V_9 = L_49;
		V_10 = 0;
		goto IL_010d;
	}

IL_00f6:
	{
		int32_t L_50 = V_4;
		int32_t L_51 = L_50;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1));
		uint8_t* L_52;
		L_52 = Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&___destination1), L_51, /*hidden argument*/Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		*((int8_t*)L_52) = (int8_t)((int32_t)48);
		int32_t L_53 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1));
	}

IL_010d:
	{
		int32_t L_54 = V_10;
		int32_t L_55 = V_9;
		if ((((int32_t)L_54) < ((int32_t)L_55)))
		{
			goto IL_00f6;
		}
	}
	{
		int32_t L_56 = V_8;
		int32_t L_57 = V_9;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)L_57));
		goto IL_0165;
	}

IL_011c:
	{
		int32_t L_58 = V_3;
		uint8_t* L_59;
		L_59 = ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&V_1), L_58, /*hidden argument*/ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_RuntimeMethod_var);
		int32_t L_60 = *((uint8_t*)L_59);
		V_11 = (uint8_t)L_60;
		uint8_t L_61 = V_11;
		if (L_61)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_013e;
	}

IL_012d:
	{
		int32_t L_62 = V_4;
		int32_t L_63 = L_62;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)1));
		uint8_t* L_64;
		L_64 = Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&___destination1), L_63, /*hidden argument*/Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		*((int8_t*)L_64) = (int8_t)((int32_t)48);
	}

IL_013e:
	{
		int32_t L_65 = V_8;
		int32_t L_66 = L_65;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1));
		uint8_t L_67 = ___precision3;
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_012d;
		}
	}
	{
		goto IL_016a;
	}

IL_014a:
	{
		int32_t L_68 = V_4;
		int32_t L_69 = L_68;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)1));
		uint8_t* L_70;
		L_70 = Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&___destination1), L_69, /*hidden argument*/Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		uint8_t L_71 = V_11;
		*((int8_t*)L_70) = (int8_t)L_71;
		int32_t L_72 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)1));
		int32_t L_73 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)1));
	}

IL_0165:
	{
		int32_t L_74 = V_8;
		uint8_t L_75 = ___precision3;
		if ((((int32_t)L_74) < ((int32_t)L_75)))
		{
			goto IL_011c;
		}
	}

IL_016a:
	{
		int32_t* L_76 = ___bytesWritten2;
		int32_t L_77 = V_2;
		*((int32_t*)L_76) = (int32_t)L_77;
		return (bool)1;
	}
}
// System.Boolean System.Buffers.Text.Utf8Formatter::TryFormatDecimalG(System.NumberBuffer&,System.Span`1<System.Byte>,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormatDecimalG_m9209EBD3DB9F8ADBD39C4F69246BF2D2B7E2B86B (NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * ___number0, Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  ___destination1, int32_t* ___bytesWritten2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m4BFDA5E41279728ADF75E310F780E357ECB1923B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_m4DF231FE4EDB6F473374D63CC83755F09BF582F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint8_t V_7 = 0x0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	uint8_t V_10 = 0x0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t G_B6_0 = 0;
	{
		NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * L_0 = ___number0;
		int32_t L_1 = L_0->get_Scale_0();
		V_0 = L_1;
		NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * L_2 = ___number0;
		Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  L_3;
		L_3 = NumberBuffer_get_Digits_m77F55E994E325F745CBEE5598D24263834F34F3B((NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 *)L_2, /*hidden argument*/NULL);
		ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  L_4;
		L_4 = Span_1_op_Implicit_m4DF231FE4EDB6F473374D63CC83755F09BF582F5(L_3, /*hidden argument*/Span_1_op_Implicit_m4DF231FE4EDB6F473374D63CC83755F09BF582F5_RuntimeMethod_var);
		V_1 = L_4;
		NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * L_5 = ___number0;
		int32_t L_6;
		L_6 = NumberBuffer_get_NumDigits_mC0AF0400D548D41907EA3204965C78A10DB463D5((NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 *)L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		int32_t L_7 = V_0;
		int32_t L_8 = V_2;
		V_3 = (bool)((((int32_t)L_7) < ((int32_t)L_8))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_10 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) > ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_12 = V_4;
		int32_t L_13 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)1, (int32_t)((-L_13))))));
		goto IL_0040;
	}

IL_0036:
	{
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_15 = V_0;
		G_B6_0 = L_15;
		goto IL_003e;
	}

IL_003d:
	{
		G_B6_0 = 1;
	}

IL_003e:
	{
		V_4 = G_B6_0;
	}

IL_0040:
	{
		NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * L_16 = ___number0;
		bool L_17 = L_16->get_IsNegative_1();
		if (!L_17)
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_18 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_004e:
	{
		int32_t L_19;
		L_19 = Span_1_get_Length_m4BFDA5E41279728ADF75E310F780E357ECB1923B_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&___destination1), /*hidden argument*/Span_1_get_Length_m4BFDA5E41279728ADF75E310F780E357ECB1923B_RuntimeMethod_var);
		int32_t L_20 = V_4;
		if ((((int32_t)L_19) >= ((int32_t)L_20)))
		{
			goto IL_005e;
		}
	}
	{
		int32_t* L_21 = ___bytesWritten2;
		*((int32_t*)L_21) = (int32_t)0;
		return (bool)0;
	}

IL_005e:
	{
		V_5 = 0;
		V_6 = 0;
		NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * L_22 = ___number0;
		bool L_23 = L_22->get_IsNegative_1();
		if (!L_23)
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_24 = V_6;
		int32_t L_25 = L_24;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
		uint8_t* L_26;
		L_26 = Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&___destination1), L_25, /*hidden argument*/Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		*((int8_t*)L_26) = (int8_t)((int32_t)45);
	}

IL_007d:
	{
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) > ((int32_t)0)))
		{
			goto IL_00e5;
		}
	}
	{
		int32_t L_28 = V_6;
		int32_t L_29 = L_28;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
		uint8_t* L_30;
		L_30 = Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&___destination1), L_29, /*hidden argument*/Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		*((int8_t*)L_30) = (int8_t)((int32_t)48);
		goto IL_00ea;
	}

IL_0094:
	{
		int32_t L_31 = V_5;
		uint8_t* L_32;
		L_32 = ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&V_1), L_31, /*hidden argument*/ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_RuntimeMethod_var);
		int32_t L_33 = *((uint8_t*)L_32);
		V_7 = (uint8_t)L_33;
		uint8_t L_34 = V_7;
		if (L_34)
		{
			goto IL_00ce;
		}
	}
	{
		int32_t L_35 = V_0;
		int32_t L_36 = V_5;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_35, (int32_t)L_36));
		V_9 = 0;
		goto IL_00c6;
	}

IL_00af:
	{
		int32_t L_37 = V_6;
		int32_t L_38 = L_37;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
		uint8_t* L_39;
		L_39 = Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&___destination1), L_38, /*hidden argument*/Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		*((int8_t*)L_39) = (int8_t)((int32_t)48);
		int32_t L_40 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
	}

IL_00c6:
	{
		int32_t L_41 = V_9;
		int32_t L_42 = V_8;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_00af;
		}
	}
	{
		goto IL_00ea;
	}

IL_00ce:
	{
		int32_t L_43 = V_6;
		int32_t L_44 = L_43;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
		uint8_t* L_45;
		L_45 = Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&___destination1), L_44, /*hidden argument*/Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		uint8_t L_46 = V_7;
		*((int8_t*)L_45) = (int8_t)L_46;
		int32_t L_47 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1));
	}

IL_00e5:
	{
		int32_t L_48 = V_5;
		int32_t L_49 = V_0;
		if ((((int32_t)L_48) < ((int32_t)L_49)))
		{
			goto IL_0094;
		}
	}

IL_00ea:
	{
		bool L_50 = V_3;
		if (!L_50)
		{
			goto IL_014f;
		}
	}
	{
		int32_t L_51 = V_6;
		int32_t L_52 = L_51;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
		uint8_t* L_53;
		L_53 = Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&___destination1), L_52, /*hidden argument*/Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		*((int8_t*)L_53) = (int8_t)((int32_t)46);
		int32_t L_54 = V_0;
		if ((((int32_t)L_54) >= ((int32_t)0)))
		{
			goto IL_013b;
		}
	}
	{
		int32_t L_55 = V_0;
		V_11 = ((-L_55));
		V_12 = 0;
		goto IL_0122;
	}

IL_010b:
	{
		int32_t L_56 = V_6;
		int32_t L_57 = L_56;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)1));
		uint8_t* L_58;
		L_58 = Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&___destination1), L_57, /*hidden argument*/Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		*((int8_t*)L_58) = (int8_t)((int32_t)48);
		int32_t L_59 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1));
	}

IL_0122:
	{
		int32_t L_60 = V_12;
		int32_t L_61 = V_11;
		if ((((int32_t)L_60) < ((int32_t)L_61)))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_013b;
	}

IL_012a:
	{
		int32_t L_62 = V_6;
		int32_t L_63 = L_62;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)1));
		uint8_t* L_64;
		L_64 = Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&___destination1), L_63, /*hidden argument*/Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		uint8_t L_65 = V_10;
		*((int8_t*)L_64) = (int8_t)L_65;
	}

IL_013b:
	{
		int32_t L_66 = V_5;
		int32_t L_67 = L_66;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1));
		uint8_t* L_68;
		L_68 = ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&V_1), L_67, /*hidden argument*/ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_RuntimeMethod_var);
		int32_t L_69 = *((uint8_t*)L_68);
		int32_t L_70 = L_69;
		V_10 = (uint8_t)L_70;
		if (L_70)
		{
			goto IL_012a;
		}
	}

IL_014f:
	{
		int32_t* L_71 = ___bytesWritten2;
		int32_t L_72 = V_4;
		*((int32_t*)L_71) = (int32_t)L_72;
		return (bool)1;
	}
}
// System.Void System.Buffers.Text.Utf8Formatter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8Formatter__cctor_mB078801DA1AF49D670C5D6813AFECBF5C0691DCD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t2BE371A826DE714388CB1A6D368F18406BAB06B2____B8B960BE929E7BAB90AE2CAEF2468C56CD5414C1_3_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t2BE371A826DE714388CB1A6D368F18406BAB06B2____BD20BFA840DDF83194ECD4397DA071ECD4C1C72F_4_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t2BE371A826DE714388CB1A6D368F18406BAB06B2____C4C38BC485A320D4B7D737DB85E705077FA38BEF_6_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t2BE371A826DE714388CB1A6D368F18406BAB06B2____EE0B1C00D481FCA3559F2937C3DD3127C35B2FE3_10_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Formatter_t40DEB6F6F7963F03A97169CEE107888F2B29B591_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_0 = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)SZArrayNew(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var, (uint32_t)7);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t2BE371A826DE714388CB1A6D368F18406BAB06B2____BD20BFA840DDF83194ECD4397DA071ECD4C1C72F_4_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((Utf8Formatter_t40DEB6F6F7963F03A97169CEE107888F2B29B591_StaticFields*)il2cpp_codegen_static_fields_for(Utf8Formatter_t40DEB6F6F7963F03A97169CEE107888F2B29B591_il2cpp_TypeInfo_var))->set_DayAbbreviations_0(L_1);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_3 = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)SZArrayNew(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var, (uint32_t)7);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_4 = L_3;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t2BE371A826DE714388CB1A6D368F18406BAB06B2____EE0B1C00D481FCA3559F2937C3DD3127C35B2FE3_10_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_4, L_5, /*hidden argument*/NULL);
		((Utf8Formatter_t40DEB6F6F7963F03A97169CEE107888F2B29B591_StaticFields*)il2cpp_codegen_static_fields_for(Utf8Formatter_t40DEB6F6F7963F03A97169CEE107888F2B29B591_il2cpp_TypeInfo_var))->set_DayAbbreviationsLowercase_1(L_4);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_6 = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)SZArrayNew(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_7 = L_6;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t2BE371A826DE714388CB1A6D368F18406BAB06B2____C4C38BC485A320D4B7D737DB85E705077FA38BEF_6_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_7, L_8, /*hidden argument*/NULL);
		((Utf8Formatter_t40DEB6F6F7963F03A97169CEE107888F2B29B591_StaticFields*)il2cpp_codegen_static_fields_for(Utf8Formatter_t40DEB6F6F7963F03A97169CEE107888F2B29B591_il2cpp_TypeInfo_var))->set_MonthAbbreviations_2(L_7);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_9 = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)SZArrayNew(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_10 = L_9;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_11 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t2BE371A826DE714388CB1A6D368F18406BAB06B2____B8B960BE929E7BAB90AE2CAEF2468C56CD5414C1_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_10, L_11, /*hidden argument*/NULL);
		((Utf8Formatter_t40DEB6F6F7963F03A97169CEE107888F2B29B591_StaticFields*)il2cpp_codegen_static_fields_for(Utf8Formatter_t40DEB6F6F7963F03A97169CEE107888F2B29B591_il2cpp_TypeInfo_var))->set_MonthAbbreviationsLowercase_3(L_10);
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
// System.Boolean System.Buffers.Text.Utf8Parser::TryParse(System.ReadOnlySpan`1<System.Byte>,System.Decimal&,System.Int32&,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParse_m90A0F8BFE5C3044C00DB5155FF340B6AF68E74FE (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  ___source0, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * ___value1, int32_t* ___bytesConsumed2, Il2CppChar ___standardFormat3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Number_tF582821FDF819A5C8F89A4AEEEA382F75E061EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThrowHelper_TryParseThrowFormatException_TisDecimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_m4D90369D4FECA72454279EE77D57AE7E65573515_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Parser_tBAC6DC53DE4F4A96AE1B0E66D73BE343EFA379FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		Il2CppChar L_0 = ___standardFormat3;
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		Il2CppChar L_1 = ___standardFormat3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)69))))
		{
			case 0:
			{
				goto IL_002f;
			}
			case 1:
			{
				goto IL_0033;
			}
			case 2:
			{
				goto IL_002f;
			}
		}
	}
	{
		Il2CppChar L_2 = ___standardFormat3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((int32_t)101))))
		{
			case 0:
			{
				goto IL_002f;
			}
			case 1:
			{
				goto IL_0033;
			}
			case 2:
			{
				goto IL_002f;
			}
		}
	}
	{
		goto IL_0037;
	}

IL_002f:
	{
		V_0 = 1;
		goto IL_003f;
	}

IL_0033:
	{
		V_0 = 0;
		goto IL_003f;
	}

IL_0037:
	{
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * L_3 = ___value1;
		int32_t* L_4 = ___bytesConsumed2;
		bool L_5;
		L_5 = ThrowHelper_TryParseThrowFormatException_TisDecimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_m4D90369D4FECA72454279EE77D57AE7E65573515((Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 *)L_3, (int32_t*)L_4, /*hidden argument*/ThrowHelper_TryParseThrowFormatException_TisDecimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_m4D90369D4FECA72454279EE77D57AE7E65573515_RuntimeMethod_var);
		return L_5;
	}

IL_003f:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 ));
		ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  L_6 = ___source0;
		int32_t* L_7 = ___bytesConsumed2;
		int32_t L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Utf8Parser_tBAC6DC53DE4F4A96AE1B0E66D73BE343EFA379FC_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Utf8Parser_TryParseNumber_m18BE8E49AA5F029B6111509C59D74FFA0F35E38C(L_6, (NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 *)(&V_1), (int32_t*)L_7, L_8, (bool*)(&V_2), /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_005e;
		}
	}
	{
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * L_10 = ___value1;
		il2cpp_codegen_initobj(L_10, sizeof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 ));
		return (bool)0;
	}

IL_005e:
	{
		bool L_11 = V_2;
		if (L_11)
		{
			goto IL_0077;
		}
	}
	{
		Il2CppChar L_12 = ___standardFormat3;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)69))))
		{
			goto IL_006b;
		}
	}
	{
		Il2CppChar L_13 = ___standardFormat3;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_0077;
		}
	}

IL_006b:
	{
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * L_14 = ___value1;
		il2cpp_codegen_initobj(L_14, sizeof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 ));
		int32_t* L_15 = ___bytesConsumed2;
		*((int32_t*)L_15) = (int32_t)0;
		return (bool)0;
	}

IL_0077:
	{
		Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  L_16;
		L_16 = NumberBuffer_get_Digits_m77F55E994E325F745CBEE5598D24263834F34F3B((NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 *)(&V_1), /*hidden argument*/NULL);
		V_3 = L_16;
		uint8_t* L_17;
		L_17 = Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&V_3), 0, /*hidden argument*/Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		int32_t L_18 = *((uint8_t*)L_17);
		if (L_18)
		{
			goto IL_009a;
		}
	}
	{
		NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437  L_19 = V_1;
		int32_t L_20 = L_19.get_Scale_0();
		if (L_20)
		{
			goto IL_009a;
		}
	}
	{
		(&V_1)->set_IsNegative_1((bool)0);
	}

IL_009a:
	{
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * L_21 = ___value1;
		il2cpp_codegen_initobj(L_21, sizeof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 ));
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * L_22 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(Number_tF582821FDF819A5C8F89A4AEEEA382F75E061EC1_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Number_NumberBufferToDecimal_m9EC553B819A7A5F0260E71EE5684E7EA7CEE6D42((NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 *)(&V_1), (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 *)L_22, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_00b7;
		}
	}
	{
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * L_24 = ___value1;
		il2cpp_codegen_initobj(L_24, sizeof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 ));
		int32_t* L_25 = ___bytesConsumed2;
		*((int32_t*)L_25) = (int32_t)0;
		return (bool)0;
	}

IL_00b7:
	{
		return (bool)1;
	}
}
// System.Boolean System.Buffers.Text.Utf8Parser::TryParseUInt32D(System.ReadOnlySpan`1<System.Byte>,System.UInt32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseUInt32D_m5F723DCD7B0E8614C4BC8DC76816B62AAFED195E (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  ___source0, uint32_t* ___value1, int32_t* ___bytesConsumed2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParserHelpers_t8A97CC8777CE0C4CF09BEDF76F17F057486C5E0A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), /*hidden argument*/ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_RuntimeMethod_var);
		if ((((int32_t)L_0) < ((int32_t)1)))
		{
			goto IL_0235;
		}
	}
	{
		V_0 = 0;
		int32_t L_1 = V_0;
		uint8_t* L_2;
		L_2 = ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), L_1, /*hidden argument*/ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_RuntimeMethod_var);
		int32_t L_3 = *((uint8_t*)L_2);
		V_1 = L_3;
		V_2 = 0;
		int32_t L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(ParserHelpers_t8A97CC8777CE0C4CF09BEDF76F17F057486C5E0A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = ParserHelpers_IsDigit_m741C974EC477EA1F49439BA55D1C3142EA1D784D_inline(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0235;
		}
	}
	{
		int32_t L_6 = V_1;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_0056;
		}
	}

IL_002b:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		int32_t L_8 = V_0;
		int32_t L_9;
		L_9 = ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), /*hidden argument*/ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_RuntimeMethod_var);
		if ((!(((uint32_t)L_8) < ((uint32_t)L_9))))
		{
			goto IL_023d;
		}
	}
	{
		int32_t L_10 = V_0;
		uint8_t* L_11;
		L_11 = ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), L_10, /*hidden argument*/ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_RuntimeMethod_var);
		int32_t L_12 = *((uint8_t*)L_11);
		V_1 = L_12;
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)48))))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(ParserHelpers_t8A97CC8777CE0C4CF09BEDF76F17F057486C5E0A_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = ParserHelpers_IsDigit_m741C974EC477EA1F49439BA55D1C3142EA1D784D_inline(L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_023d;
		}
	}

IL_0056:
	{
		int32_t L_16 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)((int32_t)48)));
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		int32_t L_18 = V_0;
		int32_t L_19;
		L_19 = ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), /*hidden argument*/ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_RuntimeMethod_var);
		if ((!(((uint32_t)L_18) < ((uint32_t)L_19))))
		{
			goto IL_023d;
		}
	}
	{
		int32_t L_20 = V_0;
		uint8_t* L_21;
		L_21 = ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), L_20, /*hidden argument*/ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_RuntimeMethod_var);
		int32_t L_22 = *((uint8_t*)L_21);
		V_1 = L_22;
		int32_t L_23 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(ParserHelpers_t8A97CC8777CE0C4CF09BEDF76F17F057486C5E0A_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = ParserHelpers_IsDigit_m741C974EC477EA1F49439BA55D1C3142EA1D784D_inline(L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_023d;
		}
	}
	{
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
		int32_t L_26 = V_2;
		int32_t L_27 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)10), (int32_t)L_26)), (int32_t)L_27)), (int32_t)((int32_t)48)));
		int32_t L_28 = V_0;
		int32_t L_29;
		L_29 = ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), /*hidden argument*/ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_RuntimeMethod_var);
		if ((!(((uint32_t)L_28) < ((uint32_t)L_29))))
		{
			goto IL_023d;
		}
	}
	{
		int32_t L_30 = V_0;
		uint8_t* L_31;
		L_31 = ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), L_30, /*hidden argument*/ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_RuntimeMethod_var);
		int32_t L_32 = *((uint8_t*)L_31);
		V_1 = L_32;
		int32_t L_33 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(ParserHelpers_t8A97CC8777CE0C4CF09BEDF76F17F057486C5E0A_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = ParserHelpers_IsDigit_m741C974EC477EA1F49439BA55D1C3142EA1D784D_inline(L_33, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_023d;
		}
	}
	{
		int32_t L_35 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
		int32_t L_36 = V_2;
		int32_t L_37 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)10), (int32_t)L_36)), (int32_t)L_37)), (int32_t)((int32_t)48)));
		int32_t L_38 = V_0;
		int32_t L_39;
		L_39 = ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), /*hidden argument*/ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_RuntimeMethod_var);
		if ((!(((uint32_t)L_38) < ((uint32_t)L_39))))
		{
			goto IL_023d;
		}
	}
	{
		int32_t L_40 = V_0;
		uint8_t* L_41;
		L_41 = ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), L_40, /*hidden argument*/ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_RuntimeMethod_var);
		int32_t L_42 = *((uint8_t*)L_41);
		V_1 = L_42;
		int32_t L_43 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(ParserHelpers_t8A97CC8777CE0C4CF09BEDF76F17F057486C5E0A_il2cpp_TypeInfo_var);
		bool L_44;
		L_44 = ParserHelpers_IsDigit_m741C974EC477EA1F49439BA55D1C3142EA1D784D_inline(L_43, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_023d;
		}
	}
	{
		int32_t L_45 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
		int32_t L_46 = V_2;
		int32_t L_47 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)10), (int32_t)L_46)), (int32_t)L_47)), (int32_t)((int32_t)48)));
		int32_t L_48 = V_0;
		int32_t L_49;
		L_49 = ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), /*hidden argument*/ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_RuntimeMethod_var);
		if ((!(((uint32_t)L_48) < ((uint32_t)L_49))))
		{
			goto IL_023d;
		}
	}
	{
		int32_t L_50 = V_0;
		uint8_t* L_51;
		L_51 = ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), L_50, /*hidden argument*/ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_RuntimeMethod_var);
		int32_t L_52 = *((uint8_t*)L_51);
		V_1 = L_52;
		int32_t L_53 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(ParserHelpers_t8A97CC8777CE0C4CF09BEDF76F17F057486C5E0A_il2cpp_TypeInfo_var);
		bool L_54;
		L_54 = ParserHelpers_IsDigit_m741C974EC477EA1F49439BA55D1C3142EA1D784D_inline(L_53, /*hidden argument*/NULL);
		if (!L_54)
		{
			goto IL_023d;
		}
	}
	{
		int32_t L_55 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1));
		int32_t L_56 = V_2;
		int32_t L_57 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)10), (int32_t)L_56)), (int32_t)L_57)), (int32_t)((int32_t)48)));
		int32_t L_58 = V_0;
		int32_t L_59;
		L_59 = ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), /*hidden argument*/ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_RuntimeMethod_var);
		if ((!(((uint32_t)L_58) < ((uint32_t)L_59))))
		{
			goto IL_023d;
		}
	}
	{
		int32_t L_60 = V_0;
		uint8_t* L_61;
		L_61 = ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), L_60, /*hidden argument*/ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_RuntimeMethod_var);
		int32_t L_62 = *((uint8_t*)L_61);
		V_1 = L_62;
		int32_t L_63 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(ParserHelpers_t8A97CC8777CE0C4CF09BEDF76F17F057486C5E0A_il2cpp_TypeInfo_var);
		bool L_64;
		L_64 = ParserHelpers_IsDigit_m741C974EC477EA1F49439BA55D1C3142EA1D784D_inline(L_63, /*hidden argument*/NULL);
		if (!L_64)
		{
			goto IL_023d;
		}
	}
	{
		int32_t L_65 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)1));
		int32_t L_66 = V_2;
		int32_t L_67 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)10), (int32_t)L_66)), (int32_t)L_67)), (int32_t)((int32_t)48)));
		int32_t L_68 = V_0;
		int32_t L_69;
		L_69 = ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), /*hidden argument*/ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_RuntimeMethod_var);
		if ((!(((uint32_t)L_68) < ((uint32_t)L_69))))
		{
			goto IL_023d;
		}
	}
	{
		int32_t L_70 = V_0;
		uint8_t* L_71;
		L_71 = ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), L_70, /*hidden argument*/ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_RuntimeMethod_var);
		int32_t L_72 = *((uint8_t*)L_71);
		V_1 = L_72;
		int32_t L_73 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(ParserHelpers_t8A97CC8777CE0C4CF09BEDF76F17F057486C5E0A_il2cpp_TypeInfo_var);
		bool L_74;
		L_74 = ParserHelpers_IsDigit_m741C974EC477EA1F49439BA55D1C3142EA1D784D_inline(L_73, /*hidden argument*/NULL);
		if (!L_74)
		{
			goto IL_023d;
		}
	}
	{
		int32_t L_75 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)1));
		int32_t L_76 = V_2;
		int32_t L_77 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)10), (int32_t)L_76)), (int32_t)L_77)), (int32_t)((int32_t)48)));
		int32_t L_78 = V_0;
		int32_t L_79;
		L_79 = ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), /*hidden argument*/ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_RuntimeMethod_var);
		if ((!(((uint32_t)L_78) < ((uint32_t)L_79))))
		{
			goto IL_023d;
		}
	}
	{
		int32_t L_80 = V_0;
		uint8_t* L_81;
		L_81 = ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), L_80, /*hidden argument*/ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_RuntimeMethod_var);
		int32_t L_82 = *((uint8_t*)L_81);
		V_1 = L_82;
		int32_t L_83 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(ParserHelpers_t8A97CC8777CE0C4CF09BEDF76F17F057486C5E0A_il2cpp_TypeInfo_var);
		bool L_84;
		L_84 = ParserHelpers_IsDigit_m741C974EC477EA1F49439BA55D1C3142EA1D784D_inline(L_83, /*hidden argument*/NULL);
		if (!L_84)
		{
			goto IL_023d;
		}
	}
	{
		int32_t L_85 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)1));
		int32_t L_86 = V_2;
		int32_t L_87 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)10), (int32_t)L_86)), (int32_t)L_87)), (int32_t)((int32_t)48)));
		int32_t L_88 = V_0;
		int32_t L_89;
		L_89 = ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), /*hidden argument*/ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_RuntimeMethod_var);
		if ((!(((uint32_t)L_88) < ((uint32_t)L_89))))
		{
			goto IL_023d;
		}
	}
	{
		int32_t L_90 = V_0;
		uint8_t* L_91;
		L_91 = ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), L_90, /*hidden argument*/ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_RuntimeMethod_var);
		int32_t L_92 = *((uint8_t*)L_91);
		V_1 = L_92;
		int32_t L_93 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(ParserHelpers_t8A97CC8777CE0C4CF09BEDF76F17F057486C5E0A_il2cpp_TypeInfo_var);
		bool L_94;
		L_94 = ParserHelpers_IsDigit_m741C974EC477EA1F49439BA55D1C3142EA1D784D_inline(L_93, /*hidden argument*/NULL);
		if (!L_94)
		{
			goto IL_023d;
		}
	}
	{
		int32_t L_95 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_95, (int32_t)1));
		int32_t L_96 = V_2;
		int32_t L_97 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)10), (int32_t)L_96)), (int32_t)L_97)), (int32_t)((int32_t)48)));
		int32_t L_98 = V_0;
		int32_t L_99;
		L_99 = ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), /*hidden argument*/ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_RuntimeMethod_var);
		if ((!(((uint32_t)L_98) < ((uint32_t)L_99))))
		{
			goto IL_023d;
		}
	}
	{
		int32_t L_100 = V_0;
		uint8_t* L_101;
		L_101 = ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), L_100, /*hidden argument*/ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_RuntimeMethod_var);
		int32_t L_102 = *((uint8_t*)L_101);
		V_1 = L_102;
		int32_t L_103 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(ParserHelpers_t8A97CC8777CE0C4CF09BEDF76F17F057486C5E0A_il2cpp_TypeInfo_var);
		bool L_104;
		L_104 = ParserHelpers_IsDigit_m741C974EC477EA1F49439BA55D1C3142EA1D784D_inline(L_103, /*hidden argument*/NULL);
		if (!L_104)
		{
			goto IL_023d;
		}
	}
	{
		int32_t L_105 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_105, (int32_t)1));
		int32_t L_106 = V_2;
		if ((!(((uint32_t)L_106) <= ((uint32_t)((int32_t)429496729)))))
		{
			goto IL_0235;
		}
	}
	{
		int32_t L_107 = V_2;
		if ((!(((uint32_t)L_107) == ((uint32_t)((int32_t)429496729)))))
		{
			goto IL_0211;
		}
	}
	{
		int32_t L_108 = V_1;
		if ((((int32_t)L_108) > ((int32_t)((int32_t)53))))
		{
			goto IL_0235;
		}
	}

IL_0211:
	{
		int32_t L_109 = V_2;
		int32_t L_110 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_109, (int32_t)((int32_t)10))), (int32_t)L_110)), (int32_t)((int32_t)48)));
		int32_t L_111 = V_0;
		int32_t L_112;
		L_112 = ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), /*hidden argument*/ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_RuntimeMethod_var);
		if ((!(((uint32_t)L_111) < ((uint32_t)L_112))))
		{
			goto IL_023d;
		}
	}
	{
		int32_t L_113 = V_0;
		uint8_t* L_114;
		L_114 = ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), L_113, /*hidden argument*/ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_RuntimeMethod_var);
		int32_t L_115 = *((uint8_t*)L_114);
		IL2CPP_RUNTIME_CLASS_INIT(ParserHelpers_t8A97CC8777CE0C4CF09BEDF76F17F057486C5E0A_il2cpp_TypeInfo_var);
		bool L_116;
		L_116 = ParserHelpers_IsDigit_m741C974EC477EA1F49439BA55D1C3142EA1D784D_inline(L_115, /*hidden argument*/NULL);
		if (!L_116)
		{
			goto IL_023d;
		}
	}

IL_0235:
	{
		int32_t* L_117 = ___bytesConsumed2;
		*((int32_t*)L_117) = (int32_t)0;
		uint32_t* L_118 = ___value1;
		*((int32_t*)L_118) = (int32_t)0;
		return (bool)0;
	}

IL_023d:
	{
		int32_t* L_119 = ___bytesConsumed2;
		int32_t L_120 = V_0;
		*((int32_t*)L_119) = (int32_t)L_120;
		uint32_t* L_121 = ___value1;
		int32_t L_122 = V_2;
		*((int32_t*)L_121) = (int32_t)L_122;
		return (bool)1;
	}
}
// System.Boolean System.Buffers.Text.Utf8Parser::TryParseNumber(System.ReadOnlySpan`1<System.Byte>,System.NumberBuffer&,System.Int32&,System.Buffers.Text.Utf8Parser/ParseNumberOptions,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Parser_TryParseNumber_m18BE8E49AA5F029B6111509C59D74FFA0F35E38C (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  ___source0, NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * ___number1, int32_t* ___bytesConsumed2, int32_t ___options3, bool* ___textUsedExponentNotation4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_CopyTo_m4252FBCA62EB3368E39115E35C1E4D74B89C53DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_m7069C54604C1694CDCF61CE35A3A09F55D9C9FDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_m750CD52402E65B69E811EF1A7245A9283C8EEFDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mC8E25AC937B49CDD57AA85FF493D7F42595F8EAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Parser_tBAC6DC53DE4F4A96AE1B0E66D73BE343EFA379FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	uint32_t V_11 = 0;
	int32_t V_12 = 0;
	ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	{
		bool* L_0 = ___textUsedExponentNotation4;
		*((int8_t*)L_0) = (int8_t)0;
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), /*hidden argument*/ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		int32_t* L_2 = ___bytesConsumed2;
		*((int32_t*)L_2) = (int32_t)0;
		return (bool)0;
	}

IL_0012:
	{
		NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * L_3 = ___number1;
		Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  L_4;
		L_4 = NumberBuffer_get_Digits_m77F55E994E325F745CBEE5598D24263834F34F3B((NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 *)L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		V_1 = 0;
		V_2 = 0;
		int32_t L_5 = V_1;
		uint8_t* L_6;
		L_6 = ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), L_5, /*hidden argument*/ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_RuntimeMethod_var);
		int32_t L_7 = *((uint8_t*)L_6);
		V_3 = (uint8_t)L_7;
		uint8_t L_8 = V_3;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)43))))
		{
			goto IL_0038;
		}
	}
	{
		uint8_t L_9 = V_3;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0055;
		}
	}
	{
		NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * L_10 = ___number1;
		L_10->set_IsNegative_1((bool)1);
	}

IL_0038:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
		int32_t L_12 = V_1;
		int32_t L_13;
		L_13 = ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), /*hidden argument*/ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_RuntimeMethod_var);
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_004b;
		}
	}
	{
		int32_t* L_14 = ___bytesConsumed2;
		*((int32_t*)L_14) = (int32_t)0;
		return (bool)0;
	}

IL_004b:
	{
		int32_t L_15 = V_1;
		uint8_t* L_16;
		L_16 = ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), L_15, /*hidden argument*/ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_RuntimeMethod_var);
		int32_t L_17 = *((uint8_t*)L_16);
		V_3 = (uint8_t)L_17;
	}

IL_0055:
	{
		int32_t L_18 = V_1;
		V_4 = L_18;
		goto IL_006d;
	}

IL_005a:
	{
		int32_t L_19 = V_1;
		uint8_t* L_20;
		L_20 = ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), L_19, /*hidden argument*/ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_RuntimeMethod_var);
		int32_t L_21 = *((uint8_t*)L_20);
		V_3 = (uint8_t)L_21;
		uint8_t L_22 = V_3;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_0077;
		}
	}
	{
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_006d:
	{
		int32_t L_24 = V_1;
		int32_t L_25;
		L_25 = ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), /*hidden argument*/ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_RuntimeMethod_var);
		if ((!(((uint32_t)L_24) == ((uint32_t)L_25))))
		{
			goto IL_005a;
		}
	}

IL_0077:
	{
		int32_t L_26 = V_1;
		int32_t L_27;
		L_27 = ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), /*hidden argument*/ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_RuntimeMethod_var);
		if ((!(((uint32_t)L_26) == ((uint32_t)L_27))))
		{
			goto IL_0097;
		}
	}
	{
		uint8_t* L_28;
		L_28 = Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&V_0), 0, /*hidden argument*/Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_RuntimeMethod_var);
		*((int8_t*)L_28) = (int8_t)0;
		NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * L_29 = ___number1;
		L_29->set_Scale_0(0);
		int32_t* L_30 = ___bytesConsumed2;
		int32_t L_31 = V_1;
		*((int32_t*)L_30) = (int32_t)L_31;
		return (bool)1;
	}

IL_0097:
	{
		int32_t L_32 = V_1;
		V_5 = L_32;
		goto IL_00b2;
	}

IL_009c:
	{
		int32_t L_33 = V_1;
		uint8_t* L_34;
		L_34 = ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), L_33, /*hidden argument*/ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_RuntimeMethod_var);
		int32_t L_35 = *((uint8_t*)L_34);
		V_3 = (uint8_t)L_35;
		uint8_t L_36 = V_3;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)((int32_t)48)))) <= ((uint32_t)((int32_t)9)))))
		{
			goto IL_00bc;
		}
	}
	{
		int32_t L_37 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_00b2:
	{
		int32_t L_38 = V_1;
		int32_t L_39;
		L_39 = ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), /*hidden argument*/ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_RuntimeMethod_var);
		if ((!(((uint32_t)L_38) == ((uint32_t)L_39))))
		{
			goto IL_009c;
		}
	}

IL_00bc:
	{
		int32_t L_40 = V_1;
		int32_t L_41 = V_4;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_40, (int32_t)L_41));
		int32_t L_42 = V_1;
		int32_t L_43 = V_5;
		V_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_42, (int32_t)L_43));
		int32_t L_44 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_45;
		L_45 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574(L_44, ((int32_t)50), /*hidden argument*/NULL);
		V_8 = L_45;
		int32_t L_46 = V_5;
		int32_t L_47 = V_8;
		ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  L_48;
		L_48 = ReadOnlySpan_1_Slice_m750CD52402E65B69E811EF1A7245A9283C8EEFDE_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), L_46, L_47, /*hidden argument*/ReadOnlySpan_1_Slice_m750CD52402E65B69E811EF1A7245A9283C8EEFDE_RuntimeMethod_var);
		V_13 = L_48;
		Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  L_49 = V_0;
		ReadOnlySpan_1_CopyTo_m4252FBCA62EB3368E39115E35C1E4D74B89C53DA((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&V_13), L_49, /*hidden argument*/ReadOnlySpan_1_CopyTo_m4252FBCA62EB3368E39115E35C1E4D74B89C53DA_RuntimeMethod_var);
		int32_t L_50 = V_8;
		V_2 = L_50;
		NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * L_51 = ___number1;
		int32_t L_52 = V_7;
		L_51->set_Scale_0(L_52);
		int32_t L_53 = V_1;
		int32_t L_54;
		L_54 = ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), /*hidden argument*/ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_RuntimeMethod_var);
		if ((!(((uint32_t)L_53) == ((uint32_t)L_54))))
		{
			goto IL_0102;
		}
	}
	{
		int32_t* L_55 = ___bytesConsumed2;
		int32_t L_56 = V_1;
		*((int32_t*)L_55) = (int32_t)L_56;
		return (bool)1;
	}

IL_0102:
	{
		V_9 = 0;
		uint8_t L_57 = V_3;
		if ((!(((uint32_t)L_57) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_01b7;
		}
	}
	{
		int32_t L_58 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
		int32_t L_59 = V_1;
		V_14 = L_59;
		goto IL_012c;
	}

IL_0116:
	{
		int32_t L_60 = V_1;
		uint8_t* L_61;
		L_61 = ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), L_60, /*hidden argument*/ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_RuntimeMethod_var);
		int32_t L_62 = *((uint8_t*)L_61);
		V_3 = (uint8_t)L_62;
		uint8_t L_63 = V_3;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_63, (int32_t)((int32_t)48)))) <= ((uint32_t)((int32_t)9)))))
		{
			goto IL_0136;
		}
	}
	{
		int32_t L_64 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)1));
	}

IL_012c:
	{
		int32_t L_65 = V_1;
		int32_t L_66;
		L_66 = ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), /*hidden argument*/ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_RuntimeMethod_var);
		if ((!(((uint32_t)L_65) == ((uint32_t)L_66))))
		{
			goto IL_0116;
		}
	}

IL_0136:
	{
		int32_t L_67 = V_1;
		int32_t L_68 = V_14;
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_67, (int32_t)L_68));
		int32_t L_69 = V_14;
		V_15 = L_69;
		int32_t L_70 = V_2;
		if (L_70)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_0156;
	}

IL_0145:
	{
		NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * L_71 = ___number1;
		int32_t* L_72 = L_71->get_address_of_Scale_0();
		int32_t* L_73 = L_72;
		int32_t L_74 = *((int32_t*)L_73);
		*((int32_t*)L_73) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_74, (int32_t)1));
		int32_t L_75 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)1));
	}

IL_0156:
	{
		int32_t L_76 = V_15;
		int32_t L_77 = V_1;
		if ((((int32_t)L_76) >= ((int32_t)L_77)))
		{
			goto IL_0169;
		}
	}
	{
		int32_t L_78 = V_15;
		uint8_t* L_79;
		L_79 = ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), L_78, /*hidden argument*/ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_RuntimeMethod_var);
		int32_t L_80 = *((uint8_t*)L_79);
		if ((((int32_t)L_80) == ((int32_t)((int32_t)48))))
		{
			goto IL_0145;
		}
	}

IL_0169:
	{
		int32_t L_81 = V_1;
		int32_t L_82 = V_15;
		int32_t L_83 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_84;
		L_84 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574(((int32_t)il2cpp_codegen_subtract((int32_t)L_81, (int32_t)L_82)), ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)51), (int32_t)L_83)), (int32_t)1)), /*hidden argument*/NULL);
		V_16 = L_84;
		int32_t L_85 = V_15;
		int32_t L_86 = V_16;
		ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  L_87;
		L_87 = ReadOnlySpan_1_Slice_m750CD52402E65B69E811EF1A7245A9283C8EEFDE_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), L_85, L_86, /*hidden argument*/ReadOnlySpan_1_Slice_m750CD52402E65B69E811EF1A7245A9283C8EEFDE_RuntimeMethod_var);
		V_13 = L_87;
		int32_t L_88 = V_2;
		Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  L_89;
		L_89 = Span_1_Slice_mC8E25AC937B49CDD57AA85FF493D7F42595F8EAA_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&V_0), L_88, /*hidden argument*/Span_1_Slice_mC8E25AC937B49CDD57AA85FF493D7F42595F8EAA_RuntimeMethod_var);
		ReadOnlySpan_1_CopyTo_m4252FBCA62EB3368E39115E35C1E4D74B89C53DA((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&V_13), L_89, /*hidden argument*/ReadOnlySpan_1_CopyTo_m4252FBCA62EB3368E39115E35C1E4D74B89C53DA_RuntimeMethod_var);
		int32_t L_90 = V_2;
		int32_t L_91 = V_16;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_90, (int32_t)L_91));
		int32_t L_92 = V_1;
		int32_t L_93;
		L_93 = ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), /*hidden argument*/ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_RuntimeMethod_var);
		if ((!(((uint32_t)L_92) == ((uint32_t)L_93))))
		{
			goto IL_01b7;
		}
	}
	{
		int32_t L_94 = V_6;
		if (L_94)
		{
			goto IL_01b2;
		}
	}
	{
		int32_t L_95 = V_9;
		if (L_95)
		{
			goto IL_01b2;
		}
	}
	{
		int32_t* L_96 = ___bytesConsumed2;
		*((int32_t*)L_96) = (int32_t)0;
		return (bool)0;
	}

IL_01b2:
	{
		int32_t* L_97 = ___bytesConsumed2;
		int32_t L_98 = V_1;
		*((int32_t*)L_97) = (int32_t)L_98;
		return (bool)1;
	}

IL_01b7:
	{
		int32_t L_99 = V_6;
		if (L_99)
		{
			goto IL_01c4;
		}
	}
	{
		int32_t L_100 = V_9;
		if (L_100)
		{
			goto IL_01c4;
		}
	}
	{
		int32_t* L_101 = ___bytesConsumed2;
		*((int32_t*)L_101) = (int32_t)0;
		return (bool)0;
	}

IL_01c4:
	{
		uint8_t L_102 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_102&(int32_t)((int32_t)-33)))) == ((int32_t)((int32_t)69))))
		{
			goto IL_01d1;
		}
	}
	{
		int32_t* L_103 = ___bytesConsumed2;
		int32_t L_104 = V_1;
		*((int32_t*)L_103) = (int32_t)L_104;
		return (bool)1;
	}

IL_01d1:
	{
		bool* L_105 = ___textUsedExponentNotation4;
		*((int8_t*)L_105) = (int8_t)1;
		int32_t L_106 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_106, (int32_t)1));
		int32_t L_107 = ___options3;
		if (((int32_t)((int32_t)L_107&(int32_t)1)))
		{
			goto IL_01e3;
		}
	}
	{
		int32_t* L_108 = ___bytesConsumed2;
		*((int32_t*)L_108) = (int32_t)0;
		return (bool)0;
	}

IL_01e3:
	{
		int32_t L_109 = V_1;
		int32_t L_110;
		L_110 = ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), /*hidden argument*/ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_RuntimeMethod_var);
		if ((!(((uint32_t)L_109) == ((uint32_t)L_110))))
		{
			goto IL_01f2;
		}
	}
	{
		int32_t* L_111 = ___bytesConsumed2;
		*((int32_t*)L_111) = (int32_t)0;
		return (bool)0;
	}

IL_01f2:
	{
		V_10 = (bool)0;
		int32_t L_112 = V_1;
		uint8_t* L_113;
		L_113 = ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), L_112, /*hidden argument*/ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_RuntimeMethod_var);
		int32_t L_114 = *((uint8_t*)L_113);
		V_3 = (uint8_t)L_114;
		uint8_t L_115 = V_3;
		if ((((int32_t)L_115) == ((int32_t)((int32_t)43))))
		{
			goto IL_020c;
		}
	}
	{
		uint8_t L_116 = V_3;
		if ((!(((uint32_t)L_116) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0229;
		}
	}
	{
		V_10 = (bool)1;
	}

IL_020c:
	{
		int32_t L_117 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_117, (int32_t)1));
		int32_t L_118 = V_1;
		int32_t L_119;
		L_119 = ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), /*hidden argument*/ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_RuntimeMethod_var);
		if ((!(((uint32_t)L_118) == ((uint32_t)L_119))))
		{
			goto IL_021f;
		}
	}
	{
		int32_t* L_120 = ___bytesConsumed2;
		*((int32_t*)L_120) = (int32_t)0;
		return (bool)0;
	}

IL_021f:
	{
		int32_t L_121 = V_1;
		uint8_t* L_122;
		L_122 = ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), L_121, /*hidden argument*/ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_RuntimeMethod_var);
		int32_t L_123 = *((uint8_t*)L_122);
		V_3 = (uint8_t)L_123;
	}

IL_0229:
	{
		int32_t L_124 = V_1;
		ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  L_125;
		L_125 = ReadOnlySpan_1_Slice_m7069C54604C1694CDCF61CE35A3A09F55D9C9FDA_inline((ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 *)(&___source0), L_124, /*hidden argument*/ReadOnlySpan_1_Slice_m7069C54604C1694CDCF61CE35A3A09F55D9C9FDA_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Utf8Parser_tBAC6DC53DE4F4A96AE1B0E66D73BE343EFA379FC_il2cpp_TypeInfo_var);
		bool L_126;
		L_126 = Utf8Parser_TryParseUInt32D_m5F723DCD7B0E8614C4BC8DC76816B62AAFED195E(L_125, (uint32_t*)(&V_11), (int32_t*)(&V_12), /*hidden argument*/NULL);
		if (L_126)
		{
			goto IL_0241;
		}
	}
	{
		int32_t* L_127 = ___bytesConsumed2;
		*((int32_t*)L_127) = (int32_t)0;
		return (bool)0;
	}

IL_0241:
	{
		int32_t L_128 = V_1;
		int32_t L_129 = V_12;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_128, (int32_t)L_129));
		bool L_130 = V_10;
		if (!L_130)
		{
			goto IL_0278;
		}
	}
	{
		NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * L_131 = ___number1;
		int32_t L_132 = L_131->get_Scale_0();
		uint32_t L_133 = V_11;
		if ((((int64_t)((int64_t)((int64_t)L_132))) >= ((int64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)((int32_t)-2147483648LL))), (int64_t)((int64_t)((uint64_t)L_133)))))))
		{
			goto IL_026a;
		}
	}
	{
		NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * L_134 = ___number1;
		L_134->set_Scale_0(((int32_t)-2147483648LL));
		goto IL_029c;
	}

IL_026a:
	{
		NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * L_135 = ___number1;
		int32_t* L_136 = L_135->get_address_of_Scale_0();
		int32_t* L_137 = L_136;
		int32_t L_138 = *((int32_t*)L_137);
		uint32_t L_139 = V_11;
		*((int32_t*)L_137) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_138, (int32_t)L_139));
		goto IL_029c;
	}

IL_0278:
	{
		NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * L_140 = ___number1;
		int32_t L_141 = L_140->get_Scale_0();
		uint32_t L_142 = V_11;
		if ((((int64_t)((int64_t)((int64_t)L_141))) <= ((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)((int64_t)((int64_t)((int32_t)2147483647LL))), (int64_t)((int64_t)((uint64_t)L_142)))))))
		{
			goto IL_0290;
		}
	}
	{
		int32_t* L_143 = ___bytesConsumed2;
		*((int32_t*)L_143) = (int32_t)0;
		return (bool)0;
	}

IL_0290:
	{
		NumberBuffer_tD6FBB693792FD0F0DDBBD21B1D5D291DA001B437 * L_144 = ___number1;
		int32_t* L_145 = L_144->get_address_of_Scale_0();
		int32_t* L_146 = L_145;
		int32_t L_147 = *((int32_t*)L_146);
		uint32_t L_148 = V_11;
		*((int32_t*)L_146) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_147, (int32_t)L_148));
	}

IL_029c:
	{
		int32_t* L_149 = ___bytesConsumed2;
		int32_t L_150 = V_1;
		*((int32_t*)L_149) = (int32_t)L_150;
		return (bool)1;
	}
}
// System.Void System.Buffers.Text.Utf8Parser::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8Parser__cctor_m60590923BE3CD9DCD3E31445BC4773C99A9EBF61 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t2BE371A826DE714388CB1A6D368F18406BAB06B2____DD3AEFEADB1CD615F3017763F1568179FEE640B0_8_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t2BE371A826DE714388CB1A6D368F18406BAB06B2____E92B39D8233061927D9ACDE54665E68E7535635A_9_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Parser_tBAC6DC53DE4F4A96AE1B0E66D73BE343EFA379FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)13));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t2BE371A826DE714388CB1A6D368F18406BAB06B2____E92B39D8233061927D9ACDE54665E68E7535635A_9_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((Utf8Parser_tBAC6DC53DE4F4A96AE1B0E66D73BE343EFA379FC_StaticFields*)il2cpp_codegen_static_fields_for(Utf8Parser_tBAC6DC53DE4F4A96AE1B0E66D73BE343EFA379FC_il2cpp_TypeInfo_var))->set_s_daysToMonth365_0(L_1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)13));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = L_3;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t2BE371A826DE714388CB1A6D368F18406BAB06B2____DD3AEFEADB1CD615F3017763F1568179FEE640B0_8_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_4, L_5, /*hidden argument*/NULL);
		((Utf8Parser_tBAC6DC53DE4F4A96AE1B0E66D73BE343EFA379FC_StaticFields*)il2cpp_codegen_static_fields_for(Utf8Parser_tBAC6DC53DE4F4A96AE1B0E66D73BE343EFA379FC_il2cpp_TypeInfo_var))->set_s_daysToMonth366_1(L_4);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t BinaryPrimitives_ReverseEndianness_m7C562C76F215F77432B9600686CB25A54E88CC20_inline (uint32_t ___value0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint32_t L_0 = ___value0;
		V_0 = ((int32_t)((int32_t)L_0&(int32_t)((int32_t)16711935)));
		uint32_t L_1 = ___value0;
		V_1 = ((int32_t)((int32_t)L_1&(int32_t)((int32_t)-16711936)));
		uint32_t L_2 = V_0;
		uint32_t L_3 = V_0;
		uint32_t L_4 = V_1;
		uint32_t L_5 = V_1;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_2>>8))|(int32_t)((int32_t)((int32_t)L_3<<(int32_t)((int32_t)24))))), (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_4<<(int32_t)8))|(int32_t)((int32_t)((uint32_t)L_5>>((int32_t)24)))))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t BinaryPrimitives_ReverseEndianness_m6268D4E81221B0851A9F12D3446F3B488B804696_inline (uint64_t ___value0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___value0;
		uint32_t L_1;
		L_1 = BinaryPrimitives_ReverseEndianness_m7C562C76F215F77432B9600686CB25A54E88CC20_inline(((int32_t)((uint32_t)L_0)), /*hidden argument*/NULL);
		uint64_t L_2 = ___value0;
		uint32_t L_3;
		L_3 = BinaryPrimitives_ReverseEndianness_m7C562C76F215F77432B9600686CB25A54E88CC20_inline(((int32_t)((uint32_t)((int64_t)((uint64_t)L_2>>((int32_t)32))))), /*hidden argument*/NULL);
		return ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_1))<<(int32_t)((int32_t)32))), (int64_t)((int64_t)((uint64_t)L_3))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * SR_get_ResourceType_mA677195FD1721150495B84739EFFDCB9366A5541_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var);
		Type_t * L_0 = ((SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_StaticFields*)il2cpp_codegen_static_fields_for(SR_t94D205E4C64F03235C41D368F8B5C3D4840D03CF_il2cpp_TypeInfo_var))->get_U3CResourceTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * SequencePosition_GetObject_m33D4D02B2042DFCCC2549006639381910F1F3525_inline (SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get__object_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SequencePosition_GetInteger_mE4D2683EB441F31A3C1474845ABBD0FA78C130DE_inline (SequencePosition_t60FFA8E61B4E8F902C0B0F1F6DC4494561396F2A * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__integer_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  SpanHelpers_GetVector_mB6C94E0B80F7E5A77D84E2B202C1B8DD742E9FD9_inline (uint8_t ___vectorByte0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1__ctor_m91A33CB1C548BFAC5BB414B8F5CAE0E156EF269E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_AsVectorByte_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m372B582B265FA776E8B53D51A552A9743572F82B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t L_0 = ___vectorByte0;
		Vector_1_tF47DE392A41397C167EDBF371E6B4E8AA79D7030  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector_1__ctor_m91A33CB1C548BFAC5BB414B8F5CAE0E156EF269E((&L_1), ((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)16843009))), /*hidden argument*/Vector_1__ctor_m91A33CB1C548BFAC5BB414B8F5CAE0E156EF269E_RuntimeMethod_var);
		Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  L_2;
		L_2 = Vector_AsVectorByte_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m372B582B265FA776E8B53D51A552A9743572F82B_inline(L_1, /*hidden argument*/Vector_AsVectorByte_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m372B582B265FA776E8B53D51A552A9743572F82B_RuntimeMethod_var);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SpanHelpers_LocateFirstFoundByte_m419FAFA78D34AB13ADED0E04C54AD68D69551E83_inline (Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  ___match0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1_get_Count_m0A3F1124AD2731436A2A593F00FC37F717CD6CCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1_get_Item_mEB12DE8C060BF68B5D7CEC3DB61FA217DEC41080_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_AsVectorUInt64_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mC567616F831B415B272343591343975A63D69EFC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint64_t V_1 = 0;
	int32_t V_2 = 0;
	{
		Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  L_0 = ___match0;
		Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B  L_1;
		L_1 = Vector_AsVectorUInt64_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mC567616F831B415B272343591343975A63D69EFC_inline(L_0, /*hidden argument*/Vector_AsVectorUInt64_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mC567616F831B415B272343591343975A63D69EFC_RuntimeMethod_var);
		V_0 = L_1;
		V_1 = ((int64_t)((int64_t)0));
		V_2 = 0;
		goto IL_001e;
	}

IL_000e:
	{
		int32_t L_2 = V_2;
		uint64_t L_3;
		L_3 = Vector_1_get_Item_mEB12DE8C060BF68B5D7CEC3DB61FA217DEC41080((Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B *)(&V_0), L_2, /*hidden argument*/Vector_1_get_Item_mEB12DE8C060BF68B5D7CEC3DB61FA217DEC41080_RuntimeMethod_var);
		V_1 = L_3;
		uint64_t L_4 = V_1;
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_5 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_001e:
	{
		int32_t L_6 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Vector_1_get_Count_m0A3F1124AD2731436A2A593F00FC37F717CD6CCB_inline(/*hidden argument*/Vector_1_get_Count_m0A3F1124AD2731436A2A593F00FC37F717CD6CCB_RuntimeMethod_var);
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_000e;
		}
	}

IL_0026:
	{
		int32_t L_8 = V_2;
		uint64_t L_9 = V_1;
		int32_t L_10;
		L_10 = SpanHelpers_LocateFirstFoundByte_m6AEEBF64B95585D577D0041CE56E0BE6F28AEFE4_inline(L_9, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)8)), (int32_t)L_10));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NUInt_op_Explicit_mAC8186F05FC1F16BAEB9A73957491CB24A067D46_inline (NUInt_t6097F6D5A9138404C7786F1B3E1654AD18E030F5  ___value0, const RuntimeMethod* method)
{
	{
		NUInt_t6097F6D5A9138404C7786F1B3E1654AD18E030F5  L_0 = ___value0;
		void* L_1 = L_0.get__value_0();
		return (void*)(L_1);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SpanHelpers_LocateFirstFoundByte_m6AEEBF64B95585D577D0041CE56E0BE6F28AEFE4_inline (uint64_t ___match0, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		uint64_t L_0 = ___match0;
		uint64_t L_1 = ___match0;
		V_0 = ((int64_t)((int64_t)L_0^(int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_1, (int64_t)((int64_t)((int64_t)1))))));
		uint64_t L_2 = V_0;
		return ((int32_t)((int32_t)((int64_t)((uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_2, (int64_t)((int64_t)283686952306184LL)))>>((int32_t)57)))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SpanHelpers_LocateFirstFoundChar_m6F7002BE58BB1D79412002F2AEF2E430F8720F97_inline (Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  ___match0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1_get_Count_m0A3F1124AD2731436A2A593F00FC37F717CD6CCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1_get_Item_mEB12DE8C060BF68B5D7CEC3DB61FA217DEC41080_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_AsVectorUInt64_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_mC04146E01E097E2AAA1EB93B5D9384A22541DF08_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint64_t V_1 = 0;
	int32_t V_2 = 0;
	{
		Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  L_0 = ___match0;
		Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B  L_1;
		L_1 = Vector_AsVectorUInt64_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_mC04146E01E097E2AAA1EB93B5D9384A22541DF08_inline(L_0, /*hidden argument*/Vector_AsVectorUInt64_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_mC04146E01E097E2AAA1EB93B5D9384A22541DF08_RuntimeMethod_var);
		V_0 = L_1;
		V_1 = ((int64_t)((int64_t)0));
		V_2 = 0;
		goto IL_001e;
	}

IL_000e:
	{
		int32_t L_2 = V_2;
		uint64_t L_3;
		L_3 = Vector_1_get_Item_mEB12DE8C060BF68B5D7CEC3DB61FA217DEC41080((Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B *)(&V_0), L_2, /*hidden argument*/Vector_1_get_Item_mEB12DE8C060BF68B5D7CEC3DB61FA217DEC41080_RuntimeMethod_var);
		V_1 = L_3;
		uint64_t L_4 = V_1;
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_5 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_001e:
	{
		int32_t L_6 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Vector_1_get_Count_m0A3F1124AD2731436A2A593F00FC37F717CD6CCB_inline(/*hidden argument*/Vector_1_get_Count_m0A3F1124AD2731436A2A593F00FC37F717CD6CCB_RuntimeMethod_var);
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_000e;
		}
	}

IL_0026:
	{
		int32_t L_8 = V_2;
		uint64_t L_9 = V_1;
		int32_t L_10;
		L_10 = SpanHelpers_LocateFirstFoundChar_m7B3D3FD47EB5BA8837CE3E8CE2D2BBA7BFC62CE3_inline(L_9, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)4)), (int32_t)L_10));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SpanHelpers_LocateFirstFoundChar_m7B3D3FD47EB5BA8837CE3E8CE2D2BBA7BFC62CE3_inline (uint64_t ___match0, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		uint64_t L_0 = ___match0;
		uint64_t L_1 = ___match0;
		V_0 = ((int64_t)((int64_t)L_0^(int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_1, (int64_t)((int64_t)((int64_t)1))))));
		uint64_t L_2 = V_0;
		return ((int32_t)((int32_t)((int64_t)((uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_2, (int64_t)((int64_t)4295098372LL)))>>((int32_t)49)))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Unsafe_InitBlockUnaligned_m052F07F8475562B2C26782A0926C742F718BDA22_inline (void* ___startAddress0, uint8_t ___value1, uint32_t ___byteCount2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___startAddress0;
		uint8_t L_1 = ___value1;
		uint32_t L_2 = ___byteCount2;
		il2cpp_codegen_memset(L_0, L_1, L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Unsafe_InitBlockUnaligned_m19BEDC2C614CA372758548BB4D1622F8CC53FF4F_inline (uint8_t* ___startAddress0, uint8_t ___value1, uint32_t ___byteCount2, const RuntimeMethod* method)
{
	{
		uint8_t* L_0 = ___startAddress0;
		uint8_t L_1 = ___value1;
		uint32_t L_2 = ___byteCount2;
		il2cpp_codegen_memset(L_0, L_1, L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_LessThanEqual_mCFA5E9CC05F428B1EDA65967FEF81267F917E88C_inline (intptr_t ___index0, uintptr_t ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = sizeof(uintptr_t);
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_001b;
		}
	}
	{
		intptr_t L_1 = ___index0;
		int64_t L_2;
		L_2 = IntPtr_op_Explicit_m17B168C05CF9F2917BC28FA8AF6F4F3281C377EB((intptr_t)L_1, /*hidden argument*/NULL);
		uintptr_t L_3 = ___length1;
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uint64_t L_4;
		L_4 = UIntPtr_op_Explicit_mEEA1D4A964FBFCC95BE2B91ADDD52EF7067C312D(L_3, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int64_t)L_2) > ((int64_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_001b:
	{
		intptr_t L_5 = ___index0;
		int32_t L_6;
		L_6 = IntPtr_op_Explicit_m9C2CBDF65A4D7B2C0DCF4D38A4174A2CC07A18E3((intptr_t)L_5, /*hidden argument*/NULL);
		uintptr_t L_7 = ___length1;
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uint32_t L_8;
		L_8 = UIntPtr_op_Explicit_m8EF5FC1C0CAF58F8F2310C0D989F20F0694CD7CF(L_7, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_6) > ((int32_t)L_8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar StandardFormat_get_Symbol_mF8A6168808E4EEB455E2F8695DD243231285B0F2_inline (StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get__format_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t StandardFormat_get_Precision_m0080A4421E19B1702147DF794C3D4C2D1035C5B6_inline (StandardFormat_tB5005E6AF2D93B04019AB36BA6FA33F29CB45E12 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get__precision_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ParserHelpers_IsDigit_m741C974EC477EA1F49439BA55D1C3142EA1D784D_inline (int32_t ___i0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___i0;
		return (bool)((((int32_t)((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)((int32_t)48)))) <= ((uint32_t)((int32_t)9))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlyMemory_1__ctor_m0DAE24A1907E131407ECEAE406269A6A57999CFA_gshared_inline (ReadOnlyMemory_1_t8210C81C55F6DD2001CB109C5F2BA0DA96F947DE * __this, RuntimeObject * ___obj0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		__this->set__object_0(L_0);
		int32_t L_1 = ___start1;
		__this->set__index_1(L_1);
		int32_t L_2 = ___length2;
		__this->set__length_2(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Unsafe_As_TisRuntimeObject_mB69494631721B5C97E5C8DFF3FB8B4E570B214AE_gshared_inline (RuntimeObject * ___o0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___o0;
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_AsRef_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m0D4660657D5ED75911BE5AB9BFF6B695957BAB9B_gshared_inline (void* ___source0, const RuntimeMethod* method)
{
	int32_t* V_0 = NULL;
	{
		void* L_0 = ___source0;
		V_0 = (int32_t*)L_0;
		int32_t* L_1 = V_0;
		return (Il2CppChar*)(L_1);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t Unsafe_ByteOffset_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m13722CE0E9DE760114AB69C5D315B218541FFA6E_gshared_inline (Il2CppChar* ___origin0, Il2CppChar* ___target1, const RuntimeMethod* method)
{
	{
		Il2CppChar* L_0 = ___target1;
		Il2CppChar* L_1 = ___origin0;
		return (intptr_t)((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)L_0, (intptr_t)L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * ReadOnlyMemory_1_GetObjectStartLength_m9D3D7EA6E312C2FD16F180B249FCB80CB1DFDECF_gshared_inline (ReadOnlyMemory_1_t8210C81C55F6DD2001CB109C5F2BA0DA96F947DE * __this, int32_t* ___start0, int32_t* ___length1, const RuntimeMethod* method)
{
	{
		int32_t* L_0 = ___start0;
		int32_t L_1 = (int32_t)__this->get__index_1();
		*((int32_t*)L_0) = (int32_t)L_1;
		int32_t* L_2 = ___length1;
		int32_t L_3 = (int32_t)__this->get__length_2();
		*((int32_t*)L_2) = (int32_t)L_3;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get__object_0();
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Span_1_get_Item_m0F5333BBEFD0BCEDCD9AF51C8F1052707C11CD66_gshared_inline (Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__length_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m4D1EB8558F17DFE372ECF87D9BCAD112A7F5E6BC(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 * L_2 = (Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 *)__this->get__pinnable_0();
		if (L_2)
		{
			goto IL_0030;
		}
	}
	{
		intptr_t L_3 = (intptr_t)__this->get__byteOffset_1();
		V_0 = (intptr_t)L_3;
		void* L_4;
		L_4 = IntPtr_ToPointer_m5C7CE32B14B6E30467B378052FEA25300833C61F_inline((intptr_t*)(intptr_t*)(&V_0), /*hidden argument*/NULL);
		uint8_t* L_5;
		L_5 = ((  uint8_t* (*) (void*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 18)->methodPointer)((void*)(void*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		int32_t L_6 = ___index0;
		uint8_t* L_7;
		L_7 = ((  uint8_t* (*) (uint8_t*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 19)->methodPointer)((uint8_t*)(uint8_t*)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return (uint8_t*)(L_7);
	}

IL_0030:
	{
		Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 * L_8 = (Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 *)__this->get__pinnable_0();
		NullCheck(L_8);
		uint8_t* L_9 = (uint8_t*)L_8->get_address_of_Data_0();
		intptr_t L_10 = (intptr_t)__this->get__byteOffset_1();
		uint8_t* L_11;
		L_11 = ((  uint8_t* (*) (uint8_t*, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 20)->methodPointer)((uint8_t*)(uint8_t*)L_9, (intptr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		int32_t L_12 = ___index0;
		uint8_t* L_13;
		L_13 = ((  uint8_t* (*) (uint8_t*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 19)->methodPointer)((uint8_t*)(uint8_t*)L_11, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return (uint8_t*)(L_13);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * Unsafe_As_TisMutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D_TisDecimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_mE2A3068F655E44854F360A5B8315CFA5A9A7706C_gshared_inline (MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * ___source0, const RuntimeMethod* method)
{
	{
		MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * L_0 = ___source0;
		return (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 *)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D * Unsafe_As_TisDecimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_TisMutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D_mF24EB96C9EC3B1D2268AD5413133398FE712084E_gshared_inline (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * ___source0, const RuntimeMethod* method)
{
	{
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * L_0 = ___source0;
		return (MutableDecimal_tC0A8982CB53168FAD3C424361CB4884E0EF2551D *)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* Unsafe_AsPointer_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m4D8C6780EB1987171FBA08936AA2C2F9631031C7_gshared_inline (uint8_t* ___value0, const RuntimeMethod* method)
{
	{
		uint8_t* L_0 = ___value0;
		return (void*)(((uintptr_t)L_0));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m776684B7035275EC1AA7A23157CFEE0E596AE782_gshared_inline (Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 * __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = ((  bool (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 16)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 17)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_m4A71872D4B069AF36758A61E4CA3FB663B4E8EC4((Type_t *)L_2, /*hidden argument*/NULL);
	}

IL_0016:
	{
		int32_t L_3 = ___length1;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m86EB6B05BDE45B6F92A7599E80E0179C17391AB5((int32_t)1, /*hidden argument*/NULL);
	}

IL_0020:
	{
		int32_t L_4 = ___length1;
		__this->set__length_2(L_4);
		__this->set__pinnable_0((Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 *)NULL);
		void* L_5 = ___pointer0;
		intptr_t L_6;
		memset((&L_6), 0, sizeof(L_6));
		IntPtr__ctor_mBB7AF6DA6350129AD6422DE474FD52F715CC0C40_inline((&L_6), (void*)(void*)L_5, /*hidden argument*/NULL);
		__this->set__byteOffset_1((intptr_t)L_6);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MemoryExtensions_IndexOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m16C2BDD6B446AEB6579BC57176D87011B59FBFCD_gshared_inline (Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  ___span0, uint8_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_2, /*hidden argument*/NULL);
		bool L_4;
		L_4 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_1, (Type_t *)L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  L_5 = ___span0;
		uint8_t* L_6;
		L_6 = ((  uint8_t* (*) (Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 )L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		uint8_t* L_7;
		L_7 = ((  uint8_t* (*) (uint8_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((uint8_t*)(uint8_t*)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		uint8_t* L_8;
		L_8 = ((  uint8_t* (*) (uint8_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((uint8_t*)(uint8_t*)(&___value1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		int32_t L_9 = *((uint8_t*)L_8);
		int32_t L_10;
		L_10 = Span_1_get_Length_m4BFDA5E41279728ADF75E310F780E357ECB1923B_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&___span0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		int32_t L_11;
		L_11 = SpanHelpers_IndexOf_m996881920138B2EC72C814473789D6AB958B92F2((uint8_t*)(uint8_t*)L_7, (uint8_t)L_9, (int32_t)L_10, /*hidden argument*/NULL);
		return (int32_t)L_11;
	}

IL_003b:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_12 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_13;
		L_13 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_12, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_14 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		Type_t * L_15;
		L_15 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_14, /*hidden argument*/NULL);
		bool L_16;
		L_16 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_13, (Type_t *)L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0076;
		}
	}
	{
		Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  L_17 = ___span0;
		uint8_t* L_18;
		L_18 = ((  uint8_t* (*) (Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 )L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		Il2CppChar* L_19;
		L_19 = ((  Il2CppChar* (*) (uint8_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((uint8_t*)(uint8_t*)L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		Il2CppChar* L_20;
		L_20 = ((  Il2CppChar* (*) (uint8_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((uint8_t*)(uint8_t*)(&___value1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		int32_t L_21 = *((uint16_t*)L_20);
		int32_t L_22;
		L_22 = Span_1_get_Length_m4BFDA5E41279728ADF75E310F780E357ECB1923B_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&___span0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		int32_t L_23;
		L_23 = SpanHelpers_IndexOf_m0740DDBBE5723E3595EADF2552551F636C18A259((Il2CppChar*)(Il2CppChar*)L_19, (Il2CppChar)L_21, (int32_t)L_22, /*hidden argument*/NULL);
		return (int32_t)L_23;
	}

IL_0076:
	{
		Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  L_24 = ___span0;
		uint8_t* L_25;
		L_25 = ((  uint8_t* (*) (Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 )L_24, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		uint8_t L_26 = ___value1;
		int32_t L_27;
		L_27 = Span_1_get_Length_m4BFDA5E41279728ADF75E310F780E357ECB1923B_inline((Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 *)(&___span0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		int32_t L_28;
		L_28 = ((  int32_t (*) (uint8_t*, uint8_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((uint8_t*)(uint8_t*)L_25, (uint8_t)L_26, (int32_t)L_27, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		return (int32_t)L_28;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_m6F1F8DDBF49AFE0B82F12C94AA096F26FA8DBC37_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_0 = ((Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_s_count_1();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m7C7965958B63A51E4200A7C4A00E452C2E216286_gshared_inline (uint8_t* ___source0, intptr_t ___byteOffset1, const RuntimeMethod* method)
{
	{
		uint8_t* L_0 = ___source0;
		intptr_t L_1 = ___byteOffset1;
		return (uint8_t*)(((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)L_1)));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  Vector_Equals_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mD81667356EC7F90AAC00124EAD110C46700DBAA5_gshared_inline (Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  ___left0, Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  ___right1, const RuntimeMethod* method)
{
	{
		Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  L_0 = ___left0;
		Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  L_1 = ___right1;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  L_2;
		L_2 = ((  Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  (*) (Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08 , Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08 )L_0, (Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08 )L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  Vector_1_get_Zero_m9CA624B7E05E36937BB783931B77F8E607C4A074_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  L_0 = ((Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_zero_2();
		return (Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Unsafe_AreSame_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m432CDE821F63BC587F0A2EF35562935875F9C5DA_gshared_inline (uint8_t* ___left0, uint8_t* ___right1, const RuntimeMethod* method)
{
	{
		uint8_t* L_0 = ___left0;
		uint8_t* L_1 = ___right1;
		return (bool)((((RuntimeObject*)(intptr_t)L_0) == ((RuntimeObject*)(intptr_t)L_1))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_op_Inequality_mBA4346A92E18E027DD3E765840093720AFBE15E3_gshared_inline (Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  ___left0, Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  ___right1, const RuntimeMethod* method)
{
	{
		Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  L_0 = ___left0;
		Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  L_1 = ___right1;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		bool L_2;
		L_2 = ((  bool (*) (Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08 , Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 10)->methodPointer)((Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08 )L_0, (Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_op_Equality_mD995A6FD72036B2C240A912C4AA19D5701A43D18_gshared_inline (Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  ___left0, Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  ___right1, const RuntimeMethod* method)
{
	{
		Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  L_0 = ___right1;
		bool L_1;
		L_1 = Vector_1_Equals_mAD33337AD07ECF6DF2BC0F1008BC963251A9A96B((Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08 *)(Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08 *)(&___left0), (Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return (bool)L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B  Vector_AsVectorUInt64_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mC567616F831B415B272343591343975A63D69EFC_gshared_inline (Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  ___value0, const RuntimeMethod* method)
{
	{
		Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B  L_1;
		L_1 = ((  Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B  (*) (Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B )L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_m0A3F1124AD2731436A2A593F00FC37F717CD6CCB_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_0 = ((Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_s_count_1();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  Vector_AsVectorByte_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m372B582B265FA776E8B53D51A552A9743572F82B_gshared_inline (Vector_1_tF47DE392A41397C167EDBF371E6B4E8AA79D7030  ___value0, const RuntimeMethod* method)
{
	{
		Vector_1_tF47DE392A41397C167EDBF371E6B4E8AA79D7030  L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  L_1;
		L_1 = ((  Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08  (*) (Vector_1_tF47DE392A41397C167EDBF371E6B4E8AA79D7030 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Vector_1_tF47DE392A41397C167EDBF371E6B4E8AA79D7030 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (Vector_1_tD1EF25D461FB9D20FD7903BE820EAFF46D7E1E08 )L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_m08C2BE69EF27B3ABF0C49C66D4EBD63DB4CEBD69_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_0 = ((Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_s_count_1();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisVector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC_m630621324270B1BB57F6A7D0A02C0E4C8218FB7A_gshared_inline (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC );
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  Unsafe_Read_TisVector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC_m80308A9BAF3E599D0E46C16D30B25F6DBBA8983F_gshared_inline (void* ___source0, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  L_1 = (*(Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC *)L_0);
		return (Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC )L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  Vector_Equals_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_mC5EF21D75B8379A25C2F8EABEFC56653DEE6DF25_gshared_inline (Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  ___left0, Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  ___right1, const RuntimeMethod* method)
{
	{
		Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  L_0 = ___left0;
		Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  L_1 = ___right1;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  L_2;
		L_2 = ((  Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  (*) (Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC , Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC )L_0, (Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC )L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  Vector_1_get_Zero_m16C1E63064B0566B3729C7A6EAA36DB3BF4B35D8_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  L_0 = ((Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_zero_2();
		return (Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B  Vector_AsVectorUInt64_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_mC04146E01E097E2AAA1EB93B5D9384A22541DF08_gshared_inline (Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  ___value0, const RuntimeMethod* method)
{
	{
		Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC  L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B  L_1;
		L_1 = ((  Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B  (*) (Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Vector_1_t85DE05DDCDD3D6F78A4C55C74DB9003261770FCC )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (Vector_1_tF4DC12655C59C33448DF32EAECB802130DC6384B )L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Unsafe_Add_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m9ABE4DAAE83872C0A6C84A181092107B74F1D8A7_gshared_inline (uint8_t* ___source0, intptr_t ___elementOffset1, const RuntimeMethod* method)
{
	{
		uint8_t* L_0 = ___source0;
		intptr_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(uint8_t);
		return (uint8_t*)(((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)L_1, (int32_t)L_2)))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Reg64_t4A40DA33D6F4C8FB3A17A3B3D9E6FB5B1FEEE9B3 * Unsafe_As_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisReg64_t4A40DA33D6F4C8FB3A17A3B3D9E6FB5B1FEEE9B3_m88C65D2DA086C658FD4F56AAD9F8E156C070FBEF_gshared_inline (uint8_t* ___source0, const RuntimeMethod* method)
{
	{
		uint8_t* L_0 = ___source0;
		return (Reg64_t4A40DA33D6F4C8FB3A17A3B3D9E6FB5B1FEEE9B3 *)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Reg32_tA8676F8C245F150C7985C4A3BC3CD44E58D3B923 * Unsafe_As_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisReg32_tA8676F8C245F150C7985C4A3BC3CD44E58D3B923_m820456769F6EA3078E6F4C2AF4CF5C885B0B9D60_gshared_inline (uint8_t* ___source0, const RuntimeMethod* method)
{
	{
		uint8_t* L_0 = ___source0;
		return (Reg32_tA8676F8C245F150C7985C4A3BC3CD44E58D3B923 *)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Reg16_t8B2CE150B820232BE56C005C405133CCA7A58CD4 * Unsafe_As_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisReg16_t8B2CE150B820232BE56C005C405133CCA7A58CD4_mE8689C68ADE79915D3B986C19516728B2E4740DF_gshared_inline (uint8_t* ___source0, const RuntimeMethod* method)
{
	{
		uint8_t* L_0 = ___source0;
		return (Reg16_t8B2CE150B820232BE56C005C405133CCA7A58CD4 *)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t* Unsafe_As_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m4AA2C39DA9491860F8AD8CBAD08F187AA089ACEA_gshared_inline (uint8_t* ___source0, const RuntimeMethod* method)
{
	{
		uint8_t* L_0 = ___source0;
		return (int64_t*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t* Unsafe_As_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mB9705B879316869DF89311F9ADB5B6BEE2629DC6_gshared_inline (uint8_t* ___source0, const RuntimeMethod* method)
{
	{
		uint8_t* L_0 = ___source0;
		return (int32_t*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t* Unsafe_Add_TisIntPtr_t_mB992699F82D75AE06CED0336266F16A57402FB19_gshared_inline (intptr_t* ___source0, intptr_t ___elementOffset1, const RuntimeMethod* method)
{
	{
		intptr_t* L_0 = ___source0;
		intptr_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(intptr_t);
		return (intptr_t*)(((intptr_t*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)L_1, (int32_t)L_2)))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m4BFDA5E41279728ADF75E310F780E357ECB1923B_gshared_inline (Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__length_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* ReadOnlySpan_1_get_Item_mE3BE74D0A8EC153C6044C7584B0350208AA48B57_gshared_inline (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__length_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m4D1EB8558F17DFE372ECF87D9BCAD112A7F5E6BC(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 * L_2 = (Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 *)__this->get__pinnable_0();
		if (L_2)
		{
			goto IL_0030;
		}
	}
	{
		intptr_t L_3 = (intptr_t)__this->get__byteOffset_1();
		V_0 = (intptr_t)L_3;
		void* L_4;
		L_4 = IntPtr_ToPointer_m5C7CE32B14B6E30467B378052FEA25300833C61F_inline((intptr_t*)(intptr_t*)(&V_0), /*hidden argument*/NULL);
		uint8_t* L_5;
		L_5 = ((  uint8_t* (*) (void*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 15)->methodPointer)((void*)(void*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		int32_t L_6 = ___index0;
		uint8_t* L_7;
		L_7 = ((  uint8_t* (*) (uint8_t*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 16)->methodPointer)((uint8_t*)(uint8_t*)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return (uint8_t*)L_7;
	}

IL_0030:
	{
		Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 * L_8 = (Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 *)__this->get__pinnable_0();
		NullCheck(L_8);
		uint8_t* L_9 = (uint8_t*)L_8->get_address_of_Data_0();
		intptr_t L_10 = (intptr_t)__this->get__byteOffset_1();
		uint8_t* L_11;
		L_11 = ((  uint8_t* (*) (uint8_t*, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17)->methodPointer)((uint8_t*)(uint8_t*)L_9, (intptr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		int32_t L_12 = ___index0;
		uint8_t* L_13;
		L_13 = ((  uint8_t* (*) (uint8_t*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 16)->methodPointer)((uint8_t*)(uint8_t*)L_11, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return (uint8_t*)L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m0D02A059B63020F14BCD1DDD5F72D4EBA34B3955_gshared_inline (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__length_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  ReadOnlySpan_1_Slice_m750CD52402E65B69E811EF1A7245A9283C8EEFDE_gshared_inline (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 * __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = (int32_t)__this->get__length_2();
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___length1;
		int32_t L_3 = (int32_t)__this->get__length_2();
		int32_t L_4 = ___start0;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)L_4))))))
		{
			goto IL_001a;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m86EB6B05BDE45B6F92A7599E80E0179C17391AB5((int32_t)1, /*hidden argument*/NULL);
	}

IL_001a:
	{
		intptr_t L_5 = (intptr_t)__this->get__byteOffset_1();
		int32_t L_6 = ___start0;
		intptr_t L_7;
		L_7 = ((  intptr_t (*) (intptr_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12)->methodPointer)((intptr_t)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		V_0 = (intptr_t)L_7;
		Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 * L_8 = (Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 *)__this->get__pinnable_0();
		intptr_t L_9 = V_0;
		int32_t L_10 = ___length1;
		ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  L_11;
		memset((&L_11), 0, sizeof(L_11));
		ReadOnlySpan_1__ctor_m4CA9E88EFFD291B2EC7CA13E284B5E77D1EF0994_inline((&L_11), (Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 *)L_8, (intptr_t)L_9, (int32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 25));
		return (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 )L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  Span_1_Slice_mC8E25AC937B49CDD57AA85FF493D7F42595F8EAA_gshared_inline (Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 * __this, int32_t ___start0, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = (int32_t)__this->get__length_2();
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m86EB6B05BDE45B6F92A7599E80E0179C17391AB5((int32_t)1, /*hidden argument*/NULL);
	}

IL_000f:
	{
		intptr_t L_2 = (intptr_t)__this->get__byteOffset_1();
		int32_t L_3 = ___start0;
		intptr_t L_4;
		L_4 = ((  intptr_t (*) (intptr_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14)->methodPointer)((intptr_t)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_0 = (intptr_t)L_4;
		int32_t L_5 = (int32_t)__this->get__length_2();
		int32_t L_6 = ___start0;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)L_6));
		Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 * L_7 = (Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 *)__this->get__pinnable_0();
		intptr_t L_8 = V_0;
		int32_t L_9 = V_1;
		Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mFF8F544A7E3798F8239A0FEB4D32301758CBFCCA_inline((&L_10), (Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 *)L_7, (intptr_t)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return (Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 )L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  ReadOnlySpan_1_Slice_m7069C54604C1694CDCF61CE35A3A09F55D9C9FDA_gshared_inline (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 * __this, int32_t ___start0, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = (int32_t)__this->get__length_2();
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m86EB6B05BDE45B6F92A7599E80E0179C17391AB5((int32_t)1, /*hidden argument*/NULL);
	}

IL_000f:
	{
		intptr_t L_2 = (intptr_t)__this->get__byteOffset_1();
		int32_t L_3 = ___start0;
		intptr_t L_4;
		L_4 = ((  intptr_t (*) (intptr_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12)->methodPointer)((intptr_t)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		V_0 = (intptr_t)L_4;
		int32_t L_5 = (int32_t)__this->get__length_2();
		int32_t L_6 = ___start0;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)L_6));
		Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 * L_7 = (Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 *)__this->get__pinnable_0();
		intptr_t L_8 = V_0;
		int32_t L_9 = V_1;
		ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726  L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m4CA9E88EFFD291B2EC7CA13E284B5E77D1EF0994_inline((&L_10), (Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 *)L_7, (intptr_t)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 25));
		return (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 )L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m5C7CE32B14B6E30467B378052FEA25300833C61F_inline (intptr_t* __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_mBB7AF6DA6350129AD6422DE474FD52F715CC0C40_inline (intptr_t* __this, void* ___value0, const RuntimeMethod* method)
{
	{
		void* L_0 = ___value0;
		*__this = ((intptr_t)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m4CA9E88EFFD291B2EC7CA13E284B5E77D1EF0994_gshared_inline (ReadOnlySpan_1_t03DDF1A13DD7F8143C692DB7B68817A086932726 * __this, Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 * ___pinnable0, intptr_t ___byteOffset1, int32_t ___length2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___length2;
		__this->set__length_2(L_0);
		Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 * L_1 = ___pinnable0;
		__this->set__pinnable_0(L_1);
		intptr_t L_2 = ___byteOffset1;
		__this->set__byteOffset_1((intptr_t)L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mFF8F544A7E3798F8239A0FEB4D32301758CBFCCA_gshared_inline (Span_1_tA2AD9FB303A0BA36B1129534451F6EAE74DFEA83 * __this, Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 * ___pinnable0, intptr_t ___byteOffset1, int32_t ___length2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___length2;
		__this->set__length_2(L_0);
		Pinnable_1_t3FA89DC88CD7499604577377AB0B618C80108110 * L_1 = ___pinnable0;
		__this->set__pinnable_0(L_1);
		intptr_t L_2 = ___byteOffset1;
		__this->set__byteOffset_1((intptr_t)L_2);
		return;
	}
}
