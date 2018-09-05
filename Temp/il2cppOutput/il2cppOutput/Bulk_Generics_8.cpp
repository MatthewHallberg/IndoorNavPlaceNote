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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// Newtonsoft.Json.JsonConverter
struct JsonConverter_t1047106545;
// Newtonsoft.Json.JsonConverterCollection
struct JsonConverterCollection_t3675964822;
// Newtonsoft.Json.JsonReader
struct JsonReader_t2369136700;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t1424496335;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1467272295;
// Newtonsoft.Json.JsonWriter/State[][]
struct StateU5BU5DU5BU5D_t3190318925;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_t1023664833;
// Newtonsoft.Json.Linq.JObject
struct JObject_t2059125928;
// Newtonsoft.Json.Linq.JPropertyKeyedCollection
struct JPropertyKeyedCollection_t1521123921;
// Newtonsoft.Json.Linq.JToken
struct JToken_t1038539247;
// Newtonsoft.Json.Linq.JTokenEqualityComparer
struct JTokenEqualityComparer_t2051491032;
// Newtonsoft.Json.Linq.JTokenType[]
struct JTokenTypeU5BU5D_t1887505675;
// Newtonsoft.Json.Serialization.IContractResolver
struct IContractResolver_t4193385603;
// Newtonsoft.Json.Serialization.IReferenceResolver
struct IReferenceResolver_t2564061104;
// Newtonsoft.Json.Serialization.ITraceWriter
struct ITraceWriter_t2623073143;
// System.ArgumentException
struct ArgumentException_t132251570;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>
struct Transform_1_t1750446691;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Reflection.MemberInfo,System.Collections.DictionaryEntry>
struct Transform_1_t152506148;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t3384741;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>
struct Dictionary_2_t3165258040;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2059959053;
// System.Collections.Generic.IEnumerable`1<System.Reflection.ParameterInfo>
struct IEnumerable_1_t840909487;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t827303578;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t3512676632;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t892470886;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition>
struct List_1_t4000102456;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t128053199;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t4072576034;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_t4176035766;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t1234605051;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t3628304265;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t899420910;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t496136383;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<System.Int32>>
struct Stack_1_t971442654;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<System.Object>>
struct Stack_1_t1100603065;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct Stack_1_t620998193;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct Stack_1_t2077994506;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct Stack_1_t176726424;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct Stack_1_t1742810365;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct Stack_1_t1339525838;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t3923495619;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1493878338;
// System.Comparison`1<System.Object>
struct Comparison_1_t2855037343;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t3836340606;
// System.Delegate
struct Delegate_t1188392813;
// System.DelegateData
struct DelegateData_t1677132599;
// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs>
struct EventHandler_1_t2935836205;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t3759279471;
// System.Func`2<System.Object,System.Object>
struct Func_2_t2447130374;
// System.Func`2<System.String,System.Boolean>
struct Func_2_t2197129486;
// System.Func`2<System.String,System.Reflection.MemberInfo>
struct Func_2_t1184875966;
// System.Func`2<System.String,System.String>
struct Func_2_t3947292210;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.InvalidProgramException
struct InvalidProgramException_t3836716986;
// System.NotImplementedException
struct NotImplementedException_t3489357830;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Predicate`1<System.Object>
struct Predicate_1_t3905400288;
// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t984015687;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t1302094432;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ParameterInfo
struct ParameterInfo_t1861056598;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_t274213469;
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
// System.Void
struct Void_t1185182177;
// UnityEngine.Color32[]
struct Color32U5BU5D_t3850468773;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2703961024;
// UnityEngine.Events.BaseInvokableCall[]
struct BaseInvokableCallU5BU5D_t3944607041;
// UnityEngine.Events.InvokableCall
struct InvokableCall_t832123510;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t2498835369;
// UnityEngine.Events.InvokableCall`1<UnityEngine.Color>
struct InvokableCall_1_t2672850562;
// UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>
struct InvokableCall_1_t2273393761;
// UnityEngine.Events.InvokableCall`2<System.Object,System.Object>
struct InvokableCall_2_t362407658;
// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>
struct InvokableCall_3_t4059188962;
// UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>
struct InvokableCall_4_t2756980746;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t3050769227;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t682124106;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Int32>>
struct UnityAction_1_t712889340;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Object>>
struct UnityAction_1_t842049751;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct UnityAction_1_t362444879;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct UnityAction_1_t1819441192;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct UnityAction_1_t4213140406;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct UnityAction_1_t1484257051;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct UnityAction_1_t1080972524;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t3535781894;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t3664942305;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t1982102915;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t3140522465;
// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct UnityAction_1_t2933211702;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t2741065664;
// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct UnityAction_2_t3283971887;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t2165061829;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct UnityAction_2_t1262235195;
// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct UnityAction_3_t1557236713;
// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
struct UnityAction_4_t682480391;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t3960448221;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_t978947469;
// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t3832605257;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3961765668;
// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t2278926278;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct UnityEvent_1_t3437345828;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t3037889027;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t614268397;
// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct UnityEvent_3_t2404744798;
// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
struct UnityEvent_4_t4085588227;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t234526808;
// UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenCallback
struct ColorTweenCallback_t1121741130;
// UnityEngine.UI.CoroutineTween.FloatTween/FloatTweenCallback
struct FloatTweenCallback_t1856710240;
// UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>
struct U3CStartU3Ec__Iterator0_t3860393442;
// UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>
struct U3CStartU3Ec__Iterator0_t30141770;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_t3520241082;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Int32>>
struct ObjectPool_1_t4122643707;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>
struct ObjectPool_1_t4251804118;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct ObjectPool_1_t3772199246;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct ObjectPool_1_t934228263;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct ObjectPool_1_t3327927477;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct ObjectPool_1_t599044122;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct ObjectPool_1_t195759595;
// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t2779729376;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t934056436;
// WanzyeeStudio.Json.PartialConverter`1<System.Object>
struct PartialConverter_1_t746178589;
// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Bounds>
struct PartialConverter_1_t4227877631;
// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Color>
struct PartialConverter_1_t221758749;
// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Matrix4x4>
struct PartialConverter_1_t3778941564;
// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Quaternion>
struct PartialConverter_1_t4262968052;
// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Rect>
struct PartialConverter_1_t26552284;
// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector2>
struct PartialConverter_1_t4117269244;
// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector3>
struct PartialConverter_1_t1388385889;
// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector4>
struct PartialConverter_1_t985101362;

extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern RuntimeClass* Color_t2555686324_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* Enumerator_t824473519_il2cpp_TypeInfo_var;
extern RuntimeClass* FieldInfo_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t1184875966_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t2197129486_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t3947292210_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidProgramException_t3836716986_il2cpp_TypeInfo_var;
extern RuntimeClass* InvokableCall_t832123510_il2cpp_TypeInfo_var;
extern RuntimeClass* JObject_t2059125928_il2cpp_TypeInfo_var;
extern RuntimeClass* JToken_t1038539247_il2cpp_TypeInfo_var;
extern RuntimeClass* JsonConverterU5BU5D_t155849004_il2cpp_TypeInfo_var;
extern RuntimeClass* LoadSceneMode_t3251202195_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern RuntimeClass* NotImplementedException_t3489357830_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* PropertyInfo_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Scene_t2348375561_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1132744560;
extern String_t* _stringLiteral1148368186;
extern String_t* _stringLiteral1864861238;
extern String_t* _stringLiteral234128521;
extern String_t* _stringLiteral3452614530;
extern String_t* _stringLiteral3534955218;
extern String_t* _stringLiteral3818767439;
extern String_t* _stringLiteral3827062036;
extern String_t* _stringLiteral3926843441;
extern String_t* _stringLiteral46997234;
extern String_t* _stringLiteral486677601;
extern String_t* _stringLiteral62725243;
extern const RuntimeMethod* Dictionary_2_GetEnumerator_m4199775080_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Any_TisParameterInfo_t1861056598_m2308149110_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Any_TisString_t_m3256256093_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Any_TisString_t_m3986012742_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Distinct_TisString_t_m564215000_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ToDictionary_TisString_t_TisString_t_TisMemberInfo_t_m2153618120_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m79352559_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m841967122_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m1082416029_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m1878178629_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m4235938257_RuntimeMethod_var;
extern const RuntimeMethod* IndexedSet_1_GetEnumerator_m3750514392_RuntimeMethod_var;
extern const RuntimeMethod* IndexedSet_1_Insert_m1432638049_RuntimeMethod_var;
extern const RuntimeMethod* InvokableCall_1_Invoke_m1160628299_RuntimeMethod_var;
extern const RuntimeMethod* InvokableCall_1_Invoke_m1524307439_RuntimeMethod_var;
extern const RuntimeMethod* InvokableCall_2_Invoke_m1520082677_RuntimeMethod_var;
extern const RuntimeMethod* InvokableCall_3_Invoke_m3141788616_RuntimeMethod_var;
extern const RuntimeMethod* InvokableCall_4_Invoke_m3371718871_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m221608719_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m188113207_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m1245201994_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m4156046467_RuntimeMethod_var;
extern const RuntimeMethod* PartialConverter_1_GetProperties_m114468801_RuntimeMethod_var;
extern const RuntimeMethod* PartialConverter_1_GetProperties_m3067484463_RuntimeMethod_var;
extern const RuntimeMethod* PartialConverter_1_GetProperties_m3084396830_RuntimeMethod_var;
extern const RuntimeMethod* PartialConverter_1_GetProperties_m3626045738_RuntimeMethod_var;
extern const RuntimeMethod* PartialConverter_1_GetProperties_m4027436282_RuntimeMethod_var;
extern const RuntimeMethod* PartialConverter_1_GetProperties_m4231807800_RuntimeMethod_var;
extern const RuntimeMethod* PartialConverter_1_GetProperties_m4264923054_RuntimeMethod_var;
extern const RuntimeMethod* PartialConverter_1_GetProperties_m73501853_RuntimeMethod_var;
extern const RuntimeMethod* PartialConverter_1_GetProperties_m78812442_RuntimeMethod_var;
extern const RuntimeMethod* PartialConverter_1_Throw_m113887690_RuntimeMethod_var;
extern const RuntimeMethod* PartialConverter_1_Throw_m1644066090_RuntimeMethod_var;
extern const RuntimeMethod* PartialConverter_1_Throw_m204226870_RuntimeMethod_var;
extern const RuntimeMethod* PartialConverter_1_Throw_m2682608100_RuntimeMethod_var;
extern const RuntimeMethod* PartialConverter_1_Throw_m2813616356_RuntimeMethod_var;
extern const RuntimeMethod* PartialConverter_1_Throw_m3609696026_RuntimeMethod_var;
extern const RuntimeMethod* PartialConverter_1_Throw_m3938742688_RuntimeMethod_var;
extern const RuntimeMethod* PartialConverter_1_Throw_m4023636076_RuntimeMethod_var;
extern const RuntimeMethod* PartialConverter_1_Throw_m4171284785_RuntimeMethod_var;
extern const RuntimeMethod* String_IsNullOrEmpty_m2969720369_RuntimeMethod_var;
extern const RuntimeMethod* U3CStartU3Ec__Iterator0_Reset_m3175110837_RuntimeMethod_var;
extern const RuntimeMethod* U3CStartU3Ec__Iterator0_Reset_m656428886_RuntimeMethod_var;
extern const uint32_t IndexedSet_1_GetEnumerator_m3750514392_MetadataUsageId;
extern const uint32_t IndexedSet_1_Insert_m1432638049_MetadataUsageId;
extern const uint32_t InvokableCall_1_Invoke_m1160628299_MetadataUsageId;
extern const uint32_t InvokableCall_1_Invoke_m1524307439_MetadataUsageId;
extern const uint32_t InvokableCall_1__ctor_m2254957474_MetadataUsageId;
extern const uint32_t InvokableCall_1__ctor_m3910153236_MetadataUsageId;
extern const uint32_t InvokableCall_2_Invoke_m1520082677_MetadataUsageId;
extern const uint32_t InvokableCall_2__ctor_m3619012188_MetadataUsageId;
extern const uint32_t InvokableCall_3_Invoke_m3141788616_MetadataUsageId;
extern const uint32_t InvokableCall_3__ctor_m4245235439_MetadataUsageId;
extern const uint32_t InvokableCall_4_Invoke_m3371718871_MetadataUsageId;
extern const uint32_t InvokableCall_4__ctor_m3136187504_MetadataUsageId;
extern const uint32_t ObjectPool_1_Release_m3263354170_MetadataUsageId;
extern const uint32_t PartialConverter_1_CanConvert_m1321099819_MetadataUsageId;
extern const uint32_t PartialConverter_1_CanConvert_m1658730869_MetadataUsageId;
extern const uint32_t PartialConverter_1_CanConvert_m253652500_MetadataUsageId;
extern const uint32_t PartialConverter_1_CanConvert_m3452506644_MetadataUsageId;
extern const uint32_t PartialConverter_1_CanConvert_m3786872863_MetadataUsageId;
extern const uint32_t PartialConverter_1_CanConvert_m534917978_MetadataUsageId;
extern const uint32_t PartialConverter_1_CanConvert_m632837558_MetadataUsageId;
extern const uint32_t PartialConverter_1_CanConvert_m668578828_MetadataUsageId;
extern const uint32_t PartialConverter_1_CanConvert_m70908369_MetadataUsageId;
extern const uint32_t PartialConverter_1_GetMember_m1440987727_MetadataUsageId;
extern const uint32_t PartialConverter_1_GetMember_m1656209606_MetadataUsageId;
extern const uint32_t PartialConverter_1_GetMember_m1710983082_MetadataUsageId;
extern const uint32_t PartialConverter_1_GetMember_m2421627783_MetadataUsageId;
extern const uint32_t PartialConverter_1_GetMember_m2703492604_MetadataUsageId;
extern const uint32_t PartialConverter_1_GetMember_m3151651989_MetadataUsageId;
extern const uint32_t PartialConverter_1_GetMember_m3397309316_MetadataUsageId;
extern const uint32_t PartialConverter_1_GetMember_m4221538838_MetadataUsageId;
extern const uint32_t PartialConverter_1_GetMember_m908464153_MetadataUsageId;
extern const uint32_t PartialConverter_1_GetProperties_m114468801_MetadataUsageId;
extern const uint32_t PartialConverter_1_GetProperties_m3067484463_MetadataUsageId;
extern const uint32_t PartialConverter_1_GetProperties_m3084396830_MetadataUsageId;
extern const uint32_t PartialConverter_1_GetProperties_m3626045738_MetadataUsageId;
extern const uint32_t PartialConverter_1_GetProperties_m4027436282_MetadataUsageId;
extern const uint32_t PartialConverter_1_GetProperties_m4231807800_MetadataUsageId;
extern const uint32_t PartialConverter_1_GetProperties_m4264923054_MetadataUsageId;
extern const uint32_t PartialConverter_1_GetProperties_m73501853_MetadataUsageId;
extern const uint32_t PartialConverter_1_GetProperties_m78812442_MetadataUsageId;
extern const uint32_t PartialConverter_1_GetValueType_m1540968719_MetadataUsageId;
extern const uint32_t PartialConverter_1_GetValueType_m1579989876_MetadataUsageId;
extern const uint32_t PartialConverter_1_GetValueType_m167545522_MetadataUsageId;
extern const uint32_t PartialConverter_1_GetValueType_m1952652809_MetadataUsageId;
extern const uint32_t PartialConverter_1_GetValueType_m2383040597_MetadataUsageId;
extern const uint32_t PartialConverter_1_GetValueType_m2802259946_MetadataUsageId;
extern const uint32_t PartialConverter_1_GetValueType_m2841381253_MetadataUsageId;
extern const uint32_t PartialConverter_1_GetValueType_m3559925856_MetadataUsageId;
extern const uint32_t PartialConverter_1_GetValueType_m565225238_MetadataUsageId;
extern const uint32_t PartialConverter_1_GetValue_m227917407_MetadataUsageId;
extern const uint32_t PartialConverter_1_GetValue_m2749236690_MetadataUsageId;
extern const uint32_t PartialConverter_1_GetValue_m2996853095_MetadataUsageId;
extern const uint32_t PartialConverter_1_GetValue_m3278566135_MetadataUsageId;
extern const uint32_t PartialConverter_1_GetValue_m3381299223_MetadataUsageId;
extern const uint32_t PartialConverter_1_GetValue_m3646507789_MetadataUsageId;
extern const uint32_t PartialConverter_1_GetValue_m3726615107_MetadataUsageId;
extern const uint32_t PartialConverter_1_GetValue_m3769131421_MetadataUsageId;
extern const uint32_t PartialConverter_1_GetValue_m854870333_MetadataUsageId;
extern const uint32_t PartialConverter_1_ReadJson_m1118020979_MetadataUsageId;
extern const uint32_t PartialConverter_1_ReadJson_m1474408223_MetadataUsageId;
extern const uint32_t PartialConverter_1_ReadJson_m2092313595_MetadataUsageId;
extern const uint32_t PartialConverter_1_ReadJson_m2367244053_MetadataUsageId;
extern const uint32_t PartialConverter_1_ReadJson_m3008381402_MetadataUsageId;
extern const uint32_t PartialConverter_1_ReadJson_m3424496375_MetadataUsageId;
extern const uint32_t PartialConverter_1_ReadJson_m3612116199_MetadataUsageId;
extern const uint32_t PartialConverter_1_ReadJson_m3838817349_MetadataUsageId;
extern const uint32_t PartialConverter_1_ReadJson_m61954850_MetadataUsageId;
extern const uint32_t PartialConverter_1_SetValue_m1809311800_MetadataUsageId;
extern const uint32_t PartialConverter_1_SetValue_m2160176761_MetadataUsageId;
extern const uint32_t PartialConverter_1_SetValue_m2191073195_MetadataUsageId;
extern const uint32_t PartialConverter_1_SetValue_m27324069_MetadataUsageId;
extern const uint32_t PartialConverter_1_SetValue_m3039122228_MetadataUsageId;
extern const uint32_t PartialConverter_1_SetValue_m3598353698_MetadataUsageId;
extern const uint32_t PartialConverter_1_SetValue_m3779109062_MetadataUsageId;
extern const uint32_t PartialConverter_1_SetValue_m3860761639_MetadataUsageId;
extern const uint32_t PartialConverter_1_SetValue_m982282995_MetadataUsageId;
extern const uint32_t PartialConverter_1_Throw_m113887690_MetadataUsageId;
extern const uint32_t PartialConverter_1_Throw_m1644066090_MetadataUsageId;
extern const uint32_t PartialConverter_1_Throw_m204226870_MetadataUsageId;
extern const uint32_t PartialConverter_1_Throw_m2682608100_MetadataUsageId;
extern const uint32_t PartialConverter_1_Throw_m2813616356_MetadataUsageId;
extern const uint32_t PartialConverter_1_Throw_m3609696026_MetadataUsageId;
extern const uint32_t PartialConverter_1_Throw_m3938742688_MetadataUsageId;
extern const uint32_t PartialConverter_1_Throw_m4023636076_MetadataUsageId;
extern const uint32_t PartialConverter_1_Throw_m4171284785_MetadataUsageId;
extern const uint32_t PartialConverter_1_WriteJson_m1060258212_MetadataUsageId;
extern const uint32_t PartialConverter_1_WriteJson_m1232716716_MetadataUsageId;
extern const uint32_t PartialConverter_1_WriteJson_m1687008759_MetadataUsageId;
extern const uint32_t PartialConverter_1_WriteJson_m1892200660_MetadataUsageId;
extern const uint32_t PartialConverter_1_WriteJson_m1998588366_MetadataUsageId;
extern const uint32_t PartialConverter_1_WriteJson_m2925692181_MetadataUsageId;
extern const uint32_t PartialConverter_1_WriteJson_m3657761463_MetadataUsageId;
extern const uint32_t PartialConverter_1_WriteJson_m3924695376_MetadataUsageId;
extern const uint32_t PartialConverter_1_WriteJson_m3997364603_MetadataUsageId;
extern const uint32_t TweenRunner_1_StartTween_m1055628540_MetadataUsageId;
extern const uint32_t TweenRunner_1_StartTween_m2247690200_MetadataUsageId;
extern const uint32_t U3CStartU3Ec__Iterator0_MoveNext_m4270440387_MetadataUsageId;
extern const uint32_t U3CStartU3Ec__Iterator0_MoveNext_m524356752_MetadataUsageId;
extern const uint32_t U3CStartU3Ec__Iterator0_Reset_m3175110837_MetadataUsageId;
extern const uint32_t U3CStartU3Ec__Iterator0_Reset_m656428886_MetadataUsageId;
extern const uint32_t UnityAction_1_BeginInvoke_m1166386047_MetadataUsageId;
extern const uint32_t UnityAction_1_BeginInvoke_m2530432941_MetadataUsageId;
extern const uint32_t UnityAction_1_BeginInvoke_m2713840246_MetadataUsageId;
extern const uint32_t UnityAction_1_BeginInvoke_m3721186338_MetadataUsageId;
extern const uint32_t UnityAction_1_BeginInvoke_m4018737650_MetadataUsageId;
extern const uint32_t UnityAction_1_BeginInvoke_m677813163_MetadataUsageId;
extern const uint32_t UnityAction_2_BeginInvoke_m1733258791_MetadataUsageId;
extern const uint32_t UnityAction_2_BeginInvoke_m1769266175_MetadataUsageId;
extern const uint32_t UnityEvent_1_FindMethod_Impl_m1397247356_MetadataUsageId;
extern const uint32_t UnityEvent_1_FindMethod_Impl_m1420160216_MetadataUsageId;
extern const uint32_t UnityEvent_1_FindMethod_Impl_m2325208510_MetadataUsageId;
extern const uint32_t UnityEvent_1_FindMethod_Impl_m2511430237_MetadataUsageId;
extern const uint32_t UnityEvent_1_FindMethod_Impl_m322741469_MetadataUsageId;
extern const uint32_t UnityEvent_1_FindMethod_Impl_m555893253_MetadataUsageId;
extern const uint32_t UnityEvent_1_Invoke_m2734859485_MetadataUsageId;
extern const uint32_t UnityEvent_1_Invoke_m3400677460_MetadataUsageId;
extern const uint32_t UnityEvent_1_Invoke_m3432495026_MetadataUsageId;
extern const uint32_t UnityEvent_1_Invoke_m3604335408_MetadataUsageId;
extern const uint32_t UnityEvent_1_Invoke_m3884411426_MetadataUsageId;
extern const uint32_t UnityEvent_1_Invoke_m933614109_MetadataUsageId;
extern const uint32_t UnityEvent_2_FindMethod_Impl_m2569180594_MetadataUsageId;
extern const uint32_t UnityEvent_3_FindMethod_Impl_m1640458315_MetadataUsageId;
extern const uint32_t UnityEvent_4_FindMethod_Impl_m3410547086_MetadataUsageId;

struct JsonConverterU5BU5D_t155849004;
struct ObjectU5BU5D_t2843939325;
struct ParameterInfoU5BU5D_t390618515;
struct StringU5BU5D_t1281789340;
struct TypeU5BU5D_t3940880105;


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
#ifndef JSONCONVERTER_T1047106545_H
#define JSONCONVERTER_T1047106545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.JsonConverter
struct  JsonConverter_t1047106545  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONCONVERTER_T1047106545_H
#ifndef JTOKEN_T1038539247_H
#define JTOKEN_T1038539247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Linq.JToken
struct  JToken_t1038539247  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JToken::_parent
	JContainer_t1023664833 * ____parent_1;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_previous
	JToken_t1038539247 * ____previous_2;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_next
	JToken_t1038539247 * ____next_3;
	// System.Object Newtonsoft.Json.Linq.JToken::_annotations
	RuntimeObject * ____annotations_4;

public:
	inline static int32_t get_offset_of__parent_1() { return static_cast<int32_t>(offsetof(JToken_t1038539247, ____parent_1)); }
	inline JContainer_t1023664833 * get__parent_1() const { return ____parent_1; }
	inline JContainer_t1023664833 ** get_address_of__parent_1() { return &____parent_1; }
	inline void set__parent_1(JContainer_t1023664833 * value)
	{
		____parent_1 = value;
		Il2CppCodeGenWriteBarrier((&____parent_1), value);
	}

	inline static int32_t get_offset_of__previous_2() { return static_cast<int32_t>(offsetof(JToken_t1038539247, ____previous_2)); }
	inline JToken_t1038539247 * get__previous_2() const { return ____previous_2; }
	inline JToken_t1038539247 ** get_address_of__previous_2() { return &____previous_2; }
	inline void set__previous_2(JToken_t1038539247 * value)
	{
		____previous_2 = value;
		Il2CppCodeGenWriteBarrier((&____previous_2), value);
	}

	inline static int32_t get_offset_of__next_3() { return static_cast<int32_t>(offsetof(JToken_t1038539247, ____next_3)); }
	inline JToken_t1038539247 * get__next_3() const { return ____next_3; }
	inline JToken_t1038539247 ** get_address_of__next_3() { return &____next_3; }
	inline void set__next_3(JToken_t1038539247 * value)
	{
		____next_3 = value;
		Il2CppCodeGenWriteBarrier((&____next_3), value);
	}

	inline static int32_t get_offset_of__annotations_4() { return static_cast<int32_t>(offsetof(JToken_t1038539247, ____annotations_4)); }
	inline RuntimeObject * get__annotations_4() const { return ____annotations_4; }
	inline RuntimeObject ** get_address_of__annotations_4() { return &____annotations_4; }
	inline void set__annotations_4(RuntimeObject * value)
	{
		____annotations_4 = value;
		Il2CppCodeGenWriteBarrier((&____annotations_4), value);
	}
};

struct JToken_t1038539247_StaticFields
{
public:
	// Newtonsoft.Json.Linq.JTokenEqualityComparer Newtonsoft.Json.Linq.JToken::_equalityComparer
	JTokenEqualityComparer_t2051491032 * ____equalityComparer_0;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BooleanTypes
	JTokenTypeU5BU5D_t1887505675* ___BooleanTypes_5;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::NumberTypes
	JTokenTypeU5BU5D_t1887505675* ___NumberTypes_6;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::StringTypes
	JTokenTypeU5BU5D_t1887505675* ___StringTypes_7;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::GuidTypes
	JTokenTypeU5BU5D_t1887505675* ___GuidTypes_8;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::TimeSpanTypes
	JTokenTypeU5BU5D_t1887505675* ___TimeSpanTypes_9;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::UriTypes
	JTokenTypeU5BU5D_t1887505675* ___UriTypes_10;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::CharTypes
	JTokenTypeU5BU5D_t1887505675* ___CharTypes_11;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::DateTimeTypes
	JTokenTypeU5BU5D_t1887505675* ___DateTimeTypes_12;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BytesTypes
	JTokenTypeU5BU5D_t1887505675* ___BytesTypes_13;

public:
	inline static int32_t get_offset_of__equalityComparer_0() { return static_cast<int32_t>(offsetof(JToken_t1038539247_StaticFields, ____equalityComparer_0)); }
	inline JTokenEqualityComparer_t2051491032 * get__equalityComparer_0() const { return ____equalityComparer_0; }
	inline JTokenEqualityComparer_t2051491032 ** get_address_of__equalityComparer_0() { return &____equalityComparer_0; }
	inline void set__equalityComparer_0(JTokenEqualityComparer_t2051491032 * value)
	{
		____equalityComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&____equalityComparer_0), value);
	}

	inline static int32_t get_offset_of_BooleanTypes_5() { return static_cast<int32_t>(offsetof(JToken_t1038539247_StaticFields, ___BooleanTypes_5)); }
	inline JTokenTypeU5BU5D_t1887505675* get_BooleanTypes_5() const { return ___BooleanTypes_5; }
	inline JTokenTypeU5BU5D_t1887505675** get_address_of_BooleanTypes_5() { return &___BooleanTypes_5; }
	inline void set_BooleanTypes_5(JTokenTypeU5BU5D_t1887505675* value)
	{
		___BooleanTypes_5 = value;
		Il2CppCodeGenWriteBarrier((&___BooleanTypes_5), value);
	}

	inline static int32_t get_offset_of_NumberTypes_6() { return static_cast<int32_t>(offsetof(JToken_t1038539247_StaticFields, ___NumberTypes_6)); }
	inline JTokenTypeU5BU5D_t1887505675* get_NumberTypes_6() const { return ___NumberTypes_6; }
	inline JTokenTypeU5BU5D_t1887505675** get_address_of_NumberTypes_6() { return &___NumberTypes_6; }
	inline void set_NumberTypes_6(JTokenTypeU5BU5D_t1887505675* value)
	{
		___NumberTypes_6 = value;
		Il2CppCodeGenWriteBarrier((&___NumberTypes_6), value);
	}

	inline static int32_t get_offset_of_StringTypes_7() { return static_cast<int32_t>(offsetof(JToken_t1038539247_StaticFields, ___StringTypes_7)); }
	inline JTokenTypeU5BU5D_t1887505675* get_StringTypes_7() const { return ___StringTypes_7; }
	inline JTokenTypeU5BU5D_t1887505675** get_address_of_StringTypes_7() { return &___StringTypes_7; }
	inline void set_StringTypes_7(JTokenTypeU5BU5D_t1887505675* value)
	{
		___StringTypes_7 = value;
		Il2CppCodeGenWriteBarrier((&___StringTypes_7), value);
	}

	inline static int32_t get_offset_of_GuidTypes_8() { return static_cast<int32_t>(offsetof(JToken_t1038539247_StaticFields, ___GuidTypes_8)); }
	inline JTokenTypeU5BU5D_t1887505675* get_GuidTypes_8() const { return ___GuidTypes_8; }
	inline JTokenTypeU5BU5D_t1887505675** get_address_of_GuidTypes_8() { return &___GuidTypes_8; }
	inline void set_GuidTypes_8(JTokenTypeU5BU5D_t1887505675* value)
	{
		___GuidTypes_8 = value;
		Il2CppCodeGenWriteBarrier((&___GuidTypes_8), value);
	}

	inline static int32_t get_offset_of_TimeSpanTypes_9() { return static_cast<int32_t>(offsetof(JToken_t1038539247_StaticFields, ___TimeSpanTypes_9)); }
	inline JTokenTypeU5BU5D_t1887505675* get_TimeSpanTypes_9() const { return ___TimeSpanTypes_9; }
	inline JTokenTypeU5BU5D_t1887505675** get_address_of_TimeSpanTypes_9() { return &___TimeSpanTypes_9; }
	inline void set_TimeSpanTypes_9(JTokenTypeU5BU5D_t1887505675* value)
	{
		___TimeSpanTypes_9 = value;
		Il2CppCodeGenWriteBarrier((&___TimeSpanTypes_9), value);
	}

	inline static int32_t get_offset_of_UriTypes_10() { return static_cast<int32_t>(offsetof(JToken_t1038539247_StaticFields, ___UriTypes_10)); }
	inline JTokenTypeU5BU5D_t1887505675* get_UriTypes_10() const { return ___UriTypes_10; }
	inline JTokenTypeU5BU5D_t1887505675** get_address_of_UriTypes_10() { return &___UriTypes_10; }
	inline void set_UriTypes_10(JTokenTypeU5BU5D_t1887505675* value)
	{
		___UriTypes_10 = value;
		Il2CppCodeGenWriteBarrier((&___UriTypes_10), value);
	}

	inline static int32_t get_offset_of_CharTypes_11() { return static_cast<int32_t>(offsetof(JToken_t1038539247_StaticFields, ___CharTypes_11)); }
	inline JTokenTypeU5BU5D_t1887505675* get_CharTypes_11() const { return ___CharTypes_11; }
	inline JTokenTypeU5BU5D_t1887505675** get_address_of_CharTypes_11() { return &___CharTypes_11; }
	inline void set_CharTypes_11(JTokenTypeU5BU5D_t1887505675* value)
	{
		___CharTypes_11 = value;
		Il2CppCodeGenWriteBarrier((&___CharTypes_11), value);
	}

	inline static int32_t get_offset_of_DateTimeTypes_12() { return static_cast<int32_t>(offsetof(JToken_t1038539247_StaticFields, ___DateTimeTypes_12)); }
	inline JTokenTypeU5BU5D_t1887505675* get_DateTimeTypes_12() const { return ___DateTimeTypes_12; }
	inline JTokenTypeU5BU5D_t1887505675** get_address_of_DateTimeTypes_12() { return &___DateTimeTypes_12; }
	inline void set_DateTimeTypes_12(JTokenTypeU5BU5D_t1887505675* value)
	{
		___DateTimeTypes_12 = value;
		Il2CppCodeGenWriteBarrier((&___DateTimeTypes_12), value);
	}

	inline static int32_t get_offset_of_BytesTypes_13() { return static_cast<int32_t>(offsetof(JToken_t1038539247_StaticFields, ___BytesTypes_13)); }
	inline JTokenTypeU5BU5D_t1887505675* get_BytesTypes_13() const { return ___BytesTypes_13; }
	inline JTokenTypeU5BU5D_t1887505675** get_address_of_BytesTypes_13() { return &___BytesTypes_13; }
	inline void set_BytesTypes_13(JTokenTypeU5BU5D_t1887505675* value)
	{
		___BytesTypes_13 = value;
		Il2CppCodeGenWriteBarrier((&___BytesTypes_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JTOKEN_T1038539247_H
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
#ifndef DICTIONARY_2_T3384741_H
#define DICTIONARY_2_T3384741_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct  Dictionary_2_t3384741  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	ObjectU5BU5D_t2843939325* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	Int32U5BU5D_t385246372* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___keySlots_6)); }
	inline ObjectU5BU5D_t2843939325* get_keySlots_6() const { return ___keySlots_6; }
	inline ObjectU5BU5D_t2843939325** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(ObjectU5BU5D_t2843939325* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___valueSlots_7)); }
	inline Int32U5BU5D_t385246372* get_valueSlots_7() const { return ___valueSlots_7; }
	inline Int32U5BU5D_t385246372** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(Int32U5BU5D_t385246372* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3384741_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t1750446691 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t1750446691 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t1750446691 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t1750446691 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3384741_H
#ifndef DICTIONARY_2_T3165258040_H
#define DICTIONARY_2_T3165258040_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>
struct  Dictionary_2_t3165258040  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	MemberInfoU5BU5D_t1302094432* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3165258040, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3165258040, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3165258040, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3165258040, ___valueSlots_7)); }
	inline MemberInfoU5BU5D_t1302094432* get_valueSlots_7() const { return ___valueSlots_7; }
	inline MemberInfoU5BU5D_t1302094432** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(MemberInfoU5BU5D_t1302094432* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3165258040, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3165258040, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3165258040, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3165258040, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3165258040, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3165258040, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3165258040, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3165258040_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t152506148 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3165258040_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t152506148 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t152506148 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t152506148 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3165258040_H
#ifndef LIST_1_T128053199_H
#define LIST_1_T128053199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Int32>
struct  List_1_t128053199  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t385246372* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____items_1)); }
	inline Int32U5BU5D_t385246372* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t385246372** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t385246372* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t128053199_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Int32U5BU5D_t385246372* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t128053199_StaticFields, ___EmptyArray_4)); }
	inline Int32U5BU5D_t385246372* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Int32U5BU5D_t385246372** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Int32U5BU5D_t385246372* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T128053199_H
#ifndef LIST_1_T257213610_H
#define LIST_1_T257213610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Object>
struct  List_1_t257213610  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t2843939325* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____items_1)); }
	inline ObjectU5BU5D_t2843939325* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t2843939325** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t2843939325* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t257213610_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ObjectU5BU5D_t2843939325* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t257213610_StaticFields, ___EmptyArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T257213610_H
#ifndef LIST_1_T4072576034_H
#define LIST_1_T4072576034_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Color32>
struct  List_1_t4072576034  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Color32U5BU5D_t3850468773* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4072576034, ____items_1)); }
	inline Color32U5BU5D_t3850468773* get__items_1() const { return ____items_1; }
	inline Color32U5BU5D_t3850468773** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Color32U5BU5D_t3850468773* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4072576034, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4072576034, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t4072576034_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Color32U5BU5D_t3850468773* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t4072576034_StaticFields, ___EmptyArray_4)); }
	inline Color32U5BU5D_t3850468773* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Color32U5BU5D_t3850468773** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Color32U5BU5D_t3850468773* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T4072576034_H
#ifndef LIST_1_T4176035766_H
#define LIST_1_T4176035766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct  List_1_t4176035766  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BaseInvokableCallU5BU5D_t3944607041* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4176035766, ____items_1)); }
	inline BaseInvokableCallU5BU5D_t3944607041* get__items_1() const { return ____items_1; }
	inline BaseInvokableCallU5BU5D_t3944607041** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BaseInvokableCallU5BU5D_t3944607041* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4176035766, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4176035766, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t4176035766_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	BaseInvokableCallU5BU5D_t3944607041* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t4176035766_StaticFields, ___EmptyArray_4)); }
	inline BaseInvokableCallU5BU5D_t3944607041* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline BaseInvokableCallU5BU5D_t3944607041** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(BaseInvokableCallU5BU5D_t3944607041* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T4176035766_H
#ifndef LIST_1_T1234605051_H
#define LIST_1_T1234605051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct  List_1_t1234605051  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UIVertexU5BU5D_t1981460040* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1234605051, ____items_1)); }
	inline UIVertexU5BU5D_t1981460040* get__items_1() const { return ____items_1; }
	inline UIVertexU5BU5D_t1981460040** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UIVertexU5BU5D_t1981460040* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1234605051, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1234605051, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1234605051_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	UIVertexU5BU5D_t1981460040* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1234605051_StaticFields, ___EmptyArray_4)); }
	inline UIVertexU5BU5D_t1981460040* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(UIVertexU5BU5D_t1981460040* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1234605051_H
#ifndef LIST_1_T3628304265_H
#define LIST_1_T3628304265_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct  List_1_t3628304265  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector2U5BU5D_t1457185986* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3628304265, ____items_1)); }
	inline Vector2U5BU5D_t1457185986* get__items_1() const { return ____items_1; }
	inline Vector2U5BU5D_t1457185986** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector2U5BU5D_t1457185986* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3628304265, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3628304265, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3628304265_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Vector2U5BU5D_t1457185986* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3628304265_StaticFields, ___EmptyArray_4)); }
	inline Vector2U5BU5D_t1457185986* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Vector2U5BU5D_t1457185986** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Vector2U5BU5D_t1457185986* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3628304265_H
#ifndef LIST_1_T899420910_H
#define LIST_1_T899420910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct  List_1_t899420910  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_t1718750761* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t899420910, ____items_1)); }
	inline Vector3U5BU5D_t1718750761* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_t1718750761** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_t1718750761* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t899420910, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t899420910, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t899420910_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Vector3U5BU5D_t1718750761* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t899420910_StaticFields, ___EmptyArray_4)); }
	inline Vector3U5BU5D_t1718750761* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Vector3U5BU5D_t1718750761** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Vector3U5BU5D_t1718750761* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T899420910_H
#ifndef LIST_1_T496136383_H
#define LIST_1_T496136383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct  List_1_t496136383  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector4U5BU5D_t934056436* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t496136383, ____items_1)); }
	inline Vector4U5BU5D_t934056436* get__items_1() const { return ____items_1; }
	inline Vector4U5BU5D_t934056436** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector4U5BU5D_t934056436* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t496136383, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t496136383, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t496136383_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Vector4U5BU5D_t934056436* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t496136383_StaticFields, ___EmptyArray_4)); }
	inline Vector4U5BU5D_t934056436* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Vector4U5BU5D_t934056436** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Vector4U5BU5D_t934056436* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T496136383_H
#ifndef STACK_1_T3923495619_H
#define STACK_1_T3923495619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Stack`1<System.Object>
struct  Stack_1_t3923495619  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_t2843939325* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t3923495619, ____array_0)); }
	inline ObjectU5BU5D_t2843939325* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_t2843939325** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_t2843939325* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t3923495619, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t3923495619, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACK_1_T3923495619_H
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
#ifndef BASEINVOKABLECALL_T2703961024_H
#define BASEINVOKABLECALL_T2703961024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.BaseInvokableCall
struct  BaseInvokableCall_t2703961024  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEINVOKABLECALL_T2703961024_H
#ifndef UNITYEVENTBASE_T3960448221_H
#define UNITYEVENTBASE_T3960448221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t3960448221  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t2498835369 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t3050769227 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_Calls_0)); }
	inline InvokableCallList_t2498835369 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t2498835369 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t2498835369 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t3050769227 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t3050769227 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t3050769227 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T3960448221_H
#ifndef INDEXEDSET_1_T234526808_H
#define INDEXEDSET_1_T234526808_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct  IndexedSet_1_t234526808  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> UnityEngine.UI.Collections.IndexedSet`1::m_List
	List_1_t257213610 * ___m_List_0;
	// System.Collections.Generic.Dictionary`2<T,System.Int32> UnityEngine.UI.Collections.IndexedSet`1::m_Dictionary
	Dictionary_2_t3384741 * ___m_Dictionary_1;

public:
	inline static int32_t get_offset_of_m_List_0() { return static_cast<int32_t>(offsetof(IndexedSet_1_t234526808, ___m_List_0)); }
	inline List_1_t257213610 * get_m_List_0() const { return ___m_List_0; }
	inline List_1_t257213610 ** get_address_of_m_List_0() { return &___m_List_0; }
	inline void set_m_List_0(List_1_t257213610 * value)
	{
		___m_List_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_List_0), value);
	}

	inline static int32_t get_offset_of_m_Dictionary_1() { return static_cast<int32_t>(offsetof(IndexedSet_1_t234526808, ___m_Dictionary_1)); }
	inline Dictionary_2_t3384741 * get_m_Dictionary_1() const { return ___m_Dictionary_1; }
	inline Dictionary_2_t3384741 ** get_address_of_m_Dictionary_1() { return &___m_Dictionary_1; }
	inline void set_m_Dictionary_1(Dictionary_2_t3384741 * value)
	{
		___m_Dictionary_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Dictionary_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INDEXEDSET_1_T234526808_H
#ifndef TWEENRUNNER_1_T3055525458_H
#define TWEENRUNNER_1_T3055525458_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct  TweenRunner_1_t3055525458  : public RuntimeObject
{
public:
	// UnityEngine.MonoBehaviour UnityEngine.UI.CoroutineTween.TweenRunner`1::m_CoroutineContainer
	MonoBehaviour_t3962482529 * ___m_CoroutineContainer_0;
	// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1::m_Tween
	RuntimeObject* ___m_Tween_1;

public:
	inline static int32_t get_offset_of_m_CoroutineContainer_0() { return static_cast<int32_t>(offsetof(TweenRunner_1_t3055525458, ___m_CoroutineContainer_0)); }
	inline MonoBehaviour_t3962482529 * get_m_CoroutineContainer_0() const { return ___m_CoroutineContainer_0; }
	inline MonoBehaviour_t3962482529 ** get_address_of_m_CoroutineContainer_0() { return &___m_CoroutineContainer_0; }
	inline void set_m_CoroutineContainer_0(MonoBehaviour_t3962482529 * value)
	{
		___m_CoroutineContainer_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_CoroutineContainer_0), value);
	}

	inline static int32_t get_offset_of_m_Tween_1() { return static_cast<int32_t>(offsetof(TweenRunner_1_t3055525458, ___m_Tween_1)); }
	inline RuntimeObject* get_m_Tween_1() const { return ___m_Tween_1; }
	inline RuntimeObject** get_address_of_m_Tween_1() { return &___m_Tween_1; }
	inline void set_m_Tween_1(RuntimeObject* value)
	{
		___m_Tween_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Tween_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TWEENRUNNER_1_T3055525458_H
#ifndef TWEENRUNNER_1_T3520241082_H
#define TWEENRUNNER_1_T3520241082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct  TweenRunner_1_t3520241082  : public RuntimeObject
{
public:
	// UnityEngine.MonoBehaviour UnityEngine.UI.CoroutineTween.TweenRunner`1::m_CoroutineContainer
	MonoBehaviour_t3962482529 * ___m_CoroutineContainer_0;
	// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1::m_Tween
	RuntimeObject* ___m_Tween_1;

public:
	inline static int32_t get_offset_of_m_CoroutineContainer_0() { return static_cast<int32_t>(offsetof(TweenRunner_1_t3520241082, ___m_CoroutineContainer_0)); }
	inline MonoBehaviour_t3962482529 * get_m_CoroutineContainer_0() const { return ___m_CoroutineContainer_0; }
	inline MonoBehaviour_t3962482529 ** get_address_of_m_CoroutineContainer_0() { return &___m_CoroutineContainer_0; }
	inline void set_m_CoroutineContainer_0(MonoBehaviour_t3962482529 * value)
	{
		___m_CoroutineContainer_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_CoroutineContainer_0), value);
	}

	inline static int32_t get_offset_of_m_Tween_1() { return static_cast<int32_t>(offsetof(TweenRunner_1_t3520241082, ___m_Tween_1)); }
	inline RuntimeObject* get_m_Tween_1() const { return ___m_Tween_1; }
	inline RuntimeObject** get_address_of_m_Tween_1() { return &___m_Tween_1; }
	inline void set_m_Tween_1(RuntimeObject* value)
	{
		___m_Tween_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Tween_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TWEENRUNNER_1_T3520241082_H
#ifndef LISTPOOL_1_T3980534944_H
#define LISTPOOL_1_T3980534944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ListPool`1<System.Int32>
struct  ListPool_1_t3980534944  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_t3980534944_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_t4122643707 * ___s_ListPool_0;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::<>f__mg$cache0
	UnityAction_1_t712889340 * ___U3CU3Ef__mgU24cache0_1;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_t3980534944_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t4122643707 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t4122643707 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t4122643707 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_ListPool_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(ListPool_1_t3980534944_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline UnityAction_1_t712889340 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline UnityAction_1_t712889340 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(UnityAction_1_t712889340 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTPOOL_1_T3980534944_H
#ifndef LISTPOOL_1_T4109695355_H
#define LISTPOOL_1_T4109695355_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ListPool`1<System.Object>
struct  ListPool_1_t4109695355  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_t4109695355_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_t4251804118 * ___s_ListPool_0;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::<>f__mg$cache0
	UnityAction_1_t842049751 * ___U3CU3Ef__mgU24cache0_1;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_t4109695355_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t4251804118 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t4251804118 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t4251804118 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_ListPool_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(ListPool_1_t4109695355_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline UnityAction_1_t842049751 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline UnityAction_1_t842049751 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(UnityAction_1_t842049751 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTPOOL_1_T4109695355_H
#ifndef LISTPOOL_1_T3630090483_H
#define LISTPOOL_1_T3630090483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ListPool`1<UnityEngine.Color32>
struct  ListPool_1_t3630090483  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_t3630090483_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_t3772199246 * ___s_ListPool_0;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::<>f__mg$cache0
	UnityAction_1_t362444879 * ___U3CU3Ef__mgU24cache0_1;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_t3630090483_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t3772199246 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t3772199246 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t3772199246 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_ListPool_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(ListPool_1_t3630090483_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline UnityAction_1_t362444879 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline UnityAction_1_t362444879 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(UnityAction_1_t362444879 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTPOOL_1_T3630090483_H
#ifndef LISTPOOL_1_T792119500_H
#define LISTPOOL_1_T792119500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>
struct  ListPool_1_t792119500  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_t792119500_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_t934228263 * ___s_ListPool_0;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::<>f__mg$cache0
	UnityAction_1_t1819441192 * ___U3CU3Ef__mgU24cache0_1;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_t792119500_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t934228263 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t934228263 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t934228263 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_ListPool_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(ListPool_1_t792119500_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline UnityAction_1_t1819441192 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline UnityAction_1_t1819441192 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(UnityAction_1_t1819441192 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTPOOL_1_T792119500_H
#ifndef LISTPOOL_1_T3185818714_H
#define LISTPOOL_1_T3185818714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ListPool`1<UnityEngine.Vector2>
struct  ListPool_1_t3185818714  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_t3185818714_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_t3327927477 * ___s_ListPool_0;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::<>f__mg$cache0
	UnityAction_1_t4213140406 * ___U3CU3Ef__mgU24cache0_1;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_t3185818714_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t3327927477 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t3327927477 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t3327927477 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_ListPool_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(ListPool_1_t3185818714_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline UnityAction_1_t4213140406 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline UnityAction_1_t4213140406 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(UnityAction_1_t4213140406 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTPOOL_1_T3185818714_H
#ifndef LISTPOOL_1_T456935359_H
#define LISTPOOL_1_T456935359_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ListPool`1<UnityEngine.Vector3>
struct  ListPool_1_t456935359  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_t456935359_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_t599044122 * ___s_ListPool_0;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::<>f__mg$cache0
	UnityAction_1_t1484257051 * ___U3CU3Ef__mgU24cache0_1;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_t456935359_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t599044122 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t599044122 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t599044122 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_ListPool_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(ListPool_1_t456935359_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline UnityAction_1_t1484257051 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline UnityAction_1_t1484257051 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(UnityAction_1_t1484257051 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTPOOL_1_T456935359_H
#ifndef LISTPOOL_1_T53650832_H
#define LISTPOOL_1_T53650832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ListPool`1<UnityEngine.Vector4>
struct  ListPool_1_t53650832  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_t53650832_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_t195759595 * ___s_ListPool_0;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::<>f__mg$cache0
	UnityAction_1_t1080972524 * ___U3CU3Ef__mgU24cache0_1;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_t53650832_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t195759595 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t195759595 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t195759595 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_ListPool_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(ListPool_1_t53650832_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline UnityAction_1_t1080972524 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline UnityAction_1_t1080972524 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(UnityAction_1_t1080972524 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTPOOL_1_T53650832_H
#ifndef OBJECTPOOL_1_T4122643707_H
#define OBJECTPOOL_1_T4122643707_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Int32>>
struct  ObjectPool_1_t4122643707  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t971442654 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t712889340 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t712889340 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t4122643707, ___m_Stack_0)); }
	inline Stack_1_t971442654 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t971442654 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t971442654 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Stack_0), value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t4122643707, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t712889340 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t712889340 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t712889340 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnGet_1), value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t4122643707, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t712889340 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t712889340 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t712889340 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnRelease_2), value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t4122643707, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTPOOL_1_T4122643707_H
#ifndef OBJECTPOOL_1_T4251804118_H
#define OBJECTPOOL_1_T4251804118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>
struct  ObjectPool_1_t4251804118  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t1100603065 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t842049751 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t842049751 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t4251804118, ___m_Stack_0)); }
	inline Stack_1_t1100603065 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t1100603065 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t1100603065 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Stack_0), value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t4251804118, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t842049751 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t842049751 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t842049751 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnGet_1), value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t4251804118, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t842049751 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t842049751 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t842049751 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnRelease_2), value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t4251804118, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTPOOL_1_T4251804118_H
#ifndef OBJECTPOOL_1_T3772199246_H
#define OBJECTPOOL_1_T3772199246_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct  ObjectPool_1_t3772199246  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t620998193 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t362444879 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t362444879 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t3772199246, ___m_Stack_0)); }
	inline Stack_1_t620998193 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t620998193 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t620998193 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Stack_0), value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t3772199246, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t362444879 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t362444879 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t362444879 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnGet_1), value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t3772199246, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t362444879 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t362444879 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t362444879 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnRelease_2), value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t3772199246, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTPOOL_1_T3772199246_H
#ifndef OBJECTPOOL_1_T934228263_H
#define OBJECTPOOL_1_T934228263_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct  ObjectPool_1_t934228263  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t2077994506 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t1819441192 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t1819441192 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t934228263, ___m_Stack_0)); }
	inline Stack_1_t2077994506 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t2077994506 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t2077994506 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Stack_0), value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t934228263, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t1819441192 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t1819441192 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t1819441192 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnGet_1), value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t934228263, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t1819441192 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t1819441192 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t1819441192 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnRelease_2), value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t934228263, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTPOOL_1_T934228263_H
#ifndef OBJECTPOOL_1_T3327927477_H
#define OBJECTPOOL_1_T3327927477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct  ObjectPool_1_t3327927477  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t176726424 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t4213140406 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t4213140406 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t3327927477, ___m_Stack_0)); }
	inline Stack_1_t176726424 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t176726424 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t176726424 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Stack_0), value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t3327927477, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t4213140406 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t4213140406 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t4213140406 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnGet_1), value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t3327927477, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t4213140406 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t4213140406 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t4213140406 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnRelease_2), value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t3327927477, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTPOOL_1_T3327927477_H
#ifndef OBJECTPOOL_1_T599044122_H
#define OBJECTPOOL_1_T599044122_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct  ObjectPool_1_t599044122  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t1742810365 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t1484257051 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t1484257051 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t599044122, ___m_Stack_0)); }
	inline Stack_1_t1742810365 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t1742810365 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t1742810365 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Stack_0), value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t599044122, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t1484257051 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t1484257051 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t1484257051 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnGet_1), value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t599044122, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t1484257051 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t1484257051 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t1484257051 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnRelease_2), value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t599044122, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTPOOL_1_T599044122_H
#ifndef OBJECTPOOL_1_T195759595_H
#define OBJECTPOOL_1_T195759595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct  ObjectPool_1_t195759595  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t1339525838 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t1080972524 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t1080972524 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t195759595, ___m_Stack_0)); }
	inline Stack_1_t1339525838 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t1339525838 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t1339525838 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Stack_0), value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t195759595, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t1080972524 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t1080972524 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t1080972524 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnGet_1), value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t195759595, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t1080972524 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t1080972524 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t1080972524 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnRelease_2), value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t195759595, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTPOOL_1_T195759595_H
#ifndef OBJECTPOOL_1_T2779729376_H
#define OBJECTPOOL_1_T2779729376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ObjectPool`1<System.Object>
struct  ObjectPool_1_t2779729376  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t3923495619 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t3664942305 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t3664942305 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t2779729376, ___m_Stack_0)); }
	inline Stack_1_t3923495619 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t3923495619 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t3923495619 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Stack_0), value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t2779729376, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t3664942305 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t3664942305 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t3664942305 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnGet_1), value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t2779729376, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t3664942305 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t3664942305 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t3664942305 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnRelease_2), value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t2779729376, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTPOOL_1_T2779729376_H
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
#ifndef JCONTAINER_T1023664833_H
#define JCONTAINER_T1023664833_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Linq.JContainer
struct  JContainer_t1023664833  : public JToken_t1038539247
{
public:
	// System.Object Newtonsoft.Json.Linq.JContainer::_syncRoot
	RuntimeObject * ____syncRoot_14;
	// System.Boolean Newtonsoft.Json.Linq.JContainer::_busy
	bool ____busy_15;

public:
	inline static int32_t get_offset_of__syncRoot_14() { return static_cast<int32_t>(offsetof(JContainer_t1023664833, ____syncRoot_14)); }
	inline RuntimeObject * get__syncRoot_14() const { return ____syncRoot_14; }
	inline RuntimeObject ** get_address_of__syncRoot_14() { return &____syncRoot_14; }
	inline void set__syncRoot_14(RuntimeObject * value)
	{
		____syncRoot_14 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_14), value);
	}

	inline static int32_t get_offset_of__busy_15() { return static_cast<int32_t>(offsetof(JContainer_t1023664833, ____busy_15)); }
	inline bool get__busy_15() const { return ____busy_15; }
	inline bool* get_address_of__busy_15() { return &____busy_15; }
	inline void set__busy_15(bool value)
	{
		____busy_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JCONTAINER_T1023664833_H
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
#ifndef KEYVALUEPAIR_2_T1267962911_H
#define KEYVALUEPAIR_2_T1267962911_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,System.Reflection.MemberInfo>
struct  KeyValuePair_2_t1267962911 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	MemberInfo_t * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1267962911, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1267962911, ___value_1)); }
	inline MemberInfo_t * get_value_1() const { return ___value_1; }
	inline MemberInfo_t ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(MemberInfo_t * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T1267962911_H
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
#ifndef NULLABLE_1_T1819850047_H
#define NULLABLE_1_T1819850047_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Boolean>
struct  Nullable_1_t1819850047 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1819850047, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1819850047, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T1819850047_H
#ifndef NULLABLE_1_T378540539_H
#define NULLABLE_1_T378540539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Int32>
struct  Nullable_1_t378540539 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t378540539, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t378540539, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T378540539_H
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
#ifndef METHODBASE_T_H
#define METHODBASE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBASE_T_H
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
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef INVOKABLECALL_T832123510_H
#define INVOKABLECALL_T832123510_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall
struct  InvokableCall_t832123510  : public BaseInvokableCall_t2703961024
{
public:
	// UnityEngine.Events.UnityAction UnityEngine.Events.InvokableCall::Delegate
	UnityAction_t3245792599 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_t832123510, ___Delegate_0)); }
	inline UnityAction_t3245792599 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_t3245792599 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_t3245792599 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_T832123510_H
#ifndef INVOKABLECALL_1_T214452203_H
#define INVOKABLECALL_1_T214452203_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall`1<System.Boolean>
struct  InvokableCall_1_t214452203  : public BaseInvokableCall_t2703961024
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t682124106 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t214452203, ___Delegate_0)); }
	inline UnityAction_1_t682124106 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t682124106 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t682124106 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_1_T214452203_H
#ifndef INVOKABLECALL_1_T3068109991_H
#define INVOKABLECALL_1_T3068109991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall`1<System.Int32>
struct  InvokableCall_1_t3068109991  : public BaseInvokableCall_t2703961024
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t3535781894 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t3068109991, ___Delegate_0)); }
	inline UnityAction_1_t3535781894 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t3535781894 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t3535781894 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_1_T3068109991_H
#ifndef INVOKABLECALL_1_T3197270402_H
#define INVOKABLECALL_1_T3197270402_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall`1<System.Object>
struct  InvokableCall_1_t3197270402  : public BaseInvokableCall_t2703961024
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t3664942305 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t3197270402, ___Delegate_0)); }
	inline UnityAction_1_t3664942305 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t3664942305 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t3664942305 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_1_T3197270402_H
#ifndef INVOKABLECALL_1_T1514431012_H
#define INVOKABLECALL_1_T1514431012_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall`1<System.Single>
struct  InvokableCall_1_t1514431012  : public BaseInvokableCall_t2703961024
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t1982102915 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t1514431012, ___Delegate_0)); }
	inline UnityAction_1_t1982102915 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t1982102915 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t1982102915 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_1_T1514431012_H
#ifndef INVOKABLECALL_1_T2672850562_H
#define INVOKABLECALL_1_T2672850562_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall`1<UnityEngine.Color>
struct  InvokableCall_1_t2672850562  : public BaseInvokableCall_t2703961024
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t3140522465 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t2672850562, ___Delegate_0)); }
	inline UnityAction_1_t3140522465 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t3140522465 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t3140522465 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_1_T2672850562_H
#ifndef INVOKABLECALL_1_T2273393761_H
#define INVOKABLECALL_1_T2273393761_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>
struct  InvokableCall_1_t2273393761  : public BaseInvokableCall_t2703961024
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t2741065664 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t2273393761, ___Delegate_0)); }
	inline UnityAction_1_t2741065664 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t2741065664 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t2741065664 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_1_T2273393761_H
#ifndef INVOKABLECALL_2_T362407658_H
#define INVOKABLECALL_2_T362407658_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall`2<System.Object,System.Object>
struct  InvokableCall_2_t362407658  : public BaseInvokableCall_t2703961024
{
public:
	// UnityEngine.Events.UnityAction`2<T1,T2> UnityEngine.Events.InvokableCall`2::Delegate
	UnityAction_2_t3283971887 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_2_t362407658, ___Delegate_0)); }
	inline UnityAction_2_t3283971887 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_2_t3283971887 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_2_t3283971887 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_2_T362407658_H
#ifndef INVOKABLECALL_3_T4059188962_H
#define INVOKABLECALL_3_T4059188962_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>
struct  InvokableCall_3_t4059188962  : public BaseInvokableCall_t2703961024
{
public:
	// UnityEngine.Events.UnityAction`3<T1,T2,T3> UnityEngine.Events.InvokableCall`3::Delegate
	UnityAction_3_t1557236713 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_3_t4059188962, ___Delegate_0)); }
	inline UnityAction_3_t1557236713 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_3_t1557236713 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_3_t1557236713 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_3_T4059188962_H
#ifndef INVOKABLECALL_4_T2756980746_H
#define INVOKABLECALL_4_T2756980746_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>
struct  InvokableCall_4_t2756980746  : public BaseInvokableCall_t2703961024
{
public:
	// UnityEngine.Events.UnityAction`4<T1,T2,T3,T4> UnityEngine.Events.InvokableCall`4::Delegate
	UnityAction_4_t682480391 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_4_t2756980746, ___Delegate_0)); }
	inline UnityAction_4_t682480391 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_4_t682480391 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_4_t682480391 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_4_T2756980746_H
#ifndef UNITYEVENT_1_T978947469_H
#define UNITYEVENT_1_T978947469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct  UnityEvent_1_t978947469  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t978947469, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T978947469_H
#ifndef UNITYEVENT_1_T3832605257_H
#define UNITYEVENT_1_T3832605257_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct  UnityEvent_1_t3832605257  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t3832605257, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T3832605257_H
#ifndef UNITYEVENT_1_T3961765668_H
#define UNITYEVENT_1_T3961765668_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<System.Object>
struct  UnityEvent_1_t3961765668  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t3961765668, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T3961765668_H
#ifndef UNITYEVENT_1_T2278926278_H
#define UNITYEVENT_1_T2278926278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<System.Single>
struct  UnityEvent_1_t2278926278  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t2278926278, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T2278926278_H
#ifndef UNITYEVENT_1_T3437345828_H
#define UNITYEVENT_1_T3437345828_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct  UnityEvent_1_t3437345828  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t3437345828, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T3437345828_H
#ifndef UNITYEVENT_1_T3037889027_H
#define UNITYEVENT_1_T3037889027_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct  UnityEvent_1_t3037889027  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t3037889027, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T3037889027_H
#ifndef UNITYEVENT_2_T614268397_H
#define UNITYEVENT_2_T614268397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct  UnityEvent_2_t614268397  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_2_t614268397, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_2_T614268397_H
#ifndef UNITYEVENT_3_T2404744798_H
#define UNITYEVENT_3_T2404744798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct  UnityEvent_3_t2404744798  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_3_t2404744798, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_3_T2404744798_H
#ifndef UNITYEVENT_4_T4085588227_H
#define UNITYEVENT_4_T4085588227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
struct  UnityEvent_4_t4085588227  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`4::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_4_t4085588227, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_4_T4085588227_H
#ifndef MATRIX4X4_T1817901843_H
#define MATRIX4X4_T1817901843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t1817901843 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t1817901843_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t1817901843  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t1817901843  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t1817901843  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t1817901843 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t1817901843  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t1817901843  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t1817901843 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t1817901843  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T1817901843_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
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
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
#ifndef SCENE_T2348375561_H
#define SCENE_T2348375561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.Scene
struct  Scene_t2348375561 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t2348375561, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENE_T2348375561_H
#ifndef FLOATTWEEN_T1274330004_H
#define FLOATTWEEN_T1274330004_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.CoroutineTween.FloatTween
struct  FloatTween_t1274330004 
{
public:
	// UnityEngine.UI.CoroutineTween.FloatTween/FloatTweenCallback UnityEngine.UI.CoroutineTween.FloatTween::m_Target
	FloatTweenCallback_t1856710240 * ___m_Target_0;
	// System.Single UnityEngine.UI.CoroutineTween.FloatTween::m_StartValue
	float ___m_StartValue_1;
	// System.Single UnityEngine.UI.CoroutineTween.FloatTween::m_TargetValue
	float ___m_TargetValue_2;
	// System.Single UnityEngine.UI.CoroutineTween.FloatTween::m_Duration
	float ___m_Duration_3;
	// System.Boolean UnityEngine.UI.CoroutineTween.FloatTween::m_IgnoreTimeScale
	bool ___m_IgnoreTimeScale_4;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(FloatTween_t1274330004, ___m_Target_0)); }
	inline FloatTweenCallback_t1856710240 * get_m_Target_0() const { return ___m_Target_0; }
	inline FloatTweenCallback_t1856710240 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(FloatTweenCallback_t1856710240 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_0), value);
	}

	inline static int32_t get_offset_of_m_StartValue_1() { return static_cast<int32_t>(offsetof(FloatTween_t1274330004, ___m_StartValue_1)); }
	inline float get_m_StartValue_1() const { return ___m_StartValue_1; }
	inline float* get_address_of_m_StartValue_1() { return &___m_StartValue_1; }
	inline void set_m_StartValue_1(float value)
	{
		___m_StartValue_1 = value;
	}

	inline static int32_t get_offset_of_m_TargetValue_2() { return static_cast<int32_t>(offsetof(FloatTween_t1274330004, ___m_TargetValue_2)); }
	inline float get_m_TargetValue_2() const { return ___m_TargetValue_2; }
	inline float* get_address_of_m_TargetValue_2() { return &___m_TargetValue_2; }
	inline void set_m_TargetValue_2(float value)
	{
		___m_TargetValue_2 = value;
	}

	inline static int32_t get_offset_of_m_Duration_3() { return static_cast<int32_t>(offsetof(FloatTween_t1274330004, ___m_Duration_3)); }
	inline float get_m_Duration_3() const { return ___m_Duration_3; }
	inline float* get_address_of_m_Duration_3() { return &___m_Duration_3; }
	inline void set_m_Duration_3(float value)
	{
		___m_Duration_3 = value;
	}

	inline static int32_t get_offset_of_m_IgnoreTimeScale_4() { return static_cast<int32_t>(offsetof(FloatTween_t1274330004, ___m_IgnoreTimeScale_4)); }
	inline bool get_m_IgnoreTimeScale_4() const { return ___m_IgnoreTimeScale_4; }
	inline bool* get_address_of_m_IgnoreTimeScale_4() { return &___m_IgnoreTimeScale_4; }
	inline void set_m_IgnoreTimeScale_4(bool value)
	{
		___m_IgnoreTimeScale_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.CoroutineTween.FloatTween
struct FloatTween_t1274330004_marshaled_pinvoke
{
	FloatTweenCallback_t1856710240 * ___m_Target_0;
	float ___m_StartValue_1;
	float ___m_TargetValue_2;
	float ___m_Duration_3;
	int32_t ___m_IgnoreTimeScale_4;
};
// Native definition for COM marshalling of UnityEngine.UI.CoroutineTween.FloatTween
struct FloatTween_t1274330004_marshaled_com
{
	FloatTweenCallback_t1856710240 * ___m_Target_0;
	float ___m_StartValue_1;
	float ___m_TargetValue_2;
	float ___m_Duration_3;
	int32_t ___m_IgnoreTimeScale_4;
};
#endif // FLOATTWEEN_T1274330004_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_5)); }
	inline Vector3_t3722313464  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t3722313464  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_6)); }
	inline Vector3_t3722313464  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t3722313464 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t3722313464  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_7)); }
	inline Vector3_t3722313464  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t3722313464 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t3722313464  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_8)); }
	inline Vector3_t3722313464  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t3722313464 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t3722313464  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_9)); }
	inline Vector3_t3722313464  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t3722313464 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t3722313464  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_10)); }
	inline Vector3_t3722313464  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t3722313464 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t3722313464  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_11)); }
	inline Vector3_t3722313464  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t3722313464  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_12)); }
	inline Vector3_t3722313464  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t3722313464 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t3722313464  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef VECTOR4_T3319028937_H
#define VECTOR4_T3319028937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t3319028937 
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
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t3319028937_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t3319028937  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t3319028937  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t3319028937  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t3319028937  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___zeroVector_5)); }
	inline Vector4_t3319028937  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t3319028937 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t3319028937  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___oneVector_6)); }
	inline Vector4_t3319028937  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t3319028937 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t3319028937  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t3319028937  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t3319028937 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t3319028937  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t3319028937  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t3319028937 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t3319028937  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T3319028937_H
#ifndef PARTIALCONVERTER_1_T746178589_H
#define PARTIALCONVERTER_1_T746178589_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WanzyeeStudio.Json.PartialConverter`1<System.Object>
struct  PartialConverter_1_t746178589  : public JsonConverter_t1047106545
{
public:

public:
};

struct PartialConverter_1_t746178589_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1::_properties
	Dictionary_2_t3165258040 * ____properties_0;
	// System.Func`2<System.String,System.Boolean> WanzyeeStudio.Json.PartialConverter`1::<>f__mg$cache0
	Func_2_t2197129486 * ___U3CU3Ef__mgU24cache0_1;
	// System.Func`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1::<>f__mg$cache1
	Func_2_t1184875966 * ___U3CU3Ef__mgU24cache1_2;
	// System.Func`2<System.String,System.String> WanzyeeStudio.Json.PartialConverter`1::<>f__am$cache0
	Func_2_t3947292210 * ___U3CU3Ef__amU24cache0_3;

public:
	inline static int32_t get_offset_of__properties_0() { return static_cast<int32_t>(offsetof(PartialConverter_1_t746178589_StaticFields, ____properties_0)); }
	inline Dictionary_2_t3165258040 * get__properties_0() const { return ____properties_0; }
	inline Dictionary_2_t3165258040 ** get_address_of__properties_0() { return &____properties_0; }
	inline void set__properties_0(Dictionary_2_t3165258040 * value)
	{
		____properties_0 = value;
		Il2CppCodeGenWriteBarrier((&____properties_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(PartialConverter_1_t746178589_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline Func_2_t2197129486 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline Func_2_t2197129486 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(Func_2_t2197129486 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_2() { return static_cast<int32_t>(offsetof(PartialConverter_1_t746178589_StaticFields, ___U3CU3Ef__mgU24cache1_2)); }
	inline Func_2_t1184875966 * get_U3CU3Ef__mgU24cache1_2() const { return ___U3CU3Ef__mgU24cache1_2; }
	inline Func_2_t1184875966 ** get_address_of_U3CU3Ef__mgU24cache1_2() { return &___U3CU3Ef__mgU24cache1_2; }
	inline void set_U3CU3Ef__mgU24cache1_2(Func_2_t1184875966 * value)
	{
		___U3CU3Ef__mgU24cache1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_3() { return static_cast<int32_t>(offsetof(PartialConverter_1_t746178589_StaticFields, ___U3CU3Ef__amU24cache0_3)); }
	inline Func_2_t3947292210 * get_U3CU3Ef__amU24cache0_3() const { return ___U3CU3Ef__amU24cache0_3; }
	inline Func_2_t3947292210 ** get_address_of_U3CU3Ef__amU24cache0_3() { return &___U3CU3Ef__amU24cache0_3; }
	inline void set_U3CU3Ef__amU24cache0_3(Func_2_t3947292210 * value)
	{
		___U3CU3Ef__amU24cache0_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTIALCONVERTER_1_T746178589_H
#ifndef PARTIALCONVERTER_1_T4227877631_H
#define PARTIALCONVERTER_1_T4227877631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Bounds>
struct  PartialConverter_1_t4227877631  : public JsonConverter_t1047106545
{
public:

public:
};

struct PartialConverter_1_t4227877631_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1::_properties
	Dictionary_2_t3165258040 * ____properties_0;
	// System.Func`2<System.String,System.Boolean> WanzyeeStudio.Json.PartialConverter`1::<>f__mg$cache0
	Func_2_t2197129486 * ___U3CU3Ef__mgU24cache0_1;
	// System.Func`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1::<>f__mg$cache1
	Func_2_t1184875966 * ___U3CU3Ef__mgU24cache1_2;
	// System.Func`2<System.String,System.String> WanzyeeStudio.Json.PartialConverter`1::<>f__am$cache0
	Func_2_t3947292210 * ___U3CU3Ef__amU24cache0_3;

public:
	inline static int32_t get_offset_of__properties_0() { return static_cast<int32_t>(offsetof(PartialConverter_1_t4227877631_StaticFields, ____properties_0)); }
	inline Dictionary_2_t3165258040 * get__properties_0() const { return ____properties_0; }
	inline Dictionary_2_t3165258040 ** get_address_of__properties_0() { return &____properties_0; }
	inline void set__properties_0(Dictionary_2_t3165258040 * value)
	{
		____properties_0 = value;
		Il2CppCodeGenWriteBarrier((&____properties_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(PartialConverter_1_t4227877631_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline Func_2_t2197129486 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline Func_2_t2197129486 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(Func_2_t2197129486 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_2() { return static_cast<int32_t>(offsetof(PartialConverter_1_t4227877631_StaticFields, ___U3CU3Ef__mgU24cache1_2)); }
	inline Func_2_t1184875966 * get_U3CU3Ef__mgU24cache1_2() const { return ___U3CU3Ef__mgU24cache1_2; }
	inline Func_2_t1184875966 ** get_address_of_U3CU3Ef__mgU24cache1_2() { return &___U3CU3Ef__mgU24cache1_2; }
	inline void set_U3CU3Ef__mgU24cache1_2(Func_2_t1184875966 * value)
	{
		___U3CU3Ef__mgU24cache1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_3() { return static_cast<int32_t>(offsetof(PartialConverter_1_t4227877631_StaticFields, ___U3CU3Ef__amU24cache0_3)); }
	inline Func_2_t3947292210 * get_U3CU3Ef__amU24cache0_3() const { return ___U3CU3Ef__amU24cache0_3; }
	inline Func_2_t3947292210 ** get_address_of_U3CU3Ef__amU24cache0_3() { return &___U3CU3Ef__amU24cache0_3; }
	inline void set_U3CU3Ef__amU24cache0_3(Func_2_t3947292210 * value)
	{
		___U3CU3Ef__amU24cache0_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTIALCONVERTER_1_T4227877631_H
#ifndef PARTIALCONVERTER_1_T221758749_H
#define PARTIALCONVERTER_1_T221758749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Color>
struct  PartialConverter_1_t221758749  : public JsonConverter_t1047106545
{
public:

public:
};

struct PartialConverter_1_t221758749_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1::_properties
	Dictionary_2_t3165258040 * ____properties_0;
	// System.Func`2<System.String,System.Boolean> WanzyeeStudio.Json.PartialConverter`1::<>f__mg$cache0
	Func_2_t2197129486 * ___U3CU3Ef__mgU24cache0_1;
	// System.Func`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1::<>f__mg$cache1
	Func_2_t1184875966 * ___U3CU3Ef__mgU24cache1_2;
	// System.Func`2<System.String,System.String> WanzyeeStudio.Json.PartialConverter`1::<>f__am$cache0
	Func_2_t3947292210 * ___U3CU3Ef__amU24cache0_3;

public:
	inline static int32_t get_offset_of__properties_0() { return static_cast<int32_t>(offsetof(PartialConverter_1_t221758749_StaticFields, ____properties_0)); }
	inline Dictionary_2_t3165258040 * get__properties_0() const { return ____properties_0; }
	inline Dictionary_2_t3165258040 ** get_address_of__properties_0() { return &____properties_0; }
	inline void set__properties_0(Dictionary_2_t3165258040 * value)
	{
		____properties_0 = value;
		Il2CppCodeGenWriteBarrier((&____properties_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(PartialConverter_1_t221758749_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline Func_2_t2197129486 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline Func_2_t2197129486 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(Func_2_t2197129486 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_2() { return static_cast<int32_t>(offsetof(PartialConverter_1_t221758749_StaticFields, ___U3CU3Ef__mgU24cache1_2)); }
	inline Func_2_t1184875966 * get_U3CU3Ef__mgU24cache1_2() const { return ___U3CU3Ef__mgU24cache1_2; }
	inline Func_2_t1184875966 ** get_address_of_U3CU3Ef__mgU24cache1_2() { return &___U3CU3Ef__mgU24cache1_2; }
	inline void set_U3CU3Ef__mgU24cache1_2(Func_2_t1184875966 * value)
	{
		___U3CU3Ef__mgU24cache1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_3() { return static_cast<int32_t>(offsetof(PartialConverter_1_t221758749_StaticFields, ___U3CU3Ef__amU24cache0_3)); }
	inline Func_2_t3947292210 * get_U3CU3Ef__amU24cache0_3() const { return ___U3CU3Ef__amU24cache0_3; }
	inline Func_2_t3947292210 ** get_address_of_U3CU3Ef__amU24cache0_3() { return &___U3CU3Ef__amU24cache0_3; }
	inline void set_U3CU3Ef__amU24cache0_3(Func_2_t3947292210 * value)
	{
		___U3CU3Ef__amU24cache0_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTIALCONVERTER_1_T221758749_H
#ifndef PARTIALCONVERTER_1_T3778941564_H
#define PARTIALCONVERTER_1_T3778941564_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Matrix4x4>
struct  PartialConverter_1_t3778941564  : public JsonConverter_t1047106545
{
public:

public:
};

struct PartialConverter_1_t3778941564_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1::_properties
	Dictionary_2_t3165258040 * ____properties_0;
	// System.Func`2<System.String,System.Boolean> WanzyeeStudio.Json.PartialConverter`1::<>f__mg$cache0
	Func_2_t2197129486 * ___U3CU3Ef__mgU24cache0_1;
	// System.Func`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1::<>f__mg$cache1
	Func_2_t1184875966 * ___U3CU3Ef__mgU24cache1_2;
	// System.Func`2<System.String,System.String> WanzyeeStudio.Json.PartialConverter`1::<>f__am$cache0
	Func_2_t3947292210 * ___U3CU3Ef__amU24cache0_3;

public:
	inline static int32_t get_offset_of__properties_0() { return static_cast<int32_t>(offsetof(PartialConverter_1_t3778941564_StaticFields, ____properties_0)); }
	inline Dictionary_2_t3165258040 * get__properties_0() const { return ____properties_0; }
	inline Dictionary_2_t3165258040 ** get_address_of__properties_0() { return &____properties_0; }
	inline void set__properties_0(Dictionary_2_t3165258040 * value)
	{
		____properties_0 = value;
		Il2CppCodeGenWriteBarrier((&____properties_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(PartialConverter_1_t3778941564_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline Func_2_t2197129486 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline Func_2_t2197129486 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(Func_2_t2197129486 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_2() { return static_cast<int32_t>(offsetof(PartialConverter_1_t3778941564_StaticFields, ___U3CU3Ef__mgU24cache1_2)); }
	inline Func_2_t1184875966 * get_U3CU3Ef__mgU24cache1_2() const { return ___U3CU3Ef__mgU24cache1_2; }
	inline Func_2_t1184875966 ** get_address_of_U3CU3Ef__mgU24cache1_2() { return &___U3CU3Ef__mgU24cache1_2; }
	inline void set_U3CU3Ef__mgU24cache1_2(Func_2_t1184875966 * value)
	{
		___U3CU3Ef__mgU24cache1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_3() { return static_cast<int32_t>(offsetof(PartialConverter_1_t3778941564_StaticFields, ___U3CU3Ef__amU24cache0_3)); }
	inline Func_2_t3947292210 * get_U3CU3Ef__amU24cache0_3() const { return ___U3CU3Ef__amU24cache0_3; }
	inline Func_2_t3947292210 ** get_address_of_U3CU3Ef__amU24cache0_3() { return &___U3CU3Ef__amU24cache0_3; }
	inline void set_U3CU3Ef__amU24cache0_3(Func_2_t3947292210 * value)
	{
		___U3CU3Ef__amU24cache0_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTIALCONVERTER_1_T3778941564_H
#ifndef PARTIALCONVERTER_1_T4262968052_H
#define PARTIALCONVERTER_1_T4262968052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Quaternion>
struct  PartialConverter_1_t4262968052  : public JsonConverter_t1047106545
{
public:

public:
};

struct PartialConverter_1_t4262968052_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1::_properties
	Dictionary_2_t3165258040 * ____properties_0;
	// System.Func`2<System.String,System.Boolean> WanzyeeStudio.Json.PartialConverter`1::<>f__mg$cache0
	Func_2_t2197129486 * ___U3CU3Ef__mgU24cache0_1;
	// System.Func`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1::<>f__mg$cache1
	Func_2_t1184875966 * ___U3CU3Ef__mgU24cache1_2;
	// System.Func`2<System.String,System.String> WanzyeeStudio.Json.PartialConverter`1::<>f__am$cache0
	Func_2_t3947292210 * ___U3CU3Ef__amU24cache0_3;

public:
	inline static int32_t get_offset_of__properties_0() { return static_cast<int32_t>(offsetof(PartialConverter_1_t4262968052_StaticFields, ____properties_0)); }
	inline Dictionary_2_t3165258040 * get__properties_0() const { return ____properties_0; }
	inline Dictionary_2_t3165258040 ** get_address_of__properties_0() { return &____properties_0; }
	inline void set__properties_0(Dictionary_2_t3165258040 * value)
	{
		____properties_0 = value;
		Il2CppCodeGenWriteBarrier((&____properties_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(PartialConverter_1_t4262968052_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline Func_2_t2197129486 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline Func_2_t2197129486 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(Func_2_t2197129486 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_2() { return static_cast<int32_t>(offsetof(PartialConverter_1_t4262968052_StaticFields, ___U3CU3Ef__mgU24cache1_2)); }
	inline Func_2_t1184875966 * get_U3CU3Ef__mgU24cache1_2() const { return ___U3CU3Ef__mgU24cache1_2; }
	inline Func_2_t1184875966 ** get_address_of_U3CU3Ef__mgU24cache1_2() { return &___U3CU3Ef__mgU24cache1_2; }
	inline void set_U3CU3Ef__mgU24cache1_2(Func_2_t1184875966 * value)
	{
		___U3CU3Ef__mgU24cache1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_3() { return static_cast<int32_t>(offsetof(PartialConverter_1_t4262968052_StaticFields, ___U3CU3Ef__amU24cache0_3)); }
	inline Func_2_t3947292210 * get_U3CU3Ef__amU24cache0_3() const { return ___U3CU3Ef__amU24cache0_3; }
	inline Func_2_t3947292210 ** get_address_of_U3CU3Ef__amU24cache0_3() { return &___U3CU3Ef__amU24cache0_3; }
	inline void set_U3CU3Ef__amU24cache0_3(Func_2_t3947292210 * value)
	{
		___U3CU3Ef__amU24cache0_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTIALCONVERTER_1_T4262968052_H
#ifndef PARTIALCONVERTER_1_T26552284_H
#define PARTIALCONVERTER_1_T26552284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Rect>
struct  PartialConverter_1_t26552284  : public JsonConverter_t1047106545
{
public:

public:
};

struct PartialConverter_1_t26552284_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1::_properties
	Dictionary_2_t3165258040 * ____properties_0;
	// System.Func`2<System.String,System.Boolean> WanzyeeStudio.Json.PartialConverter`1::<>f__mg$cache0
	Func_2_t2197129486 * ___U3CU3Ef__mgU24cache0_1;
	// System.Func`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1::<>f__mg$cache1
	Func_2_t1184875966 * ___U3CU3Ef__mgU24cache1_2;
	// System.Func`2<System.String,System.String> WanzyeeStudio.Json.PartialConverter`1::<>f__am$cache0
	Func_2_t3947292210 * ___U3CU3Ef__amU24cache0_3;

public:
	inline static int32_t get_offset_of__properties_0() { return static_cast<int32_t>(offsetof(PartialConverter_1_t26552284_StaticFields, ____properties_0)); }
	inline Dictionary_2_t3165258040 * get__properties_0() const { return ____properties_0; }
	inline Dictionary_2_t3165258040 ** get_address_of__properties_0() { return &____properties_0; }
	inline void set__properties_0(Dictionary_2_t3165258040 * value)
	{
		____properties_0 = value;
		Il2CppCodeGenWriteBarrier((&____properties_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(PartialConverter_1_t26552284_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline Func_2_t2197129486 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline Func_2_t2197129486 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(Func_2_t2197129486 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_2() { return static_cast<int32_t>(offsetof(PartialConverter_1_t26552284_StaticFields, ___U3CU3Ef__mgU24cache1_2)); }
	inline Func_2_t1184875966 * get_U3CU3Ef__mgU24cache1_2() const { return ___U3CU3Ef__mgU24cache1_2; }
	inline Func_2_t1184875966 ** get_address_of_U3CU3Ef__mgU24cache1_2() { return &___U3CU3Ef__mgU24cache1_2; }
	inline void set_U3CU3Ef__mgU24cache1_2(Func_2_t1184875966 * value)
	{
		___U3CU3Ef__mgU24cache1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_3() { return static_cast<int32_t>(offsetof(PartialConverter_1_t26552284_StaticFields, ___U3CU3Ef__amU24cache0_3)); }
	inline Func_2_t3947292210 * get_U3CU3Ef__amU24cache0_3() const { return ___U3CU3Ef__amU24cache0_3; }
	inline Func_2_t3947292210 ** get_address_of_U3CU3Ef__amU24cache0_3() { return &___U3CU3Ef__amU24cache0_3; }
	inline void set_U3CU3Ef__amU24cache0_3(Func_2_t3947292210 * value)
	{
		___U3CU3Ef__amU24cache0_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTIALCONVERTER_1_T26552284_H
#ifndef PARTIALCONVERTER_1_T4117269244_H
#define PARTIALCONVERTER_1_T4117269244_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector2>
struct  PartialConverter_1_t4117269244  : public JsonConverter_t1047106545
{
public:

public:
};

struct PartialConverter_1_t4117269244_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1::_properties
	Dictionary_2_t3165258040 * ____properties_0;
	// System.Func`2<System.String,System.Boolean> WanzyeeStudio.Json.PartialConverter`1::<>f__mg$cache0
	Func_2_t2197129486 * ___U3CU3Ef__mgU24cache0_1;
	// System.Func`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1::<>f__mg$cache1
	Func_2_t1184875966 * ___U3CU3Ef__mgU24cache1_2;
	// System.Func`2<System.String,System.String> WanzyeeStudio.Json.PartialConverter`1::<>f__am$cache0
	Func_2_t3947292210 * ___U3CU3Ef__amU24cache0_3;

public:
	inline static int32_t get_offset_of__properties_0() { return static_cast<int32_t>(offsetof(PartialConverter_1_t4117269244_StaticFields, ____properties_0)); }
	inline Dictionary_2_t3165258040 * get__properties_0() const { return ____properties_0; }
	inline Dictionary_2_t3165258040 ** get_address_of__properties_0() { return &____properties_0; }
	inline void set__properties_0(Dictionary_2_t3165258040 * value)
	{
		____properties_0 = value;
		Il2CppCodeGenWriteBarrier((&____properties_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(PartialConverter_1_t4117269244_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline Func_2_t2197129486 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline Func_2_t2197129486 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(Func_2_t2197129486 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_2() { return static_cast<int32_t>(offsetof(PartialConverter_1_t4117269244_StaticFields, ___U3CU3Ef__mgU24cache1_2)); }
	inline Func_2_t1184875966 * get_U3CU3Ef__mgU24cache1_2() const { return ___U3CU3Ef__mgU24cache1_2; }
	inline Func_2_t1184875966 ** get_address_of_U3CU3Ef__mgU24cache1_2() { return &___U3CU3Ef__mgU24cache1_2; }
	inline void set_U3CU3Ef__mgU24cache1_2(Func_2_t1184875966 * value)
	{
		___U3CU3Ef__mgU24cache1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_3() { return static_cast<int32_t>(offsetof(PartialConverter_1_t4117269244_StaticFields, ___U3CU3Ef__amU24cache0_3)); }
	inline Func_2_t3947292210 * get_U3CU3Ef__amU24cache0_3() const { return ___U3CU3Ef__amU24cache0_3; }
	inline Func_2_t3947292210 ** get_address_of_U3CU3Ef__amU24cache0_3() { return &___U3CU3Ef__amU24cache0_3; }
	inline void set_U3CU3Ef__amU24cache0_3(Func_2_t3947292210 * value)
	{
		___U3CU3Ef__amU24cache0_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTIALCONVERTER_1_T4117269244_H
#ifndef PARTIALCONVERTER_1_T1388385889_H
#define PARTIALCONVERTER_1_T1388385889_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector3>
struct  PartialConverter_1_t1388385889  : public JsonConverter_t1047106545
{
public:

public:
};

struct PartialConverter_1_t1388385889_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1::_properties
	Dictionary_2_t3165258040 * ____properties_0;
	// System.Func`2<System.String,System.Boolean> WanzyeeStudio.Json.PartialConverter`1::<>f__mg$cache0
	Func_2_t2197129486 * ___U3CU3Ef__mgU24cache0_1;
	// System.Func`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1::<>f__mg$cache1
	Func_2_t1184875966 * ___U3CU3Ef__mgU24cache1_2;
	// System.Func`2<System.String,System.String> WanzyeeStudio.Json.PartialConverter`1::<>f__am$cache0
	Func_2_t3947292210 * ___U3CU3Ef__amU24cache0_3;

public:
	inline static int32_t get_offset_of__properties_0() { return static_cast<int32_t>(offsetof(PartialConverter_1_t1388385889_StaticFields, ____properties_0)); }
	inline Dictionary_2_t3165258040 * get__properties_0() const { return ____properties_0; }
	inline Dictionary_2_t3165258040 ** get_address_of__properties_0() { return &____properties_0; }
	inline void set__properties_0(Dictionary_2_t3165258040 * value)
	{
		____properties_0 = value;
		Il2CppCodeGenWriteBarrier((&____properties_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(PartialConverter_1_t1388385889_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline Func_2_t2197129486 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline Func_2_t2197129486 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(Func_2_t2197129486 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_2() { return static_cast<int32_t>(offsetof(PartialConverter_1_t1388385889_StaticFields, ___U3CU3Ef__mgU24cache1_2)); }
	inline Func_2_t1184875966 * get_U3CU3Ef__mgU24cache1_2() const { return ___U3CU3Ef__mgU24cache1_2; }
	inline Func_2_t1184875966 ** get_address_of_U3CU3Ef__mgU24cache1_2() { return &___U3CU3Ef__mgU24cache1_2; }
	inline void set_U3CU3Ef__mgU24cache1_2(Func_2_t1184875966 * value)
	{
		___U3CU3Ef__mgU24cache1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_3() { return static_cast<int32_t>(offsetof(PartialConverter_1_t1388385889_StaticFields, ___U3CU3Ef__amU24cache0_3)); }
	inline Func_2_t3947292210 * get_U3CU3Ef__amU24cache0_3() const { return ___U3CU3Ef__amU24cache0_3; }
	inline Func_2_t3947292210 ** get_address_of_U3CU3Ef__amU24cache0_3() { return &___U3CU3Ef__amU24cache0_3; }
	inline void set_U3CU3Ef__amU24cache0_3(Func_2_t3947292210 * value)
	{
		___U3CU3Ef__amU24cache0_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTIALCONVERTER_1_T1388385889_H
#ifndef PARTIALCONVERTER_1_T985101362_H
#define PARTIALCONVERTER_1_T985101362_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector4>
struct  PartialConverter_1_t985101362  : public JsonConverter_t1047106545
{
public:

public:
};

struct PartialConverter_1_t985101362_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1::_properties
	Dictionary_2_t3165258040 * ____properties_0;
	// System.Func`2<System.String,System.Boolean> WanzyeeStudio.Json.PartialConverter`1::<>f__mg$cache0
	Func_2_t2197129486 * ___U3CU3Ef__mgU24cache0_1;
	// System.Func`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1::<>f__mg$cache1
	Func_2_t1184875966 * ___U3CU3Ef__mgU24cache1_2;
	// System.Func`2<System.String,System.String> WanzyeeStudio.Json.PartialConverter`1::<>f__am$cache0
	Func_2_t3947292210 * ___U3CU3Ef__amU24cache0_3;

public:
	inline static int32_t get_offset_of__properties_0() { return static_cast<int32_t>(offsetof(PartialConverter_1_t985101362_StaticFields, ____properties_0)); }
	inline Dictionary_2_t3165258040 * get__properties_0() const { return ____properties_0; }
	inline Dictionary_2_t3165258040 ** get_address_of__properties_0() { return &____properties_0; }
	inline void set__properties_0(Dictionary_2_t3165258040 * value)
	{
		____properties_0 = value;
		Il2CppCodeGenWriteBarrier((&____properties_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(PartialConverter_1_t985101362_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline Func_2_t2197129486 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline Func_2_t2197129486 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(Func_2_t2197129486 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_2() { return static_cast<int32_t>(offsetof(PartialConverter_1_t985101362_StaticFields, ___U3CU3Ef__mgU24cache1_2)); }
	inline Func_2_t1184875966 * get_U3CU3Ef__mgU24cache1_2() const { return ___U3CU3Ef__mgU24cache1_2; }
	inline Func_2_t1184875966 ** get_address_of_U3CU3Ef__mgU24cache1_2() { return &___U3CU3Ef__mgU24cache1_2; }
	inline void set_U3CU3Ef__mgU24cache1_2(Func_2_t1184875966 * value)
	{
		___U3CU3Ef__mgU24cache1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_3() { return static_cast<int32_t>(offsetof(PartialConverter_1_t985101362_StaticFields, ___U3CU3Ef__amU24cache0_3)); }
	inline Func_2_t3947292210 * get_U3CU3Ef__amU24cache0_3() const { return ___U3CU3Ef__amU24cache0_3; }
	inline Func_2_t3947292210 ** get_address_of_U3CU3Ef__amU24cache0_3() { return &___U3CU3Ef__amU24cache0_3; }
	inline void set_U3CU3Ef__amU24cache0_3(Func_2_t3947292210 * value)
	{
		___U3CU3Ef__amU24cache0_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTIALCONVERTER_1_T985101362_H
#ifndef CONSTRUCTORHANDLING_T3189370124_H
#define CONSTRUCTORHANDLING_T3189370124_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.ConstructorHandling
struct  ConstructorHandling_t3189370124 
{
public:
	// System.Int32 Newtonsoft.Json.ConstructorHandling::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConstructorHandling_t3189370124, ___value___1)); }
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
#endif // CONSTRUCTORHANDLING_T3189370124_H
#ifndef DATEFORMATHANDLING_T1376167855_H
#define DATEFORMATHANDLING_T1376167855_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.DateFormatHandling
struct  DateFormatHandling_t1376167855 
{
public:
	// System.Int32 Newtonsoft.Json.DateFormatHandling::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateFormatHandling_t1376167855, ___value___1)); }
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
#endif // DATEFORMATHANDLING_T1376167855_H
#ifndef DATEPARSEHANDLING_T2751701876_H
#define DATEPARSEHANDLING_T2751701876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.DateParseHandling
struct  DateParseHandling_t2751701876 
{
public:
	// System.Int32 Newtonsoft.Json.DateParseHandling::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateParseHandling_t2751701876, ___value___1)); }
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
#endif // DATEPARSEHANDLING_T2751701876_H
#ifndef DATETIMEZONEHANDLING_T3002599730_H
#define DATETIMEZONEHANDLING_T3002599730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.DateTimeZoneHandling
struct  DateTimeZoneHandling_t3002599730 
{
public:
	// System.Int32 Newtonsoft.Json.DateTimeZoneHandling::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeZoneHandling_t3002599730, ___value___1)); }
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
#endif // DATETIMEZONEHANDLING_T3002599730_H
#ifndef DEFAULTVALUEHANDLING_T3240998650_H
#define DEFAULTVALUEHANDLING_T3240998650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.DefaultValueHandling
struct  DefaultValueHandling_t3240998650 
{
public:
	// System.Int32 Newtonsoft.Json.DefaultValueHandling::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DefaultValueHandling_t3240998650, ___value___1)); }
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
#endif // DEFAULTVALUEHANDLING_T3240998650_H
#ifndef FLOATFORMATHANDLING_T562907821_H
#define FLOATFORMATHANDLING_T562907821_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.FloatFormatHandling
struct  FloatFormatHandling_t562907821 
{
public:
	// System.Int32 Newtonsoft.Json.FloatFormatHandling::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FloatFormatHandling_t562907821, ___value___1)); }
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
#endif // FLOATFORMATHANDLING_T562907821_H
#ifndef FLOATPARSEHANDLING_T1006965658_H
#define FLOATPARSEHANDLING_T1006965658_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.FloatParseHandling
struct  FloatParseHandling_t1006965658 
{
public:
	// System.Int32 Newtonsoft.Json.FloatParseHandling::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FloatParseHandling_t1006965658, ___value___1)); }
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
#endif // FLOATPARSEHANDLING_T1006965658_H
#ifndef FORMATTING_T2192044929_H
#define FORMATTING_T2192044929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Formatting
struct  Formatting_t2192044929 
{
public:
	// System.Int32 Newtonsoft.Json.Formatting::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Formatting_t2192044929, ___value___1)); }
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
#endif // FORMATTING_T2192044929_H
#ifndef JSONCONTAINERTYPE_T3191599701_H
#define JSONCONTAINERTYPE_T3191599701_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.JsonContainerType
struct  JsonContainerType_t3191599701 
{
public:
	// System.Int32 Newtonsoft.Json.JsonContainerType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(JsonContainerType_t3191599701, ___value___1)); }
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
#endif // JSONCONTAINERTYPE_T3191599701_H
#ifndef STATE_T879723262_H
#define STATE_T879723262_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.JsonReader/State
struct  State_t879723262 
{
public:
	// System.Int32 Newtonsoft.Json.JsonReader/State::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(State_t879723262, ___value___1)); }
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
#endif // STATE_T879723262_H
#ifndef JSONTOKEN_T1917433489_H
#define JSONTOKEN_T1917433489_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.JsonToken
struct  JsonToken_t1917433489 
{
public:
	// System.Int32 Newtonsoft.Json.JsonToken::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(JsonToken_t1917433489, ___value___1)); }
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
#endif // JSONTOKEN_T1917433489_H
#ifndef STATE_T2595666649_H
#define STATE_T2595666649_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.JsonWriter/State
struct  State_t2595666649 
{
public:
	// System.Int32 Newtonsoft.Json.JsonWriter/State::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(State_t2595666649, ___value___1)); }
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
#endif // STATE_T2595666649_H
#ifndef JOBJECT_T2059125928_H
#define JOBJECT_T2059125928_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Linq.JObject
struct  JObject_t2059125928  : public JContainer_t1023664833
{
public:
	// Newtonsoft.Json.Linq.JPropertyKeyedCollection Newtonsoft.Json.Linq.JObject::_properties
	JPropertyKeyedCollection_t1521123921 * ____properties_16;
	// System.ComponentModel.PropertyChangedEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanged
	PropertyChangedEventHandler_t3836340606 * ___PropertyChanged_17;

public:
	inline static int32_t get_offset_of__properties_16() { return static_cast<int32_t>(offsetof(JObject_t2059125928, ____properties_16)); }
	inline JPropertyKeyedCollection_t1521123921 * get__properties_16() const { return ____properties_16; }
	inline JPropertyKeyedCollection_t1521123921 ** get_address_of__properties_16() { return &____properties_16; }
	inline void set__properties_16(JPropertyKeyedCollection_t1521123921 * value)
	{
		____properties_16 = value;
		Il2CppCodeGenWriteBarrier((&____properties_16), value);
	}

	inline static int32_t get_offset_of_PropertyChanged_17() { return static_cast<int32_t>(offsetof(JObject_t2059125928, ___PropertyChanged_17)); }
	inline PropertyChangedEventHandler_t3836340606 * get_PropertyChanged_17() const { return ___PropertyChanged_17; }
	inline PropertyChangedEventHandler_t3836340606 ** get_address_of_PropertyChanged_17() { return &___PropertyChanged_17; }
	inline void set_PropertyChanged_17(PropertyChangedEventHandler_t3836340606 * value)
	{
		___PropertyChanged_17 = value;
		Il2CppCodeGenWriteBarrier((&___PropertyChanged_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JOBJECT_T2059125928_H
#ifndef METADATAPROPERTYHANDLING_T1042169553_H
#define METADATAPROPERTYHANDLING_T1042169553_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.MetadataPropertyHandling
struct  MetadataPropertyHandling_t1042169553 
{
public:
	// System.Int32 Newtonsoft.Json.MetadataPropertyHandling::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MetadataPropertyHandling_t1042169553, ___value___1)); }
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
#endif // METADATAPROPERTYHANDLING_T1042169553_H
#ifndef MISSINGMEMBERHANDLING_T4043300624_H
#define MISSINGMEMBERHANDLING_T4043300624_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.MissingMemberHandling
struct  MissingMemberHandling_t4043300624 
{
public:
	// System.Int32 Newtonsoft.Json.MissingMemberHandling::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MissingMemberHandling_t4043300624, ___value___1)); }
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
#endif // MISSINGMEMBERHANDLING_T4043300624_H
#ifndef NULLVALUEHANDLING_T3402136445_H
#define NULLVALUEHANDLING_T3402136445_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.NullValueHandling
struct  NullValueHandling_t3402136445 
{
public:
	// System.Int32 Newtonsoft.Json.NullValueHandling::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NullValueHandling_t3402136445, ___value___1)); }
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
#endif // NULLVALUEHANDLING_T3402136445_H
#ifndef OBJECTCREATIONHANDLING_T3160794531_H
#define OBJECTCREATIONHANDLING_T3160794531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.ObjectCreationHandling
struct  ObjectCreationHandling_t3160794531 
{
public:
	// System.Int32 Newtonsoft.Json.ObjectCreationHandling::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ObjectCreationHandling_t3160794531, ___value___1)); }
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
#endif // OBJECTCREATIONHANDLING_T3160794531_H
#ifndef PRESERVEREFERENCESHANDLING_T815988812_H
#define PRESERVEREFERENCESHANDLING_T815988812_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.PreserveReferencesHandling
struct  PreserveReferencesHandling_t815988812 
{
public:
	// System.Int32 Newtonsoft.Json.PreserveReferencesHandling::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PreserveReferencesHandling_t815988812, ___value___1)); }
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
#endif // PRESERVEREFERENCESHANDLING_T815988812_H
#ifndef REFERENCELOOPHANDLING_T1329130968_H
#define REFERENCELOOPHANDLING_T1329130968_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.ReferenceLoopHandling
struct  ReferenceLoopHandling_t1329130968 
{
public:
	// System.Int32 Newtonsoft.Json.ReferenceLoopHandling::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ReferenceLoopHandling_t1329130968, ___value___1)); }
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
#endif // REFERENCELOOPHANDLING_T1329130968_H
#ifndef STRINGESCAPEHANDLING_T4077875565_H
#define STRINGESCAPEHANDLING_T4077875565_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.StringEscapeHandling
struct  StringEscapeHandling_t4077875565 
{
public:
	// System.Int32 Newtonsoft.Json.StringEscapeHandling::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StringEscapeHandling_t4077875565, ___value___1)); }
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
#endif // STRINGESCAPEHANDLING_T4077875565_H
#ifndef TYPENAMEHANDLING_T3731987346_H
#define TYPENAMEHANDLING_T3731987346_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.TypeNameHandling
struct  TypeNameHandling_t3731987346 
{
public:
	// System.Int32 Newtonsoft.Json.TypeNameHandling::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeNameHandling_t3731987346, ___value___1)); }
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
#endif // TYPENAMEHANDLING_T3731987346_H
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
#ifndef ENUMERATOR_T824473519_H
#define ENUMERATOR_T824473519_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Reflection.MemberInfo>
struct  Enumerator_t824473519 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t3165258040 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t1267962911  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t824473519, ___dictionary_0)); }
	inline Dictionary_2_t3165258040 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t3165258040 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t3165258040 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t824473519, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t824473519, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t824473519, ___current_3)); }
	inline KeyValuePair_2_t1267962911  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t1267962911 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t1267962911  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T824473519_H
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
#ifndef INVALIDPROGRAMEXCEPTION_T3836716986_H
#define INVALIDPROGRAMEXCEPTION_T3836716986_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidProgramException
struct  InvalidProgramException_t3836716986  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDPROGRAMEXCEPTION_T3836716986_H
#ifndef NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#define NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotImplementedException
struct  NotImplementedException_t3489357830  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIMPLEMENTEDEXCEPTION_T3489357830_H
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
#ifndef METHODINFO_T_H
#define METHODINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODINFO_T_H
#ifndef PARAMETERATTRIBUTES_T1826424051_H
#define PARAMETERATTRIBUTES_T1826424051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterAttributes
struct  ParameterAttributes_t1826424051 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ParameterAttributes_t1826424051, ___value___1)); }
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
#endif // PARAMETERATTRIBUTES_T1826424051_H
#ifndef FORMATTERASSEMBLYSTYLE_T868039825_H
#define FORMATTERASSEMBLYSTYLE_T868039825_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
struct  FormatterAssemblyStyle_t868039825 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterAssemblyStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FormatterAssemblyStyle_t868039825, ___value___1)); }
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
#endif // FORMATTERASSEMBLYSTYLE_T868039825_H
#ifndef STREAMINGCONTEXTSTATES_T3580100459_H
#define STREAMINGCONTEXTSTATES_T3580100459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_t3580100459 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StreamingContextStates_t3580100459, ___value___1)); }
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
#endif // STREAMINGCONTEXTSTATES_T3580100459_H
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
#ifndef BOUNDS_T2266837910_H
#define BOUNDS_T2266837910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bounds
struct  Bounds_t2266837910 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t3722313464  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t3722313464  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t2266837910, ___m_Center_0)); }
	inline Vector3_t3722313464  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t3722313464 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t3722313464  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t2266837910, ___m_Extents_1)); }
	inline Vector3_t3722313464  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t3722313464 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t3722313464  value)
	{
		___m_Extents_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDS_T2266837910_H
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
#ifndef LOADSCENEMODE_T3251202195_H
#define LOADSCENEMODE_T3251202195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.LoadSceneMode
struct  LoadSceneMode_t3251202195 
{
public:
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LoadSceneMode_t3251202195, ___value___1)); }
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
#endif // LOADSCENEMODE_T3251202195_H
#ifndef COLORTWEENMODE_T1000778859_H
#define COLORTWEENMODE_T1000778859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode
struct  ColorTweenMode_t1000778859 
{
public:
	// System.Int32 UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ColorTweenMode_t1000778859, ___value___1)); }
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
#endif // COLORTWEENMODE_T1000778859_H
#ifndef U3CSTARTU3EC__ITERATOR0_T30141770_H
#define U3CSTARTU3EC__ITERATOR0_T30141770_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>
struct  U3CStartU3Ec__Iterator0_t30141770  : public RuntimeObject
{
public:
	// T UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0::tweenInfo
	FloatTween_t1274330004  ___tweenInfo_0;
	// System.Single UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0::<elapsedTime>__0
	float ___U3CelapsedTimeU3E__0_1;
	// System.Single UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0::<percentage>__1
	float ___U3CpercentageU3E__1_2;
	// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_tweenInfo_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t30141770, ___tweenInfo_0)); }
	inline FloatTween_t1274330004  get_tweenInfo_0() const { return ___tweenInfo_0; }
	inline FloatTween_t1274330004 * get_address_of_tweenInfo_0() { return &___tweenInfo_0; }
	inline void set_tweenInfo_0(FloatTween_t1274330004  value)
	{
		___tweenInfo_0 = value;
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E__0_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t30141770, ___U3CelapsedTimeU3E__0_1)); }
	inline float get_U3CelapsedTimeU3E__0_1() const { return ___U3CelapsedTimeU3E__0_1; }
	inline float* get_address_of_U3CelapsedTimeU3E__0_1() { return &___U3CelapsedTimeU3E__0_1; }
	inline void set_U3CelapsedTimeU3E__0_1(float value)
	{
		___U3CelapsedTimeU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CpercentageU3E__1_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t30141770, ___U3CpercentageU3E__1_2)); }
	inline float get_U3CpercentageU3E__1_2() const { return ___U3CpercentageU3E__1_2; }
	inline float* get_address_of_U3CpercentageU3E__1_2() { return &___U3CpercentageU3E__1_2; }
	inline void set_U3CpercentageU3E__1_2(float value)
	{
		___U3CpercentageU3E__1_2 = value;
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t30141770, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t30141770, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t30141770, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTARTU3EC__ITERATOR0_T30141770_H
#ifndef JSONPOSITION_T2528027714_H
#define JSONPOSITION_T2528027714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.JsonPosition
struct  JsonPosition_t2528027714 
{
public:
	// Newtonsoft.Json.JsonContainerType Newtonsoft.Json.JsonPosition::Type
	int32_t ___Type_1;
	// System.Int32 Newtonsoft.Json.JsonPosition::Position
	int32_t ___Position_2;
	// System.String Newtonsoft.Json.JsonPosition::PropertyName
	String_t* ___PropertyName_3;
	// System.Boolean Newtonsoft.Json.JsonPosition::HasIndex
	bool ___HasIndex_4;

public:
	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(JsonPosition_t2528027714, ___Type_1)); }
	inline int32_t get_Type_1() const { return ___Type_1; }
	inline int32_t* get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(int32_t value)
	{
		___Type_1 = value;
	}

	inline static int32_t get_offset_of_Position_2() { return static_cast<int32_t>(offsetof(JsonPosition_t2528027714, ___Position_2)); }
	inline int32_t get_Position_2() const { return ___Position_2; }
	inline int32_t* get_address_of_Position_2() { return &___Position_2; }
	inline void set_Position_2(int32_t value)
	{
		___Position_2 = value;
	}

	inline static int32_t get_offset_of_PropertyName_3() { return static_cast<int32_t>(offsetof(JsonPosition_t2528027714, ___PropertyName_3)); }
	inline String_t* get_PropertyName_3() const { return ___PropertyName_3; }
	inline String_t** get_address_of_PropertyName_3() { return &___PropertyName_3; }
	inline void set_PropertyName_3(String_t* value)
	{
		___PropertyName_3 = value;
		Il2CppCodeGenWriteBarrier((&___PropertyName_3), value);
	}

	inline static int32_t get_offset_of_HasIndex_4() { return static_cast<int32_t>(offsetof(JsonPosition_t2528027714, ___HasIndex_4)); }
	inline bool get_HasIndex_4() const { return ___HasIndex_4; }
	inline bool* get_address_of_HasIndex_4() { return &___HasIndex_4; }
	inline void set_HasIndex_4(bool value)
	{
		___HasIndex_4 = value;
	}
};

struct JsonPosition_t2528027714_StaticFields
{
public:
	// System.Char[] Newtonsoft.Json.JsonPosition::SpecialCharacters
	CharU5BU5D_t3528271667* ___SpecialCharacters_0;

public:
	inline static int32_t get_offset_of_SpecialCharacters_0() { return static_cast<int32_t>(offsetof(JsonPosition_t2528027714_StaticFields, ___SpecialCharacters_0)); }
	inline CharU5BU5D_t3528271667* get_SpecialCharacters_0() const { return ___SpecialCharacters_0; }
	inline CharU5BU5D_t3528271667** get_address_of_SpecialCharacters_0() { return &___SpecialCharacters_0; }
	inline void set_SpecialCharacters_0(CharU5BU5D_t3528271667* value)
	{
		___SpecialCharacters_0 = value;
		Il2CppCodeGenWriteBarrier((&___SpecialCharacters_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Newtonsoft.Json.JsonPosition
struct JsonPosition_t2528027714_marshaled_pinvoke
{
	int32_t ___Type_1;
	int32_t ___Position_2;
	char* ___PropertyName_3;
	int32_t ___HasIndex_4;
};
// Native definition for COM marshalling of Newtonsoft.Json.JsonPosition
struct JsonPosition_t2528027714_marshaled_com
{
	int32_t ___Type_1;
	int32_t ___Position_2;
	Il2CppChar* ___PropertyName_3;
	int32_t ___HasIndex_4;
};
#endif // JSONPOSITION_T2528027714_H
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
#ifndef NULLABLE_1_T3098729937_H
#define NULLABLE_1_T3098729937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<Newtonsoft.Json.DateFormatHandling>
struct  Nullable_1_t3098729937 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t3098729937, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t3098729937, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T3098729937_H
#ifndef NULLABLE_1_T179296662_H
#define NULLABLE_1_T179296662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<Newtonsoft.Json.DateParseHandling>
struct  Nullable_1_t179296662 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t179296662, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t179296662, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T179296662_H
#ifndef NULLABLE_1_T430194516_H
#define NULLABLE_1_T430194516_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling>
struct  Nullable_1_t430194516 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t430194516, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t430194516, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T430194516_H
#ifndef NULLABLE_1_T2285469903_H
#define NULLABLE_1_T2285469903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling>
struct  Nullable_1_t2285469903 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2285469903, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2285469903, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T2285469903_H
#ifndef NULLABLE_1_T2729527740_H
#define NULLABLE_1_T2729527740_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<Newtonsoft.Json.FloatParseHandling>
struct  Nullable_1_t2729527740 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2729527740, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2729527740, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T2729527740_H
#ifndef NULLABLE_1_T3914607011_H
#define NULLABLE_1_T3914607011_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<Newtonsoft.Json.Formatting>
struct  Nullable_1_t3914607011 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t3914607011, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t3914607011, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T3914607011_H
#ifndef NULLABLE_1_T1505470351_H
#define NULLABLE_1_T1505470351_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling>
struct  Nullable_1_t1505470351 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1505470351, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1505470351, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T1505470351_H
#ifndef PARAMETERINFO_T1861056598_H
#define PARAMETERINFO_T1861056598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterInfo
struct  ParameterInfo_t1861056598  : public RuntimeObject
{
public:
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl_0;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject * ___DefaultValueImpl_1;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t * ___MemberImpl_2;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_3;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_4;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_5;
	// System.Reflection.Emit.UnmanagedMarshal System.Reflection.ParameterInfo::marshalAs
	UnmanagedMarshal_t984015687 * ___marshalAs_6;

public:
	inline static int32_t get_offset_of_ClassImpl_0() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___ClassImpl_0)); }
	inline Type_t * get_ClassImpl_0() const { return ___ClassImpl_0; }
	inline Type_t ** get_address_of_ClassImpl_0() { return &___ClassImpl_0; }
	inline void set_ClassImpl_0(Type_t * value)
	{
		___ClassImpl_0 = value;
		Il2CppCodeGenWriteBarrier((&___ClassImpl_0), value);
	}

	inline static int32_t get_offset_of_DefaultValueImpl_1() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___DefaultValueImpl_1)); }
	inline RuntimeObject * get_DefaultValueImpl_1() const { return ___DefaultValueImpl_1; }
	inline RuntimeObject ** get_address_of_DefaultValueImpl_1() { return &___DefaultValueImpl_1; }
	inline void set_DefaultValueImpl_1(RuntimeObject * value)
	{
		___DefaultValueImpl_1 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValueImpl_1), value);
	}

	inline static int32_t get_offset_of_MemberImpl_2() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___MemberImpl_2)); }
	inline MemberInfo_t * get_MemberImpl_2() const { return ___MemberImpl_2; }
	inline MemberInfo_t ** get_address_of_MemberImpl_2() { return &___MemberImpl_2; }
	inline void set_MemberImpl_2(MemberInfo_t * value)
	{
		___MemberImpl_2 = value;
		Il2CppCodeGenWriteBarrier((&___MemberImpl_2), value);
	}

	inline static int32_t get_offset_of_NameImpl_3() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___NameImpl_3)); }
	inline String_t* get_NameImpl_3() const { return ___NameImpl_3; }
	inline String_t** get_address_of_NameImpl_3() { return &___NameImpl_3; }
	inline void set_NameImpl_3(String_t* value)
	{
		___NameImpl_3 = value;
		Il2CppCodeGenWriteBarrier((&___NameImpl_3), value);
	}

	inline static int32_t get_offset_of_PositionImpl_4() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___PositionImpl_4)); }
	inline int32_t get_PositionImpl_4() const { return ___PositionImpl_4; }
	inline int32_t* get_address_of_PositionImpl_4() { return &___PositionImpl_4; }
	inline void set_PositionImpl_4(int32_t value)
	{
		___PositionImpl_4 = value;
	}

	inline static int32_t get_offset_of_AttrsImpl_5() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___AttrsImpl_5)); }
	inline int32_t get_AttrsImpl_5() const { return ___AttrsImpl_5; }
	inline int32_t* get_address_of_AttrsImpl_5() { return &___AttrsImpl_5; }
	inline void set_AttrsImpl_5(int32_t value)
	{
		___AttrsImpl_5 = value;
	}

	inline static int32_t get_offset_of_marshalAs_6() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___marshalAs_6)); }
	inline UnmanagedMarshal_t984015687 * get_marshalAs_6() const { return ___marshalAs_6; }
	inline UnmanagedMarshal_t984015687 ** get_address_of_marshalAs_6() { return &___marshalAs_6; }
	inline void set_marshalAs_6(UnmanagedMarshal_t984015687 * value)
	{
		___marshalAs_6 = value;
		Il2CppCodeGenWriteBarrier((&___marshalAs_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERINFO_T1861056598_H
#ifndef STREAMINGCONTEXT_T3711869237_H
#define STREAMINGCONTEXT_T3711869237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t3711869237 
{
public:
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::state
	int32_t ___state_0;
	// System.Object System.Runtime.Serialization.StreamingContext::additional
	RuntimeObject * ___additional_1;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(StreamingContext_t3711869237, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}

	inline static int32_t get_offset_of_additional_1() { return static_cast<int32_t>(offsetof(StreamingContext_t3711869237, ___additional_1)); }
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
struct StreamingContext_t3711869237_marshaled_pinvoke
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t3711869237_marshaled_com
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
#endif // STREAMINGCONTEXT_T3711869237_H
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
#ifndef COLORTWEEN_T809614380_H
#define COLORTWEEN_T809614380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.CoroutineTween.ColorTween
struct  ColorTween_t809614380 
{
public:
	// UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenCallback UnityEngine.UI.CoroutineTween.ColorTween::m_Target
	ColorTweenCallback_t1121741130 * ___m_Target_0;
	// UnityEngine.Color UnityEngine.UI.CoroutineTween.ColorTween::m_StartColor
	Color_t2555686324  ___m_StartColor_1;
	// UnityEngine.Color UnityEngine.UI.CoroutineTween.ColorTween::m_TargetColor
	Color_t2555686324  ___m_TargetColor_2;
	// UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode UnityEngine.UI.CoroutineTween.ColorTween::m_TweenMode
	int32_t ___m_TweenMode_3;
	// System.Single UnityEngine.UI.CoroutineTween.ColorTween::m_Duration
	float ___m_Duration_4;
	// System.Boolean UnityEngine.UI.CoroutineTween.ColorTween::m_IgnoreTimeScale
	bool ___m_IgnoreTimeScale_5;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(ColorTween_t809614380, ___m_Target_0)); }
	inline ColorTweenCallback_t1121741130 * get_m_Target_0() const { return ___m_Target_0; }
	inline ColorTweenCallback_t1121741130 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(ColorTweenCallback_t1121741130 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_0), value);
	}

	inline static int32_t get_offset_of_m_StartColor_1() { return static_cast<int32_t>(offsetof(ColorTween_t809614380, ___m_StartColor_1)); }
	inline Color_t2555686324  get_m_StartColor_1() const { return ___m_StartColor_1; }
	inline Color_t2555686324 * get_address_of_m_StartColor_1() { return &___m_StartColor_1; }
	inline void set_m_StartColor_1(Color_t2555686324  value)
	{
		___m_StartColor_1 = value;
	}

	inline static int32_t get_offset_of_m_TargetColor_2() { return static_cast<int32_t>(offsetof(ColorTween_t809614380, ___m_TargetColor_2)); }
	inline Color_t2555686324  get_m_TargetColor_2() const { return ___m_TargetColor_2; }
	inline Color_t2555686324 * get_address_of_m_TargetColor_2() { return &___m_TargetColor_2; }
	inline void set_m_TargetColor_2(Color_t2555686324  value)
	{
		___m_TargetColor_2 = value;
	}

	inline static int32_t get_offset_of_m_TweenMode_3() { return static_cast<int32_t>(offsetof(ColorTween_t809614380, ___m_TweenMode_3)); }
	inline int32_t get_m_TweenMode_3() const { return ___m_TweenMode_3; }
	inline int32_t* get_address_of_m_TweenMode_3() { return &___m_TweenMode_3; }
	inline void set_m_TweenMode_3(int32_t value)
	{
		___m_TweenMode_3 = value;
	}

	inline static int32_t get_offset_of_m_Duration_4() { return static_cast<int32_t>(offsetof(ColorTween_t809614380, ___m_Duration_4)); }
	inline float get_m_Duration_4() const { return ___m_Duration_4; }
	inline float* get_address_of_m_Duration_4() { return &___m_Duration_4; }
	inline void set_m_Duration_4(float value)
	{
		___m_Duration_4 = value;
	}

	inline static int32_t get_offset_of_m_IgnoreTimeScale_5() { return static_cast<int32_t>(offsetof(ColorTween_t809614380, ___m_IgnoreTimeScale_5)); }
	inline bool get_m_IgnoreTimeScale_5() const { return ___m_IgnoreTimeScale_5; }
	inline bool* get_address_of_m_IgnoreTimeScale_5() { return &___m_IgnoreTimeScale_5; }
	inline void set_m_IgnoreTimeScale_5(bool value)
	{
		___m_IgnoreTimeScale_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.CoroutineTween.ColorTween
struct ColorTween_t809614380_marshaled_pinvoke
{
	ColorTweenCallback_t1121741130 * ___m_Target_0;
	Color_t2555686324  ___m_StartColor_1;
	Color_t2555686324  ___m_TargetColor_2;
	int32_t ___m_TweenMode_3;
	float ___m_Duration_4;
	int32_t ___m_IgnoreTimeScale_5;
};
// Native definition for COM marshalling of UnityEngine.UI.CoroutineTween.ColorTween
struct ColorTween_t809614380_marshaled_com
{
	ColorTweenCallback_t1121741130 * ___m_Target_0;
	Color_t2555686324  ___m_StartColor_1;
	Color_t2555686324  ___m_TargetColor_2;
	int32_t ___m_TweenMode_3;
	float ___m_Duration_4;
	int32_t ___m_IgnoreTimeScale_5;
};
#endif // COLORTWEEN_T809614380_H
#ifndef JSONREADER_T2369136700_H
#define JSONREADER_T2369136700_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.JsonReader
struct  JsonReader_t2369136700  : public RuntimeObject
{
public:
	// Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::_tokenType
	int32_t ____tokenType_0;
	// System.Object Newtonsoft.Json.JsonReader::_value
	RuntimeObject * ____value_1;
	// System.Char Newtonsoft.Json.JsonReader::_quoteChar
	Il2CppChar ____quoteChar_2;
	// Newtonsoft.Json.JsonReader/State Newtonsoft.Json.JsonReader::_currentState
	int32_t ____currentState_3;
	// Newtonsoft.Json.JsonPosition Newtonsoft.Json.JsonReader::_currentPosition
	JsonPosition_t2528027714  ____currentPosition_4;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonReader::_culture
	CultureInfo_t4157843068 * ____culture_5;
	// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonReader::_dateTimeZoneHandling
	int32_t ____dateTimeZoneHandling_6;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonReader::_maxDepth
	Nullable_1_t378540539  ____maxDepth_7;
	// System.Boolean Newtonsoft.Json.JsonReader::_hasExceededMaxDepth
	bool ____hasExceededMaxDepth_8;
	// Newtonsoft.Json.DateParseHandling Newtonsoft.Json.JsonReader::_dateParseHandling
	int32_t ____dateParseHandling_9;
	// Newtonsoft.Json.FloatParseHandling Newtonsoft.Json.JsonReader::_floatParseHandling
	int32_t ____floatParseHandling_10;
	// System.String Newtonsoft.Json.JsonReader::_dateFormatString
	String_t* ____dateFormatString_11;
	// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition> Newtonsoft.Json.JsonReader::_stack
	List_1_t4000102456 * ____stack_12;
	// System.Boolean Newtonsoft.Json.JsonReader::<CloseInput>k__BackingField
	bool ___U3CCloseInputU3Ek__BackingField_13;
	// System.Boolean Newtonsoft.Json.JsonReader::<SupportMultipleContent>k__BackingField
	bool ___U3CSupportMultipleContentU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of__tokenType_0() { return static_cast<int32_t>(offsetof(JsonReader_t2369136700, ____tokenType_0)); }
	inline int32_t get__tokenType_0() const { return ____tokenType_0; }
	inline int32_t* get_address_of__tokenType_0() { return &____tokenType_0; }
	inline void set__tokenType_0(int32_t value)
	{
		____tokenType_0 = value;
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(JsonReader_t2369136700, ____value_1)); }
	inline RuntimeObject * get__value_1() const { return ____value_1; }
	inline RuntimeObject ** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(RuntimeObject * value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((&____value_1), value);
	}

	inline static int32_t get_offset_of__quoteChar_2() { return static_cast<int32_t>(offsetof(JsonReader_t2369136700, ____quoteChar_2)); }
	inline Il2CppChar get__quoteChar_2() const { return ____quoteChar_2; }
	inline Il2CppChar* get_address_of__quoteChar_2() { return &____quoteChar_2; }
	inline void set__quoteChar_2(Il2CppChar value)
	{
		____quoteChar_2 = value;
	}

	inline static int32_t get_offset_of__currentState_3() { return static_cast<int32_t>(offsetof(JsonReader_t2369136700, ____currentState_3)); }
	inline int32_t get__currentState_3() const { return ____currentState_3; }
	inline int32_t* get_address_of__currentState_3() { return &____currentState_3; }
	inline void set__currentState_3(int32_t value)
	{
		____currentState_3 = value;
	}

	inline static int32_t get_offset_of__currentPosition_4() { return static_cast<int32_t>(offsetof(JsonReader_t2369136700, ____currentPosition_4)); }
	inline JsonPosition_t2528027714  get__currentPosition_4() const { return ____currentPosition_4; }
	inline JsonPosition_t2528027714 * get_address_of__currentPosition_4() { return &____currentPosition_4; }
	inline void set__currentPosition_4(JsonPosition_t2528027714  value)
	{
		____currentPosition_4 = value;
	}

	inline static int32_t get_offset_of__culture_5() { return static_cast<int32_t>(offsetof(JsonReader_t2369136700, ____culture_5)); }
	inline CultureInfo_t4157843068 * get__culture_5() const { return ____culture_5; }
	inline CultureInfo_t4157843068 ** get_address_of__culture_5() { return &____culture_5; }
	inline void set__culture_5(CultureInfo_t4157843068 * value)
	{
		____culture_5 = value;
		Il2CppCodeGenWriteBarrier((&____culture_5), value);
	}

	inline static int32_t get_offset_of__dateTimeZoneHandling_6() { return static_cast<int32_t>(offsetof(JsonReader_t2369136700, ____dateTimeZoneHandling_6)); }
	inline int32_t get__dateTimeZoneHandling_6() const { return ____dateTimeZoneHandling_6; }
	inline int32_t* get_address_of__dateTimeZoneHandling_6() { return &____dateTimeZoneHandling_6; }
	inline void set__dateTimeZoneHandling_6(int32_t value)
	{
		____dateTimeZoneHandling_6 = value;
	}

	inline static int32_t get_offset_of__maxDepth_7() { return static_cast<int32_t>(offsetof(JsonReader_t2369136700, ____maxDepth_7)); }
	inline Nullable_1_t378540539  get__maxDepth_7() const { return ____maxDepth_7; }
	inline Nullable_1_t378540539 * get_address_of__maxDepth_7() { return &____maxDepth_7; }
	inline void set__maxDepth_7(Nullable_1_t378540539  value)
	{
		____maxDepth_7 = value;
	}

	inline static int32_t get_offset_of__hasExceededMaxDepth_8() { return static_cast<int32_t>(offsetof(JsonReader_t2369136700, ____hasExceededMaxDepth_8)); }
	inline bool get__hasExceededMaxDepth_8() const { return ____hasExceededMaxDepth_8; }
	inline bool* get_address_of__hasExceededMaxDepth_8() { return &____hasExceededMaxDepth_8; }
	inline void set__hasExceededMaxDepth_8(bool value)
	{
		____hasExceededMaxDepth_8 = value;
	}

	inline static int32_t get_offset_of__dateParseHandling_9() { return static_cast<int32_t>(offsetof(JsonReader_t2369136700, ____dateParseHandling_9)); }
	inline int32_t get__dateParseHandling_9() const { return ____dateParseHandling_9; }
	inline int32_t* get_address_of__dateParseHandling_9() { return &____dateParseHandling_9; }
	inline void set__dateParseHandling_9(int32_t value)
	{
		____dateParseHandling_9 = value;
	}

	inline static int32_t get_offset_of__floatParseHandling_10() { return static_cast<int32_t>(offsetof(JsonReader_t2369136700, ____floatParseHandling_10)); }
	inline int32_t get__floatParseHandling_10() const { return ____floatParseHandling_10; }
	inline int32_t* get_address_of__floatParseHandling_10() { return &____floatParseHandling_10; }
	inline void set__floatParseHandling_10(int32_t value)
	{
		____floatParseHandling_10 = value;
	}

	inline static int32_t get_offset_of__dateFormatString_11() { return static_cast<int32_t>(offsetof(JsonReader_t2369136700, ____dateFormatString_11)); }
	inline String_t* get__dateFormatString_11() const { return ____dateFormatString_11; }
	inline String_t** get_address_of__dateFormatString_11() { return &____dateFormatString_11; }
	inline void set__dateFormatString_11(String_t* value)
	{
		____dateFormatString_11 = value;
		Il2CppCodeGenWriteBarrier((&____dateFormatString_11), value);
	}

	inline static int32_t get_offset_of__stack_12() { return static_cast<int32_t>(offsetof(JsonReader_t2369136700, ____stack_12)); }
	inline List_1_t4000102456 * get__stack_12() const { return ____stack_12; }
	inline List_1_t4000102456 ** get_address_of__stack_12() { return &____stack_12; }
	inline void set__stack_12(List_1_t4000102456 * value)
	{
		____stack_12 = value;
		Il2CppCodeGenWriteBarrier((&____stack_12), value);
	}

	inline static int32_t get_offset_of_U3CCloseInputU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(JsonReader_t2369136700, ___U3CCloseInputU3Ek__BackingField_13)); }
	inline bool get_U3CCloseInputU3Ek__BackingField_13() const { return ___U3CCloseInputU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CCloseInputU3Ek__BackingField_13() { return &___U3CCloseInputU3Ek__BackingField_13; }
	inline void set_U3CCloseInputU3Ek__BackingField_13(bool value)
	{
		___U3CCloseInputU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CSupportMultipleContentU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(JsonReader_t2369136700, ___U3CSupportMultipleContentU3Ek__BackingField_14)); }
	inline bool get_U3CSupportMultipleContentU3Ek__BackingField_14() const { return ___U3CSupportMultipleContentU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CSupportMultipleContentU3Ek__BackingField_14() { return &___U3CSupportMultipleContentU3Ek__BackingField_14; }
	inline void set_U3CSupportMultipleContentU3Ek__BackingField_14(bool value)
	{
		___U3CSupportMultipleContentU3Ek__BackingField_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONREADER_T2369136700_H
#ifndef JSONSERIALIZER_T1424496335_H
#define JSONSERIALIZER_T1424496335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.JsonSerializer
struct  JsonSerializer_t1424496335  : public RuntimeObject
{
public:
	// Newtonsoft.Json.TypeNameHandling Newtonsoft.Json.JsonSerializer::_typeNameHandling
	int32_t ____typeNameHandling_0;
	// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle Newtonsoft.Json.JsonSerializer::_typeNameAssemblyFormat
	int32_t ____typeNameAssemblyFormat_1;
	// Newtonsoft.Json.PreserveReferencesHandling Newtonsoft.Json.JsonSerializer::_preserveReferencesHandling
	int32_t ____preserveReferencesHandling_2;
	// Newtonsoft.Json.ReferenceLoopHandling Newtonsoft.Json.JsonSerializer::_referenceLoopHandling
	int32_t ____referenceLoopHandling_3;
	// Newtonsoft.Json.MissingMemberHandling Newtonsoft.Json.JsonSerializer::_missingMemberHandling
	int32_t ____missingMemberHandling_4;
	// Newtonsoft.Json.ObjectCreationHandling Newtonsoft.Json.JsonSerializer::_objectCreationHandling
	int32_t ____objectCreationHandling_5;
	// Newtonsoft.Json.NullValueHandling Newtonsoft.Json.JsonSerializer::_nullValueHandling
	int32_t ____nullValueHandling_6;
	// Newtonsoft.Json.DefaultValueHandling Newtonsoft.Json.JsonSerializer::_defaultValueHandling
	int32_t ____defaultValueHandling_7;
	// Newtonsoft.Json.ConstructorHandling Newtonsoft.Json.JsonSerializer::_constructorHandling
	int32_t ____constructorHandling_8;
	// Newtonsoft.Json.MetadataPropertyHandling Newtonsoft.Json.JsonSerializer::_metadataPropertyHandling
	int32_t ____metadataPropertyHandling_9;
	// Newtonsoft.Json.JsonConverterCollection Newtonsoft.Json.JsonSerializer::_converters
	JsonConverterCollection_t3675964822 * ____converters_10;
	// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.JsonSerializer::_contractResolver
	RuntimeObject* ____contractResolver_11;
	// Newtonsoft.Json.Serialization.ITraceWriter Newtonsoft.Json.JsonSerializer::_traceWriter
	RuntimeObject* ____traceWriter_12;
	// System.Collections.IEqualityComparer Newtonsoft.Json.JsonSerializer::_equalityComparer
	RuntimeObject* ____equalityComparer_13;
	// System.Runtime.Serialization.SerializationBinder Newtonsoft.Json.JsonSerializer::_binder
	SerializationBinder_t274213469 * ____binder_14;
	// System.Runtime.Serialization.StreamingContext Newtonsoft.Json.JsonSerializer::_context
	StreamingContext_t3711869237  ____context_15;
	// Newtonsoft.Json.Serialization.IReferenceResolver Newtonsoft.Json.JsonSerializer::_referenceResolver
	RuntimeObject* ____referenceResolver_16;
	// System.Nullable`1<Newtonsoft.Json.Formatting> Newtonsoft.Json.JsonSerializer::_formatting
	Nullable_1_t3914607011  ____formatting_17;
	// System.Nullable`1<Newtonsoft.Json.DateFormatHandling> Newtonsoft.Json.JsonSerializer::_dateFormatHandling
	Nullable_1_t3098729937  ____dateFormatHandling_18;
	// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling> Newtonsoft.Json.JsonSerializer::_dateTimeZoneHandling
	Nullable_1_t430194516  ____dateTimeZoneHandling_19;
	// System.Nullable`1<Newtonsoft.Json.DateParseHandling> Newtonsoft.Json.JsonSerializer::_dateParseHandling
	Nullable_1_t179296662  ____dateParseHandling_20;
	// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling> Newtonsoft.Json.JsonSerializer::_floatFormatHandling
	Nullable_1_t2285469903  ____floatFormatHandling_21;
	// System.Nullable`1<Newtonsoft.Json.FloatParseHandling> Newtonsoft.Json.JsonSerializer::_floatParseHandling
	Nullable_1_t2729527740  ____floatParseHandling_22;
	// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling> Newtonsoft.Json.JsonSerializer::_stringEscapeHandling
	Nullable_1_t1505470351  ____stringEscapeHandling_23;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializer::_culture
	CultureInfo_t4157843068 * ____culture_24;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonSerializer::_maxDepth
	Nullable_1_t378540539  ____maxDepth_25;
	// System.Boolean Newtonsoft.Json.JsonSerializer::_maxDepthSet
	bool ____maxDepthSet_26;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.JsonSerializer::_checkAdditionalContent
	Nullable_1_t1819850047  ____checkAdditionalContent_27;
	// System.String Newtonsoft.Json.JsonSerializer::_dateFormatString
	String_t* ____dateFormatString_28;
	// System.Boolean Newtonsoft.Json.JsonSerializer::_dateFormatStringSet
	bool ____dateFormatStringSet_29;
	// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs> Newtonsoft.Json.JsonSerializer::Error
	EventHandler_1_t2935836205 * ___Error_30;

public:
	inline static int32_t get_offset_of__typeNameHandling_0() { return static_cast<int32_t>(offsetof(JsonSerializer_t1424496335, ____typeNameHandling_0)); }
	inline int32_t get__typeNameHandling_0() const { return ____typeNameHandling_0; }
	inline int32_t* get_address_of__typeNameHandling_0() { return &____typeNameHandling_0; }
	inline void set__typeNameHandling_0(int32_t value)
	{
		____typeNameHandling_0 = value;
	}

	inline static int32_t get_offset_of__typeNameAssemblyFormat_1() { return static_cast<int32_t>(offsetof(JsonSerializer_t1424496335, ____typeNameAssemblyFormat_1)); }
	inline int32_t get__typeNameAssemblyFormat_1() const { return ____typeNameAssemblyFormat_1; }
	inline int32_t* get_address_of__typeNameAssemblyFormat_1() { return &____typeNameAssemblyFormat_1; }
	inline void set__typeNameAssemblyFormat_1(int32_t value)
	{
		____typeNameAssemblyFormat_1 = value;
	}

	inline static int32_t get_offset_of__preserveReferencesHandling_2() { return static_cast<int32_t>(offsetof(JsonSerializer_t1424496335, ____preserveReferencesHandling_2)); }
	inline int32_t get__preserveReferencesHandling_2() const { return ____preserveReferencesHandling_2; }
	inline int32_t* get_address_of__preserveReferencesHandling_2() { return &____preserveReferencesHandling_2; }
	inline void set__preserveReferencesHandling_2(int32_t value)
	{
		____preserveReferencesHandling_2 = value;
	}

	inline static int32_t get_offset_of__referenceLoopHandling_3() { return static_cast<int32_t>(offsetof(JsonSerializer_t1424496335, ____referenceLoopHandling_3)); }
	inline int32_t get__referenceLoopHandling_3() const { return ____referenceLoopHandling_3; }
	inline int32_t* get_address_of__referenceLoopHandling_3() { return &____referenceLoopHandling_3; }
	inline void set__referenceLoopHandling_3(int32_t value)
	{
		____referenceLoopHandling_3 = value;
	}

	inline static int32_t get_offset_of__missingMemberHandling_4() { return static_cast<int32_t>(offsetof(JsonSerializer_t1424496335, ____missingMemberHandling_4)); }
	inline int32_t get__missingMemberHandling_4() const { return ____missingMemberHandling_4; }
	inline int32_t* get_address_of__missingMemberHandling_4() { return &____missingMemberHandling_4; }
	inline void set__missingMemberHandling_4(int32_t value)
	{
		____missingMemberHandling_4 = value;
	}

	inline static int32_t get_offset_of__objectCreationHandling_5() { return static_cast<int32_t>(offsetof(JsonSerializer_t1424496335, ____objectCreationHandling_5)); }
	inline int32_t get__objectCreationHandling_5() const { return ____objectCreationHandling_5; }
	inline int32_t* get_address_of__objectCreationHandling_5() { return &____objectCreationHandling_5; }
	inline void set__objectCreationHandling_5(int32_t value)
	{
		____objectCreationHandling_5 = value;
	}

	inline static int32_t get_offset_of__nullValueHandling_6() { return static_cast<int32_t>(offsetof(JsonSerializer_t1424496335, ____nullValueHandling_6)); }
	inline int32_t get__nullValueHandling_6() const { return ____nullValueHandling_6; }
	inline int32_t* get_address_of__nullValueHandling_6() { return &____nullValueHandling_6; }
	inline void set__nullValueHandling_6(int32_t value)
	{
		____nullValueHandling_6 = value;
	}

	inline static int32_t get_offset_of__defaultValueHandling_7() { return static_cast<int32_t>(offsetof(JsonSerializer_t1424496335, ____defaultValueHandling_7)); }
	inline int32_t get__defaultValueHandling_7() const { return ____defaultValueHandling_7; }
	inline int32_t* get_address_of__defaultValueHandling_7() { return &____defaultValueHandling_7; }
	inline void set__defaultValueHandling_7(int32_t value)
	{
		____defaultValueHandling_7 = value;
	}

	inline static int32_t get_offset_of__constructorHandling_8() { return static_cast<int32_t>(offsetof(JsonSerializer_t1424496335, ____constructorHandling_8)); }
	inline int32_t get__constructorHandling_8() const { return ____constructorHandling_8; }
	inline int32_t* get_address_of__constructorHandling_8() { return &____constructorHandling_8; }
	inline void set__constructorHandling_8(int32_t value)
	{
		____constructorHandling_8 = value;
	}

	inline static int32_t get_offset_of__metadataPropertyHandling_9() { return static_cast<int32_t>(offsetof(JsonSerializer_t1424496335, ____metadataPropertyHandling_9)); }
	inline int32_t get__metadataPropertyHandling_9() const { return ____metadataPropertyHandling_9; }
	inline int32_t* get_address_of__metadataPropertyHandling_9() { return &____metadataPropertyHandling_9; }
	inline void set__metadataPropertyHandling_9(int32_t value)
	{
		____metadataPropertyHandling_9 = value;
	}

	inline static int32_t get_offset_of__converters_10() { return static_cast<int32_t>(offsetof(JsonSerializer_t1424496335, ____converters_10)); }
	inline JsonConverterCollection_t3675964822 * get__converters_10() const { return ____converters_10; }
	inline JsonConverterCollection_t3675964822 ** get_address_of__converters_10() { return &____converters_10; }
	inline void set__converters_10(JsonConverterCollection_t3675964822 * value)
	{
		____converters_10 = value;
		Il2CppCodeGenWriteBarrier((&____converters_10), value);
	}

	inline static int32_t get_offset_of__contractResolver_11() { return static_cast<int32_t>(offsetof(JsonSerializer_t1424496335, ____contractResolver_11)); }
	inline RuntimeObject* get__contractResolver_11() const { return ____contractResolver_11; }
	inline RuntimeObject** get_address_of__contractResolver_11() { return &____contractResolver_11; }
	inline void set__contractResolver_11(RuntimeObject* value)
	{
		____contractResolver_11 = value;
		Il2CppCodeGenWriteBarrier((&____contractResolver_11), value);
	}

	inline static int32_t get_offset_of__traceWriter_12() { return static_cast<int32_t>(offsetof(JsonSerializer_t1424496335, ____traceWriter_12)); }
	inline RuntimeObject* get__traceWriter_12() const { return ____traceWriter_12; }
	inline RuntimeObject** get_address_of__traceWriter_12() { return &____traceWriter_12; }
	inline void set__traceWriter_12(RuntimeObject* value)
	{
		____traceWriter_12 = value;
		Il2CppCodeGenWriteBarrier((&____traceWriter_12), value);
	}

	inline static int32_t get_offset_of__equalityComparer_13() { return static_cast<int32_t>(offsetof(JsonSerializer_t1424496335, ____equalityComparer_13)); }
	inline RuntimeObject* get__equalityComparer_13() const { return ____equalityComparer_13; }
	inline RuntimeObject** get_address_of__equalityComparer_13() { return &____equalityComparer_13; }
	inline void set__equalityComparer_13(RuntimeObject* value)
	{
		____equalityComparer_13 = value;
		Il2CppCodeGenWriteBarrier((&____equalityComparer_13), value);
	}

	inline static int32_t get_offset_of__binder_14() { return static_cast<int32_t>(offsetof(JsonSerializer_t1424496335, ____binder_14)); }
	inline SerializationBinder_t274213469 * get__binder_14() const { return ____binder_14; }
	inline SerializationBinder_t274213469 ** get_address_of__binder_14() { return &____binder_14; }
	inline void set__binder_14(SerializationBinder_t274213469 * value)
	{
		____binder_14 = value;
		Il2CppCodeGenWriteBarrier((&____binder_14), value);
	}

	inline static int32_t get_offset_of__context_15() { return static_cast<int32_t>(offsetof(JsonSerializer_t1424496335, ____context_15)); }
	inline StreamingContext_t3711869237  get__context_15() const { return ____context_15; }
	inline StreamingContext_t3711869237 * get_address_of__context_15() { return &____context_15; }
	inline void set__context_15(StreamingContext_t3711869237  value)
	{
		____context_15 = value;
	}

	inline static int32_t get_offset_of__referenceResolver_16() { return static_cast<int32_t>(offsetof(JsonSerializer_t1424496335, ____referenceResolver_16)); }
	inline RuntimeObject* get__referenceResolver_16() const { return ____referenceResolver_16; }
	inline RuntimeObject** get_address_of__referenceResolver_16() { return &____referenceResolver_16; }
	inline void set__referenceResolver_16(RuntimeObject* value)
	{
		____referenceResolver_16 = value;
		Il2CppCodeGenWriteBarrier((&____referenceResolver_16), value);
	}

	inline static int32_t get_offset_of__formatting_17() { return static_cast<int32_t>(offsetof(JsonSerializer_t1424496335, ____formatting_17)); }
	inline Nullable_1_t3914607011  get__formatting_17() const { return ____formatting_17; }
	inline Nullable_1_t3914607011 * get_address_of__formatting_17() { return &____formatting_17; }
	inline void set__formatting_17(Nullable_1_t3914607011  value)
	{
		____formatting_17 = value;
	}

	inline static int32_t get_offset_of__dateFormatHandling_18() { return static_cast<int32_t>(offsetof(JsonSerializer_t1424496335, ____dateFormatHandling_18)); }
	inline Nullable_1_t3098729937  get__dateFormatHandling_18() const { return ____dateFormatHandling_18; }
	inline Nullable_1_t3098729937 * get_address_of__dateFormatHandling_18() { return &____dateFormatHandling_18; }
	inline void set__dateFormatHandling_18(Nullable_1_t3098729937  value)
	{
		____dateFormatHandling_18 = value;
	}

	inline static int32_t get_offset_of__dateTimeZoneHandling_19() { return static_cast<int32_t>(offsetof(JsonSerializer_t1424496335, ____dateTimeZoneHandling_19)); }
	inline Nullable_1_t430194516  get__dateTimeZoneHandling_19() const { return ____dateTimeZoneHandling_19; }
	inline Nullable_1_t430194516 * get_address_of__dateTimeZoneHandling_19() { return &____dateTimeZoneHandling_19; }
	inline void set__dateTimeZoneHandling_19(Nullable_1_t430194516  value)
	{
		____dateTimeZoneHandling_19 = value;
	}

	inline static int32_t get_offset_of__dateParseHandling_20() { return static_cast<int32_t>(offsetof(JsonSerializer_t1424496335, ____dateParseHandling_20)); }
	inline Nullable_1_t179296662  get__dateParseHandling_20() const { return ____dateParseHandling_20; }
	inline Nullable_1_t179296662 * get_address_of__dateParseHandling_20() { return &____dateParseHandling_20; }
	inline void set__dateParseHandling_20(Nullable_1_t179296662  value)
	{
		____dateParseHandling_20 = value;
	}

	inline static int32_t get_offset_of__floatFormatHandling_21() { return static_cast<int32_t>(offsetof(JsonSerializer_t1424496335, ____floatFormatHandling_21)); }
	inline Nullable_1_t2285469903  get__floatFormatHandling_21() const { return ____floatFormatHandling_21; }
	inline Nullable_1_t2285469903 * get_address_of__floatFormatHandling_21() { return &____floatFormatHandling_21; }
	inline void set__floatFormatHandling_21(Nullable_1_t2285469903  value)
	{
		____floatFormatHandling_21 = value;
	}

	inline static int32_t get_offset_of__floatParseHandling_22() { return static_cast<int32_t>(offsetof(JsonSerializer_t1424496335, ____floatParseHandling_22)); }
	inline Nullable_1_t2729527740  get__floatParseHandling_22() const { return ____floatParseHandling_22; }
	inline Nullable_1_t2729527740 * get_address_of__floatParseHandling_22() { return &____floatParseHandling_22; }
	inline void set__floatParseHandling_22(Nullable_1_t2729527740  value)
	{
		____floatParseHandling_22 = value;
	}

	inline static int32_t get_offset_of__stringEscapeHandling_23() { return static_cast<int32_t>(offsetof(JsonSerializer_t1424496335, ____stringEscapeHandling_23)); }
	inline Nullable_1_t1505470351  get__stringEscapeHandling_23() const { return ____stringEscapeHandling_23; }
	inline Nullable_1_t1505470351 * get_address_of__stringEscapeHandling_23() { return &____stringEscapeHandling_23; }
	inline void set__stringEscapeHandling_23(Nullable_1_t1505470351  value)
	{
		____stringEscapeHandling_23 = value;
	}

	inline static int32_t get_offset_of__culture_24() { return static_cast<int32_t>(offsetof(JsonSerializer_t1424496335, ____culture_24)); }
	inline CultureInfo_t4157843068 * get__culture_24() const { return ____culture_24; }
	inline CultureInfo_t4157843068 ** get_address_of__culture_24() { return &____culture_24; }
	inline void set__culture_24(CultureInfo_t4157843068 * value)
	{
		____culture_24 = value;
		Il2CppCodeGenWriteBarrier((&____culture_24), value);
	}

	inline static int32_t get_offset_of__maxDepth_25() { return static_cast<int32_t>(offsetof(JsonSerializer_t1424496335, ____maxDepth_25)); }
	inline Nullable_1_t378540539  get__maxDepth_25() const { return ____maxDepth_25; }
	inline Nullable_1_t378540539 * get_address_of__maxDepth_25() { return &____maxDepth_25; }
	inline void set__maxDepth_25(Nullable_1_t378540539  value)
	{
		____maxDepth_25 = value;
	}

	inline static int32_t get_offset_of__maxDepthSet_26() { return static_cast<int32_t>(offsetof(JsonSerializer_t1424496335, ____maxDepthSet_26)); }
	inline bool get__maxDepthSet_26() const { return ____maxDepthSet_26; }
	inline bool* get_address_of__maxDepthSet_26() { return &____maxDepthSet_26; }
	inline void set__maxDepthSet_26(bool value)
	{
		____maxDepthSet_26 = value;
	}

	inline static int32_t get_offset_of__checkAdditionalContent_27() { return static_cast<int32_t>(offsetof(JsonSerializer_t1424496335, ____checkAdditionalContent_27)); }
	inline Nullable_1_t1819850047  get__checkAdditionalContent_27() const { return ____checkAdditionalContent_27; }
	inline Nullable_1_t1819850047 * get_address_of__checkAdditionalContent_27() { return &____checkAdditionalContent_27; }
	inline void set__checkAdditionalContent_27(Nullable_1_t1819850047  value)
	{
		____checkAdditionalContent_27 = value;
	}

	inline static int32_t get_offset_of__dateFormatString_28() { return static_cast<int32_t>(offsetof(JsonSerializer_t1424496335, ____dateFormatString_28)); }
	inline String_t* get__dateFormatString_28() const { return ____dateFormatString_28; }
	inline String_t** get_address_of__dateFormatString_28() { return &____dateFormatString_28; }
	inline void set__dateFormatString_28(String_t* value)
	{
		____dateFormatString_28 = value;
		Il2CppCodeGenWriteBarrier((&____dateFormatString_28), value);
	}

	inline static int32_t get_offset_of__dateFormatStringSet_29() { return static_cast<int32_t>(offsetof(JsonSerializer_t1424496335, ____dateFormatStringSet_29)); }
	inline bool get__dateFormatStringSet_29() const { return ____dateFormatStringSet_29; }
	inline bool* get_address_of__dateFormatStringSet_29() { return &____dateFormatStringSet_29; }
	inline void set__dateFormatStringSet_29(bool value)
	{
		____dateFormatStringSet_29 = value;
	}

	inline static int32_t get_offset_of_Error_30() { return static_cast<int32_t>(offsetof(JsonSerializer_t1424496335, ___Error_30)); }
	inline EventHandler_1_t2935836205 * get_Error_30() const { return ___Error_30; }
	inline EventHandler_1_t2935836205 ** get_address_of_Error_30() { return &___Error_30; }
	inline void set_Error_30(EventHandler_1_t2935836205 * value)
	{
		___Error_30 = value;
		Il2CppCodeGenWriteBarrier((&___Error_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONSERIALIZER_T1424496335_H
#ifndef JSONWRITER_T1467272295_H
#define JSONWRITER_T1467272295_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.JsonWriter
struct  JsonWriter_t1467272295  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition> Newtonsoft.Json.JsonWriter::_stack
	List_1_t4000102456 * ____stack_2;
	// Newtonsoft.Json.JsonPosition Newtonsoft.Json.JsonWriter::_currentPosition
	JsonPosition_t2528027714  ____currentPosition_3;
	// Newtonsoft.Json.JsonWriter/State Newtonsoft.Json.JsonWriter::_currentState
	int32_t ____currentState_4;
	// Newtonsoft.Json.Formatting Newtonsoft.Json.JsonWriter::_formatting
	int32_t ____formatting_5;
	// System.Boolean Newtonsoft.Json.JsonWriter::<CloseOutput>k__BackingField
	bool ___U3CCloseOutputU3Ek__BackingField_6;
	// Newtonsoft.Json.DateFormatHandling Newtonsoft.Json.JsonWriter::_dateFormatHandling
	int32_t ____dateFormatHandling_7;
	// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonWriter::_dateTimeZoneHandling
	int32_t ____dateTimeZoneHandling_8;
	// Newtonsoft.Json.StringEscapeHandling Newtonsoft.Json.JsonWriter::_stringEscapeHandling
	int32_t ____stringEscapeHandling_9;
	// Newtonsoft.Json.FloatFormatHandling Newtonsoft.Json.JsonWriter::_floatFormatHandling
	int32_t ____floatFormatHandling_10;
	// System.String Newtonsoft.Json.JsonWriter::_dateFormatString
	String_t* ____dateFormatString_11;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonWriter::_culture
	CultureInfo_t4157843068 * ____culture_12;

public:
	inline static int32_t get_offset_of__stack_2() { return static_cast<int32_t>(offsetof(JsonWriter_t1467272295, ____stack_2)); }
	inline List_1_t4000102456 * get__stack_2() const { return ____stack_2; }
	inline List_1_t4000102456 ** get_address_of__stack_2() { return &____stack_2; }
	inline void set__stack_2(List_1_t4000102456 * value)
	{
		____stack_2 = value;
		Il2CppCodeGenWriteBarrier((&____stack_2), value);
	}

	inline static int32_t get_offset_of__currentPosition_3() { return static_cast<int32_t>(offsetof(JsonWriter_t1467272295, ____currentPosition_3)); }
	inline JsonPosition_t2528027714  get__currentPosition_3() const { return ____currentPosition_3; }
	inline JsonPosition_t2528027714 * get_address_of__currentPosition_3() { return &____currentPosition_3; }
	inline void set__currentPosition_3(JsonPosition_t2528027714  value)
	{
		____currentPosition_3 = value;
	}

	inline static int32_t get_offset_of__currentState_4() { return static_cast<int32_t>(offsetof(JsonWriter_t1467272295, ____currentState_4)); }
	inline int32_t get__currentState_4() const { return ____currentState_4; }
	inline int32_t* get_address_of__currentState_4() { return &____currentState_4; }
	inline void set__currentState_4(int32_t value)
	{
		____currentState_4 = value;
	}

	inline static int32_t get_offset_of__formatting_5() { return static_cast<int32_t>(offsetof(JsonWriter_t1467272295, ____formatting_5)); }
	inline int32_t get__formatting_5() const { return ____formatting_5; }
	inline int32_t* get_address_of__formatting_5() { return &____formatting_5; }
	inline void set__formatting_5(int32_t value)
	{
		____formatting_5 = value;
	}

	inline static int32_t get_offset_of_U3CCloseOutputU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(JsonWriter_t1467272295, ___U3CCloseOutputU3Ek__BackingField_6)); }
	inline bool get_U3CCloseOutputU3Ek__BackingField_6() const { return ___U3CCloseOutputU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CCloseOutputU3Ek__BackingField_6() { return &___U3CCloseOutputU3Ek__BackingField_6; }
	inline void set_U3CCloseOutputU3Ek__BackingField_6(bool value)
	{
		___U3CCloseOutputU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of__dateFormatHandling_7() { return static_cast<int32_t>(offsetof(JsonWriter_t1467272295, ____dateFormatHandling_7)); }
	inline int32_t get__dateFormatHandling_7() const { return ____dateFormatHandling_7; }
	inline int32_t* get_address_of__dateFormatHandling_7() { return &____dateFormatHandling_7; }
	inline void set__dateFormatHandling_7(int32_t value)
	{
		____dateFormatHandling_7 = value;
	}

	inline static int32_t get_offset_of__dateTimeZoneHandling_8() { return static_cast<int32_t>(offsetof(JsonWriter_t1467272295, ____dateTimeZoneHandling_8)); }
	inline int32_t get__dateTimeZoneHandling_8() const { return ____dateTimeZoneHandling_8; }
	inline int32_t* get_address_of__dateTimeZoneHandling_8() { return &____dateTimeZoneHandling_8; }
	inline void set__dateTimeZoneHandling_8(int32_t value)
	{
		____dateTimeZoneHandling_8 = value;
	}

	inline static int32_t get_offset_of__stringEscapeHandling_9() { return static_cast<int32_t>(offsetof(JsonWriter_t1467272295, ____stringEscapeHandling_9)); }
	inline int32_t get__stringEscapeHandling_9() const { return ____stringEscapeHandling_9; }
	inline int32_t* get_address_of__stringEscapeHandling_9() { return &____stringEscapeHandling_9; }
	inline void set__stringEscapeHandling_9(int32_t value)
	{
		____stringEscapeHandling_9 = value;
	}

	inline static int32_t get_offset_of__floatFormatHandling_10() { return static_cast<int32_t>(offsetof(JsonWriter_t1467272295, ____floatFormatHandling_10)); }
	inline int32_t get__floatFormatHandling_10() const { return ____floatFormatHandling_10; }
	inline int32_t* get_address_of__floatFormatHandling_10() { return &____floatFormatHandling_10; }
	inline void set__floatFormatHandling_10(int32_t value)
	{
		____floatFormatHandling_10 = value;
	}

	inline static int32_t get_offset_of__dateFormatString_11() { return static_cast<int32_t>(offsetof(JsonWriter_t1467272295, ____dateFormatString_11)); }
	inline String_t* get__dateFormatString_11() const { return ____dateFormatString_11; }
	inline String_t** get_address_of__dateFormatString_11() { return &____dateFormatString_11; }
	inline void set__dateFormatString_11(String_t* value)
	{
		____dateFormatString_11 = value;
		Il2CppCodeGenWriteBarrier((&____dateFormatString_11), value);
	}

	inline static int32_t get_offset_of__culture_12() { return static_cast<int32_t>(offsetof(JsonWriter_t1467272295, ____culture_12)); }
	inline CultureInfo_t4157843068 * get__culture_12() const { return ____culture_12; }
	inline CultureInfo_t4157843068 ** get_address_of__culture_12() { return &____culture_12; }
	inline void set__culture_12(CultureInfo_t4157843068 * value)
	{
		____culture_12 = value;
		Il2CppCodeGenWriteBarrier((&____culture_12), value);
	}
};

struct JsonWriter_t1467272295_StaticFields
{
public:
	// Newtonsoft.Json.JsonWriter/State[][] Newtonsoft.Json.JsonWriter::StateArray
	StateU5BU5DU5BU5D_t3190318925* ___StateArray_0;
	// Newtonsoft.Json.JsonWriter/State[][] Newtonsoft.Json.JsonWriter::StateArrayTempate
	StateU5BU5DU5BU5D_t3190318925* ___StateArrayTempate_1;

public:
	inline static int32_t get_offset_of_StateArray_0() { return static_cast<int32_t>(offsetof(JsonWriter_t1467272295_StaticFields, ___StateArray_0)); }
	inline StateU5BU5DU5BU5D_t3190318925* get_StateArray_0() const { return ___StateArray_0; }
	inline StateU5BU5DU5BU5D_t3190318925** get_address_of_StateArray_0() { return &___StateArray_0; }
	inline void set_StateArray_0(StateU5BU5DU5BU5D_t3190318925* value)
	{
		___StateArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___StateArray_0), value);
	}

	inline static int32_t get_offset_of_StateArrayTempate_1() { return static_cast<int32_t>(offsetof(JsonWriter_t1467272295_StaticFields, ___StateArrayTempate_1)); }
	inline StateU5BU5DU5BU5D_t3190318925* get_StateArrayTempate_1() const { return ___StateArrayTempate_1; }
	inline StateU5BU5DU5BU5D_t3190318925** get_address_of_StateArrayTempate_1() { return &___StateArrayTempate_1; }
	inline void set_StateArrayTempate_1(StateU5BU5DU5BU5D_t3190318925* value)
	{
		___StateArrayTempate_1 = value;
		Il2CppCodeGenWriteBarrier((&___StateArrayTempate_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONWRITER_T1467272295_H
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
#ifndef COMPARISON_1_T2855037343_H
#define COMPARISON_1_T2855037343_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Comparison`1<System.Object>
struct  Comparison_1_t2855037343  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPARISON_1_T2855037343_H
#ifndef FUNC_2_T2197129486_H
#define FUNC_2_T2197129486_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.String,System.Boolean>
struct  Func_2_t2197129486  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T2197129486_H
#ifndef FUNC_2_T1184875966_H
#define FUNC_2_T1184875966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.String,System.Reflection.MemberInfo>
struct  Func_2_t1184875966  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T1184875966_H
#ifndef FUNC_2_T3947292210_H
#define FUNC_2_T3947292210_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.String,System.String>
struct  Func_2_t3947292210  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T3947292210_H
#ifndef PREDICATE_1_T3905400288_H
#define PREDICATE_1_T3905400288_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Predicate`1<System.Object>
struct  Predicate_1_t3905400288  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDICATE_1_T3905400288_H
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
#ifndef UNITYACTION_1_T682124106_H
#define UNITYACTION_1_T682124106_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Boolean>
struct  UnityAction_1_t682124106  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T682124106_H
#ifndef UNITYACTION_1_T712889340_H
#define UNITYACTION_1_T712889340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Int32>>
struct  UnityAction_1_t712889340  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T712889340_H
#ifndef UNITYACTION_1_T842049751_H
#define UNITYACTION_1_T842049751_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Object>>
struct  UnityAction_1_t842049751  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T842049751_H
#ifndef UNITYACTION_1_T362444879_H
#define UNITYACTION_1_T362444879_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct  UnityAction_1_t362444879  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T362444879_H
#ifndef UNITYACTION_1_T1819441192_H
#define UNITYACTION_1_T1819441192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct  UnityAction_1_t1819441192  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T1819441192_H
#ifndef UNITYACTION_1_T4213140406_H
#define UNITYACTION_1_T4213140406_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct  UnityAction_1_t4213140406  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T4213140406_H
#ifndef UNITYACTION_1_T1484257051_H
#define UNITYACTION_1_T1484257051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct  UnityAction_1_t1484257051  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T1484257051_H
#ifndef UNITYACTION_1_T1080972524_H
#define UNITYACTION_1_T1080972524_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct  UnityAction_1_t1080972524  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T1080972524_H
#ifndef UNITYACTION_1_T3535781894_H
#define UNITYACTION_1_T3535781894_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Int32>
struct  UnityAction_1_t3535781894  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T3535781894_H
#ifndef UNITYACTION_1_T3664942305_H
#define UNITYACTION_1_T3664942305_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Object>
struct  UnityAction_1_t3664942305  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T3664942305_H
#ifndef UNITYACTION_1_T1982102915_H
#define UNITYACTION_1_T1982102915_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Single>
struct  UnityAction_1_t1982102915  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T1982102915_H
#ifndef UNITYACTION_1_T3140522465_H
#define UNITYACTION_1_T3140522465_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct  UnityAction_1_t3140522465  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T3140522465_H
#ifndef UNITYACTION_1_T2933211702_H
#define UNITYACTION_1_T2933211702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct  UnityAction_1_t2933211702  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T2933211702_H
#ifndef UNITYACTION_1_T2741065664_H
#define UNITYACTION_1_T2741065664_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct  UnityAction_1_t2741065664  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T2741065664_H
#ifndef UNITYACTION_2_T3283971887_H
#define UNITYACTION_2_T3283971887_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct  UnityAction_2_t3283971887  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_2_T3283971887_H
#ifndef UNITYACTION_2_T2165061829_H
#define UNITYACTION_2_T2165061829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct  UnityAction_2_t2165061829  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_2_T2165061829_H
#ifndef UNITYACTION_2_T1262235195_H
#define UNITYACTION_2_T1262235195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct  UnityAction_2_t1262235195  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_2_T1262235195_H
#ifndef UNITYACTION_3_T1557236713_H
#define UNITYACTION_3_T1557236713_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct  UnityAction_3_t1557236713  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_3_T1557236713_H
#ifndef UNITYACTION_4_T682480391_H
#define UNITYACTION_4_T682480391_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
struct  UnityAction_4_t682480391  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_4_T682480391_H
#ifndef U3CSTARTU3EC__ITERATOR0_T3860393442_H
#define U3CSTARTU3EC__ITERATOR0_T3860393442_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>
struct  U3CStartU3Ec__Iterator0_t3860393442  : public RuntimeObject
{
public:
	// T UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0::tweenInfo
	ColorTween_t809614380  ___tweenInfo_0;
	// System.Single UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0::<elapsedTime>__0
	float ___U3CelapsedTimeU3E__0_1;
	// System.Single UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0::<percentage>__1
	float ___U3CpercentageU3E__1_2;
	// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_tweenInfo_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t3860393442, ___tweenInfo_0)); }
	inline ColorTween_t809614380  get_tweenInfo_0() const { return ___tweenInfo_0; }
	inline ColorTween_t809614380 * get_address_of_tweenInfo_0() { return &___tweenInfo_0; }
	inline void set_tweenInfo_0(ColorTween_t809614380  value)
	{
		___tweenInfo_0 = value;
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E__0_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t3860393442, ___U3CelapsedTimeU3E__0_1)); }
	inline float get_U3CelapsedTimeU3E__0_1() const { return ___U3CelapsedTimeU3E__0_1; }
	inline float* get_address_of_U3CelapsedTimeU3E__0_1() { return &___U3CelapsedTimeU3E__0_1; }
	inline void set_U3CelapsedTimeU3E__0_1(float value)
	{
		___U3CelapsedTimeU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CpercentageU3E__1_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t3860393442, ___U3CpercentageU3E__1_2)); }
	inline float get_U3CpercentageU3E__1_2() const { return ___U3CpercentageU3E__1_2; }
	inline float* get_address_of_U3CpercentageU3E__1_2() { return &___U3CpercentageU3E__1_2; }
	inline void set_U3CpercentageU3E__1_2(float value)
	{
		___U3CpercentageU3E__1_2 = value;
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t3860393442, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t3860393442, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t3860393442, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTARTU3EC__ITERATOR0_T3860393442_H
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
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t390618515  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterInfo_t1861056598 * m_Items[1];

public:
	inline ParameterInfo_t1861056598 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_t1861056598 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_t1861056598 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ParameterInfo_t1861056598 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_t1861056598 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_t1861056598 * value)
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
// Newtonsoft.Json.JsonConverter[]
struct JsonConverterU5BU5D_t155849004  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) JsonConverter_t1047106545 * m_Items[1];

public:
	inline JsonConverter_t1047106545 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline JsonConverter_t1047106545 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, JsonConverter_t1047106545 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline JsonConverter_t1047106545 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline JsonConverter_t1047106545 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, JsonConverter_t1047106545 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m3535252839_gshared (UnityAction_1_t682124106 * __this, bool ___arg00, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m3388120194_gshared (UnityAction_1_t3535781894 * __this, int32_t ___arg00, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m2929687399_gshared (UnityAction_1_t3664942305 * __this, RuntimeObject * ___arg00, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m1035307306_gshared (UnityAction_1_t1982102915 * __this, float ___arg00, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m927447181_gshared (UnityAction_1_t3140522465 * __this, Color_t2555686324  ___arg00, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m3649732398_gshared (UnityAction_1_t2933211702 * __this, Scene_t2348375561  ___arg00, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m610765085_gshared (UnityAction_1_t2741065664 * __this, Vector2_t2156229523  ___arg00, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::Invoke(T0,T1)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_m2304474703_gshared (UnityAction_2_t3283971887 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::Invoke(T0,T1)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_m1541286357_gshared (UnityAction_2_t2165061829 * __this, Scene_t2348375561  ___arg00, int32_t ___arg11, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::Invoke(T0,T1)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_m944492567_gshared (UnityAction_2_t1262235195 * __this, Scene_t2348375561  ___arg00, Scene_t2348375561  ___arg11, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::Invoke(T0,T1,T2)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_3_Invoke_m1904347475_gshared (UnityAction_3_t1557236713 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T0,T1,T2,T3)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_4_Invoke_m218720656_gshared (UnityAction_4_t682480391 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, RuntimeObject * ___arg33, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_m3173759778_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Func_2__ctor_m3104565095_gshared (Func_2_t3759279471 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_m3853239423_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t3759279471 * p1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Distinct<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Distinct_TisRuntimeObject_m685375968_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Func_2__ctor_m406556452_gshared (Func_2_t2447130374 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<!!1,!!2> System.Linq.Enumerable::ToDictionary<System.Object,System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>,System.Func`2<!!0,!!2>)
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t132545152 * Enumerable_ToDictionary_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m3658783084_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t2447130374 * p1, Func_2_t2447130374 * p2, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t2086727927  Dictionary_2_GetEnumerator_m3278257048_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR KeyValuePair_2_t2530217319  Enumerator_get_Current_m2655181939_gshared (Enumerator_t2086727927 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m1328507389_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m3464904234_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m1107569389_gshared (Enumerator_t2086727927 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.Events.BaseInvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR void BaseInvokableCall__ctor_m2110966014 (BaseInvokableCall_t2703961024 * __this, RuntimeObject * ___target0, MethodInfo_t * ___function1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method);
// System.Delegate UnityEngineInternal.NetFxCoreExtensions::CreateDelegate(System.Reflection.MethodInfo,System.Type,System.Object)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * NetFxCoreExtensions_CreateDelegate_m751211712 (RuntimeObject * __this /* static, unused */, MethodInfo_t * ___self0, Type_t * ___delegateType1, RuntimeObject * ___target2, const RuntimeMethod* method);
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BaseInvokableCall__ctor_m768115019 (BaseInvokableCall_t2703961024 * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_Combine_m1859655160 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_Remove_m334097152 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Events.BaseInvokableCall::AllowInvoke(System.Delegate)
extern "C" IL2CPP_METHOD_ATTR bool BaseInvokableCall_AllowInvoke_m878393606 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * ___delegate0, const RuntimeMethod* method);
// System.Object System.Delegate::get_Target()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Delegate_get_Target_m2361978888 (Delegate_t1188392813 * __this, const RuntimeMethod* method);
// System.Reflection.MethodInfo UnityEngineInternal.NetFxCoreExtensions::GetMethodInfo(System.Delegate)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * NetFxCoreExtensions_GetMethodInfo_m444570327 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * ___self0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::Invoke(T0)
inline void UnityAction_1_Invoke_m3535252839 (UnityAction_1_t682124106 * __this, bool ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t682124106 *, bool, const RuntimeMethod*))UnityAction_1_Invoke_m3535252839_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::Invoke(T0)
inline void UnityAction_1_Invoke_m3388120194 (UnityAction_1_t3535781894 * __this, int32_t ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t3535781894 *, int32_t, const RuntimeMethod*))UnityAction_1_Invoke_m3388120194_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::Invoke(T0)
inline void UnityAction_1_Invoke_m2929687399 (UnityAction_1_t3664942305 * __this, RuntimeObject * ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t3664942305 *, RuntimeObject *, const RuntimeMethod*))UnityAction_1_Invoke_m2929687399_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::Invoke(T0)
inline void UnityAction_1_Invoke_m1035307306 (UnityAction_1_t1982102915 * __this, float ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t1982102915 *, float, const RuntimeMethod*))UnityAction_1_Invoke_m1035307306_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::Invoke(T0)
inline void UnityAction_1_Invoke_m927447181 (UnityAction_1_t3140522465 * __this, Color_t2555686324  ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t3140522465 *, Color_t2555686324 , const RuntimeMethod*))UnityAction_1_Invoke_m927447181_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::Invoke(T0)
inline void UnityAction_1_Invoke_m3649732398 (UnityAction_1_t2933211702 * __this, Scene_t2348375561  ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t2933211702 *, Scene_t2348375561 , const RuntimeMethod*))UnityAction_1_Invoke_m3649732398_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::Invoke(T0)
inline void UnityAction_1_Invoke_m610765085 (UnityAction_1_t2741065664 * __this, Vector2_t2156229523  ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t2741065664 *, Vector2_t2156229523 , const RuntimeMethod*))UnityAction_1_Invoke_m610765085_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::Invoke(T0,T1)
inline void UnityAction_2_Invoke_m2304474703 (UnityAction_2_t3283971887 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_t3283971887 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))UnityAction_2_Invoke_m2304474703_gshared)(__this, ___arg00, ___arg11, method);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::Invoke(T0,T1)
inline void UnityAction_2_Invoke_m1541286357 (UnityAction_2_t2165061829 * __this, Scene_t2348375561  ___arg00, int32_t ___arg11, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_t2165061829 *, Scene_t2348375561 , int32_t, const RuntimeMethod*))UnityAction_2_Invoke_m1541286357_gshared)(__this, ___arg00, ___arg11, method);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::Invoke(T0,T1)
inline void UnityAction_2_Invoke_m944492567 (UnityAction_2_t1262235195 * __this, Scene_t2348375561  ___arg00, Scene_t2348375561  ___arg11, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_t1262235195 *, Scene_t2348375561 , Scene_t2348375561 , const RuntimeMethod*))UnityAction_2_Invoke_m944492567_gshared)(__this, ___arg00, ___arg11, method);
}
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::Invoke(T0,T1,T2)
inline void UnityAction_3_Invoke_m1904347475 (UnityAction_3_t1557236713 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_3_t1557236713 *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))UnityAction_3_Invoke_m1904347475_gshared)(__this, ___arg00, ___arg11, ___arg22, method);
}
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T0,T1,T2,T3)
inline void UnityAction_4_Invoke_m218720656 (UnityAction_4_t682480391 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, RuntimeObject * ___arg33, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_4_t682480391 *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))UnityAction_4_Invoke_m218720656_gshared)(__this, ___arg00, ___arg11, ___arg22, ___arg33, method);
}
// System.Void UnityEngine.Events.UnityEventBase::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEventBase__ctor_m1851535676 (UnityEventBase_t3960448221 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
extern "C" IL2CPP_METHOD_ATTR void UnityEventBase_AddCall_m3539965410 (UnityEventBase_t3960448221 * __this, BaseInvokableCall_t2703961024 * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR void UnityEventBase_RemoveListener_m3326364145 (UnityEventBase_t3960448221 * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method);
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Object,System.String,System.Type[])
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * UnityEventBase_GetValidMethodInfo_m3989987635 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, String_t* ___functionName1, TypeU5BU5D_t3940880105* ___argumentTypes2, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.UnityEventBase::PrepareInvoke()
extern "C" IL2CPP_METHOD_ATTR List_1_t4176035766 * UnityEventBase_PrepareInvoke_m1785382128 (UnityEventBase_t3960448221 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32)
inline BaseInvokableCall_t2703961024 * List_1_get_Item_m4156046467 (List_1_t4176035766 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  BaseInvokableCall_t2703961024 * (*) (List_1_t4176035766 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Events.InvokableCall::Invoke()
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_Invoke_m1437964737 (InvokableCall_t832123510 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count()
inline int32_t List_1_get_Count_m1245201994 (List_1_t4176035766 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4176035766 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m3058704252 (NotImplementedException_t3489357830 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m2494070935 (NotSupportedException_t1314879016 * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.CoroutineTween.ColorTween::ValidTarget()
extern "C" IL2CPP_METHOD_ATTR bool ColorTween_ValidTarget_m376919233 (ColorTween_t809614380 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.CoroutineTween.ColorTween::get_ignoreTimeScale()
extern "C" IL2CPP_METHOD_ATTR bool ColorTween_get_ignoreTimeScale_m1133957174 (ColorTween_t809614380 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_m4270080131 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Single UnityEngine.UI.CoroutineTween.ColorTween::get_duration()
extern "C" IL2CPP_METHOD_ATTR float ColorTween_get_duration_m3264097060 (ColorTween_t809614380 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Clamp01_m56433566 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.CoroutineTween.ColorTween::TweenValue(System.Single)
extern "C" IL2CPP_METHOD_ATTR void ColorTween_TweenValue_m3895102629 (ColorTween_t809614380 * __this, float ___floatPercentage0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.CoroutineTween.FloatTween::ValidTarget()
extern "C" IL2CPP_METHOD_ATTR bool FloatTween_ValidTarget_m885246038 (FloatTween_t1274330004 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.CoroutineTween.FloatTween::get_ignoreTimeScale()
extern "C" IL2CPP_METHOD_ATTR bool FloatTween_get_ignoreTimeScale_m322812475 (FloatTween_t1274330004 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.UI.CoroutineTween.FloatTween::get_duration()
extern "C" IL2CPP_METHOD_ATTR float FloatTween_get_duration_m1227071020 (FloatTween_t1274330004 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.CoroutineTween.FloatTween::TweenValue(System.Single)
extern "C" IL2CPP_METHOD_ATTR void FloatTween_TweenValue_m52237061 (FloatTween_t1274330004 * __this, float ___floatPercentage0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarning_m3752629331 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
extern "C" IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m2006396688 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" IL2CPP_METHOD_ATTR Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m3411253000 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m615723318 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonConverter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void JsonConverter__ctor_m2308226415 (JsonConverter_t1047106545 * __this, const RuntimeMethod* method);
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Reflection.BindingFlags)
extern "C" IL2CPP_METHOD_ATTR PropertyInfo_t * Type_GetProperty_m4206634422 (Type_t * __this, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod()
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * PropertyInfo_GetGetMethod_m1510309854 (PropertyInfo_t * __this, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod()
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * PropertyInfo_GetSetMethod_m66158558 (PropertyInfo_t * __this, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Any<System.Reflection.ParameterInfo>(System.Collections.Generic.IEnumerable`1<!!0>)
inline bool Enumerable_Any_TisParameterInfo_t1861056598_m2308149110 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_m3173759778_gshared)(__this /* static, unused */, p0, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m1216717135 (ArgumentException_t132251570 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR void FieldInfo_SetValue_m2460171138 (FieldInfo_t * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Any<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
inline bool Enumerable_Any_TisString_t_m3986012742 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_m3173759778_gshared)(__this /* static, unused */, p0, method);
}
// System.Void System.InvalidProgramException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidProgramException__ctor_m3976792134 (InvalidProgramException_t3836716986 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Func`2<System.String,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m4235938257 (Func_2_t2197129486 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t2197129486 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m3104565095_gshared)(__this, p0, p1, method);
}
// System.Boolean System.Linq.Enumerable::Any<System.String>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline bool Enumerable_Any_TisString_t_m3256256093 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t2197129486 * p1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t2197129486 *, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_m3853239423_gshared)(__this /* static, unused */, p0, p1, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Distinct<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
inline RuntimeObject* Enumerable_Distinct_TisString_t_m564215000 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_Distinct_TisRuntimeObject_m685375968_gshared)(__this /* static, unused */, p0, method);
}
// System.Void System.Func`2<System.String,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m1878178629 (Func_2_t3947292210 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t3947292210 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m406556452_gshared)(__this, p0, p1, method);
}
// System.Void System.Func`2<System.String,System.Reflection.MemberInfo>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m1082416029 (Func_2_t1184875966 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t1184875966 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m406556452_gshared)(__this, p0, p1, method);
}
// System.Collections.Generic.Dictionary`2<!!1,!!2> System.Linq.Enumerable::ToDictionary<System.String,System.String,System.Reflection.MemberInfo>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>,System.Func`2<!!0,!!2>)
inline Dictionary_2_t3165258040 * Enumerable_ToDictionary_TisString_t_TisString_t_TisMemberInfo_t_m2153618120 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t3947292210 * p1, Func_2_t1184875966 * p2, const RuntimeMethod* method)
{
	return ((  Dictionary_2_t3165258040 * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t3947292210 *, Func_2_t1184875966 *, const RuntimeMethod*))Enumerable_ToDictionary_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m3658783084_gshared)(__this /* static, unused */, p0, p1, p2, method);
}
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject::Load(Newtonsoft.Json.JsonReader)
extern "C" IL2CPP_METHOD_ATTR JObject_t2059125928 * JObject_Load_m3922106929 (RuntimeObject * __this /* static, unused */, JsonReader_t2369136700 * p0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>::GetEnumerator()
inline Enumerator_t824473519  Dictionary_2_GetEnumerator_m4199775080 (Dictionary_2_t3165258040 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t824473519  (*) (Dictionary_2_t3165258040 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m3278257048_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Reflection.MemberInfo>::get_Current()
inline KeyValuePair_2_t1267962911  Enumerator_get_Current_m841967122 (Enumerator_t824473519 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t1267962911  (*) (Enumerator_t824473519 *, const RuntimeMethod*))Enumerator_get_Current_m2655181939_gshared)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.Reflection.MemberInfo>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m221608719 (KeyValuePair_2_t1267962911 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t1267962911 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1328507389_gshared)(__this, method);
}
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JObject::get_Item(System.String)
extern "C" IL2CPP_METHOD_ATTR JToken_t1038539247 * JObject_get_Item_m332585514 (JObject_t2059125928 * __this, String_t* p0, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.Reflection.MemberInfo>::get_Value()
inline MemberInfo_t * KeyValuePair_2_get_Value_m188113207 (KeyValuePair_2_t1267962911 * __this, const RuntimeMethod* method)
{
	return ((  MemberInfo_t * (*) (KeyValuePair_2_t1267962911 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3464904234_gshared)(__this, method);
}
// System.Object Newtonsoft.Json.Linq.JToken::ToObject(System.Type,Newtonsoft.Json.JsonSerializer)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * JToken_ToObject_m1717874774 (JToken_t1038539247 * __this, Type_t * p0, JsonSerializer_t1424496335 * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Reflection.MemberInfo>::MoveNext()
inline bool Enumerator_MoveNext_m79352559 (Enumerator_t824473519 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t824473519 *, const RuntimeMethod*))Enumerator_MoveNext_m1107569389_gshared)(__this, method);
}
// System.Void Newtonsoft.Json.Linq.JObject::.ctor()
extern "C" IL2CPP_METHOD_ATTR void JObject__ctor_m1738103074 (JObject_t2059125928 * __this, const RuntimeMethod* method);
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::FromObject(System.Object,Newtonsoft.Json.JsonSerializer)
extern "C" IL2CPP_METHOD_ATTR JToken_t1038539247 * JToken_FromObject_m1495845376 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, JsonSerializer_t1424496335 * p1, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JObject::set_Item(System.String,Newtonsoft.Json.Linq.JToken)
extern "C" IL2CPP_METHOD_ATTR void JObject_set_Item_m3337384077 (JObject_t2059125928 * __this, String_t* p0, JToken_t1038539247 * p1, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_m3910153236_gshared (InvokableCall_1_t2672850562 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1__ctor_m3910153236_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		NullCheck((BaseInvokableCall_t2703961024 *)__this);
		BaseInvokableCall__ctor_m2110966014((BaseInvokableCall_t2703961024 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		MethodInfo_t * L_2 = ___theFunction1;
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_3, /*hidden argument*/NULL);
		RuntimeObject * L_5 = ___target0;
		Delegate_t1188392813 * L_6 = NetFxCoreExtensions_CreateDelegate_m751211712(NULL /*static, unused*/, (MethodInfo_t *)L_2, (Type_t *)L_4, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		NullCheck((InvokableCall_1_t2672850562 *)__this);
		((  void (*) (InvokableCall_1_t2672850562 *, UnityAction_1_t3140522465 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t2672850562 *)__this, (UnityAction_1_t3140522465 *)((UnityAction_1_t3140522465 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_m2610016537_gshared (InvokableCall_1_t2672850562 * __this, UnityAction_1_t3140522465 * ___action0, const RuntimeMethod* method)
{
	{
		NullCheck((BaseInvokableCall_t2703961024 *)__this);
		BaseInvokableCall__ctor_m768115019((BaseInvokableCall_t2703961024 *)__this, /*hidden argument*/NULL);
		UnityAction_1_t3140522465 * L_0 = ___action0;
		NullCheck((InvokableCall_1_t2672850562 *)__this);
		((  void (*) (InvokableCall_1_t2672850562 *, UnityAction_1_t3140522465 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t2672850562 *)__this, (UnityAction_1_t3140522465 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::add_Delegate(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_add_Delegate_m1240362230_gshared (InvokableCall_1_t2672850562 * __this, UnityAction_1_t3140522465 * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t3140522465 * V_0 = NULL;
	UnityAction_1_t3140522465 * V_1 = NULL;
	{
		UnityAction_1_t3140522465 * L_0 = (UnityAction_1_t3140522465 *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t3140522465 *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t3140522465 * L_1 = V_0;
		V_1 = (UnityAction_1_t3140522465 *)L_1;
		UnityAction_1_t3140522465 ** L_2 = (UnityAction_1_t3140522465 **)__this->get_address_of_Delegate_0();
		UnityAction_1_t3140522465 * L_3 = V_1;
		UnityAction_1_t3140522465 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, (Delegate_t1188392813 *)L_3, (Delegate_t1188392813 *)L_4, /*hidden argument*/NULL);
		UnityAction_1_t3140522465 * L_6 = V_0;
		UnityAction_1_t3140522465 * L_7 = InterlockedCompareExchangeImpl<UnityAction_1_t3140522465 *>((UnityAction_1_t3140522465 **)(UnityAction_1_t3140522465 **)L_2, (UnityAction_1_t3140522465 *)((UnityAction_1_t3140522465 *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), (UnityAction_1_t3140522465 *)L_6);
		V_0 = (UnityAction_1_t3140522465 *)L_7;
		UnityAction_1_t3140522465 * L_8 = V_0;
		UnityAction_1_t3140522465 * L_9 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t3140522465 *)L_8) == ((RuntimeObject*)(UnityAction_1_t3140522465 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::remove_Delegate(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_remove_Delegate_m1889626100_gshared (InvokableCall_1_t2672850562 * __this, UnityAction_1_t3140522465 * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t3140522465 * V_0 = NULL;
	UnityAction_1_t3140522465 * V_1 = NULL;
	{
		UnityAction_1_t3140522465 * L_0 = (UnityAction_1_t3140522465 *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t3140522465 *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t3140522465 * L_1 = V_0;
		V_1 = (UnityAction_1_t3140522465 *)L_1;
		UnityAction_1_t3140522465 ** L_2 = (UnityAction_1_t3140522465 **)__this->get_address_of_Delegate_0();
		UnityAction_1_t3140522465 * L_3 = V_1;
		UnityAction_1_t3140522465 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, (Delegate_t1188392813 *)L_3, (Delegate_t1188392813 *)L_4, /*hidden argument*/NULL);
		UnityAction_1_t3140522465 * L_6 = V_0;
		UnityAction_1_t3140522465 * L_7 = InterlockedCompareExchangeImpl<UnityAction_1_t3140522465 *>((UnityAction_1_t3140522465 **)(UnityAction_1_t3140522465 **)L_2, (UnityAction_1_t3140522465 *)((UnityAction_1_t3140522465 *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), (UnityAction_1_t3140522465 *)L_6);
		V_0 = (UnityAction_1_t3140522465 *)L_7;
		UnityAction_1_t3140522465 * L_8 = V_0;
		UnityAction_1_t3140522465 * L_9 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t3140522465 *)L_8) == ((RuntimeObject*)(UnityAction_1_t3140522465 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_m1524307439_gshared (InvokableCall_1_t2672850562 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1_Invoke_m1524307439_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ___args0;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) == ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentException_t132251570 * L_1 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_1, (String_t*)_stringLiteral1864861238, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, InvokableCall_1_Invoke_m1524307439_RuntimeMethod_var);
	}

IL_0015:
	{
		ObjectU5BU5D_t2843939325* L_2 = ___args0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		RuntimeObject * L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		UnityAction_1_t3140522465 * L_5 = (UnityAction_1_t3140522465 *)__this->get_Delegate_0();
		bool L_6 = BaseInvokableCall_AllowInvoke_m878393606(NULL /*static, unused*/, (Delegate_t1188392813 *)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		UnityAction_1_t3140522465 * L_7 = (UnityAction_1_t3140522465 *)__this->get_Delegate_0();
		ObjectU5BU5D_t2843939325* L_8 = ___args0;
		NullCheck(L_8);
		int32_t L_9 = 0;
		RuntimeObject * L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck((UnityAction_1_t3140522465 *)L_7);
		((  void (*) (UnityAction_1_t3140522465 *, Color_t2555686324 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_t3140522465 *)L_7, (Color_t2555686324 )((*(Color_t2555686324 *)((Color_t2555686324 *)UnBox(L_10, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_0040:
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Invoke(T1)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_m2622045618_gshared (InvokableCall_1_t2672850562 * __this, Color_t2555686324  ___args00, const RuntimeMethod* method)
{
	{
		UnityAction_1_t3140522465 * L_0 = (UnityAction_1_t3140522465 *)__this->get_Delegate_0();
		bool L_1 = BaseInvokableCall_AllowInvoke_m878393606(NULL /*static, unused*/, (Delegate_t1188392813 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		UnityAction_1_t3140522465 * L_2 = (UnityAction_1_t3140522465 *)__this->get_Delegate_0();
		Color_t2555686324  L_3 = ___args00;
		NullCheck((UnityAction_1_t3140522465 *)L_2);
		((  void (*) (UnityAction_1_t3140522465 *, Color_t2555686324 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_t3140522465 *)L_2, (Color_t2555686324 )L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_001d:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR bool InvokableCall_1_Find_m3206830158_gshared (InvokableCall_1_t2672850562 * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t3140522465 * L_0 = (UnityAction_1_t3140522465 *)__this->get_Delegate_0();
		NullCheck((Delegate_t1188392813 *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m2361978888((Delegate_t1188392813 *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___targetObj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_0025;
		}
	}
	{
		UnityAction_1_t3140522465 * L_3 = (UnityAction_1_t3140522465 *)__this->get_Delegate_0();
		MethodInfo_t * L_4 = NetFxCoreExtensions_GetMethodInfo_m444570327(NULL /*static, unused*/, (Delegate_t1188392813 *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method1;
		NullCheck((RuntimeObject *)L_4);
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = 0;
	}

IL_0026:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002c;
	}

IL_002c:
	{
		bool L_7 = V_0;
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
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_m2254957474_gshared (InvokableCall_1_t2273393761 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1__ctor_m2254957474_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		NullCheck((BaseInvokableCall_t2703961024 *)__this);
		BaseInvokableCall__ctor_m2110966014((BaseInvokableCall_t2703961024 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		MethodInfo_t * L_2 = ___theFunction1;
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_3, /*hidden argument*/NULL);
		RuntimeObject * L_5 = ___target0;
		Delegate_t1188392813 * L_6 = NetFxCoreExtensions_CreateDelegate_m751211712(NULL /*static, unused*/, (MethodInfo_t *)L_2, (Type_t *)L_4, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		NullCheck((InvokableCall_1_t2273393761 *)__this);
		((  void (*) (InvokableCall_1_t2273393761 *, UnityAction_1_t2741065664 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t2273393761 *)__this, (UnityAction_1_t2741065664 *)((UnityAction_1_t2741065664 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_m1888496133_gshared (InvokableCall_1_t2273393761 * __this, UnityAction_1_t2741065664 * ___action0, const RuntimeMethod* method)
{
	{
		NullCheck((BaseInvokableCall_t2703961024 *)__this);
		BaseInvokableCall__ctor_m768115019((BaseInvokableCall_t2703961024 *)__this, /*hidden argument*/NULL);
		UnityAction_1_t2741065664 * L_0 = ___action0;
		NullCheck((InvokableCall_1_t2273393761 *)__this);
		((  void (*) (InvokableCall_1_t2273393761 *, UnityAction_1_t2741065664 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t2273393761 *)__this, (UnityAction_1_t2741065664 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::add_Delegate(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_add_Delegate_m4123929146_gshared (InvokableCall_1_t2273393761 * __this, UnityAction_1_t2741065664 * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t2741065664 * V_0 = NULL;
	UnityAction_1_t2741065664 * V_1 = NULL;
	{
		UnityAction_1_t2741065664 * L_0 = (UnityAction_1_t2741065664 *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t2741065664 *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t2741065664 * L_1 = V_0;
		V_1 = (UnityAction_1_t2741065664 *)L_1;
		UnityAction_1_t2741065664 ** L_2 = (UnityAction_1_t2741065664 **)__this->get_address_of_Delegate_0();
		UnityAction_1_t2741065664 * L_3 = V_1;
		UnityAction_1_t2741065664 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, (Delegate_t1188392813 *)L_3, (Delegate_t1188392813 *)L_4, /*hidden argument*/NULL);
		UnityAction_1_t2741065664 * L_6 = V_0;
		UnityAction_1_t2741065664 * L_7 = InterlockedCompareExchangeImpl<UnityAction_1_t2741065664 *>((UnityAction_1_t2741065664 **)(UnityAction_1_t2741065664 **)L_2, (UnityAction_1_t2741065664 *)((UnityAction_1_t2741065664 *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), (UnityAction_1_t2741065664 *)L_6);
		V_0 = (UnityAction_1_t2741065664 *)L_7;
		UnityAction_1_t2741065664 * L_8 = V_0;
		UnityAction_1_t2741065664 * L_9 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t2741065664 *)L_8) == ((RuntimeObject*)(UnityAction_1_t2741065664 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::remove_Delegate(UnityEngine.Events.UnityAction`1<T1>)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_remove_Delegate_m667188944_gshared (InvokableCall_1_t2273393761 * __this, UnityAction_1_t2741065664 * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t2741065664 * V_0 = NULL;
	UnityAction_1_t2741065664 * V_1 = NULL;
	{
		UnityAction_1_t2741065664 * L_0 = (UnityAction_1_t2741065664 *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t2741065664 *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t2741065664 * L_1 = V_0;
		V_1 = (UnityAction_1_t2741065664 *)L_1;
		UnityAction_1_t2741065664 ** L_2 = (UnityAction_1_t2741065664 **)__this->get_address_of_Delegate_0();
		UnityAction_1_t2741065664 * L_3 = V_1;
		UnityAction_1_t2741065664 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, (Delegate_t1188392813 *)L_3, (Delegate_t1188392813 *)L_4, /*hidden argument*/NULL);
		UnityAction_1_t2741065664 * L_6 = V_0;
		UnityAction_1_t2741065664 * L_7 = InterlockedCompareExchangeImpl<UnityAction_1_t2741065664 *>((UnityAction_1_t2741065664 **)(UnityAction_1_t2741065664 **)L_2, (UnityAction_1_t2741065664 *)((UnityAction_1_t2741065664 *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), (UnityAction_1_t2741065664 *)L_6);
		V_0 = (UnityAction_1_t2741065664 *)L_7;
		UnityAction_1_t2741065664 * L_8 = V_0;
		UnityAction_1_t2741065664 * L_9 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t2741065664 *)L_8) == ((RuntimeObject*)(UnityAction_1_t2741065664 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_m1160628299_gshared (InvokableCall_1_t2273393761 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1_Invoke_m1160628299_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ___args0;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) == ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentException_t132251570 * L_1 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_1, (String_t*)_stringLiteral1864861238, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, InvokableCall_1_Invoke_m1160628299_RuntimeMethod_var);
	}

IL_0015:
	{
		ObjectU5BU5D_t2843939325* L_2 = ___args0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		RuntimeObject * L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		UnityAction_1_t2741065664 * L_5 = (UnityAction_1_t2741065664 *)__this->get_Delegate_0();
		bool L_6 = BaseInvokableCall_AllowInvoke_m878393606(NULL /*static, unused*/, (Delegate_t1188392813 *)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		UnityAction_1_t2741065664 * L_7 = (UnityAction_1_t2741065664 *)__this->get_Delegate_0();
		ObjectU5BU5D_t2843939325* L_8 = ___args0;
		NullCheck(L_8);
		int32_t L_9 = 0;
		RuntimeObject * L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck((UnityAction_1_t2741065664 *)L_7);
		((  void (*) (UnityAction_1_t2741065664 *, Vector2_t2156229523 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_t2741065664 *)L_7, (Vector2_t2156229523 )((*(Vector2_t2156229523 *)((Vector2_t2156229523 *)UnBox(L_10, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_0040:
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::Invoke(T1)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_m3205384408_gshared (InvokableCall_1_t2273393761 * __this, Vector2_t2156229523  ___args00, const RuntimeMethod* method)
{
	{
		UnityAction_1_t2741065664 * L_0 = (UnityAction_1_t2741065664 *)__this->get_Delegate_0();
		bool L_1 = BaseInvokableCall_AllowInvoke_m878393606(NULL /*static, unused*/, (Delegate_t1188392813 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		UnityAction_1_t2741065664 * L_2 = (UnityAction_1_t2741065664 *)__this->get_Delegate_0();
		Vector2_t2156229523  L_3 = ___args00;
		NullCheck((UnityAction_1_t2741065664 *)L_2);
		((  void (*) (UnityAction_1_t2741065664 *, Vector2_t2156229523 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_t2741065664 *)L_2, (Vector2_t2156229523 )L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_001d:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR bool InvokableCall_1_Find_m2468125381_gshared (InvokableCall_1_t2273393761 * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t2741065664 * L_0 = (UnityAction_1_t2741065664 *)__this->get_Delegate_0();
		NullCheck((Delegate_t1188392813 *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m2361978888((Delegate_t1188392813 *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___targetObj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_0025;
		}
	}
	{
		UnityAction_1_t2741065664 * L_3 = (UnityAction_1_t2741065664 *)__this->get_Delegate_0();
		MethodInfo_t * L_4 = NetFxCoreExtensions_GetMethodInfo_m444570327(NULL /*static, unused*/, (Delegate_t1188392813 *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method1;
		NullCheck((RuntimeObject *)L_4);
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = 0;
	}

IL_0026:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002c;
	}

IL_002c:
	{
		bool L_7 = V_0;
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
// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_2__ctor_m3619012188_gshared (InvokableCall_2_t362407658 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_2__ctor_m3619012188_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		NullCheck((BaseInvokableCall_t2703961024 *)__this);
		BaseInvokableCall__ctor_m2110966014((BaseInvokableCall_t2703961024 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		MethodInfo_t * L_2 = ___theFunction1;
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_3, /*hidden argument*/NULL);
		RuntimeObject * L_5 = ___target0;
		Delegate_t1188392813 * L_6 = NetFxCoreExtensions_CreateDelegate_m751211712(NULL /*static, unused*/, (MethodInfo_t *)L_2, (Type_t *)L_4, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		__this->set_Delegate_0(((UnityAction_2_t3283971887 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_2_Invoke_m1520082677_gshared (InvokableCall_2_t362407658 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_2_Invoke_m1520082677_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ___args0;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) == ((int32_t)2)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentException_t132251570 * L_1 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_1, (String_t*)_stringLiteral1864861238, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, InvokableCall_2_Invoke_m1520082677_RuntimeMethod_var);
	}

IL_0015:
	{
		ObjectU5BU5D_t2843939325* L_2 = ___args0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		RuntimeObject * L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		ObjectU5BU5D_t2843939325* L_5 = ___args0;
		NullCheck(L_5);
		int32_t L_6 = 1;
		RuntimeObject * L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		UnityAction_2_t3283971887 * L_8 = (UnityAction_2_t3283971887 *)__this->get_Delegate_0();
		bool L_9 = BaseInvokableCall_AllowInvoke_m878393606(NULL /*static, unused*/, (Delegate_t1188392813 *)L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0050;
		}
	}
	{
		UnityAction_2_t3283971887 * L_10 = (UnityAction_2_t3283971887 *)__this->get_Delegate_0();
		ObjectU5BU5D_t2843939325* L_11 = ___args0;
		NullCheck(L_11);
		int32_t L_12 = 0;
		RuntimeObject * L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		ObjectU5BU5D_t2843939325* L_14 = ___args0;
		NullCheck(L_14);
		int32_t L_15 = 1;
		RuntimeObject * L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck((UnityAction_2_t3283971887 *)L_10);
		((  void (*) (UnityAction_2_t3283971887 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_2_t3283971887 *)L_10, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_13, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_16, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_0050:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR bool InvokableCall_2_Find_m265590023_gshared (InvokableCall_2_t362407658 * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_2_t3283971887 * L_0 = (UnityAction_2_t3283971887 *)__this->get_Delegate_0();
		NullCheck((Delegate_t1188392813 *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m2361978888((Delegate_t1188392813 *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___targetObj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_0025;
		}
	}
	{
		UnityAction_2_t3283971887 * L_3 = (UnityAction_2_t3283971887 *)__this->get_Delegate_0();
		MethodInfo_t * L_4 = NetFxCoreExtensions_GetMethodInfo_m444570327(NULL /*static, unused*/, (Delegate_t1188392813 *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method1;
		NullCheck((RuntimeObject *)L_4);
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = 0;
	}

IL_0026:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002c;
	}

IL_002c:
	{
		bool L_7 = V_0;
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
// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_3__ctor_m4245235439_gshared (InvokableCall_3_t4059188962 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_3__ctor_m4245235439_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		NullCheck((BaseInvokableCall_t2703961024 *)__this);
		BaseInvokableCall__ctor_m2110966014((BaseInvokableCall_t2703961024 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		MethodInfo_t * L_2 = ___theFunction1;
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_3, /*hidden argument*/NULL);
		RuntimeObject * L_5 = ___target0;
		Delegate_t1188392813 * L_6 = NetFxCoreExtensions_CreateDelegate_m751211712(NULL /*static, unused*/, (MethodInfo_t *)L_2, (Type_t *)L_4, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		__this->set_Delegate_0(((UnityAction_3_t1557236713 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_3_Invoke_m3141788616_gshared (InvokableCall_3_t4059188962 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_3_Invoke_m3141788616_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ___args0;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) == ((int32_t)3)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentException_t132251570 * L_1 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_1, (String_t*)_stringLiteral1864861238, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, InvokableCall_3_Invoke_m3141788616_RuntimeMethod_var);
	}

IL_0015:
	{
		ObjectU5BU5D_t2843939325* L_2 = ___args0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		RuntimeObject * L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		ObjectU5BU5D_t2843939325* L_5 = ___args0;
		NullCheck(L_5);
		int32_t L_6 = 1;
		RuntimeObject * L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		ObjectU5BU5D_t2843939325* L_8 = ___args0;
		NullCheck(L_8);
		int32_t L_9 = 2;
		RuntimeObject * L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		UnityAction_3_t1557236713 * L_11 = (UnityAction_3_t1557236713 *)__this->get_Delegate_0();
		bool L_12 = BaseInvokableCall_AllowInvoke_m878393606(NULL /*static, unused*/, (Delegate_t1188392813 *)L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0060;
		}
	}
	{
		UnityAction_3_t1557236713 * L_13 = (UnityAction_3_t1557236713 *)__this->get_Delegate_0();
		ObjectU5BU5D_t2843939325* L_14 = ___args0;
		NullCheck(L_14);
		int32_t L_15 = 0;
		RuntimeObject * L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		ObjectU5BU5D_t2843939325* L_17 = ___args0;
		NullCheck(L_17);
		int32_t L_18 = 1;
		RuntimeObject * L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		ObjectU5BU5D_t2843939325* L_20 = ___args0;
		NullCheck(L_20);
		int32_t L_21 = 2;
		RuntimeObject * L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck((UnityAction_3_t1557236713 *)L_13);
		((  void (*) (UnityAction_3_t1557236713 *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((UnityAction_3_t1557236713 *)L_13, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_16, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_19, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_22, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
	}

IL_0060:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR bool InvokableCall_3_Find_m26605783_gshared (InvokableCall_3_t4059188962 * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_3_t1557236713 * L_0 = (UnityAction_3_t1557236713 *)__this->get_Delegate_0();
		NullCheck((Delegate_t1188392813 *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m2361978888((Delegate_t1188392813 *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___targetObj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_0025;
		}
	}
	{
		UnityAction_3_t1557236713 * L_3 = (UnityAction_3_t1557236713 *)__this->get_Delegate_0();
		MethodInfo_t * L_4 = NetFxCoreExtensions_GetMethodInfo_m444570327(NULL /*static, unused*/, (Delegate_t1188392813 *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method1;
		NullCheck((RuntimeObject *)L_4);
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = 0;
	}

IL_0026:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002c;
	}

IL_002c:
	{
		bool L_7 = V_0;
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
// System.Void UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_4__ctor_m3136187504_gshared (InvokableCall_4_t2756980746 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_4__ctor_m3136187504_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		NullCheck((BaseInvokableCall_t2703961024 *)__this);
		BaseInvokableCall__ctor_m2110966014((BaseInvokableCall_t2703961024 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		MethodInfo_t * L_2 = ___theFunction1;
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_3, /*hidden argument*/NULL);
		RuntimeObject * L_5 = ___target0;
		Delegate_t1188392813 * L_6 = NetFxCoreExtensions_CreateDelegate_m751211712(NULL /*static, unused*/, (MethodInfo_t *)L_2, (Type_t *)L_4, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		__this->set_Delegate_0(((UnityAction_4_t682480391 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_4_Invoke_m3371718871_gshared (InvokableCall_4_t2756980746 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_4_Invoke_m3371718871_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ___args0;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) == ((int32_t)4)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentException_t132251570 * L_1 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_1, (String_t*)_stringLiteral1864861238, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, InvokableCall_4_Invoke_m3371718871_RuntimeMethod_var);
	}

IL_0015:
	{
		ObjectU5BU5D_t2843939325* L_2 = ___args0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		RuntimeObject * L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		ObjectU5BU5D_t2843939325* L_5 = ___args0;
		NullCheck(L_5);
		int32_t L_6 = 1;
		RuntimeObject * L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		ObjectU5BU5D_t2843939325* L_8 = ___args0;
		NullCheck(L_8);
		int32_t L_9 = 2;
		RuntimeObject * L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		ObjectU5BU5D_t2843939325* L_11 = ___args0;
		NullCheck(L_11);
		int32_t L_12 = 3;
		RuntimeObject * L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		UnityAction_4_t682480391 * L_14 = (UnityAction_4_t682480391 *)__this->get_Delegate_0();
		bool L_15 = BaseInvokableCall_AllowInvoke_m878393606(NULL /*static, unused*/, (Delegate_t1188392813 *)L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0070;
		}
	}
	{
		UnityAction_4_t682480391 * L_16 = (UnityAction_4_t682480391 *)__this->get_Delegate_0();
		ObjectU5BU5D_t2843939325* L_17 = ___args0;
		NullCheck(L_17);
		int32_t L_18 = 0;
		RuntimeObject * L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		ObjectU5BU5D_t2843939325* L_20 = ___args0;
		NullCheck(L_20);
		int32_t L_21 = 1;
		RuntimeObject * L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		ObjectU5BU5D_t2843939325* L_23 = ___args0;
		NullCheck(L_23);
		int32_t L_24 = 2;
		RuntimeObject * L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		ObjectU5BU5D_t2843939325* L_26 = ___args0;
		NullCheck(L_26);
		int32_t L_27 = 3;
		RuntimeObject * L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck((UnityAction_4_t682480391 *)L_16);
		((  void (*) (UnityAction_4_t682480391 *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((UnityAction_4_t682480391 *)L_16, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_19, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_22, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_25, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_28, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
	}

IL_0070:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR bool InvokableCall_4_Find_m2717860129_gshared (InvokableCall_4_t2756980746 * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_4_t682480391 * L_0 = (UnityAction_4_t682480391 *)__this->get_Delegate_0();
		NullCheck((Delegate_t1188392813 *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m2361978888((Delegate_t1188392813 *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___targetObj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_0025;
		}
	}
	{
		UnityAction_4_t682480391 * L_3 = (UnityAction_4_t682480391 *)__this->get_Delegate_0();
		MethodInfo_t * L_4 = NetFxCoreExtensions_GetMethodInfo_m444570327(NULL /*static, unused*/, (Delegate_t1188392813 *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method1;
		NullCheck((RuntimeObject *)L_4);
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = 0;
	}

IL_0026:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002c;
	}

IL_002c:
	{
		bool L_7 = V_0;
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
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m3007623985_gshared (UnityAction_1_t682124106 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m3535252839_gshared (UnityAction_1_t682124106 * __this, bool ___arg00, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		UnityAction_1_Invoke_m3535252839((UnityAction_1_t682124106 *)__this->get_prev_9(), ___arg00, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, targetMethod);
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
						GenericInterfaceActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Boolean>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m3721186338_gshared (UnityAction_1_t682124106 * __this, bool ___arg00, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_1_BeginInvoke_m3721186338_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m1872049713_gshared (UnityAction_1_t682124106 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m3081378164_gshared (UnityAction_1_t3535781894 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m3388120194_gshared (UnityAction_1_t3535781894 * __this, int32_t ___arg00, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		UnityAction_1_Invoke_m3388120194((UnityAction_1_t3535781894 *)__this->get_prev_9(), ___arg00, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, targetMethod);
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
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Int32>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m4018737650_gshared (UnityAction_1_t3535781894 * __this, int32_t ___arg00, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_1_BeginInvoke_m4018737650_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m290165017_gshared (UnityAction_1_t3535781894 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m2434317150_gshared (UnityAction_1_t3664942305 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m2929687399_gshared (UnityAction_1_t3664942305 * __this, RuntimeObject * ___arg00, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		UnityAction_1_Invoke_m2929687399((UnityAction_1_t3664942305 *)__this->get_prev_9(), ___arg00, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___arg00);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Object>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m992932529_gshared (UnityAction_1_t3664942305 * __this, RuntimeObject * ___arg00, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___arg00;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m4173210162_gshared (UnityAction_1_t3664942305 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m336053009_gshared (UnityAction_1_t1982102915 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m1035307306_gshared (UnityAction_1_t1982102915 * __this, float ___arg00, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		UnityAction_1_Invoke_m1035307306((UnityAction_1_t1982102915 *)__this->get_prev_9(), ___arg00, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, targetMethod);
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
						GenericInterfaceActionInvoker1< float >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< float >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Single>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m2530432941_gshared (UnityAction_1_t1982102915 * __this, float ___arg00, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_1_BeginInvoke_m2530432941_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Single_t1397266774_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m1615818599_gshared (UnityAction_1_t1982102915 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m2796929162_gshared (UnityAction_1_t3140522465 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m927447181_gshared (UnityAction_1_t3140522465 * __this, Color_t2555686324  ___arg00, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		UnityAction_1_Invoke_m927447181((UnityAction_1_t3140522465 *)__this->get_prev_9(), ___arg00, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, Color_t2555686324 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, Color_t2555686324 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, targetMethod);
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
						GenericInterfaceActionInvoker1< Color_t2555686324  >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< Color_t2555686324  >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Color_t2555686324  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< Color_t2555686324  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Color_t2555686324 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Color>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m1166386047_gshared (UnityAction_1_t3140522465 * __this, Color_t2555686324  ___arg00, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_1_BeginInvoke_m1166386047_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Color_t2555686324_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m1121812453_gshared (UnityAction_1_t3140522465 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m63817492_gshared (UnityAction_1_t2933211702 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m3649732398_gshared (UnityAction_1_t2933211702 * __this, Scene_t2348375561  ___arg00, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		UnityAction_1_Invoke_m3649732398((UnityAction_1_t2933211702 *)__this->get_prev_9(), ___arg00, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, Scene_t2348375561 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, Scene_t2348375561 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, targetMethod);
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
						GenericInterfaceActionInvoker1< Scene_t2348375561  >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< Scene_t2348375561  >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Scene_t2348375561  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< Scene_t2348375561  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Scene_t2348375561 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m677813163_gshared (UnityAction_1_t2933211702 * __this, Scene_t2348375561  ___arg00, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_1_BeginInvoke_m677813163_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Scene_t2348375561_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m367631613_gshared (UnityAction_1_t2933211702 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m1735647206_gshared (UnityAction_1_t2741065664 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m610765085_gshared (UnityAction_1_t2741065664 * __this, Vector2_t2156229523  ___arg00, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		UnityAction_1_Invoke_m610765085((UnityAction_1_t2741065664 *)__this->get_prev_9(), ___arg00, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, Vector2_t2156229523 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, Vector2_t2156229523 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, targetMethod);
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
						GenericInterfaceActionInvoker1< Vector2_t2156229523  >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< Vector2_t2156229523  >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Vector2_t2156229523  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< Vector2_t2156229523  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Vector2_t2156229523 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m2713840246_gshared (UnityAction_1_t2741065664 * __this, Vector2_t2156229523  ___arg00, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_1_BeginInvoke_m2713840246_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Vector2_t2156229523_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m542551745_gshared (UnityAction_1_t2741065664 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m4260941619_gshared (UnityAction_2_t3283971887 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::Invoke(T0,T1)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_m2304474703_gshared (UnityAction_2_t3283971887 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		UnityAction_2_Invoke_m2304474703((UnityAction_2_t3283971887 *)__this->get_prev_9(), ___arg00, ___arg11, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11);
					else
						VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`2<System.Object,System.Object>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_2_BeginInvoke_m1322091188_gshared (UnityAction_2_t3283971887 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___arg00;
	__d_args[1] = ___arg11;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2_EndInvoke_m1292612021_gshared (UnityAction_2_t3283971887 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m3108471759_gshared (UnityAction_2_t2165061829 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::Invoke(T0,T1)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_m1541286357_gshared (UnityAction_2_t2165061829 * __this, Scene_t2348375561  ___arg00, int32_t ___arg11, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		UnityAction_2_Invoke_m1541286357((UnityAction_2_t2165061829 *)__this->get_prev_9(), ___arg00, ___arg11, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, Scene_t2348375561 , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, Scene_t2348375561 , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, ___arg11, targetMethod);
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
						GenericInterfaceActionInvoker2< Scene_t2348375561 , int32_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< Scene_t2348375561 , int32_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< Scene_t2348375561 , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< Scene_t2348375561 , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Scene_t2348375561 , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_2_BeginInvoke_m1769266175_gshared (UnityAction_2_t2165061829 * __this, Scene_t2348375561  ___arg00, int32_t ___arg11, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_2_BeginInvoke_m1769266175_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Scene_t2348375561_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(LoadSceneMode_t3251202195_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2_EndInvoke_m2179051926_gshared (UnityAction_2_t2165061829 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m2941677221_gshared (UnityAction_2_t1262235195 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::Invoke(T0,T1)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_m944492567_gshared (UnityAction_2_t1262235195 * __this, Scene_t2348375561  ___arg00, Scene_t2348375561  ___arg11, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		UnityAction_2_Invoke_m944492567((UnityAction_2_t1262235195 *)__this->get_prev_9(), ___arg00, ___arg11, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, Scene_t2348375561 , Scene_t2348375561 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, Scene_t2348375561 , Scene_t2348375561 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, ___arg11, targetMethod);
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
						GenericInterfaceActionInvoker2< Scene_t2348375561 , Scene_t2348375561  >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< Scene_t2348375561 , Scene_t2348375561  >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< Scene_t2348375561 , Scene_t2348375561  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< Scene_t2348375561 , Scene_t2348375561  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Scene_t2348375561 , Scene_t2348375561 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_2_BeginInvoke_m1733258791_gshared (UnityAction_2_t1262235195 * __this, Scene_t2348375561  ___arg00, Scene_t2348375561  ___arg11, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_2_BeginInvoke_m1733258791_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Scene_t2348375561_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(Scene_t2348375561_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2_EndInvoke_m2385586247_gshared (UnityAction_2_t1262235195 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_3__ctor_m2228523061_gshared (UnityAction_3_t1557236713 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::Invoke(T0,T1,T2)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_3_Invoke_m1904347475_gshared (UnityAction_3_t1557236713 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		UnityAction_3_Invoke_m1904347475((UnityAction_3_t1557236713 *)__this->get_prev_9(), ___arg00, ___arg11, ___arg22, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, ___arg11, ___arg22, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, ___arg11, ___arg22, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22);
					else
						GenericVirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11, ___arg22);
					else
						VirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11, ___arg22);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22);
					else
						GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11, ___arg22);
					else
						VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11, ___arg22);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_3_BeginInvoke_m1515014307_gshared (UnityAction_3_t1557236713 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, AsyncCallback_t3962456242 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = ___arg00;
	__d_args[1] = ___arg11;
	__d_args[2] = ___arg22;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_3_EndInvoke_m1256921407_gshared (UnityAction_3_t1557236713 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_4__ctor_m4196105227_gshared (UnityAction_4_t682480391 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T0,T1,T2,T3)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_4_Invoke_m218720656_gshared (UnityAction_4_t682480391 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, RuntimeObject * ___arg33, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		UnityAction_4_Invoke_m218720656((UnityAction_4_t682480391 *)__this->get_prev_9(), ___arg00, ___arg11, ___arg22, ___arg33, method);
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
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 4)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
					else
						GenericVirtActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
					else
						VirtActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22, ___arg33);
					else
						GenericVirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22, ___arg33);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11, ___arg22, ___arg33);
					else
						VirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11, ___arg22, ___arg33);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,T3,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_4_BeginInvoke_m2207320832_gshared (UnityAction_4_t682480391 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, RuntimeObject * ___arg33, AsyncCallback_t3962456242 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	void *__d_args[5] = {0};
	__d_args[0] = ___arg00;
	__d_args[1] = ___arg11;
	__d_args[2] = ___arg22;
	__d_args[3] = ___arg33;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_4_EndInvoke_m1236619780_gshared (UnityAction_4_t682480391 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m3777630589_gshared (UnityEvent_1_t978947469 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t2843939325*)NULL);
		NullCheck((UnityEventBase_t3960448221 *)__this);
		UnityEventBase__ctor_m1851535676((UnityEventBase_t3960448221 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m2847988282_gshared (UnityEvent_1_t978947469 * __this, UnityAction_1_t682124106 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t682124106 * L_0 = ___call0;
		BaseInvokableCall_t2703961024 * L_1 = ((  BaseInvokableCall_t2703961024 * (*) (RuntimeObject * /* static, unused */, UnityAction_1_t682124106 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (UnityAction_1_t682124106 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_t3960448221 *)__this);
		UnityEventBase_AddCall_m3539965410((UnityEventBase_t3960448221 *)__this, (BaseInvokableCall_t2703961024 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m3490899137_gshared (UnityEvent_1_t978947469 * __this, UnityAction_1_t682124106 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t682124106 * L_0 = ___call0;
		NullCheck((Delegate_t1188392813 *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m2361978888((Delegate_t1188392813 *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t682124106 * L_2 = ___call0;
		MethodInfo_t * L_3 = NetFxCoreExtensions_GetMethodInfo_m444570327(NULL /*static, unused*/, (Delegate_t1188392813 *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_t3960448221 *)__this);
		UnityEventBase_RemoveListener_m3326364145((UnityEventBase_t3960448221 *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Boolean>::FindMethod_Impl(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_m2511430237_gshared (UnityEvent_1_t978947469 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_FindMethod_Impl_m2511430237_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t3940880105* L_2 = (TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t3940880105* L_3 = (TypeU5BU5D_t3940880105*)L_2;
		RuntimeTypeHandle_t3027515415  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6 = UnityEventBase_GetValidMethodInfo_m3989987635(NULL /*static, unused*/, (RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t3940880105*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_0021;
	}

IL_0021:
	{
		MethodInfo_t * L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR BaseInvokableCall_t2703961024 * UnityEvent_1_GetDelegate_m1518482089_gshared (UnityEvent_1_t978947469 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_t2703961024 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_t214452203 * L_2 = (InvokableCall_1_t214452203 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t214452203 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_t2703961024 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_t2703961024 * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" IL2CPP_METHOD_ATTR BaseInvokableCall_t2703961024 * UnityEvent_1_GetDelegate_m1212521776_gshared (RuntimeObject * __this /* static, unused */, UnityAction_1_t682124106 * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_t2703961024 * V_0 = NULL;
	{
		UnityAction_1_t682124106 * L_0 = ___action0;
		InvokableCall_1_t214452203 * L_1 = (InvokableCall_1_t214452203 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t214452203 *, UnityAction_1_t682124106 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_t682124106 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_t2703961024 *)L_1;
		goto IL_000d;
	}

IL_000d:
	{
		BaseInvokableCall_t2703961024 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m933614109_gshared (UnityEvent_1_t978947469 * __this, bool ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_Invoke_m933614109_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t4176035766 * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_t214452203 * V_2 = NULL;
	InvokableCall_t832123510 * V_3 = NULL;
	BaseInvokableCall_t2703961024 * V_4 = NULL;
	{
		NullCheck((UnityEventBase_t3960448221 *)__this);
		List_1_t4176035766 * L_0 = UnityEventBase_PrepareInvoke_m1785382128((UnityEventBase_t3960448221 *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_t4176035766 *)L_0;
		V_1 = (int32_t)0;
		goto IL_0091;
	}

IL_000f:
	{
		List_1_t4176035766 * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_t4176035766 *)L_1);
		BaseInvokableCall_t2703961024 * L_3 = List_1_get_Item_m4156046467((List_1_t4176035766 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m4156046467_RuntimeMethod_var);
		V_2 = (InvokableCall_1_t214452203 *)((InvokableCall_1_t214452203 *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_t214452203 * L_4 = V_2;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_t214452203 * L_5 = V_2;
		bool L_6 = ___arg00;
		NullCheck((InvokableCall_1_t214452203 *)L_5);
		VirtActionInvoker1< bool >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::Invoke(T1) */, (InvokableCall_1_t214452203 *)L_5, (bool)L_6);
		goto IL_008c;
	}

IL_002f:
	{
		List_1_t4176035766 * L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck((List_1_t4176035766 *)L_7);
		BaseInvokableCall_t2703961024 * L_9 = List_1_get_Item_m4156046467((List_1_t4176035766 *)L_7, (int32_t)L_8, /*hidden argument*/List_1_get_Item_m4156046467_RuntimeMethod_var);
		V_3 = (InvokableCall_t832123510 *)((InvokableCall_t832123510 *)IsInst((RuntimeObject*)L_9, InvokableCall_t832123510_il2cpp_TypeInfo_var));
		InvokableCall_t832123510 * L_10 = V_3;
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		InvokableCall_t832123510 * L_11 = V_3;
		NullCheck((InvokableCall_t832123510 *)L_11);
		InvokableCall_Invoke_m1437964737((InvokableCall_t832123510 *)L_11, /*hidden argument*/NULL);
		goto IL_008b;
	}

IL_004e:
	{
		List_1_t4176035766 * L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck((List_1_t4176035766 *)L_12);
		BaseInvokableCall_t2703961024 * L_14 = List_1_get_Item_m4156046467((List_1_t4176035766 *)L_12, (int32_t)L_13, /*hidden argument*/List_1_get_Item_m4156046467_RuntimeMethod_var);
		V_4 = (BaseInvokableCall_t2703961024 *)L_14;
		ObjectU5BU5D_t2843939325* L_15 = (ObjectU5BU5D_t2843939325*)__this->get_m_InvokeArray_4();
		if (L_15)
		{
			goto IL_006f;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_16 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_4(L_16);
	}

IL_006f:
	{
		ObjectU5BU5D_t2843939325* L_17 = (ObjectU5BU5D_t2843939325*)__this->get_m_InvokeArray_4();
		bool L_18 = ___arg00;
		bool L_19 = L_18;
		RuntimeObject * L_20 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_20);
		BaseInvokableCall_t2703961024 * L_21 = V_4;
		ObjectU5BU5D_t2843939325* L_22 = (ObjectU5BU5D_t2843939325*)__this->get_m_InvokeArray_4();
		NullCheck((BaseInvokableCall_t2703961024 *)L_21);
		VirtActionInvoker1< ObjectU5BU5D_t2843939325* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_t2703961024 *)L_21, (ObjectU5BU5D_t2843939325*)L_22);
	}

IL_008b:
	{
	}

IL_008c:
	{
		int32_t L_23 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0091:
	{
		int32_t L_24 = V_1;
		List_1_t4176035766 * L_25 = V_0;
		NullCheck((List_1_t4176035766 *)L_25);
		int32_t L_26 = List_1_get_Count_m1245201994((List_1_t4176035766 *)L_25, /*hidden argument*/List_1_get_Count_m1245201994_RuntimeMethod_var);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_000f;
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
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m3816765192_gshared (UnityEvent_1_t3832605257 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t2843939325*)NULL);
		NullCheck((UnityEventBase_t3960448221 *)__this);
		UnityEventBase__ctor_m1851535676((UnityEventBase_t3960448221 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m3158408092_gshared (UnityEvent_1_t3832605257 * __this, UnityAction_1_t3535781894 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t3535781894 * L_0 = ___call0;
		BaseInvokableCall_t2703961024 * L_1 = ((  BaseInvokableCall_t2703961024 * (*) (RuntimeObject * /* static, unused */, UnityAction_1_t3535781894 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (UnityAction_1_t3535781894 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_t3960448221 *)__this);
		UnityEventBase_AddCall_m3539965410((UnityEventBase_t3960448221 *)__this, (BaseInvokableCall_t2703961024 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m1953458448_gshared (UnityEvent_1_t3832605257 * __this, UnityAction_1_t3535781894 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t3535781894 * L_0 = ___call0;
		NullCheck((Delegate_t1188392813 *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m2361978888((Delegate_t1188392813 *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t3535781894 * L_2 = ___call0;
		MethodInfo_t * L_3 = NetFxCoreExtensions_GetMethodInfo_m444570327(NULL /*static, unused*/, (Delegate_t1188392813 *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_t3960448221 *)__this);
		UnityEventBase_RemoveListener_m3326364145((UnityEventBase_t3960448221 *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Int32>::FindMethod_Impl(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_m1397247356_gshared (UnityEvent_1_t3832605257 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_FindMethod_Impl_m1397247356_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t3940880105* L_2 = (TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t3940880105* L_3 = (TypeU5BU5D_t3940880105*)L_2;
		RuntimeTypeHandle_t3027515415  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6 = UnityEventBase_GetValidMethodInfo_m3989987635(NULL /*static, unused*/, (RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t3940880105*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_0021;
	}

IL_0021:
	{
		MethodInfo_t * L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR BaseInvokableCall_t2703961024 * UnityEvent_1_GetDelegate_m617150804_gshared (UnityEvent_1_t3832605257 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_t2703961024 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_t3068109991 * L_2 = (InvokableCall_1_t3068109991 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t3068109991 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_t2703961024 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_t2703961024 * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" IL2CPP_METHOD_ATTR BaseInvokableCall_t2703961024 * UnityEvent_1_GetDelegate_m2283422164_gshared (RuntimeObject * __this /* static, unused */, UnityAction_1_t3535781894 * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_t2703961024 * V_0 = NULL;
	{
		UnityAction_1_t3535781894 * L_0 = ___action0;
		InvokableCall_1_t3068109991 * L_1 = (InvokableCall_1_t3068109991 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t3068109991 *, UnityAction_1_t3535781894 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_t3535781894 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_t2703961024 *)L_1;
		goto IL_000d;
	}

IL_000d:
	{
		BaseInvokableCall_t2703961024 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m3604335408_gshared (UnityEvent_1_t3832605257 * __this, int32_t ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_Invoke_m3604335408_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t4176035766 * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_t3068109991 * V_2 = NULL;
	InvokableCall_t832123510 * V_3 = NULL;
	BaseInvokableCall_t2703961024 * V_4 = NULL;
	{
		NullCheck((UnityEventBase_t3960448221 *)__this);
		List_1_t4176035766 * L_0 = UnityEventBase_PrepareInvoke_m1785382128((UnityEventBase_t3960448221 *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_t4176035766 *)L_0;
		V_1 = (int32_t)0;
		goto IL_0091;
	}

IL_000f:
	{
		List_1_t4176035766 * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_t4176035766 *)L_1);
		BaseInvokableCall_t2703961024 * L_3 = List_1_get_Item_m4156046467((List_1_t4176035766 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m4156046467_RuntimeMethod_var);
		V_2 = (InvokableCall_1_t3068109991 *)((InvokableCall_1_t3068109991 *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_t3068109991 * L_4 = V_2;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_t3068109991 * L_5 = V_2;
		int32_t L_6 = ___arg00;
		NullCheck((InvokableCall_1_t3068109991 *)L_5);
		VirtActionInvoker1< int32_t >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(T1) */, (InvokableCall_1_t3068109991 *)L_5, (int32_t)L_6);
		goto IL_008c;
	}

IL_002f:
	{
		List_1_t4176035766 * L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck((List_1_t4176035766 *)L_7);
		BaseInvokableCall_t2703961024 * L_9 = List_1_get_Item_m4156046467((List_1_t4176035766 *)L_7, (int32_t)L_8, /*hidden argument*/List_1_get_Item_m4156046467_RuntimeMethod_var);
		V_3 = (InvokableCall_t832123510 *)((InvokableCall_t832123510 *)IsInst((RuntimeObject*)L_9, InvokableCall_t832123510_il2cpp_TypeInfo_var));
		InvokableCall_t832123510 * L_10 = V_3;
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		InvokableCall_t832123510 * L_11 = V_3;
		NullCheck((InvokableCall_t832123510 *)L_11);
		InvokableCall_Invoke_m1437964737((InvokableCall_t832123510 *)L_11, /*hidden argument*/NULL);
		goto IL_008b;
	}

IL_004e:
	{
		List_1_t4176035766 * L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck((List_1_t4176035766 *)L_12);
		BaseInvokableCall_t2703961024 * L_14 = List_1_get_Item_m4156046467((List_1_t4176035766 *)L_12, (int32_t)L_13, /*hidden argument*/List_1_get_Item_m4156046467_RuntimeMethod_var);
		V_4 = (BaseInvokableCall_t2703961024 *)L_14;
		ObjectU5BU5D_t2843939325* L_15 = (ObjectU5BU5D_t2843939325*)__this->get_m_InvokeArray_4();
		if (L_15)
		{
			goto IL_006f;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_16 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_4(L_16);
	}

IL_006f:
	{
		ObjectU5BU5D_t2843939325* L_17 = (ObjectU5BU5D_t2843939325*)__this->get_m_InvokeArray_4();
		int32_t L_18 = ___arg00;
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_20);
		BaseInvokableCall_t2703961024 * L_21 = V_4;
		ObjectU5BU5D_t2843939325* L_22 = (ObjectU5BU5D_t2843939325*)__this->get_m_InvokeArray_4();
		NullCheck((BaseInvokableCall_t2703961024 *)L_21);
		VirtActionInvoker1< ObjectU5BU5D_t2843939325* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_t2703961024 *)L_21, (ObjectU5BU5D_t2843939325*)L_22);
	}

IL_008b:
	{
	}

IL_008c:
	{
		int32_t L_23 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0091:
	{
		int32_t L_24 = V_1;
		List_1_t4176035766 * L_25 = V_0;
		NullCheck((List_1_t4176035766 *)L_25);
		int32_t L_26 = List_1_get_Count_m1245201994((List_1_t4176035766 *)L_25, /*hidden argument*/List_1_get_Count_m1245201994_RuntimeMethod_var);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_000f;
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
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m1789019280_gshared (UnityEvent_1_t3961765668 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t2843939325*)NULL);
		NullCheck((UnityEventBase_t3960448221 *)__this);
		UnityEventBase__ctor_m1851535676((UnityEventBase_t3960448221 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m3703050950_gshared (UnityEvent_1_t3961765668 * __this, UnityAction_1_t3664942305 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t3664942305 * L_0 = ___call0;
		BaseInvokableCall_t2703961024 * L_1 = ((  BaseInvokableCall_t2703961024 * (*) (RuntimeObject * /* static, unused */, UnityAction_1_t3664942305 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (UnityAction_1_t3664942305 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_t3960448221 *)__this);
		UnityEventBase_AddCall_m3539965410((UnityEventBase_t3960448221 *)__this, (BaseInvokableCall_t2703961024 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m4140584754_gshared (UnityEvent_1_t3961765668 * __this, UnityAction_1_t3664942305 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t3664942305 * L_0 = ___call0;
		NullCheck((Delegate_t1188392813 *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m2361978888((Delegate_t1188392813 *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t3664942305 * L_2 = ___call0;
		MethodInfo_t * L_3 = NetFxCoreExtensions_GetMethodInfo_m444570327(NULL /*static, unused*/, (Delegate_t1188392813 *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_t3960448221 *)__this);
		UnityEventBase_RemoveListener_m3326364145((UnityEventBase_t3960448221 *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_m322741469_gshared (UnityEvent_1_t3961765668 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_FindMethod_Impl_m322741469_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t3940880105* L_2 = (TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t3940880105* L_3 = (TypeU5BU5D_t3940880105*)L_2;
		RuntimeTypeHandle_t3027515415  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6 = UnityEventBase_GetValidMethodInfo_m3989987635(NULL /*static, unused*/, (RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t3940880105*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_0021;
	}

IL_0021:
	{
		MethodInfo_t * L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR BaseInvokableCall_t2703961024 * UnityEvent_1_GetDelegate_m1223269239_gshared (UnityEvent_1_t3961765668 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_t2703961024 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_t3197270402 * L_2 = (InvokableCall_1_t3197270402 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t3197270402 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_t2703961024 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_t2703961024 * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" IL2CPP_METHOD_ATTR BaseInvokableCall_t2703961024 * UnityEvent_1_GetDelegate_m1604725783_gshared (RuntimeObject * __this /* static, unused */, UnityAction_1_t3664942305 * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_t2703961024 * V_0 = NULL;
	{
		UnityAction_1_t3664942305 * L_0 = ___action0;
		InvokableCall_1_t3197270402 * L_1 = (InvokableCall_1_t3197270402 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t3197270402 *, UnityAction_1_t3664942305 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_t3664942305 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_t2703961024 *)L_1;
		goto IL_000d;
	}

IL_000d:
	{
		BaseInvokableCall_t2703961024 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m2734859485_gshared (UnityEvent_1_t3961765668 * __this, RuntimeObject * ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_Invoke_m2734859485_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t4176035766 * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_t3197270402 * V_2 = NULL;
	InvokableCall_t832123510 * V_3 = NULL;
	BaseInvokableCall_t2703961024 * V_4 = NULL;
	{
		NullCheck((UnityEventBase_t3960448221 *)__this);
		List_1_t4176035766 * L_0 = UnityEventBase_PrepareInvoke_m1785382128((UnityEventBase_t3960448221 *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_t4176035766 *)L_0;
		V_1 = (int32_t)0;
		goto IL_0091;
	}

IL_000f:
	{
		List_1_t4176035766 * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_t4176035766 *)L_1);
		BaseInvokableCall_t2703961024 * L_3 = List_1_get_Item_m4156046467((List_1_t4176035766 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m4156046467_RuntimeMethod_var);
		V_2 = (InvokableCall_1_t3197270402 *)((InvokableCall_1_t3197270402 *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_t3197270402 * L_4 = V_2;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_t3197270402 * L_5 = V_2;
		RuntimeObject * L_6 = ___arg00;
		NullCheck((InvokableCall_1_t3197270402 *)L_5);
		VirtActionInvoker1< RuntimeObject * >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(T1) */, (InvokableCall_1_t3197270402 *)L_5, (RuntimeObject *)L_6);
		goto IL_008c;
	}

IL_002f:
	{
		List_1_t4176035766 * L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck((List_1_t4176035766 *)L_7);
		BaseInvokableCall_t2703961024 * L_9 = List_1_get_Item_m4156046467((List_1_t4176035766 *)L_7, (int32_t)L_8, /*hidden argument*/List_1_get_Item_m4156046467_RuntimeMethod_var);
		V_3 = (InvokableCall_t832123510 *)((InvokableCall_t832123510 *)IsInst((RuntimeObject*)L_9, InvokableCall_t832123510_il2cpp_TypeInfo_var));
		InvokableCall_t832123510 * L_10 = V_3;
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		InvokableCall_t832123510 * L_11 = V_3;
		NullCheck((InvokableCall_t832123510 *)L_11);
		InvokableCall_Invoke_m1437964737((InvokableCall_t832123510 *)L_11, /*hidden argument*/NULL);
		goto IL_008b;
	}

IL_004e:
	{
		List_1_t4176035766 * L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck((List_1_t4176035766 *)L_12);
		BaseInvokableCall_t2703961024 * L_14 = List_1_get_Item_m4156046467((List_1_t4176035766 *)L_12, (int32_t)L_13, /*hidden argument*/List_1_get_Item_m4156046467_RuntimeMethod_var);
		V_4 = (BaseInvokableCall_t2703961024 *)L_14;
		ObjectU5BU5D_t2843939325* L_15 = (ObjectU5BU5D_t2843939325*)__this->get_m_InvokeArray_4();
		if (L_15)
		{
			goto IL_006f;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_16 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_4(L_16);
	}

IL_006f:
	{
		ObjectU5BU5D_t2843939325* L_17 = (ObjectU5BU5D_t2843939325*)__this->get_m_InvokeArray_4();
		RuntimeObject * L_18 = ___arg00;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_18);
		BaseInvokableCall_t2703961024 * L_19 = V_4;
		ObjectU5BU5D_t2843939325* L_20 = (ObjectU5BU5D_t2843939325*)__this->get_m_InvokeArray_4();
		NullCheck((BaseInvokableCall_t2703961024 *)L_19);
		VirtActionInvoker1< ObjectU5BU5D_t2843939325* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_t2703961024 *)L_19, (ObjectU5BU5D_t2843939325*)L_20);
	}

IL_008b:
	{
	}

IL_008c:
	{
		int32_t L_21 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0091:
	{
		int32_t L_22 = V_1;
		List_1_t4176035766 * L_23 = V_0;
		NullCheck((List_1_t4176035766 *)L_23);
		int32_t L_24 = List_1_get_Count_m1245201994((List_1_t4176035766 *)L_23, /*hidden argument*/List_1_get_Count_m1245201994_RuntimeMethod_var);
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_000f;
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
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m2218582587_gshared (UnityEvent_1_t2278926278 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t2843939325*)NULL);
		NullCheck((UnityEventBase_t3960448221 *)__this);
		UnityEventBase__ctor_m1851535676((UnityEventBase_t3960448221 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m3008008915_gshared (UnityEvent_1_t2278926278 * __this, UnityAction_1_t1982102915 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t1982102915 * L_0 = ___call0;
		BaseInvokableCall_t2703961024 * L_1 = ((  BaseInvokableCall_t2703961024 * (*) (RuntimeObject * /* static, unused */, UnityAction_1_t1982102915 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (UnityAction_1_t1982102915 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_t3960448221 *)__this);
		UnityEventBase_AddCall_m3539965410((UnityEventBase_t3960448221 *)__this, (BaseInvokableCall_t2703961024 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m4190968495_gshared (UnityEvent_1_t2278926278 * __this, UnityAction_1_t1982102915 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t1982102915 * L_0 = ___call0;
		NullCheck((Delegate_t1188392813 *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m2361978888((Delegate_t1188392813 *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t1982102915 * L_2 = ___call0;
		MethodInfo_t * L_3 = NetFxCoreExtensions_GetMethodInfo_m444570327(NULL /*static, unused*/, (Delegate_t1188392813 *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_t3960448221 *)__this);
		UnityEventBase_RemoveListener_m3326364145((UnityEventBase_t3960448221 *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Single>::FindMethod_Impl(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_m555893253_gshared (UnityEvent_1_t2278926278 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_FindMethod_Impl_m555893253_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t3940880105* L_2 = (TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t3940880105* L_3 = (TypeU5BU5D_t3940880105*)L_2;
		RuntimeTypeHandle_t3027515415  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6 = UnityEventBase_GetValidMethodInfo_m3989987635(NULL /*static, unused*/, (RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t3940880105*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_0021;
	}

IL_0021:
	{
		MethodInfo_t * L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR BaseInvokableCall_t2703961024 * UnityEvent_1_GetDelegate_m1597732310_gshared (UnityEvent_1_t2278926278 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_t2703961024 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_t1514431012 * L_2 = (InvokableCall_1_t1514431012 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t1514431012 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_t2703961024 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_t2703961024 * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" IL2CPP_METHOD_ATTR BaseInvokableCall_t2703961024 * UnityEvent_1_GetDelegate_m25714567_gshared (RuntimeObject * __this /* static, unused */, UnityAction_1_t1982102915 * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_t2703961024 * V_0 = NULL;
	{
		UnityAction_1_t1982102915 * L_0 = ___action0;
		InvokableCall_1_t1514431012 * L_1 = (InvokableCall_1_t1514431012 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t1514431012 *, UnityAction_1_t1982102915 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_t1982102915 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_t2703961024 *)L_1;
		goto IL_000d;
	}

IL_000d:
	{
		BaseInvokableCall_t2703961024 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m3400677460_gshared (UnityEvent_1_t2278926278 * __this, float ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_Invoke_m3400677460_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t4176035766 * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_t1514431012 * V_2 = NULL;
	InvokableCall_t832123510 * V_3 = NULL;
	BaseInvokableCall_t2703961024 * V_4 = NULL;
	{
		NullCheck((UnityEventBase_t3960448221 *)__this);
		List_1_t4176035766 * L_0 = UnityEventBase_PrepareInvoke_m1785382128((UnityEventBase_t3960448221 *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_t4176035766 *)L_0;
		V_1 = (int32_t)0;
		goto IL_0091;
	}

IL_000f:
	{
		List_1_t4176035766 * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_t4176035766 *)L_1);
		BaseInvokableCall_t2703961024 * L_3 = List_1_get_Item_m4156046467((List_1_t4176035766 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m4156046467_RuntimeMethod_var);
		V_2 = (InvokableCall_1_t1514431012 *)((InvokableCall_1_t1514431012 *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_t1514431012 * L_4 = V_2;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_t1514431012 * L_5 = V_2;
		float L_6 = ___arg00;
		NullCheck((InvokableCall_1_t1514431012 *)L_5);
		VirtActionInvoker1< float >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<System.Single>::Invoke(T1) */, (InvokableCall_1_t1514431012 *)L_5, (float)L_6);
		goto IL_008c;
	}

IL_002f:
	{
		List_1_t4176035766 * L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck((List_1_t4176035766 *)L_7);
		BaseInvokableCall_t2703961024 * L_9 = List_1_get_Item_m4156046467((List_1_t4176035766 *)L_7, (int32_t)L_8, /*hidden argument*/List_1_get_Item_m4156046467_RuntimeMethod_var);
		V_3 = (InvokableCall_t832123510 *)((InvokableCall_t832123510 *)IsInst((RuntimeObject*)L_9, InvokableCall_t832123510_il2cpp_TypeInfo_var));
		InvokableCall_t832123510 * L_10 = V_3;
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		InvokableCall_t832123510 * L_11 = V_3;
		NullCheck((InvokableCall_t832123510 *)L_11);
		InvokableCall_Invoke_m1437964737((InvokableCall_t832123510 *)L_11, /*hidden argument*/NULL);
		goto IL_008b;
	}

IL_004e:
	{
		List_1_t4176035766 * L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck((List_1_t4176035766 *)L_12);
		BaseInvokableCall_t2703961024 * L_14 = List_1_get_Item_m4156046467((List_1_t4176035766 *)L_12, (int32_t)L_13, /*hidden argument*/List_1_get_Item_m4156046467_RuntimeMethod_var);
		V_4 = (BaseInvokableCall_t2703961024 *)L_14;
		ObjectU5BU5D_t2843939325* L_15 = (ObjectU5BU5D_t2843939325*)__this->get_m_InvokeArray_4();
		if (L_15)
		{
			goto IL_006f;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_16 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_4(L_16);
	}

IL_006f:
	{
		ObjectU5BU5D_t2843939325* L_17 = (ObjectU5BU5D_t2843939325*)__this->get_m_InvokeArray_4();
		float L_18 = ___arg00;
		float L_19 = L_18;
		RuntimeObject * L_20 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_20);
		BaseInvokableCall_t2703961024 * L_21 = V_4;
		ObjectU5BU5D_t2843939325* L_22 = (ObjectU5BU5D_t2843939325*)__this->get_m_InvokeArray_4();
		NullCheck((BaseInvokableCall_t2703961024 *)L_21);
		VirtActionInvoker1< ObjectU5BU5D_t2843939325* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_t2703961024 *)L_21, (ObjectU5BU5D_t2843939325*)L_22);
	}

IL_008b:
	{
	}

IL_008c:
	{
		int32_t L_23 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0091:
	{
		int32_t L_24 = V_1;
		List_1_t4176035766 * L_25 = V_0;
		NullCheck((List_1_t4176035766 *)L_25);
		int32_t L_26 = List_1_get_Count_m1245201994((List_1_t4176035766 *)L_25, /*hidden argument*/List_1_get_Count_m1245201994_RuntimeMethod_var);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_000f;
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
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m1293792034_gshared (UnityEvent_1_t3437345828 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t2843939325*)NULL);
		NullCheck((UnityEventBase_t3960448221 *)__this);
		UnityEventBase__ctor_m1851535676((UnityEventBase_t3960448221 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m1590149461_gshared (UnityEvent_1_t3437345828 * __this, UnityAction_1_t3140522465 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t3140522465 * L_0 = ___call0;
		BaseInvokableCall_t2703961024 * L_1 = ((  BaseInvokableCall_t2703961024 * (*) (RuntimeObject * /* static, unused */, UnityAction_1_t3140522465 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (UnityAction_1_t3140522465 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_t3960448221 *)__this);
		UnityEventBase_AddCall_m3539965410((UnityEventBase_t3960448221 *)__this, (BaseInvokableCall_t2703961024 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m2625750952_gshared (UnityEvent_1_t3437345828 * __this, UnityAction_1_t3140522465 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t3140522465 * L_0 = ___call0;
		NullCheck((Delegate_t1188392813 *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m2361978888((Delegate_t1188392813 *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t3140522465 * L_2 = ___call0;
		MethodInfo_t * L_3 = NetFxCoreExtensions_GetMethodInfo_m444570327(NULL /*static, unused*/, (Delegate_t1188392813 *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_t3960448221 *)__this);
		UnityEventBase_RemoveListener_m3326364145((UnityEventBase_t3960448221 *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::FindMethod_Impl(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_m1420160216_gshared (UnityEvent_1_t3437345828 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_FindMethod_Impl_m1420160216_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t3940880105* L_2 = (TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t3940880105* L_3 = (TypeU5BU5D_t3940880105*)L_2;
		RuntimeTypeHandle_t3027515415  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6 = UnityEventBase_GetValidMethodInfo_m3989987635(NULL /*static, unused*/, (RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t3940880105*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_0021;
	}

IL_0021:
	{
		MethodInfo_t * L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR BaseInvokableCall_t2703961024 * UnityEvent_1_GetDelegate_m1771043166_gshared (UnityEvent_1_t3437345828 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_t2703961024 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_t2672850562 * L_2 = (InvokableCall_1_t2672850562 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t2672850562 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_t2703961024 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_t2703961024 * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" IL2CPP_METHOD_ATTR BaseInvokableCall_t2703961024 * UnityEvent_1_GetDelegate_m274387680_gshared (RuntimeObject * __this /* static, unused */, UnityAction_1_t3140522465 * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_t2703961024 * V_0 = NULL;
	{
		UnityAction_1_t3140522465 * L_0 = ___action0;
		InvokableCall_1_t2672850562 * L_1 = (InvokableCall_1_t2672850562 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t2672850562 *, UnityAction_1_t3140522465 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_t3140522465 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_t2703961024 *)L_1;
		goto IL_000d;
	}

IL_000d:
	{
		BaseInvokableCall_t2703961024 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m3884411426_gshared (UnityEvent_1_t3437345828 * __this, Color_t2555686324  ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_Invoke_m3884411426_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t4176035766 * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_t2672850562 * V_2 = NULL;
	InvokableCall_t832123510 * V_3 = NULL;
	BaseInvokableCall_t2703961024 * V_4 = NULL;
	{
		NullCheck((UnityEventBase_t3960448221 *)__this);
		List_1_t4176035766 * L_0 = UnityEventBase_PrepareInvoke_m1785382128((UnityEventBase_t3960448221 *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_t4176035766 *)L_0;
		V_1 = (int32_t)0;
		goto IL_0091;
	}

IL_000f:
	{
		List_1_t4176035766 * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_t4176035766 *)L_1);
		BaseInvokableCall_t2703961024 * L_3 = List_1_get_Item_m4156046467((List_1_t4176035766 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m4156046467_RuntimeMethod_var);
		V_2 = (InvokableCall_1_t2672850562 *)((InvokableCall_1_t2672850562 *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_t2672850562 * L_4 = V_2;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_t2672850562 * L_5 = V_2;
		Color_t2555686324  L_6 = ___arg00;
		NullCheck((InvokableCall_1_t2672850562 *)L_5);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Invoke(T1) */, (InvokableCall_1_t2672850562 *)L_5, (Color_t2555686324 )L_6);
		goto IL_008c;
	}

IL_002f:
	{
		List_1_t4176035766 * L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck((List_1_t4176035766 *)L_7);
		BaseInvokableCall_t2703961024 * L_9 = List_1_get_Item_m4156046467((List_1_t4176035766 *)L_7, (int32_t)L_8, /*hidden argument*/List_1_get_Item_m4156046467_RuntimeMethod_var);
		V_3 = (InvokableCall_t832123510 *)((InvokableCall_t832123510 *)IsInst((RuntimeObject*)L_9, InvokableCall_t832123510_il2cpp_TypeInfo_var));
		InvokableCall_t832123510 * L_10 = V_3;
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		InvokableCall_t832123510 * L_11 = V_3;
		NullCheck((InvokableCall_t832123510 *)L_11);
		InvokableCall_Invoke_m1437964737((InvokableCall_t832123510 *)L_11, /*hidden argument*/NULL);
		goto IL_008b;
	}

IL_004e:
	{
		List_1_t4176035766 * L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck((List_1_t4176035766 *)L_12);
		BaseInvokableCall_t2703961024 * L_14 = List_1_get_Item_m4156046467((List_1_t4176035766 *)L_12, (int32_t)L_13, /*hidden argument*/List_1_get_Item_m4156046467_RuntimeMethod_var);
		V_4 = (BaseInvokableCall_t2703961024 *)L_14;
		ObjectU5BU5D_t2843939325* L_15 = (ObjectU5BU5D_t2843939325*)__this->get_m_InvokeArray_4();
		if (L_15)
		{
			goto IL_006f;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_16 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_4(L_16);
	}

IL_006f:
	{
		ObjectU5BU5D_t2843939325* L_17 = (ObjectU5BU5D_t2843939325*)__this->get_m_InvokeArray_4();
		Color_t2555686324  L_18 = ___arg00;
		Color_t2555686324  L_19 = L_18;
		RuntimeObject * L_20 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_20);
		BaseInvokableCall_t2703961024 * L_21 = V_4;
		ObjectU5BU5D_t2843939325* L_22 = (ObjectU5BU5D_t2843939325*)__this->get_m_InvokeArray_4();
		NullCheck((BaseInvokableCall_t2703961024 *)L_21);
		VirtActionInvoker1< ObjectU5BU5D_t2843939325* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_t2703961024 *)L_21, (ObjectU5BU5D_t2843939325*)L_22);
	}

IL_008b:
	{
	}

IL_008c:
	{
		int32_t L_23 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0091:
	{
		int32_t L_24 = V_1;
		List_1_t4176035766 * L_25 = V_0;
		NullCheck((List_1_t4176035766 *)L_25);
		int32_t L_26 = List_1_get_Count_m1245201994((List_1_t4176035766 *)L_25, /*hidden argument*/List_1_get_Count_m1245201994_RuntimeMethod_var);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_000f;
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
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m3675246889_gshared (UnityEvent_1_t3037889027 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t2843939325*)NULL);
		NullCheck((UnityEventBase_t3960448221 *)__this);
		UnityEventBase__ctor_m1851535676((UnityEventBase_t3960448221 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m213733913_gshared (UnityEvent_1_t3037889027 * __this, UnityAction_1_t2741065664 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t2741065664 * L_0 = ___call0;
		BaseInvokableCall_t2703961024 * L_1 = ((  BaseInvokableCall_t2703961024 * (*) (RuntimeObject * /* static, unused */, UnityAction_1_t2741065664 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (UnityAction_1_t2741065664 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_t3960448221 *)__this);
		UnityEventBase_AddCall_m3539965410((UnityEventBase_t3960448221 *)__this, (BaseInvokableCall_t2703961024 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m3496608666_gshared (UnityEvent_1_t3037889027 * __this, UnityAction_1_t2741065664 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t2741065664 * L_0 = ___call0;
		NullCheck((Delegate_t1188392813 *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m2361978888((Delegate_t1188392813 *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t2741065664 * L_2 = ___call0;
		MethodInfo_t * L_3 = NetFxCoreExtensions_GetMethodInfo_m444570327(NULL /*static, unused*/, (Delegate_t1188392813 *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_t3960448221 *)__this);
		UnityEventBase_RemoveListener_m3326364145((UnityEventBase_t3960448221 *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::FindMethod_Impl(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_m2325208510_gshared (UnityEvent_1_t3037889027 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_FindMethod_Impl_m2325208510_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t3940880105* L_2 = (TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t3940880105* L_3 = (TypeU5BU5D_t3940880105*)L_2;
		RuntimeTypeHandle_t3027515415  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6 = UnityEventBase_GetValidMethodInfo_m3989987635(NULL /*static, unused*/, (RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t3940880105*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_0021;
	}

IL_0021:
	{
		MethodInfo_t * L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR BaseInvokableCall_t2703961024 * UnityEvent_1_GetDelegate_m2226801754_gshared (UnityEvent_1_t3037889027 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_t2703961024 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_t2273393761 * L_2 = (InvokableCall_1_t2273393761 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t2273393761 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_t2703961024 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_t2703961024 * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" IL2CPP_METHOD_ATTR BaseInvokableCall_t2703961024 * UnityEvent_1_GetDelegate_m2265966113_gshared (RuntimeObject * __this /* static, unused */, UnityAction_1_t2741065664 * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_t2703961024 * V_0 = NULL;
	{
		UnityAction_1_t2741065664 * L_0 = ___action0;
		InvokableCall_1_t2273393761 * L_1 = (InvokableCall_1_t2273393761 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t2273393761 *, UnityAction_1_t2741065664 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_t2741065664 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_t2703961024 *)L_1;
		goto IL_000d;
	}

IL_000d:
	{
		BaseInvokableCall_t2703961024 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m3432495026_gshared (UnityEvent_1_t3037889027 * __this, Vector2_t2156229523  ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_Invoke_m3432495026_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t4176035766 * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_t2273393761 * V_2 = NULL;
	InvokableCall_t832123510 * V_3 = NULL;
	BaseInvokableCall_t2703961024 * V_4 = NULL;
	{
		NullCheck((UnityEventBase_t3960448221 *)__this);
		List_1_t4176035766 * L_0 = UnityEventBase_PrepareInvoke_m1785382128((UnityEventBase_t3960448221 *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_t4176035766 *)L_0;
		V_1 = (int32_t)0;
		goto IL_0091;
	}

IL_000f:
	{
		List_1_t4176035766 * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_t4176035766 *)L_1);
		BaseInvokableCall_t2703961024 * L_3 = List_1_get_Item_m4156046467((List_1_t4176035766 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m4156046467_RuntimeMethod_var);
		V_2 = (InvokableCall_1_t2273393761 *)((InvokableCall_1_t2273393761 *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_t2273393761 * L_4 = V_2;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_t2273393761 * L_5 = V_2;
		Vector2_t2156229523  L_6 = ___arg00;
		NullCheck((InvokableCall_1_t2273393761 *)L_5);
		VirtActionInvoker1< Vector2_t2156229523  >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::Invoke(T1) */, (InvokableCall_1_t2273393761 *)L_5, (Vector2_t2156229523 )L_6);
		goto IL_008c;
	}

IL_002f:
	{
		List_1_t4176035766 * L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck((List_1_t4176035766 *)L_7);
		BaseInvokableCall_t2703961024 * L_9 = List_1_get_Item_m4156046467((List_1_t4176035766 *)L_7, (int32_t)L_8, /*hidden argument*/List_1_get_Item_m4156046467_RuntimeMethod_var);
		V_3 = (InvokableCall_t832123510 *)((InvokableCall_t832123510 *)IsInst((RuntimeObject*)L_9, InvokableCall_t832123510_il2cpp_TypeInfo_var));
		InvokableCall_t832123510 * L_10 = V_3;
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		InvokableCall_t832123510 * L_11 = V_3;
		NullCheck((InvokableCall_t832123510 *)L_11);
		InvokableCall_Invoke_m1437964737((InvokableCall_t832123510 *)L_11, /*hidden argument*/NULL);
		goto IL_008b;
	}

IL_004e:
	{
		List_1_t4176035766 * L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck((List_1_t4176035766 *)L_12);
		BaseInvokableCall_t2703961024 * L_14 = List_1_get_Item_m4156046467((List_1_t4176035766 *)L_12, (int32_t)L_13, /*hidden argument*/List_1_get_Item_m4156046467_RuntimeMethod_var);
		V_4 = (BaseInvokableCall_t2703961024 *)L_14;
		ObjectU5BU5D_t2843939325* L_15 = (ObjectU5BU5D_t2843939325*)__this->get_m_InvokeArray_4();
		if (L_15)
		{
			goto IL_006f;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_16 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_4(L_16);
	}

IL_006f:
	{
		ObjectU5BU5D_t2843939325* L_17 = (ObjectU5BU5D_t2843939325*)__this->get_m_InvokeArray_4();
		Vector2_t2156229523  L_18 = ___arg00;
		Vector2_t2156229523  L_19 = L_18;
		RuntimeObject * L_20 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_20);
		BaseInvokableCall_t2703961024 * L_21 = V_4;
		ObjectU5BU5D_t2843939325* L_22 = (ObjectU5BU5D_t2843939325*)__this->get_m_InvokeArray_4();
		NullCheck((BaseInvokableCall_t2703961024 *)L_21);
		VirtActionInvoker1< ObjectU5BU5D_t2843939325* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_t2703961024 *)L_21, (ObjectU5BU5D_t2843939325*)L_22);
	}

IL_008b:
	{
	}

IL_008c:
	{
		int32_t L_23 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0091:
	{
		int32_t L_24 = V_1;
		List_1_t4176035766 * L_25 = V_0;
		NullCheck((List_1_t4176035766 *)L_25);
		int32_t L_26 = List_1_get_Count_m1245201994((List_1_t4176035766 *)L_25, /*hidden argument*/List_1_get_Count_m1245201994_RuntimeMethod_var);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_000f;
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
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_m155249342_gshared (UnityEvent_2_t614268397 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t2843939325*)NULL);
		NullCheck((UnityEventBase_t3960448221 *)__this);
		UnityEventBase__ctor_m1851535676((UnityEventBase_t3960448221 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_2_FindMethod_Impl_m2569180594_gshared (UnityEvent_2_t614268397 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_2_FindMethod_Impl_m2569180594_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t3940880105* L_2 = (TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t3940880105* L_3 = (TypeU5BU5D_t3940880105*)L_2;
		RuntimeTypeHandle_t3027515415  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t3940880105* L_6 = (TypeU5BU5D_t3940880105*)L_3;
		RuntimeTypeHandle_t3027515415  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		Type_t * L_8 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		MethodInfo_t * L_9 = UnityEventBase_GetValidMethodInfo_m3989987635(NULL /*static, unused*/, (RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t3940880105*)L_6, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_9;
		goto IL_002e;
	}

IL_002e:
	{
		MethodInfo_t * L_10 = V_0;
		return L_10;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR BaseInvokableCall_t2703961024 * UnityEvent_2_GetDelegate_m3909669659_gshared (UnityEvent_2_t614268397 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_t2703961024 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_2_t362407658 * L_2 = (InvokableCall_2_t362407658 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (InvokableCall_2_t362407658 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		V_0 = (BaseInvokableCall_t2703961024 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_t2703961024 * L_3 = V_0;
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
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_3__ctor_m3891569313_gshared (UnityEvent_3_t2404744798 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t2843939325*)NULL);
		NullCheck((UnityEventBase_t3960448221 *)__this);
		UnityEventBase__ctor_m1851535676((UnityEventBase_t3960448221 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_3_FindMethod_Impl_m1640458315_gshared (UnityEvent_3_t2404744798 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_3_FindMethod_Impl_m1640458315_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t3940880105* L_2 = (TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)3);
		TypeU5BU5D_t3940880105* L_3 = (TypeU5BU5D_t3940880105*)L_2;
		RuntimeTypeHandle_t3027515415  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t3940880105* L_6 = (TypeU5BU5D_t3940880105*)L_3;
		RuntimeTypeHandle_t3027515415  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		Type_t * L_8 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		TypeU5BU5D_t3940880105* L_9 = (TypeU5BU5D_t3940880105*)L_6;
		RuntimeTypeHandle_t3027515415  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		Type_t * L_11 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (Type_t *)L_11);
		MethodInfo_t * L_12 = UnityEventBase_GetValidMethodInfo_m3989987635(NULL /*static, unused*/, (RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t3940880105*)L_9, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_12;
		goto IL_003b;
	}

IL_003b:
	{
		MethodInfo_t * L_13 = V_0;
		return L_13;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR BaseInvokableCall_t2703961024 * UnityEvent_3_GetDelegate_m1156357290_gshared (UnityEvent_3_t2404744798 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_t2703961024 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_3_t4059188962 * L_2 = (InvokableCall_3_t4059188962 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_3_t4059188962 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_t2703961024 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_t2703961024 * L_3 = V_0;
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
// System.Void UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_4__ctor_m831487108_gshared (UnityEvent_4_t4085588227 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t2843939325*)NULL);
		NullCheck((UnityEventBase_t3960448221 *)__this);
		UnityEventBase__ctor_m1851535676((UnityEventBase_t3960448221 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_4_FindMethod_Impl_m3410547086_gshared (UnityEvent_4_t4085588227 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_4_FindMethod_Impl_m3410547086_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t3940880105* L_2 = (TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)4);
		TypeU5BU5D_t3940880105* L_3 = (TypeU5BU5D_t3940880105*)L_2;
		RuntimeTypeHandle_t3027515415  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t3940880105* L_6 = (TypeU5BU5D_t3940880105*)L_3;
		RuntimeTypeHandle_t3027515415  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		Type_t * L_8 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		TypeU5BU5D_t3940880105* L_9 = (TypeU5BU5D_t3940880105*)L_6;
		RuntimeTypeHandle_t3027515415  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		Type_t * L_11 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (Type_t *)L_11);
		TypeU5BU5D_t3940880105* L_12 = (TypeU5BU5D_t3940880105*)L_9;
		RuntimeTypeHandle_t3027515415  L_13 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 3)) };
		Type_t * L_14 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (Type_t *)L_14);
		MethodInfo_t * L_15 = UnityEventBase_GetValidMethodInfo_m3989987635(NULL /*static, unused*/, (RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t3940880105*)L_12, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_15;
		goto IL_0048;
	}

IL_0048:
	{
		MethodInfo_t * L_16 = V_0;
		return L_16;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR BaseInvokableCall_t2703961024 * UnityEvent_4_GetDelegate_m3111342790_gshared (UnityEvent_4_t4085588227 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_t2703961024 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_4_t2756980746 * L_2 = (InvokableCall_4_t2756980746 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		((  void (*) (InvokableCall_4_t2756980746 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_0 = (BaseInvokableCall_t2703961024 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_t2703961024 * L_3 = V_0;
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
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void IndexedSet_1__ctor_m2250384602_gshared (IndexedSet_1_t234526808 * __this, const RuntimeMethod* method)
{
	{
		List_1_t257213610 * L_0 = (List_1_t257213610 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		((  void (*) (List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_m_List_0(L_0);
		Dictionary_2_t3384741 * L_1 = (Dictionary_2_t3384741 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (Dictionary_2_t3384741 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		__this->set_m_Dictionary_1(L_1);
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m297566312((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" IL2CPP_METHOD_ATTR void IndexedSet_1_Add_m459949375_gshared (IndexedSet_1_t234526808 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		List_1_t257213610 * L_0 = (List_1_t257213610 *)__this->get_m_List_0();
		RuntimeObject * L_1 = ___item0;
		NullCheck((List_1_t257213610 *)L_0);
		((  void (*) (List_1_t257213610 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t257213610 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		Dictionary_2_t3384741 * L_2 = (Dictionary_2_t3384741 *)__this->get_m_Dictionary_1();
		RuntimeObject * L_3 = ___item0;
		List_1_t257213610 * L_4 = (List_1_t257213610 *)__this->get_m_List_0();
		NullCheck((List_1_t257213610 *)L_4);
		int32_t L_5 = ((  int32_t (*) (List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t257213610 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		NullCheck((Dictionary_2_t3384741 *)L_2);
		((  void (*) (Dictionary_2_t3384741 *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Dictionary_2_t3384741 *)L_2, (RuntimeObject *)L_3, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		return;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::AddUnique(T)
extern "C" IL2CPP_METHOD_ATTR bool IndexedSet_1_AddUnique_m861843892_gshared (IndexedSet_1_t234526808 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Dictionary_2_t3384741 * L_0 = (Dictionary_2_t3384741 *)__this->get_m_Dictionary_1();
		RuntimeObject * L_1 = ___item0;
		NullCheck((Dictionary_2_t3384741 *)L_0);
		bool L_2 = ((  bool (*) (Dictionary_2_t3384741 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Dictionary_2_t3384741 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_0045;
	}

IL_0019:
	{
		List_1_t257213610 * L_3 = (List_1_t257213610 *)__this->get_m_List_0();
		RuntimeObject * L_4 = ___item0;
		NullCheck((List_1_t257213610 *)L_3);
		((  void (*) (List_1_t257213610 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t257213610 *)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		Dictionary_2_t3384741 * L_5 = (Dictionary_2_t3384741 *)__this->get_m_Dictionary_1();
		RuntimeObject * L_6 = ___item0;
		List_1_t257213610 * L_7 = (List_1_t257213610 *)__this->get_m_List_0();
		NullCheck((List_1_t257213610 *)L_7);
		int32_t L_8 = ((  int32_t (*) (List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t257213610 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		NullCheck((Dictionary_2_t3384741 *)L_5);
		((  void (*) (Dictionary_2_t3384741 *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Dictionary_2_t3384741 *)L_5, (RuntimeObject *)L_6, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		V_0 = (bool)1;
		goto IL_0045;
	}

IL_0045:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" IL2CPP_METHOD_ATTR bool IndexedSet_1_Remove_m4118314453_gshared (IndexedSet_1_t234526808 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		V_0 = (int32_t)(-1);
		Dictionary_2_t3384741 * L_0 = (Dictionary_2_t3384741 *)__this->get_m_Dictionary_1();
		RuntimeObject * L_1 = ___item0;
		NullCheck((Dictionary_2_t3384741 *)L_0);
		bool L_2 = ((  bool (*) (Dictionary_2_t3384741 *, RuntimeObject *, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Dictionary_2_t3384741 *)L_0, (RuntimeObject *)L_1, (int32_t*)(int32_t*)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_002b;
	}

IL_001d:
	{
		int32_t L_3 = V_0;
		NullCheck((IndexedSet_1_t234526808 *)__this);
		((  void (*) (IndexedSet_1_t234526808 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((IndexedSet_1_t234526808 *)__this, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		V_1 = (bool)1;
		goto IL_002b;
	}

IL_002b:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IndexedSet_1_GetEnumerator_m3750514392_gshared (IndexedSet_1_t234526808 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IndexedSet_1_GetEnumerator_m3750514392_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t3489357830 * L_0 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3058704252(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, IndexedSet_1_GetEnumerator_m3750514392_RuntimeMethod_var);
	}
}
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m190983904_gshared (IndexedSet_1_t234526808 * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		NullCheck((IndexedSet_1_t234526808 *)__this);
		RuntimeObject* L_0 = ((  RuntimeObject* (*) (IndexedSet_1_t234526808 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((IndexedSet_1_t234526808 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		V_0 = (RuntimeObject*)L_0;
		goto IL_000d;
	}

IL_000d:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" IL2CPP_METHOD_ATTR void IndexedSet_1_Clear_m4036265083_gshared (IndexedSet_1_t234526808 * __this, const RuntimeMethod* method)
{
	{
		List_1_t257213610 * L_0 = (List_1_t257213610 *)__this->get_m_List_0();
		NullCheck((List_1_t257213610 *)L_0);
		((  void (*) (List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((List_1_t257213610 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		Dictionary_2_t3384741 * L_1 = (Dictionary_2_t3384741 *)__this->get_m_Dictionary_1();
		NullCheck((Dictionary_2_t3384741 *)L_1);
		((  void (*) (Dictionary_2_t3384741 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((Dictionary_2_t3384741 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
		return;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" IL2CPP_METHOD_ATTR bool IndexedSet_1_Contains_m1525966688_gshared (IndexedSet_1_t234526808 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Dictionary_2_t3384741 * L_0 = (Dictionary_2_t3384741 *)__this->get_m_Dictionary_1();
		RuntimeObject * L_1 = ___item0;
		NullCheck((Dictionary_2_t3384741 *)L_0);
		bool L_2 = ((  bool (*) (Dictionary_2_t3384741 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Dictionary_2_t3384741 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		V_0 = (bool)L_2;
		goto IL_0013;
	}

IL_0013:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void IndexedSet_1_CopyTo_m4232548259_gshared (IndexedSet_1_t234526808 * __this, ObjectU5BU5D_t2843939325* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	{
		List_1_t257213610 * L_0 = (List_1_t257213610 *)__this->get_m_List_0();
		ObjectU5BU5D_t2843939325* L_1 = ___array0;
		int32_t L_2 = ___arrayIndex1;
		NullCheck((List_1_t257213610 *)L_0);
		((  void (*) (List_1_t257213610 *, ObjectU5BU5D_t2843939325*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((List_1_t257213610 *)L_0, (ObjectU5BU5D_t2843939325*)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		return;
	}
}
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t IndexedSet_1_get_Count_m2591381675_gshared (IndexedSet_1_t234526808 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		List_1_t257213610 * L_0 = (List_1_t257213610 *)__this->get_m_List_0();
		NullCheck((List_1_t257213610 *)L_0);
		int32_t L_1 = ((  int32_t (*) (List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t257213610 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_0 = (int32_t)L_1;
		goto IL_0012;
	}

IL_0012:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" IL2CPP_METHOD_ATTR bool IndexedSet_1_get_IsReadOnly_m1939064765_gshared (IndexedSet_1_t234526808 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0008;
	}

IL_0008:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" IL2CPP_METHOD_ATTR int32_t IndexedSet_1_IndexOf_m241693686_gshared (IndexedSet_1_t234526808 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = (int32_t)(-1);
		Dictionary_2_t3384741 * L_0 = (Dictionary_2_t3384741 *)__this->get_m_Dictionary_1();
		RuntimeObject * L_1 = ___item0;
		NullCheck((Dictionary_2_t3384741 *)L_0);
		((  bool (*) (Dictionary_2_t3384741 *, RuntimeObject *, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Dictionary_2_t3384741 *)L_0, (RuntimeObject *)L_1, (int32_t*)(int32_t*)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		int32_t L_2 = V_0;
		V_1 = (int32_t)L_2;
		goto IL_0019;
	}

IL_0019:
	{
		int32_t L_3 = V_1;
		return L_3;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" IL2CPP_METHOD_ATTR void IndexedSet_1_Insert_m1432638049_gshared (IndexedSet_1_t234526808 * __this, int32_t ___index0, RuntimeObject * ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IndexedSet_1_Insert_m1432638049_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2494070935(L_0, (String_t*)_stringLiteral3926843441, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, IndexedSet_1_Insert_m1432638049_RuntimeMethod_var);
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void IndexedSet_1_RemoveAt_m3002732320_gshared (IndexedSet_1_t234526808 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject * V_2 = NULL;
	{
		List_1_t257213610 * L_0 = (List_1_t257213610 *)__this->get_m_List_0();
		int32_t L_1 = ___index0;
		NullCheck((List_1_t257213610 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (List_1_t257213610 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((List_1_t257213610 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		V_0 = (RuntimeObject *)L_2;
		Dictionary_2_t3384741 * L_3 = (Dictionary_2_t3384741 *)__this->get_m_Dictionary_1();
		RuntimeObject * L_4 = V_0;
		NullCheck((Dictionary_2_t3384741 *)L_3);
		((  bool (*) (Dictionary_2_t3384741 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((Dictionary_2_t3384741 *)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		int32_t L_5 = ___index0;
		List_1_t257213610 * L_6 = (List_1_t257213610 *)__this->get_m_List_0();
		NullCheck((List_1_t257213610 *)L_6);
		int32_t L_7 = ((  int32_t (*) (List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t257213610 *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1))))))
		{
			goto IL_003f;
		}
	}
	{
		List_1_t257213610 * L_8 = (List_1_t257213610 *)__this->get_m_List_0();
		int32_t L_9 = ___index0;
		NullCheck((List_1_t257213610 *)L_8);
		((  void (*) (List_1_t257213610 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16)->methodPointer)((List_1_t257213610 *)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16));
		goto IL_0082;
	}

IL_003f:
	{
		List_1_t257213610 * L_10 = (List_1_t257213610 *)__this->get_m_List_0();
		NullCheck((List_1_t257213610 *)L_10);
		int32_t L_11 = ((  int32_t (*) (List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t257213610 *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1));
		List_1_t257213610 * L_12 = (List_1_t257213610 *)__this->get_m_List_0();
		int32_t L_13 = V_1;
		NullCheck((List_1_t257213610 *)L_12);
		RuntimeObject * L_14 = ((  RuntimeObject * (*) (List_1_t257213610 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((List_1_t257213610 *)L_12, (int32_t)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		V_2 = (RuntimeObject *)L_14;
		List_1_t257213610 * L_15 = (List_1_t257213610 *)__this->get_m_List_0();
		int32_t L_16 = ___index0;
		RuntimeObject * L_17 = V_2;
		NullCheck((List_1_t257213610 *)L_15);
		((  void (*) (List_1_t257213610 *, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17)->methodPointer)((List_1_t257213610 *)L_15, (int32_t)L_16, (RuntimeObject *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
		Dictionary_2_t3384741 * L_18 = (Dictionary_2_t3384741 *)__this->get_m_Dictionary_1();
		RuntimeObject * L_19 = V_2;
		int32_t L_20 = ___index0;
		NullCheck((Dictionary_2_t3384741 *)L_18);
		((  void (*) (Dictionary_2_t3384741 *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((Dictionary_2_t3384741 *)L_18, (RuntimeObject *)L_19, (int32_t)L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		List_1_t257213610 * L_21 = (List_1_t257213610 *)__this->get_m_List_0();
		int32_t L_22 = V_1;
		NullCheck((List_1_t257213610 *)L_21);
		((  void (*) (List_1_t257213610 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16)->methodPointer)((List_1_t257213610 *)L_21, (int32_t)L_22, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16));
	}

IL_0082:
	{
		return;
	}
}
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * IndexedSet_1_get_Item_m3913508799_gshared (IndexedSet_1_t234526808 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		List_1_t257213610 * L_0 = (List_1_t257213610 *)__this->get_m_List_0();
		int32_t L_1 = ___index0;
		NullCheck((List_1_t257213610 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (List_1_t257213610 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((List_1_t257213610 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		V_0 = (RuntimeObject *)L_2;
		goto IL_0013;
	}

IL_0013:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" IL2CPP_METHOD_ATTR void IndexedSet_1_set_Item_m4214546195_gshared (IndexedSet_1_t234526808 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		List_1_t257213610 * L_0 = (List_1_t257213610 *)__this->get_m_List_0();
		int32_t L_1 = ___index0;
		NullCheck((List_1_t257213610 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (List_1_t257213610 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((List_1_t257213610 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		V_0 = (RuntimeObject *)L_2;
		Dictionary_2_t3384741 * L_3 = (Dictionary_2_t3384741 *)__this->get_m_Dictionary_1();
		RuntimeObject * L_4 = V_0;
		NullCheck((Dictionary_2_t3384741 *)L_3);
		((  bool (*) (Dictionary_2_t3384741 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((Dictionary_2_t3384741 *)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		List_1_t257213610 * L_5 = (List_1_t257213610 *)__this->get_m_List_0();
		int32_t L_6 = ___index0;
		RuntimeObject * L_7 = ___value1;
		NullCheck((List_1_t257213610 *)L_5);
		((  void (*) (List_1_t257213610 *, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17)->methodPointer)((List_1_t257213610 *)L_5, (int32_t)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
		Dictionary_2_t3384741 * L_8 = (Dictionary_2_t3384741 *)__this->get_m_Dictionary_1();
		RuntimeObject * L_9 = V_0;
		int32_t L_10 = ___index0;
		NullCheck((Dictionary_2_t3384741 *)L_8);
		((  void (*) (Dictionary_2_t3384741 *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Dictionary_2_t3384741 *)L_8, (RuntimeObject *)L_9, (int32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		return;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" IL2CPP_METHOD_ATTR void IndexedSet_1_RemoveAll_m3453409986_gshared (IndexedSet_1_t234526808 * __this, Predicate_1_t3905400288 * ___match0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		V_0 = (int32_t)0;
		goto IL_0034;
	}

IL_0008:
	{
		List_1_t257213610 * L_0 = (List_1_t257213610 *)__this->get_m_List_0();
		int32_t L_1 = V_0;
		NullCheck((List_1_t257213610 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (List_1_t257213610 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((List_1_t257213610 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		V_1 = (RuntimeObject *)L_2;
		Predicate_1_t3905400288 * L_3 = ___match0;
		RuntimeObject * L_4 = V_1;
		NullCheck((Predicate_1_t3905400288 *)L_3);
		bool L_5 = ((  bool (*) (Predicate_1_t3905400288 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19)->methodPointer)((Predicate_1_t3905400288 *)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19));
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		RuntimeObject * L_6 = V_1;
		NullCheck((IndexedSet_1_t234526808 *)__this);
		((  bool (*) (IndexedSet_1_t234526808 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 20)->methodPointer)((IndexedSet_1_t234526808 *)__this, (RuntimeObject *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 20));
		goto IL_0033;
	}

IL_002f:
	{
		int32_t L_7 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0033:
	{
	}

IL_0034:
	{
		int32_t L_8 = V_0;
		List_1_t257213610 * L_9 = (List_1_t257213610 *)__this->get_m_List_0();
		NullCheck((List_1_t257213610 *)L_9);
		int32_t L_10 = ((  int32_t (*) (List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t257213610 *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0008;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" IL2CPP_METHOD_ATTR void IndexedSet_1_Sort_m2612539420_gshared (IndexedSet_1_t234526808 * __this, Comparison_1_t2855037343 * ___sortLayoutFunction0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		List_1_t257213610 * L_0 = (List_1_t257213610 *)__this->get_m_List_0();
		Comparison_1_t2855037343 * L_1 = ___sortLayoutFunction0;
		NullCheck((List_1_t257213610 *)L_0);
		((  void (*) (List_1_t257213610 *, Comparison_1_t2855037343 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)((List_1_t257213610 *)L_0, (Comparison_1_t2855037343 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
		V_0 = (int32_t)0;
		goto IL_0034;
	}

IL_0014:
	{
		List_1_t257213610 * L_2 = (List_1_t257213610 *)__this->get_m_List_0();
		int32_t L_3 = V_0;
		NullCheck((List_1_t257213610 *)L_2);
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (List_1_t257213610 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((List_1_t257213610 *)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		V_1 = (RuntimeObject *)L_4;
		Dictionary_2_t3384741 * L_5 = (Dictionary_2_t3384741 *)__this->get_m_Dictionary_1();
		RuntimeObject * L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck((Dictionary_2_t3384741 *)L_5);
		((  void (*) (Dictionary_2_t3384741 *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((Dictionary_2_t3384741 *)L_5, (RuntimeObject *)L_6, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		int32_t L_8 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0034:
	{
		int32_t L_9 = V_0;
		List_1_t257213610 * L_10 = (List_1_t257213610 *)__this->get_m_List_0();
		NullCheck((List_1_t257213610 *)L_10);
		int32_t L_11 = ((  int32_t (*) (List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t257213610 *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0014;
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
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0__ctor_m3001242744_gshared (U3CStartU3Ec__Iterator0_t3860393442 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m297566312((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CStartU3Ec__Iterator0_MoveNext_m524356752_gshared (U3CStartU3Ec__Iterator0_t3860393442 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ec__Iterator0_MoveNext_m524356752_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	float G_B7_0 = 0.0f;
	U3CStartU3Ec__Iterator0_t3860393442 * G_B7_1 = NULL;
	float G_B6_0 = 0.0f;
	U3CStartU3Ec__Iterator0_t3860393442 * G_B6_1 = NULL;
	float G_B8_0 = 0.0f;
	float G_B8_1 = 0.0f;
	U3CStartU3Ec__Iterator0_t3860393442 * G_B8_2 = NULL;
	{
		int32_t L_0 = (int32_t)__this->get_U24PC_5();
		V_0 = (uint32_t)L_0;
		__this->set_U24PC_5((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00d5;
			}
		}
	}
	{
		goto IL_010f;
	}

IL_0021:
	{
		ColorTween_t809614380 * L_2 = (ColorTween_t809614380 *)__this->get_address_of_tweenInfo_0();
		bool L_3 = ColorTween_ValidTarget_m376919233((ColorTween_t809614380 *)(ColorTween_t809614380 *)L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_003d;
		}
	}
	{
		goto IL_010f;
	}

IL_003d:
	{
		__this->set_U3CelapsedTimeU3E__0_1((0.0f));
		goto IL_00d6;
	}

IL_004d:
	{
		float L_4 = (float)__this->get_U3CelapsedTimeU3E__0_1();
		ColorTween_t809614380 * L_5 = (ColorTween_t809614380 *)__this->get_address_of_tweenInfo_0();
		bool L_6 = ColorTween_get_ignoreTimeScale_m1133957174((ColorTween_t809614380 *)(ColorTween_t809614380 *)L_5, /*hidden argument*/NULL);
		G_B6_0 = L_4;
		G_B6_1 = ((U3CStartU3Ec__Iterator0_t3860393442 *)(__this));
		if (!L_6)
		{
			G_B7_0 = L_4;
			G_B7_1 = ((U3CStartU3Ec__Iterator0_t3860393442 *)(__this));
			goto IL_0075;
		}
	}
	{
		float L_7 = Time_get_unscaledDeltaTime_m4270080131(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B8_0 = L_7;
		G_B8_1 = G_B6_0;
		G_B8_2 = ((U3CStartU3Ec__Iterator0_t3860393442 *)(G_B6_1));
		goto IL_007a;
	}

IL_0075:
	{
		float L_8 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B8_0 = L_8;
		G_B8_1 = G_B7_0;
		G_B8_2 = ((U3CStartU3Ec__Iterator0_t3860393442 *)(G_B7_1));
	}

IL_007a:
	{
		NullCheck(G_B8_2);
		G_B8_2->set_U3CelapsedTimeU3E__0_1(((float)il2cpp_codegen_add((float)G_B8_1, (float)G_B8_0)));
		float L_9 = (float)__this->get_U3CelapsedTimeU3E__0_1();
		ColorTween_t809614380 * L_10 = (ColorTween_t809614380 *)__this->get_address_of_tweenInfo_0();
		float L_11 = ColorTween_get_duration_m3264097060((ColorTween_t809614380 *)(ColorTween_t809614380 *)L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_12 = Mathf_Clamp01_m56433566(NULL /*static, unused*/, (float)((float)((float)L_9/(float)L_11)), /*hidden argument*/NULL);
		__this->set_U3CpercentageU3E__1_2(L_12);
		ColorTween_t809614380 * L_13 = (ColorTween_t809614380 *)__this->get_address_of_tweenInfo_0();
		float L_14 = (float)__this->get_U3CpercentageU3E__1_2();
		ColorTween_TweenValue_m3895102629((ColorTween_t809614380 *)(ColorTween_t809614380 *)L_13, (float)L_14, /*hidden argument*/NULL);
		__this->set_U24current_3(NULL);
		bool L_15 = (bool)__this->get_U24disposing_4();
		if (L_15)
		{
			goto IL_00d0;
		}
	}
	{
		__this->set_U24PC_5(1);
	}

IL_00d0:
	{
		goto IL_0111;
	}

IL_00d5:
	{
	}

IL_00d6:
	{
		float L_16 = (float)__this->get_U3CelapsedTimeU3E__0_1();
		ColorTween_t809614380 * L_17 = (ColorTween_t809614380 *)__this->get_address_of_tweenInfo_0();
		float L_18 = ColorTween_get_duration_m3264097060((ColorTween_t809614380 *)(ColorTween_t809614380 *)L_17, /*hidden argument*/NULL);
		if ((((float)L_16) < ((float)L_18)))
		{
			goto IL_004d;
		}
	}
	{
		ColorTween_t809614380 * L_19 = (ColorTween_t809614380 *)__this->get_address_of_tweenInfo_0();
		ColorTween_TweenValue_m3895102629((ColorTween_t809614380 *)(ColorTween_t809614380 *)L_19, (float)(1.0f), /*hidden argument*/NULL);
		__this->set_U24PC_5((-1));
	}

IL_010f:
	{
		return (bool)0;
	}

IL_0111:
	{
		return (bool)1;
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2852443338_gshared (U3CStartU3Ec__Iterator0_t3860393442 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U24current_3();
		V_0 = (RuntimeObject *)L_0;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject * L_1 = V_0;
		return L_1;
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m3282639877_gshared (U3CStartU3Ec__Iterator0_t3860393442 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U24current_3();
		V_0 = (RuntimeObject *)L_0;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0_Dispose_m261027331_gshared (U3CStartU3Ec__Iterator0_t3860393442 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_4((bool)1);
		__this->set_U24PC_5((-1));
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0_Reset_m3175110837_gshared (U3CStartU3Ec__Iterator0_t3860393442 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ec__Iterator0_Reset_m3175110837_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CStartU3Ec__Iterator0_Reset_m3175110837_RuntimeMethod_var);
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
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0__ctor_m2366347741_gshared (U3CStartU3Ec__Iterator0_t30141770 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m297566312((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CStartU3Ec__Iterator0_MoveNext_m4270440387_gshared (U3CStartU3Ec__Iterator0_t30141770 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ec__Iterator0_MoveNext_m4270440387_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	float G_B7_0 = 0.0f;
	U3CStartU3Ec__Iterator0_t30141770 * G_B7_1 = NULL;
	float G_B6_0 = 0.0f;
	U3CStartU3Ec__Iterator0_t30141770 * G_B6_1 = NULL;
	float G_B8_0 = 0.0f;
	float G_B8_1 = 0.0f;
	U3CStartU3Ec__Iterator0_t30141770 * G_B8_2 = NULL;
	{
		int32_t L_0 = (int32_t)__this->get_U24PC_5();
		V_0 = (uint32_t)L_0;
		__this->set_U24PC_5((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00d5;
			}
		}
	}
	{
		goto IL_010f;
	}

IL_0021:
	{
		FloatTween_t1274330004 * L_2 = (FloatTween_t1274330004 *)__this->get_address_of_tweenInfo_0();
		bool L_3 = FloatTween_ValidTarget_m885246038((FloatTween_t1274330004 *)(FloatTween_t1274330004 *)L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_003d;
		}
	}
	{
		goto IL_010f;
	}

IL_003d:
	{
		__this->set_U3CelapsedTimeU3E__0_1((0.0f));
		goto IL_00d6;
	}

IL_004d:
	{
		float L_4 = (float)__this->get_U3CelapsedTimeU3E__0_1();
		FloatTween_t1274330004 * L_5 = (FloatTween_t1274330004 *)__this->get_address_of_tweenInfo_0();
		bool L_6 = FloatTween_get_ignoreTimeScale_m322812475((FloatTween_t1274330004 *)(FloatTween_t1274330004 *)L_5, /*hidden argument*/NULL);
		G_B6_0 = L_4;
		G_B6_1 = ((U3CStartU3Ec__Iterator0_t30141770 *)(__this));
		if (!L_6)
		{
			G_B7_0 = L_4;
			G_B7_1 = ((U3CStartU3Ec__Iterator0_t30141770 *)(__this));
			goto IL_0075;
		}
	}
	{
		float L_7 = Time_get_unscaledDeltaTime_m4270080131(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B8_0 = L_7;
		G_B8_1 = G_B6_0;
		G_B8_2 = ((U3CStartU3Ec__Iterator0_t30141770 *)(G_B6_1));
		goto IL_007a;
	}

IL_0075:
	{
		float L_8 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B8_0 = L_8;
		G_B8_1 = G_B7_0;
		G_B8_2 = ((U3CStartU3Ec__Iterator0_t30141770 *)(G_B7_1));
	}

IL_007a:
	{
		NullCheck(G_B8_2);
		G_B8_2->set_U3CelapsedTimeU3E__0_1(((float)il2cpp_codegen_add((float)G_B8_1, (float)G_B8_0)));
		float L_9 = (float)__this->get_U3CelapsedTimeU3E__0_1();
		FloatTween_t1274330004 * L_10 = (FloatTween_t1274330004 *)__this->get_address_of_tweenInfo_0();
		float L_11 = FloatTween_get_duration_m1227071020((FloatTween_t1274330004 *)(FloatTween_t1274330004 *)L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_12 = Mathf_Clamp01_m56433566(NULL /*static, unused*/, (float)((float)((float)L_9/(float)L_11)), /*hidden argument*/NULL);
		__this->set_U3CpercentageU3E__1_2(L_12);
		FloatTween_t1274330004 * L_13 = (FloatTween_t1274330004 *)__this->get_address_of_tweenInfo_0();
		float L_14 = (float)__this->get_U3CpercentageU3E__1_2();
		FloatTween_TweenValue_m52237061((FloatTween_t1274330004 *)(FloatTween_t1274330004 *)L_13, (float)L_14, /*hidden argument*/NULL);
		__this->set_U24current_3(NULL);
		bool L_15 = (bool)__this->get_U24disposing_4();
		if (L_15)
		{
			goto IL_00d0;
		}
	}
	{
		__this->set_U24PC_5(1);
	}

IL_00d0:
	{
		goto IL_0111;
	}

IL_00d5:
	{
	}

IL_00d6:
	{
		float L_16 = (float)__this->get_U3CelapsedTimeU3E__0_1();
		FloatTween_t1274330004 * L_17 = (FloatTween_t1274330004 *)__this->get_address_of_tweenInfo_0();
		float L_18 = FloatTween_get_duration_m1227071020((FloatTween_t1274330004 *)(FloatTween_t1274330004 *)L_17, /*hidden argument*/NULL);
		if ((((float)L_16) < ((float)L_18)))
		{
			goto IL_004d;
		}
	}
	{
		FloatTween_t1274330004 * L_19 = (FloatTween_t1274330004 *)__this->get_address_of_tweenInfo_0();
		FloatTween_TweenValue_m52237061((FloatTween_t1274330004 *)(FloatTween_t1274330004 *)L_19, (float)(1.0f), /*hidden argument*/NULL);
		__this->set_U24PC_5((-1));
	}

IL_010f:
	{
		return (bool)0;
	}

IL_0111:
	{
		return (bool)1;
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3156493053_gshared (U3CStartU3Ec__Iterator0_t30141770 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U24current_3();
		V_0 = (RuntimeObject *)L_0;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject * L_1 = V_0;
		return L_1;
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m1677159983_gshared (U3CStartU3Ec__Iterator0_t30141770 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U24current_3();
		V_0 = (RuntimeObject *)L_0;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0_Dispose_m3800412744_gshared (U3CStartU3Ec__Iterator0_t30141770 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_4((bool)1);
		__this->set_U24PC_5((-1));
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0_Reset_m656428886_gshared (U3CStartU3Ec__Iterator0_t30141770 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ec__Iterator0_Reset_m656428886_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CStartU3Ec__Iterator0_Reset_m656428886_RuntimeMethod_var);
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
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TweenRunner_1__ctor_m340723704_gshared (TweenRunner_1_t3055525458 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m297566312((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::Start(T)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* TweenRunner_1_Start_m817364799_gshared (RuntimeObject * __this /* static, unused */, ColorTween_t809614380  ___tweenInfo0, const RuntimeMethod* method)
{
	U3CStartU3Ec__Iterator0_t3860393442 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		U3CStartU3Ec__Iterator0_t3860393442 * L_0 = (U3CStartU3Ec__Iterator0_t3860393442 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		((  void (*) (U3CStartU3Ec__Iterator0_t3860393442 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_0 = (U3CStartU3Ec__Iterator0_t3860393442 *)L_0;
		U3CStartU3Ec__Iterator0_t3860393442 * L_1 = V_0;
		ColorTween_t809614380  L_2 = ___tweenInfo0;
		NullCheck(L_1);
		L_1->set_tweenInfo_0(L_2);
		U3CStartU3Ec__Iterator0_t3860393442 * L_3 = V_0;
		V_1 = (RuntimeObject*)L_3;
		goto IL_0014;
	}

IL_0014:
	{
		RuntimeObject* L_4 = V_1;
		return L_4;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::Init(UnityEngine.MonoBehaviour)
extern "C" IL2CPP_METHOD_ATTR void TweenRunner_1_Init_m3026112660_gshared (TweenRunner_1_t3055525458 * __this, MonoBehaviour_t3962482529 * ___coroutineContainer0, const RuntimeMethod* method)
{
	{
		MonoBehaviour_t3962482529 * L_0 = ___coroutineContainer0;
		__this->set_m_CoroutineContainer_0(L_0);
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::StartTween(T)
extern "C" IL2CPP_METHOD_ATTR void TweenRunner_1_StartTween_m2247690200_gshared (TweenRunner_1_t3055525458 * __this, ColorTween_t809614380  ___info0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenRunner_1_StartTween_m2247690200_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour_t3962482529 * L_0 = (MonoBehaviour_t3962482529 *)__this->get_m_CoroutineContainer_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, (RuntimeObject *)_stringLiteral1132744560, /*hidden argument*/NULL);
		goto IL_0073;
	}

IL_0022:
	{
		NullCheck((TweenRunner_1_t3055525458 *)__this);
		((  void (*) (TweenRunner_1_t3055525458 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((TweenRunner_1_t3055525458 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		MonoBehaviour_t3962482529 * L_2 = (MonoBehaviour_t3962482529 *)__this->get_m_CoroutineContainer_0();
		NullCheck((Component_t1923634451 *)L_2);
		GameObject_t1113636619 * L_3 = Component_get_gameObject_m442555142((Component_t1923634451 *)L_2, /*hidden argument*/NULL);
		NullCheck((GameObject_t1113636619 *)L_3);
		bool L_4 = GameObject_get_activeInHierarchy_m2006396688((GameObject_t1113636619 *)L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0055;
		}
	}
	{
		ColorTween_TweenValue_m3895102629((ColorTween_t809614380 *)(ColorTween_t809614380 *)(&___info0), (float)(1.0f), /*hidden argument*/NULL);
		goto IL_0073;
	}

IL_0055:
	{
		ColorTween_t809614380  L_5 = ___info0;
		RuntimeObject* L_6 = ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, ColorTween_t809614380 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (ColorTween_t809614380 )L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_m_Tween_1(L_6);
		MonoBehaviour_t3962482529 * L_7 = (MonoBehaviour_t3962482529 *)__this->get_m_CoroutineContainer_0();
		RuntimeObject* L_8 = (RuntimeObject*)__this->get_m_Tween_1();
		NullCheck((MonoBehaviour_t3962482529 *)L_7);
		MonoBehaviour_StartCoroutine_m3411253000((MonoBehaviour_t3962482529 *)L_7, (RuntimeObject*)L_8, /*hidden argument*/NULL);
	}

IL_0073:
	{
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::StopTween()
extern "C" IL2CPP_METHOD_ATTR void TweenRunner_1_StopTween_m1830357468_gshared (TweenRunner_1_t3055525458 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_m_Tween_1();
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		MonoBehaviour_t3962482529 * L_1 = (MonoBehaviour_t3962482529 *)__this->get_m_CoroutineContainer_0();
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_m_Tween_1();
		NullCheck((MonoBehaviour_t3962482529 *)L_1);
		MonoBehaviour_StopCoroutine_m615723318((MonoBehaviour_t3962482529 *)L_1, (RuntimeObject*)L_2, /*hidden argument*/NULL);
		__this->set_m_Tween_1((RuntimeObject*)NULL);
	}

IL_0026:
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
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TweenRunner_1__ctor_m3053831591_gshared (TweenRunner_1_t3520241082 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m297566312((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::Start(T)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* TweenRunner_1_Start_m3757154622_gshared (RuntimeObject * __this /* static, unused */, FloatTween_t1274330004  ___tweenInfo0, const RuntimeMethod* method)
{
	U3CStartU3Ec__Iterator0_t30141770 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		U3CStartU3Ec__Iterator0_t30141770 * L_0 = (U3CStartU3Ec__Iterator0_t30141770 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		((  void (*) (U3CStartU3Ec__Iterator0_t30141770 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_0 = (U3CStartU3Ec__Iterator0_t30141770 *)L_0;
		U3CStartU3Ec__Iterator0_t30141770 * L_1 = V_0;
		FloatTween_t1274330004  L_2 = ___tweenInfo0;
		NullCheck(L_1);
		L_1->set_tweenInfo_0(L_2);
		U3CStartU3Ec__Iterator0_t30141770 * L_3 = V_0;
		V_1 = (RuntimeObject*)L_3;
		goto IL_0014;
	}

IL_0014:
	{
		RuntimeObject* L_4 = V_1;
		return L_4;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::Init(UnityEngine.MonoBehaviour)
extern "C" IL2CPP_METHOD_ATTR void TweenRunner_1_Init_m1266084429_gshared (TweenRunner_1_t3520241082 * __this, MonoBehaviour_t3962482529 * ___coroutineContainer0, const RuntimeMethod* method)
{
	{
		MonoBehaviour_t3962482529 * L_0 = ___coroutineContainer0;
		__this->set_m_CoroutineContainer_0(L_0);
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::StartTween(T)
extern "C" IL2CPP_METHOD_ATTR void TweenRunner_1_StartTween_m1055628540_gshared (TweenRunner_1_t3520241082 * __this, FloatTween_t1274330004  ___info0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenRunner_1_StartTween_m1055628540_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour_t3962482529 * L_0 = (MonoBehaviour_t3962482529 *)__this->get_m_CoroutineContainer_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, (RuntimeObject *)_stringLiteral1132744560, /*hidden argument*/NULL);
		goto IL_0073;
	}

IL_0022:
	{
		NullCheck((TweenRunner_1_t3520241082 *)__this);
		((  void (*) (TweenRunner_1_t3520241082 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((TweenRunner_1_t3520241082 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		MonoBehaviour_t3962482529 * L_2 = (MonoBehaviour_t3962482529 *)__this->get_m_CoroutineContainer_0();
		NullCheck((Component_t1923634451 *)L_2);
		GameObject_t1113636619 * L_3 = Component_get_gameObject_m442555142((Component_t1923634451 *)L_2, /*hidden argument*/NULL);
		NullCheck((GameObject_t1113636619 *)L_3);
		bool L_4 = GameObject_get_activeInHierarchy_m2006396688((GameObject_t1113636619 *)L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0055;
		}
	}
	{
		FloatTween_TweenValue_m52237061((FloatTween_t1274330004 *)(FloatTween_t1274330004 *)(&___info0), (float)(1.0f), /*hidden argument*/NULL);
		goto IL_0073;
	}

IL_0055:
	{
		FloatTween_t1274330004  L_5 = ___info0;
		RuntimeObject* L_6 = ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, FloatTween_t1274330004 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (FloatTween_t1274330004 )L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_m_Tween_1(L_6);
		MonoBehaviour_t3962482529 * L_7 = (MonoBehaviour_t3962482529 *)__this->get_m_CoroutineContainer_0();
		RuntimeObject* L_8 = (RuntimeObject*)__this->get_m_Tween_1();
		NullCheck((MonoBehaviour_t3962482529 *)L_7);
		MonoBehaviour_StartCoroutine_m3411253000((MonoBehaviour_t3962482529 *)L_7, (RuntimeObject*)L_8, /*hidden argument*/NULL);
	}

IL_0073:
	{
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::StopTween()
extern "C" IL2CPP_METHOD_ATTR void TweenRunner_1_StopTween_m3457627707_gshared (TweenRunner_1_t3520241082 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_m_Tween_1();
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		MonoBehaviour_t3962482529 * L_1 = (MonoBehaviour_t3962482529 *)__this->get_m_CoroutineContainer_0();
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_m_Tween_1();
		NullCheck((MonoBehaviour_t3962482529 *)L_1);
		MonoBehaviour_StopCoroutine_m615723318((MonoBehaviour_t3962482529 *)L_1, (RuntimeObject*)L_2, /*hidden argument*/NULL);
		__this->set_m_Tween_1((RuntimeObject*)NULL);
	}

IL_0026:
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
// System.Void UnityEngine.UI.ListPool`1<System.Int32>::Clear(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Clear_m1094012931_gshared (RuntimeObject * __this /* static, unused */, List_1_t128053199 * ___l0, const RuntimeMethod* method)
{
	{
		List_1_t128053199 * L_0 = ___l0;
		NullCheck((List_1_t128053199 *)L_0);
		((  void (*) (List_1_t128053199 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t128053199 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<System.Int32>::Get()
extern "C" IL2CPP_METHOD_ATTR List_1_t128053199 * ListPool_1_Get_m2031605680_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	List_1_t128053199 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t4122643707 * L_0 = ((ListPool_1_t3980534944_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_t4122643707 *)L_0);
		List_1_t128053199 * L_1 = ((  List_1_t128053199 * (*) (ObjectPool_1_t4122643707 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t4122643707 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (List_1_t128053199 *)L_1;
		goto IL_0011;
	}

IL_0011:
	{
		List_1_t128053199 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.UI.ListPool`1<System.Int32>::Release(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Release_m188599205_gshared (RuntimeObject * __this /* static, unused */, List_1_t128053199 * ___toRelease0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t4122643707 * L_0 = ((ListPool_1_t3980534944_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t128053199 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_t4122643707 *)L_0);
		((  void (*) (ObjectPool_1_t4122643707 *, List_1_t128053199 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_t4122643707 *)L_0, (List_1_t128053199 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<System.Int32>::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ListPool_1__cctor_m647010813_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	RuntimeObject * G_B2_0 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	{
		UnityAction_1_t712889340 * L_0 = ((ListPool_1_t3980534944_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		G_B1_0 = NULL;
		if (L_0)
		{
			G_B2_0 = NULL;
			goto IL_0019;
		}
	}
	{
		intptr_t L_1 = (intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4);
		UnityAction_1_t712889340 * L_2 = (UnityAction_1_t712889340 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t712889340 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_2, (RuntimeObject *)NULL, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		((ListPool_1_t3980534944_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_U3CU3Ef__mgU24cache0_1(L_2);
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		UnityAction_1_t712889340 * L_3 = ((ListPool_1_t3980534944_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		ObjectPool_1_t4122643707 * L_4 = (ObjectPool_1_t4122643707 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_t4122643707 *, UnityAction_1_t712889340 *, UnityAction_1_t712889340 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_4, (UnityAction_1_t712889340 *)G_B2_0, (UnityAction_1_t712889340 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_t3980534944_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_4);
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
// System.Void UnityEngine.UI.ListPool`1<System.Object>::Clear(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Clear_m2266431612_gshared (RuntimeObject * __this /* static, unused */, List_1_t257213610 * ___l0, const RuntimeMethod* method)
{
	{
		List_1_t257213610 * L_0 = ___l0;
		NullCheck((List_1_t257213610 *)L_0);
		((  void (*) (List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t257213610 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<System.Object>::Get()
extern "C" IL2CPP_METHOD_ATTR List_1_t257213610 * ListPool_1_Get_m1670010485_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	List_1_t257213610 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t4251804118 * L_0 = ((ListPool_1_t4109695355_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_t4251804118 *)L_0);
		List_1_t257213610 * L_1 = ((  List_1_t257213610 * (*) (ObjectPool_1_t4251804118 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t4251804118 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (List_1_t257213610 *)L_1;
		goto IL_0011;
	}

IL_0011:
	{
		List_1_t257213610 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.UI.ListPool`1<System.Object>::Release(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Release_m957266927_gshared (RuntimeObject * __this /* static, unused */, List_1_t257213610 * ___toRelease0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t4251804118 * L_0 = ((ListPool_1_t4109695355_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t257213610 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_t4251804118 *)L_0);
		((  void (*) (ObjectPool_1_t4251804118 *, List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_t4251804118 *)L_0, (List_1_t257213610 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<System.Object>::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ListPool_1__cctor_m1477269088_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	RuntimeObject * G_B2_0 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	{
		UnityAction_1_t842049751 * L_0 = ((ListPool_1_t4109695355_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		G_B1_0 = NULL;
		if (L_0)
		{
			G_B2_0 = NULL;
			goto IL_0019;
		}
	}
	{
		intptr_t L_1 = (intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4);
		UnityAction_1_t842049751 * L_2 = (UnityAction_1_t842049751 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t842049751 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_2, (RuntimeObject *)NULL, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		((ListPool_1_t4109695355_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_U3CU3Ef__mgU24cache0_1(L_2);
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		UnityAction_1_t842049751 * L_3 = ((ListPool_1_t4109695355_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		ObjectPool_1_t4251804118 * L_4 = (ObjectPool_1_t4251804118 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_t4251804118 *, UnityAction_1_t842049751 *, UnityAction_1_t842049751 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_4, (UnityAction_1_t842049751 *)G_B2_0, (UnityAction_1_t842049751 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_t4109695355_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_4);
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
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Color32>::Clear(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Clear_m2605375579_gshared (RuntimeObject * __this /* static, unused */, List_1_t4072576034 * ___l0, const RuntimeMethod* method)
{
	{
		List_1_t4072576034 * L_0 = ___l0;
		NullCheck((List_1_t4072576034 *)L_0);
		((  void (*) (List_1_t4072576034 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t4072576034 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Color32>::Get()
extern "C" IL2CPP_METHOD_ATTR List_1_t4072576034 * ListPool_1_Get_m2875520964_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	List_1_t4072576034 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t3772199246 * L_0 = ((ListPool_1_t3630090483_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_t3772199246 *)L_0);
		List_1_t4072576034 * L_1 = ((  List_1_t4072576034 * (*) (ObjectPool_1_t3772199246 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t3772199246 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (List_1_t4072576034 *)L_1;
		goto IL_0011;
	}

IL_0011:
	{
		List_1_t4072576034 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Color32>::Release(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Release_m2857821093_gshared (RuntimeObject * __this /* static, unused */, List_1_t4072576034 * ___toRelease0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t3772199246 * L_0 = ((ListPool_1_t3630090483_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t4072576034 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_t3772199246 *)L_0);
		((  void (*) (ObjectPool_1_t3772199246 *, List_1_t4072576034 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_t3772199246 *)L_0, (List_1_t4072576034 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Color32>::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ListPool_1__cctor_m1390066271_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	RuntimeObject * G_B2_0 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	{
		UnityAction_1_t362444879 * L_0 = ((ListPool_1_t3630090483_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		G_B1_0 = NULL;
		if (L_0)
		{
			G_B2_0 = NULL;
			goto IL_0019;
		}
	}
	{
		intptr_t L_1 = (intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4);
		UnityAction_1_t362444879 * L_2 = (UnityAction_1_t362444879 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t362444879 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_2, (RuntimeObject *)NULL, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		((ListPool_1_t3630090483_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_U3CU3Ef__mgU24cache0_1(L_2);
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		UnityAction_1_t362444879 * L_3 = ((ListPool_1_t3630090483_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		ObjectPool_1_t3772199246 * L_4 = (ObjectPool_1_t3772199246 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_t3772199246 *, UnityAction_1_t362444879 *, UnityAction_1_t362444879 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_4, (UnityAction_1_t362444879 *)G_B2_0, (UnityAction_1_t362444879 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_t3630090483_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_4);
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
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>::Clear(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Clear_m3636388248_gshared (RuntimeObject * __this /* static, unused */, List_1_t1234605051 * ___l0, const RuntimeMethod* method)
{
	{
		List_1_t1234605051 * L_0 = ___l0;
		NullCheck((List_1_t1234605051 *)L_0);
		((  void (*) (List_1_t1234605051 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t1234605051 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>::Get()
extern "C" IL2CPP_METHOD_ATTR List_1_t1234605051 * ListPool_1_Get_m738675669_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	List_1_t1234605051 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t934228263 * L_0 = ((ListPool_1_t792119500_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_t934228263 *)L_0);
		List_1_t1234605051 * L_1 = ((  List_1_t1234605051 * (*) (ObjectPool_1_t934228263 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t934228263 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (List_1_t1234605051 *)L_1;
		goto IL_0011;
	}

IL_0011:
	{
		List_1_t1234605051 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>::Release(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Release_m1246825787_gshared (RuntimeObject * __this /* static, unused */, List_1_t1234605051 * ___toRelease0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t934228263 * L_0 = ((ListPool_1_t792119500_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t1234605051 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_t934228263 *)L_0);
		((  void (*) (ObjectPool_1_t934228263 *, List_1_t1234605051 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_t934228263 *)L_0, (List_1_t1234605051 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ListPool_1__cctor_m995356616_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	RuntimeObject * G_B2_0 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	{
		UnityAction_1_t1819441192 * L_0 = ((ListPool_1_t792119500_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		G_B1_0 = NULL;
		if (L_0)
		{
			G_B2_0 = NULL;
			goto IL_0019;
		}
	}
	{
		intptr_t L_1 = (intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4);
		UnityAction_1_t1819441192 * L_2 = (UnityAction_1_t1819441192 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t1819441192 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_2, (RuntimeObject *)NULL, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		((ListPool_1_t792119500_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_U3CU3Ef__mgU24cache0_1(L_2);
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		UnityAction_1_t1819441192 * L_3 = ((ListPool_1_t792119500_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		ObjectPool_1_t934228263 * L_4 = (ObjectPool_1_t934228263 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_t934228263 *, UnityAction_1_t1819441192 *, UnityAction_1_t1819441192 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_4, (UnityAction_1_t1819441192 *)G_B2_0, (UnityAction_1_t1819441192 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_t792119500_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_4);
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
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::Clear(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Clear_m2531706949_gshared (RuntimeObject * __this /* static, unused */, List_1_t3628304265 * ___l0, const RuntimeMethod* method)
{
	{
		List_1_t3628304265 * L_0 = ___l0;
		NullCheck((List_1_t3628304265 *)L_0);
		((  void (*) (List_1_t3628304265 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t3628304265 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::Get()
extern "C" IL2CPP_METHOD_ATTR List_1_t3628304265 * ListPool_1_Get_m3176650548_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	List_1_t3628304265 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t3327927477 * L_0 = ((ListPool_1_t3185818714_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_t3327927477 *)L_0);
		List_1_t3628304265 * L_1 = ((  List_1_t3628304265 * (*) (ObjectPool_1_t3327927477 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t3327927477 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (List_1_t3628304265 *)L_1;
		goto IL_0011;
	}

IL_0011:
	{
		List_1_t3628304265 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::Release(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Release_m591299672_gshared (RuntimeObject * __this /* static, unused */, List_1_t3628304265 * ___toRelease0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t3327927477 * L_0 = ((ListPool_1_t3185818714_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t3628304265 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_t3327927477 *)L_0);
		((  void (*) (ObjectPool_1_t3327927477 *, List_1_t3628304265 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_t3327927477 *)L_0, (List_1_t3628304265 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ListPool_1__cctor_m3480273184_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	RuntimeObject * G_B2_0 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	{
		UnityAction_1_t4213140406 * L_0 = ((ListPool_1_t3185818714_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		G_B1_0 = NULL;
		if (L_0)
		{
			G_B2_0 = NULL;
			goto IL_0019;
		}
	}
	{
		intptr_t L_1 = (intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4);
		UnityAction_1_t4213140406 * L_2 = (UnityAction_1_t4213140406 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t4213140406 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_2, (RuntimeObject *)NULL, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		((ListPool_1_t3185818714_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_U3CU3Ef__mgU24cache0_1(L_2);
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		UnityAction_1_t4213140406 * L_3 = ((ListPool_1_t3185818714_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		ObjectPool_1_t3327927477 * L_4 = (ObjectPool_1_t3327927477 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_t3327927477 *, UnityAction_1_t4213140406 *, UnityAction_1_t4213140406 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_4, (UnityAction_1_t4213140406 *)G_B2_0, (UnityAction_1_t4213140406 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_t3185818714_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_4);
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
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::Clear(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Clear_m2587502754_gshared (RuntimeObject * __this /* static, unused */, List_1_t899420910 * ___l0, const RuntimeMethod* method)
{
	{
		List_1_t899420910 * L_0 = ___l0;
		NullCheck((List_1_t899420910 *)L_0);
		((  void (*) (List_1_t899420910 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t899420910 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::Get()
extern "C" IL2CPP_METHOD_ATTR List_1_t899420910 * ListPool_1_Get_m3176649063_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	List_1_t899420910 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t599044122 * L_0 = ((ListPool_1_t456935359_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_t599044122 *)L_0);
		List_1_t899420910 * L_1 = ((  List_1_t899420910 * (*) (ObjectPool_1_t599044122 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t599044122 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (List_1_t899420910 *)L_1;
		goto IL_0011;
	}

IL_0011:
	{
		List_1_t899420910 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::Release(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Release_m4113115349_gshared (RuntimeObject * __this /* static, unused */, List_1_t899420910 * ___toRelease0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t599044122 * L_0 = ((ListPool_1_t456935359_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t899420910 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_t599044122 *)L_0);
		((  void (*) (ObjectPool_1_t599044122 *, List_1_t899420910 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_t599044122 *)L_0, (List_1_t899420910 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ListPool_1__cctor_m4085211983_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	RuntimeObject * G_B2_0 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	{
		UnityAction_1_t1484257051 * L_0 = ((ListPool_1_t456935359_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		G_B1_0 = NULL;
		if (L_0)
		{
			G_B2_0 = NULL;
			goto IL_0019;
		}
	}
	{
		intptr_t L_1 = (intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4);
		UnityAction_1_t1484257051 * L_2 = (UnityAction_1_t1484257051 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t1484257051 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_2, (RuntimeObject *)NULL, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		((ListPool_1_t456935359_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_U3CU3Ef__mgU24cache0_1(L_2);
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		UnityAction_1_t1484257051 * L_3 = ((ListPool_1_t456935359_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		ObjectPool_1_t599044122 * L_4 = (ObjectPool_1_t599044122 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_t599044122 *, UnityAction_1_t1484257051 *, UnityAction_1_t1484257051 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_4, (UnityAction_1_t1484257051 *)G_B2_0, (UnityAction_1_t1484257051 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_t456935359_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_4);
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
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::Clear(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Clear_m1838177011_gshared (RuntimeObject * __this /* static, unused */, List_1_t496136383 * ___l0, const RuntimeMethod* method)
{
	{
		List_1_t496136383 * L_0 = ___l0;
		NullCheck((List_1_t496136383 *)L_0);
		((  void (*) (List_1_t496136383 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t496136383 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::Get()
extern "C" IL2CPP_METHOD_ATTR List_1_t496136383 * ListPool_1_Get_m3176656818_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	List_1_t496136383 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t195759595 * L_0 = ((ListPool_1_t53650832_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_t195759595 *)L_0);
		List_1_t496136383 * L_1 = ((  List_1_t496136383 * (*) (ObjectPool_1_t195759595 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t195759595 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (List_1_t496136383 *)L_1;
		goto IL_0011;
	}

IL_0011:
	{
		List_1_t496136383 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::Release(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Release_m1363449253_gshared (RuntimeObject * __this /* static, unused */, List_1_t496136383 * ___toRelease0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t195759595 * L_0 = ((ListPool_1_t53650832_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t496136383 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_t195759595 *)L_0);
		((  void (*) (ObjectPool_1_t195759595 *, List_1_t496136383 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_t195759595 *)L_0, (List_1_t496136383 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ListPool_1__cctor_m704263611_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	RuntimeObject * G_B2_0 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	{
		UnityAction_1_t1080972524 * L_0 = ((ListPool_1_t53650832_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		G_B1_0 = NULL;
		if (L_0)
		{
			G_B2_0 = NULL;
			goto IL_0019;
		}
	}
	{
		intptr_t L_1 = (intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4);
		UnityAction_1_t1080972524 * L_2 = (UnityAction_1_t1080972524 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t1080972524 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_2, (RuntimeObject *)NULL, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		((ListPool_1_t53650832_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_U3CU3Ef__mgU24cache0_1(L_2);
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		UnityAction_1_t1080972524 * L_3 = ((ListPool_1_t53650832_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		ObjectPool_1_t195759595 * L_4 = (ObjectPool_1_t195759595 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_t195759595 *, UnityAction_1_t1080972524 *, UnityAction_1_t1080972524 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_4, (UnityAction_1_t1080972524 *)G_B2_0, (UnityAction_1_t1080972524 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_t53650832_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_4);
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
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ObjectPool_1__ctor_m2535233435_gshared (ObjectPool_1_t2779729376 * __this, UnityAction_1_t3664942305 * ___actionOnGet0, UnityAction_1_t3664942305 * ___actionOnRelease1, const RuntimeMethod* method)
{
	{
		Stack_1_t3923495619 * L_0 = (Stack_1_t3923495619 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		((  void (*) (Stack_1_t3923495619 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_m_Stack_0(L_0);
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m297566312((RuntimeObject *)__this, /*hidden argument*/NULL);
		UnityAction_1_t3664942305 * L_1 = ___actionOnGet0;
		__this->set_m_ActionOnGet_1(L_1);
		UnityAction_1_t3664942305 * L_2 = ___actionOnRelease1;
		__this->set_m_ActionOnRelease_2(L_2);
		return;
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_countAll_m819305395_gshared (ObjectPool_1_t2779729376 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->get_U3CcountAllU3Ek__BackingField_3();
		V_0 = (int32_t)L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ObjectPool_1_set_countAll_m3507126863_gshared (ObjectPool_1_t2779729376 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CcountAllU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern "C" IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_countActive_m807006650_gshared (ObjectPool_1_t2779729376 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		NullCheck((ObjectPool_1_t2779729376 *)__this);
		int32_t L_0 = ((  int32_t (*) (ObjectPool_1_t2779729376 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((ObjectPool_1_t2779729376 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		NullCheck((ObjectPool_1_t2779729376 *)__this);
		int32_t L_1 = ((  int32_t (*) (ObjectPool_1_t2779729376 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((ObjectPool_1_t2779729376 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_0014;
	}

IL_0014:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C" IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_countInactive_m526975942_gshared (ObjectPool_1_t2779729376 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Stack_1_t3923495619 * L_0 = (Stack_1_t3923495619 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t3923495619 *)L_0);
		int32_t L_1 = ((  int32_t (*) (Stack_1_t3923495619 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Stack_1_t3923495619 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (int32_t)L_1;
		goto IL_0012;
	}

IL_0012:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ObjectPool_1_Get_m3351668383_gshared (ObjectPool_1_t2779729376 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		Stack_1_t3923495619 * L_0 = (Stack_1_t3923495619 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t3923495619 *)L_0);
		int32_t L_1 = ((  int32_t (*) (Stack_1_t3923495619 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Stack_1_t3923495619 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (L_1)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_0 = (RuntimeObject *)L_2;
		NullCheck((ObjectPool_1_t2779729376 *)__this);
		int32_t L_3 = ((  int32_t (*) (ObjectPool_1_t2779729376 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((ObjectPool_1_t2779729376 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		NullCheck((ObjectPool_1_t2779729376 *)__this);
		((  void (*) (ObjectPool_1_t2779729376 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((ObjectPool_1_t2779729376 *)__this, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		goto IL_003a;
	}

IL_002c:
	{
		Stack_1_t3923495619 * L_4 = (Stack_1_t3923495619 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t3923495619 *)L_4);
		RuntimeObject * L_5 = ((  RuntimeObject * (*) (Stack_1_t3923495619 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Stack_1_t3923495619 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		V_0 = (RuntimeObject *)L_5;
	}

IL_003a:
	{
		UnityAction_1_t3664942305 * L_6 = (UnityAction_1_t3664942305 *)__this->get_m_ActionOnGet_1();
		if (!L_6)
		{
			goto IL_0051;
		}
	}
	{
		UnityAction_1_t3664942305 * L_7 = (UnityAction_1_t3664942305 *)__this->get_m_ActionOnGet_1();
		RuntimeObject * L_8 = V_0;
		NullCheck((UnityAction_1_t3664942305 *)L_7);
		((  void (*) (UnityAction_1_t3664942305 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((UnityAction_1_t3664942305 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
	}

IL_0051:
	{
		RuntimeObject * L_9 = V_0;
		V_1 = (RuntimeObject *)L_9;
		goto IL_0058;
	}

IL_0058:
	{
		RuntimeObject * L_10 = V_1;
		return L_10;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C" IL2CPP_METHOD_ATTR void ObjectPool_1_Release_m3263354170_gshared (ObjectPool_1_t2779729376 * __this, RuntimeObject * ___element0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectPool_1_Release_m3263354170_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stack_1_t3923495619 * L_0 = (Stack_1_t3923495619 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t3923495619 *)L_0);
		int32_t L_1 = ((  int32_t (*) (Stack_1_t3923495619 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Stack_1_t3923495619 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		Stack_1_t3923495619 * L_2 = (Stack_1_t3923495619 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t3923495619 *)L_2);
		RuntimeObject * L_3 = ((  RuntimeObject * (*) (Stack_1_t3923495619 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Stack_1_t3923495619 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		RuntimeObject * L_4 = ___element0;
		bool L_5 = il2cpp_codegen_object_reference_equals((RuntimeObject *)L_3, (RuntimeObject *)L_4);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, (RuntimeObject *)_stringLiteral46997234, /*hidden argument*/NULL);
	}

IL_003c:
	{
		UnityAction_1_t3664942305 * L_6 = (UnityAction_1_t3664942305 *)__this->get_m_ActionOnRelease_2();
		if (!L_6)
		{
			goto IL_0053;
		}
	}
	{
		UnityAction_1_t3664942305 * L_7 = (UnityAction_1_t3664942305 *)__this->get_m_ActionOnRelease_2();
		RuntimeObject * L_8 = ___element0;
		NullCheck((UnityAction_1_t3664942305 *)L_7);
		((  void (*) (UnityAction_1_t3664942305 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((UnityAction_1_t3664942305 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
	}

IL_0053:
	{
		Stack_1_t3923495619 * L_9 = (Stack_1_t3923495619 *)__this->get_m_Stack_0();
		RuntimeObject * L_10 = ___element0;
		NullCheck((Stack_1_t3923495619 *)L_9);
		((  void (*) (Stack_1_t3923495619 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((Stack_1_t3923495619 *)L_9, (RuntimeObject *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
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
// System.Void WanzyeeStudio.Json.PartialConverter`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PartialConverter_1__ctor_m809372241_gshared (PartialConverter_1_t746178589 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((JsonConverter_t1047106545 *)__this);
		JsonConverter__ctor_m2308226415((JsonConverter_t1047106545 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MemberInfo WanzyeeStudio.Json.PartialConverter`1<System.Object>::GetMember(System.String)
extern "C" IL2CPP_METHOD_ATTR MemberInfo_t * PartialConverter_1_GetMember_m1440987727_gshared (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_GetMember_m1440987727_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FieldInfo_t * V_1 = NULL;
	PropertyInfo_t * V_2 = NULL;
	{
		V_0 = (int32_t)((int32_t)20);
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___name0;
		int32_t L_3 = V_0;
		NullCheck((Type_t *)L_1);
		FieldInfo_t * L_4 = VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(49 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, (Type_t *)L_1, (String_t*)L_2, (int32_t)L_3);
		V_1 = (FieldInfo_t *)L_4;
		FieldInfo_t * L_5 = V_1;
		if (!L_5)
		{
			goto IL_001d;
		}
	}
	{
		FieldInfo_t * L_6 = V_1;
		return L_6;
	}

IL_001d:
	{
		RuntimeTypeHandle_t3027515415  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_7, /*hidden argument*/NULL);
		String_t* L_9 = ___name0;
		int32_t L_10 = V_0;
		NullCheck((Type_t *)L_8);
		PropertyInfo_t * L_11 = Type_GetProperty_m4206634422((Type_t *)L_8, (String_t*)L_9, (int32_t)L_10, /*hidden argument*/NULL);
		V_2 = (PropertyInfo_t *)L_11;
		PropertyInfo_t * L_12 = V_2;
		if (L_12)
		{
			goto IL_0040;
		}
	}
	{
		String_t* L_13 = ___name0;
		((  void (*) (RuntimeObject * /* static, unused */, String_t*, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, (String_t*)L_13, (String_t*)_stringLiteral3818767439, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_0040:
	{
		PropertyInfo_t * L_14 = V_2;
		NullCheck((PropertyInfo_t *)L_14);
		MethodInfo_t * L_15 = PropertyInfo_GetGetMethod_m1510309854((PropertyInfo_t *)L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_16 = ___name0;
		((  void (*) (RuntimeObject * /* static, unused */, String_t*, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, (String_t*)L_16, (String_t*)_stringLiteral234128521, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_0056:
	{
		PropertyInfo_t * L_17 = V_2;
		NullCheck((PropertyInfo_t *)L_17);
		MethodInfo_t * L_18 = PropertyInfo_GetSetMethod_m66158558((PropertyInfo_t *)L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_006c;
		}
	}
	{
		String_t* L_19 = ___name0;
		((  void (*) (RuntimeObject * /* static, unused */, String_t*, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, (String_t*)L_19, (String_t*)_stringLiteral3534955218, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_006c:
	{
		PropertyInfo_t * L_20 = V_2;
		NullCheck((PropertyInfo_t *)L_20);
		ParameterInfoU5BU5D_t390618515* L_21 = VirtFuncInvoker0< ParameterInfoU5BU5D_t390618515* >::Invoke(22 /* System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters() */, (PropertyInfo_t *)L_20);
		bool L_22 = Enumerable_Any_TisParameterInfo_t1861056598_m2308149110(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_21, /*hidden argument*/Enumerable_Any_TisParameterInfo_t1861056598_m2308149110_RuntimeMethod_var);
		if (!L_22)
		{
			goto IL_0087;
		}
	}
	{
		String_t* L_23 = ___name0;
		((  void (*) (RuntimeObject * /* static, unused */, String_t*, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, (String_t*)L_23, (String_t*)_stringLiteral486677601, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_0087:
	{
		PropertyInfo_t * L_24 = V_2;
		return L_24;
	}
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<System.Object>::Throw(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void PartialConverter_1_Throw_m3938742688_gshared (RuntimeObject * __this /* static, unused */, String_t* ___name0, String_t* ___format1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_Throw_m3938742688_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___format1;
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_1, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_2);
		String_t* L_4 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m3755062657(NULL /*static, unused*/, (String_t*)L_3, (String_t*)_stringLiteral3452614530, (String_t*)L_4, /*hidden argument*/NULL);
		String_t* L_6 = String_Format_m2844511972(NULL /*static, unused*/, (String_t*)L_0, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_7 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_7, (String_t*)L_6, (String_t*)_stringLiteral62725243, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, PartialConverter_1_Throw_m3938742688_RuntimeMethod_var);
	}
}
// System.Object WanzyeeStudio.Json.PartialConverter`1<System.Object>::GetValue(System.Reflection.MemberInfo,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * PartialConverter_1_GetValue_m3381299223_gshared (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___member0, RuntimeObject * ___target1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_GetValue_m3381299223_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInfo_t * L_0 = ___member0;
		if (!((FieldInfo_t *)IsInst((RuntimeObject*)L_0, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0018;
		}
	}
	{
		MemberInfo_t * L_1 = ___member0;
		RuntimeObject * L_2 = ___target1;
		NullCheck((FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		RuntimeObject * L_3 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(18 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, (FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)), (RuntimeObject *)L_2);
		return L_3;
	}

IL_0018:
	{
		MemberInfo_t * L_4 = ___member0;
		RuntimeObject * L_5 = ___target1;
		NullCheck((PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)));
		RuntimeObject * L_6 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t2843939325* >::Invoke(25 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, (PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)), (RuntimeObject *)L_5, (ObjectU5BU5D_t2843939325*)(ObjectU5BU5D_t2843939325*)NULL);
		return L_6;
	}
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<System.Object>::SetValue(System.Reflection.MemberInfo,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR void PartialConverter_1_SetValue_m2191073195_gshared (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___member0, RuntimeObject * ___target1, RuntimeObject * ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_SetValue_m2191073195_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInfo_t * L_0 = ___member0;
		if (!((FieldInfo_t *)IsInst((RuntimeObject*)L_0, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_001d;
		}
	}
	{
		MemberInfo_t * L_1 = ___member0;
		RuntimeObject * L_2 = ___target1;
		RuntimeObject * L_3 = ___value2;
		NullCheck((FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		FieldInfo_SetValue_m2460171138((FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)), (RuntimeObject *)L_2, (RuntimeObject *)L_3, /*hidden argument*/NULL);
		goto IL_002b;
	}

IL_001d:
	{
		MemberInfo_t * L_4 = ___member0;
		RuntimeObject * L_5 = ___target1;
		RuntimeObject * L_6 = ___value2;
		NullCheck((PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)));
		VirtActionInvoker3< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t2843939325* >::Invoke(27 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, (PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)), (RuntimeObject *)L_5, (RuntimeObject *)L_6, (ObjectU5BU5D_t2843939325*)(ObjectU5BU5D_t2843939325*)NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Type WanzyeeStudio.Json.PartialConverter`1<System.Object>::GetValueType(System.Reflection.MemberInfo)
extern "C" IL2CPP_METHOD_ATTR Type_t * PartialConverter_1_GetValueType_m3559925856_gshared (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___member0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_GetValueType_m3559925856_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInfo_t * L_0 = ___member0;
		if (!((FieldInfo_t *)IsInst((RuntimeObject*)L_0, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		MemberInfo_t * L_1 = ___member0;
		NullCheck((FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		Type_t * L_2 = VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, (FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		return L_2;
	}

IL_0017:
	{
		MemberInfo_t * L_3 = ___member0;
		NullCheck((PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_3, PropertyInfo_t_il2cpp_TypeInfo_var)));
		Type_t * L_4 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, (PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_3, PropertyInfo_t_il2cpp_TypeInfo_var)));
		return L_4;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1<System.Object>::GetProperties()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t3165258040 * PartialConverter_1_GetProperties_m3084396830_gshared (PartialConverter_1_t746178589 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_GetProperties_m3084396830_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t1281789340* V_0 = NULL;
	StringU5BU5D_t1281789340* G_B7_0 = NULL;
	StringU5BU5D_t1281789340* G_B6_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	Func_2_t3947292210 * G_B13_0 = NULL;
	RuntimeObject* G_B13_1 = NULL;
	Func_2_t3947292210 * G_B12_0 = NULL;
	RuntimeObject* G_B12_1 = NULL;
	{
		Dictionary_2_t3165258040 * L_0 = ((PartialConverter_1_t746178589_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get__properties_0();
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		Dictionary_2_t3165258040 * L_1 = ((PartialConverter_1_t746178589_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get__properties_0();
		return L_1;
	}

IL_0010:
	{
		NullCheck((PartialConverter_1_t746178589 *)__this);
		StringU5BU5D_t1281789340* L_2 = VirtFuncInvoker0< StringU5BU5D_t1281789340* >::Invoke(9 /* System.String[] WanzyeeStudio.Json.PartialConverter`1<System.Object>::GetPropertyNames() */, (PartialConverter_1_t746178589 *)__this);
		V_0 = (StringU5BU5D_t1281789340*)L_2;
		StringU5BU5D_t1281789340* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		StringU5BU5D_t1281789340* L_4 = V_0;
		bool L_5 = Enumerable_Any_TisString_t_m3986012742(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_4, /*hidden argument*/Enumerable_Any_TisString_t_m3986012742_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0033;
		}
	}

IL_0028:
	{
		InvalidProgramException_t3836716986 * L_6 = (InvalidProgramException_t3836716986 *)il2cpp_codegen_object_new(InvalidProgramException_t3836716986_il2cpp_TypeInfo_var);
		InvalidProgramException__ctor_m3976792134(L_6, (String_t*)_stringLiteral1148368186, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, PartialConverter_1_GetProperties_m3084396830_RuntimeMethod_var);
	}

IL_0033:
	{
		StringU5BU5D_t1281789340* L_7 = V_0;
		Func_2_t2197129486 * L_8 = ((PartialConverter_1_t746178589_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__mgU24cache0_1();
		G_B6_0 = L_7;
		if (L_8)
		{
			G_B7_0 = L_7;
			goto IL_004c;
		}
	}
	{
		intptr_t L_9 = (intptr_t)String_IsNullOrEmpty_m2969720369_RuntimeMethod_var;
		Func_2_t2197129486 * L_10 = (Func_2_t2197129486 *)il2cpp_codegen_object_new(Func_2_t2197129486_il2cpp_TypeInfo_var);
		Func_2__ctor_m4235938257(L_10, (RuntimeObject *)NULL, (intptr_t)L_9, /*hidden argument*/Func_2__ctor_m4235938257_RuntimeMethod_var);
		((PartialConverter_1_t746178589_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->set_U3CU3Ef__mgU24cache0_1(L_10);
		G_B7_0 = G_B6_0;
	}

IL_004c:
	{
		Func_2_t2197129486 * L_11 = ((PartialConverter_1_t746178589_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__mgU24cache0_1();
		bool L_12 = Enumerable_Any_TisString_t_m3256256093(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)G_B7_0, (Func_2_t2197129486 *)L_11, /*hidden argument*/Enumerable_Any_TisString_t_m3256256093_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_0066;
		}
	}
	{
		InvalidProgramException_t3836716986 * L_13 = (InvalidProgramException_t3836716986 *)il2cpp_codegen_object_new(InvalidProgramException_t3836716986_il2cpp_TypeInfo_var);
		InvalidProgramException__ctor_m3976792134(L_13, (String_t*)_stringLiteral3827062036, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, NULL, PartialConverter_1_GetProperties_m3084396830_RuntimeMethod_var);
	}

IL_0066:
	{
		StringU5BU5D_t1281789340* L_14 = V_0;
		RuntimeObject* L_15 = Enumerable_Distinct_TisString_t_m564215000(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_14, /*hidden argument*/Enumerable_Distinct_TisString_t_m564215000_RuntimeMethod_var);
		Func_2_t3947292210 * L_16 = ((PartialConverter_1_t746178589_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__amU24cache0_3();
		G_B10_0 = L_15;
		if (L_16)
		{
			G_B11_0 = L_15;
			goto IL_0084;
		}
	}
	{
		intptr_t L_17 = (intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4);
		Func_2_t3947292210 * L_18 = (Func_2_t3947292210 *)il2cpp_codegen_object_new(Func_2_t3947292210_il2cpp_TypeInfo_var);
		Func_2__ctor_m1878178629(L_18, (RuntimeObject *)NULL, (intptr_t)L_17, /*hidden argument*/Func_2__ctor_m1878178629_RuntimeMethod_var);
		((PartialConverter_1_t746178589_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->set_U3CU3Ef__amU24cache0_3(L_18);
		G_B11_0 = G_B10_0;
	}

IL_0084:
	{
		Func_2_t3947292210 * L_19 = ((PartialConverter_1_t746178589_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__amU24cache0_3();
		Func_2_t1184875966 * L_20 = ((PartialConverter_1_t746178589_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__mgU24cache1_2();
		G_B12_0 = L_19;
		G_B12_1 = G_B11_0;
		if (L_20)
		{
			G_B13_0 = L_19;
			G_B13_1 = G_B11_0;
			goto IL_00a1;
		}
	}
	{
		intptr_t L_21 = (intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5);
		Func_2_t1184875966 * L_22 = (Func_2_t1184875966 *)il2cpp_codegen_object_new(Func_2_t1184875966_il2cpp_TypeInfo_var);
		Func_2__ctor_m1082416029(L_22, (RuntimeObject *)NULL, (intptr_t)L_21, /*hidden argument*/Func_2__ctor_m1082416029_RuntimeMethod_var);
		((PartialConverter_1_t746178589_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->set_U3CU3Ef__mgU24cache1_2(L_22);
		G_B13_0 = G_B12_0;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		Func_2_t1184875966 * L_23 = ((PartialConverter_1_t746178589_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__mgU24cache1_2();
		Dictionary_2_t3165258040 * L_24 = Enumerable_ToDictionary_TisString_t_TisString_t_TisMemberInfo_t_m2153618120(NULL /*static, unused*/, (RuntimeObject*)G_B13_1, (Func_2_t3947292210 *)G_B13_0, (Func_2_t1184875966 *)L_23, /*hidden argument*/Enumerable_ToDictionary_TisString_t_TisString_t_TisMemberInfo_t_m2153618120_RuntimeMethod_var);
		((PartialConverter_1_t746178589_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->set__properties_0(L_24);
		Dictionary_2_t3165258040 * L_25 = ((PartialConverter_1_t746178589_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get__properties_0();
		return L_25;
	}
}
// T WanzyeeStudio.Json.PartialConverter`1<System.Object>::CreateInstance()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * PartialConverter_1_CreateInstance_m490609469_gshared (PartialConverter_1_t746178589 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		return L_0;
	}
}
// System.Boolean WanzyeeStudio.Json.PartialConverter`1<System.Object>::CanConvert(System.Type)
extern "C" IL2CPP_METHOD_ATTR bool PartialConverter_1_CanConvert_m1658730869_gshared (PartialConverter_1_t746178589 * __this, Type_t * ___objectType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_CanConvert_m1658730869_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		Type_t * L_2 = ___objectType0;
		return (bool)((((RuntimeObject*)(Type_t *)L_1) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
	}
}
// System.Object WanzyeeStudio.Json.PartialConverter`1<System.Object>::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * PartialConverter_1_ReadJson_m1118020979_gshared (PartialConverter_1_t746178589 * __this, JsonReader_t2369136700 * ___reader0, Type_t * ___objectType1, RuntimeObject * ___existingValue2, JsonSerializer_t1424496335 * ___serializer3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_ReadJson_m1118020979_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JObject_t2059125928 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	KeyValuePair_2_t1267962911  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Enumerator_t824473519  V_3;
	memset(&V_3, 0, sizeof(V_3));
	RuntimeObject * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		JsonReader_t2369136700 * L_0 = ___reader0;
		NullCheck((JsonReader_t2369136700 *)L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(5 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, (JsonReader_t2369136700 *)L_0);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_000f;
		}
	}
	{
		return NULL;
	}

IL_000f:
	{
		JsonReader_t2369136700 * L_2 = ___reader0;
		JObject_t2059125928 * L_3 = JObject_Load_m3922106929(NULL /*static, unused*/, (JsonReader_t2369136700 *)L_2, /*hidden argument*/NULL);
		V_0 = (JObject_t2059125928 *)L_3;
		NullCheck((PartialConverter_1_t746178589 *)__this);
		RuntimeObject * L_4 = VirtFuncInvoker0< RuntimeObject * >::Invoke(10 /* T WanzyeeStudio.Json.PartialConverter`1<System.Object>::CreateInstance() */, (PartialConverter_1_t746178589 *)__this);
		V_1 = (RuntimeObject *)L_4;
		NullCheck((PartialConverter_1_t746178589 *)__this);
		Dictionary_2_t3165258040 * L_5 = ((  Dictionary_2_t3165258040 * (*) (PartialConverter_1_t746178589 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((PartialConverter_1_t746178589 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		NullCheck((Dictionary_2_t3165258040 *)L_5);
		Enumerator_t824473519  L_6 = Dictionary_2_GetEnumerator_m4199775080((Dictionary_2_t3165258040 *)L_5, /*hidden argument*/Dictionary_2_GetEnumerator_m4199775080_RuntimeMethod_var);
		V_3 = (Enumerator_t824473519 )L_6;
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006c;
		}

IL_0033:
		{
			KeyValuePair_2_t1267962911  L_7 = Enumerator_get_Current_m841967122((Enumerator_t824473519 *)(Enumerator_t824473519 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m841967122_RuntimeMethod_var);
			V_2 = (KeyValuePair_2_t1267962911 )L_7;
			JObject_t2059125928 * L_8 = V_0;
			String_t* L_9 = KeyValuePair_2_get_Key_m221608719((KeyValuePair_2_t1267962911 *)(KeyValuePair_2_t1267962911 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Key_m221608719_RuntimeMethod_var);
			NullCheck((JObject_t2059125928 *)L_8);
			JToken_t1038539247 * L_10 = JObject_get_Item_m332585514((JObject_t2059125928 *)L_8, (String_t*)L_9, /*hidden argument*/NULL);
			MemberInfo_t * L_11 = KeyValuePair_2_get_Value_m188113207((KeyValuePair_2_t1267962911 *)(KeyValuePair_2_t1267962911 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m188113207_RuntimeMethod_var);
			Type_t * L_12 = ((  Type_t * (*) (RuntimeObject * /* static, unused */, MemberInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(NULL /*static, unused*/, (MemberInfo_t *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
			JsonSerializer_t1424496335 * L_13 = ___serializer3;
			NullCheck((JToken_t1038539247 *)L_10);
			RuntimeObject * L_14 = JToken_ToObject_m1717874774((JToken_t1038539247 *)L_10, (Type_t *)L_12, (JsonSerializer_t1424496335 *)L_13, /*hidden argument*/NULL);
			V_4 = (RuntimeObject *)L_14;
			MemberInfo_t * L_15 = KeyValuePair_2_get_Value_m188113207((KeyValuePair_2_t1267962911 *)(KeyValuePair_2_t1267962911 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m188113207_RuntimeMethod_var);
			RuntimeObject * L_16 = V_1;
			RuntimeObject * L_17 = V_4;
			((  void (*) (RuntimeObject * /* static, unused */, MemberInfo_t *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(NULL /*static, unused*/, (MemberInfo_t *)L_15, (RuntimeObject *)L_16, (RuntimeObject *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		}

IL_006c:
		{
			bool L_18 = Enumerator_MoveNext_m79352559((Enumerator_t824473519 *)(Enumerator_t824473519 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m79352559_RuntimeMethod_var);
			if (L_18)
			{
				goto IL_0033;
			}
		}

IL_0078:
		{
			IL2CPP_LEAVE(0x8B, FINALLY_007d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007d;
	}

FINALLY_007d:
	{ // begin finally (depth: 1)
		Il2CppFakeBox<Enumerator_t824473519 > L_19(Enumerator_t824473519_il2cpp_TypeInfo_var, (&V_3));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__133 = il2cpp_codegen_get_interface_invoke_data(0, &L_19, IDisposable_t3640265483_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__133.methodPtr)((RuntimeObject*)(&L_19), /*hidden argument*/il2cpp_virtual_invoke_data__133.method);
		V_3 = L_19.m_Value;
		IL2CPP_END_FINALLY(125)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(125)
	{
		IL2CPP_JUMP_TBL(0x8B, IL_008b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_008b:
	{
		RuntimeObject * L_20 = V_1;
		return L_20;
	}
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<System.Object>::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C" IL2CPP_METHOD_ATTR void PartialConverter_1_WriteJson_m3924695376_gshared (PartialConverter_1_t746178589 * __this, JsonWriter_t1467272295 * ___writer0, RuntimeObject * ___value1, JsonSerializer_t1424496335 * ___serializer2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_WriteJson_m3924695376_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JObject_t2059125928 * V_0 = NULL;
	KeyValuePair_2_t1267962911  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Enumerator_t824473519  V_2;
	memset(&V_2, 0, sizeof(V_2));
	RuntimeObject * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		JObject_t2059125928 * L_0 = (JObject_t2059125928 *)il2cpp_codegen_object_new(JObject_t2059125928_il2cpp_TypeInfo_var);
		JObject__ctor_m1738103074(L_0, /*hidden argument*/NULL);
		V_0 = (JObject_t2059125928 *)L_0;
		NullCheck((PartialConverter_1_t746178589 *)__this);
		Dictionary_2_t3165258040 * L_1 = ((  Dictionary_2_t3165258040 * (*) (PartialConverter_1_t746178589 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((PartialConverter_1_t746178589 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		NullCheck((Dictionary_2_t3165258040 *)L_1);
		Enumerator_t824473519  L_2 = Dictionary_2_GetEnumerator_m4199775080((Dictionary_2_t3165258040 *)L_1, /*hidden argument*/Dictionary_2_GetEnumerator_m4199775080_RuntimeMethod_var);
		V_2 = (Enumerator_t824473519 )L_2;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0041;
		}

IL_0017:
		{
			KeyValuePair_2_t1267962911  L_3 = Enumerator_get_Current_m841967122((Enumerator_t824473519 *)(Enumerator_t824473519 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m841967122_RuntimeMethod_var);
			V_1 = (KeyValuePair_2_t1267962911 )L_3;
			MemberInfo_t * L_4 = KeyValuePair_2_get_Value_m188113207((KeyValuePair_2_t1267962911 *)(KeyValuePair_2_t1267962911 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m188113207_RuntimeMethod_var);
			RuntimeObject * L_5 = ___value1;
			RuntimeObject * L_6 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, MemberInfo_t *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)(NULL /*static, unused*/, (MemberInfo_t *)L_4, (RuntimeObject *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
			V_3 = (RuntimeObject *)L_6;
			JObject_t2059125928 * L_7 = V_0;
			String_t* L_8 = KeyValuePair_2_get_Key_m221608719((KeyValuePair_2_t1267962911 *)(KeyValuePair_2_t1267962911 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m221608719_RuntimeMethod_var);
			RuntimeObject * L_9 = V_3;
			JsonSerializer_t1424496335 * L_10 = ___serializer2;
			IL2CPP_RUNTIME_CLASS_INIT(JToken_t1038539247_il2cpp_TypeInfo_var);
			JToken_t1038539247 * L_11 = JToken_FromObject_m1495845376(NULL /*static, unused*/, (RuntimeObject *)L_9, (JsonSerializer_t1424496335 *)L_10, /*hidden argument*/NULL);
			NullCheck((JObject_t2059125928 *)L_7);
			JObject_set_Item_m3337384077((JObject_t2059125928 *)L_7, (String_t*)L_8, (JToken_t1038539247 *)L_11, /*hidden argument*/NULL);
		}

IL_0041:
		{
			bool L_12 = Enumerator_MoveNext_m79352559((Enumerator_t824473519 *)(Enumerator_t824473519 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m79352559_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0017;
			}
		}

IL_004d:
		{
			IL2CPP_LEAVE(0x60, FINALLY_0052);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		Il2CppFakeBox<Enumerator_t824473519 > L_13(Enumerator_t824473519_il2cpp_TypeInfo_var, (&V_2));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__90 = il2cpp_codegen_get_interface_invoke_data(0, &L_13, IDisposable_t3640265483_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__90.methodPtr)((RuntimeObject*)(&L_13), /*hidden argument*/il2cpp_virtual_invoke_data__90.method);
		V_2 = L_13.m_Value;
		IL2CPP_END_FINALLY(82)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_JUMP_TBL(0x60, IL_0060)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0060:
	{
		JObject_t2059125928 * L_14 = V_0;
		JsonWriter_t1467272295 * L_15 = ___writer0;
		JsonConverterU5BU5D_t155849004* L_16 = (JsonConverterU5BU5D_t155849004*)SZArrayNew(JsonConverterU5BU5D_t155849004_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck((JToken_t1038539247 *)L_14);
		VirtActionInvoker2< JsonWriter_t1467272295 *, JsonConverterU5BU5D_t155849004* >::Invoke(18 /* System.Void Newtonsoft.Json.Linq.JToken::WriteTo(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.JsonConverter[]) */, (JToken_t1038539247 *)L_14, (JsonWriter_t1467272295 *)L_15, (JsonConverterU5BU5D_t155849004*)L_16);
		return;
	}
}
// System.String WanzyeeStudio.Json.PartialConverter`1<System.Object>::<GetProperties>m__0(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* PartialConverter_1_U3CGetPropertiesU3Em__0_m2866383162_gshared (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
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
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Bounds>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PartialConverter_1__ctor_m3005298570_gshared (PartialConverter_1_t4227877631 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((JsonConverter_t1047106545 *)__this);
		JsonConverter__ctor_m2308226415((JsonConverter_t1047106545 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MemberInfo WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Bounds>::GetMember(System.String)
extern "C" IL2CPP_METHOD_ATTR MemberInfo_t * PartialConverter_1_GetMember_m3397309316_gshared (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_GetMember_m3397309316_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FieldInfo_t * V_1 = NULL;
	PropertyInfo_t * V_2 = NULL;
	{
		V_0 = (int32_t)((int32_t)20);
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___name0;
		int32_t L_3 = V_0;
		NullCheck((Type_t *)L_1);
		FieldInfo_t * L_4 = VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(49 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, (Type_t *)L_1, (String_t*)L_2, (int32_t)L_3);
		V_1 = (FieldInfo_t *)L_4;
		FieldInfo_t * L_5 = V_1;
		if (!L_5)
		{
			goto IL_001d;
		}
	}
	{
		FieldInfo_t * L_6 = V_1;
		return L_6;
	}

IL_001d:
	{
		RuntimeTypeHandle_t3027515415  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_7, /*hidden argument*/NULL);
		String_t* L_9 = ___name0;
		int32_t L_10 = V_0;
		NullCheck((Type_t *)L_8);
		PropertyInfo_t * L_11 = Type_GetProperty_m4206634422((Type_t *)L_8, (String_t*)L_9, (int32_t)L_10, /*hidden argument*/NULL);
		V_2 = (PropertyInfo_t *)L_11;
		PropertyInfo_t * L_12 = V_2;
		if (L_12)
		{
			goto IL_0040;
		}
	}
	{
		String_t* L_13 = ___name0;
		((  void (*) (RuntimeObject * /* static, unused */, String_t*, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, (String_t*)L_13, (String_t*)_stringLiteral3818767439, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_0040:
	{
		PropertyInfo_t * L_14 = V_2;
		NullCheck((PropertyInfo_t *)L_14);
		MethodInfo_t * L_15 = PropertyInfo_GetGetMethod_m1510309854((PropertyInfo_t *)L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_16 = ___name0;
		((  void (*) (RuntimeObject * /* static, unused */, String_t*, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, (String_t*)L_16, (String_t*)_stringLiteral234128521, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_0056:
	{
		PropertyInfo_t * L_17 = V_2;
		NullCheck((PropertyInfo_t *)L_17);
		MethodInfo_t * L_18 = PropertyInfo_GetSetMethod_m66158558((PropertyInfo_t *)L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_006c;
		}
	}
	{
		String_t* L_19 = ___name0;
		((  void (*) (RuntimeObject * /* static, unused */, String_t*, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, (String_t*)L_19, (String_t*)_stringLiteral3534955218, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_006c:
	{
		PropertyInfo_t * L_20 = V_2;
		NullCheck((PropertyInfo_t *)L_20);
		ParameterInfoU5BU5D_t390618515* L_21 = VirtFuncInvoker0< ParameterInfoU5BU5D_t390618515* >::Invoke(22 /* System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters() */, (PropertyInfo_t *)L_20);
		bool L_22 = Enumerable_Any_TisParameterInfo_t1861056598_m2308149110(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_21, /*hidden argument*/Enumerable_Any_TisParameterInfo_t1861056598_m2308149110_RuntimeMethod_var);
		if (!L_22)
		{
			goto IL_0087;
		}
	}
	{
		String_t* L_23 = ___name0;
		((  void (*) (RuntimeObject * /* static, unused */, String_t*, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, (String_t*)L_23, (String_t*)_stringLiteral486677601, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_0087:
	{
		PropertyInfo_t * L_24 = V_2;
		return L_24;
	}
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Bounds>::Throw(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void PartialConverter_1_Throw_m2682608100_gshared (RuntimeObject * __this /* static, unused */, String_t* ___name0, String_t* ___format1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_Throw_m2682608100_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___format1;
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_1, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_2);
		String_t* L_4 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m3755062657(NULL /*static, unused*/, (String_t*)L_3, (String_t*)_stringLiteral3452614530, (String_t*)L_4, /*hidden argument*/NULL);
		String_t* L_6 = String_Format_m2844511972(NULL /*static, unused*/, (String_t*)L_0, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_7 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_7, (String_t*)L_6, (String_t*)_stringLiteral62725243, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, PartialConverter_1_Throw_m2682608100_RuntimeMethod_var);
	}
}
// System.Object WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Bounds>::GetValue(System.Reflection.MemberInfo,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * PartialConverter_1_GetValue_m227917407_gshared (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___member0, RuntimeObject * ___target1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_GetValue_m227917407_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInfo_t * L_0 = ___member0;
		if (!((FieldInfo_t *)IsInst((RuntimeObject*)L_0, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0018;
		}
	}
	{
		MemberInfo_t * L_1 = ___member0;
		RuntimeObject * L_2 = ___target1;
		NullCheck((FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		RuntimeObject * L_3 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(18 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, (FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)), (RuntimeObject *)L_2);
		return L_3;
	}

IL_0018:
	{
		MemberInfo_t * L_4 = ___member0;
		RuntimeObject * L_5 = ___target1;
		NullCheck((PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)));
		RuntimeObject * L_6 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t2843939325* >::Invoke(25 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, (PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)), (RuntimeObject *)L_5, (ObjectU5BU5D_t2843939325*)(ObjectU5BU5D_t2843939325*)NULL);
		return L_6;
	}
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Bounds>::SetValue(System.Reflection.MemberInfo,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR void PartialConverter_1_SetValue_m3779109062_gshared (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___member0, RuntimeObject * ___target1, RuntimeObject * ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_SetValue_m3779109062_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInfo_t * L_0 = ___member0;
		if (!((FieldInfo_t *)IsInst((RuntimeObject*)L_0, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_001d;
		}
	}
	{
		MemberInfo_t * L_1 = ___member0;
		RuntimeObject * L_2 = ___target1;
		RuntimeObject * L_3 = ___value2;
		NullCheck((FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		FieldInfo_SetValue_m2460171138((FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)), (RuntimeObject *)L_2, (RuntimeObject *)L_3, /*hidden argument*/NULL);
		goto IL_002b;
	}

IL_001d:
	{
		MemberInfo_t * L_4 = ___member0;
		RuntimeObject * L_5 = ___target1;
		RuntimeObject * L_6 = ___value2;
		NullCheck((PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)));
		VirtActionInvoker3< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t2843939325* >::Invoke(27 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, (PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)), (RuntimeObject *)L_5, (RuntimeObject *)L_6, (ObjectU5BU5D_t2843939325*)(ObjectU5BU5D_t2843939325*)NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Type WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Bounds>::GetValueType(System.Reflection.MemberInfo)
extern "C" IL2CPP_METHOD_ATTR Type_t * PartialConverter_1_GetValueType_m167545522_gshared (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___member0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_GetValueType_m167545522_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInfo_t * L_0 = ___member0;
		if (!((FieldInfo_t *)IsInst((RuntimeObject*)L_0, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		MemberInfo_t * L_1 = ___member0;
		NullCheck((FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		Type_t * L_2 = VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, (FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		return L_2;
	}

IL_0017:
	{
		MemberInfo_t * L_3 = ___member0;
		NullCheck((PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_3, PropertyInfo_t_il2cpp_TypeInfo_var)));
		Type_t * L_4 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, (PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_3, PropertyInfo_t_il2cpp_TypeInfo_var)));
		return L_4;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Bounds>::GetProperties()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t3165258040 * PartialConverter_1_GetProperties_m114468801_gshared (PartialConverter_1_t4227877631 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_GetProperties_m114468801_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t1281789340* V_0 = NULL;
	StringU5BU5D_t1281789340* G_B7_0 = NULL;
	StringU5BU5D_t1281789340* G_B6_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	Func_2_t3947292210 * G_B13_0 = NULL;
	RuntimeObject* G_B13_1 = NULL;
	Func_2_t3947292210 * G_B12_0 = NULL;
	RuntimeObject* G_B12_1 = NULL;
	{
		Dictionary_2_t3165258040 * L_0 = ((PartialConverter_1_t4227877631_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get__properties_0();
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		Dictionary_2_t3165258040 * L_1 = ((PartialConverter_1_t4227877631_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get__properties_0();
		return L_1;
	}

IL_0010:
	{
		NullCheck((PartialConverter_1_t4227877631 *)__this);
		StringU5BU5D_t1281789340* L_2 = VirtFuncInvoker0< StringU5BU5D_t1281789340* >::Invoke(9 /* System.String[] WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Bounds>::GetPropertyNames() */, (PartialConverter_1_t4227877631 *)__this);
		V_0 = (StringU5BU5D_t1281789340*)L_2;
		StringU5BU5D_t1281789340* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		StringU5BU5D_t1281789340* L_4 = V_0;
		bool L_5 = Enumerable_Any_TisString_t_m3986012742(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_4, /*hidden argument*/Enumerable_Any_TisString_t_m3986012742_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0033;
		}
	}

IL_0028:
	{
		InvalidProgramException_t3836716986 * L_6 = (InvalidProgramException_t3836716986 *)il2cpp_codegen_object_new(InvalidProgramException_t3836716986_il2cpp_TypeInfo_var);
		InvalidProgramException__ctor_m3976792134(L_6, (String_t*)_stringLiteral1148368186, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, PartialConverter_1_GetProperties_m114468801_RuntimeMethod_var);
	}

IL_0033:
	{
		StringU5BU5D_t1281789340* L_7 = V_0;
		Func_2_t2197129486 * L_8 = ((PartialConverter_1_t4227877631_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__mgU24cache0_1();
		G_B6_0 = L_7;
		if (L_8)
		{
			G_B7_0 = L_7;
			goto IL_004c;
		}
	}
	{
		intptr_t L_9 = (intptr_t)String_IsNullOrEmpty_m2969720369_RuntimeMethod_var;
		Func_2_t2197129486 * L_10 = (Func_2_t2197129486 *)il2cpp_codegen_object_new(Func_2_t2197129486_il2cpp_TypeInfo_var);
		Func_2__ctor_m4235938257(L_10, (RuntimeObject *)NULL, (intptr_t)L_9, /*hidden argument*/Func_2__ctor_m4235938257_RuntimeMethod_var);
		((PartialConverter_1_t4227877631_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->set_U3CU3Ef__mgU24cache0_1(L_10);
		G_B7_0 = G_B6_0;
	}

IL_004c:
	{
		Func_2_t2197129486 * L_11 = ((PartialConverter_1_t4227877631_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__mgU24cache0_1();
		bool L_12 = Enumerable_Any_TisString_t_m3256256093(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)G_B7_0, (Func_2_t2197129486 *)L_11, /*hidden argument*/Enumerable_Any_TisString_t_m3256256093_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_0066;
		}
	}
	{
		InvalidProgramException_t3836716986 * L_13 = (InvalidProgramException_t3836716986 *)il2cpp_codegen_object_new(InvalidProgramException_t3836716986_il2cpp_TypeInfo_var);
		InvalidProgramException__ctor_m3976792134(L_13, (String_t*)_stringLiteral3827062036, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, NULL, PartialConverter_1_GetProperties_m114468801_RuntimeMethod_var);
	}

IL_0066:
	{
		StringU5BU5D_t1281789340* L_14 = V_0;
		RuntimeObject* L_15 = Enumerable_Distinct_TisString_t_m564215000(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_14, /*hidden argument*/Enumerable_Distinct_TisString_t_m564215000_RuntimeMethod_var);
		Func_2_t3947292210 * L_16 = ((PartialConverter_1_t4227877631_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__amU24cache0_3();
		G_B10_0 = L_15;
		if (L_16)
		{
			G_B11_0 = L_15;
			goto IL_0084;
		}
	}
	{
		intptr_t L_17 = (intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4);
		Func_2_t3947292210 * L_18 = (Func_2_t3947292210 *)il2cpp_codegen_object_new(Func_2_t3947292210_il2cpp_TypeInfo_var);
		Func_2__ctor_m1878178629(L_18, (RuntimeObject *)NULL, (intptr_t)L_17, /*hidden argument*/Func_2__ctor_m1878178629_RuntimeMethod_var);
		((PartialConverter_1_t4227877631_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->set_U3CU3Ef__amU24cache0_3(L_18);
		G_B11_0 = G_B10_0;
	}

IL_0084:
	{
		Func_2_t3947292210 * L_19 = ((PartialConverter_1_t4227877631_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__amU24cache0_3();
		Func_2_t1184875966 * L_20 = ((PartialConverter_1_t4227877631_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__mgU24cache1_2();
		G_B12_0 = L_19;
		G_B12_1 = G_B11_0;
		if (L_20)
		{
			G_B13_0 = L_19;
			G_B13_1 = G_B11_0;
			goto IL_00a1;
		}
	}
	{
		intptr_t L_21 = (intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5);
		Func_2_t1184875966 * L_22 = (Func_2_t1184875966 *)il2cpp_codegen_object_new(Func_2_t1184875966_il2cpp_TypeInfo_var);
		Func_2__ctor_m1082416029(L_22, (RuntimeObject *)NULL, (intptr_t)L_21, /*hidden argument*/Func_2__ctor_m1082416029_RuntimeMethod_var);
		((PartialConverter_1_t4227877631_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->set_U3CU3Ef__mgU24cache1_2(L_22);
		G_B13_0 = G_B12_0;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		Func_2_t1184875966 * L_23 = ((PartialConverter_1_t4227877631_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__mgU24cache1_2();
		Dictionary_2_t3165258040 * L_24 = Enumerable_ToDictionary_TisString_t_TisString_t_TisMemberInfo_t_m2153618120(NULL /*static, unused*/, (RuntimeObject*)G_B13_1, (Func_2_t3947292210 *)G_B13_0, (Func_2_t1184875966 *)L_23, /*hidden argument*/Enumerable_ToDictionary_TisString_t_TisString_t_TisMemberInfo_t_m2153618120_RuntimeMethod_var);
		((PartialConverter_1_t4227877631_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->set__properties_0(L_24);
		Dictionary_2_t3165258040 * L_25 = ((PartialConverter_1_t4227877631_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get__properties_0();
		return L_25;
	}
}
// T WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Bounds>::CreateInstance()
extern "C" IL2CPP_METHOD_ATTR Bounds_t2266837910  PartialConverter_1_CreateInstance_m4164148351_gshared (PartialConverter_1_t4227877631 * __this, const RuntimeMethod* method)
{
	{
		Bounds_t2266837910  L_0 = ((  Bounds_t2266837910  (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		return L_0;
	}
}
// System.Boolean WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Bounds>::CanConvert(System.Type)
extern "C" IL2CPP_METHOD_ATTR bool PartialConverter_1_CanConvert_m668578828_gshared (PartialConverter_1_t4227877631 * __this, Type_t * ___objectType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_CanConvert_m668578828_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		Type_t * L_2 = ___objectType0;
		return (bool)((((RuntimeObject*)(Type_t *)L_1) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
	}
}
// System.Object WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Bounds>::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * PartialConverter_1_ReadJson_m3612116199_gshared (PartialConverter_1_t4227877631 * __this, JsonReader_t2369136700 * ___reader0, Type_t * ___objectType1, RuntimeObject * ___existingValue2, JsonSerializer_t1424496335 * ___serializer3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_ReadJson_m3612116199_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JObject_t2059125928 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	KeyValuePair_2_t1267962911  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Enumerator_t824473519  V_3;
	memset(&V_3, 0, sizeof(V_3));
	RuntimeObject * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		JsonReader_t2369136700 * L_0 = ___reader0;
		NullCheck((JsonReader_t2369136700 *)L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(5 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, (JsonReader_t2369136700 *)L_0);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_000f;
		}
	}
	{
		return NULL;
	}

IL_000f:
	{
		JsonReader_t2369136700 * L_2 = ___reader0;
		JObject_t2059125928 * L_3 = JObject_Load_m3922106929(NULL /*static, unused*/, (JsonReader_t2369136700 *)L_2, /*hidden argument*/NULL);
		V_0 = (JObject_t2059125928 *)L_3;
		NullCheck((PartialConverter_1_t4227877631 *)__this);
		Bounds_t2266837910  L_4 = VirtFuncInvoker0< Bounds_t2266837910  >::Invoke(10 /* T WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Bounds>::CreateInstance() */, (PartialConverter_1_t4227877631 *)__this);
		Bounds_t2266837910  L_5 = L_4;
		RuntimeObject * L_6 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8), &L_5);
		V_1 = (RuntimeObject *)L_6;
		NullCheck((PartialConverter_1_t4227877631 *)__this);
		Dictionary_2_t3165258040 * L_7 = ((  Dictionary_2_t3165258040 * (*) (PartialConverter_1_t4227877631 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((PartialConverter_1_t4227877631 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		NullCheck((Dictionary_2_t3165258040 *)L_7);
		Enumerator_t824473519  L_8 = Dictionary_2_GetEnumerator_m4199775080((Dictionary_2_t3165258040 *)L_7, /*hidden argument*/Dictionary_2_GetEnumerator_m4199775080_RuntimeMethod_var);
		V_3 = (Enumerator_t824473519 )L_8;
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006c;
		}

IL_0033:
		{
			KeyValuePair_2_t1267962911  L_9 = Enumerator_get_Current_m841967122((Enumerator_t824473519 *)(Enumerator_t824473519 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m841967122_RuntimeMethod_var);
			V_2 = (KeyValuePair_2_t1267962911 )L_9;
			JObject_t2059125928 * L_10 = V_0;
			String_t* L_11 = KeyValuePair_2_get_Key_m221608719((KeyValuePair_2_t1267962911 *)(KeyValuePair_2_t1267962911 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Key_m221608719_RuntimeMethod_var);
			NullCheck((JObject_t2059125928 *)L_10);
			JToken_t1038539247 * L_12 = JObject_get_Item_m332585514((JObject_t2059125928 *)L_10, (String_t*)L_11, /*hidden argument*/NULL);
			MemberInfo_t * L_13 = KeyValuePair_2_get_Value_m188113207((KeyValuePair_2_t1267962911 *)(KeyValuePair_2_t1267962911 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m188113207_RuntimeMethod_var);
			Type_t * L_14 = ((  Type_t * (*) (RuntimeObject * /* static, unused */, MemberInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(NULL /*static, unused*/, (MemberInfo_t *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
			JsonSerializer_t1424496335 * L_15 = ___serializer3;
			NullCheck((JToken_t1038539247 *)L_12);
			RuntimeObject * L_16 = JToken_ToObject_m1717874774((JToken_t1038539247 *)L_12, (Type_t *)L_14, (JsonSerializer_t1424496335 *)L_15, /*hidden argument*/NULL);
			V_4 = (RuntimeObject *)L_16;
			MemberInfo_t * L_17 = KeyValuePair_2_get_Value_m188113207((KeyValuePair_2_t1267962911 *)(KeyValuePair_2_t1267962911 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m188113207_RuntimeMethod_var);
			RuntimeObject * L_18 = V_1;
			RuntimeObject * L_19 = V_4;
			((  void (*) (RuntimeObject * /* static, unused */, MemberInfo_t *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(NULL /*static, unused*/, (MemberInfo_t *)L_17, (RuntimeObject *)L_18, (RuntimeObject *)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		}

IL_006c:
		{
			bool L_20 = Enumerator_MoveNext_m79352559((Enumerator_t824473519 *)(Enumerator_t824473519 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m79352559_RuntimeMethod_var);
			if (L_20)
			{
				goto IL_0033;
			}
		}

IL_0078:
		{
			IL2CPP_LEAVE(0x8B, FINALLY_007d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007d;
	}

FINALLY_007d:
	{ // begin finally (depth: 1)
		Il2CppFakeBox<Enumerator_t824473519 > L_21(Enumerator_t824473519_il2cpp_TypeInfo_var, (&V_3));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__133 = il2cpp_codegen_get_interface_invoke_data(0, &L_21, IDisposable_t3640265483_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__133.methodPtr)((RuntimeObject*)(&L_21), /*hidden argument*/il2cpp_virtual_invoke_data__133.method);
		V_3 = L_21.m_Value;
		IL2CPP_END_FINALLY(125)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(125)
	{
		IL2CPP_JUMP_TBL(0x8B, IL_008b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_008b:
	{
		RuntimeObject * L_22 = V_1;
		return L_22;
	}
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Bounds>::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C" IL2CPP_METHOD_ATTR void PartialConverter_1_WriteJson_m3997364603_gshared (PartialConverter_1_t4227877631 * __this, JsonWriter_t1467272295 * ___writer0, RuntimeObject * ___value1, JsonSerializer_t1424496335 * ___serializer2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_WriteJson_m3997364603_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JObject_t2059125928 * V_0 = NULL;
	KeyValuePair_2_t1267962911  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Enumerator_t824473519  V_2;
	memset(&V_2, 0, sizeof(V_2));
	RuntimeObject * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		JObject_t2059125928 * L_0 = (JObject_t2059125928 *)il2cpp_codegen_object_new(JObject_t2059125928_il2cpp_TypeInfo_var);
		JObject__ctor_m1738103074(L_0, /*hidden argument*/NULL);
		V_0 = (JObject_t2059125928 *)L_0;
		NullCheck((PartialConverter_1_t4227877631 *)__this);
		Dictionary_2_t3165258040 * L_1 = ((  Dictionary_2_t3165258040 * (*) (PartialConverter_1_t4227877631 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((PartialConverter_1_t4227877631 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		NullCheck((Dictionary_2_t3165258040 *)L_1);
		Enumerator_t824473519  L_2 = Dictionary_2_GetEnumerator_m4199775080((Dictionary_2_t3165258040 *)L_1, /*hidden argument*/Dictionary_2_GetEnumerator_m4199775080_RuntimeMethod_var);
		V_2 = (Enumerator_t824473519 )L_2;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0041;
		}

IL_0017:
		{
			KeyValuePair_2_t1267962911  L_3 = Enumerator_get_Current_m841967122((Enumerator_t824473519 *)(Enumerator_t824473519 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m841967122_RuntimeMethod_var);
			V_1 = (KeyValuePair_2_t1267962911 )L_3;
			MemberInfo_t * L_4 = KeyValuePair_2_get_Value_m188113207((KeyValuePair_2_t1267962911 *)(KeyValuePair_2_t1267962911 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m188113207_RuntimeMethod_var);
			RuntimeObject * L_5 = ___value1;
			RuntimeObject * L_6 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, MemberInfo_t *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)(NULL /*static, unused*/, (MemberInfo_t *)L_4, (RuntimeObject *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
			V_3 = (RuntimeObject *)L_6;
			JObject_t2059125928 * L_7 = V_0;
			String_t* L_8 = KeyValuePair_2_get_Key_m221608719((KeyValuePair_2_t1267962911 *)(KeyValuePair_2_t1267962911 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m221608719_RuntimeMethod_var);
			RuntimeObject * L_9 = V_3;
			JsonSerializer_t1424496335 * L_10 = ___serializer2;
			IL2CPP_RUNTIME_CLASS_INIT(JToken_t1038539247_il2cpp_TypeInfo_var);
			JToken_t1038539247 * L_11 = JToken_FromObject_m1495845376(NULL /*static, unused*/, (RuntimeObject *)L_9, (JsonSerializer_t1424496335 *)L_10, /*hidden argument*/NULL);
			NullCheck((JObject_t2059125928 *)L_7);
			JObject_set_Item_m3337384077((JObject_t2059125928 *)L_7, (String_t*)L_8, (JToken_t1038539247 *)L_11, /*hidden argument*/NULL);
		}

IL_0041:
		{
			bool L_12 = Enumerator_MoveNext_m79352559((Enumerator_t824473519 *)(Enumerator_t824473519 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m79352559_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0017;
			}
		}

IL_004d:
		{
			IL2CPP_LEAVE(0x60, FINALLY_0052);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		Il2CppFakeBox<Enumerator_t824473519 > L_13(Enumerator_t824473519_il2cpp_TypeInfo_var, (&V_2));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__90 = il2cpp_codegen_get_interface_invoke_data(0, &L_13, IDisposable_t3640265483_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__90.methodPtr)((RuntimeObject*)(&L_13), /*hidden argument*/il2cpp_virtual_invoke_data__90.method);
		V_2 = L_13.m_Value;
		IL2CPP_END_FINALLY(82)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_JUMP_TBL(0x60, IL_0060)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0060:
	{
		JObject_t2059125928 * L_14 = V_0;
		JsonWriter_t1467272295 * L_15 = ___writer0;
		JsonConverterU5BU5D_t155849004* L_16 = (JsonConverterU5BU5D_t155849004*)SZArrayNew(JsonConverterU5BU5D_t155849004_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck((JToken_t1038539247 *)L_14);
		VirtActionInvoker2< JsonWriter_t1467272295 *, JsonConverterU5BU5D_t155849004* >::Invoke(18 /* System.Void Newtonsoft.Json.Linq.JToken::WriteTo(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.JsonConverter[]) */, (JToken_t1038539247 *)L_14, (JsonWriter_t1467272295 *)L_15, (JsonConverterU5BU5D_t155849004*)L_16);
		return;
	}
}
// System.String WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Bounds>::<GetProperties>m__0(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* PartialConverter_1_U3CGetPropertiesU3Em__0_m3773911527_gshared (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
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
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Color>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PartialConverter_1__ctor_m3323913364_gshared (PartialConverter_1_t221758749 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((JsonConverter_t1047106545 *)__this);
		JsonConverter__ctor_m2308226415((JsonConverter_t1047106545 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MemberInfo WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Color>::GetMember(System.String)
extern "C" IL2CPP_METHOD_ATTR MemberInfo_t * PartialConverter_1_GetMember_m908464153_gshared (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_GetMember_m908464153_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FieldInfo_t * V_1 = NULL;
	PropertyInfo_t * V_2 = NULL;
	{
		V_0 = (int32_t)((int32_t)20);
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___name0;
		int32_t L_3 = V_0;
		NullCheck((Type_t *)L_1);
		FieldInfo_t * L_4 = VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(49 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, (Type_t *)L_1, (String_t*)L_2, (int32_t)L_3);
		V_1 = (FieldInfo_t *)L_4;
		FieldInfo_t * L_5 = V_1;
		if (!L_5)
		{
			goto IL_001d;
		}
	}
	{
		FieldInfo_t * L_6 = V_1;
		return L_6;
	}

IL_001d:
	{
		RuntimeTypeHandle_t3027515415  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_7, /*hidden argument*/NULL);
		String_t* L_9 = ___name0;
		int32_t L_10 = V_0;
		NullCheck((Type_t *)L_8);
		PropertyInfo_t * L_11 = Type_GetProperty_m4206634422((Type_t *)L_8, (String_t*)L_9, (int32_t)L_10, /*hidden argument*/NULL);
		V_2 = (PropertyInfo_t *)L_11;
		PropertyInfo_t * L_12 = V_2;
		if (L_12)
		{
			goto IL_0040;
		}
	}
	{
		String_t* L_13 = ___name0;
		((  void (*) (RuntimeObject * /* static, unused */, String_t*, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, (String_t*)L_13, (String_t*)_stringLiteral3818767439, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_0040:
	{
		PropertyInfo_t * L_14 = V_2;
		NullCheck((PropertyInfo_t *)L_14);
		MethodInfo_t * L_15 = PropertyInfo_GetGetMethod_m1510309854((PropertyInfo_t *)L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_16 = ___name0;
		((  void (*) (RuntimeObject * /* static, unused */, String_t*, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, (String_t*)L_16, (String_t*)_stringLiteral234128521, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_0056:
	{
		PropertyInfo_t * L_17 = V_2;
		NullCheck((PropertyInfo_t *)L_17);
		MethodInfo_t * L_18 = PropertyInfo_GetSetMethod_m66158558((PropertyInfo_t *)L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_006c;
		}
	}
	{
		String_t* L_19 = ___name0;
		((  void (*) (RuntimeObject * /* static, unused */, String_t*, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, (String_t*)L_19, (String_t*)_stringLiteral3534955218, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_006c:
	{
		PropertyInfo_t * L_20 = V_2;
		NullCheck((PropertyInfo_t *)L_20);
		ParameterInfoU5BU5D_t390618515* L_21 = VirtFuncInvoker0< ParameterInfoU5BU5D_t390618515* >::Invoke(22 /* System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters() */, (PropertyInfo_t *)L_20);
		bool L_22 = Enumerable_Any_TisParameterInfo_t1861056598_m2308149110(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_21, /*hidden argument*/Enumerable_Any_TisParameterInfo_t1861056598_m2308149110_RuntimeMethod_var);
		if (!L_22)
		{
			goto IL_0087;
		}
	}
	{
		String_t* L_23 = ___name0;
		((  void (*) (RuntimeObject * /* static, unused */, String_t*, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, (String_t*)L_23, (String_t*)_stringLiteral486677601, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_0087:
	{
		PropertyInfo_t * L_24 = V_2;
		return L_24;
	}
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Color>::Throw(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void PartialConverter_1_Throw_m3609696026_gshared (RuntimeObject * __this /* static, unused */, String_t* ___name0, String_t* ___format1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_Throw_m3609696026_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___format1;
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_1, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_2);
		String_t* L_4 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m3755062657(NULL /*static, unused*/, (String_t*)L_3, (String_t*)_stringLiteral3452614530, (String_t*)L_4, /*hidden argument*/NULL);
		String_t* L_6 = String_Format_m2844511972(NULL /*static, unused*/, (String_t*)L_0, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_7 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_7, (String_t*)L_6, (String_t*)_stringLiteral62725243, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, PartialConverter_1_Throw_m3609696026_RuntimeMethod_var);
	}
}
// System.Object WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Color>::GetValue(System.Reflection.MemberInfo,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * PartialConverter_1_GetValue_m3278566135_gshared (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___member0, RuntimeObject * ___target1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_GetValue_m3278566135_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInfo_t * L_0 = ___member0;
		if (!((FieldInfo_t *)IsInst((RuntimeObject*)L_0, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0018;
		}
	}
	{
		MemberInfo_t * L_1 = ___member0;
		RuntimeObject * L_2 = ___target1;
		NullCheck((FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		RuntimeObject * L_3 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(18 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, (FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)), (RuntimeObject *)L_2);
		return L_3;
	}

IL_0018:
	{
		MemberInfo_t * L_4 = ___member0;
		RuntimeObject * L_5 = ___target1;
		NullCheck((PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)));
		RuntimeObject * L_6 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t2843939325* >::Invoke(25 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, (PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)), (RuntimeObject *)L_5, (ObjectU5BU5D_t2843939325*)(ObjectU5BU5D_t2843939325*)NULL);
		return L_6;
	}
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Color>::SetValue(System.Reflection.MemberInfo,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR void PartialConverter_1_SetValue_m27324069_gshared (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___member0, RuntimeObject * ___target1, RuntimeObject * ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_SetValue_m27324069_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInfo_t * L_0 = ___member0;
		if (!((FieldInfo_t *)IsInst((RuntimeObject*)L_0, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_001d;
		}
	}
	{
		MemberInfo_t * L_1 = ___member0;
		RuntimeObject * L_2 = ___target1;
		RuntimeObject * L_3 = ___value2;
		NullCheck((FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		FieldInfo_SetValue_m2460171138((FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)), (RuntimeObject *)L_2, (RuntimeObject *)L_3, /*hidden argument*/NULL);
		goto IL_002b;
	}

IL_001d:
	{
		MemberInfo_t * L_4 = ___member0;
		RuntimeObject * L_5 = ___target1;
		RuntimeObject * L_6 = ___value2;
		NullCheck((PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)));
		VirtActionInvoker3< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t2843939325* >::Invoke(27 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, (PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)), (RuntimeObject *)L_5, (RuntimeObject *)L_6, (ObjectU5BU5D_t2843939325*)(ObjectU5BU5D_t2843939325*)NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Type WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Color>::GetValueType(System.Reflection.MemberInfo)
extern "C" IL2CPP_METHOD_ATTR Type_t * PartialConverter_1_GetValueType_m2383040597_gshared (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___member0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_GetValueType_m2383040597_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInfo_t * L_0 = ___member0;
		if (!((FieldInfo_t *)IsInst((RuntimeObject*)L_0, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		MemberInfo_t * L_1 = ___member0;
		NullCheck((FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		Type_t * L_2 = VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, (FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		return L_2;
	}

IL_0017:
	{
		MemberInfo_t * L_3 = ___member0;
		NullCheck((PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_3, PropertyInfo_t_il2cpp_TypeInfo_var)));
		Type_t * L_4 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, (PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_3, PropertyInfo_t_il2cpp_TypeInfo_var)));
		return L_4;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Color>::GetProperties()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t3165258040 * PartialConverter_1_GetProperties_m3626045738_gshared (PartialConverter_1_t221758749 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_GetProperties_m3626045738_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t1281789340* V_0 = NULL;
	StringU5BU5D_t1281789340* G_B7_0 = NULL;
	StringU5BU5D_t1281789340* G_B6_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	Func_2_t3947292210 * G_B13_0 = NULL;
	RuntimeObject* G_B13_1 = NULL;
	Func_2_t3947292210 * G_B12_0 = NULL;
	RuntimeObject* G_B12_1 = NULL;
	{
		Dictionary_2_t3165258040 * L_0 = ((PartialConverter_1_t221758749_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get__properties_0();
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		Dictionary_2_t3165258040 * L_1 = ((PartialConverter_1_t221758749_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get__properties_0();
		return L_1;
	}

IL_0010:
	{
		NullCheck((PartialConverter_1_t221758749 *)__this);
		StringU5BU5D_t1281789340* L_2 = VirtFuncInvoker0< StringU5BU5D_t1281789340* >::Invoke(9 /* System.String[] WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Color>::GetPropertyNames() */, (PartialConverter_1_t221758749 *)__this);
		V_0 = (StringU5BU5D_t1281789340*)L_2;
		StringU5BU5D_t1281789340* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		StringU5BU5D_t1281789340* L_4 = V_0;
		bool L_5 = Enumerable_Any_TisString_t_m3986012742(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_4, /*hidden argument*/Enumerable_Any_TisString_t_m3986012742_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0033;
		}
	}

IL_0028:
	{
		InvalidProgramException_t3836716986 * L_6 = (InvalidProgramException_t3836716986 *)il2cpp_codegen_object_new(InvalidProgramException_t3836716986_il2cpp_TypeInfo_var);
		InvalidProgramException__ctor_m3976792134(L_6, (String_t*)_stringLiteral1148368186, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, PartialConverter_1_GetProperties_m3626045738_RuntimeMethod_var);
	}

IL_0033:
	{
		StringU5BU5D_t1281789340* L_7 = V_0;
		Func_2_t2197129486 * L_8 = ((PartialConverter_1_t221758749_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__mgU24cache0_1();
		G_B6_0 = L_7;
		if (L_8)
		{
			G_B7_0 = L_7;
			goto IL_004c;
		}
	}
	{
		intptr_t L_9 = (intptr_t)String_IsNullOrEmpty_m2969720369_RuntimeMethod_var;
		Func_2_t2197129486 * L_10 = (Func_2_t2197129486 *)il2cpp_codegen_object_new(Func_2_t2197129486_il2cpp_TypeInfo_var);
		Func_2__ctor_m4235938257(L_10, (RuntimeObject *)NULL, (intptr_t)L_9, /*hidden argument*/Func_2__ctor_m4235938257_RuntimeMethod_var);
		((PartialConverter_1_t221758749_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->set_U3CU3Ef__mgU24cache0_1(L_10);
		G_B7_0 = G_B6_0;
	}

IL_004c:
	{
		Func_2_t2197129486 * L_11 = ((PartialConverter_1_t221758749_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__mgU24cache0_1();
		bool L_12 = Enumerable_Any_TisString_t_m3256256093(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)G_B7_0, (Func_2_t2197129486 *)L_11, /*hidden argument*/Enumerable_Any_TisString_t_m3256256093_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_0066;
		}
	}
	{
		InvalidProgramException_t3836716986 * L_13 = (InvalidProgramException_t3836716986 *)il2cpp_codegen_object_new(InvalidProgramException_t3836716986_il2cpp_TypeInfo_var);
		InvalidProgramException__ctor_m3976792134(L_13, (String_t*)_stringLiteral3827062036, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, NULL, PartialConverter_1_GetProperties_m3626045738_RuntimeMethod_var);
	}

IL_0066:
	{
		StringU5BU5D_t1281789340* L_14 = V_0;
		RuntimeObject* L_15 = Enumerable_Distinct_TisString_t_m564215000(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_14, /*hidden argument*/Enumerable_Distinct_TisString_t_m564215000_RuntimeMethod_var);
		Func_2_t3947292210 * L_16 = ((PartialConverter_1_t221758749_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__amU24cache0_3();
		G_B10_0 = L_15;
		if (L_16)
		{
			G_B11_0 = L_15;
			goto IL_0084;
		}
	}
	{
		intptr_t L_17 = (intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4);
		Func_2_t3947292210 * L_18 = (Func_2_t3947292210 *)il2cpp_codegen_object_new(Func_2_t3947292210_il2cpp_TypeInfo_var);
		Func_2__ctor_m1878178629(L_18, (RuntimeObject *)NULL, (intptr_t)L_17, /*hidden argument*/Func_2__ctor_m1878178629_RuntimeMethod_var);
		((PartialConverter_1_t221758749_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->set_U3CU3Ef__amU24cache0_3(L_18);
		G_B11_0 = G_B10_0;
	}

IL_0084:
	{
		Func_2_t3947292210 * L_19 = ((PartialConverter_1_t221758749_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__amU24cache0_3();
		Func_2_t1184875966 * L_20 = ((PartialConverter_1_t221758749_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__mgU24cache1_2();
		G_B12_0 = L_19;
		G_B12_1 = G_B11_0;
		if (L_20)
		{
			G_B13_0 = L_19;
			G_B13_1 = G_B11_0;
			goto IL_00a1;
		}
	}
	{
		intptr_t L_21 = (intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5);
		Func_2_t1184875966 * L_22 = (Func_2_t1184875966 *)il2cpp_codegen_object_new(Func_2_t1184875966_il2cpp_TypeInfo_var);
		Func_2__ctor_m1082416029(L_22, (RuntimeObject *)NULL, (intptr_t)L_21, /*hidden argument*/Func_2__ctor_m1082416029_RuntimeMethod_var);
		((PartialConverter_1_t221758749_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->set_U3CU3Ef__mgU24cache1_2(L_22);
		G_B13_0 = G_B12_0;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		Func_2_t1184875966 * L_23 = ((PartialConverter_1_t221758749_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__mgU24cache1_2();
		Dictionary_2_t3165258040 * L_24 = Enumerable_ToDictionary_TisString_t_TisString_t_TisMemberInfo_t_m2153618120(NULL /*static, unused*/, (RuntimeObject*)G_B13_1, (Func_2_t3947292210 *)G_B13_0, (Func_2_t1184875966 *)L_23, /*hidden argument*/Enumerable_ToDictionary_TisString_t_TisString_t_TisMemberInfo_t_m2153618120_RuntimeMethod_var);
		((PartialConverter_1_t221758749_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->set__properties_0(L_24);
		Dictionary_2_t3165258040 * L_25 = ((PartialConverter_1_t221758749_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get__properties_0();
		return L_25;
	}
}
// T WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Color>::CreateInstance()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  PartialConverter_1_CreateInstance_m3642181605_gshared (PartialConverter_1_t221758749 * __this, const RuntimeMethod* method)
{
	{
		Color_t2555686324  L_0 = ((  Color_t2555686324  (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		return L_0;
	}
}
// System.Boolean WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Color>::CanConvert(System.Type)
extern "C" IL2CPP_METHOD_ATTR bool PartialConverter_1_CanConvert_m3452506644_gshared (PartialConverter_1_t221758749 * __this, Type_t * ___objectType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_CanConvert_m3452506644_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		Type_t * L_2 = ___objectType0;
		return (bool)((((RuntimeObject*)(Type_t *)L_1) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
	}
}
// System.Object WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Color>::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * PartialConverter_1_ReadJson_m1474408223_gshared (PartialConverter_1_t221758749 * __this, JsonReader_t2369136700 * ___reader0, Type_t * ___objectType1, RuntimeObject * ___existingValue2, JsonSerializer_t1424496335 * ___serializer3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_ReadJson_m1474408223_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JObject_t2059125928 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	KeyValuePair_2_t1267962911  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Enumerator_t824473519  V_3;
	memset(&V_3, 0, sizeof(V_3));
	RuntimeObject * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		JsonReader_t2369136700 * L_0 = ___reader0;
		NullCheck((JsonReader_t2369136700 *)L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(5 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, (JsonReader_t2369136700 *)L_0);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_000f;
		}
	}
	{
		return NULL;
	}

IL_000f:
	{
		JsonReader_t2369136700 * L_2 = ___reader0;
		JObject_t2059125928 * L_3 = JObject_Load_m3922106929(NULL /*static, unused*/, (JsonReader_t2369136700 *)L_2, /*hidden argument*/NULL);
		V_0 = (JObject_t2059125928 *)L_3;
		NullCheck((PartialConverter_1_t221758749 *)__this);
		Color_t2555686324  L_4 = VirtFuncInvoker0< Color_t2555686324  >::Invoke(10 /* T WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Color>::CreateInstance() */, (PartialConverter_1_t221758749 *)__this);
		Color_t2555686324  L_5 = L_4;
		RuntimeObject * L_6 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8), &L_5);
		V_1 = (RuntimeObject *)L_6;
		NullCheck((PartialConverter_1_t221758749 *)__this);
		Dictionary_2_t3165258040 * L_7 = ((  Dictionary_2_t3165258040 * (*) (PartialConverter_1_t221758749 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((PartialConverter_1_t221758749 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		NullCheck((Dictionary_2_t3165258040 *)L_7);
		Enumerator_t824473519  L_8 = Dictionary_2_GetEnumerator_m4199775080((Dictionary_2_t3165258040 *)L_7, /*hidden argument*/Dictionary_2_GetEnumerator_m4199775080_RuntimeMethod_var);
		V_3 = (Enumerator_t824473519 )L_8;
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006c;
		}

IL_0033:
		{
			KeyValuePair_2_t1267962911  L_9 = Enumerator_get_Current_m841967122((Enumerator_t824473519 *)(Enumerator_t824473519 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m841967122_RuntimeMethod_var);
			V_2 = (KeyValuePair_2_t1267962911 )L_9;
			JObject_t2059125928 * L_10 = V_0;
			String_t* L_11 = KeyValuePair_2_get_Key_m221608719((KeyValuePair_2_t1267962911 *)(KeyValuePair_2_t1267962911 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Key_m221608719_RuntimeMethod_var);
			NullCheck((JObject_t2059125928 *)L_10);
			JToken_t1038539247 * L_12 = JObject_get_Item_m332585514((JObject_t2059125928 *)L_10, (String_t*)L_11, /*hidden argument*/NULL);
			MemberInfo_t * L_13 = KeyValuePair_2_get_Value_m188113207((KeyValuePair_2_t1267962911 *)(KeyValuePair_2_t1267962911 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m188113207_RuntimeMethod_var);
			Type_t * L_14 = ((  Type_t * (*) (RuntimeObject * /* static, unused */, MemberInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(NULL /*static, unused*/, (MemberInfo_t *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
			JsonSerializer_t1424496335 * L_15 = ___serializer3;
			NullCheck((JToken_t1038539247 *)L_12);
			RuntimeObject * L_16 = JToken_ToObject_m1717874774((JToken_t1038539247 *)L_12, (Type_t *)L_14, (JsonSerializer_t1424496335 *)L_15, /*hidden argument*/NULL);
			V_4 = (RuntimeObject *)L_16;
			MemberInfo_t * L_17 = KeyValuePair_2_get_Value_m188113207((KeyValuePair_2_t1267962911 *)(KeyValuePair_2_t1267962911 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m188113207_RuntimeMethod_var);
			RuntimeObject * L_18 = V_1;
			RuntimeObject * L_19 = V_4;
			((  void (*) (RuntimeObject * /* static, unused */, MemberInfo_t *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(NULL /*static, unused*/, (MemberInfo_t *)L_17, (RuntimeObject *)L_18, (RuntimeObject *)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		}

IL_006c:
		{
			bool L_20 = Enumerator_MoveNext_m79352559((Enumerator_t824473519 *)(Enumerator_t824473519 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m79352559_RuntimeMethod_var);
			if (L_20)
			{
				goto IL_0033;
			}
		}

IL_0078:
		{
			IL2CPP_LEAVE(0x8B, FINALLY_007d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007d;
	}

FINALLY_007d:
	{ // begin finally (depth: 1)
		Il2CppFakeBox<Enumerator_t824473519 > L_21(Enumerator_t824473519_il2cpp_TypeInfo_var, (&V_3));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__133 = il2cpp_codegen_get_interface_invoke_data(0, &L_21, IDisposable_t3640265483_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__133.methodPtr)((RuntimeObject*)(&L_21), /*hidden argument*/il2cpp_virtual_invoke_data__133.method);
		V_3 = L_21.m_Value;
		IL2CPP_END_FINALLY(125)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(125)
	{
		IL2CPP_JUMP_TBL(0x8B, IL_008b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_008b:
	{
		RuntimeObject * L_22 = V_1;
		return L_22;
	}
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Color>::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C" IL2CPP_METHOD_ATTR void PartialConverter_1_WriteJson_m1892200660_gshared (PartialConverter_1_t221758749 * __this, JsonWriter_t1467272295 * ___writer0, RuntimeObject * ___value1, JsonSerializer_t1424496335 * ___serializer2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_WriteJson_m1892200660_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JObject_t2059125928 * V_0 = NULL;
	KeyValuePair_2_t1267962911  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Enumerator_t824473519  V_2;
	memset(&V_2, 0, sizeof(V_2));
	RuntimeObject * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		JObject_t2059125928 * L_0 = (JObject_t2059125928 *)il2cpp_codegen_object_new(JObject_t2059125928_il2cpp_TypeInfo_var);
		JObject__ctor_m1738103074(L_0, /*hidden argument*/NULL);
		V_0 = (JObject_t2059125928 *)L_0;
		NullCheck((PartialConverter_1_t221758749 *)__this);
		Dictionary_2_t3165258040 * L_1 = ((  Dictionary_2_t3165258040 * (*) (PartialConverter_1_t221758749 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((PartialConverter_1_t221758749 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		NullCheck((Dictionary_2_t3165258040 *)L_1);
		Enumerator_t824473519  L_2 = Dictionary_2_GetEnumerator_m4199775080((Dictionary_2_t3165258040 *)L_1, /*hidden argument*/Dictionary_2_GetEnumerator_m4199775080_RuntimeMethod_var);
		V_2 = (Enumerator_t824473519 )L_2;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0041;
		}

IL_0017:
		{
			KeyValuePair_2_t1267962911  L_3 = Enumerator_get_Current_m841967122((Enumerator_t824473519 *)(Enumerator_t824473519 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m841967122_RuntimeMethod_var);
			V_1 = (KeyValuePair_2_t1267962911 )L_3;
			MemberInfo_t * L_4 = KeyValuePair_2_get_Value_m188113207((KeyValuePair_2_t1267962911 *)(KeyValuePair_2_t1267962911 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m188113207_RuntimeMethod_var);
			RuntimeObject * L_5 = ___value1;
			RuntimeObject * L_6 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, MemberInfo_t *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)(NULL /*static, unused*/, (MemberInfo_t *)L_4, (RuntimeObject *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
			V_3 = (RuntimeObject *)L_6;
			JObject_t2059125928 * L_7 = V_0;
			String_t* L_8 = KeyValuePair_2_get_Key_m221608719((KeyValuePair_2_t1267962911 *)(KeyValuePair_2_t1267962911 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m221608719_RuntimeMethod_var);
			RuntimeObject * L_9 = V_3;
			JsonSerializer_t1424496335 * L_10 = ___serializer2;
			IL2CPP_RUNTIME_CLASS_INIT(JToken_t1038539247_il2cpp_TypeInfo_var);
			JToken_t1038539247 * L_11 = JToken_FromObject_m1495845376(NULL /*static, unused*/, (RuntimeObject *)L_9, (JsonSerializer_t1424496335 *)L_10, /*hidden argument*/NULL);
			NullCheck((JObject_t2059125928 *)L_7);
			JObject_set_Item_m3337384077((JObject_t2059125928 *)L_7, (String_t*)L_8, (JToken_t1038539247 *)L_11, /*hidden argument*/NULL);
		}

IL_0041:
		{
			bool L_12 = Enumerator_MoveNext_m79352559((Enumerator_t824473519 *)(Enumerator_t824473519 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m79352559_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0017;
			}
		}

IL_004d:
		{
			IL2CPP_LEAVE(0x60, FINALLY_0052);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		Il2CppFakeBox<Enumerator_t824473519 > L_13(Enumerator_t824473519_il2cpp_TypeInfo_var, (&V_2));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__90 = il2cpp_codegen_get_interface_invoke_data(0, &L_13, IDisposable_t3640265483_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__90.methodPtr)((RuntimeObject*)(&L_13), /*hidden argument*/il2cpp_virtual_invoke_data__90.method);
		V_2 = L_13.m_Value;
		IL2CPP_END_FINALLY(82)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_JUMP_TBL(0x60, IL_0060)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0060:
	{
		JObject_t2059125928 * L_14 = V_0;
		JsonWriter_t1467272295 * L_15 = ___writer0;
		JsonConverterU5BU5D_t155849004* L_16 = (JsonConverterU5BU5D_t155849004*)SZArrayNew(JsonConverterU5BU5D_t155849004_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck((JToken_t1038539247 *)L_14);
		VirtActionInvoker2< JsonWriter_t1467272295 *, JsonConverterU5BU5D_t155849004* >::Invoke(18 /* System.Void Newtonsoft.Json.Linq.JToken::WriteTo(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.JsonConverter[]) */, (JToken_t1038539247 *)L_14, (JsonWriter_t1467272295 *)L_15, (JsonConverterU5BU5D_t155849004*)L_16);
		return;
	}
}
// System.String WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Color>::<GetProperties>m__0(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* PartialConverter_1_U3CGetPropertiesU3Em__0_m3611203917_gshared (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
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
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Matrix4x4>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PartialConverter_1__ctor_m3977992021_gshared (PartialConverter_1_t3778941564 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((JsonConverter_t1047106545 *)__this);
		JsonConverter__ctor_m2308226415((JsonConverter_t1047106545 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MemberInfo WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Matrix4x4>::GetMember(System.String)
extern "C" IL2CPP_METHOD_ATTR MemberInfo_t * PartialConverter_1_GetMember_m3151651989_gshared (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_GetMember_m3151651989_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FieldInfo_t * V_1 = NULL;
	PropertyInfo_t * V_2 = NULL;
	{
		V_0 = (int32_t)((int32_t)20);
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___name0;
		int32_t L_3 = V_0;
		NullCheck((Type_t *)L_1);
		FieldInfo_t * L_4 = VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(49 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, (Type_t *)L_1, (String_t*)L_2, (int32_t)L_3);
		V_1 = (FieldInfo_t *)L_4;
		FieldInfo_t * L_5 = V_1;
		if (!L_5)
		{
			goto IL_001d;
		}
	}
	{
		FieldInfo_t * L_6 = V_1;
		return L_6;
	}

IL_001d:
	{
		RuntimeTypeHandle_t3027515415  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_7, /*hidden argument*/NULL);
		String_t* L_9 = ___name0;
		int32_t L_10 = V_0;
		NullCheck((Type_t *)L_8);
		PropertyInfo_t * L_11 = Type_GetProperty_m4206634422((Type_t *)L_8, (String_t*)L_9, (int32_t)L_10, /*hidden argument*/NULL);
		V_2 = (PropertyInfo_t *)L_11;
		PropertyInfo_t * L_12 = V_2;
		if (L_12)
		{
			goto IL_0040;
		}
	}
	{
		String_t* L_13 = ___name0;
		((  void (*) (RuntimeObject * /* static, unused */, String_t*, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, (String_t*)L_13, (String_t*)_stringLiteral3818767439, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_0040:
	{
		PropertyInfo_t * L_14 = V_2;
		NullCheck((PropertyInfo_t *)L_14);
		MethodInfo_t * L_15 = PropertyInfo_GetGetMethod_m1510309854((PropertyInfo_t *)L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_16 = ___name0;
		((  void (*) (RuntimeObject * /* static, unused */, String_t*, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, (String_t*)L_16, (String_t*)_stringLiteral234128521, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_0056:
	{
		PropertyInfo_t * L_17 = V_2;
		NullCheck((PropertyInfo_t *)L_17);
		MethodInfo_t * L_18 = PropertyInfo_GetSetMethod_m66158558((PropertyInfo_t *)L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_006c;
		}
	}
	{
		String_t* L_19 = ___name0;
		((  void (*) (RuntimeObject * /* static, unused */, String_t*, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, (String_t*)L_19, (String_t*)_stringLiteral3534955218, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_006c:
	{
		PropertyInfo_t * L_20 = V_2;
		NullCheck((PropertyInfo_t *)L_20);
		ParameterInfoU5BU5D_t390618515* L_21 = VirtFuncInvoker0< ParameterInfoU5BU5D_t390618515* >::Invoke(22 /* System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters() */, (PropertyInfo_t *)L_20);
		bool L_22 = Enumerable_Any_TisParameterInfo_t1861056598_m2308149110(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_21, /*hidden argument*/Enumerable_Any_TisParameterInfo_t1861056598_m2308149110_RuntimeMethod_var);
		if (!L_22)
		{
			goto IL_0087;
		}
	}
	{
		String_t* L_23 = ___name0;
		((  void (*) (RuntimeObject * /* static, unused */, String_t*, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, (String_t*)L_23, (String_t*)_stringLiteral486677601, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_0087:
	{
		PropertyInfo_t * L_24 = V_2;
		return L_24;
	}
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Matrix4x4>::Throw(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void PartialConverter_1_Throw_m4023636076_gshared (RuntimeObject * __this /* static, unused */, String_t* ___name0, String_t* ___format1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_Throw_m4023636076_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___format1;
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_1, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_2);
		String_t* L_4 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m3755062657(NULL /*static, unused*/, (String_t*)L_3, (String_t*)_stringLiteral3452614530, (String_t*)L_4, /*hidden argument*/NULL);
		String_t* L_6 = String_Format_m2844511972(NULL /*static, unused*/, (String_t*)L_0, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_7 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_7, (String_t*)L_6, (String_t*)_stringLiteral62725243, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, PartialConverter_1_Throw_m4023636076_RuntimeMethod_var);
	}
}
// System.Object WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Matrix4x4>::GetValue(System.Reflection.MemberInfo,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * PartialConverter_1_GetValue_m3769131421_gshared (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___member0, RuntimeObject * ___target1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_GetValue_m3769131421_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInfo_t * L_0 = ___member0;
		if (!((FieldInfo_t *)IsInst((RuntimeObject*)L_0, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0018;
		}
	}
	{
		MemberInfo_t * L_1 = ___member0;
		RuntimeObject * L_2 = ___target1;
		NullCheck((FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		RuntimeObject * L_3 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(18 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, (FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)), (RuntimeObject *)L_2);
		return L_3;
	}

IL_0018:
	{
		MemberInfo_t * L_4 = ___member0;
		RuntimeObject * L_5 = ___target1;
		NullCheck((PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)));
		RuntimeObject * L_6 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t2843939325* >::Invoke(25 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, (PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)), (RuntimeObject *)L_5, (ObjectU5BU5D_t2843939325*)(ObjectU5BU5D_t2843939325*)NULL);
		return L_6;
	}
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Matrix4x4>::SetValue(System.Reflection.MemberInfo,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR void PartialConverter_1_SetValue_m2160176761_gshared (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___member0, RuntimeObject * ___target1, RuntimeObject * ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_SetValue_m2160176761_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInfo_t * L_0 = ___member0;
		if (!((FieldInfo_t *)IsInst((RuntimeObject*)L_0, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_001d;
		}
	}
	{
		MemberInfo_t * L_1 = ___member0;
		RuntimeObject * L_2 = ___target1;
		RuntimeObject * L_3 = ___value2;
		NullCheck((FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		FieldInfo_SetValue_m2460171138((FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)), (RuntimeObject *)L_2, (RuntimeObject *)L_3, /*hidden argument*/NULL);
		goto IL_002b;
	}

IL_001d:
	{
		MemberInfo_t * L_4 = ___member0;
		RuntimeObject * L_5 = ___target1;
		RuntimeObject * L_6 = ___value2;
		NullCheck((PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)));
		VirtActionInvoker3< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t2843939325* >::Invoke(27 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, (PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)), (RuntimeObject *)L_5, (RuntimeObject *)L_6, (ObjectU5BU5D_t2843939325*)(ObjectU5BU5D_t2843939325*)NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Type WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Matrix4x4>::GetValueType(System.Reflection.MemberInfo)
extern "C" IL2CPP_METHOD_ATTR Type_t * PartialConverter_1_GetValueType_m2841381253_gshared (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___member0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_GetValueType_m2841381253_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInfo_t * L_0 = ___member0;
		if (!((FieldInfo_t *)IsInst((RuntimeObject*)L_0, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		MemberInfo_t * L_1 = ___member0;
		NullCheck((FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		Type_t * L_2 = VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, (FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		return L_2;
	}

IL_0017:
	{
		MemberInfo_t * L_3 = ___member0;
		NullCheck((PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_3, PropertyInfo_t_il2cpp_TypeInfo_var)));
		Type_t * L_4 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, (PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_3, PropertyInfo_t_il2cpp_TypeInfo_var)));
		return L_4;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Matrix4x4>::GetProperties()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t3165258040 * PartialConverter_1_GetProperties_m3067484463_gshared (PartialConverter_1_t3778941564 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_GetProperties_m3067484463_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t1281789340* V_0 = NULL;
	StringU5BU5D_t1281789340* G_B7_0 = NULL;
	StringU5BU5D_t1281789340* G_B6_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	Func_2_t3947292210 * G_B13_0 = NULL;
	RuntimeObject* G_B13_1 = NULL;
	Func_2_t3947292210 * G_B12_0 = NULL;
	RuntimeObject* G_B12_1 = NULL;
	{
		Dictionary_2_t3165258040 * L_0 = ((PartialConverter_1_t3778941564_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get__properties_0();
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		Dictionary_2_t3165258040 * L_1 = ((PartialConverter_1_t3778941564_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get__properties_0();
		return L_1;
	}

IL_0010:
	{
		NullCheck((PartialConverter_1_t3778941564 *)__this);
		StringU5BU5D_t1281789340* L_2 = VirtFuncInvoker0< StringU5BU5D_t1281789340* >::Invoke(9 /* System.String[] WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Matrix4x4>::GetPropertyNames() */, (PartialConverter_1_t3778941564 *)__this);
		V_0 = (StringU5BU5D_t1281789340*)L_2;
		StringU5BU5D_t1281789340* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		StringU5BU5D_t1281789340* L_4 = V_0;
		bool L_5 = Enumerable_Any_TisString_t_m3986012742(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_4, /*hidden argument*/Enumerable_Any_TisString_t_m3986012742_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0033;
		}
	}

IL_0028:
	{
		InvalidProgramException_t3836716986 * L_6 = (InvalidProgramException_t3836716986 *)il2cpp_codegen_object_new(InvalidProgramException_t3836716986_il2cpp_TypeInfo_var);
		InvalidProgramException__ctor_m3976792134(L_6, (String_t*)_stringLiteral1148368186, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, PartialConverter_1_GetProperties_m3067484463_RuntimeMethod_var);
	}

IL_0033:
	{
		StringU5BU5D_t1281789340* L_7 = V_0;
		Func_2_t2197129486 * L_8 = ((PartialConverter_1_t3778941564_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__mgU24cache0_1();
		G_B6_0 = L_7;
		if (L_8)
		{
			G_B7_0 = L_7;
			goto IL_004c;
		}
	}
	{
		intptr_t L_9 = (intptr_t)String_IsNullOrEmpty_m2969720369_RuntimeMethod_var;
		Func_2_t2197129486 * L_10 = (Func_2_t2197129486 *)il2cpp_codegen_object_new(Func_2_t2197129486_il2cpp_TypeInfo_var);
		Func_2__ctor_m4235938257(L_10, (RuntimeObject *)NULL, (intptr_t)L_9, /*hidden argument*/Func_2__ctor_m4235938257_RuntimeMethod_var);
		((PartialConverter_1_t3778941564_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->set_U3CU3Ef__mgU24cache0_1(L_10);
		G_B7_0 = G_B6_0;
	}

IL_004c:
	{
		Func_2_t2197129486 * L_11 = ((PartialConverter_1_t3778941564_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__mgU24cache0_1();
		bool L_12 = Enumerable_Any_TisString_t_m3256256093(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)G_B7_0, (Func_2_t2197129486 *)L_11, /*hidden argument*/Enumerable_Any_TisString_t_m3256256093_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_0066;
		}
	}
	{
		InvalidProgramException_t3836716986 * L_13 = (InvalidProgramException_t3836716986 *)il2cpp_codegen_object_new(InvalidProgramException_t3836716986_il2cpp_TypeInfo_var);
		InvalidProgramException__ctor_m3976792134(L_13, (String_t*)_stringLiteral3827062036, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, NULL, PartialConverter_1_GetProperties_m3067484463_RuntimeMethod_var);
	}

IL_0066:
	{
		StringU5BU5D_t1281789340* L_14 = V_0;
		RuntimeObject* L_15 = Enumerable_Distinct_TisString_t_m564215000(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_14, /*hidden argument*/Enumerable_Distinct_TisString_t_m564215000_RuntimeMethod_var);
		Func_2_t3947292210 * L_16 = ((PartialConverter_1_t3778941564_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__amU24cache0_3();
		G_B10_0 = L_15;
		if (L_16)
		{
			G_B11_0 = L_15;
			goto IL_0084;
		}
	}
	{
		intptr_t L_17 = (intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4);
		Func_2_t3947292210 * L_18 = (Func_2_t3947292210 *)il2cpp_codegen_object_new(Func_2_t3947292210_il2cpp_TypeInfo_var);
		Func_2__ctor_m1878178629(L_18, (RuntimeObject *)NULL, (intptr_t)L_17, /*hidden argument*/Func_2__ctor_m1878178629_RuntimeMethod_var);
		((PartialConverter_1_t3778941564_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->set_U3CU3Ef__amU24cache0_3(L_18);
		G_B11_0 = G_B10_0;
	}

IL_0084:
	{
		Func_2_t3947292210 * L_19 = ((PartialConverter_1_t3778941564_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__amU24cache0_3();
		Func_2_t1184875966 * L_20 = ((PartialConverter_1_t3778941564_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__mgU24cache1_2();
		G_B12_0 = L_19;
		G_B12_1 = G_B11_0;
		if (L_20)
		{
			G_B13_0 = L_19;
			G_B13_1 = G_B11_0;
			goto IL_00a1;
		}
	}
	{
		intptr_t L_21 = (intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5);
		Func_2_t1184875966 * L_22 = (Func_2_t1184875966 *)il2cpp_codegen_object_new(Func_2_t1184875966_il2cpp_TypeInfo_var);
		Func_2__ctor_m1082416029(L_22, (RuntimeObject *)NULL, (intptr_t)L_21, /*hidden argument*/Func_2__ctor_m1082416029_RuntimeMethod_var);
		((PartialConverter_1_t3778941564_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->set_U3CU3Ef__mgU24cache1_2(L_22);
		G_B13_0 = G_B12_0;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		Func_2_t1184875966 * L_23 = ((PartialConverter_1_t3778941564_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__mgU24cache1_2();
		Dictionary_2_t3165258040 * L_24 = Enumerable_ToDictionary_TisString_t_TisString_t_TisMemberInfo_t_m2153618120(NULL /*static, unused*/, (RuntimeObject*)G_B13_1, (Func_2_t3947292210 *)G_B13_0, (Func_2_t1184875966 *)L_23, /*hidden argument*/Enumerable_ToDictionary_TisString_t_TisString_t_TisMemberInfo_t_m2153618120_RuntimeMethod_var);
		((PartialConverter_1_t3778941564_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->set__properties_0(L_24);
		Dictionary_2_t3165258040 * L_25 = ((PartialConverter_1_t3778941564_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get__properties_0();
		return L_25;
	}
}
// T WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Matrix4x4>::CreateInstance()
extern "C" IL2CPP_METHOD_ATTR Matrix4x4_t1817901843  PartialConverter_1_CreateInstance_m1866205590_gshared (PartialConverter_1_t3778941564 * __this, const RuntimeMethod* method)
{
	{
		Matrix4x4_t1817901843  L_0 = ((  Matrix4x4_t1817901843  (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		return L_0;
	}
}
// System.Boolean WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Matrix4x4>::CanConvert(System.Type)
extern "C" IL2CPP_METHOD_ATTR bool PartialConverter_1_CanConvert_m632837558_gshared (PartialConverter_1_t3778941564 * __this, Type_t * ___objectType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_CanConvert_m632837558_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		Type_t * L_2 = ___objectType0;
		return (bool)((((RuntimeObject*)(Type_t *)L_1) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
	}
}
// System.Object WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Matrix4x4>::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * PartialConverter_1_ReadJson_m3838817349_gshared (PartialConverter_1_t3778941564 * __this, JsonReader_t2369136700 * ___reader0, Type_t * ___objectType1, RuntimeObject * ___existingValue2, JsonSerializer_t1424496335 * ___serializer3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_ReadJson_m3838817349_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JObject_t2059125928 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	KeyValuePair_2_t1267962911  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Enumerator_t824473519  V_3;
	memset(&V_3, 0, sizeof(V_3));
	RuntimeObject * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		JsonReader_t2369136700 * L_0 = ___reader0;
		NullCheck((JsonReader_t2369136700 *)L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(5 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, (JsonReader_t2369136700 *)L_0);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_000f;
		}
	}
	{
		return NULL;
	}

IL_000f:
	{
		JsonReader_t2369136700 * L_2 = ___reader0;
		JObject_t2059125928 * L_3 = JObject_Load_m3922106929(NULL /*static, unused*/, (JsonReader_t2369136700 *)L_2, /*hidden argument*/NULL);
		V_0 = (JObject_t2059125928 *)L_3;
		NullCheck((PartialConverter_1_t3778941564 *)__this);
		Matrix4x4_t1817901843  L_4 = VirtFuncInvoker0< Matrix4x4_t1817901843  >::Invoke(10 /* T WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Matrix4x4>::CreateInstance() */, (PartialConverter_1_t3778941564 *)__this);
		Matrix4x4_t1817901843  L_5 = L_4;
		RuntimeObject * L_6 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8), &L_5);
		V_1 = (RuntimeObject *)L_6;
		NullCheck((PartialConverter_1_t3778941564 *)__this);
		Dictionary_2_t3165258040 * L_7 = ((  Dictionary_2_t3165258040 * (*) (PartialConverter_1_t3778941564 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((PartialConverter_1_t3778941564 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		NullCheck((Dictionary_2_t3165258040 *)L_7);
		Enumerator_t824473519  L_8 = Dictionary_2_GetEnumerator_m4199775080((Dictionary_2_t3165258040 *)L_7, /*hidden argument*/Dictionary_2_GetEnumerator_m4199775080_RuntimeMethod_var);
		V_3 = (Enumerator_t824473519 )L_8;
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006c;
		}

IL_0033:
		{
			KeyValuePair_2_t1267962911  L_9 = Enumerator_get_Current_m841967122((Enumerator_t824473519 *)(Enumerator_t824473519 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m841967122_RuntimeMethod_var);
			V_2 = (KeyValuePair_2_t1267962911 )L_9;
			JObject_t2059125928 * L_10 = V_0;
			String_t* L_11 = KeyValuePair_2_get_Key_m221608719((KeyValuePair_2_t1267962911 *)(KeyValuePair_2_t1267962911 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Key_m221608719_RuntimeMethod_var);
			NullCheck((JObject_t2059125928 *)L_10);
			JToken_t1038539247 * L_12 = JObject_get_Item_m332585514((JObject_t2059125928 *)L_10, (String_t*)L_11, /*hidden argument*/NULL);
			MemberInfo_t * L_13 = KeyValuePair_2_get_Value_m188113207((KeyValuePair_2_t1267962911 *)(KeyValuePair_2_t1267962911 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m188113207_RuntimeMethod_var);
			Type_t * L_14 = ((  Type_t * (*) (RuntimeObject * /* static, unused */, MemberInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(NULL /*static, unused*/, (MemberInfo_t *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
			JsonSerializer_t1424496335 * L_15 = ___serializer3;
			NullCheck((JToken_t1038539247 *)L_12);
			RuntimeObject * L_16 = JToken_ToObject_m1717874774((JToken_t1038539247 *)L_12, (Type_t *)L_14, (JsonSerializer_t1424496335 *)L_15, /*hidden argument*/NULL);
			V_4 = (RuntimeObject *)L_16;
			MemberInfo_t * L_17 = KeyValuePair_2_get_Value_m188113207((KeyValuePair_2_t1267962911 *)(KeyValuePair_2_t1267962911 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m188113207_RuntimeMethod_var);
			RuntimeObject * L_18 = V_1;
			RuntimeObject * L_19 = V_4;
			((  void (*) (RuntimeObject * /* static, unused */, MemberInfo_t *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(NULL /*static, unused*/, (MemberInfo_t *)L_17, (RuntimeObject *)L_18, (RuntimeObject *)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		}

IL_006c:
		{
			bool L_20 = Enumerator_MoveNext_m79352559((Enumerator_t824473519 *)(Enumerator_t824473519 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m79352559_RuntimeMethod_var);
			if (L_20)
			{
				goto IL_0033;
			}
		}

IL_0078:
		{
			IL2CPP_LEAVE(0x8B, FINALLY_007d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007d;
	}

FINALLY_007d:
	{ // begin finally (depth: 1)
		Il2CppFakeBox<Enumerator_t824473519 > L_21(Enumerator_t824473519_il2cpp_TypeInfo_var, (&V_3));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__133 = il2cpp_codegen_get_interface_invoke_data(0, &L_21, IDisposable_t3640265483_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__133.methodPtr)((RuntimeObject*)(&L_21), /*hidden argument*/il2cpp_virtual_invoke_data__133.method);
		V_3 = L_21.m_Value;
		IL2CPP_END_FINALLY(125)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(125)
	{
		IL2CPP_JUMP_TBL(0x8B, IL_008b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_008b:
	{
		RuntimeObject * L_22 = V_1;
		return L_22;
	}
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Matrix4x4>::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C" IL2CPP_METHOD_ATTR void PartialConverter_1_WriteJson_m1998588366_gshared (PartialConverter_1_t3778941564 * __this, JsonWriter_t1467272295 * ___writer0, RuntimeObject * ___value1, JsonSerializer_t1424496335 * ___serializer2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_WriteJson_m1998588366_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JObject_t2059125928 * V_0 = NULL;
	KeyValuePair_2_t1267962911  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Enumerator_t824473519  V_2;
	memset(&V_2, 0, sizeof(V_2));
	RuntimeObject * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		JObject_t2059125928 * L_0 = (JObject_t2059125928 *)il2cpp_codegen_object_new(JObject_t2059125928_il2cpp_TypeInfo_var);
		JObject__ctor_m1738103074(L_0, /*hidden argument*/NULL);
		V_0 = (JObject_t2059125928 *)L_0;
		NullCheck((PartialConverter_1_t3778941564 *)__this);
		Dictionary_2_t3165258040 * L_1 = ((  Dictionary_2_t3165258040 * (*) (PartialConverter_1_t3778941564 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((PartialConverter_1_t3778941564 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		NullCheck((Dictionary_2_t3165258040 *)L_1);
		Enumerator_t824473519  L_2 = Dictionary_2_GetEnumerator_m4199775080((Dictionary_2_t3165258040 *)L_1, /*hidden argument*/Dictionary_2_GetEnumerator_m4199775080_RuntimeMethod_var);
		V_2 = (Enumerator_t824473519 )L_2;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0041;
		}

IL_0017:
		{
			KeyValuePair_2_t1267962911  L_3 = Enumerator_get_Current_m841967122((Enumerator_t824473519 *)(Enumerator_t824473519 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m841967122_RuntimeMethod_var);
			V_1 = (KeyValuePair_2_t1267962911 )L_3;
			MemberInfo_t * L_4 = KeyValuePair_2_get_Value_m188113207((KeyValuePair_2_t1267962911 *)(KeyValuePair_2_t1267962911 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m188113207_RuntimeMethod_var);
			RuntimeObject * L_5 = ___value1;
			RuntimeObject * L_6 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, MemberInfo_t *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)(NULL /*static, unused*/, (MemberInfo_t *)L_4, (RuntimeObject *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
			V_3 = (RuntimeObject *)L_6;
			JObject_t2059125928 * L_7 = V_0;
			String_t* L_8 = KeyValuePair_2_get_Key_m221608719((KeyValuePair_2_t1267962911 *)(KeyValuePair_2_t1267962911 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m221608719_RuntimeMethod_var);
			RuntimeObject * L_9 = V_3;
			JsonSerializer_t1424496335 * L_10 = ___serializer2;
			IL2CPP_RUNTIME_CLASS_INIT(JToken_t1038539247_il2cpp_TypeInfo_var);
			JToken_t1038539247 * L_11 = JToken_FromObject_m1495845376(NULL /*static, unused*/, (RuntimeObject *)L_9, (JsonSerializer_t1424496335 *)L_10, /*hidden argument*/NULL);
			NullCheck((JObject_t2059125928 *)L_7);
			JObject_set_Item_m3337384077((JObject_t2059125928 *)L_7, (String_t*)L_8, (JToken_t1038539247 *)L_11, /*hidden argument*/NULL);
		}

IL_0041:
		{
			bool L_12 = Enumerator_MoveNext_m79352559((Enumerator_t824473519 *)(Enumerator_t824473519 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m79352559_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0017;
			}
		}

IL_004d:
		{
			IL2CPP_LEAVE(0x60, FINALLY_0052);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		Il2CppFakeBox<Enumerator_t824473519 > L_13(Enumerator_t824473519_il2cpp_TypeInfo_var, (&V_2));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__90 = il2cpp_codegen_get_interface_invoke_data(0, &L_13, IDisposable_t3640265483_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__90.methodPtr)((RuntimeObject*)(&L_13), /*hidden argument*/il2cpp_virtual_invoke_data__90.method);
		V_2 = L_13.m_Value;
		IL2CPP_END_FINALLY(82)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_JUMP_TBL(0x60, IL_0060)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0060:
	{
		JObject_t2059125928 * L_14 = V_0;
		JsonWriter_t1467272295 * L_15 = ___writer0;
		JsonConverterU5BU5D_t155849004* L_16 = (JsonConverterU5BU5D_t155849004*)SZArrayNew(JsonConverterU5BU5D_t155849004_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck((JToken_t1038539247 *)L_14);
		VirtActionInvoker2< JsonWriter_t1467272295 *, JsonConverterU5BU5D_t155849004* >::Invoke(18 /* System.Void Newtonsoft.Json.Linq.JToken::WriteTo(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.JsonConverter[]) */, (JToken_t1038539247 *)L_14, (JsonWriter_t1467272295 *)L_15, (JsonConverterU5BU5D_t155849004*)L_16);
		return;
	}
}
// System.String WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Matrix4x4>::<GetProperties>m__0(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* PartialConverter_1_U3CGetPropertiesU3Em__0_m1497954037_gshared (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
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
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Quaternion>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PartialConverter_1__ctor_m1597714788_gshared (PartialConverter_1_t4262968052 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((JsonConverter_t1047106545 *)__this);
		JsonConverter__ctor_m2308226415((JsonConverter_t1047106545 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MemberInfo WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Quaternion>::GetMember(System.String)
extern "C" IL2CPP_METHOD_ATTR MemberInfo_t * PartialConverter_1_GetMember_m1710983082_gshared (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_GetMember_m1710983082_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FieldInfo_t * V_1 = NULL;
	PropertyInfo_t * V_2 = NULL;
	{
		V_0 = (int32_t)((int32_t)20);
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___name0;
		int32_t L_3 = V_0;
		NullCheck((Type_t *)L_1);
		FieldInfo_t * L_4 = VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(49 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, (Type_t *)L_1, (String_t*)L_2, (int32_t)L_3);
		V_1 = (FieldInfo_t *)L_4;
		FieldInfo_t * L_5 = V_1;
		if (!L_5)
		{
			goto IL_001d;
		}
	}
	{
		FieldInfo_t * L_6 = V_1;
		return L_6;
	}

IL_001d:
	{
		RuntimeTypeHandle_t3027515415  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_7, /*hidden argument*/NULL);
		String_t* L_9 = ___name0;
		int32_t L_10 = V_0;
		NullCheck((Type_t *)L_8);
		PropertyInfo_t * L_11 = Type_GetProperty_m4206634422((Type_t *)L_8, (String_t*)L_9, (int32_t)L_10, /*hidden argument*/NULL);
		V_2 = (PropertyInfo_t *)L_11;
		PropertyInfo_t * L_12 = V_2;
		if (L_12)
		{
			goto IL_0040;
		}
	}
	{
		String_t* L_13 = ___name0;
		((  void (*) (RuntimeObject * /* static, unused */, String_t*, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, (String_t*)L_13, (String_t*)_stringLiteral3818767439, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_0040:
	{
		PropertyInfo_t * L_14 = V_2;
		NullCheck((PropertyInfo_t *)L_14);
		MethodInfo_t * L_15 = PropertyInfo_GetGetMethod_m1510309854((PropertyInfo_t *)L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_16 = ___name0;
		((  void (*) (RuntimeObject * /* static, unused */, String_t*, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, (String_t*)L_16, (String_t*)_stringLiteral234128521, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_0056:
	{
		PropertyInfo_t * L_17 = V_2;
		NullCheck((PropertyInfo_t *)L_17);
		MethodInfo_t * L_18 = PropertyInfo_GetSetMethod_m66158558((PropertyInfo_t *)L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_006c;
		}
	}
	{
		String_t* L_19 = ___name0;
		((  void (*) (RuntimeObject * /* static, unused */, String_t*, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, (String_t*)L_19, (String_t*)_stringLiteral3534955218, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_006c:
	{
		PropertyInfo_t * L_20 = V_2;
		NullCheck((PropertyInfo_t *)L_20);
		ParameterInfoU5BU5D_t390618515* L_21 = VirtFuncInvoker0< ParameterInfoU5BU5D_t390618515* >::Invoke(22 /* System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters() */, (PropertyInfo_t *)L_20);
		bool L_22 = Enumerable_Any_TisParameterInfo_t1861056598_m2308149110(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_21, /*hidden argument*/Enumerable_Any_TisParameterInfo_t1861056598_m2308149110_RuntimeMethod_var);
		if (!L_22)
		{
			goto IL_0087;
		}
	}
	{
		String_t* L_23 = ___name0;
		((  void (*) (RuntimeObject * /* static, unused */, String_t*, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, (String_t*)L_23, (String_t*)_stringLiteral486677601, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_0087:
	{
		PropertyInfo_t * L_24 = V_2;
		return L_24;
	}
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Quaternion>::Throw(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void PartialConverter_1_Throw_m4171284785_gshared (RuntimeObject * __this /* static, unused */, String_t* ___name0, String_t* ___format1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_Throw_m4171284785_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___format1;
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_1, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_2);
		String_t* L_4 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m3755062657(NULL /*static, unused*/, (String_t*)L_3, (String_t*)_stringLiteral3452614530, (String_t*)L_4, /*hidden argument*/NULL);
		String_t* L_6 = String_Format_m2844511972(NULL /*static, unused*/, (String_t*)L_0, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_7 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_7, (String_t*)L_6, (String_t*)_stringLiteral62725243, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, PartialConverter_1_Throw_m4171284785_RuntimeMethod_var);
	}
}
// System.Object WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Quaternion>::GetValue(System.Reflection.MemberInfo,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * PartialConverter_1_GetValue_m2749236690_gshared (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___member0, RuntimeObject * ___target1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_GetValue_m2749236690_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInfo_t * L_0 = ___member0;
		if (!((FieldInfo_t *)IsInst((RuntimeObject*)L_0, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0018;
		}
	}
	{
		MemberInfo_t * L_1 = ___member0;
		RuntimeObject * L_2 = ___target1;
		NullCheck((FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		RuntimeObject * L_3 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(18 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, (FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)), (RuntimeObject *)L_2);
		return L_3;
	}

IL_0018:
	{
		MemberInfo_t * L_4 = ___member0;
		RuntimeObject * L_5 = ___target1;
		NullCheck((PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)));
		RuntimeObject * L_6 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t2843939325* >::Invoke(25 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, (PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)), (RuntimeObject *)L_5, (ObjectU5BU5D_t2843939325*)(ObjectU5BU5D_t2843939325*)NULL);
		return L_6;
	}
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Quaternion>::SetValue(System.Reflection.MemberInfo,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR void PartialConverter_1_SetValue_m3039122228_gshared (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___member0, RuntimeObject * ___target1, RuntimeObject * ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_SetValue_m3039122228_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInfo_t * L_0 = ___member0;
		if (!((FieldInfo_t *)IsInst((RuntimeObject*)L_0, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_001d;
		}
	}
	{
		MemberInfo_t * L_1 = ___member0;
		RuntimeObject * L_2 = ___target1;
		RuntimeObject * L_3 = ___value2;
		NullCheck((FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		FieldInfo_SetValue_m2460171138((FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)), (RuntimeObject *)L_2, (RuntimeObject *)L_3, /*hidden argument*/NULL);
		goto IL_002b;
	}

IL_001d:
	{
		MemberInfo_t * L_4 = ___member0;
		RuntimeObject * L_5 = ___target1;
		RuntimeObject * L_6 = ___value2;
		NullCheck((PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)));
		VirtActionInvoker3< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t2843939325* >::Invoke(27 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, (PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)), (RuntimeObject *)L_5, (RuntimeObject *)L_6, (ObjectU5BU5D_t2843939325*)(ObjectU5BU5D_t2843939325*)NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Type WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Quaternion>::GetValueType(System.Reflection.MemberInfo)
extern "C" IL2CPP_METHOD_ATTR Type_t * PartialConverter_1_GetValueType_m1579989876_gshared (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___member0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_GetValueType_m1579989876_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInfo_t * L_0 = ___member0;
		if (!((FieldInfo_t *)IsInst((RuntimeObject*)L_0, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		MemberInfo_t * L_1 = ___member0;
		NullCheck((FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		Type_t * L_2 = VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, (FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		return L_2;
	}

IL_0017:
	{
		MemberInfo_t * L_3 = ___member0;
		NullCheck((PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_3, PropertyInfo_t_il2cpp_TypeInfo_var)));
		Type_t * L_4 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, (PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_3, PropertyInfo_t_il2cpp_TypeInfo_var)));
		return L_4;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Quaternion>::GetProperties()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t3165258040 * PartialConverter_1_GetProperties_m4264923054_gshared (PartialConverter_1_t4262968052 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_GetProperties_m4264923054_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t1281789340* V_0 = NULL;
	StringU5BU5D_t1281789340* G_B7_0 = NULL;
	StringU5BU5D_t1281789340* G_B6_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	Func_2_t3947292210 * G_B13_0 = NULL;
	RuntimeObject* G_B13_1 = NULL;
	Func_2_t3947292210 * G_B12_0 = NULL;
	RuntimeObject* G_B12_1 = NULL;
	{
		Dictionary_2_t3165258040 * L_0 = ((PartialConverter_1_t4262968052_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get__properties_0();
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		Dictionary_2_t3165258040 * L_1 = ((PartialConverter_1_t4262968052_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get__properties_0();
		return L_1;
	}

IL_0010:
	{
		NullCheck((PartialConverter_1_t4262968052 *)__this);
		StringU5BU5D_t1281789340* L_2 = VirtFuncInvoker0< StringU5BU5D_t1281789340* >::Invoke(9 /* System.String[] WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Quaternion>::GetPropertyNames() */, (PartialConverter_1_t4262968052 *)__this);
		V_0 = (StringU5BU5D_t1281789340*)L_2;
		StringU5BU5D_t1281789340* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		StringU5BU5D_t1281789340* L_4 = V_0;
		bool L_5 = Enumerable_Any_TisString_t_m3986012742(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_4, /*hidden argument*/Enumerable_Any_TisString_t_m3986012742_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0033;
		}
	}

IL_0028:
	{
		InvalidProgramException_t3836716986 * L_6 = (InvalidProgramException_t3836716986 *)il2cpp_codegen_object_new(InvalidProgramException_t3836716986_il2cpp_TypeInfo_var);
		InvalidProgramException__ctor_m3976792134(L_6, (String_t*)_stringLiteral1148368186, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, PartialConverter_1_GetProperties_m4264923054_RuntimeMethod_var);
	}

IL_0033:
	{
		StringU5BU5D_t1281789340* L_7 = V_0;
		Func_2_t2197129486 * L_8 = ((PartialConverter_1_t4262968052_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__mgU24cache0_1();
		G_B6_0 = L_7;
		if (L_8)
		{
			G_B7_0 = L_7;
			goto IL_004c;
		}
	}
	{
		intptr_t L_9 = (intptr_t)String_IsNullOrEmpty_m2969720369_RuntimeMethod_var;
		Func_2_t2197129486 * L_10 = (Func_2_t2197129486 *)il2cpp_codegen_object_new(Func_2_t2197129486_il2cpp_TypeInfo_var);
		Func_2__ctor_m4235938257(L_10, (RuntimeObject *)NULL, (intptr_t)L_9, /*hidden argument*/Func_2__ctor_m4235938257_RuntimeMethod_var);
		((PartialConverter_1_t4262968052_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->set_U3CU3Ef__mgU24cache0_1(L_10);
		G_B7_0 = G_B6_0;
	}

IL_004c:
	{
		Func_2_t2197129486 * L_11 = ((PartialConverter_1_t4262968052_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__mgU24cache0_1();
		bool L_12 = Enumerable_Any_TisString_t_m3256256093(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)G_B7_0, (Func_2_t2197129486 *)L_11, /*hidden argument*/Enumerable_Any_TisString_t_m3256256093_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_0066;
		}
	}
	{
		InvalidProgramException_t3836716986 * L_13 = (InvalidProgramException_t3836716986 *)il2cpp_codegen_object_new(InvalidProgramException_t3836716986_il2cpp_TypeInfo_var);
		InvalidProgramException__ctor_m3976792134(L_13, (String_t*)_stringLiteral3827062036, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, NULL, PartialConverter_1_GetProperties_m4264923054_RuntimeMethod_var);
	}

IL_0066:
	{
		StringU5BU5D_t1281789340* L_14 = V_0;
		RuntimeObject* L_15 = Enumerable_Distinct_TisString_t_m564215000(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_14, /*hidden argument*/Enumerable_Distinct_TisString_t_m564215000_RuntimeMethod_var);
		Func_2_t3947292210 * L_16 = ((PartialConverter_1_t4262968052_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__amU24cache0_3();
		G_B10_0 = L_15;
		if (L_16)
		{
			G_B11_0 = L_15;
			goto IL_0084;
		}
	}
	{
		intptr_t L_17 = (intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4);
		Func_2_t3947292210 * L_18 = (Func_2_t3947292210 *)il2cpp_codegen_object_new(Func_2_t3947292210_il2cpp_TypeInfo_var);
		Func_2__ctor_m1878178629(L_18, (RuntimeObject *)NULL, (intptr_t)L_17, /*hidden argument*/Func_2__ctor_m1878178629_RuntimeMethod_var);
		((PartialConverter_1_t4262968052_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->set_U3CU3Ef__amU24cache0_3(L_18);
		G_B11_0 = G_B10_0;
	}

IL_0084:
	{
		Func_2_t3947292210 * L_19 = ((PartialConverter_1_t4262968052_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__amU24cache0_3();
		Func_2_t1184875966 * L_20 = ((PartialConverter_1_t4262968052_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__mgU24cache1_2();
		G_B12_0 = L_19;
		G_B12_1 = G_B11_0;
		if (L_20)
		{
			G_B13_0 = L_19;
			G_B13_1 = G_B11_0;
			goto IL_00a1;
		}
	}
	{
		intptr_t L_21 = (intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5);
		Func_2_t1184875966 * L_22 = (Func_2_t1184875966 *)il2cpp_codegen_object_new(Func_2_t1184875966_il2cpp_TypeInfo_var);
		Func_2__ctor_m1082416029(L_22, (RuntimeObject *)NULL, (intptr_t)L_21, /*hidden argument*/Func_2__ctor_m1082416029_RuntimeMethod_var);
		((PartialConverter_1_t4262968052_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->set_U3CU3Ef__mgU24cache1_2(L_22);
		G_B13_0 = G_B12_0;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		Func_2_t1184875966 * L_23 = ((PartialConverter_1_t4262968052_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__mgU24cache1_2();
		Dictionary_2_t3165258040 * L_24 = Enumerable_ToDictionary_TisString_t_TisString_t_TisMemberInfo_t_m2153618120(NULL /*static, unused*/, (RuntimeObject*)G_B13_1, (Func_2_t3947292210 *)G_B13_0, (Func_2_t1184875966 *)L_23, /*hidden argument*/Enumerable_ToDictionary_TisString_t_TisString_t_TisMemberInfo_t_m2153618120_RuntimeMethod_var);
		((PartialConverter_1_t4262968052_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->set__properties_0(L_24);
		Dictionary_2_t3165258040 * L_25 = ((PartialConverter_1_t4262968052_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get__properties_0();
		return L_25;
	}
}
// T WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Quaternion>::CreateInstance()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  PartialConverter_1_CreateInstance_m906073482_gshared (PartialConverter_1_t4262968052 * __this, const RuntimeMethod* method)
{
	{
		Quaternion_t2301928331  L_0 = ((  Quaternion_t2301928331  (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		return L_0;
	}
}
// System.Boolean WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Quaternion>::CanConvert(System.Type)
extern "C" IL2CPP_METHOD_ATTR bool PartialConverter_1_CanConvert_m3786872863_gshared (PartialConverter_1_t4262968052 * __this, Type_t * ___objectType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_CanConvert_m3786872863_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		Type_t * L_2 = ___objectType0;
		return (bool)((((RuntimeObject*)(Type_t *)L_1) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
	}
}
// System.Object WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Quaternion>::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * PartialConverter_1_ReadJson_m2092313595_gshared (PartialConverter_1_t4262968052 * __this, JsonReader_t2369136700 * ___reader0, Type_t * ___objectType1, RuntimeObject * ___existingValue2, JsonSerializer_t1424496335 * ___serializer3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_ReadJson_m2092313595_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JObject_t2059125928 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	KeyValuePair_2_t1267962911  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Enumerator_t824473519  V_3;
	memset(&V_3, 0, sizeof(V_3));
	RuntimeObject * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		JsonReader_t2369136700 * L_0 = ___reader0;
		NullCheck((JsonReader_t2369136700 *)L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(5 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, (JsonReader_t2369136700 *)L_0);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_000f;
		}
	}
	{
		return NULL;
	}

IL_000f:
	{
		JsonReader_t2369136700 * L_2 = ___reader0;
		JObject_t2059125928 * L_3 = JObject_Load_m3922106929(NULL /*static, unused*/, (JsonReader_t2369136700 *)L_2, /*hidden argument*/NULL);
		V_0 = (JObject_t2059125928 *)L_3;
		NullCheck((PartialConverter_1_t4262968052 *)__this);
		Quaternion_t2301928331  L_4 = VirtFuncInvoker0< Quaternion_t2301928331  >::Invoke(10 /* T WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Quaternion>::CreateInstance() */, (PartialConverter_1_t4262968052 *)__this);
		Quaternion_t2301928331  L_5 = L_4;
		RuntimeObject * L_6 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8), &L_5);
		V_1 = (RuntimeObject *)L_6;
		NullCheck((PartialConverter_1_t4262968052 *)__this);
		Dictionary_2_t3165258040 * L_7 = ((  Dictionary_2_t3165258040 * (*) (PartialConverter_1_t4262968052 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((PartialConverter_1_t4262968052 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		NullCheck((Dictionary_2_t3165258040 *)L_7);
		Enumerator_t824473519  L_8 = Dictionary_2_GetEnumerator_m4199775080((Dictionary_2_t3165258040 *)L_7, /*hidden argument*/Dictionary_2_GetEnumerator_m4199775080_RuntimeMethod_var);
		V_3 = (Enumerator_t824473519 )L_8;
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006c;
		}

IL_0033:
		{
			KeyValuePair_2_t1267962911  L_9 = Enumerator_get_Current_m841967122((Enumerator_t824473519 *)(Enumerator_t824473519 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m841967122_RuntimeMethod_var);
			V_2 = (KeyValuePair_2_t1267962911 )L_9;
			JObject_t2059125928 * L_10 = V_0;
			String_t* L_11 = KeyValuePair_2_get_Key_m221608719((KeyValuePair_2_t1267962911 *)(KeyValuePair_2_t1267962911 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Key_m221608719_RuntimeMethod_var);
			NullCheck((JObject_t2059125928 *)L_10);
			JToken_t1038539247 * L_12 = JObject_get_Item_m332585514((JObject_t2059125928 *)L_10, (String_t*)L_11, /*hidden argument*/NULL);
			MemberInfo_t * L_13 = KeyValuePair_2_get_Value_m188113207((KeyValuePair_2_t1267962911 *)(KeyValuePair_2_t1267962911 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m188113207_RuntimeMethod_var);
			Type_t * L_14 = ((  Type_t * (*) (RuntimeObject * /* static, unused */, MemberInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(NULL /*static, unused*/, (MemberInfo_t *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
			JsonSerializer_t1424496335 * L_15 = ___serializer3;
			NullCheck((JToken_t1038539247 *)L_12);
			RuntimeObject * L_16 = JToken_ToObject_m1717874774((JToken_t1038539247 *)L_12, (Type_t *)L_14, (JsonSerializer_t1424496335 *)L_15, /*hidden argument*/NULL);
			V_4 = (RuntimeObject *)L_16;
			MemberInfo_t * L_17 = KeyValuePair_2_get_Value_m188113207((KeyValuePair_2_t1267962911 *)(KeyValuePair_2_t1267962911 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m188113207_RuntimeMethod_var);
			RuntimeObject * L_18 = V_1;
			RuntimeObject * L_19 = V_4;
			((  void (*) (RuntimeObject * /* static, unused */, MemberInfo_t *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(NULL /*static, unused*/, (MemberInfo_t *)L_17, (RuntimeObject *)L_18, (RuntimeObject *)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		}

IL_006c:
		{
			bool L_20 = Enumerator_MoveNext_m79352559((Enumerator_t824473519 *)(Enumerator_t824473519 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m79352559_RuntimeMethod_var);
			if (L_20)
			{
				goto IL_0033;
			}
		}

IL_0078:
		{
			IL2CPP_LEAVE(0x8B, FINALLY_007d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007d;
	}

FINALLY_007d:
	{ // begin finally (depth: 1)
		Il2CppFakeBox<Enumerator_t824473519 > L_21(Enumerator_t824473519_il2cpp_TypeInfo_var, (&V_3));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__133 = il2cpp_codegen_get_interface_invoke_data(0, &L_21, IDisposable_t3640265483_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__133.methodPtr)((RuntimeObject*)(&L_21), /*hidden argument*/il2cpp_virtual_invoke_data__133.method);
		V_3 = L_21.m_Value;
		IL2CPP_END_FINALLY(125)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(125)
	{
		IL2CPP_JUMP_TBL(0x8B, IL_008b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_008b:
	{
		RuntimeObject * L_22 = V_1;
		return L_22;
	}
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Quaternion>::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C" IL2CPP_METHOD_ATTR void PartialConverter_1_WriteJson_m3657761463_gshared (PartialConverter_1_t4262968052 * __this, JsonWriter_t1467272295 * ___writer0, RuntimeObject * ___value1, JsonSerializer_t1424496335 * ___serializer2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_WriteJson_m3657761463_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JObject_t2059125928 * V_0 = NULL;
	KeyValuePair_2_t1267962911  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Enumerator_t824473519  V_2;
	memset(&V_2, 0, sizeof(V_2));
	RuntimeObject * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		JObject_t2059125928 * L_0 = (JObject_t2059125928 *)il2cpp_codegen_object_new(JObject_t2059125928_il2cpp_TypeInfo_var);
		JObject__ctor_m1738103074(L_0, /*hidden argument*/NULL);
		V_0 = (JObject_t2059125928 *)L_0;
		NullCheck((PartialConverter_1_t4262968052 *)__this);
		Dictionary_2_t3165258040 * L_1 = ((  Dictionary_2_t3165258040 * (*) (PartialConverter_1_t4262968052 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((PartialConverter_1_t4262968052 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		NullCheck((Dictionary_2_t3165258040 *)L_1);
		Enumerator_t824473519  L_2 = Dictionary_2_GetEnumerator_m4199775080((Dictionary_2_t3165258040 *)L_1, /*hidden argument*/Dictionary_2_GetEnumerator_m4199775080_RuntimeMethod_var);
		V_2 = (Enumerator_t824473519 )L_2;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0041;
		}

IL_0017:
		{
			KeyValuePair_2_t1267962911  L_3 = Enumerator_get_Current_m841967122((Enumerator_t824473519 *)(Enumerator_t824473519 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m841967122_RuntimeMethod_var);
			V_1 = (KeyValuePair_2_t1267962911 )L_3;
			MemberInfo_t * L_4 = KeyValuePair_2_get_Value_m188113207((KeyValuePair_2_t1267962911 *)(KeyValuePair_2_t1267962911 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m188113207_RuntimeMethod_var);
			RuntimeObject * L_5 = ___value1;
			RuntimeObject * L_6 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, MemberInfo_t *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)(NULL /*static, unused*/, (MemberInfo_t *)L_4, (RuntimeObject *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
			V_3 = (RuntimeObject *)L_6;
			JObject_t2059125928 * L_7 = V_0;
			String_t* L_8 = KeyValuePair_2_get_Key_m221608719((KeyValuePair_2_t1267962911 *)(KeyValuePair_2_t1267962911 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m221608719_RuntimeMethod_var);
			RuntimeObject * L_9 = V_3;
			JsonSerializer_t1424496335 * L_10 = ___serializer2;
			IL2CPP_RUNTIME_CLASS_INIT(JToken_t1038539247_il2cpp_TypeInfo_var);
			JToken_t1038539247 * L_11 = JToken_FromObject_m1495845376(NULL /*static, unused*/, (RuntimeObject *)L_9, (JsonSerializer_t1424496335 *)L_10, /*hidden argument*/NULL);
			NullCheck((JObject_t2059125928 *)L_7);
			JObject_set_Item_m3337384077((JObject_t2059125928 *)L_7, (String_t*)L_8, (JToken_t1038539247 *)L_11, /*hidden argument*/NULL);
		}

IL_0041:
		{
			bool L_12 = Enumerator_MoveNext_m79352559((Enumerator_t824473519 *)(Enumerator_t824473519 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m79352559_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0017;
			}
		}

IL_004d:
		{
			IL2CPP_LEAVE(0x60, FINALLY_0052);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		Il2CppFakeBox<Enumerator_t824473519 > L_13(Enumerator_t824473519_il2cpp_TypeInfo_var, (&V_2));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__90 = il2cpp_codegen_get_interface_invoke_data(0, &L_13, IDisposable_t3640265483_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__90.methodPtr)((RuntimeObject*)(&L_13), /*hidden argument*/il2cpp_virtual_invoke_data__90.method);
		V_2 = L_13.m_Value;
		IL2CPP_END_FINALLY(82)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_JUMP_TBL(0x60, IL_0060)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0060:
	{
		JObject_t2059125928 * L_14 = V_0;
		JsonWriter_t1467272295 * L_15 = ___writer0;
		JsonConverterU5BU5D_t155849004* L_16 = (JsonConverterU5BU5D_t155849004*)SZArrayNew(JsonConverterU5BU5D_t155849004_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck((JToken_t1038539247 *)L_14);
		VirtActionInvoker2< JsonWriter_t1467272295 *, JsonConverterU5BU5D_t155849004* >::Invoke(18 /* System.Void Newtonsoft.Json.Linq.JToken::WriteTo(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.JsonConverter[]) */, (JToken_t1038539247 *)L_14, (JsonWriter_t1467272295 *)L_15, (JsonConverterU5BU5D_t155849004*)L_16);
		return;
	}
}
// System.String WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Quaternion>::<GetProperties>m__0(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* PartialConverter_1_U3CGetPropertiesU3Em__0_m2042861583_gshared (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
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
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Rect>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PartialConverter_1__ctor_m3202811919_gshared (PartialConverter_1_t26552284 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((JsonConverter_t1047106545 *)__this);
		JsonConverter__ctor_m2308226415((JsonConverter_t1047106545 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MemberInfo WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Rect>::GetMember(System.String)
extern "C" IL2CPP_METHOD_ATTR MemberInfo_t * PartialConverter_1_GetMember_m2703492604_gshared (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_GetMember_m2703492604_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FieldInfo_t * V_1 = NULL;
	PropertyInfo_t * V_2 = NULL;
	{
		V_0 = (int32_t)((int32_t)20);
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___name0;
		int32_t L_3 = V_0;
		NullCheck((Type_t *)L_1);
		FieldInfo_t * L_4 = VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(49 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, (Type_t *)L_1, (String_t*)L_2, (int32_t)L_3);
		V_1 = (FieldInfo_t *)L_4;
		FieldInfo_t * L_5 = V_1;
		if (!L_5)
		{
			goto IL_001d;
		}
	}
	{
		FieldInfo_t * L_6 = V_1;
		return L_6;
	}

IL_001d:
	{
		RuntimeTypeHandle_t3027515415  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_7, /*hidden argument*/NULL);
		String_t* L_9 = ___name0;
		int32_t L_10 = V_0;
		NullCheck((Type_t *)L_8);
		PropertyInfo_t * L_11 = Type_GetProperty_m4206634422((Type_t *)L_8, (String_t*)L_9, (int32_t)L_10, /*hidden argument*/NULL);
		V_2 = (PropertyInfo_t *)L_11;
		PropertyInfo_t * L_12 = V_2;
		if (L_12)
		{
			goto IL_0040;
		}
	}
	{
		String_t* L_13 = ___name0;
		((  void (*) (RuntimeObject * /* static, unused */, String_t*, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, (String_t*)L_13, (String_t*)_stringLiteral3818767439, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_0040:
	{
		PropertyInfo_t * L_14 = V_2;
		NullCheck((PropertyInfo_t *)L_14);
		MethodInfo_t * L_15 = PropertyInfo_GetGetMethod_m1510309854((PropertyInfo_t *)L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_16 = ___name0;
		((  void (*) (RuntimeObject * /* static, unused */, String_t*, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, (String_t*)L_16, (String_t*)_stringLiteral234128521, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_0056:
	{
		PropertyInfo_t * L_17 = V_2;
		NullCheck((PropertyInfo_t *)L_17);
		MethodInfo_t * L_18 = PropertyInfo_GetSetMethod_m66158558((PropertyInfo_t *)L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_006c;
		}
	}
	{
		String_t* L_19 = ___name0;
		((  void (*) (RuntimeObject * /* static, unused */, String_t*, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, (String_t*)L_19, (String_t*)_stringLiteral3534955218, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_006c:
	{
		PropertyInfo_t * L_20 = V_2;
		NullCheck((PropertyInfo_t *)L_20);
		ParameterInfoU5BU5D_t390618515* L_21 = VirtFuncInvoker0< ParameterInfoU5BU5D_t390618515* >::Invoke(22 /* System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters() */, (PropertyInfo_t *)L_20);
		bool L_22 = Enumerable_Any_TisParameterInfo_t1861056598_m2308149110(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_21, /*hidden argument*/Enumerable_Any_TisParameterInfo_t1861056598_m2308149110_RuntimeMethod_var);
		if (!L_22)
		{
			goto IL_0087;
		}
	}
	{
		String_t* L_23 = ___name0;
		((  void (*) (RuntimeObject * /* static, unused */, String_t*, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, (String_t*)L_23, (String_t*)_stringLiteral486677601, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_0087:
	{
		PropertyInfo_t * L_24 = V_2;
		return L_24;
	}
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Rect>::Throw(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void PartialConverter_1_Throw_m113887690_gshared (RuntimeObject * __this /* static, unused */, String_t* ___name0, String_t* ___format1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_Throw_m113887690_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___format1;
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_1, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_2);
		String_t* L_4 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m3755062657(NULL /*static, unused*/, (String_t*)L_3, (String_t*)_stringLiteral3452614530, (String_t*)L_4, /*hidden argument*/NULL);
		String_t* L_6 = String_Format_m2844511972(NULL /*static, unused*/, (String_t*)L_0, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_7 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_7, (String_t*)L_6, (String_t*)_stringLiteral62725243, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, PartialConverter_1_Throw_m113887690_RuntimeMethod_var);
	}
}
// System.Object WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Rect>::GetValue(System.Reflection.MemberInfo,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * PartialConverter_1_GetValue_m3726615107_gshared (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___member0, RuntimeObject * ___target1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_GetValue_m3726615107_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInfo_t * L_0 = ___member0;
		if (!((FieldInfo_t *)IsInst((RuntimeObject*)L_0, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0018;
		}
	}
	{
		MemberInfo_t * L_1 = ___member0;
		RuntimeObject * L_2 = ___target1;
		NullCheck((FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		RuntimeObject * L_3 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(18 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, (FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)), (RuntimeObject *)L_2);
		return L_3;
	}

IL_0018:
	{
		MemberInfo_t * L_4 = ___member0;
		RuntimeObject * L_5 = ___target1;
		NullCheck((PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)));
		RuntimeObject * L_6 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t2843939325* >::Invoke(25 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, (PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)), (RuntimeObject *)L_5, (ObjectU5BU5D_t2843939325*)(ObjectU5BU5D_t2843939325*)NULL);
		return L_6;
	}
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Rect>::SetValue(System.Reflection.MemberInfo,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR void PartialConverter_1_SetValue_m982282995_gshared (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___member0, RuntimeObject * ___target1, RuntimeObject * ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_SetValue_m982282995_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInfo_t * L_0 = ___member0;
		if (!((FieldInfo_t *)IsInst((RuntimeObject*)L_0, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_001d;
		}
	}
	{
		MemberInfo_t * L_1 = ___member0;
		RuntimeObject * L_2 = ___target1;
		RuntimeObject * L_3 = ___value2;
		NullCheck((FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		FieldInfo_SetValue_m2460171138((FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)), (RuntimeObject *)L_2, (RuntimeObject *)L_3, /*hidden argument*/NULL);
		goto IL_002b;
	}

IL_001d:
	{
		MemberInfo_t * L_4 = ___member0;
		RuntimeObject * L_5 = ___target1;
		RuntimeObject * L_6 = ___value2;
		NullCheck((PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)));
		VirtActionInvoker3< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t2843939325* >::Invoke(27 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, (PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)), (RuntimeObject *)L_5, (RuntimeObject *)L_6, (ObjectU5BU5D_t2843939325*)(ObjectU5BU5D_t2843939325*)NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Type WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Rect>::GetValueType(System.Reflection.MemberInfo)
extern "C" IL2CPP_METHOD_ATTR Type_t * PartialConverter_1_GetValueType_m565225238_gshared (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___member0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_GetValueType_m565225238_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInfo_t * L_0 = ___member0;
		if (!((FieldInfo_t *)IsInst((RuntimeObject*)L_0, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		MemberInfo_t * L_1 = ___member0;
		NullCheck((FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		Type_t * L_2 = VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, (FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		return L_2;
	}

IL_0017:
	{
		MemberInfo_t * L_3 = ___member0;
		NullCheck((PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_3, PropertyInfo_t_il2cpp_TypeInfo_var)));
		Type_t * L_4 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, (PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_3, PropertyInfo_t_il2cpp_TypeInfo_var)));
		return L_4;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Rect>::GetProperties()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t3165258040 * PartialConverter_1_GetProperties_m4027436282_gshared (PartialConverter_1_t26552284 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_GetProperties_m4027436282_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t1281789340* V_0 = NULL;
	StringU5BU5D_t1281789340* G_B7_0 = NULL;
	StringU5BU5D_t1281789340* G_B6_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	Func_2_t3947292210 * G_B13_0 = NULL;
	RuntimeObject* G_B13_1 = NULL;
	Func_2_t3947292210 * G_B12_0 = NULL;
	RuntimeObject* G_B12_1 = NULL;
	{
		Dictionary_2_t3165258040 * L_0 = ((PartialConverter_1_t26552284_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get__properties_0();
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		Dictionary_2_t3165258040 * L_1 = ((PartialConverter_1_t26552284_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get__properties_0();
		return L_1;
	}

IL_0010:
	{
		NullCheck((PartialConverter_1_t26552284 *)__this);
		StringU5BU5D_t1281789340* L_2 = VirtFuncInvoker0< StringU5BU5D_t1281789340* >::Invoke(9 /* System.String[] WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Rect>::GetPropertyNames() */, (PartialConverter_1_t26552284 *)__this);
		V_0 = (StringU5BU5D_t1281789340*)L_2;
		StringU5BU5D_t1281789340* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		StringU5BU5D_t1281789340* L_4 = V_0;
		bool L_5 = Enumerable_Any_TisString_t_m3986012742(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_4, /*hidden argument*/Enumerable_Any_TisString_t_m3986012742_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0033;
		}
	}

IL_0028:
	{
		InvalidProgramException_t3836716986 * L_6 = (InvalidProgramException_t3836716986 *)il2cpp_codegen_object_new(InvalidProgramException_t3836716986_il2cpp_TypeInfo_var);
		InvalidProgramException__ctor_m3976792134(L_6, (String_t*)_stringLiteral1148368186, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, PartialConverter_1_GetProperties_m4027436282_RuntimeMethod_var);
	}

IL_0033:
	{
		StringU5BU5D_t1281789340* L_7 = V_0;
		Func_2_t2197129486 * L_8 = ((PartialConverter_1_t26552284_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__mgU24cache0_1();
		G_B6_0 = L_7;
		if (L_8)
		{
			G_B7_0 = L_7;
			goto IL_004c;
		}
	}
	{
		intptr_t L_9 = (intptr_t)String_IsNullOrEmpty_m2969720369_RuntimeMethod_var;
		Func_2_t2197129486 * L_10 = (Func_2_t2197129486 *)il2cpp_codegen_object_new(Func_2_t2197129486_il2cpp_TypeInfo_var);
		Func_2__ctor_m4235938257(L_10, (RuntimeObject *)NULL, (intptr_t)L_9, /*hidden argument*/Func_2__ctor_m4235938257_RuntimeMethod_var);
		((PartialConverter_1_t26552284_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->set_U3CU3Ef__mgU24cache0_1(L_10);
		G_B7_0 = G_B6_0;
	}

IL_004c:
	{
		Func_2_t2197129486 * L_11 = ((PartialConverter_1_t26552284_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__mgU24cache0_1();
		bool L_12 = Enumerable_Any_TisString_t_m3256256093(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)G_B7_0, (Func_2_t2197129486 *)L_11, /*hidden argument*/Enumerable_Any_TisString_t_m3256256093_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_0066;
		}
	}
	{
		InvalidProgramException_t3836716986 * L_13 = (InvalidProgramException_t3836716986 *)il2cpp_codegen_object_new(InvalidProgramException_t3836716986_il2cpp_TypeInfo_var);
		InvalidProgramException__ctor_m3976792134(L_13, (String_t*)_stringLiteral3827062036, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, NULL, PartialConverter_1_GetProperties_m4027436282_RuntimeMethod_var);
	}

IL_0066:
	{
		StringU5BU5D_t1281789340* L_14 = V_0;
		RuntimeObject* L_15 = Enumerable_Distinct_TisString_t_m564215000(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_14, /*hidden argument*/Enumerable_Distinct_TisString_t_m564215000_RuntimeMethod_var);
		Func_2_t3947292210 * L_16 = ((PartialConverter_1_t26552284_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__amU24cache0_3();
		G_B10_0 = L_15;
		if (L_16)
		{
			G_B11_0 = L_15;
			goto IL_0084;
		}
	}
	{
		intptr_t L_17 = (intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4);
		Func_2_t3947292210 * L_18 = (Func_2_t3947292210 *)il2cpp_codegen_object_new(Func_2_t3947292210_il2cpp_TypeInfo_var);
		Func_2__ctor_m1878178629(L_18, (RuntimeObject *)NULL, (intptr_t)L_17, /*hidden argument*/Func_2__ctor_m1878178629_RuntimeMethod_var);
		((PartialConverter_1_t26552284_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->set_U3CU3Ef__amU24cache0_3(L_18);
		G_B11_0 = G_B10_0;
	}

IL_0084:
	{
		Func_2_t3947292210 * L_19 = ((PartialConverter_1_t26552284_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__amU24cache0_3();
		Func_2_t1184875966 * L_20 = ((PartialConverter_1_t26552284_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__mgU24cache1_2();
		G_B12_0 = L_19;
		G_B12_1 = G_B11_0;
		if (L_20)
		{
			G_B13_0 = L_19;
			G_B13_1 = G_B11_0;
			goto IL_00a1;
		}
	}
	{
		intptr_t L_21 = (intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5);
		Func_2_t1184875966 * L_22 = (Func_2_t1184875966 *)il2cpp_codegen_object_new(Func_2_t1184875966_il2cpp_TypeInfo_var);
		Func_2__ctor_m1082416029(L_22, (RuntimeObject *)NULL, (intptr_t)L_21, /*hidden argument*/Func_2__ctor_m1082416029_RuntimeMethod_var);
		((PartialConverter_1_t26552284_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->set_U3CU3Ef__mgU24cache1_2(L_22);
		G_B13_0 = G_B12_0;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		Func_2_t1184875966 * L_23 = ((PartialConverter_1_t26552284_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__mgU24cache1_2();
		Dictionary_2_t3165258040 * L_24 = Enumerable_ToDictionary_TisString_t_TisString_t_TisMemberInfo_t_m2153618120(NULL /*static, unused*/, (RuntimeObject*)G_B13_1, (Func_2_t3947292210 *)G_B13_0, (Func_2_t1184875966 *)L_23, /*hidden argument*/Enumerable_ToDictionary_TisString_t_TisString_t_TisMemberInfo_t_m2153618120_RuntimeMethod_var);
		((PartialConverter_1_t26552284_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->set__properties_0(L_24);
		Dictionary_2_t3165258040 * L_25 = ((PartialConverter_1_t26552284_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get__properties_0();
		return L_25;
	}
}
// T WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Rect>::CreateInstance()
extern "C" IL2CPP_METHOD_ATTR Rect_t2360479859  PartialConverter_1_CreateInstance_m2239700060_gshared (PartialConverter_1_t26552284 * __this, const RuntimeMethod* method)
{
	{
		Rect_t2360479859  L_0 = ((  Rect_t2360479859  (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		return L_0;
	}
}
// System.Boolean WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Rect>::CanConvert(System.Type)
extern "C" IL2CPP_METHOD_ATTR bool PartialConverter_1_CanConvert_m70908369_gshared (PartialConverter_1_t26552284 * __this, Type_t * ___objectType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_CanConvert_m70908369_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		Type_t * L_2 = ___objectType0;
		return (bool)((((RuntimeObject*)(Type_t *)L_1) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
	}
}
// System.Object WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Rect>::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * PartialConverter_1_ReadJson_m2367244053_gshared (PartialConverter_1_t26552284 * __this, JsonReader_t2369136700 * ___reader0, Type_t * ___objectType1, RuntimeObject * ___existingValue2, JsonSerializer_t1424496335 * ___serializer3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_ReadJson_m2367244053_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JObject_t2059125928 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	KeyValuePair_2_t1267962911  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Enumerator_t824473519  V_3;
	memset(&V_3, 0, sizeof(V_3));
	RuntimeObject * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		JsonReader_t2369136700 * L_0 = ___reader0;
		NullCheck((JsonReader_t2369136700 *)L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(5 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, (JsonReader_t2369136700 *)L_0);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_000f;
		}
	}
	{
		return NULL;
	}

IL_000f:
	{
		JsonReader_t2369136700 * L_2 = ___reader0;
		JObject_t2059125928 * L_3 = JObject_Load_m3922106929(NULL /*static, unused*/, (JsonReader_t2369136700 *)L_2, /*hidden argument*/NULL);
		V_0 = (JObject_t2059125928 *)L_3;
		NullCheck((PartialConverter_1_t26552284 *)__this);
		Rect_t2360479859  L_4 = VirtFuncInvoker0< Rect_t2360479859  >::Invoke(10 /* T WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Rect>::CreateInstance() */, (PartialConverter_1_t26552284 *)__this);
		Rect_t2360479859  L_5 = L_4;
		RuntimeObject * L_6 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8), &L_5);
		V_1 = (RuntimeObject *)L_6;
		NullCheck((PartialConverter_1_t26552284 *)__this);
		Dictionary_2_t3165258040 * L_7 = ((  Dictionary_2_t3165258040 * (*) (PartialConverter_1_t26552284 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((PartialConverter_1_t26552284 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		NullCheck((Dictionary_2_t3165258040 *)L_7);
		Enumerator_t824473519  L_8 = Dictionary_2_GetEnumerator_m4199775080((Dictionary_2_t3165258040 *)L_7, /*hidden argument*/Dictionary_2_GetEnumerator_m4199775080_RuntimeMethod_var);
		V_3 = (Enumerator_t824473519 )L_8;
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006c;
		}

IL_0033:
		{
			KeyValuePair_2_t1267962911  L_9 = Enumerator_get_Current_m841967122((Enumerator_t824473519 *)(Enumerator_t824473519 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m841967122_RuntimeMethod_var);
			V_2 = (KeyValuePair_2_t1267962911 )L_9;
			JObject_t2059125928 * L_10 = V_0;
			String_t* L_11 = KeyValuePair_2_get_Key_m221608719((KeyValuePair_2_t1267962911 *)(KeyValuePair_2_t1267962911 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Key_m221608719_RuntimeMethod_var);
			NullCheck((JObject_t2059125928 *)L_10);
			JToken_t1038539247 * L_12 = JObject_get_Item_m332585514((JObject_t2059125928 *)L_10, (String_t*)L_11, /*hidden argument*/NULL);
			MemberInfo_t * L_13 = KeyValuePair_2_get_Value_m188113207((KeyValuePair_2_t1267962911 *)(KeyValuePair_2_t1267962911 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m188113207_RuntimeMethod_var);
			Type_t * L_14 = ((  Type_t * (*) (RuntimeObject * /* static, unused */, MemberInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(NULL /*static, unused*/, (MemberInfo_t *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
			JsonSerializer_t1424496335 * L_15 = ___serializer3;
			NullCheck((JToken_t1038539247 *)L_12);
			RuntimeObject * L_16 = JToken_ToObject_m1717874774((JToken_t1038539247 *)L_12, (Type_t *)L_14, (JsonSerializer_t1424496335 *)L_15, /*hidden argument*/NULL);
			V_4 = (RuntimeObject *)L_16;
			MemberInfo_t * L_17 = KeyValuePair_2_get_Value_m188113207((KeyValuePair_2_t1267962911 *)(KeyValuePair_2_t1267962911 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m188113207_RuntimeMethod_var);
			RuntimeObject * L_18 = V_1;
			RuntimeObject * L_19 = V_4;
			((  void (*) (RuntimeObject * /* static, unused */, MemberInfo_t *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(NULL /*static, unused*/, (MemberInfo_t *)L_17, (RuntimeObject *)L_18, (RuntimeObject *)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		}

IL_006c:
		{
			bool L_20 = Enumerator_MoveNext_m79352559((Enumerator_t824473519 *)(Enumerator_t824473519 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m79352559_RuntimeMethod_var);
			if (L_20)
			{
				goto IL_0033;
			}
		}

IL_0078:
		{
			IL2CPP_LEAVE(0x8B, FINALLY_007d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007d;
	}

FINALLY_007d:
	{ // begin finally (depth: 1)
		Il2CppFakeBox<Enumerator_t824473519 > L_21(Enumerator_t824473519_il2cpp_TypeInfo_var, (&V_3));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__133 = il2cpp_codegen_get_interface_invoke_data(0, &L_21, IDisposable_t3640265483_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__133.methodPtr)((RuntimeObject*)(&L_21), /*hidden argument*/il2cpp_virtual_invoke_data__133.method);
		V_3 = L_21.m_Value;
		IL2CPP_END_FINALLY(125)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(125)
	{
		IL2CPP_JUMP_TBL(0x8B, IL_008b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_008b:
	{
		RuntimeObject * L_22 = V_1;
		return L_22;
	}
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Rect>::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C" IL2CPP_METHOD_ATTR void PartialConverter_1_WriteJson_m2925692181_gshared (PartialConverter_1_t26552284 * __this, JsonWriter_t1467272295 * ___writer0, RuntimeObject * ___value1, JsonSerializer_t1424496335 * ___serializer2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_WriteJson_m2925692181_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JObject_t2059125928 * V_0 = NULL;
	KeyValuePair_2_t1267962911  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Enumerator_t824473519  V_2;
	memset(&V_2, 0, sizeof(V_2));
	RuntimeObject * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		JObject_t2059125928 * L_0 = (JObject_t2059125928 *)il2cpp_codegen_object_new(JObject_t2059125928_il2cpp_TypeInfo_var);
		JObject__ctor_m1738103074(L_0, /*hidden argument*/NULL);
		V_0 = (JObject_t2059125928 *)L_0;
		NullCheck((PartialConverter_1_t26552284 *)__this);
		Dictionary_2_t3165258040 * L_1 = ((  Dictionary_2_t3165258040 * (*) (PartialConverter_1_t26552284 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((PartialConverter_1_t26552284 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		NullCheck((Dictionary_2_t3165258040 *)L_1);
		Enumerator_t824473519  L_2 = Dictionary_2_GetEnumerator_m4199775080((Dictionary_2_t3165258040 *)L_1, /*hidden argument*/Dictionary_2_GetEnumerator_m4199775080_RuntimeMethod_var);
		V_2 = (Enumerator_t824473519 )L_2;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0041;
		}

IL_0017:
		{
			KeyValuePair_2_t1267962911  L_3 = Enumerator_get_Current_m841967122((Enumerator_t824473519 *)(Enumerator_t824473519 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m841967122_RuntimeMethod_var);
			V_1 = (KeyValuePair_2_t1267962911 )L_3;
			MemberInfo_t * L_4 = KeyValuePair_2_get_Value_m188113207((KeyValuePair_2_t1267962911 *)(KeyValuePair_2_t1267962911 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m188113207_RuntimeMethod_var);
			RuntimeObject * L_5 = ___value1;
			RuntimeObject * L_6 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, MemberInfo_t *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)(NULL /*static, unused*/, (MemberInfo_t *)L_4, (RuntimeObject *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
			V_3 = (RuntimeObject *)L_6;
			JObject_t2059125928 * L_7 = V_0;
			String_t* L_8 = KeyValuePair_2_get_Key_m221608719((KeyValuePair_2_t1267962911 *)(KeyValuePair_2_t1267962911 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m221608719_RuntimeMethod_var);
			RuntimeObject * L_9 = V_3;
			JsonSerializer_t1424496335 * L_10 = ___serializer2;
			IL2CPP_RUNTIME_CLASS_INIT(JToken_t1038539247_il2cpp_TypeInfo_var);
			JToken_t1038539247 * L_11 = JToken_FromObject_m1495845376(NULL /*static, unused*/, (RuntimeObject *)L_9, (JsonSerializer_t1424496335 *)L_10, /*hidden argument*/NULL);
			NullCheck((JObject_t2059125928 *)L_7);
			JObject_set_Item_m3337384077((JObject_t2059125928 *)L_7, (String_t*)L_8, (JToken_t1038539247 *)L_11, /*hidden argument*/NULL);
		}

IL_0041:
		{
			bool L_12 = Enumerator_MoveNext_m79352559((Enumerator_t824473519 *)(Enumerator_t824473519 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m79352559_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0017;
			}
		}

IL_004d:
		{
			IL2CPP_LEAVE(0x60, FINALLY_0052);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		Il2CppFakeBox<Enumerator_t824473519 > L_13(Enumerator_t824473519_il2cpp_TypeInfo_var, (&V_2));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__90 = il2cpp_codegen_get_interface_invoke_data(0, &L_13, IDisposable_t3640265483_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__90.methodPtr)((RuntimeObject*)(&L_13), /*hidden argument*/il2cpp_virtual_invoke_data__90.method);
		V_2 = L_13.m_Value;
		IL2CPP_END_FINALLY(82)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_JUMP_TBL(0x60, IL_0060)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0060:
	{
		JObject_t2059125928 * L_14 = V_0;
		JsonWriter_t1467272295 * L_15 = ___writer0;
		JsonConverterU5BU5D_t155849004* L_16 = (JsonConverterU5BU5D_t155849004*)SZArrayNew(JsonConverterU5BU5D_t155849004_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck((JToken_t1038539247 *)L_14);
		VirtActionInvoker2< JsonWriter_t1467272295 *, JsonConverterU5BU5D_t155849004* >::Invoke(18 /* System.Void Newtonsoft.Json.Linq.JToken::WriteTo(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.JsonConverter[]) */, (JToken_t1038539247 *)L_14, (JsonWriter_t1467272295 *)L_15, (JsonConverterU5BU5D_t155849004*)L_16);
		return;
	}
}
// System.String WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Rect>::<GetProperties>m__0(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* PartialConverter_1_U3CGetPropertiesU3Em__0_m4280975938_gshared (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
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
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector2>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PartialConverter_1__ctor_m2870249333_gshared (PartialConverter_1_t4117269244 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((JsonConverter_t1047106545 *)__this);
		JsonConverter__ctor_m2308226415((JsonConverter_t1047106545 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MemberInfo WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector2>::GetMember(System.String)
extern "C" IL2CPP_METHOD_ATTR MemberInfo_t * PartialConverter_1_GetMember_m2421627783_gshared (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_GetMember_m2421627783_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FieldInfo_t * V_1 = NULL;
	PropertyInfo_t * V_2 = NULL;
	{
		V_0 = (int32_t)((int32_t)20);
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___name0;
		int32_t L_3 = V_0;
		NullCheck((Type_t *)L_1);
		FieldInfo_t * L_4 = VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(49 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, (Type_t *)L_1, (String_t*)L_2, (int32_t)L_3);
		V_1 = (FieldInfo_t *)L_4;
		FieldInfo_t * L_5 = V_1;
		if (!L_5)
		{
			goto IL_001d;
		}
	}
	{
		FieldInfo_t * L_6 = V_1;
		return L_6;
	}

IL_001d:
	{
		RuntimeTypeHandle_t3027515415  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_7, /*hidden argument*/NULL);
		String_t* L_9 = ___name0;
		int32_t L_10 = V_0;
		NullCheck((Type_t *)L_8);
		PropertyInfo_t * L_11 = Type_GetProperty_m4206634422((Type_t *)L_8, (String_t*)L_9, (int32_t)L_10, /*hidden argument*/NULL);
		V_2 = (PropertyInfo_t *)L_11;
		PropertyInfo_t * L_12 = V_2;
		if (L_12)
		{
			goto IL_0040;
		}
	}
	{
		String_t* L_13 = ___name0;
		((  void (*) (RuntimeObject * /* static, unused */, String_t*, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, (String_t*)L_13, (String_t*)_stringLiteral3818767439, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_0040:
	{
		PropertyInfo_t * L_14 = V_2;
		NullCheck((PropertyInfo_t *)L_14);
		MethodInfo_t * L_15 = PropertyInfo_GetGetMethod_m1510309854((PropertyInfo_t *)L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_16 = ___name0;
		((  void (*) (RuntimeObject * /* static, unused */, String_t*, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, (String_t*)L_16, (String_t*)_stringLiteral234128521, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_0056:
	{
		PropertyInfo_t * L_17 = V_2;
		NullCheck((PropertyInfo_t *)L_17);
		MethodInfo_t * L_18 = PropertyInfo_GetSetMethod_m66158558((PropertyInfo_t *)L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_006c;
		}
	}
	{
		String_t* L_19 = ___name0;
		((  void (*) (RuntimeObject * /* static, unused */, String_t*, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, (String_t*)L_19, (String_t*)_stringLiteral3534955218, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_006c:
	{
		PropertyInfo_t * L_20 = V_2;
		NullCheck((PropertyInfo_t *)L_20);
		ParameterInfoU5BU5D_t390618515* L_21 = VirtFuncInvoker0< ParameterInfoU5BU5D_t390618515* >::Invoke(22 /* System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters() */, (PropertyInfo_t *)L_20);
		bool L_22 = Enumerable_Any_TisParameterInfo_t1861056598_m2308149110(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_21, /*hidden argument*/Enumerable_Any_TisParameterInfo_t1861056598_m2308149110_RuntimeMethod_var);
		if (!L_22)
		{
			goto IL_0087;
		}
	}
	{
		String_t* L_23 = ___name0;
		((  void (*) (RuntimeObject * /* static, unused */, String_t*, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, (String_t*)L_23, (String_t*)_stringLiteral486677601, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_0087:
	{
		PropertyInfo_t * L_24 = V_2;
		return L_24;
	}
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector2>::Throw(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void PartialConverter_1_Throw_m204226870_gshared (RuntimeObject * __this /* static, unused */, String_t* ___name0, String_t* ___format1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_Throw_m204226870_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___format1;
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_1, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_2);
		String_t* L_4 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m3755062657(NULL /*static, unused*/, (String_t*)L_3, (String_t*)_stringLiteral3452614530, (String_t*)L_4, /*hidden argument*/NULL);
		String_t* L_6 = String_Format_m2844511972(NULL /*static, unused*/, (String_t*)L_0, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_7 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_7, (String_t*)L_6, (String_t*)_stringLiteral62725243, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, PartialConverter_1_Throw_m204226870_RuntimeMethod_var);
	}
}
// System.Object WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector2>::GetValue(System.Reflection.MemberInfo,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * PartialConverter_1_GetValue_m3646507789_gshared (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___member0, RuntimeObject * ___target1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_GetValue_m3646507789_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInfo_t * L_0 = ___member0;
		if (!((FieldInfo_t *)IsInst((RuntimeObject*)L_0, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0018;
		}
	}
	{
		MemberInfo_t * L_1 = ___member0;
		RuntimeObject * L_2 = ___target1;
		NullCheck((FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		RuntimeObject * L_3 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(18 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, (FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)), (RuntimeObject *)L_2);
		return L_3;
	}

IL_0018:
	{
		MemberInfo_t * L_4 = ___member0;
		RuntimeObject * L_5 = ___target1;
		NullCheck((PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)));
		RuntimeObject * L_6 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t2843939325* >::Invoke(25 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, (PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)), (RuntimeObject *)L_5, (ObjectU5BU5D_t2843939325*)(ObjectU5BU5D_t2843939325*)NULL);
		return L_6;
	}
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector2>::SetValue(System.Reflection.MemberInfo,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR void PartialConverter_1_SetValue_m3860761639_gshared (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___member0, RuntimeObject * ___target1, RuntimeObject * ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_SetValue_m3860761639_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInfo_t * L_0 = ___member0;
		if (!((FieldInfo_t *)IsInst((RuntimeObject*)L_0, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_001d;
		}
	}
	{
		MemberInfo_t * L_1 = ___member0;
		RuntimeObject * L_2 = ___target1;
		RuntimeObject * L_3 = ___value2;
		NullCheck((FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		FieldInfo_SetValue_m2460171138((FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)), (RuntimeObject *)L_2, (RuntimeObject *)L_3, /*hidden argument*/NULL);
		goto IL_002b;
	}

IL_001d:
	{
		MemberInfo_t * L_4 = ___member0;
		RuntimeObject * L_5 = ___target1;
		RuntimeObject * L_6 = ___value2;
		NullCheck((PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)));
		VirtActionInvoker3< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t2843939325* >::Invoke(27 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, (PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)), (RuntimeObject *)L_5, (RuntimeObject *)L_6, (ObjectU5BU5D_t2843939325*)(ObjectU5BU5D_t2843939325*)NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Type WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector2>::GetValueType(System.Reflection.MemberInfo)
extern "C" IL2CPP_METHOD_ATTR Type_t * PartialConverter_1_GetValueType_m1540968719_gshared (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___member0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_GetValueType_m1540968719_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInfo_t * L_0 = ___member0;
		if (!((FieldInfo_t *)IsInst((RuntimeObject*)L_0, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		MemberInfo_t * L_1 = ___member0;
		NullCheck((FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		Type_t * L_2 = VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, (FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		return L_2;
	}

IL_0017:
	{
		MemberInfo_t * L_3 = ___member0;
		NullCheck((PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_3, PropertyInfo_t_il2cpp_TypeInfo_var)));
		Type_t * L_4 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, (PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_3, PropertyInfo_t_il2cpp_TypeInfo_var)));
		return L_4;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector2>::GetProperties()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t3165258040 * PartialConverter_1_GetProperties_m78812442_gshared (PartialConverter_1_t4117269244 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_GetProperties_m78812442_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t1281789340* V_0 = NULL;
	StringU5BU5D_t1281789340* G_B7_0 = NULL;
	StringU5BU5D_t1281789340* G_B6_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	Func_2_t3947292210 * G_B13_0 = NULL;
	RuntimeObject* G_B13_1 = NULL;
	Func_2_t3947292210 * G_B12_0 = NULL;
	RuntimeObject* G_B12_1 = NULL;
	{
		Dictionary_2_t3165258040 * L_0 = ((PartialConverter_1_t4117269244_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get__properties_0();
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		Dictionary_2_t3165258040 * L_1 = ((PartialConverter_1_t4117269244_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get__properties_0();
		return L_1;
	}

IL_0010:
	{
		NullCheck((PartialConverter_1_t4117269244 *)__this);
		StringU5BU5D_t1281789340* L_2 = VirtFuncInvoker0< StringU5BU5D_t1281789340* >::Invoke(9 /* System.String[] WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector2>::GetPropertyNames() */, (PartialConverter_1_t4117269244 *)__this);
		V_0 = (StringU5BU5D_t1281789340*)L_2;
		StringU5BU5D_t1281789340* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		StringU5BU5D_t1281789340* L_4 = V_0;
		bool L_5 = Enumerable_Any_TisString_t_m3986012742(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_4, /*hidden argument*/Enumerable_Any_TisString_t_m3986012742_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0033;
		}
	}

IL_0028:
	{
		InvalidProgramException_t3836716986 * L_6 = (InvalidProgramException_t3836716986 *)il2cpp_codegen_object_new(InvalidProgramException_t3836716986_il2cpp_TypeInfo_var);
		InvalidProgramException__ctor_m3976792134(L_6, (String_t*)_stringLiteral1148368186, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, PartialConverter_1_GetProperties_m78812442_RuntimeMethod_var);
	}

IL_0033:
	{
		StringU5BU5D_t1281789340* L_7 = V_0;
		Func_2_t2197129486 * L_8 = ((PartialConverter_1_t4117269244_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__mgU24cache0_1();
		G_B6_0 = L_7;
		if (L_8)
		{
			G_B7_0 = L_7;
			goto IL_004c;
		}
	}
	{
		intptr_t L_9 = (intptr_t)String_IsNullOrEmpty_m2969720369_RuntimeMethod_var;
		Func_2_t2197129486 * L_10 = (Func_2_t2197129486 *)il2cpp_codegen_object_new(Func_2_t2197129486_il2cpp_TypeInfo_var);
		Func_2__ctor_m4235938257(L_10, (RuntimeObject *)NULL, (intptr_t)L_9, /*hidden argument*/Func_2__ctor_m4235938257_RuntimeMethod_var);
		((PartialConverter_1_t4117269244_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->set_U3CU3Ef__mgU24cache0_1(L_10);
		G_B7_0 = G_B6_0;
	}

IL_004c:
	{
		Func_2_t2197129486 * L_11 = ((PartialConverter_1_t4117269244_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__mgU24cache0_1();
		bool L_12 = Enumerable_Any_TisString_t_m3256256093(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)G_B7_0, (Func_2_t2197129486 *)L_11, /*hidden argument*/Enumerable_Any_TisString_t_m3256256093_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_0066;
		}
	}
	{
		InvalidProgramException_t3836716986 * L_13 = (InvalidProgramException_t3836716986 *)il2cpp_codegen_object_new(InvalidProgramException_t3836716986_il2cpp_TypeInfo_var);
		InvalidProgramException__ctor_m3976792134(L_13, (String_t*)_stringLiteral3827062036, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, NULL, PartialConverter_1_GetProperties_m78812442_RuntimeMethod_var);
	}

IL_0066:
	{
		StringU5BU5D_t1281789340* L_14 = V_0;
		RuntimeObject* L_15 = Enumerable_Distinct_TisString_t_m564215000(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_14, /*hidden argument*/Enumerable_Distinct_TisString_t_m564215000_RuntimeMethod_var);
		Func_2_t3947292210 * L_16 = ((PartialConverter_1_t4117269244_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__amU24cache0_3();
		G_B10_0 = L_15;
		if (L_16)
		{
			G_B11_0 = L_15;
			goto IL_0084;
		}
	}
	{
		intptr_t L_17 = (intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4);
		Func_2_t3947292210 * L_18 = (Func_2_t3947292210 *)il2cpp_codegen_object_new(Func_2_t3947292210_il2cpp_TypeInfo_var);
		Func_2__ctor_m1878178629(L_18, (RuntimeObject *)NULL, (intptr_t)L_17, /*hidden argument*/Func_2__ctor_m1878178629_RuntimeMethod_var);
		((PartialConverter_1_t4117269244_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->set_U3CU3Ef__amU24cache0_3(L_18);
		G_B11_0 = G_B10_0;
	}

IL_0084:
	{
		Func_2_t3947292210 * L_19 = ((PartialConverter_1_t4117269244_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__amU24cache0_3();
		Func_2_t1184875966 * L_20 = ((PartialConverter_1_t4117269244_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__mgU24cache1_2();
		G_B12_0 = L_19;
		G_B12_1 = G_B11_0;
		if (L_20)
		{
			G_B13_0 = L_19;
			G_B13_1 = G_B11_0;
			goto IL_00a1;
		}
	}
	{
		intptr_t L_21 = (intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5);
		Func_2_t1184875966 * L_22 = (Func_2_t1184875966 *)il2cpp_codegen_object_new(Func_2_t1184875966_il2cpp_TypeInfo_var);
		Func_2__ctor_m1082416029(L_22, (RuntimeObject *)NULL, (intptr_t)L_21, /*hidden argument*/Func_2__ctor_m1082416029_RuntimeMethod_var);
		((PartialConverter_1_t4117269244_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->set_U3CU3Ef__mgU24cache1_2(L_22);
		G_B13_0 = G_B12_0;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		Func_2_t1184875966 * L_23 = ((PartialConverter_1_t4117269244_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__mgU24cache1_2();
		Dictionary_2_t3165258040 * L_24 = Enumerable_ToDictionary_TisString_t_TisString_t_TisMemberInfo_t_m2153618120(NULL /*static, unused*/, (RuntimeObject*)G_B13_1, (Func_2_t3947292210 *)G_B13_0, (Func_2_t1184875966 *)L_23, /*hidden argument*/Enumerable_ToDictionary_TisString_t_TisString_t_TisMemberInfo_t_m2153618120_RuntimeMethod_var);
		((PartialConverter_1_t4117269244_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->set__properties_0(L_24);
		Dictionary_2_t3165258040 * L_25 = ((PartialConverter_1_t4117269244_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get__properties_0();
		return L_25;
	}
}
// T WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector2>::CreateInstance()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  PartialConverter_1_CreateInstance_m1046300350_gshared (PartialConverter_1_t4117269244 * __this, const RuntimeMethod* method)
{
	{
		Vector2_t2156229523  L_0 = ((  Vector2_t2156229523  (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		return L_0;
	}
}
// System.Boolean WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector2>::CanConvert(System.Type)
extern "C" IL2CPP_METHOD_ATTR bool PartialConverter_1_CanConvert_m1321099819_gshared (PartialConverter_1_t4117269244 * __this, Type_t * ___objectType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_CanConvert_m1321099819_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		Type_t * L_2 = ___objectType0;
		return (bool)((((RuntimeObject*)(Type_t *)L_1) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
	}
}
// System.Object WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector2>::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * PartialConverter_1_ReadJson_m3424496375_gshared (PartialConverter_1_t4117269244 * __this, JsonReader_t2369136700 * ___reader0, Type_t * ___objectType1, RuntimeObject * ___existingValue2, JsonSerializer_t1424496335 * ___serializer3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_ReadJson_m3424496375_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JObject_t2059125928 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	KeyValuePair_2_t1267962911  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Enumerator_t824473519  V_3;
	memset(&V_3, 0, sizeof(V_3));
	RuntimeObject * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		JsonReader_t2369136700 * L_0 = ___reader0;
		NullCheck((JsonReader_t2369136700 *)L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(5 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, (JsonReader_t2369136700 *)L_0);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_000f;
		}
	}
	{
		return NULL;
	}

IL_000f:
	{
		JsonReader_t2369136700 * L_2 = ___reader0;
		JObject_t2059125928 * L_3 = JObject_Load_m3922106929(NULL /*static, unused*/, (JsonReader_t2369136700 *)L_2, /*hidden argument*/NULL);
		V_0 = (JObject_t2059125928 *)L_3;
		NullCheck((PartialConverter_1_t4117269244 *)__this);
		Vector2_t2156229523  L_4 = VirtFuncInvoker0< Vector2_t2156229523  >::Invoke(10 /* T WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector2>::CreateInstance() */, (PartialConverter_1_t4117269244 *)__this);
		Vector2_t2156229523  L_5 = L_4;
		RuntimeObject * L_6 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8), &L_5);
		V_1 = (RuntimeObject *)L_6;
		NullCheck((PartialConverter_1_t4117269244 *)__this);
		Dictionary_2_t3165258040 * L_7 = ((  Dictionary_2_t3165258040 * (*) (PartialConverter_1_t4117269244 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((PartialConverter_1_t4117269244 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		NullCheck((Dictionary_2_t3165258040 *)L_7);
		Enumerator_t824473519  L_8 = Dictionary_2_GetEnumerator_m4199775080((Dictionary_2_t3165258040 *)L_7, /*hidden argument*/Dictionary_2_GetEnumerator_m4199775080_RuntimeMethod_var);
		V_3 = (Enumerator_t824473519 )L_8;
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006c;
		}

IL_0033:
		{
			KeyValuePair_2_t1267962911  L_9 = Enumerator_get_Current_m841967122((Enumerator_t824473519 *)(Enumerator_t824473519 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m841967122_RuntimeMethod_var);
			V_2 = (KeyValuePair_2_t1267962911 )L_9;
			JObject_t2059125928 * L_10 = V_0;
			String_t* L_11 = KeyValuePair_2_get_Key_m221608719((KeyValuePair_2_t1267962911 *)(KeyValuePair_2_t1267962911 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Key_m221608719_RuntimeMethod_var);
			NullCheck((JObject_t2059125928 *)L_10);
			JToken_t1038539247 * L_12 = JObject_get_Item_m332585514((JObject_t2059125928 *)L_10, (String_t*)L_11, /*hidden argument*/NULL);
			MemberInfo_t * L_13 = KeyValuePair_2_get_Value_m188113207((KeyValuePair_2_t1267962911 *)(KeyValuePair_2_t1267962911 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m188113207_RuntimeMethod_var);
			Type_t * L_14 = ((  Type_t * (*) (RuntimeObject * /* static, unused */, MemberInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(NULL /*static, unused*/, (MemberInfo_t *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
			JsonSerializer_t1424496335 * L_15 = ___serializer3;
			NullCheck((JToken_t1038539247 *)L_12);
			RuntimeObject * L_16 = JToken_ToObject_m1717874774((JToken_t1038539247 *)L_12, (Type_t *)L_14, (JsonSerializer_t1424496335 *)L_15, /*hidden argument*/NULL);
			V_4 = (RuntimeObject *)L_16;
			MemberInfo_t * L_17 = KeyValuePair_2_get_Value_m188113207((KeyValuePair_2_t1267962911 *)(KeyValuePair_2_t1267962911 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m188113207_RuntimeMethod_var);
			RuntimeObject * L_18 = V_1;
			RuntimeObject * L_19 = V_4;
			((  void (*) (RuntimeObject * /* static, unused */, MemberInfo_t *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(NULL /*static, unused*/, (MemberInfo_t *)L_17, (RuntimeObject *)L_18, (RuntimeObject *)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		}

IL_006c:
		{
			bool L_20 = Enumerator_MoveNext_m79352559((Enumerator_t824473519 *)(Enumerator_t824473519 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m79352559_RuntimeMethod_var);
			if (L_20)
			{
				goto IL_0033;
			}
		}

IL_0078:
		{
			IL2CPP_LEAVE(0x8B, FINALLY_007d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007d;
	}

FINALLY_007d:
	{ // begin finally (depth: 1)
		Il2CppFakeBox<Enumerator_t824473519 > L_21(Enumerator_t824473519_il2cpp_TypeInfo_var, (&V_3));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__133 = il2cpp_codegen_get_interface_invoke_data(0, &L_21, IDisposable_t3640265483_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__133.methodPtr)((RuntimeObject*)(&L_21), /*hidden argument*/il2cpp_virtual_invoke_data__133.method);
		V_3 = L_21.m_Value;
		IL2CPP_END_FINALLY(125)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(125)
	{
		IL2CPP_JUMP_TBL(0x8B, IL_008b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_008b:
	{
		RuntimeObject * L_22 = V_1;
		return L_22;
	}
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector2>::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C" IL2CPP_METHOD_ATTR void PartialConverter_1_WriteJson_m1060258212_gshared (PartialConverter_1_t4117269244 * __this, JsonWriter_t1467272295 * ___writer0, RuntimeObject * ___value1, JsonSerializer_t1424496335 * ___serializer2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_WriteJson_m1060258212_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JObject_t2059125928 * V_0 = NULL;
	KeyValuePair_2_t1267962911  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Enumerator_t824473519  V_2;
	memset(&V_2, 0, sizeof(V_2));
	RuntimeObject * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		JObject_t2059125928 * L_0 = (JObject_t2059125928 *)il2cpp_codegen_object_new(JObject_t2059125928_il2cpp_TypeInfo_var);
		JObject__ctor_m1738103074(L_0, /*hidden argument*/NULL);
		V_0 = (JObject_t2059125928 *)L_0;
		NullCheck((PartialConverter_1_t4117269244 *)__this);
		Dictionary_2_t3165258040 * L_1 = ((  Dictionary_2_t3165258040 * (*) (PartialConverter_1_t4117269244 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((PartialConverter_1_t4117269244 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		NullCheck((Dictionary_2_t3165258040 *)L_1);
		Enumerator_t824473519  L_2 = Dictionary_2_GetEnumerator_m4199775080((Dictionary_2_t3165258040 *)L_1, /*hidden argument*/Dictionary_2_GetEnumerator_m4199775080_RuntimeMethod_var);
		V_2 = (Enumerator_t824473519 )L_2;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0041;
		}

IL_0017:
		{
			KeyValuePair_2_t1267962911  L_3 = Enumerator_get_Current_m841967122((Enumerator_t824473519 *)(Enumerator_t824473519 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m841967122_RuntimeMethod_var);
			V_1 = (KeyValuePair_2_t1267962911 )L_3;
			MemberInfo_t * L_4 = KeyValuePair_2_get_Value_m188113207((KeyValuePair_2_t1267962911 *)(KeyValuePair_2_t1267962911 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m188113207_RuntimeMethod_var);
			RuntimeObject * L_5 = ___value1;
			RuntimeObject * L_6 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, MemberInfo_t *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)(NULL /*static, unused*/, (MemberInfo_t *)L_4, (RuntimeObject *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
			V_3 = (RuntimeObject *)L_6;
			JObject_t2059125928 * L_7 = V_0;
			String_t* L_8 = KeyValuePair_2_get_Key_m221608719((KeyValuePair_2_t1267962911 *)(KeyValuePair_2_t1267962911 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m221608719_RuntimeMethod_var);
			RuntimeObject * L_9 = V_3;
			JsonSerializer_t1424496335 * L_10 = ___serializer2;
			IL2CPP_RUNTIME_CLASS_INIT(JToken_t1038539247_il2cpp_TypeInfo_var);
			JToken_t1038539247 * L_11 = JToken_FromObject_m1495845376(NULL /*static, unused*/, (RuntimeObject *)L_9, (JsonSerializer_t1424496335 *)L_10, /*hidden argument*/NULL);
			NullCheck((JObject_t2059125928 *)L_7);
			JObject_set_Item_m3337384077((JObject_t2059125928 *)L_7, (String_t*)L_8, (JToken_t1038539247 *)L_11, /*hidden argument*/NULL);
		}

IL_0041:
		{
			bool L_12 = Enumerator_MoveNext_m79352559((Enumerator_t824473519 *)(Enumerator_t824473519 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m79352559_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0017;
			}
		}

IL_004d:
		{
			IL2CPP_LEAVE(0x60, FINALLY_0052);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		Il2CppFakeBox<Enumerator_t824473519 > L_13(Enumerator_t824473519_il2cpp_TypeInfo_var, (&V_2));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__90 = il2cpp_codegen_get_interface_invoke_data(0, &L_13, IDisposable_t3640265483_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__90.methodPtr)((RuntimeObject*)(&L_13), /*hidden argument*/il2cpp_virtual_invoke_data__90.method);
		V_2 = L_13.m_Value;
		IL2CPP_END_FINALLY(82)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_JUMP_TBL(0x60, IL_0060)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0060:
	{
		JObject_t2059125928 * L_14 = V_0;
		JsonWriter_t1467272295 * L_15 = ___writer0;
		JsonConverterU5BU5D_t155849004* L_16 = (JsonConverterU5BU5D_t155849004*)SZArrayNew(JsonConverterU5BU5D_t155849004_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck((JToken_t1038539247 *)L_14);
		VirtActionInvoker2< JsonWriter_t1467272295 *, JsonConverterU5BU5D_t155849004* >::Invoke(18 /* System.Void Newtonsoft.Json.Linq.JToken::WriteTo(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.JsonConverter[]) */, (JToken_t1038539247 *)L_14, (JsonWriter_t1467272295 *)L_15, (JsonConverterU5BU5D_t155849004*)L_16);
		return;
	}
}
// System.String WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector2>::<GetProperties>m__0(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* PartialConverter_1_U3CGetPropertiesU3Em__0_m1125015784_gshared (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
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
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector3>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PartialConverter_1__ctor_m2870248306_gshared (PartialConverter_1_t1388385889 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((JsonConverter_t1047106545 *)__this);
		JsonConverter__ctor_m2308226415((JsonConverter_t1047106545 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MemberInfo WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector3>::GetMember(System.String)
extern "C" IL2CPP_METHOD_ATTR MemberInfo_t * PartialConverter_1_GetMember_m4221538838_gshared (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_GetMember_m4221538838_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FieldInfo_t * V_1 = NULL;
	PropertyInfo_t * V_2 = NULL;
	{
		V_0 = (int32_t)((int32_t)20);
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___name0;
		int32_t L_3 = V_0;
		NullCheck((Type_t *)L_1);
		FieldInfo_t * L_4 = VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(49 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, (Type_t *)L_1, (String_t*)L_2, (int32_t)L_3);
		V_1 = (FieldInfo_t *)L_4;
		FieldInfo_t * L_5 = V_1;
		if (!L_5)
		{
			goto IL_001d;
		}
	}
	{
		FieldInfo_t * L_6 = V_1;
		return L_6;
	}

IL_001d:
	{
		RuntimeTypeHandle_t3027515415  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_7, /*hidden argument*/NULL);
		String_t* L_9 = ___name0;
		int32_t L_10 = V_0;
		NullCheck((Type_t *)L_8);
		PropertyInfo_t * L_11 = Type_GetProperty_m4206634422((Type_t *)L_8, (String_t*)L_9, (int32_t)L_10, /*hidden argument*/NULL);
		V_2 = (PropertyInfo_t *)L_11;
		PropertyInfo_t * L_12 = V_2;
		if (L_12)
		{
			goto IL_0040;
		}
	}
	{
		String_t* L_13 = ___name0;
		((  void (*) (RuntimeObject * /* static, unused */, String_t*, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, (String_t*)L_13, (String_t*)_stringLiteral3818767439, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_0040:
	{
		PropertyInfo_t * L_14 = V_2;
		NullCheck((PropertyInfo_t *)L_14);
		MethodInfo_t * L_15 = PropertyInfo_GetGetMethod_m1510309854((PropertyInfo_t *)L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_16 = ___name0;
		((  void (*) (RuntimeObject * /* static, unused */, String_t*, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, (String_t*)L_16, (String_t*)_stringLiteral234128521, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_0056:
	{
		PropertyInfo_t * L_17 = V_2;
		NullCheck((PropertyInfo_t *)L_17);
		MethodInfo_t * L_18 = PropertyInfo_GetSetMethod_m66158558((PropertyInfo_t *)L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_006c;
		}
	}
	{
		String_t* L_19 = ___name0;
		((  void (*) (RuntimeObject * /* static, unused */, String_t*, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, (String_t*)L_19, (String_t*)_stringLiteral3534955218, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_006c:
	{
		PropertyInfo_t * L_20 = V_2;
		NullCheck((PropertyInfo_t *)L_20);
		ParameterInfoU5BU5D_t390618515* L_21 = VirtFuncInvoker0< ParameterInfoU5BU5D_t390618515* >::Invoke(22 /* System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters() */, (PropertyInfo_t *)L_20);
		bool L_22 = Enumerable_Any_TisParameterInfo_t1861056598_m2308149110(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_21, /*hidden argument*/Enumerable_Any_TisParameterInfo_t1861056598_m2308149110_RuntimeMethod_var);
		if (!L_22)
		{
			goto IL_0087;
		}
	}
	{
		String_t* L_23 = ___name0;
		((  void (*) (RuntimeObject * /* static, unused */, String_t*, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, (String_t*)L_23, (String_t*)_stringLiteral486677601, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_0087:
	{
		PropertyInfo_t * L_24 = V_2;
		return L_24;
	}
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector3>::Throw(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void PartialConverter_1_Throw_m2813616356_gshared (RuntimeObject * __this /* static, unused */, String_t* ___name0, String_t* ___format1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_Throw_m2813616356_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___format1;
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_1, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_2);
		String_t* L_4 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m3755062657(NULL /*static, unused*/, (String_t*)L_3, (String_t*)_stringLiteral3452614530, (String_t*)L_4, /*hidden argument*/NULL);
		String_t* L_6 = String_Format_m2844511972(NULL /*static, unused*/, (String_t*)L_0, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_7 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_7, (String_t*)L_6, (String_t*)_stringLiteral62725243, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, PartialConverter_1_Throw_m2813616356_RuntimeMethod_var);
	}
}
// System.Object WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector3>::GetValue(System.Reflection.MemberInfo,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * PartialConverter_1_GetValue_m2996853095_gshared (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___member0, RuntimeObject * ___target1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_GetValue_m2996853095_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInfo_t * L_0 = ___member0;
		if (!((FieldInfo_t *)IsInst((RuntimeObject*)L_0, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0018;
		}
	}
	{
		MemberInfo_t * L_1 = ___member0;
		RuntimeObject * L_2 = ___target1;
		NullCheck((FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		RuntimeObject * L_3 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(18 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, (FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)), (RuntimeObject *)L_2);
		return L_3;
	}

IL_0018:
	{
		MemberInfo_t * L_4 = ___member0;
		RuntimeObject * L_5 = ___target1;
		NullCheck((PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)));
		RuntimeObject * L_6 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t2843939325* >::Invoke(25 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, (PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)), (RuntimeObject *)L_5, (ObjectU5BU5D_t2843939325*)(ObjectU5BU5D_t2843939325*)NULL);
		return L_6;
	}
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector3>::SetValue(System.Reflection.MemberInfo,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR void PartialConverter_1_SetValue_m3598353698_gshared (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___member0, RuntimeObject * ___target1, RuntimeObject * ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_SetValue_m3598353698_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInfo_t * L_0 = ___member0;
		if (!((FieldInfo_t *)IsInst((RuntimeObject*)L_0, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_001d;
		}
	}
	{
		MemberInfo_t * L_1 = ___member0;
		RuntimeObject * L_2 = ___target1;
		RuntimeObject * L_3 = ___value2;
		NullCheck((FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		FieldInfo_SetValue_m2460171138((FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)), (RuntimeObject *)L_2, (RuntimeObject *)L_3, /*hidden argument*/NULL);
		goto IL_002b;
	}

IL_001d:
	{
		MemberInfo_t * L_4 = ___member0;
		RuntimeObject * L_5 = ___target1;
		RuntimeObject * L_6 = ___value2;
		NullCheck((PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)));
		VirtActionInvoker3< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t2843939325* >::Invoke(27 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, (PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)), (RuntimeObject *)L_5, (RuntimeObject *)L_6, (ObjectU5BU5D_t2843939325*)(ObjectU5BU5D_t2843939325*)NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Type WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector3>::GetValueType(System.Reflection.MemberInfo)
extern "C" IL2CPP_METHOD_ATTR Type_t * PartialConverter_1_GetValueType_m1952652809_gshared (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___member0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_GetValueType_m1952652809_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInfo_t * L_0 = ___member0;
		if (!((FieldInfo_t *)IsInst((RuntimeObject*)L_0, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		MemberInfo_t * L_1 = ___member0;
		NullCheck((FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		Type_t * L_2 = VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, (FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		return L_2;
	}

IL_0017:
	{
		MemberInfo_t * L_3 = ___member0;
		NullCheck((PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_3, PropertyInfo_t_il2cpp_TypeInfo_var)));
		Type_t * L_4 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, (PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_3, PropertyInfo_t_il2cpp_TypeInfo_var)));
		return L_4;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector3>::GetProperties()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t3165258040 * PartialConverter_1_GetProperties_m73501853_gshared (PartialConverter_1_t1388385889 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_GetProperties_m73501853_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t1281789340* V_0 = NULL;
	StringU5BU5D_t1281789340* G_B7_0 = NULL;
	StringU5BU5D_t1281789340* G_B6_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	Func_2_t3947292210 * G_B13_0 = NULL;
	RuntimeObject* G_B13_1 = NULL;
	Func_2_t3947292210 * G_B12_0 = NULL;
	RuntimeObject* G_B12_1 = NULL;
	{
		Dictionary_2_t3165258040 * L_0 = ((PartialConverter_1_t1388385889_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get__properties_0();
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		Dictionary_2_t3165258040 * L_1 = ((PartialConverter_1_t1388385889_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get__properties_0();
		return L_1;
	}

IL_0010:
	{
		NullCheck((PartialConverter_1_t1388385889 *)__this);
		StringU5BU5D_t1281789340* L_2 = VirtFuncInvoker0< StringU5BU5D_t1281789340* >::Invoke(9 /* System.String[] WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector3>::GetPropertyNames() */, (PartialConverter_1_t1388385889 *)__this);
		V_0 = (StringU5BU5D_t1281789340*)L_2;
		StringU5BU5D_t1281789340* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		StringU5BU5D_t1281789340* L_4 = V_0;
		bool L_5 = Enumerable_Any_TisString_t_m3986012742(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_4, /*hidden argument*/Enumerable_Any_TisString_t_m3986012742_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0033;
		}
	}

IL_0028:
	{
		InvalidProgramException_t3836716986 * L_6 = (InvalidProgramException_t3836716986 *)il2cpp_codegen_object_new(InvalidProgramException_t3836716986_il2cpp_TypeInfo_var);
		InvalidProgramException__ctor_m3976792134(L_6, (String_t*)_stringLiteral1148368186, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, PartialConverter_1_GetProperties_m73501853_RuntimeMethod_var);
	}

IL_0033:
	{
		StringU5BU5D_t1281789340* L_7 = V_0;
		Func_2_t2197129486 * L_8 = ((PartialConverter_1_t1388385889_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__mgU24cache0_1();
		G_B6_0 = L_7;
		if (L_8)
		{
			G_B7_0 = L_7;
			goto IL_004c;
		}
	}
	{
		intptr_t L_9 = (intptr_t)String_IsNullOrEmpty_m2969720369_RuntimeMethod_var;
		Func_2_t2197129486 * L_10 = (Func_2_t2197129486 *)il2cpp_codegen_object_new(Func_2_t2197129486_il2cpp_TypeInfo_var);
		Func_2__ctor_m4235938257(L_10, (RuntimeObject *)NULL, (intptr_t)L_9, /*hidden argument*/Func_2__ctor_m4235938257_RuntimeMethod_var);
		((PartialConverter_1_t1388385889_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->set_U3CU3Ef__mgU24cache0_1(L_10);
		G_B7_0 = G_B6_0;
	}

IL_004c:
	{
		Func_2_t2197129486 * L_11 = ((PartialConverter_1_t1388385889_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__mgU24cache0_1();
		bool L_12 = Enumerable_Any_TisString_t_m3256256093(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)G_B7_0, (Func_2_t2197129486 *)L_11, /*hidden argument*/Enumerable_Any_TisString_t_m3256256093_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_0066;
		}
	}
	{
		InvalidProgramException_t3836716986 * L_13 = (InvalidProgramException_t3836716986 *)il2cpp_codegen_object_new(InvalidProgramException_t3836716986_il2cpp_TypeInfo_var);
		InvalidProgramException__ctor_m3976792134(L_13, (String_t*)_stringLiteral3827062036, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, NULL, PartialConverter_1_GetProperties_m73501853_RuntimeMethod_var);
	}

IL_0066:
	{
		StringU5BU5D_t1281789340* L_14 = V_0;
		RuntimeObject* L_15 = Enumerable_Distinct_TisString_t_m564215000(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_14, /*hidden argument*/Enumerable_Distinct_TisString_t_m564215000_RuntimeMethod_var);
		Func_2_t3947292210 * L_16 = ((PartialConverter_1_t1388385889_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__amU24cache0_3();
		G_B10_0 = L_15;
		if (L_16)
		{
			G_B11_0 = L_15;
			goto IL_0084;
		}
	}
	{
		intptr_t L_17 = (intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4);
		Func_2_t3947292210 * L_18 = (Func_2_t3947292210 *)il2cpp_codegen_object_new(Func_2_t3947292210_il2cpp_TypeInfo_var);
		Func_2__ctor_m1878178629(L_18, (RuntimeObject *)NULL, (intptr_t)L_17, /*hidden argument*/Func_2__ctor_m1878178629_RuntimeMethod_var);
		((PartialConverter_1_t1388385889_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->set_U3CU3Ef__amU24cache0_3(L_18);
		G_B11_0 = G_B10_0;
	}

IL_0084:
	{
		Func_2_t3947292210 * L_19 = ((PartialConverter_1_t1388385889_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__amU24cache0_3();
		Func_2_t1184875966 * L_20 = ((PartialConverter_1_t1388385889_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__mgU24cache1_2();
		G_B12_0 = L_19;
		G_B12_1 = G_B11_0;
		if (L_20)
		{
			G_B13_0 = L_19;
			G_B13_1 = G_B11_0;
			goto IL_00a1;
		}
	}
	{
		intptr_t L_21 = (intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5);
		Func_2_t1184875966 * L_22 = (Func_2_t1184875966 *)il2cpp_codegen_object_new(Func_2_t1184875966_il2cpp_TypeInfo_var);
		Func_2__ctor_m1082416029(L_22, (RuntimeObject *)NULL, (intptr_t)L_21, /*hidden argument*/Func_2__ctor_m1082416029_RuntimeMethod_var);
		((PartialConverter_1_t1388385889_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->set_U3CU3Ef__mgU24cache1_2(L_22);
		G_B13_0 = G_B12_0;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		Func_2_t1184875966 * L_23 = ((PartialConverter_1_t1388385889_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__mgU24cache1_2();
		Dictionary_2_t3165258040 * L_24 = Enumerable_ToDictionary_TisString_t_TisString_t_TisMemberInfo_t_m2153618120(NULL /*static, unused*/, (RuntimeObject*)G_B13_1, (Func_2_t3947292210 *)G_B13_0, (Func_2_t1184875966 *)L_23, /*hidden argument*/Enumerable_ToDictionary_TisString_t_TisString_t_TisMemberInfo_t_m2153618120_RuntimeMethod_var);
		((PartialConverter_1_t1388385889_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->set__properties_0(L_24);
		Dictionary_2_t3165258040 * L_25 = ((PartialConverter_1_t1388385889_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get__properties_0();
		return L_25;
	}
}
// T WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector3>::CreateInstance()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  PartialConverter_1_CreateInstance_m212045755_gshared (PartialConverter_1_t1388385889 * __this, const RuntimeMethod* method)
{
	{
		Vector3_t3722313464  L_0 = ((  Vector3_t3722313464  (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		return L_0;
	}
}
// System.Boolean WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector3>::CanConvert(System.Type)
extern "C" IL2CPP_METHOD_ATTR bool PartialConverter_1_CanConvert_m253652500_gshared (PartialConverter_1_t1388385889 * __this, Type_t * ___objectType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_CanConvert_m253652500_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		Type_t * L_2 = ___objectType0;
		return (bool)((((RuntimeObject*)(Type_t *)L_1) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
	}
}
// System.Object WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector3>::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * PartialConverter_1_ReadJson_m3008381402_gshared (PartialConverter_1_t1388385889 * __this, JsonReader_t2369136700 * ___reader0, Type_t * ___objectType1, RuntimeObject * ___existingValue2, JsonSerializer_t1424496335 * ___serializer3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_ReadJson_m3008381402_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JObject_t2059125928 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	KeyValuePair_2_t1267962911  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Enumerator_t824473519  V_3;
	memset(&V_3, 0, sizeof(V_3));
	RuntimeObject * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		JsonReader_t2369136700 * L_0 = ___reader0;
		NullCheck((JsonReader_t2369136700 *)L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(5 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, (JsonReader_t2369136700 *)L_0);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_000f;
		}
	}
	{
		return NULL;
	}

IL_000f:
	{
		JsonReader_t2369136700 * L_2 = ___reader0;
		JObject_t2059125928 * L_3 = JObject_Load_m3922106929(NULL /*static, unused*/, (JsonReader_t2369136700 *)L_2, /*hidden argument*/NULL);
		V_0 = (JObject_t2059125928 *)L_3;
		NullCheck((PartialConverter_1_t1388385889 *)__this);
		Vector3_t3722313464  L_4 = VirtFuncInvoker0< Vector3_t3722313464  >::Invoke(10 /* T WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector3>::CreateInstance() */, (PartialConverter_1_t1388385889 *)__this);
		Vector3_t3722313464  L_5 = L_4;
		RuntimeObject * L_6 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8), &L_5);
		V_1 = (RuntimeObject *)L_6;
		NullCheck((PartialConverter_1_t1388385889 *)__this);
		Dictionary_2_t3165258040 * L_7 = ((  Dictionary_2_t3165258040 * (*) (PartialConverter_1_t1388385889 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((PartialConverter_1_t1388385889 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		NullCheck((Dictionary_2_t3165258040 *)L_7);
		Enumerator_t824473519  L_8 = Dictionary_2_GetEnumerator_m4199775080((Dictionary_2_t3165258040 *)L_7, /*hidden argument*/Dictionary_2_GetEnumerator_m4199775080_RuntimeMethod_var);
		V_3 = (Enumerator_t824473519 )L_8;
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006c;
		}

IL_0033:
		{
			KeyValuePair_2_t1267962911  L_9 = Enumerator_get_Current_m841967122((Enumerator_t824473519 *)(Enumerator_t824473519 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m841967122_RuntimeMethod_var);
			V_2 = (KeyValuePair_2_t1267962911 )L_9;
			JObject_t2059125928 * L_10 = V_0;
			String_t* L_11 = KeyValuePair_2_get_Key_m221608719((KeyValuePair_2_t1267962911 *)(KeyValuePair_2_t1267962911 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Key_m221608719_RuntimeMethod_var);
			NullCheck((JObject_t2059125928 *)L_10);
			JToken_t1038539247 * L_12 = JObject_get_Item_m332585514((JObject_t2059125928 *)L_10, (String_t*)L_11, /*hidden argument*/NULL);
			MemberInfo_t * L_13 = KeyValuePair_2_get_Value_m188113207((KeyValuePair_2_t1267962911 *)(KeyValuePair_2_t1267962911 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m188113207_RuntimeMethod_var);
			Type_t * L_14 = ((  Type_t * (*) (RuntimeObject * /* static, unused */, MemberInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(NULL /*static, unused*/, (MemberInfo_t *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
			JsonSerializer_t1424496335 * L_15 = ___serializer3;
			NullCheck((JToken_t1038539247 *)L_12);
			RuntimeObject * L_16 = JToken_ToObject_m1717874774((JToken_t1038539247 *)L_12, (Type_t *)L_14, (JsonSerializer_t1424496335 *)L_15, /*hidden argument*/NULL);
			V_4 = (RuntimeObject *)L_16;
			MemberInfo_t * L_17 = KeyValuePair_2_get_Value_m188113207((KeyValuePair_2_t1267962911 *)(KeyValuePair_2_t1267962911 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m188113207_RuntimeMethod_var);
			RuntimeObject * L_18 = V_1;
			RuntimeObject * L_19 = V_4;
			((  void (*) (RuntimeObject * /* static, unused */, MemberInfo_t *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(NULL /*static, unused*/, (MemberInfo_t *)L_17, (RuntimeObject *)L_18, (RuntimeObject *)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		}

IL_006c:
		{
			bool L_20 = Enumerator_MoveNext_m79352559((Enumerator_t824473519 *)(Enumerator_t824473519 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m79352559_RuntimeMethod_var);
			if (L_20)
			{
				goto IL_0033;
			}
		}

IL_0078:
		{
			IL2CPP_LEAVE(0x8B, FINALLY_007d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007d;
	}

FINALLY_007d:
	{ // begin finally (depth: 1)
		Il2CppFakeBox<Enumerator_t824473519 > L_21(Enumerator_t824473519_il2cpp_TypeInfo_var, (&V_3));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__133 = il2cpp_codegen_get_interface_invoke_data(0, &L_21, IDisposable_t3640265483_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__133.methodPtr)((RuntimeObject*)(&L_21), /*hidden argument*/il2cpp_virtual_invoke_data__133.method);
		V_3 = L_21.m_Value;
		IL2CPP_END_FINALLY(125)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(125)
	{
		IL2CPP_JUMP_TBL(0x8B, IL_008b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_008b:
	{
		RuntimeObject * L_22 = V_1;
		return L_22;
	}
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector3>::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C" IL2CPP_METHOD_ATTR void PartialConverter_1_WriteJson_m1232716716_gshared (PartialConverter_1_t1388385889 * __this, JsonWriter_t1467272295 * ___writer0, RuntimeObject * ___value1, JsonSerializer_t1424496335 * ___serializer2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_WriteJson_m1232716716_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JObject_t2059125928 * V_0 = NULL;
	KeyValuePair_2_t1267962911  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Enumerator_t824473519  V_2;
	memset(&V_2, 0, sizeof(V_2));
	RuntimeObject * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		JObject_t2059125928 * L_0 = (JObject_t2059125928 *)il2cpp_codegen_object_new(JObject_t2059125928_il2cpp_TypeInfo_var);
		JObject__ctor_m1738103074(L_0, /*hidden argument*/NULL);
		V_0 = (JObject_t2059125928 *)L_0;
		NullCheck((PartialConverter_1_t1388385889 *)__this);
		Dictionary_2_t3165258040 * L_1 = ((  Dictionary_2_t3165258040 * (*) (PartialConverter_1_t1388385889 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((PartialConverter_1_t1388385889 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		NullCheck((Dictionary_2_t3165258040 *)L_1);
		Enumerator_t824473519  L_2 = Dictionary_2_GetEnumerator_m4199775080((Dictionary_2_t3165258040 *)L_1, /*hidden argument*/Dictionary_2_GetEnumerator_m4199775080_RuntimeMethod_var);
		V_2 = (Enumerator_t824473519 )L_2;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0041;
		}

IL_0017:
		{
			KeyValuePair_2_t1267962911  L_3 = Enumerator_get_Current_m841967122((Enumerator_t824473519 *)(Enumerator_t824473519 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m841967122_RuntimeMethod_var);
			V_1 = (KeyValuePair_2_t1267962911 )L_3;
			MemberInfo_t * L_4 = KeyValuePair_2_get_Value_m188113207((KeyValuePair_2_t1267962911 *)(KeyValuePair_2_t1267962911 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m188113207_RuntimeMethod_var);
			RuntimeObject * L_5 = ___value1;
			RuntimeObject * L_6 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, MemberInfo_t *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)(NULL /*static, unused*/, (MemberInfo_t *)L_4, (RuntimeObject *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
			V_3 = (RuntimeObject *)L_6;
			JObject_t2059125928 * L_7 = V_0;
			String_t* L_8 = KeyValuePair_2_get_Key_m221608719((KeyValuePair_2_t1267962911 *)(KeyValuePair_2_t1267962911 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m221608719_RuntimeMethod_var);
			RuntimeObject * L_9 = V_3;
			JsonSerializer_t1424496335 * L_10 = ___serializer2;
			IL2CPP_RUNTIME_CLASS_INIT(JToken_t1038539247_il2cpp_TypeInfo_var);
			JToken_t1038539247 * L_11 = JToken_FromObject_m1495845376(NULL /*static, unused*/, (RuntimeObject *)L_9, (JsonSerializer_t1424496335 *)L_10, /*hidden argument*/NULL);
			NullCheck((JObject_t2059125928 *)L_7);
			JObject_set_Item_m3337384077((JObject_t2059125928 *)L_7, (String_t*)L_8, (JToken_t1038539247 *)L_11, /*hidden argument*/NULL);
		}

IL_0041:
		{
			bool L_12 = Enumerator_MoveNext_m79352559((Enumerator_t824473519 *)(Enumerator_t824473519 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m79352559_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0017;
			}
		}

IL_004d:
		{
			IL2CPP_LEAVE(0x60, FINALLY_0052);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		Il2CppFakeBox<Enumerator_t824473519 > L_13(Enumerator_t824473519_il2cpp_TypeInfo_var, (&V_2));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__90 = il2cpp_codegen_get_interface_invoke_data(0, &L_13, IDisposable_t3640265483_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__90.methodPtr)((RuntimeObject*)(&L_13), /*hidden argument*/il2cpp_virtual_invoke_data__90.method);
		V_2 = L_13.m_Value;
		IL2CPP_END_FINALLY(82)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_JUMP_TBL(0x60, IL_0060)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0060:
	{
		JObject_t2059125928 * L_14 = V_0;
		JsonWriter_t1467272295 * L_15 = ___writer0;
		JsonConverterU5BU5D_t155849004* L_16 = (JsonConverterU5BU5D_t155849004*)SZArrayNew(JsonConverterU5BU5D_t155849004_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck((JToken_t1038539247 *)L_14);
		VirtActionInvoker2< JsonWriter_t1467272295 *, JsonConverterU5BU5D_t155849004* >::Invoke(18 /* System.Void Newtonsoft.Json.Linq.JToken::WriteTo(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.JsonConverter[]) */, (JToken_t1038539247 *)L_14, (JsonWriter_t1467272295 *)L_15, (JsonConverterU5BU5D_t155849004*)L_16);
		return;
	}
}
// System.String WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector3>::<GetProperties>m__0(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* PartialConverter_1_U3CGetPropertiesU3Em__0_m2292679247_gshared (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
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
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector4>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PartialConverter_1__ctor_m2870251375_gshared (PartialConverter_1_t985101362 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((JsonConverter_t1047106545 *)__this);
		JsonConverter__ctor_m2308226415((JsonConverter_t1047106545 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MemberInfo WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector4>::GetMember(System.String)
extern "C" IL2CPP_METHOD_ATTR MemberInfo_t * PartialConverter_1_GetMember_m1656209606_gshared (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_GetMember_m1656209606_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FieldInfo_t * V_1 = NULL;
	PropertyInfo_t * V_2 = NULL;
	{
		V_0 = (int32_t)((int32_t)20);
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___name0;
		int32_t L_3 = V_0;
		NullCheck((Type_t *)L_1);
		FieldInfo_t * L_4 = VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(49 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, (Type_t *)L_1, (String_t*)L_2, (int32_t)L_3);
		V_1 = (FieldInfo_t *)L_4;
		FieldInfo_t * L_5 = V_1;
		if (!L_5)
		{
			goto IL_001d;
		}
	}
	{
		FieldInfo_t * L_6 = V_1;
		return L_6;
	}

IL_001d:
	{
		RuntimeTypeHandle_t3027515415  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_7, /*hidden argument*/NULL);
		String_t* L_9 = ___name0;
		int32_t L_10 = V_0;
		NullCheck((Type_t *)L_8);
		PropertyInfo_t * L_11 = Type_GetProperty_m4206634422((Type_t *)L_8, (String_t*)L_9, (int32_t)L_10, /*hidden argument*/NULL);
		V_2 = (PropertyInfo_t *)L_11;
		PropertyInfo_t * L_12 = V_2;
		if (L_12)
		{
			goto IL_0040;
		}
	}
	{
		String_t* L_13 = ___name0;
		((  void (*) (RuntimeObject * /* static, unused */, String_t*, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, (String_t*)L_13, (String_t*)_stringLiteral3818767439, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_0040:
	{
		PropertyInfo_t * L_14 = V_2;
		NullCheck((PropertyInfo_t *)L_14);
		MethodInfo_t * L_15 = PropertyInfo_GetGetMethod_m1510309854((PropertyInfo_t *)L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_16 = ___name0;
		((  void (*) (RuntimeObject * /* static, unused */, String_t*, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, (String_t*)L_16, (String_t*)_stringLiteral234128521, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_0056:
	{
		PropertyInfo_t * L_17 = V_2;
		NullCheck((PropertyInfo_t *)L_17);
		MethodInfo_t * L_18 = PropertyInfo_GetSetMethod_m66158558((PropertyInfo_t *)L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_006c;
		}
	}
	{
		String_t* L_19 = ___name0;
		((  void (*) (RuntimeObject * /* static, unused */, String_t*, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, (String_t*)L_19, (String_t*)_stringLiteral3534955218, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_006c:
	{
		PropertyInfo_t * L_20 = V_2;
		NullCheck((PropertyInfo_t *)L_20);
		ParameterInfoU5BU5D_t390618515* L_21 = VirtFuncInvoker0< ParameterInfoU5BU5D_t390618515* >::Invoke(22 /* System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters() */, (PropertyInfo_t *)L_20);
		bool L_22 = Enumerable_Any_TisParameterInfo_t1861056598_m2308149110(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_21, /*hidden argument*/Enumerable_Any_TisParameterInfo_t1861056598_m2308149110_RuntimeMethod_var);
		if (!L_22)
		{
			goto IL_0087;
		}
	}
	{
		String_t* L_23 = ___name0;
		((  void (*) (RuntimeObject * /* static, unused */, String_t*, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, (String_t*)L_23, (String_t*)_stringLiteral486677601, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_0087:
	{
		PropertyInfo_t * L_24 = V_2;
		return L_24;
	}
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector4>::Throw(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void PartialConverter_1_Throw_m1644066090_gshared (RuntimeObject * __this /* static, unused */, String_t* ___name0, String_t* ___format1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_Throw_m1644066090_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___format1;
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_1, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_2);
		String_t* L_4 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m3755062657(NULL /*static, unused*/, (String_t*)L_3, (String_t*)_stringLiteral3452614530, (String_t*)L_4, /*hidden argument*/NULL);
		String_t* L_6 = String_Format_m2844511972(NULL /*static, unused*/, (String_t*)L_0, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_7 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_7, (String_t*)L_6, (String_t*)_stringLiteral62725243, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, PartialConverter_1_Throw_m1644066090_RuntimeMethod_var);
	}
}
// System.Object WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector4>::GetValue(System.Reflection.MemberInfo,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * PartialConverter_1_GetValue_m854870333_gshared (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___member0, RuntimeObject * ___target1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_GetValue_m854870333_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInfo_t * L_0 = ___member0;
		if (!((FieldInfo_t *)IsInst((RuntimeObject*)L_0, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0018;
		}
	}
	{
		MemberInfo_t * L_1 = ___member0;
		RuntimeObject * L_2 = ___target1;
		NullCheck((FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		RuntimeObject * L_3 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(18 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, (FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)), (RuntimeObject *)L_2);
		return L_3;
	}

IL_0018:
	{
		MemberInfo_t * L_4 = ___member0;
		RuntimeObject * L_5 = ___target1;
		NullCheck((PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)));
		RuntimeObject * L_6 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t2843939325* >::Invoke(25 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, (PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)), (RuntimeObject *)L_5, (ObjectU5BU5D_t2843939325*)(ObjectU5BU5D_t2843939325*)NULL);
		return L_6;
	}
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector4>::SetValue(System.Reflection.MemberInfo,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR void PartialConverter_1_SetValue_m1809311800_gshared (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___member0, RuntimeObject * ___target1, RuntimeObject * ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_SetValue_m1809311800_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInfo_t * L_0 = ___member0;
		if (!((FieldInfo_t *)IsInst((RuntimeObject*)L_0, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_001d;
		}
	}
	{
		MemberInfo_t * L_1 = ___member0;
		RuntimeObject * L_2 = ___target1;
		RuntimeObject * L_3 = ___value2;
		NullCheck((FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		FieldInfo_SetValue_m2460171138((FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)), (RuntimeObject *)L_2, (RuntimeObject *)L_3, /*hidden argument*/NULL);
		goto IL_002b;
	}

IL_001d:
	{
		MemberInfo_t * L_4 = ___member0;
		RuntimeObject * L_5 = ___target1;
		RuntimeObject * L_6 = ___value2;
		NullCheck((PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)));
		VirtActionInvoker3< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t2843939325* >::Invoke(27 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, (PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)), (RuntimeObject *)L_5, (RuntimeObject *)L_6, (ObjectU5BU5D_t2843939325*)(ObjectU5BU5D_t2843939325*)NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Type WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector4>::GetValueType(System.Reflection.MemberInfo)
extern "C" IL2CPP_METHOD_ATTR Type_t * PartialConverter_1_GetValueType_m2802259946_gshared (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___member0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_GetValueType_m2802259946_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInfo_t * L_0 = ___member0;
		if (!((FieldInfo_t *)IsInst((RuntimeObject*)L_0, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		MemberInfo_t * L_1 = ___member0;
		NullCheck((FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		Type_t * L_2 = VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, (FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		return L_2;
	}

IL_0017:
	{
		MemberInfo_t * L_3 = ___member0;
		NullCheck((PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_3, PropertyInfo_t_il2cpp_TypeInfo_var)));
		Type_t * L_4 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, (PropertyInfo_t *)((PropertyInfo_t *)IsInst((RuntimeObject*)L_3, PropertyInfo_t_il2cpp_TypeInfo_var)));
		return L_4;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector4>::GetProperties()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t3165258040 * PartialConverter_1_GetProperties_m4231807800_gshared (PartialConverter_1_t985101362 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_GetProperties_m4231807800_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t1281789340* V_0 = NULL;
	StringU5BU5D_t1281789340* G_B7_0 = NULL;
	StringU5BU5D_t1281789340* G_B6_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	Func_2_t3947292210 * G_B13_0 = NULL;
	RuntimeObject* G_B13_1 = NULL;
	Func_2_t3947292210 * G_B12_0 = NULL;
	RuntimeObject* G_B12_1 = NULL;
	{
		Dictionary_2_t3165258040 * L_0 = ((PartialConverter_1_t985101362_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get__properties_0();
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		Dictionary_2_t3165258040 * L_1 = ((PartialConverter_1_t985101362_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get__properties_0();
		return L_1;
	}

IL_0010:
	{
		NullCheck((PartialConverter_1_t985101362 *)__this);
		StringU5BU5D_t1281789340* L_2 = VirtFuncInvoker0< StringU5BU5D_t1281789340* >::Invoke(9 /* System.String[] WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector4>::GetPropertyNames() */, (PartialConverter_1_t985101362 *)__this);
		V_0 = (StringU5BU5D_t1281789340*)L_2;
		StringU5BU5D_t1281789340* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		StringU5BU5D_t1281789340* L_4 = V_0;
		bool L_5 = Enumerable_Any_TisString_t_m3986012742(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_4, /*hidden argument*/Enumerable_Any_TisString_t_m3986012742_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0033;
		}
	}

IL_0028:
	{
		InvalidProgramException_t3836716986 * L_6 = (InvalidProgramException_t3836716986 *)il2cpp_codegen_object_new(InvalidProgramException_t3836716986_il2cpp_TypeInfo_var);
		InvalidProgramException__ctor_m3976792134(L_6, (String_t*)_stringLiteral1148368186, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, PartialConverter_1_GetProperties_m4231807800_RuntimeMethod_var);
	}

IL_0033:
	{
		StringU5BU5D_t1281789340* L_7 = V_0;
		Func_2_t2197129486 * L_8 = ((PartialConverter_1_t985101362_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__mgU24cache0_1();
		G_B6_0 = L_7;
		if (L_8)
		{
			G_B7_0 = L_7;
			goto IL_004c;
		}
	}
	{
		intptr_t L_9 = (intptr_t)String_IsNullOrEmpty_m2969720369_RuntimeMethod_var;
		Func_2_t2197129486 * L_10 = (Func_2_t2197129486 *)il2cpp_codegen_object_new(Func_2_t2197129486_il2cpp_TypeInfo_var);
		Func_2__ctor_m4235938257(L_10, (RuntimeObject *)NULL, (intptr_t)L_9, /*hidden argument*/Func_2__ctor_m4235938257_RuntimeMethod_var);
		((PartialConverter_1_t985101362_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->set_U3CU3Ef__mgU24cache0_1(L_10);
		G_B7_0 = G_B6_0;
	}

IL_004c:
	{
		Func_2_t2197129486 * L_11 = ((PartialConverter_1_t985101362_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__mgU24cache0_1();
		bool L_12 = Enumerable_Any_TisString_t_m3256256093(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)G_B7_0, (Func_2_t2197129486 *)L_11, /*hidden argument*/Enumerable_Any_TisString_t_m3256256093_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_0066;
		}
	}
	{
		InvalidProgramException_t3836716986 * L_13 = (InvalidProgramException_t3836716986 *)il2cpp_codegen_object_new(InvalidProgramException_t3836716986_il2cpp_TypeInfo_var);
		InvalidProgramException__ctor_m3976792134(L_13, (String_t*)_stringLiteral3827062036, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, NULL, PartialConverter_1_GetProperties_m4231807800_RuntimeMethod_var);
	}

IL_0066:
	{
		StringU5BU5D_t1281789340* L_14 = V_0;
		RuntimeObject* L_15 = Enumerable_Distinct_TisString_t_m564215000(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_14, /*hidden argument*/Enumerable_Distinct_TisString_t_m564215000_RuntimeMethod_var);
		Func_2_t3947292210 * L_16 = ((PartialConverter_1_t985101362_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__amU24cache0_3();
		G_B10_0 = L_15;
		if (L_16)
		{
			G_B11_0 = L_15;
			goto IL_0084;
		}
	}
	{
		intptr_t L_17 = (intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4);
		Func_2_t3947292210 * L_18 = (Func_2_t3947292210 *)il2cpp_codegen_object_new(Func_2_t3947292210_il2cpp_TypeInfo_var);
		Func_2__ctor_m1878178629(L_18, (RuntimeObject *)NULL, (intptr_t)L_17, /*hidden argument*/Func_2__ctor_m1878178629_RuntimeMethod_var);
		((PartialConverter_1_t985101362_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->set_U3CU3Ef__amU24cache0_3(L_18);
		G_B11_0 = G_B10_0;
	}

IL_0084:
	{
		Func_2_t3947292210 * L_19 = ((PartialConverter_1_t985101362_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__amU24cache0_3();
		Func_2_t1184875966 * L_20 = ((PartialConverter_1_t985101362_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__mgU24cache1_2();
		G_B12_0 = L_19;
		G_B12_1 = G_B11_0;
		if (L_20)
		{
			G_B13_0 = L_19;
			G_B13_1 = G_B11_0;
			goto IL_00a1;
		}
	}
	{
		intptr_t L_21 = (intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5);
		Func_2_t1184875966 * L_22 = (Func_2_t1184875966 *)il2cpp_codegen_object_new(Func_2_t1184875966_il2cpp_TypeInfo_var);
		Func_2__ctor_m1082416029(L_22, (RuntimeObject *)NULL, (intptr_t)L_21, /*hidden argument*/Func_2__ctor_m1082416029_RuntimeMethod_var);
		((PartialConverter_1_t985101362_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->set_U3CU3Ef__mgU24cache1_2(L_22);
		G_B13_0 = G_B12_0;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		Func_2_t1184875966 * L_23 = ((PartialConverter_1_t985101362_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get_U3CU3Ef__mgU24cache1_2();
		Dictionary_2_t3165258040 * L_24 = Enumerable_ToDictionary_TisString_t_TisString_t_TisMemberInfo_t_m2153618120(NULL /*static, unused*/, (RuntimeObject*)G_B13_1, (Func_2_t3947292210 *)G_B13_0, (Func_2_t1184875966 *)L_23, /*hidden argument*/Enumerable_ToDictionary_TisString_t_TisString_t_TisMemberInfo_t_m2153618120_RuntimeMethod_var);
		((PartialConverter_1_t985101362_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->set__properties_0(L_24);
		Dictionary_2_t3165258040 * L_25 = ((PartialConverter_1_t985101362_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))->get__properties_0();
		return L_25;
	}
}
// T WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector4>::CreateInstance()
extern "C" IL2CPP_METHOD_ATTR Vector4_t3319028937  PartialConverter_1_CreateInstance_m2927655372_gshared (PartialConverter_1_t985101362 * __this, const RuntimeMethod* method)
{
	{
		Vector4_t3319028937  L_0 = ((  Vector4_t3319028937  (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		return L_0;
	}
}
// System.Boolean WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector4>::CanConvert(System.Type)
extern "C" IL2CPP_METHOD_ATTR bool PartialConverter_1_CanConvert_m534917978_gshared (PartialConverter_1_t985101362 * __this, Type_t * ___objectType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_CanConvert_m534917978_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		Type_t * L_2 = ___objectType0;
		return (bool)((((RuntimeObject*)(Type_t *)L_1) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
	}
}
// System.Object WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector4>::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * PartialConverter_1_ReadJson_m61954850_gshared (PartialConverter_1_t985101362 * __this, JsonReader_t2369136700 * ___reader0, Type_t * ___objectType1, RuntimeObject * ___existingValue2, JsonSerializer_t1424496335 * ___serializer3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_ReadJson_m61954850_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JObject_t2059125928 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	KeyValuePair_2_t1267962911  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Enumerator_t824473519  V_3;
	memset(&V_3, 0, sizeof(V_3));
	RuntimeObject * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		JsonReader_t2369136700 * L_0 = ___reader0;
		NullCheck((JsonReader_t2369136700 *)L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(5 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, (JsonReader_t2369136700 *)L_0);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_000f;
		}
	}
	{
		return NULL;
	}

IL_000f:
	{
		JsonReader_t2369136700 * L_2 = ___reader0;
		JObject_t2059125928 * L_3 = JObject_Load_m3922106929(NULL /*static, unused*/, (JsonReader_t2369136700 *)L_2, /*hidden argument*/NULL);
		V_0 = (JObject_t2059125928 *)L_3;
		NullCheck((PartialConverter_1_t985101362 *)__this);
		Vector4_t3319028937  L_4 = VirtFuncInvoker0< Vector4_t3319028937  >::Invoke(10 /* T WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector4>::CreateInstance() */, (PartialConverter_1_t985101362 *)__this);
		Vector4_t3319028937  L_5 = L_4;
		RuntimeObject * L_6 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8), &L_5);
		V_1 = (RuntimeObject *)L_6;
		NullCheck((PartialConverter_1_t985101362 *)__this);
		Dictionary_2_t3165258040 * L_7 = ((  Dictionary_2_t3165258040 * (*) (PartialConverter_1_t985101362 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((PartialConverter_1_t985101362 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		NullCheck((Dictionary_2_t3165258040 *)L_7);
		Enumerator_t824473519  L_8 = Dictionary_2_GetEnumerator_m4199775080((Dictionary_2_t3165258040 *)L_7, /*hidden argument*/Dictionary_2_GetEnumerator_m4199775080_RuntimeMethod_var);
		V_3 = (Enumerator_t824473519 )L_8;
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006c;
		}

IL_0033:
		{
			KeyValuePair_2_t1267962911  L_9 = Enumerator_get_Current_m841967122((Enumerator_t824473519 *)(Enumerator_t824473519 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m841967122_RuntimeMethod_var);
			V_2 = (KeyValuePair_2_t1267962911 )L_9;
			JObject_t2059125928 * L_10 = V_0;
			String_t* L_11 = KeyValuePair_2_get_Key_m221608719((KeyValuePair_2_t1267962911 *)(KeyValuePair_2_t1267962911 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Key_m221608719_RuntimeMethod_var);
			NullCheck((JObject_t2059125928 *)L_10);
			JToken_t1038539247 * L_12 = JObject_get_Item_m332585514((JObject_t2059125928 *)L_10, (String_t*)L_11, /*hidden argument*/NULL);
			MemberInfo_t * L_13 = KeyValuePair_2_get_Value_m188113207((KeyValuePair_2_t1267962911 *)(KeyValuePair_2_t1267962911 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m188113207_RuntimeMethod_var);
			Type_t * L_14 = ((  Type_t * (*) (RuntimeObject * /* static, unused */, MemberInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(NULL /*static, unused*/, (MemberInfo_t *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
			JsonSerializer_t1424496335 * L_15 = ___serializer3;
			NullCheck((JToken_t1038539247 *)L_12);
			RuntimeObject * L_16 = JToken_ToObject_m1717874774((JToken_t1038539247 *)L_12, (Type_t *)L_14, (JsonSerializer_t1424496335 *)L_15, /*hidden argument*/NULL);
			V_4 = (RuntimeObject *)L_16;
			MemberInfo_t * L_17 = KeyValuePair_2_get_Value_m188113207((KeyValuePair_2_t1267962911 *)(KeyValuePair_2_t1267962911 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m188113207_RuntimeMethod_var);
			RuntimeObject * L_18 = V_1;
			RuntimeObject * L_19 = V_4;
			((  void (*) (RuntimeObject * /* static, unused */, MemberInfo_t *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(NULL /*static, unused*/, (MemberInfo_t *)L_17, (RuntimeObject *)L_18, (RuntimeObject *)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		}

IL_006c:
		{
			bool L_20 = Enumerator_MoveNext_m79352559((Enumerator_t824473519 *)(Enumerator_t824473519 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m79352559_RuntimeMethod_var);
			if (L_20)
			{
				goto IL_0033;
			}
		}

IL_0078:
		{
			IL2CPP_LEAVE(0x8B, FINALLY_007d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007d;
	}

FINALLY_007d:
	{ // begin finally (depth: 1)
		Il2CppFakeBox<Enumerator_t824473519 > L_21(Enumerator_t824473519_il2cpp_TypeInfo_var, (&V_3));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__133 = il2cpp_codegen_get_interface_invoke_data(0, &L_21, IDisposable_t3640265483_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__133.methodPtr)((RuntimeObject*)(&L_21), /*hidden argument*/il2cpp_virtual_invoke_data__133.method);
		V_3 = L_21.m_Value;
		IL2CPP_END_FINALLY(125)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(125)
	{
		IL2CPP_JUMP_TBL(0x8B, IL_008b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_008b:
	{
		RuntimeObject * L_22 = V_1;
		return L_22;
	}
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector4>::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C" IL2CPP_METHOD_ATTR void PartialConverter_1_WriteJson_m1687008759_gshared (PartialConverter_1_t985101362 * __this, JsonWriter_t1467272295 * ___writer0, RuntimeObject * ___value1, JsonSerializer_t1424496335 * ___serializer2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PartialConverter_1_WriteJson_m1687008759_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JObject_t2059125928 * V_0 = NULL;
	KeyValuePair_2_t1267962911  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Enumerator_t824473519  V_2;
	memset(&V_2, 0, sizeof(V_2));
	RuntimeObject * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		JObject_t2059125928 * L_0 = (JObject_t2059125928 *)il2cpp_codegen_object_new(JObject_t2059125928_il2cpp_TypeInfo_var);
		JObject__ctor_m1738103074(L_0, /*hidden argument*/NULL);
		V_0 = (JObject_t2059125928 *)L_0;
		NullCheck((PartialConverter_1_t985101362 *)__this);
		Dictionary_2_t3165258040 * L_1 = ((  Dictionary_2_t3165258040 * (*) (PartialConverter_1_t985101362 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((PartialConverter_1_t985101362 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		NullCheck((Dictionary_2_t3165258040 *)L_1);
		Enumerator_t824473519  L_2 = Dictionary_2_GetEnumerator_m4199775080((Dictionary_2_t3165258040 *)L_1, /*hidden argument*/Dictionary_2_GetEnumerator_m4199775080_RuntimeMethod_var);
		V_2 = (Enumerator_t824473519 )L_2;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0041;
		}

IL_0017:
		{
			KeyValuePair_2_t1267962911  L_3 = Enumerator_get_Current_m841967122((Enumerator_t824473519 *)(Enumerator_t824473519 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m841967122_RuntimeMethod_var);
			V_1 = (KeyValuePair_2_t1267962911 )L_3;
			MemberInfo_t * L_4 = KeyValuePair_2_get_Value_m188113207((KeyValuePair_2_t1267962911 *)(KeyValuePair_2_t1267962911 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m188113207_RuntimeMethod_var);
			RuntimeObject * L_5 = ___value1;
			RuntimeObject * L_6 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, MemberInfo_t *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)(NULL /*static, unused*/, (MemberInfo_t *)L_4, (RuntimeObject *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
			V_3 = (RuntimeObject *)L_6;
			JObject_t2059125928 * L_7 = V_0;
			String_t* L_8 = KeyValuePair_2_get_Key_m221608719((KeyValuePair_2_t1267962911 *)(KeyValuePair_2_t1267962911 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m221608719_RuntimeMethod_var);
			RuntimeObject * L_9 = V_3;
			JsonSerializer_t1424496335 * L_10 = ___serializer2;
			IL2CPP_RUNTIME_CLASS_INIT(JToken_t1038539247_il2cpp_TypeInfo_var);
			JToken_t1038539247 * L_11 = JToken_FromObject_m1495845376(NULL /*static, unused*/, (RuntimeObject *)L_9, (JsonSerializer_t1424496335 *)L_10, /*hidden argument*/NULL);
			NullCheck((JObject_t2059125928 *)L_7);
			JObject_set_Item_m3337384077((JObject_t2059125928 *)L_7, (String_t*)L_8, (JToken_t1038539247 *)L_11, /*hidden argument*/NULL);
		}

IL_0041:
		{
			bool L_12 = Enumerator_MoveNext_m79352559((Enumerator_t824473519 *)(Enumerator_t824473519 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m79352559_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0017;
			}
		}

IL_004d:
		{
			IL2CPP_LEAVE(0x60, FINALLY_0052);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		Il2CppFakeBox<Enumerator_t824473519 > L_13(Enumerator_t824473519_il2cpp_TypeInfo_var, (&V_2));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__90 = il2cpp_codegen_get_interface_invoke_data(0, &L_13, IDisposable_t3640265483_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__90.methodPtr)((RuntimeObject*)(&L_13), /*hidden argument*/il2cpp_virtual_invoke_data__90.method);
		V_2 = L_13.m_Value;
		IL2CPP_END_FINALLY(82)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_JUMP_TBL(0x60, IL_0060)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0060:
	{
		JObject_t2059125928 * L_14 = V_0;
		JsonWriter_t1467272295 * L_15 = ___writer0;
		JsonConverterU5BU5D_t155849004* L_16 = (JsonConverterU5BU5D_t155849004*)SZArrayNew(JsonConverterU5BU5D_t155849004_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck((JToken_t1038539247 *)L_14);
		VirtActionInvoker2< JsonWriter_t1467272295 *, JsonConverterU5BU5D_t155849004* >::Invoke(18 /* System.Void Newtonsoft.Json.Linq.JToken::WriteTo(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.JsonConverter[]) */, (JToken_t1038539247 *)L_14, (JsonWriter_t1467272295 *)L_15, (JsonConverterU5BU5D_t155849004*)L_16);
		return;
	}
}
// System.String WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector4>::<GetProperties>m__0(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* PartialConverter_1_U3CGetPropertiesU3Em__0_m4102508132_gshared (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
