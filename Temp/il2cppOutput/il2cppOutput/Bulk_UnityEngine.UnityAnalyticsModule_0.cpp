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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action
struct Action_t1264377477;
// System.Action`1<System.Boolean>
struct Action_1_t269755560;
// System.Action`3<System.Boolean,System.Boolean,System.Int32>
struct Action_3_t3050575418;
// System.ArgumentException
struct ArgumentException_t132251570;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Byte
struct Byte_t1134296376;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t1329213854;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Double
struct Double_t594665363;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.UInt16
struct UInt16_t2177724958;
// System.Void
struct Void_t1185182177;
// UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged
struct SessionStateChanged_t3163629820;
// UnityEngine.Analytics.CustomEventData
struct CustomEventData_t317522481;
// UnityEngine.Analytics.UnityAnalyticsHandler
struct UnityAnalyticsHandler_t3011359618;
// UnityEngine.RemoteConfigSettings
struct RemoteConfigSettings_t1247263429;
// UnityEngine.RemoteSettings/UpdatedEventHandler
struct UpdatedEventHandler_t1027848393;

extern RuntimeClass* Action_1_t269755560_il2cpp_TypeInfo_var;
extern RuntimeClass* AnalyticsSessionInfo_t2322308579_il2cpp_TypeInfo_var;
extern RuntimeClass* AnalyticsSessionState_t681173134_il2cpp_TypeInfo_var;
extern RuntimeClass* Analytics_t661012366_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern RuntimeClass* Byte_t1134296376_il2cpp_TypeInfo_var;
extern RuntimeClass* Char_t3634460470_il2cpp_TypeInfo_var;
extern RuntimeClass* Convert_t2465617642_il2cpp_TypeInfo_var;
extern RuntimeClass* CustomEventData_t317522481_il2cpp_TypeInfo_var;
extern RuntimeClass* Decimal_t2948259380_il2cpp_TypeInfo_var;
extern RuntimeClass* Double_t594665363_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t4242887519_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t1400637802_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* Int16_t2552820387_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* Int64_t3736567304_il2cpp_TypeInfo_var;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern RuntimeClass* RemoteSettings_t1718627291_il2cpp_TypeInfo_var;
extern RuntimeClass* SByte_t1669577662_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt16_t2177724958_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt32_t2560061978_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt64_t4134040092_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityAnalyticsHandler_t3011359618_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1202628576;
extern String_t* _stringLiteral2903831799;
extern String_t* _stringLiteral3959746398;
extern const RuntimeMethod* Action_1_Invoke_m1933767679_RuntimeMethod_var;
extern const RuntimeMethod* Action_3_Invoke_m1011371804_RuntimeMethod_var;
extern const RuntimeMethod* Analytics_CustomEvent_m3835919949_RuntimeMethod_var;
extern const RuntimeMethod* Analytics_CustomEvent_m692224174_RuntimeMethod_var;
extern const RuntimeMethod* CustomEventData_AddDictionary_m266566478_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m256823211_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m4108279609_RuntimeMethod_var;
extern const RuntimeType* Boolean_t97287965_0_0_0_var;
extern const RuntimeType* Byte_t1134296376_0_0_0_var;
extern const RuntimeType* Char_t3634460470_0_0_0_var;
extern const RuntimeType* Decimal_t2948259380_0_0_0_var;
extern const RuntimeType* Double_t594665363_0_0_0_var;
extern const RuntimeType* Int16_t2552820387_0_0_0_var;
extern const RuntimeType* Int32_t2950945753_0_0_0_var;
extern const RuntimeType* Int64_t3736567304_0_0_0_var;
extern const RuntimeType* SByte_t1669577662_0_0_0_var;
extern const RuntimeType* Single_t1397266774_0_0_0_var;
extern const RuntimeType* String_t_0_0_0_var;
extern const RuntimeType* UInt16_t2177724958_0_0_0_var;
extern const RuntimeType* UInt32_t2560061978_0_0_0_var;
extern const RuntimeType* UInt64_t4134040092_0_0_0_var;
extern const uint32_t AnalyticsSessionInfo_CallSessionStateChanged_m1270932408_MetadataUsageId;
extern const uint32_t Analytics_CustomEvent_m3835919949_MetadataUsageId;
extern const uint32_t Analytics_CustomEvent_m692224174_MetadataUsageId;
extern const uint32_t Analytics_GetUnityAnalyticsHandler_m2772482435_MetadataUsageId;
extern const uint32_t CustomEventData_AddDictionary_m266566478_MetadataUsageId;
extern const uint32_t CustomEventData_Destroy_m2070199408_MetadataUsageId;
extern const uint32_t RemoteConfigSettings_Destroy_m1854335118_MetadataUsageId;
extern const uint32_t RemoteConfigSettings_RemoteConfigSettingsUpdated_m2409101234_MetadataUsageId;
extern const uint32_t RemoteConfigSettings_t1247263429_com_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t RemoteConfigSettings_t1247263429_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t RemoteSettings_RemoteSettingsBeforeFetchFromServer_m4228537265_MetadataUsageId;
extern const uint32_t RemoteSettings_RemoteSettingsUpdateCompleted_m2956290507_MetadataUsageId;
extern const uint32_t RemoteSettings_RemoteSettingsUpdated_m1182006011_MetadataUsageId;
extern const uint32_t SessionStateChanged_BeginInvoke_m1132835327_MetadataUsageId;
extern const uint32_t UnityAnalyticsHandler_Destroy_m945739537_MetadataUsageId;
extern const uint32_t UnityAnalyticsHandler_IsInitialized_m2620746640_MetadataUsageId;



#ifndef U3CMODULEU3E_T692745540_H
#define U3CMODULEU3E_T692745540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745540 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745540_H
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
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
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
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
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
	CharU5BU5D_t3528271667* ___WhiteChars_3;

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
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef ANALYTICS_T661012366_H
#define ANALYTICS_T661012366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.Analytics
struct  Analytics_t661012366  : public RuntimeObject
{
public:

public:
};

struct Analytics_t661012366_StaticFields
{
public:
	// UnityEngine.Analytics.UnityAnalyticsHandler UnityEngine.Analytics.Analytics::s_UnityAnalyticsHandler
	UnityAnalyticsHandler_t3011359618 * ___s_UnityAnalyticsHandler_0;

public:
	inline static int32_t get_offset_of_s_UnityAnalyticsHandler_0() { return static_cast<int32_t>(offsetof(Analytics_t661012366_StaticFields, ___s_UnityAnalyticsHandler_0)); }
	inline UnityAnalyticsHandler_t3011359618 * get_s_UnityAnalyticsHandler_0() const { return ___s_UnityAnalyticsHandler_0; }
	inline UnityAnalyticsHandler_t3011359618 ** get_address_of_s_UnityAnalyticsHandler_0() { return &___s_UnityAnalyticsHandler_0; }
	inline void set_s_UnityAnalyticsHandler_0(UnityAnalyticsHandler_t3011359618 * value)
	{
		___s_UnityAnalyticsHandler_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_UnityAnalyticsHandler_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANALYTICS_T661012366_H
#ifndef ANALYTICSSESSIONINFO_T2322308579_H
#define ANALYTICSSESSIONINFO_T2322308579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.AnalyticsSessionInfo
struct  AnalyticsSessionInfo_t2322308579  : public RuntimeObject
{
public:

public:
};

struct AnalyticsSessionInfo_t2322308579_StaticFields
{
public:
	// UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged UnityEngine.Analytics.AnalyticsSessionInfo::sessionStateChanged
	SessionStateChanged_t3163629820 * ___sessionStateChanged_0;

public:
	inline static int32_t get_offset_of_sessionStateChanged_0() { return static_cast<int32_t>(offsetof(AnalyticsSessionInfo_t2322308579_StaticFields, ___sessionStateChanged_0)); }
	inline SessionStateChanged_t3163629820 * get_sessionStateChanged_0() const { return ___sessionStateChanged_0; }
	inline SessionStateChanged_t3163629820 ** get_address_of_sessionStateChanged_0() { return &___sessionStateChanged_0; }
	inline void set_sessionStateChanged_0(SessionStateChanged_t3163629820 * value)
	{
		___sessionStateChanged_0 = value;
		Il2CppCodeGenWriteBarrier((&___sessionStateChanged_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANALYTICSSESSIONINFO_T2322308579_H
#ifndef REMOTESETTINGS_T1718627291_H
#define REMOTESETTINGS_T1718627291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RemoteSettings
struct  RemoteSettings_t1718627291  : public RuntimeObject
{
public:

public:
};

struct RemoteSettings_t1718627291_StaticFields
{
public:
	// UnityEngine.RemoteSettings/UpdatedEventHandler UnityEngine.RemoteSettings::Updated
	UpdatedEventHandler_t1027848393 * ___Updated_0;
	// System.Action UnityEngine.RemoteSettings::BeforeFetchFromServer
	Action_t1264377477 * ___BeforeFetchFromServer_1;
	// System.Action`3<System.Boolean,System.Boolean,System.Int32> UnityEngine.RemoteSettings::Completed
	Action_3_t3050575418 * ___Completed_2;

public:
	inline static int32_t get_offset_of_Updated_0() { return static_cast<int32_t>(offsetof(RemoteSettings_t1718627291_StaticFields, ___Updated_0)); }
	inline UpdatedEventHandler_t1027848393 * get_Updated_0() const { return ___Updated_0; }
	inline UpdatedEventHandler_t1027848393 ** get_address_of_Updated_0() { return &___Updated_0; }
	inline void set_Updated_0(UpdatedEventHandler_t1027848393 * value)
	{
		___Updated_0 = value;
		Il2CppCodeGenWriteBarrier((&___Updated_0), value);
	}

	inline static int32_t get_offset_of_BeforeFetchFromServer_1() { return static_cast<int32_t>(offsetof(RemoteSettings_t1718627291_StaticFields, ___BeforeFetchFromServer_1)); }
	inline Action_t1264377477 * get_BeforeFetchFromServer_1() const { return ___BeforeFetchFromServer_1; }
	inline Action_t1264377477 ** get_address_of_BeforeFetchFromServer_1() { return &___BeforeFetchFromServer_1; }
	inline void set_BeforeFetchFromServer_1(Action_t1264377477 * value)
	{
		___BeforeFetchFromServer_1 = value;
		Il2CppCodeGenWriteBarrier((&___BeforeFetchFromServer_1), value);
	}

	inline static int32_t get_offset_of_Completed_2() { return static_cast<int32_t>(offsetof(RemoteSettings_t1718627291_StaticFields, ___Completed_2)); }
	inline Action_3_t3050575418 * get_Completed_2() const { return ___Completed_2; }
	inline Action_3_t3050575418 ** get_address_of_Completed_2() { return &___Completed_2; }
	inline void set_Completed_2(Action_3_t3050575418 * value)
	{
		___Completed_2 = value;
		Il2CppCodeGenWriteBarrier((&___Completed_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTESETTINGS_T1718627291_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
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
#endif // BOOLEAN_T97287965_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_2)); }
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
#endif // BYTE_T1134296376_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
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
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
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
#endif // CHAR_T3634460470_H
#ifndef KEYVALUEPAIR_2_T2530217319_H
#define KEYVALUEPAIR_2_T2530217319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t2530217319 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2530217319_H
#ifndef KEYVALUEPAIR_2_T968067334_H
#define KEYVALUEPAIR_2_T968067334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct  KeyValuePair_2_t968067334 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t968067334, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t968067334, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T968067334_H
#ifndef DECIMAL_T2948259380_H
#define DECIMAL_T2948259380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t2948259380 
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
	inline static int32_t get_offset_of_flags_6() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___flags_6)); }
	inline uint32_t get_flags_6() const { return ___flags_6; }
	inline uint32_t* get_address_of_flags_6() { return &___flags_6; }
	inline void set_flags_6(uint32_t value)
	{
		___flags_6 = value;
	}

	inline static int32_t get_offset_of_hi_7() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___hi_7)); }
	inline uint32_t get_hi_7() const { return ___hi_7; }
	inline uint32_t* get_address_of_hi_7() { return &___hi_7; }
	inline void set_hi_7(uint32_t value)
	{
		___hi_7 = value;
	}

	inline static int32_t get_offset_of_lo_8() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___lo_8)); }
	inline uint32_t get_lo_8() const { return ___lo_8; }
	inline uint32_t* get_address_of_lo_8() { return &___lo_8; }
	inline void set_lo_8(uint32_t value)
	{
		___lo_8 = value;
	}

	inline static int32_t get_offset_of_mid_9() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___mid_9)); }
	inline uint32_t get_mid_9() const { return ___mid_9; }
	inline uint32_t* get_address_of_mid_9() { return &___mid_9; }
	inline void set_mid_9(uint32_t value)
	{
		___mid_9 = value;
	}
};

struct Decimal_t2948259380_StaticFields
{
public:
	// System.Decimal System.Decimal::MinValue
	Decimal_t2948259380  ___MinValue_0;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2948259380  ___MaxValue_1;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2948259380  ___MinusOne_2;
	// System.Decimal System.Decimal::One
	Decimal_t2948259380  ___One_3;
	// System.Decimal System.Decimal::Zero
	Decimal_t2948259380  ___Zero_4;
	// System.Decimal System.Decimal::MaxValueDiv10
	Decimal_t2948259380  ___MaxValueDiv10_5;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinValue_0)); }
	inline Decimal_t2948259380  get_MinValue_0() const { return ___MinValue_0; }
	inline Decimal_t2948259380 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(Decimal_t2948259380  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValue_1)); }
	inline Decimal_t2948259380  get_MaxValue_1() const { return ___MaxValue_1; }
	inline Decimal_t2948259380 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(Decimal_t2948259380  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinusOne_2() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinusOne_2)); }
	inline Decimal_t2948259380  get_MinusOne_2() const { return ___MinusOne_2; }
	inline Decimal_t2948259380 * get_address_of_MinusOne_2() { return &___MinusOne_2; }
	inline void set_MinusOne_2(Decimal_t2948259380  value)
	{
		___MinusOne_2 = value;
	}

	inline static int32_t get_offset_of_One_3() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___One_3)); }
	inline Decimal_t2948259380  get_One_3() const { return ___One_3; }
	inline Decimal_t2948259380 * get_address_of_One_3() { return &___One_3; }
	inline void set_One_3(Decimal_t2948259380  value)
	{
		___One_3 = value;
	}

	inline static int32_t get_offset_of_Zero_4() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___Zero_4)); }
	inline Decimal_t2948259380  get_Zero_4() const { return ___Zero_4; }
	inline Decimal_t2948259380 * get_address_of_Zero_4() { return &___Zero_4; }
	inline void set_Zero_4(Decimal_t2948259380  value)
	{
		___Zero_4 = value;
	}

	inline static int32_t get_offset_of_MaxValueDiv10_5() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValueDiv10_5)); }
	inline Decimal_t2948259380  get_MaxValueDiv10_5() const { return ___MaxValueDiv10_5; }
	inline Decimal_t2948259380 * get_address_of_MaxValueDiv10_5() { return &___MaxValueDiv10_5; }
	inline void set_MaxValueDiv10_5(Decimal_t2948259380  value)
	{
		___MaxValueDiv10_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T2948259380_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
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
#endif // DOUBLE_T594665363_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT16_T2552820387_H
#define INT16_T2552820387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t2552820387 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t2552820387, ___m_value_0)); }
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
#endif // INT16_T2552820387_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
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
#endif // INT32_T2950945753_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_2)); }
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
#endif // INT64_T3736567304_H
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
#ifndef SBYTE_T1669577662_H
#define SBYTE_T1669577662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SByte
struct  SByte_t1669577662 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t1669577662, ___m_value_0)); }
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
#endif // SBYTE_T1669577662_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
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
#endif // SINGLE_T1397266774_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef UINT16_T2177724958_H
#define UINT16_T2177724958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t2177724958 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt16_t2177724958, ___m_value_2)); }
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
#endif // UINT16_T2177724958_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_2)); }
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
#endif // UINT32_T2560061978_H
#ifndef UINT64_T4134040092_H
#define UINT64_T4134040092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t4134040092 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt64_t4134040092, ___m_value_2)); }
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
#endif // UINT64_T4134040092_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
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
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
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
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
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
#endif // BINDINGFLAGS_T2721792723_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
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
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef ANALYTICSRESULT_T2273004240_H
#define ANALYTICSRESULT_T2273004240_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.AnalyticsResult
struct  AnalyticsResult_t2273004240 
{
public:
	// System.Int32 UnityEngine.Analytics.AnalyticsResult::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AnalyticsResult_t2273004240, ___value___1)); }
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
#endif // ANALYTICSRESULT_T2273004240_H
#ifndef ANALYTICSSESSIONSTATE_T681173134_H
#define ANALYTICSSESSIONSTATE_T681173134_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.AnalyticsSessionState
struct  AnalyticsSessionState_t681173134 
{
public:
	// System.Int32 UnityEngine.Analytics.AnalyticsSessionState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AnalyticsSessionState_t681173134, ___value___1)); }
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
#endif // ANALYTICSSESSIONSTATE_T681173134_H
#ifndef CUSTOMEVENTDATA_T317522481_H
#define CUSTOMEVENTDATA_T317522481_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.CustomEventData
struct  CustomEventData_t317522481  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Analytics.CustomEventData::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CustomEventData_t317522481, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Analytics.CustomEventData
struct CustomEventData_t317522481_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Analytics.CustomEventData
struct CustomEventData_t317522481_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // CUSTOMEVENTDATA_T317522481_H
#ifndef UNITYANALYTICSHANDLER_T3011359618_H
#define UNITYANALYTICSHANDLER_T3011359618_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.UnityAnalyticsHandler
struct  UnityAnalyticsHandler_t3011359618  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Analytics.UnityAnalyticsHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityAnalyticsHandler_t3011359618, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Analytics.UnityAnalyticsHandler
struct UnityAnalyticsHandler_t3011359618_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Analytics.UnityAnalyticsHandler
struct UnityAnalyticsHandler_t3011359618_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // UNITYANALYTICSHANDLER_T3011359618_H
#ifndef REMOTECONFIGSETTINGS_T1247263429_H
#define REMOTECONFIGSETTINGS_T1247263429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RemoteConfigSettings
struct  RemoteConfigSettings_t1247263429  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RemoteConfigSettings::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<System.Boolean> UnityEngine.RemoteConfigSettings::Updated
	Action_1_t269755560 * ___Updated_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RemoteConfigSettings_t1247263429, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_Updated_1() { return static_cast<int32_t>(offsetof(RemoteConfigSettings_t1247263429, ___Updated_1)); }
	inline Action_1_t269755560 * get_Updated_1() const { return ___Updated_1; }
	inline Action_1_t269755560 ** get_address_of_Updated_1() { return &___Updated_1; }
	inline void set_Updated_1(Action_1_t269755560 * value)
	{
		___Updated_1 = value;
		Il2CppCodeGenWriteBarrier((&___Updated_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RemoteConfigSettings
struct RemoteConfigSettings_t1247263429_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___Updated_1;
};
// Native definition for COM marshalling of UnityEngine.RemoteConfigSettings
struct RemoteConfigSettings_t1247263429_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___Updated_1;
};
#endif // REMOTECONFIGSETTINGS_T1247263429_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
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
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
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
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
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
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
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
#ifndef ACTION_T1264377477_H
#define ACTION_T1264377477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action
struct  Action_t1264377477  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_T1264377477_H
#ifndef ACTION_1_T269755560_H
#define ACTION_1_T269755560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<System.Boolean>
struct  Action_1_t269755560  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T269755560_H
#ifndef ACTION_3_T3050575418_H
#define ACTION_3_T3050575418_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`3<System.Boolean,System.Boolean,System.Int32>
struct  Action_3_t3050575418  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_3_T3050575418_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef SESSIONSTATECHANGED_T3163629820_H
#define SESSIONSTATECHANGED_T3163629820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged
struct  SessionStateChanged_t3163629820  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SESSIONSTATECHANGED_T3163629820_H
#ifndef UPDATEDEVENTHANDLER_T1027848393_H
#define UPDATEDEVENTHANDLER_T1027848393_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RemoteSettings/UpdatedEventHandler
struct  UpdatedEventHandler_t1027848393  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEDEVENTHANDLER_T1027848393_H


// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m1328507389_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m3464904234_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_m1933767679_gshared (Action_1_t269755560 * __this, bool p0, const RuntimeMethod* method);
// System.Void System.Action`3<System.Boolean,System.Boolean,System.Int32>::Invoke(!0,!1,!2)
extern "C" IL2CPP_METHOD_ATTR void Action_3_Invoke_m1011371804_gshared (Action_3_t3050575418 * __this, bool p0, bool p1, int32_t p2, const RuntimeMethod* method);

// System.Void UnityEngine.Analytics.UnityAnalyticsHandler::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityAnalyticsHandler__ctor_m2433349566 (UnityAnalyticsHandler_t3011359618 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Analytics.UnityAnalyticsHandler::IsInitialized()
extern "C" IL2CPP_METHOD_ATTR bool UnityAnalyticsHandler_IsInitialized_m2620746640 (UnityAnalyticsHandler_t3011359618 * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m2969720369 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method);
// UnityEngine.Analytics.UnityAnalyticsHandler UnityEngine.Analytics.Analytics::GetUnityAnalyticsHandler()
extern "C" IL2CPP_METHOD_ATTR UnityAnalyticsHandler_t3011359618 * Analytics_GetUnityAnalyticsHandler_m2772482435 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.UnityAnalyticsHandler::SendCustomEventName(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t UnityAnalyticsHandler_SendCustomEventName_m839221434 (UnityAnalyticsHandler_t3011359618 * __this, String_t* ___customEventName0, const RuntimeMethod* method);
// System.Void UnityEngine.Analytics.CustomEventData::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void CustomEventData__ctor_m4146403782 (CustomEventData_t317522481 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Analytics.CustomEventData::AddDictionary(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" IL2CPP_METHOD_ATTR bool CustomEventData_AddDictionary_m266566478 (CustomEventData_t317522481 * __this, RuntimeObject* ___eventData0, const RuntimeMethod* method);
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.UnityAnalyticsHandler::SendCustomEvent(UnityEngine.Analytics.CustomEventData)
extern "C" IL2CPP_METHOD_ATTR int32_t UnityAnalyticsHandler_SendCustomEvent_m1223269116 (UnityAnalyticsHandler_t3011359618 * __this, CustomEventData_t317522481 * ___eventData0, const RuntimeMethod* method);
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged::Invoke(UnityEngine.Analytics.AnalyticsSessionState,System.Int64,System.Int64,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SessionStateChanged_Invoke_m4203746932 (SessionStateChanged_t3163629820 * __this, int32_t ___sessionState0, int64_t ___sessionId1, int64_t ___sessionElapsedTime2, bool ___sessionChanged3, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Analytics.CustomEventData::Internal_Create(UnityEngine.Analytics.CustomEventData,System.String)
extern "C" IL2CPP_METHOD_ATTR intptr_t CustomEventData_Internal_Create_m4267220301 (RuntimeObject * __this /* static, unused */, CustomEventData_t317522481 * ___ced0, String_t* ___name1, const RuntimeMethod* method);
// System.Void UnityEngine.Analytics.CustomEventData::Destroy()
extern "C" IL2CPP_METHOD_ATTR void CustomEventData_Destroy_m2070199408 (CustomEventData_t317522481 * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
extern "C" IL2CPP_METHOD_ATTR void Object_Finalize_m3076187857 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m3063970704 (RuntimeObject * __this /* static, unused */, intptr_t p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Analytics.CustomEventData::Internal_Destroy(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void CustomEventData_Internal_Destroy_m3916992396 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
extern "C" IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m1177400158 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m256823211 (KeyValuePair_2_t968067334 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t968067334 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1328507389_gshared)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Value()
inline RuntimeObject * KeyValuePair_2_get_Value_m4108279609 (KeyValuePair_2_t968067334 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_t968067334 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3464904234_gshared)(__this, method);
}
// System.Boolean UnityEngine.Analytics.CustomEventData::AddString(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool CustomEventData_AddString_m1770058667 (CustomEventData_t317522481 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method);
// System.Type System.Object::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method);
// System.String System.Char::ToString(System.Char)
extern "C" IL2CPP_METHOD_ATTR String_t* Char_ToString_m954857583 (RuntimeObject * __this /* static, unused */, Il2CppChar p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Analytics.CustomEventData::AddInt32(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool CustomEventData_AddInt32_m548429697 (CustomEventData_t317522481 * __this, String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Analytics.CustomEventData::AddUInt32(System.String,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR bool CustomEventData_AddUInt32_m4102684736 (CustomEventData_t317522481 * __this, String_t* ___key0, uint32_t ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Analytics.CustomEventData::AddInt64(System.String,System.Int64)
extern "C" IL2CPP_METHOD_ATTR bool CustomEventData_AddInt64_m3934322106 (CustomEventData_t317522481 * __this, String_t* ___key0, int64_t ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Analytics.CustomEventData::AddUInt64(System.String,System.UInt64)
extern "C" IL2CPP_METHOD_ATTR bool CustomEventData_AddUInt64_m725801310 (CustomEventData_t317522481 * __this, String_t* ___key0, uint64_t ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Analytics.CustomEventData::AddBool(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool CustomEventData_AddBool_m1904653514 (CustomEventData_t317522481 * __this, String_t* ___key0, bool ___value1, const RuntimeMethod* method);
// System.Decimal System.Convert::ToDecimal(System.Single)
extern "C" IL2CPP_METHOD_ATTR Decimal_t2948259380  Convert_ToDecimal_m3508035522 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method);
// System.Double System.Decimal::op_Explicit(System.Decimal)
extern "C" IL2CPP_METHOD_ATTR double Decimal_op_Explicit_m2816896069 (RuntimeObject * __this /* static, unused */, Decimal_t2948259380  p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Analytics.CustomEventData::AddDouble(System.String,System.Double)
extern "C" IL2CPP_METHOD_ATTR bool CustomEventData_AddDouble_m631895201 (CustomEventData_t317522481 * __this, String_t* ___key0, double ___value1, const RuntimeMethod* method);
// System.Decimal System.Convert::ToDecimal(System.Decimal)
extern "C" IL2CPP_METHOD_ATTR Decimal_t2948259380  Convert_ToDecimal_m1783778724 (RuntimeObject * __this /* static, unused */, Decimal_t2948259380  p0, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsValueType()
extern "C" IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m3108065642 (Type_t * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Analytics.UnityAnalyticsHandler::Internal_Create(UnityEngine.Analytics.UnityAnalyticsHandler)
extern "C" IL2CPP_METHOD_ATTR intptr_t UnityAnalyticsHandler_Internal_Create_m852466012 (RuntimeObject * __this /* static, unused */, UnityAnalyticsHandler_t3011359618 * ___u0, const RuntimeMethod* method);
// System.Void UnityEngine.Analytics.UnityAnalyticsHandler::Destroy()
extern "C" IL2CPP_METHOD_ATTR void UnityAnalyticsHandler_Destroy_m945739537 (UnityAnalyticsHandler_t3011359618 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Analytics.UnityAnalyticsHandler::Internal_Destroy(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAnalyticsHandler_Internal_Destroy_m2102025341 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void UnityEngine.RemoteConfigSettings::Destroy()
extern "C" IL2CPP_METHOD_ATTR void RemoteConfigSettings_Destroy_m1854335118 (RemoteConfigSettings_t1247263429 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RemoteConfigSettings::Internal_Destroy(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void RemoteConfigSettings_Internal_Destroy_m1072151938 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
inline void Action_1_Invoke_m1933767679 (Action_1_t269755560 * __this, bool p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t269755560 *, bool, const RuntimeMethod*))Action_1_Invoke_m1933767679_gshared)(__this, p0, method);
}
// System.Void UnityEngine.RemoteSettings/UpdatedEventHandler::Invoke()
extern "C" IL2CPP_METHOD_ATTR void UpdatedEventHandler_Invoke_m3026613363 (UpdatedEventHandler_t1027848393 * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
extern "C" IL2CPP_METHOD_ATTR void Action_Invoke_m937035532 (Action_t1264377477 * __this, const RuntimeMethod* method);
// System.Void System.Action`3<System.Boolean,System.Boolean,System.Int32>::Invoke(!0,!1,!2)
inline void Action_3_Invoke_m1011371804 (Action_3_t3050575418 * __this, bool p0, bool p1, int32_t p2, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t3050575418 *, bool, bool, int32_t, const RuntimeMethod*))Action_3_Invoke_m1011371804_gshared)(__this, p0, p1, p2, method);
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
// UnityEngine.Analytics.UnityAnalyticsHandler UnityEngine.Analytics.Analytics::GetUnityAnalyticsHandler()
extern "C" IL2CPP_METHOD_ATTR UnityAnalyticsHandler_t3011359618 * Analytics_GetUnityAnalyticsHandler_m2772482435 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Analytics_GetUnityAnalyticsHandler_m2772482435_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityAnalyticsHandler_t3011359618 * V_0 = NULL;
	{
		UnityAnalyticsHandler_t3011359618 * L_0 = ((Analytics_t661012366_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t661012366_il2cpp_TypeInfo_var))->get_s_UnityAnalyticsHandler_0();
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		UnityAnalyticsHandler_t3011359618 * L_1 = (UnityAnalyticsHandler_t3011359618 *)il2cpp_codegen_object_new(UnityAnalyticsHandler_t3011359618_il2cpp_TypeInfo_var);
		UnityAnalyticsHandler__ctor_m2433349566(L_1, /*hidden argument*/NULL);
		((Analytics_t661012366_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t661012366_il2cpp_TypeInfo_var))->set_s_UnityAnalyticsHandler_0(L_1);
	}

IL_0015:
	{
		UnityAnalyticsHandler_t3011359618 * L_2 = ((Analytics_t661012366_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t661012366_il2cpp_TypeInfo_var))->get_s_UnityAnalyticsHandler_0();
		NullCheck(L_2);
		bool L_3 = UnityAnalyticsHandler_IsInitialized_m2620746640(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		UnityAnalyticsHandler_t3011359618 * L_4 = ((Analytics_t661012366_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t661012366_il2cpp_TypeInfo_var))->get_s_UnityAnalyticsHandler_0();
		V_0 = L_4;
		goto IL_0036;
	}

IL_002f:
	{
		V_0 = (UnityAnalyticsHandler_t3011359618 *)NULL;
		goto IL_0036;
	}

IL_0036:
	{
		UnityAnalyticsHandler_t3011359618 * L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::CustomEvent(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t Analytics_CustomEvent_m692224174 (RuntimeObject * __this /* static, unused */, String_t* ___customEventName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Analytics_CustomEvent_m692224174_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityAnalyticsHandler_t3011359618 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___customEventName0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentException_t132251570 * L_2 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_2, _stringLiteral2903831799, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Analytics_CustomEvent_m692224174_RuntimeMethod_var);
	}

IL_0017:
	{
		UnityAnalyticsHandler_t3011359618 * L_3 = Analytics_GetUnityAnalyticsHandler_m2772482435(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_3;
		UnityAnalyticsHandler_t3011359618 * L_4 = V_0;
		if (L_4)
		{
			goto IL_002a;
		}
	}
	{
		V_1 = 1;
		goto IL_0037;
	}

IL_002a:
	{
		UnityAnalyticsHandler_t3011359618 * L_5 = V_0;
		String_t* L_6 = ___customEventName0;
		NullCheck(L_5);
		int32_t L_7 = UnityAnalyticsHandler_SendCustomEventName_m839221434(L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		goto IL_0037;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		return L_8;
	}
}
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::CustomEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" IL2CPP_METHOD_ATTR int32_t Analytics_CustomEvent_m3835919949 (RuntimeObject * __this /* static, unused */, String_t* ___customEventName0, RuntimeObject* ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Analytics_CustomEvent_m3835919949_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityAnalyticsHandler_t3011359618 * V_0 = NULL;
	int32_t V_1 = 0;
	CustomEventData_t317522481 * V_2 = NULL;
	{
		String_t* L_0 = ___customEventName0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentException_t132251570 * L_2 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_2, _stringLiteral2903831799, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Analytics_CustomEvent_m3835919949_RuntimeMethod_var);
	}

IL_0017:
	{
		UnityAnalyticsHandler_t3011359618 * L_3 = Analytics_GetUnityAnalyticsHandler_m2772482435(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_3;
		UnityAnalyticsHandler_t3011359618 * L_4 = V_0;
		if (L_4)
		{
			goto IL_002a;
		}
	}
	{
		V_1 = 1;
		goto IL_0059;
	}

IL_002a:
	{
		RuntimeObject* L_5 = ___eventData1;
		if (L_5)
		{
			goto IL_003d;
		}
	}
	{
		UnityAnalyticsHandler_t3011359618 * L_6 = V_0;
		String_t* L_7 = ___customEventName0;
		NullCheck(L_6);
		int32_t L_8 = UnityAnalyticsHandler_SendCustomEventName_m839221434(L_6, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		goto IL_0059;
	}

IL_003d:
	{
		String_t* L_9 = ___customEventName0;
		CustomEventData_t317522481 * L_10 = (CustomEventData_t317522481 *)il2cpp_codegen_object_new(CustomEventData_t317522481_il2cpp_TypeInfo_var);
		CustomEventData__ctor_m4146403782(L_10, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		CustomEventData_t317522481 * L_11 = V_2;
		RuntimeObject* L_12 = ___eventData1;
		NullCheck(L_11);
		CustomEventData_AddDictionary_m266566478(L_11, L_12, /*hidden argument*/NULL);
		UnityAnalyticsHandler_t3011359618 * L_13 = V_0;
		CustomEventData_t317522481 * L_14 = V_2;
		NullCheck(L_13);
		int32_t L_15 = UnityAnalyticsHandler_SendCustomEvent_m1223269116(L_13, L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		goto IL_0059;
	}

IL_0059:
	{
		int32_t L_16 = V_1;
		return L_16;
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
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo::CallSessionStateChanged(UnityEngine.Analytics.AnalyticsSessionState,System.Int64,System.Int64,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AnalyticsSessionInfo_CallSessionStateChanged_m1270932408 (RuntimeObject * __this /* static, unused */, int32_t ___sessionState0, int64_t ___sessionId1, int64_t ___sessionElapsedTime2, bool ___sessionChanged3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnalyticsSessionInfo_CallSessionStateChanged_m1270932408_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SessionStateChanged_t3163629820 * V_0 = NULL;
	{
		SessionStateChanged_t3163629820 * L_0 = ((AnalyticsSessionInfo_t2322308579_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsSessionInfo_t2322308579_il2cpp_TypeInfo_var))->get_sessionStateChanged_0();
		V_0 = L_0;
		SessionStateChanged_t3163629820 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		SessionStateChanged_t3163629820 * L_2 = V_0;
		int32_t L_3 = ___sessionState0;
		int64_t L_4 = ___sessionId1;
		int64_t L_5 = ___sessionElapsedTime2;
		bool L_6 = ___sessionChanged3;
		NullCheck(L_2);
		SessionStateChanged_Invoke_m4203746932(L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
	}

IL_0017:
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
extern "C"  void DelegatePInvokeWrapper_SessionStateChanged_t3163629820 (SessionStateChanged_t3163629820 * __this, int32_t ___sessionState0, int64_t ___sessionId1, int64_t ___sessionElapsedTime2, bool ___sessionChanged3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int64_t, int64_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___sessionState0, ___sessionId1, ___sessionElapsedTime2, static_cast<int32_t>(___sessionChanged3));

}
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SessionStateChanged__ctor_m2637910444 (SessionStateChanged_t3163629820 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged::Invoke(UnityEngine.Analytics.AnalyticsSessionState,System.Int64,System.Int64,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SessionStateChanged_Invoke_m4203746932 (SessionStateChanged_t3163629820 * __this, int32_t ___sessionState0, int64_t ___sessionId1, int64_t ___sessionElapsedTime2, bool ___sessionChanged3, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		SessionStateChanged_Invoke_m4203746932((SessionStateChanged_t3163629820 *)__this->get_prev_9(), ___sessionState0, ___sessionId1, ___sessionElapsedTime2, ___sessionChanged3, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 4)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, int64_t, int64_t, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___sessionState0, ___sessionId1, ___sessionElapsedTime2, ___sessionChanged3, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, int64_t, int64_t, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___sessionState0, ___sessionId1, ___sessionElapsedTime2, ___sessionChanged3, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< int32_t, int64_t, int64_t, bool >::Invoke(targetMethod, targetThis, ___sessionState0, ___sessionId1, ___sessionElapsedTime2, ___sessionChanged3);
					else
						GenericVirtActionInvoker4< int32_t, int64_t, int64_t, bool >::Invoke(targetMethod, targetThis, ___sessionState0, ___sessionId1, ___sessionElapsedTime2, ___sessionChanged3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< int32_t, int64_t, int64_t, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sessionState0, ___sessionId1, ___sessionElapsedTime2, ___sessionChanged3);
					else
						VirtActionInvoker4< int32_t, int64_t, int64_t, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sessionState0, ___sessionId1, ___sessionElapsedTime2, ___sessionChanged3);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, int64_t, int64_t, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sessionState0, ___sessionId1, ___sessionElapsedTime2, ___sessionChanged3, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged::BeginInvoke(UnityEngine.Analytics.AnalyticsSessionState,System.Int64,System.Int64,System.Boolean,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SessionStateChanged_BeginInvoke_m1132835327 (SessionStateChanged_t3163629820 * __this, int32_t ___sessionState0, int64_t ___sessionId1, int64_t ___sessionElapsedTime2, bool ___sessionChanged3, AsyncCallback_t3962456242 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SessionStateChanged_BeginInvoke_m1132835327_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(AnalyticsSessionState_t681173134_il2cpp_TypeInfo_var, &___sessionState0);
	__d_args[1] = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &___sessionId1);
	__d_args[2] = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &___sessionElapsedTime2);
	__d_args[3] = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &___sessionChanged3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void SessionStateChanged_EndInvoke_m3581055289 (SessionStateChanged_t3163629820 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Analytics.CustomEventData
extern "C" void CustomEventData_t317522481_marshal_pinvoke(const CustomEventData_t317522481& unmarshaled, CustomEventData_t317522481_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void CustomEventData_t317522481_marshal_pinvoke_back(const CustomEventData_t317522481_marshaled_pinvoke& marshaled, CustomEventData_t317522481& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Analytics.CustomEventData
extern "C" void CustomEventData_t317522481_marshal_pinvoke_cleanup(CustomEventData_t317522481_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Analytics.CustomEventData
extern "C" void CustomEventData_t317522481_marshal_com(const CustomEventData_t317522481& unmarshaled, CustomEventData_t317522481_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void CustomEventData_t317522481_marshal_com_back(const CustomEventData_t317522481_marshaled_com& marshaled, CustomEventData_t317522481& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Analytics.CustomEventData
extern "C" void CustomEventData_t317522481_marshal_com_cleanup(CustomEventData_t317522481_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Analytics.CustomEventData::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void CustomEventData__ctor_m4146403782 (CustomEventData_t317522481 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		intptr_t L_1 = CustomEventData_Internal_Create_m4267220301(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		__this->set_m_Ptr_0(L_1);
		return;
	}
}
// System.Void UnityEngine.Analytics.CustomEventData::Finalize()
extern "C" IL2CPP_METHOD_ATTR void CustomEventData_Finalize_m1724721833 (CustomEventData_t317522481 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		CustomEventData_Destroy_m2070199408(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.CustomEventData::Destroy()
extern "C" IL2CPP_METHOD_ATTR void CustomEventData_Destroy_m2070199408 (CustomEventData_t317522481 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CustomEventData_Destroy_m2070199408_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		intptr_t L_2 = __this->get_m_Ptr_0();
		CustomEventData_Internal_Destroy_m3916992396(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)(0));
	}

IL_002e:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.CustomEventData::Dispose()
extern "C" IL2CPP_METHOD_ATTR void CustomEventData_Dispose_m4023815755 (CustomEventData_t317522481 * __this, const RuntimeMethod* method)
{
	{
		CustomEventData_Destroy_m2070199408(__this, /*hidden argument*/NULL);
		GC_SuppressFinalize_m1177400158(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.IntPtr UnityEngine.Analytics.CustomEventData::Internal_Create(UnityEngine.Analytics.CustomEventData,System.String)
extern "C" IL2CPP_METHOD_ATTR intptr_t CustomEventData_Internal_Create_m4267220301 (RuntimeObject * __this /* static, unused */, CustomEventData_t317522481 * ___ced0, String_t* ___name1, const RuntimeMethod* method)
{
	typedef intptr_t (*CustomEventData_Internal_Create_m4267220301_ftn) (CustomEventData_t317522481 *, String_t*);
	static CustomEventData_Internal_Create_m4267220301_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CustomEventData_Internal_Create_m4267220301_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.CustomEventData::Internal_Create(UnityEngine.Analytics.CustomEventData,System.String)");
	intptr_t retVal = _il2cpp_icall_func(___ced0, ___name1);
	return retVal;
}
// System.Void UnityEngine.Analytics.CustomEventData::Internal_Destroy(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void CustomEventData_Internal_Destroy_m3916992396 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (*CustomEventData_Internal_Destroy_m3916992396_ftn) (intptr_t);
	static CustomEventData_Internal_Destroy_m3916992396_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CustomEventData_Internal_Destroy_m3916992396_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.CustomEventData::Internal_Destroy(System.IntPtr)");
	_il2cpp_icall_func(___ptr0);
}
// System.Boolean UnityEngine.Analytics.CustomEventData::AddString(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool CustomEventData_AddString_m1770058667 (CustomEventData_t317522481 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	typedef bool (*CustomEventData_AddString_m1770058667_ftn) (CustomEventData_t317522481 *, String_t*, String_t*);
	static CustomEventData_AddString_m1770058667_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CustomEventData_AddString_m1770058667_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.CustomEventData::AddString(System.String,System.String)");
	bool retVal = _il2cpp_icall_func(__this, ___key0, ___value1);
	return retVal;
}
// System.Boolean UnityEngine.Analytics.CustomEventData::AddInt32(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool CustomEventData_AddInt32_m548429697 (CustomEventData_t317522481 * __this, String_t* ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	typedef bool (*CustomEventData_AddInt32_m548429697_ftn) (CustomEventData_t317522481 *, String_t*, int32_t);
	static CustomEventData_AddInt32_m548429697_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CustomEventData_AddInt32_m548429697_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.CustomEventData::AddInt32(System.String,System.Int32)");
	bool retVal = _il2cpp_icall_func(__this, ___key0, ___value1);
	return retVal;
}
// System.Boolean UnityEngine.Analytics.CustomEventData::AddUInt32(System.String,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR bool CustomEventData_AddUInt32_m4102684736 (CustomEventData_t317522481 * __this, String_t* ___key0, uint32_t ___value1, const RuntimeMethod* method)
{
	typedef bool (*CustomEventData_AddUInt32_m4102684736_ftn) (CustomEventData_t317522481 *, String_t*, uint32_t);
	static CustomEventData_AddUInt32_m4102684736_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CustomEventData_AddUInt32_m4102684736_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.CustomEventData::AddUInt32(System.String,System.UInt32)");
	bool retVal = _il2cpp_icall_func(__this, ___key0, ___value1);
	return retVal;
}
// System.Boolean UnityEngine.Analytics.CustomEventData::AddInt64(System.String,System.Int64)
extern "C" IL2CPP_METHOD_ATTR bool CustomEventData_AddInt64_m3934322106 (CustomEventData_t317522481 * __this, String_t* ___key0, int64_t ___value1, const RuntimeMethod* method)
{
	typedef bool (*CustomEventData_AddInt64_m3934322106_ftn) (CustomEventData_t317522481 *, String_t*, int64_t);
	static CustomEventData_AddInt64_m3934322106_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CustomEventData_AddInt64_m3934322106_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.CustomEventData::AddInt64(System.String,System.Int64)");
	bool retVal = _il2cpp_icall_func(__this, ___key0, ___value1);
	return retVal;
}
// System.Boolean UnityEngine.Analytics.CustomEventData::AddUInt64(System.String,System.UInt64)
extern "C" IL2CPP_METHOD_ATTR bool CustomEventData_AddUInt64_m725801310 (CustomEventData_t317522481 * __this, String_t* ___key0, uint64_t ___value1, const RuntimeMethod* method)
{
	typedef bool (*CustomEventData_AddUInt64_m725801310_ftn) (CustomEventData_t317522481 *, String_t*, uint64_t);
	static CustomEventData_AddUInt64_m725801310_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CustomEventData_AddUInt64_m725801310_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.CustomEventData::AddUInt64(System.String,System.UInt64)");
	bool retVal = _il2cpp_icall_func(__this, ___key0, ___value1);
	return retVal;
}
// System.Boolean UnityEngine.Analytics.CustomEventData::AddBool(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool CustomEventData_AddBool_m1904653514 (CustomEventData_t317522481 * __this, String_t* ___key0, bool ___value1, const RuntimeMethod* method)
{
	typedef bool (*CustomEventData_AddBool_m1904653514_ftn) (CustomEventData_t317522481 *, String_t*, bool);
	static CustomEventData_AddBool_m1904653514_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CustomEventData_AddBool_m1904653514_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.CustomEventData::AddBool(System.String,System.Boolean)");
	bool retVal = _il2cpp_icall_func(__this, ___key0, ___value1);
	return retVal;
}
// System.Boolean UnityEngine.Analytics.CustomEventData::AddDouble(System.String,System.Double)
extern "C" IL2CPP_METHOD_ATTR bool CustomEventData_AddDouble_m631895201 (CustomEventData_t317522481 * __this, String_t* ___key0, double ___value1, const RuntimeMethod* method)
{
	typedef bool (*CustomEventData_AddDouble_m631895201_ftn) (CustomEventData_t317522481 *, String_t*, double);
	static CustomEventData_AddDouble_m631895201_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CustomEventData_AddDouble_m631895201_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.CustomEventData::AddDouble(System.String,System.Double)");
	bool retVal = _il2cpp_icall_func(__this, ___key0, ___value1);
	return retVal;
}
// System.Boolean UnityEngine.Analytics.CustomEventData::AddDictionary(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" IL2CPP_METHOD_ATTR bool CustomEventData_AddDictionary_m266566478 (CustomEventData_t317522481 * __this, RuntimeObject* ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CustomEventData_AddDictionary_m266566478_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t968067334  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	Type_t * V_4 = NULL;
	bool V_5 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = ___eventData0;
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::GetEnumerator() */, IEnumerable_1_t4242887519_il2cpp_TypeInfo_var, L_0);
		V_1 = L_1;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0291;
		}

IL_000e:
		{
			RuntimeObject* L_2 = V_1;
			NullCheck(L_2);
			KeyValuePair_2_t968067334  L_3 = InterfaceFuncInvoker0< KeyValuePair_2_t968067334  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Current() */, IEnumerator_1_t1400637802_il2cpp_TypeInfo_var, L_2);
			V_0 = L_3;
			String_t* L_4 = KeyValuePair_2_get_Key_m256823211((KeyValuePair_2_t968067334 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Key_m256823211_RuntimeMethod_var);
			V_2 = L_4;
			RuntimeObject * L_5 = KeyValuePair_2_get_Value_m4108279609((KeyValuePair_2_t968067334 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m4108279609_RuntimeMethod_var);
			V_3 = L_5;
			RuntimeObject * L_6 = V_3;
			if (L_6)
			{
				goto IL_003f;
			}
		}

IL_002c:
		{
			String_t* L_7 = V_2;
			CustomEventData_AddString_m1770058667(__this, L_7, _stringLiteral1202628576, /*hidden argument*/NULL);
			goto IL_0291;
		}

IL_003f:
		{
			RuntimeObject * L_8 = V_3;
			NullCheck(L_8);
			Type_t * L_9 = Object_GetType_m88164663(L_8, /*hidden argument*/NULL);
			V_4 = L_9;
			Type_t * L_10 = V_4;
			RuntimeTypeHandle_t3027515415  L_11 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_12 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
			if ((!(((RuntimeObject*)(Type_t *)L_10) == ((RuntimeObject*)(Type_t *)L_12))))
			{
				goto IL_006b;
			}
		}

IL_0058:
		{
			String_t* L_13 = V_2;
			RuntimeObject * L_14 = V_3;
			CustomEventData_AddString_m1770058667(__this, L_13, ((String_t*)CastclassSealed((RuntimeObject*)L_14, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			goto IL_0290;
		}

IL_006b:
		{
			Type_t * L_15 = V_4;
			RuntimeTypeHandle_t3027515415  L_16 = { reinterpret_cast<intptr_t> (Char_t3634460470_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_17 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
			if ((!(((RuntimeObject*)(Type_t *)L_15) == ((RuntimeObject*)(Type_t *)L_17))))
			{
				goto IL_0094;
			}
		}

IL_007c:
		{
			String_t* L_18 = V_2;
			RuntimeObject * L_19 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
			String_t* L_20 = Char_ToString_m954857583(NULL /*static, unused*/, ((*(Il2CppChar*)((Il2CppChar*)UnBox(L_19, Char_t3634460470_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
			CustomEventData_AddString_m1770058667(__this, L_18, L_20, /*hidden argument*/NULL);
			goto IL_0290;
		}

IL_0094:
		{
			Type_t * L_21 = V_4;
			RuntimeTypeHandle_t3027515415  L_22 = { reinterpret_cast<intptr_t> (SByte_t1669577662_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_23 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
			if ((!(((RuntimeObject*)(Type_t *)L_21) == ((RuntimeObject*)(Type_t *)L_23))))
			{
				goto IL_00b9;
			}
		}

IL_00a5:
		{
			String_t* L_24 = V_2;
			RuntimeObject * L_25 = V_3;
			CustomEventData_AddInt32_m548429697(__this, L_24, (((int32_t)((int32_t)((*(int8_t*)((int8_t*)UnBox(L_25, SByte_t1669577662_il2cpp_TypeInfo_var))))))), /*hidden argument*/NULL);
			goto IL_0290;
		}

IL_00b9:
		{
			Type_t * L_26 = V_4;
			RuntimeTypeHandle_t3027515415  L_27 = { reinterpret_cast<intptr_t> (Byte_t1134296376_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_28 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
			if ((!(((RuntimeObject*)(Type_t *)L_26) == ((RuntimeObject*)(Type_t *)L_28))))
			{
				goto IL_00dd;
			}
		}

IL_00ca:
		{
			String_t* L_29 = V_2;
			RuntimeObject * L_30 = V_3;
			CustomEventData_AddInt32_m548429697(__this, L_29, ((*(uint8_t*)((uint8_t*)UnBox(L_30, Byte_t1134296376_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
			goto IL_0290;
		}

IL_00dd:
		{
			Type_t * L_31 = V_4;
			RuntimeTypeHandle_t3027515415  L_32 = { reinterpret_cast<intptr_t> (Int16_t2552820387_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_33 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
			if ((!(((RuntimeObject*)(Type_t *)L_31) == ((RuntimeObject*)(Type_t *)L_33))))
			{
				goto IL_0101;
			}
		}

IL_00ee:
		{
			String_t* L_34 = V_2;
			RuntimeObject * L_35 = V_3;
			CustomEventData_AddInt32_m548429697(__this, L_34, ((*(int16_t*)((int16_t*)UnBox(L_35, Int16_t2552820387_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
			goto IL_0290;
		}

IL_0101:
		{
			Type_t * L_36 = V_4;
			RuntimeTypeHandle_t3027515415  L_37 = { reinterpret_cast<intptr_t> (UInt16_t2177724958_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_38 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
			if ((!(((RuntimeObject*)(Type_t *)L_36) == ((RuntimeObject*)(Type_t *)L_38))))
			{
				goto IL_0125;
			}
		}

IL_0112:
		{
			String_t* L_39 = V_2;
			RuntimeObject * L_40 = V_3;
			CustomEventData_AddUInt32_m4102684736(__this, L_39, ((*(uint16_t*)((uint16_t*)UnBox(L_40, UInt16_t2177724958_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
			goto IL_0290;
		}

IL_0125:
		{
			Type_t * L_41 = V_4;
			RuntimeTypeHandle_t3027515415  L_42 = { reinterpret_cast<intptr_t> (Int32_t2950945753_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_43 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_42, /*hidden argument*/NULL);
			if ((!(((RuntimeObject*)(Type_t *)L_41) == ((RuntimeObject*)(Type_t *)L_43))))
			{
				goto IL_0149;
			}
		}

IL_0136:
		{
			String_t* L_44 = V_2;
			RuntimeObject * L_45 = V_3;
			CustomEventData_AddInt32_m548429697(__this, L_44, ((*(int32_t*)((int32_t*)UnBox(L_45, Int32_t2950945753_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
			goto IL_0290;
		}

IL_0149:
		{
			Type_t * L_46 = V_4;
			RuntimeTypeHandle_t3027515415  L_47 = { reinterpret_cast<intptr_t> (UInt32_t2560061978_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_48 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_47, /*hidden argument*/NULL);
			if ((!(((RuntimeObject*)(Type_t *)L_46) == ((RuntimeObject*)(Type_t *)L_48))))
			{
				goto IL_0173;
			}
		}

IL_015a:
		{
			String_t* L_49 = KeyValuePair_2_get_Key_m256823211((KeyValuePair_2_t968067334 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Key_m256823211_RuntimeMethod_var);
			RuntimeObject * L_50 = V_3;
			CustomEventData_AddUInt32_m4102684736(__this, L_49, ((*(uint32_t*)((uint32_t*)UnBox(L_50, UInt32_t2560061978_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
			goto IL_0290;
		}

IL_0173:
		{
			Type_t * L_51 = V_4;
			RuntimeTypeHandle_t3027515415  L_52 = { reinterpret_cast<intptr_t> (Int64_t3736567304_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_53 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_52, /*hidden argument*/NULL);
			if ((!(((RuntimeObject*)(Type_t *)L_51) == ((RuntimeObject*)(Type_t *)L_53))))
			{
				goto IL_0197;
			}
		}

IL_0184:
		{
			String_t* L_54 = V_2;
			RuntimeObject * L_55 = V_3;
			CustomEventData_AddInt64_m3934322106(__this, L_54, ((*(int64_t*)((int64_t*)UnBox(L_55, Int64_t3736567304_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
			goto IL_0290;
		}

IL_0197:
		{
			Type_t * L_56 = V_4;
			RuntimeTypeHandle_t3027515415  L_57 = { reinterpret_cast<intptr_t> (UInt64_t4134040092_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_58 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_57, /*hidden argument*/NULL);
			if ((!(((RuntimeObject*)(Type_t *)L_56) == ((RuntimeObject*)(Type_t *)L_58))))
			{
				goto IL_01bb;
			}
		}

IL_01a8:
		{
			String_t* L_59 = V_2;
			RuntimeObject * L_60 = V_3;
			CustomEventData_AddUInt64_m725801310(__this, L_59, ((*(uint64_t*)((uint64_t*)UnBox(L_60, UInt64_t4134040092_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
			goto IL_0290;
		}

IL_01bb:
		{
			Type_t * L_61 = V_4;
			RuntimeTypeHandle_t3027515415  L_62 = { reinterpret_cast<intptr_t> (Boolean_t97287965_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_63 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_62, /*hidden argument*/NULL);
			if ((!(((RuntimeObject*)(Type_t *)L_61) == ((RuntimeObject*)(Type_t *)L_63))))
			{
				goto IL_01df;
			}
		}

IL_01cc:
		{
			String_t* L_64 = V_2;
			RuntimeObject * L_65 = V_3;
			CustomEventData_AddBool_m1904653514(__this, L_64, ((*(bool*)((bool*)UnBox(L_65, Boolean_t97287965_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
			goto IL_0290;
		}

IL_01df:
		{
			Type_t * L_66 = V_4;
			RuntimeTypeHandle_t3027515415  L_67 = { reinterpret_cast<intptr_t> (Single_t1397266774_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_68 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_67, /*hidden argument*/NULL);
			if ((!(((RuntimeObject*)(Type_t *)L_66) == ((RuntimeObject*)(Type_t *)L_68))))
			{
				goto IL_020d;
			}
		}

IL_01f0:
		{
			String_t* L_69 = V_2;
			RuntimeObject * L_70 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
			Decimal_t2948259380  L_71 = Convert_ToDecimal_m3508035522(NULL /*static, unused*/, ((*(float*)((float*)UnBox(L_70, Single_t1397266774_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2948259380_il2cpp_TypeInfo_var);
			double L_72 = Decimal_op_Explicit_m2816896069(NULL /*static, unused*/, L_71, /*hidden argument*/NULL);
			CustomEventData_AddDouble_m631895201(__this, L_69, L_72, /*hidden argument*/NULL);
			goto IL_0290;
		}

IL_020d:
		{
			Type_t * L_73 = V_4;
			RuntimeTypeHandle_t3027515415  L_74 = { reinterpret_cast<intptr_t> (Double_t594665363_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_75 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_74, /*hidden argument*/NULL);
			if ((!(((RuntimeObject*)(Type_t *)L_73) == ((RuntimeObject*)(Type_t *)L_75))))
			{
				goto IL_0231;
			}
		}

IL_021e:
		{
			String_t* L_76 = V_2;
			RuntimeObject * L_77 = V_3;
			CustomEventData_AddDouble_m631895201(__this, L_76, ((*(double*)((double*)UnBox(L_77, Double_t594665363_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
			goto IL_0290;
		}

IL_0231:
		{
			Type_t * L_78 = V_4;
			RuntimeTypeHandle_t3027515415  L_79 = { reinterpret_cast<intptr_t> (Decimal_t2948259380_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_80 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_79, /*hidden argument*/NULL);
			if ((!(((RuntimeObject*)(Type_t *)L_78) == ((RuntimeObject*)(Type_t *)L_80))))
			{
				goto IL_025f;
			}
		}

IL_0242:
		{
			String_t* L_81 = V_2;
			RuntimeObject * L_82 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
			Decimal_t2948259380  L_83 = Convert_ToDecimal_m1783778724(NULL /*static, unused*/, ((*(Decimal_t2948259380 *)((Decimal_t2948259380 *)UnBox(L_82, Decimal_t2948259380_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2948259380_il2cpp_TypeInfo_var);
			double L_84 = Decimal_op_Explicit_m2816896069(NULL /*static, unused*/, L_83, /*hidden argument*/NULL);
			CustomEventData_AddDouble_m631895201(__this, L_81, L_84, /*hidden argument*/NULL);
			goto IL_0290;
		}

IL_025f:
		{
			Type_t * L_85 = V_4;
			NullCheck(L_85);
			bool L_86 = Type_get_IsValueType_m3108065642(L_85, /*hidden argument*/NULL);
			if (!L_86)
			{
				goto IL_027e;
			}
		}

IL_026b:
		{
			String_t* L_87 = V_2;
			RuntimeObject * L_88 = V_3;
			NullCheck(L_88);
			String_t* L_89 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_88);
			CustomEventData_AddString_m1770058667(__this, L_87, L_89, /*hidden argument*/NULL);
			goto IL_0290;
		}

IL_027e:
		{
			Type_t * L_90 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_91 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral3959746398, L_90, /*hidden argument*/NULL);
			ArgumentException_t132251570 * L_92 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
			ArgumentException__ctor_m1312628991(L_92, L_91, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_92, NULL, CustomEventData_AddDictionary_m266566478_RuntimeMethod_var);
		}

IL_0290:
		{
		}

IL_0291:
		{
			RuntimeObject* L_93 = V_1;
			NullCheck(L_93);
			bool L_94 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_93);
			if (L_94)
			{
				goto IL_000e;
			}
		}

IL_029c:
		{
			IL2CPP_LEAVE(0x2AE, FINALLY_02a1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_02a1;
	}

FINALLY_02a1:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_95 = V_1;
			if (!L_95)
			{
				goto IL_02ad;
			}
		}

IL_02a7:
		{
			RuntimeObject* L_96 = V_1;
			NullCheck(L_96);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_96);
		}

IL_02ad:
		{
			IL2CPP_END_FINALLY(673)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(673)
	{
		IL2CPP_JUMP_TBL(0x2AE, IL_02ae)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_02ae:
	{
		V_5 = (bool)1;
		goto IL_02b6;
	}

IL_02b6:
	{
		bool L_97 = V_5;
		return L_97;
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
// Conversion methods for marshalling of: UnityEngine.Analytics.UnityAnalyticsHandler
extern "C" void UnityAnalyticsHandler_t3011359618_marshal_pinvoke(const UnityAnalyticsHandler_t3011359618& unmarshaled, UnityAnalyticsHandler_t3011359618_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void UnityAnalyticsHandler_t3011359618_marshal_pinvoke_back(const UnityAnalyticsHandler_t3011359618_marshaled_pinvoke& marshaled, UnityAnalyticsHandler_t3011359618& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Analytics.UnityAnalyticsHandler
extern "C" void UnityAnalyticsHandler_t3011359618_marshal_pinvoke_cleanup(UnityAnalyticsHandler_t3011359618_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Analytics.UnityAnalyticsHandler
extern "C" void UnityAnalyticsHandler_t3011359618_marshal_com(const UnityAnalyticsHandler_t3011359618& unmarshaled, UnityAnalyticsHandler_t3011359618_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void UnityAnalyticsHandler_t3011359618_marshal_com_back(const UnityAnalyticsHandler_t3011359618_marshaled_com& marshaled, UnityAnalyticsHandler_t3011359618& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Analytics.UnityAnalyticsHandler
extern "C" void UnityAnalyticsHandler_t3011359618_marshal_com_cleanup(UnityAnalyticsHandler_t3011359618_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Analytics.UnityAnalyticsHandler::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityAnalyticsHandler__ctor_m2433349566 (UnityAnalyticsHandler_t3011359618 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		intptr_t L_0 = UnityAnalyticsHandler_Internal_Create_m852466012(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		__this->set_m_Ptr_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Analytics.UnityAnalyticsHandler::Finalize()
extern "C" IL2CPP_METHOD_ATTR void UnityAnalyticsHandler_Finalize_m1527596444 (UnityAnalyticsHandler_t3011359618 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		UnityAnalyticsHandler_Destroy_m945739537(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.UnityAnalyticsHandler::Destroy()
extern "C" IL2CPP_METHOD_ATTR void UnityAnalyticsHandler_Destroy_m945739537 (UnityAnalyticsHandler_t3011359618 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAnalyticsHandler_Destroy_m945739537_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		intptr_t L_2 = __this->get_m_Ptr_0();
		UnityAnalyticsHandler_Internal_Destroy_m2102025341(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)(0));
	}

IL_002e:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.UnityAnalyticsHandler::Dispose()
extern "C" IL2CPP_METHOD_ATTR void UnityAnalyticsHandler_Dispose_m300860768 (UnityAnalyticsHandler_t3011359618 * __this, const RuntimeMethod* method)
{
	{
		UnityAnalyticsHandler_Destroy_m945739537(__this, /*hidden argument*/NULL);
		GC_SuppressFinalize_m1177400158(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Analytics.UnityAnalyticsHandler::IsInitialized()
extern "C" IL2CPP_METHOD_ATTR bool UnityAnalyticsHandler_IsInitialized_m2620746640 (UnityAnalyticsHandler_t3011359618 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAnalyticsHandler_IsInitialized_m2620746640_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0017;
	}

IL_0017:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.IntPtr UnityEngine.Analytics.UnityAnalyticsHandler::Internal_Create(UnityEngine.Analytics.UnityAnalyticsHandler)
extern "C" IL2CPP_METHOD_ATTR intptr_t UnityAnalyticsHandler_Internal_Create_m852466012 (RuntimeObject * __this /* static, unused */, UnityAnalyticsHandler_t3011359618 * ___u0, const RuntimeMethod* method)
{
	typedef intptr_t (*UnityAnalyticsHandler_Internal_Create_m852466012_ftn) (UnityAnalyticsHandler_t3011359618 *);
	static UnityAnalyticsHandler_Internal_Create_m852466012_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityAnalyticsHandler_Internal_Create_m852466012_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.UnityAnalyticsHandler::Internal_Create(UnityEngine.Analytics.UnityAnalyticsHandler)");
	intptr_t retVal = _il2cpp_icall_func(___u0);
	return retVal;
}
// System.Void UnityEngine.Analytics.UnityAnalyticsHandler::Internal_Destroy(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAnalyticsHandler_Internal_Destroy_m2102025341 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (*UnityAnalyticsHandler_Internal_Destroy_m2102025341_ftn) (intptr_t);
	static UnityAnalyticsHandler_Internal_Destroy_m2102025341_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityAnalyticsHandler_Internal_Destroy_m2102025341_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.UnityAnalyticsHandler::Internal_Destroy(System.IntPtr)");
	_il2cpp_icall_func(___ptr0);
}
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.UnityAnalyticsHandler::SendCustomEventName(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t UnityAnalyticsHandler_SendCustomEventName_m839221434 (UnityAnalyticsHandler_t3011359618 * __this, String_t* ___customEventName0, const RuntimeMethod* method)
{
	typedef int32_t (*UnityAnalyticsHandler_SendCustomEventName_m839221434_ftn) (UnityAnalyticsHandler_t3011359618 *, String_t*);
	static UnityAnalyticsHandler_SendCustomEventName_m839221434_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityAnalyticsHandler_SendCustomEventName_m839221434_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.UnityAnalyticsHandler::SendCustomEventName(System.String)");
	int32_t retVal = _il2cpp_icall_func(__this, ___customEventName0);
	return retVal;
}
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.UnityAnalyticsHandler::SendCustomEvent(UnityEngine.Analytics.CustomEventData)
extern "C" IL2CPP_METHOD_ATTR int32_t UnityAnalyticsHandler_SendCustomEvent_m1223269116 (UnityAnalyticsHandler_t3011359618 * __this, CustomEventData_t317522481 * ___eventData0, const RuntimeMethod* method)
{
	typedef int32_t (*UnityAnalyticsHandler_SendCustomEvent_m1223269116_ftn) (UnityAnalyticsHandler_t3011359618 *, CustomEventData_t317522481 *);
	static UnityAnalyticsHandler_SendCustomEvent_m1223269116_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityAnalyticsHandler_SendCustomEvent_m1223269116_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.UnityAnalyticsHandler::SendCustomEvent(UnityEngine.Analytics.CustomEventData)");
	int32_t retVal = _il2cpp_icall_func(__this, ___eventData0);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.RemoteConfigSettings
extern "C" void RemoteConfigSettings_t1247263429_marshal_pinvoke(const RemoteConfigSettings_t1247263429& unmarshaled, RemoteConfigSettings_t1247263429_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
	marshaled.___Updated_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_Updated_1()));
}
extern "C" void RemoteConfigSettings_t1247263429_marshal_pinvoke_back(const RemoteConfigSettings_t1247263429_marshaled_pinvoke& marshaled, RemoteConfigSettings_t1247263429& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteConfigSettings_t1247263429_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
	unmarshaled.set_Updated_1(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t269755560>(marshaled.___Updated_1, Action_1_t269755560_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UnityEngine.RemoteConfigSettings
extern "C" void RemoteConfigSettings_t1247263429_marshal_pinvoke_cleanup(RemoteConfigSettings_t1247263429_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.RemoteConfigSettings
extern "C" void RemoteConfigSettings_t1247263429_marshal_com(const RemoteConfigSettings_t1247263429& unmarshaled, RemoteConfigSettings_t1247263429_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
	marshaled.___Updated_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_Updated_1()));
}
extern "C" void RemoteConfigSettings_t1247263429_marshal_com_back(const RemoteConfigSettings_t1247263429_marshaled_com& marshaled, RemoteConfigSettings_t1247263429& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteConfigSettings_t1247263429_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
	unmarshaled.set_Updated_1(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t269755560>(marshaled.___Updated_1, Action_1_t269755560_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UnityEngine.RemoteConfigSettings
extern "C" void RemoteConfigSettings_t1247263429_marshal_com_cleanup(RemoteConfigSettings_t1247263429_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.RemoteConfigSettings::Finalize()
extern "C" IL2CPP_METHOD_ATTR void RemoteConfigSettings_Finalize_m2805990196 (RemoteConfigSettings_t1247263429 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		RemoteConfigSettings_Destroy_m1854335118(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.RemoteConfigSettings::Destroy()
extern "C" IL2CPP_METHOD_ATTR void RemoteConfigSettings_Destroy_m1854335118 (RemoteConfigSettings_t1247263429 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteConfigSettings_Destroy_m1854335118_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		intptr_t L_2 = __this->get_m_Ptr_0();
		RemoteConfigSettings_Internal_Destroy_m1072151938(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)(0));
	}

IL_002e:
	{
		return;
	}
}
// System.Void UnityEngine.RemoteConfigSettings::Dispose()
extern "C" IL2CPP_METHOD_ATTR void RemoteConfigSettings_Dispose_m2083915538 (RemoteConfigSettings_t1247263429 * __this, const RuntimeMethod* method)
{
	{
		RemoteConfigSettings_Destroy_m1854335118(__this, /*hidden argument*/NULL);
		GC_SuppressFinalize_m1177400158(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RemoteConfigSettings::Internal_Destroy(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void RemoteConfigSettings_Internal_Destroy_m1072151938 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (*RemoteConfigSettings_Internal_Destroy_m1072151938_ftn) (intptr_t);
	static RemoteConfigSettings_Internal_Destroy_m1072151938_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RemoteConfigSettings_Internal_Destroy_m1072151938_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RemoteConfigSettings::Internal_Destroy(System.IntPtr)");
	_il2cpp_icall_func(___ptr0);
}
// System.Void UnityEngine.RemoteConfigSettings::RemoteConfigSettingsUpdated(UnityEngine.RemoteConfigSettings,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void RemoteConfigSettings_RemoteConfigSettingsUpdated_m2409101234 (RuntimeObject * __this /* static, unused */, RemoteConfigSettings_t1247263429 * ___rcs0, bool ___wasLastUpdatedFromServer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteConfigSettings_RemoteConfigSettingsUpdated_m2409101234_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t269755560 * V_0 = NULL;
	{
		RemoteConfigSettings_t1247263429 * L_0 = ___rcs0;
		NullCheck(L_0);
		Action_1_t269755560 * L_1 = L_0->get_Updated_1();
		V_0 = L_1;
		Action_1_t269755560 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Action_1_t269755560 * L_3 = V_0;
		bool L_4 = ___wasLastUpdatedFromServer1;
		NullCheck(L_3);
		Action_1_Invoke_m1933767679(L_3, L_4, /*hidden argument*/Action_1_Invoke_m1933767679_RuntimeMethod_var);
	}

IL_0015:
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
// System.Void UnityEngine.RemoteSettings::RemoteSettingsUpdated(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void RemoteSettings_RemoteSettingsUpdated_m1182006011 (RuntimeObject * __this /* static, unused */, bool ___wasLastUpdatedFromServer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteSettings_RemoteSettingsUpdated_m1182006011_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UpdatedEventHandler_t1027848393 * V_0 = NULL;
	{
		UpdatedEventHandler_t1027848393 * L_0 = ((RemoteSettings_t1718627291_StaticFields*)il2cpp_codegen_static_fields_for(RemoteSettings_t1718627291_il2cpp_TypeInfo_var))->get_Updated_0();
		V_0 = L_0;
		UpdatedEventHandler_t1027848393 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		UpdatedEventHandler_t1027848393 * L_2 = V_0;
		NullCheck(L_2);
		UpdatedEventHandler_Invoke_m3026613363(L_2, /*hidden argument*/NULL);
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.RemoteSettings::RemoteSettingsBeforeFetchFromServer()
extern "C" IL2CPP_METHOD_ATTR void RemoteSettings_RemoteSettingsBeforeFetchFromServer_m4228537265 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteSettings_RemoteSettingsBeforeFetchFromServer_m4228537265_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_t1264377477 * V_0 = NULL;
	{
		Action_t1264377477 * L_0 = ((RemoteSettings_t1718627291_StaticFields*)il2cpp_codegen_static_fields_for(RemoteSettings_t1718627291_il2cpp_TypeInfo_var))->get_BeforeFetchFromServer_1();
		V_0 = L_0;
		Action_t1264377477 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Action_t1264377477 * L_2 = V_0;
		NullCheck(L_2);
		Action_Invoke_m937035532(L_2, /*hidden argument*/NULL);
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.RemoteSettings::RemoteSettingsUpdateCompleted(System.Boolean,System.Boolean,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void RemoteSettings_RemoteSettingsUpdateCompleted_m2956290507 (RuntimeObject * __this /* static, unused */, bool ___wasLastUpdatedFromServer0, bool ___settingsChanged1, int32_t ___response2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteSettings_RemoteSettingsUpdateCompleted_m2956290507_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_3_t3050575418 * V_0 = NULL;
	{
		Action_3_t3050575418 * L_0 = ((RemoteSettings_t1718627291_StaticFields*)il2cpp_codegen_static_fields_for(RemoteSettings_t1718627291_il2cpp_TypeInfo_var))->get_Completed_2();
		V_0 = L_0;
		Action_3_t3050575418 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Action_3_t3050575418 * L_2 = V_0;
		bool L_3 = ___wasLastUpdatedFromServer0;
		bool L_4 = ___settingsChanged1;
		int32_t L_5 = ___response2;
		NullCheck(L_2);
		Action_3_Invoke_m1011371804(L_2, L_3, L_4, L_5, /*hidden argument*/Action_3_Invoke_m1011371804_RuntimeMethod_var);
	}

IL_0016:
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
extern "C"  void DelegatePInvokeWrapper_UpdatedEventHandler_t1027848393 (UpdatedEventHandler_t1027848393 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.RemoteSettings/UpdatedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UpdatedEventHandler__ctor_m3406570235 (UpdatedEventHandler_t1027848393 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.RemoteSettings/UpdatedEventHandler::Invoke()
extern "C" IL2CPP_METHOD_ATTR void UpdatedEventHandler_Invoke_m3026613363 (UpdatedEventHandler_t1027848393 * __this, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		UpdatedEventHandler_Invoke_m3026613363((UpdatedEventHandler_t1027848393 *)__this->get_prev_9(), method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 0)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.RemoteSettings/UpdatedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UpdatedEventHandler_BeginInvoke_m424999959 (UpdatedEventHandler_t1027848393 * __this, AsyncCallback_t3962456242 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void UnityEngine.RemoteSettings/UpdatedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UpdatedEventHandler_EndInvoke_m3714202114 (UpdatedEventHandler_t1027848393 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
