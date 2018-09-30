#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.ArgumentException
struct ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60;
// System.ArgumentNullException
struct ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4;
// System.AsyncCallback
struct AsyncCallback_t74ABD1277F711E7FBDCB00E169A63DEFD39E86A2;
// System.Byte
struct Byte_t4C3393E6E7EAD06B53234C05564190D9A2D7B149;
// System.Byte[]
struct ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8;
// System.Char[]
struct CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744;
// System.Collections.ArrayList
struct ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1;
// System.Collections.Hashtable
struct Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82;
// System.Collections.IDictionary
struct IDictionary_tD35B9437F08BE98D1E0B295CC73C48E168CAB316;
// System.DBNull
struct DBNull_tE7FF9F06B07B9177FEA5297B657A3A7688526B6A;
// System.DelegateData
struct DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9;
// System.Double
struct Double_t2011D65DAF7D1FCBE71DD4CBDFA69A8F24643159;
// System.EventArgs
struct EventArgs_tA4C15C1D2AB4B139169B1942C1477933E00DCA17;
// System.Exception
struct Exception_t;
// System.Globalization.Calendar
struct Calendar_t4D88BF2E5C47E1CE77605B8AD886FAE40FD2E3B1;
// System.Globalization.Calendar[]
struct CalendarU5BU5D_t6D772388D3C57B6834EC19608C3DE39C25C0D53E;
// System.Globalization.CompareInfo
struct CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B;
// System.Globalization.CultureInfo
struct CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t392C2A0F34C2403AD964D3D3BF27506B83BA49D4;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4;
// System.Globalization.TextInfo
struct TextInfo_tFAC9352EF3663F7B44E9B6E4A3E64A08BF02428A;
// System.IAsyncResult
struct IAsyncResult_tDA33C24465239FB383C4C2CDAAC43B9AD3CB7F05;
// System.IFormatProvider
struct IFormatProvider_t3BAF59CC620257B8C99F911BC233EF7CC5480D67;
// System.Int32
struct Int32_tC16F64335CE8B56D99229DE94BB3A876ED55FE87;
// System.Int32[]
struct Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074;
// System.IntPtr[]
struct IntPtrU5BU5D_tB866BA24C91559CF299618E230043451CC7CF659;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.NotSupportedException
struct NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6;
// System.Object[]
struct ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D;
// System.OverflowException
struct OverflowException_t0B5FFF1555598D499585564196861996A44507C5;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_tF7DED67E7D9BC1FAD7061838365480A13D2A0539;
// System.Reflection.MemberFilter
struct MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.Module
struct Module_t6211282315B01A0EB488BB95BA1A73BBE5C6B7D8;
// System.Reflection.TypeFilter
struct TypeFilter_t302222D6EE873CCA463EAC9F0D6BC173DC63E4DB;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t60655AFF5E0E6F26B4B3C7391AD4D098F6246770;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2;
// System.Security.PermissionSet
struct PermissionSet_tDDF48E0F5B1848559061479DAB5D2D54B1745A0B;
// System.Security.Policy.Evidence
struct Evidence_t9ACD05D8C0E5A1F59CD16AF01459BBD955376A4B;
// System.Security.Principal.IPrincipal
struct IPrincipal_tA78A8ED3B9AB6659FCC0ED5548D406F540FCAF58;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B;
// System.SystemException
struct SystemException_t81A06ADD519539D252788D75E44AFFBE6580E301;
// System.Threading.ExecutionContext
struct ExecutionContext_t2EC6945F5A7E9A0326AF5885457F49F4EEC26CF3;
// System.Threading.Thread
struct Thread_t83C301EC970792455F76D89E58140949B003EA50;
// System.Type
struct Type_t;
// System.TypeInitializationException
struct TypeInitializationException_tB11D339EF952E54C89496249B4B02C1E2535F9F6;
// System.TypeLoadException
struct TypeLoadException_t11569EED462C1306FB091F7210A9142451786932;
// System.Type[]
struct TypeU5BU5D_tEF927658123F6CD4274B971442504A42AB6DE532;
// System.UInt16
struct UInt16_t1FF1E02102FB09D5656DF30E5299DD359E497E9B;
// System.UnauthorizedAccessException
struct UnauthorizedAccessException_t593701C7ADFE096EC0340554C2E030FFCEEC369B;
// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_t2B19479B2BC866C465A8E07BEA9C6027CB168BA2;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_tB7988286F96CF5350E4037A92C900D84BB7FB650;
// System.UnitySerializationHolder
struct UnitySerializationHolder_t1F3CD67778C9EC0C6F3A05CC6F44A4CC047B7307;
// System.ValueType
struct ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C;
// System.Version
struct Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15;
// System.Void
struct Void_tDB81A15FA2AB53E2401A76B745D215397B29F783;
// System.WeakReference
struct WeakReference_t748C76A5CAD65471521659008DBC57191528AA9C;
// System.__Il2CppComDelegate
struct __Il2CppComDelegate_t67B66A584C55DA33A97319518FAD9D61A503C4EE;
// System.__Il2CppComObject
struct Il2CppComObject;

extern RuntimeClass* ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744_il2cpp_TypeInfo_var;
extern RuntimeClass* Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_il2cpp_TypeInfo_var;
extern RuntimeClass* Convert_t8A398E85B5FC90CA984E604BD3F65BD7B205D592_il2cpp_TypeInfo_var;
extern RuntimeClass* DBNull_tE7FF9F06B07B9177FEA5297B657A3A7688526B6A_il2cpp_TypeInfo_var;
extern RuntimeClass* EventArgs_tA4C15C1D2AB4B139169B1942C1477933E00DCA17_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* IFormatProvider_t3BAF59CC620257B8C99F911BC233EF7CC5480D67_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_tC16F64335CE8B56D99229DE94BB3A876ED55FE87_il2cpp_TypeInfo_var;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6_il2cpp_TypeInfo_var;
extern RuntimeClass* NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4_il2cpp_TypeInfo_var;
extern RuntimeClass* NumberFormatter_t68475AD595A7C11B0615994FBA7B580C52E60824_il2cpp_TypeInfo_var;
extern RuntimeClass* OverflowException_t0B5FFF1555598D499585564196861996A44507C5_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Thread_t83C301EC970792455F76D89E58140949B003EA50_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt16_t1FF1E02102FB09D5656DF30E5299DD359E497E9B_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt32_t69F92C53356907895162C7F31D87C59F9141D3B8_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt64_t9739CEA7F47A9C2DB5DDEAE34A1CE4B78AF8B29F_il2cpp_TypeInfo_var;
extern RuntimeClass* UIntPtr_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral18C9D4621EF6C3113CE1F960346D7603E88406E8;
extern String_t* _stringLiteral236206AA94046090214FF4A105F3B4133E858761;
extern String_t* _stringLiteral24811694F722F05ECA04FCF43D25E232F46EA76F;
extern String_t* _stringLiteral27BED7455215AA8A8EA1D7944A4975BAA72AA6B6;
extern String_t* _stringLiteral2900AF5F21E636D880DEEAE568B5B16DC2248236;
extern String_t* _stringLiteral3886FAAB186277EC9F7FEBBB72CE301AC5E2773C;
extern String_t* _stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727;
extern String_t* _stringLiteral3D708CB7F76AF5A68201B998794CB435ACA1B0D5;
extern String_t* _stringLiteral3EAF8235CA4694A10F93803DF4C94B8C3FB2F658;
extern String_t* _stringLiteral5371656E62DB527D005E1031DDDEABE47B69C2B7;
extern String_t* _stringLiteral59BD0A3FF43B32849B319E645D4798D8A5D1E889;
extern String_t* _stringLiteral7E95DB629C3A5AA1BCFEB547A0BD39A78FE49276;
extern String_t* _stringLiteral80754AF91BFB6D1073585B046FE0A474CE868509;
extern String_t* _stringLiteral81CADB6DAE0B42FA83FD2FAB0350567E31D0D22E;
extern String_t* _stringLiteral9E430F17EB96D796BF49C46584B98C497F8AE559;
extern String_t* _stringLiteralA0F1490A20D0211C997B44BC357E1972DEAB8AE3;
extern String_t* _stringLiteralA977BC0091006DEFD65F30B57D7811FB836DC00A;
extern String_t* _stringLiteralA9914DA9D64B4FCE39273016F570714425122C67;
extern String_t* _stringLiteralAAA827AD7A55F65B85FD76E652CBB0654EC9FAA9;
extern String_t* _stringLiteralB0DC72E0A80389C8724C318DA7FEBB1458B04DDB;
extern String_t* _stringLiteralB35BB38DF9605E4C5858316B7853A16E42EA6997;
extern String_t* _stringLiteralC4C541592BE3C9025123CCF3AD3D8A3F4B6BA911;
extern String_t* _stringLiteralC692273DEB2772DA307FFE37041FEF77BF4BAA97;
extern String_t* _stringLiteralC744A537945159E700B780360B5746414DE20CF9;
extern String_t* _stringLiteralD05CF3F46175E08F3C75EF25B3C75BEFF7660A0B;
extern String_t* _stringLiteralD3B81375F999BE146F923A83BD6CBA9441E1F676;
extern String_t* _stringLiteralE31F38791120074366DE542990E5E66B4AEB3A22;
extern String_t* _stringLiteralE5E429BCC9C2E4A41A3C7A4D96203BE6CB273B11;
extern String_t* _stringLiteralEAE79D6E0CFF76FC7A3BB78723690B0B2367F849;
extern String_t* _stringLiteralEAF96B46E5F5B462CAD6CF1D10577EF2233627D1;
extern String_t* _stringLiteralF0541457E2B7EF76AA2DDC177C44B4FF6B95E9C5;
extern String_t* _stringLiteralF9F9F7EE8DE6F7A183A41BFE06D637532489808F;
extern String_t* _stringLiteralFA6B188D3101E2A5E782C1F0AF6FAFCA10C8BA53;
extern String_t* _stringLiteralFE66537A952957258311139D35B0945C0FC518DC;
extern String_t* _stringLiteralFEE63D97CA760412103B668617F8B29605625B7D;
extern const RuntimeMethod* TypeLoadException_GetObjectData_mBF05E1BCBC42412CEE2E4F00BBE3BF3A0CA1DCFD_RuntimeMethod_var;
extern const RuntimeMethod* TypeLoadException__ctor_mFA97232E5AFC5D088688B522029DC9D3F3286702_RuntimeMethod_var;
extern const RuntimeMethod* TypedReference_Equals_m90E79FE55F298C9B35B5405932E5B50E586E807B_RuntimeMethod_var;
extern const RuntimeMethod* UInt16_CompareTo_mB1134C5FAC51A6877240AEF00C2397D248FC5540_RuntimeMethod_var;
extern const RuntimeMethod* UInt16_Parse_mD9333C190983B84A328E9D3ADD994B5544C806D4_RuntimeMethod_var;
extern const RuntimeMethod* UInt16_System_IConvertible_ToType_mB3E1EE50E0098822EF5AC487980C6AEC8E02F076_RuntimeMethod_var;
extern const RuntimeMethod* UInt32_CompareTo_mD59CF1B0FEA7E0B7CDC3B7F1C68A8A17F057CE1B_RuntimeMethod_var;
extern const RuntimeMethod* UInt32_Parse_m898CD1C491A8D92808B1F11FA2B51D2C7CA2C4DC_RuntimeMethod_var;
extern const RuntimeMethod* UInt32_Parse_mD31A1A0C2FC3CE3EEF4A314678B35B755FD14D57_RuntimeMethod_var;
extern const RuntimeMethod* UInt32_System_IConvertible_ToType_mDEDE33396ACAE1EDF736983473F296EDE7C24FA7_RuntimeMethod_var;
extern const RuntimeMethod* UInt64_CompareTo_m041E1FF06716F221CC5D9DCD9EB27C3C12F9EA70_RuntimeMethod_var;
extern const RuntimeMethod* UInt64_Parse_m4DBE576353DDF2993426DE1CAB5E0E8344FCCA6A_RuntimeMethod_var;
extern const RuntimeMethod* UInt64_Parse_m64DC370FE1AC82186A2E8D36AF019434AB2FEDCC_RuntimeMethod_var;
extern const RuntimeMethod* UInt64_System_IConvertible_ToType_m13F392C80DE4A78FFE48C5BAEEF947D0EAA3AF36_RuntimeMethod_var;
extern const RuntimeMethod* UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m117ECE6EA8017FA6250B7D59CFE40D794090C9D6_RuntimeMethod_var;
extern const RuntimeMethod* UnitySerializationHolder_GetObjectData_m0DCDAB7ABB802E5313B2338B881AE1D1CE6690B4_RuntimeMethod_var;
extern const RuntimeMethod* UnitySerializationHolder_GetRealObject_mF8313A14C107679F256BA37709809BB82D225BC3_RuntimeMethod_var;
extern const RuntimeMethod* Version_CheckedSet_m8F93592250413F64CD48EE56635B87BD10E01775_RuntimeMethod_var;
extern const RuntimeMethod* Version_CompareTo_m4F37357349BB41DAC8C61271CBBF52F6B7A3D55A_RuntimeMethod_var;
extern const RuntimeMethod* Version__ctor_mAE9D244FEE1023A26514EE0339E7D6F26824F0F7_RuntimeMethod_var;
extern const RuntimeMethod* WeakReference_GetObjectData_m6F403EAD74C64EAF575E933D67FB2CB026332D3C_RuntimeMethod_var;
extern const RuntimeMethod* WeakReference__ctor_mDC58C556A72BFE11C54C39871D33C568B41D7297_RuntimeMethod_var;
extern const RuntimeType* Int32_tC16F64335CE8B56D99229DE94BB3A876ED55FE87_0_0_0_var;
extern const RuntimeType* NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4_0_0_0_var;
extern const RuntimeType* RuntimeObject_0_0_0_var;
extern const RuntimeType* String_t_0_0_0_var;
extern const RuntimeType* UnitySerializationHolder_t1F3CD67778C9EC0C6F3A05CC6F44A4CC047B7307_0_0_0_var;
extern const uint32_t TypeInitializationException_GetObjectData_mE58F862141765D6B8FEA4FCC831EBE955A4738BF_MetadataUsageId;
extern const uint32_t TypeInitializationException__ctor_m6E5EC4853C86B3F976E9BBAA8B0C237F1DCF0B39_MetadataUsageId;
extern const uint32_t TypeLoadException_GetObjectData_mBF05E1BCBC42412CEE2E4F00BBE3BF3A0CA1DCFD_MetadataUsageId;
extern const uint32_t TypeLoadException__ctor_m5B79C841C25943F7D014B1F6FE55F9B0A2ADA400_MetadataUsageId;
extern const uint32_t TypeLoadException__ctor_mFA97232E5AFC5D088688B522029DC9D3F3286702_MetadataUsageId;
extern const uint32_t TypeLoadException_get_Message_m07F93E6EE189DFB146E3087BFDD91CA1450A209C_MetadataUsageId;
extern const uint32_t TypedReference_Equals_m90E79FE55F298C9B35B5405932E5B50E586E807B_MetadataUsageId;
extern const uint32_t TypedReference_GetHashCode_m498D75758034EF832D0F4DF8FED3ED6B6148A3C5_MetadataUsageId;
extern const uint32_t UInt16_CompareTo_mB1134C5FAC51A6877240AEF00C2397D248FC5540_MetadataUsageId;
extern const uint32_t UInt16_Equals_mDFBF2B24788DFD4F6022AC3B74EAE7F3757A4863_MetadataUsageId;
extern const uint32_t UInt16_Parse_mD9333C190983B84A328E9D3ADD994B5544C806D4_MetadataUsageId;
extern const uint32_t UInt16_System_IConvertible_ToBoolean_m729B51E96C0DDEB8BC7686C7CD8B3E87EFAE8204_MetadataUsageId;
extern const uint32_t UInt16_System_IConvertible_ToByte_m0B97CA970B30492CD65581D9F3D6BAFA4F5A1ED7_MetadataUsageId;
extern const uint32_t UInt16_System_IConvertible_ToChar_mF42F8D08D9876C23D8AEB3740D90060F2570777C_MetadataUsageId;
extern const uint32_t UInt16_System_IConvertible_ToDateTime_mF207854A6BCA46F5DC76790B785656EC04559E80_MetadataUsageId;
extern const uint32_t UInt16_System_IConvertible_ToDecimal_m7B5FB92C0983F673FD43FFEA72A5002C715F8B4C_MetadataUsageId;
extern const uint32_t UInt16_System_IConvertible_ToDouble_mB16F100CD3D9A3A9A10ECB6575D6BB223DBA424F_MetadataUsageId;
extern const uint32_t UInt16_System_IConvertible_ToInt16_m5459C77DCD6ABCB132E7FC253F546DAB7ADC3E11_MetadataUsageId;
extern const uint32_t UInt16_System_IConvertible_ToInt32_m79765217DDA95FBAE0F5E34900D17C62E440A610_MetadataUsageId;
extern const uint32_t UInt16_System_IConvertible_ToInt64_mA2FB4C3314A5C441B83D50CC7A71145CE3AFB2F4_MetadataUsageId;
extern const uint32_t UInt16_System_IConvertible_ToSByte_mB24AC1F9B3459756F8B09C3246D9BF3F3C42672E_MetadataUsageId;
extern const uint32_t UInt16_System_IConvertible_ToSingle_mBF40EED90D2D740C5D6DE2E33C84A4BA0C0D7A8F_MetadataUsageId;
extern const uint32_t UInt16_System_IConvertible_ToType_mB3E1EE50E0098822EF5AC487980C6AEC8E02F076_MetadataUsageId;
extern const uint32_t UInt16_System_IConvertible_ToUInt32_mF0A5511967CB960062E947A0398A77AD029B191A_MetadataUsageId;
extern const uint32_t UInt16_System_IConvertible_ToUInt64_m828957BE3D492585F3A2ACBA69043048FE4F5638_MetadataUsageId;
extern const uint32_t UInt16_ToString_m88AEAB9A3A946F1EFAA5B7EEFD53418BFCC9A291_MetadataUsageId;
extern const uint32_t UInt16_ToString_m8B034D44F088A495C32D028465A00DAFD92D30C0_MetadataUsageId;
extern const uint32_t UInt16_ToString_mF4094206BDFACF142662B6A79D2E031B62995915_MetadataUsageId;
extern const uint32_t UInt32_CompareTo_mD59CF1B0FEA7E0B7CDC3B7F1C68A8A17F057CE1B_MetadataUsageId;
extern const uint32_t UInt32_Equals_m32B5BCC2ACE3D7E62E1533444EBE3B77EB9F6E3C_MetadataUsageId;
extern const uint32_t UInt32_Parse_m898CD1C491A8D92808B1F11FA2B51D2C7CA2C4DC_MetadataUsageId;
extern const uint32_t UInt32_Parse_mD31A1A0C2FC3CE3EEF4A314678B35B755FD14D57_MetadataUsageId;
extern const uint32_t UInt32_Parse_mF445201DDD2567AFFDDB0C77E3CF36AAF86AB015_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToBoolean_mA1E6FEB604A85A0A430CE14402FFA747B1AC89D4_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToByte_mCD6E9C1688DDF9CAEA411FB7034156391BE80BFC_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToChar_m584DB5ED5BF27ACC5C32718BB2E3980C2ECF2324_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToDateTime_mFAEDEA01849843F96A56CFF57ACE2DAD99AC1733_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToDecimal_m1444D0160E200613C2B1DF50BFEDAB16A526ECEF_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToDouble_m63E2FC6EE49C3F3C4D4B6BF1136C38B057D47F20_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToInt16_m8B63C4C4AC2243C6ABB2D54F2266F30D5C94BF7C_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToInt32_m029088A2A10D3CFAF9AF89167D3D50EBE151855E_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToInt64_mB82C26F063D0A90E448001DFFE1A26B627B8A550_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToSByte_m66107791231D91FB1E1160AE303C83C494BFB577_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToSingle_m9607A0F1FABF531D905791E3DDE6BA8B81528E04_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToType_mDEDE33396ACAE1EDF736983473F296EDE7C24FA7_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToUInt16_mB8DB68EB7CBDB2CD886DD832585F4777A8D21C5A_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToUInt64_mDEEBA8BA19D5C5C303B933CA4920C74105CC294C_MetadataUsageId;
extern const uint32_t UInt32_ToString_m230B934119903A90F549E32D43B3E2A252324CFC_MetadataUsageId;
extern const uint32_t UInt32_ToString_mB9E6EE2E0633BB6D2E46B9BB44049640734C3982_MetadataUsageId;
extern const uint32_t UInt32_ToString_mC174A5A4A8166D0F152D94A65CB535E4DAC99F4D_MetadataUsageId;
extern const uint32_t UInt64_CompareTo_m041E1FF06716F221CC5D9DCD9EB27C3C12F9EA70_MetadataUsageId;
extern const uint32_t UInt64_Equals_mDD0D839B196D74CC004F10CA2A1F5DF5F022A3B8_MetadataUsageId;
extern const uint32_t UInt64_Parse_m4DBE576353DDF2993426DE1CAB5E0E8344FCCA6A_MetadataUsageId;
extern const uint32_t UInt64_Parse_m64DC370FE1AC82186A2E8D36AF019434AB2FEDCC_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToBoolean_mC5B4822502427B3930661390097D9F495D655B21_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToByte_m5D4A4C572F0107E424A3A759C71F5010932C84A3_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToChar_m3B42FC6D1379A1823E8F2FF1C3FE29B3F3ED2804_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToDateTime_mDC82BBB67CCC2B0D9EE566A80C7A353184274FE4_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToDecimal_m5CEB73C070A190110351684302F5817E686EB840_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToDouble_mCA339EB2DC18F00382AF94BD4C8C9D2EC79E4E28_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToInt16_mEEBBA7B8F1D5D89D18FA917AB1EFB3D450FBB0BA_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToInt32_mAB77BCAA67C83BFD65FBCEABC3C59A17B4B8C2D6_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToInt64_m54199F49F25C4B3B174EB8836B79DA1B5C01BE31_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToSByte_mCD877C98892D8E552D6A16977E27958F775A249A_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToSingle_mF7FD4CAAD9927F7420889A89AB357523AE036027_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToType_m13F392C80DE4A78FFE48C5BAEEF947D0EAA3AF36_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToUInt16_mBC7A7C119956C4757D90697326F2724FDBB80501_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToUInt32_m77753CCA949A68A16F6EC35DB4B09699371B076F_MetadataUsageId;
extern const uint32_t UInt64_ToString_m58FD557196BB2440D450C98FF9DFDF3B310F67CF_MetadataUsageId;
extern const uint32_t UInt64_ToString_mA8C13043CA751D73C8F9D57CCB4A5FC07E78B90A_MetadataUsageId;
extern const uint32_t UInt64_ToString_mDDB657B6C06A57D111E9C9BB89D15199F9CE0D30_MetadataUsageId;
extern const uint32_t UIntPtr_Equals_m099FA719C2D00C6231F941B1651A1165743C84CA_MetadataUsageId;
extern const uint32_t UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m117ECE6EA8017FA6250B7D59CFE40D794090C9D6_MetadataUsageId;
extern const uint32_t UIntPtr__cctor_m5CEC59A10CF421074BA41EF798AC069ABB40ECCE_MetadataUsageId;
extern const uint32_t UnauthorizedAccessException__ctor_mF27352A019FCA746707FE8467D70623327A29286_MetadataUsageId;
extern const uint32_t UnhandledExceptionEventArgs__ctor_m6C5F64C155794F0CAC13285CEE09322B174921F4_MetadataUsageId;
extern const uint32_t UnitySerializationHolder_GetDBNullData_m6A872BB3305DE2035081EE77FF61D4D0C9EE5CB4_MetadataUsageId;
extern const uint32_t UnitySerializationHolder_GetModuleData_mB5E09BEB03A8103DA240D489112B93DA92DB9AE2_MetadataUsageId;
extern const uint32_t UnitySerializationHolder_GetObjectData_m0DCDAB7ABB802E5313B2338B881AE1D1CE6690B4_MetadataUsageId;
extern const uint32_t UnitySerializationHolder_GetRealObject_mF8313A14C107679F256BA37709809BB82D225BC3_MetadataUsageId;
extern const uint32_t UnitySerializationHolder_GetTypeData_mE58EEADEA8C2086B9DE4A8313711AB62F1C1CA58_MetadataUsageId;
extern const uint32_t UnitySerializationHolder__ctor_mAB880030F40C641C423D92F8982190FC09B3DBE0_MetadataUsageId;
extern const uint32_t Version_CheckedSet_m8F93592250413F64CD48EE56635B87BD10E01775_MetadataUsageId;
extern const uint32_t Version_Clone_m0319BD2CFF4E0725CA77F9F3DFE442360ACE988D_MetadataUsageId;
extern const uint32_t Version_CompareTo_m4F37357349BB41DAC8C61271CBBF52F6B7A3D55A_MetadataUsageId;
extern const uint32_t Version_CreateFromString_mB297062B77739173A87608B0E639C49D6ACBE196_MetadataUsageId;
extern const uint32_t Version_Equals_m18CE65889EF5C9C32F4D787A8D89B0E90E401C4B_MetadataUsageId;
extern const uint32_t Version_ToString_mE2E6C0AA16DD48999BCF49B5BF35969B8240227A_MetadataUsageId;
extern const uint32_t Version__ctor_mAE9D244FEE1023A26514EE0339E7D6F26824F0F7_MetadataUsageId;
extern const uint32_t WeakReference_GetObjectData_m6F403EAD74C64EAF575E933D67FB2CB026332D3C_MetadataUsageId;
extern const uint32_t WeakReference__ctor_mDC58C556A72BFE11C54C39871D33C568B41D7297_MetadataUsageId;

struct CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744;
struct ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D;
struct StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef DBNULL_TE7FF9F06B07B9177FEA5297B657A3A7688526B6A_H
#define DBNULL_TE7FF9F06B07B9177FEA5297B657A3A7688526B6A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DBNull
struct  DBNull_tE7FF9F06B07B9177FEA5297B657A3A7688526B6A  : public RuntimeObject
{
public:

public:
};

struct DBNull_tE7FF9F06B07B9177FEA5297B657A3A7688526B6A_StaticFields
{
public:
	// System.DBNull System.DBNull::Value
	DBNull_tE7FF9F06B07B9177FEA5297B657A3A7688526B6A * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(DBNull_tE7FF9F06B07B9177FEA5297B657A3A7688526B6A_StaticFields, ___Value_0)); }
	inline DBNull_tE7FF9F06B07B9177FEA5297B657A3A7688526B6A * get_Value_0() const { return ___Value_0; }
	inline DBNull_tE7FF9F06B07B9177FEA5297B657A3A7688526B6A ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(DBNull_tE7FF9F06B07B9177FEA5297B657A3A7688526B6A * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBNULL_TE7FF9F06B07B9177FEA5297B657A3A7688526B6A_H
#ifndef EVENTARGS_TA4C15C1D2AB4B139169B1942C1477933E00DCA17_H
#define EVENTARGS_TA4C15C1D2AB4B139169B1942C1477933E00DCA17_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_tA4C15C1D2AB4B139169B1942C1477933E00DCA17  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tA4C15C1D2AB4B139169B1942C1477933E00DCA17_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tA4C15C1D2AB4B139169B1942C1477933E00DCA17 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tA4C15C1D2AB4B139169B1942C1477933E00DCA17_StaticFields, ___Empty_0)); }
	inline EventArgs_tA4C15C1D2AB4B139169B1942C1477933E00DCA17 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tA4C15C1D2AB4B139169B1942C1477933E00DCA17 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tA4C15C1D2AB4B139169B1942C1477933E00DCA17 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_TA4C15C1D2AB4B139169B1942C1477933E00DCA17_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_tB866BA24C91559CF299618E230043451CC7CF659* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_tB866BA24C91559CF299618E230043451CC7CF659* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_tB866BA24C91559CF299618E230043451CC7CF659** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_tB866BA24C91559CF299618E230043451CC7CF659* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef CULTUREINFO_T2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_H
#define CULTUREINFO_T2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureInfo
struct  CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_7;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_8;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_9;
	// System.Int32 System.Globalization.CultureInfo::specific_lcid
	int32_t ___specific_lcid_10;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_11;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_12;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_13;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * ___numInfo_14;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t392C2A0F34C2403AD964D3D3BF27506B83BA49D4 * ___dateTimeInfo_15;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tFAC9352EF3663F7B44E9B6E4A3E64A08BF02428A * ___textInfo_16;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_17;
	// System.String System.Globalization.CultureInfo::displayname
	String_t* ___displayname_18;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_19;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_20;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_21;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_22;
	// System.String System.Globalization.CultureInfo::icu_name
	String_t* ___icu_name_23;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_24;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_25;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B * ___compareInfo_26;
	// System.Int32* System.Globalization.CultureInfo::calendar_data
	int32_t* ___calendar_data_27;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_28;
	// System.Globalization.Calendar[] System.Globalization.CultureInfo::optional_calendars
	CalendarU5BU5D_t6D772388D3C57B6834EC19608C3DE39C25C0D53E* ___optional_calendars_29;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * ___parent_culture_30;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_31;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t4D88BF2E5C47E1CE77605B8AD886FAE40FD2E3B1 * ___calendar_32;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_33;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___cached_serialized_form_34;

public:
	inline static int32_t get_offset_of_m_isReadOnly_7() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___m_isReadOnly_7)); }
	inline bool get_m_isReadOnly_7() const { return ___m_isReadOnly_7; }
	inline bool* get_address_of_m_isReadOnly_7() { return &___m_isReadOnly_7; }
	inline void set_m_isReadOnly_7(bool value)
	{
		___m_isReadOnly_7 = value;
	}

	inline static int32_t get_offset_of_cultureID_8() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___cultureID_8)); }
	inline int32_t get_cultureID_8() const { return ___cultureID_8; }
	inline int32_t* get_address_of_cultureID_8() { return &___cultureID_8; }
	inline void set_cultureID_8(int32_t value)
	{
		___cultureID_8 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_9() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___parent_lcid_9)); }
	inline int32_t get_parent_lcid_9() const { return ___parent_lcid_9; }
	inline int32_t* get_address_of_parent_lcid_9() { return &___parent_lcid_9; }
	inline void set_parent_lcid_9(int32_t value)
	{
		___parent_lcid_9 = value;
	}

	inline static int32_t get_offset_of_specific_lcid_10() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___specific_lcid_10)); }
	inline int32_t get_specific_lcid_10() const { return ___specific_lcid_10; }
	inline int32_t* get_address_of_specific_lcid_10() { return &___specific_lcid_10; }
	inline void set_specific_lcid_10(int32_t value)
	{
		___specific_lcid_10 = value;
	}

	inline static int32_t get_offset_of_datetime_index_11() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___datetime_index_11)); }
	inline int32_t get_datetime_index_11() const { return ___datetime_index_11; }
	inline int32_t* get_address_of_datetime_index_11() { return &___datetime_index_11; }
	inline void set_datetime_index_11(int32_t value)
	{
		___datetime_index_11 = value;
	}

	inline static int32_t get_offset_of_number_index_12() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___number_index_12)); }
	inline int32_t get_number_index_12() const { return ___number_index_12; }
	inline int32_t* get_address_of_number_index_12() { return &___number_index_12; }
	inline void set_number_index_12(int32_t value)
	{
		___number_index_12 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_13() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___m_useUserOverride_13)); }
	inline bool get_m_useUserOverride_13() const { return ___m_useUserOverride_13; }
	inline bool* get_address_of_m_useUserOverride_13() { return &___m_useUserOverride_13; }
	inline void set_m_useUserOverride_13(bool value)
	{
		___m_useUserOverride_13 = value;
	}

	inline static int32_t get_offset_of_numInfo_14() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___numInfo_14)); }
	inline NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * get_numInfo_14() const { return ___numInfo_14; }
	inline NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 ** get_address_of_numInfo_14() { return &___numInfo_14; }
	inline void set_numInfo_14(NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * value)
	{
		___numInfo_14 = value;
		Il2CppCodeGenWriteBarrier((&___numInfo_14), value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_15() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___dateTimeInfo_15)); }
	inline DateTimeFormatInfo_t392C2A0F34C2403AD964D3D3BF27506B83BA49D4 * get_dateTimeInfo_15() const { return ___dateTimeInfo_15; }
	inline DateTimeFormatInfo_t392C2A0F34C2403AD964D3D3BF27506B83BA49D4 ** get_address_of_dateTimeInfo_15() { return &___dateTimeInfo_15; }
	inline void set_dateTimeInfo_15(DateTimeFormatInfo_t392C2A0F34C2403AD964D3D3BF27506B83BA49D4 * value)
	{
		___dateTimeInfo_15 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeInfo_15), value);
	}

	inline static int32_t get_offset_of_textInfo_16() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___textInfo_16)); }
	inline TextInfo_tFAC9352EF3663F7B44E9B6E4A3E64A08BF02428A * get_textInfo_16() const { return ___textInfo_16; }
	inline TextInfo_tFAC9352EF3663F7B44E9B6E4A3E64A08BF02428A ** get_address_of_textInfo_16() { return &___textInfo_16; }
	inline void set_textInfo_16(TextInfo_tFAC9352EF3663F7B44E9B6E4A3E64A08BF02428A * value)
	{
		___textInfo_16 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_16), value);
	}

	inline static int32_t get_offset_of_m_name_17() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___m_name_17)); }
	inline String_t* get_m_name_17() const { return ___m_name_17; }
	inline String_t** get_address_of_m_name_17() { return &___m_name_17; }
	inline void set_m_name_17(String_t* value)
	{
		___m_name_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_17), value);
	}

	inline static int32_t get_offset_of_displayname_18() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___displayname_18)); }
	inline String_t* get_displayname_18() const { return ___displayname_18; }
	inline String_t** get_address_of_displayname_18() { return &___displayname_18; }
	inline void set_displayname_18(String_t* value)
	{
		___displayname_18 = value;
		Il2CppCodeGenWriteBarrier((&___displayname_18), value);
	}

	inline static int32_t get_offset_of_englishname_19() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___englishname_19)); }
	inline String_t* get_englishname_19() const { return ___englishname_19; }
	inline String_t** get_address_of_englishname_19() { return &___englishname_19; }
	inline void set_englishname_19(String_t* value)
	{
		___englishname_19 = value;
		Il2CppCodeGenWriteBarrier((&___englishname_19), value);
	}

	inline static int32_t get_offset_of_nativename_20() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___nativename_20)); }
	inline String_t* get_nativename_20() const { return ___nativename_20; }
	inline String_t** get_address_of_nativename_20() { return &___nativename_20; }
	inline void set_nativename_20(String_t* value)
	{
		___nativename_20 = value;
		Il2CppCodeGenWriteBarrier((&___nativename_20), value);
	}

	inline static int32_t get_offset_of_iso3lang_21() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___iso3lang_21)); }
	inline String_t* get_iso3lang_21() const { return ___iso3lang_21; }
	inline String_t** get_address_of_iso3lang_21() { return &___iso3lang_21; }
	inline void set_iso3lang_21(String_t* value)
	{
		___iso3lang_21 = value;
		Il2CppCodeGenWriteBarrier((&___iso3lang_21), value);
	}

	inline static int32_t get_offset_of_iso2lang_22() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___iso2lang_22)); }
	inline String_t* get_iso2lang_22() const { return ___iso2lang_22; }
	inline String_t** get_address_of_iso2lang_22() { return &___iso2lang_22; }
	inline void set_iso2lang_22(String_t* value)
	{
		___iso2lang_22 = value;
		Il2CppCodeGenWriteBarrier((&___iso2lang_22), value);
	}

	inline static int32_t get_offset_of_icu_name_23() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___icu_name_23)); }
	inline String_t* get_icu_name_23() const { return ___icu_name_23; }
	inline String_t** get_address_of_icu_name_23() { return &___icu_name_23; }
	inline void set_icu_name_23(String_t* value)
	{
		___icu_name_23 = value;
		Il2CppCodeGenWriteBarrier((&___icu_name_23), value);
	}

	inline static int32_t get_offset_of_win3lang_24() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___win3lang_24)); }
	inline String_t* get_win3lang_24() const { return ___win3lang_24; }
	inline String_t** get_address_of_win3lang_24() { return &___win3lang_24; }
	inline void set_win3lang_24(String_t* value)
	{
		___win3lang_24 = value;
		Il2CppCodeGenWriteBarrier((&___win3lang_24), value);
	}

	inline static int32_t get_offset_of_territory_25() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___territory_25)); }
	inline String_t* get_territory_25() const { return ___territory_25; }
	inline String_t** get_address_of_territory_25() { return &___territory_25; }
	inline void set_territory_25(String_t* value)
	{
		___territory_25 = value;
		Il2CppCodeGenWriteBarrier((&___territory_25), value);
	}

	inline static int32_t get_offset_of_compareInfo_26() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___compareInfo_26)); }
	inline CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B * get_compareInfo_26() const { return ___compareInfo_26; }
	inline CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B ** get_address_of_compareInfo_26() { return &___compareInfo_26; }
	inline void set_compareInfo_26(CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B * value)
	{
		___compareInfo_26 = value;
		Il2CppCodeGenWriteBarrier((&___compareInfo_26), value);
	}

	inline static int32_t get_offset_of_calendar_data_27() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___calendar_data_27)); }
	inline int32_t* get_calendar_data_27() const { return ___calendar_data_27; }
	inline int32_t** get_address_of_calendar_data_27() { return &___calendar_data_27; }
	inline void set_calendar_data_27(int32_t* value)
	{
		___calendar_data_27 = value;
	}

	inline static int32_t get_offset_of_textinfo_data_28() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___textinfo_data_28)); }
	inline void* get_textinfo_data_28() const { return ___textinfo_data_28; }
	inline void** get_address_of_textinfo_data_28() { return &___textinfo_data_28; }
	inline void set_textinfo_data_28(void* value)
	{
		___textinfo_data_28 = value;
	}

	inline static int32_t get_offset_of_optional_calendars_29() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___optional_calendars_29)); }
	inline CalendarU5BU5D_t6D772388D3C57B6834EC19608C3DE39C25C0D53E* get_optional_calendars_29() const { return ___optional_calendars_29; }
	inline CalendarU5BU5D_t6D772388D3C57B6834EC19608C3DE39C25C0D53E** get_address_of_optional_calendars_29() { return &___optional_calendars_29; }
	inline void set_optional_calendars_29(CalendarU5BU5D_t6D772388D3C57B6834EC19608C3DE39C25C0D53E* value)
	{
		___optional_calendars_29 = value;
		Il2CppCodeGenWriteBarrier((&___optional_calendars_29), value);
	}

	inline static int32_t get_offset_of_parent_culture_30() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___parent_culture_30)); }
	inline CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * get_parent_culture_30() const { return ___parent_culture_30; }
	inline CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D ** get_address_of_parent_culture_30() { return &___parent_culture_30; }
	inline void set_parent_culture_30(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * value)
	{
		___parent_culture_30 = value;
		Il2CppCodeGenWriteBarrier((&___parent_culture_30), value);
	}

	inline static int32_t get_offset_of_m_dataItem_31() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___m_dataItem_31)); }
	inline int32_t get_m_dataItem_31() const { return ___m_dataItem_31; }
	inline int32_t* get_address_of_m_dataItem_31() { return &___m_dataItem_31; }
	inline void set_m_dataItem_31(int32_t value)
	{
		___m_dataItem_31 = value;
	}

	inline static int32_t get_offset_of_calendar_32() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___calendar_32)); }
	inline Calendar_t4D88BF2E5C47E1CE77605B8AD886FAE40FD2E3B1 * get_calendar_32() const { return ___calendar_32; }
	inline Calendar_t4D88BF2E5C47E1CE77605B8AD886FAE40FD2E3B1 ** get_address_of_calendar_32() { return &___calendar_32; }
	inline void set_calendar_32(Calendar_t4D88BF2E5C47E1CE77605B8AD886FAE40FD2E3B1 * value)
	{
		___calendar_32 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_32), value);
	}

	inline static int32_t get_offset_of_constructed_33() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___constructed_33)); }
	inline bool get_constructed_33() const { return ___constructed_33; }
	inline bool* get_address_of_constructed_33() { return &___constructed_33; }
	inline void set_constructed_33(bool value)
	{
		___constructed_33 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_34() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___cached_serialized_form_34)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_cached_serialized_form_34() const { return ___cached_serialized_form_34; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_cached_serialized_form_34() { return &___cached_serialized_form_34; }
	inline void set_cached_serialized_form_34(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___cached_serialized_form_34 = value;
		Il2CppCodeGenWriteBarrier((&___cached_serialized_form_34), value);
	}
};

struct CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * ___invariant_culture_info_4;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_5;
	// System.Int32 System.Globalization.CultureInfo::BootstrapCultureID
	int32_t ___BootstrapCultureID_6;
	// System.String System.Globalization.CultureInfo::MSG_READONLY
	String_t* ___MSG_READONLY_35;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_number
	Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * ___shared_by_number_36;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_name
	Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * ___shared_by_name_37;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map19
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * ___U3CU3Ef__switchU24map19_38;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map1A
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * ___U3CU3Ef__switchU24map1A_39;

public:
	inline static int32_t get_offset_of_invariant_culture_info_4() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_StaticFields, ___invariant_culture_info_4)); }
	inline CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * get_invariant_culture_info_4() const { return ___invariant_culture_info_4; }
	inline CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D ** get_address_of_invariant_culture_info_4() { return &___invariant_culture_info_4; }
	inline void set_invariant_culture_info_4(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * value)
	{
		___invariant_culture_info_4 = value;
		Il2CppCodeGenWriteBarrier((&___invariant_culture_info_4), value);
	}

	inline static int32_t get_offset_of_shared_table_lock_5() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_StaticFields, ___shared_table_lock_5)); }
	inline RuntimeObject * get_shared_table_lock_5() const { return ___shared_table_lock_5; }
	inline RuntimeObject ** get_address_of_shared_table_lock_5() { return &___shared_table_lock_5; }
	inline void set_shared_table_lock_5(RuntimeObject * value)
	{
		___shared_table_lock_5 = value;
		Il2CppCodeGenWriteBarrier((&___shared_table_lock_5), value);
	}

	inline static int32_t get_offset_of_BootstrapCultureID_6() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_StaticFields, ___BootstrapCultureID_6)); }
	inline int32_t get_BootstrapCultureID_6() const { return ___BootstrapCultureID_6; }
	inline int32_t* get_address_of_BootstrapCultureID_6() { return &___BootstrapCultureID_6; }
	inline void set_BootstrapCultureID_6(int32_t value)
	{
		___BootstrapCultureID_6 = value;
	}

	inline static int32_t get_offset_of_MSG_READONLY_35() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_StaticFields, ___MSG_READONLY_35)); }
	inline String_t* get_MSG_READONLY_35() const { return ___MSG_READONLY_35; }
	inline String_t** get_address_of_MSG_READONLY_35() { return &___MSG_READONLY_35; }
	inline void set_MSG_READONLY_35(String_t* value)
	{
		___MSG_READONLY_35 = value;
		Il2CppCodeGenWriteBarrier((&___MSG_READONLY_35), value);
	}

	inline static int32_t get_offset_of_shared_by_number_36() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_StaticFields, ___shared_by_number_36)); }
	inline Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * get_shared_by_number_36() const { return ___shared_by_number_36; }
	inline Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 ** get_address_of_shared_by_number_36() { return &___shared_by_number_36; }
	inline void set_shared_by_number_36(Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * value)
	{
		___shared_by_number_36 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_number_36), value);
	}

	inline static int32_t get_offset_of_shared_by_name_37() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_StaticFields, ___shared_by_name_37)); }
	inline Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * get_shared_by_name_37() const { return ___shared_by_name_37; }
	inline Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 ** get_address_of_shared_by_name_37() { return &___shared_by_name_37; }
	inline void set_shared_by_name_37(Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * value)
	{
		___shared_by_name_37 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_name_37), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map19_38() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_StaticFields, ___U3CU3Ef__switchU24map19_38)); }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * get_U3CU3Ef__switchU24map19_38() const { return ___U3CU3Ef__switchU24map19_38; }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 ** get_address_of_U3CU3Ef__switchU24map19_38() { return &___U3CU3Ef__switchU24map19_38; }
	inline void set_U3CU3Ef__switchU24map19_38(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * value)
	{
		___U3CU3Ef__switchU24map19_38 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map19_38), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1A_39() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_StaticFields, ___U3CU3Ef__switchU24map1A_39)); }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * get_U3CU3Ef__switchU24map1A_39() const { return ___U3CU3Ef__switchU24map1A_39; }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 ** get_address_of_U3CU3Ef__switchU24map1A_39() { return &___U3CU3Ef__switchU24map1A_39; }
	inline void set_U3CU3Ef__switchU24map1A_39(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * value)
	{
		___U3CU3Ef__switchU24map1A_39 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1A_39), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFO_T2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_H
#ifndef NUMBERFORMATINFO_T705565BF0412AF40E62A35D9A8274BAE58096BA4_H
#define NUMBERFORMATINFO_T705565BF0412AF40E62A35D9A8274BAE58096BA4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.NumberFormatInfo
struct  NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_0;
	// System.String System.Globalization.NumberFormatInfo::decimalFormats
	String_t* ___decimalFormats_1;
	// System.String System.Globalization.NumberFormatInfo::currencyFormats
	String_t* ___currencyFormats_2;
	// System.String System.Globalization.NumberFormatInfo::percentFormats
	String_t* ___percentFormats_3;
	// System.String System.Globalization.NumberFormatInfo::digitPattern
	String_t* ___digitPattern_4;
	// System.String System.Globalization.NumberFormatInfo::zeroPattern
	String_t* ___zeroPattern_5;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_6;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* ___currencyGroupSizes_9;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_10;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_11;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_12;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_15;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_16;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_17;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_18;
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* ___numberGroupSizes_19;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_20;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_21;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_22;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_23;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* ___percentGroupSizes_24;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_27;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_28;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_29;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_30;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_31;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_32;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_34;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_35;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* ___nativeDigits_36;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_37;

public:
	inline static int32_t get_offset_of_isReadOnly_0() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4, ___isReadOnly_0)); }
	inline bool get_isReadOnly_0() const { return ___isReadOnly_0; }
	inline bool* get_address_of_isReadOnly_0() { return &___isReadOnly_0; }
	inline void set_isReadOnly_0(bool value)
	{
		___isReadOnly_0 = value;
	}

	inline static int32_t get_offset_of_decimalFormats_1() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4, ___decimalFormats_1)); }
	inline String_t* get_decimalFormats_1() const { return ___decimalFormats_1; }
	inline String_t** get_address_of_decimalFormats_1() { return &___decimalFormats_1; }
	inline void set_decimalFormats_1(String_t* value)
	{
		___decimalFormats_1 = value;
		Il2CppCodeGenWriteBarrier((&___decimalFormats_1), value);
	}

	inline static int32_t get_offset_of_currencyFormats_2() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4, ___currencyFormats_2)); }
	inline String_t* get_currencyFormats_2() const { return ___currencyFormats_2; }
	inline String_t** get_address_of_currencyFormats_2() { return &___currencyFormats_2; }
	inline void set_currencyFormats_2(String_t* value)
	{
		___currencyFormats_2 = value;
		Il2CppCodeGenWriteBarrier((&___currencyFormats_2), value);
	}

	inline static int32_t get_offset_of_percentFormats_3() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4, ___percentFormats_3)); }
	inline String_t* get_percentFormats_3() const { return ___percentFormats_3; }
	inline String_t** get_address_of_percentFormats_3() { return &___percentFormats_3; }
	inline void set_percentFormats_3(String_t* value)
	{
		___percentFormats_3 = value;
		Il2CppCodeGenWriteBarrier((&___percentFormats_3), value);
	}

	inline static int32_t get_offset_of_digitPattern_4() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4, ___digitPattern_4)); }
	inline String_t* get_digitPattern_4() const { return ___digitPattern_4; }
	inline String_t** get_address_of_digitPattern_4() { return &___digitPattern_4; }
	inline void set_digitPattern_4(String_t* value)
	{
		___digitPattern_4 = value;
		Il2CppCodeGenWriteBarrier((&___digitPattern_4), value);
	}

	inline static int32_t get_offset_of_zeroPattern_5() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4, ___zeroPattern_5)); }
	inline String_t* get_zeroPattern_5() const { return ___zeroPattern_5; }
	inline String_t** get_address_of_zeroPattern_5() { return &___zeroPattern_5; }
	inline void set_zeroPattern_5(String_t* value)
	{
		___zeroPattern_5 = value;
		Il2CppCodeGenWriteBarrier((&___zeroPattern_5), value);
	}

	inline static int32_t get_offset_of_currencyDecimalDigits_6() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4, ___currencyDecimalDigits_6)); }
	inline int32_t get_currencyDecimalDigits_6() const { return ___currencyDecimalDigits_6; }
	inline int32_t* get_address_of_currencyDecimalDigits_6() { return &___currencyDecimalDigits_6; }
	inline void set_currencyDecimalDigits_6(int32_t value)
	{
		___currencyDecimalDigits_6 = value;
	}

	inline static int32_t get_offset_of_currencyDecimalSeparator_7() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4, ___currencyDecimalSeparator_7)); }
	inline String_t* get_currencyDecimalSeparator_7() const { return ___currencyDecimalSeparator_7; }
	inline String_t** get_address_of_currencyDecimalSeparator_7() { return &___currencyDecimalSeparator_7; }
	inline void set_currencyDecimalSeparator_7(String_t* value)
	{
		___currencyDecimalSeparator_7 = value;
		Il2CppCodeGenWriteBarrier((&___currencyDecimalSeparator_7), value);
	}

	inline static int32_t get_offset_of_currencyGroupSeparator_8() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4, ___currencyGroupSeparator_8)); }
	inline String_t* get_currencyGroupSeparator_8() const { return ___currencyGroupSeparator_8; }
	inline String_t** get_address_of_currencyGroupSeparator_8() { return &___currencyGroupSeparator_8; }
	inline void set_currencyGroupSeparator_8(String_t* value)
	{
		___currencyGroupSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((&___currencyGroupSeparator_8), value);
	}

	inline static int32_t get_offset_of_currencyGroupSizes_9() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4, ___currencyGroupSizes_9)); }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* get_currencyGroupSizes_9() const { return ___currencyGroupSizes_9; }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074** get_address_of_currencyGroupSizes_9() { return &___currencyGroupSizes_9; }
	inline void set_currencyGroupSizes_9(Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* value)
	{
		___currencyGroupSizes_9 = value;
		Il2CppCodeGenWriteBarrier((&___currencyGroupSizes_9), value);
	}

	inline static int32_t get_offset_of_currencyNegativePattern_10() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4, ___currencyNegativePattern_10)); }
	inline int32_t get_currencyNegativePattern_10() const { return ___currencyNegativePattern_10; }
	inline int32_t* get_address_of_currencyNegativePattern_10() { return &___currencyNegativePattern_10; }
	inline void set_currencyNegativePattern_10(int32_t value)
	{
		___currencyNegativePattern_10 = value;
	}

	inline static int32_t get_offset_of_currencyPositivePattern_11() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4, ___currencyPositivePattern_11)); }
	inline int32_t get_currencyPositivePattern_11() const { return ___currencyPositivePattern_11; }
	inline int32_t* get_address_of_currencyPositivePattern_11() { return &___currencyPositivePattern_11; }
	inline void set_currencyPositivePattern_11(int32_t value)
	{
		___currencyPositivePattern_11 = value;
	}

	inline static int32_t get_offset_of_currencySymbol_12() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4, ___currencySymbol_12)); }
	inline String_t* get_currencySymbol_12() const { return ___currencySymbol_12; }
	inline String_t** get_address_of_currencySymbol_12() { return &___currencySymbol_12; }
	inline void set_currencySymbol_12(String_t* value)
	{
		___currencySymbol_12 = value;
		Il2CppCodeGenWriteBarrier((&___currencySymbol_12), value);
	}

	inline static int32_t get_offset_of_nanSymbol_13() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4, ___nanSymbol_13)); }
	inline String_t* get_nanSymbol_13() const { return ___nanSymbol_13; }
	inline String_t** get_address_of_nanSymbol_13() { return &___nanSymbol_13; }
	inline void set_nanSymbol_13(String_t* value)
	{
		___nanSymbol_13 = value;
		Il2CppCodeGenWriteBarrier((&___nanSymbol_13), value);
	}

	inline static int32_t get_offset_of_negativeInfinitySymbol_14() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4, ___negativeInfinitySymbol_14)); }
	inline String_t* get_negativeInfinitySymbol_14() const { return ___negativeInfinitySymbol_14; }
	inline String_t** get_address_of_negativeInfinitySymbol_14() { return &___negativeInfinitySymbol_14; }
	inline void set_negativeInfinitySymbol_14(String_t* value)
	{
		___negativeInfinitySymbol_14 = value;
		Il2CppCodeGenWriteBarrier((&___negativeInfinitySymbol_14), value);
	}

	inline static int32_t get_offset_of_negativeSign_15() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4, ___negativeSign_15)); }
	inline String_t* get_negativeSign_15() const { return ___negativeSign_15; }
	inline String_t** get_address_of_negativeSign_15() { return &___negativeSign_15; }
	inline void set_negativeSign_15(String_t* value)
	{
		___negativeSign_15 = value;
		Il2CppCodeGenWriteBarrier((&___negativeSign_15), value);
	}

	inline static int32_t get_offset_of_numberDecimalDigits_16() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4, ___numberDecimalDigits_16)); }
	inline int32_t get_numberDecimalDigits_16() const { return ___numberDecimalDigits_16; }
	inline int32_t* get_address_of_numberDecimalDigits_16() { return &___numberDecimalDigits_16; }
	inline void set_numberDecimalDigits_16(int32_t value)
	{
		___numberDecimalDigits_16 = value;
	}

	inline static int32_t get_offset_of_numberDecimalSeparator_17() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4, ___numberDecimalSeparator_17)); }
	inline String_t* get_numberDecimalSeparator_17() const { return ___numberDecimalSeparator_17; }
	inline String_t** get_address_of_numberDecimalSeparator_17() { return &___numberDecimalSeparator_17; }
	inline void set_numberDecimalSeparator_17(String_t* value)
	{
		___numberDecimalSeparator_17 = value;
		Il2CppCodeGenWriteBarrier((&___numberDecimalSeparator_17), value);
	}

	inline static int32_t get_offset_of_numberGroupSeparator_18() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4, ___numberGroupSeparator_18)); }
	inline String_t* get_numberGroupSeparator_18() const { return ___numberGroupSeparator_18; }
	inline String_t** get_address_of_numberGroupSeparator_18() { return &___numberGroupSeparator_18; }
	inline void set_numberGroupSeparator_18(String_t* value)
	{
		___numberGroupSeparator_18 = value;
		Il2CppCodeGenWriteBarrier((&___numberGroupSeparator_18), value);
	}

	inline static int32_t get_offset_of_numberGroupSizes_19() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4, ___numberGroupSizes_19)); }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* get_numberGroupSizes_19() const { return ___numberGroupSizes_19; }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074** get_address_of_numberGroupSizes_19() { return &___numberGroupSizes_19; }
	inline void set_numberGroupSizes_19(Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* value)
	{
		___numberGroupSizes_19 = value;
		Il2CppCodeGenWriteBarrier((&___numberGroupSizes_19), value);
	}

	inline static int32_t get_offset_of_numberNegativePattern_20() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4, ___numberNegativePattern_20)); }
	inline int32_t get_numberNegativePattern_20() const { return ___numberNegativePattern_20; }
	inline int32_t* get_address_of_numberNegativePattern_20() { return &___numberNegativePattern_20; }
	inline void set_numberNegativePattern_20(int32_t value)
	{
		___numberNegativePattern_20 = value;
	}

	inline static int32_t get_offset_of_percentDecimalDigits_21() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4, ___percentDecimalDigits_21)); }
	inline int32_t get_percentDecimalDigits_21() const { return ___percentDecimalDigits_21; }
	inline int32_t* get_address_of_percentDecimalDigits_21() { return &___percentDecimalDigits_21; }
	inline void set_percentDecimalDigits_21(int32_t value)
	{
		___percentDecimalDigits_21 = value;
	}

	inline static int32_t get_offset_of_percentDecimalSeparator_22() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4, ___percentDecimalSeparator_22)); }
	inline String_t* get_percentDecimalSeparator_22() const { return ___percentDecimalSeparator_22; }
	inline String_t** get_address_of_percentDecimalSeparator_22() { return &___percentDecimalSeparator_22; }
	inline void set_percentDecimalSeparator_22(String_t* value)
	{
		___percentDecimalSeparator_22 = value;
		Il2CppCodeGenWriteBarrier((&___percentDecimalSeparator_22), value);
	}

	inline static int32_t get_offset_of_percentGroupSeparator_23() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4, ___percentGroupSeparator_23)); }
	inline String_t* get_percentGroupSeparator_23() const { return ___percentGroupSeparator_23; }
	inline String_t** get_address_of_percentGroupSeparator_23() { return &___percentGroupSeparator_23; }
	inline void set_percentGroupSeparator_23(String_t* value)
	{
		___percentGroupSeparator_23 = value;
		Il2CppCodeGenWriteBarrier((&___percentGroupSeparator_23), value);
	}

	inline static int32_t get_offset_of_percentGroupSizes_24() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4, ___percentGroupSizes_24)); }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* get_percentGroupSizes_24() const { return ___percentGroupSizes_24; }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074** get_address_of_percentGroupSizes_24() { return &___percentGroupSizes_24; }
	inline void set_percentGroupSizes_24(Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* value)
	{
		___percentGroupSizes_24 = value;
		Il2CppCodeGenWriteBarrier((&___percentGroupSizes_24), value);
	}

	inline static int32_t get_offset_of_percentNegativePattern_25() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4, ___percentNegativePattern_25)); }
	inline int32_t get_percentNegativePattern_25() const { return ___percentNegativePattern_25; }
	inline int32_t* get_address_of_percentNegativePattern_25() { return &___percentNegativePattern_25; }
	inline void set_percentNegativePattern_25(int32_t value)
	{
		___percentNegativePattern_25 = value;
	}

	inline static int32_t get_offset_of_percentPositivePattern_26() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4, ___percentPositivePattern_26)); }
	inline int32_t get_percentPositivePattern_26() const { return ___percentPositivePattern_26; }
	inline int32_t* get_address_of_percentPositivePattern_26() { return &___percentPositivePattern_26; }
	inline void set_percentPositivePattern_26(int32_t value)
	{
		___percentPositivePattern_26 = value;
	}

	inline static int32_t get_offset_of_percentSymbol_27() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4, ___percentSymbol_27)); }
	inline String_t* get_percentSymbol_27() const { return ___percentSymbol_27; }
	inline String_t** get_address_of_percentSymbol_27() { return &___percentSymbol_27; }
	inline void set_percentSymbol_27(String_t* value)
	{
		___percentSymbol_27 = value;
		Il2CppCodeGenWriteBarrier((&___percentSymbol_27), value);
	}

	inline static int32_t get_offset_of_perMilleSymbol_28() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4, ___perMilleSymbol_28)); }
	inline String_t* get_perMilleSymbol_28() const { return ___perMilleSymbol_28; }
	inline String_t** get_address_of_perMilleSymbol_28() { return &___perMilleSymbol_28; }
	inline void set_perMilleSymbol_28(String_t* value)
	{
		___perMilleSymbol_28 = value;
		Il2CppCodeGenWriteBarrier((&___perMilleSymbol_28), value);
	}

	inline static int32_t get_offset_of_positiveInfinitySymbol_29() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4, ___positiveInfinitySymbol_29)); }
	inline String_t* get_positiveInfinitySymbol_29() const { return ___positiveInfinitySymbol_29; }
	inline String_t** get_address_of_positiveInfinitySymbol_29() { return &___positiveInfinitySymbol_29; }
	inline void set_positiveInfinitySymbol_29(String_t* value)
	{
		___positiveInfinitySymbol_29 = value;
		Il2CppCodeGenWriteBarrier((&___positiveInfinitySymbol_29), value);
	}

	inline static int32_t get_offset_of_positiveSign_30() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4, ___positiveSign_30)); }
	inline String_t* get_positiveSign_30() const { return ___positiveSign_30; }
	inline String_t** get_address_of_positiveSign_30() { return &___positiveSign_30; }
	inline void set_positiveSign_30(String_t* value)
	{
		___positiveSign_30 = value;
		Il2CppCodeGenWriteBarrier((&___positiveSign_30), value);
	}

	inline static int32_t get_offset_of_ansiCurrencySymbol_31() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4, ___ansiCurrencySymbol_31)); }
	inline String_t* get_ansiCurrencySymbol_31() const { return ___ansiCurrencySymbol_31; }
	inline String_t** get_address_of_ansiCurrencySymbol_31() { return &___ansiCurrencySymbol_31; }
	inline void set_ansiCurrencySymbol_31(String_t* value)
	{
		___ansiCurrencySymbol_31 = value;
		Il2CppCodeGenWriteBarrier((&___ansiCurrencySymbol_31), value);
	}

	inline static int32_t get_offset_of_m_dataItem_32() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4, ___m_dataItem_32)); }
	inline int32_t get_m_dataItem_32() const { return ___m_dataItem_32; }
	inline int32_t* get_address_of_m_dataItem_32() { return &___m_dataItem_32; }
	inline void set_m_dataItem_32(int32_t value)
	{
		___m_dataItem_32 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_33() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4, ___m_useUserOverride_33)); }
	inline bool get_m_useUserOverride_33() const { return ___m_useUserOverride_33; }
	inline bool* get_address_of_m_useUserOverride_33() { return &___m_useUserOverride_33; }
	inline void set_m_useUserOverride_33(bool value)
	{
		___m_useUserOverride_33 = value;
	}

	inline static int32_t get_offset_of_validForParseAsNumber_34() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4, ___validForParseAsNumber_34)); }
	inline bool get_validForParseAsNumber_34() const { return ___validForParseAsNumber_34; }
	inline bool* get_address_of_validForParseAsNumber_34() { return &___validForParseAsNumber_34; }
	inline void set_validForParseAsNumber_34(bool value)
	{
		___validForParseAsNumber_34 = value;
	}

	inline static int32_t get_offset_of_validForParseAsCurrency_35() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4, ___validForParseAsCurrency_35)); }
	inline bool get_validForParseAsCurrency_35() const { return ___validForParseAsCurrency_35; }
	inline bool* get_address_of_validForParseAsCurrency_35() { return &___validForParseAsCurrency_35; }
	inline void set_validForParseAsCurrency_35(bool value)
	{
		___validForParseAsCurrency_35 = value;
	}

	inline static int32_t get_offset_of_nativeDigits_36() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4, ___nativeDigits_36)); }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* get_nativeDigits_36() const { return ___nativeDigits_36; }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B** get_address_of_nativeDigits_36() { return &___nativeDigits_36; }
	inline void set_nativeDigits_36(StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* value)
	{
		___nativeDigits_36 = value;
		Il2CppCodeGenWriteBarrier((&___nativeDigits_36), value);
	}

	inline static int32_t get_offset_of_digitSubstitution_37() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4, ___digitSubstitution_37)); }
	inline int32_t get_digitSubstitution_37() const { return ___digitSubstitution_37; }
	inline int32_t* get_address_of_digitSubstitution_37() { return &___digitSubstitution_37; }
	inline void set_digitSubstitution_37(int32_t value)
	{
		___digitSubstitution_37 = value;
	}
};

struct NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4_StaticFields
{
public:
	// System.String[] System.Globalization.NumberFormatInfo::invariantNativeDigits
	StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* ___invariantNativeDigits_38;

public:
	inline static int32_t get_offset_of_invariantNativeDigits_38() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4_StaticFields, ___invariantNativeDigits_38)); }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* get_invariantNativeDigits_38() const { return ___invariantNativeDigits_38; }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B** get_address_of_invariantNativeDigits_38() { return &___invariantNativeDigits_38; }
	inline void set_invariantNativeDigits_38(StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* value)
	{
		___invariantNativeDigits_38 = value;
		Il2CppCodeGenWriteBarrier((&___invariantNativeDigits_38), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUMBERFORMATINFO_T705565BF0412AF40E62A35D9A8274BAE58096BA4_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef CRITICALFINALIZEROBJECT_TEF12E2D0ADC15894681402455E99775943930F94_H
#define CRITICALFINALIZEROBJECT_TEF12E2D0ADC15894681402455E99775943930F94_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_tEF12E2D0ADC15894681402455E99775943930F94  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALFINALIZEROBJECT_TEF12E2D0ADC15894681402455E99775943930F94_H
#ifndef SERIALIZATIONINFO_T778922F6A5AACC38C8F326D3338A91D6D72B11E2_H
#define SERIALIZATIONINFO_T778922F6A5AACC38C8F326D3338A91D6D72B11E2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationInfo
struct  SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Runtime.Serialization.SerializationInfo::serialized
	Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * ___serialized_0;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationInfo::values
	ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * ___values_1;
	// System.String System.Runtime.Serialization.SerializationInfo::assemblyName
	String_t* ___assemblyName_2;
	// System.String System.Runtime.Serialization.SerializationInfo::fullTypeName
	String_t* ___fullTypeName_3;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::converter
	RuntimeObject* ___converter_4;

public:
	inline static int32_t get_offset_of_serialized_0() { return static_cast<int32_t>(offsetof(SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2, ___serialized_0)); }
	inline Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * get_serialized_0() const { return ___serialized_0; }
	inline Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 ** get_address_of_serialized_0() { return &___serialized_0; }
	inline void set_serialized_0(Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * value)
	{
		___serialized_0 = value;
		Il2CppCodeGenWriteBarrier((&___serialized_0), value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2, ___values_1)); }
	inline ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * get_values_1() const { return ___values_1; }
	inline ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F ** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((&___values_1), value);
	}

	inline static int32_t get_offset_of_assemblyName_2() { return static_cast<int32_t>(offsetof(SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2, ___assemblyName_2)); }
	inline String_t* get_assemblyName_2() const { return ___assemblyName_2; }
	inline String_t** get_address_of_assemblyName_2() { return &___assemblyName_2; }
	inline void set_assemblyName_2(String_t* value)
	{
		___assemblyName_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_2), value);
	}

	inline static int32_t get_offset_of_fullTypeName_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2, ___fullTypeName_3)); }
	inline String_t* get_fullTypeName_3() const { return ___fullTypeName_3; }
	inline String_t** get_address_of_fullTypeName_3() { return &___fullTypeName_3; }
	inline void set_fullTypeName_3(String_t* value)
	{
		___fullTypeName_3 = value;
		Il2CppCodeGenWriteBarrier((&___fullTypeName_3), value);
	}

	inline static int32_t get_offset_of_converter_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2, ___converter_4)); }
	inline RuntimeObject* get_converter_4() const { return ___converter_4; }
	inline RuntimeObject** get_address_of_converter_4() { return &___converter_4; }
	inline void set_converter_4(RuntimeObject* value)
	{
		___converter_4 = value;
		Il2CppCodeGenWriteBarrier((&___converter_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONINFO_T778922F6A5AACC38C8F326D3338A91D6D72B11E2_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_H
#define VALUETYPE_T1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshaled_com
{
};
#endif // VALUETYPE_T1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_H
#ifndef VERSION_TD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15_H
#define VERSION_TD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Version
struct  Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15  : public RuntimeObject
{
public:
	// System.Int32 System.Version::_Major
	int32_t ____Major_1;
	// System.Int32 System.Version::_Minor
	int32_t ____Minor_2;
	// System.Int32 System.Version::_Build
	int32_t ____Build_3;
	// System.Int32 System.Version::_Revision
	int32_t ____Revision_4;

public:
	inline static int32_t get_offset_of__Major_1() { return static_cast<int32_t>(offsetof(Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15, ____Major_1)); }
	inline int32_t get__Major_1() const { return ____Major_1; }
	inline int32_t* get_address_of__Major_1() { return &____Major_1; }
	inline void set__Major_1(int32_t value)
	{
		____Major_1 = value;
	}

	inline static int32_t get_offset_of__Minor_2() { return static_cast<int32_t>(offsetof(Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15, ____Minor_2)); }
	inline int32_t get__Minor_2() const { return ____Minor_2; }
	inline int32_t* get_address_of__Minor_2() { return &____Minor_2; }
	inline void set__Minor_2(int32_t value)
	{
		____Minor_2 = value;
	}

	inline static int32_t get_offset_of__Build_3() { return static_cast<int32_t>(offsetof(Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15, ____Build_3)); }
	inline int32_t get__Build_3() const { return ____Build_3; }
	inline int32_t* get_address_of__Build_3() { return &____Build_3; }
	inline void set__Build_3(int32_t value)
	{
		____Build_3 = value;
	}

	inline static int32_t get_offset_of__Revision_4() { return static_cast<int32_t>(offsetof(Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15, ____Revision_4)); }
	inline int32_t get__Revision_4() const { return ____Revision_4; }
	inline int32_t* get_address_of__Revision_4() { return &____Revision_4; }
	inline void set__Revision_4(int32_t value)
	{
		____Revision_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERSION_TD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15_H
#ifndef IL2CPPCOMOBJECT_H
#define IL2CPPCOMOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__Il2CppComObject

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IL2CPPCOMOBJECT_H
#ifndef BOOLEAN_T92E4792324DA9B716F339A3B965A14965E99A4EF_H
#define BOOLEAN_T92E4792324DA9B716F339A3B965A14965E99A4EF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T92E4792324DA9B716F339A3B965A14965E99A4EF_H
#ifndef BYTE_T4C3393E6E7EAD06B53234C05564190D9A2D7B149_H
#define BYTE_T4C3393E6E7EAD06B53234C05564190D9A2D7B149_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t4C3393E6E7EAD06B53234C05564190D9A2D7B149 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t4C3393E6E7EAD06B53234C05564190D9A2D7B149, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T4C3393E6E7EAD06B53234C05564190D9A2D7B149_H
#ifndef CHAR_T2AF4E0DF8B57497BF49A6A8822F574113ADA8432_H
#define CHAR_T2AF4E0DF8B57497BF49A6A8822F574113ADA8432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T2AF4E0DF8B57497BF49A6A8822F574113ADA8432_H
#ifndef DECIMAL_T46BBDD161320E361BC57E00CD6C1F87256CA27F3_H
#define DECIMAL_T46BBDD161320E361BC57E00CD6C1F87256CA27F3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3 
{
public:
	// System.UInt32 System.Decimal::flags
	uint32_t ___flags_6;
	// System.UInt32 System.Decimal::hi
	uint32_t ___hi_7;
	// System.UInt32 System.Decimal::lo
	uint32_t ___lo_8;
	// System.UInt32 System.Decimal::mid
	uint32_t ___mid_9;

public:
	inline static int32_t get_offset_of_flags_6() { return static_cast<int32_t>(offsetof(Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3, ___flags_6)); }
	inline uint32_t get_flags_6() const { return ___flags_6; }
	inline uint32_t* get_address_of_flags_6() { return &___flags_6; }
	inline void set_flags_6(uint32_t value)
	{
		___flags_6 = value;
	}

	inline static int32_t get_offset_of_hi_7() { return static_cast<int32_t>(offsetof(Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3, ___hi_7)); }
	inline uint32_t get_hi_7() const { return ___hi_7; }
	inline uint32_t* get_address_of_hi_7() { return &___hi_7; }
	inline void set_hi_7(uint32_t value)
	{
		___hi_7 = value;
	}

	inline static int32_t get_offset_of_lo_8() { return static_cast<int32_t>(offsetof(Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3, ___lo_8)); }
	inline uint32_t get_lo_8() const { return ___lo_8; }
	inline uint32_t* get_address_of_lo_8() { return &___lo_8; }
	inline void set_lo_8(uint32_t value)
	{
		___lo_8 = value;
	}

	inline static int32_t get_offset_of_mid_9() { return static_cast<int32_t>(offsetof(Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3, ___mid_9)); }
	inline uint32_t get_mid_9() const { return ___mid_9; }
	inline uint32_t* get_address_of_mid_9() { return &___mid_9; }
	inline void set_mid_9(uint32_t value)
	{
		___mid_9 = value;
	}
};

struct Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3_StaticFields
{
public:
	// System.Decimal System.Decimal::MinValue
	Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3  ___MinValue_0;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3  ___MaxValue_1;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3  ___MinusOne_2;
	// System.Decimal System.Decimal::One
	Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3  ___One_3;
	// System.Decimal System.Decimal::Zero
	Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3  ___Zero_4;
	// System.Decimal System.Decimal::MaxValueDiv10
	Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3  ___MaxValueDiv10_5;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3_StaticFields, ___MinValue_0)); }
	inline Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3  get_MinValue_0() const { return ___MinValue_0; }
	inline Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3_StaticFields, ___MaxValue_1)); }
	inline Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3  get_MaxValue_1() const { return ___MaxValue_1; }
	inline Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinusOne_2() { return static_cast<int32_t>(offsetof(Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3_StaticFields, ___MinusOne_2)); }
	inline Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3  get_MinusOne_2() const { return ___MinusOne_2; }
	inline Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3 * get_address_of_MinusOne_2() { return &___MinusOne_2; }
	inline void set_MinusOne_2(Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3  value)
	{
		___MinusOne_2 = value;
	}

	inline static int32_t get_offset_of_One_3() { return static_cast<int32_t>(offsetof(Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3_StaticFields, ___One_3)); }
	inline Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3  get_One_3() const { return ___One_3; }
	inline Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3 * get_address_of_One_3() { return &___One_3; }
	inline void set_One_3(Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3  value)
	{
		___One_3 = value;
	}

	inline static int32_t get_offset_of_Zero_4() { return static_cast<int32_t>(offsetof(Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3_StaticFields, ___Zero_4)); }
	inline Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3  get_Zero_4() const { return ___Zero_4; }
	inline Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3 * get_address_of_Zero_4() { return &___Zero_4; }
	inline void set_Zero_4(Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3  value)
	{
		___Zero_4 = value;
	}

	inline static int32_t get_offset_of_MaxValueDiv10_5() { return static_cast<int32_t>(offsetof(Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3_StaticFields, ___MaxValueDiv10_5)); }
	inline Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3  get_MaxValueDiv10_5() const { return ___MaxValueDiv10_5; }
	inline Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3 * get_address_of_MaxValueDiv10_5() { return &___MaxValueDiv10_5; }
	inline void set_MaxValueDiv10_5(Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3  value)
	{
		___MaxValueDiv10_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T46BBDD161320E361BC57E00CD6C1F87256CA27F3_H
#ifndef DOUBLE_T2011D65DAF7D1FCBE71DD4CBDFA69A8F24643159_H
#define DOUBLE_T2011D65DAF7D1FCBE71DD4CBDFA69A8F24643159_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t2011D65DAF7D1FCBE71DD4CBDFA69A8F24643159 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t2011D65DAF7D1FCBE71DD4CBDFA69A8F24643159, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T2011D65DAF7D1FCBE71DD4CBDFA69A8F24643159_H
#ifndef ENUM_T5AAC444DFCAA78411386665A25FE3CD3169879EF_H
#define ENUM_T5AAC444DFCAA78411386665A25FE3CD3169879EF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF  : public ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C
{
public:

public:
};

struct Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF_marshaled_com
{
};
#endif // ENUM_T5AAC444DFCAA78411386665A25FE3CD3169879EF_H
#ifndef INT16_TBFC41132AB8E6B4E1F9D4A1E3CC46422BF453F3C_H
#define INT16_TBFC41132AB8E6B4E1F9D4A1E3CC46422BF453F3C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_tBFC41132AB8E6B4E1F9D4A1E3CC46422BF453F3C 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tBFC41132AB8E6B4E1F9D4A1E3CC46422BF453F3C, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_TBFC41132AB8E6B4E1F9D4A1E3CC46422BF453F3C_H
#ifndef INT32_TC16F64335CE8B56D99229DE94BB3A876ED55FE87_H
#define INT32_TC16F64335CE8B56D99229DE94BB3A876ED55FE87_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_tC16F64335CE8B56D99229DE94BB3A876ED55FE87 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_tC16F64335CE8B56D99229DE94BB3A876ED55FE87, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_TC16F64335CE8B56D99229DE94BB3A876ED55FE87_H
#ifndef INT64_TF61270729FC90F8A705A5FA6FE222C9644374ADF_H
#define INT64_TF61270729FC90F8A705A5FA6FE222C9644374ADF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_tF61270729FC90F8A705A5FA6FE222C9644374ADF 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int64_tF61270729FC90F8A705A5FA6FE222C9644374ADF, ___m_value_2)); }
	inline int64_t get_m_value_2() const { return ___m_value_2; }
	inline int64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_TF61270729FC90F8A705A5FA6FE222C9644374ADF_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef GCHANDLE_TE002D24915851AD73ACC0F503601C384273C3060_H
#define GCHANDLE_TE002D24915851AD73ACC0F503601C384273C3060_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_tE002D24915851AD73ACC0F503601C384273C3060 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_tE002D24915851AD73ACC0F503601C384273C3060, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_TE002D24915851AD73ACC0F503601C384273C3060_H
#ifndef SBYTE_T50B643C59EE66E3364AED19D82E06B27BDE75268_H
#define SBYTE_T50B643C59EE66E3364AED19D82E06B27BDE75268_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SByte
struct  SByte_t50B643C59EE66E3364AED19D82E06B27BDE75268 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t50B643C59EE66E3364AED19D82E06B27BDE75268, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTE_T50B643C59EE66E3364AED19D82E06B27BDE75268_H
#ifndef SINGLE_TF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_H
#define SINGLE_TF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_TF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_H
#ifndef SYSTEMEXCEPTION_T81A06ADD519539D252788D75E44AFFBE6580E301_H
#define SYSTEMEXCEPTION_T81A06ADD519539D252788D75E44AFFBE6580E301_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t81A06ADD519539D252788D75E44AFFBE6580E301  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T81A06ADD519539D252788D75E44AFFBE6580E301_H
#ifndef TIMESPAN_T26DE4373EA745C072A5FBDEAD8373348955FC374_H
#define TIMESPAN_T26DE4373EA745C072A5FBDEAD8373348955FC374_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t26DE4373EA745C072A5FBDEAD8373348955FC374 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_8;

public:
	inline static int32_t get_offset_of__ticks_8() { return static_cast<int32_t>(offsetof(TimeSpan_t26DE4373EA745C072A5FBDEAD8373348955FC374, ____ticks_8)); }
	inline int64_t get__ticks_8() const { return ____ticks_8; }
	inline int64_t* get_address_of__ticks_8() { return &____ticks_8; }
	inline void set__ticks_8(int64_t value)
	{
		____ticks_8 = value;
	}
};

struct TimeSpan_t26DE4373EA745C072A5FBDEAD8373348955FC374_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t26DE4373EA745C072A5FBDEAD8373348955FC374  ___MaxValue_5;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t26DE4373EA745C072A5FBDEAD8373348955FC374  ___MinValue_6;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t26DE4373EA745C072A5FBDEAD8373348955FC374  ___Zero_7;

public:
	inline static int32_t get_offset_of_MaxValue_5() { return static_cast<int32_t>(offsetof(TimeSpan_t26DE4373EA745C072A5FBDEAD8373348955FC374_StaticFields, ___MaxValue_5)); }
	inline TimeSpan_t26DE4373EA745C072A5FBDEAD8373348955FC374  get_MaxValue_5() const { return ___MaxValue_5; }
	inline TimeSpan_t26DE4373EA745C072A5FBDEAD8373348955FC374 * get_address_of_MaxValue_5() { return &___MaxValue_5; }
	inline void set_MaxValue_5(TimeSpan_t26DE4373EA745C072A5FBDEAD8373348955FC374  value)
	{
		___MaxValue_5 = value;
	}

	inline static int32_t get_offset_of_MinValue_6() { return static_cast<int32_t>(offsetof(TimeSpan_t26DE4373EA745C072A5FBDEAD8373348955FC374_StaticFields, ___MinValue_6)); }
	inline TimeSpan_t26DE4373EA745C072A5FBDEAD8373348955FC374  get_MinValue_6() const { return ___MinValue_6; }
	inline TimeSpan_t26DE4373EA745C072A5FBDEAD8373348955FC374 * get_address_of_MinValue_6() { return &___MinValue_6; }
	inline void set_MinValue_6(TimeSpan_t26DE4373EA745C072A5FBDEAD8373348955FC374  value)
	{
		___MinValue_6 = value;
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(TimeSpan_t26DE4373EA745C072A5FBDEAD8373348955FC374_StaticFields, ___Zero_7)); }
	inline TimeSpan_t26DE4373EA745C072A5FBDEAD8373348955FC374  get_Zero_7() const { return ___Zero_7; }
	inline TimeSpan_t26DE4373EA745C072A5FBDEAD8373348955FC374 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(TimeSpan_t26DE4373EA745C072A5FBDEAD8373348955FC374  value)
	{
		___Zero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T26DE4373EA745C072A5FBDEAD8373348955FC374_H
#ifndef UINT16_T1FF1E02102FB09D5656DF30E5299DD359E497E9B_H
#define UINT16_T1FF1E02102FB09D5656DF30E5299DD359E497E9B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t1FF1E02102FB09D5656DF30E5299DD359E497E9B 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt16_t1FF1E02102FB09D5656DF30E5299DD359E497E9B, ___m_value_2)); }
	inline uint16_t get_m_value_2() const { return ___m_value_2; }
	inline uint16_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint16_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_T1FF1E02102FB09D5656DF30E5299DD359E497E9B_H
#ifndef UINT32_T69F92C53356907895162C7F31D87C59F9141D3B8_H
#define UINT32_T69F92C53356907895162C7F31D87C59F9141D3B8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t69F92C53356907895162C7F31D87C59F9141D3B8 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t69F92C53356907895162C7F31D87C59F9141D3B8, ___m_value_2)); }
	inline uint32_t get_m_value_2() const { return ___m_value_2; }
	inline uint32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T69F92C53356907895162C7F31D87C59F9141D3B8_H
#ifndef UINT64_T9739CEA7F47A9C2DB5DDEAE34A1CE4B78AF8B29F_H
#define UINT64_T9739CEA7F47A9C2DB5DDEAE34A1CE4B78AF8B29F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t9739CEA7F47A9C2DB5DDEAE34A1CE4B78AF8B29F 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt64_t9739CEA7F47A9C2DB5DDEAE34A1CE4B78AF8B29F, ___m_value_2)); }
	inline uint64_t get_m_value_2() const { return ___m_value_2; }
	inline uint64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T9739CEA7F47A9C2DB5DDEAE34A1CE4B78AF8B29F_H
#ifndef UINTPTR_T_H
#define UINTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UIntPtr
struct  UIntPtr_t 
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINTPTR_T_H
#ifndef UNHANDLEDEXCEPTIONEVENTARGS_T2B19479B2BC866C465A8E07BEA9C6027CB168BA2_H
#define UNHANDLEDEXCEPTIONEVENTARGS_T2B19479B2BC866C465A8E07BEA9C6027CB168BA2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnhandledExceptionEventArgs
struct  UnhandledExceptionEventArgs_t2B19479B2BC866C465A8E07BEA9C6027CB168BA2  : public EventArgs_tA4C15C1D2AB4B139169B1942C1477933E00DCA17
{
public:
	// System.Object System.UnhandledExceptionEventArgs::exception
	RuntimeObject * ___exception_1;
	// System.Boolean System.UnhandledExceptionEventArgs::m_isTerminating
	bool ___m_isTerminating_2;

public:
	inline static int32_t get_offset_of_exception_1() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t2B19479B2BC866C465A8E07BEA9C6027CB168BA2, ___exception_1)); }
	inline RuntimeObject * get_exception_1() const { return ___exception_1; }
	inline RuntimeObject ** get_address_of_exception_1() { return &___exception_1; }
	inline void set_exception_1(RuntimeObject * value)
	{
		___exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___exception_1), value);
	}

	inline static int32_t get_offset_of_m_isTerminating_2() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t2B19479B2BC866C465A8E07BEA9C6027CB168BA2, ___m_isTerminating_2)); }
	inline bool get_m_isTerminating_2() const { return ___m_isTerminating_2; }
	inline bool* get_address_of_m_isTerminating_2() { return &___m_isTerminating_2; }
	inline void set_m_isTerminating_2(bool value)
	{
		___m_isTerminating_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONEVENTARGS_T2B19479B2BC866C465A8E07BEA9C6027CB168BA2_H
#ifndef VOID_TDB81A15FA2AB53E2401A76B745D215397B29F783_H
#define VOID_TDB81A15FA2AB53E2401A76B745D215397B29F783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_tDB81A15FA2AB53E2401A76B745D215397B29F783 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_TDB81A15FA2AB53E2401A76B745D215397B29F783_H
#ifndef __IL2CPPCOMDELEGATE_T67B66A584C55DA33A97319518FAD9D61A503C4EE_H
#define __IL2CPPCOMDELEGATE_T67B66A584C55DA33A97319518FAD9D61A503C4EE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__Il2CppComDelegate
struct  __Il2CppComDelegate_t67B66A584C55DA33A97319518FAD9D61A503C4EE  : public Il2CppComObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __IL2CPPCOMDELEGATE_T67B66A584C55DA33A97319518FAD9D61A503C4EE_H
#ifndef ARGUMENTEXCEPTION_T62D3E79ABA478354E3BFBA10C9BF16549AF82D60_H
#define ARGUMENTEXCEPTION_T62D3E79ABA478354E3BFBA10C9BF16549AF82D60_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60  : public SystemException_t81A06ADD519539D252788D75E44AFFBE6580E301
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T62D3E79ABA478354E3BFBA10C9BF16549AF82D60_H
#ifndef ARITHMETICEXCEPTION_T1A90923A99EA9AF25291E93082E853313F29DDCD_H
#define ARITHMETICEXCEPTION_T1A90923A99EA9AF25291E93082E853313F29DDCD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArithmeticException
struct  ArithmeticException_t1A90923A99EA9AF25291E93082E853313F29DDCD  : public SystemException_t81A06ADD519539D252788D75E44AFFBE6580E301
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARITHMETICEXCEPTION_T1A90923A99EA9AF25291E93082E853313F29DDCD_H
#ifndef DATETIMEKIND_T922DC40070B8AD59CB650E3FE023C4A58ED4568A_H
#define DATETIMEKIND_T922DC40070B8AD59CB650E3FE023C4A58ED4568A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t922DC40070B8AD59CB650E3FE023C4A58ED4568A 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t922DC40070B8AD59CB650E3FE023C4A58ED4568A, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEKIND_T922DC40070B8AD59CB650E3FE023C4A58ED4568A_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t  : public RuntimeObject
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
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9 * ___data_8;

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
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
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

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_8)); }
	inline DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9 * get_data_8() const { return ___data_8; }
	inline DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T_H
#ifndef NUMBERSTYLES_TFAC1E79E7CB54B1C83E44967D68356FC558A6454_H
#define NUMBERSTYLES_TFAC1E79E7CB54B1C83E44967D68356FC558A6454_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.NumberStyles
struct  NumberStyles_tFAC1E79E7CB54B1C83E44967D68356FC558A6454 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NumberStyles_tFAC1E79E7CB54B1C83E44967D68356FC558A6454, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUMBERSTYLES_TFAC1E79E7CB54B1C83E44967D68356FC558A6454_H
#ifndef NOTSUPPORTEDEXCEPTION_T8C86714BF66E55D3F33E200FA7C385BC13C7E3B6_H
#define NOTSUPPORTEDEXCEPTION_T8C86714BF66E55D3F33E200FA7C385BC13C7E3B6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6  : public SystemException_t81A06ADD519539D252788D75E44AFFBE6580E301
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T8C86714BF66E55D3F33E200FA7C385BC13C7E3B6_H
#ifndef ASSEMBLY_T_H
#define ASSEMBLY_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Assembly
struct  Assembly_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_tF7DED67E7D9BC1FAD7061838365480A13D2A0539 * ___resolve_event_holder_1;
	// System.Security.Policy.Evidence System.Reflection.Assembly::_evidence
	Evidence_t9ACD05D8C0E5A1F59CD16AF01459BBD955376A4B * ____evidence_2;
	// System.Security.PermissionSet System.Reflection.Assembly::_minimum
	PermissionSet_tDDF48E0F5B1848559061479DAB5D2D54B1745A0B * ____minimum_3;
	// System.Security.PermissionSet System.Reflection.Assembly::_optional
	PermissionSet_tDDF48E0F5B1848559061479DAB5D2D54B1745A0B * ____optional_4;
	// System.Security.PermissionSet System.Reflection.Assembly::_refuse
	PermissionSet_tDDF48E0F5B1848559061479DAB5D2D54B1745A0B * ____refuse_5;
	// System.Security.PermissionSet System.Reflection.Assembly::_granted
	PermissionSet_tDDF48E0F5B1848559061479DAB5D2D54B1745A0B * ____granted_6;
	// System.Security.PermissionSet System.Reflection.Assembly::_denied
	PermissionSet_tDDF48E0F5B1848559061479DAB5D2D54B1745A0B * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t, ____mono_assembly_0)); }
	inline intptr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline intptr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(intptr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_tF7DED67E7D9BC1FAD7061838365480A13D2A0539 * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_tF7DED67E7D9BC1FAD7061838365480A13D2A0539 ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_tF7DED67E7D9BC1FAD7061838365480A13D2A0539 * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((&___resolve_event_holder_1), value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t, ____evidence_2)); }
	inline Evidence_t9ACD05D8C0E5A1F59CD16AF01459BBD955376A4B * get__evidence_2() const { return ____evidence_2; }
	inline Evidence_t9ACD05D8C0E5A1F59CD16AF01459BBD955376A4B ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(Evidence_t9ACD05D8C0E5A1F59CD16AF01459BBD955376A4B * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((&____evidence_2), value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t, ____minimum_3)); }
	inline PermissionSet_tDDF48E0F5B1848559061479DAB5D2D54B1745A0B * get__minimum_3() const { return ____minimum_3; }
	inline PermissionSet_tDDF48E0F5B1848559061479DAB5D2D54B1745A0B ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(PermissionSet_tDDF48E0F5B1848559061479DAB5D2D54B1745A0B * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((&____minimum_3), value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t, ____optional_4)); }
	inline PermissionSet_tDDF48E0F5B1848559061479DAB5D2D54B1745A0B * get__optional_4() const { return ____optional_4; }
	inline PermissionSet_tDDF48E0F5B1848559061479DAB5D2D54B1745A0B ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(PermissionSet_tDDF48E0F5B1848559061479DAB5D2D54B1745A0B * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((&____optional_4), value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t, ____refuse_5)); }
	inline PermissionSet_tDDF48E0F5B1848559061479DAB5D2D54B1745A0B * get__refuse_5() const { return ____refuse_5; }
	inline PermissionSet_tDDF48E0F5B1848559061479DAB5D2D54B1745A0B ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(PermissionSet_tDDF48E0F5B1848559061479DAB5D2D54B1745A0B * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((&____refuse_5), value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t, ____granted_6)); }
	inline PermissionSet_tDDF48E0F5B1848559061479DAB5D2D54B1745A0B * get__granted_6() const { return ____granted_6; }
	inline PermissionSet_tDDF48E0F5B1848559061479DAB5D2D54B1745A0B ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(PermissionSet_tDDF48E0F5B1848559061479DAB5D2D54B1745A0B * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((&____granted_6), value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t, ____denied_7)); }
	inline PermissionSet_tDDF48E0F5B1848559061479DAB5D2D54B1745A0B * get__denied_7() const { return ____denied_7; }
	inline PermissionSet_tDDF48E0F5B1848559061479DAB5D2D54B1745A0B ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(PermissionSet_tDDF48E0F5B1848559061479DAB5D2D54B1745A0B * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((&____denied_7), value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLY_T_H
#ifndef BINDINGFLAGS_T7FD4941D9115FF77D5F573F63A93BFBC5D1F63B2_H
#define BINDINGFLAGS_T7FD4941D9115FF77D5F573F63A93BFBC5D1F63B2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t7FD4941D9115FF77D5F573F63A93BFBC5D1F63B2 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t7FD4941D9115FF77D5F573F63A93BFBC5D1F63B2, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T7FD4941D9115FF77D5F573F63A93BFBC5D1F63B2_H
#ifndef GCHANDLETYPE_TE222D96905809FC8D4A6377409E3A6EDEFDD9C76_H
#define GCHANDLETYPE_TE222D96905809FC8D4A6377409E3A6EDEFDD9C76_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandleType
struct  GCHandleType_tE222D96905809FC8D4A6377409E3A6EDEFDD9C76 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(GCHandleType_tE222D96905809FC8D4A6377409E3A6EDEFDD9C76, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLETYPE_TE222D96905809FC8D4A6377409E3A6EDEFDD9C76_H
#ifndef STREAMINGCONTEXTSTATES_TF8A83A38064A2CFF4FDEC6CD633A5509C596E397_H
#define STREAMINGCONTEXTSTATES_TF8A83A38064A2CFF4FDEC6CD633A5509C596E397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_tF8A83A38064A2CFF4FDEC6CD633A5509C596E397 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StreamingContextStates_tF8A83A38064A2CFF4FDEC6CD633A5509C596E397, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMINGCONTEXTSTATES_TF8A83A38064A2CFF4FDEC6CD633A5509C596E397_H
#ifndef RUNTIMETYPEHANDLE_T58BB862EF56F46A9518F8ACA413EF7D70238F1AD_H
#define RUNTIMETYPEHANDLE_T58BB862EF56F46A9518F8ACA413EF7D70238F1AD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T58BB862EF56F46A9518F8ACA413EF7D70238F1AD_H
#ifndef THREADSTATE_T527C7705613463D7020EFD1AEF2435FC9615B540_H
#define THREADSTATE_T527C7705613463D7020EFD1AEF2435FC9615B540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadState
struct  ThreadState_t527C7705613463D7020EFD1AEF2435FC9615B540 
{
public:
	// System.Int32 System.Threading.ThreadState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ThreadState_t527C7705613463D7020EFD1AEF2435FC9615B540, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSTATE_T527C7705613463D7020EFD1AEF2435FC9615B540_H
#ifndef TYPECODE_T9946B39DBCEE5FCE73B6C46FB38B432C29904F50_H
#define TYPECODE_T9946B39DBCEE5FCE73B6C46FB38B432C29904F50_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeCode
struct  TypeCode_t9946B39DBCEE5FCE73B6C46FB38B432C29904F50 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeCode_t9946B39DBCEE5FCE73B6C46FB38B432C29904F50, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECODE_T9946B39DBCEE5FCE73B6C46FB38B432C29904F50_H
#ifndef TYPEINITIALIZATIONEXCEPTION_TB11D339EF952E54C89496249B4B02C1E2535F9F6_H
#define TYPEINITIALIZATIONEXCEPTION_TB11D339EF952E54C89496249B4B02C1E2535F9F6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeInitializationException
struct  TypeInitializationException_tB11D339EF952E54C89496249B4B02C1E2535F9F6  : public SystemException_t81A06ADD519539D252788D75E44AFFBE6580E301
{
public:
	// System.String System.TypeInitializationException::type_name
	String_t* ___type_name_11;

public:
	inline static int32_t get_offset_of_type_name_11() { return static_cast<int32_t>(offsetof(TypeInitializationException_tB11D339EF952E54C89496249B4B02C1E2535F9F6, ___type_name_11)); }
	inline String_t* get_type_name_11() const { return ___type_name_11; }
	inline String_t** get_address_of_type_name_11() { return &___type_name_11; }
	inline void set_type_name_11(String_t* value)
	{
		___type_name_11 = value;
		Il2CppCodeGenWriteBarrier((&___type_name_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINITIALIZATIONEXCEPTION_TB11D339EF952E54C89496249B4B02C1E2535F9F6_H
#ifndef TYPELOADEXCEPTION_T11569EED462C1306FB091F7210A9142451786932_H
#define TYPELOADEXCEPTION_T11569EED462C1306FB091F7210A9142451786932_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeLoadException
struct  TypeLoadException_t11569EED462C1306FB091F7210A9142451786932  : public SystemException_t81A06ADD519539D252788D75E44AFFBE6580E301
{
public:
	// System.String System.TypeLoadException::className
	String_t* ___className_12;
	// System.String System.TypeLoadException::assemblyName
	String_t* ___assemblyName_13;

public:
	inline static int32_t get_offset_of_className_12() { return static_cast<int32_t>(offsetof(TypeLoadException_t11569EED462C1306FB091F7210A9142451786932, ___className_12)); }
	inline String_t* get_className_12() const { return ___className_12; }
	inline String_t** get_address_of_className_12() { return &___className_12; }
	inline void set_className_12(String_t* value)
	{
		___className_12 = value;
		Il2CppCodeGenWriteBarrier((&___className_12), value);
	}

	inline static int32_t get_offset_of_assemblyName_13() { return static_cast<int32_t>(offsetof(TypeLoadException_t11569EED462C1306FB091F7210A9142451786932, ___assemblyName_13)); }
	inline String_t* get_assemblyName_13() const { return ___assemblyName_13; }
	inline String_t** get_address_of_assemblyName_13() { return &___assemblyName_13; }
	inline void set_assemblyName_13(String_t* value)
	{
		___assemblyName_13 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELOADEXCEPTION_T11569EED462C1306FB091F7210A9142451786932_H
#ifndef UNAUTHORIZEDACCESSEXCEPTION_T593701C7ADFE096EC0340554C2E030FFCEEC369B_H
#define UNAUTHORIZEDACCESSEXCEPTION_T593701C7ADFE096EC0340554C2E030FFCEEC369B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnauthorizedAccessException
struct  UnauthorizedAccessException_t593701C7ADFE096EC0340554C2E030FFCEEC369B  : public SystemException_t81A06ADD519539D252788D75E44AFFBE6580E301
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNAUTHORIZEDACCESSEXCEPTION_T593701C7ADFE096EC0340554C2E030FFCEEC369B_H
#ifndef UNITYTYPE_T2B30A6EA527F7C6B2CB4B0D8F6D455F828A36E0E_H
#define UNITYTYPE_T2B30A6EA527F7C6B2CB4B0D8F6D455F828A36E0E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnitySerializationHolder/UnityType
struct  UnityType_t2B30A6EA527F7C6B2CB4B0D8F6D455F828A36E0E 
{
public:
	// System.Byte System.UnitySerializationHolder/UnityType::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityType_t2B30A6EA527F7C6B2CB4B0D8F6D455F828A36E0E, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYTYPE_T2B30A6EA527F7C6B2CB4B0D8F6D455F828A36E0E_H
#ifndef WEAKREFERENCE_T748C76A5CAD65471521659008DBC57191528AA9C_H
#define WEAKREFERENCE_T748C76A5CAD65471521659008DBC57191528AA9C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.WeakReference
struct  WeakReference_t748C76A5CAD65471521659008DBC57191528AA9C  : public RuntimeObject
{
public:
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_tE002D24915851AD73ACC0F503601C384273C3060  ___gcHandle_1;

public:
	inline static int32_t get_offset_of_isLongReference_0() { return static_cast<int32_t>(offsetof(WeakReference_t748C76A5CAD65471521659008DBC57191528AA9C, ___isLongReference_0)); }
	inline bool get_isLongReference_0() const { return ___isLongReference_0; }
	inline bool* get_address_of_isLongReference_0() { return &___isLongReference_0; }
	inline void set_isLongReference_0(bool value)
	{
		___isLongReference_0 = value;
	}

	inline static int32_t get_offset_of_gcHandle_1() { return static_cast<int32_t>(offsetof(WeakReference_t748C76A5CAD65471521659008DBC57191528AA9C, ___gcHandle_1)); }
	inline GCHandle_tE002D24915851AD73ACC0F503601C384273C3060  get_gcHandle_1() const { return ___gcHandle_1; }
	inline GCHandle_tE002D24915851AD73ACC0F503601C384273C3060 * get_address_of_gcHandle_1() { return &___gcHandle_1; }
	inline void set_gcHandle_1(GCHandle_tE002D24915851AD73ACC0F503601C384273C3060  value)
	{
		___gcHandle_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKREFERENCE_T748C76A5CAD65471521659008DBC57191528AA9C_H
#ifndef ARGUMENTNULLEXCEPTION_T13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_H
#define ARGUMENTNULLEXCEPTION_T13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4  : public ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_H
#ifndef ARGUMENTOUTOFRANGEEXCEPTION_T34548D25A41CBE2BC60196610CCE14D9D56892D4_H
#define ARGUMENTOUTOFRANGEEXCEPTION_T34548D25A41CBE2BC60196610CCE14D9D56892D4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4  : public ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60
{
public:
	// System.Object System.ArgumentOutOfRangeException::actual_value
	RuntimeObject * ___actual_value_13;

public:
	inline static int32_t get_offset_of_actual_value_13() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4, ___actual_value_13)); }
	inline RuntimeObject * get_actual_value_13() const { return ___actual_value_13; }
	inline RuntimeObject ** get_address_of_actual_value_13() { return &___actual_value_13; }
	inline void set_actual_value_13(RuntimeObject * value)
	{
		___actual_value_13 = value;
		Il2CppCodeGenWriteBarrier((&___actual_value_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTOUTOFRANGEEXCEPTION_T34548D25A41CBE2BC60196610CCE14D9D56892D4_H
#ifndef DATETIME_T816BBD9125EA02B42B87CB07643FC5F803391DA2_H
#define DATETIME_T816BBD9125EA02B42B87CB07643FC5F803391DA2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t26DE4373EA745C072A5FBDEAD8373348955FC374  ___ticks_10;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_11;

public:
	inline static int32_t get_offset_of_ticks_10() { return static_cast<int32_t>(offsetof(DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2, ___ticks_10)); }
	inline TimeSpan_t26DE4373EA745C072A5FBDEAD8373348955FC374  get_ticks_10() const { return ___ticks_10; }
	inline TimeSpan_t26DE4373EA745C072A5FBDEAD8373348955FC374 * get_address_of_ticks_10() { return &___ticks_10; }
	inline void set_ticks_10(TimeSpan_t26DE4373EA745C072A5FBDEAD8373348955FC374  value)
	{
		___ticks_10 = value;
	}

	inline static int32_t get_offset_of_kind_11() { return static_cast<int32_t>(offsetof(DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2, ___kind_11)); }
	inline int32_t get_kind_11() const { return ___kind_11; }
	inline int32_t* get_address_of_kind_11() { return &___kind_11; }
	inline void set_kind_11(int32_t value)
	{
		___kind_11 = value;
	}
};

struct DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  ___MaxValue_12;
	// System.DateTime System.DateTime::MinValue
	DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  ___MinValue_13;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* ___ParseTimeFormats_14;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* ___ParseYearDayMonthFormats_15;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* ___ParseYearMonthDayFormats_16;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* ___ParseDayMonthYearFormats_17;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* ___ParseMonthDayYearFormats_18;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* ___MonthDayShortFormats_19;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* ___DayMonthShortFormats_20;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* ___daysmonth_21;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* ___daysmonthleap_22;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_23;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_24;

public:
	inline static int32_t get_offset_of_MaxValue_12() { return static_cast<int32_t>(offsetof(DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2_StaticFields, ___MaxValue_12)); }
	inline DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  get_MaxValue_12() const { return ___MaxValue_12; }
	inline DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2 * get_address_of_MaxValue_12() { return &___MaxValue_12; }
	inline void set_MaxValue_12(DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  value)
	{
		___MaxValue_12 = value;
	}

	inline static int32_t get_offset_of_MinValue_13() { return static_cast<int32_t>(offsetof(DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2_StaticFields, ___MinValue_13)); }
	inline DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  get_MinValue_13() const { return ___MinValue_13; }
	inline DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2 * get_address_of_MinValue_13() { return &___MinValue_13; }
	inline void set_MinValue_13(DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  value)
	{
		___MinValue_13 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_14() { return static_cast<int32_t>(offsetof(DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2_StaticFields, ___ParseTimeFormats_14)); }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* get_ParseTimeFormats_14() const { return ___ParseTimeFormats_14; }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B** get_address_of_ParseTimeFormats_14() { return &___ParseTimeFormats_14; }
	inline void set_ParseTimeFormats_14(StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* value)
	{
		___ParseTimeFormats_14 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_14), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_15() { return static_cast<int32_t>(offsetof(DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2_StaticFields, ___ParseYearDayMonthFormats_15)); }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* get_ParseYearDayMonthFormats_15() const { return ___ParseYearDayMonthFormats_15; }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B** get_address_of_ParseYearDayMonthFormats_15() { return &___ParseYearDayMonthFormats_15; }
	inline void set_ParseYearDayMonthFormats_15(StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* value)
	{
		___ParseYearDayMonthFormats_15 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_15), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_16() { return static_cast<int32_t>(offsetof(DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2_StaticFields, ___ParseYearMonthDayFormats_16)); }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* get_ParseYearMonthDayFormats_16() const { return ___ParseYearMonthDayFormats_16; }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B** get_address_of_ParseYearMonthDayFormats_16() { return &___ParseYearMonthDayFormats_16; }
	inline void set_ParseYearMonthDayFormats_16(StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* value)
	{
		___ParseYearMonthDayFormats_16 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_16), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_17() { return static_cast<int32_t>(offsetof(DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2_StaticFields, ___ParseDayMonthYearFormats_17)); }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* get_ParseDayMonthYearFormats_17() const { return ___ParseDayMonthYearFormats_17; }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B** get_address_of_ParseDayMonthYearFormats_17() { return &___ParseDayMonthYearFormats_17; }
	inline void set_ParseDayMonthYearFormats_17(StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* value)
	{
		___ParseDayMonthYearFormats_17 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_17), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_18() { return static_cast<int32_t>(offsetof(DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2_StaticFields, ___ParseMonthDayYearFormats_18)); }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* get_ParseMonthDayYearFormats_18() const { return ___ParseMonthDayYearFormats_18; }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B** get_address_of_ParseMonthDayYearFormats_18() { return &___ParseMonthDayYearFormats_18; }
	inline void set_ParseMonthDayYearFormats_18(StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* value)
	{
		___ParseMonthDayYearFormats_18 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_18), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_19() { return static_cast<int32_t>(offsetof(DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2_StaticFields, ___MonthDayShortFormats_19)); }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* get_MonthDayShortFormats_19() const { return ___MonthDayShortFormats_19; }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B** get_address_of_MonthDayShortFormats_19() { return &___MonthDayShortFormats_19; }
	inline void set_MonthDayShortFormats_19(StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* value)
	{
		___MonthDayShortFormats_19 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_19), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_20() { return static_cast<int32_t>(offsetof(DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2_StaticFields, ___DayMonthShortFormats_20)); }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* get_DayMonthShortFormats_20() const { return ___DayMonthShortFormats_20; }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B** get_address_of_DayMonthShortFormats_20() { return &___DayMonthShortFormats_20; }
	inline void set_DayMonthShortFormats_20(StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* value)
	{
		___DayMonthShortFormats_20 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_20), value);
	}

	inline static int32_t get_offset_of_daysmonth_21() { return static_cast<int32_t>(offsetof(DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2_StaticFields, ___daysmonth_21)); }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* get_daysmonth_21() const { return ___daysmonth_21; }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074** get_address_of_daysmonth_21() { return &___daysmonth_21; }
	inline void set_daysmonth_21(Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* value)
	{
		___daysmonth_21 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_21), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_22() { return static_cast<int32_t>(offsetof(DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2_StaticFields, ___daysmonthleap_22)); }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* get_daysmonthleap_22() const { return ___daysmonthleap_22; }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074** get_address_of_daysmonthleap_22() { return &___daysmonthleap_22; }
	inline void set_daysmonthleap_22(Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* value)
	{
		___daysmonthleap_22 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_22), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_23() { return static_cast<int32_t>(offsetof(DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2_StaticFields, ___to_local_time_span_object_23)); }
	inline RuntimeObject * get_to_local_time_span_object_23() const { return ___to_local_time_span_object_23; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_23() { return &___to_local_time_span_object_23; }
	inline void set_to_local_time_span_object_23(RuntimeObject * value)
	{
		___to_local_time_span_object_23 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_23), value);
	}

	inline static int32_t get_offset_of_last_now_24() { return static_cast<int32_t>(offsetof(DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2_StaticFields, ___last_now_24)); }
	inline int64_t get_last_now_24() const { return ___last_now_24; }
	inline int64_t* get_address_of_last_now_24() { return &___last_now_24; }
	inline void set_last_now_24(int64_t value)
	{
		___last_now_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T816BBD9125EA02B42B87CB07643FC5F803391DA2_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef OVERFLOWEXCEPTION_T0B5FFF1555598D499585564196861996A44507C5_H
#define OVERFLOWEXCEPTION_T0B5FFF1555598D499585564196861996A44507C5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OverflowException
struct  OverflowException_t0B5FFF1555598D499585564196861996A44507C5  : public ArithmeticException_t1A90923A99EA9AF25291E93082E853313F29DDCD
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OVERFLOWEXCEPTION_T0B5FFF1555598D499585564196861996A44507C5_H
#ifndef MODULE_T6211282315B01A0EB488BB95BA1A73BBE5C6B7D8_H
#define MODULE_T6211282315B01A0EB488BB95BA1A73BBE5C6B7D8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Module
struct  Module_t6211282315B01A0EB488BB95BA1A73BBE5C6B7D8  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Module::_impl
	intptr_t ____impl_3;
	// System.Reflection.Assembly System.Reflection.Module::assembly
	Assembly_t * ___assembly_4;
	// System.String System.Reflection.Module::fqname
	String_t* ___fqname_5;
	// System.String System.Reflection.Module::name
	String_t* ___name_6;
	// System.String System.Reflection.Module::scopename
	String_t* ___scopename_7;
	// System.Boolean System.Reflection.Module::is_resource
	bool ___is_resource_8;
	// System.Int32 System.Reflection.Module::token
	int32_t ___token_9;

public:
	inline static int32_t get_offset_of__impl_3() { return static_cast<int32_t>(offsetof(Module_t6211282315B01A0EB488BB95BA1A73BBE5C6B7D8, ____impl_3)); }
	inline intptr_t get__impl_3() const { return ____impl_3; }
	inline intptr_t* get_address_of__impl_3() { return &____impl_3; }
	inline void set__impl_3(intptr_t value)
	{
		____impl_3 = value;
	}

	inline static int32_t get_offset_of_assembly_4() { return static_cast<int32_t>(offsetof(Module_t6211282315B01A0EB488BB95BA1A73BBE5C6B7D8, ___assembly_4)); }
	inline Assembly_t * get_assembly_4() const { return ___assembly_4; }
	inline Assembly_t ** get_address_of_assembly_4() { return &___assembly_4; }
	inline void set_assembly_4(Assembly_t * value)
	{
		___assembly_4 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_4), value);
	}

	inline static int32_t get_offset_of_fqname_5() { return static_cast<int32_t>(offsetof(Module_t6211282315B01A0EB488BB95BA1A73BBE5C6B7D8, ___fqname_5)); }
	inline String_t* get_fqname_5() const { return ___fqname_5; }
	inline String_t** get_address_of_fqname_5() { return &___fqname_5; }
	inline void set_fqname_5(String_t* value)
	{
		___fqname_5 = value;
		Il2CppCodeGenWriteBarrier((&___fqname_5), value);
	}

	inline static int32_t get_offset_of_name_6() { return static_cast<int32_t>(offsetof(Module_t6211282315B01A0EB488BB95BA1A73BBE5C6B7D8, ___name_6)); }
	inline String_t* get_name_6() const { return ___name_6; }
	inline String_t** get_address_of_name_6() { return &___name_6; }
	inline void set_name_6(String_t* value)
	{
		___name_6 = value;
		Il2CppCodeGenWriteBarrier((&___name_6), value);
	}

	inline static int32_t get_offset_of_scopename_7() { return static_cast<int32_t>(offsetof(Module_t6211282315B01A0EB488BB95BA1A73BBE5C6B7D8, ___scopename_7)); }
	inline String_t* get_scopename_7() const { return ___scopename_7; }
	inline String_t** get_address_of_scopename_7() { return &___scopename_7; }
	inline void set_scopename_7(String_t* value)
	{
		___scopename_7 = value;
		Il2CppCodeGenWriteBarrier((&___scopename_7), value);
	}

	inline static int32_t get_offset_of_is_resource_8() { return static_cast<int32_t>(offsetof(Module_t6211282315B01A0EB488BB95BA1A73BBE5C6B7D8, ___is_resource_8)); }
	inline bool get_is_resource_8() const { return ___is_resource_8; }
	inline bool* get_address_of_is_resource_8() { return &___is_resource_8; }
	inline void set_is_resource_8(bool value)
	{
		___is_resource_8 = value;
	}

	inline static int32_t get_offset_of_token_9() { return static_cast<int32_t>(offsetof(Module_t6211282315B01A0EB488BB95BA1A73BBE5C6B7D8, ___token_9)); }
	inline int32_t get_token_9() const { return ___token_9; }
	inline int32_t* get_address_of_token_9() { return &___token_9; }
	inline void set_token_9(int32_t value)
	{
		___token_9 = value;
	}
};

struct Module_t6211282315B01A0EB488BB95BA1A73BBE5C6B7D8_StaticFields
{
public:
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeName
	TypeFilter_t302222D6EE873CCA463EAC9F0D6BC173DC63E4DB * ___FilterTypeName_1;
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeNameIgnoreCase
	TypeFilter_t302222D6EE873CCA463EAC9F0D6BC173DC63E4DB * ___FilterTypeNameIgnoreCase_2;

public:
	inline static int32_t get_offset_of_FilterTypeName_1() { return static_cast<int32_t>(offsetof(Module_t6211282315B01A0EB488BB95BA1A73BBE5C6B7D8_StaticFields, ___FilterTypeName_1)); }
	inline TypeFilter_t302222D6EE873CCA463EAC9F0D6BC173DC63E4DB * get_FilterTypeName_1() const { return ___FilterTypeName_1; }
	inline TypeFilter_t302222D6EE873CCA463EAC9F0D6BC173DC63E4DB ** get_address_of_FilterTypeName_1() { return &___FilterTypeName_1; }
	inline void set_FilterTypeName_1(TypeFilter_t302222D6EE873CCA463EAC9F0D6BC173DC63E4DB * value)
	{
		___FilterTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterTypeName_1), value);
	}

	inline static int32_t get_offset_of_FilterTypeNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Module_t6211282315B01A0EB488BB95BA1A73BBE5C6B7D8_StaticFields, ___FilterTypeNameIgnoreCase_2)); }
	inline TypeFilter_t302222D6EE873CCA463EAC9F0D6BC173DC63E4DB * get_FilterTypeNameIgnoreCase_2() const { return ___FilterTypeNameIgnoreCase_2; }
	inline TypeFilter_t302222D6EE873CCA463EAC9F0D6BC173DC63E4DB ** get_address_of_FilterTypeNameIgnoreCase_2() { return &___FilterTypeNameIgnoreCase_2; }
	inline void set_FilterTypeNameIgnoreCase_2(TypeFilter_t302222D6EE873CCA463EAC9F0D6BC173DC63E4DB * value)
	{
		___FilterTypeNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterTypeNameIgnoreCase_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULE_T6211282315B01A0EB488BB95BA1A73BBE5C6B7D8_H
#ifndef STREAMINGCONTEXT_T6B0A404807D43232E95DD1A784BF4BA30FADBCC1_H
#define STREAMINGCONTEXT_T6B0A404807D43232E95DD1A784BF4BA30FADBCC1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1 
{
public:
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::state
	int32_t ___state_0;
	// System.Object System.Runtime.Serialization.StreamingContext::additional
	RuntimeObject * ___additional_1;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}

	inline static int32_t get_offset_of_additional_1() { return static_cast<int32_t>(offsetof(StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1, ___additional_1)); }
	inline RuntimeObject * get_additional_1() const { return ___additional_1; }
	inline RuntimeObject ** get_address_of_additional_1() { return &___additional_1; }
	inline void set_additional_1(RuntimeObject * value)
	{
		___additional_1 = value;
		Il2CppCodeGenWriteBarrier((&___additional_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1_marshaled_pinvoke
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1_marshaled_com
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
#endif // STREAMINGCONTEXT_T6B0A404807D43232E95DD1A784BF4BA30FADBCC1_H
#ifndef THREAD_T83C301EC970792455F76D89E58140949B003EA50_H
#define THREAD_T83C301EC970792455F76D89E58140949B003EA50_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Thread
struct  Thread_t83C301EC970792455F76D89E58140949B003EA50  : public CriticalFinalizerObject_tEF12E2D0ADC15894681402455E99775943930F94
{
public:
	// System.Int32 System.Threading.Thread::lock_thread_id
	int32_t ___lock_thread_id_0;
	// System.IntPtr System.Threading.Thread::system_thread_handle
	intptr_t ___system_thread_handle_1;
	// System.Object System.Threading.Thread::cached_culture_info
	RuntimeObject * ___cached_culture_info_2;
	// System.IntPtr System.Threading.Thread::unused0
	intptr_t ___unused0_3;
	// System.Boolean System.Threading.Thread::threadpool_thread
	bool ___threadpool_thread_4;
	// System.IntPtr System.Threading.Thread::name
	intptr_t ___name_5;
	// System.Int32 System.Threading.Thread::name_len
	int32_t ___name_len_6;
	// System.Threading.ThreadState System.Threading.Thread::state
	int32_t ___state_7;
	// System.Object System.Threading.Thread::abort_exc
	RuntimeObject * ___abort_exc_8;
	// System.Int32 System.Threading.Thread::abort_state_handle
	int32_t ___abort_state_handle_9;
	// System.Int64 System.Threading.Thread::thread_id
	int64_t ___thread_id_10;
	// System.IntPtr System.Threading.Thread::start_notify
	intptr_t ___start_notify_11;
	// System.IntPtr System.Threading.Thread::stack_ptr
	intptr_t ___stack_ptr_12;
	// System.UIntPtr System.Threading.Thread::static_data
	uintptr_t ___static_data_13;
	// System.IntPtr System.Threading.Thread::jit_data
	intptr_t ___jit_data_14;
	// System.IntPtr System.Threading.Thread::lock_data
	intptr_t ___lock_data_15;
	// System.Object System.Threading.Thread::current_appcontext
	RuntimeObject * ___current_appcontext_16;
	// System.Int32 System.Threading.Thread::stack_size
	int32_t ___stack_size_17;
	// System.Object System.Threading.Thread::start_obj
	RuntimeObject * ___start_obj_18;
	// System.IntPtr System.Threading.Thread::appdomain_refs
	intptr_t ___appdomain_refs_19;
	// System.Int32 System.Threading.Thread::interruption_requested
	int32_t ___interruption_requested_20;
	// System.IntPtr System.Threading.Thread::suspend_event
	intptr_t ___suspend_event_21;
	// System.IntPtr System.Threading.Thread::suspended_event
	intptr_t ___suspended_event_22;
	// System.IntPtr System.Threading.Thread::resume_event
	intptr_t ___resume_event_23;
	// System.IntPtr System.Threading.Thread::synch_cs
	intptr_t ___synch_cs_24;
	// System.IntPtr System.Threading.Thread::serialized_culture_info
	intptr_t ___serialized_culture_info_25;
	// System.Int32 System.Threading.Thread::serialized_culture_info_len
	int32_t ___serialized_culture_info_len_26;
	// System.IntPtr System.Threading.Thread::serialized_ui_culture_info
	intptr_t ___serialized_ui_culture_info_27;
	// System.Int32 System.Threading.Thread::serialized_ui_culture_info_len
	int32_t ___serialized_ui_culture_info_len_28;
	// System.Boolean System.Threading.Thread::thread_dump_requested
	bool ___thread_dump_requested_29;
	// System.IntPtr System.Threading.Thread::end_stack
	intptr_t ___end_stack_30;
	// System.Boolean System.Threading.Thread::thread_interrupt_requested
	bool ___thread_interrupt_requested_31;
	// System.Byte System.Threading.Thread::apartment_state
	uint8_t ___apartment_state_32;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Thread::critical_region_level
	int32_t ___critical_region_level_33;
	// System.Int32 System.Threading.Thread::small_id
	int32_t ___small_id_34;
	// System.IntPtr System.Threading.Thread::manage_callback
	intptr_t ___manage_callback_35;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_36;
	// System.Threading.ExecutionContext System.Threading.Thread::ec_to_set
	ExecutionContext_t2EC6945F5A7E9A0326AF5885457F49F4EEC26CF3 * ___ec_to_set_37;
	// System.IntPtr System.Threading.Thread::interrupt_on_stop
	intptr_t ___interrupt_on_stop_38;
	// System.IntPtr System.Threading.Thread::unused3
	intptr_t ___unused3_39;
	// System.IntPtr System.Threading.Thread::unused4
	intptr_t ___unused4_40;
	// System.IntPtr System.Threading.Thread::unused5
	intptr_t ___unused5_41;
	// System.IntPtr System.Threading.Thread::unused6
	intptr_t ___unused6_42;
	// System.MulticastDelegate System.Threading.Thread::threadstart
	MulticastDelegate_t * ___threadstart_45;
	// System.Int32 System.Threading.Thread::managed_id
	int32_t ___managed_id_46;
	// System.Security.Principal.IPrincipal System.Threading.Thread::_principal
	RuntimeObject* ____principal_47;
	// System.Boolean System.Threading.Thread::in_currentculture
	bool ___in_currentculture_50;

public:
	inline static int32_t get_offset_of_lock_thread_id_0() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50, ___lock_thread_id_0)); }
	inline int32_t get_lock_thread_id_0() const { return ___lock_thread_id_0; }
	inline int32_t* get_address_of_lock_thread_id_0() { return &___lock_thread_id_0; }
	inline void set_lock_thread_id_0(int32_t value)
	{
		___lock_thread_id_0 = value;
	}

	inline static int32_t get_offset_of_system_thread_handle_1() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50, ___system_thread_handle_1)); }
	inline intptr_t get_system_thread_handle_1() const { return ___system_thread_handle_1; }
	inline intptr_t* get_address_of_system_thread_handle_1() { return &___system_thread_handle_1; }
	inline void set_system_thread_handle_1(intptr_t value)
	{
		___system_thread_handle_1 = value;
	}

	inline static int32_t get_offset_of_cached_culture_info_2() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50, ___cached_culture_info_2)); }
	inline RuntimeObject * get_cached_culture_info_2() const { return ___cached_culture_info_2; }
	inline RuntimeObject ** get_address_of_cached_culture_info_2() { return &___cached_culture_info_2; }
	inline void set_cached_culture_info_2(RuntimeObject * value)
	{
		___cached_culture_info_2 = value;
		Il2CppCodeGenWriteBarrier((&___cached_culture_info_2), value);
	}

	inline static int32_t get_offset_of_unused0_3() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50, ___unused0_3)); }
	inline intptr_t get_unused0_3() const { return ___unused0_3; }
	inline intptr_t* get_address_of_unused0_3() { return &___unused0_3; }
	inline void set_unused0_3(intptr_t value)
	{
		___unused0_3 = value;
	}

	inline static int32_t get_offset_of_threadpool_thread_4() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50, ___threadpool_thread_4)); }
	inline bool get_threadpool_thread_4() const { return ___threadpool_thread_4; }
	inline bool* get_address_of_threadpool_thread_4() { return &___threadpool_thread_4; }
	inline void set_threadpool_thread_4(bool value)
	{
		___threadpool_thread_4 = value;
	}

	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50, ___name_5)); }
	inline intptr_t get_name_5() const { return ___name_5; }
	inline intptr_t* get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(intptr_t value)
	{
		___name_5 = value;
	}

	inline static int32_t get_offset_of_name_len_6() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50, ___name_len_6)); }
	inline int32_t get_name_len_6() const { return ___name_len_6; }
	inline int32_t* get_address_of_name_len_6() { return &___name_len_6; }
	inline void set_name_len_6(int32_t value)
	{
		___name_len_6 = value;
	}

	inline static int32_t get_offset_of_state_7() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50, ___state_7)); }
	inline int32_t get_state_7() const { return ___state_7; }
	inline int32_t* get_address_of_state_7() { return &___state_7; }
	inline void set_state_7(int32_t value)
	{
		___state_7 = value;
	}

	inline static int32_t get_offset_of_abort_exc_8() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50, ___abort_exc_8)); }
	inline RuntimeObject * get_abort_exc_8() const { return ___abort_exc_8; }
	inline RuntimeObject ** get_address_of_abort_exc_8() { return &___abort_exc_8; }
	inline void set_abort_exc_8(RuntimeObject * value)
	{
		___abort_exc_8 = value;
		Il2CppCodeGenWriteBarrier((&___abort_exc_8), value);
	}

	inline static int32_t get_offset_of_abort_state_handle_9() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50, ___abort_state_handle_9)); }
	inline int32_t get_abort_state_handle_9() const { return ___abort_state_handle_9; }
	inline int32_t* get_address_of_abort_state_handle_9() { return &___abort_state_handle_9; }
	inline void set_abort_state_handle_9(int32_t value)
	{
		___abort_state_handle_9 = value;
	}

	inline static int32_t get_offset_of_thread_id_10() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50, ___thread_id_10)); }
	inline int64_t get_thread_id_10() const { return ___thread_id_10; }
	inline int64_t* get_address_of_thread_id_10() { return &___thread_id_10; }
	inline void set_thread_id_10(int64_t value)
	{
		___thread_id_10 = value;
	}

	inline static int32_t get_offset_of_start_notify_11() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50, ___start_notify_11)); }
	inline intptr_t get_start_notify_11() const { return ___start_notify_11; }
	inline intptr_t* get_address_of_start_notify_11() { return &___start_notify_11; }
	inline void set_start_notify_11(intptr_t value)
	{
		___start_notify_11 = value;
	}

	inline static int32_t get_offset_of_stack_ptr_12() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50, ___stack_ptr_12)); }
	inline intptr_t get_stack_ptr_12() const { return ___stack_ptr_12; }
	inline intptr_t* get_address_of_stack_ptr_12() { return &___stack_ptr_12; }
	inline void set_stack_ptr_12(intptr_t value)
	{
		___stack_ptr_12 = value;
	}

	inline static int32_t get_offset_of_static_data_13() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50, ___static_data_13)); }
	inline uintptr_t get_static_data_13() const { return ___static_data_13; }
	inline uintptr_t* get_address_of_static_data_13() { return &___static_data_13; }
	inline void set_static_data_13(uintptr_t value)
	{
		___static_data_13 = value;
	}

	inline static int32_t get_offset_of_jit_data_14() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50, ___jit_data_14)); }
	inline intptr_t get_jit_data_14() const { return ___jit_data_14; }
	inline intptr_t* get_address_of_jit_data_14() { return &___jit_data_14; }
	inline void set_jit_data_14(intptr_t value)
	{
		___jit_data_14 = value;
	}

	inline static int32_t get_offset_of_lock_data_15() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50, ___lock_data_15)); }
	inline intptr_t get_lock_data_15() const { return ___lock_data_15; }
	inline intptr_t* get_address_of_lock_data_15() { return &___lock_data_15; }
	inline void set_lock_data_15(intptr_t value)
	{
		___lock_data_15 = value;
	}

	inline static int32_t get_offset_of_current_appcontext_16() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50, ___current_appcontext_16)); }
	inline RuntimeObject * get_current_appcontext_16() const { return ___current_appcontext_16; }
	inline RuntimeObject ** get_address_of_current_appcontext_16() { return &___current_appcontext_16; }
	inline void set_current_appcontext_16(RuntimeObject * value)
	{
		___current_appcontext_16 = value;
		Il2CppCodeGenWriteBarrier((&___current_appcontext_16), value);
	}

	inline static int32_t get_offset_of_stack_size_17() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50, ___stack_size_17)); }
	inline int32_t get_stack_size_17() const { return ___stack_size_17; }
	inline int32_t* get_address_of_stack_size_17() { return &___stack_size_17; }
	inline void set_stack_size_17(int32_t value)
	{
		___stack_size_17 = value;
	}

	inline static int32_t get_offset_of_start_obj_18() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50, ___start_obj_18)); }
	inline RuntimeObject * get_start_obj_18() const { return ___start_obj_18; }
	inline RuntimeObject ** get_address_of_start_obj_18() { return &___start_obj_18; }
	inline void set_start_obj_18(RuntimeObject * value)
	{
		___start_obj_18 = value;
		Il2CppCodeGenWriteBarrier((&___start_obj_18), value);
	}

	inline static int32_t get_offset_of_appdomain_refs_19() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50, ___appdomain_refs_19)); }
	inline intptr_t get_appdomain_refs_19() const { return ___appdomain_refs_19; }
	inline intptr_t* get_address_of_appdomain_refs_19() { return &___appdomain_refs_19; }
	inline void set_appdomain_refs_19(intptr_t value)
	{
		___appdomain_refs_19 = value;
	}

	inline static int32_t get_offset_of_interruption_requested_20() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50, ___interruption_requested_20)); }
	inline int32_t get_interruption_requested_20() const { return ___interruption_requested_20; }
	inline int32_t* get_address_of_interruption_requested_20() { return &___interruption_requested_20; }
	inline void set_interruption_requested_20(int32_t value)
	{
		___interruption_requested_20 = value;
	}

	inline static int32_t get_offset_of_suspend_event_21() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50, ___suspend_event_21)); }
	inline intptr_t get_suspend_event_21() const { return ___suspend_event_21; }
	inline intptr_t* get_address_of_suspend_event_21() { return &___suspend_event_21; }
	inline void set_suspend_event_21(intptr_t value)
	{
		___suspend_event_21 = value;
	}

	inline static int32_t get_offset_of_suspended_event_22() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50, ___suspended_event_22)); }
	inline intptr_t get_suspended_event_22() const { return ___suspended_event_22; }
	inline intptr_t* get_address_of_suspended_event_22() { return &___suspended_event_22; }
	inline void set_suspended_event_22(intptr_t value)
	{
		___suspended_event_22 = value;
	}

	inline static int32_t get_offset_of_resume_event_23() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50, ___resume_event_23)); }
	inline intptr_t get_resume_event_23() const { return ___resume_event_23; }
	inline intptr_t* get_address_of_resume_event_23() { return &___resume_event_23; }
	inline void set_resume_event_23(intptr_t value)
	{
		___resume_event_23 = value;
	}

	inline static int32_t get_offset_of_synch_cs_24() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50, ___synch_cs_24)); }
	inline intptr_t get_synch_cs_24() const { return ___synch_cs_24; }
	inline intptr_t* get_address_of_synch_cs_24() { return &___synch_cs_24; }
	inline void set_synch_cs_24(intptr_t value)
	{
		___synch_cs_24 = value;
	}

	inline static int32_t get_offset_of_serialized_culture_info_25() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50, ___serialized_culture_info_25)); }
	inline intptr_t get_serialized_culture_info_25() const { return ___serialized_culture_info_25; }
	inline intptr_t* get_address_of_serialized_culture_info_25() { return &___serialized_culture_info_25; }
	inline void set_serialized_culture_info_25(intptr_t value)
	{
		___serialized_culture_info_25 = value;
	}

	inline static int32_t get_offset_of_serialized_culture_info_len_26() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50, ___serialized_culture_info_len_26)); }
	inline int32_t get_serialized_culture_info_len_26() const { return ___serialized_culture_info_len_26; }
	inline int32_t* get_address_of_serialized_culture_info_len_26() { return &___serialized_culture_info_len_26; }
	inline void set_serialized_culture_info_len_26(int32_t value)
	{
		___serialized_culture_info_len_26 = value;
	}

	inline static int32_t get_offset_of_serialized_ui_culture_info_27() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50, ___serialized_ui_culture_info_27)); }
	inline intptr_t get_serialized_ui_culture_info_27() const { return ___serialized_ui_culture_info_27; }
	inline intptr_t* get_address_of_serialized_ui_culture_info_27() { return &___serialized_ui_culture_info_27; }
	inline void set_serialized_ui_culture_info_27(intptr_t value)
	{
		___serialized_ui_culture_info_27 = value;
	}

	inline static int32_t get_offset_of_serialized_ui_culture_info_len_28() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50, ___serialized_ui_culture_info_len_28)); }
	inline int32_t get_serialized_ui_culture_info_len_28() const { return ___serialized_ui_culture_info_len_28; }
	inline int32_t* get_address_of_serialized_ui_culture_info_len_28() { return &___serialized_ui_culture_info_len_28; }
	inline void set_serialized_ui_culture_info_len_28(int32_t value)
	{
		___serialized_ui_culture_info_len_28 = value;
	}

	inline static int32_t get_offset_of_thread_dump_requested_29() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50, ___thread_dump_requested_29)); }
	inline bool get_thread_dump_requested_29() const { return ___thread_dump_requested_29; }
	inline bool* get_address_of_thread_dump_requested_29() { return &___thread_dump_requested_29; }
	inline void set_thread_dump_requested_29(bool value)
	{
		___thread_dump_requested_29 = value;
	}

	inline static int32_t get_offset_of_end_stack_30() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50, ___end_stack_30)); }
	inline intptr_t get_end_stack_30() const { return ___end_stack_30; }
	inline intptr_t* get_address_of_end_stack_30() { return &___end_stack_30; }
	inline void set_end_stack_30(intptr_t value)
	{
		___end_stack_30 = value;
	}

	inline static int32_t get_offset_of_thread_interrupt_requested_31() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50, ___thread_interrupt_requested_31)); }
	inline bool get_thread_interrupt_requested_31() const { return ___thread_interrupt_requested_31; }
	inline bool* get_address_of_thread_interrupt_requested_31() { return &___thread_interrupt_requested_31; }
	inline void set_thread_interrupt_requested_31(bool value)
	{
		___thread_interrupt_requested_31 = value;
	}

	inline static int32_t get_offset_of_apartment_state_32() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50, ___apartment_state_32)); }
	inline uint8_t get_apartment_state_32() const { return ___apartment_state_32; }
	inline uint8_t* get_address_of_apartment_state_32() { return &___apartment_state_32; }
	inline void set_apartment_state_32(uint8_t value)
	{
		___apartment_state_32 = value;
	}

	inline static int32_t get_offset_of_critical_region_level_33() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50, ___critical_region_level_33)); }
	inline int32_t get_critical_region_level_33() const { return ___critical_region_level_33; }
	inline int32_t* get_address_of_critical_region_level_33() { return &___critical_region_level_33; }
	inline void set_critical_region_level_33(int32_t value)
	{
		___critical_region_level_33 = value;
	}

	inline static int32_t get_offset_of_small_id_34() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50, ___small_id_34)); }
	inline int32_t get_small_id_34() const { return ___small_id_34; }
	inline int32_t* get_address_of_small_id_34() { return &___small_id_34; }
	inline void set_small_id_34(int32_t value)
	{
		___small_id_34 = value;
	}

	inline static int32_t get_offset_of_manage_callback_35() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50, ___manage_callback_35)); }
	inline intptr_t get_manage_callback_35() const { return ___manage_callback_35; }
	inline intptr_t* get_address_of_manage_callback_35() { return &___manage_callback_35; }
	inline void set_manage_callback_35(intptr_t value)
	{
		___manage_callback_35 = value;
	}

	inline static int32_t get_offset_of_pending_exception_36() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50, ___pending_exception_36)); }
	inline RuntimeObject * get_pending_exception_36() const { return ___pending_exception_36; }
	inline RuntimeObject ** get_address_of_pending_exception_36() { return &___pending_exception_36; }
	inline void set_pending_exception_36(RuntimeObject * value)
	{
		___pending_exception_36 = value;
		Il2CppCodeGenWriteBarrier((&___pending_exception_36), value);
	}

	inline static int32_t get_offset_of_ec_to_set_37() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50, ___ec_to_set_37)); }
	inline ExecutionContext_t2EC6945F5A7E9A0326AF5885457F49F4EEC26CF3 * get_ec_to_set_37() const { return ___ec_to_set_37; }
	inline ExecutionContext_t2EC6945F5A7E9A0326AF5885457F49F4EEC26CF3 ** get_address_of_ec_to_set_37() { return &___ec_to_set_37; }
	inline void set_ec_to_set_37(ExecutionContext_t2EC6945F5A7E9A0326AF5885457F49F4EEC26CF3 * value)
	{
		___ec_to_set_37 = value;
		Il2CppCodeGenWriteBarrier((&___ec_to_set_37), value);
	}

	inline static int32_t get_offset_of_interrupt_on_stop_38() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50, ___interrupt_on_stop_38)); }
	inline intptr_t get_interrupt_on_stop_38() const { return ___interrupt_on_stop_38; }
	inline intptr_t* get_address_of_interrupt_on_stop_38() { return &___interrupt_on_stop_38; }
	inline void set_interrupt_on_stop_38(intptr_t value)
	{
		___interrupt_on_stop_38 = value;
	}

	inline static int32_t get_offset_of_unused3_39() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50, ___unused3_39)); }
	inline intptr_t get_unused3_39() const { return ___unused3_39; }
	inline intptr_t* get_address_of_unused3_39() { return &___unused3_39; }
	inline void set_unused3_39(intptr_t value)
	{
		___unused3_39 = value;
	}

	inline static int32_t get_offset_of_unused4_40() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50, ___unused4_40)); }
	inline intptr_t get_unused4_40() const { return ___unused4_40; }
	inline intptr_t* get_address_of_unused4_40() { return &___unused4_40; }
	inline void set_unused4_40(intptr_t value)
	{
		___unused4_40 = value;
	}

	inline static int32_t get_offset_of_unused5_41() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50, ___unused5_41)); }
	inline intptr_t get_unused5_41() const { return ___unused5_41; }
	inline intptr_t* get_address_of_unused5_41() { return &___unused5_41; }
	inline void set_unused5_41(intptr_t value)
	{
		___unused5_41 = value;
	}

	inline static int32_t get_offset_of_unused6_42() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50, ___unused6_42)); }
	inline intptr_t get_unused6_42() const { return ___unused6_42; }
	inline intptr_t* get_address_of_unused6_42() { return &___unused6_42; }
	inline void set_unused6_42(intptr_t value)
	{
		___unused6_42 = value;
	}

	inline static int32_t get_offset_of_threadstart_45() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50, ___threadstart_45)); }
	inline MulticastDelegate_t * get_threadstart_45() const { return ___threadstart_45; }
	inline MulticastDelegate_t ** get_address_of_threadstart_45() { return &___threadstart_45; }
	inline void set_threadstart_45(MulticastDelegate_t * value)
	{
		___threadstart_45 = value;
		Il2CppCodeGenWriteBarrier((&___threadstart_45), value);
	}

	inline static int32_t get_offset_of_managed_id_46() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50, ___managed_id_46)); }
	inline int32_t get_managed_id_46() const { return ___managed_id_46; }
	inline int32_t* get_address_of_managed_id_46() { return &___managed_id_46; }
	inline void set_managed_id_46(int32_t value)
	{
		___managed_id_46 = value;
	}

	inline static int32_t get_offset_of__principal_47() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50, ____principal_47)); }
	inline RuntimeObject* get__principal_47() const { return ____principal_47; }
	inline RuntimeObject** get_address_of__principal_47() { return &____principal_47; }
	inline void set__principal_47(RuntimeObject* value)
	{
		____principal_47 = value;
		Il2CppCodeGenWriteBarrier((&____principal_47), value);
	}

	inline static int32_t get_offset_of_in_currentculture_50() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50, ___in_currentculture_50)); }
	inline bool get_in_currentculture_50() const { return ___in_currentculture_50; }
	inline bool* get_address_of_in_currentculture_50() { return &___in_currentculture_50; }
	inline void set_in_currentculture_50(bool value)
	{
		___in_currentculture_50 = value;
	}
};

struct Thread_t83C301EC970792455F76D89E58140949B003EA50_StaticFields
{
public:
	// System.Collections.Hashtable System.Threading.Thread::datastorehash
	Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * ___datastorehash_48;
	// System.Object System.Threading.Thread::datastore_lock
	RuntimeObject * ___datastore_lock_49;
	// System.Object System.Threading.Thread::culture_lock
	RuntimeObject * ___culture_lock_51;

public:
	inline static int32_t get_offset_of_datastorehash_48() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50_StaticFields, ___datastorehash_48)); }
	inline Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * get_datastorehash_48() const { return ___datastorehash_48; }
	inline Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 ** get_address_of_datastorehash_48() { return &___datastorehash_48; }
	inline void set_datastorehash_48(Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * value)
	{
		___datastorehash_48 = value;
		Il2CppCodeGenWriteBarrier((&___datastorehash_48), value);
	}

	inline static int32_t get_offset_of_datastore_lock_49() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50_StaticFields, ___datastore_lock_49)); }
	inline RuntimeObject * get_datastore_lock_49() const { return ___datastore_lock_49; }
	inline RuntimeObject ** get_address_of_datastore_lock_49() { return &___datastore_lock_49; }
	inline void set_datastore_lock_49(RuntimeObject * value)
	{
		___datastore_lock_49 = value;
		Il2CppCodeGenWriteBarrier((&___datastore_lock_49), value);
	}

	inline static int32_t get_offset_of_culture_lock_51() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50_StaticFields, ___culture_lock_51)); }
	inline RuntimeObject * get_culture_lock_51() const { return ___culture_lock_51; }
	inline RuntimeObject ** get_address_of_culture_lock_51() { return &___culture_lock_51; }
	inline void set_culture_lock_51(RuntimeObject * value)
	{
		___culture_lock_51 = value;
		Il2CppCodeGenWriteBarrier((&___culture_lock_51), value);
	}
};

struct Thread_t83C301EC970792455F76D89E58140949B003EA50_ThreadStaticFields
{
public:
	// System.Object[] System.Threading.Thread::local_slots
	ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* ___local_slots_43;
	// System.Threading.ExecutionContext System.Threading.Thread::_ec
	ExecutionContext_t2EC6945F5A7E9A0326AF5885457F49F4EEC26CF3 * ____ec_44;

public:
	inline static int32_t get_offset_of_local_slots_43() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50_ThreadStaticFields, ___local_slots_43)); }
	inline ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* get_local_slots_43() const { return ___local_slots_43; }
	inline ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D** get_address_of_local_slots_43() { return &___local_slots_43; }
	inline void set_local_slots_43(ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* value)
	{
		___local_slots_43 = value;
		Il2CppCodeGenWriteBarrier((&___local_slots_43), value);
	}

	inline static int32_t get_offset_of__ec_44() { return static_cast<int32_t>(offsetof(Thread_t83C301EC970792455F76D89E58140949B003EA50_ThreadStaticFields, ____ec_44)); }
	inline ExecutionContext_t2EC6945F5A7E9A0326AF5885457F49F4EEC26CF3 * get__ec_44() const { return ____ec_44; }
	inline ExecutionContext_t2EC6945F5A7E9A0326AF5885457F49F4EEC26CF3 ** get_address_of__ec_44() { return &____ec_44; }
	inline void set__ec_44(ExecutionContext_t2EC6945F5A7E9A0326AF5885457F49F4EEC26CF3 * value)
	{
		____ec_44 = value;
		Il2CppCodeGenWriteBarrier((&____ec_44), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREAD_T83C301EC970792455F76D89E58140949B003EA50_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_tEF927658123F6CD4274B971442504A42AB6DE532* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_tEF927658123F6CD4274B971442504A42AB6DE532* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_tEF927658123F6CD4274B971442504A42AB6DE532** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_tEF927658123F6CD4274B971442504A42AB6DE532* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef TYPEDREFERENCE_T6C50501B536C0B63B481CF84F67719D9B94D3593_H
#define TYPEDREFERENCE_T6C50501B536C0B63B481CF84F67719D9B94D3593_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypedReference
struct  TypedReference_t6C50501B536C0B63B481CF84F67719D9B94D3593 
{
public:
	// System.RuntimeTypeHandle System.TypedReference::type
	RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  ___type_0;
	// System.IntPtr System.TypedReference::value
	intptr_t ___value_1;
	// System.IntPtr System.TypedReference::klass
	intptr_t ___klass_2;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(TypedReference_t6C50501B536C0B63B481CF84F67719D9B94D3593, ___type_0)); }
	inline RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  get_type_0() const { return ___type_0; }
	inline RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD * get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(TypedReference_t6C50501B536C0B63B481CF84F67719D9B94D3593, ___value_1)); }
	inline intptr_t get_value_1() const { return ___value_1; }
	inline intptr_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(intptr_t value)
	{
		___value_1 = value;
	}

	inline static int32_t get_offset_of_klass_2() { return static_cast<int32_t>(offsetof(TypedReference_t6C50501B536C0B63B481CF84F67719D9B94D3593, ___klass_2)); }
	inline intptr_t get_klass_2() const { return ___klass_2; }
	inline intptr_t* get_address_of_klass_2() { return &___klass_2; }
	inline void set_klass_2(intptr_t value)
	{
		___klass_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDREFERENCE_T6C50501B536C0B63B481CF84F67719D9B94D3593_H
#ifndef UNITYSERIALIZATIONHOLDER_T1F3CD67778C9EC0C6F3A05CC6F44A4CC047B7307_H
#define UNITYSERIALIZATIONHOLDER_T1F3CD67778C9EC0C6F3A05CC6F44A4CC047B7307_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnitySerializationHolder
struct  UnitySerializationHolder_t1F3CD67778C9EC0C6F3A05CC6F44A4CC047B7307  : public RuntimeObject
{
public:
	// System.String System.UnitySerializationHolder::_data
	String_t* ____data_0;
	// System.UnitySerializationHolder/UnityType System.UnitySerializationHolder::_unityType
	uint8_t ____unityType_1;
	// System.String System.UnitySerializationHolder::_assemblyName
	String_t* ____assemblyName_2;

public:
	inline static int32_t get_offset_of__data_0() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t1F3CD67778C9EC0C6F3A05CC6F44A4CC047B7307, ____data_0)); }
	inline String_t* get__data_0() const { return ____data_0; }
	inline String_t** get_address_of__data_0() { return &____data_0; }
	inline void set__data_0(String_t* value)
	{
		____data_0 = value;
		Il2CppCodeGenWriteBarrier((&____data_0), value);
	}

	inline static int32_t get_offset_of__unityType_1() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t1F3CD67778C9EC0C6F3A05CC6F44A4CC047B7307, ____unityType_1)); }
	inline uint8_t get__unityType_1() const { return ____unityType_1; }
	inline uint8_t* get_address_of__unityType_1() { return &____unityType_1; }
	inline void set__unityType_1(uint8_t value)
	{
		____unityType_1 = value;
	}

	inline static int32_t get_offset_of__assemblyName_2() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t1F3CD67778C9EC0C6F3A05CC6F44A4CC047B7307, ____assemblyName_2)); }
	inline String_t* get__assemblyName_2() const { return ____assemblyName_2; }
	inline String_t** get_address_of__assemblyName_2() { return &____assemblyName_2; }
	inline void set__assemblyName_2(String_t* value)
	{
		____assemblyName_2 = value;
		Il2CppCodeGenWriteBarrier((&____assemblyName_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYSERIALIZATIONHOLDER_T1F3CD67778C9EC0C6F3A05CC6F44A4CC047B7307_H
#ifndef ASYNCCALLBACK_T74ABD1277F711E7FBDCB00E169A63DEFD39E86A2_H
#define ASYNCCALLBACK_T74ABD1277F711E7FBDCB00E169A63DEFD39E86A2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t74ABD1277F711E7FBDCB00E169A63DEFD39E86A2  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T74ABD1277F711E7FBDCB00E169A63DEFD39E86A2_H
#ifndef UNHANDLEDEXCEPTIONEVENTHANDLER_TB7988286F96CF5350E4037A92C900D84BB7FB650_H
#define UNHANDLEDEXCEPTIONEVENTHANDLER_TB7988286F96CF5350E4037A92C900D84BB7FB650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnhandledExceptionEventHandler
struct  UnhandledExceptionEventHandler_tB7988286F96CF5350E4037A92C900D84BB7FB650  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONEVENTHANDLER_TB7988286F96CF5350E4037A92C900D84BB7FB650_H
// System.Object[]
struct ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.String[]
struct StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Char[]
struct CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};



// System.Void System.SystemException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void SystemException__ctor_m13CFB82265CAA809903F63991AB42817D6CC3534 (SystemException_t81A06ADD519539D252788D75E44AFFBE6580E301 * __this, SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * ___info0, StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1  ___context1, const RuntimeMethod* method);
// System.String System.Runtime.Serialization.SerializationInfo::GetString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* SerializationInfo_GetString_m70A93D16FAA658E8F1D563A656F2E2025BE8906A (SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void System.Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void Exception_GetObjectData_mD2C509DFF4A5E537271E9FA0781963C4DDADD54C (Exception_t * __this, SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * ___info0, StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1  ___context1, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m5B3E183DD8F7D38D1A1EAE3C2826EF8FBE127580 (SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * __this, String_t* ___name0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.String Locale::GetText(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Locale_GetText_m8335AC363D872105D0CE318A9CB1001A15813542 (String_t* ___msg0, const RuntimeMethod* method);
// System.Void System.SystemException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void SystemException__ctor_m6D95D885FFDF04207E9E0EDAD84D0748CB9C2FA7 (SystemException_t81A06ADD519539D252788D75E44AFFBE6580E301 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Exception::set_HResult(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Exception_set_HResult_mADAD3BE64DB3BA39AAEDD7F0B1EF2AB7C4B53CDB (Exception_t * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.TypeLoadException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TypeLoadException__ctor_m5B79C841C25943F7D014B1F6FE55F9B0A2ADA400 (TypeLoadException_t11569EED462C1306FB091F7210A9142451786932 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mBA1072348F0861F80512F3BB2BE685EDBB02F740 (ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Inequality_mFBA7B689F4FFCEE1224F60E7445E7C1A3F2F362B (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_mA04011EFEDBBD517510B51C0D035C87C8A079592 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m5A93B84173E5F919171874AD117D69B93388910A (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.String System.Exception::get_Message()
extern "C" IL2CPP_METHOD_ATTR String_t* Exception_get_Message_m26FA28E971B13D96300B8F4AF5E55DB6D32478EB (Exception_t * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8326E3405B647C99882C2E411C459944B0598D73 (RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  ___handle0, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object,System.Type)
extern "C" IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m074C79AB155F203EE4FB047A83D0FD08FE66B009 (SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * __this, String_t* ___name0, RuntimeObject * ___value1, Type_t * ___type2, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m631F783E957027CA661C281874882040F7693602 (NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean System.TypedReference::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool TypedReference_Equals_m90E79FE55F298C9B35B5405932E5B50E586E807B (TypedReference_t6C50501B536C0B63B481CF84F67719D9B94D3593 * __this, RuntimeObject * ___o0, const RuntimeMethod* method);
// System.IntPtr System.RuntimeTypeHandle::get_Value()
extern "C" IL2CPP_METHOD_ATTR intptr_t RuntimeTypeHandle_get_Value_mCEE11D3CFDC887606E34AB9855B12D647C9BF3C0 (RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mDC2509E75E1E11ECB129D89F90E7E89925D205DE (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Int32 System.TypedReference::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t TypedReference_GetHashCode_m498D75758034EF832D0F4DF8FED3ED6B6148A3C5 (TypedReference_t6C50501B536C0B63B481CF84F67719D9B94D3593 * __this, const RuntimeMethod* method);
// System.Boolean System.Convert::ToBoolean(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR bool Convert_ToBoolean_m2DE79976A3B2A6FD83798E5004A5A89387AC0E5F (uint16_t ___value0, const RuntimeMethod* method);
// System.Boolean System.UInt16::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR bool UInt16_System_IConvertible_ToBoolean_m729B51E96C0DDEB8BC7686C7CD8B3E87EFAE8204 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Byte System.Convert::ToByte(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR uint8_t Convert_ToByte_m0E76C2CDFE34E48EDF6339A81337905C546D24A9 (uint16_t ___value0, const RuntimeMethod* method);
// System.Byte System.UInt16::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint8_t UInt16_System_IConvertible_ToByte_m0B97CA970B30492CD65581D9F3D6BAFA4F5A1ED7 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Char System.Convert::ToChar(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_m71CF464310773A05B17B801AA87E38997932D34B (uint16_t ___value0, const RuntimeMethod* method);
// System.Char System.UInt16::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar UInt16_System_IConvertible_ToChar_mF42F8D08D9876C23D8AEB3740D90060F2570777C (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.DateTime System.Convert::ToDateTime(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  Convert_ToDateTime_mA6BF3635C348D9E9650FC650198ACE4DD711C5C6 (uint16_t ___value0, const RuntimeMethod* method);
// System.DateTime System.UInt16::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  UInt16_System_IConvertible_ToDateTime_mF207854A6BCA46F5DC76790B785656EC04559E80 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Decimal System.Convert::ToDecimal(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3  Convert_ToDecimal_mA4E45C2F4B296CAE9F6564C9F28AF71EE8DA07A1 (uint16_t ___value0, const RuntimeMethod* method);
// System.Decimal System.UInt16::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3  UInt16_System_IConvertible_ToDecimal_m7B5FB92C0983F673FD43FFEA72A5002C715F8B4C (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Double System.Convert::ToDouble(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR double Convert_ToDouble_mBAC2AFECB14355FDD7F4145176D0DC5DE057A31A (uint16_t ___value0, const RuntimeMethod* method);
// System.Double System.UInt16::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR double UInt16_System_IConvertible_ToDouble_mB16F100CD3D9A3A9A10ECB6575D6BB223DBA424F (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int16 System.Convert::ToInt16(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR int16_t Convert_ToInt16_m2B2D3B06BB071637295D0B8AF54F2C7ED11AAE95 (uint16_t ___value0, const RuntimeMethod* method);
// System.Int16 System.UInt16::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR int16_t UInt16_System_IConvertible_ToInt16_m5459C77DCD6ABCB132E7FC253F546DAB7ADC3E11 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m902DD059AAFD6FED541D44587A0D78B9AAA82D27 (uint16_t ___value0, const RuntimeMethod* method);
// System.Int32 System.UInt16::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR int32_t UInt16_System_IConvertible_ToInt32_m79765217DDA95FBAE0F5E34900D17C62E440A610 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int64 System.Convert::ToInt64(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR int64_t Convert_ToInt64_m951A9D12AC143451A331842FA9A04AD9CF145168 (uint16_t ___value0, const RuntimeMethod* method);
// System.Int64 System.UInt16::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR int64_t UInt16_System_IConvertible_ToInt64_mA2FB4C3314A5C441B83D50CC7A71145CE3AFB2F4 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.SByte System.Convert::ToSByte(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR int8_t Convert_ToSByte_m4FF5982EBD63F4EB1AD28118955265EA28AD7EB9 (uint16_t ___value0, const RuntimeMethod* method);
// System.SByte System.UInt16::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR int8_t UInt16_System_IConvertible_ToSByte_mB24AC1F9B3459756F8B09C3246D9BF3F3C42672E (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Single System.Convert::ToSingle(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR float Convert_ToSingle_m63FC559A8FCF06ABCEE6A5EB2D6F483050F8AFF4 (uint16_t ___value0, const RuntimeMethod* method);
// System.Single System.UInt16::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR float UInt16_System_IConvertible_ToSingle_mBF40EED90D2D740C5D6DE2E33C84A4BA0C0D7A8F (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Object System.Convert::ToType(System.Object,System.Type,System.IFormatProvider,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Convert_ToType_m4A551A6FB4E1BAA34CFFBDC0707FC8E333C2EF06 (RuntimeObject * ___value0, Type_t * ___conversionType1, RuntimeObject* ___provider2, bool ___try_target_to_type3, const RuntimeMethod* method);
// System.Object System.UInt16::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * UInt16_System_IConvertible_ToType_mB3E1EE50E0098822EF5AC487980C6AEC8E02F076 (uint16_t* __this, Type_t * ___targetType0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.UInt16 System.UInt16::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint16_t UInt16_System_IConvertible_ToUInt16_m9EB464788FC2AF2D5C797052FBBFEC18DC2CA197 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt32 System.Convert::ToUInt32(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR uint32_t Convert_ToUInt32_m0253EF8944A7F4D3CEF547672E24E4D5C4E48932 (uint16_t ___value0, const RuntimeMethod* method);
// System.UInt32 System.UInt16::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint32_t UInt16_System_IConvertible_ToUInt32_mF0A5511967CB960062E947A0398A77AD029B191A (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt64 System.Convert::ToUInt64(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR uint64_t Convert_ToUInt64_m28BE17445D3F343D58D96A45035C500A8A40D83C (uint16_t ___value0, const RuntimeMethod* method);
// System.UInt64 System.UInt16::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint64_t UInt16_System_IConvertible_ToUInt64_m828957BE3D492585F3A2ACBA69043048FE4F5638 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8917650A5D8F2F36C6B623A720DF2D2A630D3533 (ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 System.UInt16::CompareTo(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t UInt16_CompareTo_mB1134C5FAC51A6877240AEF00C2397D248FC5540 (uint16_t* __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Boolean System.UInt16::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool UInt16_Equals_mDFBF2B24788DFD4F6022AC3B74EAE7F3757A4863 (uint16_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.UInt16::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t UInt16_GetHashCode_mB906E37435CA3F6FCF2477B56B52E3EF3FA57209 (uint16_t* __this, const RuntimeMethod* method);
// System.Int32 System.UInt16::CompareTo(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR int32_t UInt16_CompareTo_m9FED59F3E5920658CF1E52AD741CC12102BF2B75 (uint16_t* __this, uint16_t ___value0, const RuntimeMethod* method);
// System.Boolean System.UInt16::Equals(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR bool UInt16_Equals_m164CD407ACF8A9C480B0CECC10F5BD13B432806C (uint16_t* __this, uint16_t ___obj0, const RuntimeMethod* method);
// System.UInt16 System.UInt16::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint16_t UInt16_Parse_mD9333C190983B84A328E9D3ADD994B5544C806D4 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, const RuntimeMethod* method);
// System.UInt32 System.UInt32::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint32_t UInt32_Parse_mD31A1A0C2FC3CE3EEF4A314678B35B755FD14D57 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, const RuntimeMethod* method);
// System.Void System.OverflowException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void OverflowException__ctor_m9D7E000E685C5BEEDC27E99DBF5A1AA8B739C8B6 (OverflowException_t0B5FFF1555598D499585564196861996A44507C5 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean System.UInt16::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.UInt16&)
extern "C" IL2CPP_METHOD_ATTR bool UInt16_TryParse_m1A8CDAF0546FFD2680E42D80DE0033E4249832A4 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, uint16_t* ___result3, const RuntimeMethod* method);
// System.Boolean System.UInt32::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool UInt32_TryParse_mEE31363ED7DC504242A11A33ADE601A1D514D8EB (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, uint32_t* ___result3, const RuntimeMethod* method);
// System.String System.NumberFormatter::NumberToString(System.Int32,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* NumberFormatter_NumberToString_m43767088BA3FEA8A2079CD0EF44E45179BAD51DF (int32_t ___value0, RuntimeObject* ___fp1, const RuntimeMethod* method);
// System.String System.UInt16::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* UInt16_ToString_mF4094206BDFACF142662B6A79D2E031B62995915 (uint16_t* __this, const RuntimeMethod* method);
// System.String System.UInt16::ToString(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* UInt16_ToString_m8B034D44F088A495C32D028465A00DAFD92D30C0 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.String System.UInt16::ToString(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* UInt16_ToString_m88AEAB9A3A946F1EFAA5B7EEFD53418BFCC9A291 (uint16_t* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.String System.UInt16::ToString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* UInt16_ToString_mE1FF8FB7916FD4924A09436D3E5DB894C37DDA51 (uint16_t* __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.NumberFormatter::NumberToString(System.String,System.UInt16,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* NumberFormatter_NumberToString_mFBF2B84F4007828AF1E733B1EB8B68EF69A31D99 (String_t* ___format0, uint16_t ___value1, RuntimeObject* ___fp2, const RuntimeMethod* method);
// System.TypeCode System.UInt16::GetTypeCode()
extern "C" IL2CPP_METHOD_ATTR int32_t UInt16_GetTypeCode_m5782FCEC3BDACBB6813B14C66A079B8522566A1E (uint16_t* __this, const RuntimeMethod* method);
// System.Boolean System.Convert::ToBoolean(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR bool Convert_ToBoolean_mC4848645925BFAB42E8ADB7CD1E0A640EAC63DD3 (uint32_t ___value0, const RuntimeMethod* method);
// System.Boolean System.UInt32::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR bool UInt32_System_IConvertible_ToBoolean_mA1E6FEB604A85A0A430CE14402FFA747B1AC89D4 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Byte System.Convert::ToByte(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR uint8_t Convert_ToByte_m6A700539EDF8C6B746175BB0A3A0700A2C56EA34 (uint32_t ___value0, const RuntimeMethod* method);
// System.Byte System.UInt32::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint8_t UInt32_System_IConvertible_ToByte_mCD6E9C1688DDF9CAEA411FB7034156391BE80BFC (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Char System.Convert::ToChar(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_m16E657CF20ACCC5AECCDAFA01D1493B4D29EA87E (uint32_t ___value0, const RuntimeMethod* method);
// System.Char System.UInt32::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar UInt32_System_IConvertible_ToChar_m584DB5ED5BF27ACC5C32718BB2E3980C2ECF2324 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.DateTime System.Convert::ToDateTime(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  Convert_ToDateTime_m762F56850199420C3684008A311915CBBC9724C2 (uint32_t ___value0, const RuntimeMethod* method);
// System.DateTime System.UInt32::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  UInt32_System_IConvertible_ToDateTime_mFAEDEA01849843F96A56CFF57ACE2DAD99AC1733 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Decimal System.Convert::ToDecimal(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3  Convert_ToDecimal_m69D291CB318C1732670210845F32408FB4748908 (uint32_t ___value0, const RuntimeMethod* method);
// System.Decimal System.UInt32::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3  UInt32_System_IConvertible_ToDecimal_m1444D0160E200613C2B1DF50BFEDAB16A526ECEF (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Double System.Convert::ToDouble(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR double Convert_ToDouble_m58F0532471008327A2CA91A90151BCF51D9F776B (uint32_t ___value0, const RuntimeMethod* method);
// System.Double System.UInt32::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR double UInt32_System_IConvertible_ToDouble_m63E2FC6EE49C3F3C4D4B6BF1136C38B057D47F20 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int16 System.Convert::ToInt16(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR int16_t Convert_ToInt16_mB8DD878C1DE443BD40ED8BCD04D4FABCD692E7DF (uint32_t ___value0, const RuntimeMethod* method);
// System.Int16 System.UInt32::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR int16_t UInt32_System_IConvertible_ToInt16_m8B63C4C4AC2243C6ABB2D54F2266F30D5C94BF7C (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mA62AC6DC29B793255F88F26E2AC50EB2F16FF447 (uint32_t ___value0, const RuntimeMethod* method);
// System.Int32 System.UInt32::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR int32_t UInt32_System_IConvertible_ToInt32_m029088A2A10D3CFAF9AF89167D3D50EBE151855E (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int64 System.Convert::ToInt64(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR int64_t Convert_ToInt64_m92A013EA5C4B7C79BC6E4358C4BD3499B6C435BA (uint32_t ___value0, const RuntimeMethod* method);
// System.Int64 System.UInt32::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR int64_t UInt32_System_IConvertible_ToInt64_mB82C26F063D0A90E448001DFFE1A26B627B8A550 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.SByte System.Convert::ToSByte(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR int8_t Convert_ToSByte_m6A38FDADDF638B2E52813B5801649E2302AB4CA2 (uint32_t ___value0, const RuntimeMethod* method);
// System.SByte System.UInt32::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR int8_t UInt32_System_IConvertible_ToSByte_m66107791231D91FB1E1160AE303C83C494BFB577 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Single System.Convert::ToSingle(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR float Convert_ToSingle_mF12D7ACCA994E2D4523D3F5618627CA81E402167 (uint32_t ___value0, const RuntimeMethod* method);
// System.Single System.UInt32::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR float UInt32_System_IConvertible_ToSingle_m9607A0F1FABF531D905791E3DDE6BA8B81528E04 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Object System.UInt32::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * UInt32_System_IConvertible_ToType_mDEDE33396ACAE1EDF736983473F296EDE7C24FA7 (uint32_t* __this, Type_t * ___targetType0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.UInt16 System.Convert::ToUInt16(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR uint16_t Convert_ToUInt16_m6CE6F3E60BF42A7D9C9F572BA50D09A803DDC2A9 (uint32_t ___value0, const RuntimeMethod* method);
// System.UInt16 System.UInt32::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint16_t UInt32_System_IConvertible_ToUInt16_mB8DB68EB7CBDB2CD886DD832585F4777A8D21C5A (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt32 System.UInt32::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint32_t UInt32_System_IConvertible_ToUInt32_m47BB137DE8A2DAA08D2F49AA257C09C7E3C04C69 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt64 System.Convert::ToUInt64(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR uint64_t Convert_ToUInt64_m5207EBA6654CB91C53FE7E001C0900643DB3E0D4 (uint32_t ___value0, const RuntimeMethod* method);
// System.UInt64 System.UInt32::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint64_t UInt32_System_IConvertible_ToUInt64_mDEEBA8BA19D5C5C303B933CA4920C74105CC294C (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int32 System.UInt32::CompareTo(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t UInt32_CompareTo_mD59CF1B0FEA7E0B7CDC3B7F1C68A8A17F057CE1B (uint32_t* __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Boolean System.UInt32::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool UInt32_Equals_m32B5BCC2ACE3D7E62E1533444EBE3B77EB9F6E3C (uint32_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.UInt32::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t UInt32_GetHashCode_mEF3DCFC800A1BBF2DA038B6244341AEC052106B6 (uint32_t* __this, const RuntimeMethod* method);
// System.Int32 System.UInt32::CompareTo(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR int32_t UInt32_CompareTo_m4508896FC272C4275FEF1EAE838E809B079BA5F1 (uint32_t* __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Boolean System.UInt32::Equals(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR bool UInt32_Equals_m1846AC48E54FCCD3CCD0B975AA817770900C5836 (uint32_t* __this, uint32_t ___obj0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4 (String_t* __this, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.Char::IsWhiteSpace(System.Char)
extern "C" IL2CPP_METHOD_ATTR bool Char_IsWhiteSpace_m116E8CE7814316C487761A202A4D5976F824F90E (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Exception System.Int32::GetFormatException()
extern "C" IL2CPP_METHOD_ATTR Exception_t * Int32_GetFormatException_m6C226C76C95604F328CCDBA8A4C2916FCCA951F7 (const RuntimeMethod* method);
// System.Boolean System.Int32::ProcessTrailingWhitespace(System.Boolean,System.String,System.Int32,System.Exception&)
extern "C" IL2CPP_METHOD_ATTR bool Int32_ProcessTrailingWhitespace_m62BF96075DAC613E9FACD08DF7D9F443417E59C3 (bool ___tryParse0, String_t* ___s1, int32_t ___position2, Exception_t ** ___exc3, const RuntimeMethod* method);
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
extern "C" IL2CPP_METHOD_ATTR Thread_t83C301EC970792455F76D89E58140949B003EA50 * Thread_get_CurrentThread_mDD6961DC5A1042DC7A428A1F2B8F1ACEBE393663 (const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Threading.Thread::get_CurrentCulture()
extern "C" IL2CPP_METHOD_ATTR CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * Thread_get_CurrentCulture_mC65176027DF0D9C8E9FF36E2D8E0A19B32605A8F (Thread_t83C301EC970792455F76D89E58140949B003EA50 * __this, const RuntimeMethod* method);
// System.Boolean System.Int32::CheckStyle(System.Globalization.NumberStyles,System.Boolean,System.Exception&)
extern "C" IL2CPP_METHOD_ATTR bool Int32_CheckStyle_m75F34EB0D25C3E351DAE95987D27455587AEF5BF (int32_t ___style0, bool ___tryParse1, Exception_t ** ___exc2, const RuntimeMethod* method);
// System.Boolean System.Int32::JumpOverWhite(System.Int32&,System.String,System.Boolean,System.Boolean,System.Exception&)
extern "C" IL2CPP_METHOD_ATTR bool Int32_JumpOverWhite_mB23EDD8BBCD11B42ABB32EFD72C90099B84B59AA (int32_t* ___pos0, String_t* ___s1, bool ___reportError2, bool ___tryParse3, Exception_t ** ___exc4, const RuntimeMethod* method);
// System.String System.Globalization.NumberFormatInfo::get_NegativeSign()
extern "C" IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NegativeSign_m7B9CDBB9B7B94E438EE315A97EDA4C0B55C8B249 (NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Substring_m10F7B491B6627E6C5A2725C466DB3F3E7414BC0B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.String System.Globalization.NumberFormatInfo::get_PositiveSign()
extern "C" IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_PositiveSign_m8432C7F56533C5294FC5919CB316DF1161E5B815 (NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * __this, const RuntimeMethod* method);
// System.Void System.Int32::FindSign(System.Int32&,System.String,System.Globalization.NumberFormatInfo,System.Boolean&,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR void Int32_FindSign_mA4B3C6B30D047EF6B3B1D365C65F5CEFFD8B2FF1 (int32_t* ___pos0, String_t* ___s1, NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * ___nfi2, bool* ___foundSign3, bool* ___negative4, const RuntimeMethod* method);
// System.Void System.Int32::FindCurrency(System.Int32&,System.String,System.Globalization.NumberFormatInfo,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR void Int32_FindCurrency_m9EA01794AEA18D803880375B21DDC000CAFAF328 (int32_t* ___pos0, String_t* ___s1, NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * ___nfi2, bool* ___foundCurrency3, const RuntimeMethod* method);
// System.Boolean System.Int32::ValidDigit(System.Char,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool Int32_ValidDigit_mB2D66A01912631A8F8112932C71A3C6D91ECF57F (Il2CppChar ___e0, bool ___allowHex1, const RuntimeMethod* method);
// System.String System.Globalization.NumberFormatInfo::get_NumberGroupSeparator()
extern "C" IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NumberGroupSeparator_mAE19472DF8236D212CF7C0FB09AC1E5CE2B74DE3 (NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * __this, const RuntimeMethod* method);
// System.Boolean System.Int32::FindOther(System.Int32&,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool Int32_FindOther_m58ADB14B31AE928628DDF04FAA89427430459119 (int32_t* ___pos0, String_t* ___s1, String_t* ___other2, const RuntimeMethod* method);
// System.String System.Globalization.NumberFormatInfo::get_NumberDecimalSeparator()
extern "C" IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NumberDecimalSeparator_mFE4D5E9D517A6BA9B48C5E513B08E3E6D5B99754 (NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * __this, const RuntimeMethod* method);
// System.Boolean System.Char::IsDigit(System.Char)
extern "C" IL2CPP_METHOD_ATTR bool Char_IsDigit_m64DFE12D7DCF1AC634EA805421E06B4B18E1C036 (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Boolean System.Char::IsLower(System.Char)
extern "C" IL2CPP_METHOD_ATTR bool Char_IsLower_mF2969FAEF7592967B28F40E91B20340EF5B4E245 (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Boolean System.UInt32::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Boolean,System.UInt32&,System.Exception&)
extern "C" IL2CPP_METHOD_ATTR bool UInt32_Parse_m898CD1C491A8D92808B1F11FA2B51D2C7CA2C4DC (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, bool ___tryParse3, uint32_t* ___result4, Exception_t ** ___exc5, const RuntimeMethod* method);
// System.Boolean System.UInt32::Parse(System.String,System.Boolean,System.UInt32&,System.Exception&)
extern "C" IL2CPP_METHOD_ATTR bool UInt32_Parse_mF445201DDD2567AFFDDB0C77E3CF36AAF86AB015 (String_t* ___s0, bool ___tryParse1, uint32_t* ___result2, Exception_t ** ___exc3, const RuntimeMethod* method);
// System.String System.NumberFormatter::NumberToString(System.UInt32,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* NumberFormatter_NumberToString_m90834F3DE104163898C8D9986B81FEED3882F471 (uint32_t ___value0, RuntimeObject* ___fp1, const RuntimeMethod* method);
// System.String System.UInt32::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* UInt32_ToString_mC174A5A4A8166D0F152D94A65CB535E4DAC99F4D (uint32_t* __this, const RuntimeMethod* method);
// System.String System.UInt32::ToString(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* UInt32_ToString_mB9E6EE2E0633BB6D2E46B9BB44049640734C3982 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.String System.UInt32::ToString(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* UInt32_ToString_m230B934119903A90F549E32D43B3E2A252324CFC (uint32_t* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.String System.UInt32::ToString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* UInt32_ToString_mADC643D127CD9C8987453028D62BC8321177D6ED (uint32_t* __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.NumberFormatter::NumberToString(System.String,System.UInt32,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* NumberFormatter_NumberToString_m25E25BFAA97D8526D7A3CE9F08882004938D1C1D (String_t* ___format0, uint32_t ___value1, RuntimeObject* ___fp2, const RuntimeMethod* method);
// System.TypeCode System.UInt32::GetTypeCode()
extern "C" IL2CPP_METHOD_ATTR int32_t UInt32_GetTypeCode_m0063C43A2AEE92E9AFD9E95A13264F18F5B2291B (uint32_t* __this, const RuntimeMethod* method);
// System.Boolean System.Convert::ToBoolean(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR bool Convert_ToBoolean_m79BE19FE30EEB564145E8542C140DC87B31F9C5F (uint64_t ___value0, const RuntimeMethod* method);
// System.Boolean System.UInt64::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR bool UInt64_System_IConvertible_ToBoolean_mC5B4822502427B3930661390097D9F495D655B21 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Byte System.Convert::ToByte(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR uint8_t Convert_ToByte_mD2643543C2198293B677C0F735E4FCCBCAA33B8D (uint64_t ___value0, const RuntimeMethod* method);
// System.Byte System.UInt64::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint8_t UInt64_System_IConvertible_ToByte_m5D4A4C572F0107E424A3A759C71F5010932C84A3 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Char System.Convert::ToChar(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_mDA6F83AFEEFB9E7F7B7A6EE8DCC293D55B0273D4 (uint64_t ___value0, const RuntimeMethod* method);
// System.Char System.UInt64::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar UInt64_System_IConvertible_ToChar_m3B42FC6D1379A1823E8F2FF1C3FE29B3F3ED2804 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.DateTime System.Convert::ToDateTime(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  Convert_ToDateTime_mC02CBCDC7252ED473C4D0014C47794802CD3D74D (uint64_t ___value0, const RuntimeMethod* method);
// System.DateTime System.UInt64::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  UInt64_System_IConvertible_ToDateTime_mDC82BBB67CCC2B0D9EE566A80C7A353184274FE4 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Decimal System.Convert::ToDecimal(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3  Convert_ToDecimal_m5EB205FCF834352409FE2640A1021EE88EB39376 (uint64_t ___value0, const RuntimeMethod* method);
// System.Decimal System.UInt64::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3  UInt64_System_IConvertible_ToDecimal_m5CEB73C070A190110351684302F5817E686EB840 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Double System.Convert::ToDouble(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR double Convert_ToDouble_m63C855F4BF1E50ED856B3A69F6FB70DD5AC81BED (uint64_t ___value0, const RuntimeMethod* method);
// System.Double System.UInt64::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR double UInt64_System_IConvertible_ToDouble_mCA339EB2DC18F00382AF94BD4C8C9D2EC79E4E28 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int16 System.Convert::ToInt16(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR int16_t Convert_ToInt16_m2120125D93F7859D89C8812842940C243312EBAE (uint64_t ___value0, const RuntimeMethod* method);
// System.Int16 System.UInt64::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR int16_t UInt64_System_IConvertible_ToInt16_mEEBBA7B8F1D5D89D18FA917AB1EFB3D450FBB0BA (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mDC8730CFBFC0438C06624F11B6ABB37A0B6F67E6 (uint64_t ___value0, const RuntimeMethod* method);
// System.Int32 System.UInt64::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR int32_t UInt64_System_IConvertible_ToInt32_mAB77BCAA67C83BFD65FBCEABC3C59A17B4B8C2D6 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int64 System.Convert::ToInt64(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR int64_t Convert_ToInt64_m365DC01157FC12CF7012217E8ED4C52B8AEAB91E (uint64_t ___value0, const RuntimeMethod* method);
// System.Int64 System.UInt64::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR int64_t UInt64_System_IConvertible_ToInt64_m54199F49F25C4B3B174EB8836B79DA1B5C01BE31 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.SByte System.Convert::ToSByte(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR int8_t Convert_ToSByte_mD679881109F9279D68FAFC5985182825AA56AA41 (uint64_t ___value0, const RuntimeMethod* method);
// System.SByte System.UInt64::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR int8_t UInt64_System_IConvertible_ToSByte_mCD877C98892D8E552D6A16977E27958F775A249A (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Single System.Convert::ToSingle(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR float Convert_ToSingle_mB4864E54C1C9E0DB2EDFEC47A7D64C0CF3706A4B (uint64_t ___value0, const RuntimeMethod* method);
// System.Single System.UInt64::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR float UInt64_System_IConvertible_ToSingle_mF7FD4CAAD9927F7420889A89AB357523AE036027 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Object System.UInt64::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * UInt64_System_IConvertible_ToType_m13F392C80DE4A78FFE48C5BAEEF947D0EAA3AF36 (uint64_t* __this, Type_t * ___targetType0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.UInt16 System.Convert::ToUInt16(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR uint16_t Convert_ToUInt16_m77AADDEB6DBE67A66D6F93D6F9B17A1BB38BEA17 (uint64_t ___value0, const RuntimeMethod* method);
// System.UInt16 System.UInt64::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint16_t UInt64_System_IConvertible_ToUInt16_mBC7A7C119956C4757D90697326F2724FDBB80501 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt32 System.Convert::ToUInt32(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR uint32_t Convert_ToUInt32_m6D196B272C8C286B56DA35EE0ADA8CF60028831B (uint64_t ___value0, const RuntimeMethod* method);
// System.UInt32 System.UInt64::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint32_t UInt64_System_IConvertible_ToUInt32_m77753CCA949A68A16F6EC35DB4B09699371B076F (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt64 System.UInt64::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint64_t UInt64_System_IConvertible_ToUInt64_mCE063A117DCB912AE177813DF1230BE0FF6CB50E (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int32 System.UInt64::CompareTo(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t UInt64_CompareTo_m041E1FF06716F221CC5D9DCD9EB27C3C12F9EA70 (uint64_t* __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Boolean System.UInt64::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool UInt64_Equals_mDD0D839B196D74CC004F10CA2A1F5DF5F022A3B8 (uint64_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.UInt64::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t UInt64_GetHashCode_mC5D0BC70D723E5FF2B79153BF7CE0118F229C7A4 (uint64_t* __this, const RuntimeMethod* method);
// System.Int32 System.UInt64::CompareTo(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR int32_t UInt64_CompareTo_mCB5D59A43464191DB5B056E510CF7FA17A7D669B (uint64_t* __this, uint64_t ___value0, const RuntimeMethod* method);
// System.Boolean System.UInt64::Equals(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR bool UInt64_Equals_m7B6293A29524D99ACD609A8F3E5090C6EB470397 (uint64_t* __this, uint64_t ___obj0, const RuntimeMethod* method);
// System.UInt64 System.UInt64::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint64_t UInt64_Parse_m4DBE576353DDF2993426DE1CAB5E0E8344FCCA6A (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, const RuntimeMethod* method);
// System.Boolean System.UInt64::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Boolean,System.UInt64&,System.Exception&)
extern "C" IL2CPP_METHOD_ATTR bool UInt64_Parse_m64DC370FE1AC82186A2E8D36AF019434AB2FEDCC (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, bool ___tryParse3, uint64_t* ___result4, Exception_t ** ___exc5, const RuntimeMethod* method);
// System.String System.NumberFormatter::NumberToString(System.UInt64,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* NumberFormatter_NumberToString_m6F6C1DA56D7D20034D89A0A048A3A77A2B152770 (uint64_t ___value0, RuntimeObject* ___fp1, const RuntimeMethod* method);
// System.String System.UInt64::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* UInt64_ToString_mDDB657B6C06A57D111E9C9BB89D15199F9CE0D30 (uint64_t* __this, const RuntimeMethod* method);
// System.String System.UInt64::ToString(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* UInt64_ToString_m58FD557196BB2440D450C98FF9DFDF3B310F67CF (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.String System.UInt64::ToString(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* UInt64_ToString_mA8C13043CA751D73C8F9D57CCB4A5FC07E78B90A (uint64_t* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.String System.UInt64::ToString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* UInt64_ToString_m062289738F319809BFD8193C3EB7703D2DE3292A (uint64_t* __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.NumberFormatter::NumberToString(System.String,System.UInt64,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* NumberFormatter_NumberToString_m8271FA6BE5B57F3EF6C67E6E536D15CB4EE9F88F (String_t* ___format0, uint64_t ___value1, RuntimeObject* ___fp2, const RuntimeMethod* method);
// System.TypeCode System.UInt64::GetTypeCode()
extern "C" IL2CPP_METHOD_ATTR int32_t UInt64_GetTypeCode_mA0AD4300BA91209E94E316548A132F9AE021D210 (uint64_t* __this, const RuntimeMethod* method);
// System.Void System.UIntPtr::.ctor(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void UIntPtr__ctor_m66E198CCA6B551D852448BC9B89FDCC1E61C60AA (uintptr_t* __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.UInt64)
extern "C" IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_mD1F127E2DEF9FCD92A4EE6545DAAB7BBB6E14F33 (SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * __this, String_t* ___name0, uint64_t ___value1, const RuntimeMethod* method);
// System.Void System.UIntPtr::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m117ECE6EA8017FA6250B7D59CFE40D794090C9D6 (uintptr_t* __this, SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * ___info0, StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1  ___context1, const RuntimeMethod* method);
// System.Boolean System.UIntPtr::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool UIntPtr_Equals_m099FA719C2D00C6231F941B1651A1165743C84CA (uintptr_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.UIntPtr::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t UIntPtr_GetHashCode_mAF75E1D8E3A055D68DD17DA3A99B29F260B68B04 (uintptr_t* __this, const RuntimeMethod* method);
// System.String System.UIntPtr::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* UIntPtr_ToString_mECE076D76071F88BD61F186065317BCEE2DCDC73 (uintptr_t* __this, const RuntimeMethod* method);
// System.Void System.EventArgs::.ctor()
extern "C" IL2CPP_METHOD_ATTR void EventArgs__ctor_mB712E19C94A622FFFE48714A6D43E02E9E6009D4 (EventArgs_tA4C15C1D2AB4B139169B1942C1477933E00DCA17 * __this, const RuntimeMethod* method);
// System.Void System.UnhandledExceptionEventHandler::Invoke(System.Object,System.UnhandledExceptionEventArgs)
extern "C" IL2CPP_METHOD_ATTR void UnhandledExceptionEventHandler_Invoke_m460740022E4A4F884803C974F64025D314E5D7CF (UnhandledExceptionEventHandler_tB7988286F96CF5350E4037A92C900D84BB7FB650 * __this, RuntimeObject * ___sender0, UnhandledExceptionEventArgs_t2B19479B2BC866C465A8E07BEA9C6027CB168BA2 * ___e1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 System.Runtime.Serialization.SerializationInfo::GetInt32(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_m6AC6D412C57BCE31EE1D8E1224F6DECBF5A68B1A (SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m17E95375C618FC19411D2E86E53497825B5A9D02 (SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::SetType(System.Type)
extern "C" IL2CPP_METHOD_ATTR void SerializationInfo_SetType_m32D2E2BB46664D1A4B8B9051D4388ABAA3D6A58C (SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Object_GetType_m993E65F4E4457CE1761C49B188A6CF858597BDDE (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.Reflection.Module::get_ScopeName()
extern "C" IL2CPP_METHOD_ATTR String_t* Module_get_ScopeName_m423C1390C2D28389CB72CD9115DDDC145406946A (Module_t6211282315B01A0EB488BB95BA1A73BBE5C6B7D8 * __this, const RuntimeMethod* method);
// System.Reflection.Assembly System.Reflection.Module::get_Assembly()
extern "C" IL2CPP_METHOD_ATTR Assembly_t * Module_get_Assembly_mE80B2C0600696E57AFA6FAFB516DB92A4E926E4D (Module_t6211282315B01A0EB488BB95BA1A73BBE5C6B7D8 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mCD2944038AAC6677F82C713B8CB8C67CCF48EF10 (NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6 * __this, const RuntimeMethod* method);
// System.Reflection.Assembly System.Reflection.Assembly::Load(System.String)
extern "C" IL2CPP_METHOD_ATTR Assembly_t * Assembly_Load_m430E0CB1BD58904D141BB0F73B1775862A0D2170 (String_t* ___assemblyString0, const RuntimeMethod* method);
// System.Reflection.Module System.Reflection.Assembly::GetModule(System.String)
extern "C" IL2CPP_METHOD_ATTR Module_t6211282315B01A0EB488BB95BA1A73BBE5C6B7D8 * Assembly_GetModule_m636C7961E007511E1BD09C455B06FBE78DF64BF0 (Assembly_t * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Boolean System.ValueType::InternalEquals(System.Object,System.Object,System.Object[]&)
extern "C" IL2CPP_METHOD_ATTR bool ValueType_InternalEquals_m9AE48614FA28894778698A3E84F0BDDDC325AB02 (RuntimeObject * ___o10, RuntimeObject * ___o21, ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D** ___fields2, const RuntimeMethod* method);
// System.Boolean System.ValueType::DefaultEquals(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR bool ValueType_DefaultEquals_m5ECF7678A8DF137FF030DB9DAAA282DD684571DD (RuntimeObject * ___o10, RuntimeObject * ___o21, const RuntimeMethod* method);
// System.Int32 System.ValueType::InternalGetHashCode(System.Object,System.Object[]&)
extern "C" IL2CPP_METHOD_ATTR int32_t ValueType_InternalGetHashCode_mA5925DF5288F5152C970140E62E0FE71DD99671E (RuntimeObject * ___o0, ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D** ___fields1, const RuntimeMethod* method);
// System.Void System.Version::CheckedSet(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Version_CheckedSet_m8F93592250413F64CD48EE56635B87BD10E01775 (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * __this, int32_t ___defined0, int32_t ___major1, int32_t ___minor2, int32_t ___build3, int32_t ___revision4, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* String_Split_m3A8A48A00011BA5F135EBC797AD2B12E710A48CA (String_t* __this, CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* ___separator0, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t Int32_Parse_mF93B2C50DDBC196570E2EA8495DBA36F2CD75290 (String_t* ___s0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE814EB7B9A7E67CA0BD6A97F77497C9669A4FEEA (ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Version::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Version__ctor_m6F990EB264310E8E1AFDBCEC5668CDF132432F68 (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * __this, int32_t ___major0, int32_t ___minor1, const RuntimeMethod* method);
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Version__ctor_m1F3F5FD07445CBBC0BDF9BF9F72A8C3DD6D5FB14 (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * __this, int32_t ___major0, int32_t ___minor1, int32_t ___build2, const RuntimeMethod* method);
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Version__ctor_m28C37359BE6B006A3EB463BED789A76D1790E45B (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * __this, int32_t ___major0, int32_t ___minor1, int32_t ___build2, int32_t ___revision3, const RuntimeMethod* method);
// System.Int32 System.Version::CompareTo(System.Version)
extern "C" IL2CPP_METHOD_ATTR int32_t Version_CompareTo_mF1ED7826B027AC4BEC76981ED28772F56C9CD6BE (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * __this, Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * ___value0, const RuntimeMethod* method);
// System.Boolean System.Version::Equals(System.Version)
extern "C" IL2CPP_METHOD_ATTR bool Version_Equals_m15047C69E4AA3AB29506EE211B87D491B2B0BFA5 (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * __this, Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Version::op_Equality(System.Version,System.Version)
extern "C" IL2CPP_METHOD_ATTR bool Version_op_Equality_m5F34580D30263159C103136543F7723DB99C5215 (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * ___v10, Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * ___v21, const RuntimeMethod* method);
// System.Boolean System.Version::op_Inequality(System.Version,System.Version)
extern "C" IL2CPP_METHOD_ATTR bool Version_op_Inequality_m8791D9395E40AC1315BF1374388EB9B76864744E (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * ___v10, Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * ___v21, const RuntimeMethod* method);
// System.String System.Int32::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Int32_ToString_mE7DFEEF8FFE4DA97DA211C49948D8E752E6B61C8 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mDF3A55D4269A0D2D7969D90C6D38B472E24DD445 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Boolean System.Object::Equals(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_Equals_m8F1D37CE67D713E8EF3E9433D942A7E0242F4838 (RuntimeObject * ___objA0, RuntimeObject * ___objB1, const RuntimeMethod* method);
// System.Void System.WeakReference::.ctor(System.Object,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void WeakReference__ctor_mC5B594C73AF6091B67523598417E90FCD8226CBA (WeakReference_t748C76A5CAD65471521659008DBC57191528AA9C * __this, RuntimeObject * ___target0, bool ___trackResurrection1, const RuntimeMethod* method);
// System.Void System.WeakReference::AllocateHandle(System.Object)
extern "C" IL2CPP_METHOD_ATTR void WeakReference_AllocateHandle_m11FEC60BC1D2F935BFE8CD5764477D802E922A40 (WeakReference_t748C76A5CAD65471521659008DBC57191528AA9C * __this, RuntimeObject * ___target0, const RuntimeMethod* method);
// System.Boolean System.Runtime.Serialization.SerializationInfo::GetBoolean(System.String)
extern "C" IL2CPP_METHOD_ATTR bool SerializationInfo_GetBoolean_mDF853D9D896D7FBFA8C89BCFDCF9230412A9563F (SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Object System.Runtime.Serialization.SerializationInfo::GetValue(System.String,System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * SerializationInfo_GetValue_m76CB68313C2DC35BB0F508B38E7F65E0A270D717 (SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * __this, String_t* ___name0, Type_t * ___type1, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
extern "C" IL2CPP_METHOD_ATTR GCHandle_tE002D24915851AD73ACC0F503601C384273C3060  GCHandle_Alloc_m068D1EE7DC287ED4258E2FB26BC67299CEA8A10C (RuntimeObject * ___value0, int32_t ___type1, const RuntimeMethod* method);
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GCHandle_get_Target_mC3CAF98C66E4DD8164D291463ADF5BC5359543E0 (GCHandle_tE002D24915851AD73ACC0F503601C384273C3060 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::Free()
extern "C" IL2CPP_METHOD_ATTR void GCHandle_Free_mE2DC9BE787C9CFD3AAAB1803738BD2ADCF0219B2 (GCHandle_tE002D24915851AD73ACC0F503601C384273C3060 * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
extern "C" IL2CPP_METHOD_ATTR void Object_Finalize_mF771ED4CD6EB17CF862AA2B705F0E2CC0B4ADBED (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m5AABBD341C86E74174984842FA7F3FEEB35FA953 (SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.Void System.__Il2CppComObject::Finalize()
extern "C" IL2CPP_METHOD_ATTR void __Il2CppComObject_Finalize_m682584A7F72588A85A4905DDE72083A32342558A (Il2CppComObject * __this, const RuntimeMethod* method);
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
// System.Void System.TypeInitializationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void TypeInitializationException__ctor_m6E5EC4853C86B3F976E9BBAA8B0C237F1DCF0B39 (TypeInitializationException_tB11D339EF952E54C89496249B4B02C1E2535F9F6 * __this, SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * ___info0, StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeInitializationException__ctor_m6E5EC4853C86B3F976E9BBAA8B0C237F1DCF0B39_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_0 = ___info0;
		StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1  L_1 = ___context1;
		SystemException__ctor_m13CFB82265CAA809903F63991AB42817D6CC3534(__this, L_0, L_1, /*hidden argument*/NULL);
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_2 = ___info0;
		NullCheck(L_2);
		String_t* L_3 = SerializationInfo_GetString_m70A93D16FAA658E8F1D563A656F2E2025BE8906A(L_2, _stringLiteral9E430F17EB96D796BF49C46584B98C497F8AE559, /*hidden argument*/NULL);
		__this->set_type_name_11(L_3);
		return;
	}
}
// System.Void System.TypeInitializationException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void TypeInitializationException_GetObjectData_mE58F862141765D6B8FEA4FCC831EBE955A4738BF (TypeInitializationException_tB11D339EF952E54C89496249B4B02C1E2535F9F6 * __this, SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * ___info0, StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeInitializationException_GetObjectData_mE58F862141765D6B8FEA4FCC831EBE955A4738BF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_0 = ___info0;
		StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1  L_1 = ___context1;
		Exception_GetObjectData_mD2C509DFF4A5E537271E9FA0781963C4DDADD54C(__this, L_0, L_1, /*hidden argument*/NULL);
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_2 = ___info0;
		String_t* L_3 = __this->get_type_name_11();
		NullCheck(L_2);
		SerializationInfo_AddValue_m5B3E183DD8F7D38D1A1EAE3C2826EF8FBE127580(L_2, _stringLiteral9E430F17EB96D796BF49C46584B98C497F8AE559, L_3, /*hidden argument*/NULL);
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
// System.Void System.TypeLoadException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TypeLoadException__ctor_m5B79C841C25943F7D014B1F6FE55F9B0A2ADA400 (TypeLoadException_t11569EED462C1306FB091F7210A9142451786932 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeLoadException__ctor_m5B79C841C25943F7D014B1F6FE55F9B0A2ADA400_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Locale_GetText_m8335AC363D872105D0CE318A9CB1001A15813542(_stringLiteral3EAF8235CA4694A10F93803DF4C94B8C3FB2F658, /*hidden argument*/NULL);
		SystemException__ctor_m6D95D885FFDF04207E9E0EDAD84D0748CB9C2FA7(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_mADAD3BE64DB3BA39AAEDD7F0B1EF2AB7C4B53CDB(__this, ((int32_t)-2146233054), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.TypeLoadException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void TypeLoadException__ctor_m2D63E057049AEE684ABF8C77002B3B8A21C07B81 (TypeLoadException_t11569EED462C1306FB091F7210A9142451786932 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		SystemException__ctor_m6D95D885FFDF04207E9E0EDAD84D0748CB9C2FA7(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_mADAD3BE64DB3BA39AAEDD7F0B1EF2AB7C4B53CDB(__this, ((int32_t)-2146233054), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.TypeLoadException::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void TypeLoadException__ctor_m6991C2B6A404D4503CB7D8C347893902DAA8ADDE (TypeLoadException_t11569EED462C1306FB091F7210A9142451786932 * __this, String_t* ___className0, String_t* ___assemblyName1, const RuntimeMethod* method)
{
	{
		TypeLoadException__ctor_m5B79C841C25943F7D014B1F6FE55F9B0A2ADA400(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___className0;
		__this->set_className_12(L_0);
		String_t* L_1 = ___assemblyName1;
		__this->set_assemblyName_13(L_1);
		return;
	}
}
// System.Void System.TypeLoadException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void TypeLoadException__ctor_mFA97232E5AFC5D088688B522029DC9D3F3286702 (TypeLoadException_t11569EED462C1306FB091F7210A9142451786932 * __this, SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * ___info0, StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeLoadException__ctor_mFA97232E5AFC5D088688B522029DC9D3F3286702_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_0 = ___info0;
		StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1  L_1 = ___context1;
		SystemException__ctor_m13CFB82265CAA809903F63991AB42817D6CC3534(__this, L_0, L_1, /*hidden argument*/NULL);
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_2 = ___info0;
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 * L_3 = (ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 *)il2cpp_codegen_object_new(ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mBA1072348F0861F80512F3BB2BE685EDBB02F740(L_3, _stringLiteral59BD0A3FF43B32849B319E645D4798D8A5D1E889, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, TypeLoadException__ctor_mFA97232E5AFC5D088688B522029DC9D3F3286702_RuntimeMethod_var);
	}

IL_0019:
	{
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_4 = ___info0;
		NullCheck(L_4);
		String_t* L_5 = SerializationInfo_GetString_m70A93D16FAA658E8F1D563A656F2E2025BE8906A(L_4, _stringLiteralE31F38791120074366DE542990E5E66B4AEB3A22, /*hidden argument*/NULL);
		__this->set_className_12(L_5);
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_6 = ___info0;
		NullCheck(L_6);
		String_t* L_7 = SerializationInfo_GetString_m70A93D16FAA658E8F1D563A656F2E2025BE8906A(L_6, _stringLiteral3D708CB7F76AF5A68201B998794CB435ACA1B0D5, /*hidden argument*/NULL);
		__this->set_assemblyName_13(L_7);
		return;
	}
}
// System.String System.TypeLoadException::get_Message()
extern "C" IL2CPP_METHOD_ATTR String_t* TypeLoadException_get_Message_m07F93E6EE189DFB146E3087BFDD91CA1450A209C (TypeLoadException_t11569EED462C1306FB091F7210A9142451786932 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeLoadException_get_Message_m07F93E6EE189DFB146E3087BFDD91CA1450A209C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_className_12();
		if (!L_0)
		{
			goto IL_0053;
		}
	}
	{
		String_t* L_1 = __this->get_assemblyName_13();
		if (!L_1)
		{
			goto IL_0042;
		}
	}
	{
		String_t* L_2 = __this->get_assemblyName_13();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_4 = String_op_Inequality_mFBA7B689F4FFCEE1224F60E7445E7C1A3F2F362B(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0042;
		}
	}
	{
		String_t* L_5 = __this->get_className_12();
		String_t* L_6 = __this->get_assemblyName_13();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Format_mA04011EFEDBBD517510B51C0D035C87C8A079592(_stringLiteral3886FAAB186277EC9F7FEBBB72CE301AC5E2773C, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0042:
	{
		String_t* L_8 = __this->get_className_12();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Format_m5A93B84173E5F919171874AD117D69B93388910A(_stringLiteralEAF96B46E5F5B462CAD6CF1D10577EF2233627D1, L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_0053:
	{
		String_t* L_10 = Exception_get_Message_m26FA28E971B13D96300B8F4AF5E55DB6D32478EB(__this, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.Void System.TypeLoadException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void TypeLoadException_GetObjectData_mBF05E1BCBC42412CEE2E4F00BBE3BF3A0CA1DCFD (TypeLoadException_t11569EED462C1306FB091F7210A9142451786932 * __this, SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * ___info0, StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeLoadException_GetObjectData_mBF05E1BCBC42412CEE2E4F00BBE3BF3A0CA1DCFD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 * L_1 = (ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 *)il2cpp_codegen_object_new(ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mBA1072348F0861F80512F3BB2BE685EDBB02F740(L_1, _stringLiteral59BD0A3FF43B32849B319E645D4798D8A5D1E889, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, TypeLoadException_GetObjectData_mBF05E1BCBC42412CEE2E4F00BBE3BF3A0CA1DCFD_RuntimeMethod_var);
	}

IL_0011:
	{
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_2 = ___info0;
		StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1  L_3 = ___context1;
		Exception_GetObjectData_mD2C509DFF4A5E537271E9FA0781963C4DDADD54C(__this, L_2, L_3, /*hidden argument*/NULL);
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_4 = ___info0;
		String_t* L_5 = __this->get_className_12();
		RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  L_6 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m8326E3405B647C99882C2E411C459944B0598D73(L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		SerializationInfo_AddValue_m074C79AB155F203EE4FB047A83D0FD08FE66B009(L_4, _stringLiteralE31F38791120074366DE542990E5E66B4AEB3A22, L_5, L_7, /*hidden argument*/NULL);
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_8 = ___info0;
		String_t* L_9 = __this->get_assemblyName_13();
		RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  L_10 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t * L_11 = Type_GetTypeFromHandle_m8326E3405B647C99882C2E411C459944B0598D73(L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		SerializationInfo_AddValue_m074C79AB155F203EE4FB047A83D0FD08FE66B009(L_8, _stringLiteral3D708CB7F76AF5A68201B998794CB435ACA1B0D5, L_9, L_11, /*hidden argument*/NULL);
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_12 = ___info0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  L_14 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t * L_15 = Type_GetTypeFromHandle_m8326E3405B647C99882C2E411C459944B0598D73(L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		SerializationInfo_AddValue_m074C79AB155F203EE4FB047A83D0FD08FE66B009(L_12, _stringLiteral27BED7455215AA8A8EA1D7944A4975BAA72AA6B6, L_13, L_15, /*hidden argument*/NULL);
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_16 = ___info0;
		int32_t L_17 = 0;
		RuntimeObject * L_18 = Box(Int32_tC16F64335CE8B56D99229DE94BB3A876ED55FE87_il2cpp_TypeInfo_var, &L_17);
		RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  L_19 = { reinterpret_cast<intptr_t> (Int32_tC16F64335CE8B56D99229DE94BB3A876ED55FE87_0_0_0_var) };
		Type_t * L_20 = Type_GetTypeFromHandle_m8326E3405B647C99882C2E411C459944B0598D73(L_19, /*hidden argument*/NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m074C79AB155F203EE4FB047A83D0FD08FE66B009(L_16, _stringLiteralFE66537A952957258311139D35B0945C0FC518DC, L_18, L_20, /*hidden argument*/NULL);
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
// System.Boolean System.TypedReference::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool TypedReference_Equals_m90E79FE55F298C9B35B5405932E5B50E586E807B (TypedReference_t6C50501B536C0B63B481CF84F67719D9B94D3593 * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypedReference_Equals_m90E79FE55F298C9B35B5405932E5B50E586E807B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Locale_GetText_m8335AC363D872105D0CE318A9CB1001A15813542(_stringLiteralD05CF3F46175E08F3C75EF25B3C75BEFF7660A0B, /*hidden argument*/NULL);
		NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6 * L_1 = (NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6 *)il2cpp_codegen_object_new(NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m631F783E957027CA661C281874882040F7693602(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, TypedReference_Equals_m90E79FE55F298C9B35B5405932E5B50E586E807B_RuntimeMethod_var);
	}
}
extern "C"  bool TypedReference_Equals_m90E79FE55F298C9B35B5405932E5B50E586E807B_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	TypedReference_t6C50501B536C0B63B481CF84F67719D9B94D3593 * _thisAdjusted = reinterpret_cast<TypedReference_t6C50501B536C0B63B481CF84F67719D9B94D3593 *>(__this + 1);
	return TypedReference_Equals_m90E79FE55F298C9B35B5405932E5B50E586E807B(_thisAdjusted, ___o0, method);
}
// System.Int32 System.TypedReference::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t TypedReference_GetHashCode_m498D75758034EF832D0F4DF8FED3ED6B6148A3C5 (TypedReference_t6C50501B536C0B63B481CF84F67719D9B94D3593 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypedReference_GetHashCode_m498D75758034EF832D0F4DF8FED3ED6B6148A3C5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD * L_0 = __this->get_address_of_type_0();
		intptr_t L_1 = RuntimeTypeHandle_get_Value_mCEE11D3CFDC887606E34AB9855B12D647C9BF3C0((RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD *)L_0, /*hidden argument*/NULL);
		bool L_2 = IntPtr_op_Equality_mDC2509E75E1E11ECB129D89F90E7E89925D205DE((intptr_t)L_1, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		return 0;
	}

IL_001c:
	{
		RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  L_3 = __this->get_type_0();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m8326E3405B647C99882C2E411C459944B0598D73(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Type::GetHashCode() */, L_4);
		return L_5;
	}
}
extern "C"  int32_t TypedReference_GetHashCode_m498D75758034EF832D0F4DF8FED3ED6B6148A3C5_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TypedReference_t6C50501B536C0B63B481CF84F67719D9B94D3593 * _thisAdjusted = reinterpret_cast<TypedReference_t6C50501B536C0B63B481CF84F67719D9B94D3593 *>(__this + 1);
	return TypedReference_GetHashCode_m498D75758034EF832D0F4DF8FED3ED6B6148A3C5(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean System.UInt16::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR bool UInt16_System_IConvertible_ToBoolean_m729B51E96C0DDEB8BC7686C7CD8B3E87EFAE8204 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToBoolean_m729B51E96C0DDEB8BC7686C7CD8B3E87EFAE8204_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint16_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t8A398E85B5FC90CA984E604BD3F65BD7B205D592_il2cpp_TypeInfo_var);
		bool L_1 = Convert_ToBoolean_m2DE79976A3B2A6FD83798E5004A5A89387AC0E5F((uint16_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  bool UInt16_System_IConvertible_ToBoolean_m729B51E96C0DDEB8BC7686C7CD8B3E87EFAE8204_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_System_IConvertible_ToBoolean_m729B51E96C0DDEB8BC7686C7CD8B3E87EFAE8204(_thisAdjusted, ___provider0, method);
}
// System.Byte System.UInt16::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint8_t UInt16_System_IConvertible_ToByte_m0B97CA970B30492CD65581D9F3D6BAFA4F5A1ED7 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToByte_m0B97CA970B30492CD65581D9F3D6BAFA4F5A1ED7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint16_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t8A398E85B5FC90CA984E604BD3F65BD7B205D592_il2cpp_TypeInfo_var);
		uint8_t L_1 = Convert_ToByte_m0E76C2CDFE34E48EDF6339A81337905C546D24A9((uint16_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  uint8_t UInt16_System_IConvertible_ToByte_m0B97CA970B30492CD65581D9F3D6BAFA4F5A1ED7_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_System_IConvertible_ToByte_m0B97CA970B30492CD65581D9F3D6BAFA4F5A1ED7(_thisAdjusted, ___provider0, method);
}
// System.Char System.UInt16::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar UInt16_System_IConvertible_ToChar_mF42F8D08D9876C23D8AEB3740D90060F2570777C (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToChar_mF42F8D08D9876C23D8AEB3740D90060F2570777C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint16_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t8A398E85B5FC90CA984E604BD3F65BD7B205D592_il2cpp_TypeInfo_var);
		Il2CppChar L_1 = Convert_ToChar_m71CF464310773A05B17B801AA87E38997932D34B((uint16_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  Il2CppChar UInt16_System_IConvertible_ToChar_mF42F8D08D9876C23D8AEB3740D90060F2570777C_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_System_IConvertible_ToChar_mF42F8D08D9876C23D8AEB3740D90060F2570777C(_thisAdjusted, ___provider0, method);
}
// System.DateTime System.UInt16::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  UInt16_System_IConvertible_ToDateTime_mF207854A6BCA46F5DC76790B785656EC04559E80 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToDateTime_mF207854A6BCA46F5DC76790B785656EC04559E80_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint16_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t8A398E85B5FC90CA984E604BD3F65BD7B205D592_il2cpp_TypeInfo_var);
		DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  L_1 = Convert_ToDateTime_mA6BF3635C348D9E9650FC650198ACE4DD711C5C6((uint16_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  UInt16_System_IConvertible_ToDateTime_mF207854A6BCA46F5DC76790B785656EC04559E80_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_System_IConvertible_ToDateTime_mF207854A6BCA46F5DC76790B785656EC04559E80(_thisAdjusted, ___provider0, method);
}
// System.Decimal System.UInt16::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3  UInt16_System_IConvertible_ToDecimal_m7B5FB92C0983F673FD43FFEA72A5002C715F8B4C (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToDecimal_m7B5FB92C0983F673FD43FFEA72A5002C715F8B4C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint16_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t8A398E85B5FC90CA984E604BD3F65BD7B205D592_il2cpp_TypeInfo_var);
		Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3  L_1 = Convert_ToDecimal_mA4E45C2F4B296CAE9F6564C9F28AF71EE8DA07A1((uint16_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3  UInt16_System_IConvertible_ToDecimal_m7B5FB92C0983F673FD43FFEA72A5002C715F8B4C_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_System_IConvertible_ToDecimal_m7B5FB92C0983F673FD43FFEA72A5002C715F8B4C(_thisAdjusted, ___provider0, method);
}
// System.Double System.UInt16::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR double UInt16_System_IConvertible_ToDouble_mB16F100CD3D9A3A9A10ECB6575D6BB223DBA424F (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToDouble_mB16F100CD3D9A3A9A10ECB6575D6BB223DBA424F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint16_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t8A398E85B5FC90CA984E604BD3F65BD7B205D592_il2cpp_TypeInfo_var);
		double L_1 = Convert_ToDouble_mBAC2AFECB14355FDD7F4145176D0DC5DE057A31A((uint16_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  double UInt16_System_IConvertible_ToDouble_mB16F100CD3D9A3A9A10ECB6575D6BB223DBA424F_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_System_IConvertible_ToDouble_mB16F100CD3D9A3A9A10ECB6575D6BB223DBA424F(_thisAdjusted, ___provider0, method);
}
// System.Int16 System.UInt16::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR int16_t UInt16_System_IConvertible_ToInt16_m5459C77DCD6ABCB132E7FC253F546DAB7ADC3E11 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToInt16_m5459C77DCD6ABCB132E7FC253F546DAB7ADC3E11_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint16_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t8A398E85B5FC90CA984E604BD3F65BD7B205D592_il2cpp_TypeInfo_var);
		int16_t L_1 = Convert_ToInt16_m2B2D3B06BB071637295D0B8AF54F2C7ED11AAE95((uint16_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  int16_t UInt16_System_IConvertible_ToInt16_m5459C77DCD6ABCB132E7FC253F546DAB7ADC3E11_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_System_IConvertible_ToInt16_m5459C77DCD6ABCB132E7FC253F546DAB7ADC3E11(_thisAdjusted, ___provider0, method);
}
// System.Int32 System.UInt16::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR int32_t UInt16_System_IConvertible_ToInt32_m79765217DDA95FBAE0F5E34900D17C62E440A610 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToInt32_m79765217DDA95FBAE0F5E34900D17C62E440A610_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint16_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t8A398E85B5FC90CA984E604BD3F65BD7B205D592_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m902DD059AAFD6FED541D44587A0D78B9AAA82D27((uint16_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  int32_t UInt16_System_IConvertible_ToInt32_m79765217DDA95FBAE0F5E34900D17C62E440A610_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_System_IConvertible_ToInt32_m79765217DDA95FBAE0F5E34900D17C62E440A610(_thisAdjusted, ___provider0, method);
}
// System.Int64 System.UInt16::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR int64_t UInt16_System_IConvertible_ToInt64_mA2FB4C3314A5C441B83D50CC7A71145CE3AFB2F4 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToInt64_mA2FB4C3314A5C441B83D50CC7A71145CE3AFB2F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint16_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t8A398E85B5FC90CA984E604BD3F65BD7B205D592_il2cpp_TypeInfo_var);
		int64_t L_1 = Convert_ToInt64_m951A9D12AC143451A331842FA9A04AD9CF145168((uint16_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  int64_t UInt16_System_IConvertible_ToInt64_mA2FB4C3314A5C441B83D50CC7A71145CE3AFB2F4_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_System_IConvertible_ToInt64_mA2FB4C3314A5C441B83D50CC7A71145CE3AFB2F4(_thisAdjusted, ___provider0, method);
}
// System.SByte System.UInt16::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR int8_t UInt16_System_IConvertible_ToSByte_mB24AC1F9B3459756F8B09C3246D9BF3F3C42672E (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToSByte_mB24AC1F9B3459756F8B09C3246D9BF3F3C42672E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint16_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t8A398E85B5FC90CA984E604BD3F65BD7B205D592_il2cpp_TypeInfo_var);
		int8_t L_1 = Convert_ToSByte_m4FF5982EBD63F4EB1AD28118955265EA28AD7EB9((uint16_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  int8_t UInt16_System_IConvertible_ToSByte_mB24AC1F9B3459756F8B09C3246D9BF3F3C42672E_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_System_IConvertible_ToSByte_mB24AC1F9B3459756F8B09C3246D9BF3F3C42672E(_thisAdjusted, ___provider0, method);
}
// System.Single System.UInt16::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR float UInt16_System_IConvertible_ToSingle_mBF40EED90D2D740C5D6DE2E33C84A4BA0C0D7A8F (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToSingle_mBF40EED90D2D740C5D6DE2E33C84A4BA0C0D7A8F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint16_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t8A398E85B5FC90CA984E604BD3F65BD7B205D592_il2cpp_TypeInfo_var);
		float L_1 = Convert_ToSingle_m63FC559A8FCF06ABCEE6A5EB2D6F483050F8AFF4((uint16_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  float UInt16_System_IConvertible_ToSingle_mBF40EED90D2D740C5D6DE2E33C84A4BA0C0D7A8F_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_System_IConvertible_ToSingle_mBF40EED90D2D740C5D6DE2E33C84A4BA0C0D7A8F(_thisAdjusted, ___provider0, method);
}
// System.Object System.UInt16::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * UInt16_System_IConvertible_ToType_mB3E1EE50E0098822EF5AC487980C6AEC8E02F076 (uint16_t* __this, Type_t * ___targetType0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToType_mB3E1EE50E0098822EF5AC487980C6AEC8E02F076_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___targetType0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 * L_1 = (ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 *)il2cpp_codegen_object_new(ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mBA1072348F0861F80512F3BB2BE685EDBB02F740(L_1, _stringLiteralFA6B188D3101E2A5E782C1F0AF6FAFCA10C8BA53, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, UInt16_System_IConvertible_ToType_mB3E1EE50E0098822EF5AC487980C6AEC8E02F076_RuntimeMethod_var);
	}

IL_0011:
	{
		int32_t L_2 = *((uint16_t*)__this);
		uint16_t L_3 = ((uint16_t)L_2);
		RuntimeObject * L_4 = Box(UInt16_t1FF1E02102FB09D5656DF30E5299DD359E497E9B_il2cpp_TypeInfo_var, &L_3);
		Type_t * L_5 = ___targetType0;
		RuntimeObject* L_6 = ___provider1;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t8A398E85B5FC90CA984E604BD3F65BD7B205D592_il2cpp_TypeInfo_var);
		RuntimeObject * L_7 = Convert_ToType_m4A551A6FB4E1BAA34CFFBDC0707FC8E333C2EF06(L_4, L_5, L_6, (bool)0, /*hidden argument*/NULL);
		return L_7;
	}
}
extern "C"  RuntimeObject * UInt16_System_IConvertible_ToType_mB3E1EE50E0098822EF5AC487980C6AEC8E02F076_AdjustorThunk (RuntimeObject * __this, Type_t * ___targetType0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_System_IConvertible_ToType_mB3E1EE50E0098822EF5AC487980C6AEC8E02F076(_thisAdjusted, ___targetType0, ___provider1, method);
}
// System.UInt16 System.UInt16::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint16_t UInt16_System_IConvertible_ToUInt16_m9EB464788FC2AF2D5C797052FBBFEC18DC2CA197 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = *((uint16_t*)__this);
		return (uint16_t)L_0;
	}
}
extern "C"  uint16_t UInt16_System_IConvertible_ToUInt16_m9EB464788FC2AF2D5C797052FBBFEC18DC2CA197_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_System_IConvertible_ToUInt16_m9EB464788FC2AF2D5C797052FBBFEC18DC2CA197(_thisAdjusted, ___provider0, method);
}
// System.UInt32 System.UInt16::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint32_t UInt16_System_IConvertible_ToUInt32_mF0A5511967CB960062E947A0398A77AD029B191A (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToUInt32_mF0A5511967CB960062E947A0398A77AD029B191A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint16_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t8A398E85B5FC90CA984E604BD3F65BD7B205D592_il2cpp_TypeInfo_var);
		uint32_t L_1 = Convert_ToUInt32_m0253EF8944A7F4D3CEF547672E24E4D5C4E48932((uint16_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  uint32_t UInt16_System_IConvertible_ToUInt32_mF0A5511967CB960062E947A0398A77AD029B191A_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_System_IConvertible_ToUInt32_mF0A5511967CB960062E947A0398A77AD029B191A(_thisAdjusted, ___provider0, method);
}
// System.UInt64 System.UInt16::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint64_t UInt16_System_IConvertible_ToUInt64_m828957BE3D492585F3A2ACBA69043048FE4F5638 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToUInt64_m828957BE3D492585F3A2ACBA69043048FE4F5638_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint16_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t8A398E85B5FC90CA984E604BD3F65BD7B205D592_il2cpp_TypeInfo_var);
		uint64_t L_1 = Convert_ToUInt64_m28BE17445D3F343D58D96A45035C500A8A40D83C((uint16_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  uint64_t UInt16_System_IConvertible_ToUInt64_m828957BE3D492585F3A2ACBA69043048FE4F5638_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_System_IConvertible_ToUInt64_m828957BE3D492585F3A2ACBA69043048FE4F5638(_thisAdjusted, ___provider0, method);
}
// System.Int32 System.UInt16::CompareTo(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t UInt16_CompareTo_mB1134C5FAC51A6877240AEF00C2397D248FC5540 (uint16_t* __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_CompareTo_mB1134C5FAC51A6877240AEF00C2397D248FC5540_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 1;
	}

IL_0008:
	{
		RuntimeObject * L_1 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, UInt16_t1FF1E02102FB09D5656DF30E5299DD359E497E9B_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		String_t* L_2 = Locale_GetText_m8335AC363D872105D0CE318A9CB1001A15813542(_stringLiteralC4C541592BE3C9025123CCF3AD3D8A3F4B6BA911, /*hidden argument*/NULL);
		ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 * L_3 = (ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 *)il2cpp_codegen_object_new(ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m8917650A5D8F2F36C6B623A720DF2D2A630D3533(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, UInt16_CompareTo_mB1134C5FAC51A6877240AEF00C2397D248FC5540_RuntimeMethod_var);
	}

IL_0023:
	{
		int32_t L_4 = *((uint16_t*)__this);
		RuntimeObject * L_5 = ___value0;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)((*(uint16_t*)((uint16_t*)UnBox(L_5, UInt16_t1FF1E02102FB09D5656DF30E5299DD359E497E9B_il2cpp_TypeInfo_var))))));
	}
}
extern "C"  int32_t UInt16_CompareTo_mB1134C5FAC51A6877240AEF00C2397D248FC5540_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_CompareTo_mB1134C5FAC51A6877240AEF00C2397D248FC5540(_thisAdjusted, ___value0, method);
}
// System.Boolean System.UInt16::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool UInt16_Equals_mDFBF2B24788DFD4F6022AC3B74EAE7F3757A4863 (uint16_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_Equals_mDFBF2B24788DFD4F6022AC3B74EAE7F3757A4863_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, UInt16_t1FF1E02102FB09D5656DF30E5299DD359E497E9B_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject * L_1 = ___obj0;
		int32_t L_2 = *((uint16_t*)__this);
		return (bool)((((int32_t)((*(uint16_t*)((uint16_t*)UnBox(L_1, UInt16_t1FF1E02102FB09D5656DF30E5299DD359E497E9B_il2cpp_TypeInfo_var))))) == ((int32_t)L_2))? 1 : 0);
	}
}
extern "C"  bool UInt16_Equals_mDFBF2B24788DFD4F6022AC3B74EAE7F3757A4863_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_Equals_mDFBF2B24788DFD4F6022AC3B74EAE7F3757A4863(_thisAdjusted, ___obj0, method);
}
// System.Int32 System.UInt16::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t UInt16_GetHashCode_mB906E37435CA3F6FCF2477B56B52E3EF3FA57209 (uint16_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = *((uint16_t*)__this);
		return L_0;
	}
}
extern "C"  int32_t UInt16_GetHashCode_mB906E37435CA3F6FCF2477B56B52E3EF3FA57209_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_GetHashCode_mB906E37435CA3F6FCF2477B56B52E3EF3FA57209(_thisAdjusted, method);
}
// System.Int32 System.UInt16::CompareTo(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR int32_t UInt16_CompareTo_m9FED59F3E5920658CF1E52AD741CC12102BF2B75 (uint16_t* __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = *((uint16_t*)__this);
		uint16_t L_1 = ___value0;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
	}
}
extern "C"  int32_t UInt16_CompareTo_m9FED59F3E5920658CF1E52AD741CC12102BF2B75_AdjustorThunk (RuntimeObject * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_CompareTo_m9FED59F3E5920658CF1E52AD741CC12102BF2B75(_thisAdjusted, ___value0, method);
}
// System.Boolean System.UInt16::Equals(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR bool UInt16_Equals_m164CD407ACF8A9C480B0CECC10F5BD13B432806C (uint16_t* __this, uint16_t ___obj0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___obj0;
		int32_t L_1 = *((uint16_t*)__this);
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
extern "C"  bool UInt16_Equals_m164CD407ACF8A9C480B0CECC10F5BD13B432806C_AdjustorThunk (RuntimeObject * __this, uint16_t ___obj0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_Equals_m164CD407ACF8A9C480B0CECC10F5BD13B432806C(_thisAdjusted, ___obj0, method);
}
// System.UInt16 System.UInt16::Parse(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint16_t UInt16_Parse_mD5B6D900C3173DC55BC17BA7CE675723B2088422 (String_t* ___s0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___s0;
		RuntimeObject* L_1 = ___provider1;
		uint16_t L_2 = UInt16_Parse_mD9333C190983B84A328E9D3ADD994B5544C806D4(L_0, 7, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.UInt16 System.UInt16::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint16_t UInt16_Parse_mD9333C190983B84A328E9D3ADD994B5544C806D4 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_Parse_mD9333C190983B84A328E9D3ADD994B5544C806D4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		String_t* L_0 = ___s0;
		int32_t L_1 = ___style1;
		RuntimeObject* L_2 = ___provider2;
		uint32_t L_3 = UInt32_Parse_mD31A1A0C2FC3CE3EEF4A314678B35B755FD14D57(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		uint32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)65535)))))
		{
			goto IL_0024;
		}
	}
	{
		String_t* L_5 = Locale_GetText_m8335AC363D872105D0CE318A9CB1001A15813542(_stringLiteralB0DC72E0A80389C8724C318DA7FEBB1458B04DDB, /*hidden argument*/NULL);
		OverflowException_t0B5FFF1555598D499585564196861996A44507C5 * L_6 = (OverflowException_t0B5FFF1555598D499585564196861996A44507C5 *)il2cpp_codegen_object_new(OverflowException_t0B5FFF1555598D499585564196861996A44507C5_il2cpp_TypeInfo_var);
		OverflowException__ctor_m9D7E000E685C5BEEDC27E99DBF5A1AA8B739C8B6(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, UInt16_Parse_mD9333C190983B84A328E9D3ADD994B5544C806D4_RuntimeMethod_var);
	}

IL_0024:
	{
		uint32_t L_7 = V_0;
		return (uint16_t)(((int32_t)((uint16_t)L_7)));
	}
}
// System.Boolean System.UInt16::TryParse(System.String,System.UInt16&)
extern "C" IL2CPP_METHOD_ATTR bool UInt16_TryParse_mFC3E36A884070AD7E2E70FBDA014B1DCC5ACB73C (String_t* ___s0, uint16_t* ___result1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___s0;
		uint16_t* L_1 = ___result1;
		bool L_2 = UInt16_TryParse_m1A8CDAF0546FFD2680E42D80DE0033E4249832A4(L_0, 7, (RuntimeObject*)NULL, (uint16_t*)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.UInt16::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.UInt16&)
extern "C" IL2CPP_METHOD_ATTR bool UInt16_TryParse_m1A8CDAF0546FFD2680E42D80DE0033E4249832A4 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, uint16_t* ___result3, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint16_t* L_0 = ___result3;
		*((int16_t*)L_0) = (int16_t)0;
		String_t* L_1 = ___s0;
		int32_t L_2 = ___style1;
		RuntimeObject* L_3 = ___provider2;
		bool L_4 = UInt32_TryParse_mEE31363ED7DC504242A11A33ADE601A1D514D8EB(L_1, L_2, L_3, (uint32_t*)(&V_0), /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		uint32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) > ((uint32_t)((int32_t)65535)))))
		{
			goto IL_0021;
		}
	}
	{
		return (bool)0;
	}

IL_0021:
	{
		uint16_t* L_6 = ___result3;
		uint32_t L_7 = V_0;
		*((int16_t*)L_6) = (int16_t)(((int32_t)((uint16_t)L_7)));
		return (bool)1;
	}
}
// System.String System.UInt16::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* UInt16_ToString_mF4094206BDFACF142662B6A79D2E031B62995915 (uint16_t* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_ToString_mF4094206BDFACF142662B6A79D2E031B62995915_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint16_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t68475AD595A7C11B0615994FBA7B580C52E60824_il2cpp_TypeInfo_var);
		String_t* L_1 = NumberFormatter_NumberToString_m43767088BA3FEA8A2079CD0EF44E45179BAD51DF(L_0, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  String_t* UInt16_ToString_mF4094206BDFACF142662B6A79D2E031B62995915_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_ToString_mF4094206BDFACF142662B6A79D2E031B62995915(_thisAdjusted, method);
}
// System.String System.UInt16::ToString(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* UInt16_ToString_m8B034D44F088A495C32D028465A00DAFD92D30C0 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_ToString_m8B034D44F088A495C32D028465A00DAFD92D30C0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint16_t*)__this);
		RuntimeObject* L_1 = ___provider0;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t68475AD595A7C11B0615994FBA7B580C52E60824_il2cpp_TypeInfo_var);
		String_t* L_2 = NumberFormatter_NumberToString_m43767088BA3FEA8A2079CD0EF44E45179BAD51DF(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
extern "C"  String_t* UInt16_ToString_m8B034D44F088A495C32D028465A00DAFD92D30C0_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_ToString_m8B034D44F088A495C32D028465A00DAFD92D30C0(_thisAdjusted, ___provider0, method);
}
// System.String System.UInt16::ToString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* UInt16_ToString_mE1FF8FB7916FD4924A09436D3E5DB894C37DDA51 (uint16_t* __this, String_t* ___format0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___format0;
		String_t* L_1 = UInt16_ToString_m88AEAB9A3A946F1EFAA5B7EEFD53418BFCC9A291((uint16_t*)__this, L_0, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  String_t* UInt16_ToString_mE1FF8FB7916FD4924A09436D3E5DB894C37DDA51_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_ToString_mE1FF8FB7916FD4924A09436D3E5DB894C37DDA51(_thisAdjusted, ___format0, method);
}
// System.String System.UInt16::ToString(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* UInt16_ToString_m88AEAB9A3A946F1EFAA5B7EEFD53418BFCC9A291 (uint16_t* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_ToString_m88AEAB9A3A946F1EFAA5B7EEFD53418BFCC9A291_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___format0;
		int32_t L_1 = *((uint16_t*)__this);
		RuntimeObject* L_2 = ___provider1;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t68475AD595A7C11B0615994FBA7B580C52E60824_il2cpp_TypeInfo_var);
		String_t* L_3 = NumberFormatter_NumberToString_mFBF2B84F4007828AF1E733B1EB8B68EF69A31D99(L_0, (uint16_t)L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
extern "C"  String_t* UInt16_ToString_m88AEAB9A3A946F1EFAA5B7EEFD53418BFCC9A291_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_ToString_m88AEAB9A3A946F1EFAA5B7EEFD53418BFCC9A291(_thisAdjusted, ___format0, ___provider1, method);
}
// System.TypeCode System.UInt16::GetTypeCode()
extern "C" IL2CPP_METHOD_ATTR int32_t UInt16_GetTypeCode_m5782FCEC3BDACBB6813B14C66A079B8522566A1E (uint16_t* __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(8);
	}
}
extern "C"  int32_t UInt16_GetTypeCode_m5782FCEC3BDACBB6813B14C66A079B8522566A1E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_GetTypeCode_m5782FCEC3BDACBB6813B14C66A079B8522566A1E(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean System.UInt32::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR bool UInt32_System_IConvertible_ToBoolean_mA1E6FEB604A85A0A430CE14402FFA747B1AC89D4 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToBoolean_mA1E6FEB604A85A0A430CE14402FFA747B1AC89D4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint32_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t8A398E85B5FC90CA984E604BD3F65BD7B205D592_il2cpp_TypeInfo_var);
		bool L_1 = Convert_ToBoolean_mC4848645925BFAB42E8ADB7CD1E0A640EAC63DD3(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  bool UInt32_System_IConvertible_ToBoolean_mA1E6FEB604A85A0A430CE14402FFA747B1AC89D4_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToBoolean_mA1E6FEB604A85A0A430CE14402FFA747B1AC89D4(_thisAdjusted, ___provider0, method);
}
// System.Byte System.UInt32::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint8_t UInt32_System_IConvertible_ToByte_mCD6E9C1688DDF9CAEA411FB7034156391BE80BFC (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToByte_mCD6E9C1688DDF9CAEA411FB7034156391BE80BFC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint32_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t8A398E85B5FC90CA984E604BD3F65BD7B205D592_il2cpp_TypeInfo_var);
		uint8_t L_1 = Convert_ToByte_m6A700539EDF8C6B746175BB0A3A0700A2C56EA34(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  uint8_t UInt32_System_IConvertible_ToByte_mCD6E9C1688DDF9CAEA411FB7034156391BE80BFC_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToByte_mCD6E9C1688DDF9CAEA411FB7034156391BE80BFC(_thisAdjusted, ___provider0, method);
}
// System.Char System.UInt32::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar UInt32_System_IConvertible_ToChar_m584DB5ED5BF27ACC5C32718BB2E3980C2ECF2324 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToChar_m584DB5ED5BF27ACC5C32718BB2E3980C2ECF2324_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint32_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t8A398E85B5FC90CA984E604BD3F65BD7B205D592_il2cpp_TypeInfo_var);
		Il2CppChar L_1 = Convert_ToChar_m16E657CF20ACCC5AECCDAFA01D1493B4D29EA87E(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  Il2CppChar UInt32_System_IConvertible_ToChar_m584DB5ED5BF27ACC5C32718BB2E3980C2ECF2324_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToChar_m584DB5ED5BF27ACC5C32718BB2E3980C2ECF2324(_thisAdjusted, ___provider0, method);
}
// System.DateTime System.UInt32::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  UInt32_System_IConvertible_ToDateTime_mFAEDEA01849843F96A56CFF57ACE2DAD99AC1733 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToDateTime_mFAEDEA01849843F96A56CFF57ACE2DAD99AC1733_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint32_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t8A398E85B5FC90CA984E604BD3F65BD7B205D592_il2cpp_TypeInfo_var);
		DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  L_1 = Convert_ToDateTime_m762F56850199420C3684008A311915CBBC9724C2(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  UInt32_System_IConvertible_ToDateTime_mFAEDEA01849843F96A56CFF57ACE2DAD99AC1733_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToDateTime_mFAEDEA01849843F96A56CFF57ACE2DAD99AC1733(_thisAdjusted, ___provider0, method);
}
// System.Decimal System.UInt32::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3  UInt32_System_IConvertible_ToDecimal_m1444D0160E200613C2B1DF50BFEDAB16A526ECEF (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToDecimal_m1444D0160E200613C2B1DF50BFEDAB16A526ECEF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint32_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t8A398E85B5FC90CA984E604BD3F65BD7B205D592_il2cpp_TypeInfo_var);
		Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3  L_1 = Convert_ToDecimal_m69D291CB318C1732670210845F32408FB4748908(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3  UInt32_System_IConvertible_ToDecimal_m1444D0160E200613C2B1DF50BFEDAB16A526ECEF_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToDecimal_m1444D0160E200613C2B1DF50BFEDAB16A526ECEF(_thisAdjusted, ___provider0, method);
}
// System.Double System.UInt32::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR double UInt32_System_IConvertible_ToDouble_m63E2FC6EE49C3F3C4D4B6BF1136C38B057D47F20 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToDouble_m63E2FC6EE49C3F3C4D4B6BF1136C38B057D47F20_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint32_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t8A398E85B5FC90CA984E604BD3F65BD7B205D592_il2cpp_TypeInfo_var);
		double L_1 = Convert_ToDouble_m58F0532471008327A2CA91A90151BCF51D9F776B(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  double UInt32_System_IConvertible_ToDouble_m63E2FC6EE49C3F3C4D4B6BF1136C38B057D47F20_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToDouble_m63E2FC6EE49C3F3C4D4B6BF1136C38B057D47F20(_thisAdjusted, ___provider0, method);
}
// System.Int16 System.UInt32::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR int16_t UInt32_System_IConvertible_ToInt16_m8B63C4C4AC2243C6ABB2D54F2266F30D5C94BF7C (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToInt16_m8B63C4C4AC2243C6ABB2D54F2266F30D5C94BF7C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint32_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t8A398E85B5FC90CA984E604BD3F65BD7B205D592_il2cpp_TypeInfo_var);
		int16_t L_1 = Convert_ToInt16_mB8DD878C1DE443BD40ED8BCD04D4FABCD692E7DF(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  int16_t UInt32_System_IConvertible_ToInt16_m8B63C4C4AC2243C6ABB2D54F2266F30D5C94BF7C_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToInt16_m8B63C4C4AC2243C6ABB2D54F2266F30D5C94BF7C(_thisAdjusted, ___provider0, method);
}
// System.Int32 System.UInt32::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR int32_t UInt32_System_IConvertible_ToInt32_m029088A2A10D3CFAF9AF89167D3D50EBE151855E (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToInt32_m029088A2A10D3CFAF9AF89167D3D50EBE151855E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint32_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t8A398E85B5FC90CA984E604BD3F65BD7B205D592_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_mA62AC6DC29B793255F88F26E2AC50EB2F16FF447(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  int32_t UInt32_System_IConvertible_ToInt32_m029088A2A10D3CFAF9AF89167D3D50EBE151855E_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToInt32_m029088A2A10D3CFAF9AF89167D3D50EBE151855E(_thisAdjusted, ___provider0, method);
}
// System.Int64 System.UInt32::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR int64_t UInt32_System_IConvertible_ToInt64_mB82C26F063D0A90E448001DFFE1A26B627B8A550 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToInt64_mB82C26F063D0A90E448001DFFE1A26B627B8A550_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint32_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t8A398E85B5FC90CA984E604BD3F65BD7B205D592_il2cpp_TypeInfo_var);
		int64_t L_1 = Convert_ToInt64_m92A013EA5C4B7C79BC6E4358C4BD3499B6C435BA(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  int64_t UInt32_System_IConvertible_ToInt64_mB82C26F063D0A90E448001DFFE1A26B627B8A550_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToInt64_mB82C26F063D0A90E448001DFFE1A26B627B8A550(_thisAdjusted, ___provider0, method);
}
// System.SByte System.UInt32::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR int8_t UInt32_System_IConvertible_ToSByte_m66107791231D91FB1E1160AE303C83C494BFB577 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToSByte_m66107791231D91FB1E1160AE303C83C494BFB577_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint32_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t8A398E85B5FC90CA984E604BD3F65BD7B205D592_il2cpp_TypeInfo_var);
		int8_t L_1 = Convert_ToSByte_m6A38FDADDF638B2E52813B5801649E2302AB4CA2(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  int8_t UInt32_System_IConvertible_ToSByte_m66107791231D91FB1E1160AE303C83C494BFB577_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToSByte_m66107791231D91FB1E1160AE303C83C494BFB577(_thisAdjusted, ___provider0, method);
}
// System.Single System.UInt32::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR float UInt32_System_IConvertible_ToSingle_m9607A0F1FABF531D905791E3DDE6BA8B81528E04 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToSingle_m9607A0F1FABF531D905791E3DDE6BA8B81528E04_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint32_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t8A398E85B5FC90CA984E604BD3F65BD7B205D592_il2cpp_TypeInfo_var);
		float L_1 = Convert_ToSingle_mF12D7ACCA994E2D4523D3F5618627CA81E402167(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  float UInt32_System_IConvertible_ToSingle_m9607A0F1FABF531D905791E3DDE6BA8B81528E04_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToSingle_m9607A0F1FABF531D905791E3DDE6BA8B81528E04(_thisAdjusted, ___provider0, method);
}
// System.Object System.UInt32::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * UInt32_System_IConvertible_ToType_mDEDE33396ACAE1EDF736983473F296EDE7C24FA7 (uint32_t* __this, Type_t * ___targetType0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToType_mDEDE33396ACAE1EDF736983473F296EDE7C24FA7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___targetType0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 * L_1 = (ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 *)il2cpp_codegen_object_new(ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mBA1072348F0861F80512F3BB2BE685EDBB02F740(L_1, _stringLiteralFA6B188D3101E2A5E782C1F0AF6FAFCA10C8BA53, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, UInt32_System_IConvertible_ToType_mDEDE33396ACAE1EDF736983473F296EDE7C24FA7_RuntimeMethod_var);
	}

IL_0011:
	{
		int32_t L_2 = *((uint32_t*)__this);
		uint32_t L_3 = ((uint32_t)L_2);
		RuntimeObject * L_4 = Box(UInt32_t69F92C53356907895162C7F31D87C59F9141D3B8_il2cpp_TypeInfo_var, &L_3);
		Type_t * L_5 = ___targetType0;
		RuntimeObject* L_6 = ___provider1;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t8A398E85B5FC90CA984E604BD3F65BD7B205D592_il2cpp_TypeInfo_var);
		RuntimeObject * L_7 = Convert_ToType_m4A551A6FB4E1BAA34CFFBDC0707FC8E333C2EF06(L_4, L_5, L_6, (bool)0, /*hidden argument*/NULL);
		return L_7;
	}
}
extern "C"  RuntimeObject * UInt32_System_IConvertible_ToType_mDEDE33396ACAE1EDF736983473F296EDE7C24FA7_AdjustorThunk (RuntimeObject * __this, Type_t * ___targetType0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToType_mDEDE33396ACAE1EDF736983473F296EDE7C24FA7(_thisAdjusted, ___targetType0, ___provider1, method);
}
// System.UInt16 System.UInt32::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint16_t UInt32_System_IConvertible_ToUInt16_mB8DB68EB7CBDB2CD886DD832585F4777A8D21C5A (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToUInt16_mB8DB68EB7CBDB2CD886DD832585F4777A8D21C5A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint32_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t8A398E85B5FC90CA984E604BD3F65BD7B205D592_il2cpp_TypeInfo_var);
		uint16_t L_1 = Convert_ToUInt16_m6CE6F3E60BF42A7D9C9F572BA50D09A803DDC2A9(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  uint16_t UInt32_System_IConvertible_ToUInt16_mB8DB68EB7CBDB2CD886DD832585F4777A8D21C5A_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToUInt16_mB8DB68EB7CBDB2CD886DD832585F4777A8D21C5A(_thisAdjusted, ___provider0, method);
}
// System.UInt32 System.UInt32::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint32_t UInt32_System_IConvertible_ToUInt32_m47BB137DE8A2DAA08D2F49AA257C09C7E3C04C69 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = *((uint32_t*)__this);
		return L_0;
	}
}
extern "C"  uint32_t UInt32_System_IConvertible_ToUInt32_m47BB137DE8A2DAA08D2F49AA257C09C7E3C04C69_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToUInt32_m47BB137DE8A2DAA08D2F49AA257C09C7E3C04C69(_thisAdjusted, ___provider0, method);
}
// System.UInt64 System.UInt32::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint64_t UInt32_System_IConvertible_ToUInt64_mDEEBA8BA19D5C5C303B933CA4920C74105CC294C (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToUInt64_mDEEBA8BA19D5C5C303B933CA4920C74105CC294C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint32_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t8A398E85B5FC90CA984E604BD3F65BD7B205D592_il2cpp_TypeInfo_var);
		uint64_t L_1 = Convert_ToUInt64_m5207EBA6654CB91C53FE7E001C0900643DB3E0D4(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  uint64_t UInt32_System_IConvertible_ToUInt64_mDEEBA8BA19D5C5C303B933CA4920C74105CC294C_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToUInt64_mDEEBA8BA19D5C5C303B933CA4920C74105CC294C(_thisAdjusted, ___provider0, method);
}
// System.Int32 System.UInt32::CompareTo(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t UInt32_CompareTo_mD59CF1B0FEA7E0B7CDC3B7F1C68A8A17F057CE1B (uint32_t* __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_CompareTo_mD59CF1B0FEA7E0B7CDC3B7F1C68A8A17F057CE1B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t G_B9_0 = 0;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 1;
	}

IL_0008:
	{
		RuntimeObject * L_1 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, UInt32_t69F92C53356907895162C7F31D87C59F9141D3B8_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		String_t* L_2 = Locale_GetText_m8335AC363D872105D0CE318A9CB1001A15813542(_stringLiteral2900AF5F21E636D880DEEAE568B5B16DC2248236, /*hidden argument*/NULL);
		ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 * L_3 = (ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 *)il2cpp_codegen_object_new(ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m8917650A5D8F2F36C6B623A720DF2D2A630D3533(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, UInt32_CompareTo_mD59CF1B0FEA7E0B7CDC3B7F1C68A8A17F057CE1B_RuntimeMethod_var);
	}

IL_0023:
	{
		RuntimeObject * L_4 = ___value0;
		V_0 = ((*(uint32_t*)((uint32_t*)UnBox(L_4, UInt32_t69F92C53356907895162C7F31D87C59F9141D3B8_il2cpp_TypeInfo_var))));
		int32_t L_5 = *((uint32_t*)__this);
		uint32_t L_6 = V_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_0034;
		}
	}
	{
		return 0;
	}

IL_0034:
	{
		int32_t L_7 = *((uint32_t*)__this);
		uint32_t L_8 = V_0;
		if ((!(((uint32_t)L_7) < ((uint32_t)L_8))))
		{
			goto IL_0042;
		}
	}
	{
		G_B9_0 = (-1);
		goto IL_0043;
	}

IL_0042:
	{
		G_B9_0 = 1;
	}

IL_0043:
	{
		return G_B9_0;
	}
}
extern "C"  int32_t UInt32_CompareTo_mD59CF1B0FEA7E0B7CDC3B7F1C68A8A17F057CE1B_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_CompareTo_mD59CF1B0FEA7E0B7CDC3B7F1C68A8A17F057CE1B(_thisAdjusted, ___value0, method);
}
// System.Boolean System.UInt32::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool UInt32_Equals_m32B5BCC2ACE3D7E62E1533444EBE3B77EB9F6E3C (uint32_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_Equals_m32B5BCC2ACE3D7E62E1533444EBE3B77EB9F6E3C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, UInt32_t69F92C53356907895162C7F31D87C59F9141D3B8_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject * L_1 = ___obj0;
		int32_t L_2 = *((uint32_t*)__this);
		return (bool)((((int32_t)((*(uint32_t*)((uint32_t*)UnBox(L_1, UInt32_t69F92C53356907895162C7F31D87C59F9141D3B8_il2cpp_TypeInfo_var))))) == ((int32_t)L_2))? 1 : 0);
	}
}
extern "C"  bool UInt32_Equals_m32B5BCC2ACE3D7E62E1533444EBE3B77EB9F6E3C_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_Equals_m32B5BCC2ACE3D7E62E1533444EBE3B77EB9F6E3C(_thisAdjusted, ___obj0, method);
}
// System.Int32 System.UInt32::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t UInt32_GetHashCode_mEF3DCFC800A1BBF2DA038B6244341AEC052106B6 (uint32_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = *((uint32_t*)__this);
		return L_0;
	}
}
extern "C"  int32_t UInt32_GetHashCode_mEF3DCFC800A1BBF2DA038B6244341AEC052106B6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_GetHashCode_mEF3DCFC800A1BBF2DA038B6244341AEC052106B6(_thisAdjusted, method);
}
// System.Int32 System.UInt32::CompareTo(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR int32_t UInt32_CompareTo_m4508896FC272C4275FEF1EAE838E809B079BA5F1 (uint32_t* __this, uint32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = *((uint32_t*)__this);
		uint32_t L_1 = ___value0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		int32_t L_2 = *((uint32_t*)__this);
		uint32_t L_3 = ___value0;
		if ((!(((uint32_t)L_2) > ((uint32_t)L_3))))
		{
			goto IL_0014;
		}
	}
	{
		return 1;
	}

IL_0014:
	{
		return (-1);
	}
}
extern "C"  int32_t UInt32_CompareTo_m4508896FC272C4275FEF1EAE838E809B079BA5F1_AdjustorThunk (RuntimeObject * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_CompareTo_m4508896FC272C4275FEF1EAE838E809B079BA5F1(_thisAdjusted, ___value0, method);
}
// System.Boolean System.UInt32::Equals(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR bool UInt32_Equals_m1846AC48E54FCCD3CCD0B975AA817770900C5836 (uint32_t* __this, uint32_t ___obj0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___obj0;
		int32_t L_1 = *((uint32_t*)__this);
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
extern "C"  bool UInt32_Equals_m1846AC48E54FCCD3CCD0B975AA817770900C5836_AdjustorThunk (RuntimeObject * __this, uint32_t ___obj0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_Equals_m1846AC48E54FCCD3CCD0B975AA817770900C5836(_thisAdjusted, ___obj0, method);
}
// System.Boolean System.UInt32::Parse(System.String,System.Boolean,System.UInt32&,System.Exception&)
extern "C" IL2CPP_METHOD_ATTR bool UInt32_Parse_mF445201DDD2567AFFDDB0C77E3CF36AAF86AB015 (String_t* ___s0, bool ___tryParse1, uint32_t* ___result2, Exception_t ** ___exc3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_Parse_mF445201DDD2567AFFDDB0C77E3CF36AAF86AB015_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	Il2CppChar V_5 = 0x0;
	uint32_t V_6 = 0;
	{
		V_0 = 0;
		V_3 = (bool)0;
		V_4 = (bool)0;
		uint32_t* L_0 = ___result2;
		*((int32_t*)L_0) = (int32_t)0;
		Exception_t ** L_1 = ___exc3;
		*((RuntimeObject **)L_1) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_1, (RuntimeObject *)NULL);
		String_t* L_2 = ___s0;
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		bool L_3 = ___tryParse1;
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		Exception_t ** L_4 = ___exc3;
		ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 * L_5 = (ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 *)il2cpp_codegen_object_new(ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mBA1072348F0861F80512F3BB2BE685EDBB02F740(L_5, _stringLiteralA0F1490A20D0211C997B44BC357E1972DEAB8AE3, /*hidden argument*/NULL);
		*((RuntimeObject **)L_4) = (RuntimeObject *)L_5;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_4, (RuntimeObject *)L_5);
	}

IL_0025:
	{
		return (bool)0;
	}

IL_0027:
	{
		String_t* L_6 = ___s0;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0053;
	}

IL_0035:
	{
		String_t* L_8 = ___s0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		Il2CppChar L_10 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_8, L_9, /*hidden argument*/NULL);
		V_5 = L_10;
		Il2CppChar L_11 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_il2cpp_TypeInfo_var);
		bool L_12 = Char_IsWhiteSpace_m116E8CE7814316C487761A202A4D5976F824F90E(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_004f;
		}
	}
	{
		goto IL_005a;
	}

IL_004f:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0053:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_1;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0035;
		}
	}

IL_005a:
	{
		int32_t L_16 = V_2;
		int32_t L_17 = V_1;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0070;
		}
	}
	{
		bool L_18 = ___tryParse1;
		if (L_18)
		{
			goto IL_006e;
		}
	}
	{
		Exception_t ** L_19 = ___exc3;
		Exception_t * L_20 = Int32_GetFormatException_m6C226C76C95604F328CCDBA8A4C2916FCCA951F7(/*hidden argument*/NULL);
		*((RuntimeObject **)L_19) = (RuntimeObject *)L_20;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_19, (RuntimeObject *)L_20);
	}

IL_006e:
	{
		return (bool)0;
	}

IL_0070:
	{
		String_t* L_21 = ___s0;
		int32_t L_22 = V_2;
		NullCheck(L_21);
		Il2CppChar L_23 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_21, L_22, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)43)))))
		{
			goto IL_0087;
		}
	}
	{
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
		goto IL_009c;
	}

IL_0087:
	{
		String_t* L_25 = ___s0;
		int32_t L_26 = V_2;
		NullCheck(L_25);
		Il2CppChar L_27 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_25, L_26, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_27) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_009c;
		}
	}
	{
		int32_t L_28 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
		V_4 = (bool)1;
	}

IL_009c:
	{
		goto IL_011d;
	}

IL_00a1:
	{
		String_t* L_29 = ___s0;
		int32_t L_30 = V_2;
		NullCheck(L_29);
		Il2CppChar L_31 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_29, L_30, /*hidden argument*/NULL);
		V_5 = L_31;
		Il2CppChar L_32 = V_5;
		if ((((int32_t)L_32) < ((int32_t)((int32_t)48))))
		{
			goto IL_0109;
		}
	}
	{
		Il2CppChar L_33 = V_5;
		if ((((int32_t)L_33) > ((int32_t)((int32_t)57))))
		{
			goto IL_0109;
		}
	}
	{
		Il2CppChar L_34 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_34, (int32_t)((int32_t)48)));
		uint32_t L_35 = V_0;
		if ((!(((uint32_t)L_35) <= ((uint32_t)((int32_t)429496729)))))
		{
			goto IL_00e1;
		}
	}
	{
		uint32_t L_36 = V_0;
		if ((!(((uint32_t)L_36) == ((uint32_t)((int32_t)429496729)))))
		{
			goto IL_00fa;
		}
	}
	{
		uint32_t L_37 = V_6;
		if ((!(((uint32_t)L_37) > ((uint32_t)5))))
		{
			goto IL_00fa;
		}
	}

IL_00e1:
	{
		bool L_38 = ___tryParse1;
		if (L_38)
		{
			goto IL_00f8;
		}
	}
	{
		Exception_t ** L_39 = ___exc3;
		String_t* L_40 = Locale_GetText_m8335AC363D872105D0CE318A9CB1001A15813542(_stringLiteralF9F9F7EE8DE6F7A183A41BFE06D637532489808F, /*hidden argument*/NULL);
		OverflowException_t0B5FFF1555598D499585564196861996A44507C5 * L_41 = (OverflowException_t0B5FFF1555598D499585564196861996A44507C5 *)il2cpp_codegen_object_new(OverflowException_t0B5FFF1555598D499585564196861996A44507C5_il2cpp_TypeInfo_var);
		OverflowException__ctor_m9D7E000E685C5BEEDC27E99DBF5A1AA8B739C8B6(L_41, L_40, /*hidden argument*/NULL);
		*((RuntimeObject **)L_39) = (RuntimeObject *)L_41;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_39, (RuntimeObject *)L_41);
	}

IL_00f8:
	{
		return (bool)0;
	}

IL_00fa:
	{
		uint32_t L_42 = V_0;
		uint32_t L_43 = V_6;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_42, (int32_t)((int32_t)10))), (int32_t)L_43));
		V_3 = (bool)1;
		goto IL_0119;
	}

IL_0109:
	{
		bool L_44 = ___tryParse1;
		String_t* L_45 = ___s0;
		int32_t L_46 = V_2;
		Exception_t ** L_47 = ___exc3;
		bool L_48 = Int32_ProcessTrailingWhitespace_m62BF96075DAC613E9FACD08DF7D9F443417E59C3(L_44, L_45, L_46, (Exception_t **)L_47, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0119;
		}
	}
	{
		return (bool)0;
	}

IL_0119:
	{
		int32_t L_49 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
	}

IL_011d:
	{
		int32_t L_50 = V_2;
		int32_t L_51 = V_1;
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_00a1;
		}
	}
	{
		bool L_52 = V_3;
		if (L_52)
		{
			goto IL_0139;
		}
	}
	{
		bool L_53 = ___tryParse1;
		if (L_53)
		{
			goto IL_0137;
		}
	}
	{
		Exception_t ** L_54 = ___exc3;
		Exception_t * L_55 = Int32_GetFormatException_m6C226C76C95604F328CCDBA8A4C2916FCCA951F7(/*hidden argument*/NULL);
		*((RuntimeObject **)L_54) = (RuntimeObject *)L_55;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_54, (RuntimeObject *)L_55);
	}

IL_0137:
	{
		return (bool)0;
	}

IL_0139:
	{
		bool L_56 = V_4;
		if (!L_56)
		{
			goto IL_0160;
		}
	}
	{
		uint32_t L_57 = V_0;
		if ((!(((uint32_t)L_57) > ((uint32_t)0))))
		{
			goto IL_0160;
		}
	}
	{
		bool L_58 = ___tryParse1;
		if (L_58)
		{
			goto IL_015e;
		}
	}
	{
		Exception_t ** L_59 = ___exc3;
		String_t* L_60 = Locale_GetText_m8335AC363D872105D0CE318A9CB1001A15813542(_stringLiteral5371656E62DB527D005E1031DDDEABE47B69C2B7, /*hidden argument*/NULL);
		OverflowException_t0B5FFF1555598D499585564196861996A44507C5 * L_61 = (OverflowException_t0B5FFF1555598D499585564196861996A44507C5 *)il2cpp_codegen_object_new(OverflowException_t0B5FFF1555598D499585564196861996A44507C5_il2cpp_TypeInfo_var);
		OverflowException__ctor_m9D7E000E685C5BEEDC27E99DBF5A1AA8B739C8B6(L_61, L_60, /*hidden argument*/NULL);
		*((RuntimeObject **)L_59) = (RuntimeObject *)L_61;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_59, (RuntimeObject *)L_61);
	}

IL_015e:
	{
		return (bool)0;
	}

IL_0160:
	{
		uint32_t* L_62 = ___result2;
		uint32_t L_63 = V_0;
		*((int32_t*)L_62) = (int32_t)L_63;
		return (bool)1;
	}
}
// System.Boolean System.UInt32::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Boolean,System.UInt32&,System.Exception&)
extern "C" IL2CPP_METHOD_ATTR bool UInt32_Parse_m898CD1C491A8D92808B1F11FA2B51D2C7CA2C4DC (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, bool ___tryParse3, uint32_t* ___result4, Exception_t ** ___exc5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_Parse_m898CD1C491A8D92808B1F11FA2B51D2C7CA2C4DC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * V_0 = NULL;
	Type_t * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	uint32_t V_16 = 0;
	int32_t V_17 = 0;
	bool V_18 = false;
	uint32_t V_19 = 0;
	Il2CppChar V_20 = 0x0;
	uint64_t V_21 = 0;
	bool V_22 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		uint32_t* L_0 = ___result4;
		*((int32_t*)L_0) = (int32_t)0;
		Exception_t ** L_1 = ___exc5;
		*((RuntimeObject **)L_1) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_1, (RuntimeObject *)NULL);
		String_t* L_2 = ___s0;
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		bool L_3 = ___tryParse3;
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		Exception_t ** L_4 = ___exc5;
		ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 * L_5 = (ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 *)il2cpp_codegen_object_new(ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mBA1072348F0861F80512F3BB2BE685EDBB02F740(L_5, _stringLiteralA0F1490A20D0211C997B44BC357E1972DEAB8AE3, /*hidden argument*/NULL);
		*((RuntimeObject **)L_4) = (RuntimeObject *)L_5;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_4, (RuntimeObject *)L_5);
	}

IL_0021:
	{
		return (bool)0;
	}

IL_0023:
	{
		String_t* L_6 = ___s0;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_003e;
		}
	}
	{
		bool L_8 = ___tryParse3;
		if (L_8)
		{
			goto IL_003c;
		}
	}
	{
		Exception_t ** L_9 = ___exc5;
		Exception_t * L_10 = Int32_GetFormatException_m6C226C76C95604F328CCDBA8A4C2916FCCA951F7(/*hidden argument*/NULL);
		*((RuntimeObject **)L_9) = (RuntimeObject *)L_10;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_9, (RuntimeObject *)L_10);
	}

IL_003c:
	{
		return (bool)0;
	}

IL_003e:
	{
		V_0 = (NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 *)NULL;
		RuntimeObject* L_11 = ___provider2;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  L_12 = { reinterpret_cast<intptr_t> (NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_13 = Type_GetTypeFromHandle_m8326E3405B647C99882C2E411C459944B0598D73(L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		RuntimeObject* L_14 = ___provider2;
		Type_t * L_15 = V_1;
		NullCheck(L_14);
		RuntimeObject * L_16 = InterfaceFuncInvoker1< RuntimeObject *, Type_t * >::Invoke(0 /* System.Object System.IFormatProvider::GetFormat(System.Type) */, IFormatProvider_t3BAF59CC620257B8C99F911BC233EF7CC5480D67_il2cpp_TypeInfo_var, L_14, L_15);
		V_0 = ((NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 *)CastclassSealed((RuntimeObject*)L_16, NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4_il2cpp_TypeInfo_var));
	}

IL_005e:
	{
		NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * L_17 = V_0;
		if (L_17)
		{
			goto IL_0074;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t83C301EC970792455F76D89E58140949B003EA50_il2cpp_TypeInfo_var);
		Thread_t83C301EC970792455F76D89E58140949B003EA50 * L_18 = Thread_get_CurrentThread_mDD6961DC5A1042DC7A428A1F2B8F1ACEBE393663(/*hidden argument*/NULL);
		NullCheck(L_18);
		CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * L_19 = Thread_get_CurrentCulture_mC65176027DF0D9C8E9FF36E2D8E0A19B32605A8F(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * L_20 = VirtFuncInvoker0< NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * >::Invoke(13 /* System.Globalization.NumberFormatInfo System.Globalization.CultureInfo::get_NumberFormat() */, L_19);
		V_0 = L_20;
	}

IL_0074:
	{
		int32_t L_21 = ___style1;
		bool L_22 = ___tryParse3;
		Exception_t ** L_23 = ___exc5;
		bool L_24 = Int32_CheckStyle_m75F34EB0D25C3E351DAE95987D27455587AEF5BF(L_21, L_22, (Exception_t **)L_23, /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_0084;
		}
	}
	{
		return (bool)0;
	}

IL_0084:
	{
		int32_t L_25 = ___style1;
		V_2 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_25&(int32_t)((int32_t)256)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_26 = ___style1;
		V_3 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_26&(int32_t)((int32_t)512)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_27 = ___style1;
		V_4 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_27&(int32_t)((int32_t)64)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_28 = ___style1;
		V_5 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_28&(int32_t)((int32_t)32)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_29 = ___style1;
		V_6 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_29&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_30 = ___style1;
		V_7 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_30&(int32_t)8))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_31 = ___style1;
		V_8 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_31&(int32_t)4))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_32 = ___style1;
		V_9 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_32&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_33 = ___style1;
		V_10 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_33&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		V_11 = 0;
		bool L_34 = V_10;
		if (!L_34)
		{
			goto IL_010d;
		}
	}
	{
		String_t* L_35 = ___s0;
		bool L_36 = ___tryParse3;
		Exception_t ** L_37 = ___exc5;
		bool L_38 = Int32_JumpOverWhite_mB23EDD8BBCD11B42ABB32EFD72C90099B84B59AA((int32_t*)(&V_11), L_35, (bool)1, L_36, (Exception_t **)L_37, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_010d;
		}
	}
	{
		return (bool)0;
	}

IL_010d:
	{
		V_12 = (bool)0;
		V_13 = (bool)0;
		V_14 = (bool)0;
		V_15 = (bool)0;
		bool L_39 = V_6;
		if (!L_39)
		{
			goto IL_01be;
		}
	}
	{
		String_t* L_40 = ___s0;
		int32_t L_41 = V_11;
		NullCheck(L_40);
		Il2CppChar L_42 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_40, L_41, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_42) == ((uint32_t)((int32_t)40)))))
		{
			goto IL_01be;
		}
	}
	{
		V_12 = (bool)1;
		V_14 = (bool)1;
		V_13 = (bool)1;
		int32_t L_43 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
		bool L_44 = V_10;
		if (!L_44)
		{
			goto IL_0158;
		}
	}
	{
		String_t* L_45 = ___s0;
		bool L_46 = ___tryParse3;
		Exception_t ** L_47 = ___exc5;
		bool L_48 = Int32_JumpOverWhite_mB23EDD8BBCD11B42ABB32EFD72C90099B84B59AA((int32_t*)(&V_11), L_45, (bool)1, L_46, (Exception_t **)L_47, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0158;
		}
	}
	{
		return (bool)0;
	}

IL_0158:
	{
		String_t* L_49 = ___s0;
		int32_t L_50 = V_11;
		NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * L_51 = V_0;
		NullCheck(L_51);
		String_t* L_52 = NumberFormatInfo_get_NegativeSign_m7B9CDBB9B7B94E438EE315A97EDA4C0B55C8B249(L_51, /*hidden argument*/NULL);
		NullCheck(L_52);
		int32_t L_53 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_52, /*hidden argument*/NULL);
		NullCheck(L_49);
		String_t* L_54 = String_Substring_m10F7B491B6627E6C5A2725C466DB3F3E7414BC0B(L_49, L_50, L_53, /*hidden argument*/NULL);
		NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * L_55 = V_0;
		NullCheck(L_55);
		String_t* L_56 = NumberFormatInfo_get_NegativeSign_m7B9CDBB9B7B94E438EE315A97EDA4C0B55C8B249(L_55, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_57 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_54, L_56, /*hidden argument*/NULL);
		if (!L_57)
		{
			goto IL_018b;
		}
	}
	{
		bool L_58 = ___tryParse3;
		if (L_58)
		{
			goto IL_0189;
		}
	}
	{
		Exception_t ** L_59 = ___exc5;
		Exception_t * L_60 = Int32_GetFormatException_m6C226C76C95604F328CCDBA8A4C2916FCCA951F7(/*hidden argument*/NULL);
		*((RuntimeObject **)L_59) = (RuntimeObject *)L_60;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_59, (RuntimeObject *)L_60);
	}

IL_0189:
	{
		return (bool)0;
	}

IL_018b:
	{
		String_t* L_61 = ___s0;
		int32_t L_62 = V_11;
		NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * L_63 = V_0;
		NullCheck(L_63);
		String_t* L_64 = NumberFormatInfo_get_PositiveSign_m8432C7F56533C5294FC5919CB316DF1161E5B815(L_63, /*hidden argument*/NULL);
		NullCheck(L_64);
		int32_t L_65 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_64, /*hidden argument*/NULL);
		NullCheck(L_61);
		String_t* L_66 = String_Substring_m10F7B491B6627E6C5A2725C466DB3F3E7414BC0B(L_61, L_62, L_65, /*hidden argument*/NULL);
		NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * L_67 = V_0;
		NullCheck(L_67);
		String_t* L_68 = NumberFormatInfo_get_PositiveSign_m8432C7F56533C5294FC5919CB316DF1161E5B815(L_67, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_69 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_66, L_68, /*hidden argument*/NULL);
		if (!L_69)
		{
			goto IL_01be;
		}
	}
	{
		bool L_70 = ___tryParse3;
		if (L_70)
		{
			goto IL_01bc;
		}
	}
	{
		Exception_t ** L_71 = ___exc5;
		Exception_t * L_72 = Int32_GetFormatException_m6C226C76C95604F328CCDBA8A4C2916FCCA951F7(/*hidden argument*/NULL);
		*((RuntimeObject **)L_71) = (RuntimeObject *)L_72;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_71, (RuntimeObject *)L_72);
	}

IL_01bc:
	{
		return (bool)0;
	}

IL_01be:
	{
		bool L_73 = V_8;
		if (!L_73)
		{
			goto IL_022c;
		}
	}
	{
		bool L_74 = V_14;
		if (L_74)
		{
			goto IL_022c;
		}
	}
	{
		String_t* L_75 = ___s0;
		NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * L_76 = V_0;
		Int32_FindSign_mA4B3C6B30D047EF6B3B1D365C65F5CEFFD8B2FF1((int32_t*)(&V_11), L_75, L_76, (bool*)(&V_14), (bool*)(&V_13), /*hidden argument*/NULL);
		bool L_77 = V_14;
		if (!L_77)
		{
			goto IL_022c;
		}
	}
	{
		bool L_78 = V_10;
		if (!L_78)
		{
			goto IL_01fa;
		}
	}
	{
		String_t* L_79 = ___s0;
		bool L_80 = ___tryParse3;
		Exception_t ** L_81 = ___exc5;
		bool L_82 = Int32_JumpOverWhite_mB23EDD8BBCD11B42ABB32EFD72C90099B84B59AA((int32_t*)(&V_11), L_79, (bool)1, L_80, (Exception_t **)L_81, /*hidden argument*/NULL);
		if (L_82)
		{
			goto IL_01fa;
		}
	}
	{
		return (bool)0;
	}

IL_01fa:
	{
		bool L_83 = V_2;
		if (!L_83)
		{
			goto IL_022c;
		}
	}
	{
		String_t* L_84 = ___s0;
		NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * L_85 = V_0;
		Int32_FindCurrency_m9EA01794AEA18D803880375B21DDC000CAFAF328((int32_t*)(&V_11), L_84, L_85, (bool*)(&V_15), /*hidden argument*/NULL);
		bool L_86 = V_15;
		if (!L_86)
		{
			goto IL_022c;
		}
	}
	{
		bool L_87 = V_10;
		if (!L_87)
		{
			goto IL_022c;
		}
	}
	{
		String_t* L_88 = ___s0;
		bool L_89 = ___tryParse3;
		Exception_t ** L_90 = ___exc5;
		bool L_91 = Int32_JumpOverWhite_mB23EDD8BBCD11B42ABB32EFD72C90099B84B59AA((int32_t*)(&V_11), L_88, (bool)1, L_89, (Exception_t **)L_90, /*hidden argument*/NULL);
		if (L_91)
		{
			goto IL_022c;
		}
	}
	{
		return (bool)0;
	}

IL_022c:
	{
		bool L_92 = V_2;
		if (!L_92)
		{
			goto IL_02a8;
		}
	}
	{
		bool L_93 = V_15;
		if (L_93)
		{
			goto IL_02a8;
		}
	}
	{
		String_t* L_94 = ___s0;
		NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * L_95 = V_0;
		Int32_FindCurrency_m9EA01794AEA18D803880375B21DDC000CAFAF328((int32_t*)(&V_11), L_94, L_95, (bool*)(&V_15), /*hidden argument*/NULL);
		bool L_96 = V_15;
		if (!L_96)
		{
			goto IL_02a8;
		}
	}
	{
		bool L_97 = V_10;
		if (!L_97)
		{
			goto IL_0265;
		}
	}
	{
		String_t* L_98 = ___s0;
		bool L_99 = ___tryParse3;
		Exception_t ** L_100 = ___exc5;
		bool L_101 = Int32_JumpOverWhite_mB23EDD8BBCD11B42ABB32EFD72C90099B84B59AA((int32_t*)(&V_11), L_98, (bool)1, L_99, (Exception_t **)L_100, /*hidden argument*/NULL);
		if (L_101)
		{
			goto IL_0265;
		}
	}
	{
		return (bool)0;
	}

IL_0265:
	{
		bool L_102 = V_15;
		if (!L_102)
		{
			goto IL_02a8;
		}
	}
	{
		bool L_103 = V_14;
		if (L_103)
		{
			goto IL_02a8;
		}
	}
	{
		bool L_104 = V_8;
		if (!L_104)
		{
			goto IL_02a8;
		}
	}
	{
		String_t* L_105 = ___s0;
		NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * L_106 = V_0;
		Int32_FindSign_mA4B3C6B30D047EF6B3B1D365C65F5CEFFD8B2FF1((int32_t*)(&V_11), L_105, L_106, (bool*)(&V_14), (bool*)(&V_13), /*hidden argument*/NULL);
		bool L_107 = V_14;
		if (!L_107)
		{
			goto IL_02a8;
		}
	}
	{
		bool L_108 = V_10;
		if (!L_108)
		{
			goto IL_02a8;
		}
	}
	{
		String_t* L_109 = ___s0;
		bool L_110 = ___tryParse3;
		Exception_t ** L_111 = ___exc5;
		bool L_112 = Int32_JumpOverWhite_mB23EDD8BBCD11B42ABB32EFD72C90099B84B59AA((int32_t*)(&V_11), L_109, (bool)1, L_110, (Exception_t **)L_111, /*hidden argument*/NULL);
		if (L_112)
		{
			goto IL_02a8;
		}
	}
	{
		return (bool)0;
	}

IL_02a8:
	{
		V_16 = 0;
		V_17 = 0;
		V_18 = (bool)0;
	}

IL_02b1:
	{
		String_t* L_113 = ___s0;
		int32_t L_114 = V_11;
		NullCheck(L_113);
		Il2CppChar L_115 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_113, L_114, /*hidden argument*/NULL);
		bool L_116 = V_3;
		bool L_117 = Int32_ValidDigit_mB2D66A01912631A8F8112932C71A3C6D91ECF57F(L_115, L_116, /*hidden argument*/NULL);
		if (L_117)
		{
			goto IL_0311;
		}
	}
	{
		bool L_118 = V_4;
		if (!L_118)
		{
			goto IL_02e3;
		}
	}
	{
		String_t* L_119 = ___s0;
		NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * L_120 = V_0;
		NullCheck(L_120);
		String_t* L_121 = NumberFormatInfo_get_NumberGroupSeparator_mAE19472DF8236D212CF7C0FB09AC1E5CE2B74DE3(L_120, /*hidden argument*/NULL);
		bool L_122 = Int32_FindOther_m58ADB14B31AE928628DDF04FAA89427430459119((int32_t*)(&V_11), L_119, L_121, /*hidden argument*/NULL);
		if (!L_122)
		{
			goto IL_02e3;
		}
	}
	{
		goto IL_0428;
	}

IL_02e3:
	{
		bool L_123 = V_18;
		if (L_123)
		{
			goto IL_030c;
		}
	}
	{
		bool L_124 = V_5;
		if (!L_124)
		{
			goto IL_030c;
		}
	}
	{
		String_t* L_125 = ___s0;
		NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * L_126 = V_0;
		NullCheck(L_126);
		String_t* L_127 = NumberFormatInfo_get_NumberDecimalSeparator_mFE4D5E9D517A6BA9B48C5E513B08E3E6D5B99754(L_126, /*hidden argument*/NULL);
		bool L_128 = Int32_FindOther_m58ADB14B31AE928628DDF04FAA89427430459119((int32_t*)(&V_11), L_125, L_127, /*hidden argument*/NULL);
		if (!L_128)
		{
			goto IL_030c;
		}
	}
	{
		V_18 = (bool)1;
		goto IL_0428;
	}

IL_030c:
	{
		goto IL_0435;
	}

IL_0311:
	{
		bool L_129 = V_3;
		if (!L_129)
		{
			goto IL_039e;
		}
	}
	{
		int32_t L_130 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_130, (int32_t)1));
		String_t* L_131 = ___s0;
		int32_t L_132 = V_11;
		int32_t L_133 = L_132;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_133, (int32_t)1));
		NullCheck(L_131);
		Il2CppChar L_134 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_131, L_133, /*hidden argument*/NULL);
		V_20 = L_134;
		Il2CppChar L_135 = V_20;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_il2cpp_TypeInfo_var);
		bool L_136 = Char_IsDigit_m64DFE12D7DCF1AC634EA805421E06B4B18E1C036(L_135, /*hidden argument*/NULL);
		if (!L_136)
		{
			goto IL_0344;
		}
	}
	{
		Il2CppChar L_137 = V_20;
		V_19 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_137, (int32_t)((int32_t)48)));
		goto IL_0369;
	}

IL_0344:
	{
		Il2CppChar L_138 = V_20;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_il2cpp_TypeInfo_var);
		bool L_139 = Char_IsLower_mF2969FAEF7592967B28F40E91B20340EF5B4E245(L_138, /*hidden argument*/NULL);
		if (!L_139)
		{
			goto IL_035f;
		}
	}
	{
		Il2CppChar L_140 = V_20;
		V_19 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_140, (int32_t)((int32_t)97))), (int32_t)((int32_t)10)));
		goto IL_0369;
	}

IL_035f:
	{
		Il2CppChar L_141 = V_20;
		V_19 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_141, (int32_t)((int32_t)65))), (int32_t)((int32_t)10)));
	}

IL_0369:
	{
		bool L_142 = ___tryParse3;
		if (!L_142)
		{
			goto IL_038f;
		}
	}
	{
		uint32_t L_143 = V_16;
		uint32_t L_144 = V_19;
		V_21 = (((int64_t)((uint64_t)(((uint32_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_143, (int32_t)((int32_t)16))), (int32_t)L_144))))))));
		uint64_t L_145 = V_21;
		if ((!(((uint64_t)L_145) > ((uint64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1)))))))))))
		{
			goto IL_0385;
		}
	}
	{
		return (bool)0;
	}

IL_0385:
	{
		uint64_t L_146 = V_21;
		V_16 = (((int32_t)((uint32_t)L_146)));
		goto IL_0399;
	}

IL_038f:
	{
		uint32_t L_147 = V_16;
		if ((uint64_t)(uint32_t)L_147 * (uint64_t)(uint32_t)((int32_t)16) > (uint64_t)(uint32_t)kIl2CppUInt32Max)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, UInt32_Parse_m898CD1C491A8D92808B1F11FA2B51D2C7CA2C4DC_RuntimeMethod_var);
		uint32_t L_148 = V_19;
		if ((uint64_t)(uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_147, (int32_t)((int32_t)16))) + (uint64_t)(uint32_t)L_148 > (uint64_t)(uint32_t)kIl2CppUInt32Max)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, UInt32_Parse_m898CD1C491A8D92808B1F11FA2B51D2C7CA2C4DC_RuntimeMethod_var);
		V_16 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_147, (int32_t)((int32_t)16))), (int32_t)L_148));
	}

IL_0399:
	{
		goto IL_0428;
	}

IL_039e:
	{
		bool L_149 = V_18;
		if (!L_149)
		{
			goto IL_03de;
		}
	}
	{
		int32_t L_150 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_150, (int32_t)1));
		String_t* L_151 = ___s0;
		int32_t L_152 = V_11;
		int32_t L_153 = L_152;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_153, (int32_t)1));
		NullCheck(L_151);
		Il2CppChar L_154 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_151, L_153, /*hidden argument*/NULL);
		if ((((int32_t)L_154) == ((int32_t)((int32_t)48))))
		{
			goto IL_03d9;
		}
	}
	{
		bool L_155 = ___tryParse3;
		if (L_155)
		{
			goto IL_03d7;
		}
	}
	{
		Exception_t ** L_156 = ___exc5;
		String_t* L_157 = Locale_GetText_m8335AC363D872105D0CE318A9CB1001A15813542(_stringLiteral24811694F722F05ECA04FCF43D25E232F46EA76F, /*hidden argument*/NULL);
		OverflowException_t0B5FFF1555598D499585564196861996A44507C5 * L_158 = (OverflowException_t0B5FFF1555598D499585564196861996A44507C5 *)il2cpp_codegen_object_new(OverflowException_t0B5FFF1555598D499585564196861996A44507C5_il2cpp_TypeInfo_var);
		OverflowException__ctor_m9D7E000E685C5BEEDC27E99DBF5A1AA8B739C8B6(L_158, L_157, /*hidden argument*/NULL);
		*((RuntimeObject **)L_156) = (RuntimeObject *)L_158;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_156, (RuntimeObject *)L_158);
	}

IL_03d7:
	{
		return (bool)0;
	}

IL_03d9:
	{
		goto IL_0428;
	}

IL_03de:
	{
		int32_t L_159 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_159, (int32_t)1));
	}

IL_03e4:
	try
	{ // begin try (depth: 1)
		uint32_t L_160 = V_16;
		if ((uint64_t)(uint32_t)L_160 * (uint64_t)(uint32_t)((int32_t)10) > (uint64_t)(uint32_t)kIl2CppUInt32Max)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, UInt32_Parse_m898CD1C491A8D92808B1F11FA2B51D2C7CA2C4DC_RuntimeMethod_var);
		String_t* L_161 = ___s0;
		int32_t L_162 = V_11;
		int32_t L_163 = L_162;
		if (((int64_t)L_163 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_163 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, UInt32_Parse_m898CD1C491A8D92808B1F11FA2B51D2C7CA2C4DC_RuntimeMethod_var);
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_163, (int32_t)1));
		NullCheck(L_161);
		Il2CppChar L_164 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_161, L_163, /*hidden argument*/NULL);
		if (((int64_t)L_164 - (int64_t)((int32_t)48) < (int64_t)kIl2CppInt32Min) || ((int64_t)L_164 - (int64_t)((int32_t)48) > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, UInt32_Parse_m898CD1C491A8D92808B1F11FA2B51D2C7CA2C4DC_RuntimeMethod_var);
		if ((int64_t)(((int32_t)il2cpp_codegen_subtract((int32_t)L_164, (int32_t)((int32_t)48)))) > 4294967295LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, UInt32_Parse_m898CD1C491A8D92808B1F11FA2B51D2C7CA2C4DC_RuntimeMethod_var);
		if ((uint64_t)(uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_160, (int32_t)((int32_t)10))) + (uint64_t)(uint32_t)(((uint32_t)((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_164, (int32_t)((int32_t)48)))))) > (uint64_t)(uint32_t)kIl2CppUInt32Max)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, UInt32_Parse_m898CD1C491A8D92808B1F11FA2B51D2C7CA2C4DC_RuntimeMethod_var);
		V_16 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_160, (int32_t)((int32_t)10))), (int32_t)(((uint32_t)((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_164, (int32_t)((int32_t)48))))))));
		goto IL_0428;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (OverflowException_t0B5FFF1555598D499585564196861996A44507C5_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0402;
		throw e;
	}

CATCH_0402:
	{ // begin catch(System.OverflowException)
		{
			bool L_165 = ___tryParse3;
			if (L_165)
			{
				goto IL_041b;
			}
		}

IL_0409:
		{
			Exception_t ** L_166 = ___exc5;
			String_t* L_167 = Locale_GetText_m8335AC363D872105D0CE318A9CB1001A15813542(_stringLiteral24811694F722F05ECA04FCF43D25E232F46EA76F, /*hidden argument*/NULL);
			OverflowException_t0B5FFF1555598D499585564196861996A44507C5 * L_168 = (OverflowException_t0B5FFF1555598D499585564196861996A44507C5 *)il2cpp_codegen_object_new(OverflowException_t0B5FFF1555598D499585564196861996A44507C5_il2cpp_TypeInfo_var);
			OverflowException__ctor_m9D7E000E685C5BEEDC27E99DBF5A1AA8B739C8B6(L_168, L_167, /*hidden argument*/NULL);
			*((RuntimeObject **)L_166) = (RuntimeObject *)L_168;
			Il2CppCodeGenWriteBarrier((RuntimeObject **)L_166, (RuntimeObject *)L_168);
		}

IL_041b:
		{
			V_22 = (bool)0;
			goto IL_05cd;
		}

IL_0423:
		{
			; // IL_0423: leave IL_0428
		}
	} // end catch (depth: 1)

IL_0428:
	{
		int32_t L_169 = V_11;
		String_t* L_170 = ___s0;
		NullCheck(L_170);
		int32_t L_171 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_170, /*hidden argument*/NULL);
		if ((((int32_t)L_169) < ((int32_t)L_171)))
		{
			goto IL_02b1;
		}
	}

IL_0435:
	{
		int32_t L_172 = V_17;
		if (L_172)
		{
			goto IL_044c;
		}
	}
	{
		bool L_173 = ___tryParse3;
		if (L_173)
		{
			goto IL_044a;
		}
	}
	{
		Exception_t ** L_174 = ___exc5;
		Exception_t * L_175 = Int32_GetFormatException_m6C226C76C95604F328CCDBA8A4C2916FCCA951F7(/*hidden argument*/NULL);
		*((RuntimeObject **)L_174) = (RuntimeObject *)L_175;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_174, (RuntimeObject *)L_175);
	}

IL_044a:
	{
		return (bool)0;
	}

IL_044c:
	{
		bool L_176 = V_7;
		if (!L_176)
		{
			goto IL_0499;
		}
	}
	{
		bool L_177 = V_14;
		if (L_177)
		{
			goto IL_0499;
		}
	}
	{
		String_t* L_178 = ___s0;
		NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * L_179 = V_0;
		Int32_FindSign_mA4B3C6B30D047EF6B3B1D365C65F5CEFFD8B2FF1((int32_t*)(&V_11), L_178, L_179, (bool*)(&V_14), (bool*)(&V_13), /*hidden argument*/NULL);
		bool L_180 = V_14;
		if (!L_180)
		{
			goto IL_0499;
		}
	}
	{
		bool L_181 = V_9;
		if (!L_181)
		{
			goto IL_0488;
		}
	}
	{
		String_t* L_182 = ___s0;
		bool L_183 = ___tryParse3;
		Exception_t ** L_184 = ___exc5;
		bool L_185 = Int32_JumpOverWhite_mB23EDD8BBCD11B42ABB32EFD72C90099B84B59AA((int32_t*)(&V_11), L_182, (bool)1, L_183, (Exception_t **)L_184, /*hidden argument*/NULL);
		if (L_185)
		{
			goto IL_0488;
		}
	}
	{
		return (bool)0;
	}

IL_0488:
	{
		bool L_186 = V_2;
		if (!L_186)
		{
			goto IL_0499;
		}
	}
	{
		String_t* L_187 = ___s0;
		NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * L_188 = V_0;
		Int32_FindCurrency_m9EA01794AEA18D803880375B21DDC000CAFAF328((int32_t*)(&V_11), L_187, L_188, (bool*)(&V_15), /*hidden argument*/NULL);
	}

IL_0499:
	{
		bool L_189 = V_2;
		if (!L_189)
		{
			goto IL_04ed;
		}
	}
	{
		bool L_190 = V_15;
		if (L_190)
		{
			goto IL_04ed;
		}
	}
	{
		String_t* L_191 = ___s0;
		NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * L_192 = V_0;
		Int32_FindCurrency_m9EA01794AEA18D803880375B21DDC000CAFAF328((int32_t*)(&V_11), L_191, L_192, (bool*)(&V_15), /*hidden argument*/NULL);
		bool L_193 = V_15;
		if (!L_193)
		{
			goto IL_04ed;
		}
	}
	{
		bool L_194 = V_9;
		if (!L_194)
		{
			goto IL_04d2;
		}
	}
	{
		String_t* L_195 = ___s0;
		bool L_196 = ___tryParse3;
		Exception_t ** L_197 = ___exc5;
		bool L_198 = Int32_JumpOverWhite_mB23EDD8BBCD11B42ABB32EFD72C90099B84B59AA((int32_t*)(&V_11), L_195, (bool)1, L_196, (Exception_t **)L_197, /*hidden argument*/NULL);
		if (L_198)
		{
			goto IL_04d2;
		}
	}
	{
		return (bool)0;
	}

IL_04d2:
	{
		bool L_199 = V_14;
		if (L_199)
		{
			goto IL_04ed;
		}
	}
	{
		bool L_200 = V_7;
		if (!L_200)
		{
			goto IL_04ed;
		}
	}
	{
		String_t* L_201 = ___s0;
		NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * L_202 = V_0;
		Int32_FindSign_mA4B3C6B30D047EF6B3B1D365C65F5CEFFD8B2FF1((int32_t*)(&V_11), L_201, L_202, (bool*)(&V_14), (bool*)(&V_13), /*hidden argument*/NULL);
	}

IL_04ed:
	{
		bool L_203 = V_9;
		if (!L_203)
		{
			goto IL_0514;
		}
	}
	{
		int32_t L_204 = V_11;
		String_t* L_205 = ___s0;
		NullCheck(L_205);
		int32_t L_206 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_205, /*hidden argument*/NULL);
		if ((((int32_t)L_204) >= ((int32_t)L_206)))
		{
			goto IL_0514;
		}
	}
	{
		String_t* L_207 = ___s0;
		bool L_208 = ___tryParse3;
		Exception_t ** L_209 = ___exc5;
		bool L_210 = Int32_JumpOverWhite_mB23EDD8BBCD11B42ABB32EFD72C90099B84B59AA((int32_t*)(&V_11), L_207, (bool)0, L_208, (Exception_t **)L_209, /*hidden argument*/NULL);
		if (L_210)
		{
			goto IL_0514;
		}
	}
	{
		return (bool)0;
	}

IL_0514:
	{
		bool L_211 = V_12;
		if (!L_211)
		{
			goto IL_0573;
		}
	}
	{
		int32_t L_212 = V_11;
		String_t* L_213 = ___s0;
		NullCheck(L_213);
		int32_t L_214 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_213, /*hidden argument*/NULL);
		if ((((int32_t)L_212) >= ((int32_t)L_214)))
		{
			goto IL_053c;
		}
	}
	{
		String_t* L_215 = ___s0;
		int32_t L_216 = V_11;
		int32_t L_217 = L_216;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_217, (int32_t)1));
		NullCheck(L_215);
		Il2CppChar L_218 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_215, L_217, /*hidden argument*/NULL);
		if ((((int32_t)L_218) == ((int32_t)((int32_t)41))))
		{
			goto IL_054c;
		}
	}

IL_053c:
	{
		bool L_219 = ___tryParse3;
		if (L_219)
		{
			goto IL_054a;
		}
	}
	{
		Exception_t ** L_220 = ___exc5;
		Exception_t * L_221 = Int32_GetFormatException_m6C226C76C95604F328CCDBA8A4C2916FCCA951F7(/*hidden argument*/NULL);
		*((RuntimeObject **)L_220) = (RuntimeObject *)L_221;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_220, (RuntimeObject *)L_221);
	}

IL_054a:
	{
		return (bool)0;
	}

IL_054c:
	{
		bool L_222 = V_9;
		if (!L_222)
		{
			goto IL_0573;
		}
	}
	{
		int32_t L_223 = V_11;
		String_t* L_224 = ___s0;
		NullCheck(L_224);
		int32_t L_225 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_224, /*hidden argument*/NULL);
		if ((((int32_t)L_223) >= ((int32_t)L_225)))
		{
			goto IL_0573;
		}
	}
	{
		String_t* L_226 = ___s0;
		bool L_227 = ___tryParse3;
		Exception_t ** L_228 = ___exc5;
		bool L_229 = Int32_JumpOverWhite_mB23EDD8BBCD11B42ABB32EFD72C90099B84B59AA((int32_t*)(&V_11), L_226, (bool)0, L_227, (Exception_t **)L_228, /*hidden argument*/NULL);
		if (L_229)
		{
			goto IL_0573;
		}
	}
	{
		return (bool)0;
	}

IL_0573:
	{
		int32_t L_230 = V_11;
		String_t* L_231 = ___s0;
		NullCheck(L_231);
		int32_t L_232 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_231, /*hidden argument*/NULL);
		if ((((int32_t)L_230) >= ((int32_t)L_232)))
		{
			goto IL_059d;
		}
	}
	{
		String_t* L_233 = ___s0;
		int32_t L_234 = V_11;
		NullCheck(L_233);
		Il2CppChar L_235 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_233, L_234, /*hidden argument*/NULL);
		if (!L_235)
		{
			goto IL_059d;
		}
	}
	{
		bool L_236 = ___tryParse3;
		if (L_236)
		{
			goto IL_059b;
		}
	}
	{
		Exception_t ** L_237 = ___exc5;
		Exception_t * L_238 = Int32_GetFormatException_m6C226C76C95604F328CCDBA8A4C2916FCCA951F7(/*hidden argument*/NULL);
		*((RuntimeObject **)L_237) = (RuntimeObject *)L_238;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_237, (RuntimeObject *)L_238);
	}

IL_059b:
	{
		return (bool)0;
	}

IL_059d:
	{
		bool L_239 = V_13;
		if (!L_239)
		{
			goto IL_05c6;
		}
	}
	{
		uint32_t L_240 = V_16;
		if ((!(((uint32_t)L_240) > ((uint32_t)0))))
		{
			goto IL_05c6;
		}
	}
	{
		bool L_241 = ___tryParse3;
		if (L_241)
		{
			goto IL_05c4;
		}
	}
	{
		Exception_t ** L_242 = ___exc5;
		String_t* L_243 = Locale_GetText_m8335AC363D872105D0CE318A9CB1001A15813542(_stringLiteral5371656E62DB527D005E1031DDDEABE47B69C2B7, /*hidden argument*/NULL);
		OverflowException_t0B5FFF1555598D499585564196861996A44507C5 * L_244 = (OverflowException_t0B5FFF1555598D499585564196861996A44507C5 *)il2cpp_codegen_object_new(OverflowException_t0B5FFF1555598D499585564196861996A44507C5_il2cpp_TypeInfo_var);
		OverflowException__ctor_m9D7E000E685C5BEEDC27E99DBF5A1AA8B739C8B6(L_244, L_243, /*hidden argument*/NULL);
		*((RuntimeObject **)L_242) = (RuntimeObject *)L_244;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_242, (RuntimeObject *)L_244);
	}

IL_05c4:
	{
		return (bool)0;
	}

IL_05c6:
	{
		uint32_t* L_245 = ___result4;
		uint32_t L_246 = V_16;
		*((int32_t*)L_245) = (int32_t)L_246;
		return (bool)1;
	}

IL_05cd:
	{
		bool L_247 = V_22;
		return L_247;
	}
}
// System.UInt32 System.UInt32::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint32_t UInt32_Parse_mD31A1A0C2FC3CE3EEF4A314678B35B755FD14D57 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_Parse_mD31A1A0C2FC3CE3EEF4A314678B35B755FD14D57_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	uint32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		int32_t L_1 = ___style1;
		RuntimeObject* L_2 = ___provider2;
		bool L_3 = UInt32_Parse_m898CD1C491A8D92808B1F11FA2B51D2C7CA2C4DC(L_0, L_1, L_2, (bool)0, (uint32_t*)(&V_1), (Exception_t **)(&V_0), /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0014;
		}
	}
	{
		Exception_t * L_4 = V_0;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, UInt32_Parse_mD31A1A0C2FC3CE3EEF4A314678B35B755FD14D57_RuntimeMethod_var);
	}

IL_0014:
	{
		uint32_t L_5 = V_1;
		return L_5;
	}
}
// System.UInt32 System.UInt32::Parse(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint32_t UInt32_Parse_m4AE3BCE21AEFF76408D8A08A3CAEA464DB17F6ED (String_t* ___s0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___s0;
		RuntimeObject* L_1 = ___provider1;
		uint32_t L_2 = UInt32_Parse_mD31A1A0C2FC3CE3EEF4A314678B35B755FD14D57(L_0, 7, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.UInt32::TryParse(System.String,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool UInt32_TryParse_mFBFB83A73E030ADEADC1E31B8A3BE4F14F0738A5 (String_t* ___s0, uint32_t* ___result1, const RuntimeMethod* method)
{
	Exception_t * V_0 = NULL;
	{
		String_t* L_0 = ___s0;
		uint32_t* L_1 = ___result1;
		bool L_2 = UInt32_Parse_mF445201DDD2567AFFDDB0C77E3CF36AAF86AB015(L_0, (bool)1, (uint32_t*)L_1, (Exception_t **)(&V_0), /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		uint32_t* L_3 = ___result1;
		*((int32_t*)L_3) = (int32_t)0;
		return (bool)0;
	}

IL_0014:
	{
		return (bool)1;
	}
}
// System.Boolean System.UInt32::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool UInt32_TryParse_mEE31363ED7DC504242A11A33ADE601A1D514D8EB (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, uint32_t* ___result3, const RuntimeMethod* method)
{
	Exception_t * V_0 = NULL;
	{
		String_t* L_0 = ___s0;
		int32_t L_1 = ___style1;
		RuntimeObject* L_2 = ___provider2;
		uint32_t* L_3 = ___result3;
		bool L_4 = UInt32_Parse_m898CD1C491A8D92808B1F11FA2B51D2C7CA2C4DC(L_0, L_1, L_2, (bool)1, (uint32_t*)L_3, (Exception_t **)(&V_0), /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0016;
		}
	}
	{
		uint32_t* L_5 = ___result3;
		*((int32_t*)L_5) = (int32_t)0;
		return (bool)0;
	}

IL_0016:
	{
		return (bool)1;
	}
}
// System.String System.UInt32::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* UInt32_ToString_mC174A5A4A8166D0F152D94A65CB535E4DAC99F4D (uint32_t* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_ToString_mC174A5A4A8166D0F152D94A65CB535E4DAC99F4D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint32_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t68475AD595A7C11B0615994FBA7B580C52E60824_il2cpp_TypeInfo_var);
		String_t* L_1 = NumberFormatter_NumberToString_m90834F3DE104163898C8D9986B81FEED3882F471(L_0, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  String_t* UInt32_ToString_mC174A5A4A8166D0F152D94A65CB535E4DAC99F4D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_ToString_mC174A5A4A8166D0F152D94A65CB535E4DAC99F4D(_thisAdjusted, method);
}
// System.String System.UInt32::ToString(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* UInt32_ToString_mB9E6EE2E0633BB6D2E46B9BB44049640734C3982 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_ToString_mB9E6EE2E0633BB6D2E46B9BB44049640734C3982_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint32_t*)__this);
		RuntimeObject* L_1 = ___provider0;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t68475AD595A7C11B0615994FBA7B580C52E60824_il2cpp_TypeInfo_var);
		String_t* L_2 = NumberFormatter_NumberToString_m90834F3DE104163898C8D9986B81FEED3882F471(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
extern "C"  String_t* UInt32_ToString_mB9E6EE2E0633BB6D2E46B9BB44049640734C3982_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_ToString_mB9E6EE2E0633BB6D2E46B9BB44049640734C3982(_thisAdjusted, ___provider0, method);
}
// System.String System.UInt32::ToString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* UInt32_ToString_mADC643D127CD9C8987453028D62BC8321177D6ED (uint32_t* __this, String_t* ___format0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___format0;
		String_t* L_1 = UInt32_ToString_m230B934119903A90F549E32D43B3E2A252324CFC((uint32_t*)__this, L_0, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  String_t* UInt32_ToString_mADC643D127CD9C8987453028D62BC8321177D6ED_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_ToString_mADC643D127CD9C8987453028D62BC8321177D6ED(_thisAdjusted, ___format0, method);
}
// System.String System.UInt32::ToString(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* UInt32_ToString_m230B934119903A90F549E32D43B3E2A252324CFC (uint32_t* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_ToString_m230B934119903A90F549E32D43B3E2A252324CFC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___format0;
		int32_t L_1 = *((uint32_t*)__this);
		RuntimeObject* L_2 = ___provider1;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t68475AD595A7C11B0615994FBA7B580C52E60824_il2cpp_TypeInfo_var);
		String_t* L_3 = NumberFormatter_NumberToString_m25E25BFAA97D8526D7A3CE9F08882004938D1C1D(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
extern "C"  String_t* UInt32_ToString_m230B934119903A90F549E32D43B3E2A252324CFC_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_ToString_m230B934119903A90F549E32D43B3E2A252324CFC(_thisAdjusted, ___format0, ___provider1, method);
}
// System.TypeCode System.UInt32::GetTypeCode()
extern "C" IL2CPP_METHOD_ATTR int32_t UInt32_GetTypeCode_m0063C43A2AEE92E9AFD9E95A13264F18F5B2291B (uint32_t* __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(((int32_t)10));
	}
}
extern "C"  int32_t UInt32_GetTypeCode_m0063C43A2AEE92E9AFD9E95A13264F18F5B2291B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_GetTypeCode_m0063C43A2AEE92E9AFD9E95A13264F18F5B2291B(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean System.UInt64::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR bool UInt64_System_IConvertible_ToBoolean_mC5B4822502427B3930661390097D9F495D655B21 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToBoolean_mC5B4822502427B3930661390097D9F495D655B21_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = *((int64_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t8A398E85B5FC90CA984E604BD3F65BD7B205D592_il2cpp_TypeInfo_var);
		bool L_1 = Convert_ToBoolean_m79BE19FE30EEB564145E8542C140DC87B31F9C5F(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  bool UInt64_System_IConvertible_ToBoolean_mC5B4822502427B3930661390097D9F495D655B21_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToBoolean_mC5B4822502427B3930661390097D9F495D655B21(_thisAdjusted, ___provider0, method);
}
// System.Byte System.UInt64::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint8_t UInt64_System_IConvertible_ToByte_m5D4A4C572F0107E424A3A759C71F5010932C84A3 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToByte_m5D4A4C572F0107E424A3A759C71F5010932C84A3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = *((int64_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t8A398E85B5FC90CA984E604BD3F65BD7B205D592_il2cpp_TypeInfo_var);
		uint8_t L_1 = Convert_ToByte_mD2643543C2198293B677C0F735E4FCCBCAA33B8D(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  uint8_t UInt64_System_IConvertible_ToByte_m5D4A4C572F0107E424A3A759C71F5010932C84A3_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToByte_m5D4A4C572F0107E424A3A759C71F5010932C84A3(_thisAdjusted, ___provider0, method);
}
// System.Char System.UInt64::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar UInt64_System_IConvertible_ToChar_m3B42FC6D1379A1823E8F2FF1C3FE29B3F3ED2804 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToChar_m3B42FC6D1379A1823E8F2FF1C3FE29B3F3ED2804_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = *((int64_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t8A398E85B5FC90CA984E604BD3F65BD7B205D592_il2cpp_TypeInfo_var);
		Il2CppChar L_1 = Convert_ToChar_mDA6F83AFEEFB9E7F7B7A6EE8DCC293D55B0273D4(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  Il2CppChar UInt64_System_IConvertible_ToChar_m3B42FC6D1379A1823E8F2FF1C3FE29B3F3ED2804_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToChar_m3B42FC6D1379A1823E8F2FF1C3FE29B3F3ED2804(_thisAdjusted, ___provider0, method);
}
// System.DateTime System.UInt64::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  UInt64_System_IConvertible_ToDateTime_mDC82BBB67CCC2B0D9EE566A80C7A353184274FE4 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToDateTime_mDC82BBB67CCC2B0D9EE566A80C7A353184274FE4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = *((int64_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t8A398E85B5FC90CA984E604BD3F65BD7B205D592_il2cpp_TypeInfo_var);
		DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  L_1 = Convert_ToDateTime_mC02CBCDC7252ED473C4D0014C47794802CD3D74D(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  UInt64_System_IConvertible_ToDateTime_mDC82BBB67CCC2B0D9EE566A80C7A353184274FE4_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToDateTime_mDC82BBB67CCC2B0D9EE566A80C7A353184274FE4(_thisAdjusted, ___provider0, method);
}
// System.Decimal System.UInt64::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3  UInt64_System_IConvertible_ToDecimal_m5CEB73C070A190110351684302F5817E686EB840 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToDecimal_m5CEB73C070A190110351684302F5817E686EB840_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = *((int64_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t8A398E85B5FC90CA984E604BD3F65BD7B205D592_il2cpp_TypeInfo_var);
		Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3  L_1 = Convert_ToDecimal_m5EB205FCF834352409FE2640A1021EE88EB39376(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  Decimal_t46BBDD161320E361BC57E00CD6C1F87256CA27F3  UInt64_System_IConvertible_ToDecimal_m5CEB73C070A190110351684302F5817E686EB840_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToDecimal_m5CEB73C070A190110351684302F5817E686EB840(_thisAdjusted, ___provider0, method);
}
// System.Double System.UInt64::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR double UInt64_System_IConvertible_ToDouble_mCA339EB2DC18F00382AF94BD4C8C9D2EC79E4E28 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToDouble_mCA339EB2DC18F00382AF94BD4C8C9D2EC79E4E28_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = *((int64_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t8A398E85B5FC90CA984E604BD3F65BD7B205D592_il2cpp_TypeInfo_var);
		double L_1 = Convert_ToDouble_m63C855F4BF1E50ED856B3A69F6FB70DD5AC81BED(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  double UInt64_System_IConvertible_ToDouble_mCA339EB2DC18F00382AF94BD4C8C9D2EC79E4E28_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToDouble_mCA339EB2DC18F00382AF94BD4C8C9D2EC79E4E28(_thisAdjusted, ___provider0, method);
}
// System.Int16 System.UInt64::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR int16_t UInt64_System_IConvertible_ToInt16_mEEBBA7B8F1D5D89D18FA917AB1EFB3D450FBB0BA (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToInt16_mEEBBA7B8F1D5D89D18FA917AB1EFB3D450FBB0BA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = *((int64_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t8A398E85B5FC90CA984E604BD3F65BD7B205D592_il2cpp_TypeInfo_var);
		int16_t L_1 = Convert_ToInt16_m2120125D93F7859D89C8812842940C243312EBAE(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  int16_t UInt64_System_IConvertible_ToInt16_mEEBBA7B8F1D5D89D18FA917AB1EFB3D450FBB0BA_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToInt16_mEEBBA7B8F1D5D89D18FA917AB1EFB3D450FBB0BA(_thisAdjusted, ___provider0, method);
}
// System.Int32 System.UInt64::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR int32_t UInt64_System_IConvertible_ToInt32_mAB77BCAA67C83BFD65FBCEABC3C59A17B4B8C2D6 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToInt32_mAB77BCAA67C83BFD65FBCEABC3C59A17B4B8C2D6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = *((int64_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t8A398E85B5FC90CA984E604BD3F65BD7B205D592_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_mDC8730CFBFC0438C06624F11B6ABB37A0B6F67E6(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  int32_t UInt64_System_IConvertible_ToInt32_mAB77BCAA67C83BFD65FBCEABC3C59A17B4B8C2D6_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToInt32_mAB77BCAA67C83BFD65FBCEABC3C59A17B4B8C2D6(_thisAdjusted, ___provider0, method);
}
// System.Int64 System.UInt64::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR int64_t UInt64_System_IConvertible_ToInt64_m54199F49F25C4B3B174EB8836B79DA1B5C01BE31 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToInt64_m54199F49F25C4B3B174EB8836B79DA1B5C01BE31_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = *((int64_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t8A398E85B5FC90CA984E604BD3F65BD7B205D592_il2cpp_TypeInfo_var);
		int64_t L_1 = Convert_ToInt64_m365DC01157FC12CF7012217E8ED4C52B8AEAB91E(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  int64_t UInt64_System_IConvertible_ToInt64_m54199F49F25C4B3B174EB8836B79DA1B5C01BE31_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToInt64_m54199F49F25C4B3B174EB8836B79DA1B5C01BE31(_thisAdjusted, ___provider0, method);
}
// System.SByte System.UInt64::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR int8_t UInt64_System_IConvertible_ToSByte_mCD877C98892D8E552D6A16977E27958F775A249A (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToSByte_mCD877C98892D8E552D6A16977E27958F775A249A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = *((int64_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t8A398E85B5FC90CA984E604BD3F65BD7B205D592_il2cpp_TypeInfo_var);
		int8_t L_1 = Convert_ToSByte_mD679881109F9279D68FAFC5985182825AA56AA41(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  int8_t UInt64_System_IConvertible_ToSByte_mCD877C98892D8E552D6A16977E27958F775A249A_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToSByte_mCD877C98892D8E552D6A16977E27958F775A249A(_thisAdjusted, ___provider0, method);
}
// System.Single System.UInt64::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR float UInt64_System_IConvertible_ToSingle_mF7FD4CAAD9927F7420889A89AB357523AE036027 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToSingle_mF7FD4CAAD9927F7420889A89AB357523AE036027_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = *((int64_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t8A398E85B5FC90CA984E604BD3F65BD7B205D592_il2cpp_TypeInfo_var);
		float L_1 = Convert_ToSingle_mB4864E54C1C9E0DB2EDFEC47A7D64C0CF3706A4B(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  float UInt64_System_IConvertible_ToSingle_mF7FD4CAAD9927F7420889A89AB357523AE036027_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToSingle_mF7FD4CAAD9927F7420889A89AB357523AE036027(_thisAdjusted, ___provider0, method);
}
// System.Object System.UInt64::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * UInt64_System_IConvertible_ToType_m13F392C80DE4A78FFE48C5BAEEF947D0EAA3AF36 (uint64_t* __this, Type_t * ___targetType0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToType_m13F392C80DE4A78FFE48C5BAEEF947D0EAA3AF36_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___targetType0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 * L_1 = (ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 *)il2cpp_codegen_object_new(ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mBA1072348F0861F80512F3BB2BE685EDBB02F740(L_1, _stringLiteralFA6B188D3101E2A5E782C1F0AF6FAFCA10C8BA53, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, UInt64_System_IConvertible_ToType_m13F392C80DE4A78FFE48C5BAEEF947D0EAA3AF36_RuntimeMethod_var);
	}

IL_0011:
	{
		int64_t L_2 = *((int64_t*)__this);
		uint64_t L_3 = ((uint64_t)L_2);
		RuntimeObject * L_4 = Box(UInt64_t9739CEA7F47A9C2DB5DDEAE34A1CE4B78AF8B29F_il2cpp_TypeInfo_var, &L_3);
		Type_t * L_5 = ___targetType0;
		RuntimeObject* L_6 = ___provider1;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t8A398E85B5FC90CA984E604BD3F65BD7B205D592_il2cpp_TypeInfo_var);
		RuntimeObject * L_7 = Convert_ToType_m4A551A6FB4E1BAA34CFFBDC0707FC8E333C2EF06(L_4, L_5, L_6, (bool)0, /*hidden argument*/NULL);
		return L_7;
	}
}
extern "C"  RuntimeObject * UInt64_System_IConvertible_ToType_m13F392C80DE4A78FFE48C5BAEEF947D0EAA3AF36_AdjustorThunk (RuntimeObject * __this, Type_t * ___targetType0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToType_m13F392C80DE4A78FFE48C5BAEEF947D0EAA3AF36(_thisAdjusted, ___targetType0, ___provider1, method);
}
// System.UInt16 System.UInt64::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint16_t UInt64_System_IConvertible_ToUInt16_mBC7A7C119956C4757D90697326F2724FDBB80501 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToUInt16_mBC7A7C119956C4757D90697326F2724FDBB80501_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = *((int64_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t8A398E85B5FC90CA984E604BD3F65BD7B205D592_il2cpp_TypeInfo_var);
		uint16_t L_1 = Convert_ToUInt16_m77AADDEB6DBE67A66D6F93D6F9B17A1BB38BEA17(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  uint16_t UInt64_System_IConvertible_ToUInt16_mBC7A7C119956C4757D90697326F2724FDBB80501_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToUInt16_mBC7A7C119956C4757D90697326F2724FDBB80501(_thisAdjusted, ___provider0, method);
}
// System.UInt32 System.UInt64::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint32_t UInt64_System_IConvertible_ToUInt32_m77753CCA949A68A16F6EC35DB4B09699371B076F (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToUInt32_m77753CCA949A68A16F6EC35DB4B09699371B076F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = *((int64_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t8A398E85B5FC90CA984E604BD3F65BD7B205D592_il2cpp_TypeInfo_var);
		uint32_t L_1 = Convert_ToUInt32_m6D196B272C8C286B56DA35EE0ADA8CF60028831B(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  uint32_t UInt64_System_IConvertible_ToUInt32_m77753CCA949A68A16F6EC35DB4B09699371B076F_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToUInt32_m77753CCA949A68A16F6EC35DB4B09699371B076F(_thisAdjusted, ___provider0, method);
}
// System.UInt64 System.UInt64::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint64_t UInt64_System_IConvertible_ToUInt64_mCE063A117DCB912AE177813DF1230BE0FF6CB50E (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = *((int64_t*)__this);
		return L_0;
	}
}
extern "C"  uint64_t UInt64_System_IConvertible_ToUInt64_mCE063A117DCB912AE177813DF1230BE0FF6CB50E_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToUInt64_mCE063A117DCB912AE177813DF1230BE0FF6CB50E(_thisAdjusted, ___provider0, method);
}
// System.Int32 System.UInt64::CompareTo(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t UInt64_CompareTo_m041E1FF06716F221CC5D9DCD9EB27C3C12F9EA70 (uint64_t* __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_CompareTo_m041E1FF06716F221CC5D9DCD9EB27C3C12F9EA70_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	int32_t G_B9_0 = 0;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 1;
	}

IL_0008:
	{
		RuntimeObject * L_1 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, UInt64_t9739CEA7F47A9C2DB5DDEAE34A1CE4B78AF8B29F_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		String_t* L_2 = Locale_GetText_m8335AC363D872105D0CE318A9CB1001A15813542(_stringLiteralA977BC0091006DEFD65F30B57D7811FB836DC00A, /*hidden argument*/NULL);
		ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 * L_3 = (ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 *)il2cpp_codegen_object_new(ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m8917650A5D8F2F36C6B623A720DF2D2A630D3533(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, UInt64_CompareTo_m041E1FF06716F221CC5D9DCD9EB27C3C12F9EA70_RuntimeMethod_var);
	}

IL_0023:
	{
		RuntimeObject * L_4 = ___value0;
		V_0 = ((*(uint64_t*)((uint64_t*)UnBox(L_4, UInt64_t9739CEA7F47A9C2DB5DDEAE34A1CE4B78AF8B29F_il2cpp_TypeInfo_var))));
		int64_t L_5 = *((int64_t*)__this);
		uint64_t L_6 = V_0;
		if ((!(((uint64_t)L_5) == ((uint64_t)L_6))))
		{
			goto IL_0034;
		}
	}
	{
		return 0;
	}

IL_0034:
	{
		int64_t L_7 = *((int64_t*)__this);
		uint64_t L_8 = V_0;
		if ((!(((uint64_t)L_7) < ((uint64_t)L_8))))
		{
			goto IL_0042;
		}
	}
	{
		G_B9_0 = (-1);
		goto IL_0043;
	}

IL_0042:
	{
		G_B9_0 = 1;
	}

IL_0043:
	{
		return G_B9_0;
	}
}
extern "C"  int32_t UInt64_CompareTo_m041E1FF06716F221CC5D9DCD9EB27C3C12F9EA70_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_CompareTo_m041E1FF06716F221CC5D9DCD9EB27C3C12F9EA70(_thisAdjusted, ___value0, method);
}
// System.Boolean System.UInt64::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool UInt64_Equals_mDD0D839B196D74CC004F10CA2A1F5DF5F022A3B8 (uint64_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_Equals_mDD0D839B196D74CC004F10CA2A1F5DF5F022A3B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, UInt64_t9739CEA7F47A9C2DB5DDEAE34A1CE4B78AF8B29F_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject * L_1 = ___obj0;
		int64_t L_2 = *((int64_t*)__this);
		return (bool)((((int64_t)((*(uint64_t*)((uint64_t*)UnBox(L_1, UInt64_t9739CEA7F47A9C2DB5DDEAE34A1CE4B78AF8B29F_il2cpp_TypeInfo_var))))) == ((int64_t)L_2))? 1 : 0);
	}
}
extern "C"  bool UInt64_Equals_mDD0D839B196D74CC004F10CA2A1F5DF5F022A3B8_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_Equals_mDD0D839B196D74CC004F10CA2A1F5DF5F022A3B8(_thisAdjusted, ___obj0, method);
}
// System.Int32 System.UInt64::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t UInt64_GetHashCode_mC5D0BC70D723E5FF2B79153BF7CE0118F229C7A4 (uint64_t* __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = *((int64_t*)__this);
		int64_t L_1 = *((int64_t*)__this);
		return ((int32_t)((int32_t)(((int32_t)((int32_t)((int64_t)((int64_t)L_0&(int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1))))))))))))^(int32_t)(((int32_t)((int32_t)((int64_t)((uint64_t)L_1>>((int32_t)32))))))));
	}
}
extern "C"  int32_t UInt64_GetHashCode_mC5D0BC70D723E5FF2B79153BF7CE0118F229C7A4_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_GetHashCode_mC5D0BC70D723E5FF2B79153BF7CE0118F229C7A4(_thisAdjusted, method);
}
// System.Int32 System.UInt64::CompareTo(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR int32_t UInt64_CompareTo_mCB5D59A43464191DB5B056E510CF7FA17A7D669B (uint64_t* __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = *((int64_t*)__this);
		uint64_t L_1 = ___value0;
		if ((!(((uint64_t)L_0) == ((uint64_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		int64_t L_2 = *((int64_t*)__this);
		uint64_t L_3 = ___value0;
		if ((!(((uint64_t)L_2) > ((uint64_t)L_3))))
		{
			goto IL_0014;
		}
	}
	{
		return 1;
	}

IL_0014:
	{
		return (-1);
	}
}
extern "C"  int32_t UInt64_CompareTo_mCB5D59A43464191DB5B056E510CF7FA17A7D669B_AdjustorThunk (RuntimeObject * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_CompareTo_mCB5D59A43464191DB5B056E510CF7FA17A7D669B(_thisAdjusted, ___value0, method);
}
// System.Boolean System.UInt64::Equals(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR bool UInt64_Equals_m7B6293A29524D99ACD609A8F3E5090C6EB470397 (uint64_t* __this, uint64_t ___obj0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___obj0;
		int64_t L_1 = *((int64_t*)__this);
		return (bool)((((int64_t)L_0) == ((int64_t)L_1))? 1 : 0);
	}
}
extern "C"  bool UInt64_Equals_m7B6293A29524D99ACD609A8F3E5090C6EB470397_AdjustorThunk (RuntimeObject * __this, uint64_t ___obj0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_Equals_m7B6293A29524D99ACD609A8F3E5090C6EB470397(_thisAdjusted, ___obj0, method);
}
// System.UInt64 System.UInt64::Parse(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint64_t UInt64_Parse_mD472A42985D5C0B345C34E0ED2A78B0C72EA1F1E (String_t* ___s0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___s0;
		RuntimeObject* L_1 = ___provider1;
		uint64_t L_2 = UInt64_Parse_m4DBE576353DDF2993426DE1CAB5E0E8344FCCA6A(L_0, 7, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.UInt64::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Boolean,System.UInt64&,System.Exception&)
extern "C" IL2CPP_METHOD_ATTR bool UInt64_Parse_m64DC370FE1AC82186A2E8D36AF019434AB2FEDCC (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, bool ___tryParse3, uint64_t* ___result4, Exception_t ** ___exc5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_Parse_m64DC370FE1AC82186A2E8D36AF019434AB2FEDCC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * V_0 = NULL;
	Type_t * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	uint64_t V_16 = 0;
	int32_t V_17 = 0;
	bool V_18 = false;
	uint64_t V_19 = 0;
	Il2CppChar V_20 = 0x0;
	bool V_21 = false;
	bool V_22 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		uint64_t* L_0 = ___result4;
		*((int64_t*)L_0) = (int64_t)(((int64_t)((int64_t)0)));
		Exception_t ** L_1 = ___exc5;
		*((RuntimeObject **)L_1) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_1, (RuntimeObject *)NULL);
		String_t* L_2 = ___s0;
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		bool L_3 = ___tryParse3;
		if (L_3)
		{
			goto IL_0022;
		}
	}
	{
		Exception_t ** L_4 = ___exc5;
		ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 * L_5 = (ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 *)il2cpp_codegen_object_new(ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mBA1072348F0861F80512F3BB2BE685EDBB02F740(L_5, _stringLiteralA0F1490A20D0211C997B44BC357E1972DEAB8AE3, /*hidden argument*/NULL);
		*((RuntimeObject **)L_4) = (RuntimeObject *)L_5;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_4, (RuntimeObject *)L_5);
	}

IL_0022:
	{
		return (bool)0;
	}

IL_0024:
	{
		String_t* L_6 = ___s0;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		bool L_8 = ___tryParse3;
		if (L_8)
		{
			goto IL_003d;
		}
	}
	{
		Exception_t ** L_9 = ___exc5;
		Exception_t * L_10 = Int32_GetFormatException_m6C226C76C95604F328CCDBA8A4C2916FCCA951F7(/*hidden argument*/NULL);
		*((RuntimeObject **)L_9) = (RuntimeObject *)L_10;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_9, (RuntimeObject *)L_10);
	}

IL_003d:
	{
		return (bool)0;
	}

IL_003f:
	{
		V_0 = (NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 *)NULL;
		RuntimeObject* L_11 = ___provider2;
		if (!L_11)
		{
			goto IL_005f;
		}
	}
	{
		RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  L_12 = { reinterpret_cast<intptr_t> (NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_13 = Type_GetTypeFromHandle_m8326E3405B647C99882C2E411C459944B0598D73(L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		RuntimeObject* L_14 = ___provider2;
		Type_t * L_15 = V_1;
		NullCheck(L_14);
		RuntimeObject * L_16 = InterfaceFuncInvoker1< RuntimeObject *, Type_t * >::Invoke(0 /* System.Object System.IFormatProvider::GetFormat(System.Type) */, IFormatProvider_t3BAF59CC620257B8C99F911BC233EF7CC5480D67_il2cpp_TypeInfo_var, L_14, L_15);
		V_0 = ((NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 *)CastclassSealed((RuntimeObject*)L_16, NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4_il2cpp_TypeInfo_var));
	}

IL_005f:
	{
		NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * L_17 = V_0;
		if (L_17)
		{
			goto IL_0075;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t83C301EC970792455F76D89E58140949B003EA50_il2cpp_TypeInfo_var);
		Thread_t83C301EC970792455F76D89E58140949B003EA50 * L_18 = Thread_get_CurrentThread_mDD6961DC5A1042DC7A428A1F2B8F1ACEBE393663(/*hidden argument*/NULL);
		NullCheck(L_18);
		CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * L_19 = Thread_get_CurrentCulture_mC65176027DF0D9C8E9FF36E2D8E0A19B32605A8F(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * L_20 = VirtFuncInvoker0< NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * >::Invoke(13 /* System.Globalization.NumberFormatInfo System.Globalization.CultureInfo::get_NumberFormat() */, L_19);
		V_0 = L_20;
	}

IL_0075:
	{
		int32_t L_21 = ___style1;
		bool L_22 = ___tryParse3;
		Exception_t ** L_23 = ___exc5;
		bool L_24 = Int32_CheckStyle_m75F34EB0D25C3E351DAE95987D27455587AEF5BF(L_21, L_22, (Exception_t **)L_23, /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_0085;
		}
	}
	{
		return (bool)0;
	}

IL_0085:
	{
		int32_t L_25 = ___style1;
		V_2 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_25&(int32_t)((int32_t)256)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_26 = ___style1;
		V_3 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_26&(int32_t)((int32_t)512)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_27 = ___style1;
		V_4 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_27&(int32_t)((int32_t)64)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_28 = ___style1;
		V_5 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_28&(int32_t)((int32_t)32)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_29 = ___style1;
		V_6 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_29&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_30 = ___style1;
		V_7 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_30&(int32_t)8))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_31 = ___style1;
		V_8 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_31&(int32_t)4))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_32 = ___style1;
		V_9 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_32&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_33 = ___style1;
		V_10 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_33&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		V_11 = 0;
		bool L_34 = V_10;
		if (!L_34)
		{
			goto IL_010e;
		}
	}
	{
		String_t* L_35 = ___s0;
		bool L_36 = ___tryParse3;
		Exception_t ** L_37 = ___exc5;
		bool L_38 = Int32_JumpOverWhite_mB23EDD8BBCD11B42ABB32EFD72C90099B84B59AA((int32_t*)(&V_11), L_35, (bool)1, L_36, (Exception_t **)L_37, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_010e;
		}
	}
	{
		return (bool)0;
	}

IL_010e:
	{
		V_12 = (bool)0;
		V_13 = (bool)0;
		V_14 = (bool)0;
		V_15 = (bool)0;
		bool L_39 = V_6;
		if (!L_39)
		{
			goto IL_01bf;
		}
	}
	{
		String_t* L_40 = ___s0;
		int32_t L_41 = V_11;
		NullCheck(L_40);
		Il2CppChar L_42 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_40, L_41, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_42) == ((uint32_t)((int32_t)40)))))
		{
			goto IL_01bf;
		}
	}
	{
		V_12 = (bool)1;
		V_14 = (bool)1;
		V_13 = (bool)1;
		int32_t L_43 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
		bool L_44 = V_10;
		if (!L_44)
		{
			goto IL_0159;
		}
	}
	{
		String_t* L_45 = ___s0;
		bool L_46 = ___tryParse3;
		Exception_t ** L_47 = ___exc5;
		bool L_48 = Int32_JumpOverWhite_mB23EDD8BBCD11B42ABB32EFD72C90099B84B59AA((int32_t*)(&V_11), L_45, (bool)1, L_46, (Exception_t **)L_47, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0159;
		}
	}
	{
		return (bool)0;
	}

IL_0159:
	{
		String_t* L_49 = ___s0;
		int32_t L_50 = V_11;
		NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * L_51 = V_0;
		NullCheck(L_51);
		String_t* L_52 = NumberFormatInfo_get_NegativeSign_m7B9CDBB9B7B94E438EE315A97EDA4C0B55C8B249(L_51, /*hidden argument*/NULL);
		NullCheck(L_52);
		int32_t L_53 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_52, /*hidden argument*/NULL);
		NullCheck(L_49);
		String_t* L_54 = String_Substring_m10F7B491B6627E6C5A2725C466DB3F3E7414BC0B(L_49, L_50, L_53, /*hidden argument*/NULL);
		NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * L_55 = V_0;
		NullCheck(L_55);
		String_t* L_56 = NumberFormatInfo_get_NegativeSign_m7B9CDBB9B7B94E438EE315A97EDA4C0B55C8B249(L_55, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_57 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_54, L_56, /*hidden argument*/NULL);
		if (!L_57)
		{
			goto IL_018c;
		}
	}
	{
		bool L_58 = ___tryParse3;
		if (L_58)
		{
			goto IL_018a;
		}
	}
	{
		Exception_t ** L_59 = ___exc5;
		Exception_t * L_60 = Int32_GetFormatException_m6C226C76C95604F328CCDBA8A4C2916FCCA951F7(/*hidden argument*/NULL);
		*((RuntimeObject **)L_59) = (RuntimeObject *)L_60;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_59, (RuntimeObject *)L_60);
	}

IL_018a:
	{
		return (bool)0;
	}

IL_018c:
	{
		String_t* L_61 = ___s0;
		int32_t L_62 = V_11;
		NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * L_63 = V_0;
		NullCheck(L_63);
		String_t* L_64 = NumberFormatInfo_get_PositiveSign_m8432C7F56533C5294FC5919CB316DF1161E5B815(L_63, /*hidden argument*/NULL);
		NullCheck(L_64);
		int32_t L_65 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_64, /*hidden argument*/NULL);
		NullCheck(L_61);
		String_t* L_66 = String_Substring_m10F7B491B6627E6C5A2725C466DB3F3E7414BC0B(L_61, L_62, L_65, /*hidden argument*/NULL);
		NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * L_67 = V_0;
		NullCheck(L_67);
		String_t* L_68 = NumberFormatInfo_get_PositiveSign_m8432C7F56533C5294FC5919CB316DF1161E5B815(L_67, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_69 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_66, L_68, /*hidden argument*/NULL);
		if (!L_69)
		{
			goto IL_01bf;
		}
	}
	{
		bool L_70 = ___tryParse3;
		if (L_70)
		{
			goto IL_01bd;
		}
	}
	{
		Exception_t ** L_71 = ___exc5;
		Exception_t * L_72 = Int32_GetFormatException_m6C226C76C95604F328CCDBA8A4C2916FCCA951F7(/*hidden argument*/NULL);
		*((RuntimeObject **)L_71) = (RuntimeObject *)L_72;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_71, (RuntimeObject *)L_72);
	}

IL_01bd:
	{
		return (bool)0;
	}

IL_01bf:
	{
		bool L_73 = V_8;
		if (!L_73)
		{
			goto IL_022d;
		}
	}
	{
		bool L_74 = V_14;
		if (L_74)
		{
			goto IL_022d;
		}
	}
	{
		String_t* L_75 = ___s0;
		NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * L_76 = V_0;
		Int32_FindSign_mA4B3C6B30D047EF6B3B1D365C65F5CEFFD8B2FF1((int32_t*)(&V_11), L_75, L_76, (bool*)(&V_14), (bool*)(&V_13), /*hidden argument*/NULL);
		bool L_77 = V_14;
		if (!L_77)
		{
			goto IL_022d;
		}
	}
	{
		bool L_78 = V_10;
		if (!L_78)
		{
			goto IL_01fb;
		}
	}
	{
		String_t* L_79 = ___s0;
		bool L_80 = ___tryParse3;
		Exception_t ** L_81 = ___exc5;
		bool L_82 = Int32_JumpOverWhite_mB23EDD8BBCD11B42ABB32EFD72C90099B84B59AA((int32_t*)(&V_11), L_79, (bool)1, L_80, (Exception_t **)L_81, /*hidden argument*/NULL);
		if (L_82)
		{
			goto IL_01fb;
		}
	}
	{
		return (bool)0;
	}

IL_01fb:
	{
		bool L_83 = V_2;
		if (!L_83)
		{
			goto IL_022d;
		}
	}
	{
		String_t* L_84 = ___s0;
		NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * L_85 = V_0;
		Int32_FindCurrency_m9EA01794AEA18D803880375B21DDC000CAFAF328((int32_t*)(&V_11), L_84, L_85, (bool*)(&V_15), /*hidden argument*/NULL);
		bool L_86 = V_15;
		if (!L_86)
		{
			goto IL_022d;
		}
	}
	{
		bool L_87 = V_10;
		if (!L_87)
		{
			goto IL_022d;
		}
	}
	{
		String_t* L_88 = ___s0;
		bool L_89 = ___tryParse3;
		Exception_t ** L_90 = ___exc5;
		bool L_91 = Int32_JumpOverWhite_mB23EDD8BBCD11B42ABB32EFD72C90099B84B59AA((int32_t*)(&V_11), L_88, (bool)1, L_89, (Exception_t **)L_90, /*hidden argument*/NULL);
		if (L_91)
		{
			goto IL_022d;
		}
	}
	{
		return (bool)0;
	}

IL_022d:
	{
		bool L_92 = V_2;
		if (!L_92)
		{
			goto IL_02a9;
		}
	}
	{
		bool L_93 = V_15;
		if (L_93)
		{
			goto IL_02a9;
		}
	}
	{
		String_t* L_94 = ___s0;
		NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * L_95 = V_0;
		Int32_FindCurrency_m9EA01794AEA18D803880375B21DDC000CAFAF328((int32_t*)(&V_11), L_94, L_95, (bool*)(&V_15), /*hidden argument*/NULL);
		bool L_96 = V_15;
		if (!L_96)
		{
			goto IL_02a9;
		}
	}
	{
		bool L_97 = V_10;
		if (!L_97)
		{
			goto IL_0266;
		}
	}
	{
		String_t* L_98 = ___s0;
		bool L_99 = ___tryParse3;
		Exception_t ** L_100 = ___exc5;
		bool L_101 = Int32_JumpOverWhite_mB23EDD8BBCD11B42ABB32EFD72C90099B84B59AA((int32_t*)(&V_11), L_98, (bool)1, L_99, (Exception_t **)L_100, /*hidden argument*/NULL);
		if (L_101)
		{
			goto IL_0266;
		}
	}
	{
		return (bool)0;
	}

IL_0266:
	{
		bool L_102 = V_15;
		if (!L_102)
		{
			goto IL_02a9;
		}
	}
	{
		bool L_103 = V_14;
		if (L_103)
		{
			goto IL_02a9;
		}
	}
	{
		bool L_104 = V_8;
		if (!L_104)
		{
			goto IL_02a9;
		}
	}
	{
		String_t* L_105 = ___s0;
		NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * L_106 = V_0;
		Int32_FindSign_mA4B3C6B30D047EF6B3B1D365C65F5CEFFD8B2FF1((int32_t*)(&V_11), L_105, L_106, (bool*)(&V_14), (bool*)(&V_13), /*hidden argument*/NULL);
		bool L_107 = V_14;
		if (!L_107)
		{
			goto IL_02a9;
		}
	}
	{
		bool L_108 = V_10;
		if (!L_108)
		{
			goto IL_02a9;
		}
	}
	{
		String_t* L_109 = ___s0;
		bool L_110 = ___tryParse3;
		Exception_t ** L_111 = ___exc5;
		bool L_112 = Int32_JumpOverWhite_mB23EDD8BBCD11B42ABB32EFD72C90099B84B59AA((int32_t*)(&V_11), L_109, (bool)1, L_110, (Exception_t **)L_111, /*hidden argument*/NULL);
		if (L_112)
		{
			goto IL_02a9;
		}
	}
	{
		return (bool)0;
	}

IL_02a9:
	{
		V_16 = (((int64_t)((int64_t)0)));
		V_17 = 0;
		V_18 = (bool)0;
	}

IL_02b3:
	{
		String_t* L_113 = ___s0;
		int32_t L_114 = V_11;
		NullCheck(L_113);
		Il2CppChar L_115 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_113, L_114, /*hidden argument*/NULL);
		bool L_116 = V_3;
		bool L_117 = Int32_ValidDigit_mB2D66A01912631A8F8112932C71A3C6D91ECF57F(L_115, L_116, /*hidden argument*/NULL);
		if (L_117)
		{
			goto IL_0313;
		}
	}
	{
		bool L_118 = V_4;
		if (!L_118)
		{
			goto IL_02e5;
		}
	}
	{
		String_t* L_119 = ___s0;
		NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * L_120 = V_0;
		NullCheck(L_120);
		String_t* L_121 = NumberFormatInfo_get_NumberGroupSeparator_mAE19472DF8236D212CF7C0FB09AC1E5CE2B74DE3(L_120, /*hidden argument*/NULL);
		bool L_122 = Int32_FindOther_m58ADB14B31AE928628DDF04FAA89427430459119((int32_t*)(&V_11), L_119, L_121, /*hidden argument*/NULL);
		if (!L_122)
		{
			goto IL_02e5;
		}
	}
	{
		goto IL_043e;
	}

IL_02e5:
	{
		bool L_123 = V_18;
		if (L_123)
		{
			goto IL_030e;
		}
	}
	{
		bool L_124 = V_5;
		if (!L_124)
		{
			goto IL_030e;
		}
	}
	{
		String_t* L_125 = ___s0;
		NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * L_126 = V_0;
		NullCheck(L_126);
		String_t* L_127 = NumberFormatInfo_get_NumberDecimalSeparator_mFE4D5E9D517A6BA9B48C5E513B08E3E6D5B99754(L_126, /*hidden argument*/NULL);
		bool L_128 = Int32_FindOther_m58ADB14B31AE928628DDF04FAA89427430459119((int32_t*)(&V_11), L_125, L_127, /*hidden argument*/NULL);
		if (!L_128)
		{
			goto IL_030e;
		}
	}
	{
		V_18 = (bool)1;
		goto IL_043e;
	}

IL_030e:
	{
		goto IL_044b;
	}

IL_0313:
	{
		bool L_129 = V_3;
		if (!L_129)
		{
			goto IL_03b3;
		}
	}
	{
		int32_t L_130 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_130, (int32_t)1));
		String_t* L_131 = ___s0;
		int32_t L_132 = V_11;
		int32_t L_133 = L_132;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_133, (int32_t)1));
		NullCheck(L_131);
		Il2CppChar L_134 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_131, L_133, /*hidden argument*/NULL);
		V_20 = L_134;
		Il2CppChar L_135 = V_20;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_il2cpp_TypeInfo_var);
		bool L_136 = Char_IsDigit_m64DFE12D7DCF1AC634EA805421E06B4B18E1C036(L_135, /*hidden argument*/NULL);
		if (!L_136)
		{
			goto IL_0347;
		}
	}
	{
		Il2CppChar L_137 = V_20;
		V_19 = (((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_137, (int32_t)((int32_t)48))))));
		goto IL_036e;
	}

IL_0347:
	{
		Il2CppChar L_138 = V_20;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_il2cpp_TypeInfo_var);
		bool L_139 = Char_IsLower_mF2969FAEF7592967B28F40E91B20340EF5B4E245(L_138, /*hidden argument*/NULL);
		if (!L_139)
		{
			goto IL_0363;
		}
	}
	{
		Il2CppChar L_140 = V_20;
		V_19 = (((int64_t)((int64_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_140, (int32_t)((int32_t)97))), (int32_t)((int32_t)10))))));
		goto IL_036e;
	}

IL_0363:
	{
		Il2CppChar L_141 = V_20;
		V_19 = (((int64_t)((int64_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_141, (int32_t)((int32_t)65))), (int32_t)((int32_t)10))))));
	}

IL_036e:
	{
		bool L_142 = ___tryParse3;
		if (!L_142)
		{
			goto IL_03a3;
		}
	}
	{
		uint64_t L_143 = V_16;
		V_21 = (bool)((!(((uint64_t)L_143) <= ((uint64_t)(((int64_t)((int64_t)((int32_t)65535)))))))? 1 : 0);
		uint64_t L_144 = V_16;
		uint64_t L_145 = V_19;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_144, (int64_t)(((int64_t)((int64_t)((int32_t)16)))))), (int64_t)L_145));
		bool L_146 = V_21;
		if (!L_146)
		{
			goto IL_039e;
		}
	}
	{
		uint64_t L_147 = V_16;
		if ((!(((uint64_t)L_147) < ((uint64_t)(((int64_t)((int64_t)((int32_t)16))))))))
		{
			goto IL_039e;
		}
	}
	{
		return (bool)0;
	}

IL_039e:
	{
		goto IL_03ae;
	}

IL_03a3:
	{
		uint64_t L_148 = V_16;
		if (il2cpp_codegen_check_mul_oveflow_u64(L_148, (((int64_t)((int64_t)((int32_t)16))))))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, UInt64_Parse_m64DC370FE1AC82186A2E8D36AF019434AB2FEDCC_RuntimeMethod_var);
		uint64_t L_149 = V_19;
		if ((uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_148, (int64_t)(((int64_t)((int64_t)((int32_t)16)))))) > kIl2CppUInt64Max - (uint64_t)L_149)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, UInt64_Parse_m64DC370FE1AC82186A2E8D36AF019434AB2FEDCC_RuntimeMethod_var);
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_148, (int64_t)(((int64_t)((int64_t)((int32_t)16)))))), (int64_t)L_149));
	}

IL_03ae:
	{
		goto IL_043e;
	}

IL_03b3:
	{
		bool L_150 = V_18;
		if (!L_150)
		{
			goto IL_03f3;
		}
	}
	{
		int32_t L_151 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_151, (int32_t)1));
		String_t* L_152 = ___s0;
		int32_t L_153 = V_11;
		int32_t L_154 = L_153;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_154, (int32_t)1));
		NullCheck(L_152);
		Il2CppChar L_155 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_152, L_154, /*hidden argument*/NULL);
		if ((((int32_t)L_155) == ((int32_t)((int32_t)48))))
		{
			goto IL_03ee;
		}
	}
	{
		bool L_156 = ___tryParse3;
		if (L_156)
		{
			goto IL_03ec;
		}
	}
	{
		Exception_t ** L_157 = ___exc5;
		String_t* L_158 = Locale_GetText_m8335AC363D872105D0CE318A9CB1001A15813542(_stringLiteral24811694F722F05ECA04FCF43D25E232F46EA76F, /*hidden argument*/NULL);
		OverflowException_t0B5FFF1555598D499585564196861996A44507C5 * L_159 = (OverflowException_t0B5FFF1555598D499585564196861996A44507C5 *)il2cpp_codegen_object_new(OverflowException_t0B5FFF1555598D499585564196861996A44507C5_il2cpp_TypeInfo_var);
		OverflowException__ctor_m9D7E000E685C5BEEDC27E99DBF5A1AA8B739C8B6(L_159, L_158, /*hidden argument*/NULL);
		*((RuntimeObject **)L_157) = (RuntimeObject *)L_159;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_157, (RuntimeObject *)L_159);
	}

IL_03ec:
	{
		return (bool)0;
	}

IL_03ee:
	{
		goto IL_043e;
	}

IL_03f3:
	{
		int32_t L_160 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_160, (int32_t)1));
	}

IL_03f9:
	try
	{ // begin try (depth: 1)
		uint64_t L_161 = V_16;
		if (il2cpp_codegen_check_mul_oveflow_u64(L_161, (((int64_t)((int64_t)((int32_t)10))))))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, UInt64_Parse_m64DC370FE1AC82186A2E8D36AF019434AB2FEDCC_RuntimeMethod_var);
		String_t* L_162 = ___s0;
		int32_t L_163 = V_11;
		int32_t L_164 = L_163;
		if (((int64_t)L_164 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_164 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, UInt64_Parse_m64DC370FE1AC82186A2E8D36AF019434AB2FEDCC_RuntimeMethod_var);
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_164, (int32_t)1));
		NullCheck(L_162);
		Il2CppChar L_165 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_162, L_164, /*hidden argument*/NULL);
		if (((int64_t)L_165 - (int64_t)((int32_t)48) < (int64_t)kIl2CppInt32Min) || ((int64_t)L_165 - (int64_t)((int32_t)48) > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, UInt64_Parse_m64DC370FE1AC82186A2E8D36AF019434AB2FEDCC_RuntimeMethod_var);
		if ((uint64_t)(((int32_t)il2cpp_codegen_subtract((int32_t)L_165, (int32_t)((int32_t)48)))) > std::numeric_limits<uint64_t>::max()) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, UInt64_Parse_m64DC370FE1AC82186A2E8D36AF019434AB2FEDCC_RuntimeMethod_var);
		if ((uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_161, (int64_t)(((int64_t)((int64_t)((int32_t)10)))))) > kIl2CppUInt64Max - (uint64_t)(((uint64_t)((uint64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_165, (int32_t)((int32_t)48)))))))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, UInt64_Parse_m64DC370FE1AC82186A2E8D36AF019434AB2FEDCC_RuntimeMethod_var);
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_161, (int64_t)(((int64_t)((int64_t)((int32_t)10)))))), (int64_t)(((uint64_t)((uint64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_165, (int32_t)((int32_t)48))))))));
		goto IL_043e;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (OverflowException_t0B5FFF1555598D499585564196861996A44507C5_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0418;
		throw e;
	}

CATCH_0418:
	{ // begin catch(System.OverflowException)
		{
			bool L_166 = ___tryParse3;
			if (L_166)
			{
				goto IL_0431;
			}
		}

IL_041f:
		{
			Exception_t ** L_167 = ___exc5;
			String_t* L_168 = Locale_GetText_m8335AC363D872105D0CE318A9CB1001A15813542(_stringLiteral24811694F722F05ECA04FCF43D25E232F46EA76F, /*hidden argument*/NULL);
			OverflowException_t0B5FFF1555598D499585564196861996A44507C5 * L_169 = (OverflowException_t0B5FFF1555598D499585564196861996A44507C5 *)il2cpp_codegen_object_new(OverflowException_t0B5FFF1555598D499585564196861996A44507C5_il2cpp_TypeInfo_var);
			OverflowException__ctor_m9D7E000E685C5BEEDC27E99DBF5A1AA8B739C8B6(L_169, L_168, /*hidden argument*/NULL);
			*((RuntimeObject **)L_167) = (RuntimeObject *)L_169;
			Il2CppCodeGenWriteBarrier((RuntimeObject **)L_167, (RuntimeObject *)L_169);
		}

IL_0431:
		{
			V_22 = (bool)0;
			goto IL_05e4;
		}

IL_0439:
		{
			; // IL_0439: leave IL_043e
		}
	} // end catch (depth: 1)

IL_043e:
	{
		int32_t L_170 = V_11;
		String_t* L_171 = ___s0;
		NullCheck(L_171);
		int32_t L_172 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_171, /*hidden argument*/NULL);
		if ((((int32_t)L_170) < ((int32_t)L_172)))
		{
			goto IL_02b3;
		}
	}

IL_044b:
	{
		int32_t L_173 = V_17;
		if (L_173)
		{
			goto IL_0462;
		}
	}
	{
		bool L_174 = ___tryParse3;
		if (L_174)
		{
			goto IL_0460;
		}
	}
	{
		Exception_t ** L_175 = ___exc5;
		Exception_t * L_176 = Int32_GetFormatException_m6C226C76C95604F328CCDBA8A4C2916FCCA951F7(/*hidden argument*/NULL);
		*((RuntimeObject **)L_175) = (RuntimeObject *)L_176;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_175, (RuntimeObject *)L_176);
	}

IL_0460:
	{
		return (bool)0;
	}

IL_0462:
	{
		bool L_177 = V_7;
		if (!L_177)
		{
			goto IL_04af;
		}
	}
	{
		bool L_178 = V_14;
		if (L_178)
		{
			goto IL_04af;
		}
	}
	{
		String_t* L_179 = ___s0;
		NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * L_180 = V_0;
		Int32_FindSign_mA4B3C6B30D047EF6B3B1D365C65F5CEFFD8B2FF1((int32_t*)(&V_11), L_179, L_180, (bool*)(&V_14), (bool*)(&V_13), /*hidden argument*/NULL);
		bool L_181 = V_14;
		if (!L_181)
		{
			goto IL_04af;
		}
	}
	{
		bool L_182 = V_9;
		if (!L_182)
		{
			goto IL_049e;
		}
	}
	{
		String_t* L_183 = ___s0;
		bool L_184 = ___tryParse3;
		Exception_t ** L_185 = ___exc5;
		bool L_186 = Int32_JumpOverWhite_mB23EDD8BBCD11B42ABB32EFD72C90099B84B59AA((int32_t*)(&V_11), L_183, (bool)1, L_184, (Exception_t **)L_185, /*hidden argument*/NULL);
		if (L_186)
		{
			goto IL_049e;
		}
	}
	{
		return (bool)0;
	}

IL_049e:
	{
		bool L_187 = V_2;
		if (!L_187)
		{
			goto IL_04af;
		}
	}
	{
		String_t* L_188 = ___s0;
		NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * L_189 = V_0;
		Int32_FindCurrency_m9EA01794AEA18D803880375B21DDC000CAFAF328((int32_t*)(&V_11), L_188, L_189, (bool*)(&V_15), /*hidden argument*/NULL);
	}

IL_04af:
	{
		bool L_190 = V_2;
		if (!L_190)
		{
			goto IL_0503;
		}
	}
	{
		bool L_191 = V_15;
		if (L_191)
		{
			goto IL_0503;
		}
	}
	{
		String_t* L_192 = ___s0;
		NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * L_193 = V_0;
		Int32_FindCurrency_m9EA01794AEA18D803880375B21DDC000CAFAF328((int32_t*)(&V_11), L_192, L_193, (bool*)(&V_15), /*hidden argument*/NULL);
		bool L_194 = V_15;
		if (!L_194)
		{
			goto IL_0503;
		}
	}
	{
		bool L_195 = V_9;
		if (!L_195)
		{
			goto IL_04e8;
		}
	}
	{
		String_t* L_196 = ___s0;
		bool L_197 = ___tryParse3;
		Exception_t ** L_198 = ___exc5;
		bool L_199 = Int32_JumpOverWhite_mB23EDD8BBCD11B42ABB32EFD72C90099B84B59AA((int32_t*)(&V_11), L_196, (bool)1, L_197, (Exception_t **)L_198, /*hidden argument*/NULL);
		if (L_199)
		{
			goto IL_04e8;
		}
	}
	{
		return (bool)0;
	}

IL_04e8:
	{
		bool L_200 = V_14;
		if (L_200)
		{
			goto IL_0503;
		}
	}
	{
		bool L_201 = V_7;
		if (!L_201)
		{
			goto IL_0503;
		}
	}
	{
		String_t* L_202 = ___s0;
		NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * L_203 = V_0;
		Int32_FindSign_mA4B3C6B30D047EF6B3B1D365C65F5CEFFD8B2FF1((int32_t*)(&V_11), L_202, L_203, (bool*)(&V_14), (bool*)(&V_13), /*hidden argument*/NULL);
	}

IL_0503:
	{
		bool L_204 = V_9;
		if (!L_204)
		{
			goto IL_052a;
		}
	}
	{
		int32_t L_205 = V_11;
		String_t* L_206 = ___s0;
		NullCheck(L_206);
		int32_t L_207 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_206, /*hidden argument*/NULL);
		if ((((int32_t)L_205) >= ((int32_t)L_207)))
		{
			goto IL_052a;
		}
	}
	{
		String_t* L_208 = ___s0;
		bool L_209 = ___tryParse3;
		Exception_t ** L_210 = ___exc5;
		bool L_211 = Int32_JumpOverWhite_mB23EDD8BBCD11B42ABB32EFD72C90099B84B59AA((int32_t*)(&V_11), L_208, (bool)0, L_209, (Exception_t **)L_210, /*hidden argument*/NULL);
		if (L_211)
		{
			goto IL_052a;
		}
	}
	{
		return (bool)0;
	}

IL_052a:
	{
		bool L_212 = V_12;
		if (!L_212)
		{
			goto IL_0589;
		}
	}
	{
		int32_t L_213 = V_11;
		String_t* L_214 = ___s0;
		NullCheck(L_214);
		int32_t L_215 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_214, /*hidden argument*/NULL);
		if ((((int32_t)L_213) >= ((int32_t)L_215)))
		{
			goto IL_0552;
		}
	}
	{
		String_t* L_216 = ___s0;
		int32_t L_217 = V_11;
		int32_t L_218 = L_217;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_218, (int32_t)1));
		NullCheck(L_216);
		Il2CppChar L_219 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_216, L_218, /*hidden argument*/NULL);
		if ((((int32_t)L_219) == ((int32_t)((int32_t)41))))
		{
			goto IL_0562;
		}
	}

IL_0552:
	{
		bool L_220 = ___tryParse3;
		if (L_220)
		{
			goto IL_0560;
		}
	}
	{
		Exception_t ** L_221 = ___exc5;
		Exception_t * L_222 = Int32_GetFormatException_m6C226C76C95604F328CCDBA8A4C2916FCCA951F7(/*hidden argument*/NULL);
		*((RuntimeObject **)L_221) = (RuntimeObject *)L_222;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_221, (RuntimeObject *)L_222);
	}

IL_0560:
	{
		return (bool)0;
	}

IL_0562:
	{
		bool L_223 = V_9;
		if (!L_223)
		{
			goto IL_0589;
		}
	}
	{
		int32_t L_224 = V_11;
		String_t* L_225 = ___s0;
		NullCheck(L_225);
		int32_t L_226 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_225, /*hidden argument*/NULL);
		if ((((int32_t)L_224) >= ((int32_t)L_226)))
		{
			goto IL_0589;
		}
	}
	{
		String_t* L_227 = ___s0;
		bool L_228 = ___tryParse3;
		Exception_t ** L_229 = ___exc5;
		bool L_230 = Int32_JumpOverWhite_mB23EDD8BBCD11B42ABB32EFD72C90099B84B59AA((int32_t*)(&V_11), L_227, (bool)0, L_228, (Exception_t **)L_229, /*hidden argument*/NULL);
		if (L_230)
		{
			goto IL_0589;
		}
	}
	{
		return (bool)0;
	}

IL_0589:
	{
		int32_t L_231 = V_11;
		String_t* L_232 = ___s0;
		NullCheck(L_232);
		int32_t L_233 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_232, /*hidden argument*/NULL);
		if ((((int32_t)L_231) >= ((int32_t)L_233)))
		{
			goto IL_05b3;
		}
	}
	{
		String_t* L_234 = ___s0;
		int32_t L_235 = V_11;
		NullCheck(L_234);
		Il2CppChar L_236 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_234, L_235, /*hidden argument*/NULL);
		if (!L_236)
		{
			goto IL_05b3;
		}
	}
	{
		bool L_237 = ___tryParse3;
		if (L_237)
		{
			goto IL_05b1;
		}
	}
	{
		Exception_t ** L_238 = ___exc5;
		Exception_t * L_239 = Int32_GetFormatException_m6C226C76C95604F328CCDBA8A4C2916FCCA951F7(/*hidden argument*/NULL);
		*((RuntimeObject **)L_238) = (RuntimeObject *)L_239;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_238, (RuntimeObject *)L_239);
	}

IL_05b1:
	{
		return (bool)0;
	}

IL_05b3:
	{
		bool L_240 = V_13;
		if (!L_240)
		{
			goto IL_05dd;
		}
	}
	{
		uint64_t L_241 = V_16;
		if ((!(((uint64_t)L_241) > ((uint64_t)(((int64_t)((int64_t)0)))))))
		{
			goto IL_05dd;
		}
	}
	{
		bool L_242 = ___tryParse3;
		if (L_242)
		{
			goto IL_05db;
		}
	}
	{
		Exception_t ** L_243 = ___exc5;
		String_t* L_244 = Locale_GetText_m8335AC363D872105D0CE318A9CB1001A15813542(_stringLiteral5371656E62DB527D005E1031DDDEABE47B69C2B7, /*hidden argument*/NULL);
		OverflowException_t0B5FFF1555598D499585564196861996A44507C5 * L_245 = (OverflowException_t0B5FFF1555598D499585564196861996A44507C5 *)il2cpp_codegen_object_new(OverflowException_t0B5FFF1555598D499585564196861996A44507C5_il2cpp_TypeInfo_var);
		OverflowException__ctor_m9D7E000E685C5BEEDC27E99DBF5A1AA8B739C8B6(L_245, L_244, /*hidden argument*/NULL);
		*((RuntimeObject **)L_243) = (RuntimeObject *)L_245;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_243, (RuntimeObject *)L_245);
	}

IL_05db:
	{
		return (bool)0;
	}

IL_05dd:
	{
		uint64_t* L_246 = ___result4;
		uint64_t L_247 = V_16;
		*((int64_t*)L_246) = (int64_t)L_247;
		return (bool)1;
	}

IL_05e4:
	{
		bool L_248 = V_22;
		return L_248;
	}
}
// System.UInt64 System.UInt64::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR uint64_t UInt64_Parse_m4DBE576353DDF2993426DE1CAB5E0E8344FCCA6A (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_Parse_m4DBE576353DDF2993426DE1CAB5E0E8344FCCA6A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	uint64_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		int32_t L_1 = ___style1;
		RuntimeObject* L_2 = ___provider2;
		bool L_3 = UInt64_Parse_m64DC370FE1AC82186A2E8D36AF019434AB2FEDCC(L_0, L_1, L_2, (bool)0, (uint64_t*)(&V_1), (Exception_t **)(&V_0), /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0014;
		}
	}
	{
		Exception_t * L_4 = V_0;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, UInt64_Parse_m4DBE576353DDF2993426DE1CAB5E0E8344FCCA6A_RuntimeMethod_var);
	}

IL_0014:
	{
		uint64_t L_5 = V_1;
		return L_5;
	}
}
// System.Boolean System.UInt64::TryParse(System.String,System.UInt64&)
extern "C" IL2CPP_METHOD_ATTR bool UInt64_TryParse_mFCFB5A3DE091D6608C69ED8B267B2D23238A1A77 (String_t* ___s0, uint64_t* ___result1, const RuntimeMethod* method)
{
	Exception_t * V_0 = NULL;
	{
		String_t* L_0 = ___s0;
		uint64_t* L_1 = ___result1;
		bool L_2 = UInt64_Parse_m64DC370FE1AC82186A2E8D36AF019434AB2FEDCC(L_0, 7, (RuntimeObject*)NULL, (bool)1, (uint64_t*)L_1, (Exception_t **)(&V_0), /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		uint64_t* L_3 = ___result1;
		*((int64_t*)L_3) = (int64_t)(((int64_t)((int64_t)0)));
		return (bool)0;
	}

IL_0017:
	{
		return (bool)1;
	}
}
// System.String System.UInt64::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* UInt64_ToString_mDDB657B6C06A57D111E9C9BB89D15199F9CE0D30 (uint64_t* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_ToString_mDDB657B6C06A57D111E9C9BB89D15199F9CE0D30_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = *((int64_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t68475AD595A7C11B0615994FBA7B580C52E60824_il2cpp_TypeInfo_var);
		String_t* L_1 = NumberFormatter_NumberToString_m6F6C1DA56D7D20034D89A0A048A3A77A2B152770(L_0, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  String_t* UInt64_ToString_mDDB657B6C06A57D111E9C9BB89D15199F9CE0D30_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_ToString_mDDB657B6C06A57D111E9C9BB89D15199F9CE0D30(_thisAdjusted, method);
}
// System.String System.UInt64::ToString(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* UInt64_ToString_m58FD557196BB2440D450C98FF9DFDF3B310F67CF (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_ToString_m58FD557196BB2440D450C98FF9DFDF3B310F67CF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = *((int64_t*)__this);
		RuntimeObject* L_1 = ___provider0;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t68475AD595A7C11B0615994FBA7B580C52E60824_il2cpp_TypeInfo_var);
		String_t* L_2 = NumberFormatter_NumberToString_m6F6C1DA56D7D20034D89A0A048A3A77A2B152770(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
extern "C"  String_t* UInt64_ToString_m58FD557196BB2440D450C98FF9DFDF3B310F67CF_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_ToString_m58FD557196BB2440D450C98FF9DFDF3B310F67CF(_thisAdjusted, ___provider0, method);
}
// System.String System.UInt64::ToString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* UInt64_ToString_m062289738F319809BFD8193C3EB7703D2DE3292A (uint64_t* __this, String_t* ___format0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___format0;
		String_t* L_1 = UInt64_ToString_mA8C13043CA751D73C8F9D57CCB4A5FC07E78B90A((uint64_t*)__this, L_0, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  String_t* UInt64_ToString_m062289738F319809BFD8193C3EB7703D2DE3292A_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_ToString_m062289738F319809BFD8193C3EB7703D2DE3292A(_thisAdjusted, ___format0, method);
}
// System.String System.UInt64::ToString(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* UInt64_ToString_mA8C13043CA751D73C8F9D57CCB4A5FC07E78B90A (uint64_t* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_ToString_mA8C13043CA751D73C8F9D57CCB4A5FC07E78B90A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___format0;
		int64_t L_1 = *((int64_t*)__this);
		RuntimeObject* L_2 = ___provider1;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t68475AD595A7C11B0615994FBA7B580C52E60824_il2cpp_TypeInfo_var);
		String_t* L_3 = NumberFormatter_NumberToString_m8271FA6BE5B57F3EF6C67E6E536D15CB4EE9F88F(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
extern "C"  String_t* UInt64_ToString_mA8C13043CA751D73C8F9D57CCB4A5FC07E78B90A_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_ToString_mA8C13043CA751D73C8F9D57CCB4A5FC07E78B90A(_thisAdjusted, ___format0, ___provider1, method);
}
// System.TypeCode System.UInt64::GetTypeCode()
extern "C" IL2CPP_METHOD_ATTR int32_t UInt64_GetTypeCode_mA0AD4300BA91209E94E316548A132F9AE021D210 (uint64_t* __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(((int32_t)12));
	}
}
extern "C"  int32_t UInt64_GetTypeCode_mA0AD4300BA91209E94E316548A132F9AE021D210_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_GetTypeCode_mA0AD4300BA91209E94E316548A132F9AE021D210(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.UIntPtr::.ctor(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void UIntPtr__ctor_m66E198CCA6B551D852448BC9B89FDCC1E61C60AA (uintptr_t* __this, uint32_t ___value0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___value0;
		*__this = ((((uintptr_t)L_0)));
		return;
	}
}
extern "C"  void UIntPtr__ctor_m66E198CCA6B551D852448BC9B89FDCC1E61C60AA_AdjustorThunk (RuntimeObject * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	uintptr_t* _thisAdjusted = reinterpret_cast<uintptr_t*>(__this + 1);
	UIntPtr__ctor_m66E198CCA6B551D852448BC9B89FDCC1E61C60AA(_thisAdjusted, ___value0, method);
}
// System.Void System.UIntPtr::.cctor()
extern "C" IL2CPP_METHOD_ATTR void UIntPtr__cctor_m5CEC59A10CF421074BA41EF798AC069ABB40ECCE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIntPtr__cctor_m5CEC59A10CF421074BA41EF798AC069ABB40ECCE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		uintptr_t L_0;
		memset(&L_0, 0, sizeof(L_0));
		UIntPtr__ctor_m66E198CCA6B551D852448BC9B89FDCC1E61C60AA((&L_0), 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UIntPtr::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m117ECE6EA8017FA6250B7D59CFE40D794090C9D6 (uintptr_t* __this, SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * ___info0, StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m117ECE6EA8017FA6250B7D59CFE40D794090C9D6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 * L_1 = (ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 *)il2cpp_codegen_object_new(ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mBA1072348F0861F80512F3BB2BE685EDBB02F740(L_1, _stringLiteral59BD0A3FF43B32849B319E645D4798D8A5D1E889, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m117ECE6EA8017FA6250B7D59CFE40D794090C9D6_RuntimeMethod_var);
	}

IL_0011:
	{
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_2 = ___info0;
		uintptr_t L_3 = *__this;
		NullCheck(L_2);
		SerializationInfo_AddValue_mD1F127E2DEF9FCD92A4EE6545DAAB7BBB6E14F33(L_2, _stringLiteralB35BB38DF9605E4C5858316B7853A16E42EA6997, (((int64_t)((uint64_t)L_3))), /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m117ECE6EA8017FA6250B7D59CFE40D794090C9D6_AdjustorThunk (RuntimeObject * __this, SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * ___info0, StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1  ___context1, const RuntimeMethod* method)
{
	uintptr_t* _thisAdjusted = reinterpret_cast<uintptr_t*>(__this + 1);
	UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m117ECE6EA8017FA6250B7D59CFE40D794090C9D6(_thisAdjusted, ___info0, ___context1, method);
}
// System.Boolean System.UIntPtr::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool UIntPtr_Equals_m099FA719C2D00C6231F941B1651A1165743C84CA (uintptr_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIntPtr_Equals_m099FA719C2D00C6231F941B1651A1165743C84CA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uintptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, UIntPtr_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		V_0 = ((*(uintptr_t*)((uintptr_t*)UnBox(L_1, UIntPtr_t_il2cpp_TypeInfo_var))));
		uintptr_t L_2 = *__this;
		uintptr_t L_3 = V_0;
		return (bool)((((intptr_t)L_2) == ((intptr_t)L_3))? 1 : 0);
	}

IL_0022:
	{
		return (bool)0;
	}
}
extern "C"  bool UIntPtr_Equals_m099FA719C2D00C6231F941B1651A1165743C84CA_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	uintptr_t* _thisAdjusted = reinterpret_cast<uintptr_t*>(__this + 1);
	return UIntPtr_Equals_m099FA719C2D00C6231F941B1651A1165743C84CA(_thisAdjusted, ___obj0, method);
}
// System.Int32 System.UIntPtr::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t UIntPtr_GetHashCode_mAF75E1D8E3A055D68DD17DA3A99B29F260B68B04 (uintptr_t* __this, const RuntimeMethod* method)
{
	{
		uintptr_t L_0 = *__this;
		return (((int32_t)((int32_t)L_0)));
	}
}
extern "C"  int32_t UIntPtr_GetHashCode_mAF75E1D8E3A055D68DD17DA3A99B29F260B68B04_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	uintptr_t* _thisAdjusted = reinterpret_cast<uintptr_t*>(__this + 1);
	return UIntPtr_GetHashCode_mAF75E1D8E3A055D68DD17DA3A99B29F260B68B04(_thisAdjusted, method);
}
// System.String System.UIntPtr::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* UIntPtr_ToString_mECE076D76071F88BD61F186065317BCEE2DCDC73 (uintptr_t* __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uintptr_t L_0 = *__this;
		V_0 = (((int32_t)((uint32_t)L_0)));
		String_t* L_1 = UInt32_ToString_mC174A5A4A8166D0F152D94A65CB535E4DAC99F4D((uint32_t*)(&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  String_t* UIntPtr_ToString_mECE076D76071F88BD61F186065317BCEE2DCDC73_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	uintptr_t* _thisAdjusted = reinterpret_cast<uintptr_t*>(__this + 1);
	return UIntPtr_ToString_mECE076D76071F88BD61F186065317BCEE2DCDC73(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.UnauthorizedAccessException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnauthorizedAccessException__ctor_mF27352A019FCA746707FE8467D70623327A29286 (UnauthorizedAccessException_t593701C7ADFE096EC0340554C2E030FFCEEC369B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnauthorizedAccessException__ctor_mF27352A019FCA746707FE8467D70623327A29286_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Locale_GetText_m8335AC363D872105D0CE318A9CB1001A15813542(_stringLiteral81CADB6DAE0B42FA83FD2FAB0350567E31D0D22E, /*hidden argument*/NULL);
		SystemException__ctor_m6D95D885FFDF04207E9E0EDAD84D0748CB9C2FA7(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_mADAD3BE64DB3BA39AAEDD7F0B1EF2AB7C4B53CDB(__this, ((int32_t)-2146233088), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UnauthorizedAccessException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void UnauthorizedAccessException__ctor_m1837095F59B24115D16F5CC3A4F488A9B45B6838 (UnauthorizedAccessException_t593701C7ADFE096EC0340554C2E030FFCEEC369B * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		SystemException__ctor_m6D95D885FFDF04207E9E0EDAD84D0748CB9C2FA7(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_mADAD3BE64DB3BA39AAEDD7F0B1EF2AB7C4B53CDB(__this, ((int32_t)-2146233088), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UnauthorizedAccessException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void UnauthorizedAccessException__ctor_m40BD61240D8F7FA5B8B8DADC9B7B186DBF968E17 (UnauthorizedAccessException_t593701C7ADFE096EC0340554C2E030FFCEEC369B * __this, SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * ___info0, StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1  ___context1, const RuntimeMethod* method)
{
	{
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_0 = ___info0;
		StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1  L_1 = ___context1;
		SystemException__ctor_m13CFB82265CAA809903F63991AB42817D6CC3534(__this, L_0, L_1, /*hidden argument*/NULL);
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
// System.Void System.UnhandledExceptionEventArgs::.ctor(System.Object,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UnhandledExceptionEventArgs__ctor_m6C5F64C155794F0CAC13285CEE09322B174921F4 (UnhandledExceptionEventArgs_t2B19479B2BC866C465A8E07BEA9C6027CB168BA2 * __this, RuntimeObject * ___exception0, bool ___isTerminating1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnhandledExceptionEventArgs__ctor_m6C5F64C155794F0CAC13285CEE09322B174921F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tA4C15C1D2AB4B139169B1942C1477933E00DCA17_il2cpp_TypeInfo_var);
		EventArgs__ctor_mB712E19C94A622FFFE48714A6D43E02E9E6009D4(__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___exception0;
		__this->set_exception_1(L_0);
		bool L_1 = ___isTerminating1;
		__this->set_m_isTerminating_2(L_1);
		return;
	}
}
// System.Object System.UnhandledExceptionEventArgs::get_ExceptionObject()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * UnhandledExceptionEventArgs_get_ExceptionObject_mC8F5491EA9B57E2326F01A664F0A6523D9FAF8DE (UnhandledExceptionEventArgs_t2B19479B2BC866C465A8E07BEA9C6027CB168BA2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_exception_1();
		return L_0;
	}
}
// System.Boolean System.UnhandledExceptionEventArgs::get_IsTerminating()
extern "C" IL2CPP_METHOD_ATTR bool UnhandledExceptionEventArgs_get_IsTerminating_m01779BB68E0EFE15E8CC46D6DF47DFCEE22E0096 (UnhandledExceptionEventArgs_t2B19479B2BC866C465A8E07BEA9C6027CB168BA2 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_isTerminating_2();
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
// System.Void System.UnhandledExceptionEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnhandledExceptionEventHandler__ctor_m7E23C62668D3C8082A36382C85CEDEFB45165FAB (UnhandledExceptionEventHandler_tB7988286F96CF5350E4037A92C900D84BB7FB650 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void System.UnhandledExceptionEventHandler::Invoke(System.Object,System.UnhandledExceptionEventArgs)
extern "C" IL2CPP_METHOD_ATTR void UnhandledExceptionEventHandler_Invoke_m460740022E4A4F884803C974F64025D314E5D7CF (UnhandledExceptionEventHandler_tB7988286F96CF5350E4037A92C900D84BB7FB650 * __this, RuntimeObject * ___sender0, UnhandledExceptionEventArgs_t2B19479B2BC866C465A8E07BEA9C6027CB168BA2 * ___e1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		UnhandledExceptionEventHandler_Invoke_m460740022E4A4F884803C974F64025D314E5D7CF((UnhandledExceptionEventHandler_tB7988286F96CF5350E4037A92C900D84BB7FB650 *)__this->get_prev_9(), ___sender0, ___e1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
	if (___methodIsStatic)
	{
		if (___parameterCount == 2)
		{
			// open
			typedef void (*FunctionPointerType) (RuntimeObject *, UnhandledExceptionEventArgs_t2B19479B2BC866C465A8E07BEA9C6027CB168BA2 *, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (void*, RuntimeObject *, UnhandledExceptionEventArgs_t2B19479B2BC866C465A8E07BEA9C6027CB168BA2 *, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
		}
	}
	else if (___parameterCount != 2)
	{
		// open
		if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
		{
			if (il2cpp_codegen_method_is_generic_instance(targetMethod))
			{
				if (il2cpp_codegen_method_is_interface_method(targetMethod))
					GenericInterfaceActionInvoker1< UnhandledExceptionEventArgs_t2B19479B2BC866C465A8E07BEA9C6027CB168BA2 * >::Invoke(targetMethod, ___sender0, ___e1);
				else
					GenericVirtActionInvoker1< UnhandledExceptionEventArgs_t2B19479B2BC866C465A8E07BEA9C6027CB168BA2 * >::Invoke(targetMethod, ___sender0, ___e1);
			}
			else
			{
				if (il2cpp_codegen_method_is_interface_method(targetMethod))
					InterfaceActionInvoker1< UnhandledExceptionEventArgs_t2B19479B2BC866C465A8E07BEA9C6027CB168BA2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___e1);
				else
					VirtActionInvoker1< UnhandledExceptionEventArgs_t2B19479B2BC866C465A8E07BEA9C6027CB168BA2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___e1);
			}
		}
		else
		{
			typedef void (*FunctionPointerType) (RuntimeObject *, UnhandledExceptionEventArgs_t2B19479B2BC866C465A8E07BEA9C6027CB168BA2 *, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
		}
	}
	else
	{
		// closed
		if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
		{
			if (il2cpp_codegen_method_is_generic_instance(targetMethod))
			{
				if (il2cpp_codegen_method_is_interface_method(targetMethod))
					GenericInterfaceActionInvoker2< RuntimeObject *, UnhandledExceptionEventArgs_t2B19479B2BC866C465A8E07BEA9C6027CB168BA2 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
				else
					GenericVirtActionInvoker2< RuntimeObject *, UnhandledExceptionEventArgs_t2B19479B2BC866C465A8E07BEA9C6027CB168BA2 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
			}
			else
			{
				if (il2cpp_codegen_method_is_interface_method(targetMethod))
					InterfaceActionInvoker2< RuntimeObject *, UnhandledExceptionEventArgs_t2B19479B2BC866C465A8E07BEA9C6027CB168BA2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___e1);
				else
					VirtActionInvoker2< RuntimeObject *, UnhandledExceptionEventArgs_t2B19479B2BC866C465A8E07BEA9C6027CB168BA2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___e1);
			}
		}
		else
		{
			typedef void (*FunctionPointerType) (void*, RuntimeObject *, UnhandledExceptionEventArgs_t2B19479B2BC866C465A8E07BEA9C6027CB168BA2 *, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
		}
	}
}
// System.IAsyncResult System.UnhandledExceptionEventHandler::BeginInvoke(System.Object,System.UnhandledExceptionEventArgs,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnhandledExceptionEventHandler_BeginInvoke_m5A0132DEB69F3FDDC4849B5B929107C3B8DA6385 (UnhandledExceptionEventHandler_tB7988286F96CF5350E4037A92C900D84BB7FB650 * __this, RuntimeObject * ___sender0, UnhandledExceptionEventArgs_t2B19479B2BC866C465A8E07BEA9C6027CB168BA2 * ___e1, AsyncCallback_t74ABD1277F711E7FBDCB00E169A63DEFD39E86A2 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void System.UnhandledExceptionEventHandler::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnhandledExceptionEventHandler_EndInvoke_m0B7AB330573BC13C493071793143309E1C307389 (UnhandledExceptionEventHandler_tB7988286F96CF5350E4037A92C900D84BB7FB650 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.UnitySerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void UnitySerializationHolder__ctor_mAB880030F40C641C423D92F8982190FC09B3DBE0 (UnitySerializationHolder_t1F3CD67778C9EC0C6F3A05CC6F44A4CC047B7307 * __this, SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * ___info0, StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1  ___ctx1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder__ctor_mAB880030F40C641C423D92F8982190FC09B3DBE0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_0 = ___info0;
		NullCheck(L_0);
		String_t* L_1 = SerializationInfo_GetString_m70A93D16FAA658E8F1D563A656F2E2025BE8906A(L_0, _stringLiteralE5E429BCC9C2E4A41A3C7A4D96203BE6CB273B11, /*hidden argument*/NULL);
		__this->set__data_0(L_1);
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_2 = ___info0;
		NullCheck(L_2);
		int32_t L_3 = SerializationInfo_GetInt32_m6AC6D412C57BCE31EE1D8E1224F6DECBF5A68B1A(L_2, _stringLiteralD3B81375F999BE146F923A83BD6CBA9441E1F676, /*hidden argument*/NULL);
		__this->set__unityType_1((((int32_t)((uint8_t)L_3))));
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_4 = ___info0;
		NullCheck(L_4);
		String_t* L_5 = SerializationInfo_GetString_m70A93D16FAA658E8F1D563A656F2E2025BE8906A(L_4, _stringLiteralF0541457E2B7EF76AA2DDC177C44B4FF6B95E9C5, /*hidden argument*/NULL);
		__this->set__assemblyName_2(L_5);
		return;
	}
}
// System.Void System.UnitySerializationHolder::GetTypeData(System.Type,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void UnitySerializationHolder_GetTypeData_mE58EEADEA8C2086B9DE4A8313711AB62F1C1CA58 (Type_t * ___instance0, SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * ___info1, StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1  ___ctx2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder_GetTypeData_mE58EEADEA8C2086B9DE4A8313711AB62F1C1CA58_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_0 = ___info1;
		Type_t * L_1 = ___instance0;
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String System.Type::get_FullName() */, L_1);
		NullCheck(L_0);
		SerializationInfo_AddValue_m5B3E183DD8F7D38D1A1EAE3C2826EF8FBE127580(L_0, _stringLiteralE5E429BCC9C2E4A41A3C7A4D96203BE6CB273B11, L_2, /*hidden argument*/NULL);
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_3 = ___info1;
		NullCheck(L_3);
		SerializationInfo_AddValue_m17E95375C618FC19411D2E86E53497825B5A9D02(L_3, _stringLiteralD3B81375F999BE146F923A83BD6CBA9441E1F676, 4, /*hidden argument*/NULL);
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_4 = ___info1;
		Type_t * L_5 = ___instance0;
		NullCheck(L_5);
		Assembly_t * L_6 = VirtFuncInvoker0< Assembly_t * >::Invoke(15 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_5);
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.Assembly::get_FullName() */, L_6);
		NullCheck(L_4);
		SerializationInfo_AddValue_m5B3E183DD8F7D38D1A1EAE3C2826EF8FBE127580(L_4, _stringLiteralF0541457E2B7EF76AA2DDC177C44B4FF6B95E9C5, L_7, /*hidden argument*/NULL);
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_8 = ___info1;
		RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  L_9 = { reinterpret_cast<intptr_t> (UnitySerializationHolder_t1F3CD67778C9EC0C6F3A05CC6F44A4CC047B7307_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m8326E3405B647C99882C2E411C459944B0598D73(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		SerializationInfo_SetType_m32D2E2BB46664D1A4B8B9051D4388ABAA3D6A58C(L_8, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UnitySerializationHolder::GetDBNullData(System.DBNull,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void UnitySerializationHolder_GetDBNullData_m6A872BB3305DE2035081EE77FF61D4D0C9EE5CB4 (DBNull_tE7FF9F06B07B9177FEA5297B657A3A7688526B6A * ___instance0, SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * ___info1, StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1  ___ctx2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder_GetDBNullData_m6A872BB3305DE2035081EE77FF61D4D0C9EE5CB4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_0 = ___info1;
		NullCheck(L_0);
		SerializationInfo_AddValue_m5B3E183DD8F7D38D1A1EAE3C2826EF8FBE127580(L_0, _stringLiteralE5E429BCC9C2E4A41A3C7A4D96203BE6CB273B11, NULL, /*hidden argument*/NULL);
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_1 = ___info1;
		NullCheck(L_1);
		SerializationInfo_AddValue_m17E95375C618FC19411D2E86E53497825B5A9D02(L_1, _stringLiteralD3B81375F999BE146F923A83BD6CBA9441E1F676, 2, /*hidden argument*/NULL);
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_2 = ___info1;
		DBNull_tE7FF9F06B07B9177FEA5297B657A3A7688526B6A * L_3 = ___instance0;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m993E65F4E4457CE1761C49B188A6CF858597BDDE(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Assembly_t * L_5 = VirtFuncInvoker0< Assembly_t * >::Invoke(15 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_4);
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.Assembly::get_FullName() */, L_5);
		NullCheck(L_2);
		SerializationInfo_AddValue_m5B3E183DD8F7D38D1A1EAE3C2826EF8FBE127580(L_2, _stringLiteralF0541457E2B7EF76AA2DDC177C44B4FF6B95E9C5, L_6, /*hidden argument*/NULL);
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_7 = ___info1;
		RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  L_8 = { reinterpret_cast<intptr_t> (UnitySerializationHolder_t1F3CD67778C9EC0C6F3A05CC6F44A4CC047B7307_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m8326E3405B647C99882C2E411C459944B0598D73(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		SerializationInfo_SetType_m32D2E2BB46664D1A4B8B9051D4388ABAA3D6A58C(L_7, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UnitySerializationHolder::GetModuleData(System.Reflection.Module,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void UnitySerializationHolder_GetModuleData_mB5E09BEB03A8103DA240D489112B93DA92DB9AE2 (Module_t6211282315B01A0EB488BB95BA1A73BBE5C6B7D8 * ___instance0, SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * ___info1, StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1  ___ctx2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder_GetModuleData_mB5E09BEB03A8103DA240D489112B93DA92DB9AE2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_0 = ___info1;
		Module_t6211282315B01A0EB488BB95BA1A73BBE5C6B7D8 * L_1 = ___instance0;
		NullCheck(L_1);
		String_t* L_2 = Module_get_ScopeName_m423C1390C2D28389CB72CD9115DDDC145406946A(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		SerializationInfo_AddValue_m5B3E183DD8F7D38D1A1EAE3C2826EF8FBE127580(L_0, _stringLiteralE5E429BCC9C2E4A41A3C7A4D96203BE6CB273B11, L_2, /*hidden argument*/NULL);
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_3 = ___info1;
		NullCheck(L_3);
		SerializationInfo_AddValue_m17E95375C618FC19411D2E86E53497825B5A9D02(L_3, _stringLiteralD3B81375F999BE146F923A83BD6CBA9441E1F676, 5, /*hidden argument*/NULL);
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_4 = ___info1;
		Module_t6211282315B01A0EB488BB95BA1A73BBE5C6B7D8 * L_5 = ___instance0;
		NullCheck(L_5);
		Assembly_t * L_6 = Module_get_Assembly_mE80B2C0600696E57AFA6FAFB516DB92A4E926E4D(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.Assembly::get_FullName() */, L_6);
		NullCheck(L_4);
		SerializationInfo_AddValue_m5B3E183DD8F7D38D1A1EAE3C2826EF8FBE127580(L_4, _stringLiteralF0541457E2B7EF76AA2DDC177C44B4FF6B95E9C5, L_7, /*hidden argument*/NULL);
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_8 = ___info1;
		RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  L_9 = { reinterpret_cast<intptr_t> (UnitySerializationHolder_t1F3CD67778C9EC0C6F3A05CC6F44A4CC047B7307_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m8326E3405B647C99882C2E411C459944B0598D73(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		SerializationInfo_SetType_m32D2E2BB46664D1A4B8B9051D4388ABAA3D6A58C(L_8, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UnitySerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void UnitySerializationHolder_GetObjectData_m0DCDAB7ABB802E5313B2338B881AE1D1CE6690B4 (UnitySerializationHolder_t1F3CD67778C9EC0C6F3A05CC6F44A4CC047B7307 * __this, SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * ___info0, StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder_GetObjectData_m0DCDAB7ABB802E5313B2338B881AE1D1CE6690B4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6 * L_0 = (NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6 *)il2cpp_codegen_object_new(NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mCD2944038AAC6677F82C713B8CB8C67CCF48EF10(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, UnitySerializationHolder_GetObjectData_m0DCDAB7ABB802E5313B2338B881AE1D1CE6690B4_RuntimeMethod_var);
	}
}
// System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * UnitySerializationHolder_GetRealObject_mF8313A14C107679F256BA37709809BB82D225BC3 (UnitySerializationHolder_t1F3CD67778C9EC0C6F3A05CC6F44A4CC047B7307 * __this, StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1  ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder_GetRealObject_mF8313A14C107679F256BA37709809BB82D225BC3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Assembly_t * V_0 = NULL;
	Assembly_t * V_1 = NULL;
	uint8_t V_2 = 0;
	{
		uint8_t L_0 = __this->get__unityType_1();
		V_2 = L_0;
		uint8_t L_1 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)2)))
		{
			case 0:
			{
				goto IL_0041;
			}
			case 1:
			{
				goto IL_006c;
			}
			case 2:
			{
				goto IL_0028;
			}
			case 3:
			{
				goto IL_0047;
			}
			case 4:
			{
				goto IL_0060;
			}
		}
	}
	{
		goto IL_006c;
	}

IL_0028:
	{
		String_t* L_2 = __this->get__assemblyName_2();
		Assembly_t * L_3 = Assembly_Load_m430E0CB1BD58904D141BB0F73B1775862A0D2170(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Assembly_t * L_4 = V_0;
		String_t* L_5 = __this->get__data_0();
		NullCheck(L_4);
		Type_t * L_6 = VirtFuncInvoker1< Type_t *, String_t* >::Invoke(15 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_4, L_5);
		return L_6;
	}

IL_0041:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DBNull_tE7FF9F06B07B9177FEA5297B657A3A7688526B6A_il2cpp_TypeInfo_var);
		DBNull_tE7FF9F06B07B9177FEA5297B657A3A7688526B6A * L_7 = ((DBNull_tE7FF9F06B07B9177FEA5297B657A3A7688526B6A_StaticFields*)il2cpp_codegen_static_fields_for(DBNull_tE7FF9F06B07B9177FEA5297B657A3A7688526B6A_il2cpp_TypeInfo_var))->get_Value_0();
		return L_7;
	}

IL_0047:
	{
		String_t* L_8 = __this->get__assemblyName_2();
		Assembly_t * L_9 = Assembly_Load_m430E0CB1BD58904D141BB0F73B1775862A0D2170(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		Assembly_t * L_10 = V_1;
		String_t* L_11 = __this->get__data_0();
		NullCheck(L_10);
		Module_t6211282315B01A0EB488BB95BA1A73BBE5C6B7D8 * L_12 = Assembly_GetModule_m636C7961E007511E1BD09C455B06FBE78DF64BF0(L_10, L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_0060:
	{
		String_t* L_13 = __this->get__data_0();
		Assembly_t * L_14 = Assembly_Load_m430E0CB1BD58904D141BB0F73B1775862A0D2170(L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_006c:
	{
		String_t* L_15 = Locale_GetText_m8335AC363D872105D0CE318A9CB1001A15813542(_stringLiteralAAA827AD7A55F65B85FD76E652CBB0654EC9FAA9, /*hidden argument*/NULL);
		NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6 * L_16 = (NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6 *)il2cpp_codegen_object_new(NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m631F783E957027CA661C281874882040F7693602(L_16, L_15, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, NULL, UnitySerializationHolder_GetRealObject_mF8313A14C107679F256BA37709809BB82D225BC3_RuntimeMethod_var);
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
// Conversion methods for marshalling of: System.ValueType
extern "C" void ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshal_pinvoke(const ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C& unmarshaled, ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshaled_pinvoke& marshaled)
{
}
extern "C" void ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshal_pinvoke_back(const ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshaled_pinvoke& marshaled, ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: System.ValueType
extern "C" void ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshal_pinvoke_cleanup(ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.ValueType
extern "C" void ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshal_com(const ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C& unmarshaled, ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshaled_com& marshaled)
{
}
extern "C" void ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshal_com_back(const ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshaled_com& marshaled, ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: System.ValueType
extern "C" void ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshal_com_cleanup(ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshaled_com& marshaled)
{
}
// System.Void System.ValueType::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ValueType__ctor_m39F50153DCEB689667848F175A9BB6B65F143231 (RuntimeObject * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.ValueType::InternalEquals(System.Object,System.Object,System.Object[]&)
extern "C" IL2CPP_METHOD_ATTR bool ValueType_InternalEquals_m9AE48614FA28894778698A3E84F0BDDDC325AB02 (RuntimeObject * ___o10, RuntimeObject * ___o21, ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D** ___fields2, const RuntimeMethod* method)
{
	typedef bool (*ValueType_InternalEquals_m9AE48614FA28894778698A3E84F0BDDDC325AB02_ftn) (RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D**);
	using namespace il2cpp::icalls;
	return  ((ValueType_InternalEquals_m9AE48614FA28894778698A3E84F0BDDDC325AB02_ftn)mscorlib::System::ValueType::InternalEquals) (___o10, ___o21, ___fields2);
}
// System.Boolean System.ValueType::DefaultEquals(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR bool ValueType_DefaultEquals_m5ECF7678A8DF137FF030DB9DAAA282DD684571DD (RuntimeObject * ___o10, RuntimeObject * ___o21, const RuntimeMethod* method)
{
	ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	{
		RuntimeObject * L_0 = ___o21;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (bool)0;
	}

IL_0008:
	{
		RuntimeObject * L_1 = ___o10;
		RuntimeObject * L_2 = ___o21;
		bool L_3 = ValueType_InternalEquals_m9AE48614FA28894778698A3E84F0BDDDC325AB02(L_1, L_2, (ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D**)(&V_0), /*hidden argument*/NULL);
		V_1 = L_3;
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_4 = V_0;
		if (L_4)
		{
			goto IL_001a;
		}
	}
	{
		bool L_5 = V_1;
		return L_5;
	}

IL_001a:
	{
		V_2 = 0;
		goto IL_0053;
	}

IL_0021:
	{
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_6 = V_0;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_10 = V_0;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
		RuntimeObject * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_4 = L_13;
		RuntimeObject * L_14 = V_3;
		if (L_14)
		{
			goto IL_0040;
		}
	}
	{
		RuntimeObject * L_15 = V_4;
		if (L_15)
		{
			goto IL_003e;
		}
	}
	{
		goto IL_004f;
	}

IL_003e:
	{
		return (bool)0;
	}

IL_0040:
	{
		RuntimeObject * L_16 = V_3;
		RuntimeObject * L_17 = V_4;
		NullCheck(L_16);
		bool L_18 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_16, L_17);
		if (L_18)
		{
			goto IL_004f;
		}
	}
	{
		return (bool)0;
	}

IL_004f:
	{
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)2));
	}

IL_0053:
	{
		int32_t L_20 = V_2;
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_21 = V_0;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_21)->max_length)))))))
		{
			goto IL_0021;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean System.ValueType::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool ValueType_Equals_mC74993A343BE399434D64AFBDEDD4D106552A4DD (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		bool L_1 = ValueType_DefaultEquals_m5ECF7678A8DF137FF030DB9DAAA282DD684571DD(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.ValueType::InternalGetHashCode(System.Object,System.Object[]&)
extern "C" IL2CPP_METHOD_ATTR int32_t ValueType_InternalGetHashCode_mA5925DF5288F5152C970140E62E0FE71DD99671E (RuntimeObject * ___o0, ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D** ___fields1, const RuntimeMethod* method)
{
	typedef int32_t (*ValueType_InternalGetHashCode_mA5925DF5288F5152C970140E62E0FE71DD99671E_ftn) (RuntimeObject *, ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D**);
	using namespace il2cpp::icalls;
	return  ((ValueType_InternalGetHashCode_mA5925DF5288F5152C970140E62E0FE71DD99671E_ftn)mscorlib::System::ValueType::InternalGetHashCode) (___o0, ___fields1);
}
// System.Int32 System.ValueType::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t ValueType_GetHashCode_mA042016A2E69D10748C8D69CC1BB513405CE5194 (RuntimeObject * __this, const RuntimeMethod* method)
{
	ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ValueType_InternalGetHashCode_mA5925DF5288F5152C970140E62E0FE71DD99671E(__this, (ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D**)(&V_0), /*hidden argument*/NULL);
		V_1 = L_0;
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0036;
		}
	}
	{
		V_2 = 0;
		goto IL_002d;
	}

IL_0016:
	{
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_2 = V_0;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_1;
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_7 = V_0;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		int32_t L_11 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_10);
		V_1 = ((int32_t)((int32_t)L_6^(int32_t)L_11));
	}

IL_0029:
	{
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_002d:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_14 = V_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))))))
		{
			goto IL_0016;
		}
	}

IL_0036:
	{
		int32_t L_15 = V_1;
		return L_15;
	}
}
// System.String System.ValueType::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* ValueType_ToString_m9E0CE6CAA3E602708A61386A0414B39B10AEE7AE (RuntimeObject * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = Object_GetType_m993E65F4E4457CE1761C49B188A6CF858597BDDE(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String System.Type::get_FullName() */, L_0);
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
// System.Void System.Version::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Version__ctor_m5B61667691CB66D4D8A582B4ED5FD08A4C76E4AD (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		Version_CheckedSet_m8F93592250413F64CD48EE56635B87BD10E01775(__this, 2, 0, 0, (-1), (-1), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Version::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Version__ctor_mAE9D244FEE1023A26514EE0339E7D6F26824F0F7 (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * __this, String_t* ___version0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version__ctor_mAE9D244FEE1023A26514EE0339E7D6F26824F0F7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		V_2 = (-1);
		V_3 = (-1);
		V_4 = (-1);
		V_5 = (-1);
		String_t* L_0 = ___version0;
		if (L_0)
		{
			goto IL_0021;
		}
	}
	{
		ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 * L_1 = (ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 *)il2cpp_codegen_object_new(ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mBA1072348F0861F80512F3BB2BE685EDBB02F740(L_1, _stringLiteralC692273DEB2772DA307FFE37041FEF77BF4BAA97, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Version__ctor_mAE9D244FEE1023A26514EE0339E7D6F26824F0F7_RuntimeMethod_var);
	}

IL_0021:
	{
		String_t* L_2 = ___version0;
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_3 = (CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744*)SZArrayNew(CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)46));
		NullCheck(L_2);
		StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* L_5 = String_Split_m3A8A48A00011BA5F135EBC797AD2B12E710A48CA(L_2, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* L_6 = V_1;
		NullCheck(L_6);
		V_0 = (((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length))));
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)2)))
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) <= ((int32_t)4)))
		{
			goto IL_0055;
		}
	}

IL_0045:
	{
		String_t* L_9 = Locale_GetText_m8335AC363D872105D0CE318A9CB1001A15813542(_stringLiteral236206AA94046090214FF4A105F3B4133E858761, /*hidden argument*/NULL);
		ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 * L_10 = (ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 *)il2cpp_codegen_object_new(ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m8917650A5D8F2F36C6B623A720DF2D2A630D3533(L_10, L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, NULL, Version__ctor_mAE9D244FEE1023A26514EE0339E7D6F26824F0F7_RuntimeMethod_var);
	}

IL_0055:
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0065;
		}
	}
	{
		StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13 = 0;
		String_t* L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		int32_t L_15 = Int32_Parse_mF93B2C50DDBC196570E2EA8495DBA36F2CD75290(L_14, /*hidden argument*/NULL);
		V_2 = L_15;
	}

IL_0065:
	{
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) <= ((int32_t)1)))
		{
			goto IL_0075;
		}
	}
	{
		StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* L_17 = V_1;
		NullCheck(L_17);
		int32_t L_18 = 1;
		String_t* L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		int32_t L_20 = Int32_Parse_mF93B2C50DDBC196570E2EA8495DBA36F2CD75290(L_19, /*hidden argument*/NULL);
		V_3 = L_20;
	}

IL_0075:
	{
		int32_t L_21 = V_0;
		if ((((int32_t)L_21) <= ((int32_t)2)))
		{
			goto IL_0086;
		}
	}
	{
		StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* L_22 = V_1;
		NullCheck(L_22);
		int32_t L_23 = 2;
		String_t* L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		int32_t L_25 = Int32_Parse_mF93B2C50DDBC196570E2EA8495DBA36F2CD75290(L_24, /*hidden argument*/NULL);
		V_4 = L_25;
	}

IL_0086:
	{
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) <= ((int32_t)3)))
		{
			goto IL_0097;
		}
	}
	{
		StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* L_27 = V_1;
		NullCheck(L_27);
		int32_t L_28 = 3;
		String_t* L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		int32_t L_30 = Int32_Parse_mF93B2C50DDBC196570E2EA8495DBA36F2CD75290(L_29, /*hidden argument*/NULL);
		V_5 = L_30;
	}

IL_0097:
	{
		int32_t L_31 = V_0;
		int32_t L_32 = V_2;
		int32_t L_33 = V_3;
		int32_t L_34 = V_4;
		int32_t L_35 = V_5;
		Version_CheckedSet_m8F93592250413F64CD48EE56635B87BD10E01775(__this, L_31, L_32, L_33, L_34, L_35, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Version::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Version__ctor_m6F990EB264310E8E1AFDBCEC5668CDF132432F68 (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * __this, int32_t ___major0, int32_t ___minor1, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___major0;
		int32_t L_1 = ___minor1;
		Version_CheckedSet_m8F93592250413F64CD48EE56635B87BD10E01775(__this, 2, L_0, L_1, 0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Version__ctor_m1F3F5FD07445CBBC0BDF9BF9F72A8C3DD6D5FB14 (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * __this, int32_t ___major0, int32_t ___minor1, int32_t ___build2, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___major0;
		int32_t L_1 = ___minor1;
		int32_t L_2 = ___build2;
		Version_CheckedSet_m8F93592250413F64CD48EE56635B87BD10E01775(__this, 3, L_0, L_1, L_2, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Version__ctor_m28C37359BE6B006A3EB463BED789A76D1790E45B (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * __this, int32_t ___major0, int32_t ___minor1, int32_t ___build2, int32_t ___revision3, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___major0;
		int32_t L_1 = ___minor1;
		int32_t L_2 = ___build2;
		int32_t L_3 = ___revision3;
		Version_CheckedSet_m8F93592250413F64CD48EE56635B87BD10E01775(__this, 4, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Version::CheckedSet(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Version_CheckedSet_m8F93592250413F64CD48EE56635B87BD10E01775 (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * __this, int32_t ___defined0, int32_t ___major1, int32_t ___minor2, int32_t ___build3, int32_t ___revision4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_CheckedSet_m8F93592250413F64CD48EE56635B87BD10E01775_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___major1;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4 * L_1 = (ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_mE814EB7B9A7E67CA0BD6A97F77497C9669A4FEEA(L_1, _stringLiteral18C9D4621EF6C3113CE1F960346D7603E88406E8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Version_CheckedSet_m8F93592250413F64CD48EE56635B87BD10E01775_RuntimeMethod_var);
	}

IL_0012:
	{
		int32_t L_2 = ___major1;
		__this->set__Major_1(L_2);
		int32_t L_3 = ___minor2;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_002b;
		}
	}
	{
		ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4 * L_4 = (ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_mE814EB7B9A7E67CA0BD6A97F77497C9669A4FEEA(L_4, _stringLiteralFEE63D97CA760412103B668617F8B29605625B7D, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, Version_CheckedSet_m8F93592250413F64CD48EE56635B87BD10E01775_RuntimeMethod_var);
	}

IL_002b:
	{
		int32_t L_5 = ___minor2;
		__this->set__Minor_2(L_5);
		int32_t L_6 = ___defined0;
		if ((!(((uint32_t)L_6) == ((uint32_t)2))))
		{
			goto IL_0048;
		}
	}
	{
		__this->set__Build_3((-1));
		__this->set__Revision_4((-1));
		return;
	}

IL_0048:
	{
		int32_t L_7 = ___build3;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_005b;
		}
	}
	{
		ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4 * L_8 = (ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_mE814EB7B9A7E67CA0BD6A97F77497C9669A4FEEA(L_8, _stringLiteral80754AF91BFB6D1073585B046FE0A474CE868509, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, Version_CheckedSet_m8F93592250413F64CD48EE56635B87BD10E01775_RuntimeMethod_var);
	}

IL_005b:
	{
		int32_t L_9 = ___build3;
		__this->set__Build_3(L_9);
		int32_t L_10 = ___defined0;
		if ((!(((uint32_t)L_10) == ((uint32_t)3))))
		{
			goto IL_0072;
		}
	}
	{
		__this->set__Revision_4((-1));
		return;
	}

IL_0072:
	{
		int32_t L_11 = ___revision4;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0085;
		}
	}
	{
		ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4 * L_12 = (ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_mE814EB7B9A7E67CA0BD6A97F77497C9669A4FEEA(L_12, _stringLiteralEAE79D6E0CFF76FC7A3BB78723690B0B2367F849, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, NULL, Version_CheckedSet_m8F93592250413F64CD48EE56635B87BD10E01775_RuntimeMethod_var);
	}

IL_0085:
	{
		int32_t L_13 = ___revision4;
		__this->set__Revision_4(L_13);
		return;
	}
}
// System.Int32 System.Version::get_Build()
extern "C" IL2CPP_METHOD_ATTR int32_t Version_get_Build_mF061A6FFB35801906963DE7901A530FBAFC36491 (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Build_3();
		return L_0;
	}
}
// System.Int32 System.Version::get_Major()
extern "C" IL2CPP_METHOD_ATTR int32_t Version_get_Major_m4A9DDD158AFDEB162A3A9FA783F4BF35CA61522F (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Major_1();
		return L_0;
	}
}
// System.Int32 System.Version::get_Minor()
extern "C" IL2CPP_METHOD_ATTR int32_t Version_get_Minor_mDC7B24612208AEE7FDA96539738703C0B23F9571 (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Minor_2();
		return L_0;
	}
}
// System.Int32 System.Version::get_Revision()
extern "C" IL2CPP_METHOD_ATTR int32_t Version_get_Revision_mF69C3C5BD255C31BA26F7225F6341E20456F0D33 (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Revision_4();
		return L_0;
	}
}
// System.Object System.Version::Clone()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Version_Clone_m0319BD2CFF4E0725CA77F9F3DFE442360ACE988D (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_Clone_m0319BD2CFF4E0725CA77F9F3DFE442360ACE988D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get__Build_3();
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = __this->get__Major_1();
		int32_t L_2 = __this->get__Minor_2();
		Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * L_3 = (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 *)il2cpp_codegen_object_new(Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15_il2cpp_TypeInfo_var);
		Version__ctor_m6F990EB264310E8E1AFDBCEC5668CDF132432F68(L_3, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_001e:
	{
		int32_t L_4 = __this->get__Revision_4();
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_5 = __this->get__Major_1();
		int32_t L_6 = __this->get__Minor_2();
		int32_t L_7 = __this->get__Build_3();
		Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * L_8 = (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 *)il2cpp_codegen_object_new(Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15_il2cpp_TypeInfo_var);
		Version__ctor_m1F3F5FD07445CBBC0BDF9BF9F72A8C3DD6D5FB14(L_8, L_5, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0042:
	{
		int32_t L_9 = __this->get__Major_1();
		int32_t L_10 = __this->get__Minor_2();
		int32_t L_11 = __this->get__Build_3();
		int32_t L_12 = __this->get__Revision_4();
		Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * L_13 = (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 *)il2cpp_codegen_object_new(Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15_il2cpp_TypeInfo_var);
		Version__ctor_m28C37359BE6B006A3EB463BED789A76D1790E45B(L_13, L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// System.Int32 System.Version::CompareTo(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t Version_CompareTo_m4F37357349BB41DAC8C61271CBBF52F6B7A3D55A (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * __this, RuntimeObject * ___version0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_CompareTo_m4F37357349BB41DAC8C61271CBBF52F6B7A3D55A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___version0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 1;
	}

IL_0008:
	{
		RuntimeObject * L_1 = ___version0;
		if (((Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 *)IsInstSealed((RuntimeObject*)L_1, Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		String_t* L_2 = Locale_GetText_m8335AC363D872105D0CE318A9CB1001A15813542(_stringLiteralC744A537945159E700B780360B5746414DE20CF9, /*hidden argument*/NULL);
		ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 * L_3 = (ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 *)il2cpp_codegen_object_new(ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m8917650A5D8F2F36C6B623A720DF2D2A630D3533(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, Version_CompareTo_m4F37357349BB41DAC8C61271CBBF52F6B7A3D55A_RuntimeMethod_var);
	}

IL_0023:
	{
		RuntimeObject * L_4 = ___version0;
		int32_t L_5 = Version_CompareTo_mF1ED7826B027AC4BEC76981ED28772F56C9CD6BE(__this, ((Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 *)CastclassSealed((RuntimeObject*)L_4, Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean System.Version::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Version_Equals_m18CE65889EF5C9C32F4D787A8D89B0E90E401C4B (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_Equals_m18CE65889EF5C9C32F4D787A8D89B0E90E401C4B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		bool L_1 = Version_Equals_m15047C69E4AA3AB29506EE211B87D491B2B0BFA5(__this, ((Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 *)IsInstSealed((RuntimeObject*)L_0, Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.Version::CompareTo(System.Version)
extern "C" IL2CPP_METHOD_ATTR int32_t Version_CompareTo_mF1ED7826B027AC4BEC76981ED28772F56C9CD6BE (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * __this, Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * ___value0, const RuntimeMethod* method)
{
	{
		Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * L_0 = ___value0;
		bool L_1 = Version_op_Equality_m5F34580D30263159C103136543F7723DB99C5215(L_0, (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		return 1;
	}

IL_000e:
	{
		int32_t L_2 = __this->get__Major_1();
		Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * L_3 = ___value0;
		NullCheck(L_3);
		int32_t L_4 = L_3->get__Major_1();
		if ((((int32_t)L_2) <= ((int32_t)L_4)))
		{
			goto IL_0021;
		}
	}
	{
		return 1;
	}

IL_0021:
	{
		int32_t L_5 = __this->get__Major_1();
		Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * L_6 = ___value0;
		NullCheck(L_6);
		int32_t L_7 = L_6->get__Major_1();
		if ((((int32_t)L_5) >= ((int32_t)L_7)))
		{
			goto IL_0034;
		}
	}
	{
		return (-1);
	}

IL_0034:
	{
		int32_t L_8 = __this->get__Minor_2();
		Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * L_9 = ___value0;
		NullCheck(L_9);
		int32_t L_10 = L_9->get__Minor_2();
		if ((((int32_t)L_8) <= ((int32_t)L_10)))
		{
			goto IL_0047;
		}
	}
	{
		return 1;
	}

IL_0047:
	{
		int32_t L_11 = __this->get__Minor_2();
		Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * L_12 = ___value0;
		NullCheck(L_12);
		int32_t L_13 = L_12->get__Minor_2();
		if ((((int32_t)L_11) >= ((int32_t)L_13)))
		{
			goto IL_005a;
		}
	}
	{
		return (-1);
	}

IL_005a:
	{
		int32_t L_14 = __this->get__Build_3();
		Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * L_15 = ___value0;
		NullCheck(L_15);
		int32_t L_16 = L_15->get__Build_3();
		if ((((int32_t)L_14) <= ((int32_t)L_16)))
		{
			goto IL_006d;
		}
	}
	{
		return 1;
	}

IL_006d:
	{
		int32_t L_17 = __this->get__Build_3();
		Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * L_18 = ___value0;
		NullCheck(L_18);
		int32_t L_19 = L_18->get__Build_3();
		if ((((int32_t)L_17) >= ((int32_t)L_19)))
		{
			goto IL_0080;
		}
	}
	{
		return (-1);
	}

IL_0080:
	{
		int32_t L_20 = __this->get__Revision_4();
		Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * L_21 = ___value0;
		NullCheck(L_21);
		int32_t L_22 = L_21->get__Revision_4();
		if ((((int32_t)L_20) <= ((int32_t)L_22)))
		{
			goto IL_0093;
		}
	}
	{
		return 1;
	}

IL_0093:
	{
		int32_t L_23 = __this->get__Revision_4();
		Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * L_24 = ___value0;
		NullCheck(L_24);
		int32_t L_25 = L_24->get__Revision_4();
		if ((((int32_t)L_23) >= ((int32_t)L_25)))
		{
			goto IL_00a6;
		}
	}
	{
		return (-1);
	}

IL_00a6:
	{
		return 0;
	}
}
// System.Boolean System.Version::Equals(System.Version)
extern "C" IL2CPP_METHOD_ATTR bool Version_Equals_m15047C69E4AA3AB29506EE211B87D491B2B0BFA5 (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * __this, Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * ___obj0, const RuntimeMethod* method)
{
	int32_t G_B6_0 = 0;
	{
		Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * L_0 = ___obj0;
		bool L_1 = Version_op_Inequality_m8791D9395E40AC1315BF1374388EB9B76864744E(L_0, (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
		Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * L_2 = ___obj0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get__Major_1();
		int32_t L_4 = __this->get__Major_1();
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_004f;
		}
	}
	{
		Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * L_5 = ___obj0;
		NullCheck(L_5);
		int32_t L_6 = L_5->get__Minor_2();
		int32_t L_7 = __this->get__Minor_2();
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_004f;
		}
	}
	{
		Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * L_8 = ___obj0;
		NullCheck(L_8);
		int32_t L_9 = L_8->get__Build_3();
		int32_t L_10 = __this->get__Build_3();
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_004f;
		}
	}
	{
		Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * L_11 = ___obj0;
		NullCheck(L_11);
		int32_t L_12 = L_11->get__Revision_4();
		int32_t L_13 = __this->get__Revision_4();
		G_B6_0 = ((((int32_t)L_12) == ((int32_t)L_13))? 1 : 0);
		goto IL_0050;
	}

IL_004f:
	{
		G_B6_0 = 0;
	}

IL_0050:
	{
		return (bool)G_B6_0;
	}
}
// System.Int32 System.Version::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Version_GetHashCode_mFC8BA40180FEDE8538D4EBF7B441B87B221735C5 (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Revision_4();
		int32_t L_1 = __this->get__Build_3();
		int32_t L_2 = __this->get__Minor_2();
		int32_t L_3 = __this->get__Major_1();
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_0<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)L_1<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_2<<(int32_t)8))))|(int32_t)L_3));
	}
}
// System.String System.Version::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Version_ToString_mE2E6C0AA16DD48999BCF49B5BF35969B8240227A (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_ToString_mE2E6C0AA16DD48999BCF49B5BF35969B8240227A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		int32_t* L_0 = __this->get_address_of__Major_1();
		String_t* L_1 = Int32_ToString_mE7DFEEF8FFE4DA97DA211C49948D8E752E6B61C8((int32_t*)L_0, /*hidden argument*/NULL);
		int32_t* L_2 = __this->get_address_of__Minor_2();
		String_t* L_3 = Int32_ToString_mE7DFEEF8FFE4DA97DA211C49948D8E752E6B61C8((int32_t*)L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_mDF3A55D4269A0D2D7969D90C6D38B472E24DD445(L_1, _stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = __this->get__Build_3();
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_0044;
		}
	}
	{
		String_t* L_6 = V_0;
		int32_t* L_7 = __this->get_address_of__Build_3();
		String_t* L_8 = Int32_ToString_mE7DFEEF8FFE4DA97DA211C49948D8E752E6B61C8((int32_t*)L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_mDF3A55D4269A0D2D7969D90C6D38B472E24DD445(L_6, _stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
	}

IL_0044:
	{
		int32_t L_10 = __this->get__Revision_4();
		if ((((int32_t)L_10) == ((int32_t)(-1))))
		{
			goto IL_0067;
		}
	}
	{
		String_t* L_11 = V_0;
		int32_t* L_12 = __this->get_address_of__Revision_4();
		String_t* L_13 = Int32_ToString_mE7DFEEF8FFE4DA97DA211C49948D8E752E6B61C8((int32_t*)L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_mDF3A55D4269A0D2D7969D90C6D38B472E24DD445(L_11, _stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
	}

IL_0067:
	{
		String_t* L_15 = V_0;
		return L_15;
	}
}
// System.Version System.Version::CreateFromString(System.String)
extern "C" IL2CPP_METHOD_ATTR Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * Version_CreateFromString_mB297062B77739173A87608B0E639C49D6ACBE196 (String_t* ___info0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_CreateFromString_mB297062B77739173A87608B0E639C49D6ACBE196_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Il2CppChar V_7 = 0x0;
	int32_t V_8 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		V_4 = 1;
		V_5 = (-1);
		String_t* L_0 = ___info0;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * L_1 = (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 *)il2cpp_codegen_object_new(Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15_il2cpp_TypeInfo_var);
		Version__ctor_m28C37359BE6B006A3EB463BED789A76D1790E45B(L_1, 0, 0, 0, 0, /*hidden argument*/NULL);
		return L_1;
	}

IL_001e:
	{
		V_6 = 0;
		goto IL_00c8;
	}

IL_0026:
	{
		String_t* L_2 = ___info0;
		int32_t L_3 = V_6;
		NullCheck(L_2);
		Il2CppChar L_4 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_2, L_3, /*hidden argument*/NULL);
		V_7 = L_4;
		Il2CppChar L_5 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_il2cpp_TypeInfo_var);
		bool L_6 = Char_IsDigit_m64DFE12D7DCF1AC634EA805421E06B4B18E1C036(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_7 = V_5;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		Il2CppChar L_8 = V_7;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)((int32_t)48)));
		goto IL_005d;
	}

IL_0050:
	{
		int32_t L_9 = V_5;
		Il2CppChar L_10 = V_7;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)((int32_t)10))), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)((int32_t)48)))));
	}

IL_005d:
	{
		goto IL_00b5;
	}

IL_0062:
	{
		int32_t L_11 = V_5;
		if ((((int32_t)L_11) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		int32_t L_12 = V_4;
		V_8 = L_12;
		int32_t L_13 = V_8;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1)))
		{
			case 0:
			{
				goto IL_008c;
			}
			case 1:
			{
				goto IL_0094;
			}
			case 2:
			{
				goto IL_009c;
			}
			case 3:
			{
				goto IL_00a4;
			}
		}
	}
	{
		goto IL_00ac;
	}

IL_008c:
	{
		int32_t L_14 = V_5;
		V_0 = L_14;
		goto IL_00ac;
	}

IL_0094:
	{
		int32_t L_15 = V_5;
		V_1 = L_15;
		goto IL_00ac;
	}

IL_009c:
	{
		int32_t L_16 = V_5;
		V_2 = L_16;
		goto IL_00ac;
	}

IL_00a4:
	{
		int32_t L_17 = V_5;
		V_3 = L_17;
		goto IL_00ac;
	}

IL_00ac:
	{
		V_5 = (-1);
		int32_t L_18 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_00b5:
	{
		int32_t L_19 = V_4;
		if ((!(((uint32_t)L_19) == ((uint32_t)5))))
		{
			goto IL_00c2;
		}
	}
	{
		goto IL_00d5;
	}

IL_00c2:
	{
		int32_t L_20 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_00c8:
	{
		int32_t L_21 = V_6;
		String_t* L_22 = ___info0;
		NullCheck(L_22);
		int32_t L_23 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_22, /*hidden argument*/NULL);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_0026;
		}
	}

IL_00d5:
	{
		int32_t L_24 = V_5;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_011f;
		}
	}
	{
		int32_t L_25 = V_4;
		V_8 = L_25;
		int32_t L_26 = V_8;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)1)))
		{
			case 0:
			{
				goto IL_00ff;
			}
			case 1:
			{
				goto IL_0107;
			}
			case 2:
			{
				goto IL_010f;
			}
			case 3:
			{
				goto IL_0117;
			}
		}
	}
	{
		goto IL_011f;
	}

IL_00ff:
	{
		int32_t L_27 = V_5;
		V_0 = L_27;
		goto IL_011f;
	}

IL_0107:
	{
		int32_t L_28 = V_5;
		V_1 = L_28;
		goto IL_011f;
	}

IL_010f:
	{
		int32_t L_29 = V_5;
		V_2 = L_29;
		goto IL_011f;
	}

IL_0117:
	{
		int32_t L_30 = V_5;
		V_3 = L_30;
		goto IL_011f;
	}

IL_011f:
	{
		int32_t L_31 = V_0;
		int32_t L_32 = V_1;
		int32_t L_33 = V_2;
		int32_t L_34 = V_3;
		Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * L_35 = (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 *)il2cpp_codegen_object_new(Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15_il2cpp_TypeInfo_var);
		Version__ctor_m28C37359BE6B006A3EB463BED789A76D1790E45B(L_35, L_31, L_32, L_33, L_34, /*hidden argument*/NULL);
		return L_35;
	}
}
// System.Boolean System.Version::op_Equality(System.Version,System.Version)
extern "C" IL2CPP_METHOD_ATTR bool Version_op_Equality_m5F34580D30263159C103136543F7723DB99C5215 (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * ___v10, Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * ___v21, const RuntimeMethod* method)
{
	{
		Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * L_0 = ___v10;
		Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * L_1 = ___v21;
		bool L_2 = Object_Equals_m8F1D37CE67D713E8EF3E9433D942A7E0242F4838(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Version::op_Inequality(System.Version,System.Version)
extern "C" IL2CPP_METHOD_ATTR bool Version_op_Inequality_m8791D9395E40AC1315BF1374388EB9B76864744E (Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * ___v10, Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * ___v21, const RuntimeMethod* method)
{
	{
		Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * L_0 = ___v10;
		Version_tD7D21D8F6BE9CC6473050418AB3D72BA2DB68D15 * L_1 = ___v21;
		bool L_2 = Object_Equals_m8F1D37CE67D713E8EF3E9433D942A7E0242F4838(L_0, L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
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
// System.Void System.WeakReference::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WeakReference__ctor_mF5281FF677CE7296D9BC067F76B5845B795ED493 (WeakReference_t748C76A5CAD65471521659008DBC57191528AA9C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.WeakReference::.ctor(System.Object)
extern "C" IL2CPP_METHOD_ATTR void WeakReference__ctor_m08834282FB2323A002C2C2179CF6D89A12AB531E (WeakReference_t748C76A5CAD65471521659008DBC57191528AA9C * __this, RuntimeObject * ___target0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___target0;
		WeakReference__ctor_mC5B594C73AF6091B67523598417E90FCD8226CBA(__this, L_0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.WeakReference::.ctor(System.Object,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void WeakReference__ctor_mC5B594C73AF6091B67523598417E90FCD8226CBA (WeakReference_t748C76A5CAD65471521659008DBC57191528AA9C * __this, RuntimeObject * ___target0, bool ___trackResurrection1, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		bool L_0 = ___trackResurrection1;
		__this->set_isLongReference_0(L_0);
		RuntimeObject * L_1 = ___target0;
		WeakReference_AllocateHandle_m11FEC60BC1D2F935BFE8CD5764477D802E922A40(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.WeakReference::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void WeakReference__ctor_mDC58C556A72BFE11C54C39871D33C568B41D7297 (WeakReference_t748C76A5CAD65471521659008DBC57191528AA9C * __this, SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * ___info0, StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeakReference__ctor_mDC58C556A72BFE11C54C39871D33C568B41D7297_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 * L_1 = (ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 *)il2cpp_codegen_object_new(ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mBA1072348F0861F80512F3BB2BE685EDBB02F740(L_1, _stringLiteral59BD0A3FF43B32849B319E645D4798D8A5D1E889, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WeakReference__ctor_mDC58C556A72BFE11C54C39871D33C568B41D7297_RuntimeMethod_var);
	}

IL_0017:
	{
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_2 = ___info0;
		NullCheck(L_2);
		bool L_3 = SerializationInfo_GetBoolean_mDF853D9D896D7FBFA8C89BCFDCF9230412A9563F(L_2, _stringLiteralA9914DA9D64B4FCE39273016F570714425122C67, /*hidden argument*/NULL);
		__this->set_isLongReference_0(L_3);
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_4 = ___info0;
		RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  L_5 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8326E3405B647C99882C2E411C459944B0598D73(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		RuntimeObject * L_7 = SerializationInfo_GetValue_m76CB68313C2DC35BB0F508B38E7F65E0A270D717(L_4, _stringLiteral7E95DB629C3A5AA1BCFEB547A0BD39A78FE49276, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		RuntimeObject * L_8 = V_0;
		WeakReference_AllocateHandle_m11FEC60BC1D2F935BFE8CD5764477D802E922A40(__this, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.WeakReference::AllocateHandle(System.Object)
extern "C" IL2CPP_METHOD_ATTR void WeakReference_AllocateHandle_m11FEC60BC1D2F935BFE8CD5764477D802E922A40 (WeakReference_t748C76A5CAD65471521659008DBC57191528AA9C * __this, RuntimeObject * ___target0, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isLongReference_0();
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject * L_1 = ___target0;
		GCHandle_tE002D24915851AD73ACC0F503601C384273C3060  L_2 = GCHandle_Alloc_m068D1EE7DC287ED4258E2FB26BC67299CEA8A10C(L_1, 1, /*hidden argument*/NULL);
		__this->set_gcHandle_1(L_2);
		goto IL_002a;
	}

IL_001d:
	{
		RuntimeObject * L_3 = ___target0;
		GCHandle_tE002D24915851AD73ACC0F503601C384273C3060  L_4 = GCHandle_Alloc_m068D1EE7DC287ED4258E2FB26BC67299CEA8A10C(L_3, 0, /*hidden argument*/NULL);
		__this->set_gcHandle_1(L_4);
	}

IL_002a:
	{
		return;
	}
}
// System.Boolean System.WeakReference::get_IsAlive()
extern "C" IL2CPP_METHOD_ATTR bool WeakReference_get_IsAlive_m15985F6B4C8BFA76E15CCDAABD09CB4C536CEA16 (WeakReference_t748C76A5CAD65471521659008DBC57191528AA9C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, __this);
		return (bool)((((int32_t)((((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Object System.WeakReference::get_Target()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * WeakReference_get_Target_m2AFC3F118C06565263021EE23361246DF034B476 (WeakReference_t748C76A5CAD65471521659008DBC57191528AA9C * __this, const RuntimeMethod* method)
{
	{
		GCHandle_tE002D24915851AD73ACC0F503601C384273C3060 * L_0 = __this->get_address_of_gcHandle_1();
		RuntimeObject * L_1 = GCHandle_get_Target_mC3CAF98C66E4DD8164D291463ADF5BC5359543E0((GCHandle_tE002D24915851AD73ACC0F503601C384273C3060 *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.WeakReference::get_TrackResurrection()
extern "C" IL2CPP_METHOD_ATTR bool WeakReference_get_TrackResurrection_m8F218C5610103B4DA1AB9A172B3827145951765B (WeakReference_t748C76A5CAD65471521659008DBC57191528AA9C * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isLongReference_0();
		return L_0;
	}
}
// System.Void System.WeakReference::Finalize()
extern "C" IL2CPP_METHOD_ATTR void WeakReference_Finalize_mAD793FFA7BE8BFBBE8066124CE9924A3EDA8AF76 (WeakReference_t748C76A5CAD65471521659008DBC57191528AA9C * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		GCHandle_tE002D24915851AD73ACC0F503601C384273C3060 * L_0 = __this->get_address_of_gcHandle_1();
		GCHandle_Free_mE2DC9BE787C9CFD3AAAB1803738BD2ADCF0219B2((GCHandle_tE002D24915851AD73ACC0F503601C384273C3060 *)L_0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x17, FINALLY_0010);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0010;
	}

FINALLY_0010:
	{ // begin finally (depth: 1)
		Object_Finalize_mF771ED4CD6EB17CF862AA2B705F0E2CC0B4ADBED(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(16)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(16)
	{
		IL2CPP_JUMP_TBL(0x17, IL_0017)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0017:
	{
		return;
	}
}
// System.Void System.WeakReference::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void WeakReference_GetObjectData_m6F403EAD74C64EAF575E933D67FB2CB026332D3C (WeakReference_t748C76A5CAD65471521659008DBC57191528AA9C * __this, SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * ___info0, StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeakReference_GetObjectData_m6F403EAD74C64EAF575E933D67FB2CB026332D3C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 * L_1 = (ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 *)il2cpp_codegen_object_new(ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mBA1072348F0861F80512F3BB2BE685EDBB02F740(L_1, _stringLiteral59BD0A3FF43B32849B319E645D4798D8A5D1E889, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WeakReference_GetObjectData_m6F403EAD74C64EAF575E933D67FB2CB026332D3C_RuntimeMethod_var);
	}

IL_0011:
	{
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_2 = ___info0;
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.WeakReference::get_TrackResurrection() */, __this);
		NullCheck(L_2);
		SerializationInfo_AddValue_m5AABBD341C86E74174984842FA7F3FEEB35FA953(L_2, _stringLiteralA9914DA9D64B4FCE39273016F570714425122C67, L_3, /*hidden argument*/NULL);
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_4 = ___info0;
		RuntimeObject * L_5 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, __this);
		NullCheck(L_4);
		SerializationInfo_AddValue_m5B3E183DD8F7D38D1A1EAE3C2826EF8FBE127580(L_4, _stringLiteral7E95DB629C3A5AA1BCFEB547A0BD39A78FE49276, L_5, /*hidden argument*/NULL);
		goto IL_004a;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0038;
		throw e;
	}

CATCH_0038:
	{ // begin catch(System.Exception)
		SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * L_6 = ___info0;
		NullCheck(L_6);
		SerializationInfo_AddValue_m5B3E183DD8F7D38D1A1EAE3C2826EF8FBE127580(L_6, _stringLiteral7E95DB629C3A5AA1BCFEB547A0BD39A78FE49276, NULL, /*hidden argument*/NULL);
		goto IL_004a;
	} // end catch (depth: 1)

IL_004a:
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
// System.Void System.__Il2CppComDelegate::Finalize()
extern "C" IL2CPP_METHOD_ATTR void __Il2CppComDelegate_Finalize_mD9F2891A4915AE5C5C30C16D2002FE751F8D156B (__Il2CppComDelegate_t67B66A584C55DA33A97319518FAD9D61A503C4EE * __this, const RuntimeMethod* method)
{
	__Il2CppComObject_Finalize_m682584A7F72588A85A4905DDE72083A32342558A(__this, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.__Il2CppComObject::Finalize()
extern "C" IL2CPP_METHOD_ATTR void __Il2CppComObject_Finalize_m682584A7F72588A85A4905DDE72083A32342558A (Il2CppComObject * __this, const RuntimeMethod* method)
{
	if (__this->identity != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime((RuntimeObject*)__this))
		{
			il2cpp_codegen_il2cpp_com_object_cleanup(__this);
		}
		__this->identity->Release();
		__this->identity = NULL;
	}

	Object_Finalize_mF771ED4CD6EB17CF862AA2B705F0E2CC0B4ADBED(__this, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
