#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs>
struct Action_1_t2010A517B3537EF3B4D41177377C7645A9C4439C;
// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs>
struct Action_1_t5DF84322FFE12A24465E48164961CD724D109521;
// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs>
struct Action_1_t46163F69D18A4B5D9D9C98AE7CB0AE73A82DCF10;
// System.Comparison`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>
struct Comparison_1_t880AB8C634CD664978C9A65AAA7050155FD6181C;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARAnchor>
struct Dictionary_2_t31868ABD2D8EA88442789687465039D339583446;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>
struct List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>
struct List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem>
struct List_1_tFFEC9D401CE39D3C812C896B17B35D57DDF6E440;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor>
struct List_1_tDED98C236097B36F9015B396398179A6F8A62E50;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct List_1_tDA25459A722F5B00FFE84463D9952660BC3F6673;
// System.Predicate`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>
struct Predicate_1_t8C8EB8CFC5F8234D0EC9F5AB760FA7AF6DDF2070;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory[]
struct GeospatialAnchorHistoryU5BU5D_t7FF762CECB07BB90EC3E0518C4C46251E34419FD;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.XR.ARFoundation.ARAnchorManager
struct ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F;
// UnityEngine.XR.ARFoundation.ARCameraManager
struct ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874;
// UnityEngine.XR.ARCore.ARCoreCameraSubsystem
struct ARCoreCameraSubsystem_tE13501E322AB598EC6E014497B61F65F35BD348C;
// Google.XR.ARCoreExtensions.ARCoreExtensions
struct ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB;
// Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter
struct ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223;
// Google.XR.ARCoreExtensions.ARCoreExtensionsConfig
struct ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8;
// UnityEngine.XR.ARCore.ARCoreSessionSubsystem
struct ARCoreSessionSubsystem_tFF74CE3FF58D5BB9130DF221576CF1EFD23BF375;
// Google.XR.ARCoreExtensions.AREarthManager
struct AREarthManager_tC7BD26586198E227BFD80ED37AE297887DA20519;
// Google.XR.ARCoreExtensions.ARGeospatialAnchor
struct ARGeospatialAnchor_tF7BD994A88D37D4DAADC1958C201114E6BDE8A3B;
// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistoryCollection
struct GeospatialAnchorHistoryCollection_t36DBFC64D28A956FECCE7DD20DE5E7B7A53F9645;
// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController
struct GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// UnityEngine.LocationService
struct LocationService_tDCB7C3AA7A10C4727D49676FD3A902F48C27F855;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// Rotate
struct Rotate_tC69B3ABBABA1DB1DFD96A92633DF3743CBB57789;
// Google.XR.ARCoreExtensions.Samples.Geospatial.SafeAreaScaler
struct SafeAreaScaler_t339E86182D900396D39D80FAE1A2C547CF647CCC;
// SampleScript
struct SampleScript_tADEACD51DA09B1912CF20CB233644641C8A36186;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// AR_Fukuoka.VpsInitializer
struct VpsInitializer_tF90B64868562B7A4C54A3A9CB7F1946B11E13133;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem
struct XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD;
// Google.XR.ARCoreExtensions.ARCoreExtensions/OnChooseXRCameraConfigurationEvent
struct OnChooseXRCameraConfigurationEvent_t04D1FA1451FA3C598B834C13638BFDE2F4B32454;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c
struct U3CU3Ec_t5B0BB4CFA8D219D09B10E20DB741FB7AE622B342;
// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c__DisplayClass44_0
struct U3CU3Ec__DisplayClass44_0_t38D6B8575059B49A8EA27C9B42674AD47664C694;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;

IL2CPP_EXTERN_C RuntimeClass* ARAnchorManagerExtensions_tAE16512F2947CC8B022F06BA32E94FE61DBBACE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARSessionState_tC5054273C7CB11C5C40D36745DDD2AF056ED1F25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Comparison_1_t880AB8C634CD664978C9A65AAA7050155FD6181C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EarthState_t592969F04C9684A777DEE2C0947C50FE93BFDC53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FeatureSupported_t9BE4112DE39E105167D7B5C7143C36FEBE5F98DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GeospatialAnchorHistoryCollection_t36DBFC64D28A956FECCE7DD20DE5E7B7A53F9645_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocationServiceStatus_tD2BEAE4A2A42A9D0D4D859AE1C968D278D5ACF2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t8C8EB8CFC5F8234D0EC9F5AB760FA7AF6DDF2070_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass44_0_t38D6B8575059B49A8EA27C9B42674AD47664C694_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t5B0BB4CFA8D219D09B10E20DB741FB7AE622B342_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral002FD9BA3AE0E060C2E4E855D3879613062FB95E;
IL2CPP_EXTERN_C String_t* _stringLiteral0642FD4A763B782EEF7CA72009CA8D1E0FFC5D86;
IL2CPP_EXTERN_C String_t* _stringLiteral098533C94B14961259EF414728C4A68C6289E9AE;
IL2CPP_EXTERN_C String_t* _stringLiteral0B33E2273C9AB388C21E973B33AEB2CD77079D68;
IL2CPP_EXTERN_C String_t* _stringLiteral12129C966D1274A2EF853A1668600EE873FA4D2C;
IL2CPP_EXTERN_C String_t* _stringLiteral14E227568A75A99F99D64B36A7F13EF4EBA70B06;
IL2CPP_EXTERN_C String_t* _stringLiteral2312D0E740ED40E04914F7257EBD8FA4307900D8;
IL2CPP_EXTERN_C String_t* _stringLiteral23E836F9814F83ED24864553FD4B41704BFEFFA8;
IL2CPP_EXTERN_C String_t* _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748;
IL2CPP_EXTERN_C String_t* _stringLiteral242A0070D29873DA9B6E4E1164C9C8B53CE23D19;
IL2CPP_EXTERN_C String_t* _stringLiteral272FD43E889593108C54482F13ABAACDD71C5FFE;
IL2CPP_EXTERN_C String_t* _stringLiteral3187553363A94FA380DF7928E3C910219A40C90A;
IL2CPP_EXTERN_C String_t* _stringLiteral31D77236056880C0D3C936B020E57CFE072FD559;
IL2CPP_EXTERN_C String_t* _stringLiteral3A80DBD535E7AFB2B86F791A732EBEEE4BCF7CDB;
IL2CPP_EXTERN_C String_t* _stringLiteral402969FEF140B759AA2E21468D1A944100BDBBF1;
IL2CPP_EXTERN_C String_t* _stringLiteral4E220F394CF0E90F7FEF038F482846BFBB93ED64;
IL2CPP_EXTERN_C String_t* _stringLiteral4E287435FD397C47BE968855D25241480B97C5C9;
IL2CPP_EXTERN_C String_t* _stringLiteral659DC561CB989579B2C5DB5BC9116FC03B863958;
IL2CPP_EXTERN_C String_t* _stringLiteral78E274AC89F9BB2B7C9C9C38754AE07662487DED;
IL2CPP_EXTERN_C String_t* _stringLiteral80D85E354963DC5787AAB3990BB9B8D1D718AD91;
IL2CPP_EXTERN_C String_t* _stringLiteral80D87A6B5B660BA3CC373D14B317E3A40FC27CD9;
IL2CPP_EXTERN_C String_t* _stringLiteral84603BEBCE50D165E99F4F1BE49F02FF0B3BC3DB;
IL2CPP_EXTERN_C String_t* _stringLiteral8E5080011A7CA3BD4949A61B46ADA7657E8540F9;
IL2CPP_EXTERN_C String_t* _stringLiteral96EF7EFF0F00A2F793F25BE896448C3A1BBA9828;
IL2CPP_EXTERN_C String_t* _stringLiteral970A4D6490D612AAF148057C65320C8178CD0C87;
IL2CPP_EXTERN_C String_t* _stringLiteral98BA9C6DB7CB1F119876677A9D68E6B455A09888;
IL2CPP_EXTERN_C String_t* _stringLiteralA0A24FC541CCC2A139AC9F8BE75113AD3649BFBD;
IL2CPP_EXTERN_C String_t* _stringLiteralA628C3EA1A977D457A54A899CA2F513C35C50B9C;
IL2CPP_EXTERN_C String_t* _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3;
IL2CPP_EXTERN_C String_t* _stringLiteralB3485A54065E6F4E66AFF0546DB80DF7DA4A5284;
IL2CPP_EXTERN_C String_t* _stringLiteralB7CA9DC3E5A221DFCC0483888D319D118E5CEF90;
IL2CPP_EXTERN_C String_t* _stringLiteralBA97DB5D365444C5E6EF88EF63073328B97B1146;
IL2CPP_EXTERN_C String_t* _stringLiteralBC7FFF74C9144CC4E77C56C5F9B4FDBC4516816D;
IL2CPP_EXTERN_C String_t* _stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391;
IL2CPP_EXTERN_C String_t* _stringLiteralCDD0E29C4A5251B9843B15E7DBD03F1411828478;
IL2CPP_EXTERN_C String_t* _stringLiteralD7A905249C0409DB8B563D30BAE889395AFBDB30;
IL2CPP_EXTERN_C String_t* _stringLiteralD98B91B80DF1365100F167CEBFA7CD461FEAB2F5;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDE0D2C7E866F161F8886976B7C5F3F27F3BB4E7A;
IL2CPP_EXTERN_C String_t* _stringLiteralEC2DBADB2D94879827209856D3681D3473726A46;
IL2CPP_EXTERN_C String_t* _stringLiteralEF7042B13A54AE6D2F33826F9F5FA12143D46847;
IL2CPP_EXTERN_C String_t* _stringLiteralFBA251D8CD4C01D372EB4EAC50A26C0633FA71D7;
IL2CPP_EXTERN_C String_t* _stringLiteralFF4CB593B711998014E24A8BDC4D1A685D2F9E5B;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Comparison_1__ctor_m543F7AD99E26365D1F82D1635BF13428D39219BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m0F17BCA778C5F59F1AED6017D544732C95D9791E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mCD85EDB4CB68497FD706B2186A459A04CE8CB924_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mA2126C6AF888A1831EAF72528F3B47A8F96620F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisGeospatialAnchorHistoryCollection_t36DBFC64D28A956FECCE7DD20DE5E7B7A53F9645_m353BE8BDB74E01396C3AC612EF8062431CAC0E21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m93737BC6C0FA3C9C7C852FD330F7A5E6331E7326_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m8DDB4F0C4145DA4CFCFBA2DA28BF8325ECE4F6C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m6DBFEC6E2FE7B6BA61EE8E65E0053FFB19507ECB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAll_m99F7ADEBACCC7D79E891B38EEC2D2757E11C8559_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveRange_m48523883FD816B365C20D12D508E4EE72DF229BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_m0C698A4C40E2E04874B147D55616AD38BA9E81DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m76413391DA2719B4DB0CC0BF0E9EC5523D6F63C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m7F941B3739722E9F76CB6C40DB4FE6C15E1ACA5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Predicate_1__ctor_m189E8697C2564C312FF3569AC87B181933885744_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSaveGeospatialAnchorHistoryU3Eb__45_0_m95248F2C2E8B76B87A98990D49656FBADA00A076_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass44_0_U3CLoadGeospatialAnchorHistoryU3Eb__0_m0065939C1BB93BF6B2C6337ECB01200FFD0014A9_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


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


// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____items_1)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>
struct List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GeospatialAnchorHistoryU5BU5D_t7FF762CECB07BB90EC3E0518C4C46251E34419FD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7, ____items_1)); }
	inline GeospatialAnchorHistoryU5BU5D_t7FF762CECB07BB90EC3E0518C4C46251E34419FD* get__items_1() const { return ____items_1; }
	inline GeospatialAnchorHistoryU5BU5D_t7FF762CECB07BB90EC3E0518C4C46251E34419FD** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GeospatialAnchorHistoryU5BU5D_t7FF762CECB07BB90EC3E0518C4C46251E34419FD* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GeospatialAnchorHistoryU5BU5D_t7FF762CECB07BB90EC3E0518C4C46251E34419FD* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7_StaticFields, ____emptyArray_5)); }
	inline GeospatialAnchorHistoryU5BU5D_t7FF762CECB07BB90EC3E0518C4C46251E34419FD* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GeospatialAnchorHistoryU5BU5D_t7FF762CECB07BB90EC3E0518C4C46251E34419FD** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GeospatialAnchorHistoryU5BU5D_t7FF762CECB07BB90EC3E0518C4C46251E34419FD* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


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

struct Il2CppArrayBounds;

// System.Array


// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistoryCollection
struct GeospatialAnchorHistoryCollection_t36DBFC64D28A956FECCE7DD20DE5E7B7A53F9645  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory> Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistoryCollection::Collection
	List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7 * ___Collection_0;

public:
	inline static int32_t get_offset_of_Collection_0() { return static_cast<int32_t>(offsetof(GeospatialAnchorHistoryCollection_t36DBFC64D28A956FECCE7DD20DE5E7B7A53F9645, ___Collection_0)); }
	inline List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7 * get_Collection_0() const { return ___Collection_0; }
	inline List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7 ** get_address_of_Collection_0() { return &___Collection_0; }
	inline void set_Collection_0(List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7 * value)
	{
		___Collection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Collection_0), (void*)value);
	}
};


// UnityEngine.LocationService
struct LocationService_tDCB7C3AA7A10C4727D49676FD3A902F48C27F855  : public RuntimeObject
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

// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c
struct U3CU3Ec_t5B0BB4CFA8D219D09B10E20DB741FB7AE622B342  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t5B0BB4CFA8D219D09B10E20DB741FB7AE622B342_StaticFields
{
public:
	// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c::<>9
	U3CU3Ec_t5B0BB4CFA8D219D09B10E20DB741FB7AE622B342 * ___U3CU3E9_0;
	// System.Comparison`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory> Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c::<>9__45_0
	Comparison_1_t880AB8C634CD664978C9A65AAA7050155FD6181C * ___U3CU3E9__45_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5B0BB4CFA8D219D09B10E20DB741FB7AE622B342_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t5B0BB4CFA8D219D09B10E20DB741FB7AE622B342 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t5B0BB4CFA8D219D09B10E20DB741FB7AE622B342 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t5B0BB4CFA8D219D09B10E20DB741FB7AE622B342 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__45_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5B0BB4CFA8D219D09B10E20DB741FB7AE622B342_StaticFields, ___U3CU3E9__45_0_1)); }
	inline Comparison_1_t880AB8C634CD664978C9A65AAA7050155FD6181C * get_U3CU3E9__45_0_1() const { return ___U3CU3E9__45_0_1; }
	inline Comparison_1_t880AB8C634CD664978C9A65AAA7050155FD6181C ** get_address_of_U3CU3E9__45_0_1() { return &___U3CU3E9__45_0_1; }
	inline void set_U3CU3E9__45_0_1(Comparison_1_t880AB8C634CD664978C9A65AAA7050155FD6181C * value)
	{
		___U3CU3E9__45_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__45_0_1), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___list_0)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_list_0() const { return ___list_0; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___current_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_current_3() const { return ___current_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
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


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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

// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory
struct GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F 
{
public:
	// System.String Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::SerializedTime
	String_t* ___SerializedTime_0;
	// System.Double Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::Latitude
	double ___Latitude_1;
	// System.Double Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::Longitude
	double ___Longitude_2;
	// System.Double Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::Altitude
	double ___Altitude_3;
	// System.Double Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::Heading
	double ___Heading_4;

public:
	inline static int32_t get_offset_of_SerializedTime_0() { return static_cast<int32_t>(offsetof(GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F, ___SerializedTime_0)); }
	inline String_t* get_SerializedTime_0() const { return ___SerializedTime_0; }
	inline String_t** get_address_of_SerializedTime_0() { return &___SerializedTime_0; }
	inline void set_SerializedTime_0(String_t* value)
	{
		___SerializedTime_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SerializedTime_0), (void*)value);
	}

	inline static int32_t get_offset_of_Latitude_1() { return static_cast<int32_t>(offsetof(GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F, ___Latitude_1)); }
	inline double get_Latitude_1() const { return ___Latitude_1; }
	inline double* get_address_of_Latitude_1() { return &___Latitude_1; }
	inline void set_Latitude_1(double value)
	{
		___Latitude_1 = value;
	}

	inline static int32_t get_offset_of_Longitude_2() { return static_cast<int32_t>(offsetof(GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F, ___Longitude_2)); }
	inline double get_Longitude_2() const { return ___Longitude_2; }
	inline double* get_address_of_Longitude_2() { return &___Longitude_2; }
	inline void set_Longitude_2(double value)
	{
		___Longitude_2 = value;
	}

	inline static int32_t get_offset_of_Altitude_3() { return static_cast<int32_t>(offsetof(GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F, ___Altitude_3)); }
	inline double get_Altitude_3() const { return ___Altitude_3; }
	inline double* get_address_of_Altitude_3() { return &___Altitude_3; }
	inline void set_Altitude_3(double value)
	{
		___Altitude_3 = value;
	}

	inline static int32_t get_offset_of_Heading_4() { return static_cast<int32_t>(offsetof(GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F, ___Heading_4)); }
	inline double get_Heading_4() const { return ___Heading_4; }
	inline double* get_address_of_Heading_4() { return &___Heading_4; }
	inline void set_Heading_4(double value)
	{
		___Heading_4 = value;
	}
};

// Native definition for P/Invoke marshalling of Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory
struct GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F_marshaled_pinvoke
{
	char* ___SerializedTime_0;
	double ___Latitude_1;
	double ___Longitude_2;
	double ___Altitude_3;
	double ___Heading_4;
};
// Native definition for COM marshalling of Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory
struct GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F_marshaled_com
{
	Il2CppChar* ___SerializedTime_0;
	double ___Latitude_1;
	double ___Longitude_2;
	double ___Altitude_3;
	double ___Heading_4;
};

// Google.XR.ARCoreExtensions.GeospatialPose
struct GeospatialPose_t360F6479DE7A680CB4DF86477D81885FAC3C9C8D 
{
public:
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::Latitude
	double ___Latitude_0;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::Longitude
	double ___Longitude_1;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::Altitude
	double ___Altitude_2;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::Heading
	double ___Heading_3;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::HeadingAccuracy
	double ___HeadingAccuracy_4;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::HorizontalAccuracy
	double ___HorizontalAccuracy_5;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::VerticalAccuracy
	double ___VerticalAccuracy_6;

public:
	inline static int32_t get_offset_of_Latitude_0() { return static_cast<int32_t>(offsetof(GeospatialPose_t360F6479DE7A680CB4DF86477D81885FAC3C9C8D, ___Latitude_0)); }
	inline double get_Latitude_0() const { return ___Latitude_0; }
	inline double* get_address_of_Latitude_0() { return &___Latitude_0; }
	inline void set_Latitude_0(double value)
	{
		___Latitude_0 = value;
	}

	inline static int32_t get_offset_of_Longitude_1() { return static_cast<int32_t>(offsetof(GeospatialPose_t360F6479DE7A680CB4DF86477D81885FAC3C9C8D, ___Longitude_1)); }
	inline double get_Longitude_1() const { return ___Longitude_1; }
	inline double* get_address_of_Longitude_1() { return &___Longitude_1; }
	inline void set_Longitude_1(double value)
	{
		___Longitude_1 = value;
	}

	inline static int32_t get_offset_of_Altitude_2() { return static_cast<int32_t>(offsetof(GeospatialPose_t360F6479DE7A680CB4DF86477D81885FAC3C9C8D, ___Altitude_2)); }
	inline double get_Altitude_2() const { return ___Altitude_2; }
	inline double* get_address_of_Altitude_2() { return &___Altitude_2; }
	inline void set_Altitude_2(double value)
	{
		___Altitude_2 = value;
	}

	inline static int32_t get_offset_of_Heading_3() { return static_cast<int32_t>(offsetof(GeospatialPose_t360F6479DE7A680CB4DF86477D81885FAC3C9C8D, ___Heading_3)); }
	inline double get_Heading_3() const { return ___Heading_3; }
	inline double* get_address_of_Heading_3() { return &___Heading_3; }
	inline void set_Heading_3(double value)
	{
		___Heading_3 = value;
	}

	inline static int32_t get_offset_of_HeadingAccuracy_4() { return static_cast<int32_t>(offsetof(GeospatialPose_t360F6479DE7A680CB4DF86477D81885FAC3C9C8D, ___HeadingAccuracy_4)); }
	inline double get_HeadingAccuracy_4() const { return ___HeadingAccuracy_4; }
	inline double* get_address_of_HeadingAccuracy_4() { return &___HeadingAccuracy_4; }
	inline void set_HeadingAccuracy_4(double value)
	{
		___HeadingAccuracy_4 = value;
	}

	inline static int32_t get_offset_of_HorizontalAccuracy_5() { return static_cast<int32_t>(offsetof(GeospatialPose_t360F6479DE7A680CB4DF86477D81885FAC3C9C8D, ___HorizontalAccuracy_5)); }
	inline double get_HorizontalAccuracy_5() const { return ___HorizontalAccuracy_5; }
	inline double* get_address_of_HorizontalAccuracy_5() { return &___HorizontalAccuracy_5; }
	inline void set_HorizontalAccuracy_5(double value)
	{
		___HorizontalAccuracy_5 = value;
	}

	inline static int32_t get_offset_of_VerticalAccuracy_6() { return static_cast<int32_t>(offsetof(GeospatialPose_t360F6479DE7A680CB4DF86477D81885FAC3C9C8D, ___VerticalAccuracy_6)); }
	inline double get_VerticalAccuracy_6() const { return ___VerticalAccuracy_6; }
	inline double* get_address_of_VerticalAccuracy_6() { return &___VerticalAccuracy_6; }
	inline void set_VerticalAccuracy_6(double value)
	{
		___VerticalAccuracy_6 = value;
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


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
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


// System.Collections.Generic.List`1/Enumerator<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>
struct Enumerator_t0FCEFA6AC2110A3938B99DCF45E3DF164622B657 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t0FCEFA6AC2110A3938B99DCF45E3DF164622B657, ___list_0)); }
	inline List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7 * get_list_0() const { return ___list_0; }
	inline List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t0FCEFA6AC2110A3938B99DCF45E3DF164622B657, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t0FCEFA6AC2110A3938B99DCF45E3DF164622B657, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t0FCEFA6AC2110A3938B99DCF45E3DF164622B657, ___current_3)); }
	inline GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F  get_current_3() const { return ___current_3; }
	inline GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___SerializedTime_0), (void*)NULL);
	}
};


// UnityEngine.XR.ARFoundation.ARSessionState
struct ARSessionState_tC5054273C7CB11C5C40D36745DDD2AF056ED1F25 
{
public:
	// System.Int32 UnityEngine.XR.ARFoundation.ARSessionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ARSessionState_tC5054273C7CB11C5C40D36745DDD2AF056ED1F25, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Google.XR.ARCoreExtensions.CloudAnchorMode
struct CloudAnchorMode_t033071E354A9F6346005A101BE386E75F43678BF 
{
public:
	// System.Int32 Google.XR.ARCoreExtensions.CloudAnchorMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CloudAnchorMode_t033071E354A9F6346005A101BE386E75F43678BF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
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

// Google.XR.ARCoreExtensions.EarthState
struct EarthState_t592969F04C9684A777DEE2C0947C50FE93BFDC53 
{
public:
	// System.Int32 Google.XR.ARCoreExtensions.EarthState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EarthState_t592969F04C9684A777DEE2C0947C50FE93BFDC53, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Google.XR.ARCoreExtensions.FeatureSupported
struct FeatureSupported_t9BE4112DE39E105167D7B5C7143C36FEBE5F98DA 
{
public:
	// System.Int32 Google.XR.ARCoreExtensions.FeatureSupported::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FeatureSupported_t9BE4112DE39E105167D7B5C7143C36FEBE5F98DA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Google.XR.ARCoreExtensions.GeospatialMode
struct GeospatialMode_t0A09CDC56D6399C569AC0D04A2B85BD20D7B297F 
{
public:
	// System.Int32 Google.XR.ARCoreExtensions.GeospatialMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GeospatialMode_t0A09CDC56D6399C569AC0D04A2B85BD20D7B297F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.LocationServiceStatus
struct LocationServiceStatus_tD2BEAE4A2A42A9D0D4D859AE1C968D278D5ACF2F 
{
public:
	// System.Int32 UnityEngine.LocationServiceStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LocationServiceStatus_tD2BEAE4A2A42A9D0D4D859AE1C968D278D5ACF2F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.NotTrackingReason
struct NotTrackingReason_t853CA5527FA4E156B45DD1BD3E3E978C78BC49A9 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.NotTrackingReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NotTrackingReason_t853CA5527FA4E156B45DD1BD3E3E978C78BC49A9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// UnityEngine.Pose
struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___rotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields, ___k_Identity_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___k_Identity_2 = value;
	}
};


// UnityEngine.ScreenOrientation
struct ScreenOrientation_tDD9EF2729A0D580721770597532935B0A7ADE020 
{
public:
	// System.Int32 UnityEngine.ScreenOrientation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScreenOrientation_tDD9EF2729A0D580721770597532935B0A7ADE020, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.SessionAvailability
struct SessionAvailability_tF5E98733E00C91772417EDEF3B3A6FA1DF653FCD 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.SessionAvailability::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SessionAvailability_tF5E98733E00C91772417EDEF3B3A6FA1DF653FCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Space
struct Space_t568D704D2B0AAC3E5894DDFF13DB2E02E2CD539E 
{
public:
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Space_t568D704D2B0AAC3E5894DDFF13DB2E02E2CD539E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// UnityEngine.XR.ARFoundation.TrackingMode
struct TrackingMode_t494215013DD008CD55735FEBB426C0F188B72646 
{
public:
	// System.Int32 UnityEngine.XR.ARFoundation.TrackingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingMode_t494215013DD008CD55735FEBB426C0F188B72646, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingState
struct TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c__DisplayClass44_0
struct U3CU3Ec__DisplayClass44_0_t38D6B8575059B49A8EA27C9B42674AD47664C694  : public RuntimeObject
{
public:
	// System.DateTime Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c__DisplayClass44_0::current
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___current_0;

public:
	inline static int32_t get_offset_of_current_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass44_0_t38D6B8575059B49A8EA27C9B42674AD47664C694, ___current_0)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_current_0() const { return ___current_0; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_current_0() { return &___current_0; }
	inline void set_current_0(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___current_0 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.Comparison`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>
struct Comparison_1_t880AB8C634CD664978C9A65AAA7050155FD6181C  : public MulticastDelegate_t
{
public:

public:
};


// System.Predicate`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>
struct Predicate_1_t8C8EB8CFC5F8234D0EC9F5AB760FA7AF6DDF2070  : public MulticastDelegate_t
{
public:

public:
};


// Google.XR.ARCoreExtensions.ARCoreExtensionsConfig
struct ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// Google.XR.ARCoreExtensions.CloudAnchorMode Google.XR.ARCoreExtensions.ARCoreExtensionsConfig::CloudAnchorMode
	int32_t ___CloudAnchorMode_4;
	// Google.XR.ARCoreExtensions.GeospatialMode Google.XR.ARCoreExtensions.ARCoreExtensionsConfig::GeospatialMode
	int32_t ___GeospatialMode_5;

public:
	inline static int32_t get_offset_of_CloudAnchorMode_4() { return static_cast<int32_t>(offsetof(ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8, ___CloudAnchorMode_4)); }
	inline int32_t get_CloudAnchorMode_4() const { return ___CloudAnchorMode_4; }
	inline int32_t* get_address_of_CloudAnchorMode_4() { return &___CloudAnchorMode_4; }
	inline void set_CloudAnchorMode_4(int32_t value)
	{
		___CloudAnchorMode_4 = value;
	}

	inline static int32_t get_offset_of_GeospatialMode_5() { return static_cast<int32_t>(offsetof(ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8, ___GeospatialMode_5)); }
	inline int32_t get_GeospatialMode_5() const { return ___GeospatialMode_5; }
	inline int32_t* get_address_of_GeospatialMode_5() { return &___GeospatialMode_5; }
	inline void set_GeospatialMode_5(int32_t value)
	{
		___GeospatialMode_5 = value;
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct SubsystemLifecycleManager_3_tA7DFD00C75E7891CE13E16A789857D4DA563A9A3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7 * ___U3CsubsystemU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tA7DFD00C75E7891CE13E16A789857D4DA563A9A3, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7 * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7 ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7 * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}
};

struct SubsystemLifecycleManager_3_tA7DFD00C75E7891CE13E16A789857D4DA563A9A3_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tDED98C236097B36F9015B396398179A6F8A62E50 * ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_tFFEC9D401CE39D3C812C896B17B35D57DDF6E440 * ___s_SubsystemInstances_6;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tA7DFD00C75E7891CE13E16A789857D4DA563A9A3_StaticFields, ___s_SubsystemDescriptors_5)); }
	inline List_1_tDED98C236097B36F9015B396398179A6F8A62E50 * get_s_SubsystemDescriptors_5() const { return ___s_SubsystemDescriptors_5; }
	inline List_1_tDED98C236097B36F9015B396398179A6F8A62E50 ** get_address_of_s_SubsystemDescriptors_5() { return &___s_SubsystemDescriptors_5; }
	inline void set_s_SubsystemDescriptors_5(List_1_tDED98C236097B36F9015B396398179A6F8A62E50 * value)
	{
		___s_SubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemDescriptors_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubsystemInstances_6() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tA7DFD00C75E7891CE13E16A789857D4DA563A9A3_StaticFields, ___s_SubsystemInstances_6)); }
	inline List_1_tFFEC9D401CE39D3C812C896B17B35D57DDF6E440 * get_s_SubsystemInstances_6() const { return ___s_SubsystemInstances_6; }
	inline List_1_tFFEC9D401CE39D3C812C896B17B35D57DDF6E440 ** get_address_of_s_SubsystemInstances_6() { return &___s_SubsystemInstances_6; }
	inline void set_s_SubsystemInstances_6(List_1_tFFEC9D401CE39D3C812C896B17B35D57DDF6E440 * value)
	{
		___s_SubsystemInstances_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemInstances_6), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * ___U3CsubsystemU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}
};

struct SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tDA25459A722F5B00FFE84463D9952660BC3F6673 * ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * ___s_SubsystemInstances_6;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD_StaticFields, ___s_SubsystemDescriptors_5)); }
	inline List_1_tDA25459A722F5B00FFE84463D9952660BC3F6673 * get_s_SubsystemDescriptors_5() const { return ___s_SubsystemDescriptors_5; }
	inline List_1_tDA25459A722F5B00FFE84463D9952660BC3F6673 ** get_address_of_s_SubsystemDescriptors_5() { return &___s_SubsystemDescriptors_5; }
	inline void set_s_SubsystemDescriptors_5(List_1_tDA25459A722F5B00FFE84463D9952660BC3F6673 * value)
	{
		___s_SubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemDescriptors_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubsystemInstances_6() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD_StaticFields, ___s_SubsystemInstances_6)); }
	inline List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * get_s_SubsystemInstances_6() const { return ___s_SubsystemInstances_6; }
	inline List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 ** get_address_of_s_SubsystemInstances_6() { return &___s_SubsystemInstances_6; }
	inline void set_s_SubsystemInstances_6(List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * value)
	{
		___s_SubsystemInstances_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemInstances_6), (void*)value);
	}
};


// Google.XR.ARCoreExtensions.ARCoreExtensions
struct ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.XR.ARFoundation.ARSession Google.XR.ARCoreExtensions.ARCoreExtensions::Session
	ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * ___Session_4;
	// UnityEngine.XR.ARFoundation.ARSessionOrigin Google.XR.ARCoreExtensions.ARCoreExtensions::SessionOrigin
	ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * ___SessionOrigin_5;
	// UnityEngine.XR.ARFoundation.ARCameraManager Google.XR.ARCoreExtensions.ARCoreExtensions::CameraManager
	ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * ___CameraManager_6;
	// Google.XR.ARCoreExtensions.ARCoreExtensionsConfig Google.XR.ARCoreExtensions.ARCoreExtensions::ARCoreExtensionsConfig
	ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * ___ARCoreExtensionsConfig_7;
	// Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter Google.XR.ARCoreExtensions.ARCoreExtensions::CameraConfigFilter
	ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * ___CameraConfigFilter_8;
	// Google.XR.ARCoreExtensions.ARCoreExtensions/OnChooseXRCameraConfigurationEvent Google.XR.ARCoreExtensions.ARCoreExtensions::OnChooseXRCameraConfiguration
	OnChooseXRCameraConfigurationEvent_t04D1FA1451FA3C598B834C13638BFDE2F4B32454 * ___OnChooseXRCameraConfiguration_9;
	// System.String Google.XR.ARCoreExtensions.ARCoreExtensions::_currentPermissionRequest
	String_t* ____currentPermissionRequest_12;
	// System.Collections.Generic.HashSet`1<System.String> Google.XR.ARCoreExtensions.ARCoreExtensions::_requiredPermissionNames
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ____requiredPermissionNames_13;
	// UnityEngine.XR.ARCore.ARCoreSessionSubsystem Google.XR.ARCoreExtensions.ARCoreExtensions::_arCoreSubsystem
	ARCoreSessionSubsystem_tFF74CE3FF58D5BB9130DF221576CF1EFD23BF375 * ____arCoreSubsystem_14;
	// Google.XR.ARCoreExtensions.ARCoreExtensionsConfig Google.XR.ARCoreExtensions.ARCoreExtensions::_cachedConfig
	ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * ____cachedConfig_15;
	// UnityEngine.XR.ARCore.ARCoreCameraSubsystem Google.XR.ARCoreExtensions.ARCoreExtensions::_arCoreCameraSubsystem
	ARCoreCameraSubsystem_tE13501E322AB598EC6E014497B61F65F35BD348C * ____arCoreCameraSubsystem_16;
	// Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter Google.XR.ARCoreExtensions.ARCoreExtensions::_cachedFilter
	ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * ____cachedFilter_17;

public:
	inline static int32_t get_offset_of_Session_4() { return static_cast<int32_t>(offsetof(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB, ___Session_4)); }
	inline ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * get_Session_4() const { return ___Session_4; }
	inline ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B ** get_address_of_Session_4() { return &___Session_4; }
	inline void set_Session_4(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * value)
	{
		___Session_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Session_4), (void*)value);
	}

	inline static int32_t get_offset_of_SessionOrigin_5() { return static_cast<int32_t>(offsetof(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB, ___SessionOrigin_5)); }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * get_SessionOrigin_5() const { return ___SessionOrigin_5; }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 ** get_address_of_SessionOrigin_5() { return &___SessionOrigin_5; }
	inline void set_SessionOrigin_5(ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * value)
	{
		___SessionOrigin_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SessionOrigin_5), (void*)value);
	}

	inline static int32_t get_offset_of_CameraManager_6() { return static_cast<int32_t>(offsetof(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB, ___CameraManager_6)); }
	inline ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * get_CameraManager_6() const { return ___CameraManager_6; }
	inline ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 ** get_address_of_CameraManager_6() { return &___CameraManager_6; }
	inline void set_CameraManager_6(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * value)
	{
		___CameraManager_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CameraManager_6), (void*)value);
	}

	inline static int32_t get_offset_of_ARCoreExtensionsConfig_7() { return static_cast<int32_t>(offsetof(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB, ___ARCoreExtensionsConfig_7)); }
	inline ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * get_ARCoreExtensionsConfig_7() const { return ___ARCoreExtensionsConfig_7; }
	inline ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 ** get_address_of_ARCoreExtensionsConfig_7() { return &___ARCoreExtensionsConfig_7; }
	inline void set_ARCoreExtensionsConfig_7(ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * value)
	{
		___ARCoreExtensionsConfig_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ARCoreExtensionsConfig_7), (void*)value);
	}

	inline static int32_t get_offset_of_CameraConfigFilter_8() { return static_cast<int32_t>(offsetof(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB, ___CameraConfigFilter_8)); }
	inline ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * get_CameraConfigFilter_8() const { return ___CameraConfigFilter_8; }
	inline ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 ** get_address_of_CameraConfigFilter_8() { return &___CameraConfigFilter_8; }
	inline void set_CameraConfigFilter_8(ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * value)
	{
		___CameraConfigFilter_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CameraConfigFilter_8), (void*)value);
	}

	inline static int32_t get_offset_of_OnChooseXRCameraConfiguration_9() { return static_cast<int32_t>(offsetof(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB, ___OnChooseXRCameraConfiguration_9)); }
	inline OnChooseXRCameraConfigurationEvent_t04D1FA1451FA3C598B834C13638BFDE2F4B32454 * get_OnChooseXRCameraConfiguration_9() const { return ___OnChooseXRCameraConfiguration_9; }
	inline OnChooseXRCameraConfigurationEvent_t04D1FA1451FA3C598B834C13638BFDE2F4B32454 ** get_address_of_OnChooseXRCameraConfiguration_9() { return &___OnChooseXRCameraConfiguration_9; }
	inline void set_OnChooseXRCameraConfiguration_9(OnChooseXRCameraConfigurationEvent_t04D1FA1451FA3C598B834C13638BFDE2F4B32454 * value)
	{
		___OnChooseXRCameraConfiguration_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnChooseXRCameraConfiguration_9), (void*)value);
	}

	inline static int32_t get_offset_of__currentPermissionRequest_12() { return static_cast<int32_t>(offsetof(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB, ____currentPermissionRequest_12)); }
	inline String_t* get__currentPermissionRequest_12() const { return ____currentPermissionRequest_12; }
	inline String_t** get_address_of__currentPermissionRequest_12() { return &____currentPermissionRequest_12; }
	inline void set__currentPermissionRequest_12(String_t* value)
	{
		____currentPermissionRequest_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____currentPermissionRequest_12), (void*)value);
	}

	inline static int32_t get_offset_of__requiredPermissionNames_13() { return static_cast<int32_t>(offsetof(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB, ____requiredPermissionNames_13)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get__requiredPermissionNames_13() const { return ____requiredPermissionNames_13; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of__requiredPermissionNames_13() { return &____requiredPermissionNames_13; }
	inline void set__requiredPermissionNames_13(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		____requiredPermissionNames_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____requiredPermissionNames_13), (void*)value);
	}

	inline static int32_t get_offset_of__arCoreSubsystem_14() { return static_cast<int32_t>(offsetof(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB, ____arCoreSubsystem_14)); }
	inline ARCoreSessionSubsystem_tFF74CE3FF58D5BB9130DF221576CF1EFD23BF375 * get__arCoreSubsystem_14() const { return ____arCoreSubsystem_14; }
	inline ARCoreSessionSubsystem_tFF74CE3FF58D5BB9130DF221576CF1EFD23BF375 ** get_address_of__arCoreSubsystem_14() { return &____arCoreSubsystem_14; }
	inline void set__arCoreSubsystem_14(ARCoreSessionSubsystem_tFF74CE3FF58D5BB9130DF221576CF1EFD23BF375 * value)
	{
		____arCoreSubsystem_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____arCoreSubsystem_14), (void*)value);
	}

	inline static int32_t get_offset_of__cachedConfig_15() { return static_cast<int32_t>(offsetof(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB, ____cachedConfig_15)); }
	inline ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * get__cachedConfig_15() const { return ____cachedConfig_15; }
	inline ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 ** get_address_of__cachedConfig_15() { return &____cachedConfig_15; }
	inline void set__cachedConfig_15(ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * value)
	{
		____cachedConfig_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cachedConfig_15), (void*)value);
	}

	inline static int32_t get_offset_of__arCoreCameraSubsystem_16() { return static_cast<int32_t>(offsetof(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB, ____arCoreCameraSubsystem_16)); }
	inline ARCoreCameraSubsystem_tE13501E322AB598EC6E014497B61F65F35BD348C * get__arCoreCameraSubsystem_16() const { return ____arCoreCameraSubsystem_16; }
	inline ARCoreCameraSubsystem_tE13501E322AB598EC6E014497B61F65F35BD348C ** get_address_of__arCoreCameraSubsystem_16() { return &____arCoreCameraSubsystem_16; }
	inline void set__arCoreCameraSubsystem_16(ARCoreCameraSubsystem_tE13501E322AB598EC6E014497B61F65F35BD348C * value)
	{
		____arCoreCameraSubsystem_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____arCoreCameraSubsystem_16), (void*)value);
	}

	inline static int32_t get_offset_of__cachedFilter_17() { return static_cast<int32_t>(offsetof(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB, ____cachedFilter_17)); }
	inline ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * get__cachedFilter_17() const { return ____cachedFilter_17; }
	inline ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 ** get_address_of__cachedFilter_17() { return &____cachedFilter_17; }
	inline void set__cachedFilter_17(ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * value)
	{
		____cachedFilter_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cachedFilter_17), (void*)value);
	}
};

struct ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB_StaticFields
{
public:
	// UnityEngine.AndroidJavaClass Google.XR.ARCoreExtensions.ARCoreExtensions::_versionInfo
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * ____versionInfo_11;
	// Google.XR.ARCoreExtensions.ARCoreExtensions Google.XR.ARCoreExtensions.ARCoreExtensions::<_instance>k__BackingField
	ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * ___U3C_instanceU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of__versionInfo_11() { return static_cast<int32_t>(offsetof(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB_StaticFields, ____versionInfo_11)); }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * get__versionInfo_11() const { return ____versionInfo_11; }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 ** get_address_of__versionInfo_11() { return &____versionInfo_11; }
	inline void set__versionInfo_11(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * value)
	{
		____versionInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____versionInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3C_instanceU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB_StaticFields, ___U3C_instanceU3Ek__BackingField_18)); }
	inline ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * get_U3C_instanceU3Ek__BackingField_18() const { return ___U3C_instanceU3Ek__BackingField_18; }
	inline ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB ** get_address_of_U3C_instanceU3Ek__BackingField_18() { return &___U3C_instanceU3Ek__BackingField_18; }
	inline void set_U3C_instanceU3Ek__BackingField_18(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * value)
	{
		___U3C_instanceU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3C_instanceU3Ek__BackingField_18), (void*)value);
	}
};


// Google.XR.ARCoreExtensions.AREarthManager
struct AREarthManager_tC7BD26586198E227BFD80ED37AE297887DA20519  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Google.XR.ARCoreExtensions.ARGeospatialAnchor
struct ARGeospatialAnchor_tF7BD994A88D37D4DAADC1958C201114E6BDE8A3B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.IntPtr Google.XR.ARCoreExtensions.ARGeospatialAnchor::_anchorHandle
	intptr_t ____anchorHandle_4;
	// UnityEngine.Pose Google.XR.ARCoreExtensions.ARGeospatialAnchor::_pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ____pose_5;

public:
	inline static int32_t get_offset_of__anchorHandle_4() { return static_cast<int32_t>(offsetof(ARGeospatialAnchor_tF7BD994A88D37D4DAADC1958C201114E6BDE8A3B, ____anchorHandle_4)); }
	inline intptr_t get__anchorHandle_4() const { return ____anchorHandle_4; }
	inline intptr_t* get_address_of__anchorHandle_4() { return &____anchorHandle_4; }
	inline void set__anchorHandle_4(intptr_t value)
	{
		____anchorHandle_4 = value;
	}

	inline static int32_t get_offset_of__pose_5() { return static_cast<int32_t>(offsetof(ARGeospatialAnchor_tF7BD994A88D37D4DAADC1958C201114E6BDE8A3B, ____pose_5)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get__pose_5() const { return ____pose_5; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of__pose_5() { return &____pose_5; }
	inline void set__pose_5(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		____pose_5 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARSessionOrigin::m_Camera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___m_Camera_4;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARSessionOrigin::<trackablesParent>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CtrackablesParentU3Ek__BackingField_5;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs> UnityEngine.XR.ARFoundation.ARSessionOrigin::trackablesParentTransformChanged
	Action_1_t46163F69D18A4B5D9D9C98AE7CB0AE73A82DCF10 * ___trackablesParentTransformChanged_6;
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARSessionOrigin::m_ContentOffsetGameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_ContentOffsetGameObject_7;

public:
	inline static int32_t get_offset_of_m_Camera_4() { return static_cast<int32_t>(offsetof(ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1, ___m_Camera_4)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_m_Camera_4() const { return ___m_Camera_4; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_m_Camera_4() { return &___m_Camera_4; }
	inline void set_m_Camera_4(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___m_Camera_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Camera_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtrackablesParentU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1, ___U3CtrackablesParentU3Ek__BackingField_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CtrackablesParentU3Ek__BackingField_5() const { return ___U3CtrackablesParentU3Ek__BackingField_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CtrackablesParentU3Ek__BackingField_5() { return &___U3CtrackablesParentU3Ek__BackingField_5; }
	inline void set_U3CtrackablesParentU3Ek__BackingField_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CtrackablesParentU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtrackablesParentU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_trackablesParentTransformChanged_6() { return static_cast<int32_t>(offsetof(ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1, ___trackablesParentTransformChanged_6)); }
	inline Action_1_t46163F69D18A4B5D9D9C98AE7CB0AE73A82DCF10 * get_trackablesParentTransformChanged_6() const { return ___trackablesParentTransformChanged_6; }
	inline Action_1_t46163F69D18A4B5D9D9C98AE7CB0AE73A82DCF10 ** get_address_of_trackablesParentTransformChanged_6() { return &___trackablesParentTransformChanged_6; }
	inline void set_trackablesParentTransformChanged_6(Action_1_t46163F69D18A4B5D9D9C98AE7CB0AE73A82DCF10 * value)
	{
		___trackablesParentTransformChanged_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackablesParentTransformChanged_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContentOffsetGameObject_7() { return static_cast<int32_t>(offsetof(ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1, ___m_ContentOffsetGameObject_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_ContentOffsetGameObject_7() const { return ___m_ContentOffsetGameObject_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_ContentOffsetGameObject_7() { return &___m_ContentOffsetGameObject_7; }
	inline void set_m_ContentOffsetGameObject_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_ContentOffsetGameObject_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ContentOffsetGameObject_7), (void*)value);
	}
};


// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController
struct GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.XR.ARFoundation.ARSessionOrigin Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::SessionOrigin
	ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * ___SessionOrigin_4;
	// UnityEngine.XR.ARFoundation.ARSession Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::Session
	ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * ___Session_5;
	// UnityEngine.XR.ARFoundation.ARAnchorManager Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::AnchorManager
	ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F * ___AnchorManager_6;
	// Google.XR.ARCoreExtensions.AREarthManager Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::EarthManager
	AREarthManager_tC7BD26586198E227BFD80ED37AE297887DA20519 * ___EarthManager_7;
	// Google.XR.ARCoreExtensions.ARCoreExtensions Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::ARCoreExtensions
	ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * ___ARCoreExtensions_8;
	// UnityEngine.GameObject Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::GeospatialPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___GeospatialPrefab_9;
	// UnityEngine.GameObject Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::PrivacyPromptCanvas
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___PrivacyPromptCanvas_10;
	// UnityEngine.GameObject Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::ARViewCanvas
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ARViewCanvas_11;
	// UnityEngine.UI.Button Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::ClearAllButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___ClearAllButton_12;
	// UnityEngine.UI.Button Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::SetAnchorButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___SetAnchorButton_13;
	// UnityEngine.GameObject Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::InfoPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___InfoPanel_14;
	// UnityEngine.UI.Text Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::InfoText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___InfoText_15;
	// UnityEngine.UI.Text Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::SnackBarText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___SnackBarText_16;
	// UnityEngine.UI.Text Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::DebugText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___DebugText_17;
	// System.Boolean Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::_isInARView
	bool ____isInARView_29;
	// System.Boolean Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::_isReturning
	bool ____isReturning_30;
	// System.Boolean Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::_isLocalizing
	bool ____isLocalizing_31;
	// System.Boolean Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::_enablingGeospatial
	bool ____enablingGeospatial_32;
	// System.Boolean Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::_shouldResolvingHistory
	bool ____shouldResolvingHistory_33;
	// System.Single Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::_localizationPassedTime
	float ____localizationPassedTime_34;
	// System.Single Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::_configurePrepareTime
	float ____configurePrepareTime_35;
	// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistoryCollection Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::_historyCollection
	GeospatialAnchorHistoryCollection_t36DBFC64D28A956FECCE7DD20DE5E7B7A53F9645 * ____historyCollection_36;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::_anchorObjects
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ____anchorObjects_37;

public:
	inline static int32_t get_offset_of_SessionOrigin_4() { return static_cast<int32_t>(offsetof(GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C, ___SessionOrigin_4)); }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * get_SessionOrigin_4() const { return ___SessionOrigin_4; }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 ** get_address_of_SessionOrigin_4() { return &___SessionOrigin_4; }
	inline void set_SessionOrigin_4(ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * value)
	{
		___SessionOrigin_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SessionOrigin_4), (void*)value);
	}

	inline static int32_t get_offset_of_Session_5() { return static_cast<int32_t>(offsetof(GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C, ___Session_5)); }
	inline ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * get_Session_5() const { return ___Session_5; }
	inline ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B ** get_address_of_Session_5() { return &___Session_5; }
	inline void set_Session_5(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * value)
	{
		___Session_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Session_5), (void*)value);
	}

	inline static int32_t get_offset_of_AnchorManager_6() { return static_cast<int32_t>(offsetof(GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C, ___AnchorManager_6)); }
	inline ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F * get_AnchorManager_6() const { return ___AnchorManager_6; }
	inline ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F ** get_address_of_AnchorManager_6() { return &___AnchorManager_6; }
	inline void set_AnchorManager_6(ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F * value)
	{
		___AnchorManager_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AnchorManager_6), (void*)value);
	}

	inline static int32_t get_offset_of_EarthManager_7() { return static_cast<int32_t>(offsetof(GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C, ___EarthManager_7)); }
	inline AREarthManager_tC7BD26586198E227BFD80ED37AE297887DA20519 * get_EarthManager_7() const { return ___EarthManager_7; }
	inline AREarthManager_tC7BD26586198E227BFD80ED37AE297887DA20519 ** get_address_of_EarthManager_7() { return &___EarthManager_7; }
	inline void set_EarthManager_7(AREarthManager_tC7BD26586198E227BFD80ED37AE297887DA20519 * value)
	{
		___EarthManager_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EarthManager_7), (void*)value);
	}

	inline static int32_t get_offset_of_ARCoreExtensions_8() { return static_cast<int32_t>(offsetof(GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C, ___ARCoreExtensions_8)); }
	inline ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * get_ARCoreExtensions_8() const { return ___ARCoreExtensions_8; }
	inline ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB ** get_address_of_ARCoreExtensions_8() { return &___ARCoreExtensions_8; }
	inline void set_ARCoreExtensions_8(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * value)
	{
		___ARCoreExtensions_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ARCoreExtensions_8), (void*)value);
	}

	inline static int32_t get_offset_of_GeospatialPrefab_9() { return static_cast<int32_t>(offsetof(GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C, ___GeospatialPrefab_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_GeospatialPrefab_9() const { return ___GeospatialPrefab_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_GeospatialPrefab_9() { return &___GeospatialPrefab_9; }
	inline void set_GeospatialPrefab_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___GeospatialPrefab_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GeospatialPrefab_9), (void*)value);
	}

	inline static int32_t get_offset_of_PrivacyPromptCanvas_10() { return static_cast<int32_t>(offsetof(GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C, ___PrivacyPromptCanvas_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_PrivacyPromptCanvas_10() const { return ___PrivacyPromptCanvas_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_PrivacyPromptCanvas_10() { return &___PrivacyPromptCanvas_10; }
	inline void set_PrivacyPromptCanvas_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___PrivacyPromptCanvas_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PrivacyPromptCanvas_10), (void*)value);
	}

	inline static int32_t get_offset_of_ARViewCanvas_11() { return static_cast<int32_t>(offsetof(GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C, ___ARViewCanvas_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ARViewCanvas_11() const { return ___ARViewCanvas_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ARViewCanvas_11() { return &___ARViewCanvas_11; }
	inline void set_ARViewCanvas_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ARViewCanvas_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ARViewCanvas_11), (void*)value);
	}

	inline static int32_t get_offset_of_ClearAllButton_12() { return static_cast<int32_t>(offsetof(GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C, ___ClearAllButton_12)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_ClearAllButton_12() const { return ___ClearAllButton_12; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_ClearAllButton_12() { return &___ClearAllButton_12; }
	inline void set_ClearAllButton_12(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___ClearAllButton_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClearAllButton_12), (void*)value);
	}

	inline static int32_t get_offset_of_SetAnchorButton_13() { return static_cast<int32_t>(offsetof(GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C, ___SetAnchorButton_13)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_SetAnchorButton_13() const { return ___SetAnchorButton_13; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_SetAnchorButton_13() { return &___SetAnchorButton_13; }
	inline void set_SetAnchorButton_13(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___SetAnchorButton_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SetAnchorButton_13), (void*)value);
	}

	inline static int32_t get_offset_of_InfoPanel_14() { return static_cast<int32_t>(offsetof(GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C, ___InfoPanel_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_InfoPanel_14() const { return ___InfoPanel_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_InfoPanel_14() { return &___InfoPanel_14; }
	inline void set_InfoPanel_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___InfoPanel_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InfoPanel_14), (void*)value);
	}

	inline static int32_t get_offset_of_InfoText_15() { return static_cast<int32_t>(offsetof(GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C, ___InfoText_15)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_InfoText_15() const { return ___InfoText_15; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_InfoText_15() { return &___InfoText_15; }
	inline void set_InfoText_15(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___InfoText_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InfoText_15), (void*)value);
	}

	inline static int32_t get_offset_of_SnackBarText_16() { return static_cast<int32_t>(offsetof(GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C, ___SnackBarText_16)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_SnackBarText_16() const { return ___SnackBarText_16; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_SnackBarText_16() { return &___SnackBarText_16; }
	inline void set_SnackBarText_16(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___SnackBarText_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SnackBarText_16), (void*)value);
	}

	inline static int32_t get_offset_of_DebugText_17() { return static_cast<int32_t>(offsetof(GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C, ___DebugText_17)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_DebugText_17() const { return ___DebugText_17; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_DebugText_17() { return &___DebugText_17; }
	inline void set_DebugText_17(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___DebugText_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DebugText_17), (void*)value);
	}

	inline static int32_t get_offset_of__isInARView_29() { return static_cast<int32_t>(offsetof(GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C, ____isInARView_29)); }
	inline bool get__isInARView_29() const { return ____isInARView_29; }
	inline bool* get_address_of__isInARView_29() { return &____isInARView_29; }
	inline void set__isInARView_29(bool value)
	{
		____isInARView_29 = value;
	}

	inline static int32_t get_offset_of__isReturning_30() { return static_cast<int32_t>(offsetof(GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C, ____isReturning_30)); }
	inline bool get__isReturning_30() const { return ____isReturning_30; }
	inline bool* get_address_of__isReturning_30() { return &____isReturning_30; }
	inline void set__isReturning_30(bool value)
	{
		____isReturning_30 = value;
	}

	inline static int32_t get_offset_of__isLocalizing_31() { return static_cast<int32_t>(offsetof(GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C, ____isLocalizing_31)); }
	inline bool get__isLocalizing_31() const { return ____isLocalizing_31; }
	inline bool* get_address_of__isLocalizing_31() { return &____isLocalizing_31; }
	inline void set__isLocalizing_31(bool value)
	{
		____isLocalizing_31 = value;
	}

	inline static int32_t get_offset_of__enablingGeospatial_32() { return static_cast<int32_t>(offsetof(GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C, ____enablingGeospatial_32)); }
	inline bool get__enablingGeospatial_32() const { return ____enablingGeospatial_32; }
	inline bool* get_address_of__enablingGeospatial_32() { return &____enablingGeospatial_32; }
	inline void set__enablingGeospatial_32(bool value)
	{
		____enablingGeospatial_32 = value;
	}

	inline static int32_t get_offset_of__shouldResolvingHistory_33() { return static_cast<int32_t>(offsetof(GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C, ____shouldResolvingHistory_33)); }
	inline bool get__shouldResolvingHistory_33() const { return ____shouldResolvingHistory_33; }
	inline bool* get_address_of__shouldResolvingHistory_33() { return &____shouldResolvingHistory_33; }
	inline void set__shouldResolvingHistory_33(bool value)
	{
		____shouldResolvingHistory_33 = value;
	}

	inline static int32_t get_offset_of__localizationPassedTime_34() { return static_cast<int32_t>(offsetof(GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C, ____localizationPassedTime_34)); }
	inline float get__localizationPassedTime_34() const { return ____localizationPassedTime_34; }
	inline float* get_address_of__localizationPassedTime_34() { return &____localizationPassedTime_34; }
	inline void set__localizationPassedTime_34(float value)
	{
		____localizationPassedTime_34 = value;
	}

	inline static int32_t get_offset_of__configurePrepareTime_35() { return static_cast<int32_t>(offsetof(GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C, ____configurePrepareTime_35)); }
	inline float get__configurePrepareTime_35() const { return ____configurePrepareTime_35; }
	inline float* get_address_of__configurePrepareTime_35() { return &____configurePrepareTime_35; }
	inline void set__configurePrepareTime_35(float value)
	{
		____configurePrepareTime_35 = value;
	}

	inline static int32_t get_offset_of__historyCollection_36() { return static_cast<int32_t>(offsetof(GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C, ____historyCollection_36)); }
	inline GeospatialAnchorHistoryCollection_t36DBFC64D28A956FECCE7DD20DE5E7B7A53F9645 * get__historyCollection_36() const { return ____historyCollection_36; }
	inline GeospatialAnchorHistoryCollection_t36DBFC64D28A956FECCE7DD20DE5E7B7A53F9645 ** get_address_of__historyCollection_36() { return &____historyCollection_36; }
	inline void set__historyCollection_36(GeospatialAnchorHistoryCollection_t36DBFC64D28A956FECCE7DD20DE5E7B7A53F9645 * value)
	{
		____historyCollection_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____historyCollection_36), (void*)value);
	}

	inline static int32_t get_offset_of__anchorObjects_37() { return static_cast<int32_t>(offsetof(GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C, ____anchorObjects_37)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get__anchorObjects_37() const { return ____anchorObjects_37; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of__anchorObjects_37() { return &____anchorObjects_37; }
	inline void set__anchorObjects_37(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		____anchorObjects_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____anchorObjects_37), (void*)value);
	}
};


// Rotate
struct Rotate_tC69B3ABBABA1DB1DFD96A92633DF3743CBB57789  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Google.XR.ARCoreExtensions.Samples.Geospatial.SafeAreaScaler
struct SafeAreaScaler_t339E86182D900396D39D80FAE1A2C547CF647CCC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Rect Google.XR.ARCoreExtensions.Samples.Geospatial.SafeAreaScaler::_screenSafeArea
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ____screenSafeArea_4;

public:
	inline static int32_t get_offset_of__screenSafeArea_4() { return static_cast<int32_t>(offsetof(SafeAreaScaler_t339E86182D900396D39D80FAE1A2C547CF647CCC, ____screenSafeArea_4)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get__screenSafeArea_4() const { return ____screenSafeArea_4; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of__screenSafeArea_4() { return &____screenSafeArea_4; }
	inline void set__screenSafeArea_4(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		____screenSafeArea_4 = value;
	}
};


// SampleScript
struct SampleScript_tADEACD51DA09B1912CF20CB233644641C8A36186  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Google.XR.ARCoreExtensions.AREarthManager SampleScript::EarthManager
	AREarthManager_tC7BD26586198E227BFD80ED37AE297887DA20519 * ___EarthManager_4;
	// AR_Fukuoka.VpsInitializer SampleScript::Initializer
	VpsInitializer_tF90B64868562B7A4C54A3A9CB7F1946B11E13133 * ___Initializer_5;
	// UnityEngine.UI.Text SampleScript::OutputText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___OutputText_6;
	// System.Double SampleScript::HeadingThreshold
	double ___HeadingThreshold_7;
	// System.Double SampleScript::HorizontalThreshold
	double ___HorizontalThreshold_8;
	// System.Double SampleScript::Latitude
	double ___Latitude_9;
	// System.Double SampleScript::Longitude
	double ___Longitude_10;
	// System.Double SampleScript::Altitude
	double ___Altitude_11;
	// System.Double SampleScript::Heading
	double ___Heading_12;
	// UnityEngine.GameObject SampleScript::ContentPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ContentPrefab_13;
	// UnityEngine.GameObject SampleScript::displayObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___displayObject_14;
	// UnityEngine.XR.ARFoundation.ARAnchorManager SampleScript::AnchorManager
	ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F * ___AnchorManager_15;

public:
	inline static int32_t get_offset_of_EarthManager_4() { return static_cast<int32_t>(offsetof(SampleScript_tADEACD51DA09B1912CF20CB233644641C8A36186, ___EarthManager_4)); }
	inline AREarthManager_tC7BD26586198E227BFD80ED37AE297887DA20519 * get_EarthManager_4() const { return ___EarthManager_4; }
	inline AREarthManager_tC7BD26586198E227BFD80ED37AE297887DA20519 ** get_address_of_EarthManager_4() { return &___EarthManager_4; }
	inline void set_EarthManager_4(AREarthManager_tC7BD26586198E227BFD80ED37AE297887DA20519 * value)
	{
		___EarthManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EarthManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_Initializer_5() { return static_cast<int32_t>(offsetof(SampleScript_tADEACD51DA09B1912CF20CB233644641C8A36186, ___Initializer_5)); }
	inline VpsInitializer_tF90B64868562B7A4C54A3A9CB7F1946B11E13133 * get_Initializer_5() const { return ___Initializer_5; }
	inline VpsInitializer_tF90B64868562B7A4C54A3A9CB7F1946B11E13133 ** get_address_of_Initializer_5() { return &___Initializer_5; }
	inline void set_Initializer_5(VpsInitializer_tF90B64868562B7A4C54A3A9CB7F1946B11E13133 * value)
	{
		___Initializer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Initializer_5), (void*)value);
	}

	inline static int32_t get_offset_of_OutputText_6() { return static_cast<int32_t>(offsetof(SampleScript_tADEACD51DA09B1912CF20CB233644641C8A36186, ___OutputText_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_OutputText_6() const { return ___OutputText_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_OutputText_6() { return &___OutputText_6; }
	inline void set_OutputText_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___OutputText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OutputText_6), (void*)value);
	}

	inline static int32_t get_offset_of_HeadingThreshold_7() { return static_cast<int32_t>(offsetof(SampleScript_tADEACD51DA09B1912CF20CB233644641C8A36186, ___HeadingThreshold_7)); }
	inline double get_HeadingThreshold_7() const { return ___HeadingThreshold_7; }
	inline double* get_address_of_HeadingThreshold_7() { return &___HeadingThreshold_7; }
	inline void set_HeadingThreshold_7(double value)
	{
		___HeadingThreshold_7 = value;
	}

	inline static int32_t get_offset_of_HorizontalThreshold_8() { return static_cast<int32_t>(offsetof(SampleScript_tADEACD51DA09B1912CF20CB233644641C8A36186, ___HorizontalThreshold_8)); }
	inline double get_HorizontalThreshold_8() const { return ___HorizontalThreshold_8; }
	inline double* get_address_of_HorizontalThreshold_8() { return &___HorizontalThreshold_8; }
	inline void set_HorizontalThreshold_8(double value)
	{
		___HorizontalThreshold_8 = value;
	}

	inline static int32_t get_offset_of_Latitude_9() { return static_cast<int32_t>(offsetof(SampleScript_tADEACD51DA09B1912CF20CB233644641C8A36186, ___Latitude_9)); }
	inline double get_Latitude_9() const { return ___Latitude_9; }
	inline double* get_address_of_Latitude_9() { return &___Latitude_9; }
	inline void set_Latitude_9(double value)
	{
		___Latitude_9 = value;
	}

	inline static int32_t get_offset_of_Longitude_10() { return static_cast<int32_t>(offsetof(SampleScript_tADEACD51DA09B1912CF20CB233644641C8A36186, ___Longitude_10)); }
	inline double get_Longitude_10() const { return ___Longitude_10; }
	inline double* get_address_of_Longitude_10() { return &___Longitude_10; }
	inline void set_Longitude_10(double value)
	{
		___Longitude_10 = value;
	}

	inline static int32_t get_offset_of_Altitude_11() { return static_cast<int32_t>(offsetof(SampleScript_tADEACD51DA09B1912CF20CB233644641C8A36186, ___Altitude_11)); }
	inline double get_Altitude_11() const { return ___Altitude_11; }
	inline double* get_address_of_Altitude_11() { return &___Altitude_11; }
	inline void set_Altitude_11(double value)
	{
		___Altitude_11 = value;
	}

	inline static int32_t get_offset_of_Heading_12() { return static_cast<int32_t>(offsetof(SampleScript_tADEACD51DA09B1912CF20CB233644641C8A36186, ___Heading_12)); }
	inline double get_Heading_12() const { return ___Heading_12; }
	inline double* get_address_of_Heading_12() { return &___Heading_12; }
	inline void set_Heading_12(double value)
	{
		___Heading_12 = value;
	}

	inline static int32_t get_offset_of_ContentPrefab_13() { return static_cast<int32_t>(offsetof(SampleScript_tADEACD51DA09B1912CF20CB233644641C8A36186, ___ContentPrefab_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ContentPrefab_13() const { return ___ContentPrefab_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ContentPrefab_13() { return &___ContentPrefab_13; }
	inline void set_ContentPrefab_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ContentPrefab_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ContentPrefab_13), (void*)value);
	}

	inline static int32_t get_offset_of_displayObject_14() { return static_cast<int32_t>(offsetof(SampleScript_tADEACD51DA09B1912CF20CB233644641C8A36186, ___displayObject_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_displayObject_14() const { return ___displayObject_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_displayObject_14() { return &___displayObject_14; }
	inline void set_displayObject_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___displayObject_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayObject_14), (void*)value);
	}

	inline static int32_t get_offset_of_AnchorManager_15() { return static_cast<int32_t>(offsetof(SampleScript_tADEACD51DA09B1912CF20CB233644641C8A36186, ___AnchorManager_15)); }
	inline ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F * get_AnchorManager_15() const { return ___AnchorManager_15; }
	inline ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F ** get_address_of_AnchorManager_15() { return &___AnchorManager_15; }
	inline void set_AnchorManager_15(ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F * value)
	{
		___AnchorManager_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AnchorManager_15), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// AR_Fukuoka.VpsInitializer
struct VpsInitializer_tF90B64868562B7A4C54A3A9CB7F1946B11E13133  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Google.XR.ARCoreExtensions.AREarthManager AR_Fukuoka.VpsInitializer::EarthManager
	AREarthManager_tC7BD26586198E227BFD80ED37AE297887DA20519 * ___EarthManager_4;
	// Google.XR.ARCoreExtensions.ARCoreExtensions AR_Fukuoka.VpsInitializer::ARCoreExtensions
	ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * ___ARCoreExtensions_5;
	// System.Boolean AR_Fukuoka.VpsInitializer::_isReturning
	bool ____isReturning_6;
	// System.Boolean AR_Fukuoka.VpsInitializer::_enablingGeospatial
	bool ____enablingGeospatial_7;
	// System.Single AR_Fukuoka.VpsInitializer::_configurePrepareTime
	float ____configurePrepareTime_8;
	// System.Boolean AR_Fukuoka.VpsInitializer::_isReady
	bool ____isReady_9;
	// System.Boolean AR_Fukuoka.VpsInitializer::_lockScreenToPortrait
	bool ____lockScreenToPortrait_10;

public:
	inline static int32_t get_offset_of_EarthManager_4() { return static_cast<int32_t>(offsetof(VpsInitializer_tF90B64868562B7A4C54A3A9CB7F1946B11E13133, ___EarthManager_4)); }
	inline AREarthManager_tC7BD26586198E227BFD80ED37AE297887DA20519 * get_EarthManager_4() const { return ___EarthManager_4; }
	inline AREarthManager_tC7BD26586198E227BFD80ED37AE297887DA20519 ** get_address_of_EarthManager_4() { return &___EarthManager_4; }
	inline void set_EarthManager_4(AREarthManager_tC7BD26586198E227BFD80ED37AE297887DA20519 * value)
	{
		___EarthManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EarthManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_ARCoreExtensions_5() { return static_cast<int32_t>(offsetof(VpsInitializer_tF90B64868562B7A4C54A3A9CB7F1946B11E13133, ___ARCoreExtensions_5)); }
	inline ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * get_ARCoreExtensions_5() const { return ___ARCoreExtensions_5; }
	inline ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB ** get_address_of_ARCoreExtensions_5() { return &___ARCoreExtensions_5; }
	inline void set_ARCoreExtensions_5(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * value)
	{
		___ARCoreExtensions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ARCoreExtensions_5), (void*)value);
	}

	inline static int32_t get_offset_of__isReturning_6() { return static_cast<int32_t>(offsetof(VpsInitializer_tF90B64868562B7A4C54A3A9CB7F1946B11E13133, ____isReturning_6)); }
	inline bool get__isReturning_6() const { return ____isReturning_6; }
	inline bool* get_address_of__isReturning_6() { return &____isReturning_6; }
	inline void set__isReturning_6(bool value)
	{
		____isReturning_6 = value;
	}

	inline static int32_t get_offset_of__enablingGeospatial_7() { return static_cast<int32_t>(offsetof(VpsInitializer_tF90B64868562B7A4C54A3A9CB7F1946B11E13133, ____enablingGeospatial_7)); }
	inline bool get__enablingGeospatial_7() const { return ____enablingGeospatial_7; }
	inline bool* get_address_of__enablingGeospatial_7() { return &____enablingGeospatial_7; }
	inline void set__enablingGeospatial_7(bool value)
	{
		____enablingGeospatial_7 = value;
	}

	inline static int32_t get_offset_of__configurePrepareTime_8() { return static_cast<int32_t>(offsetof(VpsInitializer_tF90B64868562B7A4C54A3A9CB7F1946B11E13133, ____configurePrepareTime_8)); }
	inline float get__configurePrepareTime_8() const { return ____configurePrepareTime_8; }
	inline float* get_address_of__configurePrepareTime_8() { return &____configurePrepareTime_8; }
	inline void set__configurePrepareTime_8(float value)
	{
		____configurePrepareTime_8 = value;
	}

	inline static int32_t get_offset_of__isReady_9() { return static_cast<int32_t>(offsetof(VpsInitializer_tF90B64868562B7A4C54A3A9CB7F1946B11E13133, ____isReady_9)); }
	inline bool get__isReady_9() const { return ____isReady_9; }
	inline bool* get_address_of__isReady_9() { return &____isReady_9; }
	inline void set__isReady_9(bool value)
	{
		____isReady_9 = value;
	}

	inline static int32_t get_offset_of__lockScreenToPortrait_10() { return static_cast<int32_t>(offsetof(VpsInitializer_tF90B64868562B7A4C54A3A9CB7F1946B11E13133, ____lockScreenToPortrait_10)); }
	inline bool get__lockScreenToPortrait_10() const { return ____lockScreenToPortrait_10; }
	inline bool* get_address_of__lockScreenToPortrait_10() { return &____lockScreenToPortrait_10; }
	inline void set__lockScreenToPortrait_10(bool value)
	{
		____lockScreenToPortrait_10 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARFoundation.ARAnchor>
struct ARTrackableManager_5_tF58ECFC7F6A90AF84C72F45AEED8FF0190D59C1C  : public SubsystemLifecycleManager_3_tA7DFD00C75E7891CE13E16A789857D4DA563A9A3
{
public:
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t31868ABD2D8EA88442789687465039D339583446 * ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t31868ABD2D8EA88442789687465039D339583446 * ___m_PendingAdds_10;

public:
	inline static int32_t get_offset_of_U3CsessionOriginU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tF58ECFC7F6A90AF84C72F45AEED8FF0190D59C1C, ___U3CsessionOriginU3Ek__BackingField_8)); }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * get_U3CsessionOriginU3Ek__BackingField_8() const { return ___U3CsessionOriginU3Ek__BackingField_8; }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 ** get_address_of_U3CsessionOriginU3Ek__BackingField_8() { return &___U3CsessionOriginU3Ek__BackingField_8; }
	inline void set_U3CsessionOriginU3Ek__BackingField_8(ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * value)
	{
		___U3CsessionOriginU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsessionOriginU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Trackables_9() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tF58ECFC7F6A90AF84C72F45AEED8FF0190D59C1C, ___m_Trackables_9)); }
	inline Dictionary_2_t31868ABD2D8EA88442789687465039D339583446 * get_m_Trackables_9() const { return ___m_Trackables_9; }
	inline Dictionary_2_t31868ABD2D8EA88442789687465039D339583446 ** get_address_of_m_Trackables_9() { return &___m_Trackables_9; }
	inline void set_m_Trackables_9(Dictionary_2_t31868ABD2D8EA88442789687465039D339583446 * value)
	{
		___m_Trackables_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Trackables_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_PendingAdds_10() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tF58ECFC7F6A90AF84C72F45AEED8FF0190D59C1C, ___m_PendingAdds_10)); }
	inline Dictionary_2_t31868ABD2D8EA88442789687465039D339583446 * get_m_PendingAdds_10() const { return ___m_PendingAdds_10; }
	inline Dictionary_2_t31868ABD2D8EA88442789687465039D339583446 ** get_address_of_m_PendingAdds_10() { return &___m_PendingAdds_10; }
	inline void set_m_PendingAdds_10(Dictionary_2_t31868ABD2D8EA88442789687465039D339583446 * value)
	{
		___m_PendingAdds_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PendingAdds_10), (void*)value);
	}
};

struct ARTrackableManager_5_tF58ECFC7F6A90AF84C72F45AEED8FF0190D59C1C_StaticFields
{
public:
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_tF58ECFC7F6A90AF84C72F45AEED8FF0190D59C1C * ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * ___s_Removed_13;

public:
	inline static int32_t get_offset_of_U3CinstanceU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tF58ECFC7F6A90AF84C72F45AEED8FF0190D59C1C_StaticFields, ___U3CinstanceU3Ek__BackingField_7)); }
	inline ARTrackableManager_5_tF58ECFC7F6A90AF84C72F45AEED8FF0190D59C1C * get_U3CinstanceU3Ek__BackingField_7() const { return ___U3CinstanceU3Ek__BackingField_7; }
	inline ARTrackableManager_5_tF58ECFC7F6A90AF84C72F45AEED8FF0190D59C1C ** get_address_of_U3CinstanceU3Ek__BackingField_7() { return &___U3CinstanceU3Ek__BackingField_7; }
	inline void set_U3CinstanceU3Ek__BackingField_7(ARTrackableManager_5_tF58ECFC7F6A90AF84C72F45AEED8FF0190D59C1C * value)
	{
		___U3CinstanceU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinstanceU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_Added_11() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tF58ECFC7F6A90AF84C72F45AEED8FF0190D59C1C_StaticFields, ___s_Added_11)); }
	inline List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * get_s_Added_11() const { return ___s_Added_11; }
	inline List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 ** get_address_of_s_Added_11() { return &___s_Added_11; }
	inline void set_s_Added_11(List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * value)
	{
		___s_Added_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Added_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_Updated_12() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tF58ECFC7F6A90AF84C72F45AEED8FF0190D59C1C_StaticFields, ___s_Updated_12)); }
	inline List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * get_s_Updated_12() const { return ___s_Updated_12; }
	inline List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 ** get_address_of_s_Updated_12() { return &___s_Updated_12; }
	inline void set_s_Updated_12(List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * value)
	{
		___s_Updated_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Updated_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_Removed_13() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tF58ECFC7F6A90AF84C72F45AEED8FF0190D59C1C_StaticFields, ___s_Removed_13)); }
	inline List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * get_s_Removed_13() const { return ___s_Removed_13; }
	inline List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 ** get_address_of_s_Removed_13() { return &___s_Removed_13; }
	inline void set_s_Removed_13(List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * value)
	{
		___s_Removed_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Removed_13), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B  : public SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD
{
public:
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_AttemptUpdate
	bool ___m_AttemptUpdate_7;
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_MatchFrameRate
	bool ___m_MatchFrameRate_8;
	// UnityEngine.XR.ARFoundation.TrackingMode UnityEngine.XR.ARFoundation.ARSession::m_TrackingMode
	int32_t ___m_TrackingMode_9;

public:
	inline static int32_t get_offset_of_m_AttemptUpdate_7() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B, ___m_AttemptUpdate_7)); }
	inline bool get_m_AttemptUpdate_7() const { return ___m_AttemptUpdate_7; }
	inline bool* get_address_of_m_AttemptUpdate_7() { return &___m_AttemptUpdate_7; }
	inline void set_m_AttemptUpdate_7(bool value)
	{
		___m_AttemptUpdate_7 = value;
	}

	inline static int32_t get_offset_of_m_MatchFrameRate_8() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B, ___m_MatchFrameRate_8)); }
	inline bool get_m_MatchFrameRate_8() const { return ___m_MatchFrameRate_8; }
	inline bool* get_address_of_m_MatchFrameRate_8() { return &___m_MatchFrameRate_8; }
	inline void set_m_MatchFrameRate_8(bool value)
	{
		___m_MatchFrameRate_8 = value;
	}

	inline static int32_t get_offset_of_m_TrackingMode_9() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B, ___m_TrackingMode_9)); }
	inline int32_t get_m_TrackingMode_9() const { return ___m_TrackingMode_9; }
	inline int32_t* get_address_of_m_TrackingMode_9() { return &___m_TrackingMode_9; }
	inline void set_m_TrackingMode_9(int32_t value)
	{
		___m_TrackingMode_9 = value;
	}
};

struct ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields
{
public:
	// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs> UnityEngine.XR.ARFoundation.ARSession::stateChanged
	Action_1_t5DF84322FFE12A24465E48164961CD724D109521 * ___stateChanged_10;
	// UnityEngine.XR.ARFoundation.ARSessionState UnityEngine.XR.ARFoundation.ARSession::s_State
	int32_t ___s_State_11;
	// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARFoundation.ARSession::s_NotTrackingReason
	int32_t ___s_NotTrackingReason_12;
	// UnityEngine.XR.ARSubsystems.SessionAvailability UnityEngine.XR.ARFoundation.ARSession::s_Availability
	int32_t ___s_Availability_13;

public:
	inline static int32_t get_offset_of_stateChanged_10() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields, ___stateChanged_10)); }
	inline Action_1_t5DF84322FFE12A24465E48164961CD724D109521 * get_stateChanged_10() const { return ___stateChanged_10; }
	inline Action_1_t5DF84322FFE12A24465E48164961CD724D109521 ** get_address_of_stateChanged_10() { return &___stateChanged_10; }
	inline void set_stateChanged_10(Action_1_t5DF84322FFE12A24465E48164961CD724D109521 * value)
	{
		___stateChanged_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stateChanged_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_State_11() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields, ___s_State_11)); }
	inline int32_t get_s_State_11() const { return ___s_State_11; }
	inline int32_t* get_address_of_s_State_11() { return &___s_State_11; }
	inline void set_s_State_11(int32_t value)
	{
		___s_State_11 = value;
	}

	inline static int32_t get_offset_of_s_NotTrackingReason_12() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields, ___s_NotTrackingReason_12)); }
	inline int32_t get_s_NotTrackingReason_12() const { return ___s_NotTrackingReason_12; }
	inline int32_t* get_address_of_s_NotTrackingReason_12() { return &___s_NotTrackingReason_12; }
	inline void set_s_NotTrackingReason_12(int32_t value)
	{
		___s_NotTrackingReason_12 = value;
	}

	inline static int32_t get_offset_of_s_Availability_13() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields, ___s_Availability_13)); }
	inline int32_t get_s_Availability_13() const { return ___s_Availability_13; }
	inline int32_t* get_address_of_s_Availability_13() { return &___s_Availability_13; }
	inline void set_s_Availability_13(int32_t value)
	{
		___s_Availability_13 = value;
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARAnchorManager
struct ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F  : public ARTrackableManager_5_tF58ECFC7F6A90AF84C72F45AEED8FF0190D59C1C
{
public:
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARAnchorManager::m_AnchorPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_AnchorPrefab_14;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs> UnityEngine.XR.ARFoundation.ARAnchorManager::anchorsChanged
	Action_1_t2010A517B3537EF3B4D41177377C7645A9C4439C * ___anchorsChanged_15;

public:
	inline static int32_t get_offset_of_m_AnchorPrefab_14() { return static_cast<int32_t>(offsetof(ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F, ___m_AnchorPrefab_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_AnchorPrefab_14() const { return ___m_AnchorPrefab_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_AnchorPrefab_14() { return &___m_AnchorPrefab_14; }
	inline void set_m_AnchorPrefab_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_AnchorPrefab_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnchorPrefab_14), (void*)value);
	}

	inline static int32_t get_offset_of_anchorsChanged_15() { return static_cast<int32_t>(offsetof(ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F, ___anchorsChanged_15)); }
	inline Action_1_t2010A517B3537EF3B4D41177377C7645A9C4439C * get_anchorsChanged_15() const { return ___anchorsChanged_15; }
	inline Action_1_t2010A517B3537EF3B4D41177377C7645A9C4439C ** get_address_of_anchorsChanged_15() { return &___anchorsChanged_15; }
	inline void set_anchorsChanged_15(Action_1_t2010A517B3537EF3B4D41177377C7645A9C4439C * value)
	{
		___anchorsChanged_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anchorsChanged_15), (void*)value);
	}
};


// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76413391DA2719B4DB0CC0BF0E9EC5523D6F63C4_gshared (List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m8DDB4F0C4145DA4CFCFBA2DA28BF8325ECE4F6C1_gshared (List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m93737BC6C0FA3C9C7C852FD330F7A5E6331E7326_gshared (List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7 * __this, GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F  ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7F941B3739722E9F76CB6C40DB4FE6C15E1ACA5B_gshared_inline (List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared (RuntimeObject * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t0FCEFA6AC2110A3938B99DCF45E3DF164622B657  List_1_GetEnumerator_m6DBFEC6E2FE7B6BA61EE8E65E0053FFB19507ECB_gshared (List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F  Enumerator_get_Current_mA2126C6AF888A1831EAF72528F3B47A8F96620F9_gshared_inline (Enumerator_t0FCEFA6AC2110A3938B99DCF45E3DF164622B657 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD85EDB4CB68497FD706B2186A459A04CE8CB924_gshared (Enumerator_t0FCEFA6AC2110A3938B99DCF45E3DF164622B657 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m0F17BCA778C5F59F1AED6017D544732C95D9791E_gshared (Enumerator_t0FCEFA6AC2110A3938B99DCF45E3DF164622B657 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared (String_t* ___json0, const RuntimeMethod* method);
// System.Void System.Predicate`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m189E8697C2564C312FF3569AC87B181933885744_gshared (Predicate_1_t8C8EB8CFC5F8234D0EC9F5AB760FA7AF6DDF2070 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::RemoveAll(System.Predicate`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m99F7ADEBACCC7D79E891B38EEC2D2757E11C8559_gshared (List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7 * __this, Predicate_1_t8C8EB8CFC5F8234D0EC9F5AB760FA7AF6DDF2070 * ___match0, const RuntimeMethod* method);
// System.Void System.Comparison`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparison_1__ctor_m543F7AD99E26365D1F82D1635BF13428D39219BB_gshared (Comparison_1_t880AB8C634CD664978C9A65AAA7050155FD6181C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::Sort(System.Comparison`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m0C698A4C40E2E04874B147D55616AD38BA9E81DC_gshared (List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7 * __this, Comparison_1_t880AB8C634CD664978C9A65AAA7050155FD6181C * ___comparison0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::RemoveRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m48523883FD816B365C20D12D508E4EE72DF229BD_gshared (List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7 * __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);

// System.String System.DateTime::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m242888E500DFD8CD675BDC455BC696AF47813954 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::.ctor(System.DateTime,System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialAnchorHistory__ctor_mF5091EC1C4BA24211B11553CEE9EAD77DCA7896E (GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___time0, double ___latitude1, double ___longitude2, double ___altitude3, double ___heading4, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C (const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::.ctor(System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialAnchorHistory__ctor_mE32F5D3294CA3EF3CB6C8C8774B07C34A7030161 (GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F * __this, double ___latitude0, double ___longitude1, double ___altitude2, double ___heading3, const RuntimeMethod* method);
// System.DateTime System.Convert::ToDateTime(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  Convert_ToDateTime_m08651A2284F866C061092CBEAD950A84EAFA1C26 (String_t* ___value0, const RuntimeMethod* method);
// System.DateTime Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::get_CreatedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  GeospatialAnchorHistory_get_CreatedTime_m311061BC32E89B768CFADCF9A412CB2689C4C6C8 (GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F * __this, const RuntimeMethod* method);
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.String Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GeospatialAnchorHistory_ToString_m51E9B550AE11AD01C86388C73CF8A0F02F1CD119 (GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::.ctor()
inline void List_1__ctor_m76413391DA2719B4DB0CC0BF0E9EC5523D6F63C4 (List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7 *, const RuntimeMethod*))List_1__ctor_m76413391DA2719B4DB0CC0BF0E9EC5523D6F63C4_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC (const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::SwitchToARView(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_SwitchToARView_mB6B856087CA02DDE3DC4CA815D897EC68CD54D0A (GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C * __this, bool ___enable0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_m4AED08D5321E5395FAC8D91C2C428DBE60C5FD4E (String_t* ___url0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7 (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9 (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
inline void List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::Clear()
inline void List_1_Clear_m8DDB4F0C4145DA4CFCFBA2DA28BF8325ECE4F6C1 (List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7 *, const RuntimeMethod*))List_1_Clear_m8DDB4F0C4145DA4CFCFBA2DA28BF8325ECE4F6C1_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::SaveGeospatialAnchorHistory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_SaveGeospatialAnchorHistory_mC6CC78F6BD3577EA44A96C4780FAE5E9AD0029EB (GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C * __this, const RuntimeMethod* method);
// Google.XR.ARCoreExtensions.GeospatialPose Google.XR.ARCoreExtensions.AREarthManager::get_CameraGeospatialPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GeospatialPose_t360F6479DE7A680CB4DF86477D81885FAC3C9C8D  AREarthManager_get_CameraGeospatialPose_mA068C7441E347DCAF92FAB2DCF8FC093370AC795 (AREarthManager_tC7BD26586198E227BFD80ED37AE297887DA20519 * __this, const RuntimeMethod* method);
// System.Boolean Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::PlaceGeospatialAnchor(Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GeospatialController_PlaceGeospatialAnchor_m1ECFFB81EB00791BAF476A64C3BB355B0BAEC170 (GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C * __this, GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F  ___history0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::Add(!0)
inline void List_1_Add_m93737BC6C0FA3C9C7C852FD330F7A5E6331E7326 (List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7 * __this, GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7 *, GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F , const RuntimeMethod*))List_1_Add_m93737BC6C0FA3C9C7C852FD330F7A5E6331E7326_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::get_Count()
inline int32_t List_1_get_Count_m7F941B3739722E9F76CB6C40DB4FE6C15E1ACA5B_inline (List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7 *, const RuntimeMethod*))List_1_get_Count_m7F941B3739722E9F76CB6C40DB4FE6C15E1ACA5B_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Screen::set_autorotateToLandscapeLeft(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_autorotateToLandscapeLeft_mA58796BBE0540504E54B1E0A06C06786456C4D5B (bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Screen::set_autorotateToLandscapeRight(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_autorotateToLandscapeRight_m7934E7BCD90CEE16D1C4A10E739DF1B021F2E255 (bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Screen::set_autorotateToPortraitUpsideDown(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_autorotateToPortraitUpsideDown_m55CA3FBCA4E8F835AC084D1B0FAE19D72A924906 (bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Screen::set_orientation(UnityEngine.ScreenOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_orientation_mBEF7687B3C2B4726AE40F2BBB3568B1B131B6D1B (int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_set_targetFrameRate_m0F44C8D07060E17D9D44D176888D14DBABE0CBFC (int32_t ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92 (String_t* ___key0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Debug::get_isDebugBuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Debug_get_isDebugBuild_mD0384FE4EA71AA14019FF171ADCE2F637C6E541C (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::LoadGeospatialAnchorHistory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_LoadGeospatialAnchorHistory_m4365D466B9F6E238BFA2464FAC3701B1305892AE (GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C * __this, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::UpdateDebugInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_UpdateDebugInfo_mDA5BB4D494830B86DB05101EF1E7B91339FDF5DB (GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C * __this, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::LifecycleUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_LifecycleUpdate_m2D1D95B3CC835DB9497AF29EE0D535035946550C (GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARFoundation.ARSessionState UnityEngine.XR.ARFoundation.ARSession::get_state()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARSession_get_state_m623161F1E2E5BA2752C821DD409880E6647CA130_inline (const RuntimeMethod* method);
// Google.XR.ARCoreExtensions.FeatureSupported Google.XR.ARCoreExtensions.AREarthManager::IsGeospatialModeSupported(Google.XR.ARCoreExtensions.GeospatialMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AREarthManager_IsGeospatialModeSupported_m75BA4AA162446135B3669330352CEFB70CD2B441 (AREarthManager_tC7BD26586198E227BFD80ED37AE297887DA20519 * __this, int32_t ___mode0, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::ReturnWithReason(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_ReturnWithReason_mD65615EC363CD8930C899041D74C855B07C8D4FC (GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C * __this, String_t* ___reason0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// Google.XR.ARCoreExtensions.EarthState Google.XR.ARCoreExtensions.AREarthManager::get_EarthState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AREarthManager_get_EarthState_mFAD4AF91C800C730AB194B3FE0C841F07E11EE59 (AREarthManager_tC7BD26586198E227BFD80ED37AE297887DA20519 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackingState Google.XR.ARCoreExtensions.AREarthManager::get_EarthTrackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AREarthManager_get_EarthTrackingState_mD84D99281E2E77F943360A37B47EDC8BA17AE01B (AREarthManager_tC7BD26586198E227BFD80ED37AE297887DA20519 * __this, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::ResolveHistory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_ResolveHistory_m0C1F954440A6BA9B2867D5D5C58497AA51354786 (GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C * __this, const RuntimeMethod* method);
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_mD145C8EE917C986BAA7C5243DEFAF4D333C521B4 (const RuntimeMethod* method);
// System.String System.Double::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m01772ACCBAF392BB24F3A8803DF40ADCF148D64C (double* __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398 (float ___angle0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis1, const RuntimeMethod* method);
// Google.XR.ARCoreExtensions.ARGeospatialAnchor Google.XR.ARCoreExtensions.ARAnchorManagerExtensions::AddAnchor(UnityEngine.XR.ARFoundation.ARAnchorManager,System.Double,System.Double,System.Double,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARGeospatialAnchor_tF7BD994A88D37D4DAADC1958C201114E6BDE8A3B * ARAnchorManagerExtensions_AddAnchor_mC8A1FD5398E265125A890A24F5DC26A146DBB8DC (ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F * ___anchorManager0, double ___latitude1, double ___longitude2, double ___altitude3, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___eunRotation4, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared)(___original0, ___parent1, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::GetEnumerator()
inline Enumerator_t0FCEFA6AC2110A3938B99DCF45E3DF164622B657  List_1_GetEnumerator_m6DBFEC6E2FE7B6BA61EE8E65E0053FFB19507ECB (List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t0FCEFA6AC2110A3938B99DCF45E3DF164622B657  (*) (List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7 *, const RuntimeMethod*))List_1_GetEnumerator_m6DBFEC6E2FE7B6BA61EE8E65E0053FFB19507ECB_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::get_Current()
inline GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F  Enumerator_get_Current_mA2126C6AF888A1831EAF72528F3B47A8F96620F9_inline (Enumerator_t0FCEFA6AC2110A3938B99DCF45E3DF164622B657 * __this, const RuntimeMethod* method)
{
	return ((  GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F  (*) (Enumerator_t0FCEFA6AC2110A3938B99DCF45E3DF164622B657 *, const RuntimeMethod*))Enumerator_get_Current_mA2126C6AF888A1831EAF72528F3B47A8F96620F9_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::MoveNext()
inline bool Enumerator_MoveNext_mCD85EDB4CB68497FD706B2186A459A04CE8CB924 (Enumerator_t0FCEFA6AC2110A3938B99DCF45E3DF164622B657 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t0FCEFA6AC2110A3938B99DCF45E3DF164622B657 *, const RuntimeMethod*))Enumerator_MoveNext_mCD85EDB4CB68497FD706B2186A459A04CE8CB924_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::Dispose()
inline void Enumerator_Dispose_m0F17BCA778C5F59F1AED6017D544732C95D9791E (Enumerator_t0FCEFA6AC2110A3938B99DCF45E3DF164622B657 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t0FCEFA6AC2110A3938B99DCF45E3DF164622B657 *, const RuntimeMethod*))Enumerator_Dispose_m0F17BCA778C5F59F1AED6017D544732C95D9791E_gshared)(__this, method);
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c__DisplayClass44_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass44_0__ctor_mF47C5DD1FA602D38A4E8E23EC2BB615B20DD4F9E (U3CU3Ec__DisplayClass44_0_t38D6B8575059B49A8EA27C9B42674AD47664C694 * __this, const RuntimeMethod* method);
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159 (String_t* ___key0, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistoryCollection>(System.String)
inline GeospatialAnchorHistoryCollection_t36DBFC64D28A956FECCE7DD20DE5E7B7A53F9645 * JsonUtility_FromJson_TisGeospatialAnchorHistoryCollection_t36DBFC64D28A956FECCE7DD20DE5E7B7A53F9645_m353BE8BDB74E01396C3AC612EF8062431CAC0E21 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  GeospatialAnchorHistoryCollection_t36DBFC64D28A956FECCE7DD20DE5E7B7A53F9645 * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared)(___json0, method);
}
// System.Void System.Predicate`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m189E8697C2564C312FF3569AC87B181933885744 (Predicate_1_t8C8EB8CFC5F8234D0EC9F5AB760FA7AF6DDF2070 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t8C8EB8CFC5F8234D0EC9F5AB760FA7AF6DDF2070 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m189E8697C2564C312FF3569AC87B181933885744_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::RemoveAll(System.Predicate`1<!0>)
inline int32_t List_1_RemoveAll_m99F7ADEBACCC7D79E891B38EEC2D2757E11C8559 (List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7 * __this, Predicate_1_t8C8EB8CFC5F8234D0EC9F5AB760FA7AF6DDF2070 * ___match0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7 *, Predicate_1_t8C8EB8CFC5F8234D0EC9F5AB760FA7AF6DDF2070 *, const RuntimeMethod*))List_1_RemoveAll_m99F7ADEBACCC7D79E891B38EEC2D2757E11C8559_gshared)(__this, ___match0, method);
}
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistoryCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialAnchorHistoryCollection__ctor_m50028AC7A470BBC4062D0162A0A5EDF1FBF74454 (GeospatialAnchorHistoryCollection_t36DBFC64D28A956FECCE7DD20DE5E7B7A53F9645 * __this, const RuntimeMethod* method);
// System.Void System.Comparison`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::.ctor(System.Object,System.IntPtr)
inline void Comparison_1__ctor_m543F7AD99E26365D1F82D1635BF13428D39219BB (Comparison_1_t880AB8C634CD664978C9A65AAA7050155FD6181C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_t880AB8C634CD664978C9A65AAA7050155FD6181C *, RuntimeObject *, intptr_t, const RuntimeMethod*))Comparison_1__ctor_m543F7AD99E26365D1F82D1635BF13428D39219BB_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::Sort(System.Comparison`1<!0>)
inline void List_1_Sort_m0C698A4C40E2E04874B147D55616AD38BA9E81DC (List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7 * __this, Comparison_1_t880AB8C634CD664978C9A65AAA7050155FD6181C * ___comparison0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7 *, Comparison_1_t880AB8C634CD664978C9A65AAA7050155FD6181C *, const RuntimeMethod*))List_1_Sort_m0C698A4C40E2E04874B147D55616AD38BA9E81DC_gshared)(__this, ___comparison0, method);
}
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::RemoveRange(System.Int32,System.Int32)
inline void List_1_RemoveRange_m48523883FD816B365C20D12D508E4EE72DF229BD (List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7 * __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7 *, int32_t, int32_t, const RuntimeMethod*))List_1_RemoveRange_m48523883FD816B365C20D12D508E4EE72DF229BD_gshared)(__this, ___index0, ___count1, method);
}
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F (int32_t ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// System.Void UnityEngine.Screen::set_sleepTimeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_sleepTimeout_mE9A766E696E76AC77EAADB4CA6412454577FCBB3 (int32_t ___value0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method);
// UnityEngine.LocationService UnityEngine.Input::get_location()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocationService_tDCB7C3AA7A10C4727D49676FD3A902F48C27F855 * Input_get_location_m5D0AE1016E410D3D7411904D0706456DE383F4E5 (const RuntimeMethod* method);
// UnityEngine.LocationServiceStatus UnityEngine.LocationService::get_status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LocationService_get_status_m1E90C9991825BDF5A3AC066D97F9198568055C54 (LocationService_tDCB7C3AA7A10C4727D49676FD3A902F48C27F855 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mE77655C011C18F49CAD740CED7940EF1C7000357 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, int32_t ___relativeTo3, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.Screen::get_safeArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  Screen_get_safeArea_m47E3A61627ECEAC2336C1FBFBF67A6C7503569F5 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Rect::op_Inequality(UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_op_Inequality_m6D87EE93EB6C68B78B8C044217EAFCE33EE12B66 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___lhs0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___rhs1, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.SafeAreaScaler::MatchRectTransformToSafeArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeAreaScaler_MatchRectTransformToSafeArea_m19DC4782CB4F6D952B4E8EFA933C4251A961D719 (SafeAreaScaler_t339E86182D900396D39D80FAE1A2C547CF647CCC * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Single UnityEngine.Rect::get_xMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMin_m02EA330BE4C4A07A3F18F50F257832E9E3C2B873 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_yMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMax_m9685BF55B44C51FF9BA080F9995073E458E1CDC3 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_xMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_yMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMin_m2C91041817D410B32B80E338764109D75ACB01E4 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_offsetMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_offsetMin_m86D7818770137C150B70A3842EBF03F494C34271 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_offsetMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_offsetMax_m5FDE1063C8BA1EC98D3C57C58DD2A1B9B721A8BF (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Boolean AR_Fukuoka.VpsInitializer::get_IsReady()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VpsInitializer_get_IsReady_m6779687169C91C6784E5B4DDAB5AE6E06F3C626F_inline (VpsInitializer_tF90B64868562B7A4C54A3A9CB7F1946B11E13133 * __this, const RuntimeMethod* method);
// System.Void SampleScript::ShowTrackingInfo(System.String,Google.XR.ARCoreExtensions.GeospatialPose,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleScript_ShowTrackingInfo_mCC07914D92859D65133ECD400EC2E40CFAF5FC19 (SampleScript_tADEACD51DA09B1912CF20CB233644641C8A36186 * __this, String_t* ___status0, GeospatialPose_t360F6479DE7A680CB4DF86477D81885FAC3C9C8D  ___pose1, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___obj2, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Vector3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// System.Void AR_Fukuoka.VpsInitializer::LifecycleUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VpsInitializer_LifecycleUpdate_m52179580CB5E4D275516779A0FF7B8A469659F00 (VpsInitializer_tF90B64868562B7A4C54A3A9CB7F1946B11E13133 * __this, const RuntimeMethod* method);
// System.Void AR_Fukuoka.VpsInitializer::ReturnWithReason(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VpsInitializer_ReturnWithReason_m7E619FD10FE916F2AF098D04C2862EE35C195CDE (VpsInitializer_tF90B64868562B7A4C54A3A9CB7F1946B11E13133 * __this, String_t* ___reason0, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m01DA06F9DE8819A82ECA8412A1EFCED4ADB999E7 (U3CU3Ec_t5B0BB4CFA8D219D09B10E20DB741FB7AE622B342 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::CompareTo(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_CompareTo_m2864B0ABAE4B8748D4092D1D16AE56EE0B248F93 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method);
// System.TimeSpan System.DateTime::Subtract(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  DateTime_Subtract_mB3CA7BD87D07F9A98AA7A571D7CA179A4209AE0B (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method);
// System.Int32 System.TimeSpan::get_Days()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Days_m4DDAF161E1C81C08CDF8AEFC1AD6AF08FAEE09A7 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
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
// Conversion methods for marshalling of: Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory
IL2CPP_EXTERN_C void GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F_marshal_pinvoke(const GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F& unmarshaled, GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F_marshaled_pinvoke& marshaled)
{
	marshaled.___SerializedTime_0 = il2cpp_codegen_marshal_string(unmarshaled.get_SerializedTime_0());
	marshaled.___Latitude_1 = unmarshaled.get_Latitude_1();
	marshaled.___Longitude_2 = unmarshaled.get_Longitude_2();
	marshaled.___Altitude_3 = unmarshaled.get_Altitude_3();
	marshaled.___Heading_4 = unmarshaled.get_Heading_4();
}
IL2CPP_EXTERN_C void GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F_marshal_pinvoke_back(const GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F_marshaled_pinvoke& marshaled, GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F& unmarshaled)
{
	unmarshaled.set_SerializedTime_0(il2cpp_codegen_marshal_string_result(marshaled.___SerializedTime_0));
	double unmarshaled_Latitude_temp_1 = 0.0;
	unmarshaled_Latitude_temp_1 = marshaled.___Latitude_1;
	unmarshaled.set_Latitude_1(unmarshaled_Latitude_temp_1);
	double unmarshaled_Longitude_temp_2 = 0.0;
	unmarshaled_Longitude_temp_2 = marshaled.___Longitude_2;
	unmarshaled.set_Longitude_2(unmarshaled_Longitude_temp_2);
	double unmarshaled_Altitude_temp_3 = 0.0;
	unmarshaled_Altitude_temp_3 = marshaled.___Altitude_3;
	unmarshaled.set_Altitude_3(unmarshaled_Altitude_temp_3);
	double unmarshaled_Heading_temp_4 = 0.0;
	unmarshaled_Heading_temp_4 = marshaled.___Heading_4;
	unmarshaled.set_Heading_4(unmarshaled_Heading_temp_4);
}
// Conversion method for clean up from marshalling of: Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory
IL2CPP_EXTERN_C void GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F_marshal_pinvoke_cleanup(GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___SerializedTime_0);
	marshaled.___SerializedTime_0 = NULL;
}
// Conversion methods for marshalling of: Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory
IL2CPP_EXTERN_C void GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F_marshal_com(const GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F& unmarshaled, GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F_marshaled_com& marshaled)
{
	marshaled.___SerializedTime_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_SerializedTime_0());
	marshaled.___Latitude_1 = unmarshaled.get_Latitude_1();
	marshaled.___Longitude_2 = unmarshaled.get_Longitude_2();
	marshaled.___Altitude_3 = unmarshaled.get_Altitude_3();
	marshaled.___Heading_4 = unmarshaled.get_Heading_4();
}
IL2CPP_EXTERN_C void GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F_marshal_com_back(const GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F_marshaled_com& marshaled, GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F& unmarshaled)
{
	unmarshaled.set_SerializedTime_0(il2cpp_codegen_marshal_bstring_result(marshaled.___SerializedTime_0));
	double unmarshaled_Latitude_temp_1 = 0.0;
	unmarshaled_Latitude_temp_1 = marshaled.___Latitude_1;
	unmarshaled.set_Latitude_1(unmarshaled_Latitude_temp_1);
	double unmarshaled_Longitude_temp_2 = 0.0;
	unmarshaled_Longitude_temp_2 = marshaled.___Longitude_2;
	unmarshaled.set_Longitude_2(unmarshaled_Longitude_temp_2);
	double unmarshaled_Altitude_temp_3 = 0.0;
	unmarshaled_Altitude_temp_3 = marshaled.___Altitude_3;
	unmarshaled.set_Altitude_3(unmarshaled_Altitude_temp_3);
	double unmarshaled_Heading_temp_4 = 0.0;
	unmarshaled_Heading_temp_4 = marshaled.___Heading_4;
	unmarshaled.set_Heading_4(unmarshaled_Heading_temp_4);
}
// Conversion method for clean up from marshalling of: Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory
IL2CPP_EXTERN_C void GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F_marshal_com_cleanup(GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___SerializedTime_0);
	marshaled.___SerializedTime_0 = NULL;
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::.ctor(System.DateTime,System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialAnchorHistory__ctor_mF5091EC1C4BA24211B11553CEE9EAD77DCA7896E (GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___time0, double ___latitude1, double ___longitude2, double ___altitude3, double ___heading4, const RuntimeMethod* method)
{
	{
		// SerializedTime = time.ToString();
		String_t* L_0;
		L_0 = DateTime_ToString_m242888E500DFD8CD675BDC455BC696AF47813954((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&___time0), /*hidden argument*/NULL);
		__this->set_SerializedTime_0(L_0);
		// Latitude = latitude;
		double L_1 = ___latitude1;
		__this->set_Latitude_1(L_1);
		// Longitude = longitude;
		double L_2 = ___longitude2;
		__this->set_Longitude_2(L_2);
		// Altitude = altitude;
		double L_3 = ___altitude3;
		__this->set_Altitude_3(L_3);
		// Heading = heading;
		double L_4 = ___heading4;
		__this->set_Heading_4(L_4);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void GeospatialAnchorHistory__ctor_mF5091EC1C4BA24211B11553CEE9EAD77DCA7896E_AdjustorThunk (RuntimeObject * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___time0, double ___latitude1, double ___longitude2, double ___altitude3, double ___heading4, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F * _thisAdjusted = reinterpret_cast<GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F *>(__this + _offset);
	GeospatialAnchorHistory__ctor_mF5091EC1C4BA24211B11553CEE9EAD77DCA7896E(_thisAdjusted, ___time0, ___latitude1, ___longitude2, ___altitude3, ___heading4, method);
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::.ctor(System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialAnchorHistory__ctor_mE32F5D3294CA3EF3CB6C8C8774B07C34A7030161 (GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F * __this, double ___latitude0, double ___longitude1, double ___altitude2, double ___heading3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this(DateTime.Now, latitude, longitude, altitude, heading)
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0;
		L_0 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C(/*hidden argument*/NULL);
		double L_1 = ___latitude0;
		double L_2 = ___longitude1;
		double L_3 = ___altitude2;
		double L_4 = ___heading3;
		GeospatialAnchorHistory__ctor_mF5091EC1C4BA24211B11553CEE9EAD77DCA7896E((GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F *)__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void GeospatialAnchorHistory__ctor_mE32F5D3294CA3EF3CB6C8C8774B07C34A7030161_AdjustorThunk (RuntimeObject * __this, double ___latitude0, double ___longitude1, double ___altitude2, double ___heading3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F * _thisAdjusted = reinterpret_cast<GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F *>(__this + _offset);
	GeospatialAnchorHistory__ctor_mE32F5D3294CA3EF3CB6C8C8774B07C34A7030161(_thisAdjusted, ___latitude0, ___longitude1, ___altitude2, ___heading3, method);
}
// System.DateTime Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::get_CreatedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  GeospatialAnchorHistory_get_CreatedTime_m311061BC32E89B768CFADCF9A412CB2689C4C6C8 (GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DateTime CreatedTime => Convert.ToDateTime(SerializedTime);
		String_t* L_0 = __this->get_SerializedTime_0();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1;
		L_1 = Convert_ToDateTime_m08651A2284F866C061092CBEAD950A84EAFA1C26(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  GeospatialAnchorHistory_get_CreatedTime_m311061BC32E89B768CFADCF9A412CB2689C4C6C8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F * _thisAdjusted = reinterpret_cast<GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F *>(__this + _offset);
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  _returnValue;
	_returnValue = GeospatialAnchorHistory_get_CreatedTime_m311061BC32E89B768CFADCF9A412CB2689C4C6C8(_thisAdjusted, method);
	return _returnValue;
}
// System.String Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GeospatialAnchorHistory_ToString_m51E9B550AE11AD01C86388C73CF8A0F02F1CD119 (GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return JsonUtility.ToJson(this);
		GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F  L_0 = (*(GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F *)__this);
		GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F  L_1 = L_0;
		RuntimeObject * L_2 = Box(GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  String_t* GeospatialAnchorHistory_ToString_m51E9B550AE11AD01C86388C73CF8A0F02F1CD119_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F * _thisAdjusted = reinterpret_cast<GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = GeospatialAnchorHistory_ToString_m51E9B550AE11AD01C86388C73CF8A0F02F1CD119(_thisAdjusted, method);
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
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistoryCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialAnchorHistoryCollection__ctor_m50028AC7A470BBC4062D0162A0A5EDF1FBF74454 (GeospatialAnchorHistoryCollection_t36DBFC64D28A956FECCE7DD20DE5E7B7A53F9645 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m76413391DA2719B4DB0CC0BF0E9EC5523D6F63C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<GeospatialAnchorHistory> Collection = new List<GeospatialAnchorHistory>();
		List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7 * L_0 = (List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7 *)il2cpp_codegen_object_new(List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7_il2cpp_TypeInfo_var);
		List_1__ctor_m76413391DA2719B4DB0CC0BF0E9EC5523D6F63C4(L_0, /*hidden argument*/List_1__ctor_m76413391DA2719B4DB0CC0BF0E9EC5523D6F63C4_RuntimeMethod_var);
		__this->set_Collection_0(L_0);
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
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::OnGetStartedClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_OnGetStartedClicked_mA37B2BCE8CDB1FEF97EF0D22A6F9B181A4292D56 (GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDD0E29C4A5251B9843B15E7DBD03F1411828478);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt(_hasDisplayedPrivacyPromptKey, 1);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralCDD0E29C4A5251B9843B15E7DBD03F1411828478, 1, /*hidden argument*/NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC(/*hidden argument*/NULL);
		// SwitchToARView(true);
		GeospatialController_SwitchToARView_mB6B856087CA02DDE3DC4CA815D897EC68CD54D0A(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::OnLearnMoreClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_OnLearnMoreClicked_m765C4D109C7D0EC1F67D371200E4215F3972FAE9 (GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF7042B13A54AE6D2F33826F9F5FA12143D46847);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.OpenURL(
		//     "https://developers.google.com/ar/data-privacy");
		Application_OpenURL_m4AED08D5321E5395FAC8D91C2C428DBE60C5FD4E(_stringLiteralEF7042B13A54AE6D2F33826F9F5FA12143D46847, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::OnClearAllClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_OnClearAllClicked_mD10A19B394F16566DD557AA701CBFC9E41EC6C95 (GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m8DDB4F0C4145DA4CFCFBA2DA28BF8325ECE4F6C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral402969FEF140B759AA2E21468D1A944100BDBBF1);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (var anchor in _anchorObjects)
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get__anchorObjects_37();
		NullCheck(L_0);
		Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  L_1;
		L_1 = List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6(L_0, /*hidden argument*/List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001a;
		}

IL_000e:
		{
			// foreach (var anchor in _anchorObjects)
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
			L_2 = Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
			// Destroy(anchor);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
		}

IL_001a:
		{
			// foreach (var anchor in _anchorObjects)
			bool L_3;
			L_3 = Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
			if (L_3)
			{
				goto IL_000e;
			}
		}

IL_0023:
		{
			IL2CPP_LEAVE(0x33, FINALLY_0025);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0025;
	}

FINALLY_0025:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		IL2CPP_END_FINALLY(37)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(37)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x33, IL_0033)
	}

IL_0033:
	{
		// _anchorObjects.Clear();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_4 = __this->get__anchorObjects_37();
		NullCheck(L_4);
		List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432(L_4, /*hidden argument*/List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432_RuntimeMethod_var);
		// _historyCollection.Collection.Clear();
		GeospatialAnchorHistoryCollection_t36DBFC64D28A956FECCE7DD20DE5E7B7A53F9645 * L_5 = __this->get__historyCollection_36();
		NullCheck(L_5);
		List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7 * L_6 = L_5->get_Collection_0();
		NullCheck(L_6);
		List_1_Clear_m8DDB4F0C4145DA4CFCFBA2DA28BF8325ECE4F6C1(L_6, /*hidden argument*/List_1_Clear_m8DDB4F0C4145DA4CFCFBA2DA28BF8325ECE4F6C1_RuntimeMethod_var);
		// SnackBarText.text = "Anchor(s) cleared!";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = __this->get_SnackBarText_16();
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, _stringLiteral402969FEF140B759AA2E21468D1A944100BDBBF1);
		// ClearAllButton.gameObject.SetActive(false);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_8 = __this->get_ClearAllButton_12();
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)0, /*hidden argument*/NULL);
		// SaveGeospatialAnchorHistory();
		GeospatialController_SaveGeospatialAnchorHistory_mC6CC78F6BD3577EA44A96C4780FAE5E9AD0029EB(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::OnSetAnchorClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_OnSetAnchorClicked_mF0F6767DB41AC34FFE3B6C9FC1EF42EA9AC28BBA (GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m93737BC6C0FA3C9C7C852FD330F7A5E6331E7326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7F941B3739722E9F76CB6C40DB4FE6C15E1ACA5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E227568A75A99F99D64B36A7F13EF4EBA70B06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78E274AC89F9BB2B7C9C9C38754AE07662487DED);
		s_Il2CppMethodInitialized = true;
	}
	GeospatialPose_t360F6479DE7A680CB4DF86477D81885FAC3C9C8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var pose = EarthManager.CameraGeospatialPose;
		AREarthManager_tC7BD26586198E227BFD80ED37AE297887DA20519 * L_0 = __this->get_EarthManager_7();
		NullCheck(L_0);
		GeospatialPose_t360F6479DE7A680CB4DF86477D81885FAC3C9C8D  L_1;
		L_1 = AREarthManager_get_CameraGeospatialPose_mA068C7441E347DCAF92FAB2DCF8FC093370AC795(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// GeospatialAnchorHistory history = new GeospatialAnchorHistory(
		//     pose.Latitude, pose.Longitude, pose.Altitude, pose.Heading);
		GeospatialPose_t360F6479DE7A680CB4DF86477D81885FAC3C9C8D  L_2 = V_0;
		double L_3 = L_2.get_Latitude_0();
		GeospatialPose_t360F6479DE7A680CB4DF86477D81885FAC3C9C8D  L_4 = V_0;
		double L_5 = L_4.get_Longitude_1();
		GeospatialPose_t360F6479DE7A680CB4DF86477D81885FAC3C9C8D  L_6 = V_0;
		double L_7 = L_6.get_Altitude_2();
		GeospatialPose_t360F6479DE7A680CB4DF86477D81885FAC3C9C8D  L_8 = V_0;
		double L_9 = L_8.get_Heading_3();
		GeospatialAnchorHistory__ctor_mE32F5D3294CA3EF3CB6C8C8774B07C34A7030161((GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F *)(&V_1), L_3, L_5, L_7, L_9, /*hidden argument*/NULL);
		// if (PlaceGeospatialAnchor(history))
		GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F  L_10 = V_1;
		bool L_11;
		L_11 = GeospatialController_PlaceGeospatialAnchor_m1ECFFB81EB00791BAF476A64C3BB355B0BAEC170(__this, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_006c;
		}
	}
	{
		// _historyCollection.Collection.Add(history);
		GeospatialAnchorHistoryCollection_t36DBFC64D28A956FECCE7DD20DE5E7B7A53F9645 * L_12 = __this->get__historyCollection_36();
		NullCheck(L_12);
		List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7 * L_13 = L_12->get_Collection_0();
		GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F  L_14 = V_1;
		NullCheck(L_13);
		List_1_Add_m93737BC6C0FA3C9C7C852FD330F7A5E6331E7326(L_13, L_14, /*hidden argument*/List_1_Add_m93737BC6C0FA3C9C7C852FD330F7A5E6331E7326_RuntimeMethod_var);
		// SnackBarText.text = $"{_anchorObjects.Count} Anchor(s) Set!";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_15 = __this->get_SnackBarText_16();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_16 = __this->get__anchorObjects_37();
		NullCheck(L_16);
		int32_t L_17;
		L_17 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_16, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		int32_t L_18 = L_17;
		RuntimeObject * L_19 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_18);
		String_t* L_20;
		L_20 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral78E274AC89F9BB2B7C9C9C38754AE07662487DED, L_19, /*hidden argument*/NULL);
		NullCheck(L_15);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_15, L_20);
		// }
		goto IL_007c;
	}

IL_006c:
	{
		// SnackBarText.text = "Failed to set an anchor!";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_21 = __this->get_SnackBarText_16();
		NullCheck(L_21);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_21, _stringLiteral14E227568A75A99F99D64B36A7F13EF4EBA70B06);
	}

IL_007c:
	{
		// ClearAllButton.gameObject.SetActive(_historyCollection.Collection.Count > 0);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_22 = __this->get_ClearAllButton_12();
		NullCheck(L_22);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_22, /*hidden argument*/NULL);
		GeospatialAnchorHistoryCollection_t36DBFC64D28A956FECCE7DD20DE5E7B7A53F9645 * L_24 = __this->get__historyCollection_36();
		NullCheck(L_24);
		List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7 * L_25 = L_24->get_Collection_0();
		NullCheck(L_25);
		int32_t L_26;
		L_26 = List_1_get_Count_m7F941B3739722E9F76CB6C40DB4FE6C15E1ACA5B_inline(L_25, /*hidden argument*/List_1_get_Count_m7F941B3739722E9F76CB6C40DB4FE6C15E1ACA5B_RuntimeMethod_var);
		NullCheck(L_23);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_23, (bool)((((int32_t)L_26) > ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// SaveGeospatialAnchorHistory();
		GeospatialController_SaveGeospatialAnchorHistory_mC6CC78F6BD3577EA44A96C4780FAE5E9AD0029EB(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_Awake_m3AD7077EEB04D01CF3A05E1D8A264E6D5FEDB40B (GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral002FD9BA3AE0E060C2E4E855D3879613062FB95E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84603BEBCE50D165E99F4F1BE49F02FF0B3BC3DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC2DBADB2D94879827209856D3681D3473726A46);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Screen.autorotateToLandscapeLeft = false;
		Screen_set_autorotateToLandscapeLeft_mA58796BBE0540504E54B1E0A06C06786456C4D5B((bool)0, /*hidden argument*/NULL);
		// Screen.autorotateToLandscapeRight = false;
		Screen_set_autorotateToLandscapeRight_m7934E7BCD90CEE16D1C4A10E739DF1B021F2E255((bool)0, /*hidden argument*/NULL);
		// Screen.autorotateToPortraitUpsideDown = false;
		Screen_set_autorotateToPortraitUpsideDown_m55CA3FBCA4E8F835AC084D1B0FAE19D72A924906((bool)0, /*hidden argument*/NULL);
		// Screen.orientation = ScreenOrientation.Portrait;
		Screen_set_orientation_mBEF7687B3C2B4726AE40F2BBB3568B1B131B6D1B(1, /*hidden argument*/NULL);
		// Application.targetFrameRate = 60;
		Application_set_targetFrameRate_m0F44C8D07060E17D9D44D176888D14DBABE0CBFC(((int32_t)60), /*hidden argument*/NULL);
		// if (SessionOrigin == null)
		ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * L_0 = __this->get_SessionOrigin_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		// Debug.LogError("Cannot find ARSessionOrigin.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral002FD9BA3AE0E060C2E4E855D3879613062FB95E, /*hidden argument*/NULL);
	}

IL_0037:
	{
		// if (Session == null)
		ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * L_2 = __this->get_Session_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_004f;
		}
	}
	{
		// Debug.LogError("Cannot find ARSession.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral84603BEBCE50D165E99F4F1BE49F02FF0B3BC3DB, /*hidden argument*/NULL);
	}

IL_004f:
	{
		// if (ARCoreExtensions == null)
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_4 = __this->get_ARCoreExtensions_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0067;
		}
	}
	{
		// Debug.LogError("Cannot find ARCoreExtensions.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralEC2DBADB2D94879827209856D3681D3473726A46, /*hidden argument*/NULL);
	}

IL_0067:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_OnEnable_m52C5E4D239C45176714A5E6197D9CA65CCE14F15 (GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7F941B3739722E9F76CB6C40DB4FE6C15E1ACA5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral098533C94B14961259EF414728C4A68C6289E9AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDD0E29C4A5251B9843B15E7DBD03F1411828478);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B2_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B3_1 = NULL;
	{
		// SwitchToARView(PlayerPrefs.HasKey(_hasDisplayedPrivacyPromptKey));
		bool L_0;
		L_0 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(_stringLiteralCDD0E29C4A5251B9843B15E7DBD03F1411828478, /*hidden argument*/NULL);
		GeospatialController_SwitchToARView_mB6B856087CA02DDE3DC4CA815D897EC68CD54D0A(__this, L_0, /*hidden argument*/NULL);
		// _isReturning = false;
		__this->set__isReturning_30((bool)0);
		// _enablingGeospatial = false;
		__this->set__enablingGeospatial_32((bool)0);
		// InfoPanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_InfoPanel_14();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// SetAnchorButton.gameObject.SetActive(false);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_2 = __this->get_SetAnchorButton_13();
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// ClearAllButton.gameObject.SetActive(false);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_4 = __this->get_ClearAllButton_12();
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
		// DebugText.gameObject.SetActive(Debug.isDebugBuild && EarthManager != null);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6 = __this->get_DebugText_17();
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Debug_get_isDebugBuild_mD0384FE4EA71AA14019FF171ADCE2F637C6E541C(/*hidden argument*/NULL);
		G_B1_0 = L_7;
		if (!L_8)
		{
			G_B2_0 = L_7;
			goto IL_006c;
		}
	}
	{
		AREarthManager_tC7BD26586198E227BFD80ED37AE297887DA20519 * L_9 = __this->get_EarthManager_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_10));
		G_B3_1 = G_B1_0;
		goto IL_006d;
	}

IL_006c:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_006d:
	{
		NullCheck(G_B3_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(G_B3_1, (bool)G_B3_0, /*hidden argument*/NULL);
		// _localizationPassedTime = 0f;
		__this->set__localizationPassedTime_34((0.0f));
		// _isLocalizing = true;
		__this->set__isLocalizing_31((bool)1);
		// SnackBarText.text = _localizingMessage;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_11 = __this->get_SnackBarText_16();
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, _stringLiteral098533C94B14961259EF414728C4A68C6289E9AE);
		// LoadGeospatialAnchorHistory();
		GeospatialController_LoadGeospatialAnchorHistory_m4365D466B9F6E238BFA2464FAC3701B1305892AE(__this, /*hidden argument*/NULL);
		// _shouldResolvingHistory = _historyCollection.Collection.Count > 0;
		GeospatialAnchorHistoryCollection_t36DBFC64D28A956FECCE7DD20DE5E7B7A53F9645 * L_12 = __this->get__historyCollection_36();
		NullCheck(L_12);
		List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7 * L_13 = L_12->get_Collection_0();
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_m7F941B3739722E9F76CB6C40DB4FE6C15E1ACA5B_inline(L_13, /*hidden argument*/List_1_get_Count_m7F941B3739722E9F76CB6C40DB4FE6C15E1ACA5B_RuntimeMethod_var);
		__this->set__shouldResolvingHistory_33((bool)((((int32_t)L_14) > ((int32_t)0))? 1 : 0));
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_OnDisable_mBD1C94F0C134C1C590ECD71755636FE99C93DF98 (GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (var anchor in _anchorObjects)
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get__anchorObjects_37();
		NullCheck(L_0);
		Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  L_1;
		L_1 = List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6(L_0, /*hidden argument*/List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001a;
		}

IL_000e:
		{
			// foreach (var anchor in _anchorObjects)
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
			L_2 = Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
			// Destroy(anchor);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
		}

IL_001a:
		{
			// foreach (var anchor in _anchorObjects)
			bool L_3;
			L_3 = Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
			if (L_3)
			{
				goto IL_000e;
			}
		}

IL_0023:
		{
			IL2CPP_LEAVE(0x33, FINALLY_0025);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0025;
	}

FINALLY_0025:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		IL2CPP_END_FINALLY(37)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(37)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x33, IL_0033)
	}

IL_0033:
	{
		// _anchorObjects.Clear();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_4 = __this->get__anchorObjects_37();
		NullCheck(L_4);
		List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432(L_4, /*hidden argument*/List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432_RuntimeMethod_var);
		// SaveGeospatialAnchorHistory();
		GeospatialController_SaveGeospatialAnchorHistory_mC6CC78F6BD3577EA44A96C4780FAE5E9AD0029EB(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_Update_m7091AB6878DF0C7BA4402B2A0DB5B51A66D5D1C0 (GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EarthState_t592969F04C9684A777DEE2C0947C50FE93BFDC53_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B33E2273C9AB388C21E973B33AEB2CD77079D68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12129C966D1274A2EF853A1668600EE873FA4D2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral242A0070D29873DA9B6E4E1164C9C8B53CE23D19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral970A4D6490D612AAF148057C65320C8178CD0C87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0A24FC541CCC2A139AC9F8BE75113AD3649BFBD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA628C3EA1A977D457A54A899CA2F513C35C50B9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3485A54065E6F4E66AFF0546DB80DF7DA4A5284);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA97DB5D365444C5E6EF88EF63073328B97B1146);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE0D2C7E866F161F8886976B7C5F3F27F3BB4E7A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	GeospatialPose_t360F6479DE7A680CB4DF86477D81885FAC3C9C8D  V_3;
	memset((&V_3), 0, sizeof(V_3));
	GeospatialPose_t360F6479DE7A680CB4DF86477D81885FAC3C9C8D  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	int32_t G_B21_0 = 0;
	int32_t G_B20_0 = 0;
	GeospatialPose_t360F6479DE7A680CB4DF86477D81885FAC3C9C8D  G_B22_0;
	memset((&G_B22_0), 0, sizeof(G_B22_0));
	int32_t G_B22_1 = 0;
	{
		// if (!_isInARView)
		bool L_0 = __this->get__isInARView_29();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// UpdateDebugInfo();
		GeospatialController_UpdateDebugInfo_mDA5BB4D494830B86DB05101EF1E7B91339FDF5DB(__this, /*hidden argument*/NULL);
		// LifecycleUpdate();
		GeospatialController_LifecycleUpdate_m2D1D95B3CC835DB9497AF29EE0D535035946550C(__this, /*hidden argument*/NULL);
		// if (_isReturning)
		bool L_1 = __this->get__isReturning_30();
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// return;
		return;
	}

IL_001e:
	{
		// if (ARSession.state != ARSessionState.SessionInitializing &&
		//     ARSession.state != ARSessionState.SessionTracking)
		int32_t L_2;
		L_2 = ARSession_get_state_m623161F1E2E5BA2752C821DD409880E6647CA130_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)6)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_3;
		L_3 = ARSession_get_state_m623161F1E2E5BA2752C821DD409880E6647CA130_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)7)))
		{
			goto IL_002f;
		}
	}
	{
		// return;
		return;
	}

IL_002f:
	{
		// var featureSupport = EarthManager.IsGeospatialModeSupported(GeospatialMode.Enabled);
		AREarthManager_tC7BD26586198E227BFD80ED37AE297887DA20519 * L_4 = __this->get_EarthManager_7();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = AREarthManager_IsGeospatialModeSupported_m75BA4AA162446135B3669330352CEFB70CD2B441(L_4, 2, /*hidden argument*/NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		switch (L_6)
		{
			case 0:
			{
				goto IL_005d;
			}
			case 1:
			{
				goto IL_0050;
			}
			case 2:
			{
				goto IL_0051;
			}
		}
	}
	{
		goto IL_009d;
	}

IL_0050:
	{
		// return;
		return;
	}

IL_0051:
	{
		// ReturnWithReason("Geospatial API is not supported by this devices.");
		GeospatialController_ReturnWithReason_mD65615EC363CD8930C899041D74C855B07C8D4FC(__this, _stringLiteralDE0D2C7E866F161F8886976B7C5F3F27F3BB4E7A, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_005d:
	{
		// if (ARCoreExtensions.ARCoreExtensionsConfig.GeospatialMode ==
		//     GeospatialMode.Disabled)
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_7 = __this->get_ARCoreExtensions_8();
		NullCheck(L_7);
		ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * L_8 = L_7->get_ARCoreExtensionsConfig_7();
		NullCheck(L_8);
		int32_t L_9 = L_8->get_GeospatialMode_5();
		if (L_9)
		{
			goto IL_009d;
		}
	}
	{
		// Debug.Log("Geospatial sample switched to GeospatialMode.Enabled.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralA0A24FC541CCC2A139AC9F8BE75113AD3649BFBD, /*hidden argument*/NULL);
		// ARCoreExtensions.ARCoreExtensionsConfig.GeospatialMode =
		//     GeospatialMode.Enabled;
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_10 = __this->get_ARCoreExtensions_8();
		NullCheck(L_10);
		ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * L_11 = L_10->get_ARCoreExtensionsConfig_7();
		NullCheck(L_11);
		L_11->set_GeospatialMode_5(2);
		// _configurePrepareTime = 3.0f;
		__this->set__configurePrepareTime_35((3.0f));
		// _enablingGeospatial = true;
		__this->set__enablingGeospatial_32((bool)1);
		// return;
		return;
	}

IL_009d:
	{
		// if (_enablingGeospatial)
		bool L_12 = __this->get__enablingGeospatial_32();
		if (!L_12)
		{
			goto IL_00ce;
		}
	}
	{
		// _configurePrepareTime -= Time.deltaTime;
		float L_13 = __this->get__configurePrepareTime_35();
		float L_14;
		L_14 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set__configurePrepareTime_35(((float)il2cpp_codegen_subtract((float)L_13, (float)L_14)));
		// if (_configurePrepareTime < 0)
		float L_15 = __this->get__configurePrepareTime_35();
		if ((!(((float)L_15) < ((float)(0.0f)))))
		{
			goto IL_00cd;
		}
	}
	{
		// _enablingGeospatial = false;
		__this->set__enablingGeospatial_32((bool)0);
		// }
		goto IL_00ce;
	}

IL_00cd:
	{
		// return;
		return;
	}

IL_00ce:
	{
		// var earthState = EarthManager.EarthState;
		AREarthManager_tC7BD26586198E227BFD80ED37AE297887DA20519 * L_16 = __this->get_EarthManager_7();
		NullCheck(L_16);
		int32_t L_17;
		L_17 = AREarthManager_get_EarthState_mFAD4AF91C800C730AB194B3FE0C841F07E11EE59(L_16, /*hidden argument*/NULL);
		V_1 = L_17;
		// if (earthState != EarthState.Enabled)
		int32_t L_18 = V_1;
		if (!L_18)
		{
			goto IL_00fb;
		}
	}
	{
		// ReturnWithReason(
		//     "Geospatial sample encountered an EarthState error: " + earthState);
		RuntimeObject * L_19 = Box(EarthState_t592969F04C9684A777DEE2C0947C50FE93BFDC53_il2cpp_TypeInfo_var, (&V_1));
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_19);
		V_1 = *(int32_t*)UnBox(L_19);
		String_t* L_21;
		L_21 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral12129C966D1274A2EF853A1668600EE873FA4D2C, L_20, /*hidden argument*/NULL);
		GeospatialController_ReturnWithReason_mD65615EC363CD8930C899041D74C855B07C8D4FC(__this, L_21, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_00fb:
	{
		// bool isSessionReady = ARSession.state == ARSessionState.SessionTracking;
		int32_t L_22;
		L_22 = ARSession_get_state_m623161F1E2E5BA2752C821DD409880E6647CA130_inline(/*hidden argument*/NULL);
		// var earthTrackingState = EarthManager.EarthTrackingState;
		AREarthManager_tC7BD26586198E227BFD80ED37AE297887DA20519 * L_23 = __this->get_EarthManager_7();
		NullCheck(L_23);
		int32_t L_24;
		L_24 = AREarthManager_get_EarthTrackingState_mD84D99281E2E77F943360A37B47EDC8BA17AE01B(L_23, /*hidden argument*/NULL);
		V_2 = L_24;
		// var pose = earthTrackingState == TrackingState.Tracking ?
		//     EarthManager.CameraGeospatialPose : new GeospatialPose();
		int32_t L_25 = V_2;
		G_B20_0 = ((((int32_t)L_22) == ((int32_t)7))? 1 : 0);
		if ((((int32_t)L_25) == ((int32_t)2)))
		{
			G_B21_0 = ((((int32_t)L_22) == ((int32_t)7))? 1 : 0);
			goto IL_011f;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(GeospatialPose_t360F6479DE7A680CB4DF86477D81885FAC3C9C8D ));
		GeospatialPose_t360F6479DE7A680CB4DF86477D81885FAC3C9C8D  L_26 = V_4;
		G_B22_0 = L_26;
		G_B22_1 = G_B20_0;
		goto IL_012a;
	}

IL_011f:
	{
		AREarthManager_tC7BD26586198E227BFD80ED37AE297887DA20519 * L_27 = __this->get_EarthManager_7();
		NullCheck(L_27);
		GeospatialPose_t360F6479DE7A680CB4DF86477D81885FAC3C9C8D  L_28;
		L_28 = AREarthManager_get_CameraGeospatialPose_mA068C7441E347DCAF92FAB2DCF8FC093370AC795(L_27, /*hidden argument*/NULL);
		G_B22_0 = L_28;
		G_B22_1 = G_B21_0;
	}

IL_012a:
	{
		V_3 = G_B22_0;
		// if (!isSessionReady || earthTrackingState != TrackingState.Tracking ||
		//     pose.HeadingAccuracy > _headingAccuracyThreshold ||
		//     pose.HorizontalAccuracy > _horizontalAccuracyThreshold)
		if (!G_B22_1)
		{
			goto IL_0156;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((!(((uint32_t)L_29) == ((uint32_t)2))))
		{
			goto IL_0156;
		}
	}
	{
		GeospatialPose_t360F6479DE7A680CB4DF86477D81885FAC3C9C8D  L_30 = V_3;
		double L_31 = L_30.get_HeadingAccuracy_4();
		if ((((double)L_31) > ((double)(25.0))))
		{
			goto IL_0156;
		}
	}
	{
		GeospatialPose_t360F6479DE7A680CB4DF86477D81885FAC3C9C8D  L_32 = V_3;
		double L_33 = L_32.get_HorizontalAccuracy_5();
		if ((!(((double)L_33) > ((double)(20.0)))))
		{
			goto IL_0215;
		}
	}

IL_0156:
	{
		// if (!_isLocalizing)
		bool L_34 = __this->get__isLocalizing_31();
		if (L_34)
		{
			goto IL_01c7;
		}
	}
	{
		// _isLocalizing = true;
		__this->set__isLocalizing_31((bool)1);
		// _localizationPassedTime = 0f;
		__this->set__localizationPassedTime_34((0.0f));
		// SetAnchorButton.gameObject.SetActive(false);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_35 = __this->get_SetAnchorButton_13();
		NullCheck(L_35);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36;
		L_36 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_35, /*hidden argument*/NULL);
		NullCheck(L_36);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_36, (bool)0, /*hidden argument*/NULL);
		// ClearAllButton.gameObject.SetActive(false);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_37 = __this->get_ClearAllButton_12();
		NullCheck(L_37);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38;
		L_38 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_37, /*hidden argument*/NULL);
		NullCheck(L_38);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_38, (bool)0, /*hidden argument*/NULL);
		// foreach (var go in _anchorObjects)
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_39 = __this->get__anchorObjects_37();
		NullCheck(L_39);
		Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  L_40;
		L_40 = List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6(L_39, /*hidden argument*/List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		V_5 = L_40;
	}

IL_019f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01ae;
		}

IL_01a1:
		{
			// foreach (var go in _anchorObjects)
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41;
			L_41 = Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_5), /*hidden argument*/Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
			// go.SetActive(false);
			NullCheck(L_41);
			GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_41, (bool)0, /*hidden argument*/NULL);
		}

IL_01ae:
		{
			// foreach (var go in _anchorObjects)
			bool L_42;
			L_42 = Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_5), /*hidden argument*/Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
			if (L_42)
			{
				goto IL_01a1;
			}
		}

IL_01b7:
		{
			IL2CPP_LEAVE(0x1C7, FINALLY_01b9);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01b9;
	}

FINALLY_01b9:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_5), /*hidden argument*/Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		IL2CPP_END_FINALLY(441)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(441)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1C7, IL_01c7)
	}

IL_01c7:
	{
		// if (_localizationPassedTime > _timeoutSeconds)
		float L_43 = __this->get__localizationPassedTime_34();
		if ((!(((float)L_43) > ((float)(180.0f)))))
		{
			goto IL_01ee;
		}
	}
	{
		// Debug.LogError("Geospatial sample localization passed timeout.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral0B33E2273C9AB388C21E973B33AEB2CD77079D68, /*hidden argument*/NULL);
		// ReturnWithReason(_localizationFailureMessage);
		GeospatialController_ReturnWithReason_mD65615EC363CD8930C899041D74C855B07C8D4FC(__this, _stringLiteral970A4D6490D612AAF148057C65320C8178CD0C87, /*hidden argument*/NULL);
		// }
		goto IL_02ac;
	}

IL_01ee:
	{
		// _localizationPassedTime += Time.deltaTime;
		float L_44 = __this->get__localizationPassedTime_34();
		float L_45;
		L_45 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set__localizationPassedTime_34(((float)il2cpp_codegen_add((float)L_44, (float)L_45)));
		// SnackBarText.text = _localizationInstructionMessage;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_46 = __this->get_SnackBarText_16();
		NullCheck(L_46);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_46, _stringLiteralB3485A54065E6F4E66AFF0546DB80DF7DA4A5284);
		// }
		goto IL_02ac;
	}

IL_0215:
	{
		// else if (_isLocalizing)
		bool L_47 = __this->get__isLocalizing_31();
		if (!L_47)
		{
			goto IL_02ac;
		}
	}
	{
		// _isLocalizing = false;
		__this->set__isLocalizing_31((bool)0);
		// _localizationPassedTime = 0f;
		__this->set__localizationPassedTime_34((0.0f));
		// SetAnchorButton.gameObject.SetActive(true);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_48 = __this->get_SetAnchorButton_13();
		NullCheck(L_48);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_49;
		L_49 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_48, /*hidden argument*/NULL);
		NullCheck(L_49);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_49, (bool)1, /*hidden argument*/NULL);
		// ClearAllButton.gameObject.SetActive(_anchorObjects.Count > 0);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_50 = __this->get_ClearAllButton_12();
		NullCheck(L_50);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_51;
		L_51 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_50, /*hidden argument*/NULL);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_52 = __this->get__anchorObjects_37();
		NullCheck(L_52);
		int32_t L_53;
		L_53 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_52, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		NullCheck(L_51);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_51, (bool)((((int32_t)L_53) > ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// SnackBarText.text = _localizationSuccessMessage;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_54 = __this->get_SnackBarText_16();
		NullCheck(L_54);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_54, _stringLiteral242A0070D29873DA9B6E4E1164C9C8B53CE23D19);
		// foreach (var go in _anchorObjects)
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_55 = __this->get__anchorObjects_37();
		NullCheck(L_55);
		Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  L_56;
		L_56 = List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6(L_55, /*hidden argument*/List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		V_5 = L_56;
	}

IL_027e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_028d;
		}

IL_0280:
		{
			// foreach (var go in _anchorObjects)
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_57;
			L_57 = Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_5), /*hidden argument*/Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
			// go.SetActive(true);
			NullCheck(L_57);
			GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_57, (bool)1, /*hidden argument*/NULL);
		}

IL_028d:
		{
			// foreach (var go in _anchorObjects)
			bool L_58;
			L_58 = Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_5), /*hidden argument*/Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
			if (L_58)
			{
				goto IL_0280;
			}
		}

IL_0296:
		{
			IL2CPP_LEAVE(0x2A6, FINALLY_0298);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0298;
	}

FINALLY_0298:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_5), /*hidden argument*/Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		IL2CPP_END_FINALLY(664)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(664)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2A6, IL_02a6)
	}

IL_02a6:
	{
		// ResolveHistory();
		GeospatialController_ResolveHistory_m0C1F954440A6BA9B2867D5D5C58497AA51354786(__this, /*hidden argument*/NULL);
	}

IL_02ac:
	{
		// InfoPanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_59 = __this->get_InfoPanel_14();
		NullCheck(L_59);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_59, (bool)1, /*hidden argument*/NULL);
		// if (earthTrackingState == TrackingState.Tracking)
		int32_t L_60 = V_2;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_036f;
		}
	}
	{
		// InfoText.text = string.Format(
		// "Latitude/Longitude: {1}°, {2}°{0}" +
		// "Horizontal Accuracy: {3}m{0}" +
		// "Altitude: {4}m{0}" +
		// "Vertical Accuracy: {5}m{0}" +
		// "Heading: {6}°{0}" +
		// "Heading Accuracy: {7}°",
		// Environment.NewLine,
		// pose.Latitude.ToString("F6"),
		// pose.Longitude.ToString("F6"),
		// pose.HorizontalAccuracy.ToString("F6"),
		// pose.Altitude.ToString("F2"),
		// pose.VerticalAccuracy.ToString("F2"),
		// pose.Heading.ToString("F1"),
		// pose.HeadingAccuracy.ToString("F1"));
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_61 = __this->get_InfoText_15();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_62 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_63 = L_62;
		String_t* L_64;
		L_64 = Environment_get_NewLine_mD145C8EE917C986BAA7C5243DEFAF4D333C521B4(/*hidden argument*/NULL);
		NullCheck(L_63);
		ArrayElementTypeCheck (L_63, L_64);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_64);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_65 = L_63;
		double* L_66 = (&V_3)->get_address_of_Latitude_0();
		String_t* L_67;
		L_67 = Double_ToString_m01772ACCBAF392BB24F3A8803DF40ADCF148D64C((double*)L_66, _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3, /*hidden argument*/NULL);
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, L_67);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_67);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_68 = L_65;
		double* L_69 = (&V_3)->get_address_of_Longitude_1();
		String_t* L_70;
		L_70 = Double_ToString_m01772ACCBAF392BB24F3A8803DF40ADCF148D64C((double*)L_69, _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3, /*hidden argument*/NULL);
		NullCheck(L_68);
		ArrayElementTypeCheck (L_68, L_70);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_70);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_71 = L_68;
		double* L_72 = (&V_3)->get_address_of_HorizontalAccuracy_5();
		String_t* L_73;
		L_73 = Double_ToString_m01772ACCBAF392BB24F3A8803DF40ADCF148D64C((double*)L_72, _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3, /*hidden argument*/NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_73);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_73);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_74 = L_71;
		double* L_75 = (&V_3)->get_address_of_Altitude_2();
		String_t* L_76;
		L_76 = Double_ToString_m01772ACCBAF392BB24F3A8803DF40ADCF148D64C((double*)L_75, _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748, /*hidden argument*/NULL);
		NullCheck(L_74);
		ArrayElementTypeCheck (L_74, L_76);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_76);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_77 = L_74;
		double* L_78 = (&V_3)->get_address_of_VerticalAccuracy_6();
		String_t* L_79;
		L_79 = Double_ToString_m01772ACCBAF392BB24F3A8803DF40ADCF148D64C((double*)L_78, _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748, /*hidden argument*/NULL);
		NullCheck(L_77);
		ArrayElementTypeCheck (L_77, L_79);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_79);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_80 = L_77;
		double* L_81 = (&V_3)->get_address_of_Heading_3();
		String_t* L_82;
		L_82 = Double_ToString_m01772ACCBAF392BB24F3A8803DF40ADCF148D64C((double*)L_81, _stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391, /*hidden argument*/NULL);
		NullCheck(L_80);
		ArrayElementTypeCheck (L_80, L_82);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_82);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_83 = L_80;
		double* L_84 = (&V_3)->get_address_of_HeadingAccuracy_4();
		String_t* L_85;
		L_85 = Double_ToString_m01772ACCBAF392BB24F3A8803DF40ADCF148D64C((double*)L_84, _stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391, /*hidden argument*/NULL);
		NullCheck(L_83);
		ArrayElementTypeCheck (L_83, L_85);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_85);
		String_t* L_86;
		L_86 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteralA628C3EA1A977D457A54A899CA2F513C35C50B9C, L_83, /*hidden argument*/NULL);
		NullCheck(L_61);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_61, L_86);
		// }
		return;
	}

IL_036f:
	{
		// InfoText.text = "GEOSPATIAL POSE: not tracking";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_87 = __this->get_InfoText_15();
		NullCheck(L_87);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_87, _stringLiteralBA97DB5D365444C5E6EF88EF63073328B97B1146);
		// }
		return;
	}
}
// System.Boolean Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::PlaceGeospatialAnchor(Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GeospatialController_PlaceGeospatialAnchor_m1ECFFB81EB00791BAF476A64C3BB355B0BAEC170 (GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C * __this, GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F  ___history0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARAnchorManagerExtensions_tAE16512F2947CC8B022F06BA32E94FE61DBBACE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ARGeospatialAnchor_tF7BD994A88D37D4DAADC1958C201114E6BDE8A3B * V_1 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	{
		// Quaternion quaternion =
		//     Quaternion.AngleAxis(180f - (float)history.Heading, Vector3.up);
		GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F  L_0 = ___history0;
		double L_1 = L_0.get_Heading_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398(((float)il2cpp_codegen_subtract((float)(180.0f), (float)((float)((float)L_1)))), L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// var anchor = AnchorManager.AddAnchor(
		//     history.Latitude, history.Longitude, history.Altitude, quaternion);
		ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F * L_4 = __this->get_AnchorManager_6();
		GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F  L_5 = ___history0;
		double L_6 = L_5.get_Latitude_1();
		GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F  L_7 = ___history0;
		double L_8 = L_7.get_Longitude_2();
		GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F  L_9 = ___history0;
		double L_10 = L_9.get_Altitude_3();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ARAnchorManagerExtensions_tAE16512F2947CC8B022F06BA32E94FE61DBBACE2_il2cpp_TypeInfo_var);
		ARGeospatialAnchor_tF7BD994A88D37D4DAADC1958C201114E6BDE8A3B * L_12;
		L_12 = ARAnchorManagerExtensions_AddAnchor_mC8A1FD5398E265125A890A24F5DC26A146DBB8DC(L_4, L_6, L_8, L_10, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		// if (anchor != null)
		ARGeospatialAnchor_tF7BD994A88D37D4DAADC1958C201114E6BDE8A3B * L_13 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_13, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0060;
		}
	}
	{
		// GameObject anchorGO = Instantiate(GeospatialPrefab, anchor.transform);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_GeospatialPrefab_9();
		ARGeospatialAnchor_tF7BD994A88D37D4DAADC1958C201114E6BDE8A3B * L_16 = V_1;
		NullCheck(L_16);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18;
		L_18 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_15, L_17, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		V_2 = L_18;
		// _anchorObjects.Add(anchorGO);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_19 = __this->get__anchorObjects_37();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = V_2;
		NullCheck(L_19);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_19, L_20, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// return true;
		return (bool)1;
	}

IL_0060:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::ResolveHistory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_ResolveHistory_m0C1F954440A6BA9B2867D5D5C58497AA51354786 (GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0F17BCA778C5F59F1AED6017D544732C95D9791E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCD85EDB4CB68497FD706B2186A459A04CE8CB924_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA2126C6AF888A1831EAF72528F3B47A8F96620F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m6DBFEC6E2FE7B6BA61EE8E65E0053FFB19507ECB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7F941B3739722E9F76CB6C40DB4FE6C15E1ACA5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3187553363A94FA380DF7928E3C910219A40C90A);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t0FCEFA6AC2110A3938B99DCF45E3DF164622B657  V_0;
	memset((&V_0), 0, sizeof(V_0));
	GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (!_shouldResolvingHistory)
		bool L_0 = __this->get__shouldResolvingHistory_33();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// _shouldResolvingHistory = false;
		__this->set__shouldResolvingHistory_33((bool)0);
		// foreach (var history in _historyCollection.Collection)
		GeospatialAnchorHistoryCollection_t36DBFC64D28A956FECCE7DD20DE5E7B7A53F9645 * L_1 = __this->get__historyCollection_36();
		NullCheck(L_1);
		List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7 * L_2 = L_1->get_Collection_0();
		NullCheck(L_2);
		Enumerator_t0FCEFA6AC2110A3938B99DCF45E3DF164622B657  L_3;
		L_3 = List_1_GetEnumerator_m6DBFEC6E2FE7B6BA61EE8E65E0053FFB19507ECB(L_2, /*hidden argument*/List_1_GetEnumerator_m6DBFEC6E2FE7B6BA61EE8E65E0053FFB19507ECB_RuntimeMethod_var);
		V_0 = L_3;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0033;
		}

IL_0023:
		{
			// foreach (var history in _historyCollection.Collection)
			GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F  L_4;
			L_4 = Enumerator_get_Current_mA2126C6AF888A1831EAF72528F3B47A8F96620F9_inline((Enumerator_t0FCEFA6AC2110A3938B99DCF45E3DF164622B657 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mA2126C6AF888A1831EAF72528F3B47A8F96620F9_RuntimeMethod_var);
			V_1 = L_4;
			// PlaceGeospatialAnchor(history);
			GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F  L_5 = V_1;
			bool L_6;
			L_6 = GeospatialController_PlaceGeospatialAnchor_m1ECFFB81EB00791BAF476A64C3BB355B0BAEC170(__this, L_5, /*hidden argument*/NULL);
		}

IL_0033:
		{
			// foreach (var history in _historyCollection.Collection)
			bool L_7;
			L_7 = Enumerator_MoveNext_mCD85EDB4CB68497FD706B2186A459A04CE8CB924((Enumerator_t0FCEFA6AC2110A3938B99DCF45E3DF164622B657 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mCD85EDB4CB68497FD706B2186A459A04CE8CB924_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0023;
			}
		}

IL_003c:
		{
			IL2CPP_LEAVE(0x4C, FINALLY_003e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003e;
	}

FINALLY_003e:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m0F17BCA778C5F59F1AED6017D544732C95D9791E((Enumerator_t0FCEFA6AC2110A3938B99DCF45E3DF164622B657 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m0F17BCA778C5F59F1AED6017D544732C95D9791E_RuntimeMethod_var);
		IL2CPP_END_FINALLY(62)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(62)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
	}

IL_004c:
	{
		// ClearAllButton.gameObject.SetActive(_historyCollection.Collection.Count > 0);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_8 = __this->get_ClearAllButton_12();
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		GeospatialAnchorHistoryCollection_t36DBFC64D28A956FECCE7DD20DE5E7B7A53F9645 * L_10 = __this->get__historyCollection_36();
		NullCheck(L_10);
		List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7 * L_11 = L_10->get_Collection_0();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m7F941B3739722E9F76CB6C40DB4FE6C15E1ACA5B_inline(L_11, /*hidden argument*/List_1_get_Count_m7F941B3739722E9F76CB6C40DB4FE6C15E1ACA5B_RuntimeMethod_var);
		NullCheck(L_9);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)((((int32_t)L_12) > ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// SnackBarText.text = string.Format("{0} anchor(s) set from history.",
		//     _anchorObjects.Count);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_13 = __this->get_SnackBarText_16();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_14 = __this->get__anchorObjects_37();
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_14, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		int32_t L_16 = L_15;
		RuntimeObject * L_17 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_16);
		String_t* L_18;
		L_18 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral3187553363A94FA380DF7928E3C910219A40C90A, L_17, /*hidden argument*/NULL);
		NullCheck(L_13);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_18);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::LoadGeospatialAnchorHistory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_LoadGeospatialAnchorHistory_m4365D466B9F6E238BFA2464FAC3701B1305892AE (GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeospatialAnchorHistoryCollection_t36DBFC64D28A956FECCE7DD20DE5E7B7A53F9645_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisGeospatialAnchorHistoryCollection_t36DBFC64D28A956FECCE7DD20DE5E7B7A53F9645_m353BE8BDB74E01396C3AC612EF8062431CAC0E21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAll_m99F7ADEBACCC7D79E891B38EEC2D2757E11C8559_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1__ctor_m189E8697C2564C312FF3569AC87B181933885744_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t8C8EB8CFC5F8234D0EC9F5AB760FA7AF6DDF2070_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass44_0_U3CLoadGeospatialAnchorHistoryU3Eb__0_m0065939C1BB93BF6B2C6337ECB01200FFD0014A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass44_0_t38D6B8575059B49A8EA27C9B42674AD47664C694_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98BA9C6DB7CB1F119876677A9D68E6B455A09888);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass44_0_t38D6B8575059B49A8EA27C9B42674AD47664C694 * V_0 = NULL;
	{
		// if (PlayerPrefs.HasKey(_persistentGeospatialAnchorsStorageKey))
		bool L_0;
		L_0 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(_stringLiteral98BA9C6DB7CB1F119876677A9D68E6B455A09888, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_006a;
		}
	}
	{
		U3CU3Ec__DisplayClass44_0_t38D6B8575059B49A8EA27C9B42674AD47664C694 * L_1 = (U3CU3Ec__DisplayClass44_0_t38D6B8575059B49A8EA27C9B42674AD47664C694 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass44_0_t38D6B8575059B49A8EA27C9B42674AD47664C694_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass44_0__ctor_mF47C5DD1FA602D38A4E8E23EC2BB615B20DD4F9E(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		// _historyCollection = JsonUtility.FromJson<GeospatialAnchorHistoryCollection>(
		//     PlayerPrefs.GetString(_persistentGeospatialAnchorsStorageKey));
		String_t* L_2;
		L_2 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteral98BA9C6DB7CB1F119876677A9D68E6B455A09888, /*hidden argument*/NULL);
		GeospatialAnchorHistoryCollection_t36DBFC64D28A956FECCE7DD20DE5E7B7A53F9645 * L_3;
		L_3 = JsonUtility_FromJson_TisGeospatialAnchorHistoryCollection_t36DBFC64D28A956FECCE7DD20DE5E7B7A53F9645_m353BE8BDB74E01396C3AC612EF8062431CAC0E21(L_2, /*hidden argument*/JsonUtility_FromJson_TisGeospatialAnchorHistoryCollection_t36DBFC64D28A956FECCE7DD20DE5E7B7A53F9645_m353BE8BDB74E01396C3AC612EF8062431CAC0E21_RuntimeMethod_var);
		__this->set__historyCollection_36(L_3);
		// DateTime current = DateTime.Now;
		U3CU3Ec__DisplayClass44_0_t38D6B8575059B49A8EA27C9B42674AD47664C694 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_5;
		L_5 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C(/*hidden argument*/NULL);
		NullCheck(L_4);
		L_4->set_current_0(L_5);
		// _historyCollection.Collection.RemoveAll(
		//     data => current.Subtract(data.CreatedTime).Days > 0);
		GeospatialAnchorHistoryCollection_t36DBFC64D28A956FECCE7DD20DE5E7B7A53F9645 * L_6 = __this->get__historyCollection_36();
		NullCheck(L_6);
		List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7 * L_7 = L_6->get_Collection_0();
		U3CU3Ec__DisplayClass44_0_t38D6B8575059B49A8EA27C9B42674AD47664C694 * L_8 = V_0;
		Predicate_1_t8C8EB8CFC5F8234D0EC9F5AB760FA7AF6DDF2070 * L_9 = (Predicate_1_t8C8EB8CFC5F8234D0EC9F5AB760FA7AF6DDF2070 *)il2cpp_codegen_object_new(Predicate_1_t8C8EB8CFC5F8234D0EC9F5AB760FA7AF6DDF2070_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m189E8697C2564C312FF3569AC87B181933885744(L_9, L_8, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass44_0_U3CLoadGeospatialAnchorHistoryU3Eb__0_m0065939C1BB93BF6B2C6337ECB01200FFD0014A9_RuntimeMethod_var), /*hidden argument*/Predicate_1__ctor_m189E8697C2564C312FF3569AC87B181933885744_RuntimeMethod_var);
		NullCheck(L_7);
		int32_t L_10;
		L_10 = List_1_RemoveAll_m99F7ADEBACCC7D79E891B38EEC2D2757E11C8559(L_7, L_9, /*hidden argument*/List_1_RemoveAll_m99F7ADEBACCC7D79E891B38EEC2D2757E11C8559_RuntimeMethod_var);
		// PlayerPrefs.SetString(_persistentGeospatialAnchorsStorageKey,
		//     JsonUtility.ToJson(_historyCollection));
		GeospatialAnchorHistoryCollection_t36DBFC64D28A956FECCE7DD20DE5E7B7A53F9645 * L_11 = __this->get__historyCollection_36();
		String_t* L_12;
		L_12 = JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C(L_11, /*hidden argument*/NULL);
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteral98BA9C6DB7CB1F119876677A9D68E6B455A09888, L_12, /*hidden argument*/NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC(/*hidden argument*/NULL);
		// }
		return;
	}

IL_006a:
	{
		// _historyCollection = new GeospatialAnchorHistoryCollection();
		GeospatialAnchorHistoryCollection_t36DBFC64D28A956FECCE7DD20DE5E7B7A53F9645 * L_13 = (GeospatialAnchorHistoryCollection_t36DBFC64D28A956FECCE7DD20DE5E7B7A53F9645 *)il2cpp_codegen_object_new(GeospatialAnchorHistoryCollection_t36DBFC64D28A956FECCE7DD20DE5E7B7A53F9645_il2cpp_TypeInfo_var);
		GeospatialAnchorHistoryCollection__ctor_m50028AC7A470BBC4062D0162A0A5EDF1FBF74454(L_13, /*hidden argument*/NULL);
		__this->set__historyCollection_36(L_13);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::SaveGeospatialAnchorHistory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_SaveGeospatialAnchorHistory_mC6CC78F6BD3577EA44A96C4780FAE5E9AD0029EB (GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1__ctor_m543F7AD99E26365D1F82D1635BF13428D39219BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1_t880AB8C634CD664978C9A65AAA7050155FD6181C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveRange_m48523883FD816B365C20D12D508E4EE72DF229BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Sort_m0C698A4C40E2E04874B147D55616AD38BA9E81DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7F941B3739722E9F76CB6C40DB4FE6C15E1ACA5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSaveGeospatialAnchorHistoryU3Eb__45_0_m95248F2C2E8B76B87A98990D49656FBADA00A076_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5B0BB4CFA8D219D09B10E20DB741FB7AE622B342_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98BA9C6DB7CB1F119876677A9D68E6B455A09888);
		s_Il2CppMethodInitialized = true;
	}
	Comparison_1_t880AB8C634CD664978C9A65AAA7050155FD6181C * G_B2_0 = NULL;
	List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7 * G_B2_1 = NULL;
	Comparison_1_t880AB8C634CD664978C9A65AAA7050155FD6181C * G_B1_0 = NULL;
	List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7 * G_B1_1 = NULL;
	{
		// _historyCollection.Collection.Sort((left, right) =>
		//     right.CreatedTime.CompareTo(left.CreatedTime));
		GeospatialAnchorHistoryCollection_t36DBFC64D28A956FECCE7DD20DE5E7B7A53F9645 * L_0 = __this->get__historyCollection_36();
		NullCheck(L_0);
		List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7 * L_1 = L_0->get_Collection_0();
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t5B0BB4CFA8D219D09B10E20DB741FB7AE622B342_il2cpp_TypeInfo_var);
		Comparison_1_t880AB8C634CD664978C9A65AAA7050155FD6181C * L_2 = ((U3CU3Ec_t5B0BB4CFA8D219D09B10E20DB741FB7AE622B342_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5B0BB4CFA8D219D09B10E20DB741FB7AE622B342_il2cpp_TypeInfo_var))->get_U3CU3E9__45_0_1();
		Comparison_1_t880AB8C634CD664978C9A65AAA7050155FD6181C * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_002a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t5B0BB4CFA8D219D09B10E20DB741FB7AE622B342_il2cpp_TypeInfo_var);
		U3CU3Ec_t5B0BB4CFA8D219D09B10E20DB741FB7AE622B342 * L_4 = ((U3CU3Ec_t5B0BB4CFA8D219D09B10E20DB741FB7AE622B342_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5B0BB4CFA8D219D09B10E20DB741FB7AE622B342_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Comparison_1_t880AB8C634CD664978C9A65AAA7050155FD6181C * L_5 = (Comparison_1_t880AB8C634CD664978C9A65AAA7050155FD6181C *)il2cpp_codegen_object_new(Comparison_1_t880AB8C634CD664978C9A65AAA7050155FD6181C_il2cpp_TypeInfo_var);
		Comparison_1__ctor_m543F7AD99E26365D1F82D1635BF13428D39219BB(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CSaveGeospatialAnchorHistoryU3Eb__45_0_m95248F2C2E8B76B87A98990D49656FBADA00A076_RuntimeMethod_var), /*hidden argument*/Comparison_1__ctor_m543F7AD99E26365D1F82D1635BF13428D39219BB_RuntimeMethod_var);
		Comparison_1_t880AB8C634CD664978C9A65AAA7050155FD6181C * L_6 = L_5;
		((U3CU3Ec_t5B0BB4CFA8D219D09B10E20DB741FB7AE622B342_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5B0BB4CFA8D219D09B10E20DB741FB7AE622B342_il2cpp_TypeInfo_var))->set_U3CU3E9__45_0_1(L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_002a:
	{
		NullCheck(G_B2_1);
		List_1_Sort_m0C698A4C40E2E04874B147D55616AD38BA9E81DC(G_B2_1, G_B2_0, /*hidden argument*/List_1_Sort_m0C698A4C40E2E04874B147D55616AD38BA9E81DC_RuntimeMethod_var);
		// if (_historyCollection.Collection.Count > _storageLimit)
		GeospatialAnchorHistoryCollection_t36DBFC64D28A956FECCE7DD20DE5E7B7A53F9645 * L_7 = __this->get__historyCollection_36();
		NullCheck(L_7);
		List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7 * L_8 = L_7->get_Collection_0();
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m7F941B3739722E9F76CB6C40DB4FE6C15E1ACA5B_inline(L_8, /*hidden argument*/List_1_get_Count_m7F941B3739722E9F76CB6C40DB4FE6C15E1ACA5B_RuntimeMethod_var);
		if ((((int32_t)L_9) <= ((int32_t)5)))
		{
			goto IL_0065;
		}
	}
	{
		// _historyCollection.Collection.RemoveRange(
		//     _storageLimit, _historyCollection.Collection.Count - _storageLimit);
		GeospatialAnchorHistoryCollection_t36DBFC64D28A956FECCE7DD20DE5E7B7A53F9645 * L_10 = __this->get__historyCollection_36();
		NullCheck(L_10);
		List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7 * L_11 = L_10->get_Collection_0();
		GeospatialAnchorHistoryCollection_t36DBFC64D28A956FECCE7DD20DE5E7B7A53F9645 * L_12 = __this->get__historyCollection_36();
		NullCheck(L_12);
		List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7 * L_13 = L_12->get_Collection_0();
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_m7F941B3739722E9F76CB6C40DB4FE6C15E1ACA5B_inline(L_13, /*hidden argument*/List_1_get_Count_m7F941B3739722E9F76CB6C40DB4FE6C15E1ACA5B_RuntimeMethod_var);
		NullCheck(L_11);
		List_1_RemoveRange_m48523883FD816B365C20D12D508E4EE72DF229BD(L_11, 5, ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)5)), /*hidden argument*/List_1_RemoveRange_m48523883FD816B365C20D12D508E4EE72DF229BD_RuntimeMethod_var);
	}

IL_0065:
	{
		// PlayerPrefs.SetString(
		//     _persistentGeospatialAnchorsStorageKey, JsonUtility.ToJson(_historyCollection));
		GeospatialAnchorHistoryCollection_t36DBFC64D28A956FECCE7DD20DE5E7B7A53F9645 * L_15 = __this->get__historyCollection_36();
		String_t* L_16;
		L_16 = JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C(L_15, /*hidden argument*/NULL);
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteral98BA9C6DB7CB1F119876677A9D68E6B455A09888, L_16, /*hidden argument*/NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::SwitchToARView(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_SwitchToARView_mB6B856087CA02DDE3DC4CA815D897EC68CD54D0A (GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C * __this, bool ___enable0, const RuntimeMethod* method)
{
	{
		// _isInARView = enable;
		bool L_0 = ___enable0;
		__this->set__isInARView_29(L_0);
		// SessionOrigin.gameObject.SetActive(enable);
		ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * L_1 = __this->get_SessionOrigin_4();
		NullCheck(L_1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_1, /*hidden argument*/NULL);
		bool L_3 = ___enable0;
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, L_3, /*hidden argument*/NULL);
		// Session.gameObject.SetActive(enable);
		ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * L_4 = __this->get_Session_5();
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		bool L_6 = ___enable0;
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, L_6, /*hidden argument*/NULL);
		// ARCoreExtensions.gameObject.SetActive(enable);
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_7 = __this->get_ARCoreExtensions_8();
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		bool L_9 = ___enable0;
		NullCheck(L_8);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, L_9, /*hidden argument*/NULL);
		// ARViewCanvas.SetActive(enable);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_ARViewCanvas_11();
		bool L_11 = ___enable0;
		NullCheck(L_10);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, L_11, /*hidden argument*/NULL);
		// PrivacyPromptCanvas.SetActive(!enable);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_PrivacyPromptCanvas_10();
		bool L_13 = ___enable0;
		NullCheck(L_12);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_12, (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::LifecycleUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_LifecycleUpdate_m2D1D95B3CC835DB9497AF29EE0D535035946550C (GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSessionState_tC5054273C7CB11C5C40D36745DDD2AF056ED1F25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E220F394CF0E90F7FEF038F482846BFBB93ED64);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80D85E354963DC5787AAB3990BB9B8D1D718AD91);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		// if (Input.GetKeyUp(KeyCode.Escape))
		bool L_0;
		L_0 = Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F(((int32_t)27), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
	}

IL_000e:
	{
		// if (_isReturning)
		bool L_1 = __this->get__isReturning_30();
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// return;
		return;
	}

IL_0017:
	{
		// var sleepTimeout = SleepTimeout.NeverSleep;
		V_0 = (-1);
		// if (ARSession.state != ARSessionState.SessionTracking)
		int32_t L_2;
		L_2 = ARSession_get_state_m623161F1E2E5BA2752C821DD409880E6647CA130_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)7)))
		{
			goto IL_0024;
		}
	}
	{
		// sleepTimeout = SleepTimeout.SystemSetting;
		V_0 = ((int32_t)-2);
	}

IL_0024:
	{
		// Screen.sleepTimeout = sleepTimeout;
		int32_t L_3 = V_0;
		Screen_set_sleepTimeout_mE9A766E696E76AC77EAADB4CA6412454577FCBB3(L_3, /*hidden argument*/NULL);
		// string returningReason = string.Empty;
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_1 = L_4;
		// if (ARSession.state != ARSessionState.CheckingAvailability &&
		//     ARSession.state != ARSessionState.Ready &&
		//     ARSession.state != ARSessionState.SessionInitializing &&
		//     ARSession.state != ARSessionState.SessionTracking)
		int32_t L_5;
		L_5 = ARSession_get_state_m623161F1E2E5BA2752C821DD409880E6647CA130_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6;
		L_6 = ARSession_get_state_m623161F1E2E5BA2752C821DD409880E6647CA130_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_6) == ((int32_t)5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_7;
		L_7 = ARSession_get_state_m623161F1E2E5BA2752C821DD409880E6647CA130_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_7) == ((int32_t)6)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_8;
		L_8 = ARSession_get_state_m623161F1E2E5BA2752C821DD409880E6647CA130_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)7)))
		{
			goto IL_0067;
		}
	}
	{
		// returningReason = string.Format(
		//     "Geospatial sample encountered an ARSession error state {0}.\n" +
		//     "Please start the app again.",
		//     ARSession.state);
		int32_t L_9;
		L_9 = ARSession_get_state_m623161F1E2E5BA2752C821DD409880E6647CA130_inline(/*hidden argument*/NULL);
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(ARSessionState_tC5054273C7CB11C5C40D36745DDD2AF056ED1F25_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12;
		L_12 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral4E220F394CF0E90F7FEF038F482846BFBB93ED64, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		// }
		goto IL_00a1;
	}

IL_0067:
	{
		// else if (SessionOrigin == null || Session == null || ARCoreExtensions == null)
		ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * L_13 = __this->get_SessionOrigin_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_13, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0091;
		}
	}
	{
		ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * L_15 = __this->get_Session_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_15, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_0091;
		}
	}
	{
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_17 = __this->get_ARCoreExtensions_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_17, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00a1;
		}
	}

IL_0091:
	{
		// returningReason = string.Format(
		//     "Geospatial sample failed with missing AR Components.");
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19;
		L_19 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		String_t* L_20;
		L_20 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral80D85E354963DC5787AAB3990BB9B8D1D718AD91, L_19, /*hidden argument*/NULL);
		V_1 = L_20;
	}

IL_00a1:
	{
		// ReturnWithReason(returningReason);
		String_t* L_21 = V_1;
		GeospatialController_ReturnWithReason_mD65615EC363CD8930C899041D74C855B07C8D4FC(__this, L_21, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::ReturnWithReason(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_ReturnWithReason_mD65615EC363CD8930C899041D74C855B07C8D4FC (GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C * __this, String_t* ___reason0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23E836F9814F83ED24864553FD4B41704BFEFFA8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrEmpty(reason))
		String_t* L_0 = ___reason0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// SetAnchorButton.gameObject.SetActive(false);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_2 = __this->get_SetAnchorButton_13();
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// ClearAllButton.gameObject.SetActive(false);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_4 = __this->get_ClearAllButton_12();
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
		// InfoPanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_InfoPanel_14();
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)0, /*hidden argument*/NULL);
		// Debug.LogError(reason);
		String_t* L_7 = ___reason0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_7, /*hidden argument*/NULL);
		// SnackBarText.text = reason;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_8 = __this->get_SnackBarText_16();
		String_t* L_9 = ___reason0;
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_9);
		// _isReturning = true;
		__this->set__isReturning_30((bool)1);
		// Invoke(nameof(QuitApplication), _errorDisplaySeconds);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral23E836F9814F83ED24864553FD4B41704BFEFFA8, (3.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::QuitApplication()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_QuitApplication_m21B90DD3168D4F5004EB1A2CEF0967F53615E1C5 (GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C * __this, const RuntimeMethod* method)
{
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::UpdateDebugInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_UpdateDebugInfo_mDA5BB4D494830B86DB05101EF1E7B91339FDF5DB (GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSessionState_tC5054273C7CB11C5C40D36745DDD2AF056ED1F25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EarthState_t592969F04C9684A777DEE2C0947C50FE93BFDC53_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FeatureSupported_t9BE4112DE39E105167D7B5C7143C36FEBE5F98DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocationServiceStatus_tD2BEAE4A2A42A9D0D4D859AE1C968D278D5ACF2F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0642FD4A763B782EEF7CA72009CA8D1E0FFC5D86);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral272FD43E889593108C54482F13ABAACDD71C5FFE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31D77236056880C0D3C936B020E57CFE072FD559);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A80DBD535E7AFB2B86F791A732EBEEE4BCF7CDB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral659DC561CB989579B2C5DB5BC9116FC03B863958);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80D87A6B5B660BA3CC373D14B317E3A40FC27CD9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E5080011A7CA3BD4949A61B46ADA7657E8540F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96EF7EFF0F00A2F793F25BE896448C3A1BBA9828);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7CA9DC3E5A221DFCC0483888D319D118E5CEF90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC7FFF74C9144CC4E77C56C5F9B4FDBC4516816D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7A905249C0409DB8B563D30BAE889395AFBDB30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBA251D8CD4C01D372EB4EAC50A26C0633FA71D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF4CB593B711998014E24A8BDC4D1A685D2F9E5B);
		s_Il2CppMethodInitialized = true;
	}
	GeospatialPose_t360F6479DE7A680CB4DF86477D81885FAC3C9C8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	GeospatialPose_t360F6479DE7A680CB4DF86477D81885FAC3C9C8D  V_2;
	memset((&V_2), 0, sizeof(V_2));
	GeospatialPose_t360F6479DE7A680CB4DF86477D81885FAC3C9C8D  G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	{
		// if (!Debug.isDebugBuild || EarthManager == null)
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Debug_get_isDebugBuild_mD0384FE4EA71AA14019FF171ADCE2F637C6E541C(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		AREarthManager_tC7BD26586198E227BFD80ED37AE297887DA20519 * L_1 = __this->get_EarthManager_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0016;
		}
	}

IL_0015:
	{
		// return;
		return;
	}

IL_0016:
	{
		// var pose = EarthManager.EarthState == EarthState.Enabled &&
		//     EarthManager.EarthTrackingState == TrackingState.Tracking ?
		//     EarthManager.CameraGeospatialPose : new GeospatialPose();
		AREarthManager_tC7BD26586198E227BFD80ED37AE297887DA20519 * L_3 = __this->get_EarthManager_7();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = AREarthManager_get_EarthState_mFAD4AF91C800C730AB194B3FE0C841F07E11EE59(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0031;
		}
	}
	{
		AREarthManager_tC7BD26586198E227BFD80ED37AE297887DA20519 * L_5 = __this->get_EarthManager_7();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = AREarthManager_get_EarthTrackingState_mD84D99281E2E77F943360A37B47EDC8BA17AE01B(L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_6) == ((int32_t)2)))
		{
			goto IL_003c;
		}
	}

IL_0031:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(GeospatialPose_t360F6479DE7A680CB4DF86477D81885FAC3C9C8D ));
		GeospatialPose_t360F6479DE7A680CB4DF86477D81885FAC3C9C8D  L_7 = V_2;
		G_B7_0 = L_7;
		goto IL_0047;
	}

IL_003c:
	{
		AREarthManager_tC7BD26586198E227BFD80ED37AE297887DA20519 * L_8 = __this->get_EarthManager_7();
		NullCheck(L_8);
		GeospatialPose_t360F6479DE7A680CB4DF86477D81885FAC3C9C8D  L_9;
		L_9 = AREarthManager_get_CameraGeospatialPose_mA068C7441E347DCAF92FAB2DCF8FC093370AC795(L_8, /*hidden argument*/NULL);
		G_B7_0 = L_9;
	}

IL_0047:
	{
		V_0 = G_B7_0;
		// var supported = EarthManager.IsGeospatialModeSupported(GeospatialMode.Enabled);
		AREarthManager_tC7BD26586198E227BFD80ED37AE297887DA20519 * L_10 = __this->get_EarthManager_7();
		NullCheck(L_10);
		int32_t L_11;
		L_11 = AREarthManager_IsGeospatialModeSupported_m75BA4AA162446135B3669330352CEFB70CD2B441(L_10, 2, /*hidden argument*/NULL);
		V_1 = L_11;
		// DebugText.text =
		//     $"IsReturning: {_isReturning}\n" +
		//     $"IsLocalizing: {_isLocalizing}\n" +
		//     $"SessionState: {ARSession.state}\n" +
		//     $"LocationServiceStatus: {Input.location.status}\n" +
		//     $"FeatureSupported: {supported}\n" +
		//     $"EarthState: {EarthManager.EarthState}\n" +
		//     $"EarthTrackingState: {EarthManager.EarthTrackingState}\n" +
		//     $"  LAT/LNG: {pose.Latitude:F6}, {pose.Longitude:F6}\n" +
		//     $"  HorizontalAcc: {pose.HorizontalAccuracy:F6}\n" +
		//     $"  ALT: {pose.Altitude:F2}\n" +
		//     $"  VerticalAcc: {pose.VerticalAccuracy:F2}\n" +
		//     $"  Heading: {pose.Heading:F2}\n" +
		//     $"  HeadingAcc: {pose.HeadingAccuracy:F2}";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_12 = __this->get_DebugText_17();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)13));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = L_13;
		bool L_15 = __this->get__isReturning_30();
		bool L_16 = L_15;
		RuntimeObject * L_17 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_16);
		String_t* L_18;
		L_18 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral80D87A6B5B660BA3CC373D14B317E3A40FC27CD9, L_17, /*hidden argument*/NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_18);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_18);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = L_14;
		bool L_20 = __this->get__isLocalizing_31();
		bool L_21 = L_20;
		RuntimeObject * L_22 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_21);
		String_t* L_23;
		L_23 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral659DC561CB989579B2C5DB5BC9116FC03B863958, L_22, /*hidden argument*/NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_23);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_23);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_24 = L_19;
		int32_t L_25;
		L_25 = ARSession_get_state_m623161F1E2E5BA2752C821DD409880E6647CA130_inline(/*hidden argument*/NULL);
		int32_t L_26 = L_25;
		RuntimeObject * L_27 = Box(ARSessionState_tC5054273C7CB11C5C40D36745DDD2AF056ED1F25_il2cpp_TypeInfo_var, &L_26);
		String_t* L_28;
		L_28 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralB7CA9DC3E5A221DFCC0483888D319D118E5CEF90, L_27, /*hidden argument*/NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_28);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_28);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = L_24;
		LocationService_tDCB7C3AA7A10C4727D49676FD3A902F48C27F855 * L_30;
		L_30 = Input_get_location_m5D0AE1016E410D3D7411904D0706456DE383F4E5(/*hidden argument*/NULL);
		NullCheck(L_30);
		int32_t L_31;
		L_31 = LocationService_get_status_m1E90C9991825BDF5A3AC066D97F9198568055C54(L_30, /*hidden argument*/NULL);
		int32_t L_32 = L_31;
		RuntimeObject * L_33 = Box(LocationServiceStatus_tD2BEAE4A2A42A9D0D4D859AE1C968D278D5ACF2F_il2cpp_TypeInfo_var, &L_32);
		String_t* L_34;
		L_34 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral3A80DBD535E7AFB2B86F791A732EBEEE4BCF7CDB, L_33, /*hidden argument*/NULL);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_34);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_34);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_35 = L_29;
		int32_t L_36 = V_1;
		int32_t L_37 = L_36;
		RuntimeObject * L_38 = Box(FeatureSupported_t9BE4112DE39E105167D7B5C7143C36FEBE5F98DA_il2cpp_TypeInfo_var, &L_37);
		String_t* L_39;
		L_39 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralD7A905249C0409DB8B563D30BAE889395AFBDB30, L_38, /*hidden argument*/NULL);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_39);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_39);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_40 = L_35;
		AREarthManager_tC7BD26586198E227BFD80ED37AE297887DA20519 * L_41 = __this->get_EarthManager_7();
		NullCheck(L_41);
		int32_t L_42;
		L_42 = AREarthManager_get_EarthState_mFAD4AF91C800C730AB194B3FE0C841F07E11EE59(L_41, /*hidden argument*/NULL);
		int32_t L_43 = L_42;
		RuntimeObject * L_44 = Box(EarthState_t592969F04C9684A777DEE2C0947C50FE93BFDC53_il2cpp_TypeInfo_var, &L_43);
		String_t* L_45;
		L_45 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralFF4CB593B711998014E24A8BDC4D1A685D2F9E5B, L_44, /*hidden argument*/NULL);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_45);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_45);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_46 = L_40;
		AREarthManager_tC7BD26586198E227BFD80ED37AE297887DA20519 * L_47 = __this->get_EarthManager_7();
		NullCheck(L_47);
		int32_t L_48;
		L_48 = AREarthManager_get_EarthTrackingState_mD84D99281E2E77F943360A37B47EDC8BA17AE01B(L_47, /*hidden argument*/NULL);
		int32_t L_49 = L_48;
		RuntimeObject * L_50 = Box(TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38_il2cpp_TypeInfo_var, &L_49);
		String_t* L_51;
		L_51 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral96EF7EFF0F00A2F793F25BE896448C3A1BBA9828, L_50, /*hidden argument*/NULL);
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_51);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_51);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_52 = L_46;
		GeospatialPose_t360F6479DE7A680CB4DF86477D81885FAC3C9C8D  L_53 = V_0;
		double L_54 = L_53.get_Latitude_0();
		double L_55 = L_54;
		RuntimeObject * L_56 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_55);
		GeospatialPose_t360F6479DE7A680CB4DF86477D81885FAC3C9C8D  L_57 = V_0;
		double L_58 = L_57.get_Longitude_1();
		double L_59 = L_58;
		RuntimeObject * L_60 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_59);
		String_t* L_61;
		L_61 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralFBA251D8CD4C01D372EB4EAC50A26C0633FA71D7, L_56, L_60, /*hidden argument*/NULL);
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, L_61);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_61);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_62 = L_52;
		GeospatialPose_t360F6479DE7A680CB4DF86477D81885FAC3C9C8D  L_63 = V_0;
		double L_64 = L_63.get_HorizontalAccuracy_5();
		double L_65 = L_64;
		RuntimeObject * L_66 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_65);
		String_t* L_67;
		L_67 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral31D77236056880C0D3C936B020E57CFE072FD559, L_66, /*hidden argument*/NULL);
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_67);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)L_67);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_68 = L_62;
		GeospatialPose_t360F6479DE7A680CB4DF86477D81885FAC3C9C8D  L_69 = V_0;
		double L_70 = L_69.get_Altitude_2();
		double L_71 = L_70;
		RuntimeObject * L_72 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_71);
		String_t* L_73;
		L_73 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral8E5080011A7CA3BD4949A61B46ADA7657E8540F9, L_72, /*hidden argument*/NULL);
		NullCheck(L_68);
		ArrayElementTypeCheck (L_68, L_73);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_73);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_74 = L_68;
		GeospatialPose_t360F6479DE7A680CB4DF86477D81885FAC3C9C8D  L_75 = V_0;
		double L_76 = L_75.get_VerticalAccuracy_6();
		double L_77 = L_76;
		RuntimeObject * L_78 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_77);
		String_t* L_79;
		L_79 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral272FD43E889593108C54482F13ABAACDD71C5FFE, L_78, /*hidden argument*/NULL);
		NullCheck(L_74);
		ArrayElementTypeCheck (L_74, L_79);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)L_79);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_80 = L_74;
		GeospatialPose_t360F6479DE7A680CB4DF86477D81885FAC3C9C8D  L_81 = V_0;
		double L_82 = L_81.get_Heading_3();
		double L_83 = L_82;
		RuntimeObject * L_84 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_83);
		String_t* L_85;
		L_85 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral0642FD4A763B782EEF7CA72009CA8D1E0FFC5D86, L_84, /*hidden argument*/NULL);
		NullCheck(L_80);
		ArrayElementTypeCheck (L_80, L_85);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)L_85);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_86 = L_80;
		GeospatialPose_t360F6479DE7A680CB4DF86477D81885FAC3C9C8D  L_87 = V_0;
		double L_88 = L_87.get_HeadingAccuracy_4();
		double L_89 = L_88;
		RuntimeObject * L_90 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_89);
		String_t* L_91;
		L_91 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralBC7FFF74C9144CC4E77C56C5F9B4FDBC4516816D, L_90, /*hidden argument*/NULL);
		NullCheck(L_86);
		ArrayElementTypeCheck (L_86, L_91);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)L_91);
		String_t* L_92;
		L_92 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_86, /*hidden argument*/NULL);
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_92);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController__ctor_m5C6F15F6F83007A4A560201D5942D06E5E029186 (GeospatialController_t6690612341742452119EF6A0F2E16E1ED7B5945C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private float _configurePrepareTime = 3f;
		__this->set__configurePrepareTime_35((3.0f));
		// private List<GameObject> _anchorObjects = new List<GameObject>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_0, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		__this->set__anchorObjects_37(L_0);
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
// System.Void Rotate::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate_Start_m260F3DA22D8BEE3571FB61596065ECC238B60968 (Rotate_tC69B3ABBABA1DB1DFD96A92633DF3743CBB57789 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Rotate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate_Update_m66D07F3686A017A63E869D8294C08E68F4A2FBAB (Rotate_tC69B3ABBABA1DB1DFD96A92633DF3743CBB57789 * __this, const RuntimeMethod* method)
{
	{
		// transform.Rotate(0,30 * Time.deltaTime, 0, Space.World);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Rotate_mE77655C011C18F49CAD740CED7940EF1C7000357(L_0, (0.0f), ((float)il2cpp_codegen_multiply((float)(30.0f), (float)L_1)), (0.0f), 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Rotate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate__ctor_mAB2884DA9234D7A6485C5662D97205C92CA9B9C4 (Rotate_tC69B3ABBABA1DB1DFD96A92633DF3743CBB57789 * __this, const RuntimeMethod* method)
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
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.SafeAreaScaler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeAreaScaler_Update_mEDA1E9FE0C800026E4DF552BCC890772ABCA18D6 (SafeAreaScaler_t339E86182D900396D39D80FAE1A2C547CF647CCC * __this, const RuntimeMethod* method)
{
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// safeArea = Screen.safeArea;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_0;
		L_0 = Screen_get_safeArea_m47E3A61627ECEAC2336C1FBFBF67A6C7503569F5(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (_screenSafeArea != safeArea)
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_1 = __this->get__screenSafeArea_4();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_2 = V_0;
		bool L_3;
		L_3 = Rect_op_Inequality_m6D87EE93EB6C68B78B8C044217EAFCE33EE12B66(L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// _screenSafeArea = safeArea;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_4 = V_0;
		__this->set__screenSafeArea_4(L_4);
		// MatchRectTransformToSafeArea();
		SafeAreaScaler_MatchRectTransformToSafeArea_m19DC4782CB4F6D952B4E8EFA933C4251A961D719(__this, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.SafeAreaScaler::MatchRectTransformToSafeArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeAreaScaler_MatchRectTransformToSafeArea_m19DC4782CB4F6D952B4E8EFA933C4251A961D719 (SafeAreaScaler_t339E86182D900396D39D80FAE1A2C547CF647CCC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// RectTransform rectTransform = GetComponent<RectTransform>();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0;
		L_0 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		// Vector2 offsetMin = new Vector2(_screenSafeArea.xMin,
		//     Screen.height - _screenSafeArea.yMax);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_1 = __this->get_address_of__screenSafeArea_4();
		float L_2;
		L_2 = Rect_get_xMin_m02EA330BE4C4A07A3F18F50F257832E9E3C2B873((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_1, /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_4 = __this->get_address_of__screenSafeArea_4();
		float L_5;
		L_5 = Rect_get_yMax_m9685BF55B44C51FF9BA080F9995073E458E1CDC3((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_4, /*hidden argument*/NULL);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), L_2, ((float)il2cpp_codegen_subtract((float)((float)((float)L_3)), (float)L_5)), /*hidden argument*/NULL);
		// Vector2 offsetMax = new Vector2(
		//     _screenSafeArea.xMax - Screen.width,
		//     -_screenSafeArea.yMin);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_6 = __this->get_address_of__screenSafeArea_4();
		float L_7;
		L_7 = Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_6, /*hidden argument*/NULL);
		int32_t L_8;
		L_8 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_9 = __this->get_address_of__screenSafeArea_4();
		float L_10;
		L_10 = Rect_get_yMin_m2C91041817D410B32B80E338764109D75ACB01E4((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_9, /*hidden argument*/NULL);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_1), ((float)il2cpp_codegen_subtract((float)L_7, (float)((float)((float)L_8)))), ((-L_10)), /*hidden argument*/NULL);
		// rectTransform.offsetMin = offsetMin;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_11 = L_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12 = V_0;
		NullCheck(L_11);
		RectTransform_set_offsetMin_m86D7818770137C150B70A3842EBF03F494C34271(L_11, L_12, /*hidden argument*/NULL);
		// rectTransform.offsetMax = offsetMax;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = V_1;
		NullCheck(L_11);
		RectTransform_set_offsetMax_m5FDE1063C8BA1EC98D3C57C58DD2A1B9B721A8BF(L_11, L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.SafeAreaScaler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeAreaScaler__ctor_m544B703D9F6040FCF178123CCCAEDB232CEAA718 (SafeAreaScaler_t339E86182D900396D39D80FAE1A2C547CF647CCC * __this, const RuntimeMethod* method)
{
	{
		// private Rect _screenSafeArea = new Rect(0, 0, 0, 0);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_0), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set__screenSafeArea_4(L_0);
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
// System.Void SampleScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleScript_Start_mF9A8FA37BACEC0B005219B0CFE6642C744E92644 (SampleScript_tADEACD51DA09B1912CF20CB233644641C8A36186 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject zero = Instantiate(ContentPrefab, Vector3.zero, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_ContentPrefab_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_2;
		L_2 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_0, L_1, L_2, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void SampleScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleScript_Update_mB3FBFF57BD6F501BF7906ECFF223E17CCB509C38 (SampleScript_tADEACD51DA09B1912CF20CB233644641C8A36186 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARAnchorManagerExtensions_tAE16512F2947CC8B022F06BA32E94FE61DBBACE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E287435FD397C47BE968855D25241480B97C5C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD98B91B80DF1365100F167CEBFA7CD461FEAB2F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	GeospatialPose_t360F6479DE7A680CB4DF86477D81885FAC3C9C8D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_2;
	memset((&V_2), 0, sizeof(V_2));
	ARGeospatialAnchor_tF7BD994A88D37D4DAADC1958C201114E6BDE8A3B * V_3 = NULL;
	{
		// string status = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// if ( ! Initializer.IsReady || EarthManager.EarthTrackingState != TrackingState.Tracking)
		VpsInitializer_tF90B64868562B7A4C54A3A9CB7F1946B11E13133 * L_0 = __this->get_Initializer_5();
		NullCheck(L_0);
		bool L_1;
		L_1 = VpsInitializer_get_IsReady_m6779687169C91C6784E5B4DDAB5AE6E06F3C626F_inline(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		AREarthManager_tC7BD26586198E227BFD80ED37AE297887DA20519 * L_2 = __this->get_EarthManager_4();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = AREarthManager_get_EarthTrackingState_mD84D99281E2E77F943360A37B47EDC8BA17AE01B(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_0022;
		}
	}

IL_0021:
	{
		// return;
		return;
	}

IL_0022:
	{
		// GeospatialPose pose = EarthManager.CameraGeospatialPose;
		AREarthManager_tC7BD26586198E227BFD80ED37AE297887DA20519 * L_4 = __this->get_EarthManager_4();
		NullCheck(L_4);
		GeospatialPose_t360F6479DE7A680CB4DF86477D81885FAC3C9C8D  L_5;
		L_5 = AREarthManager_get_CameraGeospatialPose_mA068C7441E347DCAF92FAB2DCF8FC093370AC795(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// if (pose.HeadingAccuracy > HeadingThreshold || pose.HorizontalAccuracy > HorizontalThreshold)
		GeospatialPose_t360F6479DE7A680CB4DF86477D81885FAC3C9C8D  L_6 = V_1;
		double L_7 = L_6.get_HeadingAccuracy_4();
		double L_8 = __this->get_HeadingThreshold_7();
		if ((((double)L_7) > ((double)L_8)))
		{
			goto IL_004a;
		}
	}
	{
		GeospatialPose_t360F6479DE7A680CB4DF86477D81885FAC3C9C8D  L_9 = V_1;
		double L_10 = L_9.get_HorizontalAccuracy_5();
		double L_11 = __this->get_HorizontalThreshold_8();
		if ((!(((double)L_10) > ((double)L_11))))
		{
			goto IL_0052;
		}
	}

IL_004a:
	{
		// status = "低精度︓周辺を⾒回してください";
		V_0 = _stringLiteral4E287435FD397C47BE968855D25241480B97C5C9;
		// }
		goto IL_00c9;
	}

IL_0052:
	{
		// status = "⾼精度︓High Tracking Accuracy";
		V_0 = _stringLiteralD98B91B80DF1365100F167CEBFA7CD461FEAB2F5;
		// if (displayObject == null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_displayObject_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_12, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00c9;
		}
	}
	{
		// Altitude = pose.Altitude;
		GeospatialPose_t360F6479DE7A680CB4DF86477D81885FAC3C9C8D  L_14 = V_1;
		double L_15 = L_14.get_Altitude_2();
		__this->set_Altitude_11(L_15);
		// Quaternion quaternion = Quaternion.AngleAxis(180f - (float)Heading, Vector3.up);  // ⾓度の補正(このあと使うAnchor⽣成関数が、南=0を前提としているため)
		double L_16 = __this->get_Heading_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_18;
		L_18 = Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398(((float)il2cpp_codegen_subtract((float)(180.0f), (float)((float)((float)L_16)))), L_17, /*hidden argument*/NULL);
		V_2 = L_18;
		// ARGeospatialAnchor anchor = AnchorManager.AddAnchor(Latitude, Longitude, Altitude, quaternion); // 指定した位置・向きのアンカーを作成 (緯度・経度・⾼度をx,y,zに、⽅位を姿勢に変換)
		ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F * L_19 = __this->get_AnchorManager_15();
		double L_20 = __this->get_Latitude_9();
		double L_21 = __this->get_Longitude_10();
		double L_22 = __this->get_Altitude_11();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_23 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(ARAnchorManagerExtensions_tAE16512F2947CC8B022F06BA32E94FE61DBBACE2_il2cpp_TypeInfo_var);
		ARGeospatialAnchor_tF7BD994A88D37D4DAADC1958C201114E6BDE8A3B * L_24;
		L_24 = ARAnchorManagerExtensions_AddAnchor_mC8A1FD5398E265125A890A24F5DC26A146DBB8DC(L_19, L_20, L_21, L_22, L_23, /*hidden argument*/NULL);
		V_3 = L_24;
		// if (anchor != null)
		ARGeospatialAnchor_tF7BD994A88D37D4DAADC1958C201114E6BDE8A3B * L_25 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_25, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00c9;
		}
	}
	{
		// displayObject = Instantiate(ContentPrefab, anchor.transform);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = __this->get_ContentPrefab_13();
		ARGeospatialAnchor_tF7BD994A88D37D4DAADC1958C201114E6BDE8A3B * L_28 = V_3;
		NullCheck(L_28);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_28, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30;
		L_30 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_27, L_29, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		__this->set_displayObject_14(L_30);
	}

IL_00c9:
	{
		// ShowTrackingInfo(status, pose, displayObject);
		String_t* L_31 = V_0;
		GeospatialPose_t360F6479DE7A680CB4DF86477D81885FAC3C9C8D  L_32 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33 = __this->get_displayObject_14();
		SampleScript_ShowTrackingInfo_mCC07914D92859D65133ECD400EC2E40CFAF5FC19(__this, L_31, L_32, L_33, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SampleScript::ShowTrackingInfo(System.String,Google.XR.ARCoreExtensions.GeospatialPose,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleScript_ShowTrackingInfo_mCC07914D92859D65133ECD400EC2E40CFAF5FC19 (SampleScript_tADEACD51DA09B1912CF20CB233644641C8A36186 * __this, String_t* ___status0, GeospatialPose_t360F6479DE7A680CB4DF86477D81885FAC3C9C8D  ___pose1, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___obj2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2312D0E740ED40E04914F7257EBD8FA4307900D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// OutputText.text = string.Format(
		//     " \n\n" +
		//     " Latitude/Longitude: {0}°, {1}°\n" + // 緯度・経度
		//     " Horizontal Accuracy: {2}m\n" + // ⽔平⽅向の精度
		//     " Altitude: {3}m\n" + // ⾼度
		//     " Vertical Accuracy: {4}m\n" + // ⾼度の精度
		//     " Heading: {5}°\n" + // ⽅位
		//     " Heading Accuracy: {6} °\n" + // ⽅位の精度
		//     " {7} \n" + // statusに代⼊された⽂字列
		//     " Object Position: {8} \n" +
		//     " Camera Position: {9} \n"
		//     ,
		//     pose.Latitude.ToString("F6"), // {0}
		//     pose.Longitude.ToString("F6"), // {1}
		//     pose.HorizontalAccuracy.ToString("F6"), // {2}
		//     pose.Altitude.ToString("F2"), // {3}
		//     pose.VerticalAccuracy.ToString("F2"), // {4}
		//     pose.Heading.ToString("F1"), // {5}
		//     pose.HeadingAccuracy.ToString("F1"), // {6}
		//     status, // {7},
		//     obj.transform.position.ToString(), // {8}
		//     Camera.main.transform.position.ToString() // {9}
		// );
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_OutputText_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		double* L_3 = (&___pose1)->get_address_of_Latitude_0();
		String_t* L_4;
		L_4 = Double_ToString_m01772ACCBAF392BB24F3A8803DF40ADCF148D64C((double*)L_3, _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_2;
		double* L_6 = (&___pose1)->get_address_of_Longitude_1();
		String_t* L_7;
		L_7 = Double_ToString_m01772ACCBAF392BB24F3A8803DF40ADCF148D64C((double*)L_6, _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_5;
		double* L_9 = (&___pose1)->get_address_of_HorizontalAccuracy_5();
		String_t* L_10;
		L_10 = Double_ToString_m01772ACCBAF392BB24F3A8803DF40ADCF148D64C((double*)L_9, _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3, /*hidden argument*/NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_10);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_8;
		double* L_12 = (&___pose1)->get_address_of_Altitude_2();
		String_t* L_13;
		L_13 = Double_ToString_m01772ACCBAF392BB24F3A8803DF40ADCF148D64C((double*)L_12, _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748, /*hidden argument*/NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_13);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = L_11;
		double* L_15 = (&___pose1)->get_address_of_VerticalAccuracy_6();
		String_t* L_16;
		L_16 = Double_ToString_m01772ACCBAF392BB24F3A8803DF40ADCF148D64C((double*)L_15, _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748, /*hidden argument*/NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_16);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = L_14;
		double* L_18 = (&___pose1)->get_address_of_Heading_3();
		String_t* L_19;
		L_19 = Double_ToString_m01772ACCBAF392BB24F3A8803DF40ADCF148D64C((double*)L_18, _stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391, /*hidden argument*/NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_19);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = L_17;
		double* L_21 = (&___pose1)->get_address_of_HeadingAccuracy_4();
		String_t* L_22;
		L_22 = Double_ToString_m01772ACCBAF392BB24F3A8803DF40ADCF148D64C((double*)L_21, _stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391, /*hidden argument*/NULL);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_22);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_22);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_23 = L_20;
		String_t* L_24 = ___status0;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_24);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25 = L_23;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = ___obj2;
		NullCheck(L_26);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_27, /*hidden argument*/NULL);
		V_0 = L_28;
		String_t* L_29;
		L_29 = Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_29);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)L_29);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_30 = L_25;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_31;
		L_31 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_31);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_32, /*hidden argument*/NULL);
		V_0 = L_33;
		String_t* L_34;
		L_34 = Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_34);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject *)L_34);
		String_t* L_35;
		L_35 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral2312D0E740ED40E04914F7257EBD8FA4307900D8, L_30, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_35);
		// }
		return;
	}
}
// System.Void SampleScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleScript__ctor_m49FA8D6A40F27E58499A19922FB16009292C20BD (SampleScript_tADEACD51DA09B1912CF20CB233644641C8A36186 * __this, const RuntimeMethod* method)
{
	{
		// public double HeadingThreshold = 25; // ⽅位の許容精度
		__this->set_HeadingThreshold_7((25.0));
		// public double HorizontalThreshold = 20; // ⽔平位置の許容精度
		__this->set_HorizontalThreshold_8((20.0));
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
// System.Boolean AR_Fukuoka.VpsInitializer::get_IsReady()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VpsInitializer_get_IsReady_m6779687169C91C6784E5B4DDAB5AE6E06F3C626F (VpsInitializer_tF90B64868562B7A4C54A3A9CB7F1946B11E13133 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsReady { get { return _isReady; } }
		bool L_0 = __this->get__isReady_9();
		return L_0;
	}
}
// System.Void AR_Fukuoka.VpsInitializer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VpsInitializer_Awake_mE2AC8221E8D1DC59969941BF024F105F78DD5819 (VpsInitializer_tF90B64868562B7A4C54A3A9CB7F1946B11E13133 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC2DBADB2D94879827209856D3681D3473726A46);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_lockScreenToPortrait)
		bool L_0 = __this->get__lockScreenToPortrait_10();
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		// Screen.autorotateToLandscapeLeft = false;
		Screen_set_autorotateToLandscapeLeft_mA58796BBE0540504E54B1E0A06C06786456C4D5B((bool)0, /*hidden argument*/NULL);
		// Screen.autorotateToLandscapeRight = false;
		Screen_set_autorotateToLandscapeRight_m7934E7BCD90CEE16D1C4A10E739DF1B021F2E255((bool)0, /*hidden argument*/NULL);
		// Screen.autorotateToPortraitUpsideDown = false;
		Screen_set_autorotateToPortraitUpsideDown_m55CA3FBCA4E8F835AC084D1B0FAE19D72A924906((bool)0, /*hidden argument*/NULL);
		// Screen.orientation = ScreenOrientation.Portrait;
		Screen_set_orientation_mBEF7687B3C2B4726AE40F2BBB3568B1B131B6D1B(1, /*hidden argument*/NULL);
	}

IL_0020:
	{
		// Application.targetFrameRate = 60;
		Application_set_targetFrameRate_m0F44C8D07060E17D9D44D176888D14DBABE0CBFC(((int32_t)60), /*hidden argument*/NULL);
		// if (ARCoreExtensions == null)
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_1 = __this->get_ARCoreExtensions_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		// Debug.LogError("Cannot find ARCoreExtensions.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralEC2DBADB2D94879827209856D3681D3473726A46, /*hidden argument*/NULL);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void AR_Fukuoka.VpsInitializer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VpsInitializer_OnEnable_mDEB29B7AF506CA695A7125D0EA49EBCAEFBA69EC (VpsInitializer_tF90B64868562B7A4C54A3A9CB7F1946B11E13133 * __this, const RuntimeMethod* method)
{
	{
		// _isReturning = false;
		__this->set__isReturning_6((bool)0);
		// _enablingGeospatial = false;
		__this->set__enablingGeospatial_7((bool)0);
		// _isReady = false;
		__this->set__isReady_9((bool)0);
		// }
		return;
	}
}
// System.Void AR_Fukuoka.VpsInitializer::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VpsInitializer_OnDisable_m24EB59F384BB155A09318A9791D7216E1A661A72 (VpsInitializer_tF90B64868562B7A4C54A3A9CB7F1946B11E13133 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void AR_Fukuoka.VpsInitializer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VpsInitializer_Update_m4A9D5C9FF1E0E6510D220A011AE76ACED179AAD8 (VpsInitializer_tF90B64868562B7A4C54A3A9CB7F1946B11E13133 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EarthState_t592969F04C9684A777DEE2C0947C50FE93BFDC53_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12129C966D1274A2EF853A1668600EE873FA4D2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0A24FC541CCC2A139AC9F8BE75113AD3649BFBD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE0D2C7E866F161F8886976B7C5F3F27F3BB4E7A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// LifecycleUpdate();
		VpsInitializer_LifecycleUpdate_m52179580CB5E4D275516779A0FF7B8A469659F00(__this, /*hidden argument*/NULL);
		// if (_isReturning)
		bool L_0 = __this->get__isReturning_6();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (ARSession.state != ARSessionState.SessionInitializing &&
		//     ARSession.state != ARSessionState.SessionTracking)
		int32_t L_1;
		L_1 = ARSession_get_state_m623161F1E2E5BA2752C821DD409880E6647CA130_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)6)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2;
		L_2 = ARSession_get_state_m623161F1E2E5BA2752C821DD409880E6647CA130_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)7)))
		{
			goto IL_0020;
		}
	}
	{
		// return;
		return;
	}

IL_0020:
	{
		// var featureSupport = EarthManager.IsGeospatialModeSupported(GeospatialMode.Enabled);
		AREarthManager_tC7BD26586198E227BFD80ED37AE297887DA20519 * L_3 = __this->get_EarthManager_4();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = AREarthManager_IsGeospatialModeSupported_m75BA4AA162446135B3669330352CEFB70CD2B441(L_3, 2, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		switch (L_5)
		{
			case 0:
			{
				goto IL_004e;
			}
			case 1:
			{
				goto IL_0041;
			}
			case 2:
			{
				goto IL_0042;
			}
		}
	}
	{
		goto IL_008e;
	}

IL_0041:
	{
		// return;
		return;
	}

IL_0042:
	{
		// ReturnWithReason("Geospatial API is not supported by this devices.");
		VpsInitializer_ReturnWithReason_m7E619FD10FE916F2AF098D04C2862EE35C195CDE(__this, _stringLiteralDE0D2C7E866F161F8886976B7C5F3F27F3BB4E7A, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_004e:
	{
		// if (ARCoreExtensions.ARCoreExtensionsConfig.GeospatialMode ==
		//     GeospatialMode.Disabled)
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_6 = __this->get_ARCoreExtensions_5();
		NullCheck(L_6);
		ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * L_7 = L_6->get_ARCoreExtensionsConfig_7();
		NullCheck(L_7);
		int32_t L_8 = L_7->get_GeospatialMode_5();
		if (L_8)
		{
			goto IL_008e;
		}
	}
	{
		// Debug.Log("Geospatial sample switched to GeospatialMode.Enabled.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralA0A24FC541CCC2A139AC9F8BE75113AD3649BFBD, /*hidden argument*/NULL);
		// ARCoreExtensions.ARCoreExtensionsConfig.GeospatialMode =
		//     GeospatialMode.Enabled;
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_9 = __this->get_ARCoreExtensions_5();
		NullCheck(L_9);
		ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * L_10 = L_9->get_ARCoreExtensionsConfig_7();
		NullCheck(L_10);
		L_10->set_GeospatialMode_5(2);
		// _configurePrepareTime = 3.0f;
		__this->set__configurePrepareTime_8((3.0f));
		// _enablingGeospatial = true;
		__this->set__enablingGeospatial_7((bool)1);
		// return;
		return;
	}

IL_008e:
	{
		// if (_enablingGeospatial)
		bool L_11 = __this->get__enablingGeospatial_7();
		if (!L_11)
		{
			goto IL_00bf;
		}
	}
	{
		// _configurePrepareTime -= Time.deltaTime;
		float L_12 = __this->get__configurePrepareTime_8();
		float L_13;
		L_13 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set__configurePrepareTime_8(((float)il2cpp_codegen_subtract((float)L_12, (float)L_13)));
		// if (_configurePrepareTime < 0)
		float L_14 = __this->get__configurePrepareTime_8();
		if ((!(((float)L_14) < ((float)(0.0f)))))
		{
			goto IL_00be;
		}
	}
	{
		// _enablingGeospatial = false;
		__this->set__enablingGeospatial_7((bool)0);
		// }
		goto IL_00bf;
	}

IL_00be:
	{
		// return;
		return;
	}

IL_00bf:
	{
		// var earthState = EarthManager.EarthState;
		AREarthManager_tC7BD26586198E227BFD80ED37AE297887DA20519 * L_15 = __this->get_EarthManager_4();
		NullCheck(L_15);
		int32_t L_16;
		L_16 = AREarthManager_get_EarthState_mFAD4AF91C800C730AB194B3FE0C841F07E11EE59(L_15, /*hidden argument*/NULL);
		V_1 = L_16;
		// if (earthState != EarthState.Enabled)
		int32_t L_17 = V_1;
		if (!L_17)
		{
			goto IL_00ec;
		}
	}
	{
		// ReturnWithReason(
		//     "Geospatial sample encountered an EarthState error: " + earthState);
		RuntimeObject * L_18 = Box(EarthState_t592969F04C9684A777DEE2C0947C50FE93BFDC53_il2cpp_TypeInfo_var, (&V_1));
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_18);
		V_1 = *(int32_t*)UnBox(L_18);
		String_t* L_20;
		L_20 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral12129C966D1274A2EF853A1668600EE873FA4D2C, L_19, /*hidden argument*/NULL);
		VpsInitializer_ReturnWithReason_m7E619FD10FE916F2AF098D04C2862EE35C195CDE(__this, L_20, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_00ec:
	{
		// bool isSessionReady = ARSession.state == ARSessionState.SessionTracking;
		int32_t L_21;
		L_21 = ARSession_get_state_m623161F1E2E5BA2752C821DD409880E6647CA130_inline(/*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_21) == ((int32_t)7))? 1 : 0);
		// _isReady = isSessionReady;
		bool L_22 = V_2;
		__this->set__isReady_9(L_22);
		// }
		return;
	}
}
// System.Void AR_Fukuoka.VpsInitializer::LifecycleUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VpsInitializer_LifecycleUpdate_m52179580CB5E4D275516779A0FF7B8A469659F00 (VpsInitializer_tF90B64868562B7A4C54A3A9CB7F1946B11E13133 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSessionState_tC5054273C7CB11C5C40D36745DDD2AF056ED1F25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E220F394CF0E90F7FEF038F482846BFBB93ED64);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80D85E354963DC5787AAB3990BB9B8D1D718AD91);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		// if (Input.GetKeyUp(KeyCode.Escape))
		bool L_0;
		L_0 = Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F(((int32_t)27), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
	}

IL_000e:
	{
		// if (_isReturning)
		bool L_1 = __this->get__isReturning_6();
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// return;
		return;
	}

IL_0017:
	{
		// var sleepTimeout = SleepTimeout.NeverSleep;
		V_0 = (-1);
		// if (ARSession.state != ARSessionState.SessionTracking)
		int32_t L_2;
		L_2 = ARSession_get_state_m623161F1E2E5BA2752C821DD409880E6647CA130_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)7)))
		{
			goto IL_0024;
		}
	}
	{
		// sleepTimeout = SleepTimeout.SystemSetting;
		V_0 = ((int32_t)-2);
	}

IL_0024:
	{
		// Screen.sleepTimeout = sleepTimeout;
		int32_t L_3 = V_0;
		Screen_set_sleepTimeout_mE9A766E696E76AC77EAADB4CA6412454577FCBB3(L_3, /*hidden argument*/NULL);
		// string returningReason = string.Empty;
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_1 = L_4;
		// if (ARSession.state != ARSessionState.CheckingAvailability &&
		//     ARSession.state != ARSessionState.Ready &&
		//     ARSession.state != ARSessionState.SessionInitializing &&
		//     ARSession.state != ARSessionState.SessionTracking)
		int32_t L_5;
		L_5 = ARSession_get_state_m623161F1E2E5BA2752C821DD409880E6647CA130_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6;
		L_6 = ARSession_get_state_m623161F1E2E5BA2752C821DD409880E6647CA130_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_6) == ((int32_t)5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_7;
		L_7 = ARSession_get_state_m623161F1E2E5BA2752C821DD409880E6647CA130_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_7) == ((int32_t)6)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_8;
		L_8 = ARSession_get_state_m623161F1E2E5BA2752C821DD409880E6647CA130_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)7)))
		{
			goto IL_0067;
		}
	}
	{
		// returningReason = string.Format(
		//     "Geospatial sample encountered an ARSession error state {0}.\n" +
		//     "Please start the app again.",
		//     ARSession.state);
		int32_t L_9;
		L_9 = ARSession_get_state_m623161F1E2E5BA2752C821DD409880E6647CA130_inline(/*hidden argument*/NULL);
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(ARSessionState_tC5054273C7CB11C5C40D36745DDD2AF056ED1F25_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12;
		L_12 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral4E220F394CF0E90F7FEF038F482846BFBB93ED64, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		// }
		goto IL_0085;
	}

IL_0067:
	{
		// else if (ARCoreExtensions == null)
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_13 = __this->get_ARCoreExtensions_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_13, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0085;
		}
	}
	{
		// returningReason = string.Format(
		//     "Geospatial sample failed with missing AR Components.");
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15;
		L_15 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		String_t* L_16;
		L_16 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral80D85E354963DC5787AAB3990BB9B8D1D718AD91, L_15, /*hidden argument*/NULL);
		V_1 = L_16;
	}

IL_0085:
	{
		// ReturnWithReason(returningReason);
		String_t* L_17 = V_1;
		VpsInitializer_ReturnWithReason_m7E619FD10FE916F2AF098D04C2862EE35C195CDE(__this, L_17, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AR_Fukuoka.VpsInitializer::ReturnWithReason(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VpsInitializer_ReturnWithReason_m7E619FD10FE916F2AF098D04C2862EE35C195CDE (VpsInitializer_tF90B64868562B7A4C54A3A9CB7F1946B11E13133 * __this, String_t* ___reason0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrEmpty(reason))
		String_t* L_0 = ___reason0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// Debug.LogError(reason);
		String_t* L_2 = ___reason0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_2, /*hidden argument*/NULL);
		// _isReturning = true;
		__this->set__isReturning_6((bool)1);
		// _isReady = false;
		__this->set__isReady_9((bool)0);
		// }
		return;
	}
}
// System.Void AR_Fukuoka.VpsInitializer::QuitApplication()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VpsInitializer_QuitApplication_mB11326E6CF083338BA28911E12AB35AFEC2F5500 (VpsInitializer_tF90B64868562B7A4C54A3A9CB7F1946B11E13133 * __this, const RuntimeMethod* method)
{
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AR_Fukuoka.VpsInitializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VpsInitializer__ctor_mB51B03C7B3E25A0B1FAD8B4ED8B9D8C02D3D81A4 (VpsInitializer_tF90B64868562B7A4C54A3A9CB7F1946B11E13133 * __this, const RuntimeMethod* method)
{
	{
		// private float _configurePrepareTime = 3f;
		__this->set__configurePrepareTime_8((3.0f));
		// public bool _lockScreenToPortrait = true;
		__this->set__lockScreenToPortrait_10((bool)1);
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
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m1ED4F8A2B3D93B7A7ED1C0B93FF2F101F6F30EF2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5B0BB4CFA8D219D09B10E20DB741FB7AE622B342_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t5B0BB4CFA8D219D09B10E20DB741FB7AE622B342 * L_0 = (U3CU3Ec_t5B0BB4CFA8D219D09B10E20DB741FB7AE622B342 *)il2cpp_codegen_object_new(U3CU3Ec_t5B0BB4CFA8D219D09B10E20DB741FB7AE622B342_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m01DA06F9DE8819A82ECA8412A1EFCED4ADB999E7(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t5B0BB4CFA8D219D09B10E20DB741FB7AE622B342_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5B0BB4CFA8D219D09B10E20DB741FB7AE622B342_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m01DA06F9DE8819A82ECA8412A1EFCED4ADB999E7 (U3CU3Ec_t5B0BB4CFA8D219D09B10E20DB741FB7AE622B342 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c::<SaveGeospatialAnchorHistory>b__45_0(Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory,Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CSaveGeospatialAnchorHistoryU3Eb__45_0_m95248F2C2E8B76B87A98990D49656FBADA00A076 (U3CU3Ec_t5B0BB4CFA8D219D09B10E20DB741FB7AE622B342 * __this, GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F  ___left0, GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F  ___right1, const RuntimeMethod* method)
{
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// right.CreatedTime.CompareTo(left.CreatedTime));
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0;
		L_0 = GeospatialAnchorHistory_get_CreatedTime_m311061BC32E89B768CFADCF9A412CB2689C4C6C8((GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F *)(&___right1), /*hidden argument*/NULL);
		V_0 = L_0;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1;
		L_1 = GeospatialAnchorHistory_get_CreatedTime_m311061BC32E89B768CFADCF9A412CB2689C4C6C8((GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F *)(&___left0), /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = DateTime_CompareTo_m2864B0ABAE4B8748D4092D1D16AE56EE0B248F93((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_0), L_1, /*hidden argument*/NULL);
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
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c__DisplayClass44_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass44_0__ctor_mF47C5DD1FA602D38A4E8E23EC2BB615B20DD4F9E (U3CU3Ec__DisplayClass44_0_t38D6B8575059B49A8EA27C9B42674AD47664C694 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c__DisplayClass44_0::<LoadGeospatialAnchorHistory>b__0(Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass44_0_U3CLoadGeospatialAnchorHistoryU3Eb__0_m0065939C1BB93BF6B2C6337ECB01200FFD0014A9 (U3CU3Ec__DisplayClass44_0_t38D6B8575059B49A8EA27C9B42674AD47664C694 * __this, GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F  ___data0, const RuntimeMethod* method)
{
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// data => current.Subtract(data.CreatedTime).Days > 0);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * L_0 = __this->get_address_of_current_0();
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1;
		L_1 = GeospatialAnchorHistory_get_CreatedTime_m311061BC32E89B768CFADCF9A412CB2689C4C6C8((GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F *)(&___data0), /*hidden argument*/NULL);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_2;
		L_2 = DateTime_Subtract_mB3CA7BD87D07F9A98AA7A571D7CA179A4209AE0B((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = TimeSpan_get_Days_m4DDAF161E1C81C08CDF8AEFC1AD6AF08FAEE09A7((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_0), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARSession_get_state_m623161F1E2E5BA2752C821DD409880E6647CA130_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => s_State;
		int32_t L_0 = ((ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields*)il2cpp_codegen_static_fields_for(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_il2cpp_TypeInfo_var))->get_s_State_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VpsInitializer_get_IsReady_m6779687169C91C6784E5B4DDAB5AE6E06F3C626F_inline (VpsInitializer_tF90B64868562B7A4C54A3A9CB7F1946B11E13133 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsReady { get { return _isReady; } }
		bool L_0 = __this->get__isReady_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7F941B3739722E9F76CB6C40DB4FE6C15E1ACA5B_gshared_inline (List_1_t7BF0BA21E135E839562BA4E5D744038702F918D7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F  Enumerator_get_Current_mA2126C6AF888A1831EAF72528F3B47A8F96620F9_gshared_inline (Enumerator_t0FCEFA6AC2110A3938B99DCF45E3DF164622B657 * __this, const RuntimeMethod* method)
{
	{
		GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F  L_0 = (GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F )__this->get_current_3();
		return (GeospatialAnchorHistory_t3DB3BC6AA036E747ACE36E238BE4FE974DFFE21F )L_0;
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
