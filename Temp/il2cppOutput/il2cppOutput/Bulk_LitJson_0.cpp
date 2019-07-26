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
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// LitJson.ExporterFunc
struct ExporterFunc_t1851311465;
// LitJson.JsonWriter
struct JsonWriter_t3570089748;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// LitJson.ImporterFunc
struct ImporterFunc_t3630937194;
// LitJson.JsonException
struct JsonException_t3682484112;
// System.String
struct String_t;
// System.ApplicationException
struct ApplicationException_t2339761290;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>
struct Dictionary_2_t3338636003;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>
struct Dictionary_2_t2241695223;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct Dictionary_2_t935204471;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>
struct Dictionary_2_t1715664290;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>
struct Dictionary_2_t618723510;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct Dictionary_2_t3692140024;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2405853701;
// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ExporterFunc>
struct Dictionary_2_t691233;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct Dictionary_2_t2688515417;
// System.Type
struct Type_t;
// System.Collections.Generic.List`1<LitJson.PropertyMetadata>
struct List_1_t904547919;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t1461822886;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t846150980;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct IDictionary_2_t1152366808;
// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>
struct Dictionary_2_t1780316962;
// System.IO.TextWriter
struct TextWriter_t3478189236;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.IFormatProvider
struct IFormatProvider_t2518567562;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.IO.StringWriter
struct StringWriter_t802263757;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t435877138;
// System.Collections.Generic.Stack`1<LitJson.WriterContext>
struct Stack_1_t1854483454;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t3923495619;
// LitJson.WriterContext
struct WriterContext_t1011093999;
// LitJson.PropertyMetadata[]
struct PropertyMetadataU5BU5D_t3282844708;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>[]
struct IDictionary_2U5BU5D_t369565116;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t296309482;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>,System.Collections.DictionaryEntry>
struct Transform_1_t650060127;
// LitJson.ExporterFunc[]
struct ExporterFuncU5BU5D_t3613872852;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,LitJson.ExporterFunc,System.Collections.DictionaryEntry>
struct Transform_1_t3894367863;
// System.Collections.Generic.IList`1<LitJson.PropertyMetadata>[]
struct IList_1U5BU5D_t2778516417;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>,System.Collections.DictionaryEntry>
struct Transform_1_t3059011428;
// LitJson.ObjectMetadata[]
struct ObjectMetadataU5BU5D_t543634991;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,LitJson.ObjectMetadata,System.Collections.DictionaryEntry>
struct Transform_1_t824130002;
// System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>[]
struct IDictionary_2U5BU5D_t2609190502;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>,System.Collections.DictionaryEntry>
struct Transform_1_t2889685513;
// LitJson.ImporterFunc[]
struct ImporterFuncU5BU5D_t332556975;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,LitJson.ImporterFunc,System.Collections.DictionaryEntry>
struct Transform_1_t613051986;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// LitJson.WriterContext[]
struct WriterContextU5BU5D_t1224381814;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Char[]
struct CharU5BU5D_t3528271667;
// LitJson.ArrayMetadata[]
struct ArrayMetadataU5BU5D_t363333322;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,LitJson.ArrayMetadata,System.Collections.DictionaryEntry>
struct Transform_1_t643828333;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>
struct IDictionary_2_t2759509920;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ArrayMetadata>
struct IDictionary_2_t1802487394;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct IDictionary_2_t3694023158;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ObjectMetadata>
struct IDictionary_2_t179515681;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct IDictionary_2_t2155991415;
// System.Byte
struct Byte_t1134296376;
// System.Double
struct Double_t594665363;
// System.UInt16
struct UInt16_t2177724958;
// System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata>
struct IDictionary_2_t1976548163;
// System.Void
struct Void_t1185182177;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Globalization.Calendar
struct Calendar_t1661121569;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;

extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern RuntimeClass* JsonMapper_t3815285241_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3319525431_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t3338636003_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t935204471_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t1715664290_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t3692140024_il2cpp_TypeInfo_var;
extern RuntimeClass* JsonWriter_t3570089748_il2cpp_TypeInfo_var;
extern RuntimeClass* DateTimeFormatInfo_t2405853701_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t691233_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t2688515417_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m706204246_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2431295564_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2076397116_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m1674229861_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2292515434_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2735992426_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m1523576929_RuntimeMethod_var;
extern const uint32_t JsonMapper__cctor_m850028620_MetadataUsageId;
extern RuntimeClass* IDictionary_2_t2155991415_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t904547919_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t2260625411_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m3821795625_RuntimeMethod_var;
extern String_t* _stringLiteral1949155704;
extern const uint32_t JsonMapper_AddTypeProperties_m3707375636_MetadataUsageId;
extern const RuntimeType* Byte_t1134296376_0_0_0_var;
extern const RuntimeType* Char_t3634460470_0_0_0_var;
extern const RuntimeType* DateTime_t3738529785_0_0_0_var;
extern const RuntimeType* Decimal_t2948259380_0_0_0_var;
extern const RuntimeType* SByte_t1669577662_0_0_0_var;
extern const RuntimeType* Int16_t2552820387_0_0_0_var;
extern const RuntimeType* UInt16_t2177724958_0_0_0_var;
extern const RuntimeType* UInt32_t2560061978_0_0_0_var;
extern const RuntimeType* UInt64_t4134040092_0_0_0_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* ExporterFunc_t1851311465_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t2759509920_il2cpp_TypeInfo_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Em__0_m209874195_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Em__1_m3570407405_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Em__2_m600765210_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Em__3_m939732965_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Em__4_m266458088_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Em__5_m3328515821_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Em__6_m312889811_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Em__7_m3877741659_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Em__8_m225163408_RuntimeMethod_var;
extern const uint32_t JsonMapper_RegisterBaseExporters_m1355390223_MetadataUsageId;
extern const RuntimeType* Int32_t2950945753_0_0_0_var;
extern const RuntimeType* Single_t1397266774_0_0_0_var;
extern const RuntimeType* Double_t594665363_0_0_0_var;
extern const RuntimeType* Int64_t3736567304_0_0_0_var;
extern const RuntimeType* String_t_0_0_0_var;
extern RuntimeClass* ImporterFunc_t3630937194_il2cpp_TypeInfo_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__9_m3120562086_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__A_m3123255486_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__B_m3123219883_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__C_m3123314944_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__D_m3123024917_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__E_m3123374154_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__F_m3123338535_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__10_m2509882514_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__11_m613999264_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__12_m1159193330_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__13_m1427563268_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__14_m1419109062_RuntimeMethod_var;
extern const uint32_t JsonMapper_RegisterBaseImporters_m623152139_MetadataUsageId;
extern RuntimeClass* IDictionary_2_t1152366808_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t1780316962_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t244168353_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m1305840448_RuntimeMethod_var;
extern const uint32_t JsonMapper_RegisterImporter_m3334975862_MetadataUsageId;
extern RuntimeClass* JsonException_t3682484112_il2cpp_TypeInfo_var;
extern RuntimeClass* IJsonWrapper_t1028825384_il2cpp_TypeInfo_var;
extern RuntimeClass* Double_t594665363_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern RuntimeClass* Int64_t3736567304_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimeArray_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern RuntimeClass* IList_t2094931216_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_t1941168011_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_t1363984059_il2cpp_TypeInfo_var;
extern RuntimeClass* DictionaryEntry_t3123975638_il2cpp_TypeInfo_var;
extern RuntimeClass* Enum_t4135868527_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt64_t4134040092_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t2707293362_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t4160010941_il2cpp_TypeInfo_var;
extern RuntimeClass* FieldInfo_t_il2cpp_TypeInfo_var;
extern RuntimeClass* PropertyInfo_t_il2cpp_TypeInfo_var;
extern const RuntimeMethod* JsonMapper_WriteValue_m3142592044_RuntimeMethod_var;
extern String_t* _stringLiteral2854558491;
extern const uint32_t JsonMapper_WriteValue_m3142592044_MetadataUsageId;
extern const uint32_t JsonMapper_ToJson_m3416713044_MetadataUsageId;
extern RuntimeClass* Byte_t1134296376_il2cpp_TypeInfo_var;
extern RuntimeClass* Convert_t2465617642_il2cpp_TypeInfo_var;
extern const uint32_t JsonMapper_U3CRegisterBaseExportersU3Em__0_m209874195_MetadataUsageId;
extern RuntimeClass* Char_t3634460470_il2cpp_TypeInfo_var;
extern const uint32_t JsonMapper_U3CRegisterBaseExportersU3Em__1_m3570407405_MetadataUsageId;
extern RuntimeClass* DateTime_t3738529785_il2cpp_TypeInfo_var;
extern const uint32_t JsonMapper_U3CRegisterBaseExportersU3Em__2_m600765210_MetadataUsageId;
extern RuntimeClass* Decimal_t2948259380_il2cpp_TypeInfo_var;
extern const uint32_t JsonMapper_U3CRegisterBaseExportersU3Em__3_m939732965_MetadataUsageId;
extern RuntimeClass* SByte_t1669577662_il2cpp_TypeInfo_var;
extern const uint32_t JsonMapper_U3CRegisterBaseExportersU3Em__4_m266458088_MetadataUsageId;
extern RuntimeClass* Int16_t2552820387_il2cpp_TypeInfo_var;
extern const uint32_t JsonMapper_U3CRegisterBaseExportersU3Em__5_m3328515821_MetadataUsageId;
extern RuntimeClass* UInt16_t2177724958_il2cpp_TypeInfo_var;
extern const uint32_t JsonMapper_U3CRegisterBaseExportersU3Em__6_m312889811_MetadataUsageId;
extern RuntimeClass* UInt32_t2560061978_il2cpp_TypeInfo_var;
extern const uint32_t JsonMapper_U3CRegisterBaseExportersU3Em__7_m3877741659_MetadataUsageId;
extern const uint32_t JsonMapper_U3CRegisterBaseExportersU3Em__8_m225163408_MetadataUsageId;
extern const uint32_t JsonMapper_U3CRegisterBaseImportersU3Em__9_m3120562086_MetadataUsageId;
extern const uint32_t JsonMapper_U3CRegisterBaseImportersU3Em__A_m3123255486_MetadataUsageId;
extern const uint32_t JsonMapper_U3CRegisterBaseImportersU3Em__B_m3123219883_MetadataUsageId;
extern const uint32_t JsonMapper_U3CRegisterBaseImportersU3Em__C_m3123314944_MetadataUsageId;
extern const uint32_t JsonMapper_U3CRegisterBaseImportersU3Em__D_m3123024917_MetadataUsageId;
extern const uint32_t JsonMapper_U3CRegisterBaseImportersU3Em__E_m3123374154_MetadataUsageId;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern const uint32_t JsonMapper_U3CRegisterBaseImportersU3Em__F_m3123338535_MetadataUsageId;
extern const uint32_t JsonMapper_U3CRegisterBaseImportersU3Em__10_m2509882514_MetadataUsageId;
extern const uint32_t JsonMapper_U3CRegisterBaseImportersU3Em__11_m613999264_MetadataUsageId;
extern const uint32_t JsonMapper_U3CRegisterBaseImportersU3Em__12_m1159193330_MetadataUsageId;
extern const uint32_t JsonMapper_U3CRegisterBaseImportersU3Em__13_m1427563268_MetadataUsageId;
extern const uint32_t JsonMapper_U3CRegisterBaseImportersU3Em__14_m1419109062_MetadataUsageId;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern RuntimeClass* StringWriter_t802263757_il2cpp_TypeInfo_var;
extern const uint32_t JsonWriter__ctor_m3035373812_MetadataUsageId;
extern RuntimeClass* NumberFormatInfo_t435877138_il2cpp_TypeInfo_var;
extern const uint32_t JsonWriter__cctor_m2709308669_MetadataUsageId;
extern const RuntimeMethod* JsonWriter_DoValidation_m2027671802_RuntimeMethod_var;
extern String_t* _stringLiteral3717129058;
extern String_t* _stringLiteral4103647921;
extern String_t* _stringLiteral1740842079;
extern String_t* _stringLiteral2856579791;
extern String_t* _stringLiteral393113856;
extern String_t* _stringLiteral4135352181;
extern const uint32_t JsonWriter_DoValidation_m2027671802_MetadataUsageId;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern RuntimeClass* Stack_1_t1854483454_il2cpp_TypeInfo_var;
extern RuntimeClass* WriterContext_t1011093999_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Stack_1__ctor_m227092194_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1_Push_m1814405731_RuntimeMethod_var;
extern const uint32_t JsonWriter_Init_m1392617240_MetadataUsageId;
extern const uint32_t JsonWriter_PutString_m890241341_MetadataUsageId;
extern const uint32_t JsonWriter_ToString_m1507950332_MetadataUsageId;
extern const RuntimeMethod* Stack_1_Clear_m1384768577_RuntimeMethod_var;
extern const uint32_t JsonWriter_Reset_m1767624851_MetadataUsageId;
extern String_t* _stringLiteral4002445229;
extern String_t* _stringLiteral3875954633;
extern const uint32_t JsonWriter_Write_m338324825_MetadataUsageId;
extern const uint32_t JsonWriter_Write_m934090602_MetadataUsageId;
extern String_t* _stringLiteral3451565954;
extern const uint32_t JsonWriter_Write_m1904563146_MetadataUsageId;
extern const uint32_t JsonWriter_Write_m2431965710_MetadataUsageId;
extern const uint32_t JsonWriter_Write_m2431572489_MetadataUsageId;
extern String_t* _stringLiteral1202628576;
extern const uint32_t JsonWriter_Write_m3439490280_MetadataUsageId;
extern const uint32_t JsonWriter_Write_m2044706063_MetadataUsageId;
extern const RuntimeMethod* Stack_1_Pop_m3762211336_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1_get_Count_m3119578031_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1_Peek_m3227997562_RuntimeMethod_var;
extern String_t* _stringLiteral3452614643;
extern const uint32_t JsonWriter_WriteArrayEnd_m3257408064_MetadataUsageId;
extern String_t* _stringLiteral3452614645;
extern const uint32_t JsonWriter_WriteArrayStart_m2705523021_MetadataUsageId;
extern String_t* _stringLiteral3452614611;
extern const uint32_t JsonWriter_WriteObjectEnd_m2601038932_MetadataUsageId;
extern String_t* _stringLiteral3452614613;
extern const uint32_t JsonWriter_WriteObjectStart_m3619548051_MetadataUsageId;
extern String_t* _stringLiteral3450517398;
extern const uint32_t JsonWriter_WritePropertyName_m4239827789_MetadataUsageId;

struct PropertyInfoU5BU5D_t1461822886;
struct FieldInfoU5BU5D_t846150980;
struct ObjectU5BU5D_t2843939325;
struct CharU5BU5D_t3528271667;


#ifndef U3CMODULEU3E_T692745552_H
#define U3CMODULEU3E_T692745552_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745552 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745552_H
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
#ifndef LIST_1_T904547919_H
#define LIST_1_T904547919_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<LitJson.PropertyMetadata>
struct  List_1_t904547919  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PropertyMetadataU5BU5D_t3282844708* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t904547919, ____items_1)); }
	inline PropertyMetadataU5BU5D_t3282844708* get__items_1() const { return ____items_1; }
	inline PropertyMetadataU5BU5D_t3282844708** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PropertyMetadataU5BU5D_t3282844708* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t904547919, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t904547919, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t904547919_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	PropertyMetadataU5BU5D_t3282844708* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t904547919_StaticFields, ___EmptyArray_4)); }
	inline PropertyMetadataU5BU5D_t3282844708* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline PropertyMetadataU5BU5D_t3282844708** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(PropertyMetadataU5BU5D_t3282844708* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T904547919_H
#ifndef DICTIONARY_2_T2688515417_H
#define DICTIONARY_2_T2688515417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct  Dictionary_2_t2688515417  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	TypeU5BU5D_t3940880105* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	IDictionary_2U5BU5D_t369565116* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2688515417, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2688515417, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2688515417, ___keySlots_6)); }
	inline TypeU5BU5D_t3940880105* get_keySlots_6() const { return ___keySlots_6; }
	inline TypeU5BU5D_t3940880105** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(TypeU5BU5D_t3940880105* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2688515417, ___valueSlots_7)); }
	inline IDictionary_2U5BU5D_t369565116* get_valueSlots_7() const { return ___valueSlots_7; }
	inline IDictionary_2U5BU5D_t369565116** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(IDictionary_2U5BU5D_t369565116* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2688515417, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2688515417, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2688515417, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2688515417, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2688515417, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2688515417, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2688515417, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2688515417_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t650060127 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2688515417_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t650060127 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t650060127 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t650060127 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2688515417_H
#ifndef DICTIONARY_2_T691233_H
#define DICTIONARY_2_T691233_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ExporterFunc>
struct  Dictionary_2_t691233  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	TypeU5BU5D_t3940880105* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	ExporterFuncU5BU5D_t3613872852* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t691233, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t691233, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t691233, ___keySlots_6)); }
	inline TypeU5BU5D_t3940880105* get_keySlots_6() const { return ___keySlots_6; }
	inline TypeU5BU5D_t3940880105** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(TypeU5BU5D_t3940880105* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t691233, ___valueSlots_7)); }
	inline ExporterFuncU5BU5D_t3613872852* get_valueSlots_7() const { return ___valueSlots_7; }
	inline ExporterFuncU5BU5D_t3613872852** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(ExporterFuncU5BU5D_t3613872852* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t691233, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t691233, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t691233, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t691233, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t691233, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t691233, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t691233, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t691233_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t3894367863 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t691233_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t3894367863 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t3894367863 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t3894367863 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T691233_H
#ifndef DICTIONARY_2_T3692140024_H
#define DICTIONARY_2_T3692140024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct  Dictionary_2_t3692140024  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	TypeU5BU5D_t3940880105* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	IList_1U5BU5D_t2778516417* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3692140024, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3692140024, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3692140024, ___keySlots_6)); }
	inline TypeU5BU5D_t3940880105* get_keySlots_6() const { return ___keySlots_6; }
	inline TypeU5BU5D_t3940880105** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(TypeU5BU5D_t3940880105* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3692140024, ___valueSlots_7)); }
	inline IList_1U5BU5D_t2778516417* get_valueSlots_7() const { return ___valueSlots_7; }
	inline IList_1U5BU5D_t2778516417** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(IList_1U5BU5D_t2778516417* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3692140024, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3692140024, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3692140024, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3692140024, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3692140024, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3692140024, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3692140024, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3692140024_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t3059011428 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3692140024_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t3059011428 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t3059011428 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t3059011428 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3692140024_H
#ifndef DICTIONARY_2_T1715664290_H
#define DICTIONARY_2_T1715664290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>
struct  Dictionary_2_t1715664290  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	TypeU5BU5D_t3940880105* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	ObjectMetadataU5BU5D_t543634991* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1715664290, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1715664290, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1715664290, ___keySlots_6)); }
	inline TypeU5BU5D_t3940880105* get_keySlots_6() const { return ___keySlots_6; }
	inline TypeU5BU5D_t3940880105** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(TypeU5BU5D_t3940880105* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1715664290, ___valueSlots_7)); }
	inline ObjectMetadataU5BU5D_t543634991* get_valueSlots_7() const { return ___valueSlots_7; }
	inline ObjectMetadataU5BU5D_t543634991** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(ObjectMetadataU5BU5D_t543634991* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1715664290, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1715664290, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t1715664290, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t1715664290, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t1715664290, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t1715664290, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t1715664290, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t1715664290_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t824130002 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t1715664290_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t824130002 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t824130002 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t824130002 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T1715664290_H
#ifndef DICTIONARY_2_T935204471_H
#define DICTIONARY_2_T935204471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct  Dictionary_2_t935204471  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	TypeU5BU5D_t3940880105* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	IDictionary_2U5BU5D_t2609190502* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t935204471, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t935204471, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t935204471, ___keySlots_6)); }
	inline TypeU5BU5D_t3940880105* get_keySlots_6() const { return ___keySlots_6; }
	inline TypeU5BU5D_t3940880105** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(TypeU5BU5D_t3940880105* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t935204471, ___valueSlots_7)); }
	inline IDictionary_2U5BU5D_t2609190502* get_valueSlots_7() const { return ___valueSlots_7; }
	inline IDictionary_2U5BU5D_t2609190502** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(IDictionary_2U5BU5D_t2609190502* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t935204471, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t935204471, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t935204471, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t935204471, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t935204471, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t935204471, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t935204471, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t935204471_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t2889685513 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t935204471_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t2889685513 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t2889685513 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t2889685513 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T935204471_H
#ifndef DICTIONARY_2_T1780316962_H
#define DICTIONARY_2_T1780316962_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>
struct  Dictionary_2_t1780316962  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	TypeU5BU5D_t3940880105* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	ImporterFuncU5BU5D_t332556975* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1780316962, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1780316962, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1780316962, ___keySlots_6)); }
	inline TypeU5BU5D_t3940880105* get_keySlots_6() const { return ___keySlots_6; }
	inline TypeU5BU5D_t3940880105** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(TypeU5BU5D_t3940880105* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1780316962, ___valueSlots_7)); }
	inline ImporterFuncU5BU5D_t332556975* get_valueSlots_7() const { return ___valueSlots_7; }
	inline ImporterFuncU5BU5D_t332556975** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(ImporterFuncU5BU5D_t332556975* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1780316962, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1780316962, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t1780316962, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t1780316962, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t1780316962, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t1780316962, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t1780316962, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t1780316962_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t613051986 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t1780316962_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t613051986 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t613051986 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t613051986 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T1780316962_H
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
#ifndef STACK_1_T1854483454_H
#define STACK_1_T1854483454_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Stack`1<LitJson.WriterContext>
struct  Stack_1_t1854483454  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	WriterContextU5BU5D_t1224381814* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t1854483454, ____array_0)); }
	inline WriterContextU5BU5D_t1224381814* get__array_0() const { return ____array_0; }
	inline WriterContextU5BU5D_t1224381814** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(WriterContextU5BU5D_t1224381814* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t1854483454, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t1854483454, ____version_2)); }
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
#endif // STACK_1_T1854483454_H
#ifndef WRITERCONTEXT_T1011093999_H
#define WRITERCONTEXT_T1011093999_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.WriterContext
struct  WriterContext_t1011093999  : public RuntimeObject
{
public:
	// System.Int32 LitJson.WriterContext::Count
	int32_t ___Count_0;
	// System.Boolean LitJson.WriterContext::InArray
	bool ___InArray_1;
	// System.Boolean LitJson.WriterContext::InObject
	bool ___InObject_2;
	// System.Boolean LitJson.WriterContext::ExpectingValue
	bool ___ExpectingValue_3;
	// System.Int32 LitJson.WriterContext::Padding
	int32_t ___Padding_4;

public:
	inline static int32_t get_offset_of_Count_0() { return static_cast<int32_t>(offsetof(WriterContext_t1011093999, ___Count_0)); }
	inline int32_t get_Count_0() const { return ___Count_0; }
	inline int32_t* get_address_of_Count_0() { return &___Count_0; }
	inline void set_Count_0(int32_t value)
	{
		___Count_0 = value;
	}

	inline static int32_t get_offset_of_InArray_1() { return static_cast<int32_t>(offsetof(WriterContext_t1011093999, ___InArray_1)); }
	inline bool get_InArray_1() const { return ___InArray_1; }
	inline bool* get_address_of_InArray_1() { return &___InArray_1; }
	inline void set_InArray_1(bool value)
	{
		___InArray_1 = value;
	}

	inline static int32_t get_offset_of_InObject_2() { return static_cast<int32_t>(offsetof(WriterContext_t1011093999, ___InObject_2)); }
	inline bool get_InObject_2() const { return ___InObject_2; }
	inline bool* get_address_of_InObject_2() { return &___InObject_2; }
	inline void set_InObject_2(bool value)
	{
		___InObject_2 = value;
	}

	inline static int32_t get_offset_of_ExpectingValue_3() { return static_cast<int32_t>(offsetof(WriterContext_t1011093999, ___ExpectingValue_3)); }
	inline bool get_ExpectingValue_3() const { return ___ExpectingValue_3; }
	inline bool* get_address_of_ExpectingValue_3() { return &___ExpectingValue_3; }
	inline void set_ExpectingValue_3(bool value)
	{
		___ExpectingValue_3 = value;
	}

	inline static int32_t get_offset_of_Padding_4() { return static_cast<int32_t>(offsetof(WriterContext_t1011093999, ___Padding_4)); }
	inline int32_t get_Padding_4() const { return ___Padding_4; }
	inline int32_t* get_address_of_Padding_4() { return &___Padding_4; }
	inline void set_Padding_4(int32_t value)
	{
		___Padding_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITERCONTEXT_T1011093999_H
#ifndef NUMBERFORMATINFO_T435877138_H
#define NUMBERFORMATINFO_T435877138_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.NumberFormatInfo
struct  NumberFormatInfo_t435877138  : public RuntimeObject
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
	Int32U5BU5D_t385246372* ___currencyGroupSizes_9;
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
	Int32U5BU5D_t385246372* ___numberGroupSizes_19;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_20;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_21;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_22;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_23;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t385246372* ___percentGroupSizes_24;
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
	StringU5BU5D_t1281789340* ___nativeDigits_36;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_37;

public:
	inline static int32_t get_offset_of_isReadOnly_0() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___isReadOnly_0)); }
	inline bool get_isReadOnly_0() const { return ___isReadOnly_0; }
	inline bool* get_address_of_isReadOnly_0() { return &___isReadOnly_0; }
	inline void set_isReadOnly_0(bool value)
	{
		___isReadOnly_0 = value;
	}

	inline static int32_t get_offset_of_decimalFormats_1() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___decimalFormats_1)); }
	inline String_t* get_decimalFormats_1() const { return ___decimalFormats_1; }
	inline String_t** get_address_of_decimalFormats_1() { return &___decimalFormats_1; }
	inline void set_decimalFormats_1(String_t* value)
	{
		___decimalFormats_1 = value;
		Il2CppCodeGenWriteBarrier((&___decimalFormats_1), value);
	}

	inline static int32_t get_offset_of_currencyFormats_2() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyFormats_2)); }
	inline String_t* get_currencyFormats_2() const { return ___currencyFormats_2; }
	inline String_t** get_address_of_currencyFormats_2() { return &___currencyFormats_2; }
	inline void set_currencyFormats_2(String_t* value)
	{
		___currencyFormats_2 = value;
		Il2CppCodeGenWriteBarrier((&___currencyFormats_2), value);
	}

	inline static int32_t get_offset_of_percentFormats_3() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentFormats_3)); }
	inline String_t* get_percentFormats_3() const { return ___percentFormats_3; }
	inline String_t** get_address_of_percentFormats_3() { return &___percentFormats_3; }
	inline void set_percentFormats_3(String_t* value)
	{
		___percentFormats_3 = value;
		Il2CppCodeGenWriteBarrier((&___percentFormats_3), value);
	}

	inline static int32_t get_offset_of_digitPattern_4() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___digitPattern_4)); }
	inline String_t* get_digitPattern_4() const { return ___digitPattern_4; }
	inline String_t** get_address_of_digitPattern_4() { return &___digitPattern_4; }
	inline void set_digitPattern_4(String_t* value)
	{
		___digitPattern_4 = value;
		Il2CppCodeGenWriteBarrier((&___digitPattern_4), value);
	}

	inline static int32_t get_offset_of_zeroPattern_5() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___zeroPattern_5)); }
	inline String_t* get_zeroPattern_5() const { return ___zeroPattern_5; }
	inline String_t** get_address_of_zeroPattern_5() { return &___zeroPattern_5; }
	inline void set_zeroPattern_5(String_t* value)
	{
		___zeroPattern_5 = value;
		Il2CppCodeGenWriteBarrier((&___zeroPattern_5), value);
	}

	inline static int32_t get_offset_of_currencyDecimalDigits_6() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyDecimalDigits_6)); }
	inline int32_t get_currencyDecimalDigits_6() const { return ___currencyDecimalDigits_6; }
	inline int32_t* get_address_of_currencyDecimalDigits_6() { return &___currencyDecimalDigits_6; }
	inline void set_currencyDecimalDigits_6(int32_t value)
	{
		___currencyDecimalDigits_6 = value;
	}

	inline static int32_t get_offset_of_currencyDecimalSeparator_7() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyDecimalSeparator_7)); }
	inline String_t* get_currencyDecimalSeparator_7() const { return ___currencyDecimalSeparator_7; }
	inline String_t** get_address_of_currencyDecimalSeparator_7() { return &___currencyDecimalSeparator_7; }
	inline void set_currencyDecimalSeparator_7(String_t* value)
	{
		___currencyDecimalSeparator_7 = value;
		Il2CppCodeGenWriteBarrier((&___currencyDecimalSeparator_7), value);
	}

	inline static int32_t get_offset_of_currencyGroupSeparator_8() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyGroupSeparator_8)); }
	inline String_t* get_currencyGroupSeparator_8() const { return ___currencyGroupSeparator_8; }
	inline String_t** get_address_of_currencyGroupSeparator_8() { return &___currencyGroupSeparator_8; }
	inline void set_currencyGroupSeparator_8(String_t* value)
	{
		___currencyGroupSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((&___currencyGroupSeparator_8), value);
	}

	inline static int32_t get_offset_of_currencyGroupSizes_9() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyGroupSizes_9)); }
	inline Int32U5BU5D_t385246372* get_currencyGroupSizes_9() const { return ___currencyGroupSizes_9; }
	inline Int32U5BU5D_t385246372** get_address_of_currencyGroupSizes_9() { return &___currencyGroupSizes_9; }
	inline void set_currencyGroupSizes_9(Int32U5BU5D_t385246372* value)
	{
		___currencyGroupSizes_9 = value;
		Il2CppCodeGenWriteBarrier((&___currencyGroupSizes_9), value);
	}

	inline static int32_t get_offset_of_currencyNegativePattern_10() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyNegativePattern_10)); }
	inline int32_t get_currencyNegativePattern_10() const { return ___currencyNegativePattern_10; }
	inline int32_t* get_address_of_currencyNegativePattern_10() { return &___currencyNegativePattern_10; }
	inline void set_currencyNegativePattern_10(int32_t value)
	{
		___currencyNegativePattern_10 = value;
	}

	inline static int32_t get_offset_of_currencyPositivePattern_11() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyPositivePattern_11)); }
	inline int32_t get_currencyPositivePattern_11() const { return ___currencyPositivePattern_11; }
	inline int32_t* get_address_of_currencyPositivePattern_11() { return &___currencyPositivePattern_11; }
	inline void set_currencyPositivePattern_11(int32_t value)
	{
		___currencyPositivePattern_11 = value;
	}

	inline static int32_t get_offset_of_currencySymbol_12() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencySymbol_12)); }
	inline String_t* get_currencySymbol_12() const { return ___currencySymbol_12; }
	inline String_t** get_address_of_currencySymbol_12() { return &___currencySymbol_12; }
	inline void set_currencySymbol_12(String_t* value)
	{
		___currencySymbol_12 = value;
		Il2CppCodeGenWriteBarrier((&___currencySymbol_12), value);
	}

	inline static int32_t get_offset_of_nanSymbol_13() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___nanSymbol_13)); }
	inline String_t* get_nanSymbol_13() const { return ___nanSymbol_13; }
	inline String_t** get_address_of_nanSymbol_13() { return &___nanSymbol_13; }
	inline void set_nanSymbol_13(String_t* value)
	{
		___nanSymbol_13 = value;
		Il2CppCodeGenWriteBarrier((&___nanSymbol_13), value);
	}

	inline static int32_t get_offset_of_negativeInfinitySymbol_14() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___negativeInfinitySymbol_14)); }
	inline String_t* get_negativeInfinitySymbol_14() const { return ___negativeInfinitySymbol_14; }
	inline String_t** get_address_of_negativeInfinitySymbol_14() { return &___negativeInfinitySymbol_14; }
	inline void set_negativeInfinitySymbol_14(String_t* value)
	{
		___negativeInfinitySymbol_14 = value;
		Il2CppCodeGenWriteBarrier((&___negativeInfinitySymbol_14), value);
	}

	inline static int32_t get_offset_of_negativeSign_15() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___negativeSign_15)); }
	inline String_t* get_negativeSign_15() const { return ___negativeSign_15; }
	inline String_t** get_address_of_negativeSign_15() { return &___negativeSign_15; }
	inline void set_negativeSign_15(String_t* value)
	{
		___negativeSign_15 = value;
		Il2CppCodeGenWriteBarrier((&___negativeSign_15), value);
	}

	inline static int32_t get_offset_of_numberDecimalDigits_16() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberDecimalDigits_16)); }
	inline int32_t get_numberDecimalDigits_16() const { return ___numberDecimalDigits_16; }
	inline int32_t* get_address_of_numberDecimalDigits_16() { return &___numberDecimalDigits_16; }
	inline void set_numberDecimalDigits_16(int32_t value)
	{
		___numberDecimalDigits_16 = value;
	}

	inline static int32_t get_offset_of_numberDecimalSeparator_17() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberDecimalSeparator_17)); }
	inline String_t* get_numberDecimalSeparator_17() const { return ___numberDecimalSeparator_17; }
	inline String_t** get_address_of_numberDecimalSeparator_17() { return &___numberDecimalSeparator_17; }
	inline void set_numberDecimalSeparator_17(String_t* value)
	{
		___numberDecimalSeparator_17 = value;
		Il2CppCodeGenWriteBarrier((&___numberDecimalSeparator_17), value);
	}

	inline static int32_t get_offset_of_numberGroupSeparator_18() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberGroupSeparator_18)); }
	inline String_t* get_numberGroupSeparator_18() const { return ___numberGroupSeparator_18; }
	inline String_t** get_address_of_numberGroupSeparator_18() { return &___numberGroupSeparator_18; }
	inline void set_numberGroupSeparator_18(String_t* value)
	{
		___numberGroupSeparator_18 = value;
		Il2CppCodeGenWriteBarrier((&___numberGroupSeparator_18), value);
	}

	inline static int32_t get_offset_of_numberGroupSizes_19() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberGroupSizes_19)); }
	inline Int32U5BU5D_t385246372* get_numberGroupSizes_19() const { return ___numberGroupSizes_19; }
	inline Int32U5BU5D_t385246372** get_address_of_numberGroupSizes_19() { return &___numberGroupSizes_19; }
	inline void set_numberGroupSizes_19(Int32U5BU5D_t385246372* value)
	{
		___numberGroupSizes_19 = value;
		Il2CppCodeGenWriteBarrier((&___numberGroupSizes_19), value);
	}

	inline static int32_t get_offset_of_numberNegativePattern_20() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberNegativePattern_20)); }
	inline int32_t get_numberNegativePattern_20() const { return ___numberNegativePattern_20; }
	inline int32_t* get_address_of_numberNegativePattern_20() { return &___numberNegativePattern_20; }
	inline void set_numberNegativePattern_20(int32_t value)
	{
		___numberNegativePattern_20 = value;
	}

	inline static int32_t get_offset_of_percentDecimalDigits_21() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentDecimalDigits_21)); }
	inline int32_t get_percentDecimalDigits_21() const { return ___percentDecimalDigits_21; }
	inline int32_t* get_address_of_percentDecimalDigits_21() { return &___percentDecimalDigits_21; }
	inline void set_percentDecimalDigits_21(int32_t value)
	{
		___percentDecimalDigits_21 = value;
	}

	inline static int32_t get_offset_of_percentDecimalSeparator_22() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentDecimalSeparator_22)); }
	inline String_t* get_percentDecimalSeparator_22() const { return ___percentDecimalSeparator_22; }
	inline String_t** get_address_of_percentDecimalSeparator_22() { return &___percentDecimalSeparator_22; }
	inline void set_percentDecimalSeparator_22(String_t* value)
	{
		___percentDecimalSeparator_22 = value;
		Il2CppCodeGenWriteBarrier((&___percentDecimalSeparator_22), value);
	}

	inline static int32_t get_offset_of_percentGroupSeparator_23() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentGroupSeparator_23)); }
	inline String_t* get_percentGroupSeparator_23() const { return ___percentGroupSeparator_23; }
	inline String_t** get_address_of_percentGroupSeparator_23() { return &___percentGroupSeparator_23; }
	inline void set_percentGroupSeparator_23(String_t* value)
	{
		___percentGroupSeparator_23 = value;
		Il2CppCodeGenWriteBarrier((&___percentGroupSeparator_23), value);
	}

	inline static int32_t get_offset_of_percentGroupSizes_24() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentGroupSizes_24)); }
	inline Int32U5BU5D_t385246372* get_percentGroupSizes_24() const { return ___percentGroupSizes_24; }
	inline Int32U5BU5D_t385246372** get_address_of_percentGroupSizes_24() { return &___percentGroupSizes_24; }
	inline void set_percentGroupSizes_24(Int32U5BU5D_t385246372* value)
	{
		___percentGroupSizes_24 = value;
		Il2CppCodeGenWriteBarrier((&___percentGroupSizes_24), value);
	}

	inline static int32_t get_offset_of_percentNegativePattern_25() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentNegativePattern_25)); }
	inline int32_t get_percentNegativePattern_25() const { return ___percentNegativePattern_25; }
	inline int32_t* get_address_of_percentNegativePattern_25() { return &___percentNegativePattern_25; }
	inline void set_percentNegativePattern_25(int32_t value)
	{
		___percentNegativePattern_25 = value;
	}

	inline static int32_t get_offset_of_percentPositivePattern_26() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentPositivePattern_26)); }
	inline int32_t get_percentPositivePattern_26() const { return ___percentPositivePattern_26; }
	inline int32_t* get_address_of_percentPositivePattern_26() { return &___percentPositivePattern_26; }
	inline void set_percentPositivePattern_26(int32_t value)
	{
		___percentPositivePattern_26 = value;
	}

	inline static int32_t get_offset_of_percentSymbol_27() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentSymbol_27)); }
	inline String_t* get_percentSymbol_27() const { return ___percentSymbol_27; }
	inline String_t** get_address_of_percentSymbol_27() { return &___percentSymbol_27; }
	inline void set_percentSymbol_27(String_t* value)
	{
		___percentSymbol_27 = value;
		Il2CppCodeGenWriteBarrier((&___percentSymbol_27), value);
	}

	inline static int32_t get_offset_of_perMilleSymbol_28() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___perMilleSymbol_28)); }
	inline String_t* get_perMilleSymbol_28() const { return ___perMilleSymbol_28; }
	inline String_t** get_address_of_perMilleSymbol_28() { return &___perMilleSymbol_28; }
	inline void set_perMilleSymbol_28(String_t* value)
	{
		___perMilleSymbol_28 = value;
		Il2CppCodeGenWriteBarrier((&___perMilleSymbol_28), value);
	}

	inline static int32_t get_offset_of_positiveInfinitySymbol_29() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___positiveInfinitySymbol_29)); }
	inline String_t* get_positiveInfinitySymbol_29() const { return ___positiveInfinitySymbol_29; }
	inline String_t** get_address_of_positiveInfinitySymbol_29() { return &___positiveInfinitySymbol_29; }
	inline void set_positiveInfinitySymbol_29(String_t* value)
	{
		___positiveInfinitySymbol_29 = value;
		Il2CppCodeGenWriteBarrier((&___positiveInfinitySymbol_29), value);
	}

	inline static int32_t get_offset_of_positiveSign_30() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___positiveSign_30)); }
	inline String_t* get_positiveSign_30() const { return ___positiveSign_30; }
	inline String_t** get_address_of_positiveSign_30() { return &___positiveSign_30; }
	inline void set_positiveSign_30(String_t* value)
	{
		___positiveSign_30 = value;
		Il2CppCodeGenWriteBarrier((&___positiveSign_30), value);
	}

	inline static int32_t get_offset_of_ansiCurrencySymbol_31() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___ansiCurrencySymbol_31)); }
	inline String_t* get_ansiCurrencySymbol_31() const { return ___ansiCurrencySymbol_31; }
	inline String_t** get_address_of_ansiCurrencySymbol_31() { return &___ansiCurrencySymbol_31; }
	inline void set_ansiCurrencySymbol_31(String_t* value)
	{
		___ansiCurrencySymbol_31 = value;
		Il2CppCodeGenWriteBarrier((&___ansiCurrencySymbol_31), value);
	}

	inline static int32_t get_offset_of_m_dataItem_32() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___m_dataItem_32)); }
	inline int32_t get_m_dataItem_32() const { return ___m_dataItem_32; }
	inline int32_t* get_address_of_m_dataItem_32() { return &___m_dataItem_32; }
	inline void set_m_dataItem_32(int32_t value)
	{
		___m_dataItem_32 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_33() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___m_useUserOverride_33)); }
	inline bool get_m_useUserOverride_33() const { return ___m_useUserOverride_33; }
	inline bool* get_address_of_m_useUserOverride_33() { return &___m_useUserOverride_33; }
	inline void set_m_useUserOverride_33(bool value)
	{
		___m_useUserOverride_33 = value;
	}

	inline static int32_t get_offset_of_validForParseAsNumber_34() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___validForParseAsNumber_34)); }
	inline bool get_validForParseAsNumber_34() const { return ___validForParseAsNumber_34; }
	inline bool* get_address_of_validForParseAsNumber_34() { return &___validForParseAsNumber_34; }
	inline void set_validForParseAsNumber_34(bool value)
	{
		___validForParseAsNumber_34 = value;
	}

	inline static int32_t get_offset_of_validForParseAsCurrency_35() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___validForParseAsCurrency_35)); }
	inline bool get_validForParseAsCurrency_35() const { return ___validForParseAsCurrency_35; }
	inline bool* get_address_of_validForParseAsCurrency_35() { return &___validForParseAsCurrency_35; }
	inline void set_validForParseAsCurrency_35(bool value)
	{
		___validForParseAsCurrency_35 = value;
	}

	inline static int32_t get_offset_of_nativeDigits_36() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___nativeDigits_36)); }
	inline StringU5BU5D_t1281789340* get_nativeDigits_36() const { return ___nativeDigits_36; }
	inline StringU5BU5D_t1281789340** get_address_of_nativeDigits_36() { return &___nativeDigits_36; }
	inline void set_nativeDigits_36(StringU5BU5D_t1281789340* value)
	{
		___nativeDigits_36 = value;
		Il2CppCodeGenWriteBarrier((&___nativeDigits_36), value);
	}

	inline static int32_t get_offset_of_digitSubstitution_37() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___digitSubstitution_37)); }
	inline int32_t get_digitSubstitution_37() const { return ___digitSubstitution_37; }
	inline int32_t* get_address_of_digitSubstitution_37() { return &___digitSubstitution_37; }
	inline void set_digitSubstitution_37(int32_t value)
	{
		___digitSubstitution_37 = value;
	}
};

struct NumberFormatInfo_t435877138_StaticFields
{
public:
	// System.String[] System.Globalization.NumberFormatInfo::invariantNativeDigits
	StringU5BU5D_t1281789340* ___invariantNativeDigits_38;

public:
	inline static int32_t get_offset_of_invariantNativeDigits_38() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138_StaticFields, ___invariantNativeDigits_38)); }
	inline StringU5BU5D_t1281789340* get_invariantNativeDigits_38() const { return ___invariantNativeDigits_38; }
	inline StringU5BU5D_t1281789340** get_address_of_invariantNativeDigits_38() { return &___invariantNativeDigits_38; }
	inline void set_invariantNativeDigits_38(StringU5BU5D_t1281789340* value)
	{
		___invariantNativeDigits_38 = value;
		Il2CppCodeGenWriteBarrier((&___invariantNativeDigits_38), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUMBERFORMATINFO_T435877138_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Int32 System.Text.StringBuilder::_length
	int32_t ____length_1;
	// System.String System.Text.StringBuilder::_str
	String_t* ____str_2;
	// System.String System.Text.StringBuilder::_cached_str
	String_t* ____cached_str_3;
	// System.Int32 System.Text.StringBuilder::_maxCapacity
	int32_t ____maxCapacity_4;

public:
	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__str_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____str_2)); }
	inline String_t* get__str_2() const { return ____str_2; }
	inline String_t** get_address_of__str_2() { return &____str_2; }
	inline void set__str_2(String_t* value)
	{
		____str_2 = value;
		Il2CppCodeGenWriteBarrier((&____str_2), value);
	}

	inline static int32_t get_offset_of__cached_str_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____cached_str_3)); }
	inline String_t* get__cached_str_3() const { return ____cached_str_3; }
	inline String_t** get_address_of__cached_str_3() { return &____cached_str_3; }
	inline void set__cached_str_3(String_t* value)
	{
		____cached_str_3 = value;
		Il2CppCodeGenWriteBarrier((&____cached_str_3), value);
	}

	inline static int32_t get_offset_of__maxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____maxCapacity_4)); }
	inline int32_t get__maxCapacity_4() const { return ____maxCapacity_4; }
	inline int32_t* get_address_of__maxCapacity_4() { return &____maxCapacity_4; }
	inline void set__maxCapacity_4(int32_t value)
	{
		____maxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef TEXTWRITER_T3478189236_H
#define TEXTWRITER_T3478189236_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextWriter
struct  TextWriter_t3478189236  : public RuntimeObject
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t3528271667* ___CoreNewLine_0;
	// System.IFormatProvider System.IO.TextWriter::internalFormatProvider
	RuntimeObject* ___internalFormatProvider_1;

public:
	inline static int32_t get_offset_of_CoreNewLine_0() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236, ___CoreNewLine_0)); }
	inline CharU5BU5D_t3528271667* get_CoreNewLine_0() const { return ___CoreNewLine_0; }
	inline CharU5BU5D_t3528271667** get_address_of_CoreNewLine_0() { return &___CoreNewLine_0; }
	inline void set_CoreNewLine_0(CharU5BU5D_t3528271667* value)
	{
		___CoreNewLine_0 = value;
		Il2CppCodeGenWriteBarrier((&___CoreNewLine_0), value);
	}

	inline static int32_t get_offset_of_internalFormatProvider_1() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236, ___internalFormatProvider_1)); }
	inline RuntimeObject* get_internalFormatProvider_1() const { return ___internalFormatProvider_1; }
	inline RuntimeObject** get_address_of_internalFormatProvider_1() { return &___internalFormatProvider_1; }
	inline void set_internalFormatProvider_1(RuntimeObject* value)
	{
		___internalFormatProvider_1 = value;
		Il2CppCodeGenWriteBarrier((&___internalFormatProvider_1), value);
	}
};

struct TextWriter_t3478189236_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t3478189236 * ___Null_2;

public:
	inline static int32_t get_offset_of_Null_2() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ___Null_2)); }
	inline TextWriter_t3478189236 * get_Null_2() const { return ___Null_2; }
	inline TextWriter_t3478189236 ** get_address_of_Null_2() { return &___Null_2; }
	inline void set_Null_2(TextWriter_t3478189236 * value)
	{
		___Null_2 = value;
		Il2CppCodeGenWriteBarrier((&___Null_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTWRITER_T3478189236_H
#ifndef DICTIONARY_2_T3338636003_H
#define DICTIONARY_2_T3338636003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>
struct  Dictionary_2_t3338636003  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	TypeU5BU5D_t3940880105* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	ArrayMetadataU5BU5D_t363333322* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3338636003, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3338636003, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3338636003, ___keySlots_6)); }
	inline TypeU5BU5D_t3940880105* get_keySlots_6() const { return ___keySlots_6; }
	inline TypeU5BU5D_t3940880105** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(TypeU5BU5D_t3940880105* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3338636003, ___valueSlots_7)); }
	inline ArrayMetadataU5BU5D_t363333322* get_valueSlots_7() const { return ___valueSlots_7; }
	inline ArrayMetadataU5BU5D_t363333322** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(ArrayMetadataU5BU5D_t363333322* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3338636003, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3338636003, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3338636003, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3338636003, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3338636003, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3338636003, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3338636003, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3338636003_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t643828333 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3338636003_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t643828333 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t643828333 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t643828333 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3338636003_H
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
#ifndef JSONWRITER_T3570089748_H
#define JSONWRITER_T3570089748_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.JsonWriter
struct  JsonWriter_t3570089748  : public RuntimeObject
{
public:
	// LitJson.WriterContext LitJson.JsonWriter::context
	WriterContext_t1011093999 * ___context_1;
	// System.Collections.Generic.Stack`1<LitJson.WriterContext> LitJson.JsonWriter::ctx_stack
	Stack_1_t1854483454 * ___ctx_stack_2;
	// System.Boolean LitJson.JsonWriter::has_reached_end
	bool ___has_reached_end_3;
	// System.Char[] LitJson.JsonWriter::hex_seq
	CharU5BU5D_t3528271667* ___hex_seq_4;
	// System.Int32 LitJson.JsonWriter::indentation
	int32_t ___indentation_5;
	// System.Int32 LitJson.JsonWriter::indent_value
	int32_t ___indent_value_6;
	// System.Text.StringBuilder LitJson.JsonWriter::inst_string_builder
	StringBuilder_t * ___inst_string_builder_7;
	// System.Boolean LitJson.JsonWriter::pretty_print
	bool ___pretty_print_8;
	// System.Boolean LitJson.JsonWriter::validate
	bool ___validate_9;
	// System.IO.TextWriter LitJson.JsonWriter::writer
	TextWriter_t3478189236 * ___writer_10;

public:
	inline static int32_t get_offset_of_context_1() { return static_cast<int32_t>(offsetof(JsonWriter_t3570089748, ___context_1)); }
	inline WriterContext_t1011093999 * get_context_1() const { return ___context_1; }
	inline WriterContext_t1011093999 ** get_address_of_context_1() { return &___context_1; }
	inline void set_context_1(WriterContext_t1011093999 * value)
	{
		___context_1 = value;
		Il2CppCodeGenWriteBarrier((&___context_1), value);
	}

	inline static int32_t get_offset_of_ctx_stack_2() { return static_cast<int32_t>(offsetof(JsonWriter_t3570089748, ___ctx_stack_2)); }
	inline Stack_1_t1854483454 * get_ctx_stack_2() const { return ___ctx_stack_2; }
	inline Stack_1_t1854483454 ** get_address_of_ctx_stack_2() { return &___ctx_stack_2; }
	inline void set_ctx_stack_2(Stack_1_t1854483454 * value)
	{
		___ctx_stack_2 = value;
		Il2CppCodeGenWriteBarrier((&___ctx_stack_2), value);
	}

	inline static int32_t get_offset_of_has_reached_end_3() { return static_cast<int32_t>(offsetof(JsonWriter_t3570089748, ___has_reached_end_3)); }
	inline bool get_has_reached_end_3() const { return ___has_reached_end_3; }
	inline bool* get_address_of_has_reached_end_3() { return &___has_reached_end_3; }
	inline void set_has_reached_end_3(bool value)
	{
		___has_reached_end_3 = value;
	}

	inline static int32_t get_offset_of_hex_seq_4() { return static_cast<int32_t>(offsetof(JsonWriter_t3570089748, ___hex_seq_4)); }
	inline CharU5BU5D_t3528271667* get_hex_seq_4() const { return ___hex_seq_4; }
	inline CharU5BU5D_t3528271667** get_address_of_hex_seq_4() { return &___hex_seq_4; }
	inline void set_hex_seq_4(CharU5BU5D_t3528271667* value)
	{
		___hex_seq_4 = value;
		Il2CppCodeGenWriteBarrier((&___hex_seq_4), value);
	}

	inline static int32_t get_offset_of_indentation_5() { return static_cast<int32_t>(offsetof(JsonWriter_t3570089748, ___indentation_5)); }
	inline int32_t get_indentation_5() const { return ___indentation_5; }
	inline int32_t* get_address_of_indentation_5() { return &___indentation_5; }
	inline void set_indentation_5(int32_t value)
	{
		___indentation_5 = value;
	}

	inline static int32_t get_offset_of_indent_value_6() { return static_cast<int32_t>(offsetof(JsonWriter_t3570089748, ___indent_value_6)); }
	inline int32_t get_indent_value_6() const { return ___indent_value_6; }
	inline int32_t* get_address_of_indent_value_6() { return &___indent_value_6; }
	inline void set_indent_value_6(int32_t value)
	{
		___indent_value_6 = value;
	}

	inline static int32_t get_offset_of_inst_string_builder_7() { return static_cast<int32_t>(offsetof(JsonWriter_t3570089748, ___inst_string_builder_7)); }
	inline StringBuilder_t * get_inst_string_builder_7() const { return ___inst_string_builder_7; }
	inline StringBuilder_t ** get_address_of_inst_string_builder_7() { return &___inst_string_builder_7; }
	inline void set_inst_string_builder_7(StringBuilder_t * value)
	{
		___inst_string_builder_7 = value;
		Il2CppCodeGenWriteBarrier((&___inst_string_builder_7), value);
	}

	inline static int32_t get_offset_of_pretty_print_8() { return static_cast<int32_t>(offsetof(JsonWriter_t3570089748, ___pretty_print_8)); }
	inline bool get_pretty_print_8() const { return ___pretty_print_8; }
	inline bool* get_address_of_pretty_print_8() { return &___pretty_print_8; }
	inline void set_pretty_print_8(bool value)
	{
		___pretty_print_8 = value;
	}

	inline static int32_t get_offset_of_validate_9() { return static_cast<int32_t>(offsetof(JsonWriter_t3570089748, ___validate_9)); }
	inline bool get_validate_9() const { return ___validate_9; }
	inline bool* get_address_of_validate_9() { return &___validate_9; }
	inline void set_validate_9(bool value)
	{
		___validate_9 = value;
	}

	inline static int32_t get_offset_of_writer_10() { return static_cast<int32_t>(offsetof(JsonWriter_t3570089748, ___writer_10)); }
	inline TextWriter_t3478189236 * get_writer_10() const { return ___writer_10; }
	inline TextWriter_t3478189236 ** get_address_of_writer_10() { return &___writer_10; }
	inline void set_writer_10(TextWriter_t3478189236 * value)
	{
		___writer_10 = value;
		Il2CppCodeGenWriteBarrier((&___writer_10), value);
	}
};

struct JsonWriter_t3570089748_StaticFields
{
public:
	// System.Globalization.NumberFormatInfo LitJson.JsonWriter::number_format
	NumberFormatInfo_t435877138 * ___number_format_0;

public:
	inline static int32_t get_offset_of_number_format_0() { return static_cast<int32_t>(offsetof(JsonWriter_t3570089748_StaticFields, ___number_format_0)); }
	inline NumberFormatInfo_t435877138 * get_number_format_0() const { return ___number_format_0; }
	inline NumberFormatInfo_t435877138 ** get_address_of_number_format_0() { return &___number_format_0; }
	inline void set_number_format_0(NumberFormatInfo_t435877138 * value)
	{
		___number_format_0 = value;
		Il2CppCodeGenWriteBarrier((&___number_format_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONWRITER_T3570089748_H
#ifndef JSONMAPPER_T3815285241_H
#define JSONMAPPER_T3815285241_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.JsonMapper
struct  JsonMapper_t3815285241  : public RuntimeObject
{
public:

public:
};

struct JsonMapper_t3815285241_StaticFields
{
public:
	// System.Int32 LitJson.JsonMapper::max_nesting_depth
	int32_t ___max_nesting_depth_0;
	// System.IFormatProvider LitJson.JsonMapper::datetime_format
	RuntimeObject* ___datetime_format_1;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc> LitJson.JsonMapper::base_exporters_table
	RuntimeObject* ___base_exporters_table_2;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc> LitJson.JsonMapper::custom_exporters_table
	RuntimeObject* ___custom_exporters_table_3;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>> LitJson.JsonMapper::base_importers_table
	RuntimeObject* ___base_importers_table_4;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>> LitJson.JsonMapper::custom_importers_table
	RuntimeObject* ___custom_importers_table_5;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ArrayMetadata> LitJson.JsonMapper::array_metadata
	RuntimeObject* ___array_metadata_6;
	// System.Object LitJson.JsonMapper::array_metadata_lock
	RuntimeObject * ___array_metadata_lock_7;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>> LitJson.JsonMapper::conv_ops
	RuntimeObject* ___conv_ops_8;
	// System.Object LitJson.JsonMapper::conv_ops_lock
	RuntimeObject * ___conv_ops_lock_9;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ObjectMetadata> LitJson.JsonMapper::object_metadata
	RuntimeObject* ___object_metadata_10;
	// System.Object LitJson.JsonMapper::object_metadata_lock
	RuntimeObject * ___object_metadata_lock_11;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>> LitJson.JsonMapper::type_properties
	RuntimeObject* ___type_properties_12;
	// System.Object LitJson.JsonMapper::type_properties_lock
	RuntimeObject * ___type_properties_lock_13;
	// LitJson.JsonWriter LitJson.JsonMapper::static_writer
	JsonWriter_t3570089748 * ___static_writer_14;
	// System.Object LitJson.JsonMapper::static_writer_lock
	RuntimeObject * ___static_writer_lock_15;
	// System.Collections.Generic.List`1<System.String> LitJson.JsonMapper::static_err_stack
	List_1_t3319525431 * ___static_err_stack_16;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache11
	ExporterFunc_t1851311465 * ___U3CU3Ef__amU24cache11_17;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache12
	ExporterFunc_t1851311465 * ___U3CU3Ef__amU24cache12_18;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache13
	ExporterFunc_t1851311465 * ___U3CU3Ef__amU24cache13_19;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache14
	ExporterFunc_t1851311465 * ___U3CU3Ef__amU24cache14_20;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache15
	ExporterFunc_t1851311465 * ___U3CU3Ef__amU24cache15_21;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache16
	ExporterFunc_t1851311465 * ___U3CU3Ef__amU24cache16_22;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache17
	ExporterFunc_t1851311465 * ___U3CU3Ef__amU24cache17_23;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache18
	ExporterFunc_t1851311465 * ___U3CU3Ef__amU24cache18_24;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache19
	ExporterFunc_t1851311465 * ___U3CU3Ef__amU24cache19_25;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache1A
	ImporterFunc_t3630937194 * ___U3CU3Ef__amU24cache1A_26;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache1B
	ImporterFunc_t3630937194 * ___U3CU3Ef__amU24cache1B_27;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache1C
	ImporterFunc_t3630937194 * ___U3CU3Ef__amU24cache1C_28;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache1D
	ImporterFunc_t3630937194 * ___U3CU3Ef__amU24cache1D_29;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache1E
	ImporterFunc_t3630937194 * ___U3CU3Ef__amU24cache1E_30;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache1F
	ImporterFunc_t3630937194 * ___U3CU3Ef__amU24cache1F_31;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache20
	ImporterFunc_t3630937194 * ___U3CU3Ef__amU24cache20_32;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache21
	ImporterFunc_t3630937194 * ___U3CU3Ef__amU24cache21_33;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache22
	ImporterFunc_t3630937194 * ___U3CU3Ef__amU24cache22_34;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache23
	ImporterFunc_t3630937194 * ___U3CU3Ef__amU24cache23_35;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache24
	ImporterFunc_t3630937194 * ___U3CU3Ef__amU24cache24_36;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache25
	ImporterFunc_t3630937194 * ___U3CU3Ef__amU24cache25_37;

public:
	inline static int32_t get_offset_of_max_nesting_depth_0() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___max_nesting_depth_0)); }
	inline int32_t get_max_nesting_depth_0() const { return ___max_nesting_depth_0; }
	inline int32_t* get_address_of_max_nesting_depth_0() { return &___max_nesting_depth_0; }
	inline void set_max_nesting_depth_0(int32_t value)
	{
		___max_nesting_depth_0 = value;
	}

	inline static int32_t get_offset_of_datetime_format_1() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___datetime_format_1)); }
	inline RuntimeObject* get_datetime_format_1() const { return ___datetime_format_1; }
	inline RuntimeObject** get_address_of_datetime_format_1() { return &___datetime_format_1; }
	inline void set_datetime_format_1(RuntimeObject* value)
	{
		___datetime_format_1 = value;
		Il2CppCodeGenWriteBarrier((&___datetime_format_1), value);
	}

	inline static int32_t get_offset_of_base_exporters_table_2() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___base_exporters_table_2)); }
	inline RuntimeObject* get_base_exporters_table_2() const { return ___base_exporters_table_2; }
	inline RuntimeObject** get_address_of_base_exporters_table_2() { return &___base_exporters_table_2; }
	inline void set_base_exporters_table_2(RuntimeObject* value)
	{
		___base_exporters_table_2 = value;
		Il2CppCodeGenWriteBarrier((&___base_exporters_table_2), value);
	}

	inline static int32_t get_offset_of_custom_exporters_table_3() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___custom_exporters_table_3)); }
	inline RuntimeObject* get_custom_exporters_table_3() const { return ___custom_exporters_table_3; }
	inline RuntimeObject** get_address_of_custom_exporters_table_3() { return &___custom_exporters_table_3; }
	inline void set_custom_exporters_table_3(RuntimeObject* value)
	{
		___custom_exporters_table_3 = value;
		Il2CppCodeGenWriteBarrier((&___custom_exporters_table_3), value);
	}

	inline static int32_t get_offset_of_base_importers_table_4() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___base_importers_table_4)); }
	inline RuntimeObject* get_base_importers_table_4() const { return ___base_importers_table_4; }
	inline RuntimeObject** get_address_of_base_importers_table_4() { return &___base_importers_table_4; }
	inline void set_base_importers_table_4(RuntimeObject* value)
	{
		___base_importers_table_4 = value;
		Il2CppCodeGenWriteBarrier((&___base_importers_table_4), value);
	}

	inline static int32_t get_offset_of_custom_importers_table_5() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___custom_importers_table_5)); }
	inline RuntimeObject* get_custom_importers_table_5() const { return ___custom_importers_table_5; }
	inline RuntimeObject** get_address_of_custom_importers_table_5() { return &___custom_importers_table_5; }
	inline void set_custom_importers_table_5(RuntimeObject* value)
	{
		___custom_importers_table_5 = value;
		Il2CppCodeGenWriteBarrier((&___custom_importers_table_5), value);
	}

	inline static int32_t get_offset_of_array_metadata_6() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___array_metadata_6)); }
	inline RuntimeObject* get_array_metadata_6() const { return ___array_metadata_6; }
	inline RuntimeObject** get_address_of_array_metadata_6() { return &___array_metadata_6; }
	inline void set_array_metadata_6(RuntimeObject* value)
	{
		___array_metadata_6 = value;
		Il2CppCodeGenWriteBarrier((&___array_metadata_6), value);
	}

	inline static int32_t get_offset_of_array_metadata_lock_7() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___array_metadata_lock_7)); }
	inline RuntimeObject * get_array_metadata_lock_7() const { return ___array_metadata_lock_7; }
	inline RuntimeObject ** get_address_of_array_metadata_lock_7() { return &___array_metadata_lock_7; }
	inline void set_array_metadata_lock_7(RuntimeObject * value)
	{
		___array_metadata_lock_7 = value;
		Il2CppCodeGenWriteBarrier((&___array_metadata_lock_7), value);
	}

	inline static int32_t get_offset_of_conv_ops_8() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___conv_ops_8)); }
	inline RuntimeObject* get_conv_ops_8() const { return ___conv_ops_8; }
	inline RuntimeObject** get_address_of_conv_ops_8() { return &___conv_ops_8; }
	inline void set_conv_ops_8(RuntimeObject* value)
	{
		___conv_ops_8 = value;
		Il2CppCodeGenWriteBarrier((&___conv_ops_8), value);
	}

	inline static int32_t get_offset_of_conv_ops_lock_9() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___conv_ops_lock_9)); }
	inline RuntimeObject * get_conv_ops_lock_9() const { return ___conv_ops_lock_9; }
	inline RuntimeObject ** get_address_of_conv_ops_lock_9() { return &___conv_ops_lock_9; }
	inline void set_conv_ops_lock_9(RuntimeObject * value)
	{
		___conv_ops_lock_9 = value;
		Il2CppCodeGenWriteBarrier((&___conv_ops_lock_9), value);
	}

	inline static int32_t get_offset_of_object_metadata_10() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___object_metadata_10)); }
	inline RuntimeObject* get_object_metadata_10() const { return ___object_metadata_10; }
	inline RuntimeObject** get_address_of_object_metadata_10() { return &___object_metadata_10; }
	inline void set_object_metadata_10(RuntimeObject* value)
	{
		___object_metadata_10 = value;
		Il2CppCodeGenWriteBarrier((&___object_metadata_10), value);
	}

	inline static int32_t get_offset_of_object_metadata_lock_11() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___object_metadata_lock_11)); }
	inline RuntimeObject * get_object_metadata_lock_11() const { return ___object_metadata_lock_11; }
	inline RuntimeObject ** get_address_of_object_metadata_lock_11() { return &___object_metadata_lock_11; }
	inline void set_object_metadata_lock_11(RuntimeObject * value)
	{
		___object_metadata_lock_11 = value;
		Il2CppCodeGenWriteBarrier((&___object_metadata_lock_11), value);
	}

	inline static int32_t get_offset_of_type_properties_12() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___type_properties_12)); }
	inline RuntimeObject* get_type_properties_12() const { return ___type_properties_12; }
	inline RuntimeObject** get_address_of_type_properties_12() { return &___type_properties_12; }
	inline void set_type_properties_12(RuntimeObject* value)
	{
		___type_properties_12 = value;
		Il2CppCodeGenWriteBarrier((&___type_properties_12), value);
	}

	inline static int32_t get_offset_of_type_properties_lock_13() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___type_properties_lock_13)); }
	inline RuntimeObject * get_type_properties_lock_13() const { return ___type_properties_lock_13; }
	inline RuntimeObject ** get_address_of_type_properties_lock_13() { return &___type_properties_lock_13; }
	inline void set_type_properties_lock_13(RuntimeObject * value)
	{
		___type_properties_lock_13 = value;
		Il2CppCodeGenWriteBarrier((&___type_properties_lock_13), value);
	}

	inline static int32_t get_offset_of_static_writer_14() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___static_writer_14)); }
	inline JsonWriter_t3570089748 * get_static_writer_14() const { return ___static_writer_14; }
	inline JsonWriter_t3570089748 ** get_address_of_static_writer_14() { return &___static_writer_14; }
	inline void set_static_writer_14(JsonWriter_t3570089748 * value)
	{
		___static_writer_14 = value;
		Il2CppCodeGenWriteBarrier((&___static_writer_14), value);
	}

	inline static int32_t get_offset_of_static_writer_lock_15() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___static_writer_lock_15)); }
	inline RuntimeObject * get_static_writer_lock_15() const { return ___static_writer_lock_15; }
	inline RuntimeObject ** get_address_of_static_writer_lock_15() { return &___static_writer_lock_15; }
	inline void set_static_writer_lock_15(RuntimeObject * value)
	{
		___static_writer_lock_15 = value;
		Il2CppCodeGenWriteBarrier((&___static_writer_lock_15), value);
	}

	inline static int32_t get_offset_of_static_err_stack_16() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___static_err_stack_16)); }
	inline List_1_t3319525431 * get_static_err_stack_16() const { return ___static_err_stack_16; }
	inline List_1_t3319525431 ** get_address_of_static_err_stack_16() { return &___static_err_stack_16; }
	inline void set_static_err_stack_16(List_1_t3319525431 * value)
	{
		___static_err_stack_16 = value;
		Il2CppCodeGenWriteBarrier((&___static_err_stack_16), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache11_17() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___U3CU3Ef__amU24cache11_17)); }
	inline ExporterFunc_t1851311465 * get_U3CU3Ef__amU24cache11_17() const { return ___U3CU3Ef__amU24cache11_17; }
	inline ExporterFunc_t1851311465 ** get_address_of_U3CU3Ef__amU24cache11_17() { return &___U3CU3Ef__amU24cache11_17; }
	inline void set_U3CU3Ef__amU24cache11_17(ExporterFunc_t1851311465 * value)
	{
		___U3CU3Ef__amU24cache11_17 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache11_17), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache12_18() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___U3CU3Ef__amU24cache12_18)); }
	inline ExporterFunc_t1851311465 * get_U3CU3Ef__amU24cache12_18() const { return ___U3CU3Ef__amU24cache12_18; }
	inline ExporterFunc_t1851311465 ** get_address_of_U3CU3Ef__amU24cache12_18() { return &___U3CU3Ef__amU24cache12_18; }
	inline void set_U3CU3Ef__amU24cache12_18(ExporterFunc_t1851311465 * value)
	{
		___U3CU3Ef__amU24cache12_18 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache12_18), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache13_19() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___U3CU3Ef__amU24cache13_19)); }
	inline ExporterFunc_t1851311465 * get_U3CU3Ef__amU24cache13_19() const { return ___U3CU3Ef__amU24cache13_19; }
	inline ExporterFunc_t1851311465 ** get_address_of_U3CU3Ef__amU24cache13_19() { return &___U3CU3Ef__amU24cache13_19; }
	inline void set_U3CU3Ef__amU24cache13_19(ExporterFunc_t1851311465 * value)
	{
		___U3CU3Ef__amU24cache13_19 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache13_19), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache14_20() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___U3CU3Ef__amU24cache14_20)); }
	inline ExporterFunc_t1851311465 * get_U3CU3Ef__amU24cache14_20() const { return ___U3CU3Ef__amU24cache14_20; }
	inline ExporterFunc_t1851311465 ** get_address_of_U3CU3Ef__amU24cache14_20() { return &___U3CU3Ef__amU24cache14_20; }
	inline void set_U3CU3Ef__amU24cache14_20(ExporterFunc_t1851311465 * value)
	{
		___U3CU3Ef__amU24cache14_20 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache14_20), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache15_21() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___U3CU3Ef__amU24cache15_21)); }
	inline ExporterFunc_t1851311465 * get_U3CU3Ef__amU24cache15_21() const { return ___U3CU3Ef__amU24cache15_21; }
	inline ExporterFunc_t1851311465 ** get_address_of_U3CU3Ef__amU24cache15_21() { return &___U3CU3Ef__amU24cache15_21; }
	inline void set_U3CU3Ef__amU24cache15_21(ExporterFunc_t1851311465 * value)
	{
		___U3CU3Ef__amU24cache15_21 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache15_21), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache16_22() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___U3CU3Ef__amU24cache16_22)); }
	inline ExporterFunc_t1851311465 * get_U3CU3Ef__amU24cache16_22() const { return ___U3CU3Ef__amU24cache16_22; }
	inline ExporterFunc_t1851311465 ** get_address_of_U3CU3Ef__amU24cache16_22() { return &___U3CU3Ef__amU24cache16_22; }
	inline void set_U3CU3Ef__amU24cache16_22(ExporterFunc_t1851311465 * value)
	{
		___U3CU3Ef__amU24cache16_22 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache16_22), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache17_23() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___U3CU3Ef__amU24cache17_23)); }
	inline ExporterFunc_t1851311465 * get_U3CU3Ef__amU24cache17_23() const { return ___U3CU3Ef__amU24cache17_23; }
	inline ExporterFunc_t1851311465 ** get_address_of_U3CU3Ef__amU24cache17_23() { return &___U3CU3Ef__amU24cache17_23; }
	inline void set_U3CU3Ef__amU24cache17_23(ExporterFunc_t1851311465 * value)
	{
		___U3CU3Ef__amU24cache17_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache17_23), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache18_24() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___U3CU3Ef__amU24cache18_24)); }
	inline ExporterFunc_t1851311465 * get_U3CU3Ef__amU24cache18_24() const { return ___U3CU3Ef__amU24cache18_24; }
	inline ExporterFunc_t1851311465 ** get_address_of_U3CU3Ef__amU24cache18_24() { return &___U3CU3Ef__amU24cache18_24; }
	inline void set_U3CU3Ef__amU24cache18_24(ExporterFunc_t1851311465 * value)
	{
		___U3CU3Ef__amU24cache18_24 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache18_24), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache19_25() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___U3CU3Ef__amU24cache19_25)); }
	inline ExporterFunc_t1851311465 * get_U3CU3Ef__amU24cache19_25() const { return ___U3CU3Ef__amU24cache19_25; }
	inline ExporterFunc_t1851311465 ** get_address_of_U3CU3Ef__amU24cache19_25() { return &___U3CU3Ef__amU24cache19_25; }
	inline void set_U3CU3Ef__amU24cache19_25(ExporterFunc_t1851311465 * value)
	{
		___U3CU3Ef__amU24cache19_25 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache19_25), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1A_26() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___U3CU3Ef__amU24cache1A_26)); }
	inline ImporterFunc_t3630937194 * get_U3CU3Ef__amU24cache1A_26() const { return ___U3CU3Ef__amU24cache1A_26; }
	inline ImporterFunc_t3630937194 ** get_address_of_U3CU3Ef__amU24cache1A_26() { return &___U3CU3Ef__amU24cache1A_26; }
	inline void set_U3CU3Ef__amU24cache1A_26(ImporterFunc_t3630937194 * value)
	{
		___U3CU3Ef__amU24cache1A_26 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1A_26), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1B_27() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___U3CU3Ef__amU24cache1B_27)); }
	inline ImporterFunc_t3630937194 * get_U3CU3Ef__amU24cache1B_27() const { return ___U3CU3Ef__amU24cache1B_27; }
	inline ImporterFunc_t3630937194 ** get_address_of_U3CU3Ef__amU24cache1B_27() { return &___U3CU3Ef__amU24cache1B_27; }
	inline void set_U3CU3Ef__amU24cache1B_27(ImporterFunc_t3630937194 * value)
	{
		___U3CU3Ef__amU24cache1B_27 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1B_27), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1C_28() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___U3CU3Ef__amU24cache1C_28)); }
	inline ImporterFunc_t3630937194 * get_U3CU3Ef__amU24cache1C_28() const { return ___U3CU3Ef__amU24cache1C_28; }
	inline ImporterFunc_t3630937194 ** get_address_of_U3CU3Ef__amU24cache1C_28() { return &___U3CU3Ef__amU24cache1C_28; }
	inline void set_U3CU3Ef__amU24cache1C_28(ImporterFunc_t3630937194 * value)
	{
		___U3CU3Ef__amU24cache1C_28 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1C_28), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1D_29() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___U3CU3Ef__amU24cache1D_29)); }
	inline ImporterFunc_t3630937194 * get_U3CU3Ef__amU24cache1D_29() const { return ___U3CU3Ef__amU24cache1D_29; }
	inline ImporterFunc_t3630937194 ** get_address_of_U3CU3Ef__amU24cache1D_29() { return &___U3CU3Ef__amU24cache1D_29; }
	inline void set_U3CU3Ef__amU24cache1D_29(ImporterFunc_t3630937194 * value)
	{
		___U3CU3Ef__amU24cache1D_29 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1D_29), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1E_30() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___U3CU3Ef__amU24cache1E_30)); }
	inline ImporterFunc_t3630937194 * get_U3CU3Ef__amU24cache1E_30() const { return ___U3CU3Ef__amU24cache1E_30; }
	inline ImporterFunc_t3630937194 ** get_address_of_U3CU3Ef__amU24cache1E_30() { return &___U3CU3Ef__amU24cache1E_30; }
	inline void set_U3CU3Ef__amU24cache1E_30(ImporterFunc_t3630937194 * value)
	{
		___U3CU3Ef__amU24cache1E_30 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1E_30), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1F_31() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___U3CU3Ef__amU24cache1F_31)); }
	inline ImporterFunc_t3630937194 * get_U3CU3Ef__amU24cache1F_31() const { return ___U3CU3Ef__amU24cache1F_31; }
	inline ImporterFunc_t3630937194 ** get_address_of_U3CU3Ef__amU24cache1F_31() { return &___U3CU3Ef__amU24cache1F_31; }
	inline void set_U3CU3Ef__amU24cache1F_31(ImporterFunc_t3630937194 * value)
	{
		___U3CU3Ef__amU24cache1F_31 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1F_31), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache20_32() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___U3CU3Ef__amU24cache20_32)); }
	inline ImporterFunc_t3630937194 * get_U3CU3Ef__amU24cache20_32() const { return ___U3CU3Ef__amU24cache20_32; }
	inline ImporterFunc_t3630937194 ** get_address_of_U3CU3Ef__amU24cache20_32() { return &___U3CU3Ef__amU24cache20_32; }
	inline void set_U3CU3Ef__amU24cache20_32(ImporterFunc_t3630937194 * value)
	{
		___U3CU3Ef__amU24cache20_32 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache20_32), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache21_33() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___U3CU3Ef__amU24cache21_33)); }
	inline ImporterFunc_t3630937194 * get_U3CU3Ef__amU24cache21_33() const { return ___U3CU3Ef__amU24cache21_33; }
	inline ImporterFunc_t3630937194 ** get_address_of_U3CU3Ef__amU24cache21_33() { return &___U3CU3Ef__amU24cache21_33; }
	inline void set_U3CU3Ef__amU24cache21_33(ImporterFunc_t3630937194 * value)
	{
		___U3CU3Ef__amU24cache21_33 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache21_33), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache22_34() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___U3CU3Ef__amU24cache22_34)); }
	inline ImporterFunc_t3630937194 * get_U3CU3Ef__amU24cache22_34() const { return ___U3CU3Ef__amU24cache22_34; }
	inline ImporterFunc_t3630937194 ** get_address_of_U3CU3Ef__amU24cache22_34() { return &___U3CU3Ef__amU24cache22_34; }
	inline void set_U3CU3Ef__amU24cache22_34(ImporterFunc_t3630937194 * value)
	{
		___U3CU3Ef__amU24cache22_34 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache22_34), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache23_35() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___U3CU3Ef__amU24cache23_35)); }
	inline ImporterFunc_t3630937194 * get_U3CU3Ef__amU24cache23_35() const { return ___U3CU3Ef__amU24cache23_35; }
	inline ImporterFunc_t3630937194 ** get_address_of_U3CU3Ef__amU24cache23_35() { return &___U3CU3Ef__amU24cache23_35; }
	inline void set_U3CU3Ef__amU24cache23_35(ImporterFunc_t3630937194 * value)
	{
		___U3CU3Ef__amU24cache23_35 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache23_35), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache24_36() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___U3CU3Ef__amU24cache24_36)); }
	inline ImporterFunc_t3630937194 * get_U3CU3Ef__amU24cache24_36() const { return ___U3CU3Ef__amU24cache24_36; }
	inline ImporterFunc_t3630937194 ** get_address_of_U3CU3Ef__amU24cache24_36() { return &___U3CU3Ef__amU24cache24_36; }
	inline void set_U3CU3Ef__amU24cache24_36(ImporterFunc_t3630937194 * value)
	{
		___U3CU3Ef__amU24cache24_36 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache24_36), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache25_37() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___U3CU3Ef__amU24cache25_37)); }
	inline ImporterFunc_t3630937194 * get_U3CU3Ef__amU24cache25_37() const { return ___U3CU3Ef__amU24cache25_37; }
	inline ImporterFunc_t3630937194 ** get_address_of_U3CU3Ef__amU24cache25_37() { return &___U3CU3Ef__amU24cache25_37; }
	inline void set_U3CU3Ef__amU24cache25_37(ImporterFunc_t3630937194 * value)
	{
		___U3CU3Ef__amU24cache25_37 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache25_37), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONMAPPER_T3815285241_H
#ifndef LIST_1_T3319525431_H
#define LIST_1_T3319525431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.String>
struct  List_1_t3319525431  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t1281789340* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____items_1)); }
	inline StringU5BU5D_t1281789340* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t1281789340** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t1281789340* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3319525431_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	StringU5BU5D_t1281789340* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3319525431_StaticFields, ___EmptyArray_4)); }
	inline StringU5BU5D_t1281789340* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline StringU5BU5D_t1281789340** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(StringU5BU5D_t1281789340* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3319525431_H
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
	uint32_t ___flags_5;
	// System.UInt32 System.Decimal::hi
	uint32_t ___hi_6;
	// System.UInt32 System.Decimal::lo
	uint32_t ___lo_7;
	// System.UInt32 System.Decimal::mid
	uint32_t ___mid_8;

public:
	inline static int32_t get_offset_of_flags_5() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___flags_5)); }
	inline uint32_t get_flags_5() const { return ___flags_5; }
	inline uint32_t* get_address_of_flags_5() { return &___flags_5; }
	inline void set_flags_5(uint32_t value)
	{
		___flags_5 = value;
	}

	inline static int32_t get_offset_of_hi_6() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___hi_6)); }
	inline uint32_t get_hi_6() const { return ___hi_6; }
	inline uint32_t* get_address_of_hi_6() { return &___hi_6; }
	inline void set_hi_6(uint32_t value)
	{
		___hi_6 = value;
	}

	inline static int32_t get_offset_of_lo_7() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___lo_7)); }
	inline uint32_t get_lo_7() const { return ___lo_7; }
	inline uint32_t* get_address_of_lo_7() { return &___lo_7; }
	inline void set_lo_7(uint32_t value)
	{
		___lo_7 = value;
	}

	inline static int32_t get_offset_of_mid_8() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___mid_8)); }
	inline uint32_t get_mid_8() const { return ___mid_8; }
	inline uint32_t* get_address_of_mid_8() { return &___mid_8; }
	inline void set_mid_8(uint32_t value)
	{
		___mid_8 = value;
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
	// System.Decimal System.Decimal::MaxValueDiv10
	Decimal_t2948259380  ___MaxValueDiv10_4;

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

	inline static int32_t get_offset_of_MaxValueDiv10_4() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValueDiv10_4)); }
	inline Decimal_t2948259380  get_MaxValueDiv10_4() const { return ___MaxValueDiv10_4; }
	inline Decimal_t2948259380 * get_address_of_MaxValueDiv10_4() { return &___MaxValueDiv10_4; }
	inline void set_MaxValueDiv10_4(Decimal_t2948259380  value)
	{
		___MaxValueDiv10_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T2948259380_H
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
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t881159249  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t881159249  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t881159249  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t881159249  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_2)); }
	inline TimeSpan_t881159249  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t881159249 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t881159249  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
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
#ifndef ARRAYMETADATA_T894288939_H
#define ARRAYMETADATA_T894288939_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.ArrayMetadata
struct  ArrayMetadata_t894288939 
{
public:
	// System.Type LitJson.ArrayMetadata::element_type
	Type_t * ___element_type_0;
	// System.Boolean LitJson.ArrayMetadata::is_array
	bool ___is_array_1;
	// System.Boolean LitJson.ArrayMetadata::is_list
	bool ___is_list_2;

public:
	inline static int32_t get_offset_of_element_type_0() { return static_cast<int32_t>(offsetof(ArrayMetadata_t894288939, ___element_type_0)); }
	inline Type_t * get_element_type_0() const { return ___element_type_0; }
	inline Type_t ** get_address_of_element_type_0() { return &___element_type_0; }
	inline void set_element_type_0(Type_t * value)
	{
		___element_type_0 = value;
		Il2CppCodeGenWriteBarrier((&___element_type_0), value);
	}

	inline static int32_t get_offset_of_is_array_1() { return static_cast<int32_t>(offsetof(ArrayMetadata_t894288939, ___is_array_1)); }
	inline bool get_is_array_1() const { return ___is_array_1; }
	inline bool* get_address_of_is_array_1() { return &___is_array_1; }
	inline void set_is_array_1(bool value)
	{
		___is_array_1 = value;
	}

	inline static int32_t get_offset_of_is_list_2() { return static_cast<int32_t>(offsetof(ArrayMetadata_t894288939, ___is_list_2)); }
	inline bool get_is_list_2() const { return ___is_list_2; }
	inline bool* get_address_of_is_list_2() { return &___is_list_2; }
	inline void set_is_list_2(bool value)
	{
		___is_list_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of LitJson.ArrayMetadata
struct ArrayMetadata_t894288939_marshaled_pinvoke
{
	Type_t * ___element_type_0;
	int32_t ___is_array_1;
	int32_t ___is_list_2;
};
// Native definition for COM marshalling of LitJson.ArrayMetadata
struct ArrayMetadata_t894288939_marshaled_com
{
	Type_t * ___element_type_0;
	int32_t ___is_array_1;
	int32_t ___is_list_2;
};
#endif // ARRAYMETADATA_T894288939_H
#ifndef OBJECTMETADATA_T3566284522_H
#define OBJECTMETADATA_T3566284522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.ObjectMetadata
struct  ObjectMetadata_t3566284522 
{
public:
	// System.Type LitJson.ObjectMetadata::element_type
	Type_t * ___element_type_0;
	// System.Boolean LitJson.ObjectMetadata::is_dictionary
	bool ___is_dictionary_1;
	// System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata> LitJson.ObjectMetadata::properties
	RuntimeObject* ___properties_2;

public:
	inline static int32_t get_offset_of_element_type_0() { return static_cast<int32_t>(offsetof(ObjectMetadata_t3566284522, ___element_type_0)); }
	inline Type_t * get_element_type_0() const { return ___element_type_0; }
	inline Type_t ** get_address_of_element_type_0() { return &___element_type_0; }
	inline void set_element_type_0(Type_t * value)
	{
		___element_type_0 = value;
		Il2CppCodeGenWriteBarrier((&___element_type_0), value);
	}

	inline static int32_t get_offset_of_is_dictionary_1() { return static_cast<int32_t>(offsetof(ObjectMetadata_t3566284522, ___is_dictionary_1)); }
	inline bool get_is_dictionary_1() const { return ___is_dictionary_1; }
	inline bool* get_address_of_is_dictionary_1() { return &___is_dictionary_1; }
	inline void set_is_dictionary_1(bool value)
	{
		___is_dictionary_1 = value;
	}

	inline static int32_t get_offset_of_properties_2() { return static_cast<int32_t>(offsetof(ObjectMetadata_t3566284522, ___properties_2)); }
	inline RuntimeObject* get_properties_2() const { return ___properties_2; }
	inline RuntimeObject** get_address_of_properties_2() { return &___properties_2; }
	inline void set_properties_2(RuntimeObject* value)
	{
		___properties_2 = value;
		Il2CppCodeGenWriteBarrier((&___properties_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of LitJson.ObjectMetadata
struct ObjectMetadata_t3566284522_marshaled_pinvoke
{
	Type_t * ___element_type_0;
	int32_t ___is_dictionary_1;
	RuntimeObject* ___properties_2;
};
// Native definition for COM marshalling of LitJson.ObjectMetadata
struct ObjectMetadata_t3566284522_marshaled_com
{
	Type_t * ___element_type_0;
	int32_t ___is_dictionary_1;
	RuntimeObject* ___properties_2;
};
#endif // OBJECTMETADATA_T3566284522_H
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
#ifndef STRINGWRITER_T802263757_H
#define STRINGWRITER_T802263757_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StringWriter
struct  StringWriter_t802263757  : public TextWriter_t3478189236
{
public:
	// System.Text.StringBuilder System.IO.StringWriter::internalString
	StringBuilder_t * ___internalString_3;
	// System.Boolean System.IO.StringWriter::disposed
	bool ___disposed_4;

public:
	inline static int32_t get_offset_of_internalString_3() { return static_cast<int32_t>(offsetof(StringWriter_t802263757, ___internalString_3)); }
	inline StringBuilder_t * get_internalString_3() const { return ___internalString_3; }
	inline StringBuilder_t ** get_address_of_internalString_3() { return &___internalString_3; }
	inline void set_internalString_3(StringBuilder_t * value)
	{
		___internalString_3 = value;
		Il2CppCodeGenWriteBarrier((&___internalString_3), value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(StringWriter_t802263757, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGWRITER_T802263757_H
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
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_t4134040092, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T4134040092_H
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
#ifndef PROPERTYMETADATA_T3727440473_H
#define PROPERTYMETADATA_T3727440473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.PropertyMetadata
struct  PropertyMetadata_t3727440473 
{
public:
	// System.Reflection.MemberInfo LitJson.PropertyMetadata::Info
	MemberInfo_t * ___Info_0;
	// System.Boolean LitJson.PropertyMetadata::IsField
	bool ___IsField_1;
	// System.Type LitJson.PropertyMetadata::Type
	Type_t * ___Type_2;

public:
	inline static int32_t get_offset_of_Info_0() { return static_cast<int32_t>(offsetof(PropertyMetadata_t3727440473, ___Info_0)); }
	inline MemberInfo_t * get_Info_0() const { return ___Info_0; }
	inline MemberInfo_t ** get_address_of_Info_0() { return &___Info_0; }
	inline void set_Info_0(MemberInfo_t * value)
	{
		___Info_0 = value;
		Il2CppCodeGenWriteBarrier((&___Info_0), value);
	}

	inline static int32_t get_offset_of_IsField_1() { return static_cast<int32_t>(offsetof(PropertyMetadata_t3727440473, ___IsField_1)); }
	inline bool get_IsField_1() const { return ___IsField_1; }
	inline bool* get_address_of_IsField_1() { return &___IsField_1; }
	inline void set_IsField_1(bool value)
	{
		___IsField_1 = value;
	}

	inline static int32_t get_offset_of_Type_2() { return static_cast<int32_t>(offsetof(PropertyMetadata_t3727440473, ___Type_2)); }
	inline Type_t * get_Type_2() const { return ___Type_2; }
	inline Type_t ** get_address_of_Type_2() { return &___Type_2; }
	inline void set_Type_2(Type_t * value)
	{
		___Type_2 = value;
		Il2CppCodeGenWriteBarrier((&___Type_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of LitJson.PropertyMetadata
struct PropertyMetadata_t3727440473_marshaled_pinvoke
{
	MemberInfo_t * ___Info_0;
	int32_t ___IsField_1;
	Type_t * ___Type_2;
};
// Native definition for COM marshalling of LitJson.PropertyMetadata
struct PropertyMetadata_t3727440473_marshaled_com
{
	MemberInfo_t * ___Info_0;
	int32_t ___IsField_1;
	Type_t * ___Type_2;
};
#endif // PROPERTYMETADATA_T3727440473_H
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
#ifndef APPLICATIONEXCEPTION_T2339761290_H
#define APPLICATIONEXCEPTION_T2339761290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ApplicationException
struct  ApplicationException_t2339761290  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONEXCEPTION_T2339761290_H
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
#ifndef DICTIONARYENTRY_T3123975638_H
#define DICTIONARYENTRY_T3123975638_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.DictionaryEntry
struct  DictionaryEntry_t3123975638 
{
public:
	// System.Object System.Collections.DictionaryEntry::_key
	RuntimeObject * ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	RuntimeObject * ____value_1;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(DictionaryEntry_t3123975638, ____key_0)); }
	inline RuntimeObject * get__key_0() const { return ____key_0; }
	inline RuntimeObject ** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(RuntimeObject * value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier((&____key_0), value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(DictionaryEntry_t3123975638, ____value_1)); }
	inline RuntimeObject * get__value_1() const { return ____value_1; }
	inline RuntimeObject ** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(RuntimeObject * value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((&____value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t3123975638_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t3123975638_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
#endif // DICTIONARYENTRY_T3123975638_H
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
#ifndef DATETIMEFORMATFLAGS_T1884407083_H
#define DATETIMEFORMATFLAGS_T1884407083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.DateTimeFormatFlags
struct  DateTimeFormatFlags_t1884407083 
{
public:
	// System.Int32 System.Globalization.DateTimeFormatFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeFormatFlags_t1884407083, ___value___1)); }
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
#endif // DATETIMEFORMATFLAGS_T1884407083_H
#ifndef DATETIMEKIND_T3468814247_H
#define DATETIMEKIND_T3468814247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3468814247 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t3468814247, ___value___1)); }
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
#endif // DATETIMEKIND_T3468814247_H
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
#ifndef CONDITION_T3240125930_H
#define CONDITION_T3240125930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.Condition
struct  Condition_t3240125930 
{
public:
	// System.Int32 LitJson.Condition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Condition_t3240125930, ___value___1)); }
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
#endif // CONDITION_T3240125930_H
#ifndef JSONEXCEPTION_T3682484112_H
#define JSONEXCEPTION_T3682484112_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.JsonException
struct  JsonException_t3682484112  : public ApplicationException_t2339761290
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONEXCEPTION_T3682484112_H
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
#ifndef DATETIMEFORMATINFO_T2405853701_H
#define DATETIMEFORMATINFO_T2405853701_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.DateTimeFormatInfo
struct  DateTimeFormatInfo_t2405853701  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_isReadOnly
	bool ___m_isReadOnly_10;
	// System.String System.Globalization.DateTimeFormatInfo::amDesignator
	String_t* ___amDesignator_11;
	// System.String System.Globalization.DateTimeFormatInfo::pmDesignator
	String_t* ___pmDesignator_12;
	// System.String System.Globalization.DateTimeFormatInfo::dateSeparator
	String_t* ___dateSeparator_13;
	// System.String System.Globalization.DateTimeFormatInfo::timeSeparator
	String_t* ___timeSeparator_14;
	// System.String System.Globalization.DateTimeFormatInfo::shortDatePattern
	String_t* ___shortDatePattern_15;
	// System.String System.Globalization.DateTimeFormatInfo::longDatePattern
	String_t* ___longDatePattern_16;
	// System.String System.Globalization.DateTimeFormatInfo::shortTimePattern
	String_t* ___shortTimePattern_17;
	// System.String System.Globalization.DateTimeFormatInfo::longTimePattern
	String_t* ___longTimePattern_18;
	// System.String System.Globalization.DateTimeFormatInfo::monthDayPattern
	String_t* ___monthDayPattern_19;
	// System.String System.Globalization.DateTimeFormatInfo::yearMonthPattern
	String_t* ___yearMonthPattern_20;
	// System.String System.Globalization.DateTimeFormatInfo::fullDateTimePattern
	String_t* ___fullDateTimePattern_21;
	// System.String System.Globalization.DateTimeFormatInfo::_RFC1123Pattern
	String_t* ____RFC1123Pattern_22;
	// System.String System.Globalization.DateTimeFormatInfo::_SortableDateTimePattern
	String_t* ____SortableDateTimePattern_23;
	// System.String System.Globalization.DateTimeFormatInfo::_UniversalSortableDateTimePattern
	String_t* ____UniversalSortableDateTimePattern_24;
	// System.Int32 System.Globalization.DateTimeFormatInfo::firstDayOfWeek
	int32_t ___firstDayOfWeek_25;
	// System.Globalization.Calendar System.Globalization.DateTimeFormatInfo::calendar
	Calendar_t1661121569 * ___calendar_26;
	// System.Int32 System.Globalization.DateTimeFormatInfo::calendarWeekRule
	int32_t ___calendarWeekRule_27;
	// System.String[] System.Globalization.DateTimeFormatInfo::abbreviatedDayNames
	StringU5BU5D_t1281789340* ___abbreviatedDayNames_28;
	// System.String[] System.Globalization.DateTimeFormatInfo::dayNames
	StringU5BU5D_t1281789340* ___dayNames_29;
	// System.String[] System.Globalization.DateTimeFormatInfo::monthNames
	StringU5BU5D_t1281789340* ___monthNames_30;
	// System.String[] System.Globalization.DateTimeFormatInfo::abbreviatedMonthNames
	StringU5BU5D_t1281789340* ___abbreviatedMonthNames_31;
	// System.String[] System.Globalization.DateTimeFormatInfo::allShortDatePatterns
	StringU5BU5D_t1281789340* ___allShortDatePatterns_32;
	// System.String[] System.Globalization.DateTimeFormatInfo::allLongDatePatterns
	StringU5BU5D_t1281789340* ___allLongDatePatterns_33;
	// System.String[] System.Globalization.DateTimeFormatInfo::allShortTimePatterns
	StringU5BU5D_t1281789340* ___allShortTimePatterns_34;
	// System.String[] System.Globalization.DateTimeFormatInfo::allLongTimePatterns
	StringU5BU5D_t1281789340* ___allLongTimePatterns_35;
	// System.String[] System.Globalization.DateTimeFormatInfo::monthDayPatterns
	StringU5BU5D_t1281789340* ___monthDayPatterns_36;
	// System.String[] System.Globalization.DateTimeFormatInfo::yearMonthPatterns
	StringU5BU5D_t1281789340* ___yearMonthPatterns_37;
	// System.String[] System.Globalization.DateTimeFormatInfo::shortDayNames
	StringU5BU5D_t1281789340* ___shortDayNames_38;
	// System.Int32 System.Globalization.DateTimeFormatInfo::nDataItem
	int32_t ___nDataItem_39;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_40;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_isDefaultCalendar
	bool ___m_isDefaultCalendar_41;
	// System.Int32 System.Globalization.DateTimeFormatInfo::CultureID
	int32_t ___CultureID_42;
	// System.Boolean System.Globalization.DateTimeFormatInfo::bUseCalendarInfo
	bool ___bUseCalendarInfo_43;
	// System.String System.Globalization.DateTimeFormatInfo::generalShortTimePattern
	String_t* ___generalShortTimePattern_44;
	// System.String System.Globalization.DateTimeFormatInfo::generalLongTimePattern
	String_t* ___generalLongTimePattern_45;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_eraNames
	StringU5BU5D_t1281789340* ___m_eraNames_46;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_abbrevEraNames
	StringU5BU5D_t1281789340* ___m_abbrevEraNames_47;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_abbrevEnglishEraNames
	StringU5BU5D_t1281789340* ___m_abbrevEnglishEraNames_48;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_dateWords
	StringU5BU5D_t1281789340* ___m_dateWords_49;
	// System.Int32[] System.Globalization.DateTimeFormatInfo::optionalCalendars
	Int32U5BU5D_t385246372* ___optionalCalendars_50;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_superShortDayNames
	StringU5BU5D_t1281789340* ___m_superShortDayNames_51;
	// System.String[] System.Globalization.DateTimeFormatInfo::genitiveMonthNames
	StringU5BU5D_t1281789340* ___genitiveMonthNames_52;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_genitiveAbbreviatedMonthNames
	StringU5BU5D_t1281789340* ___m_genitiveAbbreviatedMonthNames_53;
	// System.String[] System.Globalization.DateTimeFormatInfo::leapYearMonthNames
	StringU5BU5D_t1281789340* ___leapYearMonthNames_54;
	// System.Globalization.DateTimeFormatFlags System.Globalization.DateTimeFormatInfo::formatFlags
	int32_t ___formatFlags_55;
	// System.String System.Globalization.DateTimeFormatInfo::m_name
	String_t* ___m_name_56;
	// System.String[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::all_date_time_patterns
	StringU5BU5D_t1281789340* ___all_date_time_patterns_57;

public:
	inline static int32_t get_offset_of_m_isReadOnly_10() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_isReadOnly_10)); }
	inline bool get_m_isReadOnly_10() const { return ___m_isReadOnly_10; }
	inline bool* get_address_of_m_isReadOnly_10() { return &___m_isReadOnly_10; }
	inline void set_m_isReadOnly_10(bool value)
	{
		___m_isReadOnly_10 = value;
	}

	inline static int32_t get_offset_of_amDesignator_11() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___amDesignator_11)); }
	inline String_t* get_amDesignator_11() const { return ___amDesignator_11; }
	inline String_t** get_address_of_amDesignator_11() { return &___amDesignator_11; }
	inline void set_amDesignator_11(String_t* value)
	{
		___amDesignator_11 = value;
		Il2CppCodeGenWriteBarrier((&___amDesignator_11), value);
	}

	inline static int32_t get_offset_of_pmDesignator_12() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___pmDesignator_12)); }
	inline String_t* get_pmDesignator_12() const { return ___pmDesignator_12; }
	inline String_t** get_address_of_pmDesignator_12() { return &___pmDesignator_12; }
	inline void set_pmDesignator_12(String_t* value)
	{
		___pmDesignator_12 = value;
		Il2CppCodeGenWriteBarrier((&___pmDesignator_12), value);
	}

	inline static int32_t get_offset_of_dateSeparator_13() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___dateSeparator_13)); }
	inline String_t* get_dateSeparator_13() const { return ___dateSeparator_13; }
	inline String_t** get_address_of_dateSeparator_13() { return &___dateSeparator_13; }
	inline void set_dateSeparator_13(String_t* value)
	{
		___dateSeparator_13 = value;
		Il2CppCodeGenWriteBarrier((&___dateSeparator_13), value);
	}

	inline static int32_t get_offset_of_timeSeparator_14() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___timeSeparator_14)); }
	inline String_t* get_timeSeparator_14() const { return ___timeSeparator_14; }
	inline String_t** get_address_of_timeSeparator_14() { return &___timeSeparator_14; }
	inline void set_timeSeparator_14(String_t* value)
	{
		___timeSeparator_14 = value;
		Il2CppCodeGenWriteBarrier((&___timeSeparator_14), value);
	}

	inline static int32_t get_offset_of_shortDatePattern_15() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___shortDatePattern_15)); }
	inline String_t* get_shortDatePattern_15() const { return ___shortDatePattern_15; }
	inline String_t** get_address_of_shortDatePattern_15() { return &___shortDatePattern_15; }
	inline void set_shortDatePattern_15(String_t* value)
	{
		___shortDatePattern_15 = value;
		Il2CppCodeGenWriteBarrier((&___shortDatePattern_15), value);
	}

	inline static int32_t get_offset_of_longDatePattern_16() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___longDatePattern_16)); }
	inline String_t* get_longDatePattern_16() const { return ___longDatePattern_16; }
	inline String_t** get_address_of_longDatePattern_16() { return &___longDatePattern_16; }
	inline void set_longDatePattern_16(String_t* value)
	{
		___longDatePattern_16 = value;
		Il2CppCodeGenWriteBarrier((&___longDatePattern_16), value);
	}

	inline static int32_t get_offset_of_shortTimePattern_17() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___shortTimePattern_17)); }
	inline String_t* get_shortTimePattern_17() const { return ___shortTimePattern_17; }
	inline String_t** get_address_of_shortTimePattern_17() { return &___shortTimePattern_17; }
	inline void set_shortTimePattern_17(String_t* value)
	{
		___shortTimePattern_17 = value;
		Il2CppCodeGenWriteBarrier((&___shortTimePattern_17), value);
	}

	inline static int32_t get_offset_of_longTimePattern_18() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___longTimePattern_18)); }
	inline String_t* get_longTimePattern_18() const { return ___longTimePattern_18; }
	inline String_t** get_address_of_longTimePattern_18() { return &___longTimePattern_18; }
	inline void set_longTimePattern_18(String_t* value)
	{
		___longTimePattern_18 = value;
		Il2CppCodeGenWriteBarrier((&___longTimePattern_18), value);
	}

	inline static int32_t get_offset_of_monthDayPattern_19() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___monthDayPattern_19)); }
	inline String_t* get_monthDayPattern_19() const { return ___monthDayPattern_19; }
	inline String_t** get_address_of_monthDayPattern_19() { return &___monthDayPattern_19; }
	inline void set_monthDayPattern_19(String_t* value)
	{
		___monthDayPattern_19 = value;
		Il2CppCodeGenWriteBarrier((&___monthDayPattern_19), value);
	}

	inline static int32_t get_offset_of_yearMonthPattern_20() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___yearMonthPattern_20)); }
	inline String_t* get_yearMonthPattern_20() const { return ___yearMonthPattern_20; }
	inline String_t** get_address_of_yearMonthPattern_20() { return &___yearMonthPattern_20; }
	inline void set_yearMonthPattern_20(String_t* value)
	{
		___yearMonthPattern_20 = value;
		Il2CppCodeGenWriteBarrier((&___yearMonthPattern_20), value);
	}

	inline static int32_t get_offset_of_fullDateTimePattern_21() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___fullDateTimePattern_21)); }
	inline String_t* get_fullDateTimePattern_21() const { return ___fullDateTimePattern_21; }
	inline String_t** get_address_of_fullDateTimePattern_21() { return &___fullDateTimePattern_21; }
	inline void set_fullDateTimePattern_21(String_t* value)
	{
		___fullDateTimePattern_21 = value;
		Il2CppCodeGenWriteBarrier((&___fullDateTimePattern_21), value);
	}

	inline static int32_t get_offset_of__RFC1123Pattern_22() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ____RFC1123Pattern_22)); }
	inline String_t* get__RFC1123Pattern_22() const { return ____RFC1123Pattern_22; }
	inline String_t** get_address_of__RFC1123Pattern_22() { return &____RFC1123Pattern_22; }
	inline void set__RFC1123Pattern_22(String_t* value)
	{
		____RFC1123Pattern_22 = value;
		Il2CppCodeGenWriteBarrier((&____RFC1123Pattern_22), value);
	}

	inline static int32_t get_offset_of__SortableDateTimePattern_23() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ____SortableDateTimePattern_23)); }
	inline String_t* get__SortableDateTimePattern_23() const { return ____SortableDateTimePattern_23; }
	inline String_t** get_address_of__SortableDateTimePattern_23() { return &____SortableDateTimePattern_23; }
	inline void set__SortableDateTimePattern_23(String_t* value)
	{
		____SortableDateTimePattern_23 = value;
		Il2CppCodeGenWriteBarrier((&____SortableDateTimePattern_23), value);
	}

	inline static int32_t get_offset_of__UniversalSortableDateTimePattern_24() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ____UniversalSortableDateTimePattern_24)); }
	inline String_t* get__UniversalSortableDateTimePattern_24() const { return ____UniversalSortableDateTimePattern_24; }
	inline String_t** get_address_of__UniversalSortableDateTimePattern_24() { return &____UniversalSortableDateTimePattern_24; }
	inline void set__UniversalSortableDateTimePattern_24(String_t* value)
	{
		____UniversalSortableDateTimePattern_24 = value;
		Il2CppCodeGenWriteBarrier((&____UniversalSortableDateTimePattern_24), value);
	}

	inline static int32_t get_offset_of_firstDayOfWeek_25() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___firstDayOfWeek_25)); }
	inline int32_t get_firstDayOfWeek_25() const { return ___firstDayOfWeek_25; }
	inline int32_t* get_address_of_firstDayOfWeek_25() { return &___firstDayOfWeek_25; }
	inline void set_firstDayOfWeek_25(int32_t value)
	{
		___firstDayOfWeek_25 = value;
	}

	inline static int32_t get_offset_of_calendar_26() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___calendar_26)); }
	inline Calendar_t1661121569 * get_calendar_26() const { return ___calendar_26; }
	inline Calendar_t1661121569 ** get_address_of_calendar_26() { return &___calendar_26; }
	inline void set_calendar_26(Calendar_t1661121569 * value)
	{
		___calendar_26 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_26), value);
	}

	inline static int32_t get_offset_of_calendarWeekRule_27() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___calendarWeekRule_27)); }
	inline int32_t get_calendarWeekRule_27() const { return ___calendarWeekRule_27; }
	inline int32_t* get_address_of_calendarWeekRule_27() { return &___calendarWeekRule_27; }
	inline void set_calendarWeekRule_27(int32_t value)
	{
		___calendarWeekRule_27 = value;
	}

	inline static int32_t get_offset_of_abbreviatedDayNames_28() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___abbreviatedDayNames_28)); }
	inline StringU5BU5D_t1281789340* get_abbreviatedDayNames_28() const { return ___abbreviatedDayNames_28; }
	inline StringU5BU5D_t1281789340** get_address_of_abbreviatedDayNames_28() { return &___abbreviatedDayNames_28; }
	inline void set_abbreviatedDayNames_28(StringU5BU5D_t1281789340* value)
	{
		___abbreviatedDayNames_28 = value;
		Il2CppCodeGenWriteBarrier((&___abbreviatedDayNames_28), value);
	}

	inline static int32_t get_offset_of_dayNames_29() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___dayNames_29)); }
	inline StringU5BU5D_t1281789340* get_dayNames_29() const { return ___dayNames_29; }
	inline StringU5BU5D_t1281789340** get_address_of_dayNames_29() { return &___dayNames_29; }
	inline void set_dayNames_29(StringU5BU5D_t1281789340* value)
	{
		___dayNames_29 = value;
		Il2CppCodeGenWriteBarrier((&___dayNames_29), value);
	}

	inline static int32_t get_offset_of_monthNames_30() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___monthNames_30)); }
	inline StringU5BU5D_t1281789340* get_monthNames_30() const { return ___monthNames_30; }
	inline StringU5BU5D_t1281789340** get_address_of_monthNames_30() { return &___monthNames_30; }
	inline void set_monthNames_30(StringU5BU5D_t1281789340* value)
	{
		___monthNames_30 = value;
		Il2CppCodeGenWriteBarrier((&___monthNames_30), value);
	}

	inline static int32_t get_offset_of_abbreviatedMonthNames_31() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___abbreviatedMonthNames_31)); }
	inline StringU5BU5D_t1281789340* get_abbreviatedMonthNames_31() const { return ___abbreviatedMonthNames_31; }
	inline StringU5BU5D_t1281789340** get_address_of_abbreviatedMonthNames_31() { return &___abbreviatedMonthNames_31; }
	inline void set_abbreviatedMonthNames_31(StringU5BU5D_t1281789340* value)
	{
		___abbreviatedMonthNames_31 = value;
		Il2CppCodeGenWriteBarrier((&___abbreviatedMonthNames_31), value);
	}

	inline static int32_t get_offset_of_allShortDatePatterns_32() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___allShortDatePatterns_32)); }
	inline StringU5BU5D_t1281789340* get_allShortDatePatterns_32() const { return ___allShortDatePatterns_32; }
	inline StringU5BU5D_t1281789340** get_address_of_allShortDatePatterns_32() { return &___allShortDatePatterns_32; }
	inline void set_allShortDatePatterns_32(StringU5BU5D_t1281789340* value)
	{
		___allShortDatePatterns_32 = value;
		Il2CppCodeGenWriteBarrier((&___allShortDatePatterns_32), value);
	}

	inline static int32_t get_offset_of_allLongDatePatterns_33() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___allLongDatePatterns_33)); }
	inline StringU5BU5D_t1281789340* get_allLongDatePatterns_33() const { return ___allLongDatePatterns_33; }
	inline StringU5BU5D_t1281789340** get_address_of_allLongDatePatterns_33() { return &___allLongDatePatterns_33; }
	inline void set_allLongDatePatterns_33(StringU5BU5D_t1281789340* value)
	{
		___allLongDatePatterns_33 = value;
		Il2CppCodeGenWriteBarrier((&___allLongDatePatterns_33), value);
	}

	inline static int32_t get_offset_of_allShortTimePatterns_34() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___allShortTimePatterns_34)); }
	inline StringU5BU5D_t1281789340* get_allShortTimePatterns_34() const { return ___allShortTimePatterns_34; }
	inline StringU5BU5D_t1281789340** get_address_of_allShortTimePatterns_34() { return &___allShortTimePatterns_34; }
	inline void set_allShortTimePatterns_34(StringU5BU5D_t1281789340* value)
	{
		___allShortTimePatterns_34 = value;
		Il2CppCodeGenWriteBarrier((&___allShortTimePatterns_34), value);
	}

	inline static int32_t get_offset_of_allLongTimePatterns_35() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___allLongTimePatterns_35)); }
	inline StringU5BU5D_t1281789340* get_allLongTimePatterns_35() const { return ___allLongTimePatterns_35; }
	inline StringU5BU5D_t1281789340** get_address_of_allLongTimePatterns_35() { return &___allLongTimePatterns_35; }
	inline void set_allLongTimePatterns_35(StringU5BU5D_t1281789340* value)
	{
		___allLongTimePatterns_35 = value;
		Il2CppCodeGenWriteBarrier((&___allLongTimePatterns_35), value);
	}

	inline static int32_t get_offset_of_monthDayPatterns_36() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___monthDayPatterns_36)); }
	inline StringU5BU5D_t1281789340* get_monthDayPatterns_36() const { return ___monthDayPatterns_36; }
	inline StringU5BU5D_t1281789340** get_address_of_monthDayPatterns_36() { return &___monthDayPatterns_36; }
	inline void set_monthDayPatterns_36(StringU5BU5D_t1281789340* value)
	{
		___monthDayPatterns_36 = value;
		Il2CppCodeGenWriteBarrier((&___monthDayPatterns_36), value);
	}

	inline static int32_t get_offset_of_yearMonthPatterns_37() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___yearMonthPatterns_37)); }
	inline StringU5BU5D_t1281789340* get_yearMonthPatterns_37() const { return ___yearMonthPatterns_37; }
	inline StringU5BU5D_t1281789340** get_address_of_yearMonthPatterns_37() { return &___yearMonthPatterns_37; }
	inline void set_yearMonthPatterns_37(StringU5BU5D_t1281789340* value)
	{
		___yearMonthPatterns_37 = value;
		Il2CppCodeGenWriteBarrier((&___yearMonthPatterns_37), value);
	}

	inline static int32_t get_offset_of_shortDayNames_38() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___shortDayNames_38)); }
	inline StringU5BU5D_t1281789340* get_shortDayNames_38() const { return ___shortDayNames_38; }
	inline StringU5BU5D_t1281789340** get_address_of_shortDayNames_38() { return &___shortDayNames_38; }
	inline void set_shortDayNames_38(StringU5BU5D_t1281789340* value)
	{
		___shortDayNames_38 = value;
		Il2CppCodeGenWriteBarrier((&___shortDayNames_38), value);
	}

	inline static int32_t get_offset_of_nDataItem_39() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___nDataItem_39)); }
	inline int32_t get_nDataItem_39() const { return ___nDataItem_39; }
	inline int32_t* get_address_of_nDataItem_39() { return &___nDataItem_39; }
	inline void set_nDataItem_39(int32_t value)
	{
		___nDataItem_39 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_40() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_useUserOverride_40)); }
	inline bool get_m_useUserOverride_40() const { return ___m_useUserOverride_40; }
	inline bool* get_address_of_m_useUserOverride_40() { return &___m_useUserOverride_40; }
	inline void set_m_useUserOverride_40(bool value)
	{
		___m_useUserOverride_40 = value;
	}

	inline static int32_t get_offset_of_m_isDefaultCalendar_41() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_isDefaultCalendar_41)); }
	inline bool get_m_isDefaultCalendar_41() const { return ___m_isDefaultCalendar_41; }
	inline bool* get_address_of_m_isDefaultCalendar_41() { return &___m_isDefaultCalendar_41; }
	inline void set_m_isDefaultCalendar_41(bool value)
	{
		___m_isDefaultCalendar_41 = value;
	}

	inline static int32_t get_offset_of_CultureID_42() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___CultureID_42)); }
	inline int32_t get_CultureID_42() const { return ___CultureID_42; }
	inline int32_t* get_address_of_CultureID_42() { return &___CultureID_42; }
	inline void set_CultureID_42(int32_t value)
	{
		___CultureID_42 = value;
	}

	inline static int32_t get_offset_of_bUseCalendarInfo_43() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___bUseCalendarInfo_43)); }
	inline bool get_bUseCalendarInfo_43() const { return ___bUseCalendarInfo_43; }
	inline bool* get_address_of_bUseCalendarInfo_43() { return &___bUseCalendarInfo_43; }
	inline void set_bUseCalendarInfo_43(bool value)
	{
		___bUseCalendarInfo_43 = value;
	}

	inline static int32_t get_offset_of_generalShortTimePattern_44() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___generalShortTimePattern_44)); }
	inline String_t* get_generalShortTimePattern_44() const { return ___generalShortTimePattern_44; }
	inline String_t** get_address_of_generalShortTimePattern_44() { return &___generalShortTimePattern_44; }
	inline void set_generalShortTimePattern_44(String_t* value)
	{
		___generalShortTimePattern_44 = value;
		Il2CppCodeGenWriteBarrier((&___generalShortTimePattern_44), value);
	}

	inline static int32_t get_offset_of_generalLongTimePattern_45() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___generalLongTimePattern_45)); }
	inline String_t* get_generalLongTimePattern_45() const { return ___generalLongTimePattern_45; }
	inline String_t** get_address_of_generalLongTimePattern_45() { return &___generalLongTimePattern_45; }
	inline void set_generalLongTimePattern_45(String_t* value)
	{
		___generalLongTimePattern_45 = value;
		Il2CppCodeGenWriteBarrier((&___generalLongTimePattern_45), value);
	}

	inline static int32_t get_offset_of_m_eraNames_46() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_eraNames_46)); }
	inline StringU5BU5D_t1281789340* get_m_eraNames_46() const { return ___m_eraNames_46; }
	inline StringU5BU5D_t1281789340** get_address_of_m_eraNames_46() { return &___m_eraNames_46; }
	inline void set_m_eraNames_46(StringU5BU5D_t1281789340* value)
	{
		___m_eraNames_46 = value;
		Il2CppCodeGenWriteBarrier((&___m_eraNames_46), value);
	}

	inline static int32_t get_offset_of_m_abbrevEraNames_47() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_abbrevEraNames_47)); }
	inline StringU5BU5D_t1281789340* get_m_abbrevEraNames_47() const { return ___m_abbrevEraNames_47; }
	inline StringU5BU5D_t1281789340** get_address_of_m_abbrevEraNames_47() { return &___m_abbrevEraNames_47; }
	inline void set_m_abbrevEraNames_47(StringU5BU5D_t1281789340* value)
	{
		___m_abbrevEraNames_47 = value;
		Il2CppCodeGenWriteBarrier((&___m_abbrevEraNames_47), value);
	}

	inline static int32_t get_offset_of_m_abbrevEnglishEraNames_48() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_abbrevEnglishEraNames_48)); }
	inline StringU5BU5D_t1281789340* get_m_abbrevEnglishEraNames_48() const { return ___m_abbrevEnglishEraNames_48; }
	inline StringU5BU5D_t1281789340** get_address_of_m_abbrevEnglishEraNames_48() { return &___m_abbrevEnglishEraNames_48; }
	inline void set_m_abbrevEnglishEraNames_48(StringU5BU5D_t1281789340* value)
	{
		___m_abbrevEnglishEraNames_48 = value;
		Il2CppCodeGenWriteBarrier((&___m_abbrevEnglishEraNames_48), value);
	}

	inline static int32_t get_offset_of_m_dateWords_49() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_dateWords_49)); }
	inline StringU5BU5D_t1281789340* get_m_dateWords_49() const { return ___m_dateWords_49; }
	inline StringU5BU5D_t1281789340** get_address_of_m_dateWords_49() { return &___m_dateWords_49; }
	inline void set_m_dateWords_49(StringU5BU5D_t1281789340* value)
	{
		___m_dateWords_49 = value;
		Il2CppCodeGenWriteBarrier((&___m_dateWords_49), value);
	}

	inline static int32_t get_offset_of_optionalCalendars_50() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___optionalCalendars_50)); }
	inline Int32U5BU5D_t385246372* get_optionalCalendars_50() const { return ___optionalCalendars_50; }
	inline Int32U5BU5D_t385246372** get_address_of_optionalCalendars_50() { return &___optionalCalendars_50; }
	inline void set_optionalCalendars_50(Int32U5BU5D_t385246372* value)
	{
		___optionalCalendars_50 = value;
		Il2CppCodeGenWriteBarrier((&___optionalCalendars_50), value);
	}

	inline static int32_t get_offset_of_m_superShortDayNames_51() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_superShortDayNames_51)); }
	inline StringU5BU5D_t1281789340* get_m_superShortDayNames_51() const { return ___m_superShortDayNames_51; }
	inline StringU5BU5D_t1281789340** get_address_of_m_superShortDayNames_51() { return &___m_superShortDayNames_51; }
	inline void set_m_superShortDayNames_51(StringU5BU5D_t1281789340* value)
	{
		___m_superShortDayNames_51 = value;
		Il2CppCodeGenWriteBarrier((&___m_superShortDayNames_51), value);
	}

	inline static int32_t get_offset_of_genitiveMonthNames_52() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___genitiveMonthNames_52)); }
	inline StringU5BU5D_t1281789340* get_genitiveMonthNames_52() const { return ___genitiveMonthNames_52; }
	inline StringU5BU5D_t1281789340** get_address_of_genitiveMonthNames_52() { return &___genitiveMonthNames_52; }
	inline void set_genitiveMonthNames_52(StringU5BU5D_t1281789340* value)
	{
		___genitiveMonthNames_52 = value;
		Il2CppCodeGenWriteBarrier((&___genitiveMonthNames_52), value);
	}

	inline static int32_t get_offset_of_m_genitiveAbbreviatedMonthNames_53() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_genitiveAbbreviatedMonthNames_53)); }
	inline StringU5BU5D_t1281789340* get_m_genitiveAbbreviatedMonthNames_53() const { return ___m_genitiveAbbreviatedMonthNames_53; }
	inline StringU5BU5D_t1281789340** get_address_of_m_genitiveAbbreviatedMonthNames_53() { return &___m_genitiveAbbreviatedMonthNames_53; }
	inline void set_m_genitiveAbbreviatedMonthNames_53(StringU5BU5D_t1281789340* value)
	{
		___m_genitiveAbbreviatedMonthNames_53 = value;
		Il2CppCodeGenWriteBarrier((&___m_genitiveAbbreviatedMonthNames_53), value);
	}

	inline static int32_t get_offset_of_leapYearMonthNames_54() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___leapYearMonthNames_54)); }
	inline StringU5BU5D_t1281789340* get_leapYearMonthNames_54() const { return ___leapYearMonthNames_54; }
	inline StringU5BU5D_t1281789340** get_address_of_leapYearMonthNames_54() { return &___leapYearMonthNames_54; }
	inline void set_leapYearMonthNames_54(StringU5BU5D_t1281789340* value)
	{
		___leapYearMonthNames_54 = value;
		Il2CppCodeGenWriteBarrier((&___leapYearMonthNames_54), value);
	}

	inline static int32_t get_offset_of_formatFlags_55() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___formatFlags_55)); }
	inline int32_t get_formatFlags_55() const { return ___formatFlags_55; }
	inline int32_t* get_address_of_formatFlags_55() { return &___formatFlags_55; }
	inline void set_formatFlags_55(int32_t value)
	{
		___formatFlags_55 = value;
	}

	inline static int32_t get_offset_of_m_name_56() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_name_56)); }
	inline String_t* get_m_name_56() const { return ___m_name_56; }
	inline String_t** get_address_of_m_name_56() { return &___m_name_56; }
	inline void set_m_name_56(String_t* value)
	{
		___m_name_56 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_56), value);
	}

	inline static int32_t get_offset_of_all_date_time_patterns_57() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___all_date_time_patterns_57)); }
	inline StringU5BU5D_t1281789340* get_all_date_time_patterns_57() const { return ___all_date_time_patterns_57; }
	inline StringU5BU5D_t1281789340** get_address_of_all_date_time_patterns_57() { return &___all_date_time_patterns_57; }
	inline void set_all_date_time_patterns_57(StringU5BU5D_t1281789340* value)
	{
		___all_date_time_patterns_57 = value;
		Il2CppCodeGenWriteBarrier((&___all_date_time_patterns_57), value);
	}
};

struct DateTimeFormatInfo_t2405853701_StaticFields
{
public:
	// System.String System.Globalization.DateTimeFormatInfo::MSG_READONLY
	String_t* ___MSG_READONLY_1;
	// System.String System.Globalization.DateTimeFormatInfo::MSG_ARRAYSIZE_MONTH
	String_t* ___MSG_ARRAYSIZE_MONTH_2;
	// System.String System.Globalization.DateTimeFormatInfo::MSG_ARRAYSIZE_DAY
	String_t* ___MSG_ARRAYSIZE_DAY_3;
	// System.String[] System.Globalization.DateTimeFormatInfo::INVARIANT_ABBREVIATED_DAY_NAMES
	StringU5BU5D_t1281789340* ___INVARIANT_ABBREVIATED_DAY_NAMES_4;
	// System.String[] System.Globalization.DateTimeFormatInfo::INVARIANT_DAY_NAMES
	StringU5BU5D_t1281789340* ___INVARIANT_DAY_NAMES_5;
	// System.String[] System.Globalization.DateTimeFormatInfo::INVARIANT_ABBREVIATED_MONTH_NAMES
	StringU5BU5D_t1281789340* ___INVARIANT_ABBREVIATED_MONTH_NAMES_6;
	// System.String[] System.Globalization.DateTimeFormatInfo::INVARIANT_MONTH_NAMES
	StringU5BU5D_t1281789340* ___INVARIANT_MONTH_NAMES_7;
	// System.String[] System.Globalization.DateTimeFormatInfo::INVARIANT_SHORT_DAY_NAMES
	StringU5BU5D_t1281789340* ___INVARIANT_SHORT_DAY_NAMES_8;
	// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::theInvariantDateTimeFormatInfo
	DateTimeFormatInfo_t2405853701 * ___theInvariantDateTimeFormatInfo_9;

public:
	inline static int32_t get_offset_of_MSG_READONLY_1() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___MSG_READONLY_1)); }
	inline String_t* get_MSG_READONLY_1() const { return ___MSG_READONLY_1; }
	inline String_t** get_address_of_MSG_READONLY_1() { return &___MSG_READONLY_1; }
	inline void set_MSG_READONLY_1(String_t* value)
	{
		___MSG_READONLY_1 = value;
		Il2CppCodeGenWriteBarrier((&___MSG_READONLY_1), value);
	}

	inline static int32_t get_offset_of_MSG_ARRAYSIZE_MONTH_2() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___MSG_ARRAYSIZE_MONTH_2)); }
	inline String_t* get_MSG_ARRAYSIZE_MONTH_2() const { return ___MSG_ARRAYSIZE_MONTH_2; }
	inline String_t** get_address_of_MSG_ARRAYSIZE_MONTH_2() { return &___MSG_ARRAYSIZE_MONTH_2; }
	inline void set_MSG_ARRAYSIZE_MONTH_2(String_t* value)
	{
		___MSG_ARRAYSIZE_MONTH_2 = value;
		Il2CppCodeGenWriteBarrier((&___MSG_ARRAYSIZE_MONTH_2), value);
	}

	inline static int32_t get_offset_of_MSG_ARRAYSIZE_DAY_3() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___MSG_ARRAYSIZE_DAY_3)); }
	inline String_t* get_MSG_ARRAYSIZE_DAY_3() const { return ___MSG_ARRAYSIZE_DAY_3; }
	inline String_t** get_address_of_MSG_ARRAYSIZE_DAY_3() { return &___MSG_ARRAYSIZE_DAY_3; }
	inline void set_MSG_ARRAYSIZE_DAY_3(String_t* value)
	{
		___MSG_ARRAYSIZE_DAY_3 = value;
		Il2CppCodeGenWriteBarrier((&___MSG_ARRAYSIZE_DAY_3), value);
	}

	inline static int32_t get_offset_of_INVARIANT_ABBREVIATED_DAY_NAMES_4() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___INVARIANT_ABBREVIATED_DAY_NAMES_4)); }
	inline StringU5BU5D_t1281789340* get_INVARIANT_ABBREVIATED_DAY_NAMES_4() const { return ___INVARIANT_ABBREVIATED_DAY_NAMES_4; }
	inline StringU5BU5D_t1281789340** get_address_of_INVARIANT_ABBREVIATED_DAY_NAMES_4() { return &___INVARIANT_ABBREVIATED_DAY_NAMES_4; }
	inline void set_INVARIANT_ABBREVIATED_DAY_NAMES_4(StringU5BU5D_t1281789340* value)
	{
		___INVARIANT_ABBREVIATED_DAY_NAMES_4 = value;
		Il2CppCodeGenWriteBarrier((&___INVARIANT_ABBREVIATED_DAY_NAMES_4), value);
	}

	inline static int32_t get_offset_of_INVARIANT_DAY_NAMES_5() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___INVARIANT_DAY_NAMES_5)); }
	inline StringU5BU5D_t1281789340* get_INVARIANT_DAY_NAMES_5() const { return ___INVARIANT_DAY_NAMES_5; }
	inline StringU5BU5D_t1281789340** get_address_of_INVARIANT_DAY_NAMES_5() { return &___INVARIANT_DAY_NAMES_5; }
	inline void set_INVARIANT_DAY_NAMES_5(StringU5BU5D_t1281789340* value)
	{
		___INVARIANT_DAY_NAMES_5 = value;
		Il2CppCodeGenWriteBarrier((&___INVARIANT_DAY_NAMES_5), value);
	}

	inline static int32_t get_offset_of_INVARIANT_ABBREVIATED_MONTH_NAMES_6() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___INVARIANT_ABBREVIATED_MONTH_NAMES_6)); }
	inline StringU5BU5D_t1281789340* get_INVARIANT_ABBREVIATED_MONTH_NAMES_6() const { return ___INVARIANT_ABBREVIATED_MONTH_NAMES_6; }
	inline StringU5BU5D_t1281789340** get_address_of_INVARIANT_ABBREVIATED_MONTH_NAMES_6() { return &___INVARIANT_ABBREVIATED_MONTH_NAMES_6; }
	inline void set_INVARIANT_ABBREVIATED_MONTH_NAMES_6(StringU5BU5D_t1281789340* value)
	{
		___INVARIANT_ABBREVIATED_MONTH_NAMES_6 = value;
		Il2CppCodeGenWriteBarrier((&___INVARIANT_ABBREVIATED_MONTH_NAMES_6), value);
	}

	inline static int32_t get_offset_of_INVARIANT_MONTH_NAMES_7() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___INVARIANT_MONTH_NAMES_7)); }
	inline StringU5BU5D_t1281789340* get_INVARIANT_MONTH_NAMES_7() const { return ___INVARIANT_MONTH_NAMES_7; }
	inline StringU5BU5D_t1281789340** get_address_of_INVARIANT_MONTH_NAMES_7() { return &___INVARIANT_MONTH_NAMES_7; }
	inline void set_INVARIANT_MONTH_NAMES_7(StringU5BU5D_t1281789340* value)
	{
		___INVARIANT_MONTH_NAMES_7 = value;
		Il2CppCodeGenWriteBarrier((&___INVARIANT_MONTH_NAMES_7), value);
	}

	inline static int32_t get_offset_of_INVARIANT_SHORT_DAY_NAMES_8() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___INVARIANT_SHORT_DAY_NAMES_8)); }
	inline StringU5BU5D_t1281789340* get_INVARIANT_SHORT_DAY_NAMES_8() const { return ___INVARIANT_SHORT_DAY_NAMES_8; }
	inline StringU5BU5D_t1281789340** get_address_of_INVARIANT_SHORT_DAY_NAMES_8() { return &___INVARIANT_SHORT_DAY_NAMES_8; }
	inline void set_INVARIANT_SHORT_DAY_NAMES_8(StringU5BU5D_t1281789340* value)
	{
		___INVARIANT_SHORT_DAY_NAMES_8 = value;
		Il2CppCodeGenWriteBarrier((&___INVARIANT_SHORT_DAY_NAMES_8), value);
	}

	inline static int32_t get_offset_of_theInvariantDateTimeFormatInfo_9() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___theInvariantDateTimeFormatInfo_9)); }
	inline DateTimeFormatInfo_t2405853701 * get_theInvariantDateTimeFormatInfo_9() const { return ___theInvariantDateTimeFormatInfo_9; }
	inline DateTimeFormatInfo_t2405853701 ** get_address_of_theInvariantDateTimeFormatInfo_9() { return &___theInvariantDateTimeFormatInfo_9; }
	inline void set_theInvariantDateTimeFormatInfo_9(DateTimeFormatInfo_t2405853701 * value)
	{
		___theInvariantDateTimeFormatInfo_9 = value;
		Il2CppCodeGenWriteBarrier((&___theInvariantDateTimeFormatInfo_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEFORMATINFO_T2405853701_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t881159249  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___ticks_0)); }
	inline TimeSpan_t881159249  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t881159249 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t881159249  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1281789340* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1281789340* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1281789340* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1281789340* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1281789340* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1281789340* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1281789340* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t385246372* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t385246372* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_2)); }
	inline DateTime_t3738529785  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t3738529785  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_3)); }
	inline DateTime_t3738529785  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t3738529785 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t3738529785  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t1281789340* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t1281789340* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t1281789340* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t1281789340* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t1281789340* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t1281789340* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t1281789340* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t1281789340* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t1281789340* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t1281789340* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t1281789340* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t1281789340** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t1281789340* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t1281789340* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t1281789340** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t1281789340* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t385246372* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t385246372* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t385246372* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t385246372* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
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
#ifndef EXPORTERFUNC_T1851311465_H
#define EXPORTERFUNC_T1851311465_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.ExporterFunc
struct  ExporterFunc_t1851311465  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPORTERFUNC_T1851311465_H
#ifndef IMPORTERFUNC_T3630937194_H
#define IMPORTERFUNC_T3630937194_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.ImporterFunc
struct  ImporterFunc_t3630937194  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMPORTERFUNC_T3630937194_H
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
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t1461822886  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PropertyInfo_t * m_Items[1];

public:
	inline PropertyInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline PropertyInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t846150980  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FieldInfo_t * m_Items[1];

public:
	inline FieldInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline FieldInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
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
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1364587687_gshared (Dictionary_2_t2241695223 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1704891675_gshared (Dictionary_2_t618723510 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m3821795625_gshared (List_1_t904547919 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Stack_1__ctor_m3164958980_gshared (Stack_1_t3923495619 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(!0)
extern "C" IL2CPP_METHOD_ATTR void Stack_1_Push_m1669856732_gshared (Stack_1_t3923495619 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::Clear()
extern "C" IL2CPP_METHOD_ATTR void Stack_1_Clear_m2967600_gshared (Stack_1_t3923495619 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Object>::Pop()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Stack_1_Pop_m756553478_gshared (Stack_1_t3923495619 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_m1599740434_gshared (Stack_1_t3923495619 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Object>::Peek()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Stack_1_Peek_m326384648_gshared (Stack_1_t3923495619 * __this, const RuntimeMethod* method);

// System.Void LitJson.ExporterFunc::Invoke(System.Object,LitJson.JsonWriter)
extern "C" IL2CPP_METHOD_ATTR void ExporterFunc_Invoke_m443196456 (ExporterFunc_t1851311465 * __this, RuntimeObject * ___obj0, JsonWriter_t3570089748 * ___writer1, const RuntimeMethod* method);
// System.Object LitJson.ImporterFunc::Invoke(System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ImporterFunc_Invoke_m1838490826 (ImporterFunc_t3630937194 * __this, RuntimeObject * ___input0, const RuntimeMethod* method);
// System.Void System.ApplicationException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ApplicationException__ctor_m2517758450 (ApplicationException_t2339761290 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
#define List_1__ctor_m706204246(__this, method) ((  void (*) (List_1_t3319525431 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>::.ctor()
#define Dictionary_2__ctor_m2431295564(__this, method) ((  void (*) (Dictionary_2_t3338636003 *, const RuntimeMethod*))Dictionary_2__ctor_m1364587687_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>::.ctor()
#define Dictionary_2__ctor_m2076397116(__this, method) ((  void (*) (Dictionary_2_t935204471 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>::.ctor()
#define Dictionary_2__ctor_m1674229861(__this, method) ((  void (*) (Dictionary_2_t1715664290 *, const RuntimeMethod*))Dictionary_2__ctor_m1704891675_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::.ctor()
#define Dictionary_2__ctor_m2292515434(__this, method) ((  void (*) (Dictionary_2_t3692140024 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Void LitJson.JsonWriter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void JsonWriter__ctor_m3035373812 (JsonWriter_t3570089748 * __this, const RuntimeMethod* method);
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::get_InvariantInfo()
extern "C" IL2CPP_METHOD_ATTR DateTimeFormatInfo_t2405853701 * DateTimeFormatInfo_get_InvariantInfo_m2329875772 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,LitJson.ExporterFunc>::.ctor()
#define Dictionary_2__ctor_m2735992426(__this, method) ((  void (*) (Dictionary_2_t691233 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::.ctor()
#define Dictionary_2__ctor_m1523576929(__this, method) ((  void (*) (Dictionary_2_t2688515417 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Void LitJson.JsonMapper::RegisterBaseExporters()
extern "C" IL2CPP_METHOD_ATTR void JsonMapper_RegisterBaseExporters_m1355390223 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void LitJson.JsonMapper::RegisterBaseImporters()
extern "C" IL2CPP_METHOD_ATTR void JsonMapper_RegisterBaseImporters_m623152139 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::.ctor()
#define List_1__ctor_m3821795625(__this, method) ((  void (*) (List_1_t904547919 *, const RuntimeMethod*))List_1__ctor_m3821795625_gshared)(__this, method)
// System.Reflection.PropertyInfo[] System.Type::GetProperties()
extern "C" IL2CPP_METHOD_ATTR PropertyInfoU5BU5D_t1461822886* Type_GetProperties_m1538559489 (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Reflection.FieldInfo[] System.Type::GetFields()
extern "C" IL2CPP_METHOD_ATTR FieldInfoU5BU5D_t846150980* Type_GetFields_m3709891696 (Type_t * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Enter_m2249409497 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Exit_m3585316909 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method);
// System.Void LitJson.ExporterFunc::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ExporterFunc__ctor_m1737319807 (ExporterFunc_t1851311465 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void LitJson.ImporterFunc::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ImporterFunc__ctor_m1884320379 (ImporterFunc_t3630937194 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void LitJson.JsonMapper::RegisterImporter(System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>,System.Type,System.Type,LitJson.ImporterFunc)
extern "C" IL2CPP_METHOD_ATTR void JsonMapper_RegisterImporter_m3334975862 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___table0, Type_t * ___json_type1, Type_t * ___value_type2, ImporterFunc_t3630937194 * ___importer3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>::.ctor()
#define Dictionary_2__ctor_m1305840448(__this, method) ((  void (*) (Dictionary_2_t1780316962 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Type System.Object::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void LitJson.JsonException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void JsonException__ctor_m2214533437 (JsonException_t3682484112 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Write(System.String)
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_Write_m3439490280 (JsonWriter_t3570089748 * __this, String_t* ___str0, const RuntimeMethod* method);
// System.IO.TextWriter LitJson.JsonWriter::get_TextWriter()
extern "C" IL2CPP_METHOD_ATTR TextWriter_t3478189236 * JsonWriter_get_TextWriter_m3421010583 (JsonWriter_t3570089748 * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Write(System.Double)
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_Write_m1904563146 (JsonWriter_t3570089748 * __this, double ___number0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Write(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_Write_m2431965710 (JsonWriter_t3570089748 * __this, int32_t ___number0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Write(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_Write_m338324825 (JsonWriter_t3570089748 * __this, bool ___boolean0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Write(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_Write_m2431572489 (JsonWriter_t3570089748 * __this, int64_t ___number0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::WriteArrayStart()
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_WriteArrayStart_m2705523021 (JsonWriter_t3570089748 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator System.Array::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Array_GetEnumerator_m4277730612 (RuntimeArray * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonMapper::WriteValue(System.Object,LitJson.JsonWriter,System.Boolean,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void JsonMapper_WriteValue_m3142592044 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, JsonWriter_t3570089748 * ___writer1, bool ___writer_is_private2, int32_t ___depth3, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::WriteArrayEnd()
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_WriteArrayEnd_m3257408064 (JsonWriter_t3570089748 * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::WriteObjectStart()
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_WriteObjectStart_m3619548051 (JsonWriter_t3570089748 * __this, const RuntimeMethod* method);
// System.Object System.Collections.DictionaryEntry::get_Key()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * DictionaryEntry_get_Key_m3117378551 (DictionaryEntry_t3123975638 * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::WritePropertyName(System.String)
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_WritePropertyName_m4239827789 (JsonWriter_t3570089748 * __this, String_t* ___property_name0, const RuntimeMethod* method);
// System.Object System.Collections.DictionaryEntry::get_Value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * DictionaryEntry_get_Value_m618120527 (DictionaryEntry_t3123975638 * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::WriteObjectEnd()
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_WriteObjectEnd_m2601038932 (JsonWriter_t3570089748 * __this, const RuntimeMethod* method);
// System.Type System.Enum::GetUnderlyingType(System.Type)
extern "C" IL2CPP_METHOD_ATTR Type_t * Enum_GetUnderlyingType_m2480312097 (RuntimeObject * __this /* static, unused */, Type_t * p0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Write(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_Write_m2044706063 (JsonWriter_t3570089748 * __this, uint64_t ___number0, const RuntimeMethod* method);
// System.Void LitJson.JsonMapper::AddTypeProperties(System.Type)
extern "C" IL2CPP_METHOD_ATTR void JsonMapper_AddTypeProperties_m3707375636 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Reset()
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_Reset_m1767624851 (JsonWriter_t3570089748 * __this, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Byte)
extern "C" IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m2505564049 (RuntimeObject * __this /* static, unused */, uint8_t p0, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Char)
extern "C" IL2CPP_METHOD_ATTR String_t* Convert_ToString_m1553911740 (RuntimeObject * __this /* static, unused */, Il2CppChar p0, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.DateTime,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Convert_ToString_m41256750 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Write(System.Decimal)
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_Write_m934090602 (JsonWriter_t3570089748 * __this, Decimal_t2948259380  ___number0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.SByte)
extern "C" IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m1405693041 (RuntimeObject * __this /* static, unused */, int8_t p0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Int16)
extern "C" IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m1085744762 (RuntimeObject * __this /* static, unused */, int16_t p0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m1987758323 (RuntimeObject * __this /* static, unused */, uint16_t p0, const RuntimeMethod* method);
// System.UInt64 System.Convert::ToUInt64(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR uint64_t Convert_ToUInt64_m1745056470 (RuntimeObject * __this /* static, unused */, uint32_t p0, const RuntimeMethod* method);
// System.Byte System.Convert::ToByte(System.Int32)
extern "C" IL2CPP_METHOD_ATTR uint8_t Convert_ToByte_m1734770211 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.UInt64 System.Convert::ToUInt64(System.Int32)
extern "C" IL2CPP_METHOD_ATTR uint64_t Convert_ToUInt64_m786726853 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.SByte System.Convert::ToSByte(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int8_t Convert_ToSByte_m2653418303 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Int16 System.Convert::ToInt16(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int16_t Convert_ToInt16_m4174308322 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.UInt16 System.Convert::ToUInt16(System.Int32)
extern "C" IL2CPP_METHOD_ATTR uint16_t Convert_ToUInt16_m3515425647 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.UInt32 System.Convert::ToUInt32(System.Int32)
extern "C" IL2CPP_METHOD_ATTR uint32_t Convert_ToUInt32_m2215525276 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Single System.Convert::ToSingle(System.Int32)
extern "C" IL2CPP_METHOD_ATTR float Convert_ToSingle_m3635698920 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Double System.Convert::ToDouble(System.Int32)
extern "C" IL2CPP_METHOD_ATTR double Convert_ToDouble_m2924063577 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Decimal System.Convert::ToDecimal(System.Double)
extern "C" IL2CPP_METHOD_ATTR Decimal_t2948259380  Convert_ToDecimal_m841368097 (RuntimeObject * __this /* static, unused */, double p0, const RuntimeMethod* method);
// System.UInt32 System.Convert::ToUInt32(System.Int64)
extern "C" IL2CPP_METHOD_ATTR uint32_t Convert_ToUInt32_m2194577773 (RuntimeObject * __this /* static, unused */, int64_t p0, const RuntimeMethod* method);
// System.Char System.Convert::ToChar(System.String)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_m85718752 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.DateTime System.Convert::ToDateTime(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  Convert_ToDateTime_m3802186295 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StringBuilder__ctor_m3121283359 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void System.IO.StringWriter::.ctor(System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR void StringWriter__ctor_m1259274362 (StringWriter_t802263757 * __this, StringBuilder_t * p0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Init()
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_Init_m1392617240 (JsonWriter_t3570089748 * __this, const RuntimeMethod* method);
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::get_InvariantInfo()
extern "C" IL2CPP_METHOD_ATTR NumberFormatInfo_t435877138 * NumberFormatInfo_get_InvariantInfo_m349577018 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<LitJson.WriterContext>::.ctor()
#define Stack_1__ctor_m227092194(__this, method) ((  void (*) (Stack_1_t1854483454 *, const RuntimeMethod*))Stack_1__ctor_m3164958980_gshared)(__this, method)
// System.Void LitJson.WriterContext::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WriterContext__ctor_m2317705773 (WriterContext_t1011093999 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<LitJson.WriterContext>::Push(!0)
#define Stack_1_Push_m1814405731(__this, p0, method) ((  void (*) (Stack_1_t1854483454 *, WriterContext_t1011093999 *, const RuntimeMethod*))Stack_1_Push_m1669856732_gshared)(__this, p0, method)
// System.Void LitJson.JsonWriter::PutNewline(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_PutNewline_m1383209577 (JsonWriter_t3570089748 * __this, bool ___add_comma0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Put(System.String)
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_Put_m2154223978 (JsonWriter_t3570089748 * __this, String_t* ___str0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<LitJson.WriterContext>::Clear()
#define Stack_1_Clear_m1384768577(__this, method) ((  void (*) (Stack_1_t1854483454 *, const RuntimeMethod*))Stack_1_Clear_m2967600_gshared)(__this, method)
// System.Int32 System.Text.StringBuilder::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_m3238060835 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Remove(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Remove_m940064945 (StringBuilder_t * __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::DoValidation(LitJson.Condition)
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_DoValidation_m2027671802 (JsonWriter_t3570089748 * __this, int32_t ___cond0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::PutNewline()
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_PutNewline_m2576790467 (JsonWriter_t3570089748 * __this, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Decimal,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Convert_ToString_m3734943936 (RuntimeObject * __this /* static, unused */, Decimal_t2948259380  p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Double,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Convert_ToString_m1282703378 (RuntimeObject * __this /* static, unused */, double p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
extern "C" IL2CPP_METHOD_ATTR int32_t String_IndexOf_m363431711 (String_t* __this, Il2CppChar p0, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Int32,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Convert_ToString_m2614817407 (RuntimeObject * __this /* static, unused */, int32_t p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Int64,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Convert_ToString_m239190601 (RuntimeObject * __this /* static, unused */, int64_t p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::PutString(System.String)
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_PutString_m890241341 (JsonWriter_t3570089748 * __this, String_t* ___str0, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.UInt64,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Convert_ToString_m301771913 (RuntimeObject * __this /* static, unused */, uint64_t p0, RuntimeObject* p1, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<LitJson.WriterContext>::Pop()
#define Stack_1_Pop_m3762211336(__this, method) ((  WriterContext_t1011093999 * (*) (Stack_1_t1854483454 *, const RuntimeMethod*))Stack_1_Pop_m756553478_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Stack`1<LitJson.WriterContext>::get_Count()
#define Stack_1_get_Count_m3119578031(__this, method) ((  int32_t (*) (Stack_1_t1854483454 *, const RuntimeMethod*))Stack_1_get_Count_m1599740434_gshared)(__this, method)
// !0 System.Collections.Generic.Stack`1<LitJson.WriterContext>::Peek()
#define Stack_1_Peek_m3227997562(__this, method) ((  WriterContext_t1011093999 * (*) (Stack_1_t1854483454 *, const RuntimeMethod*))Stack_1_Peek_m326384648_gshared)(__this, method)
// System.Void LitJson.JsonWriter::Unindent()
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_Unindent_m134443177 (JsonWriter_t3570089748 * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Indent()
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_Indent_m206263886 (JsonWriter_t3570089748 * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method);
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
// Conversion methods for marshalling of: LitJson.ArrayMetadata
extern "C" void ArrayMetadata_t894288939_marshal_pinvoke(const ArrayMetadata_t894288939& unmarshaled, ArrayMetadata_t894288939_marshaled_pinvoke& marshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ArrayMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception,NULL);
}
extern "C" void ArrayMetadata_t894288939_marshal_pinvoke_back(const ArrayMetadata_t894288939_marshaled_pinvoke& marshaled, ArrayMetadata_t894288939& unmarshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ArrayMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception,NULL);
}
// Conversion method for clean up from marshalling of: LitJson.ArrayMetadata
extern "C" void ArrayMetadata_t894288939_marshal_pinvoke_cleanup(ArrayMetadata_t894288939_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LitJson.ArrayMetadata
extern "C" void ArrayMetadata_t894288939_marshal_com(const ArrayMetadata_t894288939& unmarshaled, ArrayMetadata_t894288939_marshaled_com& marshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ArrayMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception,NULL);
}
extern "C" void ArrayMetadata_t894288939_marshal_com_back(const ArrayMetadata_t894288939_marshaled_com& marshaled, ArrayMetadata_t894288939& unmarshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ArrayMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception,NULL);
}
// Conversion method for clean up from marshalling of: LitJson.ArrayMetadata
extern "C" void ArrayMetadata_t894288939_marshal_com_cleanup(ArrayMetadata_t894288939_marshaled_com& marshaled)
{
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
// System.Void LitJson.ExporterFunc::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ExporterFunc__ctor_m1737319807 (ExporterFunc_t1851311465 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void LitJson.ExporterFunc::Invoke(System.Object,LitJson.JsonWriter)
extern "C" IL2CPP_METHOD_ATTR void ExporterFunc_Invoke_m443196456 (ExporterFunc_t1851311465 * __this, RuntimeObject * ___obj0, JsonWriter_t3570089748 * ___writer1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		ExporterFunc_Invoke_m443196456((ExporterFunc_t1851311465 *)__this->get_prev_9(), ___obj0, ___writer1, method);
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
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, JsonWriter_t3570089748 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___obj0, ___writer1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, JsonWriter_t3570089748 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___obj0, ___writer1, targetMethod);
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
						GenericInterfaceActionInvoker2< RuntimeObject *, JsonWriter_t3570089748 * >::Invoke(targetMethod, targetThis, ___obj0, ___writer1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, JsonWriter_t3570089748 * >::Invoke(targetMethod, targetThis, ___obj0, ___writer1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, JsonWriter_t3570089748 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___obj0, ___writer1);
					else
						VirtActionInvoker2< RuntimeObject *, JsonWriter_t3570089748 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___obj0, ___writer1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, JsonWriter_t3570089748 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, ___writer1, targetMethod);
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
						GenericInterfaceActionInvoker1< JsonWriter_t3570089748 * >::Invoke(targetMethod, ___obj0, ___writer1);
					else
						GenericVirtActionInvoker1< JsonWriter_t3570089748 * >::Invoke(targetMethod, ___obj0, ___writer1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< JsonWriter_t3570089748 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___obj0, ___writer1);
					else
						VirtActionInvoker1< JsonWriter_t3570089748 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___obj0, ___writer1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, JsonWriter_t3570089748 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___obj0, ___writer1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult LitJson.ExporterFunc::BeginInvoke(System.Object,LitJson.JsonWriter,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ExporterFunc_BeginInvoke_m2744656880 (ExporterFunc_t1851311465 * __this, RuntimeObject * ___obj0, JsonWriter_t3570089748 * ___writer1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___obj0;
	__d_args[1] = ___writer1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void LitJson.ExporterFunc::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void ExporterFunc_EndInvoke_m2774891957 (ExporterFunc_t1851311465 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void LitJson.ImporterFunc::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ImporterFunc__ctor_m1884320379 (ImporterFunc_t3630937194 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Object LitJson.ImporterFunc::Invoke(System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ImporterFunc_Invoke_m1838490826 (ImporterFunc_t3630937194 * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
	if(__this->get_prev_9() != NULL)
	{
		ImporterFunc_Invoke_m1838490826((ImporterFunc_t3630937194 *)__this->get_prev_9(), ___input0, method);
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
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___input0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___input0, targetMethod);
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
						result = GenericInterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___input0);
					else
						result = GenericVirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___input0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___input0);
					else
						result = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___input0);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___input0, targetMethod);
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
						result = GenericInterfaceFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ___input0);
					else
						result = GenericVirtFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ___input0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___input0);
					else
						result = VirtFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___input0);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___input0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult LitJson.ImporterFunc::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ImporterFunc_BeginInvoke_m2499074257 (ImporterFunc_t3630937194 * __this, RuntimeObject * ___input0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___input0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Object LitJson.ImporterFunc::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ImporterFunc_EndInvoke_m513546293 (ImporterFunc_t3630937194 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.JsonException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void JsonException__ctor_m2214533437 (JsonException_t3682484112 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		ApplicationException__ctor_m2517758450(__this, L_0, /*hidden argument*/NULL);
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
// System.Void LitJson.JsonMapper::.cctor()
extern "C" IL2CPP_METHOD_ATTR void JsonMapper__cctor_m850028620 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper__cctor_m850028620_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m297566312(L_0, /*hidden argument*/NULL);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_array_metadata_lock_7(L_0);
		RuntimeObject * L_1 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m297566312(L_1, /*hidden argument*/NULL);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_conv_ops_lock_9(L_1);
		RuntimeObject * L_2 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m297566312(L_2, /*hidden argument*/NULL);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_object_metadata_lock_11(L_2);
		RuntimeObject * L_3 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m297566312(L_3, /*hidden argument*/NULL);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_type_properties_lock_13(L_3);
		RuntimeObject * L_4 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m297566312(L_4, /*hidden argument*/NULL);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_static_writer_lock_15(L_4);
		List_1_t3319525431 * L_5 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m706204246(L_5, /*hidden argument*/List_1__ctor_m706204246_RuntimeMethod_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_static_err_stack_16(L_5);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_max_nesting_depth_0(((int32_t)100));
		Dictionary_2_t3338636003 * L_6 = (Dictionary_2_t3338636003 *)il2cpp_codegen_object_new(Dictionary_2_t3338636003_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2431295564(L_6, /*hidden argument*/Dictionary_2__ctor_m2431295564_RuntimeMethod_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_array_metadata_6(L_6);
		Dictionary_2_t935204471 * L_7 = (Dictionary_2_t935204471 *)il2cpp_codegen_object_new(Dictionary_2_t935204471_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2076397116(L_7, /*hidden argument*/Dictionary_2__ctor_m2076397116_RuntimeMethod_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_conv_ops_8(L_7);
		Dictionary_2_t1715664290 * L_8 = (Dictionary_2_t1715664290 *)il2cpp_codegen_object_new(Dictionary_2_t1715664290_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1674229861(L_8, /*hidden argument*/Dictionary_2__ctor_m1674229861_RuntimeMethod_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_object_metadata_10(L_8);
		Dictionary_2_t3692140024 * L_9 = (Dictionary_2_t3692140024 *)il2cpp_codegen_object_new(Dictionary_2_t3692140024_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2292515434(L_9, /*hidden argument*/Dictionary_2__ctor_m2292515434_RuntimeMethod_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_type_properties_12(L_9);
		JsonWriter_t3570089748 * L_10 = (JsonWriter_t3570089748 *)il2cpp_codegen_object_new(JsonWriter_t3570089748_il2cpp_TypeInfo_var);
		JsonWriter__ctor_m3035373812(L_10, /*hidden argument*/NULL);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_static_writer_14(L_10);
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeFormatInfo_t2405853701_il2cpp_TypeInfo_var);
		DateTimeFormatInfo_t2405853701 * L_11 = DateTimeFormatInfo_get_InvariantInfo_m2329875772(NULL /*static, unused*/, /*hidden argument*/NULL);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_datetime_format_1(L_11);
		Dictionary_2_t691233 * L_12 = (Dictionary_2_t691233 *)il2cpp_codegen_object_new(Dictionary_2_t691233_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2735992426(L_12, /*hidden argument*/Dictionary_2__ctor_m2735992426_RuntimeMethod_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_base_exporters_table_2(L_12);
		Dictionary_2_t691233 * L_13 = (Dictionary_2_t691233 *)il2cpp_codegen_object_new(Dictionary_2_t691233_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2735992426(L_13, /*hidden argument*/Dictionary_2__ctor_m2735992426_RuntimeMethod_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_custom_exporters_table_3(L_13);
		Dictionary_2_t2688515417 * L_14 = (Dictionary_2_t2688515417 *)il2cpp_codegen_object_new(Dictionary_2_t2688515417_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1523576929(L_14, /*hidden argument*/Dictionary_2__ctor_m1523576929_RuntimeMethod_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_base_importers_table_4(L_14);
		Dictionary_2_t2688515417 * L_15 = (Dictionary_2_t2688515417 *)il2cpp_codegen_object_new(Dictionary_2_t2688515417_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1523576929(L_15, /*hidden argument*/Dictionary_2__ctor_m1523576929_RuntimeMethod_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_custom_importers_table_5(L_15);
		JsonMapper_RegisterBaseExporters_m1355390223(NULL /*static, unused*/, /*hidden argument*/NULL);
		JsonMapper_RegisterBaseImporters_m623152139(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::AddTypeProperties(System.Type)
extern "C" IL2CPP_METHOD_ATTR void JsonMapper_AddTypeProperties_m3707375636 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_AddTypeProperties_m3707375636_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	PropertyInfoU5BU5D_t1461822886* V_1 = NULL;
	int32_t V_2 = 0;
	PropertyInfo_t * V_3 = NULL;
	PropertyMetadata_t3727440473  V_4;
	memset(&V_4, 0, sizeof(V_4));
	FieldInfoU5BU5D_t846150980* V_5 = NULL;
	int32_t V_6 = 0;
	FieldInfo_t * V_7 = NULL;
	PropertyMetadata_t3727440473  V_8;
	memset(&V_8, 0, sizeof(V_8));
	RuntimeObject * V_9 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_type_properties_12();
		Type_t * L_1 = ___type0;
		NullCheck(L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, Type_t * >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::ContainsKey(!0) */, IDictionary_2_t2155991415_il2cpp_TypeInfo_var, L_0, L_1);
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		List_1_t904547919 * L_3 = (List_1_t904547919 *)il2cpp_codegen_object_new(List_1_t904547919_il2cpp_TypeInfo_var);
		List_1__ctor_m3821795625(L_3, /*hidden argument*/List_1__ctor_m3821795625_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_3;
		Type_t * L_4 = ___type0;
		NullCheck(L_4);
		PropertyInfoU5BU5D_t1461822886* L_5 = Type_GetProperties_m1538559489(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		V_2 = 0;
		goto IL_0067;
	}

IL_0025:
	{
		PropertyInfoU5BU5D_t1461822886* L_6 = V_1;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		PropertyInfo_t * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		PropertyInfo_t * L_10 = V_3;
		NullCheck(L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_12 = String_op_Equality_m920492651(NULL /*static, unused*/, L_11, _stringLiteral1949155704, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0043;
		}
	}
	{
		goto IL_0063;
	}

IL_0043:
	{
		il2cpp_codegen_initobj((&V_4), sizeof(PropertyMetadata_t3727440473 ));
		PropertyInfo_t * L_13 = V_3;
		(&V_4)->set_Info_0(L_13);
		(&V_4)->set_IsField_1((bool)0);
		RuntimeObject* L_14 = V_0;
		PropertyMetadata_t3727440473  L_15 = V_4;
		NullCheck(L_14);
		InterfaceActionInvoker1< PropertyMetadata_t3727440473  >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<LitJson.PropertyMetadata>::Add(!0) */, ICollection_1_t2260625411_il2cpp_TypeInfo_var, L_14, L_15);
	}

IL_0063:
	{
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0067:
	{
		int32_t L_17 = V_2;
		PropertyInfoU5BU5D_t1461822886* L_18 = V_1;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_18)->max_length)))))))
		{
			goto IL_0025;
		}
	}
	{
		Type_t * L_19 = ___type0;
		NullCheck(L_19);
		FieldInfoU5BU5D_t846150980* L_20 = Type_GetFields_m3709891696(L_19, /*hidden argument*/NULL);
		V_5 = L_20;
		V_6 = 0;
		goto IL_00ae;
	}

IL_0080:
	{
		FieldInfoU5BU5D_t846150980* L_21 = V_5;
		int32_t L_22 = V_6;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		FieldInfo_t * L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_7 = L_24;
		il2cpp_codegen_initobj((&V_8), sizeof(PropertyMetadata_t3727440473 ));
		FieldInfo_t * L_25 = V_7;
		(&V_8)->set_Info_0(L_25);
		(&V_8)->set_IsField_1((bool)1);
		RuntimeObject* L_26 = V_0;
		PropertyMetadata_t3727440473  L_27 = V_8;
		NullCheck(L_26);
		InterfaceActionInvoker1< PropertyMetadata_t3727440473  >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<LitJson.PropertyMetadata>::Add(!0) */, ICollection_1_t2260625411_il2cpp_TypeInfo_var, L_26, L_27);
		int32_t L_28 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_00ae:
	{
		int32_t L_29 = V_6;
		FieldInfoU5BU5D_t846150980* L_30 = V_5;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_30)->max_length)))))))
		{
			goto IL_0080;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		RuntimeObject * L_31 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_type_properties_lock_13();
		V_9 = L_31;
		RuntimeObject * L_32 = V_9;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
	}

IL_00c7:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
			RuntimeObject* L_33 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_type_properties_12();
			Type_t * L_34 = ___type0;
			RuntimeObject* L_35 = V_0;
			NullCheck(L_33);
			InterfaceActionInvoker2< Type_t *, RuntimeObject* >::Invoke(0 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::Add(!0,!1) */, IDictionary_2_t2155991415_il2cpp_TypeInfo_var, L_33, L_34, L_35);
			goto IL_00e3;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (ArgumentException_t132251570_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_00d8;
			throw e;
		}

CATCH_00d8:
		{ // begin catch(System.ArgumentException)
			{
				IL2CPP_LEAVE(0xF0, FINALLY_00e8);
			}

IL_00de:
			{
				; // IL_00de: leave IL_00e3
			}
		} // end catch (depth: 2)

IL_00e3:
		{
			IL2CPP_LEAVE(0xF0, FINALLY_00e8);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00e8;
	}

FINALLY_00e8:
	{ // begin finally (depth: 1)
		RuntimeObject * L_36 = V_9;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_36, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(232)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(232)
	{
		IL2CPP_JUMP_TBL(0xF0, IL_00f0)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00f0:
	{
		return;
	}
}
// System.Void LitJson.JsonMapper::RegisterBaseExporters()
extern "C" IL2CPP_METHOD_ATTR void JsonMapper_RegisterBaseExporters_m1355390223 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_RegisterBaseExporters_m1355390223_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Type_t * G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	Type_t * G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Type_t * G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	Type_t * G_B6_0 = NULL;
	RuntimeObject* G_B6_1 = NULL;
	Type_t * G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	Type_t * G_B8_0 = NULL;
	RuntimeObject* G_B8_1 = NULL;
	Type_t * G_B7_0 = NULL;
	RuntimeObject* G_B7_1 = NULL;
	Type_t * G_B10_0 = NULL;
	RuntimeObject* G_B10_1 = NULL;
	Type_t * G_B9_0 = NULL;
	RuntimeObject* G_B9_1 = NULL;
	Type_t * G_B12_0 = NULL;
	RuntimeObject* G_B12_1 = NULL;
	Type_t * G_B11_0 = NULL;
	RuntimeObject* G_B11_1 = NULL;
	Type_t * G_B14_0 = NULL;
	RuntimeObject* G_B14_1 = NULL;
	Type_t * G_B13_0 = NULL;
	RuntimeObject* G_B13_1 = NULL;
	Type_t * G_B16_0 = NULL;
	RuntimeObject* G_B16_1 = NULL;
	Type_t * G_B15_0 = NULL;
	RuntimeObject* G_B15_1 = NULL;
	Type_t * G_B18_0 = NULL;
	RuntimeObject* G_B18_1 = NULL;
	Type_t * G_B17_0 = NULL;
	RuntimeObject* G_B17_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (Byte_t1134296376_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		ExporterFunc_t1851311465 * L_3 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache11_17();
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_3)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0027;
		}
	}
	{
		intptr_t L_4 = (intptr_t)JsonMapper_U3CRegisterBaseExportersU3Em__0_m209874195_RuntimeMethod_var;
		ExporterFunc_t1851311465 * L_5 = (ExporterFunc_t1851311465 *)il2cpp_codegen_object_new(ExporterFunc_t1851311465_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m1737319807(L_5, NULL, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache11_17(L_5);
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
	}

IL_0027:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		ExporterFunc_t1851311465 * L_6 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache11_17();
		NullCheck(G_B2_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t1851311465 * >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t2759509920_il2cpp_TypeInfo_var, G_B2_1, G_B2_0, L_6);
		RuntimeObject* L_7 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_t3027515415  L_8 = { reinterpret_cast<intptr_t> (Char_t3634460470_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		ExporterFunc_t1851311465 * L_10 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache12_18();
		G_B3_0 = L_9;
		G_B3_1 = L_7;
		if (L_10)
		{
			G_B4_0 = L_9;
			G_B4_1 = L_7;
			goto IL_0058;
		}
	}
	{
		intptr_t L_11 = (intptr_t)JsonMapper_U3CRegisterBaseExportersU3Em__1_m3570407405_RuntimeMethod_var;
		ExporterFunc_t1851311465 * L_12 = (ExporterFunc_t1851311465 *)il2cpp_codegen_object_new(ExporterFunc_t1851311465_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m1737319807(L_12, NULL, L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache12_18(L_12);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
	}

IL_0058:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		ExporterFunc_t1851311465 * L_13 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache12_18();
		NullCheck(G_B4_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t1851311465 * >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t2759509920_il2cpp_TypeInfo_var, G_B4_1, G_B4_0, L_13);
		RuntimeObject* L_14 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_t3027515415  L_15 = { reinterpret_cast<intptr_t> (DateTime_t3738529785_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_16 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		ExporterFunc_t1851311465 * L_17 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache13_19();
		G_B5_0 = L_16;
		G_B5_1 = L_14;
		if (L_17)
		{
			G_B6_0 = L_16;
			G_B6_1 = L_14;
			goto IL_0089;
		}
	}
	{
		intptr_t L_18 = (intptr_t)JsonMapper_U3CRegisterBaseExportersU3Em__2_m600765210_RuntimeMethod_var;
		ExporterFunc_t1851311465 * L_19 = (ExporterFunc_t1851311465 *)il2cpp_codegen_object_new(ExporterFunc_t1851311465_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m1737319807(L_19, NULL, L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache13_19(L_19);
		G_B6_0 = G_B5_0;
		G_B6_1 = G_B5_1;
	}

IL_0089:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		ExporterFunc_t1851311465 * L_20 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache13_19();
		NullCheck(G_B6_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t1851311465 * >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t2759509920_il2cpp_TypeInfo_var, G_B6_1, G_B6_0, L_20);
		RuntimeObject* L_21 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_t3027515415  L_22 = { reinterpret_cast<intptr_t> (Decimal_t2948259380_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_23 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		ExporterFunc_t1851311465 * L_24 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache14_20();
		G_B7_0 = L_23;
		G_B7_1 = L_21;
		if (L_24)
		{
			G_B8_0 = L_23;
			G_B8_1 = L_21;
			goto IL_00ba;
		}
	}
	{
		intptr_t L_25 = (intptr_t)JsonMapper_U3CRegisterBaseExportersU3Em__3_m939732965_RuntimeMethod_var;
		ExporterFunc_t1851311465 * L_26 = (ExporterFunc_t1851311465 *)il2cpp_codegen_object_new(ExporterFunc_t1851311465_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m1737319807(L_26, NULL, L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache14_20(L_26);
		G_B8_0 = G_B7_0;
		G_B8_1 = G_B7_1;
	}

IL_00ba:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		ExporterFunc_t1851311465 * L_27 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache14_20();
		NullCheck(G_B8_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t1851311465 * >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t2759509920_il2cpp_TypeInfo_var, G_B8_1, G_B8_0, L_27);
		RuntimeObject* L_28 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_t3027515415  L_29 = { reinterpret_cast<intptr_t> (SByte_t1669577662_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_30 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		ExporterFunc_t1851311465 * L_31 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache15_21();
		G_B9_0 = L_30;
		G_B9_1 = L_28;
		if (L_31)
		{
			G_B10_0 = L_30;
			G_B10_1 = L_28;
			goto IL_00eb;
		}
	}
	{
		intptr_t L_32 = (intptr_t)JsonMapper_U3CRegisterBaseExportersU3Em__4_m266458088_RuntimeMethod_var;
		ExporterFunc_t1851311465 * L_33 = (ExporterFunc_t1851311465 *)il2cpp_codegen_object_new(ExporterFunc_t1851311465_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m1737319807(L_33, NULL, L_32, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache15_21(L_33);
		G_B10_0 = G_B9_0;
		G_B10_1 = G_B9_1;
	}

IL_00eb:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		ExporterFunc_t1851311465 * L_34 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache15_21();
		NullCheck(G_B10_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t1851311465 * >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t2759509920_il2cpp_TypeInfo_var, G_B10_1, G_B10_0, L_34);
		RuntimeObject* L_35 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_t3027515415  L_36 = { reinterpret_cast<intptr_t> (Int16_t2552820387_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_37 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_36, /*hidden argument*/NULL);
		ExporterFunc_t1851311465 * L_38 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache16_22();
		G_B11_0 = L_37;
		G_B11_1 = L_35;
		if (L_38)
		{
			G_B12_0 = L_37;
			G_B12_1 = L_35;
			goto IL_011c;
		}
	}
	{
		intptr_t L_39 = (intptr_t)JsonMapper_U3CRegisterBaseExportersU3Em__5_m3328515821_RuntimeMethod_var;
		ExporterFunc_t1851311465 * L_40 = (ExporterFunc_t1851311465 *)il2cpp_codegen_object_new(ExporterFunc_t1851311465_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m1737319807(L_40, NULL, L_39, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache16_22(L_40);
		G_B12_0 = G_B11_0;
		G_B12_1 = G_B11_1;
	}

IL_011c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		ExporterFunc_t1851311465 * L_41 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache16_22();
		NullCheck(G_B12_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t1851311465 * >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t2759509920_il2cpp_TypeInfo_var, G_B12_1, G_B12_0, L_41);
		RuntimeObject* L_42 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_t3027515415  L_43 = { reinterpret_cast<intptr_t> (UInt16_t2177724958_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_44 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_43, /*hidden argument*/NULL);
		ExporterFunc_t1851311465 * L_45 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache17_23();
		G_B13_0 = L_44;
		G_B13_1 = L_42;
		if (L_45)
		{
			G_B14_0 = L_44;
			G_B14_1 = L_42;
			goto IL_014d;
		}
	}
	{
		intptr_t L_46 = (intptr_t)JsonMapper_U3CRegisterBaseExportersU3Em__6_m312889811_RuntimeMethod_var;
		ExporterFunc_t1851311465 * L_47 = (ExporterFunc_t1851311465 *)il2cpp_codegen_object_new(ExporterFunc_t1851311465_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m1737319807(L_47, NULL, L_46, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache17_23(L_47);
		G_B14_0 = G_B13_0;
		G_B14_1 = G_B13_1;
	}

IL_014d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		ExporterFunc_t1851311465 * L_48 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache17_23();
		NullCheck(G_B14_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t1851311465 * >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t2759509920_il2cpp_TypeInfo_var, G_B14_1, G_B14_0, L_48);
		RuntimeObject* L_49 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_t3027515415  L_50 = { reinterpret_cast<intptr_t> (UInt32_t2560061978_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_51 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_50, /*hidden argument*/NULL);
		ExporterFunc_t1851311465 * L_52 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache18_24();
		G_B15_0 = L_51;
		G_B15_1 = L_49;
		if (L_52)
		{
			G_B16_0 = L_51;
			G_B16_1 = L_49;
			goto IL_017e;
		}
	}
	{
		intptr_t L_53 = (intptr_t)JsonMapper_U3CRegisterBaseExportersU3Em__7_m3877741659_RuntimeMethod_var;
		ExporterFunc_t1851311465 * L_54 = (ExporterFunc_t1851311465 *)il2cpp_codegen_object_new(ExporterFunc_t1851311465_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m1737319807(L_54, NULL, L_53, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache18_24(L_54);
		G_B16_0 = G_B15_0;
		G_B16_1 = G_B15_1;
	}

IL_017e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		ExporterFunc_t1851311465 * L_55 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache18_24();
		NullCheck(G_B16_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t1851311465 * >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t2759509920_il2cpp_TypeInfo_var, G_B16_1, G_B16_0, L_55);
		RuntimeObject* L_56 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_t3027515415  L_57 = { reinterpret_cast<intptr_t> (UInt64_t4134040092_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_58 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_57, /*hidden argument*/NULL);
		ExporterFunc_t1851311465 * L_59 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache19_25();
		G_B17_0 = L_58;
		G_B17_1 = L_56;
		if (L_59)
		{
			G_B18_0 = L_58;
			G_B18_1 = L_56;
			goto IL_01af;
		}
	}
	{
		intptr_t L_60 = (intptr_t)JsonMapper_U3CRegisterBaseExportersU3Em__8_m225163408_RuntimeMethod_var;
		ExporterFunc_t1851311465 * L_61 = (ExporterFunc_t1851311465 *)il2cpp_codegen_object_new(ExporterFunc_t1851311465_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m1737319807(L_61, NULL, L_60, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache19_25(L_61);
		G_B18_0 = G_B17_0;
		G_B18_1 = G_B17_1;
	}

IL_01af:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		ExporterFunc_t1851311465 * L_62 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache19_25();
		NullCheck(G_B18_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t1851311465 * >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t2759509920_il2cpp_TypeInfo_var, G_B18_1, G_B18_0, L_62);
		return;
	}
}
// System.Void LitJson.JsonMapper::RegisterBaseImporters()
extern "C" IL2CPP_METHOD_ATTR void JsonMapper_RegisterBaseImporters_m623152139 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_RegisterBaseImporters_m623152139_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ImporterFunc_t3630937194 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		ImporterFunc_t3630937194 * L_0 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1A_26();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		intptr_t L_1 = (intptr_t)JsonMapper_U3CRegisterBaseImportersU3Em__9_m3120562086_RuntimeMethod_var;
		ImporterFunc_t3630937194 * L_2 = (ImporterFunc_t3630937194 *)il2cpp_codegen_object_new(ImporterFunc_t3630937194_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m1884320379(L_2, NULL, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache1A_26(L_2);
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		ImporterFunc_t3630937194 * L_3 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1A_26();
		V_0 = L_3;
		RuntimeObject* L_4 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t3027515415  L_5 = { reinterpret_cast<intptr_t> (Int32_t2950945753_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_7 = { reinterpret_cast<intptr_t> (Byte_t1134296376_0_0_0_var) };
		Type_t * L_8 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		ImporterFunc_t3630937194 * L_9 = V_0;
		JsonMapper_RegisterImporter_m3334975862(NULL /*static, unused*/, L_4, L_6, L_8, L_9, /*hidden argument*/NULL);
		ImporterFunc_t3630937194 * L_10 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1B_27();
		if (L_10)
		{
			goto IL_0055;
		}
	}
	{
		intptr_t L_11 = (intptr_t)JsonMapper_U3CRegisterBaseImportersU3Em__A_m3123255486_RuntimeMethod_var;
		ImporterFunc_t3630937194 * L_12 = (ImporterFunc_t3630937194 *)il2cpp_codegen_object_new(ImporterFunc_t3630937194_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m1884320379(L_12, NULL, L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache1B_27(L_12);
	}

IL_0055:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		ImporterFunc_t3630937194 * L_13 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1B_27();
		V_0 = L_13;
		RuntimeObject* L_14 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t3027515415  L_15 = { reinterpret_cast<intptr_t> (Int32_t2950945753_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_16 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_17 = { reinterpret_cast<intptr_t> (UInt64_t4134040092_0_0_0_var) };
		Type_t * L_18 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		ImporterFunc_t3630937194 * L_19 = V_0;
		JsonMapper_RegisterImporter_m3334975862(NULL /*static, unused*/, L_14, L_16, L_18, L_19, /*hidden argument*/NULL);
		ImporterFunc_t3630937194 * L_20 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1C_28();
		if (L_20)
		{
			goto IL_0092;
		}
	}
	{
		intptr_t L_21 = (intptr_t)JsonMapper_U3CRegisterBaseImportersU3Em__B_m3123219883_RuntimeMethod_var;
		ImporterFunc_t3630937194 * L_22 = (ImporterFunc_t3630937194 *)il2cpp_codegen_object_new(ImporterFunc_t3630937194_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m1884320379(L_22, NULL, L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache1C_28(L_22);
	}

IL_0092:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		ImporterFunc_t3630937194 * L_23 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1C_28();
		V_0 = L_23;
		RuntimeObject* L_24 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t3027515415  L_25 = { reinterpret_cast<intptr_t> (Int32_t2950945753_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_27 = { reinterpret_cast<intptr_t> (SByte_t1669577662_0_0_0_var) };
		Type_t * L_28 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		ImporterFunc_t3630937194 * L_29 = V_0;
		JsonMapper_RegisterImporter_m3334975862(NULL /*static, unused*/, L_24, L_26, L_28, L_29, /*hidden argument*/NULL);
		ImporterFunc_t3630937194 * L_30 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1D_29();
		if (L_30)
		{
			goto IL_00cf;
		}
	}
	{
		intptr_t L_31 = (intptr_t)JsonMapper_U3CRegisterBaseImportersU3Em__C_m3123314944_RuntimeMethod_var;
		ImporterFunc_t3630937194 * L_32 = (ImporterFunc_t3630937194 *)il2cpp_codegen_object_new(ImporterFunc_t3630937194_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m1884320379(L_32, NULL, L_31, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache1D_29(L_32);
	}

IL_00cf:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		ImporterFunc_t3630937194 * L_33 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1D_29();
		V_0 = L_33;
		RuntimeObject* L_34 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t3027515415  L_35 = { reinterpret_cast<intptr_t> (Int32_t2950945753_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_36 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_37 = { reinterpret_cast<intptr_t> (Int16_t2552820387_0_0_0_var) };
		Type_t * L_38 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
		ImporterFunc_t3630937194 * L_39 = V_0;
		JsonMapper_RegisterImporter_m3334975862(NULL /*static, unused*/, L_34, L_36, L_38, L_39, /*hidden argument*/NULL);
		ImporterFunc_t3630937194 * L_40 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1E_30();
		if (L_40)
		{
			goto IL_010c;
		}
	}
	{
		intptr_t L_41 = (intptr_t)JsonMapper_U3CRegisterBaseImportersU3Em__D_m3123024917_RuntimeMethod_var;
		ImporterFunc_t3630937194 * L_42 = (ImporterFunc_t3630937194 *)il2cpp_codegen_object_new(ImporterFunc_t3630937194_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m1884320379(L_42, NULL, L_41, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache1E_30(L_42);
	}

IL_010c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		ImporterFunc_t3630937194 * L_43 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1E_30();
		V_0 = L_43;
		RuntimeObject* L_44 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t3027515415  L_45 = { reinterpret_cast<intptr_t> (Int32_t2950945753_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_46 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_45, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_47 = { reinterpret_cast<intptr_t> (UInt16_t2177724958_0_0_0_var) };
		Type_t * L_48 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_47, /*hidden argument*/NULL);
		ImporterFunc_t3630937194 * L_49 = V_0;
		JsonMapper_RegisterImporter_m3334975862(NULL /*static, unused*/, L_44, L_46, L_48, L_49, /*hidden argument*/NULL);
		ImporterFunc_t3630937194 * L_50 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1F_31();
		if (L_50)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_51 = (intptr_t)JsonMapper_U3CRegisterBaseImportersU3Em__E_m3123374154_RuntimeMethod_var;
		ImporterFunc_t3630937194 * L_52 = (ImporterFunc_t3630937194 *)il2cpp_codegen_object_new(ImporterFunc_t3630937194_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m1884320379(L_52, NULL, L_51, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache1F_31(L_52);
	}

IL_0149:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		ImporterFunc_t3630937194 * L_53 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1F_31();
		V_0 = L_53;
		RuntimeObject* L_54 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t3027515415  L_55 = { reinterpret_cast<intptr_t> (Int32_t2950945753_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_56 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_55, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_57 = { reinterpret_cast<intptr_t> (UInt32_t2560061978_0_0_0_var) };
		Type_t * L_58 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_57, /*hidden argument*/NULL);
		ImporterFunc_t3630937194 * L_59 = V_0;
		JsonMapper_RegisterImporter_m3334975862(NULL /*static, unused*/, L_54, L_56, L_58, L_59, /*hidden argument*/NULL);
		ImporterFunc_t3630937194 * L_60 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache20_32();
		if (L_60)
		{
			goto IL_0186;
		}
	}
	{
		intptr_t L_61 = (intptr_t)JsonMapper_U3CRegisterBaseImportersU3Em__F_m3123338535_RuntimeMethod_var;
		ImporterFunc_t3630937194 * L_62 = (ImporterFunc_t3630937194 *)il2cpp_codegen_object_new(ImporterFunc_t3630937194_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m1884320379(L_62, NULL, L_61, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache20_32(L_62);
	}

IL_0186:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		ImporterFunc_t3630937194 * L_63 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache20_32();
		V_0 = L_63;
		RuntimeObject* L_64 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t3027515415  L_65 = { reinterpret_cast<intptr_t> (Int32_t2950945753_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_66 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_65, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_67 = { reinterpret_cast<intptr_t> (Single_t1397266774_0_0_0_var) };
		Type_t * L_68 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_67, /*hidden argument*/NULL);
		ImporterFunc_t3630937194 * L_69 = V_0;
		JsonMapper_RegisterImporter_m3334975862(NULL /*static, unused*/, L_64, L_66, L_68, L_69, /*hidden argument*/NULL);
		ImporterFunc_t3630937194 * L_70 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache21_33();
		if (L_70)
		{
			goto IL_01c3;
		}
	}
	{
		intptr_t L_71 = (intptr_t)JsonMapper_U3CRegisterBaseImportersU3Em__10_m2509882514_RuntimeMethod_var;
		ImporterFunc_t3630937194 * L_72 = (ImporterFunc_t3630937194 *)il2cpp_codegen_object_new(ImporterFunc_t3630937194_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m1884320379(L_72, NULL, L_71, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache21_33(L_72);
	}

IL_01c3:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		ImporterFunc_t3630937194 * L_73 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache21_33();
		V_0 = L_73;
		RuntimeObject* L_74 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t3027515415  L_75 = { reinterpret_cast<intptr_t> (Int32_t2950945753_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_76 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_75, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_77 = { reinterpret_cast<intptr_t> (Double_t594665363_0_0_0_var) };
		Type_t * L_78 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_77, /*hidden argument*/NULL);
		ImporterFunc_t3630937194 * L_79 = V_0;
		JsonMapper_RegisterImporter_m3334975862(NULL /*static, unused*/, L_74, L_76, L_78, L_79, /*hidden argument*/NULL);
		ImporterFunc_t3630937194 * L_80 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache22_34();
		if (L_80)
		{
			goto IL_0200;
		}
	}
	{
		intptr_t L_81 = (intptr_t)JsonMapper_U3CRegisterBaseImportersU3Em__11_m613999264_RuntimeMethod_var;
		ImporterFunc_t3630937194 * L_82 = (ImporterFunc_t3630937194 *)il2cpp_codegen_object_new(ImporterFunc_t3630937194_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m1884320379(L_82, NULL, L_81, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache22_34(L_82);
	}

IL_0200:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		ImporterFunc_t3630937194 * L_83 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache22_34();
		V_0 = L_83;
		RuntimeObject* L_84 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t3027515415  L_85 = { reinterpret_cast<intptr_t> (Double_t594665363_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_86 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_85, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_87 = { reinterpret_cast<intptr_t> (Decimal_t2948259380_0_0_0_var) };
		Type_t * L_88 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_87, /*hidden argument*/NULL);
		ImporterFunc_t3630937194 * L_89 = V_0;
		JsonMapper_RegisterImporter_m3334975862(NULL /*static, unused*/, L_84, L_86, L_88, L_89, /*hidden argument*/NULL);
		ImporterFunc_t3630937194 * L_90 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache23_35();
		if (L_90)
		{
			goto IL_023d;
		}
	}
	{
		intptr_t L_91 = (intptr_t)JsonMapper_U3CRegisterBaseImportersU3Em__12_m1159193330_RuntimeMethod_var;
		ImporterFunc_t3630937194 * L_92 = (ImporterFunc_t3630937194 *)il2cpp_codegen_object_new(ImporterFunc_t3630937194_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m1884320379(L_92, NULL, L_91, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache23_35(L_92);
	}

IL_023d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		ImporterFunc_t3630937194 * L_93 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache23_35();
		V_0 = L_93;
		RuntimeObject* L_94 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t3027515415  L_95 = { reinterpret_cast<intptr_t> (Int64_t3736567304_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_96 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_95, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_97 = { reinterpret_cast<intptr_t> (UInt32_t2560061978_0_0_0_var) };
		Type_t * L_98 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_97, /*hidden argument*/NULL);
		ImporterFunc_t3630937194 * L_99 = V_0;
		JsonMapper_RegisterImporter_m3334975862(NULL /*static, unused*/, L_94, L_96, L_98, L_99, /*hidden argument*/NULL);
		ImporterFunc_t3630937194 * L_100 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache24_36();
		if (L_100)
		{
			goto IL_027a;
		}
	}
	{
		intptr_t L_101 = (intptr_t)JsonMapper_U3CRegisterBaseImportersU3Em__13_m1427563268_RuntimeMethod_var;
		ImporterFunc_t3630937194 * L_102 = (ImporterFunc_t3630937194 *)il2cpp_codegen_object_new(ImporterFunc_t3630937194_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m1884320379(L_102, NULL, L_101, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache24_36(L_102);
	}

IL_027a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		ImporterFunc_t3630937194 * L_103 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache24_36();
		V_0 = L_103;
		RuntimeObject* L_104 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t3027515415  L_105 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_106 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_105, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_107 = { reinterpret_cast<intptr_t> (Char_t3634460470_0_0_0_var) };
		Type_t * L_108 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_107, /*hidden argument*/NULL);
		ImporterFunc_t3630937194 * L_109 = V_0;
		JsonMapper_RegisterImporter_m3334975862(NULL /*static, unused*/, L_104, L_106, L_108, L_109, /*hidden argument*/NULL);
		ImporterFunc_t3630937194 * L_110 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache25_37();
		if (L_110)
		{
			goto IL_02b7;
		}
	}
	{
		intptr_t L_111 = (intptr_t)JsonMapper_U3CRegisterBaseImportersU3Em__14_m1419109062_RuntimeMethod_var;
		ImporterFunc_t3630937194 * L_112 = (ImporterFunc_t3630937194 *)il2cpp_codegen_object_new(ImporterFunc_t3630937194_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m1884320379(L_112, NULL, L_111, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache25_37(L_112);
	}

IL_02b7:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		ImporterFunc_t3630937194 * L_113 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache25_37();
		V_0 = L_113;
		RuntimeObject* L_114 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t3027515415  L_115 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_116 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_115, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_117 = { reinterpret_cast<intptr_t> (DateTime_t3738529785_0_0_0_var) };
		Type_t * L_118 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_117, /*hidden argument*/NULL);
		ImporterFunc_t3630937194 * L_119 = V_0;
		JsonMapper_RegisterImporter_m3334975862(NULL /*static, unused*/, L_114, L_116, L_118, L_119, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::RegisterImporter(System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>,System.Type,System.Type,LitJson.ImporterFunc)
extern "C" IL2CPP_METHOD_ATTR void JsonMapper_RegisterImporter_m3334975862 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___table0, Type_t * ___json_type1, Type_t * ___value_type2, ImporterFunc_t3630937194 * ___importer3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_RegisterImporter_m3334975862_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___table0;
		Type_t * L_1 = ___json_type1;
		NullCheck(L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, Type_t * >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::ContainsKey(!0) */, IDictionary_2_t1152366808_il2cpp_TypeInfo_var, L_0, L_1);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		RuntimeObject* L_3 = ___table0;
		Type_t * L_4 = ___json_type1;
		Dictionary_2_t1780316962 * L_5 = (Dictionary_2_t1780316962 *)il2cpp_codegen_object_new(Dictionary_2_t1780316962_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1305840448(L_5, /*hidden argument*/Dictionary_2__ctor_m1305840448_RuntimeMethod_var);
		NullCheck(L_3);
		InterfaceActionInvoker2< Type_t *, RuntimeObject* >::Invoke(0 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::Add(!0,!1) */, IDictionary_2_t1152366808_il2cpp_TypeInfo_var, L_3, L_4, L_5);
	}

IL_0018:
	{
		RuntimeObject* L_6 = ___table0;
		Type_t * L_7 = ___json_type1;
		NullCheck(L_6);
		RuntimeObject* L_8 = InterfaceFuncInvoker1< RuntimeObject*, Type_t * >::Invoke(2 /* !1 System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::get_Item(!0) */, IDictionary_2_t1152366808_il2cpp_TypeInfo_var, L_6, L_7);
		Type_t * L_9 = ___value_type2;
		ImporterFunc_t3630937194 * L_10 = ___importer3;
		NullCheck(L_8);
		InterfaceActionInvoker2< Type_t *, ImporterFunc_t3630937194 * >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>::set_Item(!0,!1) */, IDictionary_2_t244168353_il2cpp_TypeInfo_var, L_8, L_9, L_10);
		return;
	}
}
// System.Void LitJson.JsonMapper::WriteValue(System.Object,LitJson.JsonWriter,System.Boolean,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void JsonMapper_WriteValue_m3142592044 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, JsonWriter_t3570089748 * ___writer1, bool ___writer_is_private2, int32_t ___depth3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_WriteValue_m3142592044_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	DictionaryEntry_t3123975638  V_7;
	memset(&V_7, 0, sizeof(V_7));
	RuntimeObject* V_8 = NULL;
	Type_t * V_9 = NULL;
	ExporterFunc_t1851311465 * V_10 = NULL;
	ExporterFunc_t1851311465 * V_11 = NULL;
	Type_t * V_12 = NULL;
	RuntimeObject* V_13 = NULL;
	RuntimeObject* V_14 = NULL;
	PropertyMetadata_t3727440473  V_15;
	memset(&V_15, 0, sizeof(V_15));
	PropertyInfo_t * V_16 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = ___depth3;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		int32_t L_1 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_max_nesting_depth_0();
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_0021;
		}
	}
	{
		RuntimeObject * L_2 = ___obj0;
		NullCheck(L_2);
		Type_t * L_3 = Object_GetType_m88164663(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral2854558491, L_3, /*hidden argument*/NULL);
		JsonException_t3682484112 * L_5 = (JsonException_t3682484112 *)il2cpp_codegen_object_new(JsonException_t3682484112_il2cpp_TypeInfo_var);
		JsonException__ctor_m2214533437(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5,JsonMapper_WriteValue_m3142592044_RuntimeMethod_var);
	}

IL_0021:
	{
		RuntimeObject * L_6 = ___obj0;
		if (L_6)
		{
			goto IL_002f;
		}
	}
	{
		JsonWriter_t3570089748 * L_7 = ___writer1;
		NullCheck(L_7);
		JsonWriter_Write_m3439490280(L_7, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}

IL_002f:
	{
		RuntimeObject * L_8 = ___obj0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_8, IJsonWrapper_t1028825384_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		bool L_9 = ___writer_is_private2;
		if (!L_9)
		{
			goto IL_005b;
		}
	}
	{
		JsonWriter_t3570089748 * L_10 = ___writer1;
		NullCheck(L_10);
		TextWriter_t3478189236 * L_11 = JsonWriter_get_TextWriter_m3421010583(L_10, /*hidden argument*/NULL);
		RuntimeObject * L_12 = ___obj0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_12, IJsonWrapper_t1028825384_il2cpp_TypeInfo_var)));
		String_t* L_13 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String LitJson.IJsonWrapper::ToJson() */, IJsonWrapper_t1028825384_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_12, IJsonWrapper_t1028825384_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.String) */, L_11, L_13);
		goto IL_0067;
	}

IL_005b:
	{
		RuntimeObject * L_14 = ___obj0;
		JsonWriter_t3570089748 * L_15 = ___writer1;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_14, IJsonWrapper_t1028825384_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< JsonWriter_t3570089748 * >::Invoke(1 /* System.Void LitJson.IJsonWrapper::ToJson(LitJson.JsonWriter) */, IJsonWrapper_t1028825384_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_14, IJsonWrapper_t1028825384_il2cpp_TypeInfo_var)), L_15);
	}

IL_0067:
	{
		return;
	}

IL_0068:
	{
		RuntimeObject * L_16 = ___obj0;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_16, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0080;
		}
	}
	{
		JsonWriter_t3570089748 * L_17 = ___writer1;
		RuntimeObject * L_18 = ___obj0;
		NullCheck(L_17);
		JsonWriter_Write_m3439490280(L_17, ((String_t*)CastclassSealed((RuntimeObject*)L_18, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return;
	}

IL_0080:
	{
		RuntimeObject * L_19 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_19, Double_t594665363_il2cpp_TypeInfo_var)))
		{
			goto IL_0098;
		}
	}
	{
		JsonWriter_t3570089748 * L_20 = ___writer1;
		RuntimeObject * L_21 = ___obj0;
		NullCheck(L_20);
		JsonWriter_Write_m1904563146(L_20, ((*(double*)((double*)UnBox(L_21, Double_t594665363_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}

IL_0098:
	{
		RuntimeObject * L_22 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_22, Int32_t2950945753_il2cpp_TypeInfo_var)))
		{
			goto IL_00b0;
		}
	}
	{
		JsonWriter_t3570089748 * L_23 = ___writer1;
		RuntimeObject * L_24 = ___obj0;
		NullCheck(L_23);
		JsonWriter_Write_m2431965710(L_23, ((*(int32_t*)((int32_t*)UnBox(L_24, Int32_t2950945753_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}

IL_00b0:
	{
		RuntimeObject * L_25 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_25, Boolean_t97287965_il2cpp_TypeInfo_var)))
		{
			goto IL_00c8;
		}
	}
	{
		JsonWriter_t3570089748 * L_26 = ___writer1;
		RuntimeObject * L_27 = ___obj0;
		NullCheck(L_26);
		JsonWriter_Write_m338324825(L_26, ((*(bool*)((bool*)UnBox(L_27, Boolean_t97287965_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}

IL_00c8:
	{
		RuntimeObject * L_28 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_28, Int64_t3736567304_il2cpp_TypeInfo_var)))
		{
			goto IL_00e0;
		}
	}
	{
		JsonWriter_t3570089748 * L_29 = ___writer1;
		RuntimeObject * L_30 = ___obj0;
		NullCheck(L_29);
		JsonWriter_Write_m2431572489(L_29, ((*(int64_t*)((int64_t*)UnBox(L_30, Int64_t3736567304_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}

IL_00e0:
	{
		RuntimeObject * L_31 = ___obj0;
		if (!((RuntimeArray *)IsInstClass((RuntimeObject*)L_31, RuntimeArray_il2cpp_TypeInfo_var)))
		{
			goto IL_013f;
		}
	}
	{
		JsonWriter_t3570089748 * L_32 = ___writer1;
		NullCheck(L_32);
		JsonWriter_WriteArrayStart_m2705523021(L_32, /*hidden argument*/NULL);
		RuntimeObject * L_33 = ___obj0;
		NullCheck(((RuntimeArray *)CastclassClass((RuntimeObject*)L_33, RuntimeArray_il2cpp_TypeInfo_var)));
		RuntimeObject* L_34 = Array_GetEnumerator_m4277730612(((RuntimeArray *)CastclassClass((RuntimeObject*)L_33, RuntimeArray_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_0 = L_34;
	}

IL_00fd:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0114;
		}

IL_0102:
		{
			RuntimeObject* L_35 = V_0;
			NullCheck(L_35);
			RuntimeObject * L_36 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_35);
			V_1 = L_36;
			RuntimeObject * L_37 = V_1;
			JsonWriter_t3570089748 * L_38 = ___writer1;
			bool L_39 = ___writer_is_private2;
			int32_t L_40 = ___depth3;
			IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
			JsonMapper_WriteValue_m3142592044(NULL /*static, unused*/, L_37, L_38, L_39, ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1)), /*hidden argument*/NULL);
		}

IL_0114:
		{
			RuntimeObject* L_41 = V_0;
			NullCheck(L_41);
			bool L_42 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_41);
			if (L_42)
			{
				goto IL_0102;
			}
		}

IL_011f:
		{
			IL2CPP_LEAVE(0x138, FINALLY_0124);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0124;
	}

FINALLY_0124:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_43 = V_0;
			RuntimeObject* L_44 = ((RuntimeObject*)IsInst((RuntimeObject*)L_43, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_2 = L_44;
			if (!L_44)
			{
				goto IL_0137;
			}
		}

IL_0131:
		{
			RuntimeObject* L_45 = V_2;
			NullCheck(L_45);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_45);
		}

IL_0137:
		{
			IL2CPP_END_FINALLY(292)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(292)
	{
		IL2CPP_JUMP_TBL(0x138, IL_0138)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0138:
	{
		JsonWriter_t3570089748 * L_46 = ___writer1;
		NullCheck(L_46);
		JsonWriter_WriteArrayEnd_m3257408064(L_46, /*hidden argument*/NULL);
		return;
	}

IL_013f:
	{
		RuntimeObject * L_47 = ___obj0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_47, IList_t2094931216_il2cpp_TypeInfo_var)))
		{
			goto IL_01a2;
		}
	}
	{
		JsonWriter_t3570089748 * L_48 = ___writer1;
		NullCheck(L_48);
		JsonWriter_WriteArrayStart_m2705523021(L_48, /*hidden argument*/NULL);
		RuntimeObject * L_49 = ___obj0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_49, IList_t2094931216_il2cpp_TypeInfo_var)));
		RuntimeObject* L_50 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_49, IList_t2094931216_il2cpp_TypeInfo_var)));
		V_3 = L_50;
	}

IL_015c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0175;
		}

IL_0161:
		{
			RuntimeObject* L_51 = V_3;
			NullCheck(L_51);
			RuntimeObject * L_52 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_51);
			V_4 = L_52;
			RuntimeObject * L_53 = V_4;
			JsonWriter_t3570089748 * L_54 = ___writer1;
			bool L_55 = ___writer_is_private2;
			int32_t L_56 = ___depth3;
			IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
			JsonMapper_WriteValue_m3142592044(NULL /*static, unused*/, L_53, L_54, L_55, ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1)), /*hidden argument*/NULL);
		}

IL_0175:
		{
			RuntimeObject* L_57 = V_3;
			NullCheck(L_57);
			bool L_58 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_57);
			if (L_58)
			{
				goto IL_0161;
			}
		}

IL_0180:
		{
			IL2CPP_LEAVE(0x19B, FINALLY_0185);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0185;
	}

FINALLY_0185:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_59 = V_3;
			RuntimeObject* L_60 = ((RuntimeObject*)IsInst((RuntimeObject*)L_59, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_5 = L_60;
			if (!L_60)
			{
				goto IL_019a;
			}
		}

IL_0193:
		{
			RuntimeObject* L_61 = V_5;
			NullCheck(L_61);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_61);
		}

IL_019a:
		{
			IL2CPP_END_FINALLY(389)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(389)
	{
		IL2CPP_JUMP_TBL(0x19B, IL_019b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_019b:
	{
		JsonWriter_t3570089748 * L_62 = ___writer1;
		NullCheck(L_62);
		JsonWriter_WriteArrayEnd_m3257408064(L_62, /*hidden argument*/NULL);
		return;
	}

IL_01a2:
	{
		RuntimeObject * L_63 = ___obj0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_63, IDictionary_t1363984059_il2cpp_TypeInfo_var)))
		{
			goto IL_0225;
		}
	}
	{
		JsonWriter_t3570089748 * L_64 = ___writer1;
		NullCheck(L_64);
		JsonWriter_WriteObjectStart_m3619548051(L_64, /*hidden argument*/NULL);
		RuntimeObject * L_65 = ___obj0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_65, IDictionary_t1363984059_il2cpp_TypeInfo_var)));
		RuntimeObject* L_66 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.IDictionaryEnumerator System.Collections.IDictionary::GetEnumerator() */, IDictionary_t1363984059_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_65, IDictionary_t1363984059_il2cpp_TypeInfo_var)));
		V_6 = L_66;
	}

IL_01c0:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01f6;
		}

IL_01c5:
		{
			RuntimeObject* L_67 = V_6;
			NullCheck(L_67);
			RuntimeObject * L_68 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_67);
			V_7 = ((*(DictionaryEntry_t3123975638 *)((DictionaryEntry_t3123975638 *)UnBox(L_68, DictionaryEntry_t3123975638_il2cpp_TypeInfo_var))));
			JsonWriter_t3570089748 * L_69 = ___writer1;
			RuntimeObject * L_70 = DictionaryEntry_get_Key_m3117378551((&V_7), /*hidden argument*/NULL);
			NullCheck(L_69);
			JsonWriter_WritePropertyName_m4239827789(L_69, ((String_t*)CastclassSealed((RuntimeObject*)L_70, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			RuntimeObject * L_71 = DictionaryEntry_get_Value_m618120527((&V_7), /*hidden argument*/NULL);
			JsonWriter_t3570089748 * L_72 = ___writer1;
			bool L_73 = ___writer_is_private2;
			int32_t L_74 = ___depth3;
			IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
			JsonMapper_WriteValue_m3142592044(NULL /*static, unused*/, L_71, L_72, L_73, ((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)1)), /*hidden argument*/NULL);
		}

IL_01f6:
		{
			RuntimeObject* L_75 = V_6;
			NullCheck(L_75);
			bool L_76 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_75);
			if (L_76)
			{
				goto IL_01c5;
			}
		}

IL_0202:
		{
			IL2CPP_LEAVE(0x21E, FINALLY_0207);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0207;
	}

FINALLY_0207:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_77 = V_6;
			RuntimeObject* L_78 = ((RuntimeObject*)IsInst((RuntimeObject*)L_77, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_8 = L_78;
			if (!L_78)
			{
				goto IL_021d;
			}
		}

IL_0216:
		{
			RuntimeObject* L_79 = V_8;
			NullCheck(L_79);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_79);
		}

IL_021d:
		{
			IL2CPP_END_FINALLY(519)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(519)
	{
		IL2CPP_JUMP_TBL(0x21E, IL_021e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_021e:
	{
		JsonWriter_t3570089748 * L_80 = ___writer1;
		NullCheck(L_80);
		JsonWriter_WriteObjectEnd_m2601038932(L_80, /*hidden argument*/NULL);
		return;
	}

IL_0225:
	{
		RuntimeObject * L_81 = ___obj0;
		NullCheck(L_81);
		Type_t * L_82 = Object_GetType_m88164663(L_81, /*hidden argument*/NULL);
		V_9 = L_82;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		RuntimeObject* L_83 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_custom_exporters_table_3();
		Type_t * L_84 = V_9;
		NullCheck(L_83);
		bool L_85 = InterfaceFuncInvoker1< bool, Type_t * >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::ContainsKey(!0) */, IDictionary_2_t2759509920_il2cpp_TypeInfo_var, L_83, L_84);
		if (!L_85)
		{
			goto IL_0256;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		RuntimeObject* L_86 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_custom_exporters_table_3();
		Type_t * L_87 = V_9;
		NullCheck(L_86);
		ExporterFunc_t1851311465 * L_88 = InterfaceFuncInvoker1< ExporterFunc_t1851311465 *, Type_t * >::Invoke(2 /* !1 System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::get_Item(!0) */, IDictionary_2_t2759509920_il2cpp_TypeInfo_var, L_86, L_87);
		V_10 = L_88;
		ExporterFunc_t1851311465 * L_89 = V_10;
		RuntimeObject * L_90 = ___obj0;
		JsonWriter_t3570089748 * L_91 = ___writer1;
		NullCheck(L_89);
		ExporterFunc_Invoke_m443196456(L_89, L_90, L_91, /*hidden argument*/NULL);
		return;
	}

IL_0256:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		RuntimeObject* L_92 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		Type_t * L_93 = V_9;
		NullCheck(L_92);
		bool L_94 = InterfaceFuncInvoker1< bool, Type_t * >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::ContainsKey(!0) */, IDictionary_2_t2759509920_il2cpp_TypeInfo_var, L_92, L_93);
		if (!L_94)
		{
			goto IL_027f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		RuntimeObject* L_95 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		Type_t * L_96 = V_9;
		NullCheck(L_95);
		ExporterFunc_t1851311465 * L_97 = InterfaceFuncInvoker1< ExporterFunc_t1851311465 *, Type_t * >::Invoke(2 /* !1 System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::get_Item(!0) */, IDictionary_2_t2759509920_il2cpp_TypeInfo_var, L_95, L_96);
		V_11 = L_97;
		ExporterFunc_t1851311465 * L_98 = V_11;
		RuntimeObject * L_99 = ___obj0;
		JsonWriter_t3570089748 * L_100 = ___writer1;
		NullCheck(L_98);
		ExporterFunc_Invoke_m443196456(L_98, L_99, L_100, /*hidden argument*/NULL);
		return;
	}

IL_027f:
	{
		RuntimeObject * L_101 = ___obj0;
		if (!((Enum_t4135868527 *)IsInstClass((RuntimeObject*)L_101, Enum_t4135868527_il2cpp_TypeInfo_var)))
		{
			goto IL_02e4;
		}
	}
	{
		Type_t * L_102 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t4135868527_il2cpp_TypeInfo_var);
		Type_t * L_103 = Enum_GetUnderlyingType_m2480312097(NULL /*static, unused*/, L_102, /*hidden argument*/NULL);
		V_12 = L_103;
		Type_t * L_104 = V_12;
		RuntimeTypeHandle_t3027515415  L_105 = { reinterpret_cast<intptr_t> (Int64_t3736567304_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_106 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_105, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_104) == ((RuntimeObject*)(Type_t *)L_106)))
		{
			goto IL_02c6;
		}
	}
	{
		Type_t * L_107 = V_12;
		RuntimeTypeHandle_t3027515415  L_108 = { reinterpret_cast<intptr_t> (UInt32_t2560061978_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_109 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_108, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_107) == ((RuntimeObject*)(Type_t *)L_109)))
		{
			goto IL_02c6;
		}
	}
	{
		Type_t * L_110 = V_12;
		RuntimeTypeHandle_t3027515415  L_111 = { reinterpret_cast<intptr_t> (UInt64_t4134040092_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_112 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_111, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_110) == ((RuntimeObject*)(Type_t *)L_112))))
		{
			goto IL_02d7;
		}
	}

IL_02c6:
	{
		JsonWriter_t3570089748 * L_113 = ___writer1;
		RuntimeObject * L_114 = ___obj0;
		NullCheck(L_113);
		JsonWriter_Write_m2044706063(L_113, ((*(uint64_t*)((uint64_t*)UnBox(L_114, UInt64_t4134040092_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		goto IL_02e3;
	}

IL_02d7:
	{
		JsonWriter_t3570089748 * L_115 = ___writer1;
		RuntimeObject * L_116 = ___obj0;
		NullCheck(L_115);
		JsonWriter_Write_m2431965710(L_115, ((*(int32_t*)((int32_t*)UnBox(L_116, Int32_t2950945753_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
	}

IL_02e3:
	{
		return;
	}

IL_02e4:
	{
		Type_t * L_117 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		JsonMapper_AddTypeProperties_m3707375636(NULL /*static, unused*/, L_117, /*hidden argument*/NULL);
		RuntimeObject* L_118 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_type_properties_12();
		Type_t * L_119 = V_9;
		NullCheck(L_118);
		RuntimeObject* L_120 = InterfaceFuncInvoker1< RuntimeObject*, Type_t * >::Invoke(2 /* !1 System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::get_Item(!0) */, IDictionary_2_t2155991415_il2cpp_TypeInfo_var, L_118, L_119);
		V_13 = L_120;
		JsonWriter_t3570089748 * L_121 = ___writer1;
		NullCheck(L_121);
		JsonWriter_WriteObjectStart_m3619548051(L_121, /*hidden argument*/NULL);
		RuntimeObject* L_122 = V_13;
		NullCheck(L_122);
		RuntimeObject* L_123 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<LitJson.PropertyMetadata>::GetEnumerator() */, IEnumerable_1_t2707293362_il2cpp_TypeInfo_var, L_122);
		V_14 = L_123;
	}

IL_0308:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0394;
		}

IL_030d:
		{
			RuntimeObject* L_124 = V_14;
			NullCheck(L_124);
			PropertyMetadata_t3727440473  L_125 = InterfaceFuncInvoker0< PropertyMetadata_t3727440473  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<LitJson.PropertyMetadata>::get_Current() */, IEnumerator_1_t4160010941_il2cpp_TypeInfo_var, L_124);
			V_15 = L_125;
			bool L_126 = (&V_15)->get_IsField_1();
			if (!L_126)
			{
				goto IL_0355;
			}
		}

IL_0322:
		{
			JsonWriter_t3570089748 * L_127 = ___writer1;
			MemberInfo_t * L_128 = (&V_15)->get_Info_0();
			NullCheck(L_128);
			String_t* L_129 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_128);
			NullCheck(L_127);
			JsonWriter_WritePropertyName_m4239827789(L_127, L_129, /*hidden argument*/NULL);
			MemberInfo_t * L_130 = (&V_15)->get_Info_0();
			RuntimeObject * L_131 = ___obj0;
			NullCheck(((FieldInfo_t *)CastclassClass((RuntimeObject*)L_130, FieldInfo_t_il2cpp_TypeInfo_var)));
			RuntimeObject * L_132 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(17 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, ((FieldInfo_t *)CastclassClass((RuntimeObject*)L_130, FieldInfo_t_il2cpp_TypeInfo_var)), L_131);
			JsonWriter_t3570089748 * L_133 = ___writer1;
			bool L_134 = ___writer_is_private2;
			int32_t L_135 = ___depth3;
			IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
			JsonMapper_WriteValue_m3142592044(NULL /*static, unused*/, L_132, L_133, L_134, ((int32_t)il2cpp_codegen_add((int32_t)L_135, (int32_t)1)), /*hidden argument*/NULL);
			goto IL_0394;
		}

IL_0355:
		{
			MemberInfo_t * L_136 = (&V_15)->get_Info_0();
			V_16 = ((PropertyInfo_t *)CastclassClass((RuntimeObject*)L_136, PropertyInfo_t_il2cpp_TypeInfo_var));
			PropertyInfo_t * L_137 = V_16;
			NullCheck(L_137);
			bool L_138 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_137);
			if (!L_138)
			{
				goto IL_0394;
			}
		}

IL_036f:
		{
			JsonWriter_t3570089748 * L_139 = ___writer1;
			MemberInfo_t * L_140 = (&V_15)->get_Info_0();
			NullCheck(L_140);
			String_t* L_141 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_140);
			NullCheck(L_139);
			JsonWriter_WritePropertyName_m4239827789(L_139, L_141, /*hidden argument*/NULL);
			PropertyInfo_t * L_142 = V_16;
			RuntimeObject * L_143 = ___obj0;
			NullCheck(L_142);
			RuntimeObject * L_144 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t2843939325* >::Invoke(23 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_142, L_143, (ObjectU5BU5D_t2843939325*)(ObjectU5BU5D_t2843939325*)NULL);
			JsonWriter_t3570089748 * L_145 = ___writer1;
			bool L_146 = ___writer_is_private2;
			int32_t L_147 = ___depth3;
			IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
			JsonMapper_WriteValue_m3142592044(NULL /*static, unused*/, L_144, L_145, L_146, ((int32_t)il2cpp_codegen_add((int32_t)L_147, (int32_t)1)), /*hidden argument*/NULL);
		}

IL_0394:
		{
			RuntimeObject* L_148 = V_14;
			NullCheck(L_148);
			bool L_149 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_148);
			if (L_149)
			{
				goto IL_030d;
			}
		}

IL_03a0:
		{
			IL2CPP_LEAVE(0x3B4, FINALLY_03a5);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_03a5;
	}

FINALLY_03a5:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_150 = V_14;
			if (!L_150)
			{
				goto IL_03b3;
			}
		}

IL_03ac:
		{
			RuntimeObject* L_151 = V_14;
			NullCheck(L_151);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_151);
		}

IL_03b3:
		{
			IL2CPP_END_FINALLY(933)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(933)
	{
		IL2CPP_JUMP_TBL(0x3B4, IL_03b4)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_03b4:
	{
		JsonWriter_t3570089748 * L_152 = ___writer1;
		NullCheck(L_152);
		JsonWriter_WriteObjectEnd_m2601038932(L_152, /*hidden argument*/NULL);
		return;
	}
}
// System.String LitJson.JsonMapper::ToJson(System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* JsonMapper_ToJson_m3416713044 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_ToJson_m3416713044_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	String_t* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_static_writer_lock_15();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
			JsonWriter_t3570089748 * L_2 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_static_writer_14();
			NullCheck(L_2);
			JsonWriter_Reset_m1767624851(L_2, /*hidden argument*/NULL);
			RuntimeObject * L_3 = ___obj0;
			JsonWriter_t3570089748 * L_4 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_static_writer_14();
			JsonMapper_WriteValue_m3142592044(NULL /*static, unused*/, L_3, L_4, (bool)1, 0, /*hidden argument*/NULL);
			JsonWriter_t3570089748 * L_5 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_static_writer_14();
			NullCheck(L_5);
			String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
			V_1 = L_6;
			IL2CPP_LEAVE(0x3F, FINALLY_0038);
		}

IL_0033:
		{
			; // IL_0033: leave IL_003f
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0038;
	}

FINALLY_0038:
	{ // begin finally (depth: 1)
		RuntimeObject * L_7 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(56)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(56)
	{
		IL2CPP_JUMP_TBL(0x3F, IL_003f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003f:
	{
		String_t* L_8 = V_1;
		return L_8;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__0(System.Object,LitJson.JsonWriter)
extern "C" IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Em__0_m209874195 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, JsonWriter_t3570089748 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseExportersU3Em__0_m209874195_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_t3570089748 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int32_t L_2 = Convert_ToInt32_m2505564049(NULL /*static, unused*/, ((*(uint8_t*)((uint8_t*)UnBox(L_1, Byte_t1134296376_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m2431965710(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__1(System.Object,LitJson.JsonWriter)
extern "C" IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Em__1_m3570407405 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, JsonWriter_t3570089748 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseExportersU3Em__1_m3570407405_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_t3570089748 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		String_t* L_2 = Convert_ToString_m1553911740(NULL /*static, unused*/, ((*(Il2CppChar*)((Il2CppChar*)UnBox(L_1, Char_t3634460470_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m3439490280(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__2(System.Object,LitJson.JsonWriter)
extern "C" IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Em__2_m600765210 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, JsonWriter_t3570089748 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseExportersU3Em__2_m600765210_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_t3570089748 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_datetime_format_1();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		String_t* L_3 = Convert_ToString_m41256750(NULL /*static, unused*/, ((*(DateTime_t3738529785 *)((DateTime_t3738529785 *)UnBox(L_1, DateTime_t3738529785_il2cpp_TypeInfo_var)))), L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m3439490280(L_0, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__3(System.Object,LitJson.JsonWriter)
extern "C" IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Em__3_m939732965 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, JsonWriter_t3570089748 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseExportersU3Em__3_m939732965_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_t3570089748 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		NullCheck(L_0);
		JsonWriter_Write_m934090602(L_0, ((*(Decimal_t2948259380 *)((Decimal_t2948259380 *)UnBox(L_1, Decimal_t2948259380_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__4(System.Object,LitJson.JsonWriter)
extern "C" IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Em__4_m266458088 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, JsonWriter_t3570089748 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseExportersU3Em__4_m266458088_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_t3570089748 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int32_t L_2 = Convert_ToInt32_m1405693041(NULL /*static, unused*/, ((*(int8_t*)((int8_t*)UnBox(L_1, SByte_t1669577662_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m2431965710(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__5(System.Object,LitJson.JsonWriter)
extern "C" IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Em__5_m3328515821 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, JsonWriter_t3570089748 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseExportersU3Em__5_m3328515821_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_t3570089748 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int32_t L_2 = Convert_ToInt32_m1085744762(NULL /*static, unused*/, ((*(int16_t*)((int16_t*)UnBox(L_1, Int16_t2552820387_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m2431965710(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__6(System.Object,LitJson.JsonWriter)
extern "C" IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Em__6_m312889811 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, JsonWriter_t3570089748 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseExportersU3Em__6_m312889811_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_t3570089748 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int32_t L_2 = Convert_ToInt32_m1987758323(NULL /*static, unused*/, ((*(uint16_t*)((uint16_t*)UnBox(L_1, UInt16_t2177724958_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m2431965710(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__7(System.Object,LitJson.JsonWriter)
extern "C" IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Em__7_m3877741659 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, JsonWriter_t3570089748 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseExportersU3Em__7_m3877741659_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_t3570089748 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		uint64_t L_2 = Convert_ToUInt64_m1745056470(NULL /*static, unused*/, ((*(uint32_t*)((uint32_t*)UnBox(L_1, UInt32_t2560061978_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m2044706063(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__8(System.Object,LitJson.JsonWriter)
extern "C" IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Em__8_m225163408 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, JsonWriter_t3570089748 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseExportersU3Em__8_m225163408_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_t3570089748 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		NullCheck(L_0);
		JsonWriter_Write_m2044706063(L_0, ((*(uint64_t*)((uint64_t*)UnBox(L_1, UInt64_t4134040092_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__9(System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Em__9_m3120562086 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseImportersU3Em__9_m3120562086_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		uint8_t L_1 = Convert_ToByte_m1734770211(NULL /*static, unused*/, ((*(int32_t*)((int32_t*)UnBox(L_0, Int32_t2950945753_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint8_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__A(System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Em__A_m3123255486 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseImportersU3Em__A_m3123255486_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		uint64_t L_1 = Convert_ToUInt64_m786726853(NULL /*static, unused*/, ((*(int32_t*)((int32_t*)UnBox(L_0, Int32_t2950945753_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint64_t L_2 = L_1;
		RuntimeObject * L_3 = Box(UInt64_t4134040092_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__B(System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Em__B_m3123219883 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseImportersU3Em__B_m3123219883_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int8_t L_1 = Convert_ToSByte_m2653418303(NULL /*static, unused*/, ((*(int32_t*)((int32_t*)UnBox(L_0, Int32_t2950945753_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		int8_t L_2 = L_1;
		RuntimeObject * L_3 = Box(SByte_t1669577662_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__C(System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Em__C_m3123314944 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseImportersU3Em__C_m3123314944_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int16_t L_1 = Convert_ToInt16_m4174308322(NULL /*static, unused*/, ((*(int32_t*)((int32_t*)UnBox(L_0, Int32_t2950945753_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		int16_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int16_t2552820387_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__D(System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Em__D_m3123024917 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseImportersU3Em__D_m3123024917_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		uint16_t L_1 = Convert_ToUInt16_m3515425647(NULL /*static, unused*/, ((*(int32_t*)((int32_t*)UnBox(L_0, Int32_t2950945753_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint16_t L_2 = L_1;
		RuntimeObject * L_3 = Box(UInt16_t2177724958_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__E(System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Em__E_m3123374154 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseImportersU3Em__E_m3123374154_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		uint32_t L_1 = Convert_ToUInt32_m2215525276(NULL /*static, unused*/, ((*(int32_t*)((int32_t*)UnBox(L_0, Int32_t2950945753_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(UInt32_t2560061978_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__F(System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Em__F_m3123338535 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseImportersU3Em__F_m3123338535_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		float L_1 = Convert_ToSingle_m3635698920(NULL /*static, unused*/, ((*(int32_t*)((int32_t*)UnBox(L_0, Int32_t2950945753_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		float L_2 = L_1;
		RuntimeObject * L_3 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__10(System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Em__10_m2509882514 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseImportersU3Em__10_m2509882514_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		double L_1 = Convert_ToDouble_m2924063577(NULL /*static, unused*/, ((*(int32_t*)((int32_t*)UnBox(L_0, Int32_t2950945753_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		double L_2 = L_1;
		RuntimeObject * L_3 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__11(System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Em__11_m613999264 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseImportersU3Em__11_m613999264_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		Decimal_t2948259380  L_1 = Convert_ToDecimal_m841368097(NULL /*static, unused*/, ((*(double*)((double*)UnBox(L_0, Double_t594665363_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		Decimal_t2948259380  L_2 = L_1;
		RuntimeObject * L_3 = Box(Decimal_t2948259380_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__12(System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Em__12_m1159193330 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseImportersU3Em__12_m1159193330_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		uint32_t L_1 = Convert_ToUInt32_m2194577773(NULL /*static, unused*/, ((*(int64_t*)((int64_t*)UnBox(L_0, Int64_t3736567304_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(UInt32_t2560061978_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__13(System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Em__13_m1427563268 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseImportersU3Em__13_m1427563268_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		Il2CppChar L_1 = Convert_ToChar_m85718752(NULL /*static, unused*/, ((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		Il2CppChar L_2 = L_1;
		RuntimeObject * L_3 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__14(System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Em__14_m1419109062 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseImportersU3Em__14_m1419109062_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_datetime_format_1();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_2 = Convert_ToDateTime_m3802186295(NULL /*static, unused*/, ((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)), L_1, /*hidden argument*/NULL);
		DateTime_t3738529785  L_3 = L_2;
		RuntimeObject * L_4 = Box(DateTime_t3738529785_il2cpp_TypeInfo_var, &L_3);
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
// System.Void LitJson.JsonWriter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void JsonWriter__ctor_m3035373812 (JsonWriter_t3570089748 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter__ctor_m3035373812_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		__this->set_inst_string_builder_7(L_0);
		StringBuilder_t * L_1 = __this->get_inst_string_builder_7();
		StringWriter_t802263757 * L_2 = (StringWriter_t802263757 *)il2cpp_codegen_object_new(StringWriter_t802263757_il2cpp_TypeInfo_var);
		StringWriter__ctor_m1259274362(L_2, L_1, /*hidden argument*/NULL);
		__this->set_writer_10(L_2);
		JsonWriter_Init_m1392617240(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::.cctor()
extern "C" IL2CPP_METHOD_ATTR void JsonWriter__cctor_m2709308669 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter__cctor_m2709308669_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatInfo_t435877138_il2cpp_TypeInfo_var);
		NumberFormatInfo_t435877138 * L_0 = NumberFormatInfo_get_InvariantInfo_m349577018(NULL /*static, unused*/, /*hidden argument*/NULL);
		((JsonWriter_t3570089748_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_t3570089748_il2cpp_TypeInfo_var))->set_number_format_0(L_0);
		return;
	}
}
// System.IO.TextWriter LitJson.JsonWriter::get_TextWriter()
extern "C" IL2CPP_METHOD_ATTR TextWriter_t3478189236 * JsonWriter_get_TextWriter_m3421010583 (JsonWriter_t3570089748 * __this, const RuntimeMethod* method)
{
	{
		TextWriter_t3478189236 * L_0 = __this->get_writer_10();
		return L_0;
	}
}
// System.Void LitJson.JsonWriter::DoValidation(LitJson.Condition)
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_DoValidation_m2027671802 (JsonWriter_t3570089748 * __this, int32_t ___cond0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_DoValidation_m2027671802_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		WriterContext_t1011093999 * L_0 = __this->get_context_1();
		NullCheck(L_0);
		bool L_1 = L_0->get_ExpectingValue_3();
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		WriterContext_t1011093999 * L_2 = __this->get_context_1();
		WriterContext_t1011093999 * L_3 = L_2;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_Count_0();
		NullCheck(L_3);
		L_3->set_Count_0(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
	}

IL_0023:
	{
		bool L_5 = __this->get_validate_9();
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		return;
	}

IL_002f:
	{
		bool L_6 = __this->get_has_reached_end_3();
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		JsonException_t3682484112 * L_7 = (JsonException_t3682484112 *)il2cpp_codegen_object_new(JsonException_t3682484112_il2cpp_TypeInfo_var);
		JsonException__ctor_m2214533437(L_7, _stringLiteral3717129058, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7,JsonWriter_DoValidation_m2027671802_RuntimeMethod_var);
	}

IL_0045:
	{
		int32_t L_8 = ___cond0;
		V_0 = L_8;
		int32_t L_9 = V_0;
		switch (L_9)
		{
			case 0:
			{
				goto IL_0066;
			}
			case 1:
			{
				goto IL_0086;
			}
			case 2:
			{
				goto IL_00b6;
			}
			case 3:
			{
				goto IL_00e6;
			}
			case 4:
			{
				goto IL_0116;
			}
		}
	}
	{
		goto IL_0156;
	}

IL_0066:
	{
		WriterContext_t1011093999 * L_10 = __this->get_context_1();
		NullCheck(L_10);
		bool L_11 = L_10->get_InArray_1();
		if (L_11)
		{
			goto IL_0081;
		}
	}
	{
		JsonException_t3682484112 * L_12 = (JsonException_t3682484112 *)il2cpp_codegen_object_new(JsonException_t3682484112_il2cpp_TypeInfo_var);
		JsonException__ctor_m2214533437(L_12, _stringLiteral4103647921, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12,JsonWriter_DoValidation_m2027671802_RuntimeMethod_var);
	}

IL_0081:
	{
		goto IL_0156;
	}

IL_0086:
	{
		WriterContext_t1011093999 * L_13 = __this->get_context_1();
		NullCheck(L_13);
		bool L_14 = L_13->get_InObject_2();
		if (!L_14)
		{
			goto IL_00a6;
		}
	}
	{
		WriterContext_t1011093999 * L_15 = __this->get_context_1();
		NullCheck(L_15);
		bool L_16 = L_15->get_ExpectingValue_3();
		if (!L_16)
		{
			goto IL_00b1;
		}
	}

IL_00a6:
	{
		JsonException_t3682484112 * L_17 = (JsonException_t3682484112 *)il2cpp_codegen_object_new(JsonException_t3682484112_il2cpp_TypeInfo_var);
		JsonException__ctor_m2214533437(L_17, _stringLiteral1740842079, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17,JsonWriter_DoValidation_m2027671802_RuntimeMethod_var);
	}

IL_00b1:
	{
		goto IL_0156;
	}

IL_00b6:
	{
		WriterContext_t1011093999 * L_18 = __this->get_context_1();
		NullCheck(L_18);
		bool L_19 = L_18->get_InObject_2();
		if (!L_19)
		{
			goto IL_00e1;
		}
	}
	{
		WriterContext_t1011093999 * L_20 = __this->get_context_1();
		NullCheck(L_20);
		bool L_21 = L_20->get_ExpectingValue_3();
		if (L_21)
		{
			goto IL_00e1;
		}
	}
	{
		JsonException_t3682484112 * L_22 = (JsonException_t3682484112 *)il2cpp_codegen_object_new(JsonException_t3682484112_il2cpp_TypeInfo_var);
		JsonException__ctor_m2214533437(L_22, _stringLiteral2856579791, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22,JsonWriter_DoValidation_m2027671802_RuntimeMethod_var);
	}

IL_00e1:
	{
		goto IL_0156;
	}

IL_00e6:
	{
		WriterContext_t1011093999 * L_23 = __this->get_context_1();
		NullCheck(L_23);
		bool L_24 = L_23->get_InObject_2();
		if (!L_24)
		{
			goto IL_0106;
		}
	}
	{
		WriterContext_t1011093999 * L_25 = __this->get_context_1();
		NullCheck(L_25);
		bool L_26 = L_25->get_ExpectingValue_3();
		if (!L_26)
		{
			goto IL_0111;
		}
	}

IL_0106:
	{
		JsonException_t3682484112 * L_27 = (JsonException_t3682484112 *)il2cpp_codegen_object_new(JsonException_t3682484112_il2cpp_TypeInfo_var);
		JsonException__ctor_m2214533437(L_27, _stringLiteral393113856, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27,JsonWriter_DoValidation_m2027671802_RuntimeMethod_var);
	}

IL_0111:
	{
		goto IL_0156;
	}

IL_0116:
	{
		WriterContext_t1011093999 * L_28 = __this->get_context_1();
		NullCheck(L_28);
		bool L_29 = L_28->get_InArray_1();
		if (L_29)
		{
			goto IL_0151;
		}
	}
	{
		WriterContext_t1011093999 * L_30 = __this->get_context_1();
		NullCheck(L_30);
		bool L_31 = L_30->get_InObject_2();
		if (!L_31)
		{
			goto IL_0146;
		}
	}
	{
		WriterContext_t1011093999 * L_32 = __this->get_context_1();
		NullCheck(L_32);
		bool L_33 = L_32->get_ExpectingValue_3();
		if (L_33)
		{
			goto IL_0151;
		}
	}

IL_0146:
	{
		JsonException_t3682484112 * L_34 = (JsonException_t3682484112 *)il2cpp_codegen_object_new(JsonException_t3682484112_il2cpp_TypeInfo_var);
		JsonException__ctor_m2214533437(L_34, _stringLiteral4135352181, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34,JsonWriter_DoValidation_m2027671802_RuntimeMethod_var);
	}

IL_0151:
	{
		goto IL_0156;
	}

IL_0156:
	{
		return;
	}
}
// System.Void LitJson.JsonWriter::Init()
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_Init_m1392617240 (JsonWriter_t3570089748 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Init_m1392617240_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_has_reached_end_3((bool)0);
		__this->set_hex_seq_4(((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)4)));
		__this->set_indentation_5(0);
		__this->set_indent_value_6(4);
		__this->set_pretty_print_8((bool)0);
		__this->set_validate_9((bool)1);
		Stack_1_t1854483454 * L_0 = (Stack_1_t1854483454 *)il2cpp_codegen_object_new(Stack_1_t1854483454_il2cpp_TypeInfo_var);
		Stack_1__ctor_m227092194(L_0, /*hidden argument*/Stack_1__ctor_m227092194_RuntimeMethod_var);
		__this->set_ctx_stack_2(L_0);
		WriterContext_t1011093999 * L_1 = (WriterContext_t1011093999 *)il2cpp_codegen_object_new(WriterContext_t1011093999_il2cpp_TypeInfo_var);
		WriterContext__ctor_m2317705773(L_1, /*hidden argument*/NULL);
		__this->set_context_1(L_1);
		Stack_1_t1854483454 * L_2 = __this->get_ctx_stack_2();
		WriterContext_t1011093999 * L_3 = __this->get_context_1();
		NullCheck(L_2);
		Stack_1_Push_m1814405731(L_2, L_3, /*hidden argument*/Stack_1_Push_m1814405731_RuntimeMethod_var);
		return;
	}
}
// System.Void LitJson.JsonWriter::Indent()
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_Indent_m206263886 (JsonWriter_t3570089748 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_pretty_print_8();
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = __this->get_indentation_5();
		int32_t L_2 = __this->get_indent_value_6();
		__this->set_indentation_5(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2)));
	}

IL_001e:
	{
		return;
	}
}
// System.Void LitJson.JsonWriter::Put(System.String)
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_Put_m2154223978 (JsonWriter_t3570089748 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		bool L_0 = __this->get_pretty_print_8();
		if (!L_0)
		{
			goto IL_003f;
		}
	}
	{
		WriterContext_t1011093999 * L_1 = __this->get_context_1();
		NullCheck(L_1);
		bool L_2 = L_1->get_ExpectingValue_3();
		if (L_2)
		{
			goto IL_003f;
		}
	}
	{
		V_0 = 0;
		goto IL_0033;
	}

IL_0022:
	{
		TextWriter_t3478189236 * L_3 = __this->get_writer_10();
		NullCheck(L_3);
		VirtActionInvoker1< Il2CppChar >::Invoke(8 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_3, ((int32_t)32));
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0033:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = __this->get_indentation_5();
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0022;
		}
	}

IL_003f:
	{
		TextWriter_t3478189236 * L_7 = __this->get_writer_10();
		String_t* L_8 = ___str0;
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.String) */, L_7, L_8);
		return;
	}
}
// System.Void LitJson.JsonWriter::PutNewline()
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_PutNewline_m2576790467 (JsonWriter_t3570089748 * __this, const RuntimeMethod* method)
{
	{
		JsonWriter_PutNewline_m1383209577(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::PutNewline(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_PutNewline_m1383209577 (JsonWriter_t3570089748 * __this, bool ___add_comma0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___add_comma0;
		if (!L_0)
		{
			goto IL_0034;
		}
	}
	{
		WriterContext_t1011093999 * L_1 = __this->get_context_1();
		NullCheck(L_1);
		bool L_2 = L_1->get_ExpectingValue_3();
		if (L_2)
		{
			goto IL_0034;
		}
	}
	{
		WriterContext_t1011093999 * L_3 = __this->get_context_1();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_Count_0();
		if ((((int32_t)L_4) <= ((int32_t)1)))
		{
			goto IL_0034;
		}
	}
	{
		TextWriter_t3478189236 * L_5 = __this->get_writer_10();
		NullCheck(L_5);
		VirtActionInvoker1< Il2CppChar >::Invoke(8 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_5, ((int32_t)44));
	}

IL_0034:
	{
		bool L_6 = __this->get_pretty_print_8();
		if (!L_6)
		{
			goto IL_005c;
		}
	}
	{
		WriterContext_t1011093999 * L_7 = __this->get_context_1();
		NullCheck(L_7);
		bool L_8 = L_7->get_ExpectingValue_3();
		if (L_8)
		{
			goto IL_005c;
		}
	}
	{
		TextWriter_t3478189236 * L_9 = __this->get_writer_10();
		NullCheck(L_9);
		VirtActionInvoker1< Il2CppChar >::Invoke(8 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_9, ((int32_t)10));
	}

IL_005c:
	{
		return;
	}
}
// System.Void LitJson.JsonWriter::PutString(System.String)
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_PutString_m890241341 (JsonWriter_t3570089748 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_PutString_m890241341_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		JsonWriter_Put_m2154223978(__this, L_0, /*hidden argument*/NULL);
		TextWriter_t3478189236 * L_1 = __this->get_writer_10();
		NullCheck(L_1);
		VirtActionInvoker1< Il2CppChar >::Invoke(8 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_1, ((int32_t)34));
		TextWriter_t3478189236 * L_2 = __this->get_writer_10();
		String_t* L_3 = ___str0;
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.String) */, L_2, L_3);
		TextWriter_t3478189236 * L_4 = __this->get_writer_10();
		NullCheck(L_4);
		VirtActionInvoker1< Il2CppChar >::Invoke(8 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_4, ((int32_t)34));
		return;
	}
}
// System.Void LitJson.JsonWriter::Unindent()
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_Unindent_m134443177 (JsonWriter_t3570089748 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_pretty_print_8();
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = __this->get_indentation_5();
		int32_t L_2 = __this->get_indent_value_6();
		__this->set_indentation_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2)));
	}

IL_001e:
	{
		return;
	}
}
// System.String LitJson.JsonWriter::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* JsonWriter_ToString_m1507950332 (JsonWriter_t3570089748 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_ToString_m1507950332_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t * L_0 = __this->get_inst_string_builder_7();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_1;
	}

IL_0011:
	{
		StringBuilder_t * L_2 = __this->get_inst_string_builder_7();
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		return L_3;
	}
}
// System.Void LitJson.JsonWriter::Reset()
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_Reset_m1767624851 (JsonWriter_t3570089748 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Reset_m1767624851_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_has_reached_end_3((bool)0);
		Stack_1_t1854483454 * L_0 = __this->get_ctx_stack_2();
		NullCheck(L_0);
		Stack_1_Clear_m1384768577(L_0, /*hidden argument*/Stack_1_Clear_m1384768577_RuntimeMethod_var);
		WriterContext_t1011093999 * L_1 = (WriterContext_t1011093999 *)il2cpp_codegen_object_new(WriterContext_t1011093999_il2cpp_TypeInfo_var);
		WriterContext__ctor_m2317705773(L_1, /*hidden argument*/NULL);
		__this->set_context_1(L_1);
		Stack_1_t1854483454 * L_2 = __this->get_ctx_stack_2();
		WriterContext_t1011093999 * L_3 = __this->get_context_1();
		NullCheck(L_2);
		Stack_1_Push_m1814405731(L_2, L_3, /*hidden argument*/Stack_1_Push_m1814405731_RuntimeMethod_var);
		StringBuilder_t * L_4 = __this->get_inst_string_builder_7();
		if (!L_4)
		{
			goto IL_0051;
		}
	}
	{
		StringBuilder_t * L_5 = __this->get_inst_string_builder_7();
		StringBuilder_t * L_6 = __this->get_inst_string_builder_7();
		NullCheck(L_6);
		int32_t L_7 = StringBuilder_get_Length_m3238060835(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		StringBuilder_Remove_m940064945(L_5, 0, L_7, /*hidden argument*/NULL);
	}

IL_0051:
	{
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_Write_m338324825 (JsonWriter_t3570089748 * __this, bool ___boolean0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Write_m338324825_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JsonWriter_t3570089748 * G_B2_0 = NULL;
	JsonWriter_t3570089748 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	JsonWriter_t3570089748 * G_B3_1 = NULL;
	{
		JsonWriter_DoValidation_m2027671802(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m2576790467(__this, /*hidden argument*/NULL);
		bool L_0 = ___boolean0;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_001e;
		}
	}
	{
		G_B3_0 = _stringLiteral4002445229;
		G_B3_1 = G_B1_0;
		goto IL_0023;
	}

IL_001e:
	{
		G_B3_0 = _stringLiteral3875954633;
		G_B3_1 = G_B2_0;
	}

IL_0023:
	{
		NullCheck(G_B3_1);
		JsonWriter_Put_m2154223978(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		WriterContext_t1011093999 * L_1 = __this->get_context_1();
		NullCheck(L_1);
		L_1->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Decimal)
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_Write_m934090602 (JsonWriter_t3570089748 * __this, Decimal_t2948259380  ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Write_m934090602_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m2027671802(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m2576790467(__this, /*hidden argument*/NULL);
		Decimal_t2948259380  L_0 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_t3570089748_il2cpp_TypeInfo_var);
		NumberFormatInfo_t435877138 * L_1 = ((JsonWriter_t3570089748_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_t3570089748_il2cpp_TypeInfo_var))->get_number_format_0();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		String_t* L_2 = Convert_ToString_m3734943936(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		JsonWriter_Put_m2154223978(__this, L_2, /*hidden argument*/NULL);
		WriterContext_t1011093999 * L_3 = __this->get_context_1();
		NullCheck(L_3);
		L_3->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Double)
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_Write_m1904563146 (JsonWriter_t3570089748 * __this, double ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Write_m1904563146_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		JsonWriter_DoValidation_m2027671802(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m2576790467(__this, /*hidden argument*/NULL);
		double L_0 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_t3570089748_il2cpp_TypeInfo_var);
		NumberFormatInfo_t435877138 * L_1 = ((JsonWriter_t3570089748_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_t3570089748_il2cpp_TypeInfo_var))->get_number_format_0();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		String_t* L_2 = Convert_ToString_m1282703378(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		JsonWriter_Put_m2154223978(__this, L_3, /*hidden argument*/NULL);
		String_t* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = String_IndexOf_m363431711(L_4, ((int32_t)46), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = String_IndexOf_m363431711(L_6, ((int32_t)69), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)(-1)))))
		{
			goto IL_004c;
		}
	}
	{
		TextWriter_t3478189236 * L_8 = __this->get_writer_10();
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.String) */, L_8, _stringLiteral3451565954);
	}

IL_004c:
	{
		WriterContext_t1011093999 * L_9 = __this->get_context_1();
		NullCheck(L_9);
		L_9->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_Write_m2431965710 (JsonWriter_t3570089748 * __this, int32_t ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Write_m2431965710_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m2027671802(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m2576790467(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_t3570089748_il2cpp_TypeInfo_var);
		NumberFormatInfo_t435877138 * L_1 = ((JsonWriter_t3570089748_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_t3570089748_il2cpp_TypeInfo_var))->get_number_format_0();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		String_t* L_2 = Convert_ToString_m2614817407(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		JsonWriter_Put_m2154223978(__this, L_2, /*hidden argument*/NULL);
		WriterContext_t1011093999 * L_3 = __this->get_context_1();
		NullCheck(L_3);
		L_3->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_Write_m2431572489 (JsonWriter_t3570089748 * __this, int64_t ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Write_m2431572489_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m2027671802(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m2576790467(__this, /*hidden argument*/NULL);
		int64_t L_0 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_t3570089748_il2cpp_TypeInfo_var);
		NumberFormatInfo_t435877138 * L_1 = ((JsonWriter_t3570089748_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_t3570089748_il2cpp_TypeInfo_var))->get_number_format_0();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		String_t* L_2 = Convert_ToString_m239190601(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		JsonWriter_Put_m2154223978(__this, L_2, /*hidden argument*/NULL);
		WriterContext_t1011093999 * L_3 = __this->get_context_1();
		NullCheck(L_3);
		L_3->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.String)
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_Write_m3439490280 (JsonWriter_t3570089748 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Write_m3439490280_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m2027671802(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m2576790467(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___str0;
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		JsonWriter_Put_m2154223978(__this, _stringLiteral1202628576, /*hidden argument*/NULL);
		goto IL_002a;
	}

IL_0023:
	{
		String_t* L_1 = ___str0;
		JsonWriter_PutString_m890241341(__this, L_1, /*hidden argument*/NULL);
	}

IL_002a:
	{
		WriterContext_t1011093999 * L_2 = __this->get_context_1();
		NullCheck(L_2);
		L_2->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_Write_m2044706063 (JsonWriter_t3570089748 * __this, uint64_t ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Write_m2044706063_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m2027671802(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m2576790467(__this, /*hidden argument*/NULL);
		uint64_t L_0 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_t3570089748_il2cpp_TypeInfo_var);
		NumberFormatInfo_t435877138 * L_1 = ((JsonWriter_t3570089748_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_t3570089748_il2cpp_TypeInfo_var))->get_number_format_0();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		String_t* L_2 = Convert_ToString_m301771913(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		JsonWriter_Put_m2154223978(__this, L_2, /*hidden argument*/NULL);
		WriterContext_t1011093999 * L_3 = __this->get_context_1();
		NullCheck(L_3);
		L_3->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::WriteArrayEnd()
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_WriteArrayEnd_m3257408064 (JsonWriter_t3570089748 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_WriteArrayEnd_m3257408064_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m2027671802(__this, 0, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m1383209577(__this, (bool)0, /*hidden argument*/NULL);
		Stack_1_t1854483454 * L_0 = __this->get_ctx_stack_2();
		NullCheck(L_0);
		Stack_1_Pop_m3762211336(L_0, /*hidden argument*/Stack_1_Pop_m3762211336_RuntimeMethod_var);
		Stack_1_t1854483454 * L_1 = __this->get_ctx_stack_2();
		NullCheck(L_1);
		int32_t L_2 = Stack_1_get_Count_m3119578031(L_1, /*hidden argument*/Stack_1_get_Count_m3119578031_RuntimeMethod_var);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		__this->set_has_reached_end_3((bool)1);
		goto IL_0054;
	}

IL_0037:
	{
		Stack_1_t1854483454 * L_3 = __this->get_ctx_stack_2();
		NullCheck(L_3);
		WriterContext_t1011093999 * L_4 = Stack_1_Peek_m3227997562(L_3, /*hidden argument*/Stack_1_Peek_m3227997562_RuntimeMethod_var);
		__this->set_context_1(L_4);
		WriterContext_t1011093999 * L_5 = __this->get_context_1();
		NullCheck(L_5);
		L_5->set_ExpectingValue_3((bool)0);
	}

IL_0054:
	{
		JsonWriter_Unindent_m134443177(__this, /*hidden argument*/NULL);
		JsonWriter_Put_m2154223978(__this, _stringLiteral3452614643, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::WriteArrayStart()
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_WriteArrayStart_m2705523021 (JsonWriter_t3570089748 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_WriteArrayStart_m2705523021_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m2027671802(__this, 2, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m2576790467(__this, /*hidden argument*/NULL);
		JsonWriter_Put_m2154223978(__this, _stringLiteral3452614645, /*hidden argument*/NULL);
		WriterContext_t1011093999 * L_0 = (WriterContext_t1011093999 *)il2cpp_codegen_object_new(WriterContext_t1011093999_il2cpp_TypeInfo_var);
		WriterContext__ctor_m2317705773(L_0, /*hidden argument*/NULL);
		__this->set_context_1(L_0);
		WriterContext_t1011093999 * L_1 = __this->get_context_1();
		NullCheck(L_1);
		L_1->set_InArray_1((bool)1);
		Stack_1_t1854483454 * L_2 = __this->get_ctx_stack_2();
		WriterContext_t1011093999 * L_3 = __this->get_context_1();
		NullCheck(L_2);
		Stack_1_Push_m1814405731(L_2, L_3, /*hidden argument*/Stack_1_Push_m1814405731_RuntimeMethod_var);
		JsonWriter_Indent_m206263886(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::WriteObjectEnd()
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_WriteObjectEnd_m2601038932 (JsonWriter_t3570089748 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_WriteObjectEnd_m2601038932_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m2027671802(__this, 1, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m1383209577(__this, (bool)0, /*hidden argument*/NULL);
		Stack_1_t1854483454 * L_0 = __this->get_ctx_stack_2();
		NullCheck(L_0);
		Stack_1_Pop_m3762211336(L_0, /*hidden argument*/Stack_1_Pop_m3762211336_RuntimeMethod_var);
		Stack_1_t1854483454 * L_1 = __this->get_ctx_stack_2();
		NullCheck(L_1);
		int32_t L_2 = Stack_1_get_Count_m3119578031(L_1, /*hidden argument*/Stack_1_get_Count_m3119578031_RuntimeMethod_var);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		__this->set_has_reached_end_3((bool)1);
		goto IL_0054;
	}

IL_0037:
	{
		Stack_1_t1854483454 * L_3 = __this->get_ctx_stack_2();
		NullCheck(L_3);
		WriterContext_t1011093999 * L_4 = Stack_1_Peek_m3227997562(L_3, /*hidden argument*/Stack_1_Peek_m3227997562_RuntimeMethod_var);
		__this->set_context_1(L_4);
		WriterContext_t1011093999 * L_5 = __this->get_context_1();
		NullCheck(L_5);
		L_5->set_ExpectingValue_3((bool)0);
	}

IL_0054:
	{
		JsonWriter_Unindent_m134443177(__this, /*hidden argument*/NULL);
		JsonWriter_Put_m2154223978(__this, _stringLiteral3452614611, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::WriteObjectStart()
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_WriteObjectStart_m3619548051 (JsonWriter_t3570089748 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_WriteObjectStart_m3619548051_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m2027671802(__this, 2, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m2576790467(__this, /*hidden argument*/NULL);
		JsonWriter_Put_m2154223978(__this, _stringLiteral3452614613, /*hidden argument*/NULL);
		WriterContext_t1011093999 * L_0 = (WriterContext_t1011093999 *)il2cpp_codegen_object_new(WriterContext_t1011093999_il2cpp_TypeInfo_var);
		WriterContext__ctor_m2317705773(L_0, /*hidden argument*/NULL);
		__this->set_context_1(L_0);
		WriterContext_t1011093999 * L_1 = __this->get_context_1();
		NullCheck(L_1);
		L_1->set_InObject_2((bool)1);
		Stack_1_t1854483454 * L_2 = __this->get_ctx_stack_2();
		WriterContext_t1011093999 * L_3 = __this->get_context_1();
		NullCheck(L_2);
		Stack_1_Push_m1814405731(L_2, L_3, /*hidden argument*/Stack_1_Push_m1814405731_RuntimeMethod_var);
		JsonWriter_Indent_m206263886(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::WritePropertyName(System.String)
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_WritePropertyName_m4239827789 (JsonWriter_t3570089748 * __this, String_t* ___property_name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_WritePropertyName_m4239827789_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		JsonWriter_DoValidation_m2027671802(__this, 3, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m2576790467(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___property_name0;
		JsonWriter_PutString_m890241341(__this, L_0, /*hidden argument*/NULL);
		bool L_1 = __this->get_pretty_print_8();
		if (!L_1)
		{
			goto IL_008b;
		}
	}
	{
		String_t* L_2 = ___property_name0;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m3847582255(L_2, /*hidden argument*/NULL);
		WriterContext_t1011093999 * L_4 = __this->get_context_1();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_Padding_4();
		if ((((int32_t)L_3) <= ((int32_t)L_5)))
		{
			goto IL_0046;
		}
	}
	{
		WriterContext_t1011093999 * L_6 = __this->get_context_1();
		String_t* L_7 = ___property_name0;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m3847582255(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->set_Padding_4(L_8);
	}

IL_0046:
	{
		WriterContext_t1011093999 * L_9 = __this->get_context_1();
		NullCheck(L_9);
		int32_t L_10 = L_9->get_Padding_4();
		String_t* L_11 = ___property_name0;
		NullCheck(L_11);
		int32_t L_12 = String_get_Length_m3847582255(L_11, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)L_12));
		goto IL_006f;
	}

IL_005e:
	{
		TextWriter_t3478189236 * L_13 = __this->get_writer_10();
		NullCheck(L_13);
		VirtActionInvoker1< Il2CppChar >::Invoke(8 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_13, ((int32_t)32));
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1));
	}

IL_006f:
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) >= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		TextWriter_t3478189236 * L_16 = __this->get_writer_10();
		NullCheck(L_16);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.String) */, L_16, _stringLiteral3450517398);
		goto IL_0098;
	}

IL_008b:
	{
		TextWriter_t3478189236 * L_17 = __this->get_writer_10();
		NullCheck(L_17);
		VirtActionInvoker1< Il2CppChar >::Invoke(8 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_17, ((int32_t)58));
	}

IL_0098:
	{
		WriterContext_t1011093999 * L_18 = __this->get_context_1();
		NullCheck(L_18);
		L_18->set_ExpectingValue_3((bool)1);
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
// Conversion methods for marshalling of: LitJson.ObjectMetadata
extern "C" void ObjectMetadata_t3566284522_marshal_pinvoke(const ObjectMetadata_t3566284522& unmarshaled, ObjectMetadata_t3566284522_marshaled_pinvoke& marshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ObjectMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception,NULL);
}
extern "C" void ObjectMetadata_t3566284522_marshal_pinvoke_back(const ObjectMetadata_t3566284522_marshaled_pinvoke& marshaled, ObjectMetadata_t3566284522& unmarshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ObjectMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception,NULL);
}
// Conversion method for clean up from marshalling of: LitJson.ObjectMetadata
extern "C" void ObjectMetadata_t3566284522_marshal_pinvoke_cleanup(ObjectMetadata_t3566284522_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LitJson.ObjectMetadata
extern "C" void ObjectMetadata_t3566284522_marshal_com(const ObjectMetadata_t3566284522& unmarshaled, ObjectMetadata_t3566284522_marshaled_com& marshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ObjectMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception,NULL);
}
extern "C" void ObjectMetadata_t3566284522_marshal_com_back(const ObjectMetadata_t3566284522_marshaled_com& marshaled, ObjectMetadata_t3566284522& unmarshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ObjectMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception,NULL);
}
// Conversion method for clean up from marshalling of: LitJson.ObjectMetadata
extern "C" void ObjectMetadata_t3566284522_marshal_com_cleanup(ObjectMetadata_t3566284522_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: LitJson.PropertyMetadata
extern "C" void PropertyMetadata_t3727440473_marshal_pinvoke(const PropertyMetadata_t3727440473& unmarshaled, PropertyMetadata_t3727440473_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Info_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Info' of type 'PropertyMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Info_0Exception,NULL);
}
extern "C" void PropertyMetadata_t3727440473_marshal_pinvoke_back(const PropertyMetadata_t3727440473_marshaled_pinvoke& marshaled, PropertyMetadata_t3727440473& unmarshaled)
{
	Exception_t* ___Info_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Info' of type 'PropertyMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Info_0Exception,NULL);
}
// Conversion method for clean up from marshalling of: LitJson.PropertyMetadata
extern "C" void PropertyMetadata_t3727440473_marshal_pinvoke_cleanup(PropertyMetadata_t3727440473_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LitJson.PropertyMetadata
extern "C" void PropertyMetadata_t3727440473_marshal_com(const PropertyMetadata_t3727440473& unmarshaled, PropertyMetadata_t3727440473_marshaled_com& marshaled)
{
	Exception_t* ___Info_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Info' of type 'PropertyMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Info_0Exception,NULL);
}
extern "C" void PropertyMetadata_t3727440473_marshal_com_back(const PropertyMetadata_t3727440473_marshaled_com& marshaled, PropertyMetadata_t3727440473& unmarshaled)
{
	Exception_t* ___Info_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Info' of type 'PropertyMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Info_0Exception,NULL);
}
// Conversion method for clean up from marshalling of: LitJson.PropertyMetadata
extern "C" void PropertyMetadata_t3727440473_marshal_com_cleanup(PropertyMetadata_t3727440473_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.WriterContext::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WriterContext__ctor_m2317705773 (WriterContext_t1011093999 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
