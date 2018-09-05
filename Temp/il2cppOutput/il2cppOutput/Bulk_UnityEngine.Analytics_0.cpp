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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Boolean[]
struct BooleanU5BU5D_t2897418192;
// System.Byte
struct Byte_t1134296376;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t322220623;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<System.Boolean>>
struct KeyCollection_t1544294477;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<System.Boolean>,System.Collections.DictionaryEntry>
struct Transform_1_t648446982;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t1694351041;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Boolean>>
struct Dictionary_2_t1354619006;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2865362463;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t1329213854;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.Collections.Generic.List`1<System.Boolean>
struct List_1_t1569362707;
// System.Collections.Generic.List`1<System.Boolean>[]
struct List_1U5BU5D_t1798035266;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<UnityEngine.Analytics.AnalyticsEventParam>
struct List_1_t3952196670;
// System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty/FieldWithTarget>
struct List_1_t235857739;
// System.Collections.Generic.List`1<UnityEngine.Analytics.TriggerRule>
struct List_1_t3418373063;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Double
struct Double_t594665363;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.UInt16
struct UInt16_t2177724958;
// System.Void
struct Void_t1185182177;
// UnityEngine.Analytics.AnalyticsEventParam
struct AnalyticsEventParam_t2480121928;
// UnityEngine.Analytics.AnalyticsEventParamListContainer
struct AnalyticsEventParamListContainer_t587083383;
// UnityEngine.Analytics.AnalyticsEventParam[]
struct AnalyticsEventParamU5BU5D_t2631828889;
// UnityEngine.Analytics.AnalyticsEventTracker
struct AnalyticsEventTracker_t2285229262;
// UnityEngine.Analytics.AnalyticsEventTracker/<TimedTrigger>c__Iterator0
struct U3CTimedTriggerU3Ec__Iterator0_t3813435494;
// UnityEngine.Analytics.AnalyticsTracker
struct AnalyticsTracker_t731021378;
// UnityEngine.Analytics.EventTrigger
struct EventTrigger_t2527451695;
// UnityEngine.Analytics.EventTrigger/OnTrigger
struct OnTrigger_t4184125570;
// UnityEngine.Analytics.StandardEventPayload
struct StandardEventPayload_t1629891255;
// UnityEngine.Analytics.TrackableField
struct TrackableField_t1772682203;
// UnityEngine.Analytics.TrackableProperty
struct TrackableProperty_t3943537984;
// UnityEngine.Analytics.TrackableProperty/FieldWithTarget
struct FieldWithTarget_t3058750293;
// UnityEngine.Analytics.TrackableProperty/FieldWithTarget[]
struct FieldWithTargetU5BU5D_t3387069368;
// UnityEngine.Analytics.TrackablePropertyBase
struct TrackablePropertyBase_t2121532948;
// UnityEngine.Analytics.TrackableTrigger
struct TrackableTrigger_t621205209;
// UnityEngine.Analytics.TriggerListContainer
struct TriggerListContainer_t2032715483;
// UnityEngine.Analytics.TriggerMethod
struct TriggerMethod_t582536534;
// UnityEngine.Analytics.TriggerRule
struct TriggerRule_t1946298321;
// UnityEngine.Analytics.TriggerRule[]
struct TriggerRuleU5BU5D_t1495552460;
// UnityEngine.Analytics.ValueProperty
struct ValueProperty_t1868393739;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251;

extern RuntimeClass* AnalyticsEventParamListContainer_t587083383_il2cpp_TypeInfo_var;
extern RuntimeClass* AnalyticsEventTrackerSettings_t480422680_il2cpp_TypeInfo_var;
extern RuntimeClass* AnalyticsEvent_t4058973021_il2cpp_TypeInfo_var;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* Decimal_t2948259380_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t1354619006_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t2865362463_il2cpp_TypeInfo_var;
extern RuntimeClass* Double_t594665363_il2cpp_TypeInfo_var;
extern RuntimeClass* Enum_t4135868527_il2cpp_TypeInfo_var;
extern RuntimeClass* EventTrigger_t2527451695_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Int16_t2552820387_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* Int64_t3736567304_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t1569362707_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3418373063_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3952196670_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* StandardEventPayload_t1629891255_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* TrackableProperty_t3943537984_il2cpp_TypeInfo_var;
extern RuntimeClass* TriggerListContainer_t2032715483_il2cpp_TypeInfo_var;
extern RuntimeClass* TriggerRule_t1946298321_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CTimedTriggerU3Ec__Iterator0_t3813435494_il2cpp_TypeInfo_var;
extern RuntimeClass* WaitForSeconds_t1699091251_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1045670989;
extern String_t* _stringLiteral1236039580;
extern String_t* _stringLiteral1762375535;
extern String_t* _stringLiteral1935206035;
extern String_t* _stringLiteral201922340;
extern String_t* _stringLiteral2791739670;
extern String_t* _stringLiteral3109170590;
extern String_t* _stringLiteral3578372784;
extern String_t* _stringLiteral4288880708;
extern String_t* _stringLiteral757602046;
extern String_t* _stringLiteral892740262;
extern const RuntimeMethod* Dictionary_2_Add_m2942821800_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m3693257978_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Clear_m3181358953_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m4064423371_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m1476497131_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2211705532_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m3214317455_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Keys_m1646650323_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m1535556385_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2918142462_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m3558290115_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m536244888_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m1993744362_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2277860433_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m528544069_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m3689659642_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m3766982068_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m3796810840_RuntimeMethod_var;
extern const RuntimeMethod* KeyCollection_GetEnumerator_m3646357383_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1433969578_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1771611534_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Contains_m2779132831_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m1143297947_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m466435735_RuntimeMethod_var;
extern const RuntimeMethod* List_1_RemoveAt_m2483907692_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m2118976410_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m2148725058_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3376109328_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3831796040_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3935023107_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m1027239081_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m2228004625_RuntimeMethod_var;
extern const RuntimeMethod* StandardEventPayload_Send_m3454575092_RuntimeMethod_var;
extern const RuntimeMethod* U3CTimedTriggerU3Ec__Iterator0_Reset_m1406161701_RuntimeMethod_var;
extern const RuntimeType* Boolean_t97287965_0_0_0_var;
extern const RuntimeType* Decimal_t2948259380_0_0_0_var;
extern const RuntimeType* Double_t594665363_0_0_0_var;
extern const RuntimeType* Int16_t2552820387_0_0_0_var;
extern const RuntimeType* Int32_t2950945753_0_0_0_var;
extern const RuntimeType* Int64_t3736567304_0_0_0_var;
extern const RuntimeType* Single_t1397266774_0_0_0_var;
extern const RuntimeType* String_t_0_0_0_var;
extern const uint32_t AnalyticsEventParamListContainer__ctor_m1995104893_MetadataUsageId;
extern const uint32_t AnalyticsEventParam__ctor_m1888826734_MetadataUsageId;
extern const uint32_t AnalyticsEventTrackerSettings__cctor_m99217142_MetadataUsageId;
extern const uint32_t AnalyticsEventTracker_TimedTrigger_m758162441_MetadataUsageId;
extern const uint32_t AnalyticsEventTracker__ctor_m3064238498_MetadataUsageId;
extern const uint32_t AnalyticsTracker_BuildParameters_m43920649_MetadataUsageId;
extern const uint32_t AnalyticsTracker__ctor_m3762295226_MetadataUsageId;
extern const uint32_t EventTrigger_AddRule_m2980113967_MetadataUsageId;
extern const uint32_t EventTrigger_RemoveRule_m1596811726_MetadataUsageId;
extern const uint32_t EventTrigger_Test_m2021527001_MetadataUsageId;
extern const uint32_t EventTrigger__ctor_m3931360164_MetadataUsageId;
extern const uint32_t FieldWithTarget_GetValue_m2315870500_MetadataUsageId;
extern const uint32_t StandardEventPayload_GetParameters_m2672427676_MetadataUsageId;
extern const uint32_t StandardEventPayload_IsCustomDataValid_m922891381_MetadataUsageId;
extern const uint32_t StandardEventPayload_IsRequiredDataValid_m361738930_MetadataUsageId;
extern const uint32_t StandardEventPayload_Send_m3454575092_MetadataUsageId;
extern const uint32_t StandardEventPayload__cctor_m3346303468_MetadataUsageId;
extern const uint32_t StandardEventPayload__ctor_m1676969451_MetadataUsageId;
extern const uint32_t TrackableField_GetValue_m4059393238_MetadataUsageId;
extern const uint32_t TrackableField__ctor_m3758796351_MetadataUsageId;
extern const uint32_t TrackableProperty_GetHashCode_m3407865350_MetadataUsageId;
extern const uint32_t TriggerListContainer__ctor_m1390596431_MetadataUsageId;
extern const uint32_t TriggerRule_TestByBool_m4144604729_MetadataUsageId;
extern const uint32_t TriggerRule_Test_m3134988565_MetadataUsageId;
extern const uint32_t U3CTimedTriggerU3Ec__Iterator0_MoveNext_m825792986_MetadataUsageId;
extern const uint32_t U3CTimedTriggerU3Ec__Iterator0_Reset_m1406161701_MetadataUsageId;
extern const uint32_t ValueProperty_IsValid_m3724034537_MetadataUsageId;
extern const uint32_t ValueProperty__ctor_m2723448180_MetadataUsageId;

struct CharU5BU5D_t3528271667;
struct ObjectU5BU5D_t2843939325;
struct StringU5BU5D_t1281789340;
struct TypeU5BU5D_t3940880105;


#ifndef U3CMODULEU3E_T692745547_H
#define U3CMODULEU3E_T692745547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745547 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745547_H
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
#ifndef KEYCOLLECTION_T1544294477_H
#define KEYCOLLECTION_T1544294477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<System.Boolean>>
struct  KeyCollection_t1544294477  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::dictionary
	Dictionary_2_t1354619006 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_t1544294477, ___dictionary_0)); }
	inline Dictionary_2_t1354619006 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t1354619006 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t1354619006 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCOLLECTION_T1544294477_H
#ifndef DICTIONARY_2_T1354619006_H
#define DICTIONARY_2_T1354619006_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Boolean>>
struct  Dictionary_2_t1354619006  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	List_1U5BU5D_t1798035266* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1354619006, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1354619006, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1354619006, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1354619006, ___valueSlots_7)); }
	inline List_1U5BU5D_t1798035266* get_valueSlots_7() const { return ___valueSlots_7; }
	inline List_1U5BU5D_t1798035266** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(List_1U5BU5D_t1798035266* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1354619006, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1354619006, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t1354619006, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t1354619006, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t1354619006, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t1354619006, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t1354619006, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t1354619006_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t648446982 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t1354619006_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t648446982 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t648446982 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t648446982 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T1354619006_H
#ifndef DICTIONARY_2_T2865362463_H
#define DICTIONARY_2_T2865362463_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct  Dictionary_2_t2865362463  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	ObjectU5BU5D_t2843939325* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___valueSlots_7)); }
	inline ObjectU5BU5D_t2843939325* get_valueSlots_7() const { return ___valueSlots_7; }
	inline ObjectU5BU5D_t2843939325** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(ObjectU5BU5D_t2843939325* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2865362463_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t1694351041 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t1694351041 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t1694351041 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t1694351041 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2865362463_H
#ifndef LIST_1_T1569362707_H
#define LIST_1_T1569362707_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Boolean>
struct  List_1_t1569362707  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BooleanU5BU5D_t2897418192* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1569362707, ____items_1)); }
	inline BooleanU5BU5D_t2897418192* get__items_1() const { return ____items_1; }
	inline BooleanU5BU5D_t2897418192** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BooleanU5BU5D_t2897418192* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1569362707, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1569362707, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1569362707_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	BooleanU5BU5D_t2897418192* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1569362707_StaticFields, ___EmptyArray_4)); }
	inline BooleanU5BU5D_t2897418192* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline BooleanU5BU5D_t2897418192** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(BooleanU5BU5D_t2897418192* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1569362707_H
#ifndef LIST_1_T3952196670_H
#define LIST_1_T3952196670_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Analytics.AnalyticsEventParam>
struct  List_1_t3952196670  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AnalyticsEventParamU5BU5D_t2631828889* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3952196670, ____items_1)); }
	inline AnalyticsEventParamU5BU5D_t2631828889* get__items_1() const { return ____items_1; }
	inline AnalyticsEventParamU5BU5D_t2631828889** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AnalyticsEventParamU5BU5D_t2631828889* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3952196670, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3952196670, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3952196670_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	AnalyticsEventParamU5BU5D_t2631828889* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3952196670_StaticFields, ___EmptyArray_4)); }
	inline AnalyticsEventParamU5BU5D_t2631828889* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline AnalyticsEventParamU5BU5D_t2631828889** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(AnalyticsEventParamU5BU5D_t2631828889* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3952196670_H
#ifndef LIST_1_T235857739_H
#define LIST_1_T235857739_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty/FieldWithTarget>
struct  List_1_t235857739  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	FieldWithTargetU5BU5D_t3387069368* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t235857739, ____items_1)); }
	inline FieldWithTargetU5BU5D_t3387069368* get__items_1() const { return ____items_1; }
	inline FieldWithTargetU5BU5D_t3387069368** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(FieldWithTargetU5BU5D_t3387069368* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t235857739, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t235857739, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t235857739_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	FieldWithTargetU5BU5D_t3387069368* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t235857739_StaticFields, ___EmptyArray_4)); }
	inline FieldWithTargetU5BU5D_t3387069368* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline FieldWithTargetU5BU5D_t3387069368** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(FieldWithTargetU5BU5D_t3387069368* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T235857739_H
#ifndef LIST_1_T3418373063_H
#define LIST_1_T3418373063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Analytics.TriggerRule>
struct  List_1_t3418373063  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TriggerRuleU5BU5D_t1495552460* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3418373063, ____items_1)); }
	inline TriggerRuleU5BU5D_t1495552460* get__items_1() const { return ____items_1; }
	inline TriggerRuleU5BU5D_t1495552460** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TriggerRuleU5BU5D_t1495552460* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3418373063, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3418373063, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3418373063_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	TriggerRuleU5BU5D_t1495552460* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3418373063_StaticFields, ___EmptyArray_4)); }
	inline TriggerRuleU5BU5D_t1495552460* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline TriggerRuleU5BU5D_t1495552460** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(TriggerRuleU5BU5D_t1495552460* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3418373063_H
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
#ifndef ANALYTICSEVENTPARAMLISTCONTAINER_T587083383_H
#define ANALYTICSEVENTPARAMLISTCONTAINER_T587083383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.AnalyticsEventParamListContainer
struct  AnalyticsEventParamListContainer_t587083383  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Analytics.AnalyticsEventParam> UnityEngine.Analytics.AnalyticsEventParamListContainer::m_Parameters
	List_1_t3952196670 * ___m_Parameters_0;

public:
	inline static int32_t get_offset_of_m_Parameters_0() { return static_cast<int32_t>(offsetof(AnalyticsEventParamListContainer_t587083383, ___m_Parameters_0)); }
	inline List_1_t3952196670 * get_m_Parameters_0() const { return ___m_Parameters_0; }
	inline List_1_t3952196670 ** get_address_of_m_Parameters_0() { return &___m_Parameters_0; }
	inline void set_m_Parameters_0(List_1_t3952196670 * value)
	{
		___m_Parameters_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Parameters_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANALYTICSEVENTPARAMLISTCONTAINER_T587083383_H
#ifndef U3CTIMEDTRIGGERU3EC__ITERATOR0_T3813435494_H
#define U3CTIMEDTRIGGERU3EC__ITERATOR0_T3813435494_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.AnalyticsEventTracker/<TimedTrigger>c__Iterator0
struct  U3CTimedTriggerU3Ec__Iterator0_t3813435494  : public RuntimeObject
{
public:
	// UnityEngine.Analytics.AnalyticsEventTracker UnityEngine.Analytics.AnalyticsEventTracker/<TimedTrigger>c__Iterator0::$this
	AnalyticsEventTracker_t2285229262 * ___U24this_0;
	// System.Object UnityEngine.Analytics.AnalyticsEventTracker/<TimedTrigger>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean UnityEngine.Analytics.AnalyticsEventTracker/<TimedTrigger>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 UnityEngine.Analytics.AnalyticsEventTracker/<TimedTrigger>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CTimedTriggerU3Ec__Iterator0_t3813435494, ___U24this_0)); }
	inline AnalyticsEventTracker_t2285229262 * get_U24this_0() const { return ___U24this_0; }
	inline AnalyticsEventTracker_t2285229262 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(AnalyticsEventTracker_t2285229262 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CTimedTriggerU3Ec__Iterator0_t3813435494, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CTimedTriggerU3Ec__Iterator0_t3813435494, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CTimedTriggerU3Ec__Iterator0_t3813435494, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CTIMEDTRIGGERU3EC__ITERATOR0_T3813435494_H
#ifndef ANALYTICSEVENTTRACKERSETTINGS_T480422680_H
#define ANALYTICSEVENTTRACKERSETTINGS_T480422680_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.AnalyticsEventTrackerSettings
struct  AnalyticsEventTrackerSettings_t480422680  : public RuntimeObject
{
public:

public:
};

struct AnalyticsEventTrackerSettings_t480422680_StaticFields
{
public:
	// System.Int32 UnityEngine.Analytics.AnalyticsEventTrackerSettings::paramCountMax
	int32_t ___paramCountMax_0;
	// System.Int32 UnityEngine.Analytics.AnalyticsEventTrackerSettings::triggerRuleCountMax
	int32_t ___triggerRuleCountMax_1;

public:
	inline static int32_t get_offset_of_paramCountMax_0() { return static_cast<int32_t>(offsetof(AnalyticsEventTrackerSettings_t480422680_StaticFields, ___paramCountMax_0)); }
	inline int32_t get_paramCountMax_0() const { return ___paramCountMax_0; }
	inline int32_t* get_address_of_paramCountMax_0() { return &___paramCountMax_0; }
	inline void set_paramCountMax_0(int32_t value)
	{
		___paramCountMax_0 = value;
	}

	inline static int32_t get_offset_of_triggerRuleCountMax_1() { return static_cast<int32_t>(offsetof(AnalyticsEventTrackerSettings_t480422680_StaticFields, ___triggerRuleCountMax_1)); }
	inline int32_t get_triggerRuleCountMax_1() const { return ___triggerRuleCountMax_1; }
	inline int32_t* get_address_of_triggerRuleCountMax_1() { return &___triggerRuleCountMax_1; }
	inline void set_triggerRuleCountMax_1(int32_t value)
	{
		___triggerRuleCountMax_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANALYTICSEVENTTRACKERSETTINGS_T480422680_H
#ifndef STANDARDEVENTPAYLOAD_T1629891255_H
#define STANDARDEVENTPAYLOAD_T1629891255_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.StandardEventPayload
struct  StandardEventPayload_t1629891255  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Analytics.StandardEventPayload::m_IsEventExpanded
	bool ___m_IsEventExpanded_0;
	// System.String UnityEngine.Analytics.StandardEventPayload::m_StandardEventType
	String_t* ___m_StandardEventType_1;
	// System.Type UnityEngine.Analytics.StandardEventPayload::standardEventType
	Type_t * ___standardEventType_2;
	// UnityEngine.Analytics.AnalyticsEventParamListContainer UnityEngine.Analytics.StandardEventPayload::m_Parameters
	AnalyticsEventParamListContainer_t587083383 * ___m_Parameters_3;
	// System.String UnityEngine.Analytics.StandardEventPayload::m_Name
	String_t* ___m_Name_5;

public:
	inline static int32_t get_offset_of_m_IsEventExpanded_0() { return static_cast<int32_t>(offsetof(StandardEventPayload_t1629891255, ___m_IsEventExpanded_0)); }
	inline bool get_m_IsEventExpanded_0() const { return ___m_IsEventExpanded_0; }
	inline bool* get_address_of_m_IsEventExpanded_0() { return &___m_IsEventExpanded_0; }
	inline void set_m_IsEventExpanded_0(bool value)
	{
		___m_IsEventExpanded_0 = value;
	}

	inline static int32_t get_offset_of_m_StandardEventType_1() { return static_cast<int32_t>(offsetof(StandardEventPayload_t1629891255, ___m_StandardEventType_1)); }
	inline String_t* get_m_StandardEventType_1() const { return ___m_StandardEventType_1; }
	inline String_t** get_address_of_m_StandardEventType_1() { return &___m_StandardEventType_1; }
	inline void set_m_StandardEventType_1(String_t* value)
	{
		___m_StandardEventType_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_StandardEventType_1), value);
	}

	inline static int32_t get_offset_of_standardEventType_2() { return static_cast<int32_t>(offsetof(StandardEventPayload_t1629891255, ___standardEventType_2)); }
	inline Type_t * get_standardEventType_2() const { return ___standardEventType_2; }
	inline Type_t ** get_address_of_standardEventType_2() { return &___standardEventType_2; }
	inline void set_standardEventType_2(Type_t * value)
	{
		___standardEventType_2 = value;
		Il2CppCodeGenWriteBarrier((&___standardEventType_2), value);
	}

	inline static int32_t get_offset_of_m_Parameters_3() { return static_cast<int32_t>(offsetof(StandardEventPayload_t1629891255, ___m_Parameters_3)); }
	inline AnalyticsEventParamListContainer_t587083383 * get_m_Parameters_3() const { return ___m_Parameters_3; }
	inline AnalyticsEventParamListContainer_t587083383 ** get_address_of_m_Parameters_3() { return &___m_Parameters_3; }
	inline void set_m_Parameters_3(AnalyticsEventParamListContainer_t587083383 * value)
	{
		___m_Parameters_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Parameters_3), value);
	}

	inline static int32_t get_offset_of_m_Name_5() { return static_cast<int32_t>(offsetof(StandardEventPayload_t1629891255, ___m_Name_5)); }
	inline String_t* get_m_Name_5() const { return ___m_Name_5; }
	inline String_t** get_address_of_m_Name_5() { return &___m_Name_5; }
	inline void set_m_Name_5(String_t* value)
	{
		___m_Name_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Name_5), value);
	}
};

struct StandardEventPayload_t1629891255_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Analytics.StandardEventPayload::m_EventData
	Dictionary_2_t2865362463 * ___m_EventData_4;

public:
	inline static int32_t get_offset_of_m_EventData_4() { return static_cast<int32_t>(offsetof(StandardEventPayload_t1629891255_StaticFields, ___m_EventData_4)); }
	inline Dictionary_2_t2865362463 * get_m_EventData_4() const { return ___m_EventData_4; }
	inline Dictionary_2_t2865362463 ** get_address_of_m_EventData_4() { return &___m_EventData_4; }
	inline void set_m_EventData_4(Dictionary_2_t2865362463 * value)
	{
		___m_EventData_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventData_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STANDARDEVENTPAYLOAD_T1629891255_H
#ifndef TRACKABLEPROPERTY_T3943537984_H
#define TRACKABLEPROPERTY_T3943537984_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TrackableProperty
struct  TrackableProperty_t3943537984  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty/FieldWithTarget> UnityEngine.Analytics.TrackableProperty::m_Fields
	List_1_t235857739 * ___m_Fields_1;

public:
	inline static int32_t get_offset_of_m_Fields_1() { return static_cast<int32_t>(offsetof(TrackableProperty_t3943537984, ___m_Fields_1)); }
	inline List_1_t235857739 * get_m_Fields_1() const { return ___m_Fields_1; }
	inline List_1_t235857739 ** get_address_of_m_Fields_1() { return &___m_Fields_1; }
	inline void set_m_Fields_1(List_1_t235857739 * value)
	{
		___m_Fields_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Fields_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEPROPERTY_T3943537984_H
#ifndef FIELDWITHTARGET_T3058750293_H
#define FIELDWITHTARGET_T3058750293_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TrackableProperty/FieldWithTarget
struct  FieldWithTarget_t3058750293  : public RuntimeObject
{
public:
	// System.String UnityEngine.Analytics.TrackableProperty/FieldWithTarget::m_ParamName
	String_t* ___m_ParamName_0;
	// UnityEngine.Object UnityEngine.Analytics.TrackableProperty/FieldWithTarget::m_Target
	Object_t631007953 * ___m_Target_1;
	// System.String UnityEngine.Analytics.TrackableProperty/FieldWithTarget::m_FieldPath
	String_t* ___m_FieldPath_2;
	// System.String UnityEngine.Analytics.TrackableProperty/FieldWithTarget::m_TypeString
	String_t* ___m_TypeString_3;
	// System.Boolean UnityEngine.Analytics.TrackableProperty/FieldWithTarget::m_DoStatic
	bool ___m_DoStatic_4;
	// System.String UnityEngine.Analytics.TrackableProperty/FieldWithTarget::m_StaticString
	String_t* ___m_StaticString_5;

public:
	inline static int32_t get_offset_of_m_ParamName_0() { return static_cast<int32_t>(offsetof(FieldWithTarget_t3058750293, ___m_ParamName_0)); }
	inline String_t* get_m_ParamName_0() const { return ___m_ParamName_0; }
	inline String_t** get_address_of_m_ParamName_0() { return &___m_ParamName_0; }
	inline void set_m_ParamName_0(String_t* value)
	{
		___m_ParamName_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParamName_0), value);
	}

	inline static int32_t get_offset_of_m_Target_1() { return static_cast<int32_t>(offsetof(FieldWithTarget_t3058750293, ___m_Target_1)); }
	inline Object_t631007953 * get_m_Target_1() const { return ___m_Target_1; }
	inline Object_t631007953 ** get_address_of_m_Target_1() { return &___m_Target_1; }
	inline void set_m_Target_1(Object_t631007953 * value)
	{
		___m_Target_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_1), value);
	}

	inline static int32_t get_offset_of_m_FieldPath_2() { return static_cast<int32_t>(offsetof(FieldWithTarget_t3058750293, ___m_FieldPath_2)); }
	inline String_t* get_m_FieldPath_2() const { return ___m_FieldPath_2; }
	inline String_t** get_address_of_m_FieldPath_2() { return &___m_FieldPath_2; }
	inline void set_m_FieldPath_2(String_t* value)
	{
		___m_FieldPath_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_FieldPath_2), value);
	}

	inline static int32_t get_offset_of_m_TypeString_3() { return static_cast<int32_t>(offsetof(FieldWithTarget_t3058750293, ___m_TypeString_3)); }
	inline String_t* get_m_TypeString_3() const { return ___m_TypeString_3; }
	inline String_t** get_address_of_m_TypeString_3() { return &___m_TypeString_3; }
	inline void set_m_TypeString_3(String_t* value)
	{
		___m_TypeString_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeString_3), value);
	}

	inline static int32_t get_offset_of_m_DoStatic_4() { return static_cast<int32_t>(offsetof(FieldWithTarget_t3058750293, ___m_DoStatic_4)); }
	inline bool get_m_DoStatic_4() const { return ___m_DoStatic_4; }
	inline bool* get_address_of_m_DoStatic_4() { return &___m_DoStatic_4; }
	inline void set_m_DoStatic_4(bool value)
	{
		___m_DoStatic_4 = value;
	}

	inline static int32_t get_offset_of_m_StaticString_5() { return static_cast<int32_t>(offsetof(FieldWithTarget_t3058750293, ___m_StaticString_5)); }
	inline String_t* get_m_StaticString_5() const { return ___m_StaticString_5; }
	inline String_t** get_address_of_m_StaticString_5() { return &___m_StaticString_5; }
	inline void set_m_StaticString_5(String_t* value)
	{
		___m_StaticString_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_StaticString_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDWITHTARGET_T3058750293_H
#ifndef TRACKABLEPROPERTYBASE_T2121532948_H
#define TRACKABLEPROPERTYBASE_T2121532948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TrackablePropertyBase
struct  TrackablePropertyBase_t2121532948  : public RuntimeObject
{
public:
	// UnityEngine.Object UnityEngine.Analytics.TrackablePropertyBase::m_Target
	Object_t631007953 * ___m_Target_0;
	// System.String UnityEngine.Analytics.TrackablePropertyBase::m_Path
	String_t* ___m_Path_1;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(TrackablePropertyBase_t2121532948, ___m_Target_0)); }
	inline Object_t631007953 * get_m_Target_0() const { return ___m_Target_0; }
	inline Object_t631007953 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(Object_t631007953 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_0), value);
	}

	inline static int32_t get_offset_of_m_Path_1() { return static_cast<int32_t>(offsetof(TrackablePropertyBase_t2121532948, ___m_Path_1)); }
	inline String_t* get_m_Path_1() const { return ___m_Path_1; }
	inline String_t** get_address_of_m_Path_1() { return &___m_Path_1; }
	inline void set_m_Path_1(String_t* value)
	{
		___m_Path_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Path_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEPROPERTYBASE_T2121532948_H
#ifndef TRACKABLETRIGGER_T621205209_H
#define TRACKABLETRIGGER_T621205209_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TrackableTrigger
struct  TrackableTrigger_t621205209  : public RuntimeObject
{
public:
	// UnityEngine.GameObject UnityEngine.Analytics.TrackableTrigger::m_Target
	GameObject_t1113636619 * ___m_Target_0;
	// System.String UnityEngine.Analytics.TrackableTrigger::m_MethodPath
	String_t* ___m_MethodPath_1;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(TrackableTrigger_t621205209, ___m_Target_0)); }
	inline GameObject_t1113636619 * get_m_Target_0() const { return ___m_Target_0; }
	inline GameObject_t1113636619 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(GameObject_t1113636619 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_0), value);
	}

	inline static int32_t get_offset_of_m_MethodPath_1() { return static_cast<int32_t>(offsetof(TrackableTrigger_t621205209, ___m_MethodPath_1)); }
	inline String_t* get_m_MethodPath_1() const { return ___m_MethodPath_1; }
	inline String_t** get_address_of_m_MethodPath_1() { return &___m_MethodPath_1; }
	inline void set_m_MethodPath_1(String_t* value)
	{
		___m_MethodPath_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_MethodPath_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLETRIGGER_T621205209_H
#ifndef TRIGGERLISTCONTAINER_T2032715483_H
#define TRIGGERLISTCONTAINER_T2032715483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerListContainer
struct  TriggerListContainer_t2032715483  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Analytics.TriggerRule> UnityEngine.Analytics.TriggerListContainer::m_Rules
	List_1_t3418373063 * ___m_Rules_0;

public:
	inline static int32_t get_offset_of_m_Rules_0() { return static_cast<int32_t>(offsetof(TriggerListContainer_t2032715483, ___m_Rules_0)); }
	inline List_1_t3418373063 * get_m_Rules_0() const { return ___m_Rules_0; }
	inline List_1_t3418373063 ** get_address_of_m_Rules_0() { return &___m_Rules_0; }
	inline void set_m_Rules_0(List_1_t3418373063 * value)
	{
		___m_Rules_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rules_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGERLISTCONTAINER_T2032715483_H
#ifndef TRIGGERMETHOD_T582536534_H
#define TRIGGERMETHOD_T582536534_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerMethod
struct  TriggerMethod_t582536534  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGERMETHOD_T582536534_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
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
#ifndef KEYVALUEPAIR_2_T3752291173_H
#define KEYVALUEPAIR_2_T3752291173_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Boolean>>
struct  KeyValuePair_2_t3752291173 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	List_1_t1569362707 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3752291173, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3752291173, ___value_1)); }
	inline List_1_t1569362707 * get_value_1() const { return ___value_1; }
	inline List_1_t1569362707 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(List_1_t1569362707 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3752291173_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef ENUMERATOR_T2125101616_H
#define ENUMERATOR_T2125101616_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Analytics.TrackableProperty/FieldWithTarget>
struct  Enumerator_t2125101616 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t235857739 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	FieldWithTarget_t3058750293 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2125101616, ___l_0)); }
	inline List_1_t235857739 * get_l_0() const { return ___l_0; }
	inline List_1_t235857739 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t235857739 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2125101616, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2125101616, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2125101616, ___current_3)); }
	inline FieldWithTarget_t3058750293 * get_current_3() const { return ___current_3; }
	inline FieldWithTarget_t3058750293 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(FieldWithTarget_t3058750293 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2125101616_H
#ifndef ENUMERATOR_T1012649644_H
#define ENUMERATOR_T1012649644_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Analytics.TriggerRule>
struct  Enumerator_t1012649644 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t3418373063 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	TriggerRule_t1946298321 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t1012649644, ___l_0)); }
	inline List_1_t3418373063 * get_l_0() const { return ___l_0; }
	inline List_1_t3418373063 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t3418373063 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t1012649644, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t1012649644, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1012649644, ___current_3)); }
	inline TriggerRule_t1946298321 * get_current_3() const { return ___current_3; }
	inline TriggerRule_t1946298321 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(TriggerRule_t1946298321 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1012649644_H
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
#ifndef FIELDINFO_T_H
#define FIELDINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDINFO_T_H
#ifndef PROPERTYINFO_T_H
#define PROPERTYINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PropertyInfo
struct  PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYINFO_T_H
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
#ifndef TRACKABLEFIELD_T1772682203_H
#define TRACKABLEFIELD_T1772682203_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TrackableField
struct  TrackableField_t1772682203  : public TrackablePropertyBase_t2121532948
{
public:
	// System.String[] UnityEngine.Analytics.TrackableField::m_ValidTypeNames
	StringU5BU5D_t1281789340* ___m_ValidTypeNames_2;
	// System.String UnityEngine.Analytics.TrackableField::m_Type
	String_t* ___m_Type_3;
	// System.String UnityEngine.Analytics.TrackableField::m_EnumType
	String_t* ___m_EnumType_4;

public:
	inline static int32_t get_offset_of_m_ValidTypeNames_2() { return static_cast<int32_t>(offsetof(TrackableField_t1772682203, ___m_ValidTypeNames_2)); }
	inline StringU5BU5D_t1281789340* get_m_ValidTypeNames_2() const { return ___m_ValidTypeNames_2; }
	inline StringU5BU5D_t1281789340** get_address_of_m_ValidTypeNames_2() { return &___m_ValidTypeNames_2; }
	inline void set_m_ValidTypeNames_2(StringU5BU5D_t1281789340* value)
	{
		___m_ValidTypeNames_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ValidTypeNames_2), value);
	}

	inline static int32_t get_offset_of_m_Type_3() { return static_cast<int32_t>(offsetof(TrackableField_t1772682203, ___m_Type_3)); }
	inline String_t* get_m_Type_3() const { return ___m_Type_3; }
	inline String_t** get_address_of_m_Type_3() { return &___m_Type_3; }
	inline void set_m_Type_3(String_t* value)
	{
		___m_Type_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type_3), value);
	}

	inline static int32_t get_offset_of_m_EnumType_4() { return static_cast<int32_t>(offsetof(TrackableField_t1772682203, ___m_EnumType_4)); }
	inline String_t* get_m_EnumType_4() const { return ___m_EnumType_4; }
	inline String_t** get_address_of_m_EnumType_4() { return &___m_EnumType_4; }
	inline void set_m_EnumType_4(String_t* value)
	{
		___m_EnumType_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_EnumType_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEFIELD_T1772682203_H
#ifndef WAITFORSECONDS_T1699091251_H
#define WAITFORSECONDS_T1699091251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t1699091251  : public YieldInstruction_t403091072
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t1699091251, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T1699091251_H
#ifndef ENUMERATOR_T2086727927_H
#define ENUMERATOR_T2086727927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct  Enumerator_t2086727927 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t132545152 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t2530217319  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___dictionary_0)); }
	inline Dictionary_2_t132545152 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t132545152 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t132545152 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___current_3)); }
	inline KeyValuePair_2_t2530217319  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t2530217319 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t2530217319  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2086727927_H
#ifndef ENUMERATOR_T3308801781_H
#define ENUMERATOR_T3308801781_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<System.Boolean>>
struct  Enumerator_t3308801781 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t1354619006 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t3752291173  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t3308801781, ___dictionary_0)); }
	inline Dictionary_2_t1354619006 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t1354619006 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t1354619006 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t3308801781, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t3308801781, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3308801781, ___current_3)); }
	inline KeyValuePair_2_t3752291173  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t3752291173 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t3752291173  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3308801781_H
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
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
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
#ifndef REQUIREMENTTYPE_T3584265503_H
#define REQUIREMENTTYPE_T3584265503_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.AnalyticsEventParam/RequirementType
struct  RequirementType_t3584265503 
{
public:
	// System.Int32 UnityEngine.Analytics.AnalyticsEventParam/RequirementType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RequirementType_t3584265503, ___value___1)); }
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
#endif // REQUIREMENTTYPE_T3584265503_H
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
#ifndef TRIGGER_T4199345191_H
#define TRIGGER_T4199345191_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.AnalyticsTracker/Trigger
struct  Trigger_t4199345191 
{
public:
	// System.Int32 UnityEngine.Analytics.AnalyticsTracker/Trigger::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Trigger_t4199345191, ___value___1)); }
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
#endif // TRIGGER_T4199345191_H
#ifndef TRIGGERBOOL_T501031542_H
#define TRIGGERBOOL_T501031542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerBool
struct  TriggerBool_t501031542 
{
public:
	// System.Int32 UnityEngine.Analytics.TriggerBool::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TriggerBool_t501031542, ___value___1)); }
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
#endif // TRIGGERBOOL_T501031542_H
#ifndef TRIGGERLIFECYCLEEVENT_T3193146760_H
#define TRIGGERLIFECYCLEEVENT_T3193146760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerLifecycleEvent
struct  TriggerLifecycleEvent_t3193146760 
{
public:
	// System.Int32 UnityEngine.Analytics.TriggerLifecycleEvent::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TriggerLifecycleEvent_t3193146760, ___value___1)); }
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
#endif // TRIGGERLIFECYCLEEVENT_T3193146760_H
#ifndef TRIGGEROPERATOR_T3611898925_H
#define TRIGGEROPERATOR_T3611898925_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerOperator
struct  TriggerOperator_t3611898925 
{
public:
	// System.Int32 UnityEngine.Analytics.TriggerOperator::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TriggerOperator_t3611898925, ___value___1)); }
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
#endif // TRIGGEROPERATOR_T3611898925_H
#ifndef TRIGGERTYPE_T105272677_H
#define TRIGGERTYPE_T105272677_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerType
struct  TriggerType_t105272677 
{
public:
	// System.Int32 UnityEngine.Analytics.TriggerType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TriggerType_t105272677, ___value___1)); }
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
#endif // TRIGGERTYPE_T105272677_H
#ifndef PROPERTYTYPE_T4040930247_H
#define PROPERTYTYPE_T4040930247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.ValueProperty/PropertyType
struct  PropertyType_t4040930247 
{
public:
	// System.Int32 UnityEngine.Analytics.ValueProperty/PropertyType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PropertyType_t4040930247, ___value___1)); }
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
#endif // PROPERTYTYPE_T4040930247_H
#ifndef COROUTINE_T3829159415_H
#define COROUTINE_T3829159415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t3829159415  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t3829159415, ___m_Ptr_0)); }
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
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T3829159415_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef ENUMERATOR_T314722136_H
#define ENUMERATOR_T314722136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>
struct  Enumerator_t314722136 
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::host_enumerator
	Enumerator_t2086727927  ___host_enumerator_0;

public:
	inline static int32_t get_offset_of_host_enumerator_0() { return static_cast<int32_t>(offsetof(Enumerator_t314722136, ___host_enumerator_0)); }
	inline Enumerator_t2086727927  get_host_enumerator_0() const { return ___host_enumerator_0; }
	inline Enumerator_t2086727927 * get_address_of_host_enumerator_0() { return &___host_enumerator_0; }
	inline void set_host_enumerator_0(Enumerator_t2086727927  value)
	{
		___host_enumerator_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T314722136_H
#ifndef ENUMERATOR_T1536795990_H
#define ENUMERATOR_T1536795990_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Collections.Generic.List`1<System.Boolean>>
struct  Enumerator_t1536795990 
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::host_enumerator
	Enumerator_t3308801781  ___host_enumerator_0;

public:
	inline static int32_t get_offset_of_host_enumerator_0() { return static_cast<int32_t>(offsetof(Enumerator_t1536795990, ___host_enumerator_0)); }
	inline Enumerator_t3308801781  get_host_enumerator_0() const { return ___host_enumerator_0; }
	inline Enumerator_t3308801781 * get_address_of_host_enumerator_0() { return &___host_enumerator_0; }
	inline void set_host_enumerator_0(Enumerator_t3308801781  value)
	{
		___host_enumerator_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1536795990_H
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
#ifndef ANALYTICSEVENTPARAM_T2480121928_H
#define ANALYTICSEVENTPARAM_T2480121928_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.AnalyticsEventParam
struct  AnalyticsEventParam_t2480121928  : public RuntimeObject
{
public:
	// UnityEngine.Analytics.AnalyticsEventParam/RequirementType UnityEngine.Analytics.AnalyticsEventParam::m_RequirementType
	int32_t ___m_RequirementType_0;
	// System.String UnityEngine.Analytics.AnalyticsEventParam::m_GroupID
	String_t* ___m_GroupID_1;
	// System.String UnityEngine.Analytics.AnalyticsEventParam::m_Tooltip
	String_t* ___m_Tooltip_2;
	// System.String UnityEngine.Analytics.AnalyticsEventParam::m_Name
	String_t* ___m_Name_3;
	// UnityEngine.Analytics.ValueProperty UnityEngine.Analytics.AnalyticsEventParam::m_Value
	ValueProperty_t1868393739 * ___m_Value_4;

public:
	inline static int32_t get_offset_of_m_RequirementType_0() { return static_cast<int32_t>(offsetof(AnalyticsEventParam_t2480121928, ___m_RequirementType_0)); }
	inline int32_t get_m_RequirementType_0() const { return ___m_RequirementType_0; }
	inline int32_t* get_address_of_m_RequirementType_0() { return &___m_RequirementType_0; }
	inline void set_m_RequirementType_0(int32_t value)
	{
		___m_RequirementType_0 = value;
	}

	inline static int32_t get_offset_of_m_GroupID_1() { return static_cast<int32_t>(offsetof(AnalyticsEventParam_t2480121928, ___m_GroupID_1)); }
	inline String_t* get_m_GroupID_1() const { return ___m_GroupID_1; }
	inline String_t** get_address_of_m_GroupID_1() { return &___m_GroupID_1; }
	inline void set_m_GroupID_1(String_t* value)
	{
		___m_GroupID_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_GroupID_1), value);
	}

	inline static int32_t get_offset_of_m_Tooltip_2() { return static_cast<int32_t>(offsetof(AnalyticsEventParam_t2480121928, ___m_Tooltip_2)); }
	inline String_t* get_m_Tooltip_2() const { return ___m_Tooltip_2; }
	inline String_t** get_address_of_m_Tooltip_2() { return &___m_Tooltip_2; }
	inline void set_m_Tooltip_2(String_t* value)
	{
		___m_Tooltip_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Tooltip_2), value);
	}

	inline static int32_t get_offset_of_m_Name_3() { return static_cast<int32_t>(offsetof(AnalyticsEventParam_t2480121928, ___m_Name_3)); }
	inline String_t* get_m_Name_3() const { return ___m_Name_3; }
	inline String_t** get_address_of_m_Name_3() { return &___m_Name_3; }
	inline void set_m_Name_3(String_t* value)
	{
		___m_Name_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Name_3), value);
	}

	inline static int32_t get_offset_of_m_Value_4() { return static_cast<int32_t>(offsetof(AnalyticsEventParam_t2480121928, ___m_Value_4)); }
	inline ValueProperty_t1868393739 * get_m_Value_4() const { return ___m_Value_4; }
	inline ValueProperty_t1868393739 ** get_address_of_m_Value_4() { return &___m_Value_4; }
	inline void set_m_Value_4(ValueProperty_t1868393739 * value)
	{
		___m_Value_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Value_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANALYTICSEVENTPARAM_T2480121928_H
#ifndef EVENTTRIGGER_T2527451695_H
#define EVENTTRIGGER_T2527451695_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.EventTrigger
struct  EventTrigger_t2527451695  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Analytics.EventTrigger::m_IsTriggerExpanded
	bool ___m_IsTriggerExpanded_0;
	// UnityEngine.Analytics.TriggerType UnityEngine.Analytics.EventTrigger::m_Type
	int32_t ___m_Type_1;
	// UnityEngine.Analytics.TriggerLifecycleEvent UnityEngine.Analytics.EventTrigger::m_LifecycleEvent
	int32_t ___m_LifecycleEvent_2;
	// System.Boolean UnityEngine.Analytics.EventTrigger::m_ApplyRules
	bool ___m_ApplyRules_3;
	// UnityEngine.Analytics.TriggerListContainer UnityEngine.Analytics.EventTrigger::m_Rules
	TriggerListContainer_t2032715483 * ___m_Rules_4;
	// UnityEngine.Analytics.TriggerBool UnityEngine.Analytics.EventTrigger::m_TriggerBool
	int32_t ___m_TriggerBool_5;
	// System.Single UnityEngine.Analytics.EventTrigger::m_InitTime
	float ___m_InitTime_6;
	// System.Single UnityEngine.Analytics.EventTrigger::m_RepeatTime
	float ___m_RepeatTime_7;
	// System.Int32 UnityEngine.Analytics.EventTrigger::m_Repetitions
	int32_t ___m_Repetitions_8;
	// System.Int32 UnityEngine.Analytics.EventTrigger::repetitionCount
	int32_t ___repetitionCount_9;
	// UnityEngine.Analytics.EventTrigger/OnTrigger UnityEngine.Analytics.EventTrigger::m_TriggerFunction
	OnTrigger_t4184125570 * ___m_TriggerFunction_10;
	// UnityEngine.Analytics.TriggerMethod UnityEngine.Analytics.EventTrigger::m_Method
	TriggerMethod_t582536534 * ___m_Method_11;

public:
	inline static int32_t get_offset_of_m_IsTriggerExpanded_0() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_IsTriggerExpanded_0)); }
	inline bool get_m_IsTriggerExpanded_0() const { return ___m_IsTriggerExpanded_0; }
	inline bool* get_address_of_m_IsTriggerExpanded_0() { return &___m_IsTriggerExpanded_0; }
	inline void set_m_IsTriggerExpanded_0(bool value)
	{
		___m_IsTriggerExpanded_0 = value;
	}

	inline static int32_t get_offset_of_m_Type_1() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_Type_1)); }
	inline int32_t get_m_Type_1() const { return ___m_Type_1; }
	inline int32_t* get_address_of_m_Type_1() { return &___m_Type_1; }
	inline void set_m_Type_1(int32_t value)
	{
		___m_Type_1 = value;
	}

	inline static int32_t get_offset_of_m_LifecycleEvent_2() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_LifecycleEvent_2)); }
	inline int32_t get_m_LifecycleEvent_2() const { return ___m_LifecycleEvent_2; }
	inline int32_t* get_address_of_m_LifecycleEvent_2() { return &___m_LifecycleEvent_2; }
	inline void set_m_LifecycleEvent_2(int32_t value)
	{
		___m_LifecycleEvent_2 = value;
	}

	inline static int32_t get_offset_of_m_ApplyRules_3() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_ApplyRules_3)); }
	inline bool get_m_ApplyRules_3() const { return ___m_ApplyRules_3; }
	inline bool* get_address_of_m_ApplyRules_3() { return &___m_ApplyRules_3; }
	inline void set_m_ApplyRules_3(bool value)
	{
		___m_ApplyRules_3 = value;
	}

	inline static int32_t get_offset_of_m_Rules_4() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_Rules_4)); }
	inline TriggerListContainer_t2032715483 * get_m_Rules_4() const { return ___m_Rules_4; }
	inline TriggerListContainer_t2032715483 ** get_address_of_m_Rules_4() { return &___m_Rules_4; }
	inline void set_m_Rules_4(TriggerListContainer_t2032715483 * value)
	{
		___m_Rules_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rules_4), value);
	}

	inline static int32_t get_offset_of_m_TriggerBool_5() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_TriggerBool_5)); }
	inline int32_t get_m_TriggerBool_5() const { return ___m_TriggerBool_5; }
	inline int32_t* get_address_of_m_TriggerBool_5() { return &___m_TriggerBool_5; }
	inline void set_m_TriggerBool_5(int32_t value)
	{
		___m_TriggerBool_5 = value;
	}

	inline static int32_t get_offset_of_m_InitTime_6() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_InitTime_6)); }
	inline float get_m_InitTime_6() const { return ___m_InitTime_6; }
	inline float* get_address_of_m_InitTime_6() { return &___m_InitTime_6; }
	inline void set_m_InitTime_6(float value)
	{
		___m_InitTime_6 = value;
	}

	inline static int32_t get_offset_of_m_RepeatTime_7() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_RepeatTime_7)); }
	inline float get_m_RepeatTime_7() const { return ___m_RepeatTime_7; }
	inline float* get_address_of_m_RepeatTime_7() { return &___m_RepeatTime_7; }
	inline void set_m_RepeatTime_7(float value)
	{
		___m_RepeatTime_7 = value;
	}

	inline static int32_t get_offset_of_m_Repetitions_8() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_Repetitions_8)); }
	inline int32_t get_m_Repetitions_8() const { return ___m_Repetitions_8; }
	inline int32_t* get_address_of_m_Repetitions_8() { return &___m_Repetitions_8; }
	inline void set_m_Repetitions_8(int32_t value)
	{
		___m_Repetitions_8 = value;
	}

	inline static int32_t get_offset_of_repetitionCount_9() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___repetitionCount_9)); }
	inline int32_t get_repetitionCount_9() const { return ___repetitionCount_9; }
	inline int32_t* get_address_of_repetitionCount_9() { return &___repetitionCount_9; }
	inline void set_repetitionCount_9(int32_t value)
	{
		___repetitionCount_9 = value;
	}

	inline static int32_t get_offset_of_m_TriggerFunction_10() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_TriggerFunction_10)); }
	inline OnTrigger_t4184125570 * get_m_TriggerFunction_10() const { return ___m_TriggerFunction_10; }
	inline OnTrigger_t4184125570 ** get_address_of_m_TriggerFunction_10() { return &___m_TriggerFunction_10; }
	inline void set_m_TriggerFunction_10(OnTrigger_t4184125570 * value)
	{
		___m_TriggerFunction_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_TriggerFunction_10), value);
	}

	inline static int32_t get_offset_of_m_Method_11() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_Method_11)); }
	inline TriggerMethod_t582536534 * get_m_Method_11() const { return ___m_Method_11; }
	inline TriggerMethod_t582536534 ** get_address_of_m_Method_11() { return &___m_Method_11; }
	inline void set_m_Method_11(TriggerMethod_t582536534 * value)
	{
		___m_Method_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Method_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTTRIGGER_T2527451695_H
#ifndef TRIGGERRULE_T1946298321_H
#define TRIGGERRULE_T1946298321_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerRule
struct  TriggerRule_t1946298321  : public RuntimeObject
{
public:
	// UnityEngine.Analytics.TrackableField UnityEngine.Analytics.TriggerRule::m_Target
	TrackableField_t1772682203 * ___m_Target_0;
	// UnityEngine.Analytics.TriggerOperator UnityEngine.Analytics.TriggerRule::m_Operator
	int32_t ___m_Operator_1;
	// UnityEngine.Analytics.ValueProperty UnityEngine.Analytics.TriggerRule::m_Value
	ValueProperty_t1868393739 * ___m_Value_2;
	// UnityEngine.Analytics.ValueProperty UnityEngine.Analytics.TriggerRule::m_Value2
	ValueProperty_t1868393739 * ___m_Value2_3;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(TriggerRule_t1946298321, ___m_Target_0)); }
	inline TrackableField_t1772682203 * get_m_Target_0() const { return ___m_Target_0; }
	inline TrackableField_t1772682203 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(TrackableField_t1772682203 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_0), value);
	}

	inline static int32_t get_offset_of_m_Operator_1() { return static_cast<int32_t>(offsetof(TriggerRule_t1946298321, ___m_Operator_1)); }
	inline int32_t get_m_Operator_1() const { return ___m_Operator_1; }
	inline int32_t* get_address_of_m_Operator_1() { return &___m_Operator_1; }
	inline void set_m_Operator_1(int32_t value)
	{
		___m_Operator_1 = value;
	}

	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(TriggerRule_t1946298321, ___m_Value_2)); }
	inline ValueProperty_t1868393739 * get_m_Value_2() const { return ___m_Value_2; }
	inline ValueProperty_t1868393739 ** get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(ValueProperty_t1868393739 * value)
	{
		___m_Value_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Value_2), value);
	}

	inline static int32_t get_offset_of_m_Value2_3() { return static_cast<int32_t>(offsetof(TriggerRule_t1946298321, ___m_Value2_3)); }
	inline ValueProperty_t1868393739 * get_m_Value2_3() const { return ___m_Value2_3; }
	inline ValueProperty_t1868393739 ** get_address_of_m_Value2_3() { return &___m_Value2_3; }
	inline void set_m_Value2_3(ValueProperty_t1868393739 * value)
	{
		___m_Value2_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Value2_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGERRULE_T1946298321_H
#ifndef VALUEPROPERTY_T1868393739_H
#define VALUEPROPERTY_T1868393739_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.ValueProperty
struct  ValueProperty_t1868393739  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Analytics.ValueProperty::m_EditingCustomValue
	bool ___m_EditingCustomValue_0;
	// System.Int32 UnityEngine.Analytics.ValueProperty::m_PopupIndex
	int32_t ___m_PopupIndex_1;
	// System.String UnityEngine.Analytics.ValueProperty::m_CustomValue
	String_t* ___m_CustomValue_2;
	// System.Boolean UnityEngine.Analytics.ValueProperty::m_FixedType
	bool ___m_FixedType_3;
	// System.String UnityEngine.Analytics.ValueProperty::m_EnumType
	String_t* ___m_EnumType_4;
	// System.Boolean UnityEngine.Analytics.ValueProperty::m_EnumTypeIsCustomizable
	bool ___m_EnumTypeIsCustomizable_5;
	// System.Boolean UnityEngine.Analytics.ValueProperty::m_CanDisable
	bool ___m_CanDisable_6;
	// UnityEngine.Analytics.ValueProperty/PropertyType UnityEngine.Analytics.ValueProperty::m_PropertyType
	int32_t ___m_PropertyType_7;
	// System.String UnityEngine.Analytics.ValueProperty::m_ValueType
	String_t* ___m_ValueType_8;
	// System.String UnityEngine.Analytics.ValueProperty::m_Value
	String_t* ___m_Value_9;
	// UnityEngine.Analytics.TrackableField UnityEngine.Analytics.ValueProperty::m_Target
	TrackableField_t1772682203 * ___m_Target_10;

public:
	inline static int32_t get_offset_of_m_EditingCustomValue_0() { return static_cast<int32_t>(offsetof(ValueProperty_t1868393739, ___m_EditingCustomValue_0)); }
	inline bool get_m_EditingCustomValue_0() const { return ___m_EditingCustomValue_0; }
	inline bool* get_address_of_m_EditingCustomValue_0() { return &___m_EditingCustomValue_0; }
	inline void set_m_EditingCustomValue_0(bool value)
	{
		___m_EditingCustomValue_0 = value;
	}

	inline static int32_t get_offset_of_m_PopupIndex_1() { return static_cast<int32_t>(offsetof(ValueProperty_t1868393739, ___m_PopupIndex_1)); }
	inline int32_t get_m_PopupIndex_1() const { return ___m_PopupIndex_1; }
	inline int32_t* get_address_of_m_PopupIndex_1() { return &___m_PopupIndex_1; }
	inline void set_m_PopupIndex_1(int32_t value)
	{
		___m_PopupIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_CustomValue_2() { return static_cast<int32_t>(offsetof(ValueProperty_t1868393739, ___m_CustomValue_2)); }
	inline String_t* get_m_CustomValue_2() const { return ___m_CustomValue_2; }
	inline String_t** get_address_of_m_CustomValue_2() { return &___m_CustomValue_2; }
	inline void set_m_CustomValue_2(String_t* value)
	{
		___m_CustomValue_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_CustomValue_2), value);
	}

	inline static int32_t get_offset_of_m_FixedType_3() { return static_cast<int32_t>(offsetof(ValueProperty_t1868393739, ___m_FixedType_3)); }
	inline bool get_m_FixedType_3() const { return ___m_FixedType_3; }
	inline bool* get_address_of_m_FixedType_3() { return &___m_FixedType_3; }
	inline void set_m_FixedType_3(bool value)
	{
		___m_FixedType_3 = value;
	}

	inline static int32_t get_offset_of_m_EnumType_4() { return static_cast<int32_t>(offsetof(ValueProperty_t1868393739, ___m_EnumType_4)); }
	inline String_t* get_m_EnumType_4() const { return ___m_EnumType_4; }
	inline String_t** get_address_of_m_EnumType_4() { return &___m_EnumType_4; }
	inline void set_m_EnumType_4(String_t* value)
	{
		___m_EnumType_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_EnumType_4), value);
	}

	inline static int32_t get_offset_of_m_EnumTypeIsCustomizable_5() { return static_cast<int32_t>(offsetof(ValueProperty_t1868393739, ___m_EnumTypeIsCustomizable_5)); }
	inline bool get_m_EnumTypeIsCustomizable_5() const { return ___m_EnumTypeIsCustomizable_5; }
	inline bool* get_address_of_m_EnumTypeIsCustomizable_5() { return &___m_EnumTypeIsCustomizable_5; }
	inline void set_m_EnumTypeIsCustomizable_5(bool value)
	{
		___m_EnumTypeIsCustomizable_5 = value;
	}

	inline static int32_t get_offset_of_m_CanDisable_6() { return static_cast<int32_t>(offsetof(ValueProperty_t1868393739, ___m_CanDisable_6)); }
	inline bool get_m_CanDisable_6() const { return ___m_CanDisable_6; }
	inline bool* get_address_of_m_CanDisable_6() { return &___m_CanDisable_6; }
	inline void set_m_CanDisable_6(bool value)
	{
		___m_CanDisable_6 = value;
	}

	inline static int32_t get_offset_of_m_PropertyType_7() { return static_cast<int32_t>(offsetof(ValueProperty_t1868393739, ___m_PropertyType_7)); }
	inline int32_t get_m_PropertyType_7() const { return ___m_PropertyType_7; }
	inline int32_t* get_address_of_m_PropertyType_7() { return &___m_PropertyType_7; }
	inline void set_m_PropertyType_7(int32_t value)
	{
		___m_PropertyType_7 = value;
	}

	inline static int32_t get_offset_of_m_ValueType_8() { return static_cast<int32_t>(offsetof(ValueProperty_t1868393739, ___m_ValueType_8)); }
	inline String_t* get_m_ValueType_8() const { return ___m_ValueType_8; }
	inline String_t** get_address_of_m_ValueType_8() { return &___m_ValueType_8; }
	inline void set_m_ValueType_8(String_t* value)
	{
		___m_ValueType_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_ValueType_8), value);
	}

	inline static int32_t get_offset_of_m_Value_9() { return static_cast<int32_t>(offsetof(ValueProperty_t1868393739, ___m_Value_9)); }
	inline String_t* get_m_Value_9() const { return ___m_Value_9; }
	inline String_t** get_address_of_m_Value_9() { return &___m_Value_9; }
	inline void set_m_Value_9(String_t* value)
	{
		___m_Value_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Value_9), value);
	}

	inline static int32_t get_offset_of_m_Target_10() { return static_cast<int32_t>(offsetof(ValueProperty_t1868393739, ___m_Target_10)); }
	inline TrackableField_t1772682203 * get_m_Target_10() const { return ___m_Target_10; }
	inline TrackableField_t1772682203 ** get_address_of_m_Target_10() { return &___m_Target_10; }
	inline void set_m_Target_10(TrackableField_t1772682203 * value)
	{
		___m_Target_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUEPROPERTY_T1868393739_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
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
#ifndef ONTRIGGER_T4184125570_H
#define ONTRIGGER_T4184125570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.EventTrigger/OnTrigger
struct  OnTrigger_t4184125570  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONTRIGGER_T4184125570_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef ANALYTICSEVENTTRACKER_T2285229262_H
#define ANALYTICSEVENTTRACKER_T2285229262_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.AnalyticsEventTracker
struct  AnalyticsEventTracker_t2285229262  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Analytics.EventTrigger UnityEngine.Analytics.AnalyticsEventTracker::m_Trigger
	EventTrigger_t2527451695 * ___m_Trigger_4;
	// UnityEngine.Analytics.StandardEventPayload UnityEngine.Analytics.AnalyticsEventTracker::m_EventPayload
	StandardEventPayload_t1629891255 * ___m_EventPayload_5;

public:
	inline static int32_t get_offset_of_m_Trigger_4() { return static_cast<int32_t>(offsetof(AnalyticsEventTracker_t2285229262, ___m_Trigger_4)); }
	inline EventTrigger_t2527451695 * get_m_Trigger_4() const { return ___m_Trigger_4; }
	inline EventTrigger_t2527451695 ** get_address_of_m_Trigger_4() { return &___m_Trigger_4; }
	inline void set_m_Trigger_4(EventTrigger_t2527451695 * value)
	{
		___m_Trigger_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Trigger_4), value);
	}

	inline static int32_t get_offset_of_m_EventPayload_5() { return static_cast<int32_t>(offsetof(AnalyticsEventTracker_t2285229262, ___m_EventPayload_5)); }
	inline StandardEventPayload_t1629891255 * get_m_EventPayload_5() const { return ___m_EventPayload_5; }
	inline StandardEventPayload_t1629891255 ** get_address_of_m_EventPayload_5() { return &___m_EventPayload_5; }
	inline void set_m_EventPayload_5(StandardEventPayload_t1629891255 * value)
	{
		___m_EventPayload_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventPayload_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANALYTICSEVENTTRACKER_T2285229262_H
#ifndef ANALYTICSTRACKER_T731021378_H
#define ANALYTICSTRACKER_T731021378_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.AnalyticsTracker
struct  AnalyticsTracker_t731021378  : public MonoBehaviour_t3962482529
{
public:
	// System.String UnityEngine.Analytics.AnalyticsTracker::m_EventName
	String_t* ___m_EventName_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Analytics.AnalyticsTracker::m_Dict
	Dictionary_2_t2865362463 * ___m_Dict_5;
	// System.Int32 UnityEngine.Analytics.AnalyticsTracker::m_PrevDictHash
	int32_t ___m_PrevDictHash_6;
	// UnityEngine.Analytics.TrackableProperty UnityEngine.Analytics.AnalyticsTracker::m_TrackableProperty
	TrackableProperty_t3943537984 * ___m_TrackableProperty_7;
	// UnityEngine.Analytics.AnalyticsTracker/Trigger UnityEngine.Analytics.AnalyticsTracker::m_Trigger
	int32_t ___m_Trigger_8;

public:
	inline static int32_t get_offset_of_m_EventName_4() { return static_cast<int32_t>(offsetof(AnalyticsTracker_t731021378, ___m_EventName_4)); }
	inline String_t* get_m_EventName_4() const { return ___m_EventName_4; }
	inline String_t** get_address_of_m_EventName_4() { return &___m_EventName_4; }
	inline void set_m_EventName_4(String_t* value)
	{
		___m_EventName_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventName_4), value);
	}

	inline static int32_t get_offset_of_m_Dict_5() { return static_cast<int32_t>(offsetof(AnalyticsTracker_t731021378, ___m_Dict_5)); }
	inline Dictionary_2_t2865362463 * get_m_Dict_5() const { return ___m_Dict_5; }
	inline Dictionary_2_t2865362463 ** get_address_of_m_Dict_5() { return &___m_Dict_5; }
	inline void set_m_Dict_5(Dictionary_2_t2865362463 * value)
	{
		___m_Dict_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Dict_5), value);
	}

	inline static int32_t get_offset_of_m_PrevDictHash_6() { return static_cast<int32_t>(offsetof(AnalyticsTracker_t731021378, ___m_PrevDictHash_6)); }
	inline int32_t get_m_PrevDictHash_6() const { return ___m_PrevDictHash_6; }
	inline int32_t* get_address_of_m_PrevDictHash_6() { return &___m_PrevDictHash_6; }
	inline void set_m_PrevDictHash_6(int32_t value)
	{
		___m_PrevDictHash_6 = value;
	}

	inline static int32_t get_offset_of_m_TrackableProperty_7() { return static_cast<int32_t>(offsetof(AnalyticsTracker_t731021378, ___m_TrackableProperty_7)); }
	inline TrackableProperty_t3943537984 * get_m_TrackableProperty_7() const { return ___m_TrackableProperty_7; }
	inline TrackableProperty_t3943537984 ** get_address_of_m_TrackableProperty_7() { return &___m_TrackableProperty_7; }
	inline void set_m_TrackableProperty_7(TrackableProperty_t3943537984 * value)
	{
		___m_TrackableProperty_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_TrackableProperty_7), value);
	}

	inline static int32_t get_offset_of_m_Trigger_8() { return static_cast<int32_t>(offsetof(AnalyticsTracker_t731021378, ___m_Trigger_8)); }
	inline int32_t get_m_Trigger_8() const { return ___m_Trigger_8; }
	inline int32_t* get_address_of_m_Trigger_8() { return &___m_Trigger_8; }
	inline void set_m_Trigger_8(int32_t value)
	{
		___m_Trigger_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANALYTICSTRACKER_T731021378_H
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
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
// System.Type[]
struct TypeU5BU5D_t3940880105  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
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
struct CharU5BU5D_t3528271667  : public RuntimeArray
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


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m1938428402_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m3474379962_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void List_1_RemoveAt_m2730968292_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m2387223709_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m2278349286_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Boolean>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m3376109328_gshared (List_1_t1569362707 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m2714930061_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Boolean>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m1433969578_gshared (List_1_t1569362707 * __this, bool p0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" IL2CPP_METHOD_ATTR KeyCollection_t322220623 * Dictionary_2_get_Keys_m2217135091_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t314722136  KeyCollection_GetEnumerator_m982770428_gshared (KeyCollection_t322220623 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m3687673883_gshared (Enumerator_t314722136 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Boolean>::Contains(!0)
extern "C" IL2CPP_METHOD_ATTR bool List_1_Contains_m2779132831_gshared (List_1_t1569362707 * __this, bool p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m76191888_gshared (Enumerator_t314722136 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m260444170_gshared (Enumerator_t314722136 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.String::Trim()
extern "C" IL2CPP_METHOD_ATTR String_t* String_Trim_m923598732 (String_t* __this, const RuntimeMethod* method);
// System.String UnityEngine.Analytics.ValueProperty::get_propertyValue()
extern "C" IL2CPP_METHOD_ATTR String_t* ValueProperty_get_propertyValue_m3340090327 (ValueProperty_t1868393739 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Analytics.AnalyticsEventParam>::.ctor()
inline void List_1__ctor_m2118976410 (List_1_t3952196670 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3952196670 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void UnityEngine.Analytics.EventTrigger::.ctor()
extern "C" IL2CPP_METHOD_ATTR void EventTrigger__ctor_m3931360164 (EventTrigger_t2527451695 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Analytics.StandardEventPayload::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StandardEventPayload__ctor_m1676969451 (StandardEventPayload_t1629891255 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEventTracker::SendEvent()
extern "C" IL2CPP_METHOD_ATTR int32_t AnalyticsEventTracker_SendEvent_m1365958832 (AnalyticsEventTracker_t2285229262 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Analytics.EventTrigger::Test(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR bool EventTrigger_Test_m2021527001 (EventTrigger_t2527451695 * __this, GameObject_t1113636619 * ___gameObject0, const RuntimeMethod* method);
// UnityEngine.Analytics.StandardEventPayload UnityEngine.Analytics.AnalyticsEventTracker::get_payload()
extern "C" IL2CPP_METHOD_ATTR StandardEventPayload_t1629891255 * AnalyticsEventTracker_get_payload_m308762692 (AnalyticsEventTracker_t2285229262 * __this, const RuntimeMethod* method);
// UnityEngine.Analytics.TriggerType UnityEngine.Analytics.EventTrigger::get_triggerType()
extern "C" IL2CPP_METHOD_ATTR int32_t EventTrigger_get_triggerType_m4159785260 (EventTrigger_t2527451695 * __this, const RuntimeMethod* method);
// UnityEngine.Analytics.TriggerLifecycleEvent UnityEngine.Analytics.EventTrigger::get_lifecycleEvent()
extern "C" IL2CPP_METHOD_ATTR int32_t EventTrigger_get_lifecycleEvent_m3324346053 (EventTrigger_t2527451695 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.Analytics.AnalyticsEventTracker::TimedTrigger()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* AnalyticsEventTracker_TimedTrigger_m758162441 (AnalyticsEventTracker_t2285229262 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" IL2CPP_METHOD_ATTR Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m3411253000 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Analytics.AnalyticsEventTracker/<TimedTrigger>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CTimedTriggerU3Ec__Iterator0__ctor_m375484522 (U3CTimedTriggerU3Ec__Iterator0_t3813435494 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Analytics.EventTrigger::get_initTime()
extern "C" IL2CPP_METHOD_ATTR float EventTrigger_get_initTime_m3511193067 (EventTrigger_t2527451695 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m2199082655 (WaitForSeconds_t1699091251 * __this, float p0, const RuntimeMethod* method);
// System.Single UnityEngine.Analytics.EventTrigger::get_repeatTime()
extern "C" IL2CPP_METHOD_ATTR float EventTrigger_get_repeatTime_m1602140789 (EventTrigger_t2527451695 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Analytics.EventTrigger::get_repetitions()
extern "C" IL2CPP_METHOD_ATTR int32_t EventTrigger_get_repetitions_m2606968061 (EventTrigger_t2527451695 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_m1476497131 (Dictionary_2_t2865362463 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2865362463 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method);
}
// System.Void UnityEngine.Analytics.TrackableProperty::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TrackableProperty__ctor_m29288901 (TrackableProperty_t3943537984 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Analytics.AnalyticsTracker::TriggerEvent()
extern "C" IL2CPP_METHOD_ATTR void AnalyticsTracker_TriggerEvent_m2244736785 (AnalyticsTracker_t731021378 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Analytics.AnalyticsTracker::BuildParameters()
extern "C" IL2CPP_METHOD_ATTR void AnalyticsTracker_BuildParameters_m43920649 (AnalyticsTracker_t731021378 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Analytics.AnalyticsTracker::SendEvent()
extern "C" IL2CPP_METHOD_ATTR void AnalyticsTracker_SendEvent_m2955089255 (AnalyticsTracker_t731021378 * __this, const RuntimeMethod* method);
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::CustomEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" IL2CPP_METHOD_ATTR int32_t Analytics_CustomEvent_m3835919949 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Clear()
inline void Dictionary_2_Clear_m3181358953 (Dictionary_2_t2865362463 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2865362463 *, const RuntimeMethod*))Dictionary_2_Clear_m1938428402_gshared)(__this, method);
}
// System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty/FieldWithTarget> UnityEngine.Analytics.TrackableProperty::get_fields()
extern "C" IL2CPP_METHOD_ATTR List_1_t235857739 * TrackableProperty_get_fields_m3682628132 (TrackableProperty_t3943537984 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty/FieldWithTarget>::get_Count()
inline int32_t List_1_get_Count_m3935023107 (List_1_t235857739 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t235857739 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty/FieldWithTarget>::get_Item(System.Int32)
inline FieldWithTarget_t3058750293 * List_1_get_Item_m1027239081 (List_1_t235857739 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  FieldWithTarget_t3058750293 * (*) (List_1_t235857739 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method);
}
// UnityEngine.Object UnityEngine.Analytics.TrackableProperty/FieldWithTarget::get_target()
extern "C" IL2CPP_METHOD_ATTR Object_t631007953 * FieldWithTarget_get_target_m2252597932 (FieldWithTarget_t3058750293 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Analytics.TrackableProperty/FieldWithTarget::get_doStatic()
extern "C" IL2CPP_METHOD_ATTR bool FieldWithTarget_get_doStatic_m1956244749 (FieldWithTarget_t3058750293 * __this, const RuntimeMethod* method);
// System.Object UnityEngine.Analytics.TrackableProperty/FieldWithTarget::GetValue()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * FieldWithTarget_GetValue_m2315870500 (FieldWithTarget_t3058750293 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Analytics.TrackableProperty/FieldWithTarget::get_paramName()
extern "C" IL2CPP_METHOD_ATTR String_t* FieldWithTarget_get_paramName_m3501478659 (FieldWithTarget_t3058750293 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m1535556385 (Dictionary_2_t2865362463 * __this, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2865362463 *, String_t*, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_m3474379962_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.Analytics.TriggerListContainer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TriggerListContainer__ctor_m1390596431 (TriggerListContainer_t2032715483 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Analytics.TriggerRule::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TriggerRule__ctor_m225466603 (TriggerRule_t1946298321 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.Analytics.TriggerRule> UnityEngine.Analytics.TriggerListContainer::get_rules()
extern "C" IL2CPP_METHOD_ATTR List_1_t3418373063 * TriggerListContainer_get_rules_m110726358 (TriggerListContainer_t2032715483 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Analytics.TriggerRule>::Add(!0)
inline void List_1_Add_m1771611534 (List_1_t3418373063 * __this, TriggerRule_t1946298321 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3418373063 *, TriggerRule_t1946298321 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Analytics.TriggerRule>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m2483907692 (List_1_t3418373063 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3418373063 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m2730968292_gshared)(__this, p0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Analytics.TriggerRule>::GetEnumerator()
inline Enumerator_t1012649644  List_1_GetEnumerator_m1143297947 (List_1_t3418373063 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1012649644  (*) (List_1_t3418373063 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Analytics.TriggerRule>::get_Current()
inline TriggerRule_t1946298321 * Enumerator_get_Current_m3796810840 (Enumerator_t1012649644 * __this, const RuntimeMethod* method)
{
	return ((  TriggerRule_t1946298321 * (*) (Enumerator_t1012649644 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method);
}
// System.Boolean UnityEngine.Analytics.TriggerRule::Test(System.Boolean&,System.String&)
extern "C" IL2CPP_METHOD_ATTR bool TriggerRule_Test_m3134988565 (TriggerRule_t1946298321 * __this, bool* ___error0, String_t** ___message1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* Object_get_name_m4211327027 (Object_t631007953 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarningFormat(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarningFormat_m2535776735 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Analytics.TriggerRule>::MoveNext()
inline bool Enumerator_MoveNext_m528544069 (Enumerator_t1012649644 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1012649644 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Analytics.TriggerRule>::Dispose()
inline void Enumerator_Dispose_m2918142462 (Enumerator_t1012649644 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1012649644 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method);
}
// System.Void UnityEngine.Analytics.EventTrigger/OnTrigger::Invoke()
extern "C" IL2CPP_METHOD_ATTR void OnTrigger_Invoke_m2120872091 (OnTrigger_t4184125570 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Analytics.AnalyticsEventParamListContainer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AnalyticsEventParamListContainer__ctor_m1995104893 (AnalyticsEventParamListContainer_t587083383 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Analytics.StandardEventPayload::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* StandardEventPayload_get_name_m1853779774 (StandardEventPayload_t1629891255 * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m2969720369 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m1152696503 (Exception_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Analytics.StandardEventPayload::IsCustomDataValid()
extern "C" IL2CPP_METHOD_ATTR bool StandardEventPayload_IsCustomDataValid_m922891381 (StandardEventPayload_t1629891255 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Analytics.StandardEventPayload::IsRequiredDataValid()
extern "C" IL2CPP_METHOD_ATTR bool StandardEventPayload_IsRequiredDataValid_m361738930 (StandardEventPayload_t1629891255 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IDictionary`2<System.String,System.Object> UnityEngine.Analytics.StandardEventPayload::GetParameters()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* StandardEventPayload_GetParameters_m2672427676 (StandardEventPayload_t1629891255 * __this, const RuntimeMethod* method);
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::Custom(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" IL2CPP_METHOD_ATTR int32_t AnalyticsEvent_Custom_m227997836 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method);
// UnityEngine.Analytics.AnalyticsEventParamListContainer UnityEngine.Analytics.StandardEventPayload::get_parameters()
extern "C" IL2CPP_METHOD_ATTR AnalyticsEventParamListContainer_t587083383 * StandardEventPayload_get_parameters_m4209814697 (StandardEventPayload_t1629891255 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.Analytics.AnalyticsEventParam> UnityEngine.Analytics.AnalyticsEventParamListContainer::get_parameters()
extern "C" IL2CPP_METHOD_ATTR List_1_t3952196670 * AnalyticsEventParamListContainer_get_parameters_m4180299006 (AnalyticsEventParamListContainer_t587083383 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Analytics.AnalyticsEventParam>::get_Item(System.Int32)
inline AnalyticsEventParam_t2480121928 * List_1_get_Item_m2228004625 (List_1_t3952196670 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  AnalyticsEventParam_t2480121928 * (*) (List_1_t3952196670 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method);
}
// UnityEngine.Analytics.ValueProperty UnityEngine.Analytics.AnalyticsEventParam::get_valueProperty()
extern "C" IL2CPP_METHOD_ATTR ValueProperty_t1868393739 * AnalyticsEventParam_get_valueProperty_m583328026 (AnalyticsEventParam_t2480121928 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Analytics.ValueProperty::IsValid()
extern "C" IL2CPP_METHOD_ATTR bool ValueProperty_IsValid_m3724034537 (ValueProperty_t1868393739 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Analytics.AnalyticsEventParam::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* AnalyticsEventParam_get_name_m708127086 (AnalyticsEventParam_t2480121928 * __this, const RuntimeMethod* method);
// System.Object UnityEngine.Analytics.AnalyticsEventParam::get_value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * AnalyticsEventParam_get_value_m2837935290 (AnalyticsEventParam_t2480121928 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1)
inline void Dictionary_2_Add_m2942821800 (Dictionary_2_t2865362463 * __this, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2865362463 *, String_t*, RuntimeObject *, const RuntimeMethod*))Dictionary_2_Add_m2387223709_gshared)(__this, p0, p1, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Analytics.AnalyticsEventParam>::get_Count()
inline int32_t List_1_get_Count_m3831796040 (List_1_t3952196670 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3952196670 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Boolean>>::.ctor()
inline void Dictionary_2__ctor_m2211705532 (Dictionary_2_t1354619006 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1354619006 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method);
}
// UnityEngine.Analytics.AnalyticsEventParam/RequirementType UnityEngine.Analytics.AnalyticsEventParam::get_requirementType()
extern "C" IL2CPP_METHOD_ATTR int32_t AnalyticsEventParam_get_requirementType_m1268059884 (AnalyticsEventParam_t2480121928 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Analytics.AnalyticsEventParam::get_groupID()
extern "C" IL2CPP_METHOD_ATTR String_t* AnalyticsEventParam_get_groupID_m569309506 (AnalyticsEventParam_t2480121928 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Boolean>>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m4064423371 (Dictionary_2_t1354619006 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1354619006 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m2278349286_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<System.Boolean>::.ctor()
inline void List_1__ctor_m3376109328 (List_1_t1569362707 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1569362707 *, const RuntimeMethod*))List_1__ctor_m3376109328_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Boolean>>::Add(!0,!1)
inline void Dictionary_2_Add_m3693257978 (Dictionary_2_t1354619006 * __this, String_t* p0, List_1_t1569362707 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1354619006 *, String_t*, List_1_t1569362707 *, const RuntimeMethod*))Dictionary_2_Add_m2387223709_gshared)(__this, p0, p1, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Boolean>>::get_Item(!0)
inline List_1_t1569362707 * Dictionary_2_get_Item_m3214317455 (Dictionary_2_t1354619006 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  List_1_t1569362707 * (*) (Dictionary_2_t1354619006 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m2714930061_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<System.Boolean>::Add(!0)
inline void List_1_Add_m1433969578 (List_1_t1569362707 * __this, bool p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1569362707 *, bool, const RuntimeMethod*))List_1_Add_m1433969578_gshared)(__this, p0, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Boolean>>::get_Keys()
inline KeyCollection_t1544294477 * Dictionary_2_get_Keys_m1646650323 (Dictionary_2_t1354619006 * __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t1544294477 * (*) (Dictionary_2_t1354619006 *, const RuntimeMethod*))Dictionary_2_get_Keys_m2217135091_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<System.Boolean>>::GetEnumerator()
inline Enumerator_t1536795990  KeyCollection_GetEnumerator_m3646357383 (KeyCollection_t1544294477 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1536795990  (*) (KeyCollection_t1544294477 *, const RuntimeMethod*))KeyCollection_GetEnumerator_m982770428_gshared)(__this, method);
}
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Collections.Generic.List`1<System.Boolean>>::get_Current()
inline String_t* Enumerator_get_Current_m3766982068 (Enumerator_t1536795990 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_t1536795990 *, const RuntimeMethod*))Enumerator_get_Current_m3687673883_gshared)(__this, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Boolean>::Contains(!0)
inline bool List_1_Contains_m2779132831 (List_1_t1569362707 * __this, bool p0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t1569362707 *, bool, const RuntimeMethod*))List_1_Contains_m2779132831_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Collections.Generic.List`1<System.Boolean>>::MoveNext()
inline bool Enumerator_MoveNext_m2277860433 (Enumerator_t1536795990 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1536795990 *, const RuntimeMethod*))Enumerator_MoveNext_m76191888_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Collections.Generic.List`1<System.Boolean>>::Dispose()
inline void Enumerator_Dispose_m3558290115 (Enumerator_t1536795990 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1536795990 *, const RuntimeMethod*))Enumerator_Dispose_m260444170_gshared)(__this, method);
}
// System.Void UnityEngine.Analytics.TrackablePropertyBase::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TrackablePropertyBase__ctor_m2201057683 (TrackablePropertyBase_t2121532948 * __this, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t1281789340* String_Split_m3646115398 (String_t* __this, CharU5BU5D_t3528271667* p0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String)
extern "C" IL2CPP_METHOD_ATTR PropertyInfo_t * Type_GetProperty_m3414567179 (Type_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Reflection.FieldInfo System.Type::GetField(System.String)
extern "C" IL2CPP_METHOD_ATTR FieldInfo_t * Type_GetField_m2961003358 (Type_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty/FieldWithTarget>::GetEnumerator()
inline Enumerator_t2125101616  List_1_GetEnumerator_m466435735 (List_1_t235857739 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2125101616  (*) (List_1_t235857739 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Analytics.TrackableProperty/FieldWithTarget>::get_Current()
inline FieldWithTarget_t3058750293 * Enumerator_get_Current_m3689659642 (Enumerator_t2125101616 * __this, const RuntimeMethod* method)
{
	return ((  FieldWithTarget_t3058750293 * (*) (Enumerator_t2125101616 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Analytics.TrackableProperty/FieldWithTarget>::MoveNext()
inline bool Enumerator_MoveNext_m1993744362 (Enumerator_t2125101616 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2125101616 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Analytics.TrackableProperty/FieldWithTarget>::Dispose()
inline void Enumerator_Dispose_m536244888 (Enumerator_t2125101616 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2125101616 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Analytics.TriggerRule>::.ctor()
inline void List_1__ctor_m2148725058 (List_1_t3418373063 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3418373063 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Object UnityEngine.Analytics.TrackableField::GetValue()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * TrackableField_GetValue_m4059393238 (TrackableField_t1772682203 * __this, const RuntimeMethod* method);
// UnityEngine.Analytics.TrackableField UnityEngine.Analytics.ValueProperty::get_target()
extern "C" IL2CPP_METHOD_ATTR TrackableField_t1772682203 * ValueProperty_get_target_m1728151320 (ValueProperty_t1868393739 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Analytics.ValueProperty::get_valueType()
extern "C" IL2CPP_METHOD_ATTR String_t* ValueProperty_get_valueType_m2516961412 (ValueProperty_t1868393739 * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Analytics.TriggerRule::TestByString(System.String)
extern "C" IL2CPP_METHOD_ATTR bool TriggerRule_TestByString_m2890887363 (TriggerRule_t1946298321 * __this, String_t* ___currentValue0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Analytics.TriggerRule::TestByBool(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool TriggerRule_TestByBool_m4144604729 (TriggerRule_t1946298321 * __this, bool ___currentValue0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Analytics.TriggerRule::TestByDouble(System.Double)
extern "C" IL2CPP_METHOD_ATTR bool TriggerRule_TestByDouble_m960810189 (TriggerRule_t1946298321 * __this, double ___currentValue0, const RuntimeMethod* method);
// System.Double System.Decimal::op_Explicit(System.Decimal)
extern "C" IL2CPP_METHOD_ATTR double Decimal_op_Explicit_m2816896069 (RuntimeObject * __this /* static, unused */, Decimal_t2948259380  p0, const RuntimeMethod* method);
// System.String System.String::ToLower()
extern "C" IL2CPP_METHOD_ATTR String_t* String_ToLower_m2029374922 (String_t* __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Analytics.TriggerRule::TestByEnum(System.String)
extern "C" IL2CPP_METHOD_ATTR bool TriggerRule_TestByEnum_m2798194165 (TriggerRule_t1946298321 * __this, String_t* ___currentValue0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Analytics.TriggerRule::TestByObject(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool TriggerRule_TestByObject_m3099447300 (TriggerRule_t1946298321 * __this, RuntimeObject * ___currentValue0, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_Equals_m2270643605 (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean System.Boolean::Parse(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Boolean_Parse_m2370352694 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Boolean System.Boolean::Equals(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool Boolean_Equals_m535526264 (bool* __this, bool p0, const RuntimeMethod* method);
// System.Double UnityEngine.Analytics.TriggerRule::GetDouble(System.Object)
extern "C" IL2CPP_METHOD_ATTR double TriggerRule_GetDouble_m2201978033 (TriggerRule_t1946298321 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Analytics.TriggerRule::SafeEquals(System.Double,System.Double)
extern "C" IL2CPP_METHOD_ATTR bool TriggerRule_SafeEquals_m2862813043 (TriggerRule_t1946298321 * __this, double ___double10, double ___double21, const RuntimeMethod* method);
// System.Double System.Double::Parse(System.String)
extern "C" IL2CPP_METHOD_ATTR double Double_Parse_m4153729520 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Type System.Type::GetType(System.String)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetType_m1693760368 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
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
// System.Void UnityEngine.Analytics.AnalyticsEventParam::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void AnalyticsEventParam__ctor_m1888826734 (AnalyticsEventParam_t2480121928 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnalyticsEventParam__ctor_m1888826734_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_RequirementType_0(0);
		__this->set_m_Tooltip_2(_stringLiteral757602046);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		NullCheck(L_0);
		String_t* L_1 = String_Trim_m923598732(L_0, /*hidden argument*/NULL);
		__this->set_m_Name_3(L_1);
		return;
	}
}
// UnityEngine.Analytics.AnalyticsEventParam/RequirementType UnityEngine.Analytics.AnalyticsEventParam::get_requirementType()
extern "C" IL2CPP_METHOD_ATTR int32_t AnalyticsEventParam_get_requirementType_m1268059884 (AnalyticsEventParam_t2480121928 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_RequirementType_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Analytics.AnalyticsEventParam::get_groupID()
extern "C" IL2CPP_METHOD_ATTR String_t* AnalyticsEventParam_get_groupID_m569309506 (AnalyticsEventParam_t2480121928 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_GroupID_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Analytics.ValueProperty UnityEngine.Analytics.AnalyticsEventParam::get_valueProperty()
extern "C" IL2CPP_METHOD_ATTR ValueProperty_t1868393739 * AnalyticsEventParam_get_valueProperty_m583328026 (AnalyticsEventParam_t2480121928 * __this, const RuntimeMethod* method)
{
	ValueProperty_t1868393739 * V_0 = NULL;
	{
		ValueProperty_t1868393739 * L_0 = __this->get_m_Value_4();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		ValueProperty_t1868393739 * L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Analytics.AnalyticsEventParam::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* AnalyticsEventParam_get_name_m708127086 (AnalyticsEventParam_t2480121928 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_Name_3();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Object UnityEngine.Analytics.AnalyticsEventParam::get_value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * AnalyticsEventParam_get_value_m2837935290 (AnalyticsEventParam_t2480121928 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		ValueProperty_t1868393739 * L_0 = __this->get_m_Value_4();
		NullCheck(L_0);
		String_t* L_1 = ValueProperty_get_propertyValue_m3340090327(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		RuntimeObject * L_2 = V_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Analytics.AnalyticsEventParamListContainer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AnalyticsEventParamListContainer__ctor_m1995104893 (AnalyticsEventParamListContainer_t587083383 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnalyticsEventParamListContainer__ctor_m1995104893_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3952196670 * L_0 = (List_1_t3952196670 *)il2cpp_codegen_object_new(List_1_t3952196670_il2cpp_TypeInfo_var);
		List_1__ctor_m2118976410(L_0, /*hidden argument*/List_1__ctor_m2118976410_RuntimeMethod_var);
		__this->set_m_Parameters_0(L_0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Analytics.AnalyticsEventParam> UnityEngine.Analytics.AnalyticsEventParamListContainer::get_parameters()
extern "C" IL2CPP_METHOD_ATTR List_1_t3952196670 * AnalyticsEventParamListContainer_get_parameters_m4180299006 (AnalyticsEventParamListContainer_t587083383 * __this, const RuntimeMethod* method)
{
	List_1_t3952196670 * V_0 = NULL;
	{
		List_1_t3952196670 * L_0 = __this->get_m_Parameters_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		List_1_t3952196670 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsEventParamListContainer::set_parameters(System.Collections.Generic.List`1<UnityEngine.Analytics.AnalyticsEventParam>)
extern "C" IL2CPP_METHOD_ATTR void AnalyticsEventParamListContainer_set_parameters_m2253031841 (AnalyticsEventParamListContainer_t587083383 * __this, List_1_t3952196670 * ___value0, const RuntimeMethod* method)
{
	{
		List_1_t3952196670 * L_0 = ___value0;
		__this->set_m_Parameters_0(L_0);
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
// System.Void UnityEngine.Analytics.AnalyticsEventTracker::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AnalyticsEventTracker__ctor_m3064238498 (AnalyticsEventTracker_t2285229262 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnalyticsEventTracker__ctor_m3064238498_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventTrigger_t2527451695 * L_0 = (EventTrigger_t2527451695 *)il2cpp_codegen_object_new(EventTrigger_t2527451695_il2cpp_TypeInfo_var);
		EventTrigger__ctor_m3931360164(L_0, /*hidden argument*/NULL);
		__this->set_m_Trigger_4(L_0);
		StandardEventPayload_t1629891255 * L_1 = (StandardEventPayload_t1629891255 *)il2cpp_codegen_object_new(StandardEventPayload_t1629891255_il2cpp_TypeInfo_var);
		StandardEventPayload__ctor_m1676969451(L_1, /*hidden argument*/NULL);
		__this->set_m_EventPayload_5(L_1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Analytics.StandardEventPayload UnityEngine.Analytics.AnalyticsEventTracker::get_payload()
extern "C" IL2CPP_METHOD_ATTR StandardEventPayload_t1629891255 * AnalyticsEventTracker_get_payload_m308762692 (AnalyticsEventTracker_t2285229262 * __this, const RuntimeMethod* method)
{
	StandardEventPayload_t1629891255 * V_0 = NULL;
	{
		StandardEventPayload_t1629891255 * L_0 = __this->get_m_EventPayload_5();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		StandardEventPayload_t1629891255 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsEventTracker::TriggerEvent()
extern "C" IL2CPP_METHOD_ATTR void AnalyticsEventTracker_TriggerEvent_m860167642 (AnalyticsEventTracker_t2285229262 * __this, const RuntimeMethod* method)
{
	{
		AnalyticsEventTracker_SendEvent_m1365958832(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEventTracker::SendEvent()
extern "C" IL2CPP_METHOD_ATTR int32_t AnalyticsEventTracker_SendEvent_m1365958832 (AnalyticsEventTracker_t2285229262 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		EventTrigger_t2527451695 * L_0 = __this->get_m_Trigger_4();
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_2 = EventTrigger_Test_m2021527001(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		StandardEventPayload_t1629891255 * L_3 = AnalyticsEventTracker_get_payload_m308762692(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(4 /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.StandardEventPayload::Send() */, L_3);
		V_0 = L_4;
		goto IL_0030;
	}

IL_0029:
	{
		V_0 = 0;
		goto IL_0030;
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsEventTracker::Awake()
extern "C" IL2CPP_METHOD_ATTR void AnalyticsEventTracker_Awake_m2780522130 (AnalyticsEventTracker_t2285229262 * __this, const RuntimeMethod* method)
{
	{
		EventTrigger_t2527451695 * L_0 = __this->get_m_Trigger_4();
		NullCheck(L_0);
		int32_t L_1 = EventTrigger_get_triggerType_m4159785260(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_002b;
		}
	}
	{
		EventTrigger_t2527451695 * L_2 = __this->get_m_Trigger_4();
		NullCheck(L_2);
		int32_t L_3 = EventTrigger_get_lifecycleEvent_m3324346053(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_002b;
		}
	}
	{
		AnalyticsEventTracker_SendEvent_m1365958832(__this, /*hidden argument*/NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsEventTracker::Start()
extern "C" IL2CPP_METHOD_ATTR void AnalyticsEventTracker_Start_m1087627554 (AnalyticsEventTracker_t2285229262 * __this, const RuntimeMethod* method)
{
	{
		EventTrigger_t2527451695 * L_0 = __this->get_m_Trigger_4();
		NullCheck(L_0);
		int32_t L_1 = EventTrigger_get_triggerType_m4159785260(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0030;
		}
	}
	{
		EventTrigger_t2527451695 * L_2 = __this->get_m_Trigger_4();
		NullCheck(L_2);
		int32_t L_3 = EventTrigger_get_lifecycleEvent_m3324346053(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0030;
		}
	}
	{
		AnalyticsEventTracker_SendEvent_m1365958832(__this, /*hidden argument*/NULL);
		goto IL_0050;
	}

IL_0030:
	{
		EventTrigger_t2527451695 * L_4 = __this->get_m_Trigger_4();
		NullCheck(L_4);
		int32_t L_5 = EventTrigger_get_triggerType_m4159785260(L_4, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_6 = AnalyticsEventTracker_TimedTrigger_m758162441(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_6, /*hidden argument*/NULL);
	}

IL_0050:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsEventTracker::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void AnalyticsEventTracker_OnEnable_m1121905268 (AnalyticsEventTracker_t2285229262 * __this, const RuntimeMethod* method)
{
	{
		EventTrigger_t2527451695 * L_0 = __this->get_m_Trigger_4();
		NullCheck(L_0);
		int32_t L_1 = EventTrigger_get_triggerType_m4159785260(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_002b;
		}
	}
	{
		EventTrigger_t2527451695 * L_2 = __this->get_m_Trigger_4();
		NullCheck(L_2);
		int32_t L_3 = EventTrigger_get_lifecycleEvent_m3324346053(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)3))))
		{
			goto IL_002b;
		}
	}
	{
		AnalyticsEventTracker_SendEvent_m1365958832(__this, /*hidden argument*/NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsEventTracker::OnDisable()
extern "C" IL2CPP_METHOD_ATTR void AnalyticsEventTracker_OnDisable_m1553012800 (AnalyticsEventTracker_t2285229262 * __this, const RuntimeMethod* method)
{
	{
		EventTrigger_t2527451695 * L_0 = __this->get_m_Trigger_4();
		NullCheck(L_0);
		int32_t L_1 = EventTrigger_get_triggerType_m4159785260(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_002b;
		}
	}
	{
		EventTrigger_t2527451695 * L_2 = __this->get_m_Trigger_4();
		NullCheck(L_2);
		int32_t L_3 = EventTrigger_get_lifecycleEvent_m3324346053(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)4))))
		{
			goto IL_002b;
		}
	}
	{
		AnalyticsEventTracker_SendEvent_m1365958832(__this, /*hidden argument*/NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsEventTracker::OnApplicationPause(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AnalyticsEventTracker_OnApplicationPause_m2936008520 (AnalyticsEventTracker_t2285229262 * __this, bool ___paused0, const RuntimeMethod* method)
{
	{
		EventTrigger_t2527451695 * L_0 = __this->get_m_Trigger_4();
		NullCheck(L_0);
		int32_t L_1 = EventTrigger_get_triggerType_m4159785260(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0058;
		}
	}
	{
		bool L_2 = ___paused0;
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		EventTrigger_t2527451695 * L_3 = __this->get_m_Trigger_4();
		NullCheck(L_3);
		int32_t L_4 = EventTrigger_get_lifecycleEvent_m3324346053(L_3, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)5))))
		{
			goto IL_0037;
		}
	}
	{
		AnalyticsEventTracker_SendEvent_m1365958832(__this, /*hidden argument*/NULL);
		goto IL_0057;
	}

IL_0037:
	{
		bool L_5 = ___paused0;
		if (L_5)
		{
			goto IL_0057;
		}
	}
	{
		EventTrigger_t2527451695 * L_6 = __this->get_m_Trigger_4();
		NullCheck(L_6);
		int32_t L_7 = EventTrigger_get_lifecycleEvent_m3324346053(L_6, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)6))))
		{
			goto IL_0057;
		}
	}
	{
		AnalyticsEventTracker_SendEvent_m1365958832(__this, /*hidden argument*/NULL);
	}

IL_0057:
	{
	}

IL_0058:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsEventTracker::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void AnalyticsEventTracker_OnDestroy_m3032713758 (AnalyticsEventTracker_t2285229262 * __this, const RuntimeMethod* method)
{
	{
		EventTrigger_t2527451695 * L_0 = __this->get_m_Trigger_4();
		NullCheck(L_0);
		int32_t L_1 = EventTrigger_get_triggerType_m4159785260(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_002b;
		}
	}
	{
		EventTrigger_t2527451695 * L_2 = __this->get_m_Trigger_4();
		NullCheck(L_2);
		int32_t L_3 = EventTrigger_get_lifecycleEvent_m3324346053(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)7))))
		{
			goto IL_002b;
		}
	}
	{
		AnalyticsEventTracker_SendEvent_m1365958832(__this, /*hidden argument*/NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Collections.IEnumerator UnityEngine.Analytics.AnalyticsEventTracker::TimedTrigger()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* AnalyticsEventTracker_TimedTrigger_m758162441 (AnalyticsEventTracker_t2285229262 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnalyticsEventTracker_TimedTrigger_m758162441_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CTimedTriggerU3Ec__Iterator0_t3813435494 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		U3CTimedTriggerU3Ec__Iterator0_t3813435494 * L_0 = (U3CTimedTriggerU3Ec__Iterator0_t3813435494 *)il2cpp_codegen_object_new(U3CTimedTriggerU3Ec__Iterator0_t3813435494_il2cpp_TypeInfo_var);
		U3CTimedTriggerU3Ec__Iterator0__ctor_m375484522(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CTimedTriggerU3Ec__Iterator0_t3813435494 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_0(__this);
		U3CTimedTriggerU3Ec__Iterator0_t3813435494 * L_2 = V_0;
		V_1 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		RuntimeObject* L_3 = V_1;
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
// System.Void UnityEngine.Analytics.AnalyticsEventTracker/<TimedTrigger>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CTimedTriggerU3Ec__Iterator0__ctor_m375484522 (U3CTimedTriggerU3Ec__Iterator0_t3813435494 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Analytics.AnalyticsEventTracker/<TimedTrigger>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CTimedTriggerU3Ec__Iterator0_MoveNext_m825792986 (U3CTimedTriggerU3Ec__Iterator0_t3813435494 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CTimedTriggerU3Ec__Iterator0_MoveNext_m825792986_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0029;
			}
			case 1:
			{
				goto IL_0074;
			}
			case 2:
			{
				goto IL_00d1;
			}
			case 3:
			{
				goto IL_00f3;
			}
		}
	}
	{
		goto IL_0142;
	}

IL_0029:
	{
		AnalyticsEventTracker_t2285229262 * L_2 = __this->get_U24this_0();
		NullCheck(L_2);
		EventTrigger_t2527451695 * L_3 = L_2->get_m_Trigger_4();
		NullCheck(L_3);
		float L_4 = EventTrigger_get_initTime_m3511193067(L_3, /*hidden argument*/NULL);
		if ((!(((float)L_4) > ((float)(0.0f)))))
		{
			goto IL_0075;
		}
	}
	{
		AnalyticsEventTracker_t2285229262 * L_5 = __this->get_U24this_0();
		NullCheck(L_5);
		EventTrigger_t2527451695 * L_6 = L_5->get_m_Trigger_4();
		NullCheck(L_6);
		float L_7 = EventTrigger_get_initTime_m3511193067(L_6, /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_8 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_8, L_7, /*hidden argument*/NULL);
		__this->set_U24current_1(L_8);
		bool L_9 = __this->get_U24disposing_2();
		if (L_9)
		{
			goto IL_006f;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_006f:
	{
		goto IL_0144;
	}

IL_0074:
	{
	}

IL_0075:
	{
		AnalyticsEventTracker_t2285229262 * L_10 = __this->get_U24this_0();
		NullCheck(L_10);
		AnalyticsEventTracker_SendEvent_m1365958832(L_10, /*hidden argument*/NULL);
		goto IL_0101;
	}

IL_0086:
	{
		AnalyticsEventTracker_t2285229262 * L_11 = __this->get_U24this_0();
		NullCheck(L_11);
		EventTrigger_t2527451695 * L_12 = L_11->get_m_Trigger_4();
		NullCheck(L_12);
		float L_13 = EventTrigger_get_repeatTime_m1602140789(L_12, /*hidden argument*/NULL);
		if ((!(((float)L_13) > ((float)(0.0f)))))
		{
			goto IL_00d7;
		}
	}
	{
		AnalyticsEventTracker_t2285229262 * L_14 = __this->get_U24this_0();
		NullCheck(L_14);
		EventTrigger_t2527451695 * L_15 = L_14->get_m_Trigger_4();
		NullCheck(L_15);
		float L_16 = EventTrigger_get_repeatTime_m1602140789(L_15, /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_17 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_17, L_16, /*hidden argument*/NULL);
		__this->set_U24current_1(L_17);
		bool L_18 = __this->get_U24disposing_2();
		if (L_18)
		{
			goto IL_00cc;
		}
	}
	{
		__this->set_U24PC_3(2);
	}

IL_00cc:
	{
		goto IL_0144;
	}

IL_00d1:
	{
		goto IL_00f4;
	}

IL_00d7:
	{
		__this->set_U24current_1(NULL);
		bool L_19 = __this->get_U24disposing_2();
		if (L_19)
		{
			goto IL_00ee;
		}
	}
	{
		__this->set_U24PC_3(3);
	}

IL_00ee:
	{
		goto IL_0144;
	}

IL_00f3:
	{
	}

IL_00f4:
	{
		AnalyticsEventTracker_t2285229262 * L_20 = __this->get_U24this_0();
		NullCheck(L_20);
		AnalyticsEventTracker_SendEvent_m1365958832(L_20, /*hidden argument*/NULL);
	}

IL_0101:
	{
		AnalyticsEventTracker_t2285229262 * L_21 = __this->get_U24this_0();
		NullCheck(L_21);
		EventTrigger_t2527451695 * L_22 = L_21->get_m_Trigger_4();
		NullCheck(L_22);
		int32_t L_23 = EventTrigger_get_repetitions_m2606968061(L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0086;
		}
	}
	{
		AnalyticsEventTracker_t2285229262 * L_24 = __this->get_U24this_0();
		NullCheck(L_24);
		EventTrigger_t2527451695 * L_25 = L_24->get_m_Trigger_4();
		NullCheck(L_25);
		int32_t L_26 = L_25->get_repetitionCount_9();
		AnalyticsEventTracker_t2285229262 * L_27 = __this->get_U24this_0();
		NullCheck(L_27);
		EventTrigger_t2527451695 * L_28 = L_27->get_m_Trigger_4();
		NullCheck(L_28);
		int32_t L_29 = EventTrigger_get_repetitions_m2606968061(L_28, /*hidden argument*/NULL);
		if ((((int32_t)L_26) <= ((int32_t)L_29)))
		{
			goto IL_0086;
		}
	}
	{
		__this->set_U24PC_3((-1));
	}

IL_0142:
	{
		return (bool)0;
	}

IL_0144:
	{
		return (bool)1;
	}
}
// System.Object UnityEngine.Analytics.AnalyticsEventTracker/<TimedTrigger>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CTimedTriggerU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3822291412 (U3CTimedTriggerU3Ec__Iterator0_t3813435494 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject * L_1 = V_0;
		return L_1;
	}
}
// System.Object UnityEngine.Analytics.AnalyticsEventTracker/<TimedTrigger>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CTimedTriggerU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m4218891528 (U3CTimedTriggerU3Ec__Iterator0_t3813435494 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsEventTracker/<TimedTrigger>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CTimedTriggerU3Ec__Iterator0_Dispose_m3542186276 (U3CTimedTriggerU3Ec__Iterator0_t3813435494 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsEventTracker/<TimedTrigger>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CTimedTriggerU3Ec__Iterator0_Reset_m1406161701 (U3CTimedTriggerU3Ec__Iterator0_t3813435494 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CTimedTriggerU3Ec__Iterator0_Reset_m1406161701_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CTimedTriggerU3Ec__Iterator0_Reset_m1406161701_RuntimeMethod_var);
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
// System.Void UnityEngine.Analytics.AnalyticsEventTrackerSettings::.cctor()
extern "C" IL2CPP_METHOD_ATTR void AnalyticsEventTrackerSettings__cctor_m99217142 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnalyticsEventTrackerSettings__cctor_m99217142_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((AnalyticsEventTrackerSettings_t480422680_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsEventTrackerSettings_t480422680_il2cpp_TypeInfo_var))->set_paramCountMax_0(((int32_t)10));
		((AnalyticsEventTrackerSettings_t480422680_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsEventTrackerSettings_t480422680_il2cpp_TypeInfo_var))->set_triggerRuleCountMax_1(5);
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
// System.Void UnityEngine.Analytics.AnalyticsTracker::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AnalyticsTracker__ctor_m3762295226 (AnalyticsTracker_t731021378 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnalyticsTracker__ctor_m3762295226_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2865362463 * L_0 = (Dictionary_2_t2865362463 *)il2cpp_codegen_object_new(Dictionary_2_t2865362463_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1476497131(L_0, /*hidden argument*/Dictionary_2__ctor_m1476497131_RuntimeMethod_var);
		__this->set_m_Dict_5(L_0);
		__this->set_m_PrevDictHash_6(0);
		TrackableProperty_t3943537984 * L_1 = (TrackableProperty_t3943537984 *)il2cpp_codegen_object_new(TrackableProperty_t3943537984_il2cpp_TypeInfo_var);
		TrackableProperty__ctor_m29288901(L_1, /*hidden argument*/NULL);
		__this->set_m_TrackableProperty_7(L_1);
		__this->set_m_Trigger_8(0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Analytics.AnalyticsTracker::get_eventName()
extern "C" IL2CPP_METHOD_ATTR String_t* AnalyticsTracker_get_eventName_m2051345506 (AnalyticsTracker_t731021378 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_EventName_4();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::set_eventName(System.String)
extern "C" IL2CPP_METHOD_ATTR void AnalyticsTracker_set_eventName_m370326070 (AnalyticsTracker_t731021378 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_m_EventName_4(L_0);
		return;
	}
}
// UnityEngine.Analytics.TrackableProperty UnityEngine.Analytics.AnalyticsTracker::get_TP()
extern "C" IL2CPP_METHOD_ATTR TrackableProperty_t3943537984 * AnalyticsTracker_get_TP_m2800669040 (AnalyticsTracker_t731021378 * __this, const RuntimeMethod* method)
{
	TrackableProperty_t3943537984 * V_0 = NULL;
	{
		TrackableProperty_t3943537984 * L_0 = __this->get_m_TrackableProperty_7();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		TrackableProperty_t3943537984 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::set_TP(UnityEngine.Analytics.TrackableProperty)
extern "C" IL2CPP_METHOD_ATTR void AnalyticsTracker_set_TP_m4206182699 (AnalyticsTracker_t731021378 * __this, TrackableProperty_t3943537984 * ___value0, const RuntimeMethod* method)
{
	{
		TrackableProperty_t3943537984 * L_0 = ___value0;
		__this->set_m_TrackableProperty_7(L_0);
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::Awake()
extern "C" IL2CPP_METHOD_ATTR void AnalyticsTracker_Awake_m2774678677 (AnalyticsTracker_t731021378 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Trigger_8();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		AnalyticsTracker_TriggerEvent_m2244736785(__this, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::Start()
extern "C" IL2CPP_METHOD_ATTR void AnalyticsTracker_Start_m3944341596 (AnalyticsTracker_t731021378 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Trigger_8();
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0015;
		}
	}
	{
		AnalyticsTracker_TriggerEvent_m2244736785(__this, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void AnalyticsTracker_OnEnable_m175592117 (AnalyticsTracker_t731021378 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Trigger_8();
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_0015;
		}
	}
	{
		AnalyticsTracker_TriggerEvent_m2244736785(__this, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::OnDisable()
extern "C" IL2CPP_METHOD_ATTR void AnalyticsTracker_OnDisable_m2584849643 (AnalyticsTracker_t731021378 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Trigger_8();
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0015;
		}
	}
	{
		AnalyticsTracker_TriggerEvent_m2244736785(__this, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::OnApplicationPause()
extern "C" IL2CPP_METHOD_ATTR void AnalyticsTracker_OnApplicationPause_m2421888091 (AnalyticsTracker_t731021378 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Trigger_8();
		if ((!(((uint32_t)L_0) == ((uint32_t)5))))
		{
			goto IL_0015;
		}
	}
	{
		AnalyticsTracker_TriggerEvent_m2244736785(__this, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void AnalyticsTracker_OnDestroy_m3072032071 (AnalyticsTracker_t731021378 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Trigger_8();
		if ((!(((uint32_t)L_0) == ((uint32_t)6))))
		{
			goto IL_0015;
		}
	}
	{
		AnalyticsTracker_TriggerEvent_m2244736785(__this, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::TriggerEvent()
extern "C" IL2CPP_METHOD_ATTR void AnalyticsTracker_TriggerEvent_m2244736785 (AnalyticsTracker_t731021378 * __this, const RuntimeMethod* method)
{
	{
		AnalyticsTracker_BuildParameters_m43920649(__this, /*hidden argument*/NULL);
		AnalyticsTracker_SendEvent_m2955089255(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::SendEvent()
extern "C" IL2CPP_METHOD_ATTR void AnalyticsTracker_SendEvent_m2955089255 (AnalyticsTracker_t731021378 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_m_EventName_4();
		Dictionary_2_t2865362463 * L_1 = __this->get_m_Dict_5();
		Analytics_CustomEvent_m3835919949(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::BuildParameters()
extern "C" IL2CPP_METHOD_ATTR void AnalyticsTracker_BuildParameters_m43920649 (AnalyticsTracker_t731021378 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnalyticsTracker_BuildParameters_m43920649_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	FieldWithTarget_t3058750293 * V_3 = NULL;
	String_t* V_4 = NULL;
	{
		TrackableProperty_t3943537984 * L_0 = __this->get_m_TrackableProperty_7();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->get_m_PrevDictHash_6();
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0024;
		}
	}
	{
		Dictionary_2_t2865362463 * L_4 = __this->get_m_Dict_5();
		NullCheck(L_4);
		Dictionary_2_Clear_m3181358953(L_4, /*hidden argument*/Dictionary_2_Clear_m3181358953_RuntimeMethod_var);
	}

IL_0024:
	{
		int32_t L_5 = V_0;
		__this->set_m_PrevDictHash_6(L_5);
		V_1 = 0;
		TrackableProperty_t3943537984 * L_6 = __this->get_m_TrackableProperty_7();
		NullCheck(L_6);
		List_1_t235857739 * L_7 = TrackableProperty_get_fields_m3682628132(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8 = List_1_get_Count_m3935023107(L_7, /*hidden argument*/List_1_get_Count_m3935023107_RuntimeMethod_var);
		V_2 = L_8;
		goto IL_0099;
	}

IL_0043:
	{
		TrackableProperty_t3943537984 * L_9 = __this->get_m_TrackableProperty_7();
		NullCheck(L_9);
		List_1_t235857739 * L_10 = TrackableProperty_get_fields_m3682628132(L_9, /*hidden argument*/NULL);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		FieldWithTarget_t3058750293 * L_12 = List_1_get_Item_m1027239081(L_10, L_11, /*hidden argument*/List_1_get_Item_m1027239081_RuntimeMethod_var);
		V_3 = L_12;
		FieldWithTarget_t3058750293 * L_13 = V_3;
		NullCheck(L_13);
		Object_t631007953 * L_14 = FieldWithTarget_get_target_m2252597932(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_15 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_14, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0072;
		}
	}
	{
		FieldWithTarget_t3058750293 * L_16 = V_3;
		NullCheck(L_16);
		bool L_17 = FieldWithTarget_get_doStatic_m1956244749(L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0094;
		}
	}

IL_0072:
	{
		FieldWithTarget_t3058750293 * L_18 = V_3;
		NullCheck(L_18);
		RuntimeObject * L_19 = FieldWithTarget_GetValue_m2315870500(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		String_t* L_20 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_19);
		V_4 = L_20;
		Dictionary_2_t2865362463 * L_21 = __this->get_m_Dict_5();
		FieldWithTarget_t3058750293 * L_22 = V_3;
		NullCheck(L_22);
		String_t* L_23 = FieldWithTarget_get_paramName_m3501478659(L_22, /*hidden argument*/NULL);
		String_t* L_24 = V_4;
		NullCheck(L_21);
		Dictionary_2_set_Item_m1535556385(L_21, L_23, L_24, /*hidden argument*/Dictionary_2_set_Item_m1535556385_RuntimeMethod_var);
	}

IL_0094:
	{
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_0099:
	{
		int32_t L_26 = V_1;
		int32_t L_27 = V_2;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_0043;
		}
	}
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Analytics.EventTrigger::.ctor()
extern "C" IL2CPP_METHOD_ATTR void EventTrigger__ctor_m3931360164 (EventTrigger_t2527451695 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventTrigger__ctor_m3931360164_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_IsTriggerExpanded_0((bool)1);
		__this->set_m_ApplyRules_3((bool)0);
		__this->set_m_TriggerBool_5(0);
		__this->set_m_InitTime_6((5.0f));
		__this->set_m_RepeatTime_7((5.0f));
		__this->set_m_Repetitions_8(0);
		__this->set_repetitionCount_9(0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		TriggerListContainer_t2032715483 * L_0 = (TriggerListContainer_t2032715483 *)il2cpp_codegen_object_new(TriggerListContainer_t2032715483_il2cpp_TypeInfo_var);
		TriggerListContainer__ctor_m1390596431(L_0, /*hidden argument*/NULL);
		__this->set_m_Rules_4(L_0);
		return;
	}
}
// UnityEngine.Analytics.TriggerType UnityEngine.Analytics.EventTrigger::get_triggerType()
extern "C" IL2CPP_METHOD_ATTR int32_t EventTrigger_get_triggerType_m4159785260 (EventTrigger_t2527451695 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Type_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Analytics.TriggerLifecycleEvent UnityEngine.Analytics.EventTrigger::get_lifecycleEvent()
extern "C" IL2CPP_METHOD_ATTR int32_t EventTrigger_get_lifecycleEvent_m3324346053 (EventTrigger_t2527451695 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_LifecycleEvent_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Single UnityEngine.Analytics.EventTrigger::get_initTime()
extern "C" IL2CPP_METHOD_ATTR float EventTrigger_get_initTime_m3511193067 (EventTrigger_t2527451695 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_InitTime_6();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Analytics.EventTrigger::set_initTime(System.Single)
extern "C" IL2CPP_METHOD_ATTR void EventTrigger_set_initTime_m3128947762 (EventTrigger_t2527451695 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_m_InitTime_6(L_0);
		return;
	}
}
// System.Single UnityEngine.Analytics.EventTrigger::get_repeatTime()
extern "C" IL2CPP_METHOD_ATTR float EventTrigger_get_repeatTime_m1602140789 (EventTrigger_t2527451695 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_RepeatTime_7();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Analytics.EventTrigger::set_repeatTime(System.Single)
extern "C" IL2CPP_METHOD_ATTR void EventTrigger_set_repeatTime_m1188543944 (EventTrigger_t2527451695 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_m_RepeatTime_7(L_0);
		return;
	}
}
// System.Int32 UnityEngine.Analytics.EventTrigger::get_repetitions()
extern "C" IL2CPP_METHOD_ATTR int32_t EventTrigger_get_repetitions_m2606968061 (EventTrigger_t2527451695 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Repetitions_8();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Analytics.EventTrigger::set_repetitions(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void EventTrigger_set_repetitions_m1079340996 (EventTrigger_t2527451695 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_Repetitions_8(L_0);
		return;
	}
}
// System.Void UnityEngine.Analytics.EventTrigger::AddRule()
extern "C" IL2CPP_METHOD_ATTR void EventTrigger_AddRule_m2980113967 (EventTrigger_t2527451695 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventTrigger_AddRule_m2980113967_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TriggerRule_t1946298321 * V_0 = NULL;
	{
		TriggerRule_t1946298321 * L_0 = (TriggerRule_t1946298321 *)il2cpp_codegen_object_new(TriggerRule_t1946298321_il2cpp_TypeInfo_var);
		TriggerRule__ctor_m225466603(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		TriggerListContainer_t2032715483 * L_1 = __this->get_m_Rules_4();
		NullCheck(L_1);
		List_1_t3418373063 * L_2 = TriggerListContainer_get_rules_m110726358(L_1, /*hidden argument*/NULL);
		TriggerRule_t1946298321 * L_3 = V_0;
		NullCheck(L_2);
		List_1_Add_m1771611534(L_2, L_3, /*hidden argument*/List_1_Add_m1771611534_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.Analytics.EventTrigger::RemoveRule(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void EventTrigger_RemoveRule_m1596811726 (EventTrigger_t2527451695 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventTrigger_RemoveRule_m1596811726_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TriggerListContainer_t2032715483 * L_0 = __this->get_m_Rules_4();
		NullCheck(L_0);
		List_1_t3418373063 * L_1 = TriggerListContainer_get_rules_m110726358(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___index0;
		NullCheck(L_1);
		List_1_RemoveAt_m2483907692(L_1, L_2, /*hidden argument*/List_1_RemoveAt_m2483907692_RuntimeMethod_var);
		return;
	}
}
// System.Boolean UnityEngine.Analytics.EventTrigger::Test(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR bool EventTrigger_Test_m2021527001 (EventTrigger_t2527451695 * __this, GameObject_t1113636619 * ___gameObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventTrigger_Test_m2021527001_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	TriggerRule_t1946298321 * V_4 = NULL;
	Enumerator_t1012649644  V_5;
	memset(&V_5, 0, sizeof(V_5));
	bool V_6 = false;
	String_t* V_7 = NULL;
	int32_t V_8 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B12_0 = 0;
	ObjectU5BU5D_t2843939325* G_B12_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B12_2 = NULL;
	String_t* G_B12_3 = NULL;
	int32_t G_B11_0 = 0;
	ObjectU5BU5D_t2843939325* G_B11_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B11_2 = NULL;
	String_t* G_B11_3 = NULL;
	String_t* G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	ObjectU5BU5D_t2843939325* G_B13_2 = NULL;
	ObjectU5BU5D_t2843939325* G_B13_3 = NULL;
	String_t* G_B13_4 = NULL;
	{
		bool L_0 = __this->get_m_ApplyRules_3();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		V_0 = (bool)1;
		goto IL_019d;
	}

IL_0014:
	{
		int32_t L_1 = EventTrigger_get_repetitions_m2606968061(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_2 = __this->get_repetitionCount_9();
		int32_t L_3 = EventTrigger_get_repetitions_m2606968061(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_0039;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_019d;
	}

IL_0039:
	{
		V_1 = (bool)0;
		V_2 = 0;
		V_3 = 0;
		TriggerListContainer_t2032715483 * L_4 = __this->get_m_Rules_4();
		NullCheck(L_4);
		List_1_t3418373063 * L_5 = TriggerListContainer_get_rules_m110726358(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Enumerator_t1012649644  L_6 = List_1_GetEnumerator_m1143297947(L_5, /*hidden argument*/List_1_GetEnumerator_m1143297947_RuntimeMethod_var);
		V_5 = L_6;
	}

IL_0052:
	try
	{ // begin try (depth: 1)
		{
			goto IL_012d;
		}

IL_0057:
		{
			TriggerRule_t1946298321 * L_7 = Enumerator_get_Current_m3796810840((Enumerator_t1012649644 *)(&V_5), /*hidden argument*/Enumerator_get_Current_m3796810840_RuntimeMethod_var);
			V_4 = L_7;
			int32_t L_8 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
			TriggerRule_t1946298321 * L_9 = V_4;
			NullCheck(L_9);
			bool L_10 = TriggerRule_Test_m3134988565(L_9, (bool*)(&V_6), (String_t**)(&V_7), /*hidden argument*/NULL);
			if (!L_10)
			{
				goto IL_0080;
			}
		}

IL_0075:
		{
			int32_t L_11 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
			goto IL_00cc;
		}

IL_0080:
		{
			bool L_12 = V_6;
			if (!L_12)
			{
				goto IL_00cc;
			}
		}

IL_0087:
		{
			ObjectU5BU5D_t2843939325* L_13 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)3);
			ObjectU5BU5D_t2843939325* L_14 = L_13;
			int32_t L_15 = V_3;
			int32_t L_16 = L_15;
			RuntimeObject * L_17 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_16);
			NullCheck(L_14);
			ArrayElementTypeCheck (L_14, L_17);
			(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_17);
			ObjectU5BU5D_t2843939325* L_18 = L_14;
			String_t* L_19 = V_7;
			NullCheck(L_18);
			ArrayElementTypeCheck (L_18, L_19);
			(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_19);
			ObjectU5BU5D_t2843939325* L_20 = L_18;
			GameObject_t1113636619 * L_21 = ___gameObject0;
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_22 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_21, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
			G_B11_0 = 2;
			G_B11_1 = L_20;
			G_B11_2 = L_20;
			G_B11_3 = _stringLiteral3578372784;
			if (!L_22)
			{
				G_B12_0 = 2;
				G_B12_1 = L_20;
				G_B12_2 = L_20;
				G_B12_3 = _stringLiteral3578372784;
				goto IL_00b5;
			}
		}

IL_00af:
		{
			G_B13_0 = ((String_t*)(NULL));
			G_B13_1 = G_B11_0;
			G_B13_2 = G_B11_1;
			G_B13_3 = G_B11_2;
			G_B13_4 = G_B11_3;
			goto IL_00c5;
		}

IL_00b5:
		{
			GameObject_t1113636619 * L_23 = ___gameObject0;
			NullCheck(L_23);
			String_t* L_24 = Object_get_name_m4211327027(L_23, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_25 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral4288880708, L_24, /*hidden argument*/NULL);
			G_B13_0 = L_25;
			G_B13_1 = G_B12_0;
			G_B13_2 = G_B12_1;
			G_B13_3 = G_B12_2;
			G_B13_4 = G_B12_3;
		}

IL_00c5:
		{
			NullCheck(G_B13_2);
			ArrayElementTypeCheck (G_B13_2, G_B13_0);
			(G_B13_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B13_1), (RuntimeObject *)G_B13_0);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_LogWarningFormat_m2535776735(NULL /*static, unused*/, G_B13_4, G_B13_3, /*hidden argument*/NULL);
		}

IL_00cc:
		{
			int32_t L_26 = __this->get_m_TriggerBool_5();
			V_8 = L_26;
			int32_t L_27 = V_8;
			if (!L_27)
			{
				goto IL_00f0;
			}
		}

IL_00db:
		{
			int32_t L_28 = V_8;
			if ((((int32_t)L_28) == ((int32_t)2)))
			{
				goto IL_0104;
			}
		}

IL_00e3:
		{
			int32_t L_29 = V_8;
			if ((((int32_t)L_29) == ((int32_t)1)))
			{
				goto IL_0118;
			}
		}

IL_00eb:
		{
			goto IL_012c;
		}

IL_00f0:
		{
			int32_t L_30 = V_2;
			int32_t L_31 = V_3;
			if ((((int32_t)L_30) >= ((int32_t)L_31)))
			{
				goto IL_00ff;
			}
		}

IL_00f7:
		{
			V_1 = (bool)0;
			goto IL_012c;
		}

IL_00ff:
		{
			goto IL_012c;
		}

IL_0104:
		{
			int32_t L_32 = V_2;
			if ((((int32_t)L_32) <= ((int32_t)0)))
			{
				goto IL_0113;
			}
		}

IL_010b:
		{
			V_1 = (bool)0;
			goto IL_012c;
		}

IL_0113:
		{
			goto IL_012c;
		}

IL_0118:
		{
			int32_t L_33 = V_2;
			if ((((int32_t)L_33) <= ((int32_t)0)))
			{
				goto IL_0127;
			}
		}

IL_011f:
		{
			V_1 = (bool)1;
			goto IL_012c;
		}

IL_0127:
		{
			goto IL_012c;
		}

IL_012c:
		{
		}

IL_012d:
		{
			bool L_34 = Enumerator_MoveNext_m528544069((Enumerator_t1012649644 *)(&V_5), /*hidden argument*/Enumerator_MoveNext_m528544069_RuntimeMethod_var);
			if (L_34)
			{
				goto IL_0057;
			}
		}

IL_0139:
		{
			IL2CPP_LEAVE(0x14C, FINALLY_013e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_013e;
	}

FINALLY_013e:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2918142462((Enumerator_t1012649644 *)(&V_5), /*hidden argument*/Enumerator_Dispose_m2918142462_RuntimeMethod_var);
		IL2CPP_END_FINALLY(318)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(318)
	{
		IL2CPP_JUMP_TBL(0x14C, IL_014c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_014c:
	{
		int32_t L_35 = __this->get_m_TriggerBool_5();
		if (L_35)
		{
			goto IL_015e;
		}
	}
	{
		int32_t L_36 = V_2;
		int32_t L_37 = V_3;
		if ((((int32_t)L_36) == ((int32_t)L_37)))
		{
			goto IL_0170;
		}
	}

IL_015e:
	{
		int32_t L_38 = __this->get_m_TriggerBool_5();
		if ((!(((uint32_t)L_38) == ((uint32_t)2))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_39 = V_2;
		if (L_39)
		{
			goto IL_0174;
		}
	}

IL_0170:
	{
		V_1 = (bool)1;
	}

IL_0174:
	{
		int32_t L_40 = EventTrigger_get_repetitions_m2606968061(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_40) <= ((int32_t)0)))
		{
			goto IL_0196;
		}
	}
	{
		bool L_41 = V_1;
		if (!L_41)
		{
			goto IL_0196;
		}
	}
	{
		int32_t L_42 = __this->get_repetitionCount_9();
		__this->set_repetitionCount_9(((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1)));
	}

IL_0196:
	{
		bool L_43 = V_1;
		V_0 = L_43;
		goto IL_019d;
	}

IL_019d:
	{
		bool L_44 = V_0;
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
extern "C"  void DelegatePInvokeWrapper_OnTrigger_t4184125570 (OnTrigger_t4184125570 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.Analytics.EventTrigger/OnTrigger::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnTrigger__ctor_m2072368789 (OnTrigger_t4184125570 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Analytics.EventTrigger/OnTrigger::Invoke()
extern "C" IL2CPP_METHOD_ATTR void OnTrigger_Invoke_m2120872091 (OnTrigger_t4184125570 * __this, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		OnTrigger_Invoke_m2120872091((OnTrigger_t4184125570 *)__this->get_prev_9(), method);
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
// System.IAsyncResult UnityEngine.Analytics.EventTrigger/OnTrigger::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OnTrigger_BeginInvoke_m1406677296 (OnTrigger_t4184125570 * __this, AsyncCallback_t3962456242 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void UnityEngine.Analytics.EventTrigger/OnTrigger::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OnTrigger_EndInvoke_m1076439436 (OnTrigger_t4184125570 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Analytics.StandardEventPayload::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StandardEventPayload__ctor_m1676969451 (StandardEventPayload_t1629891255 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandardEventPayload__ctor_m1676969451_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_IsEventExpanded_0((bool)1);
		__this->set_m_StandardEventType_1(_stringLiteral1935206035);
		__this->set_m_Name_5(_stringLiteral757602046);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		AnalyticsEventParamListContainer_t587083383 * L_0 = (AnalyticsEventParamListContainer_t587083383 *)il2cpp_codegen_object_new(AnalyticsEventParamListContainer_t587083383_il2cpp_TypeInfo_var);
		AnalyticsEventParamListContainer__ctor_m1995104893(L_0, /*hidden argument*/NULL);
		__this->set_m_Parameters_3(L_0);
		return;
	}
}
// UnityEngine.Analytics.AnalyticsEventParamListContainer UnityEngine.Analytics.StandardEventPayload::get_parameters()
extern "C" IL2CPP_METHOD_ATTR AnalyticsEventParamListContainer_t587083383 * StandardEventPayload_get_parameters_m4209814697 (StandardEventPayload_t1629891255 * __this, const RuntimeMethod* method)
{
	AnalyticsEventParamListContainer_t587083383 * V_0 = NULL;
	{
		AnalyticsEventParamListContainer_t587083383 * L_0 = __this->get_m_Parameters_3();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		AnalyticsEventParamListContainer_t587083383 * L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Analytics.StandardEventPayload::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* StandardEventPayload_get_name_m1853779774 (StandardEventPayload_t1629891255 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_Name_5();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Analytics.StandardEventPayload::set_name(System.String)
extern "C" IL2CPP_METHOD_ATTR void StandardEventPayload_set_name_m549984672 (StandardEventPayload_t1629891255 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_m_Name_5(L_0);
		return;
	}
}
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.StandardEventPayload::Send()
extern "C" IL2CPP_METHOD_ATTR int32_t StandardEventPayload_Send_m3454575092 (StandardEventPayload_t1629891255 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandardEventPayload_Send_m3454575092_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0 = StandardEventPayload_get_name_m1853779774(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Exception_t * L_2 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_2, _stringLiteral3109170590, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, StandardEventPayload_Send_m3454575092_RuntimeMethod_var);
	}

IL_001d:
	{
		bool L_3 = StandardEventPayload_IsCustomDataValid_m922891381(__this, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0034;
		}
	}
	{
		Exception_t * L_4 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_4, _stringLiteral892740262, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, StandardEventPayload_Send_m3454575092_RuntimeMethod_var);
	}

IL_0034:
	{
		bool L_5 = StandardEventPayload_IsRequiredDataValid_m361738930(__this, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_004b;
		}
	}
	{
		Exception_t * L_6 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_6, _stringLiteral1762375535, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, StandardEventPayload_Send_m3454575092_RuntimeMethod_var);
	}

IL_004b:
	{
		String_t* L_7 = StandardEventPayload_get_name_m1853779774(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_8 = String_Trim_m923598732(L_7, /*hidden argument*/NULL);
		RuntimeObject* L_9 = StandardEventPayload_GetParameters_m2672427676(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AnalyticsEvent_t4058973021_il2cpp_TypeInfo_var);
		int32_t L_10 = AnalyticsEvent_Custom_m227997836(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		goto IL_0067;
	}

IL_0067:
	{
		int32_t L_11 = V_0;
		return L_11;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Object> UnityEngine.Analytics.StandardEventPayload::GetParameters()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* StandardEventPayload_GetParameters_m2672427676 (StandardEventPayload_t1629891255 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandardEventPayload_GetParameters_m2672427676_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3952196670 * V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(StandardEventPayload_t1629891255_il2cpp_TypeInfo_var);
		Dictionary_2_t2865362463 * L_0 = ((StandardEventPayload_t1629891255_StaticFields*)il2cpp_codegen_static_fields_for(StandardEventPayload_t1629891255_il2cpp_TypeInfo_var))->get_m_EventData_4();
		NullCheck(L_0);
		Dictionary_2_Clear_m3181358953(L_0, /*hidden argument*/Dictionary_2_Clear_m3181358953_RuntimeMethod_var);
		AnalyticsEventParamListContainer_t587083383 * L_1 = StandardEventPayload_get_parameters_m4209814697(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		List_1_t3952196670 * L_2 = AnalyticsEventParamListContainer_get_parameters_m4180299006(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_006a;
	}

IL_001e:
	{
		List_1_t3952196670 * L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		AnalyticsEventParam_t2480121928 * L_5 = List_1_get_Item_m2228004625(L_3, L_4, /*hidden argument*/List_1_get_Item_m2228004625_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0065;
		}
	}
	{
		List_1_t3952196670 * L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		AnalyticsEventParam_t2480121928 * L_8 = List_1_get_Item_m2228004625(L_6, L_7, /*hidden argument*/List_1_get_Item_m2228004625_RuntimeMethod_var);
		NullCheck(L_8);
		ValueProperty_t1868393739 * L_9 = AnalyticsEventParam_get_valueProperty_m583328026(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		bool L_10 = ValueProperty_IsValid_m3724034537(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0065;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StandardEventPayload_t1629891255_il2cpp_TypeInfo_var);
		Dictionary_2_t2865362463 * L_11 = ((StandardEventPayload_t1629891255_StaticFields*)il2cpp_codegen_static_fields_for(StandardEventPayload_t1629891255_il2cpp_TypeInfo_var))->get_m_EventData_4();
		List_1_t3952196670 * L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		AnalyticsEventParam_t2480121928 * L_14 = List_1_get_Item_m2228004625(L_12, L_13, /*hidden argument*/List_1_get_Item_m2228004625_RuntimeMethod_var);
		NullCheck(L_14);
		String_t* L_15 = AnalyticsEventParam_get_name_m708127086(L_14, /*hidden argument*/NULL);
		List_1_t3952196670 * L_16 = V_0;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		AnalyticsEventParam_t2480121928 * L_18 = List_1_get_Item_m2228004625(L_16, L_17, /*hidden argument*/List_1_get_Item_m2228004625_RuntimeMethod_var);
		NullCheck(L_18);
		RuntimeObject * L_19 = AnalyticsEventParam_get_value_m2837935290(L_18, /*hidden argument*/NULL);
		NullCheck(L_11);
		Dictionary_2_Add_m2942821800(L_11, L_15, L_19, /*hidden argument*/Dictionary_2_Add_m2942821800_RuntimeMethod_var);
	}

IL_0065:
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_006a:
	{
		int32_t L_21 = V_1;
		List_1_t3952196670 * L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23 = List_1_get_Count_m3831796040(L_22, /*hidden argument*/List_1_get_Count_m3831796040_RuntimeMethod_var);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StandardEventPayload_t1629891255_il2cpp_TypeInfo_var);
		Dictionary_2_t2865362463 * L_24 = ((StandardEventPayload_t1629891255_StaticFields*)il2cpp_codegen_static_fields_for(StandardEventPayload_t1629891255_il2cpp_TypeInfo_var))->get_m_EventData_4();
		V_2 = (RuntimeObject*)L_24;
		goto IL_0081;
	}

IL_0081:
	{
		RuntimeObject* L_25 = V_2;
		return L_25;
	}
}
// System.Boolean UnityEngine.Analytics.StandardEventPayload::IsCustomDataValid()
extern "C" IL2CPP_METHOD_ATTR bool StandardEventPayload_IsCustomDataValid_m922891381 (StandardEventPayload_t1629891255 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandardEventPayload_IsCustomDataValid_m922891381_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3952196670 * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		AnalyticsEventParamListContainer_t587083383 * L_0 = StandardEventPayload_get_parameters_m4209814697(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_t3952196670 * L_1 = AnalyticsEventParamListContainer_get_parameters_m4180299006(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0060;
	}

IL_0014:
	{
		List_1_t3952196670 * L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		AnalyticsEventParam_t2480121928 * L_4 = List_1_get_Item_m2228004625(L_2, L_3, /*hidden argument*/List_1_get_Item_m2228004625_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_0027;
		}
	}
	{
		goto IL_005c;
	}

IL_0027:
	{
		List_1_t3952196670 * L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		AnalyticsEventParam_t2480121928 * L_7 = List_1_get_Item_m2228004625(L_5, L_6, /*hidden argument*/List_1_get_Item_m2228004625_RuntimeMethod_var);
		NullCheck(L_7);
		String_t* L_8 = AnalyticsEventParam_get_name_m708127086(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_005b;
		}
	}
	{
		List_1_t3952196670 * L_10 = V_0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		AnalyticsEventParam_t2480121928 * L_12 = List_1_get_Item_m2228004625(L_10, L_11, /*hidden argument*/List_1_get_Item_m2228004625_RuntimeMethod_var);
		NullCheck(L_12);
		ValueProperty_t1868393739 * L_13 = AnalyticsEventParam_get_valueProperty_m583328026(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		bool L_14 = ValueProperty_IsValid_m3724034537(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_005b;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0073;
	}

IL_005b:
	{
	}

IL_005c:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0060:
	{
		int32_t L_16 = V_1;
		List_1_t3952196670 * L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = List_1_get_Count_m3831796040(L_17, /*hidden argument*/List_1_get_Count_m3831796040_RuntimeMethod_var);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_0014;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0073;
	}

IL_0073:
	{
		bool L_19 = V_2;
		return L_19;
	}
}
// System.Boolean UnityEngine.Analytics.StandardEventPayload::IsRequiredDataValid()
extern "C" IL2CPP_METHOD_ATTR bool StandardEventPayload_IsRequiredDataValid_m361738930 (StandardEventPayload_t1629891255 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandardEventPayload_IsRequiredDataValid_m361738930_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3952196670 * V_0 = NULL;
	Dictionary_2_t1354619006 * V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	Enumerator_t1536795990  V_4;
	memset(&V_4, 0, sizeof(V_4));
	bool V_5 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		AnalyticsEventParamListContainer_t587083383 * L_0 = StandardEventPayload_get_parameters_m4209814697(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_t3952196670 * L_1 = AnalyticsEventParamListContainer_get_parameters_m4180299006(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Dictionary_2_t1354619006 * L_2 = (Dictionary_2_t1354619006 *)il2cpp_codegen_object_new(Dictionary_2_t1354619006_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2211705532(L_2, /*hidden argument*/Dictionary_2__ctor_m2211705532_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = 0;
		goto IL_00fa;
	}

IL_001a:
	{
		List_1_t3952196670 * L_3 = V_0;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		AnalyticsEventParam_t2480121928 * L_5 = List_1_get_Item_m2228004625(L_3, L_4, /*hidden argument*/List_1_get_Item_m2228004625_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_00f5;
		}
	}
	{
		List_1_t3952196670 * L_6 = V_0;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		AnalyticsEventParam_t2480121928 * L_8 = List_1_get_Item_m2228004625(L_6, L_7, /*hidden argument*/List_1_get_Item_m2228004625_RuntimeMethod_var);
		NullCheck(L_8);
		int32_t L_9 = AnalyticsEventParam_get_requirementType_m1268059884(L_8, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_00f5;
		}
	}
	{
		List_1_t3952196670 * L_10 = V_0;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		AnalyticsEventParam_t2480121928 * L_12 = List_1_get_Item_m2228004625(L_10, L_11, /*hidden argument*/List_1_get_Item_m2228004625_RuntimeMethod_var);
		NullCheck(L_12);
		String_t* L_13 = AnalyticsEventParam_get_groupID_m569309506(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_14 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_009a;
		}
	}
	{
		Dictionary_2_t1354619006 * L_15 = V_1;
		NullCheck(L_15);
		bool L_16 = Dictionary_2_ContainsKey_m4064423371(L_15, _stringLiteral2791739670, /*hidden argument*/Dictionary_2_ContainsKey_m4064423371_RuntimeMethod_var);
		if (L_16)
		{
			goto IL_0073;
		}
	}
	{
		Dictionary_2_t1354619006 * L_17 = V_1;
		List_1_t1569362707 * L_18 = (List_1_t1569362707 *)il2cpp_codegen_object_new(List_1_t1569362707_il2cpp_TypeInfo_var);
		List_1__ctor_m3376109328(L_18, /*hidden argument*/List_1__ctor_m3376109328_RuntimeMethod_var);
		NullCheck(L_17);
		Dictionary_2_Add_m3693257978(L_17, _stringLiteral2791739670, L_18, /*hidden argument*/Dictionary_2_Add_m3693257978_RuntimeMethod_var);
	}

IL_0073:
	{
		Dictionary_2_t1354619006 * L_19 = V_1;
		NullCheck(L_19);
		List_1_t1569362707 * L_20 = Dictionary_2_get_Item_m3214317455(L_19, _stringLiteral2791739670, /*hidden argument*/Dictionary_2_get_Item_m3214317455_RuntimeMethod_var);
		List_1_t3952196670 * L_21 = V_0;
		int32_t L_22 = V_2;
		NullCheck(L_21);
		AnalyticsEventParam_t2480121928 * L_23 = List_1_get_Item_m2228004625(L_21, L_22, /*hidden argument*/List_1_get_Item_m2228004625_RuntimeMethod_var);
		NullCheck(L_23);
		ValueProperty_t1868393739 * L_24 = AnalyticsEventParam_get_valueProperty_m583328026(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		bool L_25 = ValueProperty_IsValid_m3724034537(L_24, /*hidden argument*/NULL);
		NullCheck(L_20);
		List_1_Add_m1433969578(L_20, L_25, /*hidden argument*/List_1_Add_m1433969578_RuntimeMethod_var);
		goto IL_00f4;
	}

IL_009a:
	{
		Dictionary_2_t1354619006 * L_26 = V_1;
		List_1_t3952196670 * L_27 = V_0;
		int32_t L_28 = V_2;
		NullCheck(L_27);
		AnalyticsEventParam_t2480121928 * L_29 = List_1_get_Item_m2228004625(L_27, L_28, /*hidden argument*/List_1_get_Item_m2228004625_RuntimeMethod_var);
		NullCheck(L_29);
		String_t* L_30 = AnalyticsEventParam_get_groupID_m569309506(L_29, /*hidden argument*/NULL);
		NullCheck(L_26);
		bool L_31 = Dictionary_2_ContainsKey_m4064423371(L_26, L_30, /*hidden argument*/Dictionary_2_ContainsKey_m4064423371_RuntimeMethod_var);
		if (L_31)
		{
			goto IL_00cb;
		}
	}
	{
		Dictionary_2_t1354619006 * L_32 = V_1;
		List_1_t3952196670 * L_33 = V_0;
		int32_t L_34 = V_2;
		NullCheck(L_33);
		AnalyticsEventParam_t2480121928 * L_35 = List_1_get_Item_m2228004625(L_33, L_34, /*hidden argument*/List_1_get_Item_m2228004625_RuntimeMethod_var);
		NullCheck(L_35);
		String_t* L_36 = AnalyticsEventParam_get_groupID_m569309506(L_35, /*hidden argument*/NULL);
		List_1_t1569362707 * L_37 = (List_1_t1569362707 *)il2cpp_codegen_object_new(List_1_t1569362707_il2cpp_TypeInfo_var);
		List_1__ctor_m3376109328(L_37, /*hidden argument*/List_1__ctor_m3376109328_RuntimeMethod_var);
		NullCheck(L_32);
		Dictionary_2_Add_m3693257978(L_32, L_36, L_37, /*hidden argument*/Dictionary_2_Add_m3693257978_RuntimeMethod_var);
	}

IL_00cb:
	{
		Dictionary_2_t1354619006 * L_38 = V_1;
		List_1_t3952196670 * L_39 = V_0;
		int32_t L_40 = V_2;
		NullCheck(L_39);
		AnalyticsEventParam_t2480121928 * L_41 = List_1_get_Item_m2228004625(L_39, L_40, /*hidden argument*/List_1_get_Item_m2228004625_RuntimeMethod_var);
		NullCheck(L_41);
		String_t* L_42 = AnalyticsEventParam_get_groupID_m569309506(L_41, /*hidden argument*/NULL);
		NullCheck(L_38);
		List_1_t1569362707 * L_43 = Dictionary_2_get_Item_m3214317455(L_38, L_42, /*hidden argument*/Dictionary_2_get_Item_m3214317455_RuntimeMethod_var);
		List_1_t3952196670 * L_44 = V_0;
		int32_t L_45 = V_2;
		NullCheck(L_44);
		AnalyticsEventParam_t2480121928 * L_46 = List_1_get_Item_m2228004625(L_44, L_45, /*hidden argument*/List_1_get_Item_m2228004625_RuntimeMethod_var);
		NullCheck(L_46);
		ValueProperty_t1868393739 * L_47 = AnalyticsEventParam_get_valueProperty_m583328026(L_46, /*hidden argument*/NULL);
		NullCheck(L_47);
		bool L_48 = ValueProperty_IsValid_m3724034537(L_47, /*hidden argument*/NULL);
		NullCheck(L_43);
		List_1_Add_m1433969578(L_43, L_48, /*hidden argument*/List_1_Add_m1433969578_RuntimeMethod_var);
	}

IL_00f4:
	{
	}

IL_00f5:
	{
		int32_t L_49 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
	}

IL_00fa:
	{
		int32_t L_50 = V_2;
		List_1_t3952196670 * L_51 = V_0;
		NullCheck(L_51);
		int32_t L_52 = List_1_get_Count_m3831796040(L_51, /*hidden argument*/List_1_get_Count_m3831796040_RuntimeMethod_var);
		if ((((int32_t)L_50) < ((int32_t)L_52)))
		{
			goto IL_001a;
		}
	}
	{
		Dictionary_2_t1354619006 * L_53 = V_1;
		NullCheck(L_53);
		KeyCollection_t1544294477 * L_54 = Dictionary_2_get_Keys_m1646650323(L_53, /*hidden argument*/Dictionary_2_get_Keys_m1646650323_RuntimeMethod_var);
		NullCheck(L_54);
		Enumerator_t1536795990  L_55 = KeyCollection_GetEnumerator_m3646357383(L_54, /*hidden argument*/KeyCollection_GetEnumerator_m3646357383_RuntimeMethod_var);
		V_4 = L_55;
	}

IL_0114:
	try
	{ // begin try (depth: 1)
		{
			goto IL_017e;
		}

IL_0119:
		{
			String_t* L_56 = Enumerator_get_Current_m3766982068((Enumerator_t1536795990 *)(&V_4), /*hidden argument*/Enumerator_get_Current_m3766982068_RuntimeMethod_var);
			V_3 = L_56;
			String_t* L_57 = V_3;
			if (!L_57)
			{
				goto IL_015d;
			}
		}

IL_0128:
		{
			String_t* L_58 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_59 = String_op_Equality_m920492651(NULL /*static, unused*/, L_58, _stringLiteral2791739670, /*hidden argument*/NULL);
			if (L_59)
			{
				goto IL_013d;
			}
		}

IL_0138:
		{
			goto IL_015d;
		}

IL_013d:
		{
			Dictionary_2_t1354619006 * L_60 = V_1;
			String_t* L_61 = V_3;
			NullCheck(L_60);
			List_1_t1569362707 * L_62 = Dictionary_2_get_Item_m3214317455(L_60, L_61, /*hidden argument*/Dictionary_2_get_Item_m3214317455_RuntimeMethod_var);
			NullCheck(L_62);
			bool L_63 = List_1_Contains_m2779132831(L_62, (bool)0, /*hidden argument*/List_1_Contains_m2779132831_RuntimeMethod_var);
			if (!L_63)
			{
				goto IL_0158;
			}
		}

IL_014f:
		{
			V_5 = (bool)0;
			IL2CPP_LEAVE(0x1A5, FINALLY_018f);
		}

IL_0158:
		{
			goto IL_017d;
		}

IL_015d:
		{
			Dictionary_2_t1354619006 * L_64 = V_1;
			String_t* L_65 = V_3;
			NullCheck(L_64);
			List_1_t1569362707 * L_66 = Dictionary_2_get_Item_m3214317455(L_64, L_65, /*hidden argument*/Dictionary_2_get_Item_m3214317455_RuntimeMethod_var);
			NullCheck(L_66);
			bool L_67 = List_1_Contains_m2779132831(L_66, (bool)1, /*hidden argument*/List_1_Contains_m2779132831_RuntimeMethod_var);
			if (L_67)
			{
				goto IL_0178;
			}
		}

IL_016f:
		{
			V_5 = (bool)0;
			IL2CPP_LEAVE(0x1A5, FINALLY_018f);
		}

IL_0178:
		{
			goto IL_017d;
		}

IL_017d:
		{
		}

IL_017e:
		{
			bool L_68 = Enumerator_MoveNext_m2277860433((Enumerator_t1536795990 *)(&V_4), /*hidden argument*/Enumerator_MoveNext_m2277860433_RuntimeMethod_var);
			if (L_68)
			{
				goto IL_0119;
			}
		}

IL_018a:
		{
			IL2CPP_LEAVE(0x19D, FINALLY_018f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_018f;
	}

FINALLY_018f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3558290115((Enumerator_t1536795990 *)(&V_4), /*hidden argument*/Enumerator_Dispose_m3558290115_RuntimeMethod_var);
		IL2CPP_END_FINALLY(399)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(399)
	{
		IL2CPP_JUMP_TBL(0x1A5, IL_01a5)
		IL2CPP_JUMP_TBL(0x19D, IL_019d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_019d:
	{
		V_5 = (bool)1;
		goto IL_01a5;
	}

IL_01a5:
	{
		bool L_69 = V_5;
		return L_69;
	}
}
// System.Void UnityEngine.Analytics.StandardEventPayload::.cctor()
extern "C" IL2CPP_METHOD_ATTR void StandardEventPayload__cctor_m3346303468 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandardEventPayload__cctor_m3346303468_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2865362463 * L_0 = (Dictionary_2_t2865362463 *)il2cpp_codegen_object_new(Dictionary_2_t2865362463_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1476497131(L_0, /*hidden argument*/Dictionary_2__ctor_m1476497131_RuntimeMethod_var);
		((StandardEventPayload_t1629891255_StaticFields*)il2cpp_codegen_static_fields_for(StandardEventPayload_t1629891255_il2cpp_TypeInfo_var))->set_m_EventData_4(L_0);
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
// System.Void UnityEngine.Analytics.TrackableField::.ctor(System.Type[])
extern "C" IL2CPP_METHOD_ATTR void TrackableField__ctor_m3758796351 (TrackableField_t1772682203 * __this, TypeU5BU5D_t3940880105* ___validTypes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableField__ctor_m3758796351_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		TrackablePropertyBase__ctor_m2201057683(__this, /*hidden argument*/NULL);
		TypeU5BU5D_t3940880105* L_0 = ___validTypes0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		TypeU5BU5D_t3940880105* L_1 = ___validTypes0;
		NullCheck(L_1);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))))
		{
			goto IL_001b;
		}
	}

IL_0015:
	{
		goto IL_004f;
	}

IL_001b:
	{
		TypeU5BU5D_t3940880105* L_2 = ___validTypes0;
		NullCheck(L_2);
		StringU5BU5D_t1281789340* L_3 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))));
		__this->set_m_ValidTypeNames_2(L_3);
		V_0 = 0;
		goto IL_0046;
	}

IL_0030:
	{
		StringU5BU5D_t1281789340* L_4 = __this->get_m_ValidTypeNames_2();
		int32_t L_5 = V_0;
		TypeU5BU5D_t3940880105* L_6 = ___validTypes0;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Type_t * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_10);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (String_t*)L_10);
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0046:
	{
		int32_t L_12 = V_0;
		TypeU5BU5D_t3940880105* L_13 = ___validTypes0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_13)->max_length)))))))
		{
			goto IL_0030;
		}
	}

IL_004f:
	{
		return;
	}
}
// System.Object UnityEngine.Analytics.TrackableField::GetValue()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * TrackableField_GetValue_m4059393238 (TrackableField_t1772682203 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableField_GetValue_m4059393238_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	String_t* V_2 = NULL;
	StringU5BU5D_t1281789340* V_3 = NULL;
	int32_t V_4 = 0;
	PropertyInfo_t * V_5 = NULL;
	FieldInfo_t * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t631007953 * L_0 = ((TrackablePropertyBase_t2121532948 *)__this)->get_m_Target_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_2 = ((TrackablePropertyBase_t2121532948 *)__this)->get_m_Path_1();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}

IL_0022:
	{
		V_0 = NULL;
		goto IL_00ad;
	}

IL_002a:
	{
		Object_t631007953 * L_4 = ((TrackablePropertyBase_t2121532948 *)__this)->get_m_Target_0();
		V_1 = L_4;
		String_t* L_5 = ((TrackablePropertyBase_t2121532948 *)__this)->get_m_Path_1();
		CharU5BU5D_t3528271667* L_6 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t3528271667* L_7 = L_6;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)46));
		NullCheck(L_5);
		StringU5BU5D_t1281789340* L_8 = String_Split_m3646115398(L_5, L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		V_4 = 0;
		goto IL_009c;
	}

IL_0051:
	{
		StringU5BU5D_t1281789340* L_9 = V_3;
		int32_t L_10 = V_4;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		String_t* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_2 = L_12;
	}

IL_0057:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_13 = V_1;
		NullCheck(L_13);
		Type_t * L_14 = Object_GetType_m88164663(L_13, /*hidden argument*/NULL);
		String_t* L_15 = V_2;
		NullCheck(L_14);
		PropertyInfo_t * L_16 = Type_GetProperty_m3414567179(L_14, L_15, /*hidden argument*/NULL);
		V_5 = L_16;
		PropertyInfo_t * L_17 = V_5;
		RuntimeObject * L_18 = V_1;
		NullCheck(L_17);
		RuntimeObject * L_19 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t2843939325* >::Invoke(25 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_17, L_18, (ObjectU5BU5D_t2843939325*)(ObjectU5BU5D_t2843939325*)NULL);
		V_1 = L_19;
		goto IL_0095;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0076;
		throw e;
	}

CATCH_0076:
	{ // begin catch(System.Object)
		RuntimeObject * L_20 = V_1;
		NullCheck(L_20);
		Type_t * L_21 = Object_GetType_m88164663(L_20, /*hidden argument*/NULL);
		String_t* L_22 = V_2;
		NullCheck(L_21);
		FieldInfo_t * L_23 = Type_GetField_m2961003358(L_21, L_22, /*hidden argument*/NULL);
		V_6 = L_23;
		FieldInfo_t * L_24 = V_6;
		RuntimeObject * L_25 = V_1;
		NullCheck(L_24);
		RuntimeObject * L_26 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(18 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_24, L_25);
		V_1 = L_26;
		goto IL_0095;
	} // end catch (depth: 1)

IL_0095:
	{
		int32_t L_27 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_009c:
	{
		int32_t L_28 = V_4;
		StringU5BU5D_t1281789340* L_29 = V_3;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_29)->max_length)))))))
		{
			goto IL_0051;
		}
	}
	{
		RuntimeObject * L_30 = V_1;
		V_0 = L_30;
		goto IL_00ad;
	}

IL_00ad:
	{
		RuntimeObject * L_31 = V_0;
		return L_31;
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
// System.Void UnityEngine.Analytics.TrackableProperty::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TrackableProperty__ctor_m29288901 (TrackableProperty_t3943537984 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty/FieldWithTarget> UnityEngine.Analytics.TrackableProperty::get_fields()
extern "C" IL2CPP_METHOD_ATTR List_1_t235857739 * TrackableProperty_get_fields_m3682628132 (TrackableProperty_t3943537984 * __this, const RuntimeMethod* method)
{
	List_1_t235857739 * V_0 = NULL;
	{
		List_1_t235857739 * L_0 = __this->get_m_Fields_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		List_1_t235857739 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Analytics.TrackableProperty::set_fields(System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty/FieldWithTarget>)
extern "C" IL2CPP_METHOD_ATTR void TrackableProperty_set_fields_m1461281003 (TrackableProperty_t3943537984 * __this, List_1_t235857739 * ___value0, const RuntimeMethod* method)
{
	{
		List_1_t235857739 * L_0 = ___value0;
		__this->set_m_Fields_1(L_0);
		return;
	}
}
// System.Int32 UnityEngine.Analytics.TrackableProperty::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t TrackableProperty_GetHashCode_m3407865350 (TrackableProperty_t3943537984 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableProperty_GetHashCode_m3407865350_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FieldWithTarget_t3058750293 * V_1 = NULL;
	Enumerator_t2125101616  V_2;
	memset(&V_2, 0, sizeof(V_2));
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = ((int32_t)17);
		List_1_t235857739 * L_0 = __this->get_m_Fields_1();
		NullCheck(L_0);
		Enumerator_t2125101616  L_1 = List_1_GetEnumerator_m466435735(L_0, /*hidden argument*/List_1_GetEnumerator_m466435735_RuntimeMethod_var);
		V_2 = L_1;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0030;
		}

IL_0017:
		{
			FieldWithTarget_t3058750293 * L_2 = Enumerator_get_Current_m3689659642((Enumerator_t2125101616 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m3689659642_RuntimeMethod_var);
			V_1 = L_2;
			int32_t L_3 = V_0;
			FieldWithTarget_t3058750293 * L_4 = V_1;
			NullCheck(L_4);
			String_t* L_5 = FieldWithTarget_get_paramName_m3501478659(L_4, /*hidden argument*/NULL);
			NullCheck(L_5);
			int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_5);
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)23))), (int32_t)L_6));
		}

IL_0030:
		{
			bool L_7 = Enumerator_MoveNext_m1993744362((Enumerator_t2125101616 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m1993744362_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0017;
			}
		}

IL_003c:
		{
			IL2CPP_LEAVE(0x4F, FINALLY_0041);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0041;
	}

FINALLY_0041:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m536244888((Enumerator_t2125101616 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m536244888_RuntimeMethod_var);
		IL2CPP_END_FINALLY(65)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(65)
	{
		IL2CPP_JUMP_TBL(0x4F, IL_004f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004f:
	{
		int32_t L_8 = V_0;
		V_3 = L_8;
		goto IL_0056;
	}

IL_0056:
	{
		int32_t L_9 = V_3;
		return L_9;
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
// System.Void UnityEngine.Analytics.TrackableProperty/FieldWithTarget::.ctor()
extern "C" IL2CPP_METHOD_ATTR void FieldWithTarget__ctor_m583221563 (FieldWithTarget_t3058750293 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Analytics.TrackableProperty/FieldWithTarget::get_paramName()
extern "C" IL2CPP_METHOD_ATTR String_t* FieldWithTarget_get_paramName_m3501478659 (FieldWithTarget_t3058750293 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_ParamName_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Analytics.TrackableProperty/FieldWithTarget::set_paramName(System.String)
extern "C" IL2CPP_METHOD_ATTR void FieldWithTarget_set_paramName_m2405671065 (FieldWithTarget_t3058750293 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_m_ParamName_0(L_0);
		return;
	}
}
// UnityEngine.Object UnityEngine.Analytics.TrackableProperty/FieldWithTarget::get_target()
extern "C" IL2CPP_METHOD_ATTR Object_t631007953 * FieldWithTarget_get_target_m2252597932 (FieldWithTarget_t3058750293 * __this, const RuntimeMethod* method)
{
	Object_t631007953 * V_0 = NULL;
	{
		Object_t631007953 * L_0 = __this->get_m_Target_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Object_t631007953 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Analytics.TrackableProperty/FieldWithTarget::set_target(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void FieldWithTarget_set_target_m875118251 (FieldWithTarget_t3058750293 * __this, Object_t631007953 * ___value0, const RuntimeMethod* method)
{
	{
		Object_t631007953 * L_0 = ___value0;
		__this->set_m_Target_1(L_0);
		return;
	}
}
// System.String UnityEngine.Analytics.TrackableProperty/FieldWithTarget::get_fieldPath()
extern "C" IL2CPP_METHOD_ATTR String_t* FieldWithTarget_get_fieldPath_m341366840 (FieldWithTarget_t3058750293 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_FieldPath_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Analytics.TrackableProperty/FieldWithTarget::set_fieldPath(System.String)
extern "C" IL2CPP_METHOD_ATTR void FieldWithTarget_set_fieldPath_m2073198625 (FieldWithTarget_t3058750293 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_m_FieldPath_2(L_0);
		return;
	}
}
// System.String UnityEngine.Analytics.TrackableProperty/FieldWithTarget::get_typeString()
extern "C" IL2CPP_METHOD_ATTR String_t* FieldWithTarget_get_typeString_m238478345 (FieldWithTarget_t3058750293 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_TypeString_3();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Analytics.TrackableProperty/FieldWithTarget::set_typeString(System.String)
extern "C" IL2CPP_METHOD_ATTR void FieldWithTarget_set_typeString_m937652251 (FieldWithTarget_t3058750293 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_m_TypeString_3(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Analytics.TrackableProperty/FieldWithTarget::get_doStatic()
extern "C" IL2CPP_METHOD_ATTR bool FieldWithTarget_get_doStatic_m1956244749 (FieldWithTarget_t3058750293 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_DoStatic_4();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Analytics.TrackableProperty/FieldWithTarget::set_doStatic(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void FieldWithTarget_set_doStatic_m3781634168 (FieldWithTarget_t3058750293 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_DoStatic_4(L_0);
		return;
	}
}
// System.String UnityEngine.Analytics.TrackableProperty/FieldWithTarget::get_staticString()
extern "C" IL2CPP_METHOD_ATTR String_t* FieldWithTarget_get_staticString_m2597372683 (FieldWithTarget_t3058750293 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_StaticString_5();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Analytics.TrackableProperty/FieldWithTarget::set_staticString(System.String)
extern "C" IL2CPP_METHOD_ATTR void FieldWithTarget_set_staticString_m3203090702 (FieldWithTarget_t3058750293 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_m_StaticString_5(L_0);
		return;
	}
}
// System.Object UnityEngine.Analytics.TrackableProperty/FieldWithTarget::GetValue()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * FieldWithTarget_GetValue_m2315870500 (FieldWithTarget_t3058750293 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FieldWithTarget_GetValue_m2315870500_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	String_t* V_2 = NULL;
	StringU5BU5D_t1281789340* V_3 = NULL;
	int32_t V_4 = 0;
	Type_t * V_5 = NULL;
	PropertyInfo_t * V_6 = NULL;
	FieldInfo_t * V_7 = NULL;
	{
		bool L_0 = __this->get_m_DoStatic_4();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = __this->get_m_StaticString_5();
		V_0 = L_1;
		goto IL_00b1;
	}

IL_0019:
	{
		Object_t631007953 * L_2 = __this->get_m_Target_1();
		V_1 = L_2;
		String_t* L_3 = __this->get_m_FieldPath_2();
		CharU5BU5D_t3528271667* L_4 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t3528271667* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)46));
		NullCheck(L_3);
		StringU5BU5D_t1281789340* L_6 = String_Split_m3646115398(L_3, L_5, /*hidden argument*/NULL);
		V_3 = L_6;
		V_4 = 0;
		goto IL_00a0;
	}

IL_0040:
	{
		StringU5BU5D_t1281789340* L_7 = V_3;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		String_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_2 = L_10;
		RuntimeObject * L_11 = V_1;
		NullCheck(L_11);
		Type_t * L_12 = Object_GetType_m88164663(L_11, /*hidden argument*/NULL);
		V_5 = L_12;
		Type_t * L_13 = V_5;
		String_t* L_14 = V_2;
		NullCheck(L_13);
		PropertyInfo_t * L_15 = Type_GetProperty_m3414567179(L_13, L_14, /*hidden argument*/NULL);
		V_6 = L_15;
		Type_t * L_16 = V_5;
		String_t* L_17 = V_2;
		NullCheck(L_16);
		FieldInfo_t * L_18 = Type_GetField_m2961003358(L_16, L_17, /*hidden argument*/NULL);
		V_7 = L_18;
		PropertyInfo_t * L_19 = V_6;
		if (!L_19)
		{
			goto IL_007a;
		}
	}
	{
		PropertyInfo_t * L_20 = V_6;
		RuntimeObject * L_21 = V_1;
		NullCheck(L_20);
		RuntimeObject * L_22 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t2843939325* >::Invoke(25 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_20, L_21, (ObjectU5BU5D_t2843939325*)(ObjectU5BU5D_t2843939325*)NULL);
		V_1 = L_22;
		goto IL_0099;
	}

IL_007a:
	{
		FieldInfo_t * L_23 = V_7;
		if (!L_23)
		{
			goto IL_0091;
		}
	}
	{
		FieldInfo_t * L_24 = V_7;
		RuntimeObject * L_25 = V_1;
		NullCheck(L_24);
		RuntimeObject * L_26 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(18 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_24, L_25);
		V_1 = L_26;
		goto IL_0099;
	}

IL_0091:
	{
		V_0 = NULL;
		goto IL_00b1;
	}

IL_0099:
	{
		int32_t L_27 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_00a0:
	{
		int32_t L_28 = V_4;
		StringU5BU5D_t1281789340* L_29 = V_3;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_29)->max_length)))))))
		{
			goto IL_0040;
		}
	}
	{
		RuntimeObject * L_30 = V_1;
		V_0 = L_30;
		goto IL_00b1;
	}

IL_00b1:
	{
		RuntimeObject * L_31 = V_0;
		return L_31;
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
// System.Void UnityEngine.Analytics.TrackablePropertyBase::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TrackablePropertyBase__ctor_m2201057683 (TrackablePropertyBase_t2121532948 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Analytics.TrackableTrigger::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TrackableTrigger__ctor_m4147744174 (TrackableTrigger_t621205209 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Analytics.TriggerListContainer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TriggerListContainer__ctor_m1390596431 (TriggerListContainer_t2032715483 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TriggerListContainer__ctor_m1390596431_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3418373063 * L_0 = (List_1_t3418373063 *)il2cpp_codegen_object_new(List_1_t3418373063_il2cpp_TypeInfo_var);
		List_1__ctor_m2148725058(L_0, /*hidden argument*/List_1__ctor_m2148725058_RuntimeMethod_var);
		__this->set_m_Rules_0(L_0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Analytics.TriggerRule> UnityEngine.Analytics.TriggerListContainer::get_rules()
extern "C" IL2CPP_METHOD_ATTR List_1_t3418373063 * TriggerListContainer_get_rules_m110726358 (TriggerListContainer_t2032715483 * __this, const RuntimeMethod* method)
{
	List_1_t3418373063 * V_0 = NULL;
	{
		List_1_t3418373063 * L_0 = __this->get_m_Rules_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		List_1_t3418373063 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Analytics.TriggerListContainer::set_rules(System.Collections.Generic.List`1<UnityEngine.Analytics.TriggerRule>)
extern "C" IL2CPP_METHOD_ATTR void TriggerListContainer_set_rules_m474815225 (TriggerListContainer_t2032715483 * __this, List_1_t3418373063 * ___value0, const RuntimeMethod* method)
{
	{
		List_1_t3418373063 * L_0 = ___value0;
		__this->set_m_Rules_0(L_0);
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
// System.Void UnityEngine.Analytics.TriggerMethod::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TriggerMethod__ctor_m1863255651 (TriggerMethod_t582536534 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Analytics.TriggerRule::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TriggerRule__ctor_m225466603 (TriggerRule_t1946298321 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Analytics.TriggerRule::Test()
extern "C" IL2CPP_METHOD_ATTR bool TriggerRule_Test_m2595382785 (TriggerRule_t1946298321 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	String_t* V_1 = NULL;
	bool V_2 = false;
	{
		bool L_0 = TriggerRule_Test_m3134988565(__this, (bool*)(&V_0), (String_t**)(&V_1), /*hidden argument*/NULL);
		V_2 = L_0;
		goto IL_0011;
	}

IL_0011:
	{
		bool L_1 = V_2;
		return L_1;
	}
}
// System.Boolean UnityEngine.Analytics.TriggerRule::Test(System.Boolean&,System.String&)
extern "C" IL2CPP_METHOD_ATTR bool TriggerRule_Test_m3134988565 (TriggerRule_t1946298321 * __this, bool* ___error0, String_t** ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TriggerRule_Test_m3134988565_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	String_t* V_2 = NULL;
	{
		bool* L_0 = ___error0;
		*((int8_t*)(L_0)) = (int8_t)0;
		String_t** L_1 = ___message1;
		*((RuntimeObject **)(L_1)) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_1), (RuntimeObject *)NULL);
		TrackableField_t1772682203 * L_2 = __this->get_m_Target_0();
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		TrackableField_t1772682203 * L_3 = __this->get_m_Target_0();
		NullCheck(L_3);
		RuntimeObject * L_4 = TrackableField_GetValue_m4059393238(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0034;
		}
	}

IL_0022:
	{
		bool* L_5 = ___error0;
		*((int8_t*)(L_5)) = (int8_t)1;
		String_t** L_6 = ___message1;
		*((RuntimeObject **)(L_6)) = (RuntimeObject *)_stringLiteral201922340;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_6), (RuntimeObject *)_stringLiteral201922340);
		V_0 = (bool)0;
		goto IL_0234;
	}

IL_0034:
	{
		ValueProperty_t1868393739 * L_7 = __this->get_m_Value_2();
		if (!L_7)
		{
			goto IL_005f;
		}
	}
	{
		ValueProperty_t1868393739 * L_8 = __this->get_m_Value_2();
		NullCheck(L_8);
		TrackableField_t1772682203 * L_9 = ValueProperty_get_target_m1728151320(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_005f;
		}
	}
	{
		ValueProperty_t1868393739 * L_10 = __this->get_m_Value_2();
		NullCheck(L_10);
		String_t* L_11 = ValueProperty_get_propertyValue_m3340090327(L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0071;
		}
	}

IL_005f:
	{
		bool* L_12 = ___error0;
		*((int8_t*)(L_12)) = (int8_t)1;
		String_t** L_13 = ___message1;
		*((RuntimeObject **)(L_13)) = (RuntimeObject *)_stringLiteral1045670989;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_13), (RuntimeObject *)_stringLiteral1045670989);
		V_0 = (bool)0;
		goto IL_0234;
	}

IL_0071:
	{
		TrackableField_t1772682203 * L_14 = __this->get_m_Target_0();
		NullCheck(L_14);
		RuntimeObject * L_15 = TrackableField_GetValue_m4059393238(L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		ValueProperty_t1868393739 * L_16 = __this->get_m_Value_2();
		NullCheck(L_16);
		String_t* L_17 = ValueProperty_get_valueType_m2516961412(L_16, /*hidden argument*/NULL);
		V_2 = L_17;
		String_t* L_18 = V_2;
		RuntimeTypeHandle_t3027515415  L_19 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		String_t* L_21 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_22 = String_op_Equality_m920492651(NULL /*static, unused*/, L_18, L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00b6;
		}
	}
	{
		RuntimeObject * L_23 = V_1;
		bool L_24 = TriggerRule_TestByString_m2890887363(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_23, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_0 = L_24;
		goto IL_0234;
	}

IL_00b6:
	{
		String_t* L_25 = V_2;
		RuntimeTypeHandle_t3027515415  L_26 = { reinterpret_cast<intptr_t> (Boolean_t97287965_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_27 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		String_t* L_28 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_27);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_29 = String_op_Equality_m920492651(NULL /*static, unused*/, L_25, L_28, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_00e3;
		}
	}
	{
		RuntimeObject * L_30 = V_1;
		bool L_31 = TriggerRule_TestByBool_m4144604729(__this, ((*(bool*)((bool*)UnBox(L_30, Boolean_t97287965_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_0 = L_31;
		goto IL_0234;
	}

IL_00e3:
	{
		String_t* L_32 = V_2;
		RuntimeTypeHandle_t3027515415  L_33 = { reinterpret_cast<intptr_t> (Single_t1397266774_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_34 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		String_t* L_35 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_34);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_36 = String_op_Equality_m920492651(NULL /*static, unused*/, L_32, L_35, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_0111;
		}
	}
	{
		RuntimeObject * L_37 = V_1;
		bool L_38 = TriggerRule_TestByDouble_m960810189(__this, (((double)((double)((*(float*)((float*)UnBox(L_37, Single_t1397266774_il2cpp_TypeInfo_var))))))), /*hidden argument*/NULL);
		V_0 = L_38;
		goto IL_0234;
	}

IL_0111:
	{
		String_t* L_39 = V_2;
		RuntimeTypeHandle_t3027515415  L_40 = { reinterpret_cast<intptr_t> (Double_t594665363_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_41 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
		NullCheck(L_41);
		String_t* L_42 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_41);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_43 = String_op_Equality_m920492651(NULL /*static, unused*/, L_39, L_42, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_013e;
		}
	}
	{
		RuntimeObject * L_44 = V_1;
		bool L_45 = TriggerRule_TestByDouble_m960810189(__this, ((*(double*)((double*)UnBox(L_44, Double_t594665363_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_0 = L_45;
		goto IL_0234;
	}

IL_013e:
	{
		String_t* L_46 = V_2;
		RuntimeTypeHandle_t3027515415  L_47 = { reinterpret_cast<intptr_t> (Decimal_t2948259380_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_48 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_47, /*hidden argument*/NULL);
		NullCheck(L_48);
		String_t* L_49 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_48);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_50 = String_op_Equality_m920492651(NULL /*static, unused*/, L_46, L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_0170;
		}
	}
	{
		RuntimeObject * L_51 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2948259380_il2cpp_TypeInfo_var);
		double L_52 = Decimal_op_Explicit_m2816896069(NULL /*static, unused*/, ((*(Decimal_t2948259380 *)((Decimal_t2948259380 *)UnBox(L_51, Decimal_t2948259380_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		bool L_53 = TriggerRule_TestByDouble_m960810189(__this, L_52, /*hidden argument*/NULL);
		V_0 = L_53;
		goto IL_0234;
	}

IL_0170:
	{
		String_t* L_54 = V_2;
		RuntimeTypeHandle_t3027515415  L_55 = { reinterpret_cast<intptr_t> (Int32_t2950945753_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_56 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_55, /*hidden argument*/NULL);
		NullCheck(L_56);
		String_t* L_57 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_56);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_58 = String_op_Equality_m920492651(NULL /*static, unused*/, L_54, L_57, /*hidden argument*/NULL);
		if (!L_58)
		{
			goto IL_019e;
		}
	}
	{
		RuntimeObject * L_59 = V_1;
		bool L_60 = TriggerRule_TestByDouble_m960810189(__this, (((double)((double)((*(int32_t*)((int32_t*)UnBox(L_59, Int32_t2950945753_il2cpp_TypeInfo_var))))))), /*hidden argument*/NULL);
		V_0 = L_60;
		goto IL_0234;
	}

IL_019e:
	{
		String_t* L_61 = V_2;
		RuntimeTypeHandle_t3027515415  L_62 = { reinterpret_cast<intptr_t> (Int16_t2552820387_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_63 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_62, /*hidden argument*/NULL);
		NullCheck(L_63);
		String_t* L_64 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_63);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_65 = String_op_Equality_m920492651(NULL /*static, unused*/, L_61, L_64, /*hidden argument*/NULL);
		if (!L_65)
		{
			goto IL_01cc;
		}
	}
	{
		RuntimeObject * L_66 = V_1;
		bool L_67 = TriggerRule_TestByDouble_m960810189(__this, (((double)((double)((*(int16_t*)((int16_t*)UnBox(L_66, Int16_t2552820387_il2cpp_TypeInfo_var))))))), /*hidden argument*/NULL);
		V_0 = L_67;
		goto IL_0234;
	}

IL_01cc:
	{
		String_t* L_68 = V_2;
		RuntimeTypeHandle_t3027515415  L_69 = { reinterpret_cast<intptr_t> (Int64_t3736567304_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_70 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_69, /*hidden argument*/NULL);
		NullCheck(L_70);
		String_t* L_71 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_70);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_72 = String_op_Equality_m920492651(NULL /*static, unused*/, L_68, L_71, /*hidden argument*/NULL);
		if (!L_72)
		{
			goto IL_01fa;
		}
	}
	{
		RuntimeObject * L_73 = V_1;
		bool L_74 = TriggerRule_TestByDouble_m960810189(__this, (((double)((double)((*(int64_t*)((int64_t*)UnBox(L_73, Int64_t3736567304_il2cpp_TypeInfo_var))))))), /*hidden argument*/NULL);
		V_0 = L_74;
		goto IL_0234;
	}

IL_01fa:
	{
		String_t* L_75 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_76 = String_op_Equality_m920492651(NULL /*static, unused*/, L_75, _stringLiteral1236039580, /*hidden argument*/NULL);
		if (!L_76)
		{
			goto IL_0227;
		}
	}
	{
		RuntimeObject * L_77 = V_1;
		NullCheck(((Enum_t4135868527 *)CastclassClass((RuntimeObject*)L_77, Enum_t4135868527_il2cpp_TypeInfo_var)));
		String_t* L_78 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ((Enum_t4135868527 *)CastclassClass((RuntimeObject*)L_77, Enum_t4135868527_il2cpp_TypeInfo_var)));
		NullCheck(L_78);
		String_t* L_79 = String_ToLower_m2029374922(L_78, /*hidden argument*/NULL);
		bool L_80 = TriggerRule_TestByEnum_m2798194165(__this, L_79, /*hidden argument*/NULL);
		V_0 = L_80;
		goto IL_0234;
	}

IL_0227:
	{
		RuntimeObject * L_81 = V_1;
		bool L_82 = TriggerRule_TestByObject_m3099447300(__this, L_81, /*hidden argument*/NULL);
		V_0 = L_82;
		goto IL_0234;
	}

IL_0234:
	{
		bool L_83 = V_0;
		return L_83;
	}
}
// System.Boolean UnityEngine.Analytics.TriggerRule::TestByObject(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool TriggerRule_TestByObject_m3099447300 (TriggerRule_t1946298321 * __this, RuntimeObject * ___currentValue0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->get_m_Operator_1();
		V_1 = L_0;
		int32_t L_1 = V_1;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0033;
		}
	}
	{
		goto IL_004d;
	}

IL_001c:
	{
		RuntimeObject * L_3 = ___currentValue0;
		ValueProperty_t1868393739 * L_4 = __this->get_m_Value_2();
		NullCheck(L_4);
		String_t* L_5 = ValueProperty_get_propertyValue_m3340090327(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_3, L_5);
		V_0 = L_6;
		goto IL_004d;
	}

IL_0033:
	{
		RuntimeObject * L_7 = ___currentValue0;
		ValueProperty_t1868393739 * L_8 = __this->get_m_Value_2();
		NullCheck(L_8);
		String_t* L_9 = ValueProperty_get_propertyValue_m3340090327(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		bool L_10 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_7, L_9);
		V_0 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		goto IL_004d;
	}

IL_004d:
	{
		bool L_11 = V_0;
		V_2 = L_11;
		goto IL_0054;
	}

IL_0054:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
// System.Boolean UnityEngine.Analytics.TriggerRule::TestByEnum(System.String)
extern "C" IL2CPP_METHOD_ATTR bool TriggerRule_TestByEnum_m2798194165 (TriggerRule_t1946298321 * __this, String_t* ___currentValue0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->get_m_Operator_1();
		V_1 = L_0;
		int32_t L_1 = V_1;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_003d;
		}
	}
	{
		goto IL_0061;
	}

IL_001c:
	{
		String_t* L_3 = ___currentValue0;
		ValueProperty_t1868393739 * L_4 = __this->get_m_Value_2();
		NullCheck(L_4);
		String_t* L_5 = ValueProperty_get_propertyValue_m3340090327(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		NullCheck(L_6);
		String_t* L_7 = String_ToLower_m2029374922(L_6, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_8 = String_Equals_m2270643605(L_3, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0061;
	}

IL_003d:
	{
		String_t* L_9 = ___currentValue0;
		ValueProperty_t1868393739 * L_10 = __this->get_m_Value_2();
		NullCheck(L_10);
		String_t* L_11 = ValueProperty_get_propertyValue_m3340090327(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_12 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_11);
		NullCheck(L_12);
		String_t* L_13 = String_ToLower_m2029374922(L_12, /*hidden argument*/NULL);
		NullCheck(L_9);
		bool L_14 = String_Equals_m2270643605(L_9, L_13, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		goto IL_0061;
	}

IL_0061:
	{
		bool L_15 = V_0;
		V_2 = L_15;
		goto IL_0068;
	}

IL_0068:
	{
		bool L_16 = V_2;
		return L_16;
	}
}
// System.Boolean UnityEngine.Analytics.TriggerRule::TestByString(System.String)
extern "C" IL2CPP_METHOD_ATTR bool TriggerRule_TestByString_m2890887363 (TriggerRule_t1946298321 * __this, String_t* ___currentValue0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->get_m_Operator_1();
		V_1 = L_0;
		int32_t L_1 = V_1;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0033;
		}
	}
	{
		goto IL_004d;
	}

IL_001c:
	{
		String_t* L_3 = ___currentValue0;
		ValueProperty_t1868393739 * L_4 = __this->get_m_Value_2();
		NullCheck(L_4);
		String_t* L_5 = ValueProperty_get_propertyValue_m3340090327(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_6 = String_Equals_m2270643605(L_3, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_004d;
	}

IL_0033:
	{
		String_t* L_7 = ___currentValue0;
		ValueProperty_t1868393739 * L_8 = __this->get_m_Value_2();
		NullCheck(L_8);
		String_t* L_9 = ValueProperty_get_propertyValue_m3340090327(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		bool L_10 = String_Equals_m2270643605(L_7, L_9, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		goto IL_004d;
	}

IL_004d:
	{
		bool L_11 = V_0;
		V_2 = L_11;
		goto IL_0054;
	}

IL_0054:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
// System.Boolean UnityEngine.Analytics.TriggerRule::TestByBool(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool TriggerRule_TestByBool_m4144604729 (TriggerRule_t1946298321 * __this, bool ___currentValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TriggerRule_TestByBool_m4144604729_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		V_0 = (bool)0;
		ValueProperty_t1868393739 * L_0 = __this->get_m_Value_2();
		NullCheck(L_0);
		String_t* L_1 = ValueProperty_get_propertyValue_m3340090327(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Boolean_t97287965_il2cpp_TypeInfo_var);
		bool L_2 = Boolean_Parse_m2370352694(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = __this->get_m_Operator_1();
		V_2 = L_3;
		int32_t L_4 = V_2;
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_003b;
		}
	}
	{
		goto IL_004c;
	}

IL_002d:
	{
		bool L_6 = V_1;
		bool L_7 = Boolean_Equals_m535526264((bool*)(&___currentValue0), L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_004c;
	}

IL_003b:
	{
		bool L_8 = V_1;
		bool L_9 = Boolean_Equals_m535526264((bool*)(&___currentValue0), L_8, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		goto IL_004c;
	}

IL_004c:
	{
		bool L_10 = V_0;
		V_3 = L_10;
		goto IL_0053;
	}

IL_0053:
	{
		bool L_11 = V_3;
		return L_11;
	}
}
// System.Boolean UnityEngine.Analytics.TriggerRule::TestByDouble(System.Double)
extern "C" IL2CPP_METHOD_ATTR bool TriggerRule_TestByDouble_m960810189 (TriggerRule_t1946298321 * __this, double ___currentValue0, const RuntimeMethod* method)
{
	bool V_0 = false;
	double V_1 = 0.0;
	int32_t V_2 = 0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	bool V_5 = false;
	int32_t G_B8_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B25_0 = 0;
	{
		V_0 = (bool)0;
		ValueProperty_t1868393739 * L_0 = __this->get_m_Value_2();
		NullCheck(L_0);
		String_t* L_1 = ValueProperty_get_propertyValue_m3340090327(L_0, /*hidden argument*/NULL);
		double L_2 = TriggerRule_GetDouble_m2201978033(__this, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = __this->get_m_Operator_1();
		V_2 = L_3;
		int32_t L_4 = V_2;
		switch (L_4)
		{
			case 0:
			{
				goto IL_0047;
			}
			case 1:
			{
				goto IL_0055;
			}
			case 2:
			{
				goto IL_0066;
			}
			case 3:
			{
				goto IL_0070;
			}
			case 4:
			{
				goto IL_0088;
			}
			case 5:
			{
				goto IL_0092;
			}
			case 6:
			{
				goto IL_00aa;
			}
			case 7:
			{
				goto IL_00d0;
			}
		}
	}
	{
		goto IL_0116;
	}

IL_0047:
	{
		double L_5 = ___currentValue0;
		double L_6 = V_1;
		bool L_7 = TriggerRule_SafeEquals_m2862813043(__this, L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_0116;
	}

IL_0055:
	{
		double L_8 = ___currentValue0;
		double L_9 = V_1;
		bool L_10 = TriggerRule_SafeEquals_m2862813043(__this, L_8, L_9, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		goto IL_0116;
	}

IL_0066:
	{
		double L_11 = ___currentValue0;
		double L_12 = V_1;
		V_0 = (bool)((((double)L_11) > ((double)L_12))? 1 : 0);
		goto IL_0116;
	}

IL_0070:
	{
		double L_13 = ___currentValue0;
		double L_14 = V_1;
		if ((((double)L_13) > ((double)L_14)))
		{
			goto IL_0081;
		}
	}
	{
		double L_15 = ___currentValue0;
		double L_16 = V_1;
		bool L_17 = TriggerRule_SafeEquals_m2862813043(__this, L_15, L_16, /*hidden argument*/NULL);
		G_B8_0 = ((int32_t)(L_17));
		goto IL_0082;
	}

IL_0081:
	{
		G_B8_0 = 1;
	}

IL_0082:
	{
		V_0 = (bool)G_B8_0;
		goto IL_0116;
	}

IL_0088:
	{
		double L_18 = ___currentValue0;
		double L_19 = V_1;
		V_0 = (bool)((((double)L_18) < ((double)L_19))? 1 : 0);
		goto IL_0116;
	}

IL_0092:
	{
		double L_20 = ___currentValue0;
		double L_21 = V_1;
		if ((((double)L_20) < ((double)L_21)))
		{
			goto IL_00a3;
		}
	}
	{
		double L_22 = ___currentValue0;
		double L_23 = V_1;
		bool L_24 = TriggerRule_SafeEquals_m2862813043(__this, L_22, L_23, /*hidden argument*/NULL);
		G_B13_0 = ((int32_t)(L_24));
		goto IL_00a4;
	}

IL_00a3:
	{
		G_B13_0 = 1;
	}

IL_00a4:
	{
		V_0 = (bool)G_B13_0;
		goto IL_0116;
	}

IL_00aa:
	{
		ValueProperty_t1868393739 * L_25 = __this->get_m_Value2_3();
		NullCheck(L_25);
		String_t* L_26 = ValueProperty_get_propertyValue_m3340090327(L_25, /*hidden argument*/NULL);
		double L_27 = TriggerRule_GetDouble_m2201978033(__this, L_26, /*hidden argument*/NULL);
		V_3 = L_27;
		double L_28 = ___currentValue0;
		double L_29 = V_1;
		if ((!(((double)L_28) > ((double)L_29))))
		{
			goto IL_00c9;
		}
	}
	{
		double L_30 = ___currentValue0;
		double L_31 = V_3;
		G_B17_0 = ((((double)L_30) < ((double)L_31))? 1 : 0);
		goto IL_00ca;
	}

IL_00c9:
	{
		G_B17_0 = 0;
	}

IL_00ca:
	{
		V_0 = (bool)G_B17_0;
		goto IL_0116;
	}

IL_00d0:
	{
		ValueProperty_t1868393739 * L_32 = __this->get_m_Value2_3();
		NullCheck(L_32);
		String_t* L_33 = ValueProperty_get_propertyValue_m3340090327(L_32, /*hidden argument*/NULL);
		double L_34 = TriggerRule_GetDouble_m2201978033(__this, L_33, /*hidden argument*/NULL);
		V_4 = L_34;
		double L_35 = ___currentValue0;
		double L_36 = V_1;
		bool L_37 = TriggerRule_SafeEquals_m2862813043(__this, L_35, L_36, /*hidden argument*/NULL);
		if (L_37)
		{
			goto IL_010f;
		}
	}
	{
		double L_38 = ___currentValue0;
		double L_39 = V_4;
		bool L_40 = TriggerRule_SafeEquals_m2862813043(__this, L_38, L_39, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_010f;
		}
	}
	{
		double L_41 = ___currentValue0;
		double L_42 = V_1;
		if ((!(((double)L_41) > ((double)L_42))))
		{
			goto IL_010c;
		}
	}
	{
		double L_43 = ___currentValue0;
		double L_44 = V_4;
		G_B23_0 = ((((double)L_43) < ((double)L_44))? 1 : 0);
		goto IL_010d;
	}

IL_010c:
	{
		G_B23_0 = 0;
	}

IL_010d:
	{
		G_B25_0 = G_B23_0;
		goto IL_0110;
	}

IL_010f:
	{
		G_B25_0 = 1;
	}

IL_0110:
	{
		V_0 = (bool)G_B25_0;
		goto IL_0116;
	}

IL_0116:
	{
		bool L_45 = V_0;
		V_5 = L_45;
		goto IL_011e;
	}

IL_011e:
	{
		bool L_46 = V_5;
		return L_46;
	}
}
// System.Boolean UnityEngine.Analytics.TriggerRule::SafeEquals(System.Double,System.Double)
extern "C" IL2CPP_METHOD_ATTR bool TriggerRule_SafeEquals_m2862813043 (TriggerRule_t1946298321 * __this, double ___double10, double ___double21, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		double L_0 = ___double10;
		double L_1 = ___double21;
		double L_2 = fabs(((double)il2cpp_codegen_subtract((double)L_0, (double)L_1)));
		V_0 = (bool)((((double)L_2) < ((double)(1.0E-07)))? 1 : 0);
		goto IL_001a;
	}

IL_001a:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Double UnityEngine.Analytics.TriggerRule::GetDouble(System.Object)
extern "C" IL2CPP_METHOD_ATTR double TriggerRule_GetDouble_m2201978033 (TriggerRule_t1946298321 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		RuntimeObject * L_0 = ___value0;
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		double L_2 = Double_Parse_m4153729520(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0012;
	}

IL_0012:
	{
		double L_3 = V_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Analytics.ValueProperty::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ValueProperty__ctor_m2723448180 (ValueProperty_t1868393739 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueProperty__ctor_m2723448180_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_EditingCustomValue_0((bool)0);
		__this->set_m_PopupIndex_1(0);
		__this->set_m_FixedType_3((bool)0);
		__this->set_m_EnumTypeIsCustomizable_5((bool)1);
		__this->set_m_CanDisable_6((bool)0);
		__this->set_m_PropertyType_7(1);
		__this->set_m_Value_9(_stringLiteral757602046);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Analytics.ValueProperty::get_valueType()
extern "C" IL2CPP_METHOD_ATTR String_t* ValueProperty_get_valueType_m2516961412 (ValueProperty_t1868393739 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_ValueType_8();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Analytics.ValueProperty::set_valueType(System.String)
extern "C" IL2CPP_METHOD_ATTR void ValueProperty_set_valueType_m3307530546 (ValueProperty_t1868393739 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_m_ValueType_8(L_0);
		return;
	}
}
// System.String UnityEngine.Analytics.ValueProperty::get_propertyValue()
extern "C" IL2CPP_METHOD_ATTR String_t* ValueProperty_get_propertyValue_m3340090327 (ValueProperty_t1868393739 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B9_0 = NULL;
	{
		int32_t L_0 = __this->get_m_PropertyType_7();
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0042;
		}
	}
	{
		TrackableField_t1772682203 * L_1 = __this->get_m_Target_10();
		if (!L_1)
		{
			goto IL_0042;
		}
	}
	{
		TrackableField_t1772682203 * L_2 = __this->get_m_Target_10();
		NullCheck(L_2);
		RuntimeObject * L_3 = TrackableField_GetValue_m4059393238(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		RuntimeObject * L_4 = V_0;
		if (L_4)
		{
			goto IL_0031;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		goto IL_003c;
	}

IL_0031:
	{
		RuntimeObject * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		NullCheck(L_6);
		String_t* L_7 = String_Trim_m923598732(L_6, /*hidden argument*/NULL);
		G_B5_0 = L_7;
	}

IL_003c:
	{
		V_1 = G_B5_0;
		goto IL_0064;
	}

IL_0042:
	{
		String_t* L_8 = __this->get_m_Value_9();
		if (L_8)
		{
			goto IL_0053;
		}
	}
	{
		G_B9_0 = ((String_t*)(NULL));
		goto IL_005e;
	}

IL_0053:
	{
		String_t* L_9 = __this->get_m_Value_9();
		NullCheck(L_9);
		String_t* L_10 = String_Trim_m923598732(L_9, /*hidden argument*/NULL);
		G_B9_0 = L_10;
	}

IL_005e:
	{
		V_1 = G_B9_0;
		goto IL_0064;
	}

IL_0064:
	{
		String_t* L_11 = V_1;
		return L_11;
	}
}
// UnityEngine.Analytics.TrackableField UnityEngine.Analytics.ValueProperty::get_target()
extern "C" IL2CPP_METHOD_ATTR TrackableField_t1772682203 * ValueProperty_get_target_m1728151320 (ValueProperty_t1868393739 * __this, const RuntimeMethod* method)
{
	TrackableField_t1772682203 * V_0 = NULL;
	{
		TrackableField_t1772682203 * L_0 = __this->get_m_Target_10();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		TrackableField_t1772682203 * L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Analytics.ValueProperty::IsValid()
extern "C" IL2CPP_METHOD_ATTR bool ValueProperty_IsValid_m3724034537 (ValueProperty_t1868393739 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueProperty_IsValid_m3724034537_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B9_0 = 0;
	{
		int32_t L_0 = __this->get_m_PropertyType_7();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0077;
			}
			case 1:
			{
				goto IL_001f;
			}
			case 2:
			{
				goto IL_0052;
			}
		}
	}
	{
		goto IL_0077;
	}

IL_001f:
	{
		String_t* L_2 = __this->get_m_Value_9();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_004b;
		}
	}
	{
		String_t* L_4 = __this->get_m_ValueType_8();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = il2cpp_codegen_get_type((Il2CppMethodPointer)&Type_GetType_m1693760368, L_4, "UnityEngine.Analytics, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null");
		RuntimeTypeHandle_t3027515415  L_6 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t * L_7 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		G_B5_0 = ((((int32_t)((((RuntimeObject*)(Type_t *)L_5) == ((RuntimeObject*)(Type_t *)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_004c;
	}

IL_004b:
	{
		G_B5_0 = 1;
	}

IL_004c:
	{
		V_1 = (bool)G_B5_0;
		goto IL_007e;
	}

IL_0052:
	{
		TrackableField_t1772682203 * L_8 = __this->get_m_Target_10();
		if (!L_8)
		{
			goto IL_0070;
		}
	}
	{
		TrackableField_t1772682203 * L_9 = __this->get_m_Target_10();
		NullCheck(L_9);
		RuntimeObject * L_10 = TrackableField_GetValue_m4059393238(L_9, /*hidden argument*/NULL);
		G_B9_0 = ((((int32_t)((((RuntimeObject*)(RuntimeObject *)L_10) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0071;
	}

IL_0070:
	{
		G_B9_0 = 0;
	}

IL_0071:
	{
		V_1 = (bool)G_B9_0;
		goto IL_007e;
	}

IL_0077:
	{
		V_1 = (bool)0;
		goto IL_007e;
	}

IL_007e:
	{
		bool L_11 = V_1;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
