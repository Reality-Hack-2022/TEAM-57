#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};

// System.Action`2<System.ArraySegment`1<System.Byte>,Photon.Voice.FrameFlags>
struct Action_2_t4203FA193D835C197097DFF2303E7F02F8DBA45D;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>
struct Dictionary_2_t4A0CF6A7FCEF18F04F5F245859A861E8BE4BFE75;
// System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.LocalVoice>
struct Dictionary_2_tA7F6D73676809D9EF54381D374C152C8891CB7AA;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A;
// System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>
struct Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0;
// System.Collections.Generic.Dictionary`2<Photon.Voice.Codec,System.Int32>
struct Dictionary_2_t29378254DA2EF1DF294AE5CD1E73420D108D8867;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>
struct Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<Photon.Voice.LocalVoice>>
struct Dictionary_2_t173D966D87D699333F86F26576B4DEF9B46BFB9A;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// Photon.Voice.OpusCodec/Encoder`1<System.Int16>
struct Encoder_1_t1835B5877F1B49B43B635F05E7C29D83CC9C3EF2;
// Photon.Voice.OpusCodec/Encoder`1<System.Single>
struct Encoder_1_t439BF0A94F0F3694C5AF8B5EC4C91CBA46C4C620;
// Photon.Voice.FactoryPrimitiveArrayPool`1<System.Int16>
struct FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2;
// Photon.Voice.FactoryPrimitiveArrayPool`1<System.Single>
struct FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63;
// Photon.Voice.Framer`1<System.Int16>
struct Framer_1_t5FBBEF15B9AB70C75546947448D1FFC19D4F7978;
// Photon.Voice.Framer`1<System.Single>
struct Framer_1_t04F378EE94C8949DC3D5E53C79B71D0E38A18623;
// System.Func`2<System.Int16,System.Int16>
struct Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D;
// System.Func`2<Photon.Voice.LocalVoice,System.Boolean>
struct Func_2_tB88CF4C4A2B2A48B1412626D3AEDEB9C7F289CD1;
// System.Func`2<Photon.Voice.LocalVoice,Photon.Voice.Codec>
struct Func_2_t9DAF740F320CC3CC70B4BF418FA15DD4C0C66D0A;
// System.Collections.Generic.IEnumerator`1<Photon.Voice.RemoteVoiceInfo>
struct IEnumerator_1_t24E6ABC30A0F340FA04F70A73950A148AD18934B;
// System.Collections.Generic.IEqualityComparer`1<System.Byte>
struct IEqualityComparer_1_t95750B1CF3F7626EC7AB30893A86E08F445DD75D;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,Photon.Voice.RemoteVoice>
struct KeyCollection_t6CA20A53ED328EFED712FE67FCEF2F44E7E1B4FB;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>
struct KeyCollection_t88374B1D559D72E971E8F59BEAD2752BC5E908B5;
// Photon.Voice.AudioUtil/LevelMeter`1<System.Int16>
struct LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3;
// Photon.Voice.AudioUtil/LevelMeter`1<System.Single>
struct LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5;
// System.Collections.Generic.List`1<Photon.Voice.IProcessor`1<System.Int16>>
struct List_1_t2B969941D952B3C04034F2CC42555A20E416F5EC;
// System.Collections.Generic.List`1<Photon.Voice.IProcessor`1<System.Single>>
struct List_1_tB8681DE57AE297E09DCA76242C38B88CB52192E5;
// Photon.Voice.LocalVoiceAudio`1<System.Int16>
struct LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8;
// Photon.Voice.LocalVoiceAudio`1<System.Single>
struct LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238;
// Photon.Voice.LocalVoiceFramed`1<System.Int16>
struct LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664;
// Photon.Voice.LocalVoiceFramed`1<System.Single>
struct LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0;
// Photon.Voice.PrimitiveArrayPool`1<System.Int16>
struct PrimitiveArrayPool_1_t32EAE13B1A603062BB2FBDD9D35F937DD34DD485;
// Photon.Voice.PrimitiveArrayPool`1<System.Single>
struct PrimitiveArrayPool_1_tC69A4367DAED259130664C75DBC74EBA50D1FA79;
// System.Collections.Generic.Queue`1<System.Int16[]>
struct Queue_1_t4A2620F8C38A3EF76782E492059C52B76FCF17D3;
// System.Collections.Generic.Queue`1<System.Single[]>
struct Queue_1_t865B9E26DEFD5908AB12DEAECF70EC4320C7D16E;
// System.Collections.Generic.Queue`1<Photon.Voice.FrameBuffer>
struct Queue_1_t45D1136463723E6F4A40C4DC038CA2F6908264B8;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Byte,Photon.Voice.RemoteVoice>
struct ValueCollection_tC2E6D99B8A703A48AC16E7E35F20E3F66157021A;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>
struct ValueCollection_t50CCCC961D2BBEA2D92B50D6CA1B0FB0298B6C9D;
// Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<System.Int16>
struct VoiceDetectorCalibration_1_tA106A118978F11C40A12060946B33BA05BD390D3;
// Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<System.Single>
struct VoiceDetectorCalibration_1_tDC56BC8D99C1538843C12B706F4D44A12BFFBF3E;
// Photon.Voice.AudioUtil/VoiceDetector`1<System.Int16>
struct VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4;
// Photon.Voice.AudioUtil/VoiceDetector`1<System.Single>
struct VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC;
// System.Collections.Generic.Dictionary`2/Entry<System.Byte,Photon.Voice.RemoteVoice>[]
struct EntryU5BU5D_t341F71F8C897485D7CB857448D4554EB25B99913;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>[]
struct EntryU5BU5D_tF211B265416025C253A1BB2CB5B87FB81E6A2A39;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// ExitGames.Client.Photon.ByteArraySlice
struct ByteArraySlice_t48E6503C839C3686AAA94FAF30E0B1948A52D94F;
// ExitGames.Client.Photon.ByteArraySlicePool
struct ByteArraySlicePool_t5FC458254D8FF10A1906F8A5C124872817A74310;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Photon.Voice.IDecoder
struct IDecoder_t44AC81916D0D3FA60B33E6D2D98B8B0202342302;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Photon.Voice.IEncoder
struct IEncoder_tA42B4BA524A255A892B8E21DB5A2B7E7D4867995;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Photon.Voice.ILogger
struct ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA;
// Photon.Voice.IServiceable
struct IServiceable_t3E0661D0BF2CE8495FAA0AE754176B0B7A6759E1;
// Photon.Voice.IVoiceTransport
struct IVoiceTransport_tA55914265033EC2D2D76602F02EF7FDEA06032E4;
// Photon.Voice.LocalVoice
struct LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// POpusCodec.OpusEncoder
struct OpusEncoder_t289CD686765411D189B07CC8CEEE006E19E1B823;
// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118;
// Photon.Voice.RemoteVoice
struct RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87;
// Photon.Voice.RemoteVoiceInfo
struct RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Photon.Voice.SpacingProfile
struct SpacingProfile_tD2728C7357F90CDEC875C74BF6D2161BD3CB2A68;
// System.String
struct String_t;
// System.Type
struct Type_t;
// Photon.Voice.VoiceClient
struct VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Photon.Voice.AudioUtil/VoiceDetectorShort
struct VoiceDetectorShort_tEB57780C72B1E5D60E7584C80B244E40B4C0DFDB;
// Photon.Voice.LoadBalancingTransport/<>c
struct U3CU3Ec_t7CF8071A50F9E6844B0ACBBFC6AC2FF3DEF5329B;
// Photon.Voice.LoadBalancingTransport2/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t5C9FD3C1AB5A4CB6E9DFA8088BB5DDB531DCF41F;
// Photon.Voice.OpusCodec/EncoderFloat
struct EncoderFloat_t59F828BE852C2C5049643A7DA8A76AE0DFCD35D8;
// Photon.Voice.OpusCodec/EncoderShort
struct EncoderShort_t1B066515A9C7163E7B94B8FEA3E07B88303D687B;
// Photon.Voice.OpusCodec/Util
struct Util_tB79F7CAD5C8FC71AB7A0EAF51F9E9F9F7B4E2E3E;
// Photon.Voice.SpacingProfile/<>c
struct U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15;
// Photon.Voice.VoiceClient/<>c
struct U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7;
// Photon.Voice.VoiceClient/<>c__DisplayClass47_0
struct U3CU3Ec__DisplayClass47_0_t6861F43F19BFEE66771862537EC2921B615AD428;
// Photon.Voice.VoiceClient/<>c__DisplayClass50_0
struct U3CU3Ec__DisplayClass50_0_t5F0198FD70542B3779AC6EF61A8CE73C8A465E97;
// Photon.Voice.VoiceClient/<>c__DisplayClass50_1
struct U3CU3Ec__DisplayClass50_1_t54976458C9D841F47F5FBF17A876A0E346916E7F;
// Photon.Voice.VoiceClient/<>c__DisplayClass50_2
struct U3CU3Ec__DisplayClass50_2_tA191A69CBBECD484B5CE23EA132F1B1FF78025C9;
// Photon.Voice.VoiceClient/<>c__DisplayClass50_3
struct U3CU3Ec__DisplayClass50_3_t5C4D224480E812C3A77D3480CE1D9F975EEE8990;
// Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40
struct U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B;
// Photon.Voice.VoiceClient/RemoteVoiceInfoDelegate
struct RemoteVoiceInfoDelegate_tAFE566F65BB6CDF850E29AFE6BE771196D020D13;

IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Encoder_1_t1835B5877F1B49B43B635F05E7C29D83CC9C3EF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Encoder_1_t439BF0A94F0F3694C5AF8B5EC4C91CBA46C4C620_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t7CF8071A50F9E6844B0ACBBFC6AC2FF3DEF5329B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m7FDCA22BD761E723E00B8926B1F30557331BFFEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mAF78EC82F6811AFB6068D09343E164B970681C1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Encoder_1__ctor_m41B7B1A903690DC74302D619DC29D6A7E6741578_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Encoder_1__ctor_m9077E63DD228B223B7033E63ACA21B768789E119_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mDEFCDED916603553DBB44F2363E844D232B884D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mFA11765DB3B1C2D8B904790C9B2DA123D1C604C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m25A4E8E566B755F3B5D4E285035BEA7B83ED2AAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m763AC53790967C7503AE2B3D581CEA882C6CE3DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD102ED220D0F16567214E8E5C69A3D8146D5D8AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mF633D50299E68934066A6E44C1DC7504E92ABCC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FactoryPrimitiveArrayPool_1_New_m4B62F1E511B7854408A14C347007968C092B4142_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FactoryPrimitiveArrayPool_1_New_mA7DF99EB941029EF5445393AFF981A7B6919711F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mA5CEB73F2786970AE724DED666ACEA0BA9954B6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mC3EC4F0ADB2359D5B5386277C54A9A5B5C2F5315_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m2AB6475270004FDA7585570A8A7B1898C5942513_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mF1D2B2C146EB355F5C3191E4A1C4C2034249BAA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LocalVoiceFramed_1_PushDataAsync_m00A920DB3FF61949F367167B188A90AC6B9D9E82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LocalVoiceFramed_1_PushDataAsync_m0B323B8BE7F08707A528E2E4D6D08A3976A09BA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LocalVoiceFramed_1_get_BufferFactory_m55FFB4181F0CF749B62E8D81C7F962EF460BFEC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LocalVoiceFramed_1_get_BufferFactory_mE185781006A94F4245FD1FD62C2B28E16D719738_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cget_RemoteVoiceInfosU3Ed__40_System_Collections_IEnumerator_Reset_m5CFE226846C94BC15269EA17FCADEB64A95CBA4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceDetector_1__ctor_m19B47107FDBA28D2C419B78D712537EF1A707E2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceDetector_1_get_Detected_m2556CDCC35307D5A1AE5D0573806C4E1C4C0F5C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceDetector_1_get_On_mAA630DFE422E1D5263686DDCE57F6E26C4DF8AB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceDetector_1_set_Detected_m13E95CCF06BB947C56591D1DB287436309D074AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* SamplingRate_tB35955BC7837DAB0BF0F4D73CAA2BAFD47646F51_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>
struct Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t341F71F8C897485D7CB857448D4554EB25B99913* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t6CA20A53ED328EFED712FE67FCEF2F44E7E1B4FB * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tC2E6D99B8A703A48AC16E7E35F20E3F66157021A * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0, ___entries_1)); }
	inline EntryU5BU5D_t341F71F8C897485D7CB857448D4554EB25B99913* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t341F71F8C897485D7CB857448D4554EB25B99913** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t341F71F8C897485D7CB857448D4554EB25B99913* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0, ___keys_7)); }
	inline KeyCollection_t6CA20A53ED328EFED712FE67FCEF2F44E7E1B4FB * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t6CA20A53ED328EFED712FE67FCEF2F44E7E1B4FB ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t6CA20A53ED328EFED712FE67FCEF2F44E7E1B4FB * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0, ___values_8)); }
	inline ValueCollection_tC2E6D99B8A703A48AC16E7E35F20E3F66157021A * get_values_8() const { return ___values_8; }
	inline ValueCollection_tC2E6D99B8A703A48AC16E7E35F20E3F66157021A ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tC2E6D99B8A703A48AC16E7E35F20E3F66157021A * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>
struct Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tF211B265416025C253A1BB2CB5B87FB81E6A2A39* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t88374B1D559D72E971E8F59BEAD2752BC5E908B5 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t50CCCC961D2BBEA2D92B50D6CA1B0FB0298B6C9D * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B, ___entries_1)); }
	inline EntryU5BU5D_tF211B265416025C253A1BB2CB5B87FB81E6A2A39* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tF211B265416025C253A1BB2CB5B87FB81E6A2A39** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tF211B265416025C253A1BB2CB5B87FB81E6A2A39* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B, ___keys_7)); }
	inline KeyCollection_t88374B1D559D72E971E8F59BEAD2752BC5E908B5 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t88374B1D559D72E971E8F59BEAD2752BC5E908B5 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t88374B1D559D72E971E8F59BEAD2752BC5E908B5 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B, ___values_8)); }
	inline ValueCollection_t50CCCC961D2BBEA2D92B50D6CA1B0FB0298B6C9D * get_values_8() const { return ___values_8; }
	inline ValueCollection_t50CCCC961D2BBEA2D92B50D6CA1B0FB0298B6C9D ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t50CCCC961D2BBEA2D92B50D6CA1B0FB0298B6C9D * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// Photon.Voice.FactoryPrimitiveArrayPool`1<System.Int16>
struct FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2  : public RuntimeObject
{
public:
	// Photon.Voice.PrimitiveArrayPool`1<T> Photon.Voice.FactoryPrimitiveArrayPool`1::pool
	PrimitiveArrayPool_1_t32EAE13B1A603062BB2FBDD9D35F937DD34DD485 * ___pool_0;

public:
	inline static int32_t get_offset_of_pool_0() { return static_cast<int32_t>(offsetof(FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2, ___pool_0)); }
	inline PrimitiveArrayPool_1_t32EAE13B1A603062BB2FBDD9D35F937DD34DD485 * get_pool_0() const { return ___pool_0; }
	inline PrimitiveArrayPool_1_t32EAE13B1A603062BB2FBDD9D35F937DD34DD485 ** get_address_of_pool_0() { return &___pool_0; }
	inline void set_pool_0(PrimitiveArrayPool_1_t32EAE13B1A603062BB2FBDD9D35F937DD34DD485 * value)
	{
		___pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pool_0), (void*)value);
	}
};


// Photon.Voice.FactoryPrimitiveArrayPool`1<System.Single>
struct FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63  : public RuntimeObject
{
public:
	// Photon.Voice.PrimitiveArrayPool`1<T> Photon.Voice.FactoryPrimitiveArrayPool`1::pool
	PrimitiveArrayPool_1_tC69A4367DAED259130664C75DBC74EBA50D1FA79 * ___pool_0;

public:
	inline static int32_t get_offset_of_pool_0() { return static_cast<int32_t>(offsetof(FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63, ___pool_0)); }
	inline PrimitiveArrayPool_1_tC69A4367DAED259130664C75DBC74EBA50D1FA79 * get_pool_0() const { return ___pool_0; }
	inline PrimitiveArrayPool_1_tC69A4367DAED259130664C75DBC74EBA50D1FA79 ** get_address_of_pool_0() { return &___pool_0; }
	inline void set_pool_0(PrimitiveArrayPool_1_tC69A4367DAED259130664C75DBC74EBA50D1FA79 * value)
	{
		___pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pool_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// ExitGames.Client.Photon.ByteArraySlice
struct ByteArraySlice_t48E6503C839C3686AAA94FAF30E0B1948A52D94F  : public RuntimeObject
{
public:
	// System.Byte[] ExitGames.Client.Photon.ByteArraySlice::Buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___Buffer_0;
	// System.Int32 ExitGames.Client.Photon.ByteArraySlice::Offset
	int32_t ___Offset_1;
	// System.Int32 ExitGames.Client.Photon.ByteArraySlice::Count
	int32_t ___Count_2;
	// ExitGames.Client.Photon.ByteArraySlicePool ExitGames.Client.Photon.ByteArraySlice::returnPool
	ByteArraySlicePool_t5FC458254D8FF10A1906F8A5C124872817A74310 * ___returnPool_3;
	// System.Int32 ExitGames.Client.Photon.ByteArraySlice::stackIndex
	int32_t ___stackIndex_4;

public:
	inline static int32_t get_offset_of_Buffer_0() { return static_cast<int32_t>(offsetof(ByteArraySlice_t48E6503C839C3686AAA94FAF30E0B1948A52D94F, ___Buffer_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_Buffer_0() const { return ___Buffer_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_Buffer_0() { return &___Buffer_0; }
	inline void set_Buffer_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___Buffer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Buffer_0), (void*)value);
	}

	inline static int32_t get_offset_of_Offset_1() { return static_cast<int32_t>(offsetof(ByteArraySlice_t48E6503C839C3686AAA94FAF30E0B1948A52D94F, ___Offset_1)); }
	inline int32_t get_Offset_1() const { return ___Offset_1; }
	inline int32_t* get_address_of_Offset_1() { return &___Offset_1; }
	inline void set_Offset_1(int32_t value)
	{
		___Offset_1 = value;
	}

	inline static int32_t get_offset_of_Count_2() { return static_cast<int32_t>(offsetof(ByteArraySlice_t48E6503C839C3686AAA94FAF30E0B1948A52D94F, ___Count_2)); }
	inline int32_t get_Count_2() const { return ___Count_2; }
	inline int32_t* get_address_of_Count_2() { return &___Count_2; }
	inline void set_Count_2(int32_t value)
	{
		___Count_2 = value;
	}

	inline static int32_t get_offset_of_returnPool_3() { return static_cast<int32_t>(offsetof(ByteArraySlice_t48E6503C839C3686AAA94FAF30E0B1948A52D94F, ___returnPool_3)); }
	inline ByteArraySlicePool_t5FC458254D8FF10A1906F8A5C124872817A74310 * get_returnPool_3() const { return ___returnPool_3; }
	inline ByteArraySlicePool_t5FC458254D8FF10A1906F8A5C124872817A74310 ** get_address_of_returnPool_3() { return &___returnPool_3; }
	inline void set_returnPool_3(ByteArraySlicePool_t5FC458254D8FF10A1906F8A5C124872817A74310 * value)
	{
		___returnPool_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___returnPool_3), (void*)value);
	}

	inline static int32_t get_offset_of_stackIndex_4() { return static_cast<int32_t>(offsetof(ByteArraySlice_t48E6503C839C3686AAA94FAF30E0B1948A52D94F, ___stackIndex_4)); }
	inline int32_t get_stackIndex_4() const { return ___stackIndex_4; }
	inline int32_t* get_address_of_stackIndex_4() { return &___stackIndex_4; }
	inline void set_stackIndex_4(int32_t value)
	{
		___stackIndex_4 = value;
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// Photon.Voice.VoiceClient
struct VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E  : public RuntimeObject
{
public:
	// Photon.Voice.IVoiceTransport Photon.Voice.VoiceClient::transport
	RuntimeObject* ___transport_0;
	// Photon.Voice.ILogger Photon.Voice.VoiceClient::logger
	RuntimeObject* ___logger_1;
	// System.Int32 Photon.Voice.VoiceClient::<FramesLost>k__BackingField
	int32_t ___U3CFramesLostU3Ek__BackingField_2;
	// System.Int32 Photon.Voice.VoiceClient::<FramesReceived>k__BackingField
	int32_t ___U3CFramesReceivedU3Ek__BackingField_3;
	// System.Int32 Photon.Voice.VoiceClient::<RoundTripTime>k__BackingField
	int32_t ___U3CRoundTripTimeU3Ek__BackingField_4;
	// System.Int32 Photon.Voice.VoiceClient::<RoundTripTimeVariance>k__BackingField
	int32_t ___U3CRoundTripTimeVarianceU3Ek__BackingField_5;
	// System.Boolean Photon.Voice.VoiceClient::<SuppressInfoDuplicateWarning>k__BackingField
	bool ___U3CSuppressInfoDuplicateWarningU3Ek__BackingField_6;
	// Photon.Voice.VoiceClient/RemoteVoiceInfoDelegate Photon.Voice.VoiceClient::<OnRemoteVoiceInfoAction>k__BackingField
	RemoteVoiceInfoDelegate_tAFE566F65BB6CDF850E29AFE6BE771196D020D13 * ___U3COnRemoteVoiceInfoActionU3Ek__BackingField_7;
	// System.Int32 Photon.Voice.VoiceClient::<DebugLostPercent>k__BackingField
	int32_t ___U3CDebugLostPercentU3Ek__BackingField_8;
	// System.Int32 Photon.Voice.VoiceClient::prevRtt
	int32_t ___prevRtt_9;
	// System.Collections.Generic.Dictionary`2<Photon.Voice.Codec,System.Int32> Photon.Voice.VoiceClient::remoteVoiceDelayFrames
	Dictionary_2_t29378254DA2EF1DF294AE5CD1E73420D108D8867 * ___remoteVoiceDelayFrames_10;
	// System.Byte Photon.Voice.VoiceClient::globalInterestGroup
	uint8_t ___globalInterestGroup_11;
	// System.Byte Photon.Voice.VoiceClient::voiceIdCnt
	uint8_t ___voiceIdCnt_12;
	// System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.LocalVoice> Photon.Voice.VoiceClient::localVoices
	Dictionary_2_tA7F6D73676809D9EF54381D374C152C8891CB7AA * ___localVoices_13;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<Photon.Voice.LocalVoice>> Photon.Voice.VoiceClient::localVoicesPerChannel
	Dictionary_2_t173D966D87D699333F86F26576B4DEF9B46BFB9A * ___localVoicesPerChannel_14;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>> Photon.Voice.VoiceClient::remoteVoices
	Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B * ___remoteVoices_15;
	// System.Random Photon.Voice.VoiceClient::rnd
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___rnd_16;

public:
	inline static int32_t get_offset_of_transport_0() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___transport_0)); }
	inline RuntimeObject* get_transport_0() const { return ___transport_0; }
	inline RuntimeObject** get_address_of_transport_0() { return &___transport_0; }
	inline void set_transport_0(RuntimeObject* value)
	{
		___transport_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transport_0), (void*)value);
	}

	inline static int32_t get_offset_of_logger_1() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___logger_1)); }
	inline RuntimeObject* get_logger_1() const { return ___logger_1; }
	inline RuntimeObject** get_address_of_logger_1() { return &___logger_1; }
	inline void set_logger_1(RuntimeObject* value)
	{
		___logger_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFramesLostU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___U3CFramesLostU3Ek__BackingField_2)); }
	inline int32_t get_U3CFramesLostU3Ek__BackingField_2() const { return ___U3CFramesLostU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CFramesLostU3Ek__BackingField_2() { return &___U3CFramesLostU3Ek__BackingField_2; }
	inline void set_U3CFramesLostU3Ek__BackingField_2(int32_t value)
	{
		___U3CFramesLostU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CFramesReceivedU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___U3CFramesReceivedU3Ek__BackingField_3)); }
	inline int32_t get_U3CFramesReceivedU3Ek__BackingField_3() const { return ___U3CFramesReceivedU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CFramesReceivedU3Ek__BackingField_3() { return &___U3CFramesReceivedU3Ek__BackingField_3; }
	inline void set_U3CFramesReceivedU3Ek__BackingField_3(int32_t value)
	{
		___U3CFramesReceivedU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CRoundTripTimeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___U3CRoundTripTimeU3Ek__BackingField_4)); }
	inline int32_t get_U3CRoundTripTimeU3Ek__BackingField_4() const { return ___U3CRoundTripTimeU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CRoundTripTimeU3Ek__BackingField_4() { return &___U3CRoundTripTimeU3Ek__BackingField_4; }
	inline void set_U3CRoundTripTimeU3Ek__BackingField_4(int32_t value)
	{
		___U3CRoundTripTimeU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CRoundTripTimeVarianceU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___U3CRoundTripTimeVarianceU3Ek__BackingField_5)); }
	inline int32_t get_U3CRoundTripTimeVarianceU3Ek__BackingField_5() const { return ___U3CRoundTripTimeVarianceU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CRoundTripTimeVarianceU3Ek__BackingField_5() { return &___U3CRoundTripTimeVarianceU3Ek__BackingField_5; }
	inline void set_U3CRoundTripTimeVarianceU3Ek__BackingField_5(int32_t value)
	{
		___U3CRoundTripTimeVarianceU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CSuppressInfoDuplicateWarningU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___U3CSuppressInfoDuplicateWarningU3Ek__BackingField_6)); }
	inline bool get_U3CSuppressInfoDuplicateWarningU3Ek__BackingField_6() const { return ___U3CSuppressInfoDuplicateWarningU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CSuppressInfoDuplicateWarningU3Ek__BackingField_6() { return &___U3CSuppressInfoDuplicateWarningU3Ek__BackingField_6; }
	inline void set_U3CSuppressInfoDuplicateWarningU3Ek__BackingField_6(bool value)
	{
		___U3CSuppressInfoDuplicateWarningU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3COnRemoteVoiceInfoActionU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___U3COnRemoteVoiceInfoActionU3Ek__BackingField_7)); }
	inline RemoteVoiceInfoDelegate_tAFE566F65BB6CDF850E29AFE6BE771196D020D13 * get_U3COnRemoteVoiceInfoActionU3Ek__BackingField_7() const { return ___U3COnRemoteVoiceInfoActionU3Ek__BackingField_7; }
	inline RemoteVoiceInfoDelegate_tAFE566F65BB6CDF850E29AFE6BE771196D020D13 ** get_address_of_U3COnRemoteVoiceInfoActionU3Ek__BackingField_7() { return &___U3COnRemoteVoiceInfoActionU3Ek__BackingField_7; }
	inline void set_U3COnRemoteVoiceInfoActionU3Ek__BackingField_7(RemoteVoiceInfoDelegate_tAFE566F65BB6CDF850E29AFE6BE771196D020D13 * value)
	{
		___U3COnRemoteVoiceInfoActionU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnRemoteVoiceInfoActionU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDebugLostPercentU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___U3CDebugLostPercentU3Ek__BackingField_8)); }
	inline int32_t get_U3CDebugLostPercentU3Ek__BackingField_8() const { return ___U3CDebugLostPercentU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CDebugLostPercentU3Ek__BackingField_8() { return &___U3CDebugLostPercentU3Ek__BackingField_8; }
	inline void set_U3CDebugLostPercentU3Ek__BackingField_8(int32_t value)
	{
		___U3CDebugLostPercentU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_prevRtt_9() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___prevRtt_9)); }
	inline int32_t get_prevRtt_9() const { return ___prevRtt_9; }
	inline int32_t* get_address_of_prevRtt_9() { return &___prevRtt_9; }
	inline void set_prevRtt_9(int32_t value)
	{
		___prevRtt_9 = value;
	}

	inline static int32_t get_offset_of_remoteVoiceDelayFrames_10() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___remoteVoiceDelayFrames_10)); }
	inline Dictionary_2_t29378254DA2EF1DF294AE5CD1E73420D108D8867 * get_remoteVoiceDelayFrames_10() const { return ___remoteVoiceDelayFrames_10; }
	inline Dictionary_2_t29378254DA2EF1DF294AE5CD1E73420D108D8867 ** get_address_of_remoteVoiceDelayFrames_10() { return &___remoteVoiceDelayFrames_10; }
	inline void set_remoteVoiceDelayFrames_10(Dictionary_2_t29378254DA2EF1DF294AE5CD1E73420D108D8867 * value)
	{
		___remoteVoiceDelayFrames_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remoteVoiceDelayFrames_10), (void*)value);
	}

	inline static int32_t get_offset_of_globalInterestGroup_11() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___globalInterestGroup_11)); }
	inline uint8_t get_globalInterestGroup_11() const { return ___globalInterestGroup_11; }
	inline uint8_t* get_address_of_globalInterestGroup_11() { return &___globalInterestGroup_11; }
	inline void set_globalInterestGroup_11(uint8_t value)
	{
		___globalInterestGroup_11 = value;
	}

	inline static int32_t get_offset_of_voiceIdCnt_12() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___voiceIdCnt_12)); }
	inline uint8_t get_voiceIdCnt_12() const { return ___voiceIdCnt_12; }
	inline uint8_t* get_address_of_voiceIdCnt_12() { return &___voiceIdCnt_12; }
	inline void set_voiceIdCnt_12(uint8_t value)
	{
		___voiceIdCnt_12 = value;
	}

	inline static int32_t get_offset_of_localVoices_13() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___localVoices_13)); }
	inline Dictionary_2_tA7F6D73676809D9EF54381D374C152C8891CB7AA * get_localVoices_13() const { return ___localVoices_13; }
	inline Dictionary_2_tA7F6D73676809D9EF54381D374C152C8891CB7AA ** get_address_of_localVoices_13() { return &___localVoices_13; }
	inline void set_localVoices_13(Dictionary_2_tA7F6D73676809D9EF54381D374C152C8891CB7AA * value)
	{
		___localVoices_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localVoices_13), (void*)value);
	}

	inline static int32_t get_offset_of_localVoicesPerChannel_14() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___localVoicesPerChannel_14)); }
	inline Dictionary_2_t173D966D87D699333F86F26576B4DEF9B46BFB9A * get_localVoicesPerChannel_14() const { return ___localVoicesPerChannel_14; }
	inline Dictionary_2_t173D966D87D699333F86F26576B4DEF9B46BFB9A ** get_address_of_localVoicesPerChannel_14() { return &___localVoicesPerChannel_14; }
	inline void set_localVoicesPerChannel_14(Dictionary_2_t173D966D87D699333F86F26576B4DEF9B46BFB9A * value)
	{
		___localVoicesPerChannel_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localVoicesPerChannel_14), (void*)value);
	}

	inline static int32_t get_offset_of_remoteVoices_15() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___remoteVoices_15)); }
	inline Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B * get_remoteVoices_15() const { return ___remoteVoices_15; }
	inline Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B ** get_address_of_remoteVoices_15() { return &___remoteVoices_15; }
	inline void set_remoteVoices_15(Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B * value)
	{
		___remoteVoices_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remoteVoices_15), (void*)value);
	}

	inline static int32_t get_offset_of_rnd_16() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___rnd_16)); }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * get_rnd_16() const { return ___rnd_16; }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 ** get_address_of_rnd_16() { return &___rnd_16; }
	inline void set_rnd_16(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * value)
	{
		___rnd_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rnd_16), (void*)value);
	}
};


// Photon.Voice.LoadBalancingTransport/<>c
struct U3CU3Ec_t7CF8071A50F9E6844B0ACBBFC6AC2FF3DEF5329B  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t7CF8071A50F9E6844B0ACBBFC6AC2FF3DEF5329B_StaticFields
{
public:
	// Photon.Voice.LoadBalancingTransport/<>c Photon.Voice.LoadBalancingTransport/<>c::<>9
	U3CU3Ec_t7CF8071A50F9E6844B0ACBBFC6AC2FF3DEF5329B * ___U3CU3E9_0;
	// System.Func`2<Photon.Voice.LocalVoice,Photon.Voice.Codec> Photon.Voice.LoadBalancingTransport/<>c::<>9__21_0
	Func_2_t9DAF740F320CC3CC70B4BF418FA15DD4C0C66D0A * ___U3CU3E9__21_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7CF8071A50F9E6844B0ACBBFC6AC2FF3DEF5329B_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t7CF8071A50F9E6844B0ACBBFC6AC2FF3DEF5329B * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t7CF8071A50F9E6844B0ACBBFC6AC2FF3DEF5329B ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t7CF8071A50F9E6844B0ACBBFC6AC2FF3DEF5329B * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__21_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7CF8071A50F9E6844B0ACBBFC6AC2FF3DEF5329B_StaticFields, ___U3CU3E9__21_0_1)); }
	inline Func_2_t9DAF740F320CC3CC70B4BF418FA15DD4C0C66D0A * get_U3CU3E9__21_0_1() const { return ___U3CU3E9__21_0_1; }
	inline Func_2_t9DAF740F320CC3CC70B4BF418FA15DD4C0C66D0A ** get_address_of_U3CU3E9__21_0_1() { return &___U3CU3E9__21_0_1; }
	inline void set_U3CU3E9__21_0_1(Func_2_t9DAF740F320CC3CC70B4BF418FA15DD4C0C66D0A * value)
	{
		___U3CU3E9__21_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__21_0_1), (void*)value);
	}
};


// Photon.Voice.LoadBalancingTransport2/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t5C9FD3C1AB5A4CB6E9DFA8088BB5DDB531DCF41F  : public RuntimeObject
{
public:
	// ExitGames.Client.Photon.ByteArraySlice Photon.Voice.LoadBalancingTransport2/<>c__DisplayClass4_0::slice
	ByteArraySlice_t48E6503C839C3686AAA94FAF30E0B1948A52D94F * ___slice_0;

public:
	inline static int32_t get_offset_of_slice_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t5C9FD3C1AB5A4CB6E9DFA8088BB5DDB531DCF41F, ___slice_0)); }
	inline ByteArraySlice_t48E6503C839C3686AAA94FAF30E0B1948A52D94F * get_slice_0() const { return ___slice_0; }
	inline ByteArraySlice_t48E6503C839C3686AAA94FAF30E0B1948A52D94F ** get_address_of_slice_0() { return &___slice_0; }
	inline void set_slice_0(ByteArraySlice_t48E6503C839C3686AAA94FAF30E0B1948A52D94F * value)
	{
		___slice_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slice_0), (void*)value);
	}
};


// Photon.Voice.OpusCodec/DecoderFactory
struct DecoderFactory_tCA25011733525EE61FA25567B74D18F7574F3DED  : public RuntimeObject
{
public:

public:
};


// Photon.Voice.OpusCodec/Factory
struct Factory_t68149B8AD740BC9FFB266B0238A0E6F8DCF85211  : public RuntimeObject
{
public:

public:
};


// Photon.Voice.OpusCodec/Util
struct Util_tB79F7CAD5C8FC71AB7A0EAF51F9E9F9F7B4E2E3E  : public RuntimeObject
{
public:

public:
};


// Photon.Voice.SpacingProfile/<>c
struct U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15_StaticFields
{
public:
	// Photon.Voice.SpacingProfile/<>c Photon.Voice.SpacingProfile/<>c::<>9
	U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15 * ___U3CU3E9_0;
	// System.Func`2<System.Int16,System.Int16> Photon.Voice.SpacingProfile/<>c::<>9__13_0
	Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D * ___U3CU3E9__13_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__13_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15_StaticFields, ___U3CU3E9__13_0_1)); }
	inline Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D * get_U3CU3E9__13_0_1() const { return ___U3CU3E9__13_0_1; }
	inline Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D ** get_address_of_U3CU3E9__13_0_1() { return &___U3CU3E9__13_0_1; }
	inline void set_U3CU3E9__13_0_1(Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D * value)
	{
		___U3CU3E9__13_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__13_0_1), (void*)value);
	}
};


// Photon.Voice.VoiceClient/<>c
struct U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7_StaticFields
{
public:
	// Photon.Voice.VoiceClient/<>c Photon.Voice.VoiceClient/<>c::<>9
	U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7 * ___U3CU3E9_0;
	// System.Func`2<Photon.Voice.LocalVoice,System.Boolean> Photon.Voice.VoiceClient/<>c::<>9__55_0
	Func_2_tB88CF4C4A2B2A48B1412626D3AEDEB9C7F289CD1 * ___U3CU3E9__55_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__55_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7_StaticFields, ___U3CU3E9__55_0_1)); }
	inline Func_2_tB88CF4C4A2B2A48B1412626D3AEDEB9C7F289CD1 * get_U3CU3E9__55_0_1() const { return ___U3CU3E9__55_0_1; }
	inline Func_2_tB88CF4C4A2B2A48B1412626D3AEDEB9C7F289CD1 ** get_address_of_U3CU3E9__55_0_1() { return &___U3CU3E9__55_0_1; }
	inline void set_U3CU3E9__55_0_1(Func_2_tB88CF4C4A2B2A48B1412626D3AEDEB9C7F289CD1 * value)
	{
		___U3CU3E9__55_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__55_0_1), (void*)value);
	}
};


// Photon.Voice.VoiceClient/<>c__DisplayClass50_0
struct U3CU3Ec__DisplayClass50_0_t5F0198FD70542B3779AC6EF61A8CE73C8A465E97  : public RuntimeObject
{
public:
	// Photon.Voice.LocalVoiceAudio`1<System.Int16> Photon.Voice.VoiceClient/<>c__DisplayClass50_0::localVoice
	LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8 * ___localVoice_0;

public:
	inline static int32_t get_offset_of_localVoice_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass50_0_t5F0198FD70542B3779AC6EF61A8CE73C8A465E97, ___localVoice_0)); }
	inline LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8 * get_localVoice_0() const { return ___localVoice_0; }
	inline LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8 ** get_address_of_localVoice_0() { return &___localVoice_0; }
	inline void set_localVoice_0(LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8 * value)
	{
		___localVoice_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localVoice_0), (void*)value);
	}
};


// Photon.Voice.VoiceClient/<>c__DisplayClass50_1
struct U3CU3Ec__DisplayClass50_1_t54976458C9D841F47F5FBF17A876A0E346916E7F  : public RuntimeObject
{
public:
	// Photon.Voice.LocalVoiceAudio`1<System.Single> Photon.Voice.VoiceClient/<>c__DisplayClass50_1::localVoice
	LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238 * ___localVoice_0;

public:
	inline static int32_t get_offset_of_localVoice_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass50_1_t54976458C9D841F47F5FBF17A876A0E346916E7F, ___localVoice_0)); }
	inline LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238 * get_localVoice_0() const { return ___localVoice_0; }
	inline LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238 ** get_address_of_localVoice_0() { return &___localVoice_0; }
	inline void set_localVoice_0(LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238 * value)
	{
		___localVoice_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localVoice_0), (void*)value);
	}
};


// Photon.Voice.VoiceClient/<>c__DisplayClass50_2
struct U3CU3Ec__DisplayClass50_2_tA191A69CBBECD484B5CE23EA132F1B1FF78025C9  : public RuntimeObject
{
public:
	// Photon.Voice.LocalVoiceAudio`1<System.Single> Photon.Voice.VoiceClient/<>c__DisplayClass50_2::localVoice
	LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238 * ___localVoice_0;

public:
	inline static int32_t get_offset_of_localVoice_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass50_2_tA191A69CBBECD484B5CE23EA132F1B1FF78025C9, ___localVoice_0)); }
	inline LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238 * get_localVoice_0() const { return ___localVoice_0; }
	inline LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238 ** get_address_of_localVoice_0() { return &___localVoice_0; }
	inline void set_localVoice_0(LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238 * value)
	{
		___localVoice_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localVoice_0), (void*)value);
	}
};


// Photon.Voice.VoiceClient/<>c__DisplayClass50_3
struct U3CU3Ec__DisplayClass50_3_t5C4D224480E812C3A77D3480CE1D9F975EEE8990  : public RuntimeObject
{
public:
	// Photon.Voice.LocalVoiceAudio`1<System.Int16> Photon.Voice.VoiceClient/<>c__DisplayClass50_3::localVoice
	LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8 * ___localVoice_0;

public:
	inline static int32_t get_offset_of_localVoice_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass50_3_t5C4D224480E812C3A77D3480CE1D9F975EEE8990, ___localVoice_0)); }
	inline LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8 * get_localVoice_0() const { return ___localVoice_0; }
	inline LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8 ** get_address_of_localVoice_0() { return &___localVoice_0; }
	inline void set_localVoice_0(LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8 * value)
	{
		___localVoice_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localVoice_0), (void*)value);
	}
};


// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE 
{
public:
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____array_0;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_1;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____array_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__array_0() const { return ____array_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__offset_1() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____offset_1)); }
	inline int32_t get__offset_1() const { return ____offset_1; }
	inline int32_t* get_address_of__offset_1() { return &____offset_1; }
	inline void set__offset_1(int32_t value)
	{
		____offset_1 = value;
	}

	inline static int32_t get_offset_of__count_2() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____count_2)); }
	inline int32_t get__count_2() const { return ____count_2; }
	inline int32_t* get_address_of__count_2() { return &____count_2; }
	inline void set__count_2(int32_t value)
	{
		____count_2 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>
struct KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint8_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957, ___key_0)); }
	inline uint8_t get_key_0() const { return ___key_0; }
	inline uint8_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint8_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Byte,Photon.Voice.RemoteVoice>
struct KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint8_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382, ___key_0)); }
	inline uint8_t get_key_0() const { return ___key_0; }
	inline uint8_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint8_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382, ___value_1)); }
	inline RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87 * get_value_1() const { return ___value_1; }
	inline RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>
struct KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99, ___value_1)); }
	inline Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0 * get_value_1() const { return ___value_1; }
	inline Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
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


// Photon.Voice.OpusCodec/Encoder`1<System.Int16>
struct Encoder_1_t1835B5877F1B49B43B635F05E7C29D83CC9C3EF2  : public RuntimeObject
{
public:
	// POpusCodec.OpusEncoder Photon.Voice.OpusCodec/Encoder`1::encoder
	OpusEncoder_t289CD686765411D189B07CC8CEEE006E19E1B823 * ___encoder_0;
	// System.Boolean Photon.Voice.OpusCodec/Encoder`1::disposed
	bool ___disposed_1;
	// System.String Photon.Voice.OpusCodec/Encoder`1::<Error>k__BackingField
	String_t* ___U3CErrorU3Ek__BackingField_2;
	// System.Action`2<System.ArraySegment`1<System.Byte>,Photon.Voice.FrameFlags> Photon.Voice.OpusCodec/Encoder`1::<Output>k__BackingField
	Action_2_t4203FA193D835C197097DFF2303E7F02F8DBA45D * ___U3COutputU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_encoder_0() { return static_cast<int32_t>(offsetof(Encoder_1_t1835B5877F1B49B43B635F05E7C29D83CC9C3EF2, ___encoder_0)); }
	inline OpusEncoder_t289CD686765411D189B07CC8CEEE006E19E1B823 * get_encoder_0() const { return ___encoder_0; }
	inline OpusEncoder_t289CD686765411D189B07CC8CEEE006E19E1B823 ** get_address_of_encoder_0() { return &___encoder_0; }
	inline void set_encoder_0(OpusEncoder_t289CD686765411D189B07CC8CEEE006E19E1B823 * value)
	{
		___encoder_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoder_0), (void*)value);
	}

	inline static int32_t get_offset_of_disposed_1() { return static_cast<int32_t>(offsetof(Encoder_1_t1835B5877F1B49B43B635F05E7C29D83CC9C3EF2, ___disposed_1)); }
	inline bool get_disposed_1() const { return ___disposed_1; }
	inline bool* get_address_of_disposed_1() { return &___disposed_1; }
	inline void set_disposed_1(bool value)
	{
		___disposed_1 = value;
	}

	inline static int32_t get_offset_of_U3CErrorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Encoder_1_t1835B5877F1B49B43B635F05E7C29D83CC9C3EF2, ___U3CErrorU3Ek__BackingField_2)); }
	inline String_t* get_U3CErrorU3Ek__BackingField_2() const { return ___U3CErrorU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CErrorU3Ek__BackingField_2() { return &___U3CErrorU3Ek__BackingField_2; }
	inline void set_U3CErrorU3Ek__BackingField_2(String_t* value)
	{
		___U3CErrorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3COutputU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Encoder_1_t1835B5877F1B49B43B635F05E7C29D83CC9C3EF2, ___U3COutputU3Ek__BackingField_3)); }
	inline Action_2_t4203FA193D835C197097DFF2303E7F02F8DBA45D * get_U3COutputU3Ek__BackingField_3() const { return ___U3COutputU3Ek__BackingField_3; }
	inline Action_2_t4203FA193D835C197097DFF2303E7F02F8DBA45D ** get_address_of_U3COutputU3Ek__BackingField_3() { return &___U3COutputU3Ek__BackingField_3; }
	inline void set_U3COutputU3Ek__BackingField_3(Action_2_t4203FA193D835C197097DFF2303E7F02F8DBA45D * value)
	{
		___U3COutputU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COutputU3Ek__BackingField_3), (void*)value);
	}
};

struct Encoder_1_t1835B5877F1B49B43B635F05E7C29D83CC9C3EF2_StaticFields
{
public:
	// System.ArraySegment`1<System.Byte> Photon.Voice.OpusCodec/Encoder`1::EmptyBuffer
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___EmptyBuffer_4;

public:
	inline static int32_t get_offset_of_EmptyBuffer_4() { return static_cast<int32_t>(offsetof(Encoder_1_t1835B5877F1B49B43B635F05E7C29D83CC9C3EF2_StaticFields, ___EmptyBuffer_4)); }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  get_EmptyBuffer_4() const { return ___EmptyBuffer_4; }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * get_address_of_EmptyBuffer_4() { return &___EmptyBuffer_4; }
	inline void set_EmptyBuffer_4(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  value)
	{
		___EmptyBuffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___EmptyBuffer_4))->____array_0), (void*)NULL);
	}
};


// Photon.Voice.OpusCodec/Encoder`1<System.Single>
struct Encoder_1_t439BF0A94F0F3694C5AF8B5EC4C91CBA46C4C620  : public RuntimeObject
{
public:
	// POpusCodec.OpusEncoder Photon.Voice.OpusCodec/Encoder`1::encoder
	OpusEncoder_t289CD686765411D189B07CC8CEEE006E19E1B823 * ___encoder_0;
	// System.Boolean Photon.Voice.OpusCodec/Encoder`1::disposed
	bool ___disposed_1;
	// System.String Photon.Voice.OpusCodec/Encoder`1::<Error>k__BackingField
	String_t* ___U3CErrorU3Ek__BackingField_2;
	// System.Action`2<System.ArraySegment`1<System.Byte>,Photon.Voice.FrameFlags> Photon.Voice.OpusCodec/Encoder`1::<Output>k__BackingField
	Action_2_t4203FA193D835C197097DFF2303E7F02F8DBA45D * ___U3COutputU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_encoder_0() { return static_cast<int32_t>(offsetof(Encoder_1_t439BF0A94F0F3694C5AF8B5EC4C91CBA46C4C620, ___encoder_0)); }
	inline OpusEncoder_t289CD686765411D189B07CC8CEEE006E19E1B823 * get_encoder_0() const { return ___encoder_0; }
	inline OpusEncoder_t289CD686765411D189B07CC8CEEE006E19E1B823 ** get_address_of_encoder_0() { return &___encoder_0; }
	inline void set_encoder_0(OpusEncoder_t289CD686765411D189B07CC8CEEE006E19E1B823 * value)
	{
		___encoder_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoder_0), (void*)value);
	}

	inline static int32_t get_offset_of_disposed_1() { return static_cast<int32_t>(offsetof(Encoder_1_t439BF0A94F0F3694C5AF8B5EC4C91CBA46C4C620, ___disposed_1)); }
	inline bool get_disposed_1() const { return ___disposed_1; }
	inline bool* get_address_of_disposed_1() { return &___disposed_1; }
	inline void set_disposed_1(bool value)
	{
		___disposed_1 = value;
	}

	inline static int32_t get_offset_of_U3CErrorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Encoder_1_t439BF0A94F0F3694C5AF8B5EC4C91CBA46C4C620, ___U3CErrorU3Ek__BackingField_2)); }
	inline String_t* get_U3CErrorU3Ek__BackingField_2() const { return ___U3CErrorU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CErrorU3Ek__BackingField_2() { return &___U3CErrorU3Ek__BackingField_2; }
	inline void set_U3CErrorU3Ek__BackingField_2(String_t* value)
	{
		___U3CErrorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3COutputU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Encoder_1_t439BF0A94F0F3694C5AF8B5EC4C91CBA46C4C620, ___U3COutputU3Ek__BackingField_3)); }
	inline Action_2_t4203FA193D835C197097DFF2303E7F02F8DBA45D * get_U3COutputU3Ek__BackingField_3() const { return ___U3COutputU3Ek__BackingField_3; }
	inline Action_2_t4203FA193D835C197097DFF2303E7F02F8DBA45D ** get_address_of_U3COutputU3Ek__BackingField_3() { return &___U3COutputU3Ek__BackingField_3; }
	inline void set_U3COutputU3Ek__BackingField_3(Action_2_t4203FA193D835C197097DFF2303E7F02F8DBA45D * value)
	{
		___U3COutputU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COutputU3Ek__BackingField_3), (void*)value);
	}
};

struct Encoder_1_t439BF0A94F0F3694C5AF8B5EC4C91CBA46C4C620_StaticFields
{
public:
	// System.ArraySegment`1<System.Byte> Photon.Voice.OpusCodec/Encoder`1::EmptyBuffer
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___EmptyBuffer_4;

public:
	inline static int32_t get_offset_of_EmptyBuffer_4() { return static_cast<int32_t>(offsetof(Encoder_1_t439BF0A94F0F3694C5AF8B5EC4C91CBA46C4C620_StaticFields, ___EmptyBuffer_4)); }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  get_EmptyBuffer_4() const { return ___EmptyBuffer_4; }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * get_address_of_EmptyBuffer_4() { return &___EmptyBuffer_4; }
	inline void set_EmptyBuffer_4(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  value)
	{
		___EmptyBuffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___EmptyBuffer_4))->____array_0), (void*)NULL);
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>
struct Enumerator_t82EC38578AA05240F1D04E31474B7E844D0AA5D6 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t82EC38578AA05240F1D04E31474B7E844D0AA5D6, ___dictionary_0)); }
	inline Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t82EC38578AA05240F1D04E31474B7E844D0AA5D6, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t82EC38578AA05240F1D04E31474B7E844D0AA5D6, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t82EC38578AA05240F1D04E31474B7E844D0AA5D6, ___current_3)); }
	inline KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t82EC38578AA05240F1D04E31474B7E844D0AA5D6, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,Photon.Voice.RemoteVoice>
struct Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E, ___dictionary_0)); }
	inline Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E, ___current_3)); }
	inline KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>
struct Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B, ___dictionary_0)); }
	inline Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B, ___current_3)); }
	inline KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___dictionary_0)); }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___current_3)); }
	inline KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// Photon.Voice.AudioUtil/VoiceDetector`1<System.Int16>
struct VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4  : public RuntimeObject
{
public:
	// System.Boolean Photon.Voice.AudioUtil/VoiceDetector`1::<On>k__BackingField
	bool ___U3COnU3Ek__BackingField_0;
	// System.Single Photon.Voice.AudioUtil/VoiceDetector`1::norm
	float ___norm_1;
	// System.Single Photon.Voice.AudioUtil/VoiceDetector`1::threshold
	float ___threshold_2;
	// System.Boolean Photon.Voice.AudioUtil/VoiceDetector`1::detected
	bool ___detected_3;
	// System.DateTime Photon.Voice.AudioUtil/VoiceDetector`1::<DetectedTime>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CDetectedTimeU3Ek__BackingField_4;
	// System.Action Photon.Voice.AudioUtil/VoiceDetector`1::OnDetected
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnDetected_5;
	// System.Int32 Photon.Voice.AudioUtil/VoiceDetector`1::activityDelay
	int32_t ___activityDelay_6;
	// System.Int32 Photon.Voice.AudioUtil/VoiceDetector`1::autoSilenceCounter
	int32_t ___autoSilenceCounter_7;
	// System.Int32 Photon.Voice.AudioUtil/VoiceDetector`1::valuesCountPerSec
	int32_t ___valuesCountPerSec_8;
	// System.Int32 Photon.Voice.AudioUtil/VoiceDetector`1::activityDelayValuesCount
	int32_t ___activityDelayValuesCount_9;

public:
	inline static int32_t get_offset_of_U3COnU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4, ___U3COnU3Ek__BackingField_0)); }
	inline bool get_U3COnU3Ek__BackingField_0() const { return ___U3COnU3Ek__BackingField_0; }
	inline bool* get_address_of_U3COnU3Ek__BackingField_0() { return &___U3COnU3Ek__BackingField_0; }
	inline void set_U3COnU3Ek__BackingField_0(bool value)
	{
		___U3COnU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_norm_1() { return static_cast<int32_t>(offsetof(VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4, ___norm_1)); }
	inline float get_norm_1() const { return ___norm_1; }
	inline float* get_address_of_norm_1() { return &___norm_1; }
	inline void set_norm_1(float value)
	{
		___norm_1 = value;
	}

	inline static int32_t get_offset_of_threshold_2() { return static_cast<int32_t>(offsetof(VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4, ___threshold_2)); }
	inline float get_threshold_2() const { return ___threshold_2; }
	inline float* get_address_of_threshold_2() { return &___threshold_2; }
	inline void set_threshold_2(float value)
	{
		___threshold_2 = value;
	}

	inline static int32_t get_offset_of_detected_3() { return static_cast<int32_t>(offsetof(VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4, ___detected_3)); }
	inline bool get_detected_3() const { return ___detected_3; }
	inline bool* get_address_of_detected_3() { return &___detected_3; }
	inline void set_detected_3(bool value)
	{
		___detected_3 = value;
	}

	inline static int32_t get_offset_of_U3CDetectedTimeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4, ___U3CDetectedTimeU3Ek__BackingField_4)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CDetectedTimeU3Ek__BackingField_4() const { return ___U3CDetectedTimeU3Ek__BackingField_4; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CDetectedTimeU3Ek__BackingField_4() { return &___U3CDetectedTimeU3Ek__BackingField_4; }
	inline void set_U3CDetectedTimeU3Ek__BackingField_4(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CDetectedTimeU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_OnDetected_5() { return static_cast<int32_t>(offsetof(VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4, ___OnDetected_5)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnDetected_5() const { return ___OnDetected_5; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnDetected_5() { return &___OnDetected_5; }
	inline void set_OnDetected_5(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnDetected_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDetected_5), (void*)value);
	}

	inline static int32_t get_offset_of_activityDelay_6() { return static_cast<int32_t>(offsetof(VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4, ___activityDelay_6)); }
	inline int32_t get_activityDelay_6() const { return ___activityDelay_6; }
	inline int32_t* get_address_of_activityDelay_6() { return &___activityDelay_6; }
	inline void set_activityDelay_6(int32_t value)
	{
		___activityDelay_6 = value;
	}

	inline static int32_t get_offset_of_autoSilenceCounter_7() { return static_cast<int32_t>(offsetof(VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4, ___autoSilenceCounter_7)); }
	inline int32_t get_autoSilenceCounter_7() const { return ___autoSilenceCounter_7; }
	inline int32_t* get_address_of_autoSilenceCounter_7() { return &___autoSilenceCounter_7; }
	inline void set_autoSilenceCounter_7(int32_t value)
	{
		___autoSilenceCounter_7 = value;
	}

	inline static int32_t get_offset_of_valuesCountPerSec_8() { return static_cast<int32_t>(offsetof(VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4, ___valuesCountPerSec_8)); }
	inline int32_t get_valuesCountPerSec_8() const { return ___valuesCountPerSec_8; }
	inline int32_t* get_address_of_valuesCountPerSec_8() { return &___valuesCountPerSec_8; }
	inline void set_valuesCountPerSec_8(int32_t value)
	{
		___valuesCountPerSec_8 = value;
	}

	inline static int32_t get_offset_of_activityDelayValuesCount_9() { return static_cast<int32_t>(offsetof(VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4, ___activityDelayValuesCount_9)); }
	inline int32_t get_activityDelayValuesCount_9() const { return ___activityDelayValuesCount_9; }
	inline int32_t* get_address_of_activityDelayValuesCount_9() { return &___activityDelayValuesCount_9; }
	inline void set_activityDelayValuesCount_9(int32_t value)
	{
		___activityDelayValuesCount_9 = value;
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


// POpusCodec.Enums.Channels
struct Channels_t43E6EDAF5EC70F2F6C5181AF20CABA6C78A7D137 
{
public:
	// System.Int32 POpusCodec.Enums.Channels::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Channels_t43E6EDAF5EC70F2F6C5181AF20CABA6C78A7D137, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Voice.Codec
struct Codec_t1F1715448DDDD52E006F1090156DA888E10CF3BF 
{
public:
	// System.Int32 Photon.Voice.Codec::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Codec_t1F1715448DDDD52E006F1090156DA888E10CF3BF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// POpusCodec.Enums.Delay
struct Delay_t5DEB1A2DE107884E8E3B8D29D1AF92141F13634B 
{
public:
	// System.Int32 POpusCodec.Enums.Delay::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Delay_t5DEB1A2DE107884E8E3B8D29D1AF92141F13634B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// Photon.Voice.FrameFlags
struct FrameFlags_t451A8646E0D3D4677C915CE5F2980A1D05F6DA56 
{
public:
	// System.Byte Photon.Voice.FrameFlags::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FrameFlags_t451A8646E0D3D4677C915CE5F2980A1D05F6DA56, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Photon.Voice.ImageFormat
struct ImageFormat_t0535B74A976701A7A21469F666EC07FC9604D713 
{
public:
	// System.Int32 Photon.Voice.ImageFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ImageFormat_t0535B74A976701A7A21469F666EC07FC9604D713, ___value___2)); }
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


// POpusCodec.Enums.SamplingRate
struct SamplingRate_tB35955BC7837DAB0BF0F4D73CAA2BAFD47646F51 
{
public:
	// System.Int32 POpusCodec.Enums.SamplingRate::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SamplingRate_tB35955BC7837DAB0BF0F4D73CAA2BAFD47646F51, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Voice.OpusCodec/FrameDuration
struct FrameDuration_tD560D6F059401A66EE1FF773851E931BC1E0CE4D 
{
public:
	// System.Int32 Photon.Voice.OpusCodec/FrameDuration::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FrameDuration_tD560D6F059401A66EE1FF773851E931BC1E0CE4D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Voice.PhotonTransportProtocol/EventParam
struct EventParam_t286124572F0C3EE6A6ED8F2C96725E09626901F6 
{
public:
	// System.Byte Photon.Voice.PhotonTransportProtocol/EventParam::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventParam_t286124572F0C3EE6A6ED8F2C96725E09626901F6, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Photon.Voice.PhotonTransportProtocol/EventSubcode
struct EventSubcode_t7A5F7428F1B6466E42F3130508DF733C68480FB3 
{
public:
	// System.Byte Photon.Voice.PhotonTransportProtocol/EventSubcode::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventSubcode_t7A5F7428F1B6466E42F3130508DF733C68480FB3, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Photon.Voice.RemoteVoiceOptions/OutputType
struct OutputType_tA2FEB391893039345361BD0569BDBF36A4250C01 
{
public:
	// System.Int32 Photon.Voice.RemoteVoiceOptions/OutputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OutputType_tA2FEB391893039345361BD0569BDBF36A4250C01, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Voice.WebRTCAudioLib/Error
struct Error_t9EB59F7E84B1C044178E67535493CBFE775492FA 
{
public:
	// System.Int32 Photon.Voice.WebRTCAudioLib/Error::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Error_t9EB59F7E84B1C044178E67535493CBFE775492FA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Voice.WebRTCAudioLib/Param
struct Param_tEE9CDCCA13E64DCDC2F6D5EE05D7137F775A8676 
{
public:
	// System.Int32 Photon.Voice.WebRTCAudioLib/Param::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Param_tEE9CDCCA13E64DCDC2F6D5EE05D7137F775A8676, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Voice.FrameBuffer
struct FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77 
{
public:
	// System.Byte[] Photon.Voice.FrameBuffer::array
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array_0;
	// System.Int32 Photon.Voice.FrameBuffer::offset
	int32_t ___offset_1;
	// System.Int32 Photon.Voice.FrameBuffer::count
	int32_t ___count_2;
	// System.Action Photon.Voice.FrameBuffer::release
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___release_3;
	// Photon.Voice.FrameFlags Photon.Voice.FrameBuffer::<Flags>k__BackingField
	uint8_t ___U3CFlagsU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_array_0() { return static_cast<int32_t>(offsetof(FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77, ___array_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_array_0() const { return ___array_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_array_0() { return &___array_0; }
	inline void set_array_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___array_0), (void*)value);
	}

	inline static int32_t get_offset_of_offset_1() { return static_cast<int32_t>(offsetof(FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77, ___offset_1)); }
	inline int32_t get_offset_1() const { return ___offset_1; }
	inline int32_t* get_address_of_offset_1() { return &___offset_1; }
	inline void set_offset_1(int32_t value)
	{
		___offset_1 = value;
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_release_3() { return static_cast<int32_t>(offsetof(FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77, ___release_3)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_release_3() const { return ___release_3; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_release_3() { return &___release_3; }
	inline void set_release_3(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___release_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___release_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFlagsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77, ___U3CFlagsU3Ek__BackingField_4)); }
	inline uint8_t get_U3CFlagsU3Ek__BackingField_4() const { return ___U3CFlagsU3Ek__BackingField_4; }
	inline uint8_t* get_address_of_U3CFlagsU3Ek__BackingField_4() { return &___U3CFlagsU3Ek__BackingField_4; }
	inline void set_U3CFlagsU3Ek__BackingField_4(uint8_t value)
	{
		___U3CFlagsU3Ek__BackingField_4 = value;
	}
};

// Native definition for P/Invoke marshalling of Photon.Voice.FrameBuffer
struct FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___array_0;
	int32_t ___offset_1;
	int32_t ___count_2;
	Il2CppMethodPointer ___release_3;
	uint8_t ___U3CFlagsU3Ek__BackingField_4;
};
// Native definition for COM marshalling of Photon.Voice.FrameBuffer
struct FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___array_0;
	int32_t ___offset_1;
	int32_t ___count_2;
	Il2CppMethodPointer ___release_3;
	uint8_t ___U3CFlagsU3Ek__BackingField_4;
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

// POpusCodec.OpusEncoder
struct OpusEncoder_t289CD686765411D189B07CC8CEEE006E19E1B823  : public RuntimeObject
{
public:
	// System.IntPtr POpusCodec.OpusEncoder::_handle
	intptr_t ____handle_1;
	// System.Int32 POpusCodec.OpusEncoder::_frameSizePerChannel
	int32_t ____frameSizePerChannel_3;
	// POpusCodec.Enums.SamplingRate POpusCodec.OpusEncoder::_inputSamplingRate
	int32_t ____inputSamplingRate_4;
	// POpusCodec.Enums.Channels POpusCodec.OpusEncoder::_inputChannels
	int32_t ____inputChannels_5;
	// System.Byte[] POpusCodec.OpusEncoder::writePacket
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___writePacket_6;
	// POpusCodec.Enums.Delay POpusCodec.OpusEncoder::_encoderDelay
	int32_t ____encoderDelay_8;

public:
	inline static int32_t get_offset_of__handle_1() { return static_cast<int32_t>(offsetof(OpusEncoder_t289CD686765411D189B07CC8CEEE006E19E1B823, ____handle_1)); }
	inline intptr_t get__handle_1() const { return ____handle_1; }
	inline intptr_t* get_address_of__handle_1() { return &____handle_1; }
	inline void set__handle_1(intptr_t value)
	{
		____handle_1 = value;
	}

	inline static int32_t get_offset_of__frameSizePerChannel_3() { return static_cast<int32_t>(offsetof(OpusEncoder_t289CD686765411D189B07CC8CEEE006E19E1B823, ____frameSizePerChannel_3)); }
	inline int32_t get__frameSizePerChannel_3() const { return ____frameSizePerChannel_3; }
	inline int32_t* get_address_of__frameSizePerChannel_3() { return &____frameSizePerChannel_3; }
	inline void set__frameSizePerChannel_3(int32_t value)
	{
		____frameSizePerChannel_3 = value;
	}

	inline static int32_t get_offset_of__inputSamplingRate_4() { return static_cast<int32_t>(offsetof(OpusEncoder_t289CD686765411D189B07CC8CEEE006E19E1B823, ____inputSamplingRate_4)); }
	inline int32_t get__inputSamplingRate_4() const { return ____inputSamplingRate_4; }
	inline int32_t* get_address_of__inputSamplingRate_4() { return &____inputSamplingRate_4; }
	inline void set__inputSamplingRate_4(int32_t value)
	{
		____inputSamplingRate_4 = value;
	}

	inline static int32_t get_offset_of__inputChannels_5() { return static_cast<int32_t>(offsetof(OpusEncoder_t289CD686765411D189B07CC8CEEE006E19E1B823, ____inputChannels_5)); }
	inline int32_t get__inputChannels_5() const { return ____inputChannels_5; }
	inline int32_t* get_address_of__inputChannels_5() { return &____inputChannels_5; }
	inline void set__inputChannels_5(int32_t value)
	{
		____inputChannels_5 = value;
	}

	inline static int32_t get_offset_of_writePacket_6() { return static_cast<int32_t>(offsetof(OpusEncoder_t289CD686765411D189B07CC8CEEE006E19E1B823, ___writePacket_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_writePacket_6() const { return ___writePacket_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_writePacket_6() { return &___writePacket_6; }
	inline void set_writePacket_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___writePacket_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___writePacket_6), (void*)value);
	}

	inline static int32_t get_offset_of__encoderDelay_8() { return static_cast<int32_t>(offsetof(OpusEncoder_t289CD686765411D189B07CC8CEEE006E19E1B823, ____encoderDelay_8)); }
	inline int32_t get__encoderDelay_8() const { return ____encoderDelay_8; }
	inline int32_t* get_address_of__encoderDelay_8() { return &____encoderDelay_8; }
	inline void set__encoderDelay_8(int32_t value)
	{
		____encoderDelay_8 = value;
	}
};

struct OpusEncoder_t289CD686765411D189B07CC8CEEE006E19E1B823_StaticFields
{
public:
	// System.ArraySegment`1<System.Byte> POpusCodec.OpusEncoder::EmptyBuffer
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___EmptyBuffer_7;

public:
	inline static int32_t get_offset_of_EmptyBuffer_7() { return static_cast<int32_t>(offsetof(OpusEncoder_t289CD686765411D189B07CC8CEEE006E19E1B823_StaticFields, ___EmptyBuffer_7)); }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  get_EmptyBuffer_7() const { return ___EmptyBuffer_7; }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * get_address_of_EmptyBuffer_7() { return &___EmptyBuffer_7; }
	inline void set_EmptyBuffer_7(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  value)
	{
		___EmptyBuffer_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___EmptyBuffer_7))->____array_0), (void*)NULL);
	}
};


// Photon.Voice.RemoteVoiceOptions
struct RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE 
{
public:
	// System.Action Photon.Voice.RemoteVoiceOptions::<OnRemoteVoiceRemoveAction>k__BackingField
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0;
	// Photon.Voice.IDecoder Photon.Voice.RemoteVoiceOptions::<Decoder>k__BackingField
	RuntimeObject* ___U3CDecoderU3Ek__BackingField_1;
	// Photon.Voice.ImageFormat Photon.Voice.RemoteVoiceOptions::<OutputImageFormat>k__BackingField
	int32_t ___U3COutputImageFormatU3Ek__BackingField_2;
	// Photon.Voice.RemoteVoiceOptions/OutputType Photon.Voice.RemoteVoiceOptions::<outType>k__BackingField
	int32_t ___U3CoutTypeU3Ek__BackingField_3;
	// System.Object Photon.Voice.RemoteVoiceOptions::<output>k__BackingField
	RuntimeObject * ___U3CoutputU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE, ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0() const { return ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0() { return &___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0; }
	inline void set_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDecoderU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE, ___U3CDecoderU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CDecoderU3Ek__BackingField_1() const { return ___U3CDecoderU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CDecoderU3Ek__BackingField_1() { return &___U3CDecoderU3Ek__BackingField_1; }
	inline void set_U3CDecoderU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CDecoderU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDecoderU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3COutputImageFormatU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE, ___U3COutputImageFormatU3Ek__BackingField_2)); }
	inline int32_t get_U3COutputImageFormatU3Ek__BackingField_2() const { return ___U3COutputImageFormatU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3COutputImageFormatU3Ek__BackingField_2() { return &___U3COutputImageFormatU3Ek__BackingField_2; }
	inline void set_U3COutputImageFormatU3Ek__BackingField_2(int32_t value)
	{
		___U3COutputImageFormatU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CoutTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE, ___U3CoutTypeU3Ek__BackingField_3)); }
	inline int32_t get_U3CoutTypeU3Ek__BackingField_3() const { return ___U3CoutTypeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CoutTypeU3Ek__BackingField_3() { return &___U3CoutTypeU3Ek__BackingField_3; }
	inline void set_U3CoutTypeU3Ek__BackingField_3(int32_t value)
	{
		___U3CoutTypeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CoutputU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE, ___U3CoutputU3Ek__BackingField_4)); }
	inline RuntimeObject * get_U3CoutputU3Ek__BackingField_4() const { return ___U3CoutputU3Ek__BackingField_4; }
	inline RuntimeObject ** get_address_of_U3CoutputU3Ek__BackingField_4() { return &___U3CoutputU3Ek__BackingField_4; }
	inline void set_U3CoutputU3Ek__BackingField_4(RuntimeObject * value)
	{
		___U3CoutputU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CoutputU3Ek__BackingField_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Photon.Voice.RemoteVoiceOptions
struct RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE_marshaled_pinvoke
{
	Il2CppMethodPointer ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0;
	RuntimeObject* ___U3CDecoderU3Ek__BackingField_1;
	int32_t ___U3COutputImageFormatU3Ek__BackingField_2;
	int32_t ___U3CoutTypeU3Ek__BackingField_3;
	Il2CppIUnknown* ___U3CoutputU3Ek__BackingField_4;
};
// Native definition for COM marshalling of Photon.Voice.RemoteVoiceOptions
struct RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE_marshaled_com
{
	Il2CppMethodPointer ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0;
	RuntimeObject* ___U3CDecoderU3Ek__BackingField_1;
	int32_t ___U3COutputImageFormatU3Ek__BackingField_2;
	int32_t ___U3CoutTypeU3Ek__BackingField_3;
	Il2CppIUnknown* ___U3CoutputU3Ek__BackingField_4;
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


// Photon.Voice.VoiceInfo
struct VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 
{
public:
	// Photon.Voice.Codec Photon.Voice.VoiceInfo::<Codec>k__BackingField
	int32_t ___U3CCodecU3Ek__BackingField_0;
	// System.Int32 Photon.Voice.VoiceInfo::<SamplingRate>k__BackingField
	int32_t ___U3CSamplingRateU3Ek__BackingField_1;
	// System.Int32 Photon.Voice.VoiceInfo::<Channels>k__BackingField
	int32_t ___U3CChannelsU3Ek__BackingField_2;
	// System.Int32 Photon.Voice.VoiceInfo::<FrameDurationUs>k__BackingField
	int32_t ___U3CFrameDurationUsU3Ek__BackingField_3;
	// System.Int32 Photon.Voice.VoiceInfo::<Bitrate>k__BackingField
	int32_t ___U3CBitrateU3Ek__BackingField_4;
	// System.Int32 Photon.Voice.VoiceInfo::<Width>k__BackingField
	int32_t ___U3CWidthU3Ek__BackingField_5;
	// System.Int32 Photon.Voice.VoiceInfo::<Height>k__BackingField
	int32_t ___U3CHeightU3Ek__BackingField_6;
	// System.Int32 Photon.Voice.VoiceInfo::<FPS>k__BackingField
	int32_t ___U3CFPSU3Ek__BackingField_7;
	// System.Int32 Photon.Voice.VoiceInfo::<KeyFrameInt>k__BackingField
	int32_t ___U3CKeyFrameIntU3Ek__BackingField_8;
	// System.Object Photon.Voice.VoiceInfo::<UserData>k__BackingField
	RuntimeObject * ___U3CUserDataU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CCodecU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3, ___U3CCodecU3Ek__BackingField_0)); }
	inline int32_t get_U3CCodecU3Ek__BackingField_0() const { return ___U3CCodecU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CCodecU3Ek__BackingField_0() { return &___U3CCodecU3Ek__BackingField_0; }
	inline void set_U3CCodecU3Ek__BackingField_0(int32_t value)
	{
		___U3CCodecU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CSamplingRateU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3, ___U3CSamplingRateU3Ek__BackingField_1)); }
	inline int32_t get_U3CSamplingRateU3Ek__BackingField_1() const { return ___U3CSamplingRateU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CSamplingRateU3Ek__BackingField_1() { return &___U3CSamplingRateU3Ek__BackingField_1; }
	inline void set_U3CSamplingRateU3Ek__BackingField_1(int32_t value)
	{
		___U3CSamplingRateU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CChannelsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3, ___U3CChannelsU3Ek__BackingField_2)); }
	inline int32_t get_U3CChannelsU3Ek__BackingField_2() const { return ___U3CChannelsU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CChannelsU3Ek__BackingField_2() { return &___U3CChannelsU3Ek__BackingField_2; }
	inline void set_U3CChannelsU3Ek__BackingField_2(int32_t value)
	{
		___U3CChannelsU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CFrameDurationUsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3, ___U3CFrameDurationUsU3Ek__BackingField_3)); }
	inline int32_t get_U3CFrameDurationUsU3Ek__BackingField_3() const { return ___U3CFrameDurationUsU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CFrameDurationUsU3Ek__BackingField_3() { return &___U3CFrameDurationUsU3Ek__BackingField_3; }
	inline void set_U3CFrameDurationUsU3Ek__BackingField_3(int32_t value)
	{
		___U3CFrameDurationUsU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CBitrateU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3, ___U3CBitrateU3Ek__BackingField_4)); }
	inline int32_t get_U3CBitrateU3Ek__BackingField_4() const { return ___U3CBitrateU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CBitrateU3Ek__BackingField_4() { return &___U3CBitrateU3Ek__BackingField_4; }
	inline void set_U3CBitrateU3Ek__BackingField_4(int32_t value)
	{
		___U3CBitrateU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CWidthU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3, ___U3CWidthU3Ek__BackingField_5)); }
	inline int32_t get_U3CWidthU3Ek__BackingField_5() const { return ___U3CWidthU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CWidthU3Ek__BackingField_5() { return &___U3CWidthU3Ek__BackingField_5; }
	inline void set_U3CWidthU3Ek__BackingField_5(int32_t value)
	{
		___U3CWidthU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CHeightU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3, ___U3CHeightU3Ek__BackingField_6)); }
	inline int32_t get_U3CHeightU3Ek__BackingField_6() const { return ___U3CHeightU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CHeightU3Ek__BackingField_6() { return &___U3CHeightU3Ek__BackingField_6; }
	inline void set_U3CHeightU3Ek__BackingField_6(int32_t value)
	{
		___U3CHeightU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CFPSU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3, ___U3CFPSU3Ek__BackingField_7)); }
	inline int32_t get_U3CFPSU3Ek__BackingField_7() const { return ___U3CFPSU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CFPSU3Ek__BackingField_7() { return &___U3CFPSU3Ek__BackingField_7; }
	inline void set_U3CFPSU3Ek__BackingField_7(int32_t value)
	{
		___U3CFPSU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CKeyFrameIntU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3, ___U3CKeyFrameIntU3Ek__BackingField_8)); }
	inline int32_t get_U3CKeyFrameIntU3Ek__BackingField_8() const { return ___U3CKeyFrameIntU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CKeyFrameIntU3Ek__BackingField_8() { return &___U3CKeyFrameIntU3Ek__BackingField_8; }
	inline void set_U3CKeyFrameIntU3Ek__BackingField_8(int32_t value)
	{
		___U3CKeyFrameIntU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CUserDataU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3, ___U3CUserDataU3Ek__BackingField_9)); }
	inline RuntimeObject * get_U3CUserDataU3Ek__BackingField_9() const { return ___U3CUserDataU3Ek__BackingField_9; }
	inline RuntimeObject ** get_address_of_U3CUserDataU3Ek__BackingField_9() { return &___U3CUserDataU3Ek__BackingField_9; }
	inline void set_U3CUserDataU3Ek__BackingField_9(RuntimeObject * value)
	{
		___U3CUserDataU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUserDataU3Ek__BackingField_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Photon.Voice.VoiceInfo
struct VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3_marshaled_pinvoke
{
	int32_t ___U3CCodecU3Ek__BackingField_0;
	int32_t ___U3CSamplingRateU3Ek__BackingField_1;
	int32_t ___U3CChannelsU3Ek__BackingField_2;
	int32_t ___U3CFrameDurationUsU3Ek__BackingField_3;
	int32_t ___U3CBitrateU3Ek__BackingField_4;
	int32_t ___U3CWidthU3Ek__BackingField_5;
	int32_t ___U3CHeightU3Ek__BackingField_6;
	int32_t ___U3CFPSU3Ek__BackingField_7;
	int32_t ___U3CKeyFrameIntU3Ek__BackingField_8;
	Il2CppIUnknown* ___U3CUserDataU3Ek__BackingField_9;
};
// Native definition for COM marshalling of Photon.Voice.VoiceInfo
struct VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3_marshaled_com
{
	int32_t ___U3CCodecU3Ek__BackingField_0;
	int32_t ___U3CSamplingRateU3Ek__BackingField_1;
	int32_t ___U3CChannelsU3Ek__BackingField_2;
	int32_t ___U3CFrameDurationUsU3Ek__BackingField_3;
	int32_t ___U3CBitrateU3Ek__BackingField_4;
	int32_t ___U3CWidthU3Ek__BackingField_5;
	int32_t ___U3CHeightU3Ek__BackingField_6;
	int32_t ___U3CFPSU3Ek__BackingField_7;
	int32_t ___U3CKeyFrameIntU3Ek__BackingField_8;
	Il2CppIUnknown* ___U3CUserDataU3Ek__BackingField_9;
};

// Photon.Voice.AudioUtil/VoiceDetectorShort
struct VoiceDetectorShort_tEB57780C72B1E5D60E7584C80B244E40B4C0DFDB  : public VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4
{
public:

public:
};


// Photon.Voice.OpusCodec/EncoderFloat
struct EncoderFloat_t59F828BE852C2C5049643A7DA8A76AE0DFCD35D8  : public Encoder_1_t439BF0A94F0F3694C5AF8B5EC4C91CBA46C4C620
{
public:

public:
};


// Photon.Voice.OpusCodec/EncoderShort
struct EncoderShort_t1B066515A9C7163E7B94B8FEA3E07B88303D687B  : public Encoder_1_t1835B5877F1B49B43B635F05E7C29D83CC9C3EF2
{
public:

public:
};


// Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40
struct U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B  : public RuntimeObject
{
public:
	// System.Int32 Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Photon.Voice.RemoteVoiceInfo Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::<>2__current
	RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A * ___U3CU3E2__current_1;
	// System.Int32 Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Photon.Voice.VoiceClient Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::<>4__this
	VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * ___U3CU3E4__this_3;
	// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>> Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::<>7__wrap1
	Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B  ___U3CU3E7__wrap1_4;
	// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>> Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::<playerVoices>5__3
	KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99  ___U3CplayerVoicesU3E5__3_5;
	// System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,Photon.Voice.RemoteVoice> Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::<>7__wrap3
	Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E  ___U3CU3E7__wrap3_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B, ___U3CU3E2__current_1)); }
	inline RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B, ___U3CU3E4__this_3)); }
	inline VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_4() { return static_cast<int32_t>(offsetof(U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B, ___U3CU3E7__wrap1_4)); }
	inline Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B  get_U3CU3E7__wrap1_4() const { return ___U3CU3E7__wrap1_4; }
	inline Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B * get_address_of_U3CU3E7__wrap1_4() { return &___U3CU3E7__wrap1_4; }
	inline void set_U3CU3E7__wrap1_4(Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B  value)
	{
		___U3CU3E7__wrap1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_4))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap1_4))->___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CplayerVoicesU3E5__3_5() { return static_cast<int32_t>(offsetof(U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B, ___U3CplayerVoicesU3E5__3_5)); }
	inline KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99  get_U3CplayerVoicesU3E5__3_5() const { return ___U3CplayerVoicesU3E5__3_5; }
	inline KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99 * get_address_of_U3CplayerVoicesU3E5__3_5() { return &___U3CplayerVoicesU3E5__3_5; }
	inline void set_U3CplayerVoicesU3E5__3_5(KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99  value)
	{
		___U3CplayerVoicesU3E5__3_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CplayerVoicesU3E5__3_5))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap3_6() { return static_cast<int32_t>(offsetof(U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B, ___U3CU3E7__wrap3_6)); }
	inline Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E  get_U3CU3E7__wrap3_6() const { return ___U3CU3E7__wrap3_6; }
	inline Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E * get_address_of_U3CU3E7__wrap3_6() { return &___U3CU3E7__wrap3_6; }
	inline void set_U3CU3E7__wrap3_6(Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E  value)
	{
		___U3CU3E7__wrap3_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap3_6))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap3_6))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// Photon.Voice.LocalVoice
struct LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9  : public RuntimeObject
{
public:
	// System.Byte Photon.Voice.LocalVoice::<InterestGroup>k__BackingField
	uint8_t ___U3CInterestGroupU3Ek__BackingField_1;
	// System.Boolean Photon.Voice.LocalVoice::transmitEnabled
	bool ___transmitEnabled_2;
	// System.Int32 Photon.Voice.LocalVoice::<FramesSent>k__BackingField
	int32_t ___U3CFramesSentU3Ek__BackingField_3;
	// System.Int32 Photon.Voice.LocalVoice::<FramesSentBytes>k__BackingField
	int32_t ___U3CFramesSentBytesU3Ek__BackingField_4;
	// System.Boolean Photon.Voice.LocalVoice::<Reliable>k__BackingField
	bool ___U3CReliableU3Ek__BackingField_5;
	// System.Boolean Photon.Voice.LocalVoice::<Encrypt>k__BackingField
	bool ___U3CEncryptU3Ek__BackingField_6;
	// Photon.Voice.IServiceable Photon.Voice.LocalVoice::<LocalUserServiceable>k__BackingField
	RuntimeObject* ___U3CLocalUserServiceableU3Ek__BackingField_7;
	// System.Boolean Photon.Voice.LocalVoice::debugEchoMode
	bool ___debugEchoMode_8;
	// Photon.Voice.VoiceInfo Photon.Voice.LocalVoice::info
	VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  ___info_9;
	// Photon.Voice.IEncoder Photon.Voice.LocalVoice::encoder
	RuntimeObject* ___encoder_10;
	// System.Byte Photon.Voice.LocalVoice::id
	uint8_t ___id_11;
	// System.Int32 Photon.Voice.LocalVoice::channelId
	int32_t ___channelId_12;
	// System.Byte Photon.Voice.LocalVoice::evNumber
	uint8_t ___evNumber_13;
	// Photon.Voice.VoiceClient Photon.Voice.LocalVoice::voiceClient
	VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * ___voiceClient_14;
	// System.ArraySegment`1<System.Byte> Photon.Voice.LocalVoice::configFrame
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___configFrame_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Photon.Voice.LocalVoice::disposed
	bool ___disposed_16;
	// System.Object Photon.Voice.LocalVoice::disposeLock
	RuntimeObject * ___disposeLock_17;
	// System.Int32 Photon.Voice.LocalVoice::lastTransmitTime
	int32_t ___lastTransmitTime_19;
	// System.Collections.Generic.Dictionary`2<System.Byte,System.Int32> Photon.Voice.LocalVoice::eventTimestamps
	Dictionary_2_t4A0CF6A7FCEF18F04F5F245859A861E8BE4BFE75 * ___eventTimestamps_20;
	// Photon.Voice.SpacingProfile Photon.Voice.LocalVoice::sendSpacingProfile
	SpacingProfile_tD2728C7357F90CDEC875C74BF6D2161BD3CB2A68 * ___sendSpacingProfile_21;

public:
	inline static int32_t get_offset_of_U3CInterestGroupU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___U3CInterestGroupU3Ek__BackingField_1)); }
	inline uint8_t get_U3CInterestGroupU3Ek__BackingField_1() const { return ___U3CInterestGroupU3Ek__BackingField_1; }
	inline uint8_t* get_address_of_U3CInterestGroupU3Ek__BackingField_1() { return &___U3CInterestGroupU3Ek__BackingField_1; }
	inline void set_U3CInterestGroupU3Ek__BackingField_1(uint8_t value)
	{
		___U3CInterestGroupU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_transmitEnabled_2() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___transmitEnabled_2)); }
	inline bool get_transmitEnabled_2() const { return ___transmitEnabled_2; }
	inline bool* get_address_of_transmitEnabled_2() { return &___transmitEnabled_2; }
	inline void set_transmitEnabled_2(bool value)
	{
		___transmitEnabled_2 = value;
	}

	inline static int32_t get_offset_of_U3CFramesSentU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___U3CFramesSentU3Ek__BackingField_3)); }
	inline int32_t get_U3CFramesSentU3Ek__BackingField_3() const { return ___U3CFramesSentU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CFramesSentU3Ek__BackingField_3() { return &___U3CFramesSentU3Ek__BackingField_3; }
	inline void set_U3CFramesSentU3Ek__BackingField_3(int32_t value)
	{
		___U3CFramesSentU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CFramesSentBytesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___U3CFramesSentBytesU3Ek__BackingField_4)); }
	inline int32_t get_U3CFramesSentBytesU3Ek__BackingField_4() const { return ___U3CFramesSentBytesU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CFramesSentBytesU3Ek__BackingField_4() { return &___U3CFramesSentBytesU3Ek__BackingField_4; }
	inline void set_U3CFramesSentBytesU3Ek__BackingField_4(int32_t value)
	{
		___U3CFramesSentBytesU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CReliableU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___U3CReliableU3Ek__BackingField_5)); }
	inline bool get_U3CReliableU3Ek__BackingField_5() const { return ___U3CReliableU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CReliableU3Ek__BackingField_5() { return &___U3CReliableU3Ek__BackingField_5; }
	inline void set_U3CReliableU3Ek__BackingField_5(bool value)
	{
		___U3CReliableU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CEncryptU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___U3CEncryptU3Ek__BackingField_6)); }
	inline bool get_U3CEncryptU3Ek__BackingField_6() const { return ___U3CEncryptU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CEncryptU3Ek__BackingField_6() { return &___U3CEncryptU3Ek__BackingField_6; }
	inline void set_U3CEncryptU3Ek__BackingField_6(bool value)
	{
		___U3CEncryptU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CLocalUserServiceableU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___U3CLocalUserServiceableU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CLocalUserServiceableU3Ek__BackingField_7() const { return ___U3CLocalUserServiceableU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CLocalUserServiceableU3Ek__BackingField_7() { return &___U3CLocalUserServiceableU3Ek__BackingField_7; }
	inline void set_U3CLocalUserServiceableU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CLocalUserServiceableU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLocalUserServiceableU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_debugEchoMode_8() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___debugEchoMode_8)); }
	inline bool get_debugEchoMode_8() const { return ___debugEchoMode_8; }
	inline bool* get_address_of_debugEchoMode_8() { return &___debugEchoMode_8; }
	inline void set_debugEchoMode_8(bool value)
	{
		___debugEchoMode_8 = value;
	}

	inline static int32_t get_offset_of_info_9() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___info_9)); }
	inline VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  get_info_9() const { return ___info_9; }
	inline VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 * get_address_of_info_9() { return &___info_9; }
	inline void set_info_9(VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  value)
	{
		___info_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___info_9))->___U3CUserDataU3Ek__BackingField_9), (void*)NULL);
	}

	inline static int32_t get_offset_of_encoder_10() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___encoder_10)); }
	inline RuntimeObject* get_encoder_10() const { return ___encoder_10; }
	inline RuntimeObject** get_address_of_encoder_10() { return &___encoder_10; }
	inline void set_encoder_10(RuntimeObject* value)
	{
		___encoder_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoder_10), (void*)value);
	}

	inline static int32_t get_offset_of_id_11() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___id_11)); }
	inline uint8_t get_id_11() const { return ___id_11; }
	inline uint8_t* get_address_of_id_11() { return &___id_11; }
	inline void set_id_11(uint8_t value)
	{
		___id_11 = value;
	}

	inline static int32_t get_offset_of_channelId_12() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___channelId_12)); }
	inline int32_t get_channelId_12() const { return ___channelId_12; }
	inline int32_t* get_address_of_channelId_12() { return &___channelId_12; }
	inline void set_channelId_12(int32_t value)
	{
		___channelId_12 = value;
	}

	inline static int32_t get_offset_of_evNumber_13() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___evNumber_13)); }
	inline uint8_t get_evNumber_13() const { return ___evNumber_13; }
	inline uint8_t* get_address_of_evNumber_13() { return &___evNumber_13; }
	inline void set_evNumber_13(uint8_t value)
	{
		___evNumber_13 = value;
	}

	inline static int32_t get_offset_of_voiceClient_14() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___voiceClient_14)); }
	inline VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * get_voiceClient_14() const { return ___voiceClient_14; }
	inline VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E ** get_address_of_voiceClient_14() { return &___voiceClient_14; }
	inline void set_voiceClient_14(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * value)
	{
		___voiceClient_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceClient_14), (void*)value);
	}

	inline static int32_t get_offset_of_configFrame_15() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___configFrame_15)); }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  get_configFrame_15() const { return ___configFrame_15; }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * get_address_of_configFrame_15() { return &___configFrame_15; }
	inline void set_configFrame_15(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  value)
	{
		___configFrame_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___configFrame_15))->____array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_disposed_16() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___disposed_16)); }
	inline bool get_disposed_16() const { return ___disposed_16; }
	inline bool* get_address_of_disposed_16() { return &___disposed_16; }
	inline void set_disposed_16(bool value)
	{
		___disposed_16 = value;
	}

	inline static int32_t get_offset_of_disposeLock_17() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___disposeLock_17)); }
	inline RuntimeObject * get_disposeLock_17() const { return ___disposeLock_17; }
	inline RuntimeObject ** get_address_of_disposeLock_17() { return &___disposeLock_17; }
	inline void set_disposeLock_17(RuntimeObject * value)
	{
		___disposeLock_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___disposeLock_17), (void*)value);
	}

	inline static int32_t get_offset_of_lastTransmitTime_19() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___lastTransmitTime_19)); }
	inline int32_t get_lastTransmitTime_19() const { return ___lastTransmitTime_19; }
	inline int32_t* get_address_of_lastTransmitTime_19() { return &___lastTransmitTime_19; }
	inline void set_lastTransmitTime_19(int32_t value)
	{
		___lastTransmitTime_19 = value;
	}

	inline static int32_t get_offset_of_eventTimestamps_20() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___eventTimestamps_20)); }
	inline Dictionary_2_t4A0CF6A7FCEF18F04F5F245859A861E8BE4BFE75 * get_eventTimestamps_20() const { return ___eventTimestamps_20; }
	inline Dictionary_2_t4A0CF6A7FCEF18F04F5F245859A861E8BE4BFE75 ** get_address_of_eventTimestamps_20() { return &___eventTimestamps_20; }
	inline void set_eventTimestamps_20(Dictionary_2_t4A0CF6A7FCEF18F04F5F245859A861E8BE4BFE75 * value)
	{
		___eventTimestamps_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventTimestamps_20), (void*)value);
	}

	inline static int32_t get_offset_of_sendSpacingProfile_21() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___sendSpacingProfile_21)); }
	inline SpacingProfile_tD2728C7357F90CDEC875C74BF6D2161BD3CB2A68 * get_sendSpacingProfile_21() const { return ___sendSpacingProfile_21; }
	inline SpacingProfile_tD2728C7357F90CDEC875C74BF6D2161BD3CB2A68 ** get_address_of_sendSpacingProfile_21() { return &___sendSpacingProfile_21; }
	inline void set_sendSpacingProfile_21(SpacingProfile_tD2728C7357F90CDEC875C74BF6D2161BD3CB2A68 * value)
	{
		___sendSpacingProfile_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sendSpacingProfile_21), (void*)value);
	}
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Photon.Voice.RemoteVoice
struct RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87  : public RuntimeObject
{
public:
	// Photon.Voice.VoiceInfo Photon.Voice.RemoteVoice::<Info>k__BackingField
	VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  ___U3CInfoU3Ek__BackingField_0;
	// Photon.Voice.RemoteVoiceOptions Photon.Voice.RemoteVoice::options
	RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE  ___options_1;
	// System.Int32 Photon.Voice.RemoteVoice::channelId
	int32_t ___channelId_2;
	// System.Int32 Photon.Voice.RemoteVoice::<DelayFrames>k__BackingField
	int32_t ___U3CDelayFramesU3Ek__BackingField_3;
	// System.Int32 Photon.Voice.RemoteVoice::playerId
	int32_t ___playerId_4;
	// System.Byte Photon.Voice.RemoteVoice::voiceId
	uint8_t ___voiceId_5;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Photon.Voice.RemoteVoice::disposed
	bool ___disposed_6;
	// System.Object Photon.Voice.RemoteVoice::disposeLock
	RuntimeObject * ___disposeLock_7;
	// Photon.Voice.SpacingProfile Photon.Voice.RemoteVoice::receiveSpacingProfile
	SpacingProfile_tD2728C7357F90CDEC875C74BF6D2161BD3CB2A68 * ___receiveSpacingProfile_8;
	// System.Byte Photon.Voice.RemoteVoice::lastEvNumber
	uint8_t ___lastEvNumber_9;
	// Photon.Voice.VoiceClient Photon.Voice.RemoteVoice::voiceClient
	VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * ___voiceClient_10;
	// System.Collections.Generic.Queue`1<Photon.Voice.FrameBuffer> Photon.Voice.RemoteVoice::frameQueue
	Queue_1_t45D1136463723E6F4A40C4DC038CA2F6908264B8 * ___frameQueue_11;
	// System.Threading.AutoResetEvent Photon.Voice.RemoteVoice::frameQueueReady
	AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * ___frameQueueReady_12;
	// System.Int32 Photon.Voice.RemoteVoice::flushingFramePosInQueue
	int32_t ___flushingFramePosInQueue_13;
	// Photon.Voice.FrameBuffer Photon.Voice.RemoteVoice::nullFrame
	FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77  ___nullFrame_14;

public:
	inline static int32_t get_offset_of_U3CInfoU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87, ___U3CInfoU3Ek__BackingField_0)); }
	inline VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  get_U3CInfoU3Ek__BackingField_0() const { return ___U3CInfoU3Ek__BackingField_0; }
	inline VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 * get_address_of_U3CInfoU3Ek__BackingField_0() { return &___U3CInfoU3Ek__BackingField_0; }
	inline void set_U3CInfoU3Ek__BackingField_0(VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  value)
	{
		___U3CInfoU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CInfoU3Ek__BackingField_0))->___U3CUserDataU3Ek__BackingField_9), (void*)NULL);
	}

	inline static int32_t get_offset_of_options_1() { return static_cast<int32_t>(offsetof(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87, ___options_1)); }
	inline RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE  get_options_1() const { return ___options_1; }
	inline RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE * get_address_of_options_1() { return &___options_1; }
	inline void set_options_1(RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE  value)
	{
		___options_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___options_1))->___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___options_1))->___U3CDecoderU3Ek__BackingField_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___options_1))->___U3CoutputU3Ek__BackingField_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_channelId_2() { return static_cast<int32_t>(offsetof(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87, ___channelId_2)); }
	inline int32_t get_channelId_2() const { return ___channelId_2; }
	inline int32_t* get_address_of_channelId_2() { return &___channelId_2; }
	inline void set_channelId_2(int32_t value)
	{
		___channelId_2 = value;
	}

	inline static int32_t get_offset_of_U3CDelayFramesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87, ___U3CDelayFramesU3Ek__BackingField_3)); }
	inline int32_t get_U3CDelayFramesU3Ek__BackingField_3() const { return ___U3CDelayFramesU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CDelayFramesU3Ek__BackingField_3() { return &___U3CDelayFramesU3Ek__BackingField_3; }
	inline void set_U3CDelayFramesU3Ek__BackingField_3(int32_t value)
	{
		___U3CDelayFramesU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_playerId_4() { return static_cast<int32_t>(offsetof(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87, ___playerId_4)); }
	inline int32_t get_playerId_4() const { return ___playerId_4; }
	inline int32_t* get_address_of_playerId_4() { return &___playerId_4; }
	inline void set_playerId_4(int32_t value)
	{
		___playerId_4 = value;
	}

	inline static int32_t get_offset_of_voiceId_5() { return static_cast<int32_t>(offsetof(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87, ___voiceId_5)); }
	inline uint8_t get_voiceId_5() const { return ___voiceId_5; }
	inline uint8_t* get_address_of_voiceId_5() { return &___voiceId_5; }
	inline void set_voiceId_5(uint8_t value)
	{
		___voiceId_5 = value;
	}

	inline static int32_t get_offset_of_disposed_6() { return static_cast<int32_t>(offsetof(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87, ___disposed_6)); }
	inline bool get_disposed_6() const { return ___disposed_6; }
	inline bool* get_address_of_disposed_6() { return &___disposed_6; }
	inline void set_disposed_6(bool value)
	{
		___disposed_6 = value;
	}

	inline static int32_t get_offset_of_disposeLock_7() { return static_cast<int32_t>(offsetof(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87, ___disposeLock_7)); }
	inline RuntimeObject * get_disposeLock_7() const { return ___disposeLock_7; }
	inline RuntimeObject ** get_address_of_disposeLock_7() { return &___disposeLock_7; }
	inline void set_disposeLock_7(RuntimeObject * value)
	{
		___disposeLock_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___disposeLock_7), (void*)value);
	}

	inline static int32_t get_offset_of_receiveSpacingProfile_8() { return static_cast<int32_t>(offsetof(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87, ___receiveSpacingProfile_8)); }
	inline SpacingProfile_tD2728C7357F90CDEC875C74BF6D2161BD3CB2A68 * get_receiveSpacingProfile_8() const { return ___receiveSpacingProfile_8; }
	inline SpacingProfile_tD2728C7357F90CDEC875C74BF6D2161BD3CB2A68 ** get_address_of_receiveSpacingProfile_8() { return &___receiveSpacingProfile_8; }
	inline void set_receiveSpacingProfile_8(SpacingProfile_tD2728C7357F90CDEC875C74BF6D2161BD3CB2A68 * value)
	{
		___receiveSpacingProfile_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___receiveSpacingProfile_8), (void*)value);
	}

	inline static int32_t get_offset_of_lastEvNumber_9() { return static_cast<int32_t>(offsetof(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87, ___lastEvNumber_9)); }
	inline uint8_t get_lastEvNumber_9() const { return ___lastEvNumber_9; }
	inline uint8_t* get_address_of_lastEvNumber_9() { return &___lastEvNumber_9; }
	inline void set_lastEvNumber_9(uint8_t value)
	{
		___lastEvNumber_9 = value;
	}

	inline static int32_t get_offset_of_voiceClient_10() { return static_cast<int32_t>(offsetof(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87, ___voiceClient_10)); }
	inline VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * get_voiceClient_10() const { return ___voiceClient_10; }
	inline VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E ** get_address_of_voiceClient_10() { return &___voiceClient_10; }
	inline void set_voiceClient_10(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * value)
	{
		___voiceClient_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceClient_10), (void*)value);
	}

	inline static int32_t get_offset_of_frameQueue_11() { return static_cast<int32_t>(offsetof(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87, ___frameQueue_11)); }
	inline Queue_1_t45D1136463723E6F4A40C4DC038CA2F6908264B8 * get_frameQueue_11() const { return ___frameQueue_11; }
	inline Queue_1_t45D1136463723E6F4A40C4DC038CA2F6908264B8 ** get_address_of_frameQueue_11() { return &___frameQueue_11; }
	inline void set_frameQueue_11(Queue_1_t45D1136463723E6F4A40C4DC038CA2F6908264B8 * value)
	{
		___frameQueue_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameQueue_11), (void*)value);
	}

	inline static int32_t get_offset_of_frameQueueReady_12() { return static_cast<int32_t>(offsetof(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87, ___frameQueueReady_12)); }
	inline AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * get_frameQueueReady_12() const { return ___frameQueueReady_12; }
	inline AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D ** get_address_of_frameQueueReady_12() { return &___frameQueueReady_12; }
	inline void set_frameQueueReady_12(AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * value)
	{
		___frameQueueReady_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameQueueReady_12), (void*)value);
	}

	inline static int32_t get_offset_of_flushingFramePosInQueue_13() { return static_cast<int32_t>(offsetof(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87, ___flushingFramePosInQueue_13)); }
	inline int32_t get_flushingFramePosInQueue_13() const { return ___flushingFramePosInQueue_13; }
	inline int32_t* get_address_of_flushingFramePosInQueue_13() { return &___flushingFramePosInQueue_13; }
	inline void set_flushingFramePosInQueue_13(int32_t value)
	{
		___flushingFramePosInQueue_13 = value;
	}

	inline static int32_t get_offset_of_nullFrame_14() { return static_cast<int32_t>(offsetof(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87, ___nullFrame_14)); }
	inline FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77  get_nullFrame_14() const { return ___nullFrame_14; }
	inline FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77 * get_address_of_nullFrame_14() { return &___nullFrame_14; }
	inline void set_nullFrame_14(FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77  value)
	{
		___nullFrame_14 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___nullFrame_14))->___array_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___nullFrame_14))->___release_3), (void*)NULL);
		#endif
	}
};


// Photon.Voice.RemoteVoiceInfo
struct RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A  : public RuntimeObject
{
public:
	// Photon.Voice.VoiceInfo Photon.Voice.RemoteVoiceInfo::<Info>k__BackingField
	VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  ___U3CInfoU3Ek__BackingField_0;
	// System.Int32 Photon.Voice.RemoteVoiceInfo::<ChannelId>k__BackingField
	int32_t ___U3CChannelIdU3Ek__BackingField_1;
	// System.Int32 Photon.Voice.RemoteVoiceInfo::<PlayerId>k__BackingField
	int32_t ___U3CPlayerIdU3Ek__BackingField_2;
	// System.Byte Photon.Voice.RemoteVoiceInfo::<VoiceId>k__BackingField
	uint8_t ___U3CVoiceIdU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CInfoU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A, ___U3CInfoU3Ek__BackingField_0)); }
	inline VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  get_U3CInfoU3Ek__BackingField_0() const { return ___U3CInfoU3Ek__BackingField_0; }
	inline VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 * get_address_of_U3CInfoU3Ek__BackingField_0() { return &___U3CInfoU3Ek__BackingField_0; }
	inline void set_U3CInfoU3Ek__BackingField_0(VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  value)
	{
		___U3CInfoU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CInfoU3Ek__BackingField_0))->___U3CUserDataU3Ek__BackingField_9), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CChannelIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A, ___U3CChannelIdU3Ek__BackingField_1)); }
	inline int32_t get_U3CChannelIdU3Ek__BackingField_1() const { return ___U3CChannelIdU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CChannelIdU3Ek__BackingField_1() { return &___U3CChannelIdU3Ek__BackingField_1; }
	inline void set_U3CChannelIdU3Ek__BackingField_1(int32_t value)
	{
		___U3CChannelIdU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CPlayerIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A, ___U3CPlayerIdU3Ek__BackingField_2)); }
	inline int32_t get_U3CPlayerIdU3Ek__BackingField_2() const { return ___U3CPlayerIdU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CPlayerIdU3Ek__BackingField_2() { return &___U3CPlayerIdU3Ek__BackingField_2; }
	inline void set_U3CPlayerIdU3Ek__BackingField_2(int32_t value)
	{
		___U3CPlayerIdU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CVoiceIdU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A, ___U3CVoiceIdU3Ek__BackingField_3)); }
	inline uint8_t get_U3CVoiceIdU3Ek__BackingField_3() const { return ___U3CVoiceIdU3Ek__BackingField_3; }
	inline uint8_t* get_address_of_U3CVoiceIdU3Ek__BackingField_3() { return &___U3CVoiceIdU3Ek__BackingField_3; }
	inline void set_U3CVoiceIdU3Ek__BackingField_3(uint8_t value)
	{
		___U3CVoiceIdU3Ek__BackingField_3 = value;
	}
};


// Photon.Voice.VoiceClient/<>c__DisplayClass47_0
struct U3CU3Ec__DisplayClass47_0_t6861F43F19BFEE66771862537EC2921B615AD428  : public RuntimeObject
{
public:
	// Photon.Voice.VoiceClient Photon.Voice.VoiceClient/<>c__DisplayClass47_0::<>4__this
	VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * ___U3CU3E4__this_0;
	// Photon.Voice.IEncoder Photon.Voice.VoiceClient/<>c__DisplayClass47_0::encoder
	RuntimeObject* ___encoder_1;
	// Photon.Voice.VoiceInfo Photon.Voice.VoiceClient/<>c__DisplayClass47_0::voiceInfo
	VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  ___voiceInfo_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass47_0_t6861F43F19BFEE66771862537EC2921B615AD428, ___U3CU3E4__this_0)); }
	inline VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_encoder_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass47_0_t6861F43F19BFEE66771862537EC2921B615AD428, ___encoder_1)); }
	inline RuntimeObject* get_encoder_1() const { return ___encoder_1; }
	inline RuntimeObject** get_address_of_encoder_1() { return &___encoder_1; }
	inline void set_encoder_1(RuntimeObject* value)
	{
		___encoder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoder_1), (void*)value);
	}

	inline static int32_t get_offset_of_voiceInfo_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass47_0_t6861F43F19BFEE66771862537EC2921B615AD428, ___voiceInfo_2)); }
	inline VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  get_voiceInfo_2() const { return ___voiceInfo_2; }
	inline VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 * get_address_of_voiceInfo_2() { return &___voiceInfo_2; }
	inline void set_voiceInfo_2(VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  value)
	{
		___voiceInfo_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___voiceInfo_2))->___U3CUserDataU3Ek__BackingField_9), (void*)NULL);
	}
};


// Photon.Voice.VoiceClient/RemoteVoiceInfoDelegate
struct RemoteVoiceInfoDelegate_tAFE566F65BB6CDF850E29AFE6BE771196D020D13  : public MulticastDelegate_t
{
public:

public:
};


// Photon.Voice.LocalVoiceFramedBase
struct LocalVoiceFramedBase_t44C87DD9E75F9A7A763407E2C66FE744BDCB7471  : public LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9
{
public:
	// System.Int32 Photon.Voice.LocalVoiceFramedBase::<FrameSize>k__BackingField
	int32_t ___U3CFrameSizeU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_U3CFrameSizeU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(LocalVoiceFramedBase_t44C87DD9E75F9A7A763407E2C66FE744BDCB7471, ___U3CFrameSizeU3Ek__BackingField_22)); }
	inline int32_t get_U3CFrameSizeU3Ek__BackingField_22() const { return ___U3CFrameSizeU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CFrameSizeU3Ek__BackingField_22() { return &___U3CFrameSizeU3Ek__BackingField_22; }
	inline void set_U3CFrameSizeU3Ek__BackingField_22(int32_t value)
	{
		___U3CFrameSizeU3Ek__BackingField_22 = value;
	}
};


// Photon.Voice.LocalVoiceFramed`1<System.Int16>
struct LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664  : public LocalVoiceFramedBase_t44C87DD9E75F9A7A763407E2C66FE744BDCB7471
{
public:
	// Photon.Voice.Framer`1<T> Photon.Voice.LocalVoiceFramed`1::framer
	Framer_1_t5FBBEF15B9AB70C75546947448D1FFC19D4F7978 * ___framer_23;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::preProcessorsCnt
	int32_t ___preProcessorsCnt_24;
	// System.Collections.Generic.List`1<Photon.Voice.IProcessor`1<T>> Photon.Voice.LocalVoiceFramed`1::processors
	List_1_t2B969941D952B3C04034F2CC42555A20E416F5EC * ___processors_25;
	// System.Boolean Photon.Voice.LocalVoiceFramed`1::dataEncodeThreadStarted
	bool ___dataEncodeThreadStarted_26;
	// System.Collections.Generic.Queue`1<T[]> Photon.Voice.LocalVoiceFramed`1::pushDataQueue
	Queue_1_t4A2620F8C38A3EF76782E492059C52B76FCF17D3 * ___pushDataQueue_27;
	// System.Threading.AutoResetEvent Photon.Voice.LocalVoiceFramed`1::pushDataQueueReady
	AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * ___pushDataQueueReady_28;
	// Photon.Voice.FactoryPrimitiveArrayPool`1<T> Photon.Voice.LocalVoiceFramed`1::bufferFactory
	FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2 * ___bufferFactory_29;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::framesSkippedNextLog
	int32_t ___framesSkippedNextLog_30;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::framesSkipped
	int32_t ___framesSkipped_31;
	// System.Boolean Photon.Voice.LocalVoiceFramed`1::exitThread
	bool ___exitThread_32;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::processNullFramesCnt
	int32_t ___processNullFramesCnt_33;

public:
	inline static int32_t get_offset_of_framer_23() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664, ___framer_23)); }
	inline Framer_1_t5FBBEF15B9AB70C75546947448D1FFC19D4F7978 * get_framer_23() const { return ___framer_23; }
	inline Framer_1_t5FBBEF15B9AB70C75546947448D1FFC19D4F7978 ** get_address_of_framer_23() { return &___framer_23; }
	inline void set_framer_23(Framer_1_t5FBBEF15B9AB70C75546947448D1FFC19D4F7978 * value)
	{
		___framer_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___framer_23), (void*)value);
	}

	inline static int32_t get_offset_of_preProcessorsCnt_24() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664, ___preProcessorsCnt_24)); }
	inline int32_t get_preProcessorsCnt_24() const { return ___preProcessorsCnt_24; }
	inline int32_t* get_address_of_preProcessorsCnt_24() { return &___preProcessorsCnt_24; }
	inline void set_preProcessorsCnt_24(int32_t value)
	{
		___preProcessorsCnt_24 = value;
	}

	inline static int32_t get_offset_of_processors_25() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664, ___processors_25)); }
	inline List_1_t2B969941D952B3C04034F2CC42555A20E416F5EC * get_processors_25() const { return ___processors_25; }
	inline List_1_t2B969941D952B3C04034F2CC42555A20E416F5EC ** get_address_of_processors_25() { return &___processors_25; }
	inline void set_processors_25(List_1_t2B969941D952B3C04034F2CC42555A20E416F5EC * value)
	{
		___processors_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___processors_25), (void*)value);
	}

	inline static int32_t get_offset_of_dataEncodeThreadStarted_26() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664, ___dataEncodeThreadStarted_26)); }
	inline bool get_dataEncodeThreadStarted_26() const { return ___dataEncodeThreadStarted_26; }
	inline bool* get_address_of_dataEncodeThreadStarted_26() { return &___dataEncodeThreadStarted_26; }
	inline void set_dataEncodeThreadStarted_26(bool value)
	{
		___dataEncodeThreadStarted_26 = value;
	}

	inline static int32_t get_offset_of_pushDataQueue_27() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664, ___pushDataQueue_27)); }
	inline Queue_1_t4A2620F8C38A3EF76782E492059C52B76FCF17D3 * get_pushDataQueue_27() const { return ___pushDataQueue_27; }
	inline Queue_1_t4A2620F8C38A3EF76782E492059C52B76FCF17D3 ** get_address_of_pushDataQueue_27() { return &___pushDataQueue_27; }
	inline void set_pushDataQueue_27(Queue_1_t4A2620F8C38A3EF76782E492059C52B76FCF17D3 * value)
	{
		___pushDataQueue_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pushDataQueue_27), (void*)value);
	}

	inline static int32_t get_offset_of_pushDataQueueReady_28() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664, ___pushDataQueueReady_28)); }
	inline AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * get_pushDataQueueReady_28() const { return ___pushDataQueueReady_28; }
	inline AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D ** get_address_of_pushDataQueueReady_28() { return &___pushDataQueueReady_28; }
	inline void set_pushDataQueueReady_28(AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * value)
	{
		___pushDataQueueReady_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pushDataQueueReady_28), (void*)value);
	}

	inline static int32_t get_offset_of_bufferFactory_29() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664, ___bufferFactory_29)); }
	inline FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2 * get_bufferFactory_29() const { return ___bufferFactory_29; }
	inline FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2 ** get_address_of_bufferFactory_29() { return &___bufferFactory_29; }
	inline void set_bufferFactory_29(FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2 * value)
	{
		___bufferFactory_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bufferFactory_29), (void*)value);
	}

	inline static int32_t get_offset_of_framesSkippedNextLog_30() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664, ___framesSkippedNextLog_30)); }
	inline int32_t get_framesSkippedNextLog_30() const { return ___framesSkippedNextLog_30; }
	inline int32_t* get_address_of_framesSkippedNextLog_30() { return &___framesSkippedNextLog_30; }
	inline void set_framesSkippedNextLog_30(int32_t value)
	{
		___framesSkippedNextLog_30 = value;
	}

	inline static int32_t get_offset_of_framesSkipped_31() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664, ___framesSkipped_31)); }
	inline int32_t get_framesSkipped_31() const { return ___framesSkipped_31; }
	inline int32_t* get_address_of_framesSkipped_31() { return &___framesSkipped_31; }
	inline void set_framesSkipped_31(int32_t value)
	{
		___framesSkipped_31 = value;
	}

	inline static int32_t get_offset_of_exitThread_32() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664, ___exitThread_32)); }
	inline bool get_exitThread_32() const { return ___exitThread_32; }
	inline bool* get_address_of_exitThread_32() { return &___exitThread_32; }
	inline void set_exitThread_32(bool value)
	{
		___exitThread_32 = value;
	}

	inline static int32_t get_offset_of_processNullFramesCnt_33() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664, ___processNullFramesCnt_33)); }
	inline int32_t get_processNullFramesCnt_33() const { return ___processNullFramesCnt_33; }
	inline int32_t* get_address_of_processNullFramesCnt_33() { return &___processNullFramesCnt_33; }
	inline void set_processNullFramesCnt_33(int32_t value)
	{
		___processNullFramesCnt_33 = value;
	}
};


// Photon.Voice.LocalVoiceFramed`1<System.Single>
struct LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0  : public LocalVoiceFramedBase_t44C87DD9E75F9A7A763407E2C66FE744BDCB7471
{
public:
	// Photon.Voice.Framer`1<T> Photon.Voice.LocalVoiceFramed`1::framer
	Framer_1_t04F378EE94C8949DC3D5E53C79B71D0E38A18623 * ___framer_23;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::preProcessorsCnt
	int32_t ___preProcessorsCnt_24;
	// System.Collections.Generic.List`1<Photon.Voice.IProcessor`1<T>> Photon.Voice.LocalVoiceFramed`1::processors
	List_1_tB8681DE57AE297E09DCA76242C38B88CB52192E5 * ___processors_25;
	// System.Boolean Photon.Voice.LocalVoiceFramed`1::dataEncodeThreadStarted
	bool ___dataEncodeThreadStarted_26;
	// System.Collections.Generic.Queue`1<T[]> Photon.Voice.LocalVoiceFramed`1::pushDataQueue
	Queue_1_t865B9E26DEFD5908AB12DEAECF70EC4320C7D16E * ___pushDataQueue_27;
	// System.Threading.AutoResetEvent Photon.Voice.LocalVoiceFramed`1::pushDataQueueReady
	AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * ___pushDataQueueReady_28;
	// Photon.Voice.FactoryPrimitiveArrayPool`1<T> Photon.Voice.LocalVoiceFramed`1::bufferFactory
	FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63 * ___bufferFactory_29;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::framesSkippedNextLog
	int32_t ___framesSkippedNextLog_30;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::framesSkipped
	int32_t ___framesSkipped_31;
	// System.Boolean Photon.Voice.LocalVoiceFramed`1::exitThread
	bool ___exitThread_32;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::processNullFramesCnt
	int32_t ___processNullFramesCnt_33;

public:
	inline static int32_t get_offset_of_framer_23() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0, ___framer_23)); }
	inline Framer_1_t04F378EE94C8949DC3D5E53C79B71D0E38A18623 * get_framer_23() const { return ___framer_23; }
	inline Framer_1_t04F378EE94C8949DC3D5E53C79B71D0E38A18623 ** get_address_of_framer_23() { return &___framer_23; }
	inline void set_framer_23(Framer_1_t04F378EE94C8949DC3D5E53C79B71D0E38A18623 * value)
	{
		___framer_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___framer_23), (void*)value);
	}

	inline static int32_t get_offset_of_preProcessorsCnt_24() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0, ___preProcessorsCnt_24)); }
	inline int32_t get_preProcessorsCnt_24() const { return ___preProcessorsCnt_24; }
	inline int32_t* get_address_of_preProcessorsCnt_24() { return &___preProcessorsCnt_24; }
	inline void set_preProcessorsCnt_24(int32_t value)
	{
		___preProcessorsCnt_24 = value;
	}

	inline static int32_t get_offset_of_processors_25() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0, ___processors_25)); }
	inline List_1_tB8681DE57AE297E09DCA76242C38B88CB52192E5 * get_processors_25() const { return ___processors_25; }
	inline List_1_tB8681DE57AE297E09DCA76242C38B88CB52192E5 ** get_address_of_processors_25() { return &___processors_25; }
	inline void set_processors_25(List_1_tB8681DE57AE297E09DCA76242C38B88CB52192E5 * value)
	{
		___processors_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___processors_25), (void*)value);
	}

	inline static int32_t get_offset_of_dataEncodeThreadStarted_26() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0, ___dataEncodeThreadStarted_26)); }
	inline bool get_dataEncodeThreadStarted_26() const { return ___dataEncodeThreadStarted_26; }
	inline bool* get_address_of_dataEncodeThreadStarted_26() { return &___dataEncodeThreadStarted_26; }
	inline void set_dataEncodeThreadStarted_26(bool value)
	{
		___dataEncodeThreadStarted_26 = value;
	}

	inline static int32_t get_offset_of_pushDataQueue_27() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0, ___pushDataQueue_27)); }
	inline Queue_1_t865B9E26DEFD5908AB12DEAECF70EC4320C7D16E * get_pushDataQueue_27() const { return ___pushDataQueue_27; }
	inline Queue_1_t865B9E26DEFD5908AB12DEAECF70EC4320C7D16E ** get_address_of_pushDataQueue_27() { return &___pushDataQueue_27; }
	inline void set_pushDataQueue_27(Queue_1_t865B9E26DEFD5908AB12DEAECF70EC4320C7D16E * value)
	{
		___pushDataQueue_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pushDataQueue_27), (void*)value);
	}

	inline static int32_t get_offset_of_pushDataQueueReady_28() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0, ___pushDataQueueReady_28)); }
	inline AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * get_pushDataQueueReady_28() const { return ___pushDataQueueReady_28; }
	inline AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D ** get_address_of_pushDataQueueReady_28() { return &___pushDataQueueReady_28; }
	inline void set_pushDataQueueReady_28(AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * value)
	{
		___pushDataQueueReady_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pushDataQueueReady_28), (void*)value);
	}

	inline static int32_t get_offset_of_bufferFactory_29() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0, ___bufferFactory_29)); }
	inline FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63 * get_bufferFactory_29() const { return ___bufferFactory_29; }
	inline FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63 ** get_address_of_bufferFactory_29() { return &___bufferFactory_29; }
	inline void set_bufferFactory_29(FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63 * value)
	{
		___bufferFactory_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bufferFactory_29), (void*)value);
	}

	inline static int32_t get_offset_of_framesSkippedNextLog_30() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0, ___framesSkippedNextLog_30)); }
	inline int32_t get_framesSkippedNextLog_30() const { return ___framesSkippedNextLog_30; }
	inline int32_t* get_address_of_framesSkippedNextLog_30() { return &___framesSkippedNextLog_30; }
	inline void set_framesSkippedNextLog_30(int32_t value)
	{
		___framesSkippedNextLog_30 = value;
	}

	inline static int32_t get_offset_of_framesSkipped_31() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0, ___framesSkipped_31)); }
	inline int32_t get_framesSkipped_31() const { return ___framesSkipped_31; }
	inline int32_t* get_address_of_framesSkipped_31() { return &___framesSkipped_31; }
	inline void set_framesSkipped_31(int32_t value)
	{
		___framesSkipped_31 = value;
	}

	inline static int32_t get_offset_of_exitThread_32() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0, ___exitThread_32)); }
	inline bool get_exitThread_32() const { return ___exitThread_32; }
	inline bool* get_address_of_exitThread_32() { return &___exitThread_32; }
	inline void set_exitThread_32(bool value)
	{
		___exitThread_32 = value;
	}

	inline static int32_t get_offset_of_processNullFramesCnt_33() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0, ___processNullFramesCnt_33)); }
	inline int32_t get_processNullFramesCnt_33() const { return ___processNullFramesCnt_33; }
	inline int32_t* get_address_of_processNullFramesCnt_33() { return &___processNullFramesCnt_33; }
	inline void set_processNullFramesCnt_33(int32_t value)
	{
		___processNullFramesCnt_33 = value;
	}
};


// Photon.Voice.LocalVoiceAudio`1<System.Int16>
struct LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8  : public LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664
{
public:
	// Photon.Voice.AudioUtil/VoiceDetector`1<T> Photon.Voice.LocalVoiceAudio`1::voiceDetector
	VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 * ___voiceDetector_34;
	// Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<T> Photon.Voice.LocalVoiceAudio`1::voiceDetectorCalibration
	VoiceDetectorCalibration_1_tA106A118978F11C40A12060946B33BA05BD390D3 * ___voiceDetectorCalibration_35;
	// Photon.Voice.AudioUtil/LevelMeter`1<T> Photon.Voice.LocalVoiceAudio`1::levelMeter
	LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3 * ___levelMeter_36;
	// System.Int32 Photon.Voice.LocalVoiceAudio`1::channels
	int32_t ___channels_37;
	// System.Boolean Photon.Voice.LocalVoiceAudio`1::resampleSource
	bool ___resampleSource_38;

public:
	inline static int32_t get_offset_of_voiceDetector_34() { return static_cast<int32_t>(offsetof(LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8, ___voiceDetector_34)); }
	inline VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 * get_voiceDetector_34() const { return ___voiceDetector_34; }
	inline VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 ** get_address_of_voiceDetector_34() { return &___voiceDetector_34; }
	inline void set_voiceDetector_34(VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 * value)
	{
		___voiceDetector_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceDetector_34), (void*)value);
	}

	inline static int32_t get_offset_of_voiceDetectorCalibration_35() { return static_cast<int32_t>(offsetof(LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8, ___voiceDetectorCalibration_35)); }
	inline VoiceDetectorCalibration_1_tA106A118978F11C40A12060946B33BA05BD390D3 * get_voiceDetectorCalibration_35() const { return ___voiceDetectorCalibration_35; }
	inline VoiceDetectorCalibration_1_tA106A118978F11C40A12060946B33BA05BD390D3 ** get_address_of_voiceDetectorCalibration_35() { return &___voiceDetectorCalibration_35; }
	inline void set_voiceDetectorCalibration_35(VoiceDetectorCalibration_1_tA106A118978F11C40A12060946B33BA05BD390D3 * value)
	{
		___voiceDetectorCalibration_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceDetectorCalibration_35), (void*)value);
	}

	inline static int32_t get_offset_of_levelMeter_36() { return static_cast<int32_t>(offsetof(LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8, ___levelMeter_36)); }
	inline LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3 * get_levelMeter_36() const { return ___levelMeter_36; }
	inline LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3 ** get_address_of_levelMeter_36() { return &___levelMeter_36; }
	inline void set_levelMeter_36(LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3 * value)
	{
		___levelMeter_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelMeter_36), (void*)value);
	}

	inline static int32_t get_offset_of_channels_37() { return static_cast<int32_t>(offsetof(LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8, ___channels_37)); }
	inline int32_t get_channels_37() const { return ___channels_37; }
	inline int32_t* get_address_of_channels_37() { return &___channels_37; }
	inline void set_channels_37(int32_t value)
	{
		___channels_37 = value;
	}

	inline static int32_t get_offset_of_resampleSource_38() { return static_cast<int32_t>(offsetof(LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8, ___resampleSource_38)); }
	inline bool get_resampleSource_38() const { return ___resampleSource_38; }
	inline bool* get_address_of_resampleSource_38() { return &___resampleSource_38; }
	inline void set_resampleSource_38(bool value)
	{
		___resampleSource_38 = value;
	}
};


// Photon.Voice.LocalVoiceAudio`1<System.Single>
struct LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238  : public LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0
{
public:
	// Photon.Voice.AudioUtil/VoiceDetector`1<T> Photon.Voice.LocalVoiceAudio`1::voiceDetector
	VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC * ___voiceDetector_34;
	// Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<T> Photon.Voice.LocalVoiceAudio`1::voiceDetectorCalibration
	VoiceDetectorCalibration_1_tDC56BC8D99C1538843C12B706F4D44A12BFFBF3E * ___voiceDetectorCalibration_35;
	// Photon.Voice.AudioUtil/LevelMeter`1<T> Photon.Voice.LocalVoiceAudio`1::levelMeter
	LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5 * ___levelMeter_36;
	// System.Int32 Photon.Voice.LocalVoiceAudio`1::channels
	int32_t ___channels_37;
	// System.Boolean Photon.Voice.LocalVoiceAudio`1::resampleSource
	bool ___resampleSource_38;

public:
	inline static int32_t get_offset_of_voiceDetector_34() { return static_cast<int32_t>(offsetof(LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238, ___voiceDetector_34)); }
	inline VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC * get_voiceDetector_34() const { return ___voiceDetector_34; }
	inline VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC ** get_address_of_voiceDetector_34() { return &___voiceDetector_34; }
	inline void set_voiceDetector_34(VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC * value)
	{
		___voiceDetector_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceDetector_34), (void*)value);
	}

	inline static int32_t get_offset_of_voiceDetectorCalibration_35() { return static_cast<int32_t>(offsetof(LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238, ___voiceDetectorCalibration_35)); }
	inline VoiceDetectorCalibration_1_tDC56BC8D99C1538843C12B706F4D44A12BFFBF3E * get_voiceDetectorCalibration_35() const { return ___voiceDetectorCalibration_35; }
	inline VoiceDetectorCalibration_1_tDC56BC8D99C1538843C12B706F4D44A12BFFBF3E ** get_address_of_voiceDetectorCalibration_35() { return &___voiceDetectorCalibration_35; }
	inline void set_voiceDetectorCalibration_35(VoiceDetectorCalibration_1_tDC56BC8D99C1538843C12B706F4D44A12BFFBF3E * value)
	{
		___voiceDetectorCalibration_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceDetectorCalibration_35), (void*)value);
	}

	inline static int32_t get_offset_of_levelMeter_36() { return static_cast<int32_t>(offsetof(LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238, ___levelMeter_36)); }
	inline LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5 * get_levelMeter_36() const { return ___levelMeter_36; }
	inline LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5 ** get_address_of_levelMeter_36() { return &___levelMeter_36; }
	inline void set_levelMeter_36(LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5 * value)
	{
		___levelMeter_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelMeter_36), (void*)value);
	}

	inline static int32_t get_offset_of_channels_37() { return static_cast<int32_t>(offsetof(LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238, ___channels_37)); }
	inline int32_t get_channels_37() const { return ___channels_37; }
	inline int32_t* get_address_of_channels_37() { return &___channels_37; }
	inline void set_channels_37(int32_t value)
	{
		___channels_37 = value;
	}

	inline static int32_t get_offset_of_resampleSource_38() { return static_cast<int32_t>(offsetof(LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238, ___resampleSource_38)); }
	inline bool get_resampleSource_38() const { return ___resampleSource_38; }
	inline bool* get_address_of_resampleSource_38() { return &___resampleSource_38; }
	inline void set_resampleSource_38(bool value)
	{
		___resampleSource_38 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void Photon.Voice.AudioUtil/VoiceDetector`1<System.Int16>::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetector_1__ctor_m19B47107FDBA28D2C419B78D712537EF1A707E2D_gshared (VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 * __this, int32_t ___samplingRate0, int32_t ___numChannels1, const RuntimeMethod* method);
// System.Boolean Photon.Voice.AudioUtil/VoiceDetector`1<System.Int16>::get_On()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VoiceDetector_1_get_On_mAA630DFE422E1D5263686DDCE57F6E26C4DF8AB8_gshared_inline (VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.AudioUtil/VoiceDetector`1<System.Int16>::set_Detected(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetector_1_set_Detected_m13E95CCF06BB947C56591D1DB287436309D074AB_gshared (VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Photon.Voice.AudioUtil/VoiceDetector`1<System.Int16>::get_Detected()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VoiceDetector_1_get_Detected_m2556CDCC35307D5A1AE5D0573806C4E1C4C0F5C8_gshared_inline (VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.OpusCodec/Encoder`1<System.Single>::.ctor(Photon.Voice.VoiceInfo,Photon.Voice.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_1__ctor_m41B7B1A903690DC74302D619DC29D6A7E6741578_gshared (Encoder_1_t439BF0A94F0F3694C5AF8B5EC4C91CBA46C4C620 * __this, VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  ___i0, RuntimeObject* ___logger1, const RuntimeMethod* method);
// System.Void Photon.Voice.OpusCodec/Encoder`1<System.Int16>::.ctor(Photon.Voice.VoiceInfo,Photon.Voice.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_1__ctor_m9077E63DD228B223B7033E63ACA21B768789E119_gshared (Encoder_1_t1835B5877F1B49B43B635F05E7C29D83CC9C3EF2 * __this, VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  ___i0, RuntimeObject* ___logger1, const RuntimeMethod* method);
// Photon.Voice.FactoryPrimitiveArrayPool`1<T> Photon.Voice.LocalVoiceFramed`1<System.Int16>::get_BufferFactory()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2 * LocalVoiceFramed_1_get_BufferFactory_mE185781006A94F4245FD1FD62C2B28E16D719738_gshared_inline (LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664 * __this, const RuntimeMethod* method);
// T[] Photon.Voice.FactoryPrimitiveArrayPool`1<System.Int16>::New(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* FactoryPrimitiveArrayPool_1_New_m4B62F1E511B7854408A14C347007968C092B4142_gshared (FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2 * __this, int32_t ___size0, const RuntimeMethod* method);
// System.Void Photon.Voice.LocalVoiceFramed`1<System.Int16>::PushDataAsync(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalVoiceFramed_1_PushDataAsync_m0B323B8BE7F08707A528E2E4D6D08A3976A09BA1_gshared (LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664 * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___buf0, const RuntimeMethod* method);
// System.Void Photon.Voice.LocalVoiceFramed`1<System.Single>::PushDataAsync(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalVoiceFramed_1_PushDataAsync_m00A920DB3FF61949F367167B188A90AC6B9D9E82_gshared (LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___buf0, const RuntimeMethod* method);
// Photon.Voice.FactoryPrimitiveArrayPool`1<T> Photon.Voice.LocalVoiceFramed`1<System.Single>::get_BufferFactory()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63 * LocalVoiceFramed_1_get_BufferFactory_m55FFB4181F0CF749B62E8D81C7F962EF460BFEC0_gshared_inline (LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0 * __this, const RuntimeMethod* method);
// T[] Photon.Voice.FactoryPrimitiveArrayPool`1<System.Single>::New(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* FactoryPrimitiveArrayPool_1_New_mA7DF99EB941029EF5445393AFF981A7B6919711F_gshared (FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63 * __this, int32_t ___size0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C  Dictionary_2_GetEnumerator_m17437D82A5AF502166F10DD12B5C5830DDB95444_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  Enumerator_get_Current_mE5033FC555E7BC63DDC919B903A8A305C3AADBEB_gshared_inline (Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t82EC38578AA05240F1D04E31474B7E844D0AA5D6  Dictionary_2_GetEnumerator_mAD2EBD021C57B44EEC71DAC1FC0847ACCE2F7051_gshared (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957  Enumerator_get_Current_mDD5FF5DE0A9753D6EC3A02500E649CA8E738CE83_gshared_inline (Enumerator_t82EC38578AA05240F1D04E31474B7E844D0AA5D6 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m6FB62A84CBE44A1ADC675B97E28FABD4A3658064_gshared_inline (KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mCA6E77030F4BE64105E6B3EFB3CBB8E6EC08CA0A_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t KeyValuePair_2_get_Key_m8C5CDCE6A0C4D1F01811F8A3DE5598AC9C50910C_gshared_inline (KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mF4C1B40791EFD4A01AF190E5539417DBB5DA255B_gshared (Enumerator_t82EC38578AA05240F1D04E31474B7E844D0AA5D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mEEAA9A380252BB2F9B2403853F4C00F2F643ADC4_gshared (Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m7567E65C01E35A09AD2AD4814D708A8E76469D31_gshared (Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mA8B2C0245428CBCCFB6628B1799077BC4239B5FB_gshared (Enumerator_t82EC38578AA05240F1D04E31474B7E844D0AA5D6 * __this, const RuntimeMethod* method);

// System.Void Photon.Voice.AudioUtil/VoiceDetector`1<System.Int16>::.ctor(System.Int32,System.Int32)
inline void VoiceDetector_1__ctor_m19B47107FDBA28D2C419B78D712537EF1A707E2D (VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 * __this, int32_t ___samplingRate0, int32_t ___numChannels1, const RuntimeMethod* method)
{
	((  void (*) (VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 *, int32_t, int32_t, const RuntimeMethod*))VoiceDetector_1__ctor_m19B47107FDBA28D2C419B78D712537EF1A707E2D_gshared)(__this, ___samplingRate0, ___numChannels1, method);
}
// System.Boolean Photon.Voice.AudioUtil/VoiceDetector`1<System.Int16>::get_On()
inline bool VoiceDetector_1_get_On_mAA630DFE422E1D5263686DDCE57F6E26C4DF8AB8_inline (VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 *, const RuntimeMethod*))VoiceDetector_1_get_On_mAA630DFE422E1D5263686DDCE57F6E26C4DF8AB8_gshared_inline)(__this, method);
}
// System.Void Photon.Voice.AudioUtil/VoiceDetector`1<System.Int16>::set_Detected(System.Boolean)
inline void VoiceDetector_1_set_Detected_m13E95CCF06BB947C56591D1DB287436309D074AB (VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 *, bool, const RuntimeMethod*))VoiceDetector_1_set_Detected_m13E95CCF06BB947C56591D1DB287436309D074AB_gshared)(__this, ___value0, method);
}
// System.Boolean Photon.Voice.AudioUtil/VoiceDetector`1<System.Int16>::get_Detected()
inline bool VoiceDetector_1_get_Detected_m2556CDCC35307D5A1AE5D0573806C4E1C4C0F5C8_inline (VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 *, const RuntimeMethod*))VoiceDetector_1_get_Detected_m2556CDCC35307D5A1AE5D0573806C4E1C4C0F5C8_gshared_inline)(__this, method);
}
// System.Void Photon.Voice.LoadBalancingTransport/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEF38BB0D123D2B71A120C516218F846C7D858DD3 (U3CU3Ec_t7CF8071A50F9E6844B0ACBBFC6AC2FF3DEF5329B * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// Photon.Voice.VoiceInfo Photon.Voice.LocalVoice::get_Info()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  LocalVoice_get_Info_m1996B4F7A27EF2E408C0C0DE7BAED51524FA477B_inline (LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * __this, const RuntimeMethod* method);
// Photon.Voice.Codec Photon.Voice.VoiceInfo::get_Codec()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_Codec_mEE43E2D47F30D9B9953DFB95479EC3B7BA9FE2E3_inline (VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 * __this, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.ByteArraySlice::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ByteArraySlice_Release_mF5183DF8283B2C6E2B9BF185530A46FB2C84EDBD (ByteArraySlice_t48E6503C839C3686AAA94FAF30E0B1948A52D94F * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.OpusCodec/Encoder`1<System.Single>::.ctor(Photon.Voice.VoiceInfo,Photon.Voice.ILogger)
inline void Encoder_1__ctor_m41B7B1A903690DC74302D619DC29D6A7E6741578 (Encoder_1_t439BF0A94F0F3694C5AF8B5EC4C91CBA46C4C620 * __this, VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  ___i0, RuntimeObject* ___logger1, const RuntimeMethod* method)
{
	((  void (*) (Encoder_1_t439BF0A94F0F3694C5AF8B5EC4C91CBA46C4C620 *, VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 , RuntimeObject*, const RuntimeMethod*))Encoder_1__ctor_m41B7B1A903690DC74302D619DC29D6A7E6741578_gshared)(__this, ___i0, ___logger1, method);
}
// System.ArraySegment`1<System.Byte> POpusCodec.OpusEncoder::Encode(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  OpusEncoder_Encode_mA02094AC74B3D8584A43144B42FFB6D7A17AE6CA (OpusEncoder_t289CD686765411D189B07CC8CEEE006E19E1B823 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___pcmSamples0, const RuntimeMethod* method);
// System.Void Photon.Voice.OpusCodec/Encoder`1<System.Int16>::.ctor(Photon.Voice.VoiceInfo,Photon.Voice.ILogger)
inline void Encoder_1__ctor_m9077E63DD228B223B7033E63ACA21B768789E119 (Encoder_1_t1835B5877F1B49B43B635F05E7C29D83CC9C3EF2 * __this, VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  ___i0, RuntimeObject* ___logger1, const RuntimeMethod* method)
{
	((  void (*) (Encoder_1_t1835B5877F1B49B43B635F05E7C29D83CC9C3EF2 *, VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 , RuntimeObject*, const RuntimeMethod*))Encoder_1__ctor_m9077E63DD228B223B7033E63ACA21B768789E119_gshared)(__this, ___i0, ___logger1, method);
}
// System.ArraySegment`1<System.Byte> POpusCodec.OpusEncoder::Encode(System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  OpusEncoder_Encode_mB285924B22403DCB1C3E0E31F708B6F4CAE9C60B (OpusEncoder_t289CD686765411D189B07CC8CEEE006E19E1B823 * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___pcmSamples0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Array System.Enum::GetValues(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray * Enum_GetValues_m8EEC6B32F297FDB2F7375DC8B197E0E1AB8643BD (Type_t * ___enumType0, const RuntimeMethod* method);
// System.Collections.IEnumerator System.Array::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_GetEnumerator_m7BC171F2F69907FD4585E7B4A3A224473BE32964 (RuntimeArray * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.SpacingProfile/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m136FB5C849DF47278DC80C16FD3605B830ADEF3E (U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15 * __this, const RuntimeMethod* method);
// System.Int16 System.Math::Abs(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Math_Abs_m9B9260F0BD34F4E70E016E2714A9553C8AAD40D9 (int16_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.VoiceClient/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF6EAD72EAF3447B8E05F7362A512BADB343B30A0 (U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Voice.LocalVoice::get_DebugEchoMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool LocalVoice_get_DebugEchoMode_m98A24E697FB45440E960B0DC9420CD4C05903F6B_inline (LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.LocalVoice::.ctor(Photon.Voice.VoiceClient,Photon.Voice.IEncoder,System.Byte,Photon.Voice.VoiceInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalVoice__ctor_mA61893CACB4A7C26F76DA8D2BF2678AB86DD3318 (LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * __this, VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * ___voiceClient0, RuntimeObject* ___encoder1, uint8_t ___id2, VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  ___voiceInfo3, int32_t ___channelId4, const RuntimeMethod* method);
// Photon.Voice.FactoryPrimitiveArrayPool`1<T> Photon.Voice.LocalVoiceFramed`1<System.Int16>::get_BufferFactory()
inline FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2 * LocalVoiceFramed_1_get_BufferFactory_mE185781006A94F4245FD1FD62C2B28E16D719738_inline (LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664 * __this, const RuntimeMethod* method)
{
	return ((  FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2 * (*) (LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664 *, const RuntimeMethod*))LocalVoiceFramed_1_get_BufferFactory_mE185781006A94F4245FD1FD62C2B28E16D719738_gshared_inline)(__this, method);
}
// T[] Photon.Voice.FactoryPrimitiveArrayPool`1<System.Int16>::New(System.Int32)
inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* FactoryPrimitiveArrayPool_1_New_m4B62F1E511B7854408A14C347007968C092B4142 (FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	return ((  Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* (*) (FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2 *, int32_t, const RuntimeMethod*))FactoryPrimitiveArrayPool_1_New_m4B62F1E511B7854408A14C347007968C092B4142_gshared)(__this, ___size0, method);
}
// System.Void Photon.Voice.AudioUtil::Convert(System.Single[],System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioUtil_Convert_mE7E3A1421F063E82C97D51909A11A44DB2B123B6 (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___src0, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___dst1, int32_t ___dstCount2, const RuntimeMethod* method);
// System.Void Photon.Voice.LocalVoiceFramed`1<System.Int16>::PushDataAsync(T[])
inline void LocalVoiceFramed_1_PushDataAsync_m0B323B8BE7F08707A528E2E4D6D08A3976A09BA1 (LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664 * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___buf0, const RuntimeMethod* method)
{
	((  void (*) (LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664 *, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*, const RuntimeMethod*))LocalVoiceFramed_1_PushDataAsync_m0B323B8BE7F08707A528E2E4D6D08A3976A09BA1_gshared)(__this, ___buf0, method);
}
// System.Void Photon.Voice.LocalVoiceFramed`1<System.Single>::PushDataAsync(T[])
inline void LocalVoiceFramed_1_PushDataAsync_m00A920DB3FF61949F367167B188A90AC6B9D9E82 (LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___buf0, const RuntimeMethod* method)
{
	((  void (*) (LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0 *, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, const RuntimeMethod*))LocalVoiceFramed_1_PushDataAsync_m00A920DB3FF61949F367167B188A90AC6B9D9E82_gshared)(__this, ___buf0, method);
}
// Photon.Voice.FactoryPrimitiveArrayPool`1<T> Photon.Voice.LocalVoiceFramed`1<System.Single>::get_BufferFactory()
inline FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63 * LocalVoiceFramed_1_get_BufferFactory_m55FFB4181F0CF749B62E8D81C7F962EF460BFEC0_inline (LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0 * __this, const RuntimeMethod* method)
{
	return ((  FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63 * (*) (LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0 *, const RuntimeMethod*))LocalVoiceFramed_1_get_BufferFactory_m55FFB4181F0CF749B62E8D81C7F962EF460BFEC0_gshared_inline)(__this, method);
}
// T[] Photon.Voice.FactoryPrimitiveArrayPool`1<System.Single>::New(System.Int32)
inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* FactoryPrimitiveArrayPool_1_New_mA7DF99EB941029EF5445393AFF981A7B6919711F (FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	return ((  SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* (*) (FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63 *, int32_t, const RuntimeMethod*))FactoryPrimitiveArrayPool_1_New_mA7DF99EB941029EF5445393AFF981A7B6919711F_gshared)(__this, ___size0, method);
}
// System.Void Photon.Voice.AudioUtil::Convert(System.Int16[],System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioUtil_Convert_mC7F7157BD9FF2910A35E7DB143665624F74E08E3 (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___src0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___dst1, int32_t ___dstCount2, const RuntimeMethod* method);
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D (const RuntimeMethod* method);
// System.Void Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_RemoteVoiceInfosU3Ed__40_U3CU3Em__Finally2_m793ABF699DD08C7DBE1EF15DC58288BCB690ED25 (U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_RemoteVoiceInfosU3Ed__40_U3CU3Em__Finally1_m1E37E3573DF0ECA9A68A526F0E8B9B5AE377089C (U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>::GetEnumerator()
inline Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B  Dictionary_2_GetEnumerator_m7FDCA22BD761E723E00B8926B1F30557331BFFEC (Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B  (*) (Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m17437D82A5AF502166F10DD12B5C5830DDB95444_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>::get_Current()
inline KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99  Enumerator_get_Current_mD102ED220D0F16567214E8E5C69A3D8146D5D8AF_inline (Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99  (*) (Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B *, const RuntimeMethod*))Enumerator_get_Current_mE5033FC555E7BC63DDC919B903A8A305C3AADBEB_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>::get_Value()
inline Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0 * KeyValuePair_2_get_Value_mF1D2B2C146EB355F5C3191E4A1C4C2034249BAA3_inline (KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99 * __this, const RuntimeMethod* method)
{
	return ((  Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0 * (*) (KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99 *, const RuntimeMethod*))KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline)(__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>::GetEnumerator()
inline Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E  Dictionary_2_GetEnumerator_mAF78EC82F6811AFB6068D09343E164B970681C1E (Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E  (*) (Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mAD2EBD021C57B44EEC71DAC1FC0847ACCE2F7051_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,Photon.Voice.RemoteVoice>::get_Current()
inline KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382  Enumerator_get_Current_mF633D50299E68934066A6E44C1DC7504E92ABCC4_inline (Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382  (*) (Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E *, const RuntimeMethod*))Enumerator_get_Current_mDD5FF5DE0A9753D6EC3A02500E649CA8E738CE83_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.Byte,Photon.Voice.RemoteVoice>::get_Value()
inline RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87 * KeyValuePair_2_get_Value_m2AB6475270004FDA7585570A8A7B1898C5942513_inline (KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382 * __this, const RuntimeMethod* method)
{
	return ((  RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87 * (*) (KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m6FB62A84CBE44A1ADC675B97E28FABD4A3658064_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>::get_Key()
inline int32_t KeyValuePair_2_get_Key_mC3EC4F0ADB2359D5B5386277C54A9A5B5C2F5315_inline (KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCA6E77030F4BE64105E6B3EFB3CBB8E6EC08CA0A_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.Byte,Photon.Voice.RemoteVoice>::get_Key()
inline uint8_t KeyValuePair_2_get_Key_mA5CEB73F2786970AE724DED666ACEA0BA9954B6F_inline (KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382 * __this, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m8C5CDCE6A0C4D1F01811F8A3DE5598AC9C50910C_gshared_inline)(__this, method);
}
// Photon.Voice.VoiceInfo Photon.Voice.RemoteVoice::get_Info()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  RemoteVoice_get_Info_m1CEE9CD8D298502F545A2EE82BD99C0141A670E2_inline (RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.RemoteVoiceInfo::.ctor(System.Int32,System.Int32,System.Byte,Photon.Voice.VoiceInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteVoiceInfo__ctor_m27E03F21BF9A67143072FBBACFD7F175250B9CA6 (RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A * __this, int32_t ___channelId0, int32_t ___playerId1, uint8_t ___voiceId2, VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  ___info3, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,Photon.Voice.RemoteVoice>::MoveNext()
inline bool Enumerator_MoveNext_m763AC53790967C7503AE2B3D581CEA882C6CE3DB (Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E *, const RuntimeMethod*))Enumerator_MoveNext_mF4C1B40791EFD4A01AF190E5539417DBB5DA255B_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>::MoveNext()
inline bool Enumerator_MoveNext_m25A4E8E566B755F3B5D4E285035BEA7B83ED2AAE (Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B *, const RuntimeMethod*))Enumerator_MoveNext_mEEAA9A380252BB2F9B2403853F4C00F2F643ADC4_gshared)(__this, method);
}
// System.Void Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_RemoteVoiceInfosU3Ed__40_System_IDisposable_Dispose_m572FFFF4CD05AD4C5B1A96EB40277FA653F0908C (U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>::Dispose()
inline void Enumerator_Dispose_mDEFCDED916603553DBB44F2363E844D232B884D5 (Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B *, const RuntimeMethod*))Enumerator_Dispose_m7567E65C01E35A09AD2AD4814D708A8E76469D31_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,Photon.Voice.RemoteVoice>::Dispose()
inline void Enumerator_Dispose_mFA11765DB3B1C2D8B904790C9B2DA123D1C604C1 (Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E *, const RuntimeMethod*))Enumerator_Dispose_mA8B2C0245428CBCCFB6628B1799077BC4239B5FB_gshared)(__this, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_RemoteVoiceInfosU3Ed__40__ctor_m370BF8BBB65C6860778208A7ECE261CC83C9EC60 (U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Photon.Voice.RemoteVoiceInfo> Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::System.Collections.Generic.IEnumerable<Photon.Voice.RemoteVoiceInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_RemoteVoiceInfosU3Ed__40_System_Collections_Generic_IEnumerableU3CPhoton_Voice_RemoteVoiceInfoU3E_GetEnumerator_m561C06EB0CD20D7B774681A871D11CF2E9D1FF16 (U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Voice.AudioUtil/VoiceDetectorShort::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetectorShort__ctor_mF24E281C89FE50EAF0E11DEFC71D63734ADC8D65 (VoiceDetectorShort_tEB57780C72B1E5D60E7584C80B244E40B4C0DFDB * __this, int32_t ___samplingRate0, int32_t ___numChannels1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceDetector_1__ctor_m19B47107FDBA28D2C419B78D712537EF1A707E2D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public VoiceDetectorShort(int samplingRate, int numChannels) : base(samplingRate, numChannels)
		int32_t L_0 = ___samplingRate0;
		int32_t L_1 = ___numChannels1;
		VoiceDetector_1__ctor_m19B47107FDBA28D2C419B78D712537EF1A707E2D(__this, L_0, L_1, /*hidden argument*/VoiceDetector_1__ctor_m19B47107FDBA28D2C419B78D712537EF1A707E2D_RuntimeMethod_var);
		// norm = 1.0f / short.MaxValue;
		((VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 *)__this)->set_norm_1((3.05185094E-05f));
		// }
		return;
	}
}
// System.Int16[] Photon.Voice.AudioUtil/VoiceDetectorShort::Process(System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* VoiceDetectorShort_Process_m2E216D5F2F6F05C0AA0A34CE77D0D9A9392BDD4C (VoiceDetectorShort_tEB57780C72B1E5D60E7584C80B244E40B4C0DFDB * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___buffer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceDetector_1_get_Detected_m2556CDCC35307D5A1AE5D0573806C4E1C4C0F5C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceDetector_1_get_On_mAA630DFE422E1D5263686DDCE57F6E26C4DF8AB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceDetector_1_set_Detected_m13E95CCF06BB947C56591D1DB287436309D074AB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (this.On)
		bool L_0;
		L_0 = VoiceDetector_1_get_On_mAA630DFE422E1D5263686DDCE57F6E26C4DF8AB8_inline(__this, /*hidden argument*/VoiceDetector_1_get_On_mAA630DFE422E1D5263686DDCE57F6E26C4DF8AB8_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_0063;
		}
	}
	{
		// foreach (var s in buffer)
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_1 = ___buffer0;
		V_0 = L_1;
		V_1 = 0;
		goto IL_003c;
	}

IL_000e:
	{
		// foreach (var s in buffer)
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int16_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// if (s > this.threshold)
		float L_6 = ((VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 *)__this)->get_threshold_2();
		if ((!(((float)((float)((float)L_5))) > ((float)L_6))))
		{
			goto IL_002a;
		}
	}
	{
		// this.Detected = true;
		VoiceDetector_1_set_Detected_m13E95CCF06BB947C56591D1DB287436309D074AB(__this, (bool)1, /*hidden argument*/VoiceDetector_1_set_Detected_m13E95CCF06BB947C56591D1DB287436309D074AB_RuntimeMethod_var);
		// this.autoSilenceCounter = 0;
		((VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 *)__this)->set_autoSilenceCounter_7(0);
		// }
		goto IL_0038;
	}

IL_002a:
	{
		// this.autoSilenceCounter++;
		int32_t L_7 = ((VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 *)__this)->get_autoSilenceCounter_7();
		((VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 *)__this)->set_autoSilenceCounter_7(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)));
	}

IL_0038:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_003c:
	{
		// foreach (var s in buffer)
		int32_t L_9 = V_1;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_000e;
		}
	}
	{
		// if (this.autoSilenceCounter > this.activityDelayValuesCount)
		int32_t L_11 = ((VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 *)__this)->get_autoSilenceCounter_7();
		int32_t L_12 = ((VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 *)__this)->get_activityDelayValuesCount_9();
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0057;
		}
	}
	{
		// this.Detected = false;
		VoiceDetector_1_set_Detected_m13E95CCF06BB947C56591D1DB287436309D074AB(__this, (bool)0, /*hidden argument*/VoiceDetector_1_set_Detected_m13E95CCF06BB947C56591D1DB287436309D074AB_RuntimeMethod_var);
	}

IL_0057:
	{
		// return Detected ? buffer : null;
		bool L_13;
		L_13 = VoiceDetector_1_get_Detected_m2556CDCC35307D5A1AE5D0573806C4E1C4C0F5C8_inline(__this, /*hidden argument*/VoiceDetector_1_get_Detected_m2556CDCC35307D5A1AE5D0573806C4E1C4C0F5C8_RuntimeMethod_var);
		if (L_13)
		{
			goto IL_0061;
		}
	}
	{
		return (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)NULL;
	}

IL_0061:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_14 = ___buffer0;
		return L_14;
	}

IL_0063:
	{
		// return buffer;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_15 = ___buffer0;
		return L_15;
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
// System.Void Photon.Voice.LoadBalancingTransport/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mE382D9893492F8DB62B934D1564EF2C3FADA758A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7CF8071A50F9E6844B0ACBBFC6AC2FF3DEF5329B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t7CF8071A50F9E6844B0ACBBFC6AC2FF3DEF5329B * L_0 = (U3CU3Ec_t7CF8071A50F9E6844B0ACBBFC6AC2FF3DEF5329B *)il2cpp_codegen_object_new(U3CU3Ec_t7CF8071A50F9E6844B0ACBBFC6AC2FF3DEF5329B_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mEF38BB0D123D2B71A120C516218F846C7D858DD3(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t7CF8071A50F9E6844B0ACBBFC6AC2FF3DEF5329B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7CF8071A50F9E6844B0ACBBFC6AC2FF3DEF5329B_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Photon.Voice.LoadBalancingTransport/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEF38BB0D123D2B71A120C516218F846C7D858DD3 (U3CU3Ec_t7CF8071A50F9E6844B0ACBBFC6AC2FF3DEF5329B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Photon.Voice.Codec Photon.Voice.LoadBalancingTransport/<>c::<SendVoicesInfo>b__21_0(Photon.Voice.LocalVoice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CSendVoicesInfoU3Eb__21_0_m9C29239A1EB94235104A7EC4416CE7F28642B8B9 (U3CU3Ec_t7CF8071A50F9E6844B0ACBBFC6AC2FF3DEF5329B * __this, LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * ___v0, const RuntimeMethod* method)
{
	VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var codecVoices in voices.GroupBy(v => v.Info.Codec))
		LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * L_0 = ___v0;
		NullCheck(L_0);
		VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  L_1;
		L_1 = LocalVoice_get_Info_m1996B4F7A27EF2E408C0C0DE7BAED51524FA477B_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = VoiceInfo_get_Codec_mEE43E2D47F30D9B9953DFB95479EC3B7BA9FE2E3_inline((VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 *)(&V_0), /*hidden argument*/NULL);
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
// System.Void Photon.Voice.LoadBalancingTransport2/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m00F3BBF8B3268DA73A4C086D59546F66AC35E140 (U3CU3Ec__DisplayClass4_0_t5C9FD3C1AB5A4CB6E9DFA8088BB5DDB531DCF41F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Photon.Voice.LoadBalancingTransport2/<>c__DisplayClass4_0::<onVoiceFrameEvent>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3ConVoiceFrameEventU3Eb__0_mC100548D203D4A78EFCCEB1ABD028DB8A95CC0ED (U3CU3Ec__DisplayClass4_0_t5C9FD3C1AB5A4CB6E9DFA8088BB5DDB531DCF41F * __this, const RuntimeMethod* method)
{
	{
		// buffer = new FrameBuffer(slice.Buffer, slice.Offset + dataOffset, contentLength - dataOffset, flags, () => slice.Release());
		ByteArraySlice_t48E6503C839C3686AAA94FAF30E0B1948A52D94F * L_0 = __this->get_slice_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = ByteArraySlice_Release_mF5183DF8283B2C6E2B9BF185530A46FB2C84EDBD(L_0, /*hidden argument*/NULL);
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
// System.Void Photon.Voice.OpusCodec/EncoderFloat::.ctor(Photon.Voice.VoiceInfo,Photon.Voice.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncoderFloat__ctor_m64AC426963736E17A99F9925BDBCB9315B013536 (EncoderFloat_t59F828BE852C2C5049643A7DA8A76AE0DFCD35D8 * __this, VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  ___i0, RuntimeObject* ___logger1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoder_1__ctor_m41B7B1A903690DC74302D619DC29D6A7E6741578_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoder_1_t439BF0A94F0F3694C5AF8B5EC4C91CBA46C4C620_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal EncoderFloat(VoiceInfo i, ILogger logger) : base(i, logger) { }
		VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  L_0 = ___i0;
		RuntimeObject* L_1 = ___logger1;
		IL2CPP_RUNTIME_CLASS_INIT(Encoder_1_t439BF0A94F0F3694C5AF8B5EC4C91CBA46C4C620_il2cpp_TypeInfo_var);
		Encoder_1__ctor_m41B7B1A903690DC74302D619DC29D6A7E6741578(__this, L_0, L_1, /*hidden argument*/Encoder_1__ctor_m41B7B1A903690DC74302D619DC29D6A7E6741578_RuntimeMethod_var);
		// internal EncoderFloat(VoiceInfo i, ILogger logger) : base(i, logger) { }
		return;
	}
}
// System.ArraySegment`1<System.Byte> Photon.Voice.OpusCodec/EncoderFloat::encodeTyped(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  EncoderFloat_encodeTyped_mD7F886009DABDCBE0EFCA4C985AD541EC4775275 (EncoderFloat_t59F828BE852C2C5049643A7DA8A76AE0DFCD35D8 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___buf0, const RuntimeMethod* method)
{
	{
		// return encoder.Encode(buf);
		OpusEncoder_t289CD686765411D189B07CC8CEEE006E19E1B823 * L_0 = ((Encoder_1_t439BF0A94F0F3694C5AF8B5EC4C91CBA46C4C620 *)__this)->get_encoder_0();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = ___buf0;
		NullCheck(L_0);
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_2;
		L_2 = OpusEncoder_Encode_mA02094AC74B3D8584A43144B42FFB6D7A17AE6CA(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void Photon.Voice.OpusCodec/EncoderShort::.ctor(Photon.Voice.VoiceInfo,Photon.Voice.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncoderShort__ctor_mEC758D672B971A43190322126B6DC02E3BF44244 (EncoderShort_t1B066515A9C7163E7B94B8FEA3E07B88303D687B * __this, VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  ___i0, RuntimeObject* ___logger1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoder_1__ctor_m9077E63DD228B223B7033E63ACA21B768789E119_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoder_1_t1835B5877F1B49B43B635F05E7C29D83CC9C3EF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal EncoderShort(VoiceInfo i, ILogger logger) : base(i, logger) { }
		VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  L_0 = ___i0;
		RuntimeObject* L_1 = ___logger1;
		IL2CPP_RUNTIME_CLASS_INIT(Encoder_1_t1835B5877F1B49B43B635F05E7C29D83CC9C3EF2_il2cpp_TypeInfo_var);
		Encoder_1__ctor_m9077E63DD228B223B7033E63ACA21B768789E119(__this, L_0, L_1, /*hidden argument*/Encoder_1__ctor_m9077E63DD228B223B7033E63ACA21B768789E119_RuntimeMethod_var);
		// internal EncoderShort(VoiceInfo i, ILogger logger) : base(i, logger) { }
		return;
	}
}
// System.ArraySegment`1<System.Byte> Photon.Voice.OpusCodec/EncoderShort::encodeTyped(System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  EncoderShort_encodeTyped_mB077E8CC522828111B2711477073DC9F0023D2E4 (EncoderShort_t1B066515A9C7163E7B94B8FEA3E07B88303D687B * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___buf0, const RuntimeMethod* method)
{
	{
		// return encoder.Encode(buf);
		OpusEncoder_t289CD686765411D189B07CC8CEEE006E19E1B823 * L_0 = ((Encoder_1_t1835B5877F1B49B43B635F05E7C29D83CC9C3EF2 *)__this)->get_encoder_0();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_1 = ___buf0;
		NullCheck(L_0);
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_2;
		L_2 = OpusEncoder_Encode_mB285924B22403DCB1C3E0E31F708B6F4CAE9C60B(L_0, L_1, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Photon.Voice.OpusCodec/Util::bestEncoderSampleRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Util_bestEncoderSampleRate_mD09F0BF8F33C16D4BFF91FE35BB308DB4ECBA8F6 (int32_t ___f0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamplingRate_tB35955BC7837DAB0BF0F4D73CAA2BAFD47646F51_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// int diff = int.MaxValue;
		V_0 = ((int32_t)2147483647LL);
		// int res = (int)SamplingRate.Sampling48000;
		V_1 = ((int32_t)48000);
		// foreach (var x in Enum.GetValues(typeof(SamplingRate)))
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (SamplingRate_tB35955BC7837DAB0BF0F4D73CAA2BAFD47646F51_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeArray * L_2;
		L_2 = Enum_GetValues_m8EEC6B32F297FDB2F7375DC8B197E0E1AB8643BD(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = Array_GetEnumerator_m7BC171F2F69907FD4585E7B4A3A224473BE32964(L_2, /*hidden argument*/NULL);
		V_2 = L_3;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0048;
		}

IL_0023:
		{
			// foreach (var x in Enum.GetValues(typeof(SamplingRate)))
			RuntimeObject* L_4 = V_2;
			NullCheck(L_4);
			RuntimeObject * L_5;
			L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_4);
			V_3 = L_5;
			// var d = Math.Abs((int)x - f);
			RuntimeObject * L_6 = V_3;
			int32_t L_7 = ___f0;
			IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
			int32_t L_8;
			L_8 = il2cpp_codegen_abs(((int32_t)il2cpp_codegen_subtract((int32_t)((*(int32_t*)((int32_t*)UnBox(L_6, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), (int32_t)L_7)));
			V_4 = L_8;
			// if (d < diff)
			int32_t L_9 = V_4;
			int32_t L_10 = V_0;
			if ((((int32_t)L_9) >= ((int32_t)L_10)))
			{
				goto IL_0048;
			}
		}

IL_003e:
		{
			// diff = d;
			int32_t L_11 = V_4;
			V_0 = L_11;
			// res = (int)x;
			RuntimeObject * L_12 = V_3;
			V_1 = ((*(int32_t*)((int32_t*)UnBox(L_12, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))));
		}

IL_0048:
		{
			// foreach (var x in Enum.GetValues(typeof(SamplingRate)))
			RuntimeObject* L_13 = V_2;
			NullCheck(L_13);
			bool L_14;
			L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_13);
			if (L_14)
			{
				goto IL_0023;
			}
		}

IL_0050:
		{
			IL2CPP_LEAVE(0x66, FINALLY_0052);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_15 = V_2;
			V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_15, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_16 = V_5;
			if (!L_16)
			{
				goto IL_0065;
			}
		}

IL_005e:
		{
			RuntimeObject* L_17 = V_5;
			NullCheck(L_17);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_17);
		}

IL_0065:
		{
			IL2CPP_END_FINALLY(82)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x66, IL_0066)
	}

IL_0066:
	{
		// return res;
		int32_t L_18 = V_1;
		return L_18;
	}
}
// System.Void Photon.Voice.OpusCodec/Util::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Util__ctor_m75865A517B928D306F7D9A3D426C77F0155639C5 (Util_tB79F7CAD5C8FC71AB7A0EAF51F9E9F9F7B4E2E3E * __this, const RuntimeMethod* method)
{
	{
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
// System.Void Photon.Voice.SpacingProfile/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m98371BFC9ACB2782E02C5203B38EE046EF23257F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15 * L_0 = (U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15 *)il2cpp_codegen_object_new(U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m136FB5C849DF47278DC80C16FD3605B830ADEF3E(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Photon.Voice.SpacingProfile/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m136FB5C849DF47278DC80C16FD3605B830ADEF3E (U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int16 Photon.Voice.SpacingProfile/<>c::<get_Max>b__13_0(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t U3CU3Ec_U3Cget_MaxU3Eb__13_0_m1A6AFC5E78F5FE26A46012DA1D338920914468D9 (U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15 * __this, int16_t ___v0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int Max { get { return buf.Select(v => Math.Abs(v)).Max(); } }
		int16_t L_0 = ___v0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int16_t L_1;
		L_1 = Math_Abs_m9B9260F0BD34F4E70E016E2714A9553C8AAD40D9(L_0, /*hidden argument*/NULL);
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
// System.Void Photon.Voice.VoiceClient/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m604EA90DC53CF07AB36625569C2248CC90BA3D7C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7 * L_0 = (U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7 *)il2cpp_codegen_object_new(U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mF6EAD72EAF3447B8E05F7362A512BADB343B30A0(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Photon.Voice.VoiceClient/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF6EAD72EAF3447B8E05F7362A512BADB343B30A0 (U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Photon.Voice.VoiceClient/<>c::<sendVoicesInfoAndConfigFrame>b__55_0(Photon.Voice.LocalVoice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CsendVoicesInfoAndConfigFrameU3Eb__55_0_mAFBDAE9945B43CB964F5180109C7C7E11786BC7C (U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7 * __this, LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * ___x0, const RuntimeMethod* method)
{
	{
		// var debugEchoVoices = localVoices.Values.Where(x => x.DebugEchoMode);
		LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * L_0 = ___x0;
		NullCheck(L_0);
		bool L_1;
		L_1 = LocalVoice_get_DebugEchoMode_m98A24E697FB45440E960B0DC9420CD4C05903F6B_inline(L_0, /*hidden argument*/NULL);
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
// System.Void Photon.Voice.VoiceClient/<>c__DisplayClass47_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass47_0__ctor_m735E518283902BF96DF842C13D6003213AF00175 (U3CU3Ec__DisplayClass47_0_t6861F43F19BFEE66771862537EC2921B615AD428 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Photon.Voice.LocalVoice Photon.Voice.VoiceClient/<>c__DisplayClass47_0::<CreateLocalVoice>b__0(System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * U3CU3Ec__DisplayClass47_0_U3CCreateLocalVoiceU3Eb__0_m696F880A4CBFAE4D88D2EEA64795B062D5F68D39 (U3CU3Ec__DisplayClass47_0_t6861F43F19BFEE66771862537EC2921B615AD428 * __this, uint8_t ___vId0, int32_t ___chId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (LocalVoice)createLocalVoice(channelId, (vId, chId) => new LocalVoice(this, encoder, vId, voiceInfo, chId));
		VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * L_0 = __this->get_U3CU3E4__this_0();
		RuntimeObject* L_1 = __this->get_encoder_1();
		uint8_t L_2 = ___vId0;
		VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  L_3 = __this->get_voiceInfo_2();
		int32_t L_4 = ___chId1;
		LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * L_5 = (LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 *)il2cpp_codegen_object_new(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9_il2cpp_TypeInfo_var);
		LocalVoice__ctor_mA61893CACB4A7C26F76DA8D2BF2678AB86DD3318(L_5, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
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
// System.Void Photon.Voice.VoiceClient/<>c__DisplayClass50_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass50_0__ctor_mA6E07610FCA4A1277CD7E8218663B0C29659E688 (U3CU3Ec__DisplayClass50_0_t5F0198FD70542B3779AC6EF61A8CE73C8A465E97 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Photon.Voice.VoiceClient/<>c__DisplayClass50_0::<CreateLocalVoiceAudioFromSource>b__0(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass50_0_U3CCreateLocalVoiceAudioFromSourceU3Eb__0_m4ADFB9FFA06008707A91AEBF3B7199526E89866B (U3CU3Ec__DisplayClass50_0_t5F0198FD70542B3779AC6EF61A8CE73C8A465E97 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___buf0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FactoryPrimitiveArrayPool_1_New_m4B62F1E511B7854408A14C347007968C092B4142_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalVoiceFramed_1_PushDataAsync_m0B323B8BE7F08707A528E2E4D6D08A3976A09BA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalVoiceFramed_1_get_BufferFactory_mE185781006A94F4245FD1FD62C2B28E16D719738_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* V_0 = NULL;
	{
		// var shortBuf = localVoice.BufferFactory.New(buf.Length);
		LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8 * L_0 = __this->get_localVoice_0();
		NullCheck(L_0);
		FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2 * L_1;
		L_1 = LocalVoiceFramed_1_get_BufferFactory_mE185781006A94F4245FD1FD62C2B28E16D719738_inline(L_0, /*hidden argument*/LocalVoiceFramed_1_get_BufferFactory_mE185781006A94F4245FD1FD62C2B28E16D719738_RuntimeMethod_var);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = ___buf0;
		NullCheck(L_2);
		NullCheck(L_1);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_3;
		L_3 = FactoryPrimitiveArrayPool_1_New_m4B62F1E511B7854408A14C347007968C092B4142(L_1, ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), /*hidden argument*/FactoryPrimitiveArrayPool_1_New_m4B62F1E511B7854408A14C347007968C092B4142_RuntimeMethod_var);
		V_0 = L_3;
		// AudioUtil.Convert(buf, shortBuf, buf.Length);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = ___buf0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_5 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = ___buf0;
		NullCheck(L_6);
		AudioUtil_Convert_mE7E3A1421F063E82C97D51909A11A44DB2B123B6(L_4, L_5, ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))), /*hidden argument*/NULL);
		// localVoice.PushDataAsync(shortBuf);
		LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8 * L_7 = __this->get_localVoice_0();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_8 = V_0;
		NullCheck(L_7);
		LocalVoiceFramed_1_PushDataAsync_m0B323B8BE7F08707A528E2E4D6D08A3976A09BA1(L_7, L_8, /*hidden argument*/LocalVoiceFramed_1_PushDataAsync_m0B323B8BE7F08707A528E2E4D6D08A3976A09BA1_RuntimeMethod_var);
		// }, bufferFactory);
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
// System.Void Photon.Voice.VoiceClient/<>c__DisplayClass50_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass50_1__ctor_mE87F5FABEA7DE15F97A6DAE8C12B554FEF2469D2 (U3CU3Ec__DisplayClass50_1_t54976458C9D841F47F5FBF17A876A0E346916E7F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Photon.Voice.VoiceClient/<>c__DisplayClass50_1::<CreateLocalVoiceAudioFromSource>b__1(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass50_1_U3CCreateLocalVoiceAudioFromSourceU3Eb__1_mBF22C952A012D9F33C3B444B200F21A4BA74641F (U3CU3Ec__DisplayClass50_1_t54976458C9D841F47F5FBF17A876A0E346916E7F * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___buf0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalVoiceFramed_1_PushDataAsync_m00A920DB3FF61949F367167B188A90AC6B9D9E82_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ((IAudioPusher<float>)source).SetCallback(buf => localVoice.PushDataAsync(buf), localVoice.BufferFactory);
		LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238 * L_0 = __this->get_localVoice_0();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = ___buf0;
		NullCheck(L_0);
		LocalVoiceFramed_1_PushDataAsync_m00A920DB3FF61949F367167B188A90AC6B9D9E82(L_0, L_1, /*hidden argument*/LocalVoiceFramed_1_PushDataAsync_m00A920DB3FF61949F367167B188A90AC6B9D9E82_RuntimeMethod_var);
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
// System.Void Photon.Voice.VoiceClient/<>c__DisplayClass50_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass50_2__ctor_m91DD15F3F037AE21F00C76EB650E6F65389CEB13 (U3CU3Ec__DisplayClass50_2_tA191A69CBBECD484B5CE23EA132F1B1FF78025C9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Photon.Voice.VoiceClient/<>c__DisplayClass50_2::<CreateLocalVoiceAudioFromSource>b__2(System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass50_2_U3CCreateLocalVoiceAudioFromSourceU3Eb__2_mCA2FC3432FCDEE88A0D7D81DF7E5EDAACB3D9D59 (U3CU3Ec__DisplayClass50_2_tA191A69CBBECD484B5CE23EA132F1B1FF78025C9 * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___buf0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FactoryPrimitiveArrayPool_1_New_mA7DF99EB941029EF5445393AFF981A7B6919711F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalVoiceFramed_1_PushDataAsync_m00A920DB3FF61949F367167B188A90AC6B9D9E82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalVoiceFramed_1_get_BufferFactory_m55FFB4181F0CF749B62E8D81C7F962EF460BFEC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_0 = NULL;
	{
		// var floatBuf = localVoice.BufferFactory.New(buf.Length);
		LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238 * L_0 = __this->get_localVoice_0();
		NullCheck(L_0);
		FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63 * L_1;
		L_1 = LocalVoiceFramed_1_get_BufferFactory_m55FFB4181F0CF749B62E8D81C7F962EF460BFEC0_inline(L_0, /*hidden argument*/LocalVoiceFramed_1_get_BufferFactory_m55FFB4181F0CF749B62E8D81C7F962EF460BFEC0_RuntimeMethod_var);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_2 = ___buf0;
		NullCheck(L_2);
		NullCheck(L_1);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3;
		L_3 = FactoryPrimitiveArrayPool_1_New_mA7DF99EB941029EF5445393AFF981A7B6919711F(L_1, ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), /*hidden argument*/FactoryPrimitiveArrayPool_1_New_mA7DF99EB941029EF5445393AFF981A7B6919711F_RuntimeMethod_var);
		V_0 = L_3;
		// AudioUtil.Convert(buf, floatBuf, buf.Length);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_4 = ___buf0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_5 = V_0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_6 = ___buf0;
		NullCheck(L_6);
		AudioUtil_Convert_mC7F7157BD9FF2910A35E7DB143665624F74E08E3(L_4, L_5, ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))), /*hidden argument*/NULL);
		// localVoice.PushDataAsync(floatBuf);
		LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238 * L_7 = __this->get_localVoice_0();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_8 = V_0;
		NullCheck(L_7);
		LocalVoiceFramed_1_PushDataAsync_m00A920DB3FF61949F367167B188A90AC6B9D9E82(L_7, L_8, /*hidden argument*/LocalVoiceFramed_1_PushDataAsync_m00A920DB3FF61949F367167B188A90AC6B9D9E82_RuntimeMethod_var);
		// }, bufferFactory);
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
// System.Void Photon.Voice.VoiceClient/<>c__DisplayClass50_3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass50_3__ctor_mB3D7E7870E63DA104F6CDA980A4BD9C5C9AED8AE (U3CU3Ec__DisplayClass50_3_t5C4D224480E812C3A77D3480CE1D9F975EEE8990 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Photon.Voice.VoiceClient/<>c__DisplayClass50_3::<CreateLocalVoiceAudioFromSource>b__3(System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass50_3_U3CCreateLocalVoiceAudioFromSourceU3Eb__3_m5BABC4D3410C5C7B58D4061C7415E611487D35C3 (U3CU3Ec__DisplayClass50_3_t5C4D224480E812C3A77D3480CE1D9F975EEE8990 * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___buf0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalVoiceFramed_1_PushDataAsync_m0B323B8BE7F08707A528E2E4D6D08A3976A09BA1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ((IAudioPusher<short>)source).SetCallback(buf => localVoice.PushDataAsync(buf), localVoice.BufferFactory);
		LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8 * L_0 = __this->get_localVoice_0();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_1 = ___buf0;
		NullCheck(L_0);
		LocalVoiceFramed_1_PushDataAsync_m0B323B8BE7F08707A528E2E4D6D08A3976A09BA1(L_0, L_1, /*hidden argument*/LocalVoiceFramed_1_PushDataAsync_m0B323B8BE7F08707A528E2E4D6D08A3976A09BA1_RuntimeMethod_var);
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
// System.Void Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_RemoteVoiceInfosU3Ed__40__ctor_m370BF8BBB65C6860778208A7ECE261CC83C9EC60 (U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_RemoteVoiceInfosU3Ed__40_System_IDisposable_Dispose_m572FFFF4CD05AD4C5B1A96EB40277FA653F0908C (U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)-4)))) > ((uint32_t)1))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_002f;
		}
	}

IL_0012:
	{
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)((int32_t)-4))))
			{
				goto IL_001e;
			}
		}

IL_0018:
		{
			int32_t L_4 = V_0;
			if ((((int32_t)L_4) == ((int32_t)1)))
			{
				goto IL_001e;
			}
		}

IL_001c:
		{
			IL2CPP_LEAVE(0x2F, FINALLY_0028);
		}

IL_001e:
		{
		}

IL_001f:
		try
		{ // begin try (depth: 2)
			IL2CPP_LEAVE(0x2F, FINALLY_0021);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0021;
		}

FINALLY_0021:
		{ // begin finally (depth: 2)
			U3Cget_RemoteVoiceInfosU3Ed__40_U3CU3Em__Finally2_m793ABF699DD08C7DBE1EF15DC58288BCB690ED25(__this, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(33)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(33)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x2F, FINALLY_0028);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0028;
	}

FINALLY_0028:
	{ // begin finally (depth: 1)
		U3Cget_RemoteVoiceInfosU3Ed__40_U3CU3Em__Finally1_m1E37E3573DF0ECA9A68A526F0E8B9B5AE377089C(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(40)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(40)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2F, IL_002f)
	}

IL_002f:
	{
		return;
	}
}
// System.Boolean Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cget_RemoteVoiceInfosU3Ed__40_MoveNext_mB89B99E073789C2DB39ACAC3B6E81EF766FF342E (U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m7FDCA22BD761E723E00B8926B1F30557331BFFEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mAF78EC82F6811AFB6068D09343E164B970681C1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m25A4E8E566B755F3B5D4E285035BEA7B83ED2AAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m763AC53790967C7503AE2B3D581CEA882C6CE3DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD102ED220D0F16567214E8E5C69A3D8146D5D8AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF633D50299E68934066A6E44C1DC7504E92ABCC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mA5CEB73F2786970AE724DED666ACEA0BA9954B6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mC3EC4F0ADB2359D5B5386277C54A9A5B5C2F5315_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m2AB6475270004FDA7585570A8A7B1898C5942513_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mF1D2B2C146EB355F5C3191E4A1C4C2034249BAA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * V_2 = NULL;
	KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * L_1 = __this->get_U3CU3E4__this_3();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_001f;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_00c1;
			}
		}

IL_0018:
		{
			V_0 = (bool)0;
			goto IL_0121;
		}

IL_001f:
		{
			__this->set_U3CU3E1__state_0((-1));
			// foreach (var playerVoices in this.remoteVoices)
			VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * L_4 = V_2;
			NullCheck(L_4);
			Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B * L_5 = L_4->get_remoteVoices_15();
			NullCheck(L_5);
			Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B  L_6;
			L_6 = Dictionary_2_GetEnumerator_m7FDCA22BD761E723E00B8926B1F30557331BFFEC(L_5, /*hidden argument*/Dictionary_2_GetEnumerator_m7FDCA22BD761E723E00B8926B1F30557331BFFEC_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap1_4(L_6);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_00f4;
		}

IL_0044:
		{
			// foreach (var playerVoices in this.remoteVoices)
			Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B * L_7 = __this->get_address_of_U3CU3E7__wrap1_4();
			KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99  L_8;
			L_8 = Enumerator_get_Current_mD102ED220D0F16567214E8E5C69A3D8146D5D8AF_inline((Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B *)L_7, /*hidden argument*/Enumerator_get_Current_mD102ED220D0F16567214E8E5C69A3D8146D5D8AF_RuntimeMethod_var);
			__this->set_U3CplayerVoicesU3E5__3_5(L_8);
			// foreach (var voice in playerVoices.Value)
			KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99 * L_9 = __this->get_address_of_U3CplayerVoicesU3E5__3_5();
			Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0 * L_10;
			L_10 = KeyValuePair_2_get_Value_mF1D2B2C146EB355F5C3191E4A1C4C2034249BAA3_inline((KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99 *)L_9, /*hidden argument*/KeyValuePair_2_get_Value_mF1D2B2C146EB355F5C3191E4A1C4C2034249BAA3_RuntimeMethod_var);
			NullCheck(L_10);
			Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E  L_11;
			L_11 = Dictionary_2_GetEnumerator_mAF78EC82F6811AFB6068D09343E164B970681C1E(L_10, /*hidden argument*/Dictionary_2_GetEnumerator_mAF78EC82F6811AFB6068D09343E164B970681C1E_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap3_6(L_11);
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			goto IL_00c9;
		}

IL_0075:
		{
			// foreach (var voice in playerVoices.Value)
			Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E * L_12 = __this->get_address_of_U3CU3E7__wrap3_6();
			KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382  L_13;
			L_13 = Enumerator_get_Current_mF633D50299E68934066A6E44C1DC7504E92ABCC4_inline((Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E *)L_12, /*hidden argument*/Enumerator_get_Current_mF633D50299E68934066A6E44C1DC7504E92ABCC4_RuntimeMethod_var);
			V_3 = L_13;
			// yield return new RemoteVoiceInfo(voice.Value.channelId, playerVoices.Key, voice.Key, voice.Value.Info);
			RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87 * L_14;
			L_14 = KeyValuePair_2_get_Value_m2AB6475270004FDA7585570A8A7B1898C5942513_inline((KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m2AB6475270004FDA7585570A8A7B1898C5942513_RuntimeMethod_var);
			NullCheck(L_14);
			int32_t L_15 = L_14->get_channelId_2();
			KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99 * L_16 = __this->get_address_of_U3CplayerVoicesU3E5__3_5();
			int32_t L_17;
			L_17 = KeyValuePair_2_get_Key_mC3EC4F0ADB2359D5B5386277C54A9A5B5C2F5315_inline((KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99 *)L_16, /*hidden argument*/KeyValuePair_2_get_Key_mC3EC4F0ADB2359D5B5386277C54A9A5B5C2F5315_RuntimeMethod_var);
			uint8_t L_18;
			L_18 = KeyValuePair_2_get_Key_mA5CEB73F2786970AE724DED666ACEA0BA9954B6F_inline((KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Key_mA5CEB73F2786970AE724DED666ACEA0BA9954B6F_RuntimeMethod_var);
			RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87 * L_19;
			L_19 = KeyValuePair_2_get_Value_m2AB6475270004FDA7585570A8A7B1898C5942513_inline((KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m2AB6475270004FDA7585570A8A7B1898C5942513_RuntimeMethod_var);
			NullCheck(L_19);
			VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  L_20;
			L_20 = RemoteVoice_get_Info_m1CEE9CD8D298502F545A2EE82BD99C0141A670E2_inline(L_19, /*hidden argument*/NULL);
			RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A * L_21 = (RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A *)il2cpp_codegen_object_new(RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A_il2cpp_TypeInfo_var);
			RemoteVoiceInfo__ctor_m27E03F21BF9A67143072FBBACFD7F175250B9CA6(L_21, L_15, L_17, L_18, L_20, /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_21);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_0121;
		}

IL_00c1:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
		}

IL_00c9:
		{
			// foreach (var voice in playerVoices.Value)
			Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E * L_22 = __this->get_address_of_U3CU3E7__wrap3_6();
			bool L_23;
			L_23 = Enumerator_MoveNext_m763AC53790967C7503AE2B3D581CEA882C6CE3DB((Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E *)L_22, /*hidden argument*/Enumerator_MoveNext_m763AC53790967C7503AE2B3D581CEA882C6CE3DB_RuntimeMethod_var);
			if (L_23)
			{
				goto IL_0075;
			}
		}

IL_00d6:
		{
			U3Cget_RemoteVoiceInfosU3Ed__40_U3CU3Em__Finally2_m793ABF699DD08C7DBE1EF15DC58288BCB690ED25(__this, /*hidden argument*/NULL);
			Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E * L_24 = __this->get_address_of_U3CU3E7__wrap3_6();
			il2cpp_codegen_initobj(L_24, sizeof(Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E ));
			// }
			KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99 * L_25 = __this->get_address_of_U3CplayerVoicesU3E5__3_5();
			il2cpp_codegen_initobj(L_25, sizeof(KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99 ));
		}

IL_00f4:
		{
			// foreach (var playerVoices in this.remoteVoices)
			Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B * L_26 = __this->get_address_of_U3CU3E7__wrap1_4();
			bool L_27;
			L_27 = Enumerator_MoveNext_m25A4E8E566B755F3B5D4E285035BEA7B83ED2AAE((Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B *)L_26, /*hidden argument*/Enumerator_MoveNext_m25A4E8E566B755F3B5D4E285035BEA7B83ED2AAE_RuntimeMethod_var);
			if (L_27)
			{
				goto IL_0044;
			}
		}

IL_0104:
		{
			U3Cget_RemoteVoiceInfosU3Ed__40_U3CU3Em__Finally1_m1E37E3573DF0ECA9A68A526F0E8B9B5AE377089C(__this, /*hidden argument*/NULL);
			Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B * L_28 = __this->get_address_of_U3CU3E7__wrap1_4();
			il2cpp_codegen_initobj(L_28, sizeof(Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B ));
			// }
			V_0 = (bool)0;
			goto IL_0121;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_011a;
	}

FAULT_011a:
	{ // begin fault (depth: 1)
		U3Cget_RemoteVoiceInfosU3Ed__40_System_IDisposable_Dispose_m572FFFF4CD05AD4C5B1A96EB40277FA653F0908C(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(282)
	} // end fault
	IL2CPP_CLEANUP(282)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0121:
	{
		bool L_29 = V_0;
		return L_29;
	}
}
// System.Void Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_RemoteVoiceInfosU3Ed__40_U3CU3Em__Finally1_m1E37E3573DF0ECA9A68A526F0E8B9B5AE377089C (U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mDEFCDED916603553DBB44F2363E844D232B884D5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B * L_0 = __this->get_address_of_U3CU3E7__wrap1_4();
		Enumerator_Dispose_mDEFCDED916603553DBB44F2363E844D232B884D5((Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B *)L_0, /*hidden argument*/Enumerator_Dispose_mDEFCDED916603553DBB44F2363E844D232B884D5_RuntimeMethod_var);
		return;
	}
}
// System.Void Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_RemoteVoiceInfosU3Ed__40_U3CU3Em__Finally2_m793ABF699DD08C7DBE1EF15DC58288BCB690ED25 (U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFA11765DB3B1C2D8B904790C9B2DA123D1C604C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0(((int32_t)-3));
		Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E * L_0 = __this->get_address_of_U3CU3E7__wrap3_6();
		Enumerator_Dispose_mFA11765DB3B1C2D8B904790C9B2DA123D1C604C1((Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E *)L_0, /*hidden argument*/Enumerator_Dispose_mFA11765DB3B1C2D8B904790C9B2DA123D1C604C1_RuntimeMethod_var);
		return;
	}
}
// Photon.Voice.RemoteVoiceInfo Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::System.Collections.Generic.IEnumerator<Photon.Voice.RemoteVoiceInfo>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A * U3Cget_RemoteVoiceInfosU3Ed__40_System_Collections_Generic_IEnumeratorU3CPhoton_Voice_RemoteVoiceInfoU3E_get_Current_mEE4ABEBFBC7FB787BB1212459E149E1FC371EB0A (U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * __this, const RuntimeMethod* method)
{
	{
		RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_RemoteVoiceInfosU3Ed__40_System_Collections_IEnumerator_Reset_m5CFE226846C94BC15269EA17FCADEB64A95CBA4B (U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cget_RemoteVoiceInfosU3Ed__40_System_Collections_IEnumerator_Reset_m5CFE226846C94BC15269EA17FCADEB64A95CBA4B_RuntimeMethod_var)));
	}
}
// System.Object Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cget_RemoteVoiceInfosU3Ed__40_System_Collections_IEnumerator_get_Current_m08F0709F7FFD4D90DBF1B145754BBB6A323D2712 (U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * __this, const RuntimeMethod* method)
{
	{
		RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Photon.Voice.RemoteVoiceInfo> Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::System.Collections.Generic.IEnumerable<Photon.Voice.RemoteVoiceInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_RemoteVoiceInfosU3Ed__40_System_Collections_Generic_IEnumerableU3CPhoton_Voice_RemoteVoiceInfoU3E_GetEnumerator_m561C06EB0CD20D7B774681A871D11CF2E9D1FF16 (U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * L_3 = (U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B *)il2cpp_codegen_object_new(U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B_il2cpp_TypeInfo_var);
		U3Cget_RemoteVoiceInfosU3Ed__40__ctor_m370BF8BBB65C6860778208A7ECE261CC83C9EC60(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * L_4 = V_0;
		VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * L_5 = __this->get_U3CU3E4__this_3();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_3(L_5);
	}

IL_0035:
	{
		U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_RemoteVoiceInfosU3Ed__40_System_Collections_IEnumerable_GetEnumerator_mCF8CC2A6FBA4352A000535A9D6683A1BA96667D0 (U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3Cget_RemoteVoiceInfosU3Ed__40_System_Collections_Generic_IEnumerableU3CPhoton_Voice_RemoteVoiceInfoU3E_GetEnumerator_m561C06EB0CD20D7B774681A871D11CF2E9D1FF16(__this, /*hidden argument*/NULL);
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
// System.Void Photon.Voice.VoiceClient/RemoteVoiceInfoDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteVoiceInfoDelegate__ctor_mBBDE3F00B740CD64A1798232FDED7705CAC10747 (RemoteVoiceInfoDelegate_tAFE566F65BB6CDF850E29AFE6BE771196D020D13 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Photon.Voice.VoiceClient/RemoteVoiceInfoDelegate::Invoke(System.Int32,System.Int32,System.Byte,Photon.Voice.VoiceInfo,Photon.Voice.RemoteVoiceOptions&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteVoiceInfoDelegate_Invoke_m4CB7FAF007FE7CDDD8BB3EAFEB061780C0711DB8 (RemoteVoiceInfoDelegate_tAFE566F65BB6CDF850E29AFE6BE771196D020D13 * __this, int32_t ___channelId0, int32_t ___playerId1, uint8_t ___voiceId2, VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  ___voiceInfo3, RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE * ___options4, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 5)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, int32_t, uint8_t, VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 , RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___channelId0, ___playerId1, ___voiceId2, ___voiceInfo3, ___options4, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, uint8_t, VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 , RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___channelId0, ___playerId1, ___voiceId2, ___voiceInfo3, ___options4, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker5< int32_t, int32_t, uint8_t, VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 , RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE * >::Invoke(targetMethod, targetThis, ___channelId0, ___playerId1, ___voiceId2, ___voiceInfo3, ___options4);
					else
						GenericVirtActionInvoker5< int32_t, int32_t, uint8_t, VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 , RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE * >::Invoke(targetMethod, targetThis, ___channelId0, ___playerId1, ___voiceId2, ___voiceInfo3, ___options4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker5< int32_t, int32_t, uint8_t, VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 , RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___channelId0, ___playerId1, ___voiceId2, ___voiceInfo3, ___options4);
					else
						VirtActionInvoker5< int32_t, int32_t, uint8_t, VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 , RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___channelId0, ___playerId1, ___voiceId2, ___voiceInfo3, ___options4);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, uint8_t, VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 , RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___channelId0, ___playerId1, ___voiceId2, ___voiceInfo3, ___options4, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Photon.Voice.VoiceClient/RemoteVoiceInfoDelegate::BeginInvoke(System.Int32,System.Int32,System.Byte,Photon.Voice.VoiceInfo,Photon.Voice.RemoteVoiceOptions&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RemoteVoiceInfoDelegate_BeginInvoke_mCF94EB1A8A0306D6FF7679198428E4977D14D5E1 (RemoteVoiceInfoDelegate_tAFE566F65BB6CDF850E29AFE6BE771196D020D13 * __this, int32_t ___channelId0, int32_t ___playerId1, uint8_t ___voiceId2, VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  ___voiceInfo3, RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE * ___options4, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___channelId0);
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___playerId1);
	__d_args[2] = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &___voiceId2);
	__d_args[3] = Box(VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3_il2cpp_TypeInfo_var, &___voiceInfo3);
	__d_args[4] = Box(RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE_il2cpp_TypeInfo_var, &*___options4);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);;
}
// System.Void Photon.Voice.VoiceClient/RemoteVoiceInfoDelegate::EndInvoke(Photon.Voice.RemoteVoiceOptions&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteVoiceInfoDelegate_EndInvoke_mD3A322865BB2CDB4C3AC7AAF234EE2F4C78E1DDB (RemoteVoiceInfoDelegate_tAFE566F65BB6CDF850E29AFE6BE771196D020D13 * __this, RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE * ___options0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___options0,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  LocalVoice_get_Info_m1996B4F7A27EF2E408C0C0DE7BAED51524FA477B_inline (LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * __this, const RuntimeMethod* method)
{
	{
		// public VoiceInfo Info { get { return info; } }
		VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  L_0 = __this->get_info_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_Codec_mEE43E2D47F30D9B9953DFB95479EC3B7BA9FE2E3_inline (VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 * __this, const RuntimeMethod* method)
{
	{
		// public Codec Codec { get; set; }
		int32_t L_0 = __this->get_U3CCodecU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool LocalVoice_get_DebugEchoMode_m98A24E697FB45440E960B0DC9420CD4C05903F6B_inline (LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * __this, const RuntimeMethod* method)
{
	{
		// get { return debugEchoMode; }
		bool L_0 = __this->get_debugEchoMode_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  RemoteVoice_get_Info_m1CEE9CD8D298502F545A2EE82BD99C0141A670E2_inline (RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87 * __this, const RuntimeMethod* method)
{
	{
		// internal VoiceInfo Info { get; private set; }
		VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  L_0 = __this->get_U3CInfoU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VoiceDetector_1_get_On_mAA630DFE422E1D5263686DDCE57F6E26C4DF8AB8_gshared_inline (VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 * __this, const RuntimeMethod* method)
{
	{
		// public bool On { get; set; }
		bool L_0 = (bool)__this->get_U3COnU3Ek__BackingField_0();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VoiceDetector_1_get_Detected_m2556CDCC35307D5A1AE5D0573806C4E1C4C0F5C8_gshared_inline (VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 * __this, const RuntimeMethod* method)
{
	{
		// get { return detected; }
		bool L_0 = (bool)__this->get_detected_3();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2 * LocalVoiceFramed_1_get_BufferFactory_mE185781006A94F4245FD1FD62C2B28E16D719738_gshared_inline (LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664 * __this, const RuntimeMethod* method)
{
	{
		// public FactoryPrimitiveArrayPool<T> BufferFactory { get { return bufferFactory; } }
		FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2 * L_0 = (FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2 *)__this->get_bufferFactory_29();
		return (FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2 *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63 * LocalVoiceFramed_1_get_BufferFactory_m55FFB4181F0CF749B62E8D81C7F962EF460BFEC0_gshared_inline (LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0 * __this, const RuntimeMethod* method)
{
	{
		// public FactoryPrimitiveArrayPool<T> BufferFactory { get { return bufferFactory; } }
		FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63 * L_0 = (FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63 *)__this->get_bufferFactory_29();
		return (FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63 *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  Enumerator_get_Current_mE5033FC555E7BC63DDC919B903A8A305C3AADBEB_gshared_inline (Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  L_0 = (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 )__this->get_current_3();
		return (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957  Enumerator_get_Current_mDD5FF5DE0A9753D6EC3A02500E649CA8E738CE83_gshared_inline (Enumerator_t82EC38578AA05240F1D04E31474B7E844D0AA5D6 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957  L_0 = (KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957 )__this->get_current_3();
		return (KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m6FB62A84CBE44A1ADC675B97E28FABD4A3658064_gshared_inline (KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mCA6E77030F4BE64105E6B3EFB3CBB8E6EC08CA0A_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t KeyValuePair_2_get_Key_m8C5CDCE6A0C4D1F01811F8A3DE5598AC9C50910C_gshared_inline (KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = (uint8_t)__this->get_key_0();
		return (uint8_t)L_0;
	}
}
