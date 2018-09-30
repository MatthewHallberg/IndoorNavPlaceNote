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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// Mono.Security.ASN1
struct ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA;
// Mono.Security.X509.Extensions.BasicConstraintsExtension
struct BasicConstraintsExtension_t519E68578F3BFB9B3588596B24BF4B729D26494E;
// Mono.Security.X509.X509Certificate
struct X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4;
// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_t73F2B8AEDEF6F187870E8A2750847EEE931E16D3;
// Mono.Security.X509.X509Chain
struct X509Chain_t4EEB0B913205B0D6B063AFB393AFA17BEFCA3D67;
// Mono.Security.X509.X509Crl
struct X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_tBF2584E52778416F84EA34B6F693BF1BED81EFF1;
// Mono.Security.X509.X509Extension
struct X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t755DFCBDA8823D949578ED886BAFA4BF87706991;
// Mono.Security.X509.X509Store
struct X509Store_t754E7C7E6C15F74AA8E7A3F0695EE7E1AD0C4302;
// Mono.Security.X509.X509Stores
struct X509Stores_t2DA9540B452CEB83E67BC6CDF9B0346FA2B06C28;
// System.ArgumentException
struct ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60;
// System.ArgumentNullException
struct ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4;
// System.Byte
struct Byte_t4C3393E6E7EAD06B53234C05564190D9A2D7B149;
// System.Byte[]
struct ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8;
// System.Char[]
struct CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744;
// System.Collections.ArrayList
struct ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F;
// System.Collections.CollectionBase
struct CollectionBase_tC3F24120B23471E7FDEE72107D1D541E6456744F;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.DictionaryEntry>
struct Transform_1_t65686AED861AC45494753EDD54F3AFAB55E25448;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t3BE3B3611169A9445796DD06948526DEEF990F44;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t862850E7A796A22A359C413FF4367484A404CAD2;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_tA58A56CD6B5AD6B2DF5F4934A46CEC9F681B71AD;
// System.Collections.Hashtable
struct Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82;
// System.Collections.IDictionary
struct IDictionary_tD35B9437F08BE98D1E0B295CC73C48E168CAB316;
// System.Collections.IEnumerator
struct IEnumerator_t5F4AD85C6EA424A50584F741049EA645DBD8EEFC;
// System.Double
struct Double_t2011D65DAF7D1FCBE71DD4CBDFA69A8F24643159;
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
// System.IFormatProvider
struct IFormatProvider_t3BAF59CC620257B8C99F911BC233EF7CC5480D67;
// System.IO.DirectoryInfo
struct DirectoryInfo_t376108E971037F9393AA9B6A2B4FCE48DBA258F3;
// System.IO.FileStream
struct FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4;
// System.Int32
struct Int32_tC16F64335CE8B56D99229DE94BB3A876ED55FE87;
// System.Int32[]
struct Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074;
// System.IntPtr[]
struct IntPtrU5BU5D_tB866BA24C91559CF299618E230043451CC7CF659;
// System.NotSupportedException
struct NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6;
// System.Object[]
struct ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t3C5F8BAEFAC94CF69694273ACCB6CB41355E0B5C;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_tCE2A08658EFEA671D977BC39FA246B4FC5092BB2;
// System.Security.Cryptography.CryptographicException
struct CryptographicException_tEBE52D8795404FE91A37B2662AED1CDF46CD3920;
// System.Security.Cryptography.DSA
struct DSA_tF8DC81D58B7A574DF51517FD242D76B4FC225808;
// System.Security.Cryptography.DSASignatureDeformatter
struct DSASignatureDeformatter_t0A3DF19E0A5E10BE91A0779BDF9723CBDE57B357;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t6A31A9B4CBC494EA9286D2A1097C6DC9BCE96CA0;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t131B7C0FEFAA71CAB587F57C7292E1ECE043913C;
// System.Security.Cryptography.RSA
struct RSA_t565B1E1F95589A0E37D0C66406CF730DC4A43051;
// System.Security.Cryptography.RSAPKCS1SignatureDeformatter
struct RSAPKCS1SignatureDeformatter_t386250AF7C86EA2F614086AA52825277DBEC3A3F;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.UInt16
struct UInt16_t1FF1E02102FB09D5656DF30E5299DD359E497E9B;
// System.Void
struct Void_tDB81A15FA2AB53E2401A76B745D215397B29F783;

extern RuntimeClass* ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_il2cpp_TypeInfo_var;
extern RuntimeClass* ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F_il2cpp_TypeInfo_var;
extern RuntimeClass* BasicConstraintsExtension_t519E68578F3BFB9B3588596B24BF4B729D26494E_il2cpp_TypeInfo_var;
extern RuntimeClass* ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8_il2cpp_TypeInfo_var;
extern RuntimeClass* Convert_t8A398E85B5FC90CA984E604BD3F65BD7B205D592_il2cpp_TypeInfo_var;
extern RuntimeClass* CryptographicException_tEBE52D8795404FE91A37B2662AED1CDF46CD3920_il2cpp_TypeInfo_var;
extern RuntimeClass* CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_il2cpp_TypeInfo_var;
extern RuntimeClass* DSASignatureDeformatter_t0A3DF19E0A5E10BE91A0779BDF9723CBDE57B357_il2cpp_TypeInfo_var;
extern RuntimeClass* DSA_tF8DC81D58B7A574DF51517FD242D76B4FC225808_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_tFD576810FF845F49C1CF8F06BEB759FCE2BC31B2_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_t0B11E371EB34DA6482976C09E2C231E9B32AB517_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t5F4AD85C6EA424A50584F741049EA645DBD8EEFC_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6_il2cpp_TypeInfo_var;
extern RuntimeClass* Path_t27AEEE0980E2C91F7F806BC8E9FC73A540BADC55_il2cpp_TypeInfo_var;
extern RuntimeClass* RSAPKCS1SignatureDeformatter_t386250AF7C86EA2F614086AA52825277DBEC3A3F_il2cpp_TypeInfo_var;
extern RuntimeClass* RSA_t565B1E1F95589A0E37D0C66406CF730DC4A43051_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern RuntimeClass* ServicePointManager_t26671C58FEC625E41B784B57AD46A0822DB68465_il2cpp_TypeInfo_var;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* X501_tE168FA15DF59DEE465AFDD39E5B8B51B857605F4_il2cpp_TypeInfo_var;
extern RuntimeClass* X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4_il2cpp_TypeInfo_var;
extern RuntimeClass* X509CertificateEnumerator_t73F2B8AEDEF6F187870E8A2750847EEE931E16D3_il2cpp_TypeInfo_var;
extern RuntimeClass* X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7_il2cpp_TypeInfo_var;
extern RuntimeClass* X509CrlEntry_tBF2584E52778416F84EA34B6F693BF1BED81EFF1_il2cpp_TypeInfo_var;
extern RuntimeClass* X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA_il2cpp_TypeInfo_var;
extern RuntimeClass* X509ExtensionCollection_t755DFCBDA8823D949578ED886BAFA4BF87706991_il2cpp_TypeInfo_var;
extern RuntimeClass* X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698_il2cpp_TypeInfo_var;
extern RuntimeClass* X509StoreManager_t84D6FAF6F4DB5D367306FC494991364A0752BDB7_il2cpp_TypeInfo_var;
extern RuntimeClass* X509Store_t754E7C7E6C15F74AA8E7A3F0695EE7E1AD0C4302_il2cpp_TypeInfo_var;
extern RuntimeClass* X509Stores_t2DA9540B452CEB83E67BC6CDF9B0346FA2B06C28_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral088FB1A4AB057F4FCF7D487006499060C7FE5773;
extern String_t* _stringLiteral099600A10A944114AAC406D136B625FB416DD779;
extern String_t* _stringLiteral0B48D5DF660D7EAE4D751FB0902C903EC767443B;
extern String_t* _stringLiteral2118C8699C55066293A0E34341B9953F6C1811BD;
extern String_t* _stringLiteral26E69388BB28F94E4154EB47125EC8A829CADFA8;
extern String_t* _stringLiteral33A579FFC0DCCBFF15BE01734EA4138EA4E7635C;
extern String_t* _stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727;
extern String_t* _stringLiteral468D0C6B0152E67FE0EF0DFE16DBD74A45A1DF41;
extern String_t* _stringLiteral5689F8FC0EDCCDA7299967EA621BBC7DE476ADF6;
extern String_t* _stringLiteral59A1DDCA00755DB9F2862A1E08F6E43387D48F8D;
extern String_t* _stringLiteral605F515DB23E613CEB4831C6EACE4C2B023EAEAB;
extern String_t* _stringLiteral69B85846222F763F537AAE189724E50D8A16971F;
extern String_t* _stringLiteral73C68A69A8FB0CBDA481680BDF7E86FE01482E98;
extern String_t* _stringLiteral7B152A24BBC8DB09B568453879784A9FBD2A9FFC;
extern String_t* _stringLiteral81D15B787B58E9D0C9E091EC2E37EECA9333608E;
extern String_t* _stringLiteral83BD2260257D398076A738813A94BD2F37D6F282;
extern String_t* _stringLiteral8575C679A021CCCB25530F1FFE2D4D78151A6C99;
extern String_t* _stringLiteral894E12D1523E99F051EEFC8EBA5BF874229F69A4;
extern String_t* _stringLiteral9F792B61D0EC544D91E7AFF34E2E99EE3CF2B313;
extern String_t* _stringLiteralA525CC8F7233FA9255909A03B5681A2DFA297927;
extern String_t* _stringLiteralB773BED04A48DE200B96981BB79467413A222066;
extern String_t* _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6;
extern String_t* _stringLiteralC276D29F33E8F3F411A0BAFB43D3E6BD00ECA48E;
extern String_t* _stringLiteralC7EB5BBC6C8481A27394D0B29BB892C16FF5D5B1;
extern String_t* _stringLiteralD013A00CC3B2473FDE9F7A61FDC9BFE531B1B6A3;
extern String_t* _stringLiteralE0C9035898DD52FC65C41454CEC9C4D2611BFB37;
extern String_t* _stringLiteralE1744A525099D9A53C0460EF9CB7AB0E4C4FC939;
extern String_t* _stringLiteralE2AFBBD128A879E540408CC7DA9AC8BF7F2D7610;
extern String_t* _stringLiteralEE617AA3C1633B88FA29FF8B4524F83330B4D16D;
extern String_t* _stringLiteralF32B67C7E26342AF42EFABC674D441DCA0A281C5;
extern String_t* _stringLiteralF3D7B63284337204E5B808210EB82D4A589B203A;
extern String_t* _stringLiteralF98961015A0AC393630F4EDA3749D644A716DA64;
extern const RuntimeMethod* Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m02F60CE92FF5819C471DE461A925C95B780AECAF_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m6FE5F177AC0E406A7D8E0ED92D2254062B8B62EF_RuntimeMethod_var;
extern const RuntimeMethod* X509CertificateCollection_AddRange_m2D89051B8F700AED39D1654110D928E5ED06A96D_RuntimeMethod_var;
extern const RuntimeMethod* X509CertificateCollection_Add_m1215D57A35803EA383A007725E9B2B0271369953_RuntimeMethod_var;
extern const RuntimeMethod* X509CertificateCollection_IndexOf_mDBAF9ADAFB8AC2D92C8B7C09A44A7F5BD2DE202E_RuntimeMethod_var;
extern const RuntimeMethod* X509Crl_GetCrlEntry_mD00D74973110486576343395CA6E9954FB051A05_RuntimeMethod_var;
extern const RuntimeMethod* X509Crl_GetCrlEntry_mDD0B13A867542B544FE7C196296706F2BCD4ED8A_RuntimeMethod_var;
extern const RuntimeMethod* X509Crl_GetHashName_mCC743DEE79A5849EDE108FEA2A94EFBE7964C08E_RuntimeMethod_var;
extern const RuntimeMethod* X509Crl_Parse_m17DC5BBF779F81775F51E1DA57EE55EBDD428A90_RuntimeMethod_var;
extern const RuntimeMethod* X509Crl_VerifySignature_m836823BA734D742977ECE9482E71BAF6493D9CBC_RuntimeMethod_var;
extern const RuntimeMethod* X509Crl_VerifySignature_mC83C7F97283D639F18457D2263680E8064D36785_RuntimeMethod_var;
extern const RuntimeMethod* X509Crl__ctor_mA021EA5191FE977762AA75753903A461E6DBD20D_RuntimeMethod_var;
extern const RuntimeMethod* X509ExtensionCollection_IndexOf_mE7EE0B9DB2BCF725135A744A266856A54C36CBEF_RuntimeMethod_var;
extern const RuntimeMethod* X509ExtensionCollection__ctor_mD6D256F8D16DA2083043F31DEB283D5D4B37F6BF_RuntimeMethod_var;
extern const RuntimeMethod* X509Extension__ctor_m749346817515F201EAA0C1C29360C85FA558E602_RuntimeMethod_var;
extern const RuntimeMethod* X509Extension__ctor_mBD6F41EB0B35B0B55E9D63FBEE7E731AA73F7B54_RuntimeMethod_var;
extern const RuntimeMethod* X509Store_CheckStore_m7DD54563E8D3962C20A05D247791DAF5C7E065D9_RuntimeMethod_var;
extern const RuntimeMethod* X509Store_Load_m9670C65801803A2C1812338DBA01EE5F3E4DC509_RuntimeMethod_var;
extern const RuntimeMethod* X509Stores_Open_m6C28A075110F4148C15755F071894119A360C838_RuntimeMethod_var;
extern const uint32_t X509CertificateCollection_AddRange_m2D89051B8F700AED39D1654110D928E5ED06A96D_MetadataUsageId;
extern const uint32_t X509CertificateCollection_Add_m1215D57A35803EA383A007725E9B2B0271369953_MetadataUsageId;
extern const uint32_t X509CertificateCollection_GetEnumerator_m72041E779CFB1AE2F67B292777BD9A89C7361756_MetadataUsageId;
extern const uint32_t X509CertificateCollection_IndexOf_mDBAF9ADAFB8AC2D92C8B7C09A44A7F5BD2DE202E_MetadataUsageId;
extern const uint32_t X509CertificateCollection_get_Item_m0977D3820DD709E9A089908E023E5E64583E27C1_MetadataUsageId;
extern const uint32_t X509CertificateEnumerator_MoveNext_m8F37FA272D0F2E22FE55815A8B631CFA7D091262_MetadataUsageId;
extern const uint32_t X509CertificateEnumerator_Reset_m1A86EDC2D33E8E33FF9881BCB7FB260A5BDA2F19_MetadataUsageId;
extern const uint32_t X509CertificateEnumerator_System_Collections_IEnumerator_MoveNext_mF6B4B0529C715F23A6CA6DD21DAC7D25727AB169_MetadataUsageId;
extern const uint32_t X509CertificateEnumerator_System_Collections_IEnumerator_Reset_mC77F2EA3D2D20DB176E9A7FC49B80AECE557942A_MetadataUsageId;
extern const uint32_t X509CertificateEnumerator_System_Collections_IEnumerator_get_Current_m503C3A04E409284038CDB846048AE9F7CB6300B2_MetadataUsageId;
extern const uint32_t X509CertificateEnumerator__ctor_m8013F739228FCDDEAFF9455191527582DB35FA01_MetadataUsageId;
extern const uint32_t X509CertificateEnumerator_get_Current_mFDFB0919E5D374ACA156602F6EACF50613C7F3BC_MetadataUsageId;
extern const uint32_t X509Chain_Build_m9E6519215516C91314663B6EACEACFEBF2B66611_MetadataUsageId;
extern const uint32_t X509Chain_FindCertificateParent_mD7DE692A61897D3091F4C7A9F1663ED9DAB5116A_MetadataUsageId;
extern const uint32_t X509Chain_FindCertificateRoot_mE58E326B32777852BA004E25E5B9DADB7CCDE4F7_MetadataUsageId;
extern const uint32_t X509Chain_IsParent_m9DE86CEF1E85378A482E85CC86E8B58D6C3D4AF8_MetadataUsageId;
extern const uint32_t X509Chain_IsValid_mB8090230AD1DF880D188DE4E37483C082D1E01B2_MetadataUsageId;
extern const uint32_t X509Chain__ctor_m1CEBAFB1BB50D79F5E6DC837BB274823FFCA40BA_MetadataUsageId;
extern const uint32_t X509Chain__ctor_mBB65549B629ED2E43FD24B4CB73B3F3A0776E5EB_MetadataUsageId;
extern const uint32_t X509Chain_get_TrustAnchors_m38E64354F9AC5B6EC1C0F1B95ED9A0F2AF87AF59_MetadataUsageId;
extern const uint32_t X509CrlEntry__ctor_m3A28575C3EB8FA74122CB79763993AB6596B8C5B_MetadataUsageId;
extern const uint32_t X509CrlEntry_get_SerialNumber_mA58F73A0C29131EFEF7EBEDE1D329257494B576E_MetadataUsageId;
extern const uint32_t X509Crl_GetCrlEntry_mD00D74973110486576343395CA6E9954FB051A05_MetadataUsageId;
extern const uint32_t X509Crl_GetCrlEntry_mDD0B13A867542B544FE7C196296706F2BCD4ED8A_MetadataUsageId;
extern const uint32_t X509Crl_GetHashName_mCC743DEE79A5849EDE108FEA2A94EFBE7964C08E_MetadataUsageId;
extern const uint32_t X509Crl_Parse_m17DC5BBF779F81775F51E1DA57EE55EBDD428A90_MetadataUsageId;
extern const uint32_t X509Crl_VerifySignature_m180CF72103AFD9411F2C3816241BB74B0C685B12_MetadataUsageId;
extern const uint32_t X509Crl_VerifySignature_m836823BA734D742977ECE9482E71BAF6493D9CBC_MetadataUsageId;
extern const uint32_t X509Crl_VerifySignature_mC83C7F97283D639F18457D2263680E8064D36785_MetadataUsageId;
extern const uint32_t X509Crl__ctor_mA021EA5191FE977762AA75753903A461E6DBD20D_MetadataUsageId;
extern const uint32_t X509Crl_get_Hash_m1D83A886FF1142852347FC1950BDFADBFAE68480_MetadataUsageId;
extern const uint32_t X509ExtensionCollection_IndexOf_mE7EE0B9DB2BCF725135A744A266856A54C36CBEF_MetadataUsageId;
extern const uint32_t X509ExtensionCollection__ctor_mD6D256F8D16DA2083043F31DEB283D5D4B37F6BF_MetadataUsageId;
extern const uint32_t X509ExtensionCollection_get_Item_mF9CB19EA43F26742A0414EA82D9B7E8F3D19B867_MetadataUsageId;
extern const uint32_t X509Extension_Equals_mF81477066424C49ABB4E3C70EFE5EF15E93DBDB6_MetadataUsageId;
extern const uint32_t X509Extension_ToString_m9352453B18C15C1B6E1FA3054FAC59F26FD95EB8_MetadataUsageId;
extern const uint32_t X509Extension_WriteLine_m1244F1ECEBCB55AD4259794195FEF5814994960A_MetadataUsageId;
extern const uint32_t X509Extension__ctor_m749346817515F201EAA0C1C29360C85FA558E602_MetadataUsageId;
extern const uint32_t X509Extension__ctor_mBD6F41EB0B35B0B55E9D63FBEE7E731AA73F7B54_MetadataUsageId;
extern const uint32_t X509StoreManager_get_CurrentUser_m3A5D6ACA99E9B270CF6F5B692212CE71D147CB39_MetadataUsageId;
extern const uint32_t X509StoreManager_get_LocalMachine_m6414713A649215CF8E62CA28B500C7A5DFF304CC_MetadataUsageId;
extern const uint32_t X509StoreManager_get_TrustedRootCertificates_m3F74D1403F745F5C8BD1AA02F273AD33B719618E_MetadataUsageId;
extern const uint32_t X509Store_BuildCertificatesCollection_mC2BC2E03E0CBAC10D7FD4A7A0F8FF1DF4E768DEE_MetadataUsageId;
extern const uint32_t X509Store_BuildCrlsCollection_mD10565154B2AFE1728E732C94FF2BB01973CFB59_MetadataUsageId;
extern const uint32_t X509Store_CheckStore_m7DD54563E8D3962C20A05D247791DAF5C7E065D9_MetadataUsageId;
extern const uint32_t X509Store_LoadCertificate_mB2B14099E478EF5D99C06EBFE458671379A34E79_MetadataUsageId;
extern const uint32_t X509Store_LoadCrl_m63A35C74345A3DF1A9728D6DF1C77FCB02056064_MetadataUsageId;
extern const uint32_t X509Store_Load_m9670C65801803A2C1812338DBA01EE5F3E4DC509_MetadataUsageId;
extern const uint32_t X509Store_get_Crls_m24CE11EF64C73629CA926FC818671BADE466DBB5_MetadataUsageId;
extern const uint32_t X509Stores_Open_m6C28A075110F4148C15755F071894119A360C838_MetadataUsageId;
extern const uint32_t X509Stores_get_TrustedRoot_mCFBE5DA6C6C0EAD5454C9575694DEF17C0C8A01A_MetadataUsageId;

struct ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8;
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
#ifndef ASN1_T21F71D5E42416849A26C9ACE043F386E7F03D7FA_H
#define ASN1_T21F71D5E42416849A26C9ACE043F386E7F03D7FA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.ASN1
struct  ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.ASN1::m_nTag
	uint8_t ___m_nTag_0;
	// System.Byte[] Mono.Security.ASN1::m_aValue
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___m_aValue_1;
	// System.Collections.ArrayList Mono.Security.ASN1::elist
	ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * ___elist_2;

public:
	inline static int32_t get_offset_of_m_nTag_0() { return static_cast<int32_t>(offsetof(ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA, ___m_nTag_0)); }
	inline uint8_t get_m_nTag_0() const { return ___m_nTag_0; }
	inline uint8_t* get_address_of_m_nTag_0() { return &___m_nTag_0; }
	inline void set_m_nTag_0(uint8_t value)
	{
		___m_nTag_0 = value;
	}

	inline static int32_t get_offset_of_m_aValue_1() { return static_cast<int32_t>(offsetof(ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA, ___m_aValue_1)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_m_aValue_1() const { return ___m_aValue_1; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_m_aValue_1() { return &___m_aValue_1; }
	inline void set_m_aValue_1(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___m_aValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_aValue_1), value);
	}

	inline static int32_t get_offset_of_elist_2() { return static_cast<int32_t>(offsetof(ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA, ___elist_2)); }
	inline ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * get_elist_2() const { return ___elist_2; }
	inline ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F ** get_address_of_elist_2() { return &___elist_2; }
	inline void set_elist_2(ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * value)
	{
		___elist_2 = value;
		Il2CppCodeGenWriteBarrier((&___elist_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASN1_T21F71D5E42416849A26C9ACE043F386E7F03D7FA_H
#ifndef X509CERTIFICATEENUMERATOR_T73F2B8AEDEF6F187870E8A2750847EEE931E16D3_H
#define X509CERTIFICATEENUMERATOR_T73F2B8AEDEF6F187870E8A2750847EEE931E16D3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
struct  X509CertificateEnumerator_t73F2B8AEDEF6F187870E8A2750847EEE931E16D3  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::enumerator
	RuntimeObject* ___enumerator_0;

public:
	inline static int32_t get_offset_of_enumerator_0() { return static_cast<int32_t>(offsetof(X509CertificateEnumerator_t73F2B8AEDEF6F187870E8A2750847EEE931E16D3, ___enumerator_0)); }
	inline RuntimeObject* get_enumerator_0() const { return ___enumerator_0; }
	inline RuntimeObject** get_address_of_enumerator_0() { return &___enumerator_0; }
	inline void set_enumerator_0(RuntimeObject* value)
	{
		___enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumerator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATEENUMERATOR_T73F2B8AEDEF6F187870E8A2750847EEE931E16D3_H
#ifndef X509EXTENSION_TE4755045C6BD26F3323152F1E6F86FCDC72D6698_H
#define X509EXTENSION_TE4755045C6BD26F3323152F1E6F86FCDC72D6698_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Extension
struct  X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Extension::extnOid
	String_t* ___extnOid_0;
	// System.Boolean Mono.Security.X509.X509Extension::extnCritical
	bool ___extnCritical_1;
	// Mono.Security.ASN1 Mono.Security.X509.X509Extension::extnValue
	ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * ___extnValue_2;

public:
	inline static int32_t get_offset_of_extnOid_0() { return static_cast<int32_t>(offsetof(X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698, ___extnOid_0)); }
	inline String_t* get_extnOid_0() const { return ___extnOid_0; }
	inline String_t** get_address_of_extnOid_0() { return &___extnOid_0; }
	inline void set_extnOid_0(String_t* value)
	{
		___extnOid_0 = value;
		Il2CppCodeGenWriteBarrier((&___extnOid_0), value);
	}

	inline static int32_t get_offset_of_extnCritical_1() { return static_cast<int32_t>(offsetof(X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698, ___extnCritical_1)); }
	inline bool get_extnCritical_1() const { return ___extnCritical_1; }
	inline bool* get_address_of_extnCritical_1() { return &___extnCritical_1; }
	inline void set_extnCritical_1(bool value)
	{
		___extnCritical_1 = value;
	}

	inline static int32_t get_offset_of_extnValue_2() { return static_cast<int32_t>(offsetof(X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698, ___extnValue_2)); }
	inline ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * get_extnValue_2() const { return ___extnValue_2; }
	inline ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA ** get_address_of_extnValue_2() { return &___extnValue_2; }
	inline void set_extnValue_2(ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * value)
	{
		___extnValue_2 = value;
		Il2CppCodeGenWriteBarrier((&___extnValue_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509EXTENSION_TE4755045C6BD26F3323152F1E6F86FCDC72D6698_H
#ifndef X509STORE_T754E7C7E6C15F74AA8E7A3F0695EE7E1AD0C4302_H
#define X509STORE_T754E7C7E6C15F74AA8E7A3F0695EE7E1AD0C4302_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Store
struct  X509Store_t754E7C7E6C15F74AA8E7A3F0695EE7E1AD0C4302  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Store::_storePath
	String_t* ____storePath_0;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::_certificates
	X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * ____certificates_1;
	// System.Collections.ArrayList Mono.Security.X509.X509Store::_crls
	ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * ____crls_2;
	// System.Boolean Mono.Security.X509.X509Store::_crl
	bool ____crl_3;

public:
	inline static int32_t get_offset_of__storePath_0() { return static_cast<int32_t>(offsetof(X509Store_t754E7C7E6C15F74AA8E7A3F0695EE7E1AD0C4302, ____storePath_0)); }
	inline String_t* get__storePath_0() const { return ____storePath_0; }
	inline String_t** get_address_of__storePath_0() { return &____storePath_0; }
	inline void set__storePath_0(String_t* value)
	{
		____storePath_0 = value;
		Il2CppCodeGenWriteBarrier((&____storePath_0), value);
	}

	inline static int32_t get_offset_of__certificates_1() { return static_cast<int32_t>(offsetof(X509Store_t754E7C7E6C15F74AA8E7A3F0695EE7E1AD0C4302, ____certificates_1)); }
	inline X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * get__certificates_1() const { return ____certificates_1; }
	inline X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 ** get_address_of__certificates_1() { return &____certificates_1; }
	inline void set__certificates_1(X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * value)
	{
		____certificates_1 = value;
		Il2CppCodeGenWriteBarrier((&____certificates_1), value);
	}

	inline static int32_t get_offset_of__crls_2() { return static_cast<int32_t>(offsetof(X509Store_t754E7C7E6C15F74AA8E7A3F0695EE7E1AD0C4302, ____crls_2)); }
	inline ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * get__crls_2() const { return ____crls_2; }
	inline ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F ** get_address_of__crls_2() { return &____crls_2; }
	inline void set__crls_2(ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * value)
	{
		____crls_2 = value;
		Il2CppCodeGenWriteBarrier((&____crls_2), value);
	}

	inline static int32_t get_offset_of__crl_3() { return static_cast<int32_t>(offsetof(X509Store_t754E7C7E6C15F74AA8E7A3F0695EE7E1AD0C4302, ____crl_3)); }
	inline bool get__crl_3() const { return ____crl_3; }
	inline bool* get_address_of__crl_3() { return &____crl_3; }
	inline void set__crl_3(bool value)
	{
		____crl_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509STORE_T754E7C7E6C15F74AA8E7A3F0695EE7E1AD0C4302_H
#ifndef X509STOREMANAGER_T84D6FAF6F4DB5D367306FC494991364A0752BDB7_H
#define X509STOREMANAGER_T84D6FAF6F4DB5D367306FC494991364A0752BDB7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509StoreManager
struct  X509StoreManager_t84D6FAF6F4DB5D367306FC494991364A0752BDB7  : public RuntimeObject
{
public:

public:
};

struct X509StoreManager_t84D6FAF6F4DB5D367306FC494991364A0752BDB7_StaticFields
{
public:
	// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::_userStore
	X509Stores_t2DA9540B452CEB83E67BC6CDF9B0346FA2B06C28 * ____userStore_0;
	// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::_machineStore
	X509Stores_t2DA9540B452CEB83E67BC6CDF9B0346FA2B06C28 * ____machineStore_1;

public:
	inline static int32_t get_offset_of__userStore_0() { return static_cast<int32_t>(offsetof(X509StoreManager_t84D6FAF6F4DB5D367306FC494991364A0752BDB7_StaticFields, ____userStore_0)); }
	inline X509Stores_t2DA9540B452CEB83E67BC6CDF9B0346FA2B06C28 * get__userStore_0() const { return ____userStore_0; }
	inline X509Stores_t2DA9540B452CEB83E67BC6CDF9B0346FA2B06C28 ** get_address_of__userStore_0() { return &____userStore_0; }
	inline void set__userStore_0(X509Stores_t2DA9540B452CEB83E67BC6CDF9B0346FA2B06C28 * value)
	{
		____userStore_0 = value;
		Il2CppCodeGenWriteBarrier((&____userStore_0), value);
	}

	inline static int32_t get_offset_of__machineStore_1() { return static_cast<int32_t>(offsetof(X509StoreManager_t84D6FAF6F4DB5D367306FC494991364A0752BDB7_StaticFields, ____machineStore_1)); }
	inline X509Stores_t2DA9540B452CEB83E67BC6CDF9B0346FA2B06C28 * get__machineStore_1() const { return ____machineStore_1; }
	inline X509Stores_t2DA9540B452CEB83E67BC6CDF9B0346FA2B06C28 ** get_address_of__machineStore_1() { return &____machineStore_1; }
	inline void set__machineStore_1(X509Stores_t2DA9540B452CEB83E67BC6CDF9B0346FA2B06C28 * value)
	{
		____machineStore_1 = value;
		Il2CppCodeGenWriteBarrier((&____machineStore_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509STOREMANAGER_T84D6FAF6F4DB5D367306FC494991364A0752BDB7_H
#ifndef X509STORES_T2DA9540B452CEB83E67BC6CDF9B0346FA2B06C28_H
#define X509STORES_T2DA9540B452CEB83E67BC6CDF9B0346FA2B06C28_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Stores
struct  X509Stores_t2DA9540B452CEB83E67BC6CDF9B0346FA2B06C28  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Stores::_storePath
	String_t* ____storePath_0;
	// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::_trusted
	X509Store_t754E7C7E6C15F74AA8E7A3F0695EE7E1AD0C4302 * ____trusted_1;

public:
	inline static int32_t get_offset_of__storePath_0() { return static_cast<int32_t>(offsetof(X509Stores_t2DA9540B452CEB83E67BC6CDF9B0346FA2B06C28, ____storePath_0)); }
	inline String_t* get__storePath_0() const { return ____storePath_0; }
	inline String_t** get_address_of__storePath_0() { return &____storePath_0; }
	inline void set__storePath_0(String_t* value)
	{
		____storePath_0 = value;
		Il2CppCodeGenWriteBarrier((&____storePath_0), value);
	}

	inline static int32_t get_offset_of__trusted_1() { return static_cast<int32_t>(offsetof(X509Stores_t2DA9540B452CEB83E67BC6CDF9B0346FA2B06C28, ____trusted_1)); }
	inline X509Store_t754E7C7E6C15F74AA8E7A3F0695EE7E1AD0C4302 * get__trusted_1() const { return ____trusted_1; }
	inline X509Store_t754E7C7E6C15F74AA8E7A3F0695EE7E1AD0C4302 ** get_address_of__trusted_1() { return &____trusted_1; }
	inline void set__trusted_1(X509Store_t754E7C7E6C15F74AA8E7A3F0695EE7E1AD0C4302 * value)
	{
		____trusted_1 = value;
		Il2CppCodeGenWriteBarrier((&____trusted_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509STORES_T2DA9540B452CEB83E67BC6CDF9B0346FA2B06C28_H
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
#ifndef ARRAYLIST_T438A4032A4FBAF49F565FAD10C546E26CFBD847F_H
#define ARRAYLIST_T438A4032A4FBAF49F565FAD10C546E26CFBD847F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList
struct  ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* ____items_2;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__items_2() { return static_cast<int32_t>(offsetof(ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F, ____items_2)); }
	inline ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* get__items_2() const { return ____items_2; }
	inline ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D** get_address_of__items_2() { return &____items_2; }
	inline void set__items_2(ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* value)
	{
		____items_2 = value;
		Il2CppCodeGenWriteBarrier((&____items_2), value);
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F_StaticFields
{
public:
	// System.Object[] System.Collections.ArrayList::EmptyArray
	ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F_StaticFields, ___EmptyArray_4)); }
	inline ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYLIST_T438A4032A4FBAF49F565FAD10C546E26CFBD847F_H
#ifndef COLLECTIONBASE_TC3F24120B23471E7FDEE72107D1D541E6456744F_H
#define COLLECTIONBASE_TC3F24120B23471E7FDEE72107D1D541E6456744F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CollectionBase
struct  CollectionBase_tC3F24120B23471E7FDEE72107D1D541E6456744F  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.CollectionBase::list
	ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(CollectionBase_tC3F24120B23471E7FDEE72107D1D541E6456744F, ___list_0)); }
	inline ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * get_list_0() const { return ___list_0; }
	inline ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONBASE_TC3F24120B23471E7FDEE72107D1D541E6456744F_H
#ifndef DICTIONARY_2_TC40CE8B8795121971E021F04C9E151F97814FCA1_H
#define DICTIONARY_2_TC40CE8B8795121971E021F04C9E151F97814FCA1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct  Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_tA58A56CD6B5AD6B2DF5F4934A46CEC9F681B71AD* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* ___valueSlots_7;
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
	SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1, ___table_4)); }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1, ___linkSlots_5)); }
	inline LinkU5BU5D_tA58A56CD6B5AD6B2DF5F4934A46CEC9F681B71AD* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_tA58A56CD6B5AD6B2DF5F4934A46CEC9F681B71AD** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_tA58A56CD6B5AD6B2DF5F4934A46CEC9F681B71AD* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1, ___keySlots_6)); }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1, ___valueSlots_7)); }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* get_valueSlots_7() const { return ___valueSlots_7; }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1, ___serialization_info_13)); }
	inline SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t65686AED861AC45494753EDD54F3AFAB55E25448 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t65686AED861AC45494753EDD54F3AFAB55E25448 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t65686AED861AC45494753EDD54F3AFAB55E25448 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t65686AED861AC45494753EDD54F3AFAB55E25448 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_TC40CE8B8795121971E021F04C9E151F97814FCA1_H
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
#ifndef STREAM_TCFD27E43C18381861212C0288CACF467FB602009_H
#define STREAM_TCFD27E43C18381861212C0288CACF467FB602009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_tCFD27E43C18381861212C0288CACF467FB602009  : public RuntimeObject
{
public:

public:
};

struct Stream_tCFD27E43C18381861212C0288CACF467FB602009_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_tCFD27E43C18381861212C0288CACF467FB602009 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(Stream_tCFD27E43C18381861212C0288CACF467FB602009_StaticFields, ___Null_0)); }
	inline Stream_tCFD27E43C18381861212C0288CACF467FB602009 * get_Null_0() const { return ___Null_0; }
	inline Stream_tCFD27E43C18381861212C0288CACF467FB602009 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(Stream_tCFD27E43C18381861212C0288CACF467FB602009 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_TCFD27E43C18381861212C0288CACF467FB602009_H
#ifndef MARSHALBYREFOBJECT_T05F62A8AC86E36BAE3063CA28097945DE9E179C4_H
#define MARSHALBYREFOBJECT_T05F62A8AC86E36BAE3063CA28097945DE9E179C4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t05F62A8AC86E36BAE3063CA28097945DE9E179C4  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t3C5F8BAEFAC94CF69694273ACCB6CB41355E0B5C * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t05F62A8AC86E36BAE3063CA28097945DE9E179C4, ____identity_0)); }
	inline ServerIdentity_t3C5F8BAEFAC94CF69694273ACCB6CB41355E0B5C * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t3C5F8BAEFAC94CF69694273ACCB6CB41355E0B5C ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t3C5F8BAEFAC94CF69694273ACCB6CB41355E0B5C * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T05F62A8AC86E36BAE3063CA28097945DE9E179C4_H
#ifndef ASYMMETRICALGORITHM_TCE2A08658EFEA671D977BC39FA246B4FC5092BB2_H
#define ASYMMETRICALGORITHM_TCE2A08658EFEA671D977BC39FA246B4FC5092BB2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricAlgorithm
struct  AsymmetricAlgorithm_tCE2A08658EFEA671D977BC39FA246B4FC5092BB2  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_0;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.AsymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t131B7C0FEFAA71CAB587F57C7292E1ECE043913C* ___LegalKeySizesValue_1;

public:
	inline static int32_t get_offset_of_KeySizeValue_0() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_tCE2A08658EFEA671D977BC39FA246B4FC5092BB2, ___KeySizeValue_0)); }
	inline int32_t get_KeySizeValue_0() const { return ___KeySizeValue_0; }
	inline int32_t* get_address_of_KeySizeValue_0() { return &___KeySizeValue_0; }
	inline void set_KeySizeValue_0(int32_t value)
	{
		___KeySizeValue_0 = value;
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_1() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_tCE2A08658EFEA671D977BC39FA246B4FC5092BB2, ___LegalKeySizesValue_1)); }
	inline KeySizesU5BU5D_t131B7C0FEFAA71CAB587F57C7292E1ECE043913C* get_LegalKeySizesValue_1() const { return ___LegalKeySizesValue_1; }
	inline KeySizesU5BU5D_t131B7C0FEFAA71CAB587F57C7292E1ECE043913C** get_address_of_LegalKeySizesValue_1() { return &___LegalKeySizesValue_1; }
	inline void set_LegalKeySizesValue_1(KeySizesU5BU5D_t131B7C0FEFAA71CAB587F57C7292E1ECE043913C* value)
	{
		___LegalKeySizesValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICALGORITHM_TCE2A08658EFEA671D977BC39FA246B4FC5092BB2_H
#ifndef ASYMMETRICSIGNATUREDEFORMATTER_T518C5329EA3FF9AAA6789BA659B2A5FAEBA3A0B9_H
#define ASYMMETRICSIGNATUREDEFORMATTER_T518C5329EA3FF9AAA6789BA659B2A5FAEBA3A0B9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricSignatureDeformatter
struct  AsymmetricSignatureDeformatter_t518C5329EA3FF9AAA6789BA659B2A5FAEBA3A0B9  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICSIGNATUREDEFORMATTER_T518C5329EA3FF9AAA6789BA659B2A5FAEBA3A0B9_H
#ifndef HASHALGORITHM_T6A31A9B4CBC494EA9286D2A1097C6DC9BCE96CA0_H
#define HASHALGORITHM_T6A31A9B4CBC494EA9286D2A1097C6DC9BCE96CA0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HashAlgorithm
struct  HashAlgorithm_t6A31A9B4CBC494EA9286D2A1097C6DC9BCE96CA0  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___HashValue_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_2;
	// System.Boolean System.Security.Cryptography.HashAlgorithm::disposed
	bool ___disposed_3;

public:
	inline static int32_t get_offset_of_HashValue_0() { return static_cast<int32_t>(offsetof(HashAlgorithm_t6A31A9B4CBC494EA9286D2A1097C6DC9BCE96CA0, ___HashValue_0)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_HashValue_0() const { return ___HashValue_0; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_HashValue_0() { return &___HashValue_0; }
	inline void set_HashValue_0(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___HashValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___HashValue_0), value);
	}

	inline static int32_t get_offset_of_HashSizeValue_1() { return static_cast<int32_t>(offsetof(HashAlgorithm_t6A31A9B4CBC494EA9286D2A1097C6DC9BCE96CA0, ___HashSizeValue_1)); }
	inline int32_t get_HashSizeValue_1() const { return ___HashSizeValue_1; }
	inline int32_t* get_address_of_HashSizeValue_1() { return &___HashSizeValue_1; }
	inline void set_HashSizeValue_1(int32_t value)
	{
		___HashSizeValue_1 = value;
	}

	inline static int32_t get_offset_of_State_2() { return static_cast<int32_t>(offsetof(HashAlgorithm_t6A31A9B4CBC494EA9286D2A1097C6DC9BCE96CA0, ___State_2)); }
	inline int32_t get_State_2() const { return ___State_2; }
	inline int32_t* get_address_of_State_2() { return &___State_2; }
	inline void set_State_2(int32_t value)
	{
		___State_2 = value;
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(HashAlgorithm_t6A31A9B4CBC494EA9286D2A1097C6DC9BCE96CA0, ___disposed_3)); }
	inline bool get_disposed_3() const { return ___disposed_3; }
	inline bool* get_address_of_disposed_3() { return &___disposed_3; }
	inline void set_disposed_3(bool value)
	{
		___disposed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHALGORITHM_T6A31A9B4CBC494EA9286D2A1097C6DC9BCE96CA0_H
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
#ifndef BASICCONSTRAINTSEXTENSION_T519E68578F3BFB9B3588596B24BF4B729D26494E_H
#define BASICCONSTRAINTSEXTENSION_T519E68578F3BFB9B3588596B24BF4B729D26494E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.BasicConstraintsExtension
struct  BasicConstraintsExtension_t519E68578F3BFB9B3588596B24BF4B729D26494E  : public X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698
{
public:
	// System.Boolean Mono.Security.X509.Extensions.BasicConstraintsExtension::cA
	bool ___cA_3;
	// System.Int32 Mono.Security.X509.Extensions.BasicConstraintsExtension::pathLenConstraint
	int32_t ___pathLenConstraint_4;

public:
	inline static int32_t get_offset_of_cA_3() { return static_cast<int32_t>(offsetof(BasicConstraintsExtension_t519E68578F3BFB9B3588596B24BF4B729D26494E, ___cA_3)); }
	inline bool get_cA_3() const { return ___cA_3; }
	inline bool* get_address_of_cA_3() { return &___cA_3; }
	inline void set_cA_3(bool value)
	{
		___cA_3 = value;
	}

	inline static int32_t get_offset_of_pathLenConstraint_4() { return static_cast<int32_t>(offsetof(BasicConstraintsExtension_t519E68578F3BFB9B3588596B24BF4B729D26494E, ___pathLenConstraint_4)); }
	inline int32_t get_pathLenConstraint_4() const { return ___pathLenConstraint_4; }
	inline int32_t* get_address_of_pathLenConstraint_4() { return &___pathLenConstraint_4; }
	inline void set_pathLenConstraint_4(int32_t value)
	{
		___pathLenConstraint_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASICCONSTRAINTSEXTENSION_T519E68578F3BFB9B3588596B24BF4B729D26494E_H
#ifndef X509CERTIFICATECOLLECTION_T59402ED1601796E9D33AA78F60D998BC0DDA12F4_H
#define X509CERTIFICATECOLLECTION_T59402ED1601796E9D33AA78F60D998BC0DDA12F4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509CertificateCollection
struct  X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4  : public CollectionBase_tC3F24120B23471E7FDEE72107D1D541E6456744F
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATECOLLECTION_T59402ED1601796E9D33AA78F60D998BC0DDA12F4_H
#ifndef X509EXTENSIONCOLLECTION_T755DFCBDA8823D949578ED886BAFA4BF87706991_H
#define X509EXTENSIONCOLLECTION_T755DFCBDA8823D949578ED886BAFA4BF87706991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509ExtensionCollection
struct  X509ExtensionCollection_t755DFCBDA8823D949578ED886BAFA4BF87706991  : public CollectionBase_tC3F24120B23471E7FDEE72107D1D541E6456744F
{
public:
	// System.Boolean Mono.Security.X509.X509ExtensionCollection::readOnly
	bool ___readOnly_1;

public:
	inline static int32_t get_offset_of_readOnly_1() { return static_cast<int32_t>(offsetof(X509ExtensionCollection_t755DFCBDA8823D949578ED886BAFA4BF87706991, ___readOnly_1)); }
	inline bool get_readOnly_1() const { return ___readOnly_1; }
	inline bool* get_address_of_readOnly_1() { return &___readOnly_1; }
	inline void set_readOnly_1(bool value)
	{
		___readOnly_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509EXTENSIONCOLLECTION_T755DFCBDA8823D949578ED886BAFA4BF87706991_H
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
#ifndef DSA_TF8DC81D58B7A574DF51517FD242D76B4FC225808_H
#define DSA_TF8DC81D58B7A574DF51517FD242D76B4FC225808_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSA
struct  DSA_tF8DC81D58B7A574DF51517FD242D76B4FC225808  : public AsymmetricAlgorithm_tCE2A08658EFEA671D977BC39FA246B4FC5092BB2
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSA_TF8DC81D58B7A574DF51517FD242D76B4FC225808_H
#ifndef DSASIGNATUREDEFORMATTER_T0A3DF19E0A5E10BE91A0779BDF9723CBDE57B357_H
#define DSASIGNATUREDEFORMATTER_T0A3DF19E0A5E10BE91A0779BDF9723CBDE57B357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSASignatureDeformatter
struct  DSASignatureDeformatter_t0A3DF19E0A5E10BE91A0779BDF9723CBDE57B357  : public AsymmetricSignatureDeformatter_t518C5329EA3FF9AAA6789BA659B2A5FAEBA3A0B9
{
public:
	// System.Security.Cryptography.DSA System.Security.Cryptography.DSASignatureDeformatter::dsa
	DSA_tF8DC81D58B7A574DF51517FD242D76B4FC225808 * ___dsa_0;

public:
	inline static int32_t get_offset_of_dsa_0() { return static_cast<int32_t>(offsetof(DSASignatureDeformatter_t0A3DF19E0A5E10BE91A0779BDF9723CBDE57B357, ___dsa_0)); }
	inline DSA_tF8DC81D58B7A574DF51517FD242D76B4FC225808 * get_dsa_0() const { return ___dsa_0; }
	inline DSA_tF8DC81D58B7A574DF51517FD242D76B4FC225808 ** get_address_of_dsa_0() { return &___dsa_0; }
	inline void set_dsa_0(DSA_tF8DC81D58B7A574DF51517FD242D76B4FC225808 * value)
	{
		___dsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___dsa_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSASIGNATUREDEFORMATTER_T0A3DF19E0A5E10BE91A0779BDF9723CBDE57B357_H
#ifndef RSA_T565B1E1F95589A0E37D0C66406CF730DC4A43051_H
#define RSA_T565B1E1F95589A0E37D0C66406CF730DC4A43051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSA
struct  RSA_t565B1E1F95589A0E37D0C66406CF730DC4A43051  : public AsymmetricAlgorithm_tCE2A08658EFEA671D977BC39FA246B4FC5092BB2
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSA_T565B1E1F95589A0E37D0C66406CF730DC4A43051_H
#ifndef RSAPKCS1SIGNATUREDEFORMATTER_T386250AF7C86EA2F614086AA52825277DBEC3A3F_H
#define RSAPKCS1SIGNATUREDEFORMATTER_T386250AF7C86EA2F614086AA52825277DBEC3A3F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1SignatureDeformatter
struct  RSAPKCS1SignatureDeformatter_t386250AF7C86EA2F614086AA52825277DBEC3A3F  : public AsymmetricSignatureDeformatter_t518C5329EA3FF9AAA6789BA659B2A5FAEBA3A0B9
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1SignatureDeformatter::rsa
	RSA_t565B1E1F95589A0E37D0C66406CF730DC4A43051 * ___rsa_0;
	// System.String System.Security.Cryptography.RSAPKCS1SignatureDeformatter::hashName
	String_t* ___hashName_1;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureDeformatter_t386250AF7C86EA2F614086AA52825277DBEC3A3F, ___rsa_0)); }
	inline RSA_t565B1E1F95589A0E37D0C66406CF730DC4A43051 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t565B1E1F95589A0E37D0C66406CF730DC4A43051 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t565B1E1F95589A0E37D0C66406CF730DC4A43051 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}

	inline static int32_t get_offset_of_hashName_1() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureDeformatter_t386250AF7C86EA2F614086AA52825277DBEC3A3F, ___hashName_1)); }
	inline String_t* get_hashName_1() const { return ___hashName_1; }
	inline String_t** get_address_of_hashName_1() { return &___hashName_1; }
	inline void set_hashName_1(String_t* value)
	{
		___hashName_1 = value;
		Il2CppCodeGenWriteBarrier((&___hashName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1SIGNATUREDEFORMATTER_T386250AF7C86EA2F614086AA52825277DBEC3A3F_H
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
#ifndef X509CHAINSTATUSFLAGS_T1256D2CC5C46DA044CAF8A56776A978115A2B79D_H
#define X509CHAINSTATUSFLAGS_T1256D2CC5C46DA044CAF8A56776A978115A2B79D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509ChainStatusFlags
struct  X509ChainStatusFlags_t1256D2CC5C46DA044CAF8A56776A978115A2B79D 
{
public:
	// System.Int32 Mono.Security.X509.X509ChainStatusFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509ChainStatusFlags_t1256D2CC5C46DA044CAF8A56776A978115A2B79D, ___value___1)); }
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
#endif // X509CHAINSTATUSFLAGS_T1256D2CC5C46DA044CAF8A56776A978115A2B79D_H
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
#ifndef SPECIALFOLDER_T33AAF6B95F6AAB9092D02C00E88C0F5930EEB972_H
#define SPECIALFOLDER_T33AAF6B95F6AAB9092D02C00E88C0F5930EEB972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Environment/SpecialFolder
struct  SpecialFolder_t33AAF6B95F6AAB9092D02C00E88C0F5930EEB972 
{
public:
	// System.Int32 System.Environment/SpecialFolder::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SpecialFolder_t33AAF6B95F6AAB9092D02C00E88C0F5930EEB972, ___value___1)); }
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
#endif // SPECIALFOLDER_T33AAF6B95F6AAB9092D02C00E88C0F5930EEB972_H
#ifndef FILEACCESS_T31DF356A13590FED578C50963AE6A7DE1D2AF4A9_H
#define FILEACCESS_T31DF356A13590FED578C50963AE6A7DE1D2AF4A9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAccess
struct  FileAccess_t31DF356A13590FED578C50963AE6A7DE1D2AF4A9 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileAccess_t31DF356A13590FED578C50963AE6A7DE1D2AF4A9, ___value___1)); }
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
#endif // FILEACCESS_T31DF356A13590FED578C50963AE6A7DE1D2AF4A9_H
#ifndef FILEATTRIBUTES_T29269D3AF13B083E4D459437BEF6F721F67DC9EF_H
#define FILEATTRIBUTES_T29269D3AF13B083E4D459437BEF6F721F67DC9EF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAttributes
struct  FileAttributes_t29269D3AF13B083E4D459437BEF6F721F67DC9EF 
{
public:
	// System.Int32 System.IO.FileAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileAttributes_t29269D3AF13B083E4D459437BEF6F721F67DC9EF, ___value___1)); }
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
#endif // FILEATTRIBUTES_T29269D3AF13B083E4D459437BEF6F721F67DC9EF_H
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
#ifndef CRYPTOGRAPHICEXCEPTION_TEBE52D8795404FE91A37B2662AED1CDF46CD3920_H
#define CRYPTOGRAPHICEXCEPTION_TEBE52D8795404FE91A37B2662AED1CDF46CD3920_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptographicException
struct  CryptographicException_tEBE52D8795404FE91A37B2662AED1CDF46CD3920  : public SystemException_t81A06ADD519539D252788D75E44AFFBE6580E301
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOGRAPHICEXCEPTION_TEBE52D8795404FE91A37B2662AED1CDF46CD3920_H
#ifndef X509CHAIN_T4EEB0B913205B0D6B063AFB393AFA17BEFCA3D67_H
#define X509CHAIN_T4EEB0B913205B0D6B063AFB393AFA17BEFCA3D67_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Chain
struct  X509Chain_t4EEB0B913205B0D6B063AFB393AFA17BEFCA3D67  : public RuntimeObject
{
public:
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::roots
	X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * ___roots_0;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::certs
	X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * ___certs_1;
	// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::_root
	X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * ____root_2;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::_chain
	X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * ____chain_3;
	// Mono.Security.X509.X509ChainStatusFlags Mono.Security.X509.X509Chain::_status
	int32_t ____status_4;

public:
	inline static int32_t get_offset_of_roots_0() { return static_cast<int32_t>(offsetof(X509Chain_t4EEB0B913205B0D6B063AFB393AFA17BEFCA3D67, ___roots_0)); }
	inline X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * get_roots_0() const { return ___roots_0; }
	inline X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 ** get_address_of_roots_0() { return &___roots_0; }
	inline void set_roots_0(X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * value)
	{
		___roots_0 = value;
		Il2CppCodeGenWriteBarrier((&___roots_0), value);
	}

	inline static int32_t get_offset_of_certs_1() { return static_cast<int32_t>(offsetof(X509Chain_t4EEB0B913205B0D6B063AFB393AFA17BEFCA3D67, ___certs_1)); }
	inline X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * get_certs_1() const { return ___certs_1; }
	inline X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 ** get_address_of_certs_1() { return &___certs_1; }
	inline void set_certs_1(X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * value)
	{
		___certs_1 = value;
		Il2CppCodeGenWriteBarrier((&___certs_1), value);
	}

	inline static int32_t get_offset_of__root_2() { return static_cast<int32_t>(offsetof(X509Chain_t4EEB0B913205B0D6B063AFB393AFA17BEFCA3D67, ____root_2)); }
	inline X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * get__root_2() const { return ____root_2; }
	inline X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 ** get_address_of__root_2() { return &____root_2; }
	inline void set__root_2(X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * value)
	{
		____root_2 = value;
		Il2CppCodeGenWriteBarrier((&____root_2), value);
	}

	inline static int32_t get_offset_of__chain_3() { return static_cast<int32_t>(offsetof(X509Chain_t4EEB0B913205B0D6B063AFB393AFA17BEFCA3D67, ____chain_3)); }
	inline X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * get__chain_3() const { return ____chain_3; }
	inline X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 ** get_address_of__chain_3() { return &____chain_3; }
	inline void set__chain_3(X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * value)
	{
		____chain_3 = value;
		Il2CppCodeGenWriteBarrier((&____chain_3), value);
	}

	inline static int32_t get_offset_of__status_4() { return static_cast<int32_t>(offsetof(X509Chain_t4EEB0B913205B0D6B063AFB393AFA17BEFCA3D67, ____status_4)); }
	inline int32_t get__status_4() const { return ____status_4; }
	inline int32_t* get_address_of__status_4() { return &____status_4; }
	inline void set__status_4(int32_t value)
	{
		____status_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CHAIN_T4EEB0B913205B0D6B063AFB393AFA17BEFCA3D67_H
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
#ifndef FILESTREAM_T7540109F33E9AA6431B9316FD268BA7E9F012AF4_H
#define FILESTREAM_T7540109F33E9AA6431B9316FD268BA7E9F012AF4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileStream
struct  FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4  : public Stream_tCFD27E43C18381861212C0288CACF467FB602009
{
public:
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_1;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_2;
	// System.Boolean System.IO.FileStream::async
	bool ___async_3;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_4;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_5;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_6;
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___buf_7;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_8;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_9;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_10;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_11;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_12;
	// System.String System.IO.FileStream::name
	String_t* ___name_13;
	// System.IntPtr System.IO.FileStream::handle
	intptr_t ___handle_14;

public:
	inline static int32_t get_offset_of_access_1() { return static_cast<int32_t>(offsetof(FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4, ___access_1)); }
	inline int32_t get_access_1() const { return ___access_1; }
	inline int32_t* get_address_of_access_1() { return &___access_1; }
	inline void set_access_1(int32_t value)
	{
		___access_1 = value;
	}

	inline static int32_t get_offset_of_owner_2() { return static_cast<int32_t>(offsetof(FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4, ___owner_2)); }
	inline bool get_owner_2() const { return ___owner_2; }
	inline bool* get_address_of_owner_2() { return &___owner_2; }
	inline void set_owner_2(bool value)
	{
		___owner_2 = value;
	}

	inline static int32_t get_offset_of_async_3() { return static_cast<int32_t>(offsetof(FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4, ___async_3)); }
	inline bool get_async_3() const { return ___async_3; }
	inline bool* get_address_of_async_3() { return &___async_3; }
	inline void set_async_3(bool value)
	{
		___async_3 = value;
	}

	inline static int32_t get_offset_of_canseek_4() { return static_cast<int32_t>(offsetof(FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4, ___canseek_4)); }
	inline bool get_canseek_4() const { return ___canseek_4; }
	inline bool* get_address_of_canseek_4() { return &___canseek_4; }
	inline void set_canseek_4(bool value)
	{
		___canseek_4 = value;
	}

	inline static int32_t get_offset_of_append_startpos_5() { return static_cast<int32_t>(offsetof(FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4, ___append_startpos_5)); }
	inline int64_t get_append_startpos_5() const { return ___append_startpos_5; }
	inline int64_t* get_address_of_append_startpos_5() { return &___append_startpos_5; }
	inline void set_append_startpos_5(int64_t value)
	{
		___append_startpos_5 = value;
	}

	inline static int32_t get_offset_of_anonymous_6() { return static_cast<int32_t>(offsetof(FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4, ___anonymous_6)); }
	inline bool get_anonymous_6() const { return ___anonymous_6; }
	inline bool* get_address_of_anonymous_6() { return &___anonymous_6; }
	inline void set_anonymous_6(bool value)
	{
		___anonymous_6 = value;
	}

	inline static int32_t get_offset_of_buf_7() { return static_cast<int32_t>(offsetof(FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4, ___buf_7)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_buf_7() const { return ___buf_7; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_buf_7() { return &___buf_7; }
	inline void set_buf_7(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___buf_7 = value;
		Il2CppCodeGenWriteBarrier((&___buf_7), value);
	}

	inline static int32_t get_offset_of_buf_size_8() { return static_cast<int32_t>(offsetof(FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4, ___buf_size_8)); }
	inline int32_t get_buf_size_8() const { return ___buf_size_8; }
	inline int32_t* get_address_of_buf_size_8() { return &___buf_size_8; }
	inline void set_buf_size_8(int32_t value)
	{
		___buf_size_8 = value;
	}

	inline static int32_t get_offset_of_buf_length_9() { return static_cast<int32_t>(offsetof(FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4, ___buf_length_9)); }
	inline int32_t get_buf_length_9() const { return ___buf_length_9; }
	inline int32_t* get_address_of_buf_length_9() { return &___buf_length_9; }
	inline void set_buf_length_9(int32_t value)
	{
		___buf_length_9 = value;
	}

	inline static int32_t get_offset_of_buf_offset_10() { return static_cast<int32_t>(offsetof(FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4, ___buf_offset_10)); }
	inline int32_t get_buf_offset_10() const { return ___buf_offset_10; }
	inline int32_t* get_address_of_buf_offset_10() { return &___buf_offset_10; }
	inline void set_buf_offset_10(int32_t value)
	{
		___buf_offset_10 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_11() { return static_cast<int32_t>(offsetof(FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4, ___buf_dirty_11)); }
	inline bool get_buf_dirty_11() const { return ___buf_dirty_11; }
	inline bool* get_address_of_buf_dirty_11() { return &___buf_dirty_11; }
	inline void set_buf_dirty_11(bool value)
	{
		___buf_dirty_11 = value;
	}

	inline static int32_t get_offset_of_buf_start_12() { return static_cast<int32_t>(offsetof(FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4, ___buf_start_12)); }
	inline int64_t get_buf_start_12() const { return ___buf_start_12; }
	inline int64_t* get_address_of_buf_start_12() { return &___buf_start_12; }
	inline void set_buf_start_12(int64_t value)
	{
		___buf_start_12 = value;
	}

	inline static int32_t get_offset_of_name_13() { return static_cast<int32_t>(offsetof(FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4, ___name_13)); }
	inline String_t* get_name_13() const { return ___name_13; }
	inline String_t** get_address_of_name_13() { return &___name_13; }
	inline void set_name_13(String_t* value)
	{
		___name_13 = value;
		Il2CppCodeGenWriteBarrier((&___name_13), value);
	}

	inline static int32_t get_offset_of_handle_14() { return static_cast<int32_t>(offsetof(FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4, ___handle_14)); }
	inline intptr_t get_handle_14() const { return ___handle_14; }
	inline intptr_t* get_address_of_handle_14() { return &___handle_14; }
	inline void set_handle_14(intptr_t value)
	{
		___handle_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESTREAM_T7540109F33E9AA6431B9316FD268BA7E9F012AF4_H
#ifndef MONOIOSTAT_T9E1DAB7BE1A3A11C71E671C4B32DD25232340F3C_H
#define MONOIOSTAT_T9E1DAB7BE1A3A11C71E671C4B32DD25232340F3C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.MonoIOStat
struct  MonoIOStat_t9E1DAB7BE1A3A11C71E671C4B32DD25232340F3C 
{
public:
	// System.String System.IO.MonoIOStat::Name
	String_t* ___Name_0;
	// System.IO.FileAttributes System.IO.MonoIOStat::Attributes
	int32_t ___Attributes_1;
	// System.Int64 System.IO.MonoIOStat::Length
	int64_t ___Length_2;
	// System.Int64 System.IO.MonoIOStat::CreationTime
	int64_t ___CreationTime_3;
	// System.Int64 System.IO.MonoIOStat::LastAccessTime
	int64_t ___LastAccessTime_4;
	// System.Int64 System.IO.MonoIOStat::LastWriteTime
	int64_t ___LastWriteTime_5;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(MonoIOStat_t9E1DAB7BE1A3A11C71E671C4B32DD25232340F3C, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___Name_0), value);
	}

	inline static int32_t get_offset_of_Attributes_1() { return static_cast<int32_t>(offsetof(MonoIOStat_t9E1DAB7BE1A3A11C71E671C4B32DD25232340F3C, ___Attributes_1)); }
	inline int32_t get_Attributes_1() const { return ___Attributes_1; }
	inline int32_t* get_address_of_Attributes_1() { return &___Attributes_1; }
	inline void set_Attributes_1(int32_t value)
	{
		___Attributes_1 = value;
	}

	inline static int32_t get_offset_of_Length_2() { return static_cast<int32_t>(offsetof(MonoIOStat_t9E1DAB7BE1A3A11C71E671C4B32DD25232340F3C, ___Length_2)); }
	inline int64_t get_Length_2() const { return ___Length_2; }
	inline int64_t* get_address_of_Length_2() { return &___Length_2; }
	inline void set_Length_2(int64_t value)
	{
		___Length_2 = value;
	}

	inline static int32_t get_offset_of_CreationTime_3() { return static_cast<int32_t>(offsetof(MonoIOStat_t9E1DAB7BE1A3A11C71E671C4B32DD25232340F3C, ___CreationTime_3)); }
	inline int64_t get_CreationTime_3() const { return ___CreationTime_3; }
	inline int64_t* get_address_of_CreationTime_3() { return &___CreationTime_3; }
	inline void set_CreationTime_3(int64_t value)
	{
		___CreationTime_3 = value;
	}

	inline static int32_t get_offset_of_LastAccessTime_4() { return static_cast<int32_t>(offsetof(MonoIOStat_t9E1DAB7BE1A3A11C71E671C4B32DD25232340F3C, ___LastAccessTime_4)); }
	inline int64_t get_LastAccessTime_4() const { return ___LastAccessTime_4; }
	inline int64_t* get_address_of_LastAccessTime_4() { return &___LastAccessTime_4; }
	inline void set_LastAccessTime_4(int64_t value)
	{
		___LastAccessTime_4 = value;
	}

	inline static int32_t get_offset_of_LastWriteTime_5() { return static_cast<int32_t>(offsetof(MonoIOStat_t9E1DAB7BE1A3A11C71E671C4B32DD25232340F3C, ___LastWriteTime_5)); }
	inline int64_t get_LastWriteTime_5() const { return ___LastWriteTime_5; }
	inline int64_t* get_address_of_LastWriteTime_5() { return &___LastWriteTime_5; }
	inline void set_LastWriteTime_5(int64_t value)
	{
		___LastWriteTime_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.IO.MonoIOStat
struct MonoIOStat_t9E1DAB7BE1A3A11C71E671C4B32DD25232340F3C_marshaled_pinvoke
{
	char* ___Name_0;
	int32_t ___Attributes_1;
	int64_t ___Length_2;
	int64_t ___CreationTime_3;
	int64_t ___LastAccessTime_4;
	int64_t ___LastWriteTime_5;
};
// Native definition for COM marshalling of System.IO.MonoIOStat
struct MonoIOStat_t9E1DAB7BE1A3A11C71E671C4B32DD25232340F3C_marshaled_com
{
	Il2CppChar* ___Name_0;
	int32_t ___Attributes_1;
	int64_t ___Length_2;
	int64_t ___CreationTime_3;
	int64_t ___LastAccessTime_4;
	int64_t ___LastWriteTime_5;
};
#endif // MONOIOSTAT_T9E1DAB7BE1A3A11C71E671C4B32DD25232340F3C_H
#ifndef X509CERTIFICATE_TF81384408319B1A7C4393A41881A123CF518E4A7_H
#define X509CERTIFICATE_TF81384408319B1A7C4393A41881A123CF518E4A7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Certificate
struct  X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7  : public RuntimeObject
{
public:
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::decoder
	ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * ___decoder_0;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_encodedcert
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___m_encodedcert_1;
	// System.DateTime Mono.Security.X509.X509Certificate::m_from
	DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  ___m_from_2;
	// System.DateTime Mono.Security.X509.X509Certificate::m_until
	DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  ___m_until_3;
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::issuer
	ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * ___issuer_4;
	// System.String Mono.Security.X509.X509Certificate::m_issuername
	String_t* ___m_issuername_5;
	// System.String Mono.Security.X509.X509Certificate::m_keyalgo
	String_t* ___m_keyalgo_6;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_keyalgoparams
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___m_keyalgoparams_7;
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::subject
	ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * ___subject_8;
	// System.String Mono.Security.X509.X509Certificate::m_subject
	String_t* ___m_subject_9;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_publickey
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___m_publickey_10;
	// System.Byte[] Mono.Security.X509.X509Certificate::signature
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___signature_11;
	// System.String Mono.Security.X509.X509Certificate::m_signaturealgo
	String_t* ___m_signaturealgo_12;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_signaturealgoparams
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___m_signaturealgoparams_13;
	// System.Byte[] Mono.Security.X509.X509Certificate::certhash
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___certhash_14;
	// System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::_rsa
	RSA_t565B1E1F95589A0E37D0C66406CF730DC4A43051 * ____rsa_15;
	// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::_dsa
	DSA_tF8DC81D58B7A574DF51517FD242D76B4FC225808 * ____dsa_16;
	// System.Int32 Mono.Security.X509.X509Certificate::version
	int32_t ___version_17;
	// System.Byte[] Mono.Security.X509.X509Certificate::serialnumber
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___serialnumber_18;
	// System.Byte[] Mono.Security.X509.X509Certificate::issuerUniqueID
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___issuerUniqueID_19;
	// System.Byte[] Mono.Security.X509.X509Certificate::subjectUniqueID
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___subjectUniqueID_20;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Certificate::extensions
	X509ExtensionCollection_t755DFCBDA8823D949578ED886BAFA4BF87706991 * ___extensions_21;

public:
	inline static int32_t get_offset_of_decoder_0() { return static_cast<int32_t>(offsetof(X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7, ___decoder_0)); }
	inline ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * get_decoder_0() const { return ___decoder_0; }
	inline ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA ** get_address_of_decoder_0() { return &___decoder_0; }
	inline void set_decoder_0(ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * value)
	{
		___decoder_0 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_0), value);
	}

	inline static int32_t get_offset_of_m_encodedcert_1() { return static_cast<int32_t>(offsetof(X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7, ___m_encodedcert_1)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_m_encodedcert_1() const { return ___m_encodedcert_1; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_m_encodedcert_1() { return &___m_encodedcert_1; }
	inline void set_m_encodedcert_1(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___m_encodedcert_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_encodedcert_1), value);
	}

	inline static int32_t get_offset_of_m_from_2() { return static_cast<int32_t>(offsetof(X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7, ___m_from_2)); }
	inline DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  get_m_from_2() const { return ___m_from_2; }
	inline DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2 * get_address_of_m_from_2() { return &___m_from_2; }
	inline void set_m_from_2(DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  value)
	{
		___m_from_2 = value;
	}

	inline static int32_t get_offset_of_m_until_3() { return static_cast<int32_t>(offsetof(X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7, ___m_until_3)); }
	inline DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  get_m_until_3() const { return ___m_until_3; }
	inline DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2 * get_address_of_m_until_3() { return &___m_until_3; }
	inline void set_m_until_3(DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  value)
	{
		___m_until_3 = value;
	}

	inline static int32_t get_offset_of_issuer_4() { return static_cast<int32_t>(offsetof(X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7, ___issuer_4)); }
	inline ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * get_issuer_4() const { return ___issuer_4; }
	inline ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA ** get_address_of_issuer_4() { return &___issuer_4; }
	inline void set_issuer_4(ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * value)
	{
		___issuer_4 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_4), value);
	}

	inline static int32_t get_offset_of_m_issuername_5() { return static_cast<int32_t>(offsetof(X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7, ___m_issuername_5)); }
	inline String_t* get_m_issuername_5() const { return ___m_issuername_5; }
	inline String_t** get_address_of_m_issuername_5() { return &___m_issuername_5; }
	inline void set_m_issuername_5(String_t* value)
	{
		___m_issuername_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_issuername_5), value);
	}

	inline static int32_t get_offset_of_m_keyalgo_6() { return static_cast<int32_t>(offsetof(X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7, ___m_keyalgo_6)); }
	inline String_t* get_m_keyalgo_6() const { return ___m_keyalgo_6; }
	inline String_t** get_address_of_m_keyalgo_6() { return &___m_keyalgo_6; }
	inline void set_m_keyalgo_6(String_t* value)
	{
		___m_keyalgo_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_keyalgo_6), value);
	}

	inline static int32_t get_offset_of_m_keyalgoparams_7() { return static_cast<int32_t>(offsetof(X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7, ___m_keyalgoparams_7)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_m_keyalgoparams_7() const { return ___m_keyalgoparams_7; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_m_keyalgoparams_7() { return &___m_keyalgoparams_7; }
	inline void set_m_keyalgoparams_7(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___m_keyalgoparams_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_keyalgoparams_7), value);
	}

	inline static int32_t get_offset_of_subject_8() { return static_cast<int32_t>(offsetof(X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7, ___subject_8)); }
	inline ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * get_subject_8() const { return ___subject_8; }
	inline ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA ** get_address_of_subject_8() { return &___subject_8; }
	inline void set_subject_8(ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * value)
	{
		___subject_8 = value;
		Il2CppCodeGenWriteBarrier((&___subject_8), value);
	}

	inline static int32_t get_offset_of_m_subject_9() { return static_cast<int32_t>(offsetof(X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7, ___m_subject_9)); }
	inline String_t* get_m_subject_9() const { return ___m_subject_9; }
	inline String_t** get_address_of_m_subject_9() { return &___m_subject_9; }
	inline void set_m_subject_9(String_t* value)
	{
		___m_subject_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_subject_9), value);
	}

	inline static int32_t get_offset_of_m_publickey_10() { return static_cast<int32_t>(offsetof(X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7, ___m_publickey_10)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_m_publickey_10() const { return ___m_publickey_10; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_m_publickey_10() { return &___m_publickey_10; }
	inline void set_m_publickey_10(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___m_publickey_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_publickey_10), value);
	}

	inline static int32_t get_offset_of_signature_11() { return static_cast<int32_t>(offsetof(X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7, ___signature_11)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_signature_11() const { return ___signature_11; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_signature_11() { return &___signature_11; }
	inline void set_signature_11(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___signature_11 = value;
		Il2CppCodeGenWriteBarrier((&___signature_11), value);
	}

	inline static int32_t get_offset_of_m_signaturealgo_12() { return static_cast<int32_t>(offsetof(X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7, ___m_signaturealgo_12)); }
	inline String_t* get_m_signaturealgo_12() const { return ___m_signaturealgo_12; }
	inline String_t** get_address_of_m_signaturealgo_12() { return &___m_signaturealgo_12; }
	inline void set_m_signaturealgo_12(String_t* value)
	{
		___m_signaturealgo_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_signaturealgo_12), value);
	}

	inline static int32_t get_offset_of_m_signaturealgoparams_13() { return static_cast<int32_t>(offsetof(X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7, ___m_signaturealgoparams_13)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_m_signaturealgoparams_13() const { return ___m_signaturealgoparams_13; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_m_signaturealgoparams_13() { return &___m_signaturealgoparams_13; }
	inline void set_m_signaturealgoparams_13(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___m_signaturealgoparams_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_signaturealgoparams_13), value);
	}

	inline static int32_t get_offset_of_certhash_14() { return static_cast<int32_t>(offsetof(X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7, ___certhash_14)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_certhash_14() const { return ___certhash_14; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_certhash_14() { return &___certhash_14; }
	inline void set_certhash_14(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___certhash_14 = value;
		Il2CppCodeGenWriteBarrier((&___certhash_14), value);
	}

	inline static int32_t get_offset_of__rsa_15() { return static_cast<int32_t>(offsetof(X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7, ____rsa_15)); }
	inline RSA_t565B1E1F95589A0E37D0C66406CF730DC4A43051 * get__rsa_15() const { return ____rsa_15; }
	inline RSA_t565B1E1F95589A0E37D0C66406CF730DC4A43051 ** get_address_of__rsa_15() { return &____rsa_15; }
	inline void set__rsa_15(RSA_t565B1E1F95589A0E37D0C66406CF730DC4A43051 * value)
	{
		____rsa_15 = value;
		Il2CppCodeGenWriteBarrier((&____rsa_15), value);
	}

	inline static int32_t get_offset_of__dsa_16() { return static_cast<int32_t>(offsetof(X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7, ____dsa_16)); }
	inline DSA_tF8DC81D58B7A574DF51517FD242D76B4FC225808 * get__dsa_16() const { return ____dsa_16; }
	inline DSA_tF8DC81D58B7A574DF51517FD242D76B4FC225808 ** get_address_of__dsa_16() { return &____dsa_16; }
	inline void set__dsa_16(DSA_tF8DC81D58B7A574DF51517FD242D76B4FC225808 * value)
	{
		____dsa_16 = value;
		Il2CppCodeGenWriteBarrier((&____dsa_16), value);
	}

	inline static int32_t get_offset_of_version_17() { return static_cast<int32_t>(offsetof(X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7, ___version_17)); }
	inline int32_t get_version_17() const { return ___version_17; }
	inline int32_t* get_address_of_version_17() { return &___version_17; }
	inline void set_version_17(int32_t value)
	{
		___version_17 = value;
	}

	inline static int32_t get_offset_of_serialnumber_18() { return static_cast<int32_t>(offsetof(X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7, ___serialnumber_18)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_serialnumber_18() const { return ___serialnumber_18; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_serialnumber_18() { return &___serialnumber_18; }
	inline void set_serialnumber_18(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___serialnumber_18 = value;
		Il2CppCodeGenWriteBarrier((&___serialnumber_18), value);
	}

	inline static int32_t get_offset_of_issuerUniqueID_19() { return static_cast<int32_t>(offsetof(X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7, ___issuerUniqueID_19)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_issuerUniqueID_19() const { return ___issuerUniqueID_19; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_issuerUniqueID_19() { return &___issuerUniqueID_19; }
	inline void set_issuerUniqueID_19(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___issuerUniqueID_19 = value;
		Il2CppCodeGenWriteBarrier((&___issuerUniqueID_19), value);
	}

	inline static int32_t get_offset_of_subjectUniqueID_20() { return static_cast<int32_t>(offsetof(X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7, ___subjectUniqueID_20)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_subjectUniqueID_20() const { return ___subjectUniqueID_20; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_subjectUniqueID_20() { return &___subjectUniqueID_20; }
	inline void set_subjectUniqueID_20(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___subjectUniqueID_20 = value;
		Il2CppCodeGenWriteBarrier((&___subjectUniqueID_20), value);
	}

	inline static int32_t get_offset_of_extensions_21() { return static_cast<int32_t>(offsetof(X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7, ___extensions_21)); }
	inline X509ExtensionCollection_t755DFCBDA8823D949578ED886BAFA4BF87706991 * get_extensions_21() const { return ___extensions_21; }
	inline X509ExtensionCollection_t755DFCBDA8823D949578ED886BAFA4BF87706991 ** get_address_of_extensions_21() { return &___extensions_21; }
	inline void set_extensions_21(X509ExtensionCollection_t755DFCBDA8823D949578ED886BAFA4BF87706991 * value)
	{
		___extensions_21 = value;
		Il2CppCodeGenWriteBarrier((&___extensions_21), value);
	}
};

struct X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7_StaticFields
{
public:
	// System.String Mono.Security.X509.X509Certificate::encoding_error
	String_t* ___encoding_error_22;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Certificate::<>f__switch$mapF
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * ___U3CU3Ef__switchU24mapF_23;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Certificate::<>f__switch$map10
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * ___U3CU3Ef__switchU24map10_24;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Certificate::<>f__switch$map11
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * ___U3CU3Ef__switchU24map11_25;

public:
	inline static int32_t get_offset_of_encoding_error_22() { return static_cast<int32_t>(offsetof(X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7_StaticFields, ___encoding_error_22)); }
	inline String_t* get_encoding_error_22() const { return ___encoding_error_22; }
	inline String_t** get_address_of_encoding_error_22() { return &___encoding_error_22; }
	inline void set_encoding_error_22(String_t* value)
	{
		___encoding_error_22 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_error_22), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapF_23() { return static_cast<int32_t>(offsetof(X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7_StaticFields, ___U3CU3Ef__switchU24mapF_23)); }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * get_U3CU3Ef__switchU24mapF_23() const { return ___U3CU3Ef__switchU24mapF_23; }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 ** get_address_of_U3CU3Ef__switchU24mapF_23() { return &___U3CU3Ef__switchU24mapF_23; }
	inline void set_U3CU3Ef__switchU24mapF_23(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * value)
	{
		___U3CU3Ef__switchU24mapF_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapF_23), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map10_24() { return static_cast<int32_t>(offsetof(X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7_StaticFields, ___U3CU3Ef__switchU24map10_24)); }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * get_U3CU3Ef__switchU24map10_24() const { return ___U3CU3Ef__switchU24map10_24; }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 ** get_address_of_U3CU3Ef__switchU24map10_24() { return &___U3CU3Ef__switchU24map10_24; }
	inline void set_U3CU3Ef__switchU24map10_24(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * value)
	{
		___U3CU3Ef__switchU24map10_24 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map10_24), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map11_25() { return static_cast<int32_t>(offsetof(X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7_StaticFields, ___U3CU3Ef__switchU24map11_25)); }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * get_U3CU3Ef__switchU24map11_25() const { return ___U3CU3Ef__switchU24map11_25; }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 ** get_address_of_U3CU3Ef__switchU24map11_25() { return &___U3CU3Ef__switchU24map11_25; }
	inline void set_U3CU3Ef__switchU24map11_25(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * value)
	{
		___U3CU3Ef__switchU24map11_25 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map11_25), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATE_TF81384408319B1A7C4393A41881A123CF518E4A7_H
#ifndef X509CRL_T0F4FF7AC198D6861956B4C959663AA0C23A534BA_H
#define X509CRL_T0F4FF7AC198D6861956B4C959663AA0C23A534BA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Crl
struct  X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Crl::issuer
	String_t* ___issuer_0;
	// System.Byte Mono.Security.X509.X509Crl::version
	uint8_t ___version_1;
	// System.DateTime Mono.Security.X509.X509Crl::thisUpdate
	DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  ___thisUpdate_2;
	// System.DateTime Mono.Security.X509.X509Crl::nextUpdate
	DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  ___nextUpdate_3;
	// System.Collections.ArrayList Mono.Security.X509.X509Crl::entries
	ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * ___entries_4;
	// System.String Mono.Security.X509.X509Crl::signatureOID
	String_t* ___signatureOID_5;
	// System.Byte[] Mono.Security.X509.X509Crl::signature
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___signature_6;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::extensions
	X509ExtensionCollection_t755DFCBDA8823D949578ED886BAFA4BF87706991 * ___extensions_7;
	// System.Byte[] Mono.Security.X509.X509Crl::encoded
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___encoded_8;
	// System.Byte[] Mono.Security.X509.X509Crl::hash_value
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___hash_value_9;

public:
	inline static int32_t get_offset_of_issuer_0() { return static_cast<int32_t>(offsetof(X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA, ___issuer_0)); }
	inline String_t* get_issuer_0() const { return ___issuer_0; }
	inline String_t** get_address_of_issuer_0() { return &___issuer_0; }
	inline void set_issuer_0(String_t* value)
	{
		___issuer_0 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_0), value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA, ___version_1)); }
	inline uint8_t get_version_1() const { return ___version_1; }
	inline uint8_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(uint8_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_thisUpdate_2() { return static_cast<int32_t>(offsetof(X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA, ___thisUpdate_2)); }
	inline DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  get_thisUpdate_2() const { return ___thisUpdate_2; }
	inline DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2 * get_address_of_thisUpdate_2() { return &___thisUpdate_2; }
	inline void set_thisUpdate_2(DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  value)
	{
		___thisUpdate_2 = value;
	}

	inline static int32_t get_offset_of_nextUpdate_3() { return static_cast<int32_t>(offsetof(X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA, ___nextUpdate_3)); }
	inline DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  get_nextUpdate_3() const { return ___nextUpdate_3; }
	inline DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2 * get_address_of_nextUpdate_3() { return &___nextUpdate_3; }
	inline void set_nextUpdate_3(DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  value)
	{
		___nextUpdate_3 = value;
	}

	inline static int32_t get_offset_of_entries_4() { return static_cast<int32_t>(offsetof(X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA, ___entries_4)); }
	inline ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * get_entries_4() const { return ___entries_4; }
	inline ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F ** get_address_of_entries_4() { return &___entries_4; }
	inline void set_entries_4(ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * value)
	{
		___entries_4 = value;
		Il2CppCodeGenWriteBarrier((&___entries_4), value);
	}

	inline static int32_t get_offset_of_signatureOID_5() { return static_cast<int32_t>(offsetof(X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA, ___signatureOID_5)); }
	inline String_t* get_signatureOID_5() const { return ___signatureOID_5; }
	inline String_t** get_address_of_signatureOID_5() { return &___signatureOID_5; }
	inline void set_signatureOID_5(String_t* value)
	{
		___signatureOID_5 = value;
		Il2CppCodeGenWriteBarrier((&___signatureOID_5), value);
	}

	inline static int32_t get_offset_of_signature_6() { return static_cast<int32_t>(offsetof(X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA, ___signature_6)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_signature_6() const { return ___signature_6; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_signature_6() { return &___signature_6; }
	inline void set_signature_6(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___signature_6 = value;
		Il2CppCodeGenWriteBarrier((&___signature_6), value);
	}

	inline static int32_t get_offset_of_extensions_7() { return static_cast<int32_t>(offsetof(X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA, ___extensions_7)); }
	inline X509ExtensionCollection_t755DFCBDA8823D949578ED886BAFA4BF87706991 * get_extensions_7() const { return ___extensions_7; }
	inline X509ExtensionCollection_t755DFCBDA8823D949578ED886BAFA4BF87706991 ** get_address_of_extensions_7() { return &___extensions_7; }
	inline void set_extensions_7(X509ExtensionCollection_t755DFCBDA8823D949578ED886BAFA4BF87706991 * value)
	{
		___extensions_7 = value;
		Il2CppCodeGenWriteBarrier((&___extensions_7), value);
	}

	inline static int32_t get_offset_of_encoded_8() { return static_cast<int32_t>(offsetof(X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA, ___encoded_8)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_encoded_8() const { return ___encoded_8; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_encoded_8() { return &___encoded_8; }
	inline void set_encoded_8(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___encoded_8 = value;
		Il2CppCodeGenWriteBarrier((&___encoded_8), value);
	}

	inline static int32_t get_offset_of_hash_value_9() { return static_cast<int32_t>(offsetof(X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA, ___hash_value_9)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_hash_value_9() const { return ___hash_value_9; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_hash_value_9() { return &___hash_value_9; }
	inline void set_hash_value_9(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___hash_value_9 = value;
		Il2CppCodeGenWriteBarrier((&___hash_value_9), value);
	}
};

struct X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Crl::<>f__switch$map13
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * ___U3CU3Ef__switchU24map13_10;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map13_10() { return static_cast<int32_t>(offsetof(X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA_StaticFields, ___U3CU3Ef__switchU24map13_10)); }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * get_U3CU3Ef__switchU24map13_10() const { return ___U3CU3Ef__switchU24map13_10; }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 ** get_address_of_U3CU3Ef__switchU24map13_10() { return &___U3CU3Ef__switchU24map13_10; }
	inline void set_U3CU3Ef__switchU24map13_10(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * value)
	{
		___U3CU3Ef__switchU24map13_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map13_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CRL_T0F4FF7AC198D6861956B4C959663AA0C23A534BA_H
#ifndef X509CRLENTRY_TBF2584E52778416F84EA34B6F693BF1BED81EFF1_H
#define X509CRLENTRY_TBF2584E52778416F84EA34B6F693BF1BED81EFF1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Crl/X509CrlEntry
struct  X509CrlEntry_tBF2584E52778416F84EA34B6F693BF1BED81EFF1  : public RuntimeObject
{
public:
	// System.Byte[] Mono.Security.X509.X509Crl/X509CrlEntry::sn
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___sn_0;
	// System.DateTime Mono.Security.X509.X509Crl/X509CrlEntry::revocationDate
	DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  ___revocationDate_1;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl/X509CrlEntry::extensions
	X509ExtensionCollection_t755DFCBDA8823D949578ED886BAFA4BF87706991 * ___extensions_2;

public:
	inline static int32_t get_offset_of_sn_0() { return static_cast<int32_t>(offsetof(X509CrlEntry_tBF2584E52778416F84EA34B6F693BF1BED81EFF1, ___sn_0)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_sn_0() const { return ___sn_0; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_sn_0() { return &___sn_0; }
	inline void set_sn_0(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___sn_0 = value;
		Il2CppCodeGenWriteBarrier((&___sn_0), value);
	}

	inline static int32_t get_offset_of_revocationDate_1() { return static_cast<int32_t>(offsetof(X509CrlEntry_tBF2584E52778416F84EA34B6F693BF1BED81EFF1, ___revocationDate_1)); }
	inline DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  get_revocationDate_1() const { return ___revocationDate_1; }
	inline DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2 * get_address_of_revocationDate_1() { return &___revocationDate_1; }
	inline void set_revocationDate_1(DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  value)
	{
		___revocationDate_1 = value;
	}

	inline static int32_t get_offset_of_extensions_2() { return static_cast<int32_t>(offsetof(X509CrlEntry_tBF2584E52778416F84EA34B6F693BF1BED81EFF1, ___extensions_2)); }
	inline X509ExtensionCollection_t755DFCBDA8823D949578ED886BAFA4BF87706991 * get_extensions_2() const { return ___extensions_2; }
	inline X509ExtensionCollection_t755DFCBDA8823D949578ED886BAFA4BF87706991 ** get_address_of_extensions_2() { return &___extensions_2; }
	inline void set_extensions_2(X509ExtensionCollection_t755DFCBDA8823D949578ED886BAFA4BF87706991 * value)
	{
		___extensions_2 = value;
		Il2CppCodeGenWriteBarrier((&___extensions_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CRLENTRY_TBF2584E52778416F84EA34B6F693BF1BED81EFF1_H
#ifndef FILESYSTEMINFO_T586C777C7B902A832D24F6B8699716DC0798F3F1_H
#define FILESYSTEMINFO_T586C777C7B902A832D24F6B8699716DC0798F3F1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileSystemInfo
struct  FileSystemInfo_t586C777C7B902A832D24F6B8699716DC0798F3F1  : public MarshalByRefObject_t05F62A8AC86E36BAE3063CA28097945DE9E179C4
{
public:
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_1;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_2;
	// System.IO.MonoIOStat System.IO.FileSystemInfo::stat
	MonoIOStat_t9E1DAB7BE1A3A11C71E671C4B32DD25232340F3C  ___stat_3;
	// System.Boolean System.IO.FileSystemInfo::valid
	bool ___valid_4;

public:
	inline static int32_t get_offset_of_FullPath_1() { return static_cast<int32_t>(offsetof(FileSystemInfo_t586C777C7B902A832D24F6B8699716DC0798F3F1, ___FullPath_1)); }
	inline String_t* get_FullPath_1() const { return ___FullPath_1; }
	inline String_t** get_address_of_FullPath_1() { return &___FullPath_1; }
	inline void set_FullPath_1(String_t* value)
	{
		___FullPath_1 = value;
		Il2CppCodeGenWriteBarrier((&___FullPath_1), value);
	}

	inline static int32_t get_offset_of_OriginalPath_2() { return static_cast<int32_t>(offsetof(FileSystemInfo_t586C777C7B902A832D24F6B8699716DC0798F3F1, ___OriginalPath_2)); }
	inline String_t* get_OriginalPath_2() const { return ___OriginalPath_2; }
	inline String_t** get_address_of_OriginalPath_2() { return &___OriginalPath_2; }
	inline void set_OriginalPath_2(String_t* value)
	{
		___OriginalPath_2 = value;
		Il2CppCodeGenWriteBarrier((&___OriginalPath_2), value);
	}

	inline static int32_t get_offset_of_stat_3() { return static_cast<int32_t>(offsetof(FileSystemInfo_t586C777C7B902A832D24F6B8699716DC0798F3F1, ___stat_3)); }
	inline MonoIOStat_t9E1DAB7BE1A3A11C71E671C4B32DD25232340F3C  get_stat_3() const { return ___stat_3; }
	inline MonoIOStat_t9E1DAB7BE1A3A11C71E671C4B32DD25232340F3C * get_address_of_stat_3() { return &___stat_3; }
	inline void set_stat_3(MonoIOStat_t9E1DAB7BE1A3A11C71E671C4B32DD25232340F3C  value)
	{
		___stat_3 = value;
	}

	inline static int32_t get_offset_of_valid_4() { return static_cast<int32_t>(offsetof(FileSystemInfo_t586C777C7B902A832D24F6B8699716DC0798F3F1, ___valid_4)); }
	inline bool get_valid_4() const { return ___valid_4; }
	inline bool* get_address_of_valid_4() { return &___valid_4; }
	inline void set_valid_4(bool value)
	{
		___valid_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESYSTEMINFO_T586C777C7B902A832D24F6B8699716DC0798F3F1_H
#ifndef DIRECTORYINFO_T376108E971037F9393AA9B6A2B4FCE48DBA258F3_H
#define DIRECTORYINFO_T376108E971037F9393AA9B6A2B4FCE48DBA258F3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.DirectoryInfo
struct  DirectoryInfo_t376108E971037F9393AA9B6A2B4FCE48DBA258F3  : public FileSystemInfo_t586C777C7B902A832D24F6B8699716DC0798F3F1
{
public:
	// System.String System.IO.DirectoryInfo::current
	String_t* ___current_5;
	// System.String System.IO.DirectoryInfo::parent
	String_t* ___parent_6;

public:
	inline static int32_t get_offset_of_current_5() { return static_cast<int32_t>(offsetof(DirectoryInfo_t376108E971037F9393AA9B6A2B4FCE48DBA258F3, ___current_5)); }
	inline String_t* get_current_5() const { return ___current_5; }
	inline String_t** get_address_of_current_5() { return &___current_5; }
	inline void set_current_5(String_t* value)
	{
		___current_5 = value;
		Il2CppCodeGenWriteBarrier((&___current_5), value);
	}

	inline static int32_t get_offset_of_parent_6() { return static_cast<int32_t>(offsetof(DirectoryInfo_t376108E971037F9393AA9B6A2B4FCE48DBA258F3, ___parent_6)); }
	inline String_t* get_parent_6() const { return ___parent_6; }
	inline String_t** get_address_of_parent_6() { return &___parent_6; }
	inline void set_parent_6(String_t* value)
	{
		___parent_6 = value;
		Il2CppCodeGenWriteBarrier((&___parent_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTORYINFO_T376108E971037F9393AA9B6A2B4FCE48DBA258F3_H
// System.Byte[]
struct ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8  : public RuntimeArray
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


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1A2BA80BB42BE237C6B282689178EE43BD1196CA_gshared (Dictionary_2_t3BE3B3611169A9445796DD06948526DEEF990F44 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m6B49CBBA9928D53786A1710B97F9899523B6ED2D_gshared (Dictionary_2_t3BE3B3611169A9445796DD06948526DEEF990F44 * __this, RuntimeObject * p0, int32_t p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mDEBB7F195FFD40D68FF87F23F7D5D3E111C0B13D_gshared (Dictionary_2_t3BE3B3611169A9445796DD06948526DEEF990F44 * __this, RuntimeObject * p0, int32_t* p1, const RuntimeMethod* method);

// System.Void System.Collections.CollectionBase::.ctor()
extern "C" IL2CPP_METHOD_ATTR void CollectionBase__ctor_mE10A53D13BDEACE9F36B720D8AEBC37078CA0256 (CollectionBase_tC3F24120B23471E7FDEE72107D1D541E6456744F * __this, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509CertificateCollection::AddRange(Mono.Security.X509.X509CertificateCollection)
extern "C" IL2CPP_METHOD_ATTR void X509CertificateCollection_AddRange_m2D89051B8F700AED39D1654110D928E5ED06A96D (X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * __this, X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * ___value0, const RuntimeMethod* method);
// System.Collections.ArrayList System.Collections.CollectionBase::get_InnerList()
extern "C" IL2CPP_METHOD_ATTR ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * CollectionBase_get_InnerList_m2DA9775BF4D5335ADCF550220DCD31292A7D6CC9 (CollectionBase_tC3F24120B23471E7FDEE72107D1D541E6456744F * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mBA1072348F0861F80512F3BB2BE685EDBB02F740 (ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 * __this, String_t* p0, const RuntimeMethod* method);
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509CertificateCollection::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * X509CertificateCollection_get_Item_m0977D3820DD709E9A089908E023E5E64583E27C1 (X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 Mono.Security.X509.X509CertificateCollection::IndexOf(Mono.Security.X509.X509Certificate)
extern "C" IL2CPP_METHOD_ATTR int32_t X509CertificateCollection_IndexOf_mDBAF9ADAFB8AC2D92C8B7C09A44A7F5BD2DE202E (X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * __this, X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * ___value0, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::.ctor(Mono.Security.X509.X509CertificateCollection)
extern "C" IL2CPP_METHOD_ATTR void X509CertificateEnumerator__ctor_m8013F739228FCDDEAFF9455191527582DB35FA01 (X509CertificateEnumerator_t73F2B8AEDEF6F187870E8A2750847EEE931E16D3 * __this, X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * ___mappings0, const RuntimeMethod* method);
// System.Byte[] Mono.Security.X509.X509Certificate::get_Hash()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* X509Certificate_get_Hash_m762100BCEDE1952615651447892D0821A69A0B72 (X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * __this, const RuntimeMethod* method);
// System.Boolean Mono.Security.X509.X509CertificateCollection::Compare(System.Byte[],System.Byte[])
extern "C" IL2CPP_METHOD_ATTR bool X509CertificateCollection_Compare_mDD1C4B12D2469718CAA0559992336C5CFE1F3EEE (X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * __this, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___array10, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___array21, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509CertificateCollection::.ctor()
extern "C" IL2CPP_METHOD_ATTR void X509CertificateCollection__ctor_m1BF85475F4F2C28AF14731784A9C9135B51F2D23 (X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * __this, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509Chain::.ctor()
extern "C" IL2CPP_METHOD_ATTR void X509Chain__ctor_mBB65549B629ED2E43FD24B4CB73B3F3A0776E5EB (X509Chain_t4EEB0B913205B0D6B063AFB393AFA17BEFCA3D67 * __this, const RuntimeMethod* method);
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509StoreManager::get_TrustedRootCertificates()
extern "C" IL2CPP_METHOD_ATTR X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * X509StoreManager_get_TrustedRootCertificates_m3F74D1403F745F5C8BD1AA02F273AD33B719618E (const RuntimeMethod* method);
// System.Int32 Mono.Security.X509.X509CertificateCollection::Add(Mono.Security.X509.X509Certificate)
extern "C" IL2CPP_METHOD_ATTR int32_t X509CertificateCollection_Add_m1215D57A35803EA383A007725E9B2B0271369953 (X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * __this, X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * ___value0, const RuntimeMethod* method);
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::FindCertificateParent(Mono.Security.X509.X509Certificate)
extern "C" IL2CPP_METHOD_ATTR X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * X509Chain_FindCertificateParent_mD7DE692A61897D3091F4C7A9F1663ED9DAB5116A (X509Chain_t4EEB0B913205B0D6B063AFB393AFA17BEFCA3D67 * __this, X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * ___child0, const RuntimeMethod* method);
// System.Boolean Mono.Security.X509.X509Certificate::get_IsSelfSigned()
extern "C" IL2CPP_METHOD_ATTR bool X509Certificate_get_IsSelfSigned_mE2B94803B5DAB2AE091041100A5B1B9B820A0859 (X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * __this, const RuntimeMethod* method);
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::FindCertificateRoot(Mono.Security.X509.X509Certificate)
extern "C" IL2CPP_METHOD_ATTR X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * X509Chain_FindCertificateRoot_mE58E326B32777852BA004E25E5B9DADB7CCDE4F7 (X509Chain_t4EEB0B913205B0D6B063AFB393AFA17BEFCA3D67 * __this, X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * ___potentialRoot0, const RuntimeMethod* method);
// System.Int32 System.Collections.CollectionBase::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t CollectionBase_get_Count_m373858F7255B918D85C9948172F92F8361899AA3 (CollectionBase_tC3F24120B23471E7FDEE72107D1D541E6456744F * __this, const RuntimeMethod* method);
// System.Boolean Mono.Security.X509.X509Chain::IsParent(Mono.Security.X509.X509Certificate,Mono.Security.X509.X509Certificate)
extern "C" IL2CPP_METHOD_ATTR bool X509Chain_IsParent_m9DE86CEF1E85378A482E85CC86E8B58D6C3D4AF8 (X509Chain_t4EEB0B913205B0D6B063AFB393AFA17BEFCA3D67 * __this, X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * ___child0, X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * ___parent1, const RuntimeMethod* method);
// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator Mono.Security.X509.X509CertificateCollection::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR X509CertificateEnumerator_t73F2B8AEDEF6F187870E8A2750847EEE931E16D3 * X509CertificateCollection_GetEnumerator_m72041E779CFB1AE2F67B292777BD9A89C7361756 (X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * __this, const RuntimeMethod* method);
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::get_Current()
extern "C" IL2CPP_METHOD_ATTR X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * X509CertificateEnumerator_get_Current_mFDFB0919E5D374ACA156602F6EACF50613C7F3BC (X509CertificateEnumerator_t73F2B8AEDEF6F187870E8A2750847EEE931E16D3 * __this, const RuntimeMethod* method);
// System.Boolean Mono.Security.X509.X509Chain::IsValid(Mono.Security.X509.X509Certificate)
extern "C" IL2CPP_METHOD_ATTR bool X509Chain_IsValid_mB8090230AD1DF880D188DE4E37483C082D1E01B2 (X509Chain_t4EEB0B913205B0D6B063AFB393AFA17BEFCA3D67 * __this, X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * ___cert0, const RuntimeMethod* method);
// System.Boolean Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool X509CertificateEnumerator_MoveNext_m8F37FA272D0F2E22FE55815A8B631CFA7D091262 (X509CertificateEnumerator_t73F2B8AEDEF6F187870E8A2750847EEE931E16D3 * __this, const RuntimeMethod* method);
// System.Boolean Mono.Security.X509.X509Certificate::get_IsCurrent()
extern "C" IL2CPP_METHOD_ATTR bool X509Certificate_get_IsCurrent_m2C566AEC95BE6369A7E746FF5959D465EF474B6B (X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * __this, const RuntimeMethod* method);
// System.Boolean System.Net.ServicePointManager::get_CheckCertificateRevocationList()
extern "C" IL2CPP_METHOD_ATTR bool ServicePointManager_get_CheckCertificateRevocationList_mB236C2D3D46DFB173A35AAB528FDF279B427E8B3 (const RuntimeMethod* method);
// System.Boolean Mono.Security.X509.X509Chain::IsTrusted(Mono.Security.X509.X509Certificate)
extern "C" IL2CPP_METHOD_ATTR bool X509Chain_IsTrusted_m67A6AF9052861773F1F4CD9F8BA7FEC437463F86 (X509Chain_t4EEB0B913205B0D6B063AFB393AFA17BEFCA3D67 * __this, X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * ___potentialTrusted0, const RuntimeMethod* method);
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::get_TrustAnchors()
extern "C" IL2CPP_METHOD_ATTR X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * X509Chain_get_TrustAnchors_m38E64354F9AC5B6EC1C0F1B95ED9A0F2AF87AF59 (X509Chain_t4EEB0B913205B0D6B063AFB393AFA17BEFCA3D67 * __this, const RuntimeMethod* method);
// System.Boolean Mono.Security.X509.X509CertificateCollection::Contains(Mono.Security.X509.X509Certificate)
extern "C" IL2CPP_METHOD_ATTR bool X509CertificateCollection_Contains_m33431FCE6D5C426D59FBE07074688182E8026B14 (X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * __this, X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * ___value0, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Inequality_mFBA7B689F4FFCEE1224F60E7445E7C1A3F2F362B (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Int32 Mono.Security.X509.X509Certificate::get_Version()
extern "C" IL2CPP_METHOD_ATTR int32_t X509Certificate_get_Version_mF5D3F0BD3C02875F719DAD5A1B2938CBED20ABC5 (X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * __this, const RuntimeMethod* method);
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Certificate::get_Extensions()
extern "C" IL2CPP_METHOD_ATTR X509ExtensionCollection_t755DFCBDA8823D949578ED886BAFA4BF87706991 * X509Certificate_get_Extensions_m42B9373BA00A0CA4B6133693D9017DF674C8C391 (X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * __this, const RuntimeMethod* method);
// Mono.Security.X509.X509Extension Mono.Security.X509.X509ExtensionCollection::get_Item(System.String)
extern "C" IL2CPP_METHOD_ATTR X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 * X509ExtensionCollection_get_Item_mF9CB19EA43F26742A0414EA82D9B7E8F3D19B867 (X509ExtensionCollection_t755DFCBDA8823D949578ED886BAFA4BF87706991 * __this, String_t* ___oid0, const RuntimeMethod* method);
// System.Void Mono.Security.X509.Extensions.BasicConstraintsExtension::.ctor(Mono.Security.X509.X509Extension)
extern "C" IL2CPP_METHOD_ATTR void BasicConstraintsExtension__ctor_m5A28494F3DCF402A9CCCD318C66D707970EE20FC (BasicConstraintsExtension_t519E68578F3BFB9B3588596B24BF4B729D26494E * __this, X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 * ___extension0, const RuntimeMethod* method);
// System.Boolean Mono.Security.X509.Extensions.BasicConstraintsExtension::get_CertificateAuthority()
extern "C" IL2CPP_METHOD_ATTR bool BasicConstraintsExtension_get_CertificateAuthority_mDC4441909831B5F96BC592DB974F332E88CC0FC2 (BasicConstraintsExtension_t519E68578F3BFB9B3588596B24BF4B729D26494E * __this, const RuntimeMethod* method);
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.RSA)
extern "C" IL2CPP_METHOD_ATTR bool X509Certificate_VerifySignature_mF6D0E716CB53B02BA479E1020A91431F2422FA25 (X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * __this, RSA_t565B1E1F95589A0E37D0C66406CF730DC4A43051 * ___rsa0, const RuntimeMethod* method);
// System.Object System.Array::Clone()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Array_Clone_m63F8DD231C00DCDECAE3582E72E7783D1349C57D (RuntimeArray * __this, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509Crl::Parse(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void X509Crl_Parse_m17DC5BBF779F81775F51E1DA57EE55EBDD428A90 (X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA * __this, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___crl0, const RuntimeMethod* method);
// System.Void Mono.Security.ASN1::.ctor(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void ASN1__ctor_mC35B4DE86D465D065D23C2A7F0BE2E2BD5BCE81B (ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * __this, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___data0, const RuntimeMethod* method);
// System.Byte Mono.Security.ASN1::get_Tag()
extern "C" IL2CPP_METHOD_ATTR uint8_t ASN1_get_Tag_mA0D39A4B0A7E2BF19563FF997A8CCEA03DDC0FBE (ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * __this, const RuntimeMethod* method);
// System.Int32 Mono.Security.ASN1::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t ASN1_get_Count_m2DE9AE59371E5BD294F898C93FC9554DD3C02E85 (ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * __this, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.CryptographicException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void CryptographicException__ctor_m3949B60BD8659B2BF4ADC9306891AD4BACA25E5C (CryptographicException_tEBE52D8795404FE91A37B2662AED1CDF46CD3920 * __this, String_t* p0, const RuntimeMethod* method);
// Mono.Security.ASN1 Mono.Security.ASN1::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * ASN1_get_Item_m087B522444CC10BD9BFE5144961DF6ED3F1E7948 (ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Byte[] Mono.Security.ASN1::get_Value()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ASN1_get_Value_m893A1DDEE56260B6F1F8747051EE14E9EF84EC90 (ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * __this, const RuntimeMethod* method);
// System.String Mono.Security.ASN1Convert::ToOid(Mono.Security.ASN1)
extern "C" IL2CPP_METHOD_ATTR String_t* ASN1Convert_ToOid_mF946DA90DFB49894856E9CFD807D60600EC19448 (ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * ___asn10, const RuntimeMethod* method);
// System.String Mono.Security.X509.X501::ToString(Mono.Security.ASN1)
extern "C" IL2CPP_METHOD_ATTR String_t* X501_ToString_m8238A998BDA65BD84951AB25CAC3CC3AF42E9E0F (ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * ___seq0, const RuntimeMethod* method);
// System.DateTime Mono.Security.ASN1Convert::ToDateTime(Mono.Security.ASN1)
extern "C" IL2CPP_METHOD_ATTR DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  ASN1Convert_ToDateTime_mEDB912E5FF6243C689A88E0A08F10AF4E6C3DFDE (ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * ___time0, const RuntimeMethod* method);
// System.Void System.Collections.ArrayList::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ArrayList__ctor_m152BD8901EFE6F5D542893FFB4C13186CCE9FD8B (ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * __this, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509Crl/X509CrlEntry::.ctor(Mono.Security.ASN1)
extern "C" IL2CPP_METHOD_ATTR void X509CrlEntry__ctor_m3A28575C3EB8FA74122CB79763993AB6596B8C5B (X509CrlEntry_tBF2584E52778416F84EA34B6F693BF1BED81EFF1 * __this, ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * ___entry0, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509ExtensionCollection::.ctor(Mono.Security.ASN1)
extern "C" IL2CPP_METHOD_ATTR void X509ExtensionCollection__ctor_mD6D256F8D16DA2083043F31DEB283D5D4B37F6BF (X509ExtensionCollection_t755DFCBDA8823D949578ED886BAFA4BF87706991 * __this, ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * ___asn10, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3826EAA4F567A88037F77DAA4CA280E199698DC8 (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m9A63C717564520B770716072C1B44FDCF3C1AA9A (RuntimeArray * p0, int32_t p1, RuntimeArray * p2, int32_t p3, int32_t p4, const RuntimeMethod* method);
// System.String Mono.Security.X509.X509Crl::GetHashName()
extern "C" IL2CPP_METHOD_ATTR String_t* X509Crl_GetHashName_mCC743DEE79A5849EDE108FEA2A94EFBE7964C08E (X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA * __this, const RuntimeMethod* method);
// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.HashAlgorithm::Create(System.String)
extern "C" IL2CPP_METHOD_ATTR HashAlgorithm_t6A31A9B4CBC494EA9286D2A1097C6DC9BCE96CA0 * HashAlgorithm_Create_m4AA7C5F0D71A638441F053BEA51B440C2E3280D5 (String_t* p0, const RuntimeMethod* method);
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* HashAlgorithm_ComputeHash_mE4D7CD4D3001447A2280171601783B27220B725A (HashAlgorithm_t6A31A9B4CBC494EA9286D2A1097C6DC9BCE96CA0 * __this, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* p0, const RuntimeMethod* method);
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR X509CrlEntry_tBF2584E52778416F84EA34B6F693BF1BED81EFF1 * X509Crl_GetCrlEntry_mD00D74973110486576343395CA6E9954FB051A05 (X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA * __this, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___serialNumber0, const RuntimeMethod* method);
// System.Byte[] Mono.Security.X509.X509Crl/X509CrlEntry::get_SerialNumber()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* X509CrlEntry_get_SerialNumber_mA58F73A0C29131EFEF7EBEDE1D329257494B576E (X509CrlEntry_tBF2584E52778416F84EA34B6F693BF1BED81EFF1 * __this, const RuntimeMethod* method);
// System.Boolean Mono.Security.X509.X509Crl::Compare(System.Byte[],System.Byte[])
extern "C" IL2CPP_METHOD_ATTR bool X509Crl_Compare_m5D01CEB8DA8A8E4B9F758E012AD41C530D79D8E1 (X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA * __this, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___array10, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___array21, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Int32)
inline void Dictionary_2__ctor_m6FE5F177AC0E406A7D8E0ED92D2254062B8B62EF (Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 *, int32_t, const RuntimeMethod*))Dictionary_2__ctor_m1A2BA80BB42BE237C6B282689178EE43BD1196CA_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1)
inline void Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E (Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * __this, String_t* p0, int32_t p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 *, String_t*, int32_t, const RuntimeMethod*))Dictionary_2_Add_m6B49CBBA9928D53786A1710B97F9899523B6ED2D_gshared)(__this, p0, p1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m02F60CE92FF5819C471DE461A925C95B780AECAF (Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * __this, String_t* p0, int32_t* p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 *, String_t*, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_mDEBB7F195FFD40D68FF87F23F7D5D3E111C0B13D_gshared)(__this, p0, p1, method);
}
// System.Void System.Security.Cryptography.DSASignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" IL2CPP_METHOD_ATTR void DSASignatureDeformatter__ctor_m36291A9E815959D24C17228737B2B4858041C838 (DSASignatureDeformatter_t0A3DF19E0A5E10BE91A0779BDF9723CBDE57B357 * __this, AsymmetricAlgorithm_tCE2A08658EFEA671D977BC39FA246B4FC5092BB2 * p0, const RuntimeMethod* method);
// System.Int32 System.Math::Max(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Math_Max_m8B815B13982D8738EF051EA87C1CCB722CDF29B2 (int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Byte[] Mono.Security.X509.X509Crl::get_Hash()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* X509Crl_get_Hash_m1D83A886FF1142852347FC1950BDFADBFAE68480 (X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA * __this, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" IL2CPP_METHOD_ATTR void RSAPKCS1SignatureDeformatter__ctor_mC2D8F29D9F268BB1D910AC7A345E20874C37AB6B (RSAPKCS1SignatureDeformatter_t386250AF7C86EA2F614086AA52825277DBEC3A3F * __this, AsymmetricAlgorithm_tCE2A08658EFEA671D977BC39FA246B4FC5092BB2 * p0, const RuntimeMethod* method);
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.RSA)
extern "C" IL2CPP_METHOD_ATTR bool X509Crl_VerifySignature_m180CF72103AFD9411F2C3816241BB74B0C685B12 (X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA * __this, RSA_t565B1E1F95589A0E37D0C66406CF730DC4A43051 * ___rsa0, const RuntimeMethod* method);
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.DSA)
extern "C" IL2CPP_METHOD_ATTR bool X509Crl_VerifySignature_mC83C7F97283D639F18457D2263680E8064D36785 (X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA * __this, DSA_tF8DC81D58B7A574DF51517FD242D76B4FC225808 * ___dsa0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m631F783E957027CA661C281874882040F7693602 (NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Array::Reverse(System.Array)
extern "C" IL2CPP_METHOD_ATTR void Array_Reverse_mD0C0F739C51E380F6F770595D907C4C88AB9FE4B (RuntimeArray * p0, const RuntimeMethod* method);
// System.String Locale::GetText(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Locale_GetText_m336A40C92176E0F768132FB6A92A248657C6E038 (String_t* ___msg0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8917650A5D8F2F36C6B623A720DF2D2A630D3533 (ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 * __this, String_t* p0, const RuntimeMethod* method);
// System.Int32 Mono.Security.ASN1::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t ASN1_get_Length_m8A434F6E1AB4DCB7FE25E1BB37D269C4A112E5E2 (ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * __this, const RuntimeMethod* method);
// System.Void Mono.Security.ASN1::set_Value(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void ASN1_set_Value_m20947EB35C82D9B042F55454A8687CA8677A01F7 (ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * __this, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___value0, const RuntimeMethod* method);
// Mono.Security.ASN1 Mono.Security.ASN1::Add(Mono.Security.ASN1)
extern "C" IL2CPP_METHOD_ATTR ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * ASN1_Add_m054AB5BE27617D626FA7E633C0B1AD5543A3552E (ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * __this, ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * ___asn10, const RuntimeMethod* method);
// Mono.Security.ASN1 Mono.Security.X509.X509Extension::get_Value()
extern "C" IL2CPP_METHOD_ATTR ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * X509Extension_get_Value_mF79631BD8114F8FA7E8D645E83DAF0D527519B51 (X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 * __this, const RuntimeMethod* method);
// System.String Mono.Security.X509.X509Extension::get_Oid()
extern "C" IL2CPP_METHOD_ATTR String_t* X509Extension_get_Oid_m09F4EE740F0B631F9917FE345258FF2F2A41F08A (X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 * __this, const RuntimeMethod* method);
// System.Boolean Mono.Security.X509.X509Extension::get_Critical()
extern "C" IL2CPP_METHOD_ATTR bool X509Extension_get_Critical_m1BFE6392CDBA1809DE5C42DB109ECF1CACCFAEAE (X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 * __this, const RuntimeMethod* method);
// System.Int32 System.String::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t String_GetHashCode_mD3308B7BBDBBA8491D427035EE6570F52787AA2D (String_t* __this, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C" IL2CPP_METHOD_ATTR CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * CultureInfo_get_InvariantCulture_mC3D1AE4739EDD185D33883D326C375EB71D9A3BE (const RuntimeMethod* method);
// System.String System.Byte::ToString(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Byte_ToString_m94388CD6693B494E5D847B063EDE262F0991D518 (uint8_t* __this, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m402C4CFC4FCEC22D0A372742BC40DF2224C41F86 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Char System.Convert::ToChar(System.Byte)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_m443666DEF6640DE8D09A18F16D3E78BAAB71E150 (uint8_t p0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1F484B542C4F3C021CC03CFC09FE58A360ED4770 (StringBuilder_t * __this, Il2CppChar p0, const RuntimeMethod* method);
// System.String System.Environment::get_NewLine()
extern "C" IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_mE2007839F78B01EFFEE101DAD64A21C72B9A79BB (const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1E28545009F6227C8FEF73E8E74B9CFC5A97BF97 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509Extension::WriteLine(System.Text.StringBuilder,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void X509Extension_WriteLine_m1244F1ECEBCB55AD4259794195FEF5814994960A (X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 * __this, StringBuilder_t * ___sb0, int32_t ___n1, int32_t ___pos2, const RuntimeMethod* method);
// System.String System.Text.StringBuilder::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* StringBuilder_ToString_mD4C6AC273A5E792C65602E2CC71505C985B8CD6D (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509ExtensionCollection::.ctor()
extern "C" IL2CPP_METHOD_ATTR void X509ExtensionCollection__ctor_mE693D3DEF33D580C167E793F723620ED539022B9 (X509ExtensionCollection_t755DFCBDA8823D949578ED886BAFA4BF87706991 * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_mF2AC5246AA369ECB04B5DCDCDD52A8BD51754CD3 (Exception_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509Extension::.ctor(Mono.Security.ASN1)
extern "C" IL2CPP_METHOD_ATTR void X509Extension__ctor_mBD6F41EB0B35B0B55E9D63FBEE7E731AA73F7B54 (X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 * __this, ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * ___asn10, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55 (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Int32 Mono.Security.X509.X509ExtensionCollection::IndexOf(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t X509ExtensionCollection_IndexOf_mE7EE0B9DB2BCF725135A744A266856A54C36CBEF (X509ExtensionCollection_t755DFCBDA8823D949578ED886BAFA4BF87706991 * __this, String_t* ___oid0, const RuntimeMethod* method);
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::BuildCertificatesCollection(System.String)
extern "C" IL2CPP_METHOD_ATTR X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * X509Store_BuildCertificatesCollection_mC2BC2E03E0CBAC10D7FD4A7A0F8FF1DF4E768DEE (X509Store_t754E7C7E6C15F74AA8E7A3F0695EE7E1AD0C4302 * __this, String_t* ___storeName0, const RuntimeMethod* method);
// System.Collections.ArrayList Mono.Security.X509.X509Store::BuildCrlsCollection(System.String)
extern "C" IL2CPP_METHOD_ATTR ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * X509Store_BuildCrlsCollection_mD10565154B2AFE1728E732C94FF2BB01973CFB59 (X509Store_t754E7C7E6C15F74AA8E7A3F0695EE7E1AD0C4302 * __this, String_t* ___storeName0, const RuntimeMethod* method);
// System.IO.FileStream System.IO.File::OpenRead(System.String)
extern "C" IL2CPP_METHOD_ATTR FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4 * File_OpenRead_m74AF86DC0ABFA76B5ACCA29A79772FBC1A493BA0 (String_t* p0, const RuntimeMethod* method);
// System.Byte[] Mono.Security.X509.X509Store::Load(System.String)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* X509Store_Load_m9670C65801803A2C1812338DBA01EE5F3E4DC509 (X509Store_t754E7C7E6C15F74AA8E7A3F0695EE7E1AD0C4302 * __this, String_t* ___filename0, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509Certificate::.ctor(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void X509Certificate__ctor_m2DC281E84C43D226AAB966B55B0CDAFCB30B9B1C (X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * __this, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___data0, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509Crl::.ctor(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void X509Crl__ctor_mA021EA5191FE977762AA75753903A461E6DBD20D (X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA * __this, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___crl0, const RuntimeMethod* method);
// System.Boolean System.IO.Directory::Exists(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Directory_Exists_m2923A2DF2FFB70CEC66941DFC072138936271B36 (String_t* p0, const RuntimeMethod* method);
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
extern "C" IL2CPP_METHOD_ATTR DirectoryInfo_t376108E971037F9393AA9B6A2B4FCE48DBA258F3 * Directory_CreateDirectory_m8D16019A036CFF1A1200EFC07825F776F4FA8EFD (String_t* p0, const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Path_Combine_m60411551281148BF05E1DDBC1E31B9E612648B83 (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Boolean Mono.Security.X509.X509Store::CheckStore(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool X509Store_CheckStore_m7DD54563E8D3962C20A05D247791DAF5C7E065D9 (X509Store_t754E7C7E6C15F74AA8E7A3F0695EE7E1AD0C4302 * __this, String_t* ___path0, bool ___throwException1, const RuntimeMethod* method);
// System.String[] System.IO.Directory::GetFiles(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* Directory_GetFiles_m9A34D2E2801DB893F9454FCA52BA6BC7269C8F87 (String_t* p0, String_t* p1, const RuntimeMethod* method);
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Store::LoadCertificate(System.String)
extern "C" IL2CPP_METHOD_ATTR X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * X509Store_LoadCertificate_mB2B14099E478EF5D99C06EBFE458671379A34E79 (X509Store_t754E7C7E6C15F74AA8E7A3F0695EE7E1AD0C4302 * __this, String_t* ___filename0, const RuntimeMethod* method);
// Mono.Security.X509.X509Crl Mono.Security.X509.X509Store::LoadCrl(System.String)
extern "C" IL2CPP_METHOD_ATTR X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA * X509Store_LoadCrl_m63A35C74345A3DF1A9728D6DF1C77FCB02056064 (X509Store_t754E7C7E6C15F74AA8E7A3F0695EE7E1AD0C4302 * __this, String_t* ___filename0, const RuntimeMethod* method);
// System.String System.Environment::GetFolderPath(System.Environment/SpecialFolder)
extern "C" IL2CPP_METHOD_ATTR String_t* Environment_GetFolderPath_mC97C37AFEA0FBDD1FCE1AF7A873A5F794E804379 (int32_t p0, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509Stores::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void X509Stores__ctor_m2B0BAC1A899591190AEC66C633C2498148336477 (X509Stores_t2DA9540B452CEB83E67BC6CDF9B0346FA2B06C28 * __this, String_t* ___path0, const RuntimeMethod* method);
// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::get_CurrentUser()
extern "C" IL2CPP_METHOD_ATTR X509Stores_t2DA9540B452CEB83E67BC6CDF9B0346FA2B06C28 * X509StoreManager_get_CurrentUser_m3A5D6ACA99E9B270CF6F5B692212CE71D147CB39 (const RuntimeMethod* method);
// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::get_TrustedRoot()
extern "C" IL2CPP_METHOD_ATTR X509Store_t754E7C7E6C15F74AA8E7A3F0695EE7E1AD0C4302 * X509Stores_get_TrustedRoot_mCFBE5DA6C6C0EAD5454C9575694DEF17C0C8A01A (X509Stores_t2DA9540B452CEB83E67BC6CDF9B0346FA2B06C28 * __this, const RuntimeMethod* method);
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::get_Certificates()
extern "C" IL2CPP_METHOD_ATTR X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * X509Store_get_Certificates_mF244FB16A726D210EBC6DC278C61E2B99B09A8A1 (X509Store_t754E7C7E6C15F74AA8E7A3F0695EE7E1AD0C4302 * __this, const RuntimeMethod* method);
// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::get_LocalMachine()
extern "C" IL2CPP_METHOD_ATTR X509Stores_t2DA9540B452CEB83E67BC6CDF9B0346FA2B06C28 * X509StoreManager_get_LocalMachine_m6414713A649215CF8E62CA28B500C7A5DFF304CC (const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509Store::.ctor(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void X509Store__ctor_mA96C2EB0BB8C9EF2B87E5042FD8FE2DA9520DB68 (X509Store_t754E7C7E6C15F74AA8E7A3F0695EE7E1AD0C4302 * __this, String_t* ___path0, bool ___crl1, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X509CertificateCollection::.ctor()
extern "C" IL2CPP_METHOD_ATTR void X509CertificateCollection__ctor_m1BF85475F4F2C28AF14731784A9C9135B51F2D23 (X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * __this, const RuntimeMethod* method)
{
	{
		CollectionBase__ctor_mE10A53D13BDEACE9F36B720D8AEBC37078CA0256(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.X509.X509CertificateCollection::.ctor(Mono.Security.X509.X509CertificateCollection)
extern "C" IL2CPP_METHOD_ATTR void X509CertificateCollection__ctor_m281878BF4E7CA10A2D3D1AB46D2DD29A86CCEF63 (X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * __this, X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * ___value0, const RuntimeMethod* method)
{
	{
		CollectionBase__ctor_mE10A53D13BDEACE9F36B720D8AEBC37078CA0256(__this, /*hidden argument*/NULL);
		X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * L_0 = ___value0;
		X509CertificateCollection_AddRange_m2D89051B8F700AED39D1654110D928E5ED06A96D(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator Mono.Security.X509.X509CertificateCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* X509CertificateCollection_System_Collections_IEnumerable_GetEnumerator_mFB7CA53E9C044A6A4FA7908FF8C95CEC1C749BFD (X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * __this, const RuntimeMethod* method)
{
	{
		ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * L_0 = CollectionBase_get_InnerList_m2DA9775BF4D5335ADCF550220DCD31292A7D6CC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		return L_1;
	}
}
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509CertificateCollection::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * X509CertificateCollection_get_Item_m0977D3820DD709E9A089908E023E5E64583E27C1 (X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateCollection_get_Item_m0977D3820DD709E9A089908E023E5E64583E27C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * L_0 = CollectionBase_get_InnerList_m2DA9775BF4D5335ADCF550220DCD31292A7D6CC9(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		RuntimeObject * L_2 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		return ((X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 *)CastclassClass((RuntimeObject*)L_2, X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7_il2cpp_TypeInfo_var));
	}
}
// System.Int32 Mono.Security.X509.X509CertificateCollection::Add(Mono.Security.X509.X509Certificate)
extern "C" IL2CPP_METHOD_ATTR int32_t X509CertificateCollection_Add_m1215D57A35803EA383A007725E9B2B0271369953 (X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * __this, X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateCollection_Add_m1215D57A35803EA383A007725E9B2B0271369953_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 * L_1 = (ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 *)il2cpp_codegen_object_new(ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mBA1072348F0861F80512F3BB2BE685EDBB02F740(L_1, _stringLiteralF32B67C7E26342AF42EFABC674D441DCA0A281C5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, X509CertificateCollection_Add_m1215D57A35803EA383A007725E9B2B0271369953_RuntimeMethod_var);
	}

IL_0011:
	{
		ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * L_2 = CollectionBase_get_InnerList_m2DA9775BF4D5335ADCF550220DCD31292A7D6CC9(__this, /*hidden argument*/NULL);
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_3 = ___value0;
		NullCheck(L_2);
		int32_t L_4 = VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_2, L_3);
		return L_4;
	}
}
// System.Void Mono.Security.X509.X509CertificateCollection::AddRange(Mono.Security.X509.X509CertificateCollection)
extern "C" IL2CPP_METHOD_ATTR void X509CertificateCollection_AddRange_m2D89051B8F700AED39D1654110D928E5ED06A96D (X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * __this, X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateCollection_AddRange_m2D89051B8F700AED39D1654110D928E5ED06A96D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 * L_1 = (ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 *)il2cpp_codegen_object_new(ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mBA1072348F0861F80512F3BB2BE685EDBB02F740(L_1, _stringLiteralF32B67C7E26342AF42EFABC674D441DCA0A281C5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, X509CertificateCollection_AddRange_m2D89051B8F700AED39D1654110D928E5ED06A96D_RuntimeMethod_var);
	}

IL_0011:
	{
		V_0 = 0;
		goto IL_002f;
	}

IL_0018:
	{
		ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * L_2 = CollectionBase_get_InnerList_m2DA9775BF4D5335ADCF550220DCD31292A7D6CC9(__this, /*hidden argument*/NULL);
		X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * L_3 = ___value0;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_5 = X509CertificateCollection_get_Item_m0977D3820DD709E9A089908E023E5E64583E27C1(L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_2, L_5);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_002f:
	{
		int32_t L_7 = V_0;
		X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * L_8 = ___value0;
		NullCheck(L_8);
		ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * L_9 = CollectionBase_get_InnerList_m2DA9775BF4D5335ADCF550220DCD31292A7D6CC9(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_10 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_9);
		if ((((int32_t)L_7) < ((int32_t)L_10)))
		{
			goto IL_0018;
		}
	}
	{
		return;
	}
}
// System.Boolean Mono.Security.X509.X509CertificateCollection::Contains(Mono.Security.X509.X509Certificate)
extern "C" IL2CPP_METHOD_ATTR bool X509CertificateCollection_Contains_m33431FCE6D5C426D59FBE07074688182E8026B14 (X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * __this, X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * ___value0, const RuntimeMethod* method)
{
	{
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_0 = ___value0;
		int32_t L_1 = X509CertificateCollection_IndexOf_mDBAF9ADAFB8AC2D92C8B7C09A44A7F5BD2DE202E(__this, L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator Mono.Security.X509.X509CertificateCollection::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR X509CertificateEnumerator_t73F2B8AEDEF6F187870E8A2750847EEE931E16D3 * X509CertificateCollection_GetEnumerator_m72041E779CFB1AE2F67B292777BD9A89C7361756 (X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateCollection_GetEnumerator_m72041E779CFB1AE2F67B292777BD9A89C7361756_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509CertificateEnumerator_t73F2B8AEDEF6F187870E8A2750847EEE931E16D3 * L_0 = (X509CertificateEnumerator_t73F2B8AEDEF6F187870E8A2750847EEE931E16D3 *)il2cpp_codegen_object_new(X509CertificateEnumerator_t73F2B8AEDEF6F187870E8A2750847EEE931E16D3_il2cpp_TypeInfo_var);
		X509CertificateEnumerator__ctor_m8013F739228FCDDEAFF9455191527582DB35FA01(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 Mono.Security.X509.X509CertificateCollection::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t X509CertificateCollection_GetHashCode_m198CC22BC33B28F87263B32F398011CBF9A0B083 (X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * __this, const RuntimeMethod* method)
{
	{
		ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * L_0 = CollectionBase_get_InnerList_m2DA9775BF4D5335ADCF550220DCD31292A7D6CC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Int32 Mono.Security.X509.X509CertificateCollection::IndexOf(Mono.Security.X509.X509Certificate)
extern "C" IL2CPP_METHOD_ATTR int32_t X509CertificateCollection_IndexOf_mDBAF9ADAFB8AC2D92C8B7C09A44A7F5BD2DE202E (X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * __this, X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateCollection_IndexOf_mDBAF9ADAFB8AC2D92C8B7C09A44A7F5BD2DE202E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* V_0 = NULL;
	int32_t V_1 = 0;
	X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * V_2 = NULL;
	{
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 * L_1 = (ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 *)il2cpp_codegen_object_new(ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mBA1072348F0861F80512F3BB2BE685EDBB02F740(L_1, _stringLiteralF32B67C7E26342AF42EFABC674D441DCA0A281C5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, X509CertificateCollection_IndexOf_mDBAF9ADAFB8AC2D92C8B7C09A44A7F5BD2DE202E_RuntimeMethod_var);
	}

IL_0011:
	{
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_2 = ___value0;
		NullCheck(L_2);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_3 = X509Certificate_get_Hash_m762100BCEDE1952615651447892D0821A69A0B72(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0049;
	}

IL_001f:
	{
		ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * L_4 = CollectionBase_get_InnerList_m2DA9775BF4D5335ADCF550220DCD31292A7D6CC9(__this, /*hidden argument*/NULL);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		RuntimeObject * L_6 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_4, L_5);
		V_2 = ((X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 *)CastclassClass((RuntimeObject*)L_6, X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7_il2cpp_TypeInfo_var));
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_7 = V_2;
		NullCheck(L_7);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_8 = X509Certificate_get_Hash_m762100BCEDE1952615651447892D0821A69A0B72(L_7, /*hidden argument*/NULL);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_9 = V_0;
		bool L_10 = X509CertificateCollection_Compare_mDD1C4B12D2469718CAA0559992336C5CFE1F3EEE(__this, L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_11 = V_1;
		return L_11;
	}

IL_0045:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0049:
	{
		int32_t L_13 = V_1;
		ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * L_14 = CollectionBase_get_InnerList_m2DA9775BF4D5335ADCF550220DCD31292A7D6CC9(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_15 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_14);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_001f;
		}
	}
	{
		return (-1);
	}
}
// System.Void Mono.Security.X509.X509CertificateCollection::Remove(Mono.Security.X509.X509Certificate)
extern "C" IL2CPP_METHOD_ATTR void X509CertificateCollection_Remove_mC7F1D17E8A31E09D51C4A211AF21F39B5FCFA53B (X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * __this, X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * ___value0, const RuntimeMethod* method)
{
	{
		ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * L_0 = CollectionBase_get_InnerList_m2DA9775BF4D5335ADCF550220DCD31292A7D6CC9(__this, /*hidden argument*/NULL);
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< RuntimeObject * >::Invoke(38 /* System.Void System.Collections.ArrayList::Remove(System.Object) */, L_0, L_1);
		return;
	}
}
// System.Boolean Mono.Security.X509.X509CertificateCollection::Compare(System.Byte[],System.Byte[])
extern "C" IL2CPP_METHOD_ATTR bool X509CertificateCollection_Compare_mDD1C4B12D2469718CAA0559992336C5CFE1F3EEE (X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * __this, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___array10, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___array21, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_0 = ___array10;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_1 = ___array21;
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		return (bool)1;
	}

IL_000e:
	{
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_2 = ___array10;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_3 = ___array21;
		if (L_3)
		{
			goto IL_001c;
		}
	}

IL_001a:
	{
		return (bool)0;
	}

IL_001c:
	{
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_4 = ___array10;
		NullCheck(L_4);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_5 = ___array21;
		NullCheck(L_5);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length))))) == ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length)))))))
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}

IL_0029:
	{
		V_0 = 0;
		goto IL_0041;
	}

IL_0030:
	{
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_6 = ___array10;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_10 = ___array21;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		if ((((int32_t)L_9) == ((int32_t)L_13)))
		{
			goto IL_003d;
		}
	}
	{
		return (bool)0;
	}

IL_003d:
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0041:
	{
		int32_t L_15 = V_0;
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_16 = ___array10;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_16)->max_length)))))))
		{
			goto IL_0030;
		}
	}
	{
		return (bool)1;
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
// System.Void Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::.ctor(Mono.Security.X509.X509CertificateCollection)
extern "C" IL2CPP_METHOD_ATTR void X509CertificateEnumerator__ctor_m8013F739228FCDDEAFF9455191527582DB35FA01 (X509CertificateEnumerator_t73F2B8AEDEF6F187870E8A2750847EEE931E16D3 * __this, X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * ___mappings0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateEnumerator__ctor_m8013F739228FCDDEAFF9455191527582DB35FA01_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * L_0 = ___mappings0;
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t0B11E371EB34DA6482976C09E2C231E9B32AB517_il2cpp_TypeInfo_var, L_0);
		__this->set_enumerator_0(L_1);
		return;
	}
}
// System.Object Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * X509CertificateEnumerator_System_Collections_IEnumerator_get_Current_m503C3A04E409284038CDB846048AE9F7CB6300B2 (X509CertificateEnumerator_t73F2B8AEDEF6F187870E8A2750847EEE931E16D3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateEnumerator_System_Collections_IEnumerator_get_Current_m503C3A04E409284038CDB846048AE9F7CB6300B2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		RuntimeObject * L_1 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5F4AD85C6EA424A50584F741049EA645DBD8EEFC_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool X509CertificateEnumerator_System_Collections_IEnumerator_MoveNext_mF6B4B0529C715F23A6CA6DD21DAC7D25727AB169 (X509CertificateEnumerator_t73F2B8AEDEF6F187870E8A2750847EEE931E16D3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateEnumerator_System_Collections_IEnumerator_MoveNext_mF6B4B0529C715F23A6CA6DD21DAC7D25727AB169_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5F4AD85C6EA424A50584F741049EA645DBD8EEFC_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void X509CertificateEnumerator_System_Collections_IEnumerator_Reset_mC77F2EA3D2D20DB176E9A7FC49B80AECE557942A (X509CertificateEnumerator_t73F2B8AEDEF6F187870E8A2750847EEE931E16D3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateEnumerator_System_Collections_IEnumerator_Reset_mC77F2EA3D2D20DB176E9A7FC49B80AECE557942A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Collections.IEnumerator::Reset() */, IEnumerator_t5F4AD85C6EA424A50584F741049EA645DBD8EEFC_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::get_Current()
extern "C" IL2CPP_METHOD_ATTR X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * X509CertificateEnumerator_get_Current_mFDFB0919E5D374ACA156602F6EACF50613C7F3BC (X509CertificateEnumerator_t73F2B8AEDEF6F187870E8A2750847EEE931E16D3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateEnumerator_get_Current_mFDFB0919E5D374ACA156602F6EACF50613C7F3BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		RuntimeObject * L_1 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5F4AD85C6EA424A50584F741049EA645DBD8EEFC_il2cpp_TypeInfo_var, L_0);
		return ((X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 *)CastclassClass((RuntimeObject*)L_1, X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7_il2cpp_TypeInfo_var));
	}
}
// System.Boolean Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool X509CertificateEnumerator_MoveNext_m8F37FA272D0F2E22FE55815A8B631CFA7D091262 (X509CertificateEnumerator_t73F2B8AEDEF6F187870E8A2750847EEE931E16D3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateEnumerator_MoveNext_m8F37FA272D0F2E22FE55815A8B631CFA7D091262_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5F4AD85C6EA424A50584F741049EA645DBD8EEFC_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::Reset()
extern "C" IL2CPP_METHOD_ATTR void X509CertificateEnumerator_Reset_m1A86EDC2D33E8E33FF9881BCB7FB260A5BDA2F19 (X509CertificateEnumerator_t73F2B8AEDEF6F187870E8A2750847EEE931E16D3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateEnumerator_Reset_m1A86EDC2D33E8E33FF9881BCB7FB260A5BDA2F19_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Collections.IEnumerator::Reset() */, IEnumerator_t5F4AD85C6EA424A50584F741049EA645DBD8EEFC_il2cpp_TypeInfo_var, L_0);
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
// System.Void Mono.Security.X509.X509Chain::.ctor()
extern "C" IL2CPP_METHOD_ATTR void X509Chain__ctor_mBB65549B629ED2E43FD24B4CB73B3F3A0776E5EB (X509Chain_t4EEB0B913205B0D6B063AFB393AFA17BEFCA3D67 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Chain__ctor_mBB65549B629ED2E43FD24B4CB73B3F3A0776E5EB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * L_0 = (X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 *)il2cpp_codegen_object_new(X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4_il2cpp_TypeInfo_var);
		X509CertificateCollection__ctor_m1BF85475F4F2C28AF14731784A9C9135B51F2D23(L_0, /*hidden argument*/NULL);
		__this->set_certs_1(L_0);
		return;
	}
}
// System.Void Mono.Security.X509.X509Chain::.ctor(Mono.Security.X509.X509CertificateCollection)
extern "C" IL2CPP_METHOD_ATTR void X509Chain__ctor_m1CEBAFB1BB50D79F5E6DC837BB274823FFCA40BA (X509Chain_t4EEB0B913205B0D6B063AFB393AFA17BEFCA3D67 * __this, X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * ___chain0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Chain__ctor_m1CEBAFB1BB50D79F5E6DC837BB274823FFCA40BA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Chain__ctor_mBB65549B629ED2E43FD24B4CB73B3F3A0776E5EB(__this, /*hidden argument*/NULL);
		X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * L_0 = (X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 *)il2cpp_codegen_object_new(X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4_il2cpp_TypeInfo_var);
		X509CertificateCollection__ctor_m1BF85475F4F2C28AF14731784A9C9135B51F2D23(L_0, /*hidden argument*/NULL);
		__this->set__chain_3(L_0);
		X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * L_1 = __this->get__chain_3();
		X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * L_2 = ___chain0;
		NullCheck(L_1);
		X509CertificateCollection_AddRange_m2D89051B8F700AED39D1654110D928E5ED06A96D(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// Mono.Security.X509.X509ChainStatusFlags Mono.Security.X509.X509Chain::get_Status()
extern "C" IL2CPP_METHOD_ATTR int32_t X509Chain_get_Status_mF38A4337576C11B95A6A9DBAC69B52922D5E054B (X509Chain_t4EEB0B913205B0D6B063AFB393AFA17BEFCA3D67 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__status_4();
		return L_0;
	}
}
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::get_TrustAnchors()
extern "C" IL2CPP_METHOD_ATTR X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * X509Chain_get_TrustAnchors_m38E64354F9AC5B6EC1C0F1B95ED9A0F2AF87AF59 (X509Chain_t4EEB0B913205B0D6B063AFB393AFA17BEFCA3D67 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Chain_get_TrustAnchors_m38E64354F9AC5B6EC1C0F1B95ED9A0F2AF87AF59_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * L_0 = __this->get_roots_0();
		if (L_0)
		{
			goto IL_002d;
		}
	}
	{
		X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * L_1 = (X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 *)il2cpp_codegen_object_new(X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4_il2cpp_TypeInfo_var);
		X509CertificateCollection__ctor_m1BF85475F4F2C28AF14731784A9C9135B51F2D23(L_1, /*hidden argument*/NULL);
		__this->set_roots_0(L_1);
		X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * L_2 = __this->get_roots_0();
		X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * L_3 = X509StoreManager_get_TrustedRootCertificates_m3F74D1403F745F5C8BD1AA02F273AD33B719618E(/*hidden argument*/NULL);
		NullCheck(L_2);
		X509CertificateCollection_AddRange_m2D89051B8F700AED39D1654110D928E5ED06A96D(L_2, L_3, /*hidden argument*/NULL);
		X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * L_4 = __this->get_roots_0();
		return L_4;
	}

IL_002d:
	{
		X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * L_5 = __this->get_roots_0();
		return L_5;
	}
}
// System.Boolean Mono.Security.X509.X509Chain::Build(Mono.Security.X509.X509Certificate)
extern "C" IL2CPP_METHOD_ATTR bool X509Chain_Build_m9E6519215516C91314663B6EACEACFEBF2B66611 (X509Chain_t4EEB0B913205B0D6B063AFB393AFA17BEFCA3D67 * __this, X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * ___leaf0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Chain_Build_m9E6519215516C91314663B6EACEACFEBF2B66611_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * V_0 = NULL;
	X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * V_4 = NULL;
	X509CertificateEnumerator_t73F2B8AEDEF6F187870E8A2750847EEE931E16D3 * V_5 = NULL;
	bool V_6 = false;
	RuntimeObject* V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		__this->set__status_4(0);
		X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * L_0 = __this->get__chain_3();
		if (L_0)
		{
			goto IL_0060;
		}
	}
	{
		X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * L_1 = (X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 *)il2cpp_codegen_object_new(X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4_il2cpp_TypeInfo_var);
		X509CertificateCollection__ctor_m1BF85475F4F2C28AF14731784A9C9135B51F2D23(L_1, /*hidden argument*/NULL);
		__this->set__chain_3(L_1);
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_2 = ___leaf0;
		V_0 = L_2;
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_3 = V_0;
		V_1 = L_3;
		goto IL_003d;
	}

IL_0026:
	{
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_4 = V_0;
		V_1 = L_4;
		X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * L_5 = __this->get__chain_3();
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_6 = V_0;
		NullCheck(L_5);
		X509CertificateCollection_Add_m1215D57A35803EA383A007725E9B2B0271369953(L_5, L_6, /*hidden argument*/NULL);
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_7 = V_0;
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_8 = X509Chain_FindCertificateParent_mD7DE692A61897D3091F4C7A9F1663ED9DAB5116A(__this, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
	}

IL_003d:
	{
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_9 = V_0;
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_10 = V_0;
		NullCheck(L_10);
		bool L_11 = X509Certificate_get_IsSelfSigned_mE2B94803B5DAB2AE091041100A5B1B9B820A0859(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0026;
		}
	}

IL_004e:
	{
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_12 = V_1;
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_13 = X509Chain_FindCertificateRoot_mE58E326B32777852BA004E25E5B9DADB7CCDE4F7(__this, L_12, /*hidden argument*/NULL);
		__this->set__root_2(L_13);
		goto IL_00fa;
	}

IL_0060:
	{
		X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * L_14 = __this->get__chain_3();
		NullCheck(L_14);
		int32_t L_15 = CollectionBase_get_Count_m373858F7255B918D85C9948172F92F8361899AA3(L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		int32_t L_16 = V_2;
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_00ed;
		}
	}
	{
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_17 = ___leaf0;
		X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * L_18 = __this->get__chain_3();
		NullCheck(L_18);
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_19 = X509CertificateCollection_get_Item_m0977D3820DD709E9A089908E023E5E64583E27C1(L_18, 0, /*hidden argument*/NULL);
		bool L_20 = X509Chain_IsParent_m9DE86CEF1E85378A482E85CC86E8B58D6C3D4AF8(__this, L_17, L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00e8;
		}
	}
	{
		V_3 = 1;
		goto IL_00c0;
	}

IL_0092:
	{
		X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * L_21 = __this->get__chain_3();
		int32_t L_22 = V_3;
		NullCheck(L_21);
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_23 = X509CertificateCollection_get_Item_m0977D3820DD709E9A089908E023E5E64583E27C1(L_21, ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)1)), /*hidden argument*/NULL);
		X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * L_24 = __this->get__chain_3();
		int32_t L_25 = V_3;
		NullCheck(L_24);
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_26 = X509CertificateCollection_get_Item_m0977D3820DD709E9A089908E023E5E64583E27C1(L_24, L_25, /*hidden argument*/NULL);
		bool L_27 = X509Chain_IsParent_m9DE86CEF1E85378A482E85CC86E8B58D6C3D4AF8(__this, L_23, L_26, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_00bc;
		}
	}
	{
		goto IL_00c7;
	}

IL_00bc:
	{
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_00c0:
	{
		int32_t L_29 = V_3;
		int32_t L_30 = V_2;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0092;
		}
	}

IL_00c7:
	{
		int32_t L_31 = V_3;
		int32_t L_32 = V_2;
		if ((!(((uint32_t)L_31) == ((uint32_t)L_32))))
		{
			goto IL_00e8;
		}
	}
	{
		X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * L_33 = __this->get__chain_3();
		int32_t L_34 = V_2;
		NullCheck(L_33);
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_35 = X509CertificateCollection_get_Item_m0977D3820DD709E9A089908E023E5E64583E27C1(L_33, ((int32_t)il2cpp_codegen_subtract((int32_t)L_34, (int32_t)1)), /*hidden argument*/NULL);
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_36 = X509Chain_FindCertificateRoot_mE58E326B32777852BA004E25E5B9DADB7CCDE4F7(__this, L_35, /*hidden argument*/NULL);
		__this->set__root_2(L_36);
	}

IL_00e8:
	{
		goto IL_00fa;
	}

IL_00ed:
	{
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_37 = ___leaf0;
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_38 = X509Chain_FindCertificateRoot_mE58E326B32777852BA004E25E5B9DADB7CCDE4F7(__this, L_37, /*hidden argument*/NULL);
		__this->set__root_2(L_38);
	}

IL_00fa:
	{
		X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * L_39 = __this->get__chain_3();
		if (!L_39)
		{
			goto IL_01a6;
		}
	}
	{
		int32_t L_40 = __this->get__status_4();
		if (L_40)
		{
			goto IL_01a6;
		}
	}
	{
		X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * L_41 = __this->get__chain_3();
		NullCheck(L_41);
		X509CertificateEnumerator_t73F2B8AEDEF6F187870E8A2750847EEE931E16D3 * L_42 = X509CertificateCollection_GetEnumerator_m72041E779CFB1AE2F67B292777BD9A89C7361756(L_41, /*hidden argument*/NULL);
		V_5 = L_42;
	}

IL_011d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0140;
		}

IL_0122:
		{
			X509CertificateEnumerator_t73F2B8AEDEF6F187870E8A2750847EEE931E16D3 * L_43 = V_5;
			NullCheck(L_43);
			X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_44 = X509CertificateEnumerator_get_Current_mFDFB0919E5D374ACA156602F6EACF50613C7F3BC(L_43, /*hidden argument*/NULL);
			V_4 = L_44;
			X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_45 = V_4;
			bool L_46 = X509Chain_IsValid_mB8090230AD1DF880D188DE4E37483C082D1E01B2(__this, L_45, /*hidden argument*/NULL);
			if (L_46)
			{
				goto IL_0140;
			}
		}

IL_0138:
		{
			V_6 = (bool)0;
			IL2CPP_LEAVE(0x1B0, FINALLY_0151);
		}

IL_0140:
		{
			X509CertificateEnumerator_t73F2B8AEDEF6F187870E8A2750847EEE931E16D3 * L_47 = V_5;
			NullCheck(L_47);
			bool L_48 = X509CertificateEnumerator_MoveNext_m8F37FA272D0F2E22FE55815A8B631CFA7D091262(L_47, /*hidden argument*/NULL);
			if (L_48)
			{
				goto IL_0122;
			}
		}

IL_014c:
		{
			IL2CPP_LEAVE(0x167, FINALLY_0151);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0151;
	}

FINALLY_0151:
	{ // begin finally (depth: 1)
		{
			X509CertificateEnumerator_t73F2B8AEDEF6F187870E8A2750847EEE931E16D3 * L_49 = V_5;
			V_7 = ((RuntimeObject*)IsInst((RuntimeObject*)L_49, IDisposable_tFD576810FF845F49C1CF8F06BEB759FCE2BC31B2_il2cpp_TypeInfo_var));
			RuntimeObject* L_50 = V_7;
			if (L_50)
			{
				goto IL_015f;
			}
		}

IL_015e:
		{
			IL2CPP_END_FINALLY(337)
		}

IL_015f:
		{
			RuntimeObject* L_51 = V_7;
			NullCheck(L_51);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_tFD576810FF845F49C1CF8F06BEB759FCE2BC31B2_il2cpp_TypeInfo_var, L_51);
			IL2CPP_END_FINALLY(337)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(337)
	{
		IL2CPP_JUMP_TBL(0x1B0, IL_01b0)
		IL2CPP_JUMP_TBL(0x167, IL_0167)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0167:
	{
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_52 = ___leaf0;
		bool L_53 = X509Chain_IsValid_mB8090230AD1DF880D188DE4E37483C082D1E01B2(__this, L_52, /*hidden argument*/NULL);
		if (L_53)
		{
			goto IL_0188;
		}
	}
	{
		int32_t L_54 = __this->get__status_4();
		if ((!(((uint32_t)L_54) == ((uint32_t)2))))
		{
			goto IL_0186;
		}
	}
	{
		__this->set__status_4(1);
	}

IL_0186:
	{
		return (bool)0;
	}

IL_0188:
	{
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_55 = __this->get__root_2();
		if (!L_55)
		{
			goto IL_01a6;
		}
	}
	{
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_56 = __this->get__root_2();
		bool L_57 = X509Chain_IsValid_mB8090230AD1DF880D188DE4E37483C082D1E01B2(__this, L_56, /*hidden argument*/NULL);
		if (L_57)
		{
			goto IL_01a6;
		}
	}
	{
		return (bool)0;
	}

IL_01a6:
	{
		int32_t L_58 = __this->get__status_4();
		return (bool)((((int32_t)L_58) == ((int32_t)0))? 1 : 0);
	}

IL_01b0:
	{
		bool L_59 = V_6;
		return L_59;
	}
}
// System.Boolean Mono.Security.X509.X509Chain::IsValid(Mono.Security.X509.X509Certificate)
extern "C" IL2CPP_METHOD_ATTR bool X509Chain_IsValid_mB8090230AD1DF880D188DE4E37483C082D1E01B2 (X509Chain_t4EEB0B913205B0D6B063AFB393AFA17BEFCA3D67 * __this, X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * ___cert0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Chain_IsValid_mB8090230AD1DF880D188DE4E37483C082D1E01B2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_0 = ___cert0;
		NullCheck(L_0);
		bool L_1 = X509Certificate_get_IsCurrent_m2C566AEC95BE6369A7E746FF5959D465EF474B6B(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		__this->set__status_4(2);
		return (bool)0;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ServicePointManager_t26671C58FEC625E41B784B57AD46A0822DB68465_il2cpp_TypeInfo_var);
		bool L_2 = ServicePointManager_get_CheckCertificateRevocationList_mB236C2D3D46DFB173A35AAB528FDF279B427E8B3(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}

IL_001e:
	{
		return (bool)1;
	}
}
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::FindCertificateParent(Mono.Security.X509.X509Certificate)
extern "C" IL2CPP_METHOD_ATTR X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * X509Chain_FindCertificateParent_mD7DE692A61897D3091F4C7A9F1663ED9DAB5116A (X509Chain_t4EEB0B913205B0D6B063AFB393AFA17BEFCA3D67 * __this, X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * ___child0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Chain_FindCertificateParent_mD7DE692A61897D3091F4C7A9F1663ED9DAB5116A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * V_0 = NULL;
	X509CertificateEnumerator_t73F2B8AEDEF6F187870E8A2750847EEE931E16D3 * V_1 = NULL;
	X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * L_0 = __this->get_certs_1();
		NullCheck(L_0);
		X509CertificateEnumerator_t73F2B8AEDEF6F187870E8A2750847EEE931E16D3 * L_1 = X509CertificateCollection_GetEnumerator_m72041E779CFB1AE2F67B292777BD9A89C7361756(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002c;
		}

IL_0011:
		{
			X509CertificateEnumerator_t73F2B8AEDEF6F187870E8A2750847EEE931E16D3 * L_2 = V_1;
			NullCheck(L_2);
			X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_3 = X509CertificateEnumerator_get_Current_mFDFB0919E5D374ACA156602F6EACF50613C7F3BC(L_2, /*hidden argument*/NULL);
			V_0 = L_3;
			X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_4 = ___child0;
			X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_5 = V_0;
			bool L_6 = X509Chain_IsParent_m9DE86CEF1E85378A482E85CC86E8B58D6C3D4AF8(__this, L_4, L_5, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_002c;
			}
		}

IL_0025:
		{
			X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_7 = V_0;
			V_2 = L_7;
			IL2CPP_LEAVE(0x50, FINALLY_003c);
		}

IL_002c:
		{
			X509CertificateEnumerator_t73F2B8AEDEF6F187870E8A2750847EEE931E16D3 * L_8 = V_1;
			NullCheck(L_8);
			bool L_9 = X509CertificateEnumerator_MoveNext_m8F37FA272D0F2E22FE55815A8B631CFA7D091262(L_8, /*hidden argument*/NULL);
			if (L_9)
			{
				goto IL_0011;
			}
		}

IL_0037:
		{
			IL2CPP_LEAVE(0x4E, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		{
			X509CertificateEnumerator_t73F2B8AEDEF6F187870E8A2750847EEE931E16D3 * L_10 = V_1;
			V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_10, IDisposable_tFD576810FF845F49C1CF8F06BEB759FCE2BC31B2_il2cpp_TypeInfo_var));
			RuntimeObject* L_11 = V_3;
			if (L_11)
			{
				goto IL_0047;
			}
		}

IL_0046:
		{
			IL2CPP_END_FINALLY(60)
		}

IL_0047:
		{
			RuntimeObject* L_12 = V_3;
			NullCheck(L_12);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_tFD576810FF845F49C1CF8F06BEB759FCE2BC31B2_il2cpp_TypeInfo_var, L_12);
			IL2CPP_END_FINALLY(60)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x50, IL_0050)
		IL2CPP_JUMP_TBL(0x4E, IL_004e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004e:
	{
		return (X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 *)NULL;
	}

IL_0050:
	{
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_13 = V_2;
		return L_13;
	}
}
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::FindCertificateRoot(Mono.Security.X509.X509Certificate)
extern "C" IL2CPP_METHOD_ATTR X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * X509Chain_FindCertificateRoot_mE58E326B32777852BA004E25E5B9DADB7CCDE4F7 (X509Chain_t4EEB0B913205B0D6B063AFB393AFA17BEFCA3D67 * __this, X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * ___potentialRoot0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Chain_FindCertificateRoot_mE58E326B32777852BA004E25E5B9DADB7CCDE4F7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * V_0 = NULL;
	X509CertificateEnumerator_t73F2B8AEDEF6F187870E8A2750847EEE931E16D3 * V_1 = NULL;
	X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_0 = ___potentialRoot0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		__this->set__status_4(((int32_t)65536));
		return (X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 *)NULL;
	}

IL_0013:
	{
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_1 = ___potentialRoot0;
		bool L_2 = X509Chain_IsTrusted_m67A6AF9052861773F1F4CD9F8BA7FEC437463F86(__this, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_3 = ___potentialRoot0;
		return L_3;
	}

IL_0021:
	{
		X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * L_4 = X509Chain_get_TrustAnchors_m38E64354F9AC5B6EC1C0F1B95ED9A0F2AF87AF59(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		X509CertificateEnumerator_t73F2B8AEDEF6F187870E8A2750847EEE931E16D3 * L_5 = X509CertificateCollection_GetEnumerator_m72041E779CFB1AE2F67B292777BD9A89C7361756(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
	}

IL_002d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004d;
		}

IL_0032:
		{
			X509CertificateEnumerator_t73F2B8AEDEF6F187870E8A2750847EEE931E16D3 * L_6 = V_1;
			NullCheck(L_6);
			X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_7 = X509CertificateEnumerator_get_Current_mFDFB0919E5D374ACA156602F6EACF50613C7F3BC(L_6, /*hidden argument*/NULL);
			V_0 = L_7;
			X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_8 = ___potentialRoot0;
			X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_9 = V_0;
			bool L_10 = X509Chain_IsParent_m9DE86CEF1E85378A482E85CC86E8B58D6C3D4AF8(__this, L_8, L_9, /*hidden argument*/NULL);
			if (!L_10)
			{
				goto IL_004d;
			}
		}

IL_0046:
		{
			X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_11 = V_0;
			V_2 = L_11;
			IL2CPP_LEAVE(0x91, FINALLY_005d);
		}

IL_004d:
		{
			X509CertificateEnumerator_t73F2B8AEDEF6F187870E8A2750847EEE931E16D3 * L_12 = V_1;
			NullCheck(L_12);
			bool L_13 = X509CertificateEnumerator_MoveNext_m8F37FA272D0F2E22FE55815A8B631CFA7D091262(L_12, /*hidden argument*/NULL);
			if (L_13)
			{
				goto IL_0032;
			}
		}

IL_0058:
		{
			IL2CPP_LEAVE(0x6F, FINALLY_005d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005d;
	}

FINALLY_005d:
	{ // begin finally (depth: 1)
		{
			X509CertificateEnumerator_t73F2B8AEDEF6F187870E8A2750847EEE931E16D3 * L_14 = V_1;
			V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_14, IDisposable_tFD576810FF845F49C1CF8F06BEB759FCE2BC31B2_il2cpp_TypeInfo_var));
			RuntimeObject* L_15 = V_3;
			if (L_15)
			{
				goto IL_0068;
			}
		}

IL_0067:
		{
			IL2CPP_END_FINALLY(93)
		}

IL_0068:
		{
			RuntimeObject* L_16 = V_3;
			NullCheck(L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_tFD576810FF845F49C1CF8F06BEB759FCE2BC31B2_il2cpp_TypeInfo_var, L_16);
			IL2CPP_END_FINALLY(93)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(93)
	{
		IL2CPP_JUMP_TBL(0x91, IL_0091)
		IL2CPP_JUMP_TBL(0x6F, IL_006f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_006f:
	{
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_17 = ___potentialRoot0;
		NullCheck(L_17);
		bool L_18 = X509Certificate_get_IsSelfSigned_mE2B94803B5DAB2AE091041100A5B1B9B820A0859(L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0084;
		}
	}
	{
		__this->set__status_4(((int32_t)32));
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_19 = ___potentialRoot0;
		return L_19;
	}

IL_0084:
	{
		__this->set__status_4(((int32_t)65536));
		return (X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 *)NULL;
	}

IL_0091:
	{
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_20 = V_2;
		return L_20;
	}
}
// System.Boolean Mono.Security.X509.X509Chain::IsTrusted(Mono.Security.X509.X509Certificate)
extern "C" IL2CPP_METHOD_ATTR bool X509Chain_IsTrusted_m67A6AF9052861773F1F4CD9F8BA7FEC437463F86 (X509Chain_t4EEB0B913205B0D6B063AFB393AFA17BEFCA3D67 * __this, X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * ___potentialTrusted0, const RuntimeMethod* method)
{
	{
		X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * L_0 = X509Chain_get_TrustAnchors_m38E64354F9AC5B6EC1C0F1B95ED9A0F2AF87AF59(__this, /*hidden argument*/NULL);
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_1 = ___potentialTrusted0;
		NullCheck(L_0);
		bool L_2 = X509CertificateCollection_Contains_m33431FCE6D5C426D59FBE07074688182E8026B14(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Mono.Security.X509.X509Chain::IsParent(Mono.Security.X509.X509Certificate,Mono.Security.X509.X509Certificate)
extern "C" IL2CPP_METHOD_ATTR bool X509Chain_IsParent_m9DE86CEF1E85378A482E85CC86E8B58D6C3D4AF8 (X509Chain_t4EEB0B913205B0D6B063AFB393AFA17BEFCA3D67 * __this, X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * ___child0, X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * ___parent1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Chain_IsParent_m9DE86CEF1E85378A482E85CC86E8B58D6C3D4AF8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 * V_0 = NULL;
	BasicConstraintsExtension_t519E68578F3BFB9B3588596B24BF4B729D26494E * V_1 = NULL;
	{
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_0 = ___child0;
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String Mono.Security.X509.X509Certificate::get_IssuerName() */, L_0);
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_2 = ___parent1;
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String Mono.Security.X509.X509Certificate::get_SubjectName() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Inequality_mFBA7B689F4FFCEE1224F60E7445E7C1A3F2F362B(L_1, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_5 = ___parent1;
		NullCheck(L_5);
		int32_t L_6 = X509Certificate_get_Version_mF5D3F0BD3C02875F719DAD5A1B2938CBED20ABC5(L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_6) <= ((int32_t)2)))
		{
			goto IL_0074;
		}
	}
	{
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_7 = ___parent1;
		bool L_8 = X509Chain_IsTrusted_m67A6AF9052861773F1F4CD9F8BA7FEC437463F86(__this, L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0074;
		}
	}
	{
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_9 = ___parent1;
		NullCheck(L_9);
		X509ExtensionCollection_t755DFCBDA8823D949578ED886BAFA4BF87706991 * L_10 = X509Certificate_get_Extensions_m42B9373BA00A0CA4B6133693D9017DF674C8C391(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 * L_11 = X509ExtensionCollection_get_Item_mF9CB19EA43F26742A0414EA82D9B7E8F3D19B867(L_10, _stringLiteral894E12D1523E99F051EEFC8EBA5BF874229F69A4, /*hidden argument*/NULL);
		V_0 = L_11;
		X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 * L_12 = V_0;
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 * L_13 = V_0;
		BasicConstraintsExtension_t519E68578F3BFB9B3588596B24BF4B729D26494E * L_14 = (BasicConstraintsExtension_t519E68578F3BFB9B3588596B24BF4B729D26494E *)il2cpp_codegen_object_new(BasicConstraintsExtension_t519E68578F3BFB9B3588596B24BF4B729D26494E_il2cpp_TypeInfo_var);
		BasicConstraintsExtension__ctor_m5A28494F3DCF402A9CCCD318C66D707970EE20FC(L_14, L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		BasicConstraintsExtension_t519E68578F3BFB9B3588596B24BF4B729D26494E * L_15 = V_1;
		NullCheck(L_15);
		bool L_16 = BasicConstraintsExtension_get_CertificateAuthority_mDC4441909831B5F96BC592DB974F332E88CC0FC2(L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_0064;
		}
	}
	{
		__this->set__status_4(((int32_t)1024));
	}

IL_0064:
	{
		goto IL_0074;
	}

IL_0069:
	{
		__this->set__status_4(((int32_t)1024));
	}

IL_0074:
	{
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_17 = ___child0;
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_18 = ___parent1;
		NullCheck(L_18);
		RSA_t565B1E1F95589A0E37D0C66406CF730DC4A43051 * L_19 = VirtFuncInvoker0< RSA_t565B1E1F95589A0E37D0C66406CF730DC4A43051 * >::Invoke(10 /* System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::get_RSA() */, L_18);
		NullCheck(L_17);
		bool L_20 = X509Certificate_VerifySignature_mF6D0E716CB53B02BA479E1020A91431F2422FA25(L_17, L_19, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_008e;
		}
	}
	{
		__this->set__status_4(8);
		return (bool)0;
	}

IL_008e:
	{
		return (bool)1;
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
// System.Void Mono.Security.X509.X509Crl::.ctor(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void X509Crl__ctor_mA021EA5191FE977762AA75753903A461E6DBD20D (X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA * __this, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___crl0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Crl__ctor_mA021EA5191FE977762AA75753903A461E6DBD20D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_0 = ___crl0;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 * L_1 = (ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 *)il2cpp_codegen_object_new(ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mBA1072348F0861F80512F3BB2BE685EDBB02F740(L_1, _stringLiteralE2AFBBD128A879E540408CC7DA9AC8BF7F2D7610, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, X509Crl__ctor_mA021EA5191FE977762AA75753903A461E6DBD20D_RuntimeMethod_var);
	}

IL_0017:
	{
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_2 = ___crl0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_2);
		RuntimeObject * L_3 = Array_Clone_m63F8DD231C00DCDECAE3582E72E7783D1349C57D((RuntimeArray *)(RuntimeArray *)L_2, /*hidden argument*/NULL);
		__this->set_encoded_8(((ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8*)Castclass((RuntimeObject*)L_3, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8_il2cpp_TypeInfo_var)));
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_4 = __this->get_encoded_8();
		X509Crl_Parse_m17DC5BBF779F81775F51E1DA57EE55EBDD428A90(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.X509.X509Crl::Parse(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void X509Crl_Parse_m17DC5BBF779F81775F51E1DA57EE55EBDD428A90 (X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA * __this, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___crl0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Crl_Parse_m17DC5BBF779F81775F51E1DA57EE55EBDD428A90_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * V_1 = NULL;
	ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * V_2 = NULL;
	int32_t V_3 = 0;
	ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * V_4 = NULL;
	ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * V_5 = NULL;
	int32_t V_6 = 0;
	ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * V_7 = NULL;
	String_t* V_8 = NULL;
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* V_9 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = _stringLiteral468D0C6B0152E67FE0EF0DFE16DBD74A45A1DF41;
	}

IL_0006:
	try
	{ // begin try (depth: 1)
		{
			ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_0 = __this->get_encoded_8();
			ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_1 = (ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA *)il2cpp_codegen_object_new(ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA_il2cpp_TypeInfo_var);
			ASN1__ctor_mC35B4DE86D465D065D23C2A7F0BE2E2BD5BCE81B(L_1, L_0, /*hidden argument*/NULL);
			V_1 = L_1;
			ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_2 = V_1;
			NullCheck(L_2);
			uint8_t L_3 = ASN1_get_Tag_mA0D39A4B0A7E2BF19563FF997A8CCEA03DDC0FBE(L_2, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)48)))))
			{
				goto IL_002b;
			}
		}

IL_001f:
		{
			ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_4 = V_1;
			NullCheck(L_4);
			int32_t L_5 = ASN1_get_Count_m2DE9AE59371E5BD294F898C93FC9554DD3C02E85(L_4, /*hidden argument*/NULL);
			if ((((int32_t)L_5) == ((int32_t)3)))
			{
				goto IL_0032;
			}
		}

IL_002b:
		{
			String_t* L_6 = V_0;
			CryptographicException_tEBE52D8795404FE91A37B2662AED1CDF46CD3920 * L_7 = (CryptographicException_tEBE52D8795404FE91A37B2662AED1CDF46CD3920 *)il2cpp_codegen_object_new(CryptographicException_tEBE52D8795404FE91A37B2662AED1CDF46CD3920_il2cpp_TypeInfo_var);
			CryptographicException__ctor_m3949B60BD8659B2BF4ADC9306891AD4BACA25E5C(L_7, L_6, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, X509Crl_Parse_m17DC5BBF779F81775F51E1DA57EE55EBDD428A90_RuntimeMethod_var);
		}

IL_0032:
		{
			ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_8 = V_1;
			NullCheck(L_8);
			ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_9 = ASN1_get_Item_m087B522444CC10BD9BFE5144961DF6ED3F1E7948(L_8, 0, /*hidden argument*/NULL);
			V_2 = L_9;
			ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_10 = V_2;
			NullCheck(L_10);
			uint8_t L_11 = ASN1_get_Tag_mA0D39A4B0A7E2BF19563FF997A8CCEA03DDC0FBE(L_10, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)48)))))
			{
				goto IL_0053;
			}
		}

IL_0047:
		{
			ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_12 = V_2;
			NullCheck(L_12);
			int32_t L_13 = ASN1_get_Count_m2DE9AE59371E5BD294F898C93FC9554DD3C02E85(L_12, /*hidden argument*/NULL);
			if ((((int32_t)L_13) >= ((int32_t)3)))
			{
				goto IL_005a;
			}
		}

IL_0053:
		{
			String_t* L_14 = V_0;
			CryptographicException_tEBE52D8795404FE91A37B2662AED1CDF46CD3920 * L_15 = (CryptographicException_tEBE52D8795404FE91A37B2662AED1CDF46CD3920 *)il2cpp_codegen_object_new(CryptographicException_tEBE52D8795404FE91A37B2662AED1CDF46CD3920_il2cpp_TypeInfo_var);
			CryptographicException__ctor_m3949B60BD8659B2BF4ADC9306891AD4BACA25E5C(L_15, L_14, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, NULL, X509Crl_Parse_m17DC5BBF779F81775F51E1DA57EE55EBDD428A90_RuntimeMethod_var);
		}

IL_005a:
		{
			V_3 = 0;
			ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_16 = V_2;
			int32_t L_17 = V_3;
			NullCheck(L_16);
			ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_18 = ASN1_get_Item_m087B522444CC10BD9BFE5144961DF6ED3F1E7948(L_16, L_17, /*hidden argument*/NULL);
			NullCheck(L_18);
			uint8_t L_19 = ASN1_get_Tag_mA0D39A4B0A7E2BF19563FF997A8CCEA03DDC0FBE(L_18, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_19) == ((uint32_t)2))))
			{
				goto IL_008e;
			}
		}

IL_006e:
		{
			ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_20 = V_2;
			int32_t L_21 = V_3;
			int32_t L_22 = L_21;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
			NullCheck(L_20);
			ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_23 = ASN1_get_Item_m087B522444CC10BD9BFE5144961DF6ED3F1E7948(L_20, L_22, /*hidden argument*/NULL);
			NullCheck(L_23);
			ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_24 = ASN1_get_Value_m893A1DDEE56260B6F1F8747051EE14E9EF84EC90(L_23, /*hidden argument*/NULL);
			NullCheck(L_24);
			int32_t L_25 = 0;
			uint8_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
			__this->set_version_1((uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1))))));
			goto IL_0095;
		}

IL_008e:
		{
			__this->set_version_1((uint8_t)1);
		}

IL_0095:
		{
			ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_27 = V_2;
			int32_t L_28 = V_3;
			int32_t L_29 = L_28;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
			NullCheck(L_27);
			ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_30 = ASN1_get_Item_m087B522444CC10BD9BFE5144961DF6ED3F1E7948(L_27, L_29, /*hidden argument*/NULL);
			NullCheck(L_30);
			ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_31 = ASN1_get_Item_m087B522444CC10BD9BFE5144961DF6ED3F1E7948(L_30, 0, /*hidden argument*/NULL);
			String_t* L_32 = ASN1Convert_ToOid_mF946DA90DFB49894856E9CFD807D60600EC19448(L_31, /*hidden argument*/NULL);
			__this->set_signatureOID_5(L_32);
			ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_33 = V_2;
			int32_t L_34 = V_3;
			int32_t L_35 = L_34;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
			NullCheck(L_33);
			ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_36 = ASN1_get_Item_m087B522444CC10BD9BFE5144961DF6ED3F1E7948(L_33, L_35, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(X501_tE168FA15DF59DEE465AFDD39E5B8B51B857605F4_il2cpp_TypeInfo_var);
			String_t* L_37 = X501_ToString_m8238A998BDA65BD84951AB25CAC3CC3AF42E9E0F(L_36, /*hidden argument*/NULL);
			__this->set_issuer_0(L_37);
			ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_38 = V_2;
			int32_t L_39 = V_3;
			int32_t L_40 = L_39;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
			NullCheck(L_38);
			ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_41 = ASN1_get_Item_m087B522444CC10BD9BFE5144961DF6ED3F1E7948(L_38, L_40, /*hidden argument*/NULL);
			DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  L_42 = ASN1Convert_ToDateTime_mEDB912E5FF6243C689A88E0A08F10AF4E6C3DFDE(L_41, /*hidden argument*/NULL);
			__this->set_thisUpdate_2(L_42);
			ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_43 = V_2;
			int32_t L_44 = V_3;
			int32_t L_45 = L_44;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
			NullCheck(L_43);
			ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_46 = ASN1_get_Item_m087B522444CC10BD9BFE5144961DF6ED3F1E7948(L_43, L_45, /*hidden argument*/NULL);
			V_4 = L_46;
			ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_47 = V_4;
			NullCheck(L_47);
			uint8_t L_48 = ASN1_get_Tag_mA0D39A4B0A7E2BF19563FF997A8CCEA03DDC0FBE(L_47, /*hidden argument*/NULL);
			if ((((int32_t)L_48) == ((int32_t)((int32_t)23))))
			{
				goto IL_0106;
			}
		}

IL_00f8:
		{
			ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_49 = V_4;
			NullCheck(L_49);
			uint8_t L_50 = ASN1_get_Tag_mA0D39A4B0A7E2BF19563FF997A8CCEA03DDC0FBE(L_49, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_50) == ((uint32_t)((int32_t)24)))))
			{
				goto IL_0120;
			}
		}

IL_0106:
		{
			ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_51 = V_4;
			DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  L_52 = ASN1Convert_ToDateTime_mEDB912E5FF6243C689A88E0A08F10AF4E6C3DFDE(L_51, /*hidden argument*/NULL);
			__this->set_nextUpdate_3(L_52);
			ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_53 = V_2;
			int32_t L_54 = V_3;
			int32_t L_55 = L_54;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1));
			NullCheck(L_53);
			ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_56 = ASN1_get_Item_m087B522444CC10BD9BFE5144961DF6ED3F1E7948(L_53, L_55, /*hidden argument*/NULL);
			V_4 = L_56;
		}

IL_0120:
		{
			ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * L_57 = (ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F *)il2cpp_codegen_object_new(ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F_il2cpp_TypeInfo_var);
			ArrayList__ctor_m152BD8901EFE6F5D542893FFB4C13186CCE9FD8B(L_57, /*hidden argument*/NULL);
			__this->set_entries_4(L_57);
			ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_58 = V_4;
			if (!L_58)
			{
				goto IL_017f;
			}
		}

IL_0132:
		{
			ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_59 = V_4;
			NullCheck(L_59);
			uint8_t L_60 = ASN1_get_Tag_mA0D39A4B0A7E2BF19563FF997A8CCEA03DDC0FBE(L_59, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_60) == ((uint32_t)((int32_t)48)))))
			{
				goto IL_017f;
			}
		}

IL_0140:
		{
			ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_61 = V_4;
			V_5 = L_61;
			V_6 = 0;
			goto IL_016c;
		}

IL_014c:
		{
			ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * L_62 = __this->get_entries_4();
			ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_63 = V_5;
			int32_t L_64 = V_6;
			NullCheck(L_63);
			ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_65 = ASN1_get_Item_m087B522444CC10BD9BFE5144961DF6ED3F1E7948(L_63, L_64, /*hidden argument*/NULL);
			X509CrlEntry_tBF2584E52778416F84EA34B6F693BF1BED81EFF1 * L_66 = (X509CrlEntry_tBF2584E52778416F84EA34B6F693BF1BED81EFF1 *)il2cpp_codegen_object_new(X509CrlEntry_tBF2584E52778416F84EA34B6F693BF1BED81EFF1_il2cpp_TypeInfo_var);
			X509CrlEntry__ctor_m3A28575C3EB8FA74122CB79763993AB6596B8C5B(L_66, L_65, /*hidden argument*/NULL);
			NullCheck(L_62);
			VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_62, L_66);
			int32_t L_67 = V_6;
			V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1));
		}

IL_016c:
		{
			int32_t L_68 = V_6;
			ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_69 = V_5;
			NullCheck(L_69);
			int32_t L_70 = ASN1_get_Count_m2DE9AE59371E5BD294F898C93FC9554DD3C02E85(L_69, /*hidden argument*/NULL);
			if ((((int32_t)L_68) < ((int32_t)L_70)))
			{
				goto IL_014c;
			}
		}

IL_017a:
		{
			goto IL_0183;
		}

IL_017f:
		{
			int32_t L_71 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_71, (int32_t)1));
		}

IL_0183:
		{
			ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_72 = V_2;
			int32_t L_73 = V_3;
			NullCheck(L_72);
			ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_74 = ASN1_get_Item_m087B522444CC10BD9BFE5144961DF6ED3F1E7948(L_72, L_73, /*hidden argument*/NULL);
			V_7 = L_74;
			ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_75 = V_7;
			if (!L_75)
			{
				goto IL_01c9;
			}
		}

IL_0193:
		{
			ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_76 = V_7;
			NullCheck(L_76);
			uint8_t L_77 = ASN1_get_Tag_mA0D39A4B0A7E2BF19563FF997A8CCEA03DDC0FBE(L_76, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_77) == ((uint32_t)((int32_t)160)))))
			{
				goto IL_01c9;
			}
		}

IL_01a4:
		{
			ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_78 = V_7;
			NullCheck(L_78);
			int32_t L_79 = ASN1_get_Count_m2DE9AE59371E5BD294F898C93FC9554DD3C02E85(L_78, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_79) == ((uint32_t)1))))
			{
				goto IL_01c9;
			}
		}

IL_01b1:
		{
			ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_80 = V_7;
			NullCheck(L_80);
			ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_81 = ASN1_get_Item_m087B522444CC10BD9BFE5144961DF6ED3F1E7948(L_80, 0, /*hidden argument*/NULL);
			X509ExtensionCollection_t755DFCBDA8823D949578ED886BAFA4BF87706991 * L_82 = (X509ExtensionCollection_t755DFCBDA8823D949578ED886BAFA4BF87706991 *)il2cpp_codegen_object_new(X509ExtensionCollection_t755DFCBDA8823D949578ED886BAFA4BF87706991_il2cpp_TypeInfo_var);
			X509ExtensionCollection__ctor_mD6D256F8D16DA2083043F31DEB283D5D4B37F6BF(L_82, L_81, /*hidden argument*/NULL);
			__this->set_extensions_7(L_82);
			goto IL_01d5;
		}

IL_01c9:
		{
			X509ExtensionCollection_t755DFCBDA8823D949578ED886BAFA4BF87706991 * L_83 = (X509ExtensionCollection_t755DFCBDA8823D949578ED886BAFA4BF87706991 *)il2cpp_codegen_object_new(X509ExtensionCollection_t755DFCBDA8823D949578ED886BAFA4BF87706991_il2cpp_TypeInfo_var);
			X509ExtensionCollection__ctor_mD6D256F8D16DA2083043F31DEB283D5D4B37F6BF(L_83, (ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA *)NULL, /*hidden argument*/NULL);
			__this->set_extensions_7(L_83);
		}

IL_01d5:
		{
			ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_84 = V_1;
			NullCheck(L_84);
			ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_85 = ASN1_get_Item_m087B522444CC10BD9BFE5144961DF6ED3F1E7948(L_84, 1, /*hidden argument*/NULL);
			NullCheck(L_85);
			ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_86 = ASN1_get_Item_m087B522444CC10BD9BFE5144961DF6ED3F1E7948(L_85, 0, /*hidden argument*/NULL);
			String_t* L_87 = ASN1Convert_ToOid_mF946DA90DFB49894856E9CFD807D60600EC19448(L_86, /*hidden argument*/NULL);
			V_8 = L_87;
			String_t* L_88 = __this->get_signatureOID_5();
			String_t* L_89 = V_8;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_90 = String_op_Inequality_mFBA7B689F4FFCEE1224F60E7445E7C1A3F2F362B(L_88, L_89, /*hidden argument*/NULL);
			if (!L_90)
			{
				goto IL_020c;
			}
		}

IL_01fb:
		{
			String_t* L_91 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_92 = String_Concat_m3826EAA4F567A88037F77DAA4CA280E199698DC8(L_91, _stringLiteral8575C679A021CCCB25530F1FFE2D4D78151A6C99, /*hidden argument*/NULL);
			CryptographicException_tEBE52D8795404FE91A37B2662AED1CDF46CD3920 * L_93 = (CryptographicException_tEBE52D8795404FE91A37B2662AED1CDF46CD3920 *)il2cpp_codegen_object_new(CryptographicException_tEBE52D8795404FE91A37B2662AED1CDF46CD3920_il2cpp_TypeInfo_var);
			CryptographicException__ctor_m3949B60BD8659B2BF4ADC9306891AD4BACA25E5C(L_93, L_92, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_93, NULL, X509Crl_Parse_m17DC5BBF779F81775F51E1DA57EE55EBDD428A90_RuntimeMethod_var);
		}

IL_020c:
		{
			ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_94 = V_1;
			NullCheck(L_94);
			ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_95 = ASN1_get_Item_m087B522444CC10BD9BFE5144961DF6ED3F1E7948(L_94, 2, /*hidden argument*/NULL);
			NullCheck(L_95);
			ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_96 = ASN1_get_Value_m893A1DDEE56260B6F1F8747051EE14E9EF84EC90(L_95, /*hidden argument*/NULL);
			V_9 = L_96;
			ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_97 = V_9;
			NullCheck(L_97);
			ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_98 = (ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8*)SZArrayNew(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_97)->max_length)))), (int32_t)1)));
			__this->set_signature_6(L_98);
			ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_99 = V_9;
			ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_100 = __this->get_signature_6();
			ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_101 = __this->get_signature_6();
			NullCheck(L_101);
			Buffer_BlockCopy_m9A63C717564520B770716072C1B44FDCF3C1AA9A((RuntimeArray *)(RuntimeArray *)L_99, 1, (RuntimeArray *)(RuntimeArray *)L_100, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_101)->max_length)))), /*hidden argument*/NULL);
			goto IL_0254;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0247;
		throw e;
	}

CATCH_0247:
	{ // begin catch(System.Object)
		{
			String_t* L_102 = V_0;
			CryptographicException_tEBE52D8795404FE91A37B2662AED1CDF46CD3920 * L_103 = (CryptographicException_tEBE52D8795404FE91A37B2662AED1CDF46CD3920 *)il2cpp_codegen_object_new(CryptographicException_tEBE52D8795404FE91A37B2662AED1CDF46CD3920_il2cpp_TypeInfo_var);
			CryptographicException__ctor_m3949B60BD8659B2BF4ADC9306891AD4BACA25E5C(L_103, L_102, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_103, NULL, X509Crl_Parse_m17DC5BBF779F81775F51E1DA57EE55EBDD428A90_RuntimeMethod_var);
		}

IL_024f:
		{
			goto IL_0254;
		}
	} // end catch (depth: 1)

IL_0254:
	{
		return;
	}
}
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::get_Extensions()
extern "C" IL2CPP_METHOD_ATTR X509ExtensionCollection_t755DFCBDA8823D949578ED886BAFA4BF87706991 * X509Crl_get_Extensions_m73844605446E9F222CE672BE87FFFC4A83405758 (X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA * __this, const RuntimeMethod* method)
{
	{
		X509ExtensionCollection_t755DFCBDA8823D949578ED886BAFA4BF87706991 * L_0 = __this->get_extensions_7();
		return L_0;
	}
}
// System.Byte[] Mono.Security.X509.X509Crl::get_Hash()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* X509Crl_get_Hash_m1D83A886FF1142852347FC1950BDFADBFAE68480 (X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Crl_get_Hash_m1D83A886FF1142852347FC1950BDFADBFAE68480_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * V_0 = NULL;
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* V_1 = NULL;
	HashAlgorithm_t6A31A9B4CBC494EA9286D2A1097C6DC9BCE96CA0 * V_2 = NULL;
	{
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_0 = __this->get_hash_value_9();
		if (L_0)
		{
			goto IL_003d;
		}
	}
	{
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_1 = __this->get_encoded_8();
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_2 = (ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA *)il2cpp_codegen_object_new(ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA_il2cpp_TypeInfo_var);
		ASN1__ctor_mC35B4DE86D465D065D23C2A7F0BE2E2BD5BCE81B(L_2, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_3 = V_0;
		NullCheck(L_3);
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_4 = ASN1_get_Item_m087B522444CC10BD9BFE5144961DF6ED3F1E7948(L_3, 0, /*hidden argument*/NULL);
		NullCheck(L_4);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_5 = VirtFuncInvoker0< ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_4);
		V_1 = L_5;
		String_t* L_6 = X509Crl_GetHashName_mCC743DEE79A5849EDE108FEA2A94EFBE7964C08E(__this, /*hidden argument*/NULL);
		HashAlgorithm_t6A31A9B4CBC494EA9286D2A1097C6DC9BCE96CA0 * L_7 = HashAlgorithm_Create_m4AA7C5F0D71A638441F053BEA51B440C2E3280D5(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		HashAlgorithm_t6A31A9B4CBC494EA9286D2A1097C6DC9BCE96CA0 * L_8 = V_2;
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_9 = V_1;
		NullCheck(L_8);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_10 = HashAlgorithm_ComputeHash_mE4D7CD4D3001447A2280171601783B27220B725A(L_8, L_9, /*hidden argument*/NULL);
		__this->set_hash_value_9(L_10);
	}

IL_003d:
	{
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_11 = __this->get_hash_value_9();
		return L_11;
	}
}
// System.String Mono.Security.X509.X509Crl::get_IssuerName()
extern "C" IL2CPP_METHOD_ATTR String_t* X509Crl_get_IssuerName_m360EE333F7CBD6D35FF5A566831DAE09C6F3BDC3 (X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_issuer_0();
		return L_0;
	}
}
// System.DateTime Mono.Security.X509.X509Crl::get_NextUpdate()
extern "C" IL2CPP_METHOD_ATTR DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  X509Crl_get_NextUpdate_mA421B259BC56B7150A9A5FA5C2B1448D62C401AB (X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA * __this, const RuntimeMethod* method)
{
	{
		DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  L_0 = __this->get_nextUpdate_3();
		return L_0;
	}
}
// System.Boolean Mono.Security.X509.X509Crl::Compare(System.Byte[],System.Byte[])
extern "C" IL2CPP_METHOD_ATTR bool X509Crl_Compare_m5D01CEB8DA8A8E4B9F758E012AD41C530D79D8E1 (X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA * __this, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___array10, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___array21, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_0 = ___array10;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_1 = ___array21;
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		return (bool)1;
	}

IL_000e:
	{
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_2 = ___array10;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_3 = ___array21;
		if (L_3)
		{
			goto IL_001c;
		}
	}

IL_001a:
	{
		return (bool)0;
	}

IL_001c:
	{
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_4 = ___array10;
		NullCheck(L_4);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_5 = ___array21;
		NullCheck(L_5);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length))))) == ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length)))))))
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}

IL_0029:
	{
		V_0 = 0;
		goto IL_0041;
	}

IL_0030:
	{
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_6 = ___array10;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_10 = ___array21;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		if ((((int32_t)L_9) == ((int32_t)L_13)))
		{
			goto IL_003d;
		}
	}
	{
		return (bool)0;
	}

IL_003d:
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0041:
	{
		int32_t L_15 = V_0;
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_16 = ___array10;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_16)->max_length)))))))
		{
			goto IL_0030;
		}
	}
	{
		return (bool)1;
	}
}
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(Mono.Security.X509.X509Certificate)
extern "C" IL2CPP_METHOD_ATTR X509CrlEntry_tBF2584E52778416F84EA34B6F693BF1BED81EFF1 * X509Crl_GetCrlEntry_mDD0B13A867542B544FE7C196296706F2BCD4ED8A (X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA * __this, X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * ___x5090, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Crl_GetCrlEntry_mDD0B13A867542B544FE7C196296706F2BCD4ED8A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_0 = ___x5090;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 * L_1 = (ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 *)il2cpp_codegen_object_new(ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mBA1072348F0861F80512F3BB2BE685EDBB02F740(L_1, _stringLiteral0B48D5DF660D7EAE4D751FB0902C903EC767443B, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, X509Crl_GetCrlEntry_mDD0B13A867542B544FE7C196296706F2BCD4ED8A_RuntimeMethod_var);
	}

IL_0011:
	{
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_2 = ___x5090;
		NullCheck(L_2);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_3 = VirtFuncInvoker0< ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* >::Invoke(13 /* System.Byte[] Mono.Security.X509.X509Certificate::get_SerialNumber() */, L_2);
		X509CrlEntry_tBF2584E52778416F84EA34B6F693BF1BED81EFF1 * L_4 = X509Crl_GetCrlEntry_mD00D74973110486576343395CA6E9954FB051A05(__this, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR X509CrlEntry_tBF2584E52778416F84EA34B6F693BF1BED81EFF1 * X509Crl_GetCrlEntry_mD00D74973110486576343395CA6E9954FB051A05 (X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA * __this, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___serialNumber0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Crl_GetCrlEntry_mD00D74973110486576343395CA6E9954FB051A05_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	X509CrlEntry_tBF2584E52778416F84EA34B6F693BF1BED81EFF1 * V_1 = NULL;
	{
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_0 = ___serialNumber0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 * L_1 = (ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 *)il2cpp_codegen_object_new(ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mBA1072348F0861F80512F3BB2BE685EDBB02F740(L_1, _stringLiteral59A1DDCA00755DB9F2862A1E08F6E43387D48F8D, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, X509Crl_GetCrlEntry_mD00D74973110486576343395CA6E9954FB051A05_RuntimeMethod_var);
	}

IL_0011:
	{
		V_0 = 0;
		goto IL_0042;
	}

IL_0018:
	{
		ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * L_2 = __this->get_entries_4();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		RuntimeObject * L_4 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_2, L_3);
		V_1 = ((X509CrlEntry_tBF2584E52778416F84EA34B6F693BF1BED81EFF1 *)CastclassClass((RuntimeObject*)L_4, X509CrlEntry_tBF2584E52778416F84EA34B6F693BF1BED81EFF1_il2cpp_TypeInfo_var));
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_5 = ___serialNumber0;
		X509CrlEntry_tBF2584E52778416F84EA34B6F693BF1BED81EFF1 * L_6 = V_1;
		NullCheck(L_6);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_7 = X509CrlEntry_get_SerialNumber_mA58F73A0C29131EFEF7EBEDE1D329257494B576E(L_6, /*hidden argument*/NULL);
		bool L_8 = X509Crl_Compare_m5D01CEB8DA8A8E4B9F758E012AD41C530D79D8E1(__this, L_5, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		X509CrlEntry_tBF2584E52778416F84EA34B6F693BF1BED81EFF1 * L_9 = V_1;
		return L_9;
	}

IL_003e:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0042:
	{
		int32_t L_11 = V_0;
		ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * L_12 = __this->get_entries_4();
		NullCheck(L_12);
		int32_t L_13 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_12);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0018;
		}
	}
	{
		return (X509CrlEntry_tBF2584E52778416F84EA34B6F693BF1BED81EFF1 *)NULL;
	}
}
// System.String Mono.Security.X509.X509Crl::GetHashName()
extern "C" IL2CPP_METHOD_ATTR String_t* X509Crl_GetHashName_mCC743DEE79A5849EDE108FEA2A94EFBE7964C08E (X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Crl_GetHashName_mCC743DEE79A5849EDE108FEA2A94EFBE7964C08E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		String_t* L_0 = __this->get_signatureOID_5();
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_008f;
		}
	}
	{
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_2 = ((X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA_StaticFields*)il2cpp_codegen_static_fields_for(X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map13_10();
		if (L_2)
		{
			goto IL_0054;
		}
	}
	{
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_3 = (Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 *)il2cpp_codegen_object_new(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m6FE5F177AC0E406A7D8E0ED92D2254062B8B62EF(L_3, 4, /*hidden argument*/Dictionary_2__ctor_m6FE5F177AC0E406A7D8E0ED92D2254062B8B62EF_RuntimeMethod_var);
		V_1 = L_3;
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_4 = V_1;
		NullCheck(L_4);
		Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E(L_4, _stringLiteral5689F8FC0EDCCDA7299967EA621BBC7DE476ADF6, 0, /*hidden argument*/Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E_RuntimeMethod_var);
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_5 = V_1;
		NullCheck(L_5);
		Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E(L_5, _stringLiteral73C68A69A8FB0CBDA481680BDF7E86FE01482E98, 1, /*hidden argument*/Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E_RuntimeMethod_var);
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_6 = V_1;
		NullCheck(L_6);
		Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E(L_6, _stringLiteral26E69388BB28F94E4154EB47125EC8A829CADFA8, 2, /*hidden argument*/Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E_RuntimeMethod_var);
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_7 = V_1;
		NullCheck(L_7);
		Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E(L_7, _stringLiteralEE617AA3C1633B88FA29FF8B4524F83330B4D16D, 2, /*hidden argument*/Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E_RuntimeMethod_var);
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_8 = V_1;
		((X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA_StaticFields*)il2cpp_codegen_static_fields_for(X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA_il2cpp_TypeInfo_var))->set_U3CU3Ef__switchU24map13_10(L_8);
	}

IL_0054:
	{
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_9 = ((X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA_StaticFields*)il2cpp_codegen_static_fields_for(X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map13_10();
		String_t* L_10 = V_0;
		NullCheck(L_9);
		bool L_11 = Dictionary_2_TryGetValue_m02F60CE92FF5819C471DE461A925C95B780AECAF(L_9, L_10, (int32_t*)(&V_2), /*hidden argument*/Dictionary_2_TryGetValue_m02F60CE92FF5819C471DE461A925C95B780AECAF_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_008f;
		}
	}
	{
		int32_t L_12 = V_2;
		switch (L_12)
		{
			case 0:
			{
				goto IL_007d;
			}
			case 1:
			{
				goto IL_0083;
			}
			case 2:
			{
				goto IL_0089;
			}
		}
	}
	{
		goto IL_008f;
	}

IL_007d:
	{
		return _stringLiteral83BD2260257D398076A738813A94BD2F37D6F282;
	}

IL_0083:
	{
		return _stringLiteralB773BED04A48DE200B96981BB79467413A222066;
	}

IL_0089:
	{
		return _stringLiteralE1744A525099D9A53C0460EF9CB7AB0E4C4FC939;
	}

IL_008f:
	{
		String_t* L_13 = __this->get_signatureOID_5();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m3826EAA4F567A88037F77DAA4CA280E199698DC8(_stringLiteral605F515DB23E613CEB4831C6EACE4C2B023EAEAB, L_13, /*hidden argument*/NULL);
		CryptographicException_tEBE52D8795404FE91A37B2662AED1CDF46CD3920 * L_15 = (CryptographicException_tEBE52D8795404FE91A37B2662AED1CDF46CD3920 *)il2cpp_codegen_object_new(CryptographicException_tEBE52D8795404FE91A37B2662AED1CDF46CD3920_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m3949B60BD8659B2BF4ADC9306891AD4BACA25E5C(L_15, L_14, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, NULL, X509Crl_GetHashName_mCC743DEE79A5849EDE108FEA2A94EFBE7964C08E_RuntimeMethod_var);
	}
}
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.DSA)
extern "C" IL2CPP_METHOD_ATTR bool X509Crl_VerifySignature_mC83C7F97283D639F18457D2263680E8064D36785 (X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA * __this, DSA_tF8DC81D58B7A574DF51517FD242D76B4FC225808 * ___dsa0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Crl_VerifySignature_mC83C7F97283D639F18457D2263680E8064D36785_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DSASignatureDeformatter_t0A3DF19E0A5E10BE91A0779BDF9723CBDE57B357 * V_0 = NULL;
	ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * V_1 = NULL;
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* V_2 = NULL;
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* V_3 = NULL;
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		String_t* L_0 = __this->get_signatureOID_5();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_op_Inequality_mFBA7B689F4FFCEE1224F60E7445E7C1A3F2F362B(L_0, _stringLiteral26E69388BB28F94E4154EB47125EC8A829CADFA8, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_2 = __this->get_signatureOID_5();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m3826EAA4F567A88037F77DAA4CA280E199698DC8(_stringLiteral605F515DB23E613CEB4831C6EACE4C2B023EAEAB, L_2, /*hidden argument*/NULL);
		CryptographicException_tEBE52D8795404FE91A37B2662AED1CDF46CD3920 * L_4 = (CryptographicException_tEBE52D8795404FE91A37B2662AED1CDF46CD3920 *)il2cpp_codegen_object_new(CryptographicException_tEBE52D8795404FE91A37B2662AED1CDF46CD3920_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m3949B60BD8659B2BF4ADC9306891AD4BACA25E5C(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, X509Crl_VerifySignature_mC83C7F97283D639F18457D2263680E8064D36785_RuntimeMethod_var);
	}

IL_002b:
	{
		DSA_tF8DC81D58B7A574DF51517FD242D76B4FC225808 * L_5 = ___dsa0;
		DSASignatureDeformatter_t0A3DF19E0A5E10BE91A0779BDF9723CBDE57B357 * L_6 = (DSASignatureDeformatter_t0A3DF19E0A5E10BE91A0779BDF9723CBDE57B357 *)il2cpp_codegen_object_new(DSASignatureDeformatter_t0A3DF19E0A5E10BE91A0779BDF9723CBDE57B357_il2cpp_TypeInfo_var);
		DSASignatureDeformatter__ctor_m36291A9E815959D24C17228737B2B4858041C838(L_6, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		DSASignatureDeformatter_t0A3DF19E0A5E10BE91A0779BDF9723CBDE57B357 * L_7 = V_0;
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void System.Security.Cryptography.DSASignatureDeformatter::SetHashAlgorithm(System.String) */, L_7, _stringLiteralE1744A525099D9A53C0460EF9CB7AB0E4C4FC939);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_8 = __this->get_signature_6();
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_9 = (ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA *)il2cpp_codegen_object_new(ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA_il2cpp_TypeInfo_var);
		ASN1__ctor_mC35B4DE86D465D065D23C2A7F0BE2E2BD5BCE81B(L_9, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_10 = V_1;
		if (!L_10)
		{
			goto IL_005b;
		}
	}
	{
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12 = ASN1_get_Count_m2DE9AE59371E5BD294F898C93FC9554DD3C02E85(L_11, /*hidden argument*/NULL);
		if ((((int32_t)L_12) == ((int32_t)2)))
		{
			goto IL_005d;
		}
	}

IL_005b:
	{
		return (bool)0;
	}

IL_005d:
	{
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_13 = V_1;
		NullCheck(L_13);
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_14 = ASN1_get_Item_m087B522444CC10BD9BFE5144961DF6ED3F1E7948(L_13, 0, /*hidden argument*/NULL);
		NullCheck(L_14);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_15 = ASN1_get_Value_m893A1DDEE56260B6F1F8747051EE14E9EF84EC90(L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_16 = V_1;
		NullCheck(L_16);
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_17 = ASN1_get_Item_m087B522444CC10BD9BFE5144961DF6ED3F1E7948(L_16, 1, /*hidden argument*/NULL);
		NullCheck(L_17);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_18 = ASN1_get_Value_m893A1DDEE56260B6F1F8747051EE14E9EF84EC90(L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_19 = (ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8*)SZArrayNew(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8_il2cpp_TypeInfo_var, (uint32_t)((int32_t)40));
		V_4 = L_19;
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_20 = V_2;
		NullCheck(L_20);
		int32_t L_21 = Math_Max_m8B815B13982D8738EF051EA87C1CCB722CDF29B2(0, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length)))), (int32_t)((int32_t)20))), /*hidden argument*/NULL);
		V_5 = L_21;
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_22 = V_2;
		NullCheck(L_22);
		int32_t L_23 = Math_Max_m8B815B13982D8738EF051EA87C1CCB722CDF29B2(0, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)20), (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_22)->max_length)))))), /*hidden argument*/NULL);
		V_6 = L_23;
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_24 = V_2;
		int32_t L_25 = V_5;
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_26 = V_4;
		int32_t L_27 = V_6;
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_28 = V_2;
		NullCheck(L_28);
		int32_t L_29 = V_5;
		Buffer_BlockCopy_m9A63C717564520B770716072C1B44FDCF3C1AA9A((RuntimeArray *)(RuntimeArray *)L_24, L_25, (RuntimeArray *)(RuntimeArray *)L_26, L_27, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_28)->max_length)))), (int32_t)L_29)), /*hidden argument*/NULL);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_30 = V_3;
		NullCheck(L_30);
		int32_t L_31 = Math_Max_m8B815B13982D8738EF051EA87C1CCB722CDF29B2(0, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_30)->max_length)))), (int32_t)((int32_t)20))), /*hidden argument*/NULL);
		V_7 = L_31;
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_32 = V_3;
		NullCheck(L_32);
		int32_t L_33 = Math_Max_m8B815B13982D8738EF051EA87C1CCB722CDF29B2(((int32_t)20), ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)40), (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_32)->max_length)))))), /*hidden argument*/NULL);
		V_8 = L_33;
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_34 = V_3;
		int32_t L_35 = V_7;
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_36 = V_4;
		int32_t L_37 = V_8;
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_38 = V_3;
		NullCheck(L_38);
		int32_t L_39 = V_7;
		Buffer_BlockCopy_m9A63C717564520B770716072C1B44FDCF3C1AA9A((RuntimeArray *)(RuntimeArray *)L_34, L_35, (RuntimeArray *)(RuntimeArray *)L_36, L_37, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_38)->max_length)))), (int32_t)L_39)), /*hidden argument*/NULL);
		DSASignatureDeformatter_t0A3DF19E0A5E10BE91A0779BDF9723CBDE57B357 * L_40 = V_0;
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_41 = X509Crl_get_Hash_m1D83A886FF1142852347FC1950BDFADBFAE68480(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_42 = V_4;
		NullCheck(L_40);
		bool L_43 = VirtFuncInvoker2< bool, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8*, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* >::Invoke(6 /* System.Boolean System.Security.Cryptography.DSASignatureDeformatter::VerifySignature(System.Byte[],System.Byte[]) */, L_40, L_41, L_42);
		return L_43;
	}
}
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.RSA)
extern "C" IL2CPP_METHOD_ATTR bool X509Crl_VerifySignature_m180CF72103AFD9411F2C3816241BB74B0C685B12 (X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA * __this, RSA_t565B1E1F95589A0E37D0C66406CF730DC4A43051 * ___rsa0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Crl_VerifySignature_m180CF72103AFD9411F2C3816241BB74B0C685B12_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RSAPKCS1SignatureDeformatter_t386250AF7C86EA2F614086AA52825277DBEC3A3F * V_0 = NULL;
	{
		RSA_t565B1E1F95589A0E37D0C66406CF730DC4A43051 * L_0 = ___rsa0;
		RSAPKCS1SignatureDeformatter_t386250AF7C86EA2F614086AA52825277DBEC3A3F * L_1 = (RSAPKCS1SignatureDeformatter_t386250AF7C86EA2F614086AA52825277DBEC3A3F *)il2cpp_codegen_object_new(RSAPKCS1SignatureDeformatter_t386250AF7C86EA2F614086AA52825277DBEC3A3F_il2cpp_TypeInfo_var);
		RSAPKCS1SignatureDeformatter__ctor_mC2D8F29D9F268BB1D910AC7A345E20874C37AB6B(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RSAPKCS1SignatureDeformatter_t386250AF7C86EA2F614086AA52825277DBEC3A3F * L_2 = V_0;
		String_t* L_3 = X509Crl_GetHashName_mCC743DEE79A5849EDE108FEA2A94EFBE7964C08E(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetHashAlgorithm(System.String) */, L_2, L_3);
		RSAPKCS1SignatureDeformatter_t386250AF7C86EA2F614086AA52825277DBEC3A3F * L_4 = V_0;
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_5 = X509Crl_get_Hash_m1D83A886FF1142852347FC1950BDFADBFAE68480(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_6 = __this->get_signature_6();
		NullCheck(L_4);
		bool L_7 = VirtFuncInvoker2< bool, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8*, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* >::Invoke(6 /* System.Boolean System.Security.Cryptography.RSAPKCS1SignatureDeformatter::VerifySignature(System.Byte[],System.Byte[]) */, L_4, L_5, L_6);
		return L_7;
	}
}
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" IL2CPP_METHOD_ATTR bool X509Crl_VerifySignature_m836823BA734D742977ECE9482E71BAF6493D9CBC (X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA * __this, AsymmetricAlgorithm_tCE2A08658EFEA671D977BC39FA246B4FC5092BB2 * ___aa0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Crl_VerifySignature_m836823BA734D742977ECE9482E71BAF6493D9CBC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsymmetricAlgorithm_tCE2A08658EFEA671D977BC39FA246B4FC5092BB2 * L_0 = ___aa0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 * L_1 = (ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 *)il2cpp_codegen_object_new(ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mBA1072348F0861F80512F3BB2BE685EDBB02F740(L_1, _stringLiteralE0C9035898DD52FC65C41454CEC9C4D2611BFB37, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, X509Crl_VerifySignature_m836823BA734D742977ECE9482E71BAF6493D9CBC_RuntimeMethod_var);
	}

IL_0011:
	{
		AsymmetricAlgorithm_tCE2A08658EFEA671D977BC39FA246B4FC5092BB2 * L_2 = ___aa0;
		if (!((RSA_t565B1E1F95589A0E37D0C66406CF730DC4A43051 *)IsInstClass((RuntimeObject*)L_2, RSA_t565B1E1F95589A0E37D0C66406CF730DC4A43051_il2cpp_TypeInfo_var)))
		{
			goto IL_0029;
		}
	}
	{
		AsymmetricAlgorithm_tCE2A08658EFEA671D977BC39FA246B4FC5092BB2 * L_3 = ___aa0;
		bool L_4 = X509Crl_VerifySignature_m180CF72103AFD9411F2C3816241BB74B0C685B12(__this, ((RSA_t565B1E1F95589A0E37D0C66406CF730DC4A43051 *)IsInstClass((RuntimeObject*)L_3, RSA_t565B1E1F95589A0E37D0C66406CF730DC4A43051_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_4;
	}

IL_0029:
	{
		AsymmetricAlgorithm_tCE2A08658EFEA671D977BC39FA246B4FC5092BB2 * L_5 = ___aa0;
		if (!((DSA_tF8DC81D58B7A574DF51517FD242D76B4FC225808 *)IsInstClass((RuntimeObject*)L_5, DSA_tF8DC81D58B7A574DF51517FD242D76B4FC225808_il2cpp_TypeInfo_var)))
		{
			goto IL_0041;
		}
	}
	{
		AsymmetricAlgorithm_tCE2A08658EFEA671D977BC39FA246B4FC5092BB2 * L_6 = ___aa0;
		bool L_7 = X509Crl_VerifySignature_mC83C7F97283D639F18457D2263680E8064D36785(__this, ((DSA_tF8DC81D58B7A574DF51517FD242D76B4FC225808 *)IsInstClass((RuntimeObject*)L_6, DSA_tF8DC81D58B7A574DF51517FD242D76B4FC225808_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_7;
	}

IL_0041:
	{
		AsymmetricAlgorithm_tCE2A08658EFEA671D977BC39FA246B4FC5092BB2 * L_8 = ___aa0;
		NullCheck(L_8);
		String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m3826EAA4F567A88037F77DAA4CA280E199698DC8(_stringLiteralA525CC8F7233FA9255909A03B5681A2DFA297927, L_9, /*hidden argument*/NULL);
		NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6 * L_11 = (NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6 *)il2cpp_codegen_object_new(NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m631F783E957027CA661C281874882040F7693602(L_11, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, NULL, X509Crl_VerifySignature_m836823BA734D742977ECE9482E71BAF6493D9CBC_RuntimeMethod_var);
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
// System.Void Mono.Security.X509.X509Crl/X509CrlEntry::.ctor(Mono.Security.ASN1)
extern "C" IL2CPP_METHOD_ATTR void X509CrlEntry__ctor_m3A28575C3EB8FA74122CB79763993AB6596B8C5B (X509CrlEntry_tBF2584E52778416F84EA34B6F693BF1BED81EFF1 * __this, ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * ___entry0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CrlEntry__ctor_m3A28575C3EB8FA74122CB79763993AB6596B8C5B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_0 = ___entry0;
		NullCheck(L_0);
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_1 = ASN1_get_Item_m087B522444CC10BD9BFE5144961DF6ED3F1E7948(L_0, 0, /*hidden argument*/NULL);
		NullCheck(L_1);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_2 = ASN1_get_Value_m893A1DDEE56260B6F1F8747051EE14E9EF84EC90(L_1, /*hidden argument*/NULL);
		__this->set_sn_0(L_2);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_3 = __this->get_sn_0();
		Array_Reverse_mD0C0F739C51E380F6F770595D907C4C88AB9FE4B((RuntimeArray *)(RuntimeArray *)L_3, /*hidden argument*/NULL);
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_4 = ___entry0;
		NullCheck(L_4);
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_5 = ASN1_get_Item_m087B522444CC10BD9BFE5144961DF6ED3F1E7948(L_4, 1, /*hidden argument*/NULL);
		DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  L_6 = ASN1Convert_ToDateTime_mEDB912E5FF6243C689A88E0A08F10AF4E6C3DFDE(L_5, /*hidden argument*/NULL);
		__this->set_revocationDate_1(L_6);
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_7 = ___entry0;
		NullCheck(L_7);
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_8 = ASN1_get_Item_m087B522444CC10BD9BFE5144961DF6ED3F1E7948(L_7, 2, /*hidden argument*/NULL);
		X509ExtensionCollection_t755DFCBDA8823D949578ED886BAFA4BF87706991 * L_9 = (X509ExtensionCollection_t755DFCBDA8823D949578ED886BAFA4BF87706991 *)il2cpp_codegen_object_new(X509ExtensionCollection_t755DFCBDA8823D949578ED886BAFA4BF87706991_il2cpp_TypeInfo_var);
		X509ExtensionCollection__ctor_mD6D256F8D16DA2083043F31DEB283D5D4B37F6BF(L_9, L_8, /*hidden argument*/NULL);
		__this->set_extensions_2(L_9);
		return;
	}
}
// System.Byte[] Mono.Security.X509.X509Crl/X509CrlEntry::get_SerialNumber()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* X509CrlEntry_get_SerialNumber_mA58F73A0C29131EFEF7EBEDE1D329257494B576E (X509CrlEntry_tBF2584E52778416F84EA34B6F693BF1BED81EFF1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CrlEntry_get_SerialNumber_mA58F73A0C29131EFEF7EBEDE1D329257494B576E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_0 = __this->get_sn_0();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_0);
		RuntimeObject * L_1 = Array_Clone_m63F8DD231C00DCDECAE3582E72E7783D1349C57D((RuntimeArray *)(RuntimeArray *)L_0, /*hidden argument*/NULL);
		return ((ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8*)Castclass((RuntimeObject*)L_1, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8_il2cpp_TypeInfo_var));
	}
}
// System.DateTime Mono.Security.X509.X509Crl/X509CrlEntry::get_RevocationDate()
extern "C" IL2CPP_METHOD_ATTR DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  X509CrlEntry_get_RevocationDate_m8A38A59D18465AA6D25CBF76BC97F214BDC82B56 (X509CrlEntry_tBF2584E52778416F84EA34B6F693BF1BED81EFF1 * __this, const RuntimeMethod* method)
{
	{
		DateTime_t816BBD9125EA02B42B87CB07643FC5F803391DA2  L_0 = __this->get_revocationDate_1();
		return L_0;
	}
}
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl/X509CrlEntry::get_Extensions()
extern "C" IL2CPP_METHOD_ATTR X509ExtensionCollection_t755DFCBDA8823D949578ED886BAFA4BF87706991 * X509CrlEntry_get_Extensions_m429C6167332B064172D663CDBD693DF8ED641236 (X509CrlEntry_tBF2584E52778416F84EA34B6F693BF1BED81EFF1 * __this, const RuntimeMethod* method)
{
	{
		X509ExtensionCollection_t755DFCBDA8823D949578ED886BAFA4BF87706991 * L_0 = __this->get_extensions_2();
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
// System.Void Mono.Security.X509.X509Extension::.ctor(Mono.Security.ASN1)
extern "C" IL2CPP_METHOD_ATTR void X509Extension__ctor_mBD6F41EB0B35B0B55E9D63FBEE7E731AA73F7B54 (X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 * __this, ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * ___asn10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Extension__ctor_mBD6F41EB0B35B0B55E9D63FBEE7E731AA73F7B54_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 * G_B7_0 = NULL;
	X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 * G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 * G_B8_1 = NULL;
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_0 = ___asn10;
		NullCheck(L_0);
		uint8_t L_1 = ASN1_get_Tag_mA0D39A4B0A7E2BF19563FF997A8CCEA03DDC0FBE(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_001f;
		}
	}
	{
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_2 = ___asn10;
		NullCheck(L_2);
		int32_t L_3 = ASN1_get_Count_m2DE9AE59371E5BD294F898C93FC9554DD3C02E85(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) >= ((int32_t)2)))
		{
			goto IL_002f;
		}
	}

IL_001f:
	{
		String_t* L_4 = Locale_GetText_m336A40C92176E0F768132FB6A92A248657C6E038(_stringLiteral69B85846222F763F537AAE189724E50D8A16971F, /*hidden argument*/NULL);
		ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 * L_5 = (ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 *)il2cpp_codegen_object_new(ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m8917650A5D8F2F36C6B623A720DF2D2A630D3533(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, X509Extension__ctor_mBD6F41EB0B35B0B55E9D63FBEE7E731AA73F7B54_RuntimeMethod_var);
	}

IL_002f:
	{
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_6 = ___asn10;
		NullCheck(L_6);
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_7 = ASN1_get_Item_m087B522444CC10BD9BFE5144961DF6ED3F1E7948(L_6, 0, /*hidden argument*/NULL);
		NullCheck(L_7);
		uint8_t L_8 = ASN1_get_Tag_mA0D39A4B0A7E2BF19563FF997A8CCEA03DDC0FBE(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)6)))
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_9 = Locale_GetText_m336A40C92176E0F768132FB6A92A248657C6E038(_stringLiteral69B85846222F763F537AAE189724E50D8A16971F, /*hidden argument*/NULL);
		ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 * L_10 = (ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 *)il2cpp_codegen_object_new(ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m8917650A5D8F2F36C6B623A720DF2D2A630D3533(L_10, L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, NULL, X509Extension__ctor_mBD6F41EB0B35B0B55E9D63FBEE7E731AA73F7B54_RuntimeMethod_var);
	}

IL_0051:
	{
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_11 = ___asn10;
		NullCheck(L_11);
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_12 = ASN1_get_Item_m087B522444CC10BD9BFE5144961DF6ED3F1E7948(L_11, 0, /*hidden argument*/NULL);
		String_t* L_13 = ASN1Convert_ToOid_mF946DA90DFB49894856E9CFD807D60600EC19448(L_12, /*hidden argument*/NULL);
		__this->set_extnOid_0(L_13);
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_14 = ___asn10;
		NullCheck(L_14);
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_15 = ASN1_get_Item_m087B522444CC10BD9BFE5144961DF6ED3F1E7948(L_14, 1, /*hidden argument*/NULL);
		NullCheck(L_15);
		uint8_t L_16 = ASN1_get_Tag_mA0D39A4B0A7E2BF19563FF997A8CCEA03DDC0FBE(L_15, /*hidden argument*/NULL);
		G_B6_0 = __this;
		if ((!(((uint32_t)L_16) == ((uint32_t)1))))
		{
			G_B7_0 = __this;
			goto IL_008d;
		}
	}
	{
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_17 = ___asn10;
		NullCheck(L_17);
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_18 = ASN1_get_Item_m087B522444CC10BD9BFE5144961DF6ED3F1E7948(L_17, 1, /*hidden argument*/NULL);
		NullCheck(L_18);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_19 = ASN1_get_Value_m893A1DDEE56260B6F1F8747051EE14E9EF84EC90(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		int32_t L_20 = 0;
		uint8_t L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		G_B8_0 = ((((int32_t)L_21) == ((int32_t)((int32_t)255)))? 1 : 0);
		G_B8_1 = G_B6_0;
		goto IL_008e;
	}

IL_008d:
	{
		G_B8_0 = 0;
		G_B8_1 = G_B7_0;
	}

IL_008e:
	{
		NullCheck(G_B8_1);
		G_B8_1->set_extnCritical_1((bool)G_B8_0);
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_22 = ___asn10;
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_23 = ___asn10;
		NullCheck(L_23);
		int32_t L_24 = ASN1_get_Count_m2DE9AE59371E5BD294F898C93FC9554DD3C02E85(L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_25 = ASN1_get_Item_m087B522444CC10BD9BFE5144961DF6ED3F1E7948(L_22, ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1)), /*hidden argument*/NULL);
		__this->set_extnValue_2(L_25);
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_26 = __this->get_extnValue_2();
		NullCheck(L_26);
		uint8_t L_27 = ASN1_get_Tag_mA0D39A4B0A7E2BF19563FF997A8CCEA03DDC0FBE(L_26, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_27) == ((uint32_t)4))))
		{
			goto IL_010e;
		}
	}
	{
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_28 = __this->get_extnValue_2();
		NullCheck(L_28);
		int32_t L_29 = ASN1_get_Length_m8A434F6E1AB4DCB7FE25E1BB37D269C4A112E5E2(L_28, /*hidden argument*/NULL);
		if ((((int32_t)L_29) <= ((int32_t)0)))
		{
			goto IL_010e;
		}
	}
	{
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_30 = __this->get_extnValue_2();
		NullCheck(L_30);
		int32_t L_31 = ASN1_get_Count_m2DE9AE59371E5BD294F898C93FC9554DD3C02E85(L_30, /*hidden argument*/NULL);
		if (L_31)
		{
			goto IL_010e;
		}
	}

IL_00d9:
	try
	{ // begin try (depth: 1)
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_32 = __this->get_extnValue_2();
		NullCheck(L_32);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_33 = ASN1_get_Value_m893A1DDEE56260B6F1F8747051EE14E9EF84EC90(L_32, /*hidden argument*/NULL);
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_34 = (ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA *)il2cpp_codegen_object_new(ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA_il2cpp_TypeInfo_var);
		ASN1__ctor_mC35B4DE86D465D065D23C2A7F0BE2E2BD5BCE81B(L_34, L_33, /*hidden argument*/NULL);
		V_0 = L_34;
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_35 = __this->get_extnValue_2();
		NullCheck(L_35);
		ASN1_set_Value_m20947EB35C82D9B042F55454A8687CA8677A01F7(L_35, (ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8*)(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8*)NULL, /*hidden argument*/NULL);
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_36 = __this->get_extnValue_2();
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_37 = V_0;
		NullCheck(L_36);
		ASN1_Add_m054AB5BE27617D626FA7E633C0B1AD5543A3552E(L_36, L_37, /*hidden argument*/NULL);
		goto IL_010e;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0108;
		throw e;
	}

CATCH_0108:
	{ // begin catch(System.Object)
		goto IL_010e;
	} // end catch (depth: 1)

IL_010e:
	{
		VirtActionInvoker0::Invoke(4 /* System.Void Mono.Security.X509.X509Extension::Decode() */, __this);
		return;
	}
}
// System.Void Mono.Security.X509.X509Extension::.ctor(Mono.Security.X509.X509Extension)
extern "C" IL2CPP_METHOD_ATTR void X509Extension__ctor_m749346817515F201EAA0C1C29360C85FA558E602 (X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 * __this, X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 * ___extension0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Extension__ctor_m749346817515F201EAA0C1C29360C85FA558E602_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 * L_0 = ___extension0;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 * L_1 = (ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 *)il2cpp_codegen_object_new(ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mBA1072348F0861F80512F3BB2BE685EDBB02F740(L_1, _stringLiteralF98961015A0AC393630F4EDA3749D644A716DA64, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, X509Extension__ctor_m749346817515F201EAA0C1C29360C85FA558E602_RuntimeMethod_var);
	}

IL_0017:
	{
		X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 * L_2 = ___extension0;
		NullCheck(L_2);
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_3 = X509Extension_get_Value_mF79631BD8114F8FA7E8D645E83DAF0D527519B51(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0044;
		}
	}
	{
		X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 * L_4 = ___extension0;
		NullCheck(L_4);
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_5 = X509Extension_get_Value_mF79631BD8114F8FA7E8D645E83DAF0D527519B51(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		uint8_t L_6 = ASN1_get_Tag_mA0D39A4B0A7E2BF19563FF997A8CCEA03DDC0FBE(L_5, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)4))))
		{
			goto IL_0044;
		}
	}
	{
		X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 * L_7 = ___extension0;
		NullCheck(L_7);
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_8 = X509Extension_get_Value_mF79631BD8114F8FA7E8D645E83DAF0D527519B51(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_9 = ASN1_get_Count_m2DE9AE59371E5BD294F898C93FC9554DD3C02E85(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_9) == ((int32_t)1)))
		{
			goto IL_0054;
		}
	}

IL_0044:
	{
		String_t* L_10 = Locale_GetText_m336A40C92176E0F768132FB6A92A248657C6E038(_stringLiteral69B85846222F763F537AAE189724E50D8A16971F, /*hidden argument*/NULL);
		ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 * L_11 = (ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 *)il2cpp_codegen_object_new(ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m8917650A5D8F2F36C6B623A720DF2D2A630D3533(L_11, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, NULL, X509Extension__ctor_m749346817515F201EAA0C1C29360C85FA558E602_RuntimeMethod_var);
	}

IL_0054:
	{
		X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 * L_12 = ___extension0;
		NullCheck(L_12);
		String_t* L_13 = X509Extension_get_Oid_m09F4EE740F0B631F9917FE345258FF2F2A41F08A(L_12, /*hidden argument*/NULL);
		__this->set_extnOid_0(L_13);
		X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 * L_14 = ___extension0;
		NullCheck(L_14);
		bool L_15 = X509Extension_get_Critical_m1BFE6392CDBA1809DE5C42DB109ECF1CACCFAEAE(L_14, /*hidden argument*/NULL);
		__this->set_extnCritical_1(L_15);
		X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 * L_16 = ___extension0;
		NullCheck(L_16);
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_17 = X509Extension_get_Value_mF79631BD8114F8FA7E8D645E83DAF0D527519B51(L_16, /*hidden argument*/NULL);
		__this->set_extnValue_2(L_17);
		VirtActionInvoker0::Invoke(4 /* System.Void Mono.Security.X509.X509Extension::Decode() */, __this);
		return;
	}
}
// System.Void Mono.Security.X509.X509Extension::Decode()
extern "C" IL2CPP_METHOD_ATTR void X509Extension_Decode_m6BFA88876CB892D33F9E4C9AA4ED622CF6D5FC6C (X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Mono.Security.X509.X509Extension::Encode()
extern "C" IL2CPP_METHOD_ATTR void X509Extension_Encode_m24A1E1CC5FD5784D4C1CF8BDB52A766F903C75C4 (X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.String Mono.Security.X509.X509Extension::get_Oid()
extern "C" IL2CPP_METHOD_ATTR String_t* X509Extension_get_Oid_m09F4EE740F0B631F9917FE345258FF2F2A41F08A (X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_extnOid_0();
		return L_0;
	}
}
// System.Boolean Mono.Security.X509.X509Extension::get_Critical()
extern "C" IL2CPP_METHOD_ATTR bool X509Extension_get_Critical_m1BFE6392CDBA1809DE5C42DB109ECF1CACCFAEAE (X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_extnCritical_1();
		return L_0;
	}
}
// Mono.Security.ASN1 Mono.Security.X509.X509Extension::get_Value()
extern "C" IL2CPP_METHOD_ATTR ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * X509Extension_get_Value_mF79631BD8114F8FA7E8D645E83DAF0D527519B51 (X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 * __this, const RuntimeMethod* method)
{
	{
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_0 = __this->get_extnValue_2();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		VirtActionInvoker0::Invoke(5 /* System.Void Mono.Security.X509.X509Extension::Encode() */, __this);
	}

IL_0011:
	{
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_1 = __this->get_extnValue_2();
		return L_1;
	}
}
// System.Boolean Mono.Security.X509.X509Extension::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool X509Extension_Equals_mF81477066424C49ABB4E3C70EFE5EF15E93DBDB6 (X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Extension_Equals_mF81477066424C49ABB4E3C70EFE5EF15E93DBDB6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___obj0;
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
		RuntimeObject * L_1 = ___obj0;
		V_0 = ((X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 *)IsInstClass((RuntimeObject*)L_1, X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698_il2cpp_TypeInfo_var));
		X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 * L_2 = V_0;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		bool L_3 = __this->get_extnCritical_1();
		X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 * L_4 = V_0;
		NullCheck(L_4);
		bool L_5 = L_4->get_extnCritical_1();
		if ((((int32_t)L_3) == ((int32_t)L_5)))
		{
			goto IL_002a;
		}
	}
	{
		return (bool)0;
	}

IL_002a:
	{
		String_t* L_6 = __this->get_extnOid_0();
		X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = L_7->get_extnOid_0();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_op_Inequality_mFBA7B689F4FFCEE1224F60E7445E7C1A3F2F362B(L_6, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		return (bool)0;
	}

IL_0042:
	{
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_10 = __this->get_extnValue_2();
		NullCheck(L_10);
		int32_t L_11 = ASN1_get_Length_m8A434F6E1AB4DCB7FE25E1BB37D269C4A112E5E2(L_10, /*hidden argument*/NULL);
		X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 * L_12 = V_0;
		NullCheck(L_12);
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_13 = L_12->get_extnValue_2();
		NullCheck(L_13);
		int32_t L_14 = ASN1_get_Length_m8A434F6E1AB4DCB7FE25E1BB37D269C4A112E5E2(L_13, /*hidden argument*/NULL);
		if ((((int32_t)L_11) == ((int32_t)L_14)))
		{
			goto IL_005f;
		}
	}
	{
		return (bool)0;
	}

IL_005f:
	{
		V_1 = 0;
		goto IL_0089;
	}

IL_0066:
	{
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_15 = __this->get_extnValue_2();
		int32_t L_16 = V_1;
		NullCheck(L_15);
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_17 = ASN1_get_Item_m087B522444CC10BD9BFE5144961DF6ED3F1E7948(L_15, L_16, /*hidden argument*/NULL);
		X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 * L_18 = V_0;
		NullCheck(L_18);
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_19 = L_18->get_extnValue_2();
		int32_t L_20 = V_1;
		NullCheck(L_19);
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_21 = ASN1_get_Item_m087B522444CC10BD9BFE5144961DF6ED3F1E7948(L_19, L_20, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA *)L_17) == ((RuntimeObject*)(ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA *)L_21)))
		{
			goto IL_0085;
		}
	}
	{
		return (bool)0;
	}

IL_0085:
	{
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_0089:
	{
		int32_t L_23 = V_1;
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_24 = __this->get_extnValue_2();
		NullCheck(L_24);
		int32_t L_25 = ASN1_get_Length_m8A434F6E1AB4DCB7FE25E1BB37D269C4A112E5E2(L_24, /*hidden argument*/NULL);
		if ((((int32_t)L_23) < ((int32_t)L_25)))
		{
			goto IL_0066;
		}
	}
	{
		return (bool)1;
	}
}
// System.Int32 Mono.Security.X509.X509Extension::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t X509Extension_GetHashCode_mFD4D2F274426061102F9E4B4549609F744785495 (X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_extnOid_0();
		NullCheck(L_0);
		int32_t L_1 = String_GetHashCode_mD3308B7BBDBBA8491D427035EE6570F52787AA2D(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Mono.Security.X509.X509Extension::WriteLine(System.Text.StringBuilder,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void X509Extension_WriteLine_m1244F1ECEBCB55AD4259794195FEF5814994960A (X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 * __this, StringBuilder_t * ___sb0, int32_t ___n1, int32_t ___pos2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Extension_WriteLine_m1244F1ECEBCB55AD4259794195FEF5814994960A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	{
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_0 = __this->get_extnValue_2();
		NullCheck(L_0);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_1 = ASN1_get_Value_m893A1DDEE56260B6F1F8747051EE14E9EF84EC90(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = ___pos2;
		V_1 = L_2;
		V_2 = 0;
		goto IL_005e;
	}

IL_0015:
	{
		int32_t L_3 = V_2;
		int32_t L_4 = ___n1;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_004e;
		}
	}
	{
		StringBuilder_t * L_5 = ___sb0;
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		NullCheck(L_6);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_il2cpp_TypeInfo_var);
		CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * L_9 = CultureInfo_get_InvariantCulture_mC3D1AE4739EDD185D33883D326C375EB71D9A3BE(/*hidden argument*/NULL);
		String_t* L_10 = Byte_ToString_m94388CD6693B494E5D847B063EDE262F0991D518((uint8_t*)((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), _stringLiteral9F792B61D0EC544D91E7AFF34E2E99EE3CF2B313, L_9, /*hidden argument*/NULL);
		NullCheck(L_5);
		StringBuilder_Append_m402C4CFC4FCEC22D0A372742BC40DF2224C41F86(L_5, L_10, /*hidden argument*/NULL);
		StringBuilder_t * L_11 = ___sb0;
		NullCheck(L_11);
		StringBuilder_Append_m402C4CFC4FCEC22D0A372742BC40DF2224C41F86(L_11, _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6, /*hidden argument*/NULL);
		goto IL_005a;
	}

IL_004e:
	{
		StringBuilder_t * L_12 = ___sb0;
		NullCheck(L_12);
		StringBuilder_Append_m402C4CFC4FCEC22D0A372742BC40DF2224C41F86(L_12, _stringLiteral088FB1A4AB057F4FCF7D487006499060C7FE5773, /*hidden argument*/NULL);
	}

IL_005a:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_005e:
	{
		int32_t L_14 = V_2;
		if ((((int32_t)L_14) < ((int32_t)8)))
		{
			goto IL_0015;
		}
	}
	{
		StringBuilder_t * L_15 = ___sb0;
		NullCheck(L_15);
		StringBuilder_Append_m402C4CFC4FCEC22D0A372742BC40DF2224C41F86(L_15, _stringLiteral099600A10A944114AAC406D136B625FB416DD779, /*hidden argument*/NULL);
		int32_t L_16 = ___pos2;
		V_1 = L_16;
		V_3 = 0;
		goto IL_00af;
	}

IL_007a:
	{
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_17 = V_0;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
		NullCheck(L_17);
		int32_t L_20 = L_19;
		uint8_t L_21 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_4 = L_21;
		uint8_t L_22 = V_4;
		if ((((int32_t)L_22) >= ((int32_t)((int32_t)32))))
		{
			goto IL_009d;
		}
	}
	{
		StringBuilder_t * L_23 = ___sb0;
		NullCheck(L_23);
		StringBuilder_Append_m402C4CFC4FCEC22D0A372742BC40DF2224C41F86(L_23, _stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727, /*hidden argument*/NULL);
		goto IL_00ab;
	}

IL_009d:
	{
		StringBuilder_t * L_24 = ___sb0;
		uint8_t L_25 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t8A398E85B5FC90CA984E604BD3F65BD7B205D592_il2cpp_TypeInfo_var);
		Il2CppChar L_26 = Convert_ToChar_m443666DEF6640DE8D09A18F16D3E78BAAB71E150(L_25, /*hidden argument*/NULL);
		NullCheck(L_24);
		StringBuilder_Append_m1F484B542C4F3C021CC03CFC09FE58A360ED4770(L_24, L_26, /*hidden argument*/NULL);
	}

IL_00ab:
	{
		int32_t L_27 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_00af:
	{
		int32_t L_28 = V_3;
		int32_t L_29 = ___n1;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_007a;
		}
	}
	{
		StringBuilder_t * L_30 = ___sb0;
		String_t* L_31 = Environment_get_NewLine_mE2007839F78B01EFFEE101DAD64A21C72B9A79BB(/*hidden argument*/NULL);
		NullCheck(L_30);
		StringBuilder_Append_m402C4CFC4FCEC22D0A372742BC40DF2224C41F86(L_30, L_31, /*hidden argument*/NULL);
		return;
	}
}
// System.String Mono.Security.X509.X509Extension::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* X509Extension_ToString_m9352453B18C15C1B6E1FA3054FAC59F26FD95EB8 (X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Extension_ToString_m9352453B18C15C1B6E1FA3054FAC59F26FD95EB8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1E28545009F6227C8FEF73E8E74B9CFC5A97BF97(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_1 = __this->get_extnValue_2();
		NullCheck(L_1);
		int32_t L_2 = ASN1_get_Length_m8A434F6E1AB4DCB7FE25E1BB37D269C4A112E5E2(L_1, /*hidden argument*/NULL);
		V_1 = ((int32_t)((int32_t)L_2>>(int32_t)3));
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_3 = __this->get_extnValue_2();
		NullCheck(L_3);
		int32_t L_4 = ASN1_get_Length_m8A434F6E1AB4DCB7FE25E1BB37D269C4A112E5E2(L_3, /*hidden argument*/NULL);
		int32_t L_5 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)((int32_t)((int32_t)L_5<<(int32_t)3))));
		V_3 = 0;
		V_4 = 0;
		goto IL_0041;
	}

IL_002e:
	{
		StringBuilder_t * L_6 = V_0;
		int32_t L_7 = V_3;
		X509Extension_WriteLine_m1244F1ECEBCB55AD4259794195FEF5814994960A(__this, L_6, 8, L_7, /*hidden argument*/NULL);
		int32_t L_8 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)8));
		int32_t L_9 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0041:
	{
		int32_t L_10 = V_4;
		int32_t L_11 = V_1;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_002e;
		}
	}
	{
		StringBuilder_t * L_12 = V_0;
		int32_t L_13 = V_2;
		int32_t L_14 = V_3;
		X509Extension_WriteLine_m1244F1ECEBCB55AD4259794195FEF5814994960A(__this, L_12, L_13, L_14, /*hidden argument*/NULL);
		StringBuilder_t * L_15 = V_0;
		NullCheck(L_15);
		String_t* L_16 = StringBuilder_ToString_mD4C6AC273A5E792C65602E2CC71505C985B8CD6D(L_15, /*hidden argument*/NULL);
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
// System.Void Mono.Security.X509.X509ExtensionCollection::.ctor()
extern "C" IL2CPP_METHOD_ATTR void X509ExtensionCollection__ctor_mE693D3DEF33D580C167E793F723620ED539022B9 (X509ExtensionCollection_t755DFCBDA8823D949578ED886BAFA4BF87706991 * __this, const RuntimeMethod* method)
{
	{
		CollectionBase__ctor_mE10A53D13BDEACE9F36B720D8AEBC37078CA0256(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.X509.X509ExtensionCollection::.ctor(Mono.Security.ASN1)
extern "C" IL2CPP_METHOD_ATTR void X509ExtensionCollection__ctor_mD6D256F8D16DA2083043F31DEB283D5D4B37F6BF (X509ExtensionCollection_t755DFCBDA8823D949578ED886BAFA4BF87706991 * __this, ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * ___asn10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509ExtensionCollection__ctor_mD6D256F8D16DA2083043F31DEB283D5D4B37F6BF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 * V_1 = NULL;
	{
		X509ExtensionCollection__ctor_mE693D3DEF33D580C167E793F723620ED539022B9(__this, /*hidden argument*/NULL);
		__this->set_readOnly_1((bool)1);
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_0 = ___asn10;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		return;
	}

IL_0014:
	{
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_1 = ___asn10;
		NullCheck(L_1);
		uint8_t L_2 = ASN1_get_Tag_mA0D39A4B0A7E2BF19563FF997A8CCEA03DDC0FBE(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)48))))
		{
			goto IL_002c;
		}
	}
	{
		Exception_t * L_3 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_mF2AC5246AA369ECB04B5DCDCDD52A8BD51754CD3(L_3, _stringLiteral7B152A24BBC8DB09B568453879784A9FBD2A9FFC, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, X509ExtensionCollection__ctor_mD6D256F8D16DA2083043F31DEB283D5D4B37F6BF_RuntimeMethod_var);
	}

IL_002c:
	{
		V_0 = 0;
		goto IL_0051;
	}

IL_0033:
	{
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_4 = ___asn10;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_6 = ASN1_get_Item_m087B522444CC10BD9BFE5144961DF6ED3F1E7948(L_4, L_5, /*hidden argument*/NULL);
		X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 * L_7 = (X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 *)il2cpp_codegen_object_new(X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698_il2cpp_TypeInfo_var);
		X509Extension__ctor_mBD6F41EB0B35B0B55E9D63FBEE7E731AA73F7B54(L_7, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * L_8 = CollectionBase_get_InnerList_m2DA9775BF4D5335ADCF550220DCD31292A7D6CC9(__this, /*hidden argument*/NULL);
		X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 * L_9 = V_1;
		NullCheck(L_8);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_8, L_9);
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0051:
	{
		int32_t L_11 = V_0;
		ASN1_t21F71D5E42416849A26C9ACE043F386E7F03D7FA * L_12 = ___asn10;
		NullCheck(L_12);
		int32_t L_13 = ASN1_get_Count_m2DE9AE59371E5BD294F898C93FC9554DD3C02E85(L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0033;
		}
	}
	{
		return;
	}
}
// System.Collections.IEnumerator Mono.Security.X509.X509ExtensionCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* X509ExtensionCollection_System_Collections_IEnumerable_GetEnumerator_m0346ED39FF05424F68EFD7BC9FF0BEC7C0B6EFC7 (X509ExtensionCollection_t755DFCBDA8823D949578ED886BAFA4BF87706991 * __this, const RuntimeMethod* method)
{
	{
		ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * L_0 = CollectionBase_get_InnerList_m2DA9775BF4D5335ADCF550220DCD31292A7D6CC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		return L_1;
	}
}
// System.Int32 Mono.Security.X509.X509ExtensionCollection::IndexOf(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t X509ExtensionCollection_IndexOf_mE7EE0B9DB2BCF725135A744A266856A54C36CBEF (X509ExtensionCollection_t755DFCBDA8823D949578ED886BAFA4BF87706991 * __this, String_t* ___oid0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509ExtensionCollection_IndexOf_mE7EE0B9DB2BCF725135A744A266856A54C36CBEF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 * V_1 = NULL;
	{
		String_t* L_0 = ___oid0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 * L_1 = (ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 *)il2cpp_codegen_object_new(ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mBA1072348F0861F80512F3BB2BE685EDBB02F740(L_1, _stringLiteral2118C8699C55066293A0E34341B9953F6C1811BD, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, X509ExtensionCollection_IndexOf_mE7EE0B9DB2BCF725135A744A266856A54C36CBEF_RuntimeMethod_var);
	}

IL_0011:
	{
		V_0 = 0;
		goto IL_0041;
	}

IL_0018:
	{
		ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * L_2 = CollectionBase_get_InnerList_m2DA9775BF4D5335ADCF550220DCD31292A7D6CC9(__this, /*hidden argument*/NULL);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		RuntimeObject * L_4 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_2, L_3);
		V_1 = ((X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 *)CastclassClass((RuntimeObject*)L_4, X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698_il2cpp_TypeInfo_var));
		X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 * L_5 = V_1;
		NullCheck(L_5);
		String_t* L_6 = X509Extension_get_Oid_m09F4EE740F0B631F9917FE345258FF2F2A41F08A(L_5, /*hidden argument*/NULL);
		String_t* L_7 = ___oid0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_9 = V_0;
		return L_9;
	}

IL_003d:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0041:
	{
		int32_t L_11 = V_0;
		ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * L_12 = CollectionBase_get_InnerList_m2DA9775BF4D5335ADCF550220DCD31292A7D6CC9(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		int32_t L_13 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_12);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0018;
		}
	}
	{
		return (-1);
	}
}
// Mono.Security.X509.X509Extension Mono.Security.X509.X509ExtensionCollection::get_Item(System.String)
extern "C" IL2CPP_METHOD_ATTR X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 * X509ExtensionCollection_get_Item_mF9CB19EA43F26742A0414EA82D9B7E8F3D19B867 (X509ExtensionCollection_t755DFCBDA8823D949578ED886BAFA4BF87706991 * __this, String_t* ___oid0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509ExtensionCollection_get_Item_mF9CB19EA43F26742A0414EA82D9B7E8F3D19B867_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___oid0;
		int32_t L_1 = X509ExtensionCollection_IndexOf_mE7EE0B9DB2BCF725135A744A266856A54C36CBEF(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0011;
		}
	}
	{
		return (X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 *)NULL;
	}

IL_0011:
	{
		ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * L_3 = CollectionBase_get_InnerList_m2DA9775BF4D5335ADCF550220DCD31292A7D6CC9(__this, /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject * L_5 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_3, L_4);
		return ((X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698 *)CastclassClass((RuntimeObject*)L_5, X509Extension_tE4755045C6BD26F3323152F1E6F86FCDC72D6698_il2cpp_TypeInfo_var));
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
// System.Void Mono.Security.X509.X509Store::.ctor(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void X509Store__ctor_mA96C2EB0BB8C9EF2B87E5042FD8FE2DA9520DB68 (X509Store_t754E7C7E6C15F74AA8E7A3F0695EE7E1AD0C4302 * __this, String_t* ___path0, bool ___crl1, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___path0;
		__this->set__storePath_0(L_0);
		bool L_1 = ___crl1;
		__this->set__crl_3(L_1);
		return;
	}
}
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::get_Certificates()
extern "C" IL2CPP_METHOD_ATTR X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * X509Store_get_Certificates_mF244FB16A726D210EBC6DC278C61E2B99B09A8A1 (X509Store_t754E7C7E6C15F74AA8E7A3F0695EE7E1AD0C4302 * __this, const RuntimeMethod* method)
{
	{
		X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * L_0 = __this->get__certificates_1();
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_1 = __this->get__storePath_0();
		X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * L_2 = X509Store_BuildCertificatesCollection_mC2BC2E03E0CBAC10D7FD4A7A0F8FF1DF4E768DEE(__this, L_1, /*hidden argument*/NULL);
		__this->set__certificates_1(L_2);
	}

IL_001d:
	{
		X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * L_3 = __this->get__certificates_1();
		return L_3;
	}
}
// System.Collections.ArrayList Mono.Security.X509.X509Store::get_Crls()
extern "C" IL2CPP_METHOD_ATTR ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * X509Store_get_Crls_m24CE11EF64C73629CA926FC818671BADE466DBB5 (X509Store_t754E7C7E6C15F74AA8E7A3F0695EE7E1AD0C4302 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Store_get_Crls_m24CE11EF64C73629CA926FC818671BADE466DBB5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get__crl_3();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * L_1 = (ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F *)il2cpp_codegen_object_new(ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F_il2cpp_TypeInfo_var);
		ArrayList__ctor_m152BD8901EFE6F5D542893FFB4C13186CCE9FD8B(L_1, /*hidden argument*/NULL);
		__this->set__crls_2(L_1);
	}

IL_0016:
	{
		ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * L_2 = __this->get__crls_2();
		if (L_2)
		{
			goto IL_0033;
		}
	}
	{
		String_t* L_3 = __this->get__storePath_0();
		ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * L_4 = X509Store_BuildCrlsCollection_mD10565154B2AFE1728E732C94FF2BB01973CFB59(__this, L_3, /*hidden argument*/NULL);
		__this->set__crls_2(L_4);
	}

IL_0033:
	{
		ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * L_5 = __this->get__crls_2();
		return L_5;
	}
}
// System.Byte[] Mono.Security.X509.X509Store::Load(System.String)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* X509Store_Load_m9670C65801803A2C1812338DBA01EE5F3E4DC509 (X509Store_t754E7C7E6C15F74AA8E7A3F0695EE7E1AD0C4302 * __this, String_t* ___filename0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Store_Load_m9670C65801803A2C1812338DBA01EE5F3E4DC509_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* V_0 = NULL;
	FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8*)NULL;
		String_t* L_0 = ___filename0;
		FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4 * L_1 = File_OpenRead_m74AF86DC0ABFA76B5ACCA29A79772FBC1A493BA0(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4 * L_2 = V_1;
		NullCheck(L_2);
		int64_t L_3 = VirtFuncInvoker0< int64_t >::Invoke(8 /* System.Int64 System.IO.FileStream::get_Length() */, L_2);
		if ((int64_t)(L_3) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, X509Store_Load_m9670C65801803A2C1812338DBA01EE5F3E4DC509_RuntimeMethod_var);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_4 = (ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8*)SZArrayNew(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8_il2cpp_TypeInfo_var, (uint32_t)(((intptr_t)L_3)));
		V_0 = L_4;
		FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4 * L_5 = V_1;
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_6 = V_0;
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_7 = V_0;
		NullCheck(L_7);
		NullCheck(L_5);
		VirtFuncInvoker3< int32_t, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8*, int32_t, int32_t >::Invoke(14 /* System.Int32 System.IO.FileStream::Read(System.Byte[],System.Int32,System.Int32) */, L_5, L_6, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length)))));
		FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker0::Invoke(12 /* System.Void System.IO.Stream::Close() */, L_8);
		IL2CPP_LEAVE(0x3A, FINALLY_002d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002d;
	}

FINALLY_002d:
	{ // begin finally (depth: 1)
		{
			FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4 * L_9 = V_1;
			if (!L_9)
			{
				goto IL_0039;
			}
		}

IL_0033:
		{
			FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4 * L_10 = V_1;
			NullCheck(L_10);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_tFD576810FF845F49C1CF8F06BEB759FCE2BC31B2_il2cpp_TypeInfo_var, L_10);
		}

IL_0039:
		{
			IL2CPP_END_FINALLY(45)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(45)
	{
		IL2CPP_JUMP_TBL(0x3A, IL_003a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003a:
	{
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_11 = V_0;
		return L_11;
	}
}
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Store::LoadCertificate(System.String)
extern "C" IL2CPP_METHOD_ATTR X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * X509Store_LoadCertificate_mB2B14099E478EF5D99C06EBFE458671379A34E79 (X509Store_t754E7C7E6C15F74AA8E7A3F0695EE7E1AD0C4302 * __this, String_t* ___filename0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Store_LoadCertificate_mB2B14099E478EF5D99C06EBFE458671379A34E79_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* V_0 = NULL;
	X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * V_1 = NULL;
	{
		String_t* L_0 = ___filename0;
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_1 = X509Store_Load_m9670C65801803A2C1812338DBA01EE5F3E4DC509(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_2 = V_0;
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_3 = (X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 *)il2cpp_codegen_object_new(X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7_il2cpp_TypeInfo_var);
		X509Certificate__ctor_m2DC281E84C43D226AAB966B55B0CDAFCB30B9B1C(L_3, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_4 = V_1;
		return L_4;
	}
}
// Mono.Security.X509.X509Crl Mono.Security.X509.X509Store::LoadCrl(System.String)
extern "C" IL2CPP_METHOD_ATTR X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA * X509Store_LoadCrl_m63A35C74345A3DF1A9728D6DF1C77FCB02056064 (X509Store_t754E7C7E6C15F74AA8E7A3F0695EE7E1AD0C4302 * __this, String_t* ___filename0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Store_LoadCrl_m63A35C74345A3DF1A9728D6DF1C77FCB02056064_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* V_0 = NULL;
	X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA * V_1 = NULL;
	{
		String_t* L_0 = ___filename0;
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_1 = X509Store_Load_m9670C65801803A2C1812338DBA01EE5F3E4DC509(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_2 = V_0;
		X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA * L_3 = (X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA *)il2cpp_codegen_object_new(X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA_il2cpp_TypeInfo_var);
		X509Crl__ctor_mA021EA5191FE977762AA75753903A461E6DBD20D(L_3, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA * L_4 = V_1;
		return L_4;
	}
}
// System.Boolean Mono.Security.X509.X509Store::CheckStore(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool X509Store_CheckStore_m7DD54563E8D3962C20A05D247791DAF5C7E065D9 (X509Store_t754E7C7E6C15F74AA8E7A3F0695EE7E1AD0C4302 * __this, String_t* ___path0, bool ___throwException1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Store_CheckStore_m7DD54563E8D3962C20A05D247791DAF5C7E065D9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_0 = ___path0;
			bool L_1 = Directory_Exists_m2923A2DF2FFB70CEC66941DFC072138936271B36(L_0, /*hidden argument*/NULL);
			if (!L_1)
			{
				goto IL_0012;
			}
		}

IL_000b:
		{
			V_0 = (bool)1;
			goto IL_003f;
		}

IL_0012:
		{
			String_t* L_2 = ___path0;
			Directory_CreateDirectory_m8D16019A036CFF1A1200EFC07825F776F4FA8EFD(L_2, /*hidden argument*/NULL);
			String_t* L_3 = ___path0;
			bool L_4 = Directory_Exists_m2923A2DF2FFB70CEC66941DFC072138936271B36(L_3, /*hidden argument*/NULL);
			V_0 = L_4;
			goto IL_003f;
		}

IL_0025:
		{
			; // IL_0025: leave IL_003f
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_002a;
		throw e;
	}

CATCH_002a:
	{ // begin catch(System.Object)
		{
			bool L_5 = ___throwException1;
			if (!L_5)
			{
				goto IL_0033;
			}
		}

IL_0031:
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local, NULL, X509Store_CheckStore_m7DD54563E8D3962C20A05D247791DAF5C7E065D9_RuntimeMethod_var);
		}

IL_0033:
		{
			V_0 = (bool)0;
			goto IL_003f;
		}

IL_003a:
		{
			; // IL_003a: leave IL_003f
		}
	} // end catch (depth: 1)

IL_003f:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::BuildCertificatesCollection(System.String)
extern "C" IL2CPP_METHOD_ATTR X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * X509Store_BuildCertificatesCollection_mC2BC2E03E0CBAC10D7FD4A7A0F8FF1DF4E768DEE (X509Store_t754E7C7E6C15F74AA8E7A3F0695EE7E1AD0C4302 * __this, String_t* ___storeName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Store_BuildCertificatesCollection_mC2BC2E03E0CBAC10D7FD4A7A0F8FF1DF4E768DEE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * V_0 = NULL;
	String_t* V_1 = NULL;
	StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* V_2 = NULL;
	String_t* V_3 = NULL;
	StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* V_4 = NULL;
	int32_t V_5 = 0;
	X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * L_0 = (X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 *)il2cpp_codegen_object_new(X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4_il2cpp_TypeInfo_var);
		X509CertificateCollection__ctor_m1BF85475F4F2C28AF14731784A9C9135B51F2D23(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = __this->get__storePath_0();
		String_t* L_2 = ___storeName0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t27AEEE0980E2C91F7F806BC8E9FC73A540BADC55_il2cpp_TypeInfo_var);
		String_t* L_3 = Path_Combine_m60411551281148BF05E1DDBC1E31B9E612648B83(L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		String_t* L_4 = V_1;
		bool L_5 = X509Store_CheckStore_m7DD54563E8D3962C20A05D247791DAF5C7E065D9(__this, L_4, (bool)0, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0022;
		}
	}
	{
		X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * L_6 = V_0;
		return L_6;
	}

IL_0022:
	{
		String_t* L_7 = V_1;
		StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* L_8 = Directory_GetFiles_m9A34D2E2801DB893F9454FCA52BA6BC7269C8F87(L_7, _stringLiteral81D15B787B58E9D0C9E091EC2E37EECA9333608E, /*hidden argument*/NULL);
		V_2 = L_8;
		StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* L_9 = V_2;
		if (!L_9)
		{
			goto IL_007c;
		}
	}
	{
		StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* L_10 = V_2;
		NullCheck(L_10);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_007c;
		}
	}
	{
		StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* L_11 = V_2;
		V_4 = L_11;
		V_5 = 0;
		goto IL_0071;
	}

IL_0048:
	{
		StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* L_12 = V_4;
		int32_t L_13 = V_5;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		String_t* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_3 = L_15;
	}

IL_004e:
	try
	{ // begin try (depth: 1)
		String_t* L_16 = V_3;
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_17 = X509Store_LoadCertificate_mB2B14099E478EF5D99C06EBFE458671379A34E79(__this, L_16, /*hidden argument*/NULL);
		V_6 = L_17;
		X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * L_18 = V_0;
		X509Certificate_tF81384408319B1A7C4393A41881A123CF518E4A7 * L_19 = V_6;
		NullCheck(L_18);
		X509CertificateCollection_Add_m1215D57A35803EA383A007725E9B2B0271369953(L_18, L_19, /*hidden argument*/NULL);
		goto IL_006b;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0065;
		throw e;
	}

CATCH_0065:
	{ // begin catch(System.Object)
		goto IL_006b;
	} // end catch (depth: 1)

IL_006b:
	{
		int32_t L_20 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0071:
	{
		int32_t L_21 = V_5;
		StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* L_22 = V_4;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_22)->max_length)))))))
		{
			goto IL_0048;
		}
	}

IL_007c:
	{
		X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * L_23 = V_0;
		return L_23;
	}
}
// System.Collections.ArrayList Mono.Security.X509.X509Store::BuildCrlsCollection(System.String)
extern "C" IL2CPP_METHOD_ATTR ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * X509Store_BuildCrlsCollection_mD10565154B2AFE1728E732C94FF2BB01973CFB59 (X509Store_t754E7C7E6C15F74AA8E7A3F0695EE7E1AD0C4302 * __this, String_t* ___storeName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Store_BuildCrlsCollection_mD10565154B2AFE1728E732C94FF2BB01973CFB59_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * V_0 = NULL;
	String_t* V_1 = NULL;
	StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* V_2 = NULL;
	String_t* V_3 = NULL;
	StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* V_4 = NULL;
	int32_t V_5 = 0;
	X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * L_0 = (ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F *)il2cpp_codegen_object_new(ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F_il2cpp_TypeInfo_var);
		ArrayList__ctor_m152BD8901EFE6F5D542893FFB4C13186CCE9FD8B(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = __this->get__storePath_0();
		String_t* L_2 = ___storeName0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t27AEEE0980E2C91F7F806BC8E9FC73A540BADC55_il2cpp_TypeInfo_var);
		String_t* L_3 = Path_Combine_m60411551281148BF05E1DDBC1E31B9E612648B83(L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		String_t* L_4 = V_1;
		bool L_5 = X509Store_CheckStore_m7DD54563E8D3962C20A05D247791DAF5C7E065D9(__this, L_4, (bool)0, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0022;
		}
	}
	{
		ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * L_6 = V_0;
		return L_6;
	}

IL_0022:
	{
		String_t* L_7 = V_1;
		StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* L_8 = Directory_GetFiles_m9A34D2E2801DB893F9454FCA52BA6BC7269C8F87(L_7, _stringLiteralF3D7B63284337204E5B808210EB82D4A589B203A, /*hidden argument*/NULL);
		V_2 = L_8;
		StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* L_9 = V_2;
		if (!L_9)
		{
			goto IL_007c;
		}
	}
	{
		StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* L_10 = V_2;
		NullCheck(L_10);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_007c;
		}
	}
	{
		StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* L_11 = V_2;
		V_4 = L_11;
		V_5 = 0;
		goto IL_0071;
	}

IL_0048:
	{
		StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* L_12 = V_4;
		int32_t L_13 = V_5;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		String_t* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_3 = L_15;
	}

IL_004e:
	try
	{ // begin try (depth: 1)
		String_t* L_16 = V_3;
		X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA * L_17 = X509Store_LoadCrl_m63A35C74345A3DF1A9728D6DF1C77FCB02056064(__this, L_16, /*hidden argument*/NULL);
		V_6 = L_17;
		ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * L_18 = V_0;
		X509Crl_t0F4FF7AC198D6861956B4C959663AA0C23A534BA * L_19 = V_6;
		NullCheck(L_18);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_18, L_19);
		goto IL_006b;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0065;
		throw e;
	}

CATCH_0065:
	{ // begin catch(System.Object)
		goto IL_006b;
	} // end catch (depth: 1)

IL_006b:
	{
		int32_t L_20 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0071:
	{
		int32_t L_21 = V_5;
		StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* L_22 = V_4;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_22)->max_length)))))))
		{
			goto IL_0048;
		}
	}

IL_007c:
	{
		ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * L_23 = V_0;
		return L_23;
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
// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::get_CurrentUser()
extern "C" IL2CPP_METHOD_ATTR X509Stores_t2DA9540B452CEB83E67BC6CDF9B0346FA2B06C28 * X509StoreManager_get_CurrentUser_m3A5D6ACA99E9B270CF6F5B692212CE71D147CB39 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509StoreManager_get_CurrentUser_m3A5D6ACA99E9B270CF6F5B692212CE71D147CB39_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		X509Stores_t2DA9540B452CEB83E67BC6CDF9B0346FA2B06C28 * L_0 = ((X509StoreManager_t84D6FAF6F4DB5D367306FC494991364A0752BDB7_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_t84D6FAF6F4DB5D367306FC494991364A0752BDB7_il2cpp_TypeInfo_var))->get__userStore_0();
		if (L_0)
		{
			goto IL_0033;
		}
	}
	{
		String_t* L_1 = Environment_GetFolderPath_mC97C37AFEA0FBDD1FCE1AF7A873A5F794E804379(((int32_t)26), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t27AEEE0980E2C91F7F806BC8E9FC73A540BADC55_il2cpp_TypeInfo_var);
		String_t* L_2 = Path_Combine_m60411551281148BF05E1DDBC1E31B9E612648B83(L_1, _stringLiteralD013A00CC3B2473FDE9F7A61FDC9BFE531B1B6A3, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		String_t* L_4 = Path_Combine_m60411551281148BF05E1DDBC1E31B9E612648B83(L_3, _stringLiteralC7EB5BBC6C8481A27394D0B29BB892C16FF5D5B1, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = V_0;
		X509Stores_t2DA9540B452CEB83E67BC6CDF9B0346FA2B06C28 * L_6 = (X509Stores_t2DA9540B452CEB83E67BC6CDF9B0346FA2B06C28 *)il2cpp_codegen_object_new(X509Stores_t2DA9540B452CEB83E67BC6CDF9B0346FA2B06C28_il2cpp_TypeInfo_var);
		X509Stores__ctor_m2B0BAC1A899591190AEC66C633C2498148336477(L_6, L_5, /*hidden argument*/NULL);
		((X509StoreManager_t84D6FAF6F4DB5D367306FC494991364A0752BDB7_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_t84D6FAF6F4DB5D367306FC494991364A0752BDB7_il2cpp_TypeInfo_var))->set__userStore_0(L_6);
	}

IL_0033:
	{
		X509Stores_t2DA9540B452CEB83E67BC6CDF9B0346FA2B06C28 * L_7 = ((X509StoreManager_t84D6FAF6F4DB5D367306FC494991364A0752BDB7_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_t84D6FAF6F4DB5D367306FC494991364A0752BDB7_il2cpp_TypeInfo_var))->get__userStore_0();
		return L_7;
	}
}
// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::get_LocalMachine()
extern "C" IL2CPP_METHOD_ATTR X509Stores_t2DA9540B452CEB83E67BC6CDF9B0346FA2B06C28 * X509StoreManager_get_LocalMachine_m6414713A649215CF8E62CA28B500C7A5DFF304CC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509StoreManager_get_LocalMachine_m6414713A649215CF8E62CA28B500C7A5DFF304CC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		X509Stores_t2DA9540B452CEB83E67BC6CDF9B0346FA2B06C28 * L_0 = ((X509StoreManager_t84D6FAF6F4DB5D367306FC494991364A0752BDB7_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_t84D6FAF6F4DB5D367306FC494991364A0752BDB7_il2cpp_TypeInfo_var))->get__machineStore_1();
		if (L_0)
		{
			goto IL_0033;
		}
	}
	{
		String_t* L_1 = Environment_GetFolderPath_mC97C37AFEA0FBDD1FCE1AF7A873A5F794E804379(((int32_t)35), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t27AEEE0980E2C91F7F806BC8E9FC73A540BADC55_il2cpp_TypeInfo_var);
		String_t* L_2 = Path_Combine_m60411551281148BF05E1DDBC1E31B9E612648B83(L_1, _stringLiteralD013A00CC3B2473FDE9F7A61FDC9BFE531B1B6A3, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		String_t* L_4 = Path_Combine_m60411551281148BF05E1DDBC1E31B9E612648B83(L_3, _stringLiteralC7EB5BBC6C8481A27394D0B29BB892C16FF5D5B1, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = V_0;
		X509Stores_t2DA9540B452CEB83E67BC6CDF9B0346FA2B06C28 * L_6 = (X509Stores_t2DA9540B452CEB83E67BC6CDF9B0346FA2B06C28 *)il2cpp_codegen_object_new(X509Stores_t2DA9540B452CEB83E67BC6CDF9B0346FA2B06C28_il2cpp_TypeInfo_var);
		X509Stores__ctor_m2B0BAC1A899591190AEC66C633C2498148336477(L_6, L_5, /*hidden argument*/NULL);
		((X509StoreManager_t84D6FAF6F4DB5D367306FC494991364A0752BDB7_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_t84D6FAF6F4DB5D367306FC494991364A0752BDB7_il2cpp_TypeInfo_var))->set__machineStore_1(L_6);
	}

IL_0033:
	{
		X509Stores_t2DA9540B452CEB83E67BC6CDF9B0346FA2B06C28 * L_7 = ((X509StoreManager_t84D6FAF6F4DB5D367306FC494991364A0752BDB7_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_t84D6FAF6F4DB5D367306FC494991364A0752BDB7_il2cpp_TypeInfo_var))->get__machineStore_1();
		return L_7;
	}
}
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509StoreManager::get_TrustedRootCertificates()
extern "C" IL2CPP_METHOD_ATTR X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * X509StoreManager_get_TrustedRootCertificates_m3F74D1403F745F5C8BD1AA02F273AD33B719618E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509StoreManager_get_TrustedRootCertificates_m3F74D1403F745F5C8BD1AA02F273AD33B719618E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * V_0 = NULL;
	{
		X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * L_0 = (X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 *)il2cpp_codegen_object_new(X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4_il2cpp_TypeInfo_var);
		X509CertificateCollection__ctor_m1BF85475F4F2C28AF14731784A9C9135B51F2D23(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * L_1 = V_0;
		X509Stores_t2DA9540B452CEB83E67BC6CDF9B0346FA2B06C28 * L_2 = X509StoreManager_get_CurrentUser_m3A5D6ACA99E9B270CF6F5B692212CE71D147CB39(/*hidden argument*/NULL);
		NullCheck(L_2);
		X509Store_t754E7C7E6C15F74AA8E7A3F0695EE7E1AD0C4302 * L_3 = X509Stores_get_TrustedRoot_mCFBE5DA6C6C0EAD5454C9575694DEF17C0C8A01A(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * L_4 = X509Store_get_Certificates_mF244FB16A726D210EBC6DC278C61E2B99B09A8A1(L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		X509CertificateCollection_AddRange_m2D89051B8F700AED39D1654110D928E5ED06A96D(L_1, L_4, /*hidden argument*/NULL);
		X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * L_5 = V_0;
		X509Stores_t2DA9540B452CEB83E67BC6CDF9B0346FA2B06C28 * L_6 = X509StoreManager_get_LocalMachine_m6414713A649215CF8E62CA28B500C7A5DFF304CC(/*hidden argument*/NULL);
		NullCheck(L_6);
		X509Store_t754E7C7E6C15F74AA8E7A3F0695EE7E1AD0C4302 * L_7 = X509Stores_get_TrustedRoot_mCFBE5DA6C6C0EAD5454C9575694DEF17C0C8A01A(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * L_8 = X509Store_get_Certificates_mF244FB16A726D210EBC6DC278C61E2B99B09A8A1(L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		X509CertificateCollection_AddRange_m2D89051B8F700AED39D1654110D928E5ED06A96D(L_5, L_8, /*hidden argument*/NULL);
		X509CertificateCollection_t59402ED1601796E9D33AA78F60D998BC0DDA12F4 * L_9 = V_0;
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
// System.Void Mono.Security.X509.X509Stores::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void X509Stores__ctor_m2B0BAC1A899591190AEC66C633C2498148336477 (X509Stores_t2DA9540B452CEB83E67BC6CDF9B0346FA2B06C28 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___path0;
		__this->set__storePath_0(L_0);
		return;
	}
}
// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::get_TrustedRoot()
extern "C" IL2CPP_METHOD_ATTR X509Store_t754E7C7E6C15F74AA8E7A3F0695EE7E1AD0C4302 * X509Stores_get_TrustedRoot_mCFBE5DA6C6C0EAD5454C9575694DEF17C0C8A01A (X509Stores_t2DA9540B452CEB83E67BC6CDF9B0346FA2B06C28 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Stores_get_TrustedRoot_mCFBE5DA6C6C0EAD5454C9575694DEF17C0C8A01A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		X509Store_t754E7C7E6C15F74AA8E7A3F0695EE7E1AD0C4302 * L_0 = __this->get__trusted_1();
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_1 = __this->get__storePath_0();
		IL2CPP_RUNTIME_CLASS_INIT(Path_t27AEEE0980E2C91F7F806BC8E9FC73A540BADC55_il2cpp_TypeInfo_var);
		String_t* L_2 = Path_Combine_m60411551281148BF05E1DDBC1E31B9E612648B83(L_1, _stringLiteral33A579FFC0DCCBFF15BE01734EA4138EA4E7635C, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		X509Store_t754E7C7E6C15F74AA8E7A3F0695EE7E1AD0C4302 * L_4 = (X509Store_t754E7C7E6C15F74AA8E7A3F0695EE7E1AD0C4302 *)il2cpp_codegen_object_new(X509Store_t754E7C7E6C15F74AA8E7A3F0695EE7E1AD0C4302_il2cpp_TypeInfo_var);
		X509Store__ctor_mA96C2EB0BB8C9EF2B87E5042FD8FE2DA9520DB68(L_4, L_3, (bool)1, /*hidden argument*/NULL);
		__this->set__trusted_1(L_4);
	}

IL_0029:
	{
		X509Store_t754E7C7E6C15F74AA8E7A3F0695EE7E1AD0C4302 * L_5 = __this->get__trusted_1();
		return L_5;
	}
}
// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::Open(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR X509Store_t754E7C7E6C15F74AA8E7A3F0695EE7E1AD0C4302 * X509Stores_Open_m6C28A075110F4148C15755F071894119A360C838 (X509Stores_t2DA9540B452CEB83E67BC6CDF9B0346FA2B06C28 * __this, String_t* ___storeName0, bool ___create1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Stores_Open_m6C28A075110F4148C15755F071894119A360C838_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___storeName0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 * L_1 = (ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 *)il2cpp_codegen_object_new(ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mBA1072348F0861F80512F3BB2BE685EDBB02F740(L_1, _stringLiteralC276D29F33E8F3F411A0BAFB43D3E6BD00ECA48E, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, X509Stores_Open_m6C28A075110F4148C15755F071894119A360C838_RuntimeMethod_var);
	}

IL_0011:
	{
		String_t* L_2 = __this->get__storePath_0();
		String_t* L_3 = ___storeName0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t27AEEE0980E2C91F7F806BC8E9FC73A540BADC55_il2cpp_TypeInfo_var);
		String_t* L_4 = Path_Combine_m60411551281148BF05E1DDBC1E31B9E612648B83(L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		bool L_5 = ___create1;
		if (L_5)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_6 = V_0;
		bool L_7 = Directory_Exists_m2923A2DF2FFB70CEC66941DFC072138936271B36(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0031;
		}
	}
	{
		return (X509Store_t754E7C7E6C15F74AA8E7A3F0695EE7E1AD0C4302 *)NULL;
	}

IL_0031:
	{
		String_t* L_8 = V_0;
		X509Store_t754E7C7E6C15F74AA8E7A3F0695EE7E1AD0C4302 * L_9 = (X509Store_t754E7C7E6C15F74AA8E7A3F0695EE7E1AD0C4302 *)il2cpp_codegen_object_new(X509Store_t754E7C7E6C15F74AA8E7A3F0695EE7E1AD0C4302_il2cpp_TypeInfo_var);
		X509Store__ctor_mA96C2EB0BB8C9EF2B87E5042FD8FE2DA9520DB68(L_9, L_8, (bool)1, /*hidden argument*/NULL);
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
