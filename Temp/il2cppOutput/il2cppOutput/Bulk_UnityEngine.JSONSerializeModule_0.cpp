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

// System.ArgumentException
struct ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60;
// System.ArgumentNullException
struct ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4;
// System.Char[]
struct CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744;
// System.Collections.IDictionary
struct IDictionary_tD35B9437F08BE98D1E0B295CC73C48E168CAB316;
// System.IntPtr[]
struct IntPtrU5BU5D_tB866BA24C91559CF299618E230043451CC7CF659;
// System.Reflection.MemberFilter
struct MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_tEF927658123F6CD4274B971442504A42AB6DE532;
// System.Void
struct Void_tDB81A15FA2AB53E2401A76B745D215397B29F783;

extern RuntimeClass* ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral24792AA3923C4CD185519D3D445ECFD0801DB1C1;
extern String_t* _stringLiteral66E179247F6AC3640942FBCA80B92DD2614F4C3D;
extern String_t* _stringLiteralD0A3E7F81A9885E99049D1CAE0336D269D5E47A9;
extern const RuntimeMethod* JsonUtility_FromJson_mD891C9EDB2D0B95536CD2A3F2BEFF3DCFEE30A45_RuntimeMethod_var;
extern const RuntimeType* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_0_0_0_var;
extern const uint32_t JsonUtility_FromJson_mD891C9EDB2D0B95536CD2A3F2BEFF3DCFEE30A45_MetadataUsageId;



#ifndef U3CMODULEU3E_T4F0A0E4F117BEB98FD7E89F0DE774BD5A1E6DBAC_H
#define U3CMODULEU3E_T4F0A0E4F117BEB98FD7E89F0DE774BD5A1E6DBAC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t4F0A0E4F117BEB98FD7E89F0DE774BD5A1E6DBAC 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T4F0A0E4F117BEB98FD7E89F0DE774BD5A1E6DBAC_H
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
#ifndef JSONUTILITY_T91C9687A587DA7DCF335BCBCA8E3BEA2C716DC7F_H
#define JSONUTILITY_T91C9687A587DA7DCF335BCBCA8E3BEA2C716DC7F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.JsonUtility
struct  JsonUtility_t91C9687A587DA7DCF335BCBCA8E3BEA2C716DC7F  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONUTILITY_T91C9687A587DA7DCF335BCBCA8E3BEA2C716DC7F_H
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



// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mE11AFBE023524E785D23831B75C7BE0B74864C02 (String_t* p0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mBA1072348F0861F80512F3BB2BE685EDBB02F740 (ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsAbstract()
extern "C" IL2CPP_METHOD_ATTR bool Type_get_IsAbstract_m5AE2B5B2DF9BC27DC6EF46EEB4EB935798B3B599 (Type_t * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8326E3405B647C99882C2E411C459944B0598D73 (RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  p0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mDF3A55D4269A0D2D7969D90C6D38B472E24DD445 (String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8917650A5D8F2F36C6B623A720DF2D2A630D3533 (ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 * __this, String_t* p0, const RuntimeMethod* method);
// System.Object UnityEngine.JsonUtility::FromJsonInternal(System.String,System.Object,System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * JsonUtility_FromJsonInternal_mE4EF48FC77B4B25155BB039E477D4181E9E55E69 (String_t* ___json0, RuntimeObject * ___objectToOverwrite1, Type_t * ___type2, const RuntimeMethod* method);
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
// System.Object UnityEngine.JsonUtility::FromJsonInternal(System.String,System.Object,System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * JsonUtility_FromJsonInternal_mE4EF48FC77B4B25155BB039E477D4181E9E55E69 (String_t* ___json0, RuntimeObject * ___objectToOverwrite1, Type_t * ___type2, const RuntimeMethod* method)
{
	typedef RuntimeObject * (*JsonUtility_FromJsonInternal_mE4EF48FC77B4B25155BB039E477D4181E9E55E69_ftn) (String_t*, RuntimeObject *, Type_t *);
	static JsonUtility_FromJsonInternal_mE4EF48FC77B4B25155BB039E477D4181E9E55E69_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (JsonUtility_FromJsonInternal_mE4EF48FC77B4B25155BB039E477D4181E9E55E69_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.JsonUtility::FromJsonInternal(System.String,System.Object,System.Type)");
	RuntimeObject * retVal = _il2cpp_icall_func(___json0, ___objectToOverwrite1, ___type2);
	return retVal;
}
// System.Object UnityEngine.JsonUtility::FromJson(System.String,System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * JsonUtility_FromJson_mD891C9EDB2D0B95536CD2A3F2BEFF3DCFEE30A45 (String_t* ___json0, Type_t * ___type1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonUtility_FromJson_mD891C9EDB2D0B95536CD2A3F2BEFF3DCFEE30A45_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		String_t* L_0 = ___json0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_mE11AFBE023524E785D23831B75C7BE0B74864C02(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		V_0 = NULL;
		goto IL_006d;
	}

IL_0013:
	{
		Type_t * L_2 = ___type1;
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 * L_3 = (ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 *)il2cpp_codegen_object_new(ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mBA1072348F0861F80512F3BB2BE685EDBB02F740(L_3, _stringLiteralD0A3E7F81A9885E99049D1CAE0336D269D5E47A9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, JsonUtility_FromJson_mD891C9EDB2D0B95536CD2A3F2BEFF3DCFEE30A45_RuntimeMethod_var);
	}

IL_0024:
	{
		Type_t * L_4 = ___type1;
		NullCheck(L_4);
		bool L_5 = Type_get_IsAbstract_m5AE2B5B2DF9BC27DC6EF46EEB4EB935798B3B599(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0044;
		}
	}
	{
		Type_t * L_6 = ___type1;
		RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  L_7 = { reinterpret_cast<intptr_t> (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m8326E3405B647C99882C2E411C459944B0598D73(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_9 = VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsSubclassOf(System.Type) */, L_6, L_8);
		if (!L_9)
		{
			goto IL_005f;
		}
	}

IL_0044:
	{
		Type_t * L_10 = ___type1;
		NullCheck(L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_mDF3A55D4269A0D2D7969D90C6D38B472E24DD445(_stringLiteral66E179247F6AC3640942FBCA80B92DD2614F4C3D, L_11, _stringLiteral24792AA3923C4CD185519D3D445ECFD0801DB1C1, /*hidden argument*/NULL);
		ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 * L_13 = (ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 *)il2cpp_codegen_object_new(ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m8917650A5D8F2F36C6B623A720DF2D2A630D3533(L_13, L_12, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, NULL, JsonUtility_FromJson_mD891C9EDB2D0B95536CD2A3F2BEFF3DCFEE30A45_RuntimeMethod_var);
	}

IL_005f:
	{
		String_t* L_14 = ___json0;
		Type_t * L_15 = ___type1;
		RuntimeObject * L_16 = JsonUtility_FromJsonInternal_mE4EF48FC77B4B25155BB039E477D4181E9E55E69(L_14, NULL, L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_006d;
	}

IL_006d:
	{
		RuntimeObject * L_17 = V_0;
		return L_17;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
