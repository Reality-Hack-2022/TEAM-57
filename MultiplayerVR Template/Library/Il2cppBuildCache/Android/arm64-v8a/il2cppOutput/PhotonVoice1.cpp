#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// System.Action`1<Photon.Voice.FrameOut`1<System.Single>>
struct Action_1_t0B1D8E060FEAA27D51B6AD68D56361DDCF6D383F;
// System.Action`1<Photon.Voice.Unity.RemoteVoiceLink>
struct Action_1_t08A534A31FEBF8D523007013F75268F7B9B74B80;
// System.Action`1<System.Single>
struct Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9;
// System.Action`1<Photon.Voice.Unity.Speaker>
struct Action_1_tED63E8DFC675CB46D15B876DE1362DA7E43672E1;
// System.Action`2<System.Single[],System.Int32>
struct Action_2_t8D838F0E0114B7032B25FE8B8E8AE4CE85AB106E;
// System.Action`2<System.Object,System.Int32>
struct Action_2_t0E8CFD7D8A4393070552ED14F07C6D3B5AD0ED57;
// System.Collections.Generic.Dictionary`2<UnityEngine.AudioSpeakerMode,System.Int32>
struct Dictionary_2_tD85316D462101B4F7AD52B74B47D50D1A8CC0DBC;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>
struct Dictionary_2_t4A0CF6A7FCEF18F04F5F245859A861E8BE4BFE75;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>
struct Dictionary_2_tCB10D3F0D8D28A1A6B54347C56E10FE9D9612C94;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// Photon.Voice.FactoryPrimitiveArrayPool`1<System.Int16>
struct FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2;
// Photon.Voice.FrameOut`1<System.Single>
struct FrameOut_1_t2E75A31E49C5BB56BEAA73766430E3B7F2167044;
// Photon.Voice.Framer`1<System.Int16>
struct Framer_1_t5FBBEF15B9AB70C75546947448D1FFC19D4F7978;
// Photon.Voice.Framer`1<System.Single>
struct Framer_1_t04F378EE94C8949DC3D5E53C79B71D0E38A18623;
// System.Func`1<Photon.Voice.IAudioDesc>
struct Func_1_t3729C27ED506C17CDE248FA4C18C6B936CAE4718;
// System.Func`4<System.Int32,System.Byte,System.Object,Photon.Voice.Unity.Speaker>
struct Func_4_t449A75B74B1BEAD9C0CD87D182025CBAB6D17F9D;
// Photon.Voice.IAudioOut`1<System.Single>
struct IAudioOut_1_t9DA47378F3CB196929EDD4275C59F2AF8FB21868;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.AudioSpeakerMode>
struct IEqualityComparer_1_t9FC3ED5F019127A748136AFA1B50739F4BCC86C9;
// Photon.Voice.IProcessor`1<System.Int16>
struct IProcessor_1_t67D134AAED36F573AF51577CDA7F78D47CE73CE5;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.AudioSpeakerMode,System.Int32>
struct KeyCollection_tEB66AA60DDF1D2CA99FB09E42F5F3D7A8CA5FE3D;
// Photon.Voice.AudioUtil/LevelMeter`1<System.Int16>
struct LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3;
// System.Collections.Generic.List`1<Photon.Voice.IProcessor`1<System.Int16>>
struct List_1_t2B969941D952B3C04034F2CC42555A20E416F5EC;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<Photon.Voice.Unity.Recorder>
struct List_1_tB80863E2156C3F175CD9C6B5B0F964F57B4A5D70;
// System.Collections.Generic.List`1<Photon.Voice.Unity.RemoteVoiceLink>
struct List_1_tB0C131F9DB7AC689F5A2BA8945F3FDA7555F7CEE;
// System.Collections.Generic.List`1<Photon.Voice.Unity.Speaker>
struct List_1_t89AF99FADC7E48891C45020A7D9A15E0EB1BB89F;
// Photon.Voice.LocalVoiceFramed`1<System.Int16>
struct LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664;
// Photon.Voice.PrimitiveArrayPool`1<System.Single>
struct PrimitiveArrayPool_1_tC69A4367DAED259130664C75DBC74EBA50D1FA79;
// System.Collections.Generic.Queue`1<System.Int16[]>
struct Queue_1_t4A2620F8C38A3EF76782E492059C52B76FCF17D3;
// System.Collections.Generic.Queue`1<System.Single[]>
struct Queue_1_t865B9E26DEFD5908AB12DEAECF70EC4320C7D16E;
// Photon.Voice.AudioUtil/TempoUp`1<System.Single>
struct TempoUp_1_tC2BB55C08038730DC8FA89A723269D5118E54626;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.AudioSpeakerMode,System.Int32>
struct ValueCollection_t761A092925D7747B7D011E83F02FCC8F877ED2FB;
// Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<System.Int16>
struct VoiceDetectorCalibration_1_tA106A118978F11C40A12060946B33BA05BD390D3;
// Photon.Voice.AudioUtil/VoiceDetector`1<System.Int16>
struct VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.AudioSpeakerMode,System.Int32>[]
struct EntryU5BU5D_t186FDDFAC4255B1750D6BF3695C4057F520C65A9;
// Photon.Voice.IProcessor`1<System.Int16>[]
struct IProcessor_1U5BU5D_t2656DF3002F88FC13E29BAAAFCA22E66CD9C6A89;
// UnityEngine.AudioListener[]
struct AudioListenerU5BU5D_t2A138F4AC29631456727A4F715E9917778D250BF;
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
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// Photon.Voice.Unity.RemoteVoiceLink[]
struct RemoteVoiceLinkU5BU5D_t00D39DA012730EA6BF70BAACE549609FD086EB2A;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// Photon.Voice.Unity.Speaker[]
struct SpeakerU5BU5D_t85DFCA149CAFF485B3CD2A61872EFE8E7158F3BC;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// Photon.Realtime.AppSettings
struct AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// Photon.Voice.AudioInChangeNotifier
struct AudioInChangeNotifier_t9FD18C1291DEE5F939307CF00E55FFCFE0E9E07D;
// Photon.Voice.AudioInEnumerator
struct AudioInEnumerator_t32F46692F713132406E4754493C35B8AC1B56190;
// Photon.Voice.Unity.AudioInEnumerator
struct AudioInEnumerator_tF947D3CF2E3FAA2C4CAE2AC47E69D7CAD332F197;
// Photon.Voice.Unity.AudioInEnumeratorEx
struct AudioInEnumeratorEx_t35B34A1B6B7843D7D4A3D26D88ADE9C57AA2794A;
// UnityEngine.AudioListener
struct AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3;
// Photon.Voice.Unity.AudioOutCapture
struct AudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// System.IO.BinaryWriter
struct BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.Encoder
struct Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Exception
struct Exception_t;
// System.IO.FileStream
struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Photon.Voice.IAudioDesc
struct IAudioDesc_t4E594E9B8AABF4918890F9377E390A320E285E50;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Photon.Voice.IEncoder
struct IEncoder_tA42B4BA524A255A892B8E21DB5A2B7E7D4867995;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// Photon.Voice.ILogger
struct ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA;
// Photon.Voice.IServiceable
struct IServiceable_t3E0661D0BF2CE8495FAA0AE754176B0B7A6759E1;
// CSCore.IWaveSource
struct IWaveSource_t1EB4FC8216318D107CB9B8F5B8DEFC49B95099F3;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// Photon.Realtime.LoadBalancingClient
struct LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A;
// Photon.Voice.LoadBalancingTransport
struct LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460;
// Photon.Voice.LocalVoice
struct LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.ObjectDisposedException
struct ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A;
// Photon.Voice.Unity.PhotonVoiceCreatedParams
struct PhotonVoiceCreatedParams_t2016E70662CD6C4DC00630565940783AC2469E7D;
// Photon.Realtime.Player
struct Player_tC6DFC22DFF5978489C4CFA025695FEC556610214;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// Photon.Voice.Unity.Recorder
struct Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5;
// Photon.Voice.Unity.RemoteVoiceLink
struct RemoteVoiceLink_tDDD70AB15B70170AF282B017A3BCE94DB80E9CBC;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Photon.Voice.Unity.UtilityScripts.SaveIncomingStreamToFile
struct SaveIncomingStreamToFile_tF1D61ADFBEC004703068B6348E33B13FBD49019E;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// Photon.Voice.SpacingProfile
struct SpacingProfile_tD2728C7357F90CDEC875C74BF6D2161BD3CB2A68;
// Photon.Voice.Unity.Speaker
struct Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// Photon.Realtime.SupportLogger
struct SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// Photon.Voice.Unity.UtilityScripts.ToneAudioReader
struct ToneAudioReader_tC1C56D849C3C642C3E485DDEB70F7CA17120045A;
// System.Type
struct Type_t;
// Photon.Voice.Unity.UnityAudioOut
struct UnityAudioOut_t137B3BB0274927C067BEC30C1F74F382240BD3BA;
// Photon.Voice.VoiceClient
struct VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E;
// Photon.Voice.Unity.VoiceComponent
struct VoiceComponent_tCE3547F23B76A6B42D3BD5158F110EFD8044E88C;
// Photon.Voice.Unity.VoiceConnection
struct VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704;
// Photon.Voice.Unity.VoiceLogger
struct VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// CSCore.WaveFormat
struct WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE;
// CSCore.WaveFormatExtensible
struct WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060;
// CSCore.Codecs.WAV.WaveWriter
struct WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD;
// Photon.Voice.WebRTCAudioProcessor
struct WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6;
// Photon.Voice.Unity.WebRtcAudioDsp
struct WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016;
// Photon.Voice.AudioOutDelayControl/PlayDelayConfig
struct PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7;
// Photon.Voice.Unity.Recorder/<>c__DisplayClass169_0
struct U3CU3Ec__DisplayClass169_0_t38A92BB229F58824432EAC644C1169EF297A8B01;
// Photon.Voice.Unity.Recorder/PhotonVoiceCreatedParams
struct PhotonVoiceCreatedParams_t144861E5442693D3593C0DD733A7368F69DF7279;
// Photon.Voice.Unity.UtilityScripts.SaveIncomingStreamToFile/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tD5F43EC071A58F08F67AE864E90EC5E4A75B2D99;
// Photon.Voice.Unity.UtilityScripts.SaveOutgoingStreamToFile/OutgoingStreamSaverFloat
struct OutgoingStreamSaverFloat_t4FBDC560128785F1310E576A2F007575F9A8682D;
// Photon.Voice.Unity.UtilityScripts.SaveOutgoingStreamToFile/OutgoingStreamSaverShort
struct OutgoingStreamSaverShort_t53EDC7411304DFEEB7B9619029973B8C893234DA;
// Photon.Voice.Unity.Speaker/<>c__DisplayClass40_0
struct U3CU3Ec__DisplayClass40_0_t4A098DC7D5D9E1A05EC68630190A3C15A2226D6C;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;
// Photon.Voice.Unity.UtilityScripts.TestTone/<>c
struct U3CU3Ec_t6D85E6278D22C528CBA18A7B1588B7D4F5B28943;
// Photon.Voice.Unity.VoiceConnection/<>c__DisplayClass95_0
struct U3CU3Ec__DisplayClass95_0_t5513DB87EFC7B8F304090AF0A7F96AC05190245A;
// Photon.Voice.Unity.VoiceConnection/<>c__DisplayClass99_0
struct U3CU3Ec__DisplayClass99_0_tB8557F155B3EE52C474126E588912859E7FF606D;

IL2CPP_EXTERN_C RuntimeClass* Action_2_t8D838F0E0114B7032B25FE8B8E8AE4CE85AB106E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioEncoding_tB144FB61AA9FECA4B4F3A52DF8E6110BE7B147FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioSubTypes_t387587BBC24943E82D65376FE3B0AD113C91B229_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChannelMask_t66A7F964A2DB39B1BF8D737BD920E7D5E7D01389_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tD85316D462101B4F7AD52B74B47D50D1A8CC0DBC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAudioSource_t614D659753A3C9AA889C1B33994515286A51D394_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProcessor_1U5BU5D_t2656DF3002F88FC13E29BAAAFCA22E66CD9C6A89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadableAudioSource_1_tD492BCC588A82C5DA9F030AAF579ACDBEBA475D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocalVoiceAudioShort_t56CE89CCE80B89C0BAD1A35C1F5A5DC847C5068B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ToneAudioReader_tC1C56D849C3C642C3E485DDEB70F7CA17120045A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t6D85E6278D22C528CBA18A7B1588B7D4F5B28943_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAudioOut_t137B3BB0274927C067BEC30C1F74F382240BD3BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02316F6BA3F570660161B4E617F41DF7B1FD4C70;
IL2CPP_EXTERN_C String_t* _stringLiteral0C64F48FB448DB8611B37276E1561AA8F3E7F040;
IL2CPP_EXTERN_C String_t* _stringLiteral0D5816CFAD35A71BB357117A3AA685F04603FEEA;
IL2CPP_EXTERN_C String_t* _stringLiteral0F2CADDC26AAA464E4CB800503EC32489D484EA5;
IL2CPP_EXTERN_C String_t* _stringLiteral12DB585CD7C58149D9E30B1F88C95AA55FCFC680;
IL2CPP_EXTERN_C String_t* _stringLiteral1AB514A8EA2B388C6E60F1CC62C6D7C61F45CA3D;
IL2CPP_EXTERN_C String_t* _stringLiteral1C5EA909C6FCC83A7D534E3144C30AB3DB2CF907;
IL2CPP_EXTERN_C String_t* _stringLiteral279C64F70016117918AA0B635FDA988508E0BC1F;
IL2CPP_EXTERN_C String_t* _stringLiteral2C306B25AE6D78D44C7AD9A9537E1CFD950D6F3D;
IL2CPP_EXTERN_C String_t* _stringLiteral2F3A60FB7BA6A81ED481C7195C4CF91C4F128A3F;
IL2CPP_EXTERN_C String_t* _stringLiteral315818C03CCC2B10070DF2D4EBD09EB6C4C66E58;
IL2CPP_EXTERN_C String_t* _stringLiteral3332734A3CFF55E3216C0BEB76BCE8013C273DF1;
IL2CPP_EXTERN_C String_t* _stringLiteral372D14DC592FE769508A94BB7820383A49392C30;
IL2CPP_EXTERN_C String_t* _stringLiteral3A971881AF6B7B211E34707E857DEC5F36487877;
IL2CPP_EXTERN_C String_t* _stringLiteral42EDAC769F6CAEEE473E514A54F656FC4E45CF91;
IL2CPP_EXTERN_C String_t* _stringLiteral49E44068A7829FAB864D8C4A49A2807645A86799;
IL2CPP_EXTERN_C String_t* _stringLiteral4F79FE1A1A9F05D5FBAD59214CAFCBC50B925569;
IL2CPP_EXTERN_C String_t* _stringLiteral4FB3B17CEC619C238633561C3FAE9D8ADED19582;
IL2CPP_EXTERN_C String_t* _stringLiteral54C4B482D4C19821F25A06409CAE0DE30F08A0DF;
IL2CPP_EXTERN_C String_t* _stringLiteral54E6A56386072FAEC10025F380D0CC554BAC0758;
IL2CPP_EXTERN_C String_t* _stringLiteral55E478ED62C9FE057879ABC825DD080D5F20F6DB;
IL2CPP_EXTERN_C String_t* _stringLiteral5B3BE651FD101FDE76045F98F0402C176FE6D54C;
IL2CPP_EXTERN_C String_t* _stringLiteral5B950FA94599EEFB6A45466DFB1FE490A70E90A8;
IL2CPP_EXTERN_C String_t* _stringLiteral6E1EA8DBE5828E8E17967D6D09A2C48972EF05BB;
IL2CPP_EXTERN_C String_t* _stringLiteral73317C0A90D6E5798833310EDB4C9F1979A7E244;
IL2CPP_EXTERN_C String_t* _stringLiteral771A48117FF23886751EC4BE3075F2141F749544;
IL2CPP_EXTERN_C String_t* _stringLiteral810BD0BFF6AD23CFDD7460BDEB72ABFF8D703521;
IL2CPP_EXTERN_C String_t* _stringLiteral8470C2083203D560B1F16CEFEA1D5201D87A52ED;
IL2CPP_EXTERN_C String_t* _stringLiteral8B519CDC6C719D463940FD073BD6C713502A4F90;
IL2CPP_EXTERN_C String_t* _stringLiteral91E267506A9B484F152026374AAA3996E55D02B4;
IL2CPP_EXTERN_C String_t* _stringLiteral92264EC1F57B9175A6DA68C478CB03DBE2C7BB71;
IL2CPP_EXTERN_C String_t* _stringLiteral98F5D35920B79C0A6AE1F8D2A6EE33847D8C99CC;
IL2CPP_EXTERN_C String_t* _stringLiteral9B36E90C0F7A5F8FCD9EFA472B91764EA02AF55B;
IL2CPP_EXTERN_C String_t* _stringLiteral9B53FF12E0C154CCD88205DA90FA2B8B255724D0;
IL2CPP_EXTERN_C String_t* _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469;
IL2CPP_EXTERN_C String_t* _stringLiteralA70601391991A790B99D8A2561EB3FEBB7729075;
IL2CPP_EXTERN_C String_t* _stringLiteralA77FDC67CD3D8A6113B858540BA409191CDF979E;
IL2CPP_EXTERN_C String_t* _stringLiteralA8FC43AD420EED008DAAC92D79D849F5E0EDD84F;
IL2CPP_EXTERN_C String_t* _stringLiteralAA675FD7E084C60149090EA0F7581C546D1CFFF3;
IL2CPP_EXTERN_C String_t* _stringLiteralB6894A493D9B16556A8AF2157FE4DFA1C4747B3F;
IL2CPP_EXTERN_C String_t* _stringLiteralC481CDF5573E92CDA3B2ADBA1556D4B5B1B659C4;
IL2CPP_EXTERN_C String_t* _stringLiteralC8B0691EAD0DB78080EF44293EC0B1062BAA699B;
IL2CPP_EXTERN_C String_t* _stringLiteralCAA3CD251E920C89B6FA6674EB4DC273AFECC284;
IL2CPP_EXTERN_C String_t* _stringLiteralDC578F65B252B242D91B25BE24D37A176FB2C804;
IL2CPP_EXTERN_C String_t* _stringLiteralE39D8CC3E8E775A8BB56DBC15581E59186F6D1DC;
IL2CPP_EXTERN_C String_t* _stringLiteralE4A4D7212490C3C6A621271276B8C26EBBBFC3A5;
IL2CPP_EXTERN_C String_t* _stringLiteralF2FF47D568FBB39D76E508979195FAEA77E2B694;
IL2CPP_EXTERN_C String_t* _stringLiteralF608C0DDC1F21E4E864F9E091CE20228D79F93B2;
IL2CPP_EXTERN_C String_t* _stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mAA299B31188542B6B8B367176DD466B67AE94C2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3_m0DA4C699234A3DCDAC948DDC6763AE79C2FB5E83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA_m67B1E71DAC0FC1558C3BCFEF0E46853CC95EC31C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRecorder_t13D849D3581771415EF2D39F877106A1AC72C6C5_m96A9AD1EED671D74A2A953BBFFA2D59C945D1A50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mD3EBFDE882930A03A83E80E8D443433165590D5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mBF0DB9DC3119010625F8507F04981F6306C3AC76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m6957DC2E75D0B9CE32C3DC32C6E17827900A60A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FrameOut_1_get_Buf_m11751F803C38A493838A70F3A94EA6AE22EF761A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA_m26DD042294EBDC455889417283686971AC94160E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m48952F6172D8ED3266FC3FF1BBD28D3CFCBAF7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mD891476ADE6ACE5DE3F0EE490B901BA200728D98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LocalVoiceFramed_1_AddPostProcessor_mEE8DCCE80B216507E7DD7991B440642B406854EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisAudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3_mE26B0252D015A176BAFBCF1462E9EC486096B077_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaveFormatExtensible_SubTypeFromWaveFormat_m5DFEF3FC8B8BDBBCC6AD8D48FF832E2C4652B512_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaveFormatExtensible__ctor_mBE493CE24C95236FE8F4D08CDBB676448450ADCE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaveFormat__ctor_m5742AED9549B88D5DB64F46D84FB01D4A96195E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaveWriter_CheckObjectDisposed_mC899FA05AA92BD9B0D95D55F87BD728A2F5AF579_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaveWriter_WriteSample_mE7202510A15BF7A5DA68BF293A0F8828801A2205_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaveWriter__ctor_mB0B2E6BBE94B3F87EA06A42C7405E1E0683CEA6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRtcAudioDsp_OnAudioOutFrameFloat_m095C4BFF6571F02764D7C4318AB7B08D8C650C83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ChannelMask_t66A7F964A2DB39B1BF8D737BD920E7D5E7D01389_0_0_0_var;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct IProcessor_1U5BU5D_t2656DF3002F88FC13E29BAAAFCA22E66CD9C6A89;
struct AudioListenerU5BU5D_t2A138F4AC29631456727A4F715E9917778D250BF;
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<UnityEngine.AudioSpeakerMode,System.Int32>
struct Dictionary_2_tD85316D462101B4F7AD52B74B47D50D1A8CC0DBC  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t186FDDFAC4255B1750D6BF3695C4057F520C65A9* ___entries_1;
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
	KeyCollection_tEB66AA60DDF1D2CA99FB09E42F5F3D7A8CA5FE3D * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t761A092925D7747B7D011E83F02FCC8F877ED2FB * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tD85316D462101B4F7AD52B74B47D50D1A8CC0DBC, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tD85316D462101B4F7AD52B74B47D50D1A8CC0DBC, ___entries_1)); }
	inline EntryU5BU5D_t186FDDFAC4255B1750D6BF3695C4057F520C65A9* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t186FDDFAC4255B1750D6BF3695C4057F520C65A9** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t186FDDFAC4255B1750D6BF3695C4057F520C65A9* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tD85316D462101B4F7AD52B74B47D50D1A8CC0DBC, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tD85316D462101B4F7AD52B74B47D50D1A8CC0DBC, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tD85316D462101B4F7AD52B74B47D50D1A8CC0DBC, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tD85316D462101B4F7AD52B74B47D50D1A8CC0DBC, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tD85316D462101B4F7AD52B74B47D50D1A8CC0DBC, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tD85316D462101B4F7AD52B74B47D50D1A8CC0DBC, ___keys_7)); }
	inline KeyCollection_tEB66AA60DDF1D2CA99FB09E42F5F3D7A8CA5FE3D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tEB66AA60DDF1D2CA99FB09E42F5F3D7A8CA5FE3D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tEB66AA60DDF1D2CA99FB09E42F5F3D7A8CA5FE3D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tD85316D462101B4F7AD52B74B47D50D1A8CC0DBC, ___values_8)); }
	inline ValueCollection_t761A092925D7747B7D011E83F02FCC8F877ED2FB * get_values_8() const { return ___values_8; }
	inline ValueCollection_t761A092925D7747B7D011E83F02FCC8F877ED2FB ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t761A092925D7747B7D011E83F02FCC8F877ED2FB * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tD85316D462101B4F7AD52B74B47D50D1A8CC0DBC, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


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


// Photon.Voice.FrameOut`1<System.Single>
struct FrameOut_1_t2E75A31E49C5BB56BEAA73766430E3B7F2167044  : public RuntimeObject
{
public:
	// T[] Photon.Voice.FrameOut`1::<Buf>k__BackingField
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___U3CBufU3Ek__BackingField_0;
	// System.Boolean Photon.Voice.FrameOut`1::<EndOfStream>k__BackingField
	bool ___U3CEndOfStreamU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CBufU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(FrameOut_1_t2E75A31E49C5BB56BEAA73766430E3B7F2167044, ___U3CBufU3Ek__BackingField_0)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_U3CBufU3Ek__BackingField_0() const { return ___U3CBufU3Ek__BackingField_0; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_U3CBufU3Ek__BackingField_0() { return &___U3CBufU3Ek__BackingField_0; }
	inline void set_U3CBufU3Ek__BackingField_0(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___U3CBufU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBufU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEndOfStreamU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(FrameOut_1_t2E75A31E49C5BB56BEAA73766430E3B7F2167044, ___U3CEndOfStreamU3Ek__BackingField_1)); }
	inline bool get_U3CEndOfStreamU3Ek__BackingField_1() const { return ___U3CEndOfStreamU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CEndOfStreamU3Ek__BackingField_1() { return &___U3CEndOfStreamU3Ek__BackingField_1; }
	inline void set_U3CEndOfStreamU3Ek__BackingField_1(bool value)
	{
		___U3CEndOfStreamU3Ek__BackingField_1 = value;
	}
};


// System.Collections.Generic.List`1<Photon.Voice.Unity.RemoteVoiceLink>
struct List_1_tB0C131F9DB7AC689F5A2BA8945F3FDA7555F7CEE  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	RemoteVoiceLinkU5BU5D_t00D39DA012730EA6BF70BAACE549609FD086EB2A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tB0C131F9DB7AC689F5A2BA8945F3FDA7555F7CEE, ____items_1)); }
	inline RemoteVoiceLinkU5BU5D_t00D39DA012730EA6BF70BAACE549609FD086EB2A* get__items_1() const { return ____items_1; }
	inline RemoteVoiceLinkU5BU5D_t00D39DA012730EA6BF70BAACE549609FD086EB2A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(RemoteVoiceLinkU5BU5D_t00D39DA012730EA6BF70BAACE549609FD086EB2A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tB0C131F9DB7AC689F5A2BA8945F3FDA7555F7CEE, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tB0C131F9DB7AC689F5A2BA8945F3FDA7555F7CEE, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tB0C131F9DB7AC689F5A2BA8945F3FDA7555F7CEE, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tB0C131F9DB7AC689F5A2BA8945F3FDA7555F7CEE_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	RemoteVoiceLinkU5BU5D_t00D39DA012730EA6BF70BAACE549609FD086EB2A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tB0C131F9DB7AC689F5A2BA8945F3FDA7555F7CEE_StaticFields, ____emptyArray_5)); }
	inline RemoteVoiceLinkU5BU5D_t00D39DA012730EA6BF70BAACE549609FD086EB2A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline RemoteVoiceLinkU5BU5D_t00D39DA012730EA6BF70BAACE549609FD086EB2A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(RemoteVoiceLinkU5BU5D_t00D39DA012730EA6BF70BAACE549609FD086EB2A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Photon.Voice.Unity.Speaker>
struct List_1_t89AF99FADC7E48891C45020A7D9A15E0EB1BB89F  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SpeakerU5BU5D_t85DFCA149CAFF485B3CD2A61872EFE8E7158F3BC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t89AF99FADC7E48891C45020A7D9A15E0EB1BB89F, ____items_1)); }
	inline SpeakerU5BU5D_t85DFCA149CAFF485B3CD2A61872EFE8E7158F3BC* get__items_1() const { return ____items_1; }
	inline SpeakerU5BU5D_t85DFCA149CAFF485B3CD2A61872EFE8E7158F3BC** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SpeakerU5BU5D_t85DFCA149CAFF485B3CD2A61872EFE8E7158F3BC* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t89AF99FADC7E48891C45020A7D9A15E0EB1BB89F, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t89AF99FADC7E48891C45020A7D9A15E0EB1BB89F, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t89AF99FADC7E48891C45020A7D9A15E0EB1BB89F, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t89AF99FADC7E48891C45020A7D9A15E0EB1BB89F_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SpeakerU5BU5D_t85DFCA149CAFF485B3CD2A61872EFE8E7158F3BC* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t89AF99FADC7E48891C45020A7D9A15E0EB1BB89F_StaticFields, ____emptyArray_5)); }
	inline SpeakerU5BU5D_t85DFCA149CAFF485B3CD2A61872EFE8E7158F3BC* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SpeakerU5BU5D_t85DFCA149CAFF485B3CD2A61872EFE8E7158F3BC** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SpeakerU5BU5D_t85DFCA149CAFF485B3CD2A61872EFE8E7158F3BC* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Photon.Voice.AudioOutDelayControl
struct AudioOutDelayControl_t0621DE672CAFF84572C184E15B46FBA41A364579  : public RuntimeObject
{
public:

public:
};


// System.IO.BinaryWriter
struct BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.BinaryWriter::OutStream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___OutStream_1;
	// System.Byte[] System.IO.BinaryWriter::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_2;
	// System.Text.Encoding System.IO.BinaryWriter::_encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ____encoding_3;
	// System.Text.Encoder System.IO.BinaryWriter::_encoder
	Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * ____encoder_4;
	// System.Boolean System.IO.BinaryWriter::_leaveOpen
	bool ____leaveOpen_5;
	// System.Char[] System.IO.BinaryWriter::_tmpOneCharBuffer
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ____tmpOneCharBuffer_6;
	// System.Byte[] System.IO.BinaryWriter::_largeByteBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____largeByteBuffer_7;
	// System.Int32 System.IO.BinaryWriter::_maxChars
	int32_t ____maxChars_8;

public:
	inline static int32_t get_offset_of_OutStream_1() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ___OutStream_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_OutStream_1() const { return ___OutStream_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_OutStream_1() { return &___OutStream_1; }
	inline void set_OutStream_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___OutStream_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OutStream_1), (void*)value);
	}

	inline static int32_t get_offset_of__buffer_2() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ____buffer_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_2() const { return ____buffer_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_2() { return &____buffer_2; }
	inline void set__buffer_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_2), (void*)value);
	}

	inline static int32_t get_offset_of__encoding_3() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ____encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get__encoding_3() const { return ____encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of__encoding_3() { return &____encoding_3; }
	inline void set__encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		____encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of__encoder_4() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ____encoder_4)); }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * get__encoder_4() const { return ____encoder_4; }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A ** get_address_of__encoder_4() { return &____encoder_4; }
	inline void set__encoder_4(Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * value)
	{
		____encoder_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____encoder_4), (void*)value);
	}

	inline static int32_t get_offset_of__leaveOpen_5() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ____leaveOpen_5)); }
	inline bool get__leaveOpen_5() const { return ____leaveOpen_5; }
	inline bool* get_address_of__leaveOpen_5() { return &____leaveOpen_5; }
	inline void set__leaveOpen_5(bool value)
	{
		____leaveOpen_5 = value;
	}

	inline static int32_t get_offset_of__tmpOneCharBuffer_6() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ____tmpOneCharBuffer_6)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get__tmpOneCharBuffer_6() const { return ____tmpOneCharBuffer_6; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of__tmpOneCharBuffer_6() { return &____tmpOneCharBuffer_6; }
	inline void set__tmpOneCharBuffer_6(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		____tmpOneCharBuffer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tmpOneCharBuffer_6), (void*)value);
	}

	inline static int32_t get_offset_of__largeByteBuffer_7() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ____largeByteBuffer_7)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__largeByteBuffer_7() const { return ____largeByteBuffer_7; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__largeByteBuffer_7() { return &____largeByteBuffer_7; }
	inline void set__largeByteBuffer_7(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____largeByteBuffer_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____largeByteBuffer_7), (void*)value);
	}

	inline static int32_t get_offset_of__maxChars_8() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ____maxChars_8)); }
	inline int32_t get__maxChars_8() const { return ____maxChars_8; }
	inline int32_t* get_address_of__maxChars_8() { return &____maxChars_8; }
	inline void set__maxChars_8(int32_t value)
	{
		____maxChars_8 = value;
	}
};

struct BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F_StaticFields
{
public:
	// System.IO.BinaryWriter System.IO.BinaryWriter::Null
	BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F_StaticFields, ___Null_0)); }
	inline BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * get_Null_0() const { return ___Null_0; }
	inline BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_0), (void*)value);
	}
};


// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___numInfo_10)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textInfo_12)); }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___native_calendar_names_20)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___compareInfo_21)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___calendar_24)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_culture_25)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_cultureData_28)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_55;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_56;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_57;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_58;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_59;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_60;

public:
	inline static int32_t get_offset_of_m_codePage_55() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_55)); }
	inline int32_t get_m_codePage_55() const { return ___m_codePage_55; }
	inline int32_t* get_address_of_m_codePage_55() { return &___m_codePage_55; }
	inline void set_m_codePage_55(int32_t value)
	{
		___m_codePage_55 = value;
	}

	inline static int32_t get_offset_of_dataItem_56() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_56)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_56() const { return ___dataItem_56; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_56() { return &___dataItem_56; }
	inline void set_dataItem_56(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_56), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_57() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_57)); }
	inline bool get_m_deserializedFromEverett_57() const { return ___m_deserializedFromEverett_57; }
	inline bool* get_address_of_m_deserializedFromEverett_57() { return &___m_deserializedFromEverett_57; }
	inline void set_m_deserializedFromEverett_57(bool value)
	{
		___m_deserializedFromEverett_57 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_58() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_58)); }
	inline bool get_m_isReadOnly_58() const { return ___m_isReadOnly_58; }
	inline bool* get_address_of_m_isReadOnly_58() { return &___m_isReadOnly_58; }
	inline void set_m_isReadOnly_58(bool value)
	{
		___m_isReadOnly_58 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_59() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_59)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_59() const { return ___encoderFallback_59; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_59() { return &___encoderFallback_59; }
	inline void set_encoderFallback_59(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_59), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_60() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_60)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_60() const { return ___decoderFallback_60; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_60() { return &___decoderFallback_60; }
	inline void set_decoderFallback_60(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_60), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_61;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_61() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_61)); }
	inline RuntimeObject * get_s_InternalSyncObject_61() const { return ___s_InternalSyncObject_61; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_61() { return &___s_InternalSyncObject_61; }
	inline void set_s_InternalSyncObject_61(RuntimeObject * value)
	{
		___s_InternalSyncObject_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_61), (void*)value);
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// Photon.Voice.Unity.PhotonVoiceCreatedParams
struct PhotonVoiceCreatedParams_t2016E70662CD6C4DC00630565940783AC2469E7D  : public RuntimeObject
{
public:
	// Photon.Voice.LocalVoice Photon.Voice.Unity.PhotonVoiceCreatedParams::<Voice>k__BackingField
	LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * ___U3CVoiceU3Ek__BackingField_0;
	// Photon.Voice.IAudioDesc Photon.Voice.Unity.PhotonVoiceCreatedParams::<AudioDesc>k__BackingField
	RuntimeObject* ___U3CAudioDescU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CVoiceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PhotonVoiceCreatedParams_t2016E70662CD6C4DC00630565940783AC2469E7D, ___U3CVoiceU3Ek__BackingField_0)); }
	inline LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * get_U3CVoiceU3Ek__BackingField_0() const { return ___U3CVoiceU3Ek__BackingField_0; }
	inline LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 ** get_address_of_U3CVoiceU3Ek__BackingField_0() { return &___U3CVoiceU3Ek__BackingField_0; }
	inline void set_U3CVoiceU3Ek__BackingField_0(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * value)
	{
		___U3CVoiceU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVoiceU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAudioDescU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PhotonVoiceCreatedParams_t2016E70662CD6C4DC00630565940783AC2469E7D, ___U3CAudioDescU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CAudioDescU3Ek__BackingField_1() const { return ___U3CAudioDescU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CAudioDescU3Ek__BackingField_1() { return &___U3CAudioDescU3Ek__BackingField_1; }
	inline void set_U3CAudioDescU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CAudioDescU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAudioDescU3Ek__BackingField_1), (void*)value);
	}
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


// Photon.Voice.Unity.UtilityScripts.ToneAudioReader
struct ToneAudioReader_tC1C56D849C3C642C3E485DDEB70F7CA17120045A  : public RuntimeObject
{
public:
	// System.Double Photon.Voice.Unity.UtilityScripts.ToneAudioReader::k
	double ___k_0;
	// System.Int64 Photon.Voice.Unity.UtilityScripts.ToneAudioReader::timeSamples
	int64_t ___timeSamples_1;

public:
	inline static int32_t get_offset_of_k_0() { return static_cast<int32_t>(offsetof(ToneAudioReader_tC1C56D849C3C642C3E485DDEB70F7CA17120045A, ___k_0)); }
	inline double get_k_0() const { return ___k_0; }
	inline double* get_address_of_k_0() { return &___k_0; }
	inline void set_k_0(double value)
	{
		___k_0 = value;
	}

	inline static int32_t get_offset_of_timeSamples_1() { return static_cast<int32_t>(offsetof(ToneAudioReader_tC1C56D849C3C642C3E485DDEB70F7CA17120045A, ___timeSamples_1)); }
	inline int64_t get_timeSamples_1() const { return ___timeSamples_1; }
	inline int64_t* get_address_of_timeSamples_1() { return &___timeSamples_1; }
	inline void set_timeSamples_1(int64_t value)
	{
		___timeSamples_1 = value;
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

// CSCore.Codecs.WAV.WaveWriter
struct WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD  : public RuntimeObject
{
public:
	// CSCore.WaveFormat CSCore.Codecs.WAV.WaveWriter::_waveFormat
	WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * ____waveFormat_0;
	// System.Int64 CSCore.Codecs.WAV.WaveWriter::_waveStartPosition
	int64_t ____waveStartPosition_1;
	// System.Int32 CSCore.Codecs.WAV.WaveWriter::_dataLength
	int32_t ____dataLength_2;
	// System.Boolean CSCore.Codecs.WAV.WaveWriter::_isDisposed
	bool ____isDisposed_3;
	// System.IO.Stream CSCore.Codecs.WAV.WaveWriter::_stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____stream_4;
	// System.IO.BinaryWriter CSCore.Codecs.WAV.WaveWriter::_writer
	BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * ____writer_5;
	// System.Boolean CSCore.Codecs.WAV.WaveWriter::_isDisposing
	bool ____isDisposing_6;
	// System.Boolean CSCore.Codecs.WAV.WaveWriter::_closeStream
	bool ____closeStream_7;

public:
	inline static int32_t get_offset_of__waveFormat_0() { return static_cast<int32_t>(offsetof(WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD, ____waveFormat_0)); }
	inline WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * get__waveFormat_0() const { return ____waveFormat_0; }
	inline WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE ** get_address_of__waveFormat_0() { return &____waveFormat_0; }
	inline void set__waveFormat_0(WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * value)
	{
		____waveFormat_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____waveFormat_0), (void*)value);
	}

	inline static int32_t get_offset_of__waveStartPosition_1() { return static_cast<int32_t>(offsetof(WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD, ____waveStartPosition_1)); }
	inline int64_t get__waveStartPosition_1() const { return ____waveStartPosition_1; }
	inline int64_t* get_address_of__waveStartPosition_1() { return &____waveStartPosition_1; }
	inline void set__waveStartPosition_1(int64_t value)
	{
		____waveStartPosition_1 = value;
	}

	inline static int32_t get_offset_of__dataLength_2() { return static_cast<int32_t>(offsetof(WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD, ____dataLength_2)); }
	inline int32_t get__dataLength_2() const { return ____dataLength_2; }
	inline int32_t* get_address_of__dataLength_2() { return &____dataLength_2; }
	inline void set__dataLength_2(int32_t value)
	{
		____dataLength_2 = value;
	}

	inline static int32_t get_offset_of__isDisposed_3() { return static_cast<int32_t>(offsetof(WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD, ____isDisposed_3)); }
	inline bool get__isDisposed_3() const { return ____isDisposed_3; }
	inline bool* get_address_of__isDisposed_3() { return &____isDisposed_3; }
	inline void set__isDisposed_3(bool value)
	{
		____isDisposed_3 = value;
	}

	inline static int32_t get_offset_of__stream_4() { return static_cast<int32_t>(offsetof(WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD, ____stream_4)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__stream_4() const { return ____stream_4; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__stream_4() { return &____stream_4; }
	inline void set__stream_4(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____stream_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stream_4), (void*)value);
	}

	inline static int32_t get_offset_of__writer_5() { return static_cast<int32_t>(offsetof(WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD, ____writer_5)); }
	inline BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * get__writer_5() const { return ____writer_5; }
	inline BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F ** get_address_of__writer_5() { return &____writer_5; }
	inline void set__writer_5(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * value)
	{
		____writer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____writer_5), (void*)value);
	}

	inline static int32_t get_offset_of__isDisposing_6() { return static_cast<int32_t>(offsetof(WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD, ____isDisposing_6)); }
	inline bool get__isDisposing_6() const { return ____isDisposing_6; }
	inline bool* get_address_of__isDisposing_6() { return &____isDisposing_6; }
	inline void set__isDisposing_6(bool value)
	{
		____isDisposing_6 = value;
	}

	inline static int32_t get_offset_of__closeStream_7() { return static_cast<int32_t>(offsetof(WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD, ____closeStream_7)); }
	inline bool get__closeStream_7() const { return ____closeStream_7; }
	inline bool* get_address_of__closeStream_7() { return &____closeStream_7; }
	inline void set__closeStream_7(bool value)
	{
		____closeStream_7 = value;
	}
};


// Photon.Voice.WebRTCAudioLib
struct WebRTCAudioLib_t21B9D75D4AF194FB0BE0C2A31378C85B60B215C8  : public RuntimeObject
{
public:

public:
};


// Photon.Voice.AudioOutDelayControl/PlayDelayConfig
struct PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7  : public RuntimeObject
{
public:
	// System.Int32 Photon.Voice.AudioOutDelayControl/PlayDelayConfig::<Low>k__BackingField
	int32_t ___U3CLowU3Ek__BackingField_0;
	// System.Int32 Photon.Voice.AudioOutDelayControl/PlayDelayConfig::<High>k__BackingField
	int32_t ___U3CHighU3Ek__BackingField_1;
	// System.Int32 Photon.Voice.AudioOutDelayControl/PlayDelayConfig::<Max>k__BackingField
	int32_t ___U3CMaxU3Ek__BackingField_2;
	// System.Int32 Photon.Voice.AudioOutDelayControl/PlayDelayConfig::<SpeedUpPerc>k__BackingField
	int32_t ___U3CSpeedUpPercU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CLowU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7, ___U3CLowU3Ek__BackingField_0)); }
	inline int32_t get_U3CLowU3Ek__BackingField_0() const { return ___U3CLowU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CLowU3Ek__BackingField_0() { return &___U3CLowU3Ek__BackingField_0; }
	inline void set_U3CLowU3Ek__BackingField_0(int32_t value)
	{
		___U3CLowU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CHighU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7, ___U3CHighU3Ek__BackingField_1)); }
	inline int32_t get_U3CHighU3Ek__BackingField_1() const { return ___U3CHighU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CHighU3Ek__BackingField_1() { return &___U3CHighU3Ek__BackingField_1; }
	inline void set_U3CHighU3Ek__BackingField_1(int32_t value)
	{
		___U3CHighU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CMaxU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7, ___U3CMaxU3Ek__BackingField_2)); }
	inline int32_t get_U3CMaxU3Ek__BackingField_2() const { return ___U3CMaxU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CMaxU3Ek__BackingField_2() { return &___U3CMaxU3Ek__BackingField_2; }
	inline void set_U3CMaxU3Ek__BackingField_2(int32_t value)
	{
		___U3CMaxU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CSpeedUpPercU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7, ___U3CSpeedUpPercU3Ek__BackingField_3)); }
	inline int32_t get_U3CSpeedUpPercU3Ek__BackingField_3() const { return ___U3CSpeedUpPercU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CSpeedUpPercU3Ek__BackingField_3() { return &___U3CSpeedUpPercU3Ek__BackingField_3; }
	inline void set_U3CSpeedUpPercU3Ek__BackingField_3(int32_t value)
	{
		___U3CSpeedUpPercU3Ek__BackingField_3 = value;
	}
};


// Photon.Voice.Unity.Recorder/<>c__DisplayClass169_0
struct U3CU3Ec__DisplayClass169_0_t38A92BB229F58824432EAC644C1169EF297A8B01  : public RuntimeObject
{
public:
	// Photon.Voice.Unity.Recorder Photon.Voice.Unity.Recorder/<>c__DisplayClass169_0::<>4__this
	Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * ___U3CU3E4__this_0;
	// System.Action`1<System.Single> Photon.Voice.Unity.Recorder/<>c__DisplayClass169_0::detectionEndedCallback
	Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * ___detectionEndedCallback_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass169_0_t38A92BB229F58824432EAC644C1169EF297A8B01, ___U3CU3E4__this_0)); }
	inline Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_detectionEndedCallback_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass169_0_t38A92BB229F58824432EAC644C1169EF297A8B01, ___detectionEndedCallback_1)); }
	inline Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * get_detectionEndedCallback_1() const { return ___detectionEndedCallback_1; }
	inline Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 ** get_address_of_detectionEndedCallback_1() { return &___detectionEndedCallback_1; }
	inline void set_detectionEndedCallback_1(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * value)
	{
		___detectionEndedCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___detectionEndedCallback_1), (void*)value);
	}
};


// Photon.Voice.Unity.UtilityScripts.SaveIncomingStreamToFile/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tD5F43EC071A58F08F67AE864E90EC5E4A75B2D99  : public RuntimeObject
{
public:
	// CSCore.Codecs.WAV.WaveWriter Photon.Voice.Unity.UtilityScripts.SaveIncomingStreamToFile/<>c__DisplayClass5_0::waveWriter
	WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * ___waveWriter_0;
	// Photon.Voice.Unity.UtilityScripts.SaveIncomingStreamToFile Photon.Voice.Unity.UtilityScripts.SaveIncomingStreamToFile/<>c__DisplayClass5_0::<>4__this
	SaveIncomingStreamToFile_tF1D61ADFBEC004703068B6348E33B13FBD49019E * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_waveWriter_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_tD5F43EC071A58F08F67AE864E90EC5E4A75B2D99, ___waveWriter_0)); }
	inline WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * get_waveWriter_0() const { return ___waveWriter_0; }
	inline WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD ** get_address_of_waveWriter_0() { return &___waveWriter_0; }
	inline void set_waveWriter_0(WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * value)
	{
		___waveWriter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waveWriter_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_tD5F43EC071A58F08F67AE864E90EC5E4A75B2D99, ___U3CU3E4__this_1)); }
	inline SaveIncomingStreamToFile_tF1D61ADFBEC004703068B6348E33B13FBD49019E * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline SaveIncomingStreamToFile_tF1D61ADFBEC004703068B6348E33B13FBD49019E ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(SaveIncomingStreamToFile_tF1D61ADFBEC004703068B6348E33B13FBD49019E * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// Photon.Voice.Unity.UtilityScripts.SaveOutgoingStreamToFile/OutgoingStreamSaverFloat
struct OutgoingStreamSaverFloat_t4FBDC560128785F1310E576A2F007575F9A8682D  : public RuntimeObject
{
public:
	// CSCore.Codecs.WAV.WaveWriter Photon.Voice.Unity.UtilityScripts.SaveOutgoingStreamToFile/OutgoingStreamSaverFloat::wavWriter
	WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * ___wavWriter_0;

public:
	inline static int32_t get_offset_of_wavWriter_0() { return static_cast<int32_t>(offsetof(OutgoingStreamSaverFloat_t4FBDC560128785F1310E576A2F007575F9A8682D, ___wavWriter_0)); }
	inline WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * get_wavWriter_0() const { return ___wavWriter_0; }
	inline WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD ** get_address_of_wavWriter_0() { return &___wavWriter_0; }
	inline void set_wavWriter_0(WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * value)
	{
		___wavWriter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wavWriter_0), (void*)value);
	}
};


// Photon.Voice.Unity.UtilityScripts.SaveOutgoingStreamToFile/OutgoingStreamSaverShort
struct OutgoingStreamSaverShort_t53EDC7411304DFEEB7B9619029973B8C893234DA  : public RuntimeObject
{
public:
	// CSCore.Codecs.WAV.WaveWriter Photon.Voice.Unity.UtilityScripts.SaveOutgoingStreamToFile/OutgoingStreamSaverShort::wavWriter
	WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * ___wavWriter_0;

public:
	inline static int32_t get_offset_of_wavWriter_0() { return static_cast<int32_t>(offsetof(OutgoingStreamSaverShort_t53EDC7411304DFEEB7B9619029973B8C893234DA, ___wavWriter_0)); }
	inline WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * get_wavWriter_0() const { return ___wavWriter_0; }
	inline WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD ** get_address_of_wavWriter_0() { return &___wavWriter_0; }
	inline void set_wavWriter_0(WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * value)
	{
		___wavWriter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wavWriter_0), (void*)value);
	}
};


// Photon.Voice.Unity.Speaker/<>c__DisplayClass40_0
struct U3CU3Ec__DisplayClass40_0_t4A098DC7D5D9E1A05EC68630190A3C15A2226D6C  : public RuntimeObject
{
public:
	// Photon.Voice.Unity.Speaker Photon.Voice.Unity.Speaker/<>c__DisplayClass40_0::<>4__this
	Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * ___U3CU3E4__this_0;
	// Photon.Voice.AudioOutDelayControl/PlayDelayConfig Photon.Voice.Unity.Speaker/<>c__DisplayClass40_0::pdc
	PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7 * ___pdc_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass40_0_t4A098DC7D5D9E1A05EC68630190A3C15A2226D6C, ___U3CU3E4__this_0)); }
	inline Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_pdc_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass40_0_t4A098DC7D5D9E1A05EC68630190A3C15A2226D6C, ___pdc_1)); }
	inline PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7 * get_pdc_1() const { return ___pdc_1; }
	inline PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7 ** get_address_of_pdc_1() { return &___pdc_1; }
	inline void set_pdc_1(PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7 * value)
	{
		___pdc_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pdc_1), (void*)value);
	}
};


// Photon.Voice.Unity.UtilityScripts.TestTone/<>c
struct U3CU3Ec_t6D85E6278D22C528CBA18A7B1588B7D4F5B28943  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t6D85E6278D22C528CBA18A7B1588B7D4F5B28943_StaticFields
{
public:
	// Photon.Voice.Unity.UtilityScripts.TestTone/<>c Photon.Voice.Unity.UtilityScripts.TestTone/<>c::<>9
	U3CU3Ec_t6D85E6278D22C528CBA18A7B1588B7D4F5B28943 * ___U3CU3E9_0;
	// System.Func`1<Photon.Voice.IAudioDesc> Photon.Voice.Unity.UtilityScripts.TestTone/<>c::<>9__0_0
	Func_1_t3729C27ED506C17CDE248FA4C18C6B936CAE4718 * ___U3CU3E9__0_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6D85E6278D22C528CBA18A7B1588B7D4F5B28943_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t6D85E6278D22C528CBA18A7B1588B7D4F5B28943 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t6D85E6278D22C528CBA18A7B1588B7D4F5B28943 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t6D85E6278D22C528CBA18A7B1588B7D4F5B28943 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6D85E6278D22C528CBA18A7B1588B7D4F5B28943_StaticFields, ___U3CU3E9__0_0_1)); }
	inline Func_1_t3729C27ED506C17CDE248FA4C18C6B936CAE4718 * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline Func_1_t3729C27ED506C17CDE248FA4C18C6B936CAE4718 ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(Func_1_t3729C27ED506C17CDE248FA4C18C6B936CAE4718 * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}
};


// Photon.Voice.Unity.VoiceConnection/<>c__DisplayClass99_0
struct U3CU3Ec__DisplayClass99_0_tB8557F155B3EE52C474126E588912859E7FF606D  : public RuntimeObject
{
public:
	// Photon.Voice.Unity.VoiceConnection Photon.Voice.Unity.VoiceConnection/<>c__DisplayClass99_0::<>4__this
	VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704 * ___U3CU3E4__this_0;
	// Photon.Voice.Unity.Speaker Photon.Voice.Unity.VoiceConnection/<>c__DisplayClass99_0::speaker
	Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * ___speaker_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass99_0_tB8557F155B3EE52C474126E588912859E7FF606D, ___U3CU3E4__this_0)); }
	inline VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_speaker_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass99_0_tB8557F155B3EE52C474126E588912859E7FF606D, ___speaker_1)); }
	inline Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * get_speaker_1() const { return ___speaker_1; }
	inline Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA ** get_address_of_speaker_1() { return &___speaker_1; }
	inline void set_speaker_1(Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * value)
	{
		___speaker_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___speaker_1), (void*)value);
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


// Photon.Voice.AudioOutDelayControl`1<System.Single>
struct AudioOutDelayControl_1_t4AFC4DAD07D4AD82F8D05374F8859CB28041908F  : public AudioOutDelayControl_t0621DE672CAFF84572C184E15B46FBA41A364579
{
public:
	// System.Int32 Photon.Voice.AudioOutDelayControl`1::sizeofT
	int32_t ___sizeofT_0;
	// System.Int32 Photon.Voice.AudioOutDelayControl`1::frameSamples
	int32_t ___frameSamples_2;
	// System.Int32 Photon.Voice.AudioOutDelayControl`1::frameSize
	int32_t ___frameSize_3;
	// System.Int32 Photon.Voice.AudioOutDelayControl`1::bufferSamples
	int32_t ___bufferSamples_4;
	// System.Int32 Photon.Voice.AudioOutDelayControl`1::frequency
	int32_t ___frequency_5;
	// System.Int32 Photon.Voice.AudioOutDelayControl`1::clipWriteSamplePos
	int32_t ___clipWriteSamplePos_6;
	// System.Int32 Photon.Voice.AudioOutDelayControl`1::playSamplePosPrev
	int32_t ___playSamplePosPrev_7;
	// System.Int32 Photon.Voice.AudioOutDelayControl`1::sourceTimeSamplesPrev
	int32_t ___sourceTimeSamplesPrev_8;
	// System.Int32 Photon.Voice.AudioOutDelayControl`1::playLoopCount
	int32_t ___playLoopCount_9;
	// Photon.Voice.AudioOutDelayControl/PlayDelayConfig Photon.Voice.AudioOutDelayControl`1::playDelayConfig
	PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7 * ___playDelayConfig_10;
	// System.Int32 Photon.Voice.AudioOutDelayControl`1::channels
	int32_t ___channels_11;
	// System.Boolean Photon.Voice.AudioOutDelayControl`1::started
	bool ___started_12;
	// System.Boolean Photon.Voice.AudioOutDelayControl`1::flushed
	bool ___flushed_13;
	// System.Int32 Photon.Voice.AudioOutDelayControl`1::targetDelaySamples
	int32_t ___targetDelaySamples_14;
	// System.Int32 Photon.Voice.AudioOutDelayControl`1::upperTargetDelaySamples
	int32_t ___upperTargetDelaySamples_15;
	// System.Int32 Photon.Voice.AudioOutDelayControl`1::lowerTargetDelaySamples
	int32_t ___lowerTargetDelaySamples_16;
	// System.Int32 Photon.Voice.AudioOutDelayControl`1::maxDelaySamples
	int32_t ___maxDelaySamples_17;
	// System.Int32 Photon.Voice.AudioOutDelayControl`1::resampleRampEndDelaySamples
	int32_t ___resampleRampEndDelaySamples_18;
	// System.Int32 Photon.Voice.AudioOutDelayControl`1::lastPushTime
	int32_t ___lastPushTime_20;
	// Photon.Voice.ILogger Photon.Voice.AudioOutDelayControl`1::logger
	RuntimeObject* ___logger_21;
	// System.String Photon.Voice.AudioOutDelayControl`1::logPrefix
	String_t* ___logPrefix_22;
	// System.Boolean Photon.Voice.AudioOutDelayControl`1::debugInfo
	bool ___debugInfo_23;
	// System.Boolean Photon.Voice.AudioOutDelayControl`1::processInService
	bool ___processInService_24;
	// T[] Photon.Voice.AudioOutDelayControl`1::zeroFrame
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___zeroFrame_25;
	// T[] Photon.Voice.AudioOutDelayControl`1::resampledFrame
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___resampledFrame_26;
	// Photon.Voice.AudioUtil/TempoUp`1<T> Photon.Voice.AudioOutDelayControl`1::tempoUp
	TempoUp_1_tC2BB55C08038730DC8FA89A723269D5118E54626 * ___tempoUp_27;
	// System.Boolean Photon.Voice.AudioOutDelayControl`1::tempoChangeHQ
	bool ___tempoChangeHQ_28;
	// System.Collections.Generic.Queue`1<T[]> Photon.Voice.AudioOutDelayControl`1::frameQueue
	Queue_1_t865B9E26DEFD5908AB12DEAECF70EC4320C7D16E * ___frameQueue_29;
	// Photon.Voice.PrimitiveArrayPool`1<T> Photon.Voice.AudioOutDelayControl`1::framePool
	PrimitiveArrayPool_1_tC69A4367DAED259130664C75DBC74EBA50D1FA79 * ___framePool_31;
	// System.Boolean Photon.Voice.AudioOutDelayControl`1::catchingUp
	bool ___catchingUp_32;

public:
	inline static int32_t get_offset_of_sizeofT_0() { return static_cast<int32_t>(offsetof(AudioOutDelayControl_1_t4AFC4DAD07D4AD82F8D05374F8859CB28041908F, ___sizeofT_0)); }
	inline int32_t get_sizeofT_0() const { return ___sizeofT_0; }
	inline int32_t* get_address_of_sizeofT_0() { return &___sizeofT_0; }
	inline void set_sizeofT_0(int32_t value)
	{
		___sizeofT_0 = value;
	}

	inline static int32_t get_offset_of_frameSamples_2() { return static_cast<int32_t>(offsetof(AudioOutDelayControl_1_t4AFC4DAD07D4AD82F8D05374F8859CB28041908F, ___frameSamples_2)); }
	inline int32_t get_frameSamples_2() const { return ___frameSamples_2; }
	inline int32_t* get_address_of_frameSamples_2() { return &___frameSamples_2; }
	inline void set_frameSamples_2(int32_t value)
	{
		___frameSamples_2 = value;
	}

	inline static int32_t get_offset_of_frameSize_3() { return static_cast<int32_t>(offsetof(AudioOutDelayControl_1_t4AFC4DAD07D4AD82F8D05374F8859CB28041908F, ___frameSize_3)); }
	inline int32_t get_frameSize_3() const { return ___frameSize_3; }
	inline int32_t* get_address_of_frameSize_3() { return &___frameSize_3; }
	inline void set_frameSize_3(int32_t value)
	{
		___frameSize_3 = value;
	}

	inline static int32_t get_offset_of_bufferSamples_4() { return static_cast<int32_t>(offsetof(AudioOutDelayControl_1_t4AFC4DAD07D4AD82F8D05374F8859CB28041908F, ___bufferSamples_4)); }
	inline int32_t get_bufferSamples_4() const { return ___bufferSamples_4; }
	inline int32_t* get_address_of_bufferSamples_4() { return &___bufferSamples_4; }
	inline void set_bufferSamples_4(int32_t value)
	{
		___bufferSamples_4 = value;
	}

	inline static int32_t get_offset_of_frequency_5() { return static_cast<int32_t>(offsetof(AudioOutDelayControl_1_t4AFC4DAD07D4AD82F8D05374F8859CB28041908F, ___frequency_5)); }
	inline int32_t get_frequency_5() const { return ___frequency_5; }
	inline int32_t* get_address_of_frequency_5() { return &___frequency_5; }
	inline void set_frequency_5(int32_t value)
	{
		___frequency_5 = value;
	}

	inline static int32_t get_offset_of_clipWriteSamplePos_6() { return static_cast<int32_t>(offsetof(AudioOutDelayControl_1_t4AFC4DAD07D4AD82F8D05374F8859CB28041908F, ___clipWriteSamplePos_6)); }
	inline int32_t get_clipWriteSamplePos_6() const { return ___clipWriteSamplePos_6; }
	inline int32_t* get_address_of_clipWriteSamplePos_6() { return &___clipWriteSamplePos_6; }
	inline void set_clipWriteSamplePos_6(int32_t value)
	{
		___clipWriteSamplePos_6 = value;
	}

	inline static int32_t get_offset_of_playSamplePosPrev_7() { return static_cast<int32_t>(offsetof(AudioOutDelayControl_1_t4AFC4DAD07D4AD82F8D05374F8859CB28041908F, ___playSamplePosPrev_7)); }
	inline int32_t get_playSamplePosPrev_7() const { return ___playSamplePosPrev_7; }
	inline int32_t* get_address_of_playSamplePosPrev_7() { return &___playSamplePosPrev_7; }
	inline void set_playSamplePosPrev_7(int32_t value)
	{
		___playSamplePosPrev_7 = value;
	}

	inline static int32_t get_offset_of_sourceTimeSamplesPrev_8() { return static_cast<int32_t>(offsetof(AudioOutDelayControl_1_t4AFC4DAD07D4AD82F8D05374F8859CB28041908F, ___sourceTimeSamplesPrev_8)); }
	inline int32_t get_sourceTimeSamplesPrev_8() const { return ___sourceTimeSamplesPrev_8; }
	inline int32_t* get_address_of_sourceTimeSamplesPrev_8() { return &___sourceTimeSamplesPrev_8; }
	inline void set_sourceTimeSamplesPrev_8(int32_t value)
	{
		___sourceTimeSamplesPrev_8 = value;
	}

	inline static int32_t get_offset_of_playLoopCount_9() { return static_cast<int32_t>(offsetof(AudioOutDelayControl_1_t4AFC4DAD07D4AD82F8D05374F8859CB28041908F, ___playLoopCount_9)); }
	inline int32_t get_playLoopCount_9() const { return ___playLoopCount_9; }
	inline int32_t* get_address_of_playLoopCount_9() { return &___playLoopCount_9; }
	inline void set_playLoopCount_9(int32_t value)
	{
		___playLoopCount_9 = value;
	}

	inline static int32_t get_offset_of_playDelayConfig_10() { return static_cast<int32_t>(offsetof(AudioOutDelayControl_1_t4AFC4DAD07D4AD82F8D05374F8859CB28041908F, ___playDelayConfig_10)); }
	inline PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7 * get_playDelayConfig_10() const { return ___playDelayConfig_10; }
	inline PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7 ** get_address_of_playDelayConfig_10() { return &___playDelayConfig_10; }
	inline void set_playDelayConfig_10(PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7 * value)
	{
		___playDelayConfig_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playDelayConfig_10), (void*)value);
	}

	inline static int32_t get_offset_of_channels_11() { return static_cast<int32_t>(offsetof(AudioOutDelayControl_1_t4AFC4DAD07D4AD82F8D05374F8859CB28041908F, ___channels_11)); }
	inline int32_t get_channels_11() const { return ___channels_11; }
	inline int32_t* get_address_of_channels_11() { return &___channels_11; }
	inline void set_channels_11(int32_t value)
	{
		___channels_11 = value;
	}

	inline static int32_t get_offset_of_started_12() { return static_cast<int32_t>(offsetof(AudioOutDelayControl_1_t4AFC4DAD07D4AD82F8D05374F8859CB28041908F, ___started_12)); }
	inline bool get_started_12() const { return ___started_12; }
	inline bool* get_address_of_started_12() { return &___started_12; }
	inline void set_started_12(bool value)
	{
		___started_12 = value;
	}

	inline static int32_t get_offset_of_flushed_13() { return static_cast<int32_t>(offsetof(AudioOutDelayControl_1_t4AFC4DAD07D4AD82F8D05374F8859CB28041908F, ___flushed_13)); }
	inline bool get_flushed_13() const { return ___flushed_13; }
	inline bool* get_address_of_flushed_13() { return &___flushed_13; }
	inline void set_flushed_13(bool value)
	{
		___flushed_13 = value;
	}

	inline static int32_t get_offset_of_targetDelaySamples_14() { return static_cast<int32_t>(offsetof(AudioOutDelayControl_1_t4AFC4DAD07D4AD82F8D05374F8859CB28041908F, ___targetDelaySamples_14)); }
	inline int32_t get_targetDelaySamples_14() const { return ___targetDelaySamples_14; }
	inline int32_t* get_address_of_targetDelaySamples_14() { return &___targetDelaySamples_14; }
	inline void set_targetDelaySamples_14(int32_t value)
	{
		___targetDelaySamples_14 = value;
	}

	inline static int32_t get_offset_of_upperTargetDelaySamples_15() { return static_cast<int32_t>(offsetof(AudioOutDelayControl_1_t4AFC4DAD07D4AD82F8D05374F8859CB28041908F, ___upperTargetDelaySamples_15)); }
	inline int32_t get_upperTargetDelaySamples_15() const { return ___upperTargetDelaySamples_15; }
	inline int32_t* get_address_of_upperTargetDelaySamples_15() { return &___upperTargetDelaySamples_15; }
	inline void set_upperTargetDelaySamples_15(int32_t value)
	{
		___upperTargetDelaySamples_15 = value;
	}

	inline static int32_t get_offset_of_lowerTargetDelaySamples_16() { return static_cast<int32_t>(offsetof(AudioOutDelayControl_1_t4AFC4DAD07D4AD82F8D05374F8859CB28041908F, ___lowerTargetDelaySamples_16)); }
	inline int32_t get_lowerTargetDelaySamples_16() const { return ___lowerTargetDelaySamples_16; }
	inline int32_t* get_address_of_lowerTargetDelaySamples_16() { return &___lowerTargetDelaySamples_16; }
	inline void set_lowerTargetDelaySamples_16(int32_t value)
	{
		___lowerTargetDelaySamples_16 = value;
	}

	inline static int32_t get_offset_of_maxDelaySamples_17() { return static_cast<int32_t>(offsetof(AudioOutDelayControl_1_t4AFC4DAD07D4AD82F8D05374F8859CB28041908F, ___maxDelaySamples_17)); }
	inline int32_t get_maxDelaySamples_17() const { return ___maxDelaySamples_17; }
	inline int32_t* get_address_of_maxDelaySamples_17() { return &___maxDelaySamples_17; }
	inline void set_maxDelaySamples_17(int32_t value)
	{
		___maxDelaySamples_17 = value;
	}

	inline static int32_t get_offset_of_resampleRampEndDelaySamples_18() { return static_cast<int32_t>(offsetof(AudioOutDelayControl_1_t4AFC4DAD07D4AD82F8D05374F8859CB28041908F, ___resampleRampEndDelaySamples_18)); }
	inline int32_t get_resampleRampEndDelaySamples_18() const { return ___resampleRampEndDelaySamples_18; }
	inline int32_t* get_address_of_resampleRampEndDelaySamples_18() { return &___resampleRampEndDelaySamples_18; }
	inline void set_resampleRampEndDelaySamples_18(int32_t value)
	{
		___resampleRampEndDelaySamples_18 = value;
	}

	inline static int32_t get_offset_of_lastPushTime_20() { return static_cast<int32_t>(offsetof(AudioOutDelayControl_1_t4AFC4DAD07D4AD82F8D05374F8859CB28041908F, ___lastPushTime_20)); }
	inline int32_t get_lastPushTime_20() const { return ___lastPushTime_20; }
	inline int32_t* get_address_of_lastPushTime_20() { return &___lastPushTime_20; }
	inline void set_lastPushTime_20(int32_t value)
	{
		___lastPushTime_20 = value;
	}

	inline static int32_t get_offset_of_logger_21() { return static_cast<int32_t>(offsetof(AudioOutDelayControl_1_t4AFC4DAD07D4AD82F8D05374F8859CB28041908F, ___logger_21)); }
	inline RuntimeObject* get_logger_21() const { return ___logger_21; }
	inline RuntimeObject** get_address_of_logger_21() { return &___logger_21; }
	inline void set_logger_21(RuntimeObject* value)
	{
		___logger_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_21), (void*)value);
	}

	inline static int32_t get_offset_of_logPrefix_22() { return static_cast<int32_t>(offsetof(AudioOutDelayControl_1_t4AFC4DAD07D4AD82F8D05374F8859CB28041908F, ___logPrefix_22)); }
	inline String_t* get_logPrefix_22() const { return ___logPrefix_22; }
	inline String_t** get_address_of_logPrefix_22() { return &___logPrefix_22; }
	inline void set_logPrefix_22(String_t* value)
	{
		___logPrefix_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logPrefix_22), (void*)value);
	}

	inline static int32_t get_offset_of_debugInfo_23() { return static_cast<int32_t>(offsetof(AudioOutDelayControl_1_t4AFC4DAD07D4AD82F8D05374F8859CB28041908F, ___debugInfo_23)); }
	inline bool get_debugInfo_23() const { return ___debugInfo_23; }
	inline bool* get_address_of_debugInfo_23() { return &___debugInfo_23; }
	inline void set_debugInfo_23(bool value)
	{
		___debugInfo_23 = value;
	}

	inline static int32_t get_offset_of_processInService_24() { return static_cast<int32_t>(offsetof(AudioOutDelayControl_1_t4AFC4DAD07D4AD82F8D05374F8859CB28041908F, ___processInService_24)); }
	inline bool get_processInService_24() const { return ___processInService_24; }
	inline bool* get_address_of_processInService_24() { return &___processInService_24; }
	inline void set_processInService_24(bool value)
	{
		___processInService_24 = value;
	}

	inline static int32_t get_offset_of_zeroFrame_25() { return static_cast<int32_t>(offsetof(AudioOutDelayControl_1_t4AFC4DAD07D4AD82F8D05374F8859CB28041908F, ___zeroFrame_25)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_zeroFrame_25() const { return ___zeroFrame_25; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_zeroFrame_25() { return &___zeroFrame_25; }
	inline void set_zeroFrame_25(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___zeroFrame_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___zeroFrame_25), (void*)value);
	}

	inline static int32_t get_offset_of_resampledFrame_26() { return static_cast<int32_t>(offsetof(AudioOutDelayControl_1_t4AFC4DAD07D4AD82F8D05374F8859CB28041908F, ___resampledFrame_26)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_resampledFrame_26() const { return ___resampledFrame_26; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_resampledFrame_26() { return &___resampledFrame_26; }
	inline void set_resampledFrame_26(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___resampledFrame_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resampledFrame_26), (void*)value);
	}

	inline static int32_t get_offset_of_tempoUp_27() { return static_cast<int32_t>(offsetof(AudioOutDelayControl_1_t4AFC4DAD07D4AD82F8D05374F8859CB28041908F, ___tempoUp_27)); }
	inline TempoUp_1_tC2BB55C08038730DC8FA89A723269D5118E54626 * get_tempoUp_27() const { return ___tempoUp_27; }
	inline TempoUp_1_tC2BB55C08038730DC8FA89A723269D5118E54626 ** get_address_of_tempoUp_27() { return &___tempoUp_27; }
	inline void set_tempoUp_27(TempoUp_1_tC2BB55C08038730DC8FA89A723269D5118E54626 * value)
	{
		___tempoUp_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tempoUp_27), (void*)value);
	}

	inline static int32_t get_offset_of_tempoChangeHQ_28() { return static_cast<int32_t>(offsetof(AudioOutDelayControl_1_t4AFC4DAD07D4AD82F8D05374F8859CB28041908F, ___tempoChangeHQ_28)); }
	inline bool get_tempoChangeHQ_28() const { return ___tempoChangeHQ_28; }
	inline bool* get_address_of_tempoChangeHQ_28() { return &___tempoChangeHQ_28; }
	inline void set_tempoChangeHQ_28(bool value)
	{
		___tempoChangeHQ_28 = value;
	}

	inline static int32_t get_offset_of_frameQueue_29() { return static_cast<int32_t>(offsetof(AudioOutDelayControl_1_t4AFC4DAD07D4AD82F8D05374F8859CB28041908F, ___frameQueue_29)); }
	inline Queue_1_t865B9E26DEFD5908AB12DEAECF70EC4320C7D16E * get_frameQueue_29() const { return ___frameQueue_29; }
	inline Queue_1_t865B9E26DEFD5908AB12DEAECF70EC4320C7D16E ** get_address_of_frameQueue_29() { return &___frameQueue_29; }
	inline void set_frameQueue_29(Queue_1_t865B9E26DEFD5908AB12DEAECF70EC4320C7D16E * value)
	{
		___frameQueue_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameQueue_29), (void*)value);
	}

	inline static int32_t get_offset_of_framePool_31() { return static_cast<int32_t>(offsetof(AudioOutDelayControl_1_t4AFC4DAD07D4AD82F8D05374F8859CB28041908F, ___framePool_31)); }
	inline PrimitiveArrayPool_1_tC69A4367DAED259130664C75DBC74EBA50D1FA79 * get_framePool_31() const { return ___framePool_31; }
	inline PrimitiveArrayPool_1_tC69A4367DAED259130664C75DBC74EBA50D1FA79 ** get_address_of_framePool_31() { return &___framePool_31; }
	inline void set_framePool_31(PrimitiveArrayPool_1_tC69A4367DAED259130664C75DBC74EBA50D1FA79 * value)
	{
		___framePool_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___framePool_31), (void*)value);
	}

	inline static int32_t get_offset_of_catchingUp_32() { return static_cast<int32_t>(offsetof(AudioOutDelayControl_1_t4AFC4DAD07D4AD82F8D05374F8859CB28041908F, ___catchingUp_32)); }
	inline bool get_catchingUp_32() const { return ___catchingUp_32; }
	inline bool* get_address_of_catchingUp_32() { return &___catchingUp_32; }
	inline void set_catchingUp_32(bool value)
	{
		___catchingUp_32 = value;
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


// Photon.Voice.Unity.NativeAndroidMicrophoneSettings
struct NativeAndroidMicrophoneSettings_t81CD982289044EB8A482468C8FB36BFAC50A40E0 
{
public:
	// System.Boolean Photon.Voice.Unity.NativeAndroidMicrophoneSettings::AcousticEchoCancellation
	bool ___AcousticEchoCancellation_0;
	// System.Boolean Photon.Voice.Unity.NativeAndroidMicrophoneSettings::AutomaticGainControl
	bool ___AutomaticGainControl_1;
	// System.Boolean Photon.Voice.Unity.NativeAndroidMicrophoneSettings::NoiseSuppression
	bool ___NoiseSuppression_2;

public:
	inline static int32_t get_offset_of_AcousticEchoCancellation_0() { return static_cast<int32_t>(offsetof(NativeAndroidMicrophoneSettings_t81CD982289044EB8A482468C8FB36BFAC50A40E0, ___AcousticEchoCancellation_0)); }
	inline bool get_AcousticEchoCancellation_0() const { return ___AcousticEchoCancellation_0; }
	inline bool* get_address_of_AcousticEchoCancellation_0() { return &___AcousticEchoCancellation_0; }
	inline void set_AcousticEchoCancellation_0(bool value)
	{
		___AcousticEchoCancellation_0 = value;
	}

	inline static int32_t get_offset_of_AutomaticGainControl_1() { return static_cast<int32_t>(offsetof(NativeAndroidMicrophoneSettings_t81CD982289044EB8A482468C8FB36BFAC50A40E0, ___AutomaticGainControl_1)); }
	inline bool get_AutomaticGainControl_1() const { return ___AutomaticGainControl_1; }
	inline bool* get_address_of_AutomaticGainControl_1() { return &___AutomaticGainControl_1; }
	inline void set_AutomaticGainControl_1(bool value)
	{
		___AutomaticGainControl_1 = value;
	}

	inline static int32_t get_offset_of_NoiseSuppression_2() { return static_cast<int32_t>(offsetof(NativeAndroidMicrophoneSettings_t81CD982289044EB8A482468C8FB36BFAC50A40E0, ___NoiseSuppression_2)); }
	inline bool get_NoiseSuppression_2() const { return ___NoiseSuppression_2; }
	inline bool* get_address_of_NoiseSuppression_2() { return &___NoiseSuppression_2; }
	inline void set_NoiseSuppression_2(bool value)
	{
		___NoiseSuppression_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Photon.Voice.Unity.NativeAndroidMicrophoneSettings
struct NativeAndroidMicrophoneSettings_t81CD982289044EB8A482468C8FB36BFAC50A40E0_marshaled_pinvoke
{
	int32_t ___AcousticEchoCancellation_0;
	int32_t ___AutomaticGainControl_1;
	int32_t ___NoiseSuppression_2;
};
// Native definition for COM marshalling of Photon.Voice.Unity.NativeAndroidMicrophoneSettings
struct NativeAndroidMicrophoneSettings_t81CD982289044EB8A482468C8FB36BFAC50A40E0_marshaled_com
{
	int32_t ___AcousticEchoCancellation_0;
	int32_t ___AutomaticGainControl_1;
	int32_t ___NoiseSuppression_2;
};

// Photon.Voice.Unity.PlaybackDelaySettings
struct PlaybackDelaySettings_tB71597D43586CA1E8F24F7578487462A40E280E3 
{
public:
	// System.Int32 Photon.Voice.Unity.PlaybackDelaySettings::MinDelaySoft
	int32_t ___MinDelaySoft_3;
	// System.Int32 Photon.Voice.Unity.PlaybackDelaySettings::MaxDelaySoft
	int32_t ___MaxDelaySoft_4;
	// System.Int32 Photon.Voice.Unity.PlaybackDelaySettings::MaxDelayHard
	int32_t ___MaxDelayHard_5;

public:
	inline static int32_t get_offset_of_MinDelaySoft_3() { return static_cast<int32_t>(offsetof(PlaybackDelaySettings_tB71597D43586CA1E8F24F7578487462A40E280E3, ___MinDelaySoft_3)); }
	inline int32_t get_MinDelaySoft_3() const { return ___MinDelaySoft_3; }
	inline int32_t* get_address_of_MinDelaySoft_3() { return &___MinDelaySoft_3; }
	inline void set_MinDelaySoft_3(int32_t value)
	{
		___MinDelaySoft_3 = value;
	}

	inline static int32_t get_offset_of_MaxDelaySoft_4() { return static_cast<int32_t>(offsetof(PlaybackDelaySettings_tB71597D43586CA1E8F24F7578487462A40E280E3, ___MaxDelaySoft_4)); }
	inline int32_t get_MaxDelaySoft_4() const { return ___MaxDelaySoft_4; }
	inline int32_t* get_address_of_MaxDelaySoft_4() { return &___MaxDelaySoft_4; }
	inline void set_MaxDelaySoft_4(int32_t value)
	{
		___MaxDelaySoft_4 = value;
	}

	inline static int32_t get_offset_of_MaxDelayHard_5() { return static_cast<int32_t>(offsetof(PlaybackDelaySettings_tB71597D43586CA1E8F24F7578487462A40E280E3, ___MaxDelayHard_5)); }
	inline int32_t get_MaxDelayHard_5() const { return ___MaxDelayHard_5; }
	inline int32_t* get_address_of_MaxDelayHard_5() { return &___MaxDelayHard_5; }
	inline void set_MaxDelayHard_5(int32_t value)
	{
		___MaxDelayHard_5 = value;
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


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_3), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_4), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
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


// Photon.Voice.Unity.Recorder/PhotonVoiceCreatedParams
struct PhotonVoiceCreatedParams_t144861E5442693D3593C0DD733A7368F69DF7279  : public PhotonVoiceCreatedParams_t2016E70662CD6C4DC00630565940783AC2469E7D
{
public:

public:
};


// CSCore.AudioEncoding
struct AudioEncoding_tB144FB61AA9FECA4B4F3A52DF8E6110BE7B147FE 
{
public:
	// System.Int16 CSCore.AudioEncoding::value__
	int16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AudioEncoding_tB144FB61AA9FECA4B4F3A52DF8E6110BE7B147FE, ___value___2)); }
	inline int16_t get_value___2() const { return ___value___2; }
	inline int16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int16_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AudioSpeakerMode
struct AudioSpeakerMode_tFB0F4469E8C6A7FE319AA072D7CAA6006E57B80E 
{
public:
	// System.Int32 UnityEngine.AudioSpeakerMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AudioSpeakerMode_tFB0F4469E8C6A7FE319AA072D7CAA6006E57B80E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// CSCore.ChannelMask
struct ChannelMask_t66A7F964A2DB39B1BF8D737BD920E7D5E7D01389 
{
public:
	// System.Int32 CSCore.ChannelMask::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ChannelMask_t66A7F964A2DB39B1BF8D737BD920E7D5E7D01389, ___value___2)); }
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


// ExitGames.Client.Photon.DebugLevel
struct DebugLevel_tC8484DC9EC87B366F1EC06E782547344E507AC30 
{
public:
	// System.Byte ExitGames.Client.Photon.DebugLevel::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebugLevel_tC8484DC9EC87B366F1EC06E782547344E507AC30, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
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

// System.IO.FileAccess
struct FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
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


// Photon.Voice.Unity.UnityAudioOut
struct UnityAudioOut_t137B3BB0274927C067BEC30C1F74F382240BD3BA  : public AudioOutDelayControl_1_t4AFC4DAD07D4AD82F8D05374F8859CB28041908F
{
public:
	// UnityEngine.AudioSource Photon.Voice.Unity.UnityAudioOut::source
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___source_33;

public:
	inline static int32_t get_offset_of_source_33() { return static_cast<int32_t>(offsetof(UnityAudioOut_t137B3BB0274927C067BEC30C1F74F382240BD3BA, ___source_33)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_source_33() const { return ___source_33; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_source_33() { return &___source_33; }
	inline void set_source_33(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___source_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_33), (void*)value);
	}
};


// Photon.Voice.WebRTCAudioProcessor
struct WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6  : public WebRTCAudioLib_t21B9D75D4AF194FB0BE0C2A31378C85B60B215C8
{
public:
	// System.Int32 Photon.Voice.WebRTCAudioProcessor::reverseStreamDelayMs
	int32_t ___reverseStreamDelayMs_2;
	// System.Boolean Photon.Voice.WebRTCAudioProcessor::aec
	bool ___aec_3;
	// System.Boolean Photon.Voice.WebRTCAudioProcessor::aecHighPass
	bool ___aecHighPass_4;
	// System.Boolean Photon.Voice.WebRTCAudioProcessor::aecm
	bool ___aecm_5;
	// System.Boolean Photon.Voice.WebRTCAudioProcessor::highPass
	bool ___highPass_6;
	// System.Boolean Photon.Voice.WebRTCAudioProcessor::ns
	bool ___ns_7;
	// System.Boolean Photon.Voice.WebRTCAudioProcessor::agc
	bool ___agc_8;
	// System.Int32 Photon.Voice.WebRTCAudioProcessor::agcCompressionGain
	int32_t ___agcCompressionGain_9;
	// System.Int32 Photon.Voice.WebRTCAudioProcessor::agcTargetLevel
	int32_t ___agcTargetLevel_10;
	// System.Boolean Photon.Voice.WebRTCAudioProcessor::agc2
	bool ___agc2_11;
	// System.Boolean Photon.Voice.WebRTCAudioProcessor::vad
	bool ___vad_12;
	// System.Boolean Photon.Voice.WebRTCAudioProcessor::reverseStreamThreadRunning
	bool ___reverseStreamThreadRunning_13;
	// System.Collections.Generic.Queue`1<System.Int16[]> Photon.Voice.WebRTCAudioProcessor::reverseStreamQueue
	Queue_1_t4A2620F8C38A3EF76782E492059C52B76FCF17D3 * ___reverseStreamQueue_14;
	// System.Threading.AutoResetEvent Photon.Voice.WebRTCAudioProcessor::reverseStreamQueueReady
	AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * ___reverseStreamQueueReady_15;
	// Photon.Voice.FactoryPrimitiveArrayPool`1<System.Int16> Photon.Voice.WebRTCAudioProcessor::reverseBufferFactory
	FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2 * ___reverseBufferFactory_16;
	// System.Boolean Photon.Voice.WebRTCAudioProcessor::bypass
	bool ___bypass_17;
	// System.Int32 Photon.Voice.WebRTCAudioProcessor::inFrameSize
	int32_t ___inFrameSize_18;
	// System.Int32 Photon.Voice.WebRTCAudioProcessor::processFrameSize
	int32_t ___processFrameSize_19;
	// System.Int32 Photon.Voice.WebRTCAudioProcessor::samplingRate
	int32_t ___samplingRate_20;
	// System.Int32 Photon.Voice.WebRTCAudioProcessor::channels
	int32_t ___channels_21;
	// System.IntPtr Photon.Voice.WebRTCAudioProcessor::proc
	intptr_t ___proc_22;
	// System.Boolean Photon.Voice.WebRTCAudioProcessor::disposed
	bool ___disposed_23;
	// Photon.Voice.Framer`1<System.Single> Photon.Voice.WebRTCAudioProcessor::reverseFramer
	Framer_1_t04F378EE94C8949DC3D5E53C79B71D0E38A18623 * ___reverseFramer_24;
	// System.Int32 Photon.Voice.WebRTCAudioProcessor::reverseSamplingRate
	int32_t ___reverseSamplingRate_25;
	// System.Int32 Photon.Voice.WebRTCAudioProcessor::reverseChannels
	int32_t ___reverseChannels_26;
	// Photon.Voice.ILogger Photon.Voice.WebRTCAudioProcessor::logger
	RuntimeObject* ___logger_27;
	// System.Boolean Photon.Voice.WebRTCAudioProcessor::aecInited
	bool ___aecInited_30;
	// System.Int32 Photon.Voice.WebRTCAudioProcessor::lastProcessErr
	int32_t ___lastProcessErr_31;
	// System.Int32 Photon.Voice.WebRTCAudioProcessor::lastProcessReverseErr
	int32_t ___lastProcessReverseErr_32;

public:
	inline static int32_t get_offset_of_reverseStreamDelayMs_2() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6, ___reverseStreamDelayMs_2)); }
	inline int32_t get_reverseStreamDelayMs_2() const { return ___reverseStreamDelayMs_2; }
	inline int32_t* get_address_of_reverseStreamDelayMs_2() { return &___reverseStreamDelayMs_2; }
	inline void set_reverseStreamDelayMs_2(int32_t value)
	{
		___reverseStreamDelayMs_2 = value;
	}

	inline static int32_t get_offset_of_aec_3() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6, ___aec_3)); }
	inline bool get_aec_3() const { return ___aec_3; }
	inline bool* get_address_of_aec_3() { return &___aec_3; }
	inline void set_aec_3(bool value)
	{
		___aec_3 = value;
	}

	inline static int32_t get_offset_of_aecHighPass_4() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6, ___aecHighPass_4)); }
	inline bool get_aecHighPass_4() const { return ___aecHighPass_4; }
	inline bool* get_address_of_aecHighPass_4() { return &___aecHighPass_4; }
	inline void set_aecHighPass_4(bool value)
	{
		___aecHighPass_4 = value;
	}

	inline static int32_t get_offset_of_aecm_5() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6, ___aecm_5)); }
	inline bool get_aecm_5() const { return ___aecm_5; }
	inline bool* get_address_of_aecm_5() { return &___aecm_5; }
	inline void set_aecm_5(bool value)
	{
		___aecm_5 = value;
	}

	inline static int32_t get_offset_of_highPass_6() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6, ___highPass_6)); }
	inline bool get_highPass_6() const { return ___highPass_6; }
	inline bool* get_address_of_highPass_6() { return &___highPass_6; }
	inline void set_highPass_6(bool value)
	{
		___highPass_6 = value;
	}

	inline static int32_t get_offset_of_ns_7() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6, ___ns_7)); }
	inline bool get_ns_7() const { return ___ns_7; }
	inline bool* get_address_of_ns_7() { return &___ns_7; }
	inline void set_ns_7(bool value)
	{
		___ns_7 = value;
	}

	inline static int32_t get_offset_of_agc_8() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6, ___agc_8)); }
	inline bool get_agc_8() const { return ___agc_8; }
	inline bool* get_address_of_agc_8() { return &___agc_8; }
	inline void set_agc_8(bool value)
	{
		___agc_8 = value;
	}

	inline static int32_t get_offset_of_agcCompressionGain_9() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6, ___agcCompressionGain_9)); }
	inline int32_t get_agcCompressionGain_9() const { return ___agcCompressionGain_9; }
	inline int32_t* get_address_of_agcCompressionGain_9() { return &___agcCompressionGain_9; }
	inline void set_agcCompressionGain_9(int32_t value)
	{
		___agcCompressionGain_9 = value;
	}

	inline static int32_t get_offset_of_agcTargetLevel_10() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6, ___agcTargetLevel_10)); }
	inline int32_t get_agcTargetLevel_10() const { return ___agcTargetLevel_10; }
	inline int32_t* get_address_of_agcTargetLevel_10() { return &___agcTargetLevel_10; }
	inline void set_agcTargetLevel_10(int32_t value)
	{
		___agcTargetLevel_10 = value;
	}

	inline static int32_t get_offset_of_agc2_11() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6, ___agc2_11)); }
	inline bool get_agc2_11() const { return ___agc2_11; }
	inline bool* get_address_of_agc2_11() { return &___agc2_11; }
	inline void set_agc2_11(bool value)
	{
		___agc2_11 = value;
	}

	inline static int32_t get_offset_of_vad_12() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6, ___vad_12)); }
	inline bool get_vad_12() const { return ___vad_12; }
	inline bool* get_address_of_vad_12() { return &___vad_12; }
	inline void set_vad_12(bool value)
	{
		___vad_12 = value;
	}

	inline static int32_t get_offset_of_reverseStreamThreadRunning_13() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6, ___reverseStreamThreadRunning_13)); }
	inline bool get_reverseStreamThreadRunning_13() const { return ___reverseStreamThreadRunning_13; }
	inline bool* get_address_of_reverseStreamThreadRunning_13() { return &___reverseStreamThreadRunning_13; }
	inline void set_reverseStreamThreadRunning_13(bool value)
	{
		___reverseStreamThreadRunning_13 = value;
	}

	inline static int32_t get_offset_of_reverseStreamQueue_14() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6, ___reverseStreamQueue_14)); }
	inline Queue_1_t4A2620F8C38A3EF76782E492059C52B76FCF17D3 * get_reverseStreamQueue_14() const { return ___reverseStreamQueue_14; }
	inline Queue_1_t4A2620F8C38A3EF76782E492059C52B76FCF17D3 ** get_address_of_reverseStreamQueue_14() { return &___reverseStreamQueue_14; }
	inline void set_reverseStreamQueue_14(Queue_1_t4A2620F8C38A3EF76782E492059C52B76FCF17D3 * value)
	{
		___reverseStreamQueue_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reverseStreamQueue_14), (void*)value);
	}

	inline static int32_t get_offset_of_reverseStreamQueueReady_15() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6, ___reverseStreamQueueReady_15)); }
	inline AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * get_reverseStreamQueueReady_15() const { return ___reverseStreamQueueReady_15; }
	inline AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D ** get_address_of_reverseStreamQueueReady_15() { return &___reverseStreamQueueReady_15; }
	inline void set_reverseStreamQueueReady_15(AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * value)
	{
		___reverseStreamQueueReady_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reverseStreamQueueReady_15), (void*)value);
	}

	inline static int32_t get_offset_of_reverseBufferFactory_16() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6, ___reverseBufferFactory_16)); }
	inline FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2 * get_reverseBufferFactory_16() const { return ___reverseBufferFactory_16; }
	inline FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2 ** get_address_of_reverseBufferFactory_16() { return &___reverseBufferFactory_16; }
	inline void set_reverseBufferFactory_16(FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2 * value)
	{
		___reverseBufferFactory_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reverseBufferFactory_16), (void*)value);
	}

	inline static int32_t get_offset_of_bypass_17() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6, ___bypass_17)); }
	inline bool get_bypass_17() const { return ___bypass_17; }
	inline bool* get_address_of_bypass_17() { return &___bypass_17; }
	inline void set_bypass_17(bool value)
	{
		___bypass_17 = value;
	}

	inline static int32_t get_offset_of_inFrameSize_18() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6, ___inFrameSize_18)); }
	inline int32_t get_inFrameSize_18() const { return ___inFrameSize_18; }
	inline int32_t* get_address_of_inFrameSize_18() { return &___inFrameSize_18; }
	inline void set_inFrameSize_18(int32_t value)
	{
		___inFrameSize_18 = value;
	}

	inline static int32_t get_offset_of_processFrameSize_19() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6, ___processFrameSize_19)); }
	inline int32_t get_processFrameSize_19() const { return ___processFrameSize_19; }
	inline int32_t* get_address_of_processFrameSize_19() { return &___processFrameSize_19; }
	inline void set_processFrameSize_19(int32_t value)
	{
		___processFrameSize_19 = value;
	}

	inline static int32_t get_offset_of_samplingRate_20() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6, ___samplingRate_20)); }
	inline int32_t get_samplingRate_20() const { return ___samplingRate_20; }
	inline int32_t* get_address_of_samplingRate_20() { return &___samplingRate_20; }
	inline void set_samplingRate_20(int32_t value)
	{
		___samplingRate_20 = value;
	}

	inline static int32_t get_offset_of_channels_21() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6, ___channels_21)); }
	inline int32_t get_channels_21() const { return ___channels_21; }
	inline int32_t* get_address_of_channels_21() { return &___channels_21; }
	inline void set_channels_21(int32_t value)
	{
		___channels_21 = value;
	}

	inline static int32_t get_offset_of_proc_22() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6, ___proc_22)); }
	inline intptr_t get_proc_22() const { return ___proc_22; }
	inline intptr_t* get_address_of_proc_22() { return &___proc_22; }
	inline void set_proc_22(intptr_t value)
	{
		___proc_22 = value;
	}

	inline static int32_t get_offset_of_disposed_23() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6, ___disposed_23)); }
	inline bool get_disposed_23() const { return ___disposed_23; }
	inline bool* get_address_of_disposed_23() { return &___disposed_23; }
	inline void set_disposed_23(bool value)
	{
		___disposed_23 = value;
	}

	inline static int32_t get_offset_of_reverseFramer_24() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6, ___reverseFramer_24)); }
	inline Framer_1_t04F378EE94C8949DC3D5E53C79B71D0E38A18623 * get_reverseFramer_24() const { return ___reverseFramer_24; }
	inline Framer_1_t04F378EE94C8949DC3D5E53C79B71D0E38A18623 ** get_address_of_reverseFramer_24() { return &___reverseFramer_24; }
	inline void set_reverseFramer_24(Framer_1_t04F378EE94C8949DC3D5E53C79B71D0E38A18623 * value)
	{
		___reverseFramer_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reverseFramer_24), (void*)value);
	}

	inline static int32_t get_offset_of_reverseSamplingRate_25() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6, ___reverseSamplingRate_25)); }
	inline int32_t get_reverseSamplingRate_25() const { return ___reverseSamplingRate_25; }
	inline int32_t* get_address_of_reverseSamplingRate_25() { return &___reverseSamplingRate_25; }
	inline void set_reverseSamplingRate_25(int32_t value)
	{
		___reverseSamplingRate_25 = value;
	}

	inline static int32_t get_offset_of_reverseChannels_26() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6, ___reverseChannels_26)); }
	inline int32_t get_reverseChannels_26() const { return ___reverseChannels_26; }
	inline int32_t* get_address_of_reverseChannels_26() { return &___reverseChannels_26; }
	inline void set_reverseChannels_26(int32_t value)
	{
		___reverseChannels_26 = value;
	}

	inline static int32_t get_offset_of_logger_27() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6, ___logger_27)); }
	inline RuntimeObject* get_logger_27() const { return ___logger_27; }
	inline RuntimeObject** get_address_of_logger_27() { return &___logger_27; }
	inline void set_logger_27(RuntimeObject* value)
	{
		___logger_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_27), (void*)value);
	}

	inline static int32_t get_offset_of_aecInited_30() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6, ___aecInited_30)); }
	inline bool get_aecInited_30() const { return ___aecInited_30; }
	inline bool* get_address_of_aecInited_30() { return &___aecInited_30; }
	inline void set_aecInited_30(bool value)
	{
		___aecInited_30 = value;
	}

	inline static int32_t get_offset_of_lastProcessErr_31() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6, ___lastProcessErr_31)); }
	inline int32_t get_lastProcessErr_31() const { return ___lastProcessErr_31; }
	inline int32_t* get_address_of_lastProcessErr_31() { return &___lastProcessErr_31; }
	inline void set_lastProcessErr_31(int32_t value)
	{
		___lastProcessErr_31 = value;
	}

	inline static int32_t get_offset_of_lastProcessReverseErr_32() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6, ___lastProcessReverseErr_32)); }
	inline int32_t get_lastProcessReverseErr_32() const { return ___lastProcessReverseErr_32; }
	inline int32_t* get_address_of_lastProcessReverseErr_32() { return &___lastProcessReverseErr_32; }
	inline void set_lastProcessReverseErr_32(int32_t value)
	{
		___lastProcessReverseErr_32 = value;
	}
};

struct WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6_StaticFields
{
public:
	// System.Int32[] Photon.Voice.WebRTCAudioProcessor::SupportedSamplingRates
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___SupportedSamplingRates_29;

public:
	inline static int32_t get_offset_of_SupportedSamplingRates_29() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6_StaticFields, ___SupportedSamplingRates_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_SupportedSamplingRates_29() const { return ___SupportedSamplingRates_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_SupportedSamplingRates_29() { return &___SupportedSamplingRates_29; }
	inline void set_SupportedSamplingRates_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___SupportedSamplingRates_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SupportedSamplingRates_29), (void*)value);
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


// Photon.Voice.Unity.Recorder/InputSourceType
struct InputSourceType_tE4976CF7634D1A2EE44CE97F43BC598CE063E5E4 
{
public:
	// System.Int32 Photon.Voice.Unity.Recorder/InputSourceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputSourceType_tE4976CF7634D1A2EE44CE97F43BC598CE063E5E4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Voice.Unity.Recorder/MicType
struct MicType_t25290DF0A5AF1BBC22A27D10C65C62AC81B71DD9 
{
public:
	// System.Int32 Photon.Voice.Unity.Recorder/MicType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MicType_t25290DF0A5AF1BBC22A27D10C65C62AC81B71DD9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Voice.Unity.Recorder/SampleTypeConv
struct SampleTypeConv_tA67BEB60358D5817001656554FB3432E3DC49BC9 
{
public:
	// System.Int32 Photon.Voice.Unity.Recorder/SampleTypeConv::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SampleTypeConv_tA67BEB60358D5817001656554FB3432E3DC49BC9, ___value___2)); }
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


// System.IO.FileStream
struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf_7;
	// System.String System.IO.FileStream::name
	String_t* ___name_8;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * ___safeHandle_9;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_10;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_11;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_12;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_13;
	// System.Boolean System.IO.FileStream::async
	bool ___async_14;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_15;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_16;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_17;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_18;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_19;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_20;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_21;

public:
	inline static int32_t get_offset_of_buf_7() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_7)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buf_7() const { return ___buf_7; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buf_7() { return &___buf_7; }
	inline void set_buf_7(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buf_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_7), (void*)value);
	}

	inline static int32_t get_offset_of_name_8() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___name_8)); }
	inline String_t* get_name_8() const { return ___name_8; }
	inline String_t** get_address_of_name_8() { return &___name_8; }
	inline void set_name_8(String_t* value)
	{
		___name_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_8), (void*)value);
	}

	inline static int32_t get_offset_of_safeHandle_9() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___safeHandle_9)); }
	inline SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * get_safeHandle_9() const { return ___safeHandle_9; }
	inline SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 ** get_address_of_safeHandle_9() { return &___safeHandle_9; }
	inline void set_safeHandle_9(SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * value)
	{
		___safeHandle_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeHandle_9), (void*)value);
	}

	inline static int32_t get_offset_of_isExposed_10() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___isExposed_10)); }
	inline bool get_isExposed_10() const { return ___isExposed_10; }
	inline bool* get_address_of_isExposed_10() { return &___isExposed_10; }
	inline void set_isExposed_10(bool value)
	{
		___isExposed_10 = value;
	}

	inline static int32_t get_offset_of_append_startpos_11() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___append_startpos_11)); }
	inline int64_t get_append_startpos_11() const { return ___append_startpos_11; }
	inline int64_t* get_address_of_append_startpos_11() { return &___append_startpos_11; }
	inline void set_append_startpos_11(int64_t value)
	{
		___append_startpos_11 = value;
	}

	inline static int32_t get_offset_of_access_12() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___access_12)); }
	inline int32_t get_access_12() const { return ___access_12; }
	inline int32_t* get_address_of_access_12() { return &___access_12; }
	inline void set_access_12(int32_t value)
	{
		___access_12 = value;
	}

	inline static int32_t get_offset_of_owner_13() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___owner_13)); }
	inline bool get_owner_13() const { return ___owner_13; }
	inline bool* get_address_of_owner_13() { return &___owner_13; }
	inline void set_owner_13(bool value)
	{
		___owner_13 = value;
	}

	inline static int32_t get_offset_of_async_14() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___async_14)); }
	inline bool get_async_14() const { return ___async_14; }
	inline bool* get_address_of_async_14() { return &___async_14; }
	inline void set_async_14(bool value)
	{
		___async_14 = value;
	}

	inline static int32_t get_offset_of_canseek_15() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___canseek_15)); }
	inline bool get_canseek_15() const { return ___canseek_15; }
	inline bool* get_address_of_canseek_15() { return &___canseek_15; }
	inline void set_canseek_15(bool value)
	{
		___canseek_15 = value;
	}

	inline static int32_t get_offset_of_anonymous_16() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___anonymous_16)); }
	inline bool get_anonymous_16() const { return ___anonymous_16; }
	inline bool* get_address_of_anonymous_16() { return &___anonymous_16; }
	inline void set_anonymous_16(bool value)
	{
		___anonymous_16 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_17() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_dirty_17)); }
	inline bool get_buf_dirty_17() const { return ___buf_dirty_17; }
	inline bool* get_address_of_buf_dirty_17() { return &___buf_dirty_17; }
	inline void set_buf_dirty_17(bool value)
	{
		___buf_dirty_17 = value;
	}

	inline static int32_t get_offset_of_buf_size_18() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_size_18)); }
	inline int32_t get_buf_size_18() const { return ___buf_size_18; }
	inline int32_t* get_address_of_buf_size_18() { return &___buf_size_18; }
	inline void set_buf_size_18(int32_t value)
	{
		___buf_size_18 = value;
	}

	inline static int32_t get_offset_of_buf_length_19() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_length_19)); }
	inline int32_t get_buf_length_19() const { return ___buf_length_19; }
	inline int32_t* get_address_of_buf_length_19() { return &___buf_length_19; }
	inline void set_buf_length_19(int32_t value)
	{
		___buf_length_19 = value;
	}

	inline static int32_t get_offset_of_buf_offset_20() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_offset_20)); }
	inline int32_t get_buf_offset_20() const { return ___buf_offset_20; }
	inline int32_t* get_address_of_buf_offset_20() { return &___buf_offset_20; }
	inline void set_buf_offset_20(int32_t value)
	{
		___buf_offset_20 = value;
	}

	inline static int32_t get_offset_of_buf_start_21() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_start_21)); }
	inline int64_t get_buf_start_21() const { return ___buf_start_21; }
	inline int64_t* get_address_of_buf_start_21() { return &___buf_start_21; }
	inline void set_buf_start_21(int64_t value)
	{
		___buf_start_21 = value;
	}
};

struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields
{
public:
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf_recycle_5;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject * ___buf_recycle_lock_6;

public:
	inline static int32_t get_offset_of_buf_recycle_5() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields, ___buf_recycle_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buf_recycle_5() const { return ___buf_recycle_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buf_recycle_5() { return &___buf_recycle_5; }
	inline void set_buf_recycle_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buf_recycle_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_5), (void*)value);
	}

	inline static int32_t get_offset_of_buf_recycle_lock_6() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields, ___buf_recycle_lock_6)); }
	inline RuntimeObject * get_buf_recycle_lock_6() const { return ___buf_recycle_lock_6; }
	inline RuntimeObject ** get_address_of_buf_recycle_lock_6() { return &___buf_recycle_lock_6; }
	inline void set_buf_recycle_lock_6(RuntimeObject * value)
	{
		___buf_recycle_lock_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_lock_6), (void*)value);
	}
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

// Photon.Voice.Unity.VoiceLogger
struct VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F  : public RuntimeObject
{
public:
	// System.String Photon.Voice.Unity.VoiceLogger::<Tag>k__BackingField
	String_t* ___U3CTagU3Ek__BackingField_0;
	// ExitGames.Client.Photon.DebugLevel Photon.Voice.Unity.VoiceLogger::<LogLevel>k__BackingField
	uint8_t ___U3CLogLevelU3Ek__BackingField_1;
	// UnityEngine.Object Photon.Voice.Unity.VoiceLogger::context
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___context_2;

public:
	inline static int32_t get_offset_of_U3CTagU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F, ___U3CTagU3Ek__BackingField_0)); }
	inline String_t* get_U3CTagU3Ek__BackingField_0() const { return ___U3CTagU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CTagU3Ek__BackingField_0() { return &___U3CTagU3Ek__BackingField_0; }
	inline void set_U3CTagU3Ek__BackingField_0(String_t* value)
	{
		___U3CTagU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTagU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLogLevelU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F, ___U3CLogLevelU3Ek__BackingField_1)); }
	inline uint8_t get_U3CLogLevelU3Ek__BackingField_1() const { return ___U3CLogLevelU3Ek__BackingField_1; }
	inline uint8_t* get_address_of_U3CLogLevelU3Ek__BackingField_1() { return &___U3CLogLevelU3Ek__BackingField_1; }
	inline void set_U3CLogLevelU3Ek__BackingField_1(uint8_t value)
	{
		___U3CLogLevelU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_context_2() { return static_cast<int32_t>(offsetof(VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F, ___context_2)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get_context_2() const { return ___context_2; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of_context_2() { return &___context_2; }
	inline void set_context_2(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		___context_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___context_2), (void*)value);
	}
};


// CSCore.WaveFormat
#pragma pack(push, tp, 2)
struct WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE  : public RuntimeObject
{
public:
	// CSCore.AudioEncoding CSCore.WaveFormat::_encoding
	int16_t ____encoding_0;
	// System.Int16 CSCore.WaveFormat::_channels
	int16_t ____channels_1;
	// System.Int32 CSCore.WaveFormat::_sampleRate
	int32_t ____sampleRate_2;
	// System.Int32 CSCore.WaveFormat::_bytesPerSecond
	int32_t ____bytesPerSecond_3;
	// System.Int16 CSCore.WaveFormat::_blockAlign
	int16_t ____blockAlign_4;
	// System.Int16 CSCore.WaveFormat::_bitsPerSample
	int16_t ____bitsPerSample_5;
	// System.Int16 CSCore.WaveFormat::_extraSize
	int16_t ____extraSize_6;

public:
	inline static int32_t get_offset_of__encoding_0() { return static_cast<int32_t>(offsetof(WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE, ____encoding_0)); }
	inline int16_t get__encoding_0() const { return ____encoding_0; }
	inline int16_t* get_address_of__encoding_0() { return &____encoding_0; }
	inline void set__encoding_0(int16_t value)
	{
		____encoding_0 = value;
	}

	inline static int32_t get_offset_of__channels_1() { return static_cast<int32_t>(offsetof(WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE, ____channels_1)); }
	inline int16_t get__channels_1() const { return ____channels_1; }
	inline int16_t* get_address_of__channels_1() { return &____channels_1; }
	inline void set__channels_1(int16_t value)
	{
		____channels_1 = value;
	}

	inline static int32_t get_offset_of__sampleRate_2() { return static_cast<int32_t>(offsetof(WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE, ____sampleRate_2)); }
	inline int32_t get__sampleRate_2() const { return ____sampleRate_2; }
	inline int32_t* get_address_of__sampleRate_2() { return &____sampleRate_2; }
	inline void set__sampleRate_2(int32_t value)
	{
		____sampleRate_2 = value;
	}

	inline static int32_t get_offset_of__bytesPerSecond_3() { return static_cast<int32_t>(offsetof(WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE, ____bytesPerSecond_3)); }
	inline int32_t get__bytesPerSecond_3() const { return ____bytesPerSecond_3; }
	inline int32_t* get_address_of__bytesPerSecond_3() { return &____bytesPerSecond_3; }
	inline void set__bytesPerSecond_3(int32_t value)
	{
		____bytesPerSecond_3 = value;
	}

	inline static int32_t get_offset_of__blockAlign_4() { return static_cast<int32_t>(offsetof(WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE, ____blockAlign_4)); }
	inline int16_t get__blockAlign_4() const { return ____blockAlign_4; }
	inline int16_t* get_address_of__blockAlign_4() { return &____blockAlign_4; }
	inline void set__blockAlign_4(int16_t value)
	{
		____blockAlign_4 = value;
	}

	inline static int32_t get_offset_of__bitsPerSample_5() { return static_cast<int32_t>(offsetof(WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE, ____bitsPerSample_5)); }
	inline int16_t get__bitsPerSample_5() const { return ____bitsPerSample_5; }
	inline int16_t* get_address_of__bitsPerSample_5() { return &____bitsPerSample_5; }
	inline void set__bitsPerSample_5(int16_t value)
	{
		____bitsPerSample_5 = value;
	}

	inline static int32_t get_offset_of__extraSize_6() { return static_cast<int32_t>(offsetof(WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE, ____extraSize_6)); }
	inline int16_t get__extraSize_6() const { return ____extraSize_6; }
	inline int16_t* get_address_of__extraSize_6() { return &____extraSize_6; }
	inline void set__extraSize_6(int16_t value)
	{
		____extraSize_6 = value;
	}
};
#pragma pack(pop, tp)

// Native definition for P/Invoke marshalling of CSCore.WaveFormat
#pragma pack(push, tp, 2)
struct WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE_marshaled_pinvoke
{
	int16_t ____encoding_0;
	int16_t ____channels_1;
	int32_t ____sampleRate_2;
	int32_t ____bytesPerSecond_3;
	int16_t ____blockAlign_4;
	int16_t ____bitsPerSample_5;
	int16_t ____extraSize_6;
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of CSCore.WaveFormat
#pragma pack(push, tp, 2)
struct WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE_marshaled_com
{
	int16_t ____encoding_0;
	int16_t ____channels_1;
	int32_t ____sampleRate_2;
	int32_t ____bytesPerSecond_3;
	int16_t ____blockAlign_4;
	int16_t ____bitsPerSample_5;
	int16_t ____extraSize_6;
};
#pragma pack(pop, tp)

// System.Action`1<System.Single>
struct Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<System.Single[],System.Int32>
struct Action_2_t8D838F0E0114B7032B25FE8B8E8AE4CE85AB106E  : public MulticastDelegate_t
{
public:

public:
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


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
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


// Photon.Voice.Unity.RemoteVoiceLink
struct RemoteVoiceLink_tDDD70AB15B70170AF282B017A3BCE94DB80E9CBC  : public RuntimeObject
{
public:
	// Photon.Voice.VoiceInfo Photon.Voice.Unity.RemoteVoiceLink::<Info>k__BackingField
	VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  ___U3CInfoU3Ek__BackingField_0;
	// System.Int32 Photon.Voice.Unity.RemoteVoiceLink::<PlayerId>k__BackingField
	int32_t ___U3CPlayerIdU3Ek__BackingField_1;
	// System.Int32 Photon.Voice.Unity.RemoteVoiceLink::<VoiceId>k__BackingField
	int32_t ___U3CVoiceIdU3Ek__BackingField_2;
	// System.Int32 Photon.Voice.Unity.RemoteVoiceLink::<ChannelId>k__BackingField
	int32_t ___U3CChannelIdU3Ek__BackingField_3;
	// System.Action`1<Photon.Voice.FrameOut`1<System.Single>> Photon.Voice.Unity.RemoteVoiceLink::FloatFrameDecoded
	Action_1_t0B1D8E060FEAA27D51B6AD68D56361DDCF6D383F * ___FloatFrameDecoded_4;
	// System.Action Photon.Voice.Unity.RemoteVoiceLink::RemoteVoiceRemoved
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___RemoteVoiceRemoved_5;

public:
	inline static int32_t get_offset_of_U3CInfoU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RemoteVoiceLink_tDDD70AB15B70170AF282B017A3BCE94DB80E9CBC, ___U3CInfoU3Ek__BackingField_0)); }
	inline VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  get_U3CInfoU3Ek__BackingField_0() const { return ___U3CInfoU3Ek__BackingField_0; }
	inline VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 * get_address_of_U3CInfoU3Ek__BackingField_0() { return &___U3CInfoU3Ek__BackingField_0; }
	inline void set_U3CInfoU3Ek__BackingField_0(VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  value)
	{
		___U3CInfoU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CInfoU3Ek__BackingField_0))->___U3CUserDataU3Ek__BackingField_9), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CPlayerIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RemoteVoiceLink_tDDD70AB15B70170AF282B017A3BCE94DB80E9CBC, ___U3CPlayerIdU3Ek__BackingField_1)); }
	inline int32_t get_U3CPlayerIdU3Ek__BackingField_1() const { return ___U3CPlayerIdU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CPlayerIdU3Ek__BackingField_1() { return &___U3CPlayerIdU3Ek__BackingField_1; }
	inline void set_U3CPlayerIdU3Ek__BackingField_1(int32_t value)
	{
		___U3CPlayerIdU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CVoiceIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RemoteVoiceLink_tDDD70AB15B70170AF282B017A3BCE94DB80E9CBC, ___U3CVoiceIdU3Ek__BackingField_2)); }
	inline int32_t get_U3CVoiceIdU3Ek__BackingField_2() const { return ___U3CVoiceIdU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CVoiceIdU3Ek__BackingField_2() { return &___U3CVoiceIdU3Ek__BackingField_2; }
	inline void set_U3CVoiceIdU3Ek__BackingField_2(int32_t value)
	{
		___U3CVoiceIdU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CChannelIdU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RemoteVoiceLink_tDDD70AB15B70170AF282B017A3BCE94DB80E9CBC, ___U3CChannelIdU3Ek__BackingField_3)); }
	inline int32_t get_U3CChannelIdU3Ek__BackingField_3() const { return ___U3CChannelIdU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CChannelIdU3Ek__BackingField_3() { return &___U3CChannelIdU3Ek__BackingField_3; }
	inline void set_U3CChannelIdU3Ek__BackingField_3(int32_t value)
	{
		___U3CChannelIdU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_FloatFrameDecoded_4() { return static_cast<int32_t>(offsetof(RemoteVoiceLink_tDDD70AB15B70170AF282B017A3BCE94DB80E9CBC, ___FloatFrameDecoded_4)); }
	inline Action_1_t0B1D8E060FEAA27D51B6AD68D56361DDCF6D383F * get_FloatFrameDecoded_4() const { return ___FloatFrameDecoded_4; }
	inline Action_1_t0B1D8E060FEAA27D51B6AD68D56361DDCF6D383F ** get_address_of_FloatFrameDecoded_4() { return &___FloatFrameDecoded_4; }
	inline void set_FloatFrameDecoded_4(Action_1_t0B1D8E060FEAA27D51B6AD68D56361DDCF6D383F * value)
	{
		___FloatFrameDecoded_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FloatFrameDecoded_4), (void*)value);
	}

	inline static int32_t get_offset_of_RemoteVoiceRemoved_5() { return static_cast<int32_t>(offsetof(RemoteVoiceLink_tDDD70AB15B70170AF282B017A3BCE94DB80E9CBC, ___RemoteVoiceRemoved_5)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_RemoteVoiceRemoved_5() const { return ___RemoteVoiceRemoved_5; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_RemoteVoiceRemoved_5() { return &___RemoteVoiceRemoved_5; }
	inline void set_RemoteVoiceRemoved_5(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___RemoteVoiceRemoved_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RemoteVoiceRemoved_5), (void*)value);
	}
};


// CSCore.WaveFormatExtensible
#pragma pack(push, tp, 2)
struct WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060  : public WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE
{
public:
	// System.Int16 CSCore.WaveFormatExtensible::_samplesUnion
	int16_t ____samplesUnion_8;
	// CSCore.ChannelMask CSCore.WaveFormatExtensible::_channelMask
	int32_t ____channelMask_9;
	// System.Guid CSCore.WaveFormatExtensible::_subFormat
	Guid_t  ____subFormat_10;

public:
	inline static int32_t get_offset_of__samplesUnion_8() { return static_cast<int32_t>(offsetof(WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060, ____samplesUnion_8)); }
	inline int16_t get__samplesUnion_8() const { return ____samplesUnion_8; }
	inline int16_t* get_address_of__samplesUnion_8() { return &____samplesUnion_8; }
	inline void set__samplesUnion_8(int16_t value)
	{
		____samplesUnion_8 = value;
	}

	inline static int32_t get_offset_of__channelMask_9() { return static_cast<int32_t>(offsetof(WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060, ____channelMask_9)); }
	inline int32_t get__channelMask_9() const { return ____channelMask_9; }
	inline int32_t* get_address_of__channelMask_9() { return &____channelMask_9; }
	inline void set__channelMask_9(int32_t value)
	{
		____channelMask_9 = value;
	}

	inline static int32_t get_offset_of__subFormat_10() { return static_cast<int32_t>(offsetof(WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060, ____subFormat_10)); }
	inline Guid_t  get__subFormat_10() const { return ____subFormat_10; }
	inline Guid_t * get_address_of__subFormat_10() { return &____subFormat_10; }
	inline void set__subFormat_10(Guid_t  value)
	{
		____subFormat_10 = value;
	}
};
#pragma pack(pop, tp)

// Native definition for P/Invoke marshalling of CSCore.WaveFormatExtensible
#pragma pack(push, tp, 2)
struct WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060_marshaled_pinvoke : public WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE_marshaled_pinvoke
{
	int16_t ____samplesUnion_8;
	int32_t ____channelMask_9;
	Guid_t  ____subFormat_10;
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of CSCore.WaveFormatExtensible
#pragma pack(push, tp, 2)
struct WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060_marshaled_com : public WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE_marshaled_com
{
	int16_t ____samplesUnion_8;
	int32_t ____channelMask_9;
	Guid_t  ____subFormat_10;
};
#pragma pack(pop, tp)

// Photon.Voice.Unity.VoiceConnection/<>c__DisplayClass95_0
struct U3CU3Ec__DisplayClass95_0_t5513DB87EFC7B8F304090AF0A7F96AC05190245A  : public RuntimeObject
{
public:
	// Photon.Voice.Unity.VoiceConnection Photon.Voice.Unity.VoiceConnection/<>c__DisplayClass95_0::<>4__this
	VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704 * ___U3CU3E4__this_0;
	// System.Int32 Photon.Voice.Unity.VoiceConnection/<>c__DisplayClass95_0::channelId
	int32_t ___channelId_1;
	// System.Int32 Photon.Voice.Unity.VoiceConnection/<>c__DisplayClass95_0::playerId
	int32_t ___playerId_2;
	// System.Byte Photon.Voice.Unity.VoiceConnection/<>c__DisplayClass95_0::voiceId
	uint8_t ___voiceId_3;
	// Photon.Voice.VoiceInfo Photon.Voice.Unity.VoiceConnection/<>c__DisplayClass95_0::voiceInfo
	VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  ___voiceInfo_4;
	// Photon.Voice.Unity.RemoteVoiceLink Photon.Voice.Unity.VoiceConnection/<>c__DisplayClass95_0::remoteVoice
	RemoteVoiceLink_tDDD70AB15B70170AF282B017A3BCE94DB80E9CBC * ___remoteVoice_5;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass95_0_t5513DB87EFC7B8F304090AF0A7F96AC05190245A, ___U3CU3E4__this_0)); }
	inline VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_channelId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass95_0_t5513DB87EFC7B8F304090AF0A7F96AC05190245A, ___channelId_1)); }
	inline int32_t get_channelId_1() const { return ___channelId_1; }
	inline int32_t* get_address_of_channelId_1() { return &___channelId_1; }
	inline void set_channelId_1(int32_t value)
	{
		___channelId_1 = value;
	}

	inline static int32_t get_offset_of_playerId_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass95_0_t5513DB87EFC7B8F304090AF0A7F96AC05190245A, ___playerId_2)); }
	inline int32_t get_playerId_2() const { return ___playerId_2; }
	inline int32_t* get_address_of_playerId_2() { return &___playerId_2; }
	inline void set_playerId_2(int32_t value)
	{
		___playerId_2 = value;
	}

	inline static int32_t get_offset_of_voiceId_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass95_0_t5513DB87EFC7B8F304090AF0A7F96AC05190245A, ___voiceId_3)); }
	inline uint8_t get_voiceId_3() const { return ___voiceId_3; }
	inline uint8_t* get_address_of_voiceId_3() { return &___voiceId_3; }
	inline void set_voiceId_3(uint8_t value)
	{
		___voiceId_3 = value;
	}

	inline static int32_t get_offset_of_voiceInfo_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass95_0_t5513DB87EFC7B8F304090AF0A7F96AC05190245A, ___voiceInfo_4)); }
	inline VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  get_voiceInfo_4() const { return ___voiceInfo_4; }
	inline VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 * get_address_of_voiceInfo_4() { return &___voiceInfo_4; }
	inline void set_voiceInfo_4(VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  value)
	{
		___voiceInfo_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___voiceInfo_4))->___U3CUserDataU3Ek__BackingField_9), (void*)NULL);
	}

	inline static int32_t get_offset_of_remoteVoice_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass95_0_t5513DB87EFC7B8F304090AF0A7F96AC05190245A, ___remoteVoice_5)); }
	inline RemoteVoiceLink_tDDD70AB15B70170AF282B017A3BCE94DB80E9CBC * get_remoteVoice_5() const { return ___remoteVoice_5; }
	inline RemoteVoiceLink_tDDD70AB15B70170AF282B017A3BCE94DB80E9CBC ** get_address_of_remoteVoice_5() { return &___remoteVoice_5; }
	inline void set_remoteVoice_5(RemoteVoiceLink_tDDD70AB15B70170AF282B017A3BCE94DB80E9CBC * value)
	{
		___remoteVoice_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remoteVoice_5), (void*)value);
	}
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


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
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


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
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


// UnityEngine.AudioListener
struct AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// Photon.Voice.Unity.AudioOutCapture
struct AudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Action`2<System.Single[],System.Int32> Photon.Voice.Unity.AudioOutCapture::OnAudioFrame
	Action_2_t8D838F0E0114B7032B25FE8B8E8AE4CE85AB106E * ___OnAudioFrame_4;

public:
	inline static int32_t get_offset_of_OnAudioFrame_4() { return static_cast<int32_t>(offsetof(AudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA, ___OnAudioFrame_4)); }
	inline Action_2_t8D838F0E0114B7032B25FE8B8E8AE4CE85AB106E * get_OnAudioFrame_4() const { return ___OnAudioFrame_4; }
	inline Action_2_t8D838F0E0114B7032B25FE8B8E8AE4CE85AB106E ** get_address_of_OnAudioFrame_4() { return &___OnAudioFrame_4; }
	inline void set_OnAudioFrame_4(Action_2_t8D838F0E0114B7032B25FE8B8E8AE4CE85AB106E * value)
	{
		___OnAudioFrame_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAudioFrame_4), (void*)value);
	}
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// Photon.Realtime.ConnectionHandler
struct ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.ConnectionHandler::<Client>k__BackingField
	LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * ___U3CClientU3Ek__BackingField_4;
	// System.Byte Photon.Realtime.ConnectionHandler::fallbackThreadId
	uint8_t ___fallbackThreadId_5;
	// System.Boolean Photon.Realtime.ConnectionHandler::didSendAcks
	bool ___didSendAcks_6;
	// System.Int32 Photon.Realtime.ConnectionHandler::startedAckingTimestamp
	int32_t ___startedAckingTimestamp_7;
	// System.Int32 Photon.Realtime.ConnectionHandler::deltaSinceStartedToAck
	int32_t ___deltaSinceStartedToAck_8;
	// System.Int32 Photon.Realtime.ConnectionHandler::KeepAliveInBackground
	int32_t ___KeepAliveInBackground_9;
	// System.Int32 Photon.Realtime.ConnectionHandler::<CountSendAcksOnly>k__BackingField
	int32_t ___U3CCountSendAcksOnlyU3Ek__BackingField_10;
	// System.Boolean Photon.Realtime.ConnectionHandler::ApplyDontDestroyOnLoad
	bool ___ApplyDontDestroyOnLoad_11;

public:
	inline static int32_t get_offset_of_U3CClientU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE, ___U3CClientU3Ek__BackingField_4)); }
	inline LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * get_U3CClientU3Ek__BackingField_4() const { return ___U3CClientU3Ek__BackingField_4; }
	inline LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A ** get_address_of_U3CClientU3Ek__BackingField_4() { return &___U3CClientU3Ek__BackingField_4; }
	inline void set_U3CClientU3Ek__BackingField_4(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * value)
	{
		___U3CClientU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClientU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_fallbackThreadId_5() { return static_cast<int32_t>(offsetof(ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE, ___fallbackThreadId_5)); }
	inline uint8_t get_fallbackThreadId_5() const { return ___fallbackThreadId_5; }
	inline uint8_t* get_address_of_fallbackThreadId_5() { return &___fallbackThreadId_5; }
	inline void set_fallbackThreadId_5(uint8_t value)
	{
		___fallbackThreadId_5 = value;
	}

	inline static int32_t get_offset_of_didSendAcks_6() { return static_cast<int32_t>(offsetof(ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE, ___didSendAcks_6)); }
	inline bool get_didSendAcks_6() const { return ___didSendAcks_6; }
	inline bool* get_address_of_didSendAcks_6() { return &___didSendAcks_6; }
	inline void set_didSendAcks_6(bool value)
	{
		___didSendAcks_6 = value;
	}

	inline static int32_t get_offset_of_startedAckingTimestamp_7() { return static_cast<int32_t>(offsetof(ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE, ___startedAckingTimestamp_7)); }
	inline int32_t get_startedAckingTimestamp_7() const { return ___startedAckingTimestamp_7; }
	inline int32_t* get_address_of_startedAckingTimestamp_7() { return &___startedAckingTimestamp_7; }
	inline void set_startedAckingTimestamp_7(int32_t value)
	{
		___startedAckingTimestamp_7 = value;
	}

	inline static int32_t get_offset_of_deltaSinceStartedToAck_8() { return static_cast<int32_t>(offsetof(ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE, ___deltaSinceStartedToAck_8)); }
	inline int32_t get_deltaSinceStartedToAck_8() const { return ___deltaSinceStartedToAck_8; }
	inline int32_t* get_address_of_deltaSinceStartedToAck_8() { return &___deltaSinceStartedToAck_8; }
	inline void set_deltaSinceStartedToAck_8(int32_t value)
	{
		___deltaSinceStartedToAck_8 = value;
	}

	inline static int32_t get_offset_of_KeepAliveInBackground_9() { return static_cast<int32_t>(offsetof(ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE, ___KeepAliveInBackground_9)); }
	inline int32_t get_KeepAliveInBackground_9() const { return ___KeepAliveInBackground_9; }
	inline int32_t* get_address_of_KeepAliveInBackground_9() { return &___KeepAliveInBackground_9; }
	inline void set_KeepAliveInBackground_9(int32_t value)
	{
		___KeepAliveInBackground_9 = value;
	}

	inline static int32_t get_offset_of_U3CCountSendAcksOnlyU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE, ___U3CCountSendAcksOnlyU3Ek__BackingField_10)); }
	inline int32_t get_U3CCountSendAcksOnlyU3Ek__BackingField_10() const { return ___U3CCountSendAcksOnlyU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CCountSendAcksOnlyU3Ek__BackingField_10() { return &___U3CCountSendAcksOnlyU3Ek__BackingField_10; }
	inline void set_U3CCountSendAcksOnlyU3Ek__BackingField_10(int32_t value)
	{
		___U3CCountSendAcksOnlyU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_ApplyDontDestroyOnLoad_11() { return static_cast<int32_t>(offsetof(ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE, ___ApplyDontDestroyOnLoad_11)); }
	inline bool get_ApplyDontDestroyOnLoad_11() const { return ___ApplyDontDestroyOnLoad_11; }
	inline bool* get_address_of_ApplyDontDestroyOnLoad_11() { return &___ApplyDontDestroyOnLoad_11; }
	inline void set_ApplyDontDestroyOnLoad_11(bool value)
	{
		___ApplyDontDestroyOnLoad_11 = value;
	}
};

struct ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE_StaticFields
{
public:
	// System.Boolean Photon.Realtime.ConnectionHandler::AppQuits
	bool ___AppQuits_12;

public:
	inline static int32_t get_offset_of_AppQuits_12() { return static_cast<int32_t>(offsetof(ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE_StaticFields, ___AppQuits_12)); }
	inline bool get_AppQuits_12() const { return ___AppQuits_12; }
	inline bool* get_address_of_AppQuits_12() { return &___AppQuits_12; }
	inline void set_AppQuits_12(bool value)
	{
		___AppQuits_12 = value;
	}
};


// Photon.Voice.Unity.VoiceComponent
struct VoiceComponent_tCE3547F23B76A6B42D3BD5158F110EFD8044E88C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Photon.Voice.Unity.VoiceLogger Photon.Voice.Unity.VoiceComponent::logger
	VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * ___logger_4;
	// ExitGames.Client.Photon.DebugLevel Photon.Voice.Unity.VoiceComponent::logLevel
	uint8_t ___logLevel_5;
	// System.Boolean Photon.Voice.Unity.VoiceComponent::ignoreGlobalLogLevel
	bool ___ignoreGlobalLogLevel_6;

public:
	inline static int32_t get_offset_of_logger_4() { return static_cast<int32_t>(offsetof(VoiceComponent_tCE3547F23B76A6B42D3BD5158F110EFD8044E88C, ___logger_4)); }
	inline VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * get_logger_4() const { return ___logger_4; }
	inline VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F ** get_address_of_logger_4() { return &___logger_4; }
	inline void set_logger_4(VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * value)
	{
		___logger_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_4), (void*)value);
	}

	inline static int32_t get_offset_of_logLevel_5() { return static_cast<int32_t>(offsetof(VoiceComponent_tCE3547F23B76A6B42D3BD5158F110EFD8044E88C, ___logLevel_5)); }
	inline uint8_t get_logLevel_5() const { return ___logLevel_5; }
	inline uint8_t* get_address_of_logLevel_5() { return &___logLevel_5; }
	inline void set_logLevel_5(uint8_t value)
	{
		___logLevel_5 = value;
	}

	inline static int32_t get_offset_of_ignoreGlobalLogLevel_6() { return static_cast<int32_t>(offsetof(VoiceComponent_tCE3547F23B76A6B42D3BD5158F110EFD8044E88C, ___ignoreGlobalLogLevel_6)); }
	inline bool get_ignoreGlobalLogLevel_6() const { return ___ignoreGlobalLogLevel_6; }
	inline bool* get_address_of_ignoreGlobalLogLevel_6() { return &___ignoreGlobalLogLevel_6; }
	inline void set_ignoreGlobalLogLevel_6(bool value)
	{
		___ignoreGlobalLogLevel_6 = value;
	}
};

struct VoiceComponent_tCE3547F23B76A6B42D3BD5158F110EFD8044E88C_StaticFields
{
public:
	// System.String Photon.Voice.Unity.VoiceComponent::currentPlatform
	String_t* ___currentPlatform_7;

public:
	inline static int32_t get_offset_of_currentPlatform_7() { return static_cast<int32_t>(offsetof(VoiceComponent_tCE3547F23B76A6B42D3BD5158F110EFD8044E88C_StaticFields, ___currentPlatform_7)); }
	inline String_t* get_currentPlatform_7() const { return ___currentPlatform_7; }
	inline String_t** get_address_of_currentPlatform_7() { return &___currentPlatform_7; }
	inline void set_currentPlatform_7(String_t* value)
	{
		___currentPlatform_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentPlatform_7), (void*)value);
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


// Photon.Voice.Unity.Recorder
struct Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5  : public VoiceComponent_tCE3547F23B76A6B42D3BD5158F110EFD8044E88C
{
public:
	// System.Boolean Photon.Voice.Unity.Recorder::voiceDetection
	bool ___voiceDetection_11;
	// System.Single Photon.Voice.Unity.Recorder::voiceDetectionThreshold
	float ___voiceDetectionThreshold_12;
	// System.Int32 Photon.Voice.Unity.Recorder::voiceDetectionDelayMs
	int32_t ___voiceDetectionDelayMs_13;
	// System.Object Photon.Voice.Unity.Recorder::userData
	RuntimeObject * ___userData_14;
	// Photon.Voice.LocalVoice Photon.Voice.Unity.Recorder::voice
	LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * ___voice_15;
	// System.String Photon.Voice.Unity.Recorder::unityMicrophoneDevice
	String_t* ___unityMicrophoneDevice_16;
	// System.Int32 Photon.Voice.Unity.Recorder::photonMicrophoneDeviceId
	int32_t ___photonMicrophoneDeviceId_17;
	// Photon.Voice.IAudioDesc Photon.Voice.Unity.Recorder::inputSource
	RuntimeObject* ___inputSource_18;
	// Photon.Voice.VoiceClient Photon.Voice.Unity.Recorder::client
	VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * ___client_19;
	// Photon.Voice.Unity.VoiceConnection Photon.Voice.Unity.Recorder::voiceConnection
	VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704 * ___voiceConnection_20;
	// System.Byte Photon.Voice.Unity.Recorder::interestGroup
	uint8_t ___interestGroup_21;
	// System.Boolean Photon.Voice.Unity.Recorder::debugEchoMode
	bool ___debugEchoMode_22;
	// System.Boolean Photon.Voice.Unity.Recorder::reliableMode
	bool ___reliableMode_23;
	// System.Boolean Photon.Voice.Unity.Recorder::encrypt
	bool ___encrypt_24;
	// System.Boolean Photon.Voice.Unity.Recorder::transmitEnabled
	bool ___transmitEnabled_25;
	// POpusCodec.Enums.SamplingRate Photon.Voice.Unity.Recorder::samplingRate
	int32_t ___samplingRate_26;
	// Photon.Voice.OpusCodec/FrameDuration Photon.Voice.Unity.Recorder::frameDuration
	int32_t ___frameDuration_27;
	// System.Int32 Photon.Voice.Unity.Recorder::bitrate
	int32_t ___bitrate_28;
	// Photon.Voice.Unity.Recorder/InputSourceType Photon.Voice.Unity.Recorder::sourceType
	int32_t ___sourceType_29;
	// Photon.Voice.Unity.Recorder/MicType Photon.Voice.Unity.Recorder::microphoneType
	int32_t ___microphoneType_30;
	// UnityEngine.AudioClip Photon.Voice.Unity.Recorder::audioClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___audioClip_31;
	// System.Boolean Photon.Voice.Unity.Recorder::loopAudioClip
	bool ___loopAudioClip_32;
	// System.Boolean Photon.Voice.Unity.Recorder::isRecording
	bool ___isRecording_33;
	// System.Func`1<Photon.Voice.IAudioDesc> Photon.Voice.Unity.Recorder::inputFactory
	Func_1_t3729C27ED506C17CDE248FA4C18C6B936CAE4718 * ___inputFactory_34;
	// Photon.Voice.AudioInChangeNotifier Photon.Voice.Unity.Recorder::photonMicChangeNotifier
	AudioInChangeNotifier_t9FD18C1291DEE5F939307CF00E55FFCFE0E9E07D * ___photonMicChangeNotifier_36;
	// System.Boolean Photon.Voice.Unity.Recorder::reactOnSystemChanges
	bool ___reactOnSystemChanges_37;
	// System.Boolean Photon.Voice.Unity.Recorder::subscribedToSystemChangesPhoton
	bool ___subscribedToSystemChangesPhoton_38;
	// System.Boolean Photon.Voice.Unity.Recorder::subscribedToSystemChangesUnity
	bool ___subscribedToSystemChangesUnity_39;
	// System.Boolean Photon.Voice.Unity.Recorder::autoStart
	bool ___autoStart_40;
	// Photon.Voice.Unity.NativeAndroidMicrophoneSettings Photon.Voice.Unity.Recorder::nativeAndroidMicrophoneSettings
	NativeAndroidMicrophoneSettings_t81CD982289044EB8A482468C8FB36BFAC50A40E0  ___nativeAndroidMicrophoneSettings_41;
	// System.Boolean Photon.Voice.Unity.Recorder::recordOnlyWhenEnabled
	bool ___recordOnlyWhenEnabled_42;
	// System.Boolean Photon.Voice.Unity.Recorder::skipDeviceChangeChecks
	bool ___skipDeviceChangeChecks_43;
	// System.Boolean Photon.Voice.Unity.Recorder::wasRecordingBeforePause
	bool ___wasRecordingBeforePause_44;
	// System.Boolean Photon.Voice.Unity.Recorder::stopRecordingWhenPaused
	bool ___stopRecordingWhenPaused_45;
	// System.Boolean Photon.Voice.Unity.Recorder::useOnAudioFilterRead
	bool ___useOnAudioFilterRead_46;
	// System.Boolean Photon.Voice.Unity.Recorder::trySamplingRateMatch
	bool ___trySamplingRateMatch_47;
	// System.Boolean Photon.Voice.Unity.Recorder::useMicrophoneTypeFallback
	bool ___useMicrophoneTypeFallback_48;
	// System.Boolean Photon.Voice.Unity.Recorder::recordOnlyWhenJoined
	bool ___recordOnlyWhenJoined_49;
	// System.Boolean Photon.Voice.Unity.Recorder::recordingStoppedExplicitly
	bool ___recordingStoppedExplicitly_50;
	// Photon.Voice.AudioInEnumerator Photon.Voice.Unity.Recorder::photonMicrophonesEnumerator
	AudioInEnumerator_t32F46692F713132406E4754493C35B8AC1B56190 * ___photonMicrophonesEnumerator_51;
	// Photon.Voice.Unity.AudioInEnumerator Photon.Voice.Unity.Recorder::unityMicrophonesEnumerator
	AudioInEnumerator_tF947D3CF2E3FAA2C4CAE2AC47E69D7CAD332F197 * ___unityMicrophonesEnumerator_52;
	// System.Boolean Photon.Voice.Unity.Recorder::<RequiresRestart>k__BackingField
	bool ___U3CRequiresRestartU3Ek__BackingField_53;
	// Photon.Voice.Unity.Recorder/SampleTypeConv Photon.Voice.Unity.Recorder::<TypeConvert>k__BackingField
	int32_t ___U3CTypeConvertU3Ek__BackingField_54;

public:
	inline static int32_t get_offset_of_voiceDetection_11() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___voiceDetection_11)); }
	inline bool get_voiceDetection_11() const { return ___voiceDetection_11; }
	inline bool* get_address_of_voiceDetection_11() { return &___voiceDetection_11; }
	inline void set_voiceDetection_11(bool value)
	{
		___voiceDetection_11 = value;
	}

	inline static int32_t get_offset_of_voiceDetectionThreshold_12() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___voiceDetectionThreshold_12)); }
	inline float get_voiceDetectionThreshold_12() const { return ___voiceDetectionThreshold_12; }
	inline float* get_address_of_voiceDetectionThreshold_12() { return &___voiceDetectionThreshold_12; }
	inline void set_voiceDetectionThreshold_12(float value)
	{
		___voiceDetectionThreshold_12 = value;
	}

	inline static int32_t get_offset_of_voiceDetectionDelayMs_13() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___voiceDetectionDelayMs_13)); }
	inline int32_t get_voiceDetectionDelayMs_13() const { return ___voiceDetectionDelayMs_13; }
	inline int32_t* get_address_of_voiceDetectionDelayMs_13() { return &___voiceDetectionDelayMs_13; }
	inline void set_voiceDetectionDelayMs_13(int32_t value)
	{
		___voiceDetectionDelayMs_13 = value;
	}

	inline static int32_t get_offset_of_userData_14() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___userData_14)); }
	inline RuntimeObject * get_userData_14() const { return ___userData_14; }
	inline RuntimeObject ** get_address_of_userData_14() { return &___userData_14; }
	inline void set_userData_14(RuntimeObject * value)
	{
		___userData_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userData_14), (void*)value);
	}

	inline static int32_t get_offset_of_voice_15() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___voice_15)); }
	inline LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * get_voice_15() const { return ___voice_15; }
	inline LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 ** get_address_of_voice_15() { return &___voice_15; }
	inline void set_voice_15(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * value)
	{
		___voice_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voice_15), (void*)value);
	}

	inline static int32_t get_offset_of_unityMicrophoneDevice_16() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___unityMicrophoneDevice_16)); }
	inline String_t* get_unityMicrophoneDevice_16() const { return ___unityMicrophoneDevice_16; }
	inline String_t** get_address_of_unityMicrophoneDevice_16() { return &___unityMicrophoneDevice_16; }
	inline void set_unityMicrophoneDevice_16(String_t* value)
	{
		___unityMicrophoneDevice_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityMicrophoneDevice_16), (void*)value);
	}

	inline static int32_t get_offset_of_photonMicrophoneDeviceId_17() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___photonMicrophoneDeviceId_17)); }
	inline int32_t get_photonMicrophoneDeviceId_17() const { return ___photonMicrophoneDeviceId_17; }
	inline int32_t* get_address_of_photonMicrophoneDeviceId_17() { return &___photonMicrophoneDeviceId_17; }
	inline void set_photonMicrophoneDeviceId_17(int32_t value)
	{
		___photonMicrophoneDeviceId_17 = value;
	}

	inline static int32_t get_offset_of_inputSource_18() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___inputSource_18)); }
	inline RuntimeObject* get_inputSource_18() const { return ___inputSource_18; }
	inline RuntimeObject** get_address_of_inputSource_18() { return &___inputSource_18; }
	inline void set_inputSource_18(RuntimeObject* value)
	{
		___inputSource_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSource_18), (void*)value);
	}

	inline static int32_t get_offset_of_client_19() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___client_19)); }
	inline VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * get_client_19() const { return ___client_19; }
	inline VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E ** get_address_of_client_19() { return &___client_19; }
	inline void set_client_19(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * value)
	{
		___client_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_19), (void*)value);
	}

	inline static int32_t get_offset_of_voiceConnection_20() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___voiceConnection_20)); }
	inline VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704 * get_voiceConnection_20() const { return ___voiceConnection_20; }
	inline VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704 ** get_address_of_voiceConnection_20() { return &___voiceConnection_20; }
	inline void set_voiceConnection_20(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704 * value)
	{
		___voiceConnection_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceConnection_20), (void*)value);
	}

	inline static int32_t get_offset_of_interestGroup_21() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___interestGroup_21)); }
	inline uint8_t get_interestGroup_21() const { return ___interestGroup_21; }
	inline uint8_t* get_address_of_interestGroup_21() { return &___interestGroup_21; }
	inline void set_interestGroup_21(uint8_t value)
	{
		___interestGroup_21 = value;
	}

	inline static int32_t get_offset_of_debugEchoMode_22() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___debugEchoMode_22)); }
	inline bool get_debugEchoMode_22() const { return ___debugEchoMode_22; }
	inline bool* get_address_of_debugEchoMode_22() { return &___debugEchoMode_22; }
	inline void set_debugEchoMode_22(bool value)
	{
		___debugEchoMode_22 = value;
	}

	inline static int32_t get_offset_of_reliableMode_23() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___reliableMode_23)); }
	inline bool get_reliableMode_23() const { return ___reliableMode_23; }
	inline bool* get_address_of_reliableMode_23() { return &___reliableMode_23; }
	inline void set_reliableMode_23(bool value)
	{
		___reliableMode_23 = value;
	}

	inline static int32_t get_offset_of_encrypt_24() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___encrypt_24)); }
	inline bool get_encrypt_24() const { return ___encrypt_24; }
	inline bool* get_address_of_encrypt_24() { return &___encrypt_24; }
	inline void set_encrypt_24(bool value)
	{
		___encrypt_24 = value;
	}

	inline static int32_t get_offset_of_transmitEnabled_25() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___transmitEnabled_25)); }
	inline bool get_transmitEnabled_25() const { return ___transmitEnabled_25; }
	inline bool* get_address_of_transmitEnabled_25() { return &___transmitEnabled_25; }
	inline void set_transmitEnabled_25(bool value)
	{
		___transmitEnabled_25 = value;
	}

	inline static int32_t get_offset_of_samplingRate_26() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___samplingRate_26)); }
	inline int32_t get_samplingRate_26() const { return ___samplingRate_26; }
	inline int32_t* get_address_of_samplingRate_26() { return &___samplingRate_26; }
	inline void set_samplingRate_26(int32_t value)
	{
		___samplingRate_26 = value;
	}

	inline static int32_t get_offset_of_frameDuration_27() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___frameDuration_27)); }
	inline int32_t get_frameDuration_27() const { return ___frameDuration_27; }
	inline int32_t* get_address_of_frameDuration_27() { return &___frameDuration_27; }
	inline void set_frameDuration_27(int32_t value)
	{
		___frameDuration_27 = value;
	}

	inline static int32_t get_offset_of_bitrate_28() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___bitrate_28)); }
	inline int32_t get_bitrate_28() const { return ___bitrate_28; }
	inline int32_t* get_address_of_bitrate_28() { return &___bitrate_28; }
	inline void set_bitrate_28(int32_t value)
	{
		___bitrate_28 = value;
	}

	inline static int32_t get_offset_of_sourceType_29() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___sourceType_29)); }
	inline int32_t get_sourceType_29() const { return ___sourceType_29; }
	inline int32_t* get_address_of_sourceType_29() { return &___sourceType_29; }
	inline void set_sourceType_29(int32_t value)
	{
		___sourceType_29 = value;
	}

	inline static int32_t get_offset_of_microphoneType_30() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___microphoneType_30)); }
	inline int32_t get_microphoneType_30() const { return ___microphoneType_30; }
	inline int32_t* get_address_of_microphoneType_30() { return &___microphoneType_30; }
	inline void set_microphoneType_30(int32_t value)
	{
		___microphoneType_30 = value;
	}

	inline static int32_t get_offset_of_audioClip_31() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___audioClip_31)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_audioClip_31() const { return ___audioClip_31; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_audioClip_31() { return &___audioClip_31; }
	inline void set_audioClip_31(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___audioClip_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioClip_31), (void*)value);
	}

	inline static int32_t get_offset_of_loopAudioClip_32() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___loopAudioClip_32)); }
	inline bool get_loopAudioClip_32() const { return ___loopAudioClip_32; }
	inline bool* get_address_of_loopAudioClip_32() { return &___loopAudioClip_32; }
	inline void set_loopAudioClip_32(bool value)
	{
		___loopAudioClip_32 = value;
	}

	inline static int32_t get_offset_of_isRecording_33() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___isRecording_33)); }
	inline bool get_isRecording_33() const { return ___isRecording_33; }
	inline bool* get_address_of_isRecording_33() { return &___isRecording_33; }
	inline void set_isRecording_33(bool value)
	{
		___isRecording_33 = value;
	}

	inline static int32_t get_offset_of_inputFactory_34() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___inputFactory_34)); }
	inline Func_1_t3729C27ED506C17CDE248FA4C18C6B936CAE4718 * get_inputFactory_34() const { return ___inputFactory_34; }
	inline Func_1_t3729C27ED506C17CDE248FA4C18C6B936CAE4718 ** get_address_of_inputFactory_34() { return &___inputFactory_34; }
	inline void set_inputFactory_34(Func_1_t3729C27ED506C17CDE248FA4C18C6B936CAE4718 * value)
	{
		___inputFactory_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputFactory_34), (void*)value);
	}

	inline static int32_t get_offset_of_photonMicChangeNotifier_36() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___photonMicChangeNotifier_36)); }
	inline AudioInChangeNotifier_t9FD18C1291DEE5F939307CF00E55FFCFE0E9E07D * get_photonMicChangeNotifier_36() const { return ___photonMicChangeNotifier_36; }
	inline AudioInChangeNotifier_t9FD18C1291DEE5F939307CF00E55FFCFE0E9E07D ** get_address_of_photonMicChangeNotifier_36() { return &___photonMicChangeNotifier_36; }
	inline void set_photonMicChangeNotifier_36(AudioInChangeNotifier_t9FD18C1291DEE5F939307CF00E55FFCFE0E9E07D * value)
	{
		___photonMicChangeNotifier_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___photonMicChangeNotifier_36), (void*)value);
	}

	inline static int32_t get_offset_of_reactOnSystemChanges_37() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___reactOnSystemChanges_37)); }
	inline bool get_reactOnSystemChanges_37() const { return ___reactOnSystemChanges_37; }
	inline bool* get_address_of_reactOnSystemChanges_37() { return &___reactOnSystemChanges_37; }
	inline void set_reactOnSystemChanges_37(bool value)
	{
		___reactOnSystemChanges_37 = value;
	}

	inline static int32_t get_offset_of_subscribedToSystemChangesPhoton_38() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___subscribedToSystemChangesPhoton_38)); }
	inline bool get_subscribedToSystemChangesPhoton_38() const { return ___subscribedToSystemChangesPhoton_38; }
	inline bool* get_address_of_subscribedToSystemChangesPhoton_38() { return &___subscribedToSystemChangesPhoton_38; }
	inline void set_subscribedToSystemChangesPhoton_38(bool value)
	{
		___subscribedToSystemChangesPhoton_38 = value;
	}

	inline static int32_t get_offset_of_subscribedToSystemChangesUnity_39() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___subscribedToSystemChangesUnity_39)); }
	inline bool get_subscribedToSystemChangesUnity_39() const { return ___subscribedToSystemChangesUnity_39; }
	inline bool* get_address_of_subscribedToSystemChangesUnity_39() { return &___subscribedToSystemChangesUnity_39; }
	inline void set_subscribedToSystemChangesUnity_39(bool value)
	{
		___subscribedToSystemChangesUnity_39 = value;
	}

	inline static int32_t get_offset_of_autoStart_40() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___autoStart_40)); }
	inline bool get_autoStart_40() const { return ___autoStart_40; }
	inline bool* get_address_of_autoStart_40() { return &___autoStart_40; }
	inline void set_autoStart_40(bool value)
	{
		___autoStart_40 = value;
	}

	inline static int32_t get_offset_of_nativeAndroidMicrophoneSettings_41() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___nativeAndroidMicrophoneSettings_41)); }
	inline NativeAndroidMicrophoneSettings_t81CD982289044EB8A482468C8FB36BFAC50A40E0  get_nativeAndroidMicrophoneSettings_41() const { return ___nativeAndroidMicrophoneSettings_41; }
	inline NativeAndroidMicrophoneSettings_t81CD982289044EB8A482468C8FB36BFAC50A40E0 * get_address_of_nativeAndroidMicrophoneSettings_41() { return &___nativeAndroidMicrophoneSettings_41; }
	inline void set_nativeAndroidMicrophoneSettings_41(NativeAndroidMicrophoneSettings_t81CD982289044EB8A482468C8FB36BFAC50A40E0  value)
	{
		___nativeAndroidMicrophoneSettings_41 = value;
	}

	inline static int32_t get_offset_of_recordOnlyWhenEnabled_42() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___recordOnlyWhenEnabled_42)); }
	inline bool get_recordOnlyWhenEnabled_42() const { return ___recordOnlyWhenEnabled_42; }
	inline bool* get_address_of_recordOnlyWhenEnabled_42() { return &___recordOnlyWhenEnabled_42; }
	inline void set_recordOnlyWhenEnabled_42(bool value)
	{
		___recordOnlyWhenEnabled_42 = value;
	}

	inline static int32_t get_offset_of_skipDeviceChangeChecks_43() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___skipDeviceChangeChecks_43)); }
	inline bool get_skipDeviceChangeChecks_43() const { return ___skipDeviceChangeChecks_43; }
	inline bool* get_address_of_skipDeviceChangeChecks_43() { return &___skipDeviceChangeChecks_43; }
	inline void set_skipDeviceChangeChecks_43(bool value)
	{
		___skipDeviceChangeChecks_43 = value;
	}

	inline static int32_t get_offset_of_wasRecordingBeforePause_44() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___wasRecordingBeforePause_44)); }
	inline bool get_wasRecordingBeforePause_44() const { return ___wasRecordingBeforePause_44; }
	inline bool* get_address_of_wasRecordingBeforePause_44() { return &___wasRecordingBeforePause_44; }
	inline void set_wasRecordingBeforePause_44(bool value)
	{
		___wasRecordingBeforePause_44 = value;
	}

	inline static int32_t get_offset_of_stopRecordingWhenPaused_45() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___stopRecordingWhenPaused_45)); }
	inline bool get_stopRecordingWhenPaused_45() const { return ___stopRecordingWhenPaused_45; }
	inline bool* get_address_of_stopRecordingWhenPaused_45() { return &___stopRecordingWhenPaused_45; }
	inline void set_stopRecordingWhenPaused_45(bool value)
	{
		___stopRecordingWhenPaused_45 = value;
	}

	inline static int32_t get_offset_of_useOnAudioFilterRead_46() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___useOnAudioFilterRead_46)); }
	inline bool get_useOnAudioFilterRead_46() const { return ___useOnAudioFilterRead_46; }
	inline bool* get_address_of_useOnAudioFilterRead_46() { return &___useOnAudioFilterRead_46; }
	inline void set_useOnAudioFilterRead_46(bool value)
	{
		___useOnAudioFilterRead_46 = value;
	}

	inline static int32_t get_offset_of_trySamplingRateMatch_47() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___trySamplingRateMatch_47)); }
	inline bool get_trySamplingRateMatch_47() const { return ___trySamplingRateMatch_47; }
	inline bool* get_address_of_trySamplingRateMatch_47() { return &___trySamplingRateMatch_47; }
	inline void set_trySamplingRateMatch_47(bool value)
	{
		___trySamplingRateMatch_47 = value;
	}

	inline static int32_t get_offset_of_useMicrophoneTypeFallback_48() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___useMicrophoneTypeFallback_48)); }
	inline bool get_useMicrophoneTypeFallback_48() const { return ___useMicrophoneTypeFallback_48; }
	inline bool* get_address_of_useMicrophoneTypeFallback_48() { return &___useMicrophoneTypeFallback_48; }
	inline void set_useMicrophoneTypeFallback_48(bool value)
	{
		___useMicrophoneTypeFallback_48 = value;
	}

	inline static int32_t get_offset_of_recordOnlyWhenJoined_49() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___recordOnlyWhenJoined_49)); }
	inline bool get_recordOnlyWhenJoined_49() const { return ___recordOnlyWhenJoined_49; }
	inline bool* get_address_of_recordOnlyWhenJoined_49() { return &___recordOnlyWhenJoined_49; }
	inline void set_recordOnlyWhenJoined_49(bool value)
	{
		___recordOnlyWhenJoined_49 = value;
	}

	inline static int32_t get_offset_of_recordingStoppedExplicitly_50() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___recordingStoppedExplicitly_50)); }
	inline bool get_recordingStoppedExplicitly_50() const { return ___recordingStoppedExplicitly_50; }
	inline bool* get_address_of_recordingStoppedExplicitly_50() { return &___recordingStoppedExplicitly_50; }
	inline void set_recordingStoppedExplicitly_50(bool value)
	{
		___recordingStoppedExplicitly_50 = value;
	}

	inline static int32_t get_offset_of_photonMicrophonesEnumerator_51() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___photonMicrophonesEnumerator_51)); }
	inline AudioInEnumerator_t32F46692F713132406E4754493C35B8AC1B56190 * get_photonMicrophonesEnumerator_51() const { return ___photonMicrophonesEnumerator_51; }
	inline AudioInEnumerator_t32F46692F713132406E4754493C35B8AC1B56190 ** get_address_of_photonMicrophonesEnumerator_51() { return &___photonMicrophonesEnumerator_51; }
	inline void set_photonMicrophonesEnumerator_51(AudioInEnumerator_t32F46692F713132406E4754493C35B8AC1B56190 * value)
	{
		___photonMicrophonesEnumerator_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___photonMicrophonesEnumerator_51), (void*)value);
	}

	inline static int32_t get_offset_of_unityMicrophonesEnumerator_52() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___unityMicrophonesEnumerator_52)); }
	inline AudioInEnumerator_tF947D3CF2E3FAA2C4CAE2AC47E69D7CAD332F197 * get_unityMicrophonesEnumerator_52() const { return ___unityMicrophonesEnumerator_52; }
	inline AudioInEnumerator_tF947D3CF2E3FAA2C4CAE2AC47E69D7CAD332F197 ** get_address_of_unityMicrophonesEnumerator_52() { return &___unityMicrophonesEnumerator_52; }
	inline void set_unityMicrophonesEnumerator_52(AudioInEnumerator_tF947D3CF2E3FAA2C4CAE2AC47E69D7CAD332F197 * value)
	{
		___unityMicrophonesEnumerator_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityMicrophonesEnumerator_52), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRequiresRestartU3Ek__BackingField_53() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___U3CRequiresRestartU3Ek__BackingField_53)); }
	inline bool get_U3CRequiresRestartU3Ek__BackingField_53() const { return ___U3CRequiresRestartU3Ek__BackingField_53; }
	inline bool* get_address_of_U3CRequiresRestartU3Ek__BackingField_53() { return &___U3CRequiresRestartU3Ek__BackingField_53; }
	inline void set_U3CRequiresRestartU3Ek__BackingField_53(bool value)
	{
		___U3CRequiresRestartU3Ek__BackingField_53 = value;
	}

	inline static int32_t get_offset_of_U3CTypeConvertU3Ek__BackingField_54() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___U3CTypeConvertU3Ek__BackingField_54)); }
	inline int32_t get_U3CTypeConvertU3Ek__BackingField_54() const { return ___U3CTypeConvertU3Ek__BackingField_54; }
	inline int32_t* get_address_of_U3CTypeConvertU3Ek__BackingField_54() { return &___U3CTypeConvertU3Ek__BackingField_54; }
	inline void set_U3CTypeConvertU3Ek__BackingField_54(int32_t value)
	{
		___U3CTypeConvertU3Ek__BackingField_54 = value;
	}
};

struct Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5_StaticFields
{
public:
	// System.Array Photon.Voice.Unity.Recorder::samplingRateValues
	RuntimeArray * ___samplingRateValues_10;
	// Photon.Voice.Unity.AudioInEnumeratorEx Photon.Voice.Unity.Recorder::photonMicrophoneEnumerator
	AudioInEnumeratorEx_t35B34A1B6B7843D7D4A3D26D88ADE9C57AA2794A * ___photonMicrophoneEnumerator_35;

public:
	inline static int32_t get_offset_of_samplingRateValues_10() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5_StaticFields, ___samplingRateValues_10)); }
	inline RuntimeArray * get_samplingRateValues_10() const { return ___samplingRateValues_10; }
	inline RuntimeArray ** get_address_of_samplingRateValues_10() { return &___samplingRateValues_10; }
	inline void set_samplingRateValues_10(RuntimeArray * value)
	{
		___samplingRateValues_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___samplingRateValues_10), (void*)value);
	}

	inline static int32_t get_offset_of_photonMicrophoneEnumerator_35() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5_StaticFields, ___photonMicrophoneEnumerator_35)); }
	inline AudioInEnumeratorEx_t35B34A1B6B7843D7D4A3D26D88ADE9C57AA2794A * get_photonMicrophoneEnumerator_35() const { return ___photonMicrophoneEnumerator_35; }
	inline AudioInEnumeratorEx_t35B34A1B6B7843D7D4A3D26D88ADE9C57AA2794A ** get_address_of_photonMicrophoneEnumerator_35() { return &___photonMicrophoneEnumerator_35; }
	inline void set_photonMicrophoneEnumerator_35(AudioInEnumeratorEx_t35B34A1B6B7843D7D4A3D26D88ADE9C57AA2794A * value)
	{
		___photonMicrophoneEnumerator_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___photonMicrophoneEnumerator_35), (void*)value);
	}
};


// Photon.Voice.Unity.UtilityScripts.SaveIncomingStreamToFile
struct SaveIncomingStreamToFile_tF1D61ADFBEC004703068B6348E33B13FBD49019E  : public VoiceComponent_tCE3547F23B76A6B42D3BD5158F110EFD8044E88C
{
public:
	// Photon.Voice.Unity.VoiceConnection Photon.Voice.Unity.UtilityScripts.SaveIncomingStreamToFile::voiceConnection
	VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704 * ___voiceConnection_8;
	// System.Boolean Photon.Voice.Unity.UtilityScripts.SaveIncomingStreamToFile::muteLocalSpeaker
	bool ___muteLocalSpeaker_9;

public:
	inline static int32_t get_offset_of_voiceConnection_8() { return static_cast<int32_t>(offsetof(SaveIncomingStreamToFile_tF1D61ADFBEC004703068B6348E33B13FBD49019E, ___voiceConnection_8)); }
	inline VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704 * get_voiceConnection_8() const { return ___voiceConnection_8; }
	inline VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704 ** get_address_of_voiceConnection_8() { return &___voiceConnection_8; }
	inline void set_voiceConnection_8(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704 * value)
	{
		___voiceConnection_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceConnection_8), (void*)value);
	}

	inline static int32_t get_offset_of_muteLocalSpeaker_9() { return static_cast<int32_t>(offsetof(SaveIncomingStreamToFile_tF1D61ADFBEC004703068B6348E33B13FBD49019E, ___muteLocalSpeaker_9)); }
	inline bool get_muteLocalSpeaker_9() const { return ___muteLocalSpeaker_9; }
	inline bool* get_address_of_muteLocalSpeaker_9() { return &___muteLocalSpeaker_9; }
	inline void set_muteLocalSpeaker_9(bool value)
	{
		___muteLocalSpeaker_9 = value;
	}
};


// Photon.Voice.Unity.Speaker
struct Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA  : public VoiceComponent_tCE3547F23B76A6B42D3BD5158F110EFD8044E88C
{
public:
	// Photon.Voice.IAudioOut`1<System.Single> Photon.Voice.Unity.Speaker::audioOutput
	RuntimeObject* ___audioOutput_8;
	// Photon.Voice.Unity.RemoteVoiceLink Photon.Voice.Unity.Speaker::remoteVoiceLink
	RemoteVoiceLink_tDDD70AB15B70170AF282B017A3BCE94DB80E9CBC * ___remoteVoiceLink_9;
	// System.Boolean Photon.Voice.Unity.Speaker::playbackOnlyWhenEnabled
	bool ___playbackOnlyWhenEnabled_10;
	// System.Int32 Photon.Voice.Unity.Speaker::playDelayMs
	int32_t ___playDelayMs_11;
	// Photon.Voice.Unity.PlaybackDelaySettings Photon.Voice.Unity.Speaker::playbackDelaySettings
	PlaybackDelaySettings_tB71597D43586CA1E8F24F7578487462A40E280E3  ___playbackDelaySettings_12;
	// System.Boolean Photon.Voice.Unity.Speaker::playbackExplicitlyStopped
	bool ___playbackExplicitlyStopped_13;
	// System.Action`1<Photon.Voice.Unity.Speaker> Photon.Voice.Unity.Speaker::<OnRemoteVoiceRemoveAction>k__BackingField
	Action_1_tED63E8DFC675CB46D15B876DE1362DA7E43672E1 * ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_14;
	// Photon.Realtime.Player Photon.Voice.Unity.Speaker::<Actor>k__BackingField
	Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___U3CActorU3Ek__BackingField_15;
	// System.Boolean Photon.Voice.Unity.Speaker::<PlaybackStarted>k__BackingField
	bool ___U3CPlaybackStartedU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_audioOutput_8() { return static_cast<int32_t>(offsetof(Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA, ___audioOutput_8)); }
	inline RuntimeObject* get_audioOutput_8() const { return ___audioOutput_8; }
	inline RuntimeObject** get_address_of_audioOutput_8() { return &___audioOutput_8; }
	inline void set_audioOutput_8(RuntimeObject* value)
	{
		___audioOutput_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioOutput_8), (void*)value);
	}

	inline static int32_t get_offset_of_remoteVoiceLink_9() { return static_cast<int32_t>(offsetof(Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA, ___remoteVoiceLink_9)); }
	inline RemoteVoiceLink_tDDD70AB15B70170AF282B017A3BCE94DB80E9CBC * get_remoteVoiceLink_9() const { return ___remoteVoiceLink_9; }
	inline RemoteVoiceLink_tDDD70AB15B70170AF282B017A3BCE94DB80E9CBC ** get_address_of_remoteVoiceLink_9() { return &___remoteVoiceLink_9; }
	inline void set_remoteVoiceLink_9(RemoteVoiceLink_tDDD70AB15B70170AF282B017A3BCE94DB80E9CBC * value)
	{
		___remoteVoiceLink_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remoteVoiceLink_9), (void*)value);
	}

	inline static int32_t get_offset_of_playbackOnlyWhenEnabled_10() { return static_cast<int32_t>(offsetof(Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA, ___playbackOnlyWhenEnabled_10)); }
	inline bool get_playbackOnlyWhenEnabled_10() const { return ___playbackOnlyWhenEnabled_10; }
	inline bool* get_address_of_playbackOnlyWhenEnabled_10() { return &___playbackOnlyWhenEnabled_10; }
	inline void set_playbackOnlyWhenEnabled_10(bool value)
	{
		___playbackOnlyWhenEnabled_10 = value;
	}

	inline static int32_t get_offset_of_playDelayMs_11() { return static_cast<int32_t>(offsetof(Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA, ___playDelayMs_11)); }
	inline int32_t get_playDelayMs_11() const { return ___playDelayMs_11; }
	inline int32_t* get_address_of_playDelayMs_11() { return &___playDelayMs_11; }
	inline void set_playDelayMs_11(int32_t value)
	{
		___playDelayMs_11 = value;
	}

	inline static int32_t get_offset_of_playbackDelaySettings_12() { return static_cast<int32_t>(offsetof(Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA, ___playbackDelaySettings_12)); }
	inline PlaybackDelaySettings_tB71597D43586CA1E8F24F7578487462A40E280E3  get_playbackDelaySettings_12() const { return ___playbackDelaySettings_12; }
	inline PlaybackDelaySettings_tB71597D43586CA1E8F24F7578487462A40E280E3 * get_address_of_playbackDelaySettings_12() { return &___playbackDelaySettings_12; }
	inline void set_playbackDelaySettings_12(PlaybackDelaySettings_tB71597D43586CA1E8F24F7578487462A40E280E3  value)
	{
		___playbackDelaySettings_12 = value;
	}

	inline static int32_t get_offset_of_playbackExplicitlyStopped_13() { return static_cast<int32_t>(offsetof(Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA, ___playbackExplicitlyStopped_13)); }
	inline bool get_playbackExplicitlyStopped_13() const { return ___playbackExplicitlyStopped_13; }
	inline bool* get_address_of_playbackExplicitlyStopped_13() { return &___playbackExplicitlyStopped_13; }
	inline void set_playbackExplicitlyStopped_13(bool value)
	{
		___playbackExplicitlyStopped_13 = value;
	}

	inline static int32_t get_offset_of_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA, ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_14)); }
	inline Action_1_tED63E8DFC675CB46D15B876DE1362DA7E43672E1 * get_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_14() const { return ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_14; }
	inline Action_1_tED63E8DFC675CB46D15B876DE1362DA7E43672E1 ** get_address_of_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_14() { return &___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_14; }
	inline void set_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_14(Action_1_tED63E8DFC675CB46D15B876DE1362DA7E43672E1 * value)
	{
		___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CActorU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA, ___U3CActorU3Ek__BackingField_15)); }
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * get_U3CActorU3Ek__BackingField_15() const { return ___U3CActorU3Ek__BackingField_15; }
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 ** get_address_of_U3CActorU3Ek__BackingField_15() { return &___U3CActorU3Ek__BackingField_15; }
	inline void set_U3CActorU3Ek__BackingField_15(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * value)
	{
		___U3CActorU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CActorU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPlaybackStartedU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA, ___U3CPlaybackStartedU3Ek__BackingField_16)); }
	inline bool get_U3CPlaybackStartedU3Ek__BackingField_16() const { return ___U3CPlaybackStartedU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CPlaybackStartedU3Ek__BackingField_16() { return &___U3CPlaybackStartedU3Ek__BackingField_16; }
	inline void set_U3CPlaybackStartedU3Ek__BackingField_16(bool value)
	{
		___U3CPlaybackStartedU3Ek__BackingField_16 = value;
	}
};


// Photon.Voice.Unity.VoiceConnection
struct VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704  : public ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE
{
public:
	// Photon.Voice.Unity.VoiceLogger Photon.Voice.Unity.VoiceConnection::logger
	VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * ___logger_13;
	// ExitGames.Client.Photon.DebugLevel Photon.Voice.Unity.VoiceConnection::logLevel
	uint8_t ___logLevel_14;
	// Photon.Voice.LoadBalancingTransport Photon.Voice.Unity.VoiceConnection::client
	LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460 * ___client_16;
	// System.Boolean Photon.Voice.Unity.VoiceConnection::enableSupportLogger
	bool ___enableSupportLogger_17;
	// Photon.Realtime.SupportLogger Photon.Voice.Unity.VoiceConnection::supportLoggerComponent
	SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * ___supportLoggerComponent_18;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::updateInterval
	int32_t ___updateInterval_19;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::nextSendTickCount
	int32_t ___nextSendTickCount_20;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::statsResetInterval
	int32_t ___statsResetInterval_21;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::nextStatsTickCount
	int32_t ___nextStatsTickCount_22;
	// System.Single Photon.Voice.Unity.VoiceConnection::statsReferenceTime
	float ___statsReferenceTime_23;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::referenceFramesLost
	int32_t ___referenceFramesLost_24;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::referenceFramesReceived
	int32_t ___referenceFramesReceived_25;
	// UnityEngine.GameObject Photon.Voice.Unity.VoiceConnection::speakerPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___speakerPrefab_26;
	// System.Boolean Photon.Voice.Unity.VoiceConnection::cleanedUp
	bool ___cleanedUp_27;
	// System.Collections.Generic.List`1<Photon.Voice.Unity.RemoteVoiceLink> Photon.Voice.Unity.VoiceConnection::cachedRemoteVoices
	List_1_tB0C131F9DB7AC689F5A2BA8945F3FDA7555F7CEE * ___cachedRemoteVoices_28;
	// Photon.Voice.Unity.Recorder Photon.Voice.Unity.VoiceConnection::primaryRecorder
	Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * ___primaryRecorder_29;
	// System.Boolean Photon.Voice.Unity.VoiceConnection::primaryRecorderInitialized
	bool ___primaryRecorderInitialized_30;
	// ExitGames.Client.Photon.DebugLevel Photon.Voice.Unity.VoiceConnection::globalRecordersLogLevel
	uint8_t ___globalRecordersLogLevel_31;
	// ExitGames.Client.Photon.DebugLevel Photon.Voice.Unity.VoiceConnection::globalSpeakersLogLevel
	uint8_t ___globalSpeakersLogLevel_32;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::globalPlaybackDelay
	int32_t ___globalPlaybackDelay_33;
	// Photon.Voice.Unity.PlaybackDelaySettings Photon.Voice.Unity.VoiceConnection::globalPlaybackDelaySettings
	PlaybackDelaySettings_tB71597D43586CA1E8F24F7578487462A40E280E3  ___globalPlaybackDelaySettings_34;
	// System.Collections.Generic.List`1<Photon.Voice.Unity.Speaker> Photon.Voice.Unity.VoiceConnection::linkedSpeakers
	List_1_t89AF99FADC7E48891C45020A7D9A15E0EB1BB89F * ___linkedSpeakers_35;
	// System.Collections.Generic.List`1<Photon.Voice.Unity.Recorder> Photon.Voice.Unity.VoiceConnection::initializedRecorders
	List_1_tB80863E2156C3F175CD9C6B5B0F964F57B4A5D70 * ___initializedRecorders_36;
	// Photon.Realtime.AppSettings Photon.Voice.Unity.VoiceConnection::Settings
	AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 * ___Settings_37;
	// System.Func`4<System.Int32,System.Byte,System.Object,Photon.Voice.Unity.Speaker> Photon.Voice.Unity.VoiceConnection::SpeakerFactory
	Func_4_t449A75B74B1BEAD9C0CD87D182025CBAB6D17F9D * ___SpeakerFactory_38;
	// System.Action`1<Photon.Voice.Unity.Speaker> Photon.Voice.Unity.VoiceConnection::SpeakerLinked
	Action_1_tED63E8DFC675CB46D15B876DE1362DA7E43672E1 * ___SpeakerLinked_39;
	// System.Action`1<Photon.Voice.Unity.RemoteVoiceLink> Photon.Voice.Unity.VoiceConnection::RemoteVoiceAdded
	Action_1_t08A534A31FEBF8D523007013F75268F7B9B74B80 * ___RemoteVoiceAdded_40;
	// System.Single Photon.Voice.Unity.VoiceConnection::MinimalTimeScaleToDispatchInFixedUpdate
	float ___MinimalTimeScaleToDispatchInFixedUpdate_41;
	// System.Boolean Photon.Voice.Unity.VoiceConnection::AutoCreateSpeakerIfNotFound
	bool ___AutoCreateSpeakerIfNotFound_42;
	// System.Single Photon.Voice.Unity.VoiceConnection::<FramesReceivedPerSecond>k__BackingField
	float ___U3CFramesReceivedPerSecondU3Ek__BackingField_43;
	// System.Single Photon.Voice.Unity.VoiceConnection::<FramesLostPerSecond>k__BackingField
	float ___U3CFramesLostPerSecondU3Ek__BackingField_44;
	// System.Single Photon.Voice.Unity.VoiceConnection::<FramesLostPercent>k__BackingField
	float ___U3CFramesLostPercentU3Ek__BackingField_45;

public:
	inline static int32_t get_offset_of_logger_13() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___logger_13)); }
	inline VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * get_logger_13() const { return ___logger_13; }
	inline VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F ** get_address_of_logger_13() { return &___logger_13; }
	inline void set_logger_13(VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * value)
	{
		___logger_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_13), (void*)value);
	}

	inline static int32_t get_offset_of_logLevel_14() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___logLevel_14)); }
	inline uint8_t get_logLevel_14() const { return ___logLevel_14; }
	inline uint8_t* get_address_of_logLevel_14() { return &___logLevel_14; }
	inline void set_logLevel_14(uint8_t value)
	{
		___logLevel_14 = value;
	}

	inline static int32_t get_offset_of_client_16() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___client_16)); }
	inline LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460 * get_client_16() const { return ___client_16; }
	inline LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460 ** get_address_of_client_16() { return &___client_16; }
	inline void set_client_16(LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460 * value)
	{
		___client_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_16), (void*)value);
	}

	inline static int32_t get_offset_of_enableSupportLogger_17() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___enableSupportLogger_17)); }
	inline bool get_enableSupportLogger_17() const { return ___enableSupportLogger_17; }
	inline bool* get_address_of_enableSupportLogger_17() { return &___enableSupportLogger_17; }
	inline void set_enableSupportLogger_17(bool value)
	{
		___enableSupportLogger_17 = value;
	}

	inline static int32_t get_offset_of_supportLoggerComponent_18() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___supportLoggerComponent_18)); }
	inline SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * get_supportLoggerComponent_18() const { return ___supportLoggerComponent_18; }
	inline SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 ** get_address_of_supportLoggerComponent_18() { return &___supportLoggerComponent_18; }
	inline void set_supportLoggerComponent_18(SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * value)
	{
		___supportLoggerComponent_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___supportLoggerComponent_18), (void*)value);
	}

	inline static int32_t get_offset_of_updateInterval_19() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___updateInterval_19)); }
	inline int32_t get_updateInterval_19() const { return ___updateInterval_19; }
	inline int32_t* get_address_of_updateInterval_19() { return &___updateInterval_19; }
	inline void set_updateInterval_19(int32_t value)
	{
		___updateInterval_19 = value;
	}

	inline static int32_t get_offset_of_nextSendTickCount_20() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___nextSendTickCount_20)); }
	inline int32_t get_nextSendTickCount_20() const { return ___nextSendTickCount_20; }
	inline int32_t* get_address_of_nextSendTickCount_20() { return &___nextSendTickCount_20; }
	inline void set_nextSendTickCount_20(int32_t value)
	{
		___nextSendTickCount_20 = value;
	}

	inline static int32_t get_offset_of_statsResetInterval_21() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___statsResetInterval_21)); }
	inline int32_t get_statsResetInterval_21() const { return ___statsResetInterval_21; }
	inline int32_t* get_address_of_statsResetInterval_21() { return &___statsResetInterval_21; }
	inline void set_statsResetInterval_21(int32_t value)
	{
		___statsResetInterval_21 = value;
	}

	inline static int32_t get_offset_of_nextStatsTickCount_22() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___nextStatsTickCount_22)); }
	inline int32_t get_nextStatsTickCount_22() const { return ___nextStatsTickCount_22; }
	inline int32_t* get_address_of_nextStatsTickCount_22() { return &___nextStatsTickCount_22; }
	inline void set_nextStatsTickCount_22(int32_t value)
	{
		___nextStatsTickCount_22 = value;
	}

	inline static int32_t get_offset_of_statsReferenceTime_23() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___statsReferenceTime_23)); }
	inline float get_statsReferenceTime_23() const { return ___statsReferenceTime_23; }
	inline float* get_address_of_statsReferenceTime_23() { return &___statsReferenceTime_23; }
	inline void set_statsReferenceTime_23(float value)
	{
		___statsReferenceTime_23 = value;
	}

	inline static int32_t get_offset_of_referenceFramesLost_24() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___referenceFramesLost_24)); }
	inline int32_t get_referenceFramesLost_24() const { return ___referenceFramesLost_24; }
	inline int32_t* get_address_of_referenceFramesLost_24() { return &___referenceFramesLost_24; }
	inline void set_referenceFramesLost_24(int32_t value)
	{
		___referenceFramesLost_24 = value;
	}

	inline static int32_t get_offset_of_referenceFramesReceived_25() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___referenceFramesReceived_25)); }
	inline int32_t get_referenceFramesReceived_25() const { return ___referenceFramesReceived_25; }
	inline int32_t* get_address_of_referenceFramesReceived_25() { return &___referenceFramesReceived_25; }
	inline void set_referenceFramesReceived_25(int32_t value)
	{
		___referenceFramesReceived_25 = value;
	}

	inline static int32_t get_offset_of_speakerPrefab_26() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___speakerPrefab_26)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_speakerPrefab_26() const { return ___speakerPrefab_26; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_speakerPrefab_26() { return &___speakerPrefab_26; }
	inline void set_speakerPrefab_26(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___speakerPrefab_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___speakerPrefab_26), (void*)value);
	}

	inline static int32_t get_offset_of_cleanedUp_27() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___cleanedUp_27)); }
	inline bool get_cleanedUp_27() const { return ___cleanedUp_27; }
	inline bool* get_address_of_cleanedUp_27() { return &___cleanedUp_27; }
	inline void set_cleanedUp_27(bool value)
	{
		___cleanedUp_27 = value;
	}

	inline static int32_t get_offset_of_cachedRemoteVoices_28() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___cachedRemoteVoices_28)); }
	inline List_1_tB0C131F9DB7AC689F5A2BA8945F3FDA7555F7CEE * get_cachedRemoteVoices_28() const { return ___cachedRemoteVoices_28; }
	inline List_1_tB0C131F9DB7AC689F5A2BA8945F3FDA7555F7CEE ** get_address_of_cachedRemoteVoices_28() { return &___cachedRemoteVoices_28; }
	inline void set_cachedRemoteVoices_28(List_1_tB0C131F9DB7AC689F5A2BA8945F3FDA7555F7CEE * value)
	{
		___cachedRemoteVoices_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedRemoteVoices_28), (void*)value);
	}

	inline static int32_t get_offset_of_primaryRecorder_29() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___primaryRecorder_29)); }
	inline Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * get_primaryRecorder_29() const { return ___primaryRecorder_29; }
	inline Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 ** get_address_of_primaryRecorder_29() { return &___primaryRecorder_29; }
	inline void set_primaryRecorder_29(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * value)
	{
		___primaryRecorder_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___primaryRecorder_29), (void*)value);
	}

	inline static int32_t get_offset_of_primaryRecorderInitialized_30() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___primaryRecorderInitialized_30)); }
	inline bool get_primaryRecorderInitialized_30() const { return ___primaryRecorderInitialized_30; }
	inline bool* get_address_of_primaryRecorderInitialized_30() { return &___primaryRecorderInitialized_30; }
	inline void set_primaryRecorderInitialized_30(bool value)
	{
		___primaryRecorderInitialized_30 = value;
	}

	inline static int32_t get_offset_of_globalRecordersLogLevel_31() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___globalRecordersLogLevel_31)); }
	inline uint8_t get_globalRecordersLogLevel_31() const { return ___globalRecordersLogLevel_31; }
	inline uint8_t* get_address_of_globalRecordersLogLevel_31() { return &___globalRecordersLogLevel_31; }
	inline void set_globalRecordersLogLevel_31(uint8_t value)
	{
		___globalRecordersLogLevel_31 = value;
	}

	inline static int32_t get_offset_of_globalSpeakersLogLevel_32() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___globalSpeakersLogLevel_32)); }
	inline uint8_t get_globalSpeakersLogLevel_32() const { return ___globalSpeakersLogLevel_32; }
	inline uint8_t* get_address_of_globalSpeakersLogLevel_32() { return &___globalSpeakersLogLevel_32; }
	inline void set_globalSpeakersLogLevel_32(uint8_t value)
	{
		___globalSpeakersLogLevel_32 = value;
	}

	inline static int32_t get_offset_of_globalPlaybackDelay_33() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___globalPlaybackDelay_33)); }
	inline int32_t get_globalPlaybackDelay_33() const { return ___globalPlaybackDelay_33; }
	inline int32_t* get_address_of_globalPlaybackDelay_33() { return &___globalPlaybackDelay_33; }
	inline void set_globalPlaybackDelay_33(int32_t value)
	{
		___globalPlaybackDelay_33 = value;
	}

	inline static int32_t get_offset_of_globalPlaybackDelaySettings_34() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___globalPlaybackDelaySettings_34)); }
	inline PlaybackDelaySettings_tB71597D43586CA1E8F24F7578487462A40E280E3  get_globalPlaybackDelaySettings_34() const { return ___globalPlaybackDelaySettings_34; }
	inline PlaybackDelaySettings_tB71597D43586CA1E8F24F7578487462A40E280E3 * get_address_of_globalPlaybackDelaySettings_34() { return &___globalPlaybackDelaySettings_34; }
	inline void set_globalPlaybackDelaySettings_34(PlaybackDelaySettings_tB71597D43586CA1E8F24F7578487462A40E280E3  value)
	{
		___globalPlaybackDelaySettings_34 = value;
	}

	inline static int32_t get_offset_of_linkedSpeakers_35() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___linkedSpeakers_35)); }
	inline List_1_t89AF99FADC7E48891C45020A7D9A15E0EB1BB89F * get_linkedSpeakers_35() const { return ___linkedSpeakers_35; }
	inline List_1_t89AF99FADC7E48891C45020A7D9A15E0EB1BB89F ** get_address_of_linkedSpeakers_35() { return &___linkedSpeakers_35; }
	inline void set_linkedSpeakers_35(List_1_t89AF99FADC7E48891C45020A7D9A15E0EB1BB89F * value)
	{
		___linkedSpeakers_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___linkedSpeakers_35), (void*)value);
	}

	inline static int32_t get_offset_of_initializedRecorders_36() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___initializedRecorders_36)); }
	inline List_1_tB80863E2156C3F175CD9C6B5B0F964F57B4A5D70 * get_initializedRecorders_36() const { return ___initializedRecorders_36; }
	inline List_1_tB80863E2156C3F175CD9C6B5B0F964F57B4A5D70 ** get_address_of_initializedRecorders_36() { return &___initializedRecorders_36; }
	inline void set_initializedRecorders_36(List_1_tB80863E2156C3F175CD9C6B5B0F964F57B4A5D70 * value)
	{
		___initializedRecorders_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___initializedRecorders_36), (void*)value);
	}

	inline static int32_t get_offset_of_Settings_37() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___Settings_37)); }
	inline AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 * get_Settings_37() const { return ___Settings_37; }
	inline AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 ** get_address_of_Settings_37() { return &___Settings_37; }
	inline void set_Settings_37(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 * value)
	{
		___Settings_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Settings_37), (void*)value);
	}

	inline static int32_t get_offset_of_SpeakerFactory_38() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___SpeakerFactory_38)); }
	inline Func_4_t449A75B74B1BEAD9C0CD87D182025CBAB6D17F9D * get_SpeakerFactory_38() const { return ___SpeakerFactory_38; }
	inline Func_4_t449A75B74B1BEAD9C0CD87D182025CBAB6D17F9D ** get_address_of_SpeakerFactory_38() { return &___SpeakerFactory_38; }
	inline void set_SpeakerFactory_38(Func_4_t449A75B74B1BEAD9C0CD87D182025CBAB6D17F9D * value)
	{
		___SpeakerFactory_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SpeakerFactory_38), (void*)value);
	}

	inline static int32_t get_offset_of_SpeakerLinked_39() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___SpeakerLinked_39)); }
	inline Action_1_tED63E8DFC675CB46D15B876DE1362DA7E43672E1 * get_SpeakerLinked_39() const { return ___SpeakerLinked_39; }
	inline Action_1_tED63E8DFC675CB46D15B876DE1362DA7E43672E1 ** get_address_of_SpeakerLinked_39() { return &___SpeakerLinked_39; }
	inline void set_SpeakerLinked_39(Action_1_tED63E8DFC675CB46D15B876DE1362DA7E43672E1 * value)
	{
		___SpeakerLinked_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SpeakerLinked_39), (void*)value);
	}

	inline static int32_t get_offset_of_RemoteVoiceAdded_40() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___RemoteVoiceAdded_40)); }
	inline Action_1_t08A534A31FEBF8D523007013F75268F7B9B74B80 * get_RemoteVoiceAdded_40() const { return ___RemoteVoiceAdded_40; }
	inline Action_1_t08A534A31FEBF8D523007013F75268F7B9B74B80 ** get_address_of_RemoteVoiceAdded_40() { return &___RemoteVoiceAdded_40; }
	inline void set_RemoteVoiceAdded_40(Action_1_t08A534A31FEBF8D523007013F75268F7B9B74B80 * value)
	{
		___RemoteVoiceAdded_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RemoteVoiceAdded_40), (void*)value);
	}

	inline static int32_t get_offset_of_MinimalTimeScaleToDispatchInFixedUpdate_41() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___MinimalTimeScaleToDispatchInFixedUpdate_41)); }
	inline float get_MinimalTimeScaleToDispatchInFixedUpdate_41() const { return ___MinimalTimeScaleToDispatchInFixedUpdate_41; }
	inline float* get_address_of_MinimalTimeScaleToDispatchInFixedUpdate_41() { return &___MinimalTimeScaleToDispatchInFixedUpdate_41; }
	inline void set_MinimalTimeScaleToDispatchInFixedUpdate_41(float value)
	{
		___MinimalTimeScaleToDispatchInFixedUpdate_41 = value;
	}

	inline static int32_t get_offset_of_AutoCreateSpeakerIfNotFound_42() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___AutoCreateSpeakerIfNotFound_42)); }
	inline bool get_AutoCreateSpeakerIfNotFound_42() const { return ___AutoCreateSpeakerIfNotFound_42; }
	inline bool* get_address_of_AutoCreateSpeakerIfNotFound_42() { return &___AutoCreateSpeakerIfNotFound_42; }
	inline void set_AutoCreateSpeakerIfNotFound_42(bool value)
	{
		___AutoCreateSpeakerIfNotFound_42 = value;
	}

	inline static int32_t get_offset_of_U3CFramesReceivedPerSecondU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___U3CFramesReceivedPerSecondU3Ek__BackingField_43)); }
	inline float get_U3CFramesReceivedPerSecondU3Ek__BackingField_43() const { return ___U3CFramesReceivedPerSecondU3Ek__BackingField_43; }
	inline float* get_address_of_U3CFramesReceivedPerSecondU3Ek__BackingField_43() { return &___U3CFramesReceivedPerSecondU3Ek__BackingField_43; }
	inline void set_U3CFramesReceivedPerSecondU3Ek__BackingField_43(float value)
	{
		___U3CFramesReceivedPerSecondU3Ek__BackingField_43 = value;
	}

	inline static int32_t get_offset_of_U3CFramesLostPerSecondU3Ek__BackingField_44() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___U3CFramesLostPerSecondU3Ek__BackingField_44)); }
	inline float get_U3CFramesLostPerSecondU3Ek__BackingField_44() const { return ___U3CFramesLostPerSecondU3Ek__BackingField_44; }
	inline float* get_address_of_U3CFramesLostPerSecondU3Ek__BackingField_44() { return &___U3CFramesLostPerSecondU3Ek__BackingField_44; }
	inline void set_U3CFramesLostPerSecondU3Ek__BackingField_44(float value)
	{
		___U3CFramesLostPerSecondU3Ek__BackingField_44 = value;
	}

	inline static int32_t get_offset_of_U3CFramesLostPercentU3Ek__BackingField_45() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___U3CFramesLostPercentU3Ek__BackingField_45)); }
	inline float get_U3CFramesLostPercentU3Ek__BackingField_45() const { return ___U3CFramesLostPercentU3Ek__BackingField_45; }
	inline float* get_address_of_U3CFramesLostPercentU3Ek__BackingField_45() { return &___U3CFramesLostPercentU3Ek__BackingField_45; }
	inline void set_U3CFramesLostPercentU3Ek__BackingField_45(float value)
	{
		___U3CFramesLostPercentU3Ek__BackingField_45 = value;
	}
};


// Photon.Voice.Unity.WebRtcAudioDsp
struct WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016  : public VoiceComponent_tCE3547F23B76A6B42D3BD5158F110EFD8044E88C
{
public:
	// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::aec
	bool ___aec_8;
	// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::aecHighPass
	bool ___aecHighPass_9;
	// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::agc
	bool ___agc_10;
	// System.Int32 Photon.Voice.Unity.WebRtcAudioDsp::agcCompressionGain
	int32_t ___agcCompressionGain_11;
	// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::vad
	bool ___vad_12;
	// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::highPass
	bool ___highPass_13;
	// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::bypass
	bool ___bypass_14;
	// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::noiseSuppression
	bool ___noiseSuppression_15;
	// System.Int32 Photon.Voice.Unity.WebRtcAudioDsp::reverseStreamDelayMs
	int32_t ___reverseStreamDelayMs_16;
	// System.Int32 Photon.Voice.Unity.WebRtcAudioDsp::reverseChannels
	int32_t ___reverseChannels_17;
	// Photon.Voice.WebRTCAudioProcessor Photon.Voice.Unity.WebRtcAudioDsp::proc
	WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * ___proc_18;
	// Photon.Voice.Unity.AudioOutCapture Photon.Voice.Unity.WebRtcAudioDsp::ac
	AudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA * ___ac_19;
	// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::started
	bool ___started_20;
	// Photon.Voice.LocalVoice Photon.Voice.Unity.WebRtcAudioDsp::localVoice
	LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * ___localVoice_22;
	// System.Int32 Photon.Voice.Unity.WebRtcAudioDsp::outputSampleRate
	int32_t ___outputSampleRate_23;
	// Photon.Voice.Unity.Recorder Photon.Voice.Unity.WebRtcAudioDsp::recorder
	Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * ___recorder_24;
	// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::forceNormalAecInMobile
	bool ___forceNormalAecInMobile_25;
	// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::AECMobileComfortNoise
	bool ___AECMobileComfortNoise_26;

public:
	inline static int32_t get_offset_of_aec_8() { return static_cast<int32_t>(offsetof(WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016, ___aec_8)); }
	inline bool get_aec_8() const { return ___aec_8; }
	inline bool* get_address_of_aec_8() { return &___aec_8; }
	inline void set_aec_8(bool value)
	{
		___aec_8 = value;
	}

	inline static int32_t get_offset_of_aecHighPass_9() { return static_cast<int32_t>(offsetof(WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016, ___aecHighPass_9)); }
	inline bool get_aecHighPass_9() const { return ___aecHighPass_9; }
	inline bool* get_address_of_aecHighPass_9() { return &___aecHighPass_9; }
	inline void set_aecHighPass_9(bool value)
	{
		___aecHighPass_9 = value;
	}

	inline static int32_t get_offset_of_agc_10() { return static_cast<int32_t>(offsetof(WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016, ___agc_10)); }
	inline bool get_agc_10() const { return ___agc_10; }
	inline bool* get_address_of_agc_10() { return &___agc_10; }
	inline void set_agc_10(bool value)
	{
		___agc_10 = value;
	}

	inline static int32_t get_offset_of_agcCompressionGain_11() { return static_cast<int32_t>(offsetof(WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016, ___agcCompressionGain_11)); }
	inline int32_t get_agcCompressionGain_11() const { return ___agcCompressionGain_11; }
	inline int32_t* get_address_of_agcCompressionGain_11() { return &___agcCompressionGain_11; }
	inline void set_agcCompressionGain_11(int32_t value)
	{
		___agcCompressionGain_11 = value;
	}

	inline static int32_t get_offset_of_vad_12() { return static_cast<int32_t>(offsetof(WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016, ___vad_12)); }
	inline bool get_vad_12() const { return ___vad_12; }
	inline bool* get_address_of_vad_12() { return &___vad_12; }
	inline void set_vad_12(bool value)
	{
		___vad_12 = value;
	}

	inline static int32_t get_offset_of_highPass_13() { return static_cast<int32_t>(offsetof(WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016, ___highPass_13)); }
	inline bool get_highPass_13() const { return ___highPass_13; }
	inline bool* get_address_of_highPass_13() { return &___highPass_13; }
	inline void set_highPass_13(bool value)
	{
		___highPass_13 = value;
	}

	inline static int32_t get_offset_of_bypass_14() { return static_cast<int32_t>(offsetof(WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016, ___bypass_14)); }
	inline bool get_bypass_14() const { return ___bypass_14; }
	inline bool* get_address_of_bypass_14() { return &___bypass_14; }
	inline void set_bypass_14(bool value)
	{
		___bypass_14 = value;
	}

	inline static int32_t get_offset_of_noiseSuppression_15() { return static_cast<int32_t>(offsetof(WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016, ___noiseSuppression_15)); }
	inline bool get_noiseSuppression_15() const { return ___noiseSuppression_15; }
	inline bool* get_address_of_noiseSuppression_15() { return &___noiseSuppression_15; }
	inline void set_noiseSuppression_15(bool value)
	{
		___noiseSuppression_15 = value;
	}

	inline static int32_t get_offset_of_reverseStreamDelayMs_16() { return static_cast<int32_t>(offsetof(WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016, ___reverseStreamDelayMs_16)); }
	inline int32_t get_reverseStreamDelayMs_16() const { return ___reverseStreamDelayMs_16; }
	inline int32_t* get_address_of_reverseStreamDelayMs_16() { return &___reverseStreamDelayMs_16; }
	inline void set_reverseStreamDelayMs_16(int32_t value)
	{
		___reverseStreamDelayMs_16 = value;
	}

	inline static int32_t get_offset_of_reverseChannels_17() { return static_cast<int32_t>(offsetof(WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016, ___reverseChannels_17)); }
	inline int32_t get_reverseChannels_17() const { return ___reverseChannels_17; }
	inline int32_t* get_address_of_reverseChannels_17() { return &___reverseChannels_17; }
	inline void set_reverseChannels_17(int32_t value)
	{
		___reverseChannels_17 = value;
	}

	inline static int32_t get_offset_of_proc_18() { return static_cast<int32_t>(offsetof(WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016, ___proc_18)); }
	inline WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * get_proc_18() const { return ___proc_18; }
	inline WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 ** get_address_of_proc_18() { return &___proc_18; }
	inline void set_proc_18(WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * value)
	{
		___proc_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___proc_18), (void*)value);
	}

	inline static int32_t get_offset_of_ac_19() { return static_cast<int32_t>(offsetof(WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016, ___ac_19)); }
	inline AudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA * get_ac_19() const { return ___ac_19; }
	inline AudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA ** get_address_of_ac_19() { return &___ac_19; }
	inline void set_ac_19(AudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA * value)
	{
		___ac_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ac_19), (void*)value);
	}

	inline static int32_t get_offset_of_started_20() { return static_cast<int32_t>(offsetof(WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016, ___started_20)); }
	inline bool get_started_20() const { return ___started_20; }
	inline bool* get_address_of_started_20() { return &___started_20; }
	inline void set_started_20(bool value)
	{
		___started_20 = value;
	}

	inline static int32_t get_offset_of_localVoice_22() { return static_cast<int32_t>(offsetof(WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016, ___localVoice_22)); }
	inline LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * get_localVoice_22() const { return ___localVoice_22; }
	inline LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 ** get_address_of_localVoice_22() { return &___localVoice_22; }
	inline void set_localVoice_22(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * value)
	{
		___localVoice_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localVoice_22), (void*)value);
	}

	inline static int32_t get_offset_of_outputSampleRate_23() { return static_cast<int32_t>(offsetof(WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016, ___outputSampleRate_23)); }
	inline int32_t get_outputSampleRate_23() const { return ___outputSampleRate_23; }
	inline int32_t* get_address_of_outputSampleRate_23() { return &___outputSampleRate_23; }
	inline void set_outputSampleRate_23(int32_t value)
	{
		___outputSampleRate_23 = value;
	}

	inline static int32_t get_offset_of_recorder_24() { return static_cast<int32_t>(offsetof(WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016, ___recorder_24)); }
	inline Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * get_recorder_24() const { return ___recorder_24; }
	inline Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 ** get_address_of_recorder_24() { return &___recorder_24; }
	inline void set_recorder_24(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * value)
	{
		___recorder_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recorder_24), (void*)value);
	}

	inline static int32_t get_offset_of_forceNormalAecInMobile_25() { return static_cast<int32_t>(offsetof(WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016, ___forceNormalAecInMobile_25)); }
	inline bool get_forceNormalAecInMobile_25() const { return ___forceNormalAecInMobile_25; }
	inline bool* get_address_of_forceNormalAecInMobile_25() { return &___forceNormalAecInMobile_25; }
	inline void set_forceNormalAecInMobile_25(bool value)
	{
		___forceNormalAecInMobile_25 = value;
	}

	inline static int32_t get_offset_of_AECMobileComfortNoise_26() { return static_cast<int32_t>(offsetof(WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016, ___AECMobileComfortNoise_26)); }
	inline bool get_AECMobileComfortNoise_26() const { return ___AECMobileComfortNoise_26; }
	inline bool* get_address_of_AECMobileComfortNoise_26() { return &___AECMobileComfortNoise_26; }
	inline void set_AECMobileComfortNoise_26(bool value)
	{
		___AECMobileComfortNoise_26 = value;
	}
};

struct WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.AudioSpeakerMode,System.Int32> Photon.Voice.Unity.WebRtcAudioDsp::channelsMap
	Dictionary_2_tD85316D462101B4F7AD52B74B47D50D1A8CC0DBC * ___channelsMap_21;

public:
	inline static int32_t get_offset_of_channelsMap_21() { return static_cast<int32_t>(offsetof(WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016_StaticFields, ___channelsMap_21)); }
	inline Dictionary_2_tD85316D462101B4F7AD52B74B47D50D1A8CC0DBC * get_channelsMap_21() const { return ___channelsMap_21; }
	inline Dictionary_2_tD85316D462101B4F7AD52B74B47D50D1A8CC0DBC ** get_address_of_channelsMap_21() { return &___channelsMap_21; }
	inline void set_channelsMap_21(Dictionary_2_tD85316D462101B4F7AD52B74B47D50D1A8CC0DBC * value)
	{
		___channelsMap_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelsMap_21), (void*)value);
	}
};


// Photon.Voice.LocalVoiceAudioShort
struct LocalVoiceAudioShort_t56CE89CCE80B89C0BAD1A35C1F5A5DC847C5068B  : public LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8
{
public:

public:
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
// UnityEngine.AudioListener[]
struct AudioListenerU5BU5D_t2A138F4AC29631456727A4F715E9917778D250BF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3 * m_Items[1];

public:
	inline AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Photon.Voice.IProcessor`1<System.Int16>[]
struct IProcessor_1U5BU5D_t2656DF3002F88FC13E29BAAAFCA22E66CD9C6A89  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared (const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mF242FCD2A773E7BFE1E1C8EDA50D427413B2A097_gshared (Action_2_t0E8CFD7D8A4393070552ED14F07C6D3B5AD0ED57 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_mA931B0C8790EF07D8F8AC3F328DE919A753EF46E_gshared (Dictionary_2_tCB10D3F0D8D28A1A6B54347C56E10FE9D9612C94 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void Photon.Voice.LocalVoiceFramed`1<System.Int16>::AddPostProcessor(Photon.Voice.IProcessor`1<!0>[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalVoiceFramed_1_AddPostProcessor_mEE8DCCE80B216507E7DD7991B440642B406854EF_gshared (LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664 * __this, IProcessor_1U5BU5D_t2656DF3002F88FC13E29BAAAFCA22E66CD9C6A89* ___processors0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAD69B022F1D23A2262CA05C4D32C31DA1CF7FE92_gshared (Dictionary_2_tCB10D3F0D8D28A1A6B54347C56E10FE9D9612C94 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m966E300F7A36F73697CCDA7F3534BD90FFB029AF_gshared (Dictionary_2_tCB10D3F0D8D28A1A6B54347C56E10FE9D9612C94 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Single>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E_gshared (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * __this, float ___obj0, const RuntimeMethod* method);
// !0[] Photon.Voice.FrameOut`1<System.Single>::get_Buf()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* FrameOut_1_get_Buf_m11751F803C38A493838A70F3A94EA6AE22EF761A_gshared_inline (FrameOut_1_t2E75A31E49C5BB56BEAA73766430E3B7F2167044 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.VoiceLogger::set_Tag(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VoiceLogger_set_Tag_mCE716ED6FE8B5BEDE59A36F5E8B1CE3FA0DF46DA_inline (VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.VoiceLogger::set_LogLevel(ExitGames.Client.Photon.DebugLevel)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VoiceLogger_set_LogLevel_m01929A0DDE740360CBE51608BE9B9B9552082F59_inline (VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * __this, uint8_t ___value0, const RuntimeMethod* method);
// ExitGames.Client.Photon.DebugLevel Photon.Voice.Unity.VoiceLogger::get_LogLevel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t VoiceLogger_get_LogLevel_m599ECF8F4C6DAE502379BC9CA0E3BF44EE475A46_inline (VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * __this, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.VoiceLogger::get_IsErrorEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceLogger_get_IsErrorEnabled_m9DDE69FBB3AC4741138E105DB300F25CAD60FEE4 (VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * __this, const RuntimeMethod* method);
// System.String Photon.Voice.Unity.VoiceLogger::GetFormatString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VoiceLogger_GetFormatString_m8914CBAFD16AE07DEC08DE3C7302C4D8D8B34986 (VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * __this, String_t* ___fmt0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_mDBF43684A22EAAB187285C9B4174C9555DB11E83 (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogErrorFormat(UnityEngine.Object,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_m1807338EFAE61B3F6CF96FCB905D9B8E2DBAA0F7 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___context0, String_t* ___format1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.VoiceLogger::get_IsWarningEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceLogger_get_IsWarningEnabled_m21C2819F64E3855C798E61E777904E77A0BC2560 (VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarningFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarningFormat_m405E9C0A631F815816F349D7591DD545932FF774 (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarningFormat(UnityEngine.Object,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarningFormat_m2DED8BDFB26AFA883EEDD701573B30B093270CA7 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___context0, String_t* ___format1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.VoiceLogger::get_IsInfoEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceLogger_get_IsInfoEnabled_m52B5D37169FC5BF02A2774BB613DD4A38D900D27 (VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogFormat_m3FD4ED373B54BC92F95360449859CD95D45D73C6 (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogFormat(UnityEngine.Object,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogFormat_mEB77C599BEE1D4455923C2AA6AE5C98BCB36D674 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___context0, String_t* ___format1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.VoiceLogger::get_IsDebugEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceLogger_get_IsDebugEnabled_m5DACB6BD13D42FA535D74FAA30662F28ABDFFA30 (VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.VoiceLogger::LogInfo(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceLogger_LogInfo_m3D6FA0F59D97160A234007D624F8A002ECE56E1D (VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * __this, String_t* ___fmt0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.String Photon.Voice.Unity.VoiceLogger::get_Tag()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VoiceLogger_get_Tag_m00B2E404A49D216DDBB88D0CE3325C959C0EF26F_inline (VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * __this, const RuntimeMethod* method);
// System.String Photon.Voice.Unity.VoiceLogger::GetTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VoiceLogger_GetTimestamp_m0410062FA1E4F7013B176D3623B71739753CCF53 (VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090 (const RuntimeMethod* method);
// System.Void System.Globalization.CultureInfo::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CultureInfo__ctor_m0571D491E0A491EB03A3645B5965511AC0B5DFD7 (CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.String System.DateTime::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_mE44033D2750D165DED2A17A927381872EF9FC986 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Void CSCore.WaveFormat::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFormat__ctor_mD78C37B044A3A3930E47F5BE79A454772C0AB7E8 (WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * __this, int32_t ___sampleRate0, int32_t ___bits1, int32_t ___channels2, const RuntimeMethod* method);
// System.Void CSCore.WaveFormat::.ctor(System.Int32,System.Int32,System.Int32,CSCore.AudioEncoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFormat__ctor_mBD06560A25EC9905D7B8804C30F48FD6F84E50B2 (WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * __this, int32_t ___sampleRate0, int32_t ___bits1, int32_t ___channels2, int16_t ___encoding3, const RuntimeMethod* method);
// System.Void CSCore.WaveFormat::.ctor(System.Int32,System.Int32,System.Int32,CSCore.AudioEncoding,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFormat__ctor_m5742AED9549B88D5DB64F46D84FB01D4A96195E2 (WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * __this, int32_t ___sampleRate0, int32_t ___bits1, int32_t ___channels2, int16_t ___encoding3, int32_t ___extraSize4, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Text.StringBuilder CSCore.WaveFormat::GetInformation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * WaveFormat_GetInformation_mA23D359B6841209DA258A834A082ADA231218660 (WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * __this, const RuntimeMethod* method);
// System.Object System.Object::MemberwiseClone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_MemberwiseClone_m0AEE84C38E9A87C372139B4C342454553F0F6392 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Guid CSCore.WaveFormatExtensible::get_SubFormat()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t  WaveFormatExtensible_get_SubFormat_m3282EB3D7CD99F7A01F36150AD1FEB3548589D07_inline (WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060 * __this, const RuntimeMethod* method);
// System.Guid CSCore.AudioSubTypes::SubTypeFromEncoding(CSCore.AudioEncoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  AudioSubTypes_SubTypeFromEncoding_m0EF7F0CA90E39C8E526537F46A817EDB1751C1F4 (int16_t ___audioEncoding0, const RuntimeMethod* method);
// System.Void CSCore.WaveFormat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFormat__ctor_m4342B46096B1716225DB399CBA320A733F864AA3 (WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * __this, const RuntimeMethod* method);
// System.Guid CSCore.WaveFormatExtensible::SubTypeFromWaveFormat(CSCore.WaveFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  WaveFormatExtensible_SubTypeFromWaveFormat_m5DFEF3FC8B8BDBBCC6AD8D48FF832E2C4652B512 (WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * ___waveFormat0, const RuntimeMethod* method);
// System.Void CSCore.WaveFormatExtensible::.ctor(System.Int32,System.Int32,System.Int32,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFormatExtensible__ctor_m604EA2239408140E0359C350711868FC2A3C31B9 (WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060 * __this, int32_t ___sampleRate0, int32_t ___bits1, int32_t ___channels2, Guid_t  ___subFormat3, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Array System.Enum::GetValues(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray * Enum_GetValues_m8EEC6B32F297FDB2F7375DC8B197E0E1AB8643BD (Type_t * ___enumType0, const RuntimeMethod* method);
// System.Object System.Array::GetValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Array_GetValue_m6E4274D23FFD6089882CD12B2F2EA615206792E1 (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Array::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10 (RuntimeArray * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// CSCore.AudioEncoding CSCore.AudioSubTypes::EncodingFromSubType(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AudioSubTypes_EncodingFromSubType_m73B32DC208BC8D72140497BB2951805B0A432A64 (Guid_t  ___audioSubType0, const RuntimeMethod* method);
// System.Void CSCore.WaveFormatExtensible::set_SubFormat(System.Guid)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WaveFormatExtensible_set_SubFormat_m2106408D1EC65526B6AD07A19472CC2AFD1ECB96_inline (WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060 * __this, Guid_t  ___value0, const RuntimeMethod* method);
// System.String CSCore.WaveFormat::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WaveFormat_ToString_mAC2F9A655621729C0E10710BB2854A61E3E56538 (WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m9305A36F9CF53EDD80D132428999934C68904C77 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_mA3AB7742FB0E04808F580868E82BDEB93187FB75 (Guid_t * __this, const RuntimeMethod* method);
// CSCore.ChannelMask CSCore.WaveFormatExtensible::get_ChannelMask()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WaveFormatExtensible_get_ChannelMask_mEAD03CAED3116F947D91053F279EDA08B2371E7A_inline (WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060 * __this, const RuntimeMethod* method);
// System.IO.FileStream System.IO.File::OpenWrite(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * File_OpenWrite_mA2DA8B05D02F9D0EC99EA6E8FB8E35E7301883B9 (String_t* ___path0, const RuntimeMethod* method);
// System.Void CSCore.Codecs.WAV.WaveWriter::.ctor(System.IO.Stream,CSCore.WaveFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveWriter__ctor_mB0B2E6BBE94B3F87EA06A42C7405E1E0683CEA6F (WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * ___waveFormat1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriter__ctor_mC6F89939E04734FBEEA375D7E0FF9C042E4AB71A (BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___output0, const RuntimeMethod* method);
// System.Void CSCore.Codecs.WAV.WaveWriter::WriteHeader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveWriter_WriteHeader_m0D77D86D414439F0AC482FBA9BFF5F59FDE4B4FD (WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * __this, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B (String_t* ___path0, const RuntimeMethod* method);
// System.Void System.IO.File::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Delete_m82FE53535A3911380F7E4C8AD44D77FAB330FD77 (String_t* ___path0, const RuntimeMethod* method);
// System.Void CSCore.Codecs.WAV.WaveWriter::.ctor(System.String,CSCore.WaveFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveWriter__ctor_m84F597546749A95853CFD14A85D858CA67897200 (WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * __this, String_t* ___fileName0, WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * ___waveFormat1, const RuntimeMethod* method);
// System.Void CSCore.Codecs.WAV.WaveWriter::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveWriter_Write_m6921A0C01B62C67E2CC4FA7B01D987DE8AF505EF (WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method);
// System.Void CSCore.Codecs.WAV.WaveWriter::CheckObjectDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveWriter_CheckObjectDisposed_mC899FA05AA92BD9B0D95D55F87BD728A2F5AF579 (WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * __this, const RuntimeMethod* method);
// System.Single System.Math::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Min_mED21323DC72FBF9A825FD4210D4B9D693CE87FCF (float ___val10, float ___val21, const RuntimeMethod* method);
// System.Single System.Math::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Max_mEB87839DA28310AE4CB81A94D551874CFC2B1247 (float ___val10, float ___val21, const RuntimeMethod* method);
// System.Boolean CSCore.Extensions::IsPCM(CSCore.WaveFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Extensions_IsPCM_m6045C7EA221CA3CB8CC26900DC1274B43B92367D (WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * ___waveFormat0, const RuntimeMethod* method);
// System.Void CSCore.Codecs.WAV.WaveWriter::Write(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveWriter_Write_m7A083A4C06BDA88D4339546C75792CE4E181B5B2 (WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Void CSCore.Codecs.WAV.WaveWriter::Write(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveWriter_Write_m0C3F4999A31F6012D211E434B4C18206343B41E0 (WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * __this, int16_t ___value0, const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* BitConverter_GetBytes_m5C926FE938C878F7E4E95A5DED46C34DB1431D39 (int32_t ___value0, const RuntimeMethod* method);
// System.Void CSCore.Codecs.WAV.WaveWriter::Write(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveWriter_Write_mBA12FC21CDCE1670EF461F7D9B3804860DADF81B (WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m4A65916B1316FBF45ECDF1FF7FAC9E3CA30C112C (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Boolean CSCore.Extensions::IsIeeeFloat(CSCore.WaveFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Extensions_IsIeeeFloat_m6C225166D896FE9206B3EF952427E7A3D085401C (WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * ___waveFormat0, const RuntimeMethod* method);
// System.Void CSCore.Codecs.WAV.WaveWriter::Write(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveWriter_Write_mEB1E44B5E7118E85D542AFFE8755858A5A6C5F63 (WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * __this, float ___value0, const RuntimeMethod* method);
// System.Void CSCore.Codecs.WAV.WaveWriter::WriteSample(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveWriter_WriteSample_mE7202510A15BF7A5DA68BF293A0F8828801A2205 (WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * __this, float ___sample0, const RuntimeMethod* method);
// System.Void CSCore.Codecs.WAV.WaveWriter::WriteRiffHeader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveWriter_WriteRiffHeader_m2A8F407ABDBA6C595818EF5C1C37FCAFC63A6DB9 (WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * __this, const RuntimeMethod* method);
// System.Void CSCore.Codecs.WAV.WaveWriter::WriteFmtChunk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveWriter_WriteFmtChunk_mD03D8A4213DA8BC5B56B78C7FC7EFDE25506C790 (WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * __this, const RuntimeMethod* method);
// System.Void CSCore.Codecs.WAV.WaveWriter::WriteDataChunk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveWriter_WriteDataChunk_m984A0576E71B28E5EB170A6AC912D7D4D20AB8D8 (WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * __this, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// System.Void System.ObjectDisposedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880 (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * __this, String_t* ___objectName0, const RuntimeMethod* method);
// System.Void System.IO.Stream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_m117324084DDAD414761AD29FB17A419840BA6EA0 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.WebRTCAudioProcessor::set_AEC(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTCAudioProcessor_set_AEC_m51F1E3C68B0A48FE5F779726E5532FB5A4F08101 (WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::SetOutputListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_SetOutputListener_mC4F764E3FA8349BC825C69E7E3563C65A0AF84DC (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::get_AEC()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_get_AEC_mB05CF42BFE79EAA373A27A24D1A6691546B9FA16_inline (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::set_AEC(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_set_AEC_m3C9A4C44308635C406DECCEFEEB6838166469384 (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.WebRTCAudioProcessor::set_AECHighPass(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTCAudioProcessor_set_AECHighPass_m3DCA68120D367AF8DB61DF7CA9E9F76BDC670151 (WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.WebRTCAudioProcessor::set_AECStreamDelayMs(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTCAudioProcessor_set_AECStreamDelayMs_m0DEEC01E48882EC49754890EA2E5B4092F61696C (WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.WebRTCAudioProcessor::set_NoiseSuppression(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTCAudioProcessor_set_NoiseSuppression_m598056A57F709D929138D33246350C7F2C063C5C (WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.WebRTCAudioProcessor::set_HighPass(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTCAudioProcessor_set_HighPass_mBF7F380CC3315AD8263B1009CDC540E0D27885A1 (WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.WebRTCAudioProcessor::set_Bypass(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTCAudioProcessor_set_Bypass_m07BC2EC73ABFF4701F80E4F585CF570129258394 (WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.WebRTCAudioProcessor::set_AGC(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTCAudioProcessor_set_AGC_m52E96C7FC547804777BE7EB469EB20B85C141C70 (WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * __this, bool ___value0, const RuntimeMethod* method);
// Photon.Voice.Unity.VoiceLogger Photon.Voice.Unity.VoiceComponent::get_Logger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * VoiceComponent_get_Logger_m717530977455A514654497216C9B16FA3A2CA8F9 (VoiceComponent_tCE3547F23B76A6B42D3BD5158F110EFD8044E88C * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.VoiceLogger::LogError(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceLogger_LogError_m4E551D12B4D33B783B15EA33B7646B8905FC4DFA (VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * __this, String_t* ___fmt0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void Photon.Voice.WebRTCAudioProcessor::set_AGCCompressionGain(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTCAudioProcessor_set_AGCCompressionGain_mCEB0F606CF30A7F4E2E4F7D600DE8392378DA1AC (WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.WebRTCAudioProcessor::set_VAD(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTCAudioProcessor_set_VAD_m39E6515DC42CBA9AB3178799133AA81725C14941 (WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.VoiceComponent::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceComponent_Awake_m532120EDDDE534D65DFB49F9E2024A73F081F8E8 (VoiceComponent_tCE3547F23B76A6B42D3BD5158F110EFD8044E88C * __this, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::SupportedPlatformCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_SupportedPlatformCheck_m81B45ED0E9BEF0E785B7316110E89F3CB3B3AA3D (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Photon.Voice.Unity.Recorder>()
inline Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * Component_GetComponent_TisRecorder_t13D849D3581771415EF2D39F877106A1AC72C6C5_m96A9AD1EED671D74A2A953BBFFA2D59C945D1A50 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.VoiceComponent::get_IgnoreGlobalLogLevel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VoiceComponent_get_IgnoreGlobalLogLevel_mF798F8DE0F44EEB28F26A518299A7E4FA80DF80F_inline (VoiceComponent_tCE3547F23B76A6B42D3BD5158F110EFD8044E88C * __this, const RuntimeMethod* method);
// ExitGames.Client.Photon.DebugLevel Photon.Voice.Unity.VoiceComponent::get_LogLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t VoiceComponent_get_LogLevel_m1BCCBB696F14AB1F61A8A046D1F04EF04BFC58BA (VoiceComponent_tCE3547F23B76A6B42D3BD5158F110EFD8044E88C * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.VoiceComponent::set_LogLevel(ExitGames.Client.Photon.DebugLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceComponent_set_LogLevel_m7762AAD3521A2852C266F724F2A675E93691DEAC (VoiceComponent_tCE3547F23B76A6B42D3BD5158F110EFD8044E88C * __this, uint8_t ___value0, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<UnityEngine.AudioListener>()
inline AudioListenerU5BU5D_t2A138F4AC29631456727A4F715E9917778D250BF* Object_FindObjectsOfType_TisAudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3_mE26B0252D015A176BAFBCF1462E9EC486096B077 (const RuntimeMethod* method)
{
	return ((  AudioListenerU5BU5D_t2A138F4AC29631456727A4F715E9917778D250BF* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared)(method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::SetOrSwitchAudioListener(UnityEngine.AudioListener,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_SetOrSwitchAudioListener_m9E16F90EF10546AB436D4F7ABB1C174E35CAA116 (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3 * ___audioListener0, bool ___extraChecks1, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.Recorder::get_IsRecording()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Recorder_get_IsRecording_mAD773CEB5B194C4A1C22FE2B468EF4528759B2BF_inline (Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.VoiceLogger::LogWarning(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceLogger_LogWarning_mED72C8846BB2AEF1CF9FA9F78E4EFD39DE7BABAB (VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * __this, String_t* ___fmt0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.Recorder::RestartRecording(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_RestartRecording_m3AE814FC469914FCEBC90D18713DE5AAC1FAF75D (Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * __this, bool ___force0, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::SetOutputListener(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_SetOutputListener_m3928F9126CF47FFE4D1942E34763F64B9664693E (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, bool ___on0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Single[],System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mAA299B31188542B6B8B367176DD466B67AE94C2C (Action_2_t8D838F0E0114B7032B25FE8B8E8AE4CE85AB106E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t8D838F0E0114B7032B25FE8B8E8AE4CE85AB106E *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mF242FCD2A773E7BFE1E1C8EDA50D427413B2A097_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Photon.Voice.Unity.AudioOutCapture::add_OnAudioFrame(System.Action`2<System.Single[],System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioOutCapture_add_OnAudioFrame_mE26209A50707DD43410526EDB84147C01A596CFA (AudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA * __this, Action_2_t8D838F0E0114B7032B25FE8B8E8AE4CE85AB106E * ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.AudioOutCapture::remove_OnAudioFrame(System.Action`2<System.Single[],System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioOutCapture_remove_OnAudioFrame_m98DDEBB14D6B9E3CA09320073621C12C72946AC2 (AudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA * __this, Action_2_t8D838F0E0114B7032B25FE8B8E8AE4CE85AB106E * ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_Restart_mA476BFEF6F215580288766C858A8387AB636C376 (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.WebRTCAudioProcessor::OnAudioOutFrameFloat(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTCAudioProcessor_OnAudioOutFrameFloat_mB2168A5FE9231C28E94816FDC5A239F0C7BAD23D (WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___data0, const RuntimeMethod* method);
// Photon.Voice.Unity.Recorder/InputSourceType Photon.Voice.Unity.Recorder::get_SourceType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Recorder_get_SourceType_m53055CFC105940ED013D9008DB0F3E68A8ED858A_inline (Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * __this, const RuntimeMethod* method);
// Photon.Voice.LocalVoice Photon.Voice.Unity.PhotonVoiceCreatedParams::get_Voice()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * PhotonVoiceCreatedParams_get_Voice_mDCDA2C8A276052F03DAADA4A0EBF17A132865EF0_inline (PhotonVoiceCreatedParams_t2016E70662CD6C4DC00630565940783AC2469E7D * __this, const RuntimeMethod* method);
// Photon.Voice.VoiceInfo Photon.Voice.LocalVoice::get_Info()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  LocalVoice_get_Info_m1996B4F7A27EF2E408C0C0DE7BAED51524FA477B_inline (LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * __this, const RuntimeMethod* method);
// System.Int32 Photon.Voice.VoiceInfo::get_Channels()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_Channels_m0631BE3D0B3BB065D07F43C8F093935B5CBBA419_inline (VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 * __this, const RuntimeMethod* method);
// UnityEngine.AudioSpeakerMode UnityEngine.AudioSettings::get_speakerMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSettings_get_speakerMode_m370CC6ACE985EBC0DF2023D6F05C4D9FFF7747AD (const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<UnityEngine.AudioSpeakerMode,System.Int32>::get_Item(!0)
inline int32_t Dictionary_2_get_Item_m6957DC2E75D0B9CE32C3DC32C6E17827900A60A8 (Dictionary_2_tD85316D462101B4F7AD52B74B47D50D1A8CC0DBC * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tD85316D462101B4F7AD52B74B47D50D1A8CC0DBC *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mA931B0C8790EF07D8F8AC3F328DE919A753EF46E_gshared)(__this, ___key0, method);
}
// System.Int32 UnityEngine.AudioSettings::get_outputSampleRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSettings_get_outputSampleRate_mF694C528E77284914F1F8F7CA804BD9ECD0D33BE (const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_Init_m3FE00D6A67E56C6A007970C72EA2E63AB9A713C7 (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.LocalVoiceFramed`1<System.Int16>::AddPostProcessor(Photon.Voice.IProcessor`1<!0>[])
inline void LocalVoiceFramed_1_AddPostProcessor_mEE8DCCE80B216507E7DD7991B440642B406854EF (LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664 * __this, IProcessor_1U5BU5D_t2656DF3002F88FC13E29BAAAFCA22E66CD9C6A89* ___processors0, const RuntimeMethod* method)
{
	((  void (*) (LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664 *, IProcessor_1U5BU5D_t2656DF3002F88FC13E29BAAAFCA22E66CD9C6A89*, const RuntimeMethod*))LocalVoiceFramed_1_AddPostProcessor_mEE8DCCE80B216507E7DD7991B440642B406854EF_gshared)(__this, ___processors0, method);
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_Reset_m57939F0EAFE9B290436EB95C8EC890F36A974459 (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.WebRTCAudioProcessor::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTCAudioProcessor_Dispose_mA3E9451B13684077CD4A61BB76A6863CC9B9DBCA (WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * __this, const RuntimeMethod* method);
// System.Int32 Photon.Voice.VoiceInfo::get_FrameSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_FrameSize_m93A2DEC1EA3ED80425BBB6D367972B01BA003E2F (VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 * __this, const RuntimeMethod* method);
// System.Int32 Photon.Voice.VoiceInfo::get_SamplingRate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_SamplingRate_mC690C2685B6000B833F54CDA779A9933E3A2D293_inline (VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.WebRTCAudioProcessor::.ctor(Photon.Voice.ILogger,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTCAudioProcessor__ctor_mC1E2BE584E411536233FB09F5B519BD5E4ADD4CB (WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * __this, RuntimeObject* ___logger0, int32_t ___frameSize1, int32_t ___samplingRate2, int32_t ___channels3, int32_t ___reverseSamplingRate4, int32_t ___reverseChannels5, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::get_ForceNormalAecInMobile()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_get_ForceNormalAecInMobile_m6C27252EE0C71F90C126102D5C75FE409B3714E0_inline (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.WebRTCAudioProcessor::set_AECMobile(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTCAudioProcessor_set_AECMobile_m2BC04C193DA46E8A5E65BF6FBDA0EF4C664A7788 (WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 Photon.Voice.Unity.WebRtcAudioDsp::get_ReverseStreamDelayMs()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WebRtcAudioDsp_get_ReverseStreamDelayMs_mFDCE64215636A31CC5F2BF1F22B2628187F2DBF2_inline (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::get_AecHighPass()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_get_AecHighPass_m585B53C43189830D0D53CC6D83A0D83921A31899_inline (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::get_HighPass()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_get_HighPass_m98DBA4096D359097A33A39CEC6EC6B3B823BAC75_inline (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::get_NoiseSuppression()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_get_NoiseSuppression_mC268C33BC569E226F63FBBB5F4D8B3F9D577E4D0_inline (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::get_AGC()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_get_AGC_m60269155FC6F390E1E17F097B6D3526C5BA91EEF_inline (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, const RuntimeMethod* method);
// System.Int32 Photon.Voice.Unity.WebRtcAudioDsp::get_AgcCompressionGain()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WebRtcAudioDsp_get_AgcCompressionGain_mCA185CB9FBCDC1B4B9DE6F2A49FFFF0C6D0D382D_inline (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::get_VAD()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_get_VAD_m625955D0357E4CEF72FA553B0CC04F2C45E3D408_inline (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::get_Bypass()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_get_Bypass_m4D858D3E455AB4FE00C4D2E63D41C51EC1B62FE9_inline (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Photon.Voice.Unity.AudioOutCapture>()
inline AudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA * Component_GetComponent_TisAudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA_m67B1E71DAC0FC1558C3BCFEF0E46853CC95EC31C (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  AudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::AddComponent<Photon.Voice.Unity.AudioOutCapture>()
inline AudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA * GameObject_AddComponent_TisAudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA_m26DD042294EBDC455889417283686971AC94160E (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  AudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::SetOrSwitchAudioOutCapture(Photon.Voice.Unity.AudioOutCapture,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_SetOrSwitchAudioOutCapture_m5D40350304AD6E95AAE144DB5BE908B6ED867DAB (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, AudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA * ___audioOutCapture0, bool ___extraChecks1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioListener>()
inline AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3 * Component_GetComponent_TisAudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3_m0DA4C699234A3DCDAC948DDC6763AE79C2FB5E83 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void Photon.Voice.Unity.VoiceComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceComponent__ctor_m3DF5DEFE3A274DF21944E2F9EC9DE462B105E8A4 (VoiceComponent_tCE3547F23B76A6B42D3BD5158F110EFD8044E88C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.AudioSpeakerMode,System.Int32>::.ctor()
inline void Dictionary_2__ctor_mBF0DB9DC3119010625F8507F04981F6306C3AC76 (Dictionary_2_tD85316D462101B4F7AD52B74B47D50D1A8CC0DBC * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD85316D462101B4F7AD52B74B47D50D1A8CC0DBC *, const RuntimeMethod*))Dictionary_2__ctor_mAD69B022F1D23A2262CA05C4D32C31DA1CF7FE92_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.AudioSpeakerMode,System.Int32>::Add(!0,!1)
inline void Dictionary_2_Add_mD3EBFDE882930A03A83E80E8D443433165590D5C (Dictionary_2_tD85316D462101B4F7AD52B74B47D50D1A8CC0DBC * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD85316D462101B4F7AD52B74B47D50D1A8CC0DBC *, int32_t, int32_t, const RuntimeMethod*))Dictionary_2_Add_m966E300F7A36F73697CCDA7F3534BD90FFB029AF_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Photon.Voice.Unity.Recorder::GetThresholdFromDetector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_GetThresholdFromDetector_m241DF1E4F51A98081E42E1D02F091F2D2D2C2F64 (Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Single>::Invoke(!0)
inline void Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * __this, float ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *, float, const RuntimeMethod*))Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E_gshared)(__this, ___obj0, method);
}
// System.Void Photon.Voice.Unity.PhotonVoiceCreatedParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceCreatedParams__ctor_m3FE6361DA483D21121E7B0A0A91E08282FA96114 (PhotonVoiceCreatedParams_t2016E70662CD6C4DC00630565940783AC2469E7D * __this, const RuntimeMethod* method);
// !0[] Photon.Voice.FrameOut`1<System.Single>::get_Buf()
inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* FrameOut_1_get_Buf_m11751F803C38A493838A70F3A94EA6AE22EF761A_inline (FrameOut_1_t2E75A31E49C5BB56BEAA73766430E3B7F2167044 * __this, const RuntimeMethod* method)
{
	return ((  SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* (*) (FrameOut_1_t2E75A31E49C5BB56BEAA73766430E3B7F2167044 *, const RuntimeMethod*))FrameOut_1_get_Buf_m11751F803C38A493838A70F3A94EA6AE22EF761A_gshared_inline)(__this, method);
}
// System.Void CSCore.Codecs.WAV.WaveWriter::WriteSamples(System.Single[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveWriter_WriteSamples_m467B2747EFDB5F7FDDEA8DED1520DE0CA1AC01BF (WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___samples0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method);
// System.Void CSCore.Codecs.WAV.WaveWriter::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveWriter_Dispose_m49F4BFC506F5694D660BB4CF083490143E1F73B3 (WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * __this, const RuntimeMethod* method);
// System.Boolean CSCore.Codecs.WAV.WaveWriter::get_IsDisposed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WaveWriter_get_IsDisposed_mC1B18F40EC42CE956B37765010471C5E4C147B05_inline (WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * __this, const RuntimeMethod* method);
// System.Boolean CSCore.Codecs.WAV.WaveWriter::get_IsDisposing()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WaveWriter_get_IsDisposing_mC116F5601CC3B05AE713FCDEA75A10F7760F9385_inline (WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void Photon.Voice.Unity.UnityAudioOut::.ctor(UnityEngine.AudioSource,Photon.Voice.AudioOutDelayControl/PlayDelayConfig,Photon.Voice.ILogger,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAudioOut__ctor_mAFBA116E3B426A120E5796AB7BA97C2BFF008CE6 (UnityAudioOut_t137B3BB0274927C067BEC30C1F74F382240BD3BA * __this, AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource0, PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7 * ___playDelayConfig1, RuntimeObject* ___logger2, String_t* ___logPrefix3, bool ___debugInfo4, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.UtilityScripts.TestTone/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4AA6E1EADDDEA041D83C4B87227D374BC2AB59AF (U3CU3Ec_t6D85E6278D22C528CBA18A7B1588B7D4F5B28943 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.UtilityScripts.ToneAudioReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToneAudioReader__ctor_mFD8D02E605A82A229D667DA7D72C7F8E238291CF (ToneAudioReader_tC1C56D849C3C642C3E485DDEB70F7CA17120045A * __this, const RuntimeMethod* method);
// Photon.Voice.Unity.VoiceLogger Photon.Voice.Unity.VoiceConnection::get_Logger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * VoiceConnection_get_Logger_m7C33561D5CE7EDC8ABAE8BD7D0C75A998387E222 (VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704 * __this, const RuntimeMethod* method);
// System.Object Photon.Voice.VoiceInfo::get_UserData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * VoiceInfo_get_UserData_mFF0F8364FAE94F39613F8C646BC233967EDF45AA_inline (VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<Photon.Voice.Unity.RemoteVoiceLink>::Remove(!0)
inline bool List_1_Remove_m48952F6172D8ED3266FC3FF1BBD28D3CFCBAF7BC (List_1_tB0C131F9DB7AC689F5A2BA8945F3FDA7555F7CEE * __this, RemoteVoiceLink_tDDD70AB15B70170AF282B017A3BCE94DB80E9CBC * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tB0C131F9DB7AC689F5A2BA8945F3FDA7555F7CEE *, RemoteVoiceLink_tDDD70AB15B70170AF282B017A3BCE94DB80E9CBC *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<Photon.Voice.Unity.Speaker>::Remove(!0)
inline bool List_1_Remove_mD891476ADE6ACE5DE3F0EE490B901BA200728D98 (List_1_t89AF99FADC7E48891C45020A7D9A15E0EB1BB89F * __this, Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t89AF99FADC7E48891C45020A7D9A15E0EB1BB89F *, Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Voice.Unity.VoiceLogger::.ctor(UnityEngine.Object,System.String,ExitGames.Client.Photon.DebugLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceLogger__ctor_m5582679F07F95D9FB237BBE62932E2D06E488038 (VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * __this, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___context0, String_t* ___tag1, uint8_t ___level2, const RuntimeMethod* method)
{
	{
		// public VoiceLogger(Object context, string tag, DebugLevel level = DebugLevel.ERROR)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.context = context;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_0 = ___context0;
		__this->set_context_2(L_0);
		// this.Tag = tag;
		String_t* L_1 = ___tag1;
		VoiceLogger_set_Tag_mCE716ED6FE8B5BEDE59A36F5E8B1CE3FA0DF46DA_inline(__this, L_1, /*hidden argument*/NULL);
		// this.LogLevel = level;
		uint8_t L_2 = ___level2;
		VoiceLogger_set_LogLevel_m01929A0DDE740360CBE51608BE9B9B9552082F59_inline(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.VoiceLogger::.ctor(System.String,ExitGames.Client.Photon.DebugLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceLogger__ctor_mF5D57155930A2BD0726DD86F08E1ED4751026167 (VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * __this, String_t* ___tag0, uint8_t ___level1, const RuntimeMethod* method)
{
	{
		// public VoiceLogger(string tag, DebugLevel level = DebugLevel.ERROR)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.Tag = tag;
		String_t* L_0 = ___tag0;
		VoiceLogger_set_Tag_mCE716ED6FE8B5BEDE59A36F5E8B1CE3FA0DF46DA_inline(__this, L_0, /*hidden argument*/NULL);
		// this.LogLevel = level;
		uint8_t L_1 = ___level1;
		VoiceLogger_set_LogLevel_m01929A0DDE740360CBE51608BE9B9B9552082F59_inline(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String Photon.Voice.Unity.VoiceLogger::get_Tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VoiceLogger_get_Tag_m00B2E404A49D216DDBB88D0CE3325C959C0EF26F (VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * __this, const RuntimeMethod* method)
{
	{
		// public string Tag { get; set; }
		String_t* L_0 = __this->get_U3CTagU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Photon.Voice.Unity.VoiceLogger::set_Tag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceLogger_set_Tag_mCE716ED6FE8B5BEDE59A36F5E8B1CE3FA0DF46DA (VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Tag { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CTagU3Ek__BackingField_0(L_0);
		return;
	}
}
// ExitGames.Client.Photon.DebugLevel Photon.Voice.Unity.VoiceLogger::get_LogLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t VoiceLogger_get_LogLevel_m599ECF8F4C6DAE502379BC9CA0E3BF44EE475A46 (VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * __this, const RuntimeMethod* method)
{
	{
		// public DebugLevel LogLevel { get; set; }
		uint8_t L_0 = __this->get_U3CLogLevelU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Photon.Voice.Unity.VoiceLogger::set_LogLevel(ExitGames.Client.Photon.DebugLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceLogger_set_LogLevel_m01929A0DDE740360CBE51608BE9B9B9552082F59 (VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		// public DebugLevel LogLevel { get; set; }
		uint8_t L_0 = ___value0;
		__this->set_U3CLogLevelU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Boolean Photon.Voice.Unity.VoiceLogger::get_IsErrorEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceLogger_get_IsErrorEnabled_m9DDE69FBB3AC4741138E105DB300F25CAD60FEE4 (VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * __this, const RuntimeMethod* method)
{
	{
		// get { return this.LogLevel >= DebugLevel.ERROR; }
		uint8_t L_0;
		L_0 = VoiceLogger_get_LogLevel_m599ECF8F4C6DAE502379BC9CA0E3BF44EE475A46_inline(__this, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Photon.Voice.Unity.VoiceLogger::get_IsWarningEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceLogger_get_IsWarningEnabled_m21C2819F64E3855C798E61E777904E77A0BC2560 (VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * __this, const RuntimeMethod* method)
{
	{
		// get { return this.LogLevel >= DebugLevel.WARNING; }
		uint8_t L_0;
		L_0 = VoiceLogger_get_LogLevel_m599ECF8F4C6DAE502379BC9CA0E3BF44EE475A46_inline(__this, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Photon.Voice.Unity.VoiceLogger::get_IsInfoEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceLogger_get_IsInfoEnabled_m52B5D37169FC5BF02A2774BB613DD4A38D900D27 (VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * __this, const RuntimeMethod* method)
{
	{
		// get { return this.LogLevel >= DebugLevel.INFO; }
		uint8_t L_0;
		L_0 = VoiceLogger_get_LogLevel_m599ECF8F4C6DAE502379BC9CA0E3BF44EE475A46_inline(__this, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Photon.Voice.Unity.VoiceLogger::get_IsDebugEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceLogger_get_IsDebugEnabled_m5DACB6BD13D42FA535D74FAA30662F28ABDFFA30 (VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * __this, const RuntimeMethod* method)
{
	{
		// public bool IsDebugEnabled { get { return this.LogLevel == DebugLevel.ALL; } }
		uint8_t L_0;
		L_0 = VoiceLogger_get_LogLevel_m599ECF8F4C6DAE502379BC9CA0E3BF44EE475A46_inline(__this, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)5))? 1 : 0);
	}
}
// System.Void Photon.Voice.Unity.VoiceLogger::LogError(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceLogger_LogError_m4E551D12B4D33B783B15EA33B7646B8905FC4DFA (VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * __this, String_t* ___fmt0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!this.IsErrorEnabled) return;
		bool L_0;
		L_0 = VoiceLogger_get_IsErrorEnabled_m9DDE69FBB3AC4741138E105DB300F25CAD60FEE4(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!this.IsErrorEnabled) return;
		return;
	}

IL_0009:
	{
		// fmt = this.GetFormatString(fmt);
		String_t* L_1 = ___fmt0;
		String_t* L_2;
		L_2 = VoiceLogger_GetFormatString_m8914CBAFD16AE07DEC08DE3C7302C4D8D8B34986(__this, L_1, /*hidden argument*/NULL);
		___fmt0 = L_2;
		// if (this.context == null)
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_3 = __this->get_context_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		// Debug.LogErrorFormat(fmt, args);
		String_t* L_5 = ___fmt0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = ___args1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mDBF43684A22EAAB187285C9B4174C9555DB11E83(L_5, L_6, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0028:
	{
		// Debug.LogErrorFormat(this.context, fmt, args);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_7 = __this->get_context_2();
		String_t* L_8 = ___fmt0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = ___args1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m1807338EFAE61B3F6CF96FCB905D9B8E2DBAA0F7(L_7, L_8, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.VoiceLogger::LogWarning(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceLogger_LogWarning_mED72C8846BB2AEF1CF9FA9F78E4EFD39DE7BABAB (VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * __this, String_t* ___fmt0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!this.IsWarningEnabled) return;
		bool L_0;
		L_0 = VoiceLogger_get_IsWarningEnabled_m21C2819F64E3855C798E61E777904E77A0BC2560(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!this.IsWarningEnabled) return;
		return;
	}

IL_0009:
	{
		// fmt = this.GetFormatString(fmt);
		String_t* L_1 = ___fmt0;
		String_t* L_2;
		L_2 = VoiceLogger_GetFormatString_m8914CBAFD16AE07DEC08DE3C7302C4D8D8B34986(__this, L_1, /*hidden argument*/NULL);
		___fmt0 = L_2;
		// if (this.context == null)
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_3 = __this->get_context_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		// Debug.LogWarningFormat(fmt, args);
		String_t* L_5 = ___fmt0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = ___args1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_m405E9C0A631F815816F349D7591DD545932FF774(L_5, L_6, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0028:
	{
		// Debug.LogWarningFormat(this.context, fmt, args);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_7 = __this->get_context_2();
		String_t* L_8 = ___fmt0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = ___args1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_m2DED8BDFB26AFA883EEDD701573B30B093270CA7(L_7, L_8, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.VoiceLogger::LogInfo(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceLogger_LogInfo_m3D6FA0F59D97160A234007D624F8A002ECE56E1D (VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * __this, String_t* ___fmt0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!this.IsInfoEnabled) return;
		bool L_0;
		L_0 = VoiceLogger_get_IsInfoEnabled_m52B5D37169FC5BF02A2774BB613DD4A38D900D27(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!this.IsInfoEnabled) return;
		return;
	}

IL_0009:
	{
		// fmt = this.GetFormatString(fmt);
		String_t* L_1 = ___fmt0;
		String_t* L_2;
		L_2 = VoiceLogger_GetFormatString_m8914CBAFD16AE07DEC08DE3C7302C4D8D8B34986(__this, L_1, /*hidden argument*/NULL);
		___fmt0 = L_2;
		// if (this.context == null)
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_3 = __this->get_context_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		// Debug.LogFormat(fmt, args);
		String_t* L_5 = ___fmt0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = ___args1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogFormat_m3FD4ED373B54BC92F95360449859CD95D45D73C6(L_5, L_6, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0028:
	{
		// Debug.LogFormat(this.context, fmt, args);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_7 = __this->get_context_2();
		String_t* L_8 = ___fmt0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = ___args1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogFormat_mEB77C599BEE1D4455923C2AA6AE5C98BCB36D674(L_7, L_8, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.VoiceLogger::LogDebug(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceLogger_LogDebug_mF4E3DF7E50217EEB1B413891D0BBCFB6F72949E0 (VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * __this, String_t* ___fmt0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	{
		// if (!this.IsDebugEnabled) return;
		bool L_0;
		L_0 = VoiceLogger_get_IsDebugEnabled_m5DACB6BD13D42FA535D74FAA30662F28ABDFFA30(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!this.IsDebugEnabled) return;
		return;
	}

IL_0009:
	{
		// this.LogInfo(fmt, args);
		String_t* L_1 = ___fmt0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args1;
		VoiceLogger_LogInfo_m3D6FA0F59D97160A234007D624F8A002ECE56E1D(__this, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String Photon.Voice.Unity.VoiceLogger::GetFormatString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VoiceLogger_GetFormatString_m8914CBAFD16AE07DEC08DE3C7302C4D8D8B34986 (VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * __this, String_t* ___fmt0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55E478ED62C9FE057879ABC825DD080D5F20F6DB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("[{0}] {1}:{2}", this.Tag, this.GetTimestamp(), fmt);
		String_t* L_0;
		L_0 = VoiceLogger_get_Tag_m00B2E404A49D216DDBB88D0CE3325C959C0EF26F_inline(__this, /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = VoiceLogger_GetTimestamp_m0410062FA1E4F7013B176D3623B71739753CCF53(__this, /*hidden argument*/NULL);
		String_t* L_2 = ___fmt0;
		String_t* L_3;
		L_3 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteral55E478ED62C9FE057879ABC825DD080D5F20F6DB, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.String Photon.Voice.Unity.VoiceLogger::GetTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VoiceLogger_GetTimestamp_m0410062FA1E4F7013B176D3623B71739753CCF53 (VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A971881AF6B7B211E34707E857DEC5F36487877);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2FF47D568FBB39D76E508979195FAEA77E2B694);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return System.DateTime.UtcNow.ToString("yyyy'-'MM'-'dd'T'HH':'mm':'ss", new System.Globalization.CultureInfo("en-US"));
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0;
		L_0 = DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090(/*hidden argument*/NULL);
		V_0 = L_0;
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_1 = (CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 *)il2cpp_codegen_object_new(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo__ctor_m0571D491E0A491EB03A3645B5965511AC0B5DFD7(L_1, _stringLiteral3A971881AF6B7B211E34707E857DEC5F36487877, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = DateTime_ToString_mE44033D2750D165DED2A17A927381872EF9FC986((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_0), _stringLiteralF2FF47D568FBB39D76E508979195FAEA77E2B694, L_1, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: CSCore.WaveFormat
IL2CPP_EXTERN_C void WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE_marshal_pinvoke(const WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE& unmarshaled, WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE_marshaled_pinvoke& marshaled)
{
	marshaled.____encoding_0 = unmarshaled.get__encoding_0();
	marshaled.____channels_1 = unmarshaled.get__channels_1();
	marshaled.____sampleRate_2 = unmarshaled.get__sampleRate_2();
	marshaled.____bytesPerSecond_3 = unmarshaled.get__bytesPerSecond_3();
	marshaled.____blockAlign_4 = unmarshaled.get__blockAlign_4();
	marshaled.____bitsPerSample_5 = unmarshaled.get__bitsPerSample_5();
	marshaled.____extraSize_6 = unmarshaled.get__extraSize_6();
}
IL2CPP_EXTERN_C void WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE_marshal_pinvoke_back(const WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE_marshaled_pinvoke& marshaled, WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE& unmarshaled)
{
	int16_t unmarshaled__encoding_temp_0 = 0;
	unmarshaled__encoding_temp_0 = marshaled.____encoding_0;
	unmarshaled.set__encoding_0(unmarshaled__encoding_temp_0);
	int16_t unmarshaled__channels_temp_1 = 0;
	unmarshaled__channels_temp_1 = marshaled.____channels_1;
	unmarshaled.set__channels_1(unmarshaled__channels_temp_1);
	int32_t unmarshaled__sampleRate_temp_2 = 0;
	unmarshaled__sampleRate_temp_2 = marshaled.____sampleRate_2;
	unmarshaled.set__sampleRate_2(unmarshaled__sampleRate_temp_2);
	int32_t unmarshaled__bytesPerSecond_temp_3 = 0;
	unmarshaled__bytesPerSecond_temp_3 = marshaled.____bytesPerSecond_3;
	unmarshaled.set__bytesPerSecond_3(unmarshaled__bytesPerSecond_temp_3);
	int16_t unmarshaled__blockAlign_temp_4 = 0;
	unmarshaled__blockAlign_temp_4 = marshaled.____blockAlign_4;
	unmarshaled.set__blockAlign_4(unmarshaled__blockAlign_temp_4);
	int16_t unmarshaled__bitsPerSample_temp_5 = 0;
	unmarshaled__bitsPerSample_temp_5 = marshaled.____bitsPerSample_5;
	unmarshaled.set__bitsPerSample_5(unmarshaled__bitsPerSample_temp_5);
	int16_t unmarshaled__extraSize_temp_6 = 0;
	unmarshaled__extraSize_temp_6 = marshaled.____extraSize_6;
	unmarshaled.set__extraSize_6(unmarshaled__extraSize_temp_6);
}
// Conversion method for clean up from marshalling of: CSCore.WaveFormat
IL2CPP_EXTERN_C void WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE_marshal_pinvoke_cleanup(WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: CSCore.WaveFormat
IL2CPP_EXTERN_C void WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE_marshal_com(const WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE& unmarshaled, WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE_marshaled_com& marshaled)
{
	marshaled.____encoding_0 = unmarshaled.get__encoding_0();
	marshaled.____channels_1 = unmarshaled.get__channels_1();
	marshaled.____sampleRate_2 = unmarshaled.get__sampleRate_2();
	marshaled.____bytesPerSecond_3 = unmarshaled.get__bytesPerSecond_3();
	marshaled.____blockAlign_4 = unmarshaled.get__blockAlign_4();
	marshaled.____bitsPerSample_5 = unmarshaled.get__bitsPerSample_5();
	marshaled.____extraSize_6 = unmarshaled.get__extraSize_6();
}
IL2CPP_EXTERN_C void WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE_marshal_com_back(const WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE_marshaled_com& marshaled, WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE& unmarshaled)
{
	int16_t unmarshaled__encoding_temp_0 = 0;
	unmarshaled__encoding_temp_0 = marshaled.____encoding_0;
	unmarshaled.set__encoding_0(unmarshaled__encoding_temp_0);
	int16_t unmarshaled__channels_temp_1 = 0;
	unmarshaled__channels_temp_1 = marshaled.____channels_1;
	unmarshaled.set__channels_1(unmarshaled__channels_temp_1);
	int32_t unmarshaled__sampleRate_temp_2 = 0;
	unmarshaled__sampleRate_temp_2 = marshaled.____sampleRate_2;
	unmarshaled.set__sampleRate_2(unmarshaled__sampleRate_temp_2);
	int32_t unmarshaled__bytesPerSecond_temp_3 = 0;
	unmarshaled__bytesPerSecond_temp_3 = marshaled.____bytesPerSecond_3;
	unmarshaled.set__bytesPerSecond_3(unmarshaled__bytesPerSecond_temp_3);
	int16_t unmarshaled__blockAlign_temp_4 = 0;
	unmarshaled__blockAlign_temp_4 = marshaled.____blockAlign_4;
	unmarshaled.set__blockAlign_4(unmarshaled__blockAlign_temp_4);
	int16_t unmarshaled__bitsPerSample_temp_5 = 0;
	unmarshaled__bitsPerSample_temp_5 = marshaled.____bitsPerSample_5;
	unmarshaled.set__bitsPerSample_5(unmarshaled__bitsPerSample_temp_5);
	int16_t unmarshaled__extraSize_temp_6 = 0;
	unmarshaled__extraSize_temp_6 = marshaled.____extraSize_6;
	unmarshaled.set__extraSize_6(unmarshaled__extraSize_temp_6);
}
// Conversion method for clean up from marshalling of: CSCore.WaveFormat
IL2CPP_EXTERN_C void WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE_marshal_com_cleanup(WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE_marshaled_com& marshaled)
{
}
// System.Int32 CSCore.WaveFormat::get_Channels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaveFormat_get_Channels_m77EF065D33BB1DC577B6E8AB50DA2BBA99823FB5 (WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * __this, const RuntimeMethod* method)
{
	{
		// get { return _channels; }
		int16_t L_0 = __this->get__channels_1();
		return L_0;
	}
}
// System.Void CSCore.WaveFormat::set_Channels(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFormat_set_Channels_m8A2D3FD5934B97DC9E14862984F3C1482FD3E31E (WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// _channels = (short) value;
		int32_t L_0 = ___value0;
		__this->set__channels_1(((int16_t)((int16_t)L_0)));
		// UpdateProperties();
		VirtActionInvoker0::Invoke(26 /* System.Void CSCore.WaveFormat::UpdateProperties() */, __this);
		// }
		return;
	}
}
// System.Int32 CSCore.WaveFormat::get_SampleRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaveFormat_get_SampleRate_m03E88933B292FAB27567BD901462BCA12057562C (WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * __this, const RuntimeMethod* method)
{
	{
		// get { return _sampleRate; }
		int32_t L_0 = __this->get__sampleRate_2();
		return L_0;
	}
}
// System.Void CSCore.WaveFormat::set_SampleRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFormat_set_SampleRate_m0F8E0793E2C9C3CDB1550744B3C155118E5A41C1 (WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// _sampleRate = value;
		int32_t L_0 = ___value0;
		__this->set__sampleRate_2(L_0);
		// UpdateProperties();
		VirtActionInvoker0::Invoke(26 /* System.Void CSCore.WaveFormat::UpdateProperties() */, __this);
		// }
		return;
	}
}
// System.Int32 CSCore.WaveFormat::get_BytesPerSecond()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaveFormat_get_BytesPerSecond_m75E7D5ADB4D1DFF9AA632E770CC3CCB354B86EDD (WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * __this, const RuntimeMethod* method)
{
	{
		// get { return _bytesPerSecond; }
		int32_t L_0 = __this->get__bytesPerSecond_3();
		return L_0;
	}
}
// System.Void CSCore.WaveFormat::set_BytesPerSecond(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFormat_set_BytesPerSecond_m05EB48D347CEDCDC59F5BB9A291458080CF45AC1 (WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// protected internal set { _bytesPerSecond = value; }
		int32_t L_0 = ___value0;
		__this->set__bytesPerSecond_3(L_0);
		// protected internal set { _bytesPerSecond = value; }
		return;
	}
}
// System.Int32 CSCore.WaveFormat::get_BlockAlign()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaveFormat_get_BlockAlign_mFE39697990FCEEBF12B51C8B9A0C253D22091001 (WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * __this, const RuntimeMethod* method)
{
	{
		// get { return _blockAlign; }
		int16_t L_0 = __this->get__blockAlign_4();
		return L_0;
	}
}
// System.Void CSCore.WaveFormat::set_BlockAlign(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFormat_set_BlockAlign_mF7E6134C9A7F9440078DE3907D8DA544897FBF82 (WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// protected internal set { _blockAlign = (short) value; }
		int32_t L_0 = ___value0;
		__this->set__blockAlign_4(((int16_t)((int16_t)L_0)));
		// protected internal set { _blockAlign = (short) value; }
		return;
	}
}
// System.Int32 CSCore.WaveFormat::get_BitsPerSample()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaveFormat_get_BitsPerSample_m5FAA66E265D351B6B96725553800EDBBF780FBBC (WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * __this, const RuntimeMethod* method)
{
	{
		// get { return _bitsPerSample; }
		int16_t L_0 = __this->get__bitsPerSample_5();
		return L_0;
	}
}
// System.Void CSCore.WaveFormat::set_BitsPerSample(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFormat_set_BitsPerSample_mDF6A0D512BA067D385B442256A872FD63881040A (WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// _bitsPerSample = (short) value;
		int32_t L_0 = ___value0;
		__this->set__bitsPerSample_5(((int16_t)((int16_t)L_0)));
		// UpdateProperties();
		VirtActionInvoker0::Invoke(26 /* System.Void CSCore.WaveFormat::UpdateProperties() */, __this);
		// }
		return;
	}
}
// System.Int32 CSCore.WaveFormat::get_ExtraSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaveFormat_get_ExtraSize_m1B094786E112A2FA881674E5607B63672CFD96B1 (WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * __this, const RuntimeMethod* method)
{
	{
		// get { return _extraSize; }
		int16_t L_0 = __this->get__extraSize_6();
		return L_0;
	}
}
// System.Void CSCore.WaveFormat::set_ExtraSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFormat_set_ExtraSize_mD2EE908AC743A51EC774CEE7E1ADDE61F13B4428 (WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// protected internal set { _extraSize = (short) value; }
		int32_t L_0 = ___value0;
		__this->set__extraSize_6(((int16_t)((int16_t)L_0)));
		// protected internal set { _extraSize = (short) value; }
		return;
	}
}
// System.Int32 CSCore.WaveFormat::get_BytesPerSample()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaveFormat_get_BytesPerSample_mC3653DCBB6721F9829E3CF9F96FADEBA8AF0CF9B (WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * __this, const RuntimeMethod* method)
{
	{
		// get { return BitsPerSample / 8; }
		int32_t L_0;
		L_0 = VirtFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 CSCore.WaveFormat::get_BitsPerSample() */, __this);
		return ((int32_t)((int32_t)L_0/(int32_t)8));
	}
}
// System.Int32 CSCore.WaveFormat::get_BytesPerBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaveFormat_get_BytesPerBlock_m24EB6535163A9D640BBB59AE537E0CE8445BA2D3 (WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * __this, const RuntimeMethod* method)
{
	{
		// get { return BytesPerSample * Channels; }
		int32_t L_0;
		L_0 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 CSCore.WaveFormat::get_BytesPerSample() */, __this);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 CSCore.WaveFormat::get_Channels() */, __this);
		return ((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1));
	}
}
// CSCore.AudioEncoding CSCore.WaveFormat::get_WaveFormatTag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t WaveFormat_get_WaveFormatTag_m64F2D7ECCC9FEE4DA8D24CE3A174BD599D9B1B12 (WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * __this, const RuntimeMethod* method)
{
	{
		// get { return _encoding; }
		int16_t L_0 = __this->get__encoding_0();
		return L_0;
	}
}
// System.Void CSCore.WaveFormat::set_WaveFormatTag(CSCore.AudioEncoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFormat_set_WaveFormatTag_m33862E5943BAA0C6CE74DF9540714AC41F5B453D (WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * __this, int16_t ___value0, const RuntimeMethod* method)
{
	{
		// protected internal set { _encoding = value; }
		int16_t L_0 = ___value0;
		__this->set__encoding_0(L_0);
		// protected internal set { _encoding = value; }
		return;
	}
}
// System.Void CSCore.WaveFormat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFormat__ctor_m4342B46096B1716225DB399CBA320A733F864AA3 (WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * __this, const RuntimeMethod* method)
{
	{
		// : this(44100, 16, 2)
		WaveFormat__ctor_mD78C37B044A3A3930E47F5BE79A454772C0AB7E8(__this, ((int32_t)44100), ((int32_t)16), 2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CSCore.WaveFormat::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFormat__ctor_mD78C37B044A3A3930E47F5BE79A454772C0AB7E8 (WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * __this, int32_t ___sampleRate0, int32_t ___bits1, int32_t ___channels2, const RuntimeMethod* method)
{
	{
		// : this(sampleRate, bits, channels, AudioEncoding.Pcm)
		int32_t L_0 = ___sampleRate0;
		int32_t L_1 = ___bits1;
		int32_t L_2 = ___channels2;
		WaveFormat__ctor_mBD06560A25EC9905D7B8804C30F48FD6F84E50B2(__this, L_0, L_1, L_2, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CSCore.WaveFormat::.ctor(System.Int32,System.Int32,System.Int32,CSCore.AudioEncoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFormat__ctor_mBD06560A25EC9905D7B8804C30F48FD6F84E50B2 (WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * __this, int32_t ___sampleRate0, int32_t ___bits1, int32_t ___channels2, int16_t ___encoding3, const RuntimeMethod* method)
{
	{
		// : this(sampleRate, bits, channels, encoding, 0)
		int32_t L_0 = ___sampleRate0;
		int32_t L_1 = ___bits1;
		int32_t L_2 = ___channels2;
		int16_t L_3 = ___encoding3;
		WaveFormat__ctor_m5742AED9549B88D5DB64F46D84FB01D4A96195E2(__this, L_0, L_1, L_2, L_3, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CSCore.WaveFormat::.ctor(System.Int32,System.Int32,System.Int32,CSCore.AudioEncoding,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFormat__ctor_m5742AED9549B88D5DB64F46D84FB01D4A96195E2 (WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * __this, int32_t ___sampleRate0, int32_t ___bits1, int32_t ___channels2, int16_t ___encoding3, int32_t ___extraSize4, const RuntimeMethod* method)
{
	{
		// public WaveFormat(int sampleRate, int bits, int channels, AudioEncoding encoding, int extraSize)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// if (sampleRate < 1)
		int32_t L_0 = ___sampleRate0;
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		// throw new ArgumentOutOfRangeException("sampleRate");
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_1 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1AB514A8EA2B388C6E60F1CC62C6D7C61F45CA3D)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WaveFormat__ctor_m5742AED9549B88D5DB64F46D84FB01D4A96195E2_RuntimeMethod_var)));
	}

IL_0015:
	{
		// if (bits < 0)
		int32_t L_2 = ___bits1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		// throw new ArgumentOutOfRangeException("bits");
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_3 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral315818C03CCC2B10070DF2D4EBD09EB6C4C66E58)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WaveFormat__ctor_m5742AED9549B88D5DB64F46D84FB01D4A96195E2_RuntimeMethod_var)));
	}

IL_0024:
	{
		// if (channels < 1)
		int32_t L_4 = ___channels2;
		if ((((int32_t)L_4) >= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		// throw new ArgumentOutOfRangeException("channels", "Number of channels has to be bigger than 0.");
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_5 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4FB3B17CEC619C238633561C3FAE9D8ADED19582)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0C64F48FB448DB8611B37276E1561AA8F3E7F040)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WaveFormat__ctor_m5742AED9549B88D5DB64F46D84FB01D4A96195E2_RuntimeMethod_var)));
	}

IL_0038:
	{
		// _sampleRate = sampleRate;
		int32_t L_6 = ___sampleRate0;
		__this->set__sampleRate_2(L_6);
		// _bitsPerSample = (short) bits;
		int32_t L_7 = ___bits1;
		__this->set__bitsPerSample_5(((int16_t)((int16_t)L_7)));
		// _channels = (short) channels;
		int32_t L_8 = ___channels2;
		__this->set__channels_1(((int16_t)((int16_t)L_8)));
		// _encoding = encoding;
		int16_t L_9 = ___encoding3;
		__this->set__encoding_0(L_9);
		// _extraSize = (short) extraSize;
		int32_t L_10 = ___extraSize4;
		__this->set__extraSize_6(((int16_t)((int16_t)L_10)));
		// UpdateProperties();
		VirtActionInvoker0::Invoke(26 /* System.Void CSCore.WaveFormat::UpdateProperties() */, __this);
		// }
		return;
	}
}
// System.Int64 CSCore.WaveFormat::MillisecondsToBytes(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WaveFormat_MillisecondsToBytes_mE372A154EA43EDF689DD57C6D542FDE6D60B82F1 (WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * __this, double ___milliseconds0, const RuntimeMethod* method)
{
	{
		// var result = (long) ((BytesPerSecond / 1000.0) * milliseconds);
		int32_t L_0;
		L_0 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 CSCore.WaveFormat::get_BytesPerSecond() */, __this);
		double L_1 = ___milliseconds0;
		// result -= result % BlockAlign;
		int64_t L_2 = il2cpp_codegen_cast_double_to_int<int64_t>(((double)il2cpp_codegen_multiply((double)((double)((double)((double)((double)L_0))/(double)(1000.0))), (double)L_1)));
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 CSCore.WaveFormat::get_BlockAlign() */, __this);
		// return result;
		return ((int64_t)il2cpp_codegen_subtract((int64_t)L_2, (int64_t)((int64_t)((int64_t)L_2%(int64_t)((int64_t)((int64_t)L_3))))));
	}
}
// System.Double CSCore.WaveFormat::BytesToMilliseconds(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double WaveFormat_BytesToMilliseconds_m69ADCBF86F39DA2F7DFE294FA6B74E39A6DB1E67 (WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * __this, int64_t ___bytes0, const RuntimeMethod* method)
{
	{
		// bytes -= bytes % BlockAlign;
		int64_t L_0 = ___bytes0;
		int64_t L_1 = ___bytes0;
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 CSCore.WaveFormat::get_BlockAlign() */, __this);
		___bytes0 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_0, (int64_t)((int64_t)((int64_t)L_1%(int64_t)((int64_t)((int64_t)L_2))))));
		// var result = ((bytes / (double) BytesPerSecond) * 1000.0);
		int64_t L_3 = ___bytes0;
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 CSCore.WaveFormat::get_BytesPerSecond() */, __this);
		// return result;
		return ((double)il2cpp_codegen_multiply((double)((double)((double)((double)((double)L_3))/(double)((double)((double)L_4)))), (double)(1000.0)));
	}
}
// System.Boolean CSCore.WaveFormat::Equals(CSCore.WaveFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaveFormat_Equals_m40E1CD8CF753C0C5D3E32F91CD4FCAA59C6B6A25 (WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * __this, WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * ___other0, const RuntimeMethod* method)
{
	{
		// return Channels == other.Channels &&
		//        SampleRate == other.SampleRate &&
		//        BytesPerSecond == other.BytesPerSecond &&
		//        BlockAlign == other.BlockAlign &&
		//        BitsPerSample == other.BitsPerSample &&
		//        ExtraSize == other.ExtraSize &&
		//        WaveFormatTag == other.WaveFormatTag;
		int32_t L_0;
		L_0 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 CSCore.WaveFormat::get_Channels() */, __this);
		WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * L_1 = ___other0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 CSCore.WaveFormat::get_Channels() */, L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 CSCore.WaveFormat::get_SampleRate() */, __this);
		WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * L_4 = ___other0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 CSCore.WaveFormat::get_SampleRate() */, L_4);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_6;
		L_6 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 CSCore.WaveFormat::get_BytesPerSecond() */, __this);
		WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * L_7 = ___other0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 CSCore.WaveFormat::get_BytesPerSecond() */, L_7);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_8))))
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_9;
		L_9 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 CSCore.WaveFormat::get_BlockAlign() */, __this);
		WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * L_10 = ___other0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 CSCore.WaveFormat::get_BlockAlign() */, L_10);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_11))))
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_12;
		L_12 = VirtFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 CSCore.WaveFormat::get_BitsPerSample() */, __this);
		WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * L_13 = ___other0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 CSCore.WaveFormat::get_BitsPerSample() */, L_13);
		if ((!(((uint32_t)L_12) == ((uint32_t)L_14))))
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_15;
		L_15 = VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 CSCore.WaveFormat::get_ExtraSize() */, __this);
		WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * L_16 = ___other0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 CSCore.WaveFormat::get_ExtraSize() */, L_16);
		if ((!(((uint32_t)L_15) == ((uint32_t)L_17))))
		{
			goto IL_0063;
		}
	}
	{
		int16_t L_18;
		L_18 = VirtFuncInvoker0< int16_t >::Invoke(20 /* CSCore.AudioEncoding CSCore.WaveFormat::get_WaveFormatTag() */, __this);
		WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * L_19 = ___other0;
		NullCheck(L_19);
		int16_t L_20;
		L_20 = VirtFuncInvoker0< int16_t >::Invoke(20 /* CSCore.AudioEncoding CSCore.WaveFormat::get_WaveFormatTag() */, L_19);
		return (bool)((((int32_t)L_18) == ((int32_t)L_20))? 1 : 0);
	}

IL_0063:
	{
		return (bool)0;
	}
}
// System.String CSCore.WaveFormat::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WaveFormat_ToString_mAC2F9A655621729C0E10710BB2854A61E3E56538 (WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * __this, const RuntimeMethod* method)
{
	{
		// return GetInformation().ToString();
		StringBuilder_t * L_0;
		L_0 = WaveFormat_GetInformation_mA23D359B6841209DA258A834A082ADA231218660(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
	}
}
// System.Object CSCore.WaveFormat::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * WaveFormat_Clone_mC262F48001F905FB4E206140712B53F7E005AD3A (WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * __this, const RuntimeMethod* method)
{
	{
		// return MemberwiseClone(); //since there are value types MemberWiseClone is enough.
		RuntimeObject * L_0;
		L_0 = Object_MemberwiseClone_m0AEE84C38E9A87C372139B4C342454553F0F6392(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void CSCore.WaveFormat::SetWaveFormatTagInternal(CSCore.AudioEncoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFormat_SetWaveFormatTagInternal_mE1CC6E312DD65261641B31230B280630655F9CD4 (WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * __this, int16_t ___waveFormatTag0, const RuntimeMethod* method)
{
	{
		// WaveFormatTag = waveFormatTag;
		int16_t L_0 = ___waveFormatTag0;
		VirtActionInvoker1< int16_t >::Invoke(21 /* System.Void CSCore.WaveFormat::set_WaveFormatTag(CSCore.AudioEncoding) */, __this, L_0);
		// }
		return;
	}
}
// System.Void CSCore.WaveFormat::SetBitsPerSampleAndFormatProperties(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFormat_SetBitsPerSampleAndFormatProperties_mD00AEA82B40241CD880984AA11B6A267D2AD8DF9 (WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * __this, int32_t ___bitsPerSample0, const RuntimeMethod* method)
{
	{
		// BitsPerSample = bitsPerSample;
		int32_t L_0 = ___bitsPerSample0;
		VirtActionInvoker1< int32_t >::Invoke(15 /* System.Void CSCore.WaveFormat::set_BitsPerSample(System.Int32) */, __this, L_0);
		// UpdateProperties();
		VirtActionInvoker0::Invoke(26 /* System.Void CSCore.WaveFormat::UpdateProperties() */, __this);
		// }
		return;
	}
}
// System.Void CSCore.WaveFormat::UpdateProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFormat_UpdateProperties_m6CBEFDAEAE96D5314E4D4E7F92A38E11EA43AB15 (WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * __this, const RuntimeMethod* method)
{
	{
		// BlockAlign = (BitsPerSample / 8) * Channels;
		int32_t L_0;
		L_0 = VirtFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 CSCore.WaveFormat::get_BitsPerSample() */, __this);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 CSCore.WaveFormat::get_Channels() */, __this);
		VirtActionInvoker1< int32_t >::Invoke(13 /* System.Void CSCore.WaveFormat::set_BlockAlign(System.Int32) */, __this, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_0/(int32_t)8)), (int32_t)L_1)));
		// BytesPerSecond = BlockAlign * SampleRate;
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 CSCore.WaveFormat::get_BlockAlign() */, __this);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 CSCore.WaveFormat::get_SampleRate() */, __this);
		VirtActionInvoker1< int32_t >::Invoke(11 /* System.Void CSCore.WaveFormat::set_BytesPerSecond(System.Int32) */, __this, ((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)L_3)));
		// }
		return;
	}
}
// System.Text.StringBuilder CSCore.WaveFormat::GetInformation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * WaveFormat_GetInformation_mA23D359B6841209DA258A834A082ADA231218660 (WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioEncoding_tB144FB61AA9FECA4B4F3A52DF8E6110BE7B147FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3332734A3CFF55E3216C0BEB76BCE8013C273DF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42EDAC769F6CAEEE473E514A54F656FC4E45CF91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B3BE651FD101FDE76045F98F0402C176FE6D54C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B950FA94599EEFB6A45466DFB1FE490A70E90A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA70601391991A790B99D8A2561EB3FEBB7729075);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC481CDF5573E92CDA3B2ADBA1556D4B5B1B659C4);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var builder = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		// builder.Append("ChannelsAvailable: " + Channels);
		StringBuilder_t * L_1 = L_0;
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 CSCore.WaveFormat::get_Channels() */, __this);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral3332734A3CFF55E3216C0BEB76BCE8013C273DF1, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_t * L_5;
		L_5 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_1, L_4, /*hidden argument*/NULL);
		// builder.Append("|SampleRate: " + SampleRate);
		StringBuilder_t * L_6 = L_1;
		int32_t L_7;
		L_7 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 CSCore.WaveFormat::get_SampleRate() */, __this);
		V_0 = L_7;
		String_t* L_8;
		L_8 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_9;
		L_9 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral5B3BE651FD101FDE76045F98F0402C176FE6D54C, L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		StringBuilder_t * L_10;
		L_10 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_6, L_9, /*hidden argument*/NULL);
		// builder.Append("|Bps: " + BytesPerSecond);
		StringBuilder_t * L_11 = L_6;
		int32_t L_12;
		L_12 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 CSCore.WaveFormat::get_BytesPerSecond() */, __this);
		V_0 = L_12;
		String_t* L_13;
		L_13 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_14;
		L_14 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral5B950FA94599EEFB6A45466DFB1FE490A70E90A8, L_13, /*hidden argument*/NULL);
		NullCheck(L_11);
		StringBuilder_t * L_15;
		L_15 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_11, L_14, /*hidden argument*/NULL);
		// builder.Append("|BlockAlign: " + BlockAlign);
		StringBuilder_t * L_16 = L_11;
		int32_t L_17;
		L_17 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 CSCore.WaveFormat::get_BlockAlign() */, __this);
		V_0 = L_17;
		String_t* L_18;
		L_18 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_19;
		L_19 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralC481CDF5573E92CDA3B2ADBA1556D4B5B1B659C4, L_18, /*hidden argument*/NULL);
		NullCheck(L_16);
		StringBuilder_t * L_20;
		L_20 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_16, L_19, /*hidden argument*/NULL);
		// builder.Append("|BitsPerSample: " + BitsPerSample);
		StringBuilder_t * L_21 = L_16;
		int32_t L_22;
		L_22 = VirtFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 CSCore.WaveFormat::get_BitsPerSample() */, __this);
		V_0 = L_22;
		String_t* L_23;
		L_23 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_24;
		L_24 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralA70601391991A790B99D8A2561EB3FEBB7729075, L_23, /*hidden argument*/NULL);
		NullCheck(L_21);
		StringBuilder_t * L_25;
		L_25 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_21, L_24, /*hidden argument*/NULL);
		// builder.Append("|Encoding: " + _encoding);
		StringBuilder_t * L_26 = L_21;
		int16_t* L_27 = __this->get_address_of__encoding_0();
		RuntimeObject * L_28 = Box(AudioEncoding_tB144FB61AA9FECA4B4F3A52DF8E6110BE7B147FE_il2cpp_TypeInfo_var, L_27);
		NullCheck(L_28);
		String_t* L_29;
		L_29 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_28);
		*L_27 = *(int16_t*)UnBox(L_28);
		String_t* L_30;
		L_30 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral42EDAC769F6CAEEE473E514A54F656FC4E45CF91, L_29, /*hidden argument*/NULL);
		NullCheck(L_26);
		StringBuilder_t * L_31;
		L_31 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_26, L_30, /*hidden argument*/NULL);
		// return builder;
		return L_26;
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
// Conversion methods for marshalling of: CSCore.WaveFormatExtensible
IL2CPP_EXTERN_C void WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060_marshal_pinvoke(const WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060& unmarshaled, WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060_marshaled_pinvoke& marshaled)
{
	marshaled.____samplesUnion_8 = unmarshaled.get__samplesUnion_8();
	marshaled.____channelMask_9 = unmarshaled.get__channelMask_9();
	marshaled.____subFormat_10 = unmarshaled.get__subFormat_10();
	marshaled.____encoding_0 = unmarshaled.get__encoding_0();
	marshaled.____channels_1 = unmarshaled.get__channels_1();
	marshaled.____sampleRate_2 = unmarshaled.get__sampleRate_2();
	marshaled.____bytesPerSecond_3 = unmarshaled.get__bytesPerSecond_3();
	marshaled.____blockAlign_4 = unmarshaled.get__blockAlign_4();
	marshaled.____bitsPerSample_5 = unmarshaled.get__bitsPerSample_5();
	marshaled.____extraSize_6 = unmarshaled.get__extraSize_6();
}
IL2CPP_EXTERN_C void WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060_marshal_pinvoke_back(const WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060_marshaled_pinvoke& marshaled, WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060& unmarshaled)
{
	int16_t unmarshaled__samplesUnion_temp_0 = 0;
	unmarshaled__samplesUnion_temp_0 = marshaled.____samplesUnion_8;
	unmarshaled.set__samplesUnion_8(unmarshaled__samplesUnion_temp_0);
	int32_t unmarshaled__channelMask_temp_1 = 0;
	unmarshaled__channelMask_temp_1 = marshaled.____channelMask_9;
	unmarshaled.set__channelMask_9(unmarshaled__channelMask_temp_1);
	Guid_t  unmarshaled__subFormat_temp_2;
	memset((&unmarshaled__subFormat_temp_2), 0, sizeof(unmarshaled__subFormat_temp_2));
	unmarshaled__subFormat_temp_2 = marshaled.____subFormat_10;
	unmarshaled.set__subFormat_10(unmarshaled__subFormat_temp_2);
	int16_t unmarshaled__encoding_temp_3 = 0;
	unmarshaled__encoding_temp_3 = marshaled.____encoding_0;
	unmarshaled.set__encoding_0(unmarshaled__encoding_temp_3);
	int16_t unmarshaled__channels_temp_4 = 0;
	unmarshaled__channels_temp_4 = marshaled.____channels_1;
	unmarshaled.set__channels_1(unmarshaled__channels_temp_4);
	int32_t unmarshaled__sampleRate_temp_5 = 0;
	unmarshaled__sampleRate_temp_5 = marshaled.____sampleRate_2;
	unmarshaled.set__sampleRate_2(unmarshaled__sampleRate_temp_5);
	int32_t unmarshaled__bytesPerSecond_temp_6 = 0;
	unmarshaled__bytesPerSecond_temp_6 = marshaled.____bytesPerSecond_3;
	unmarshaled.set__bytesPerSecond_3(unmarshaled__bytesPerSecond_temp_6);
	int16_t unmarshaled__blockAlign_temp_7 = 0;
	unmarshaled__blockAlign_temp_7 = marshaled.____blockAlign_4;
	unmarshaled.set__blockAlign_4(unmarshaled__blockAlign_temp_7);
	int16_t unmarshaled__bitsPerSample_temp_8 = 0;
	unmarshaled__bitsPerSample_temp_8 = marshaled.____bitsPerSample_5;
	unmarshaled.set__bitsPerSample_5(unmarshaled__bitsPerSample_temp_8);
	int16_t unmarshaled__extraSize_temp_9 = 0;
	unmarshaled__extraSize_temp_9 = marshaled.____extraSize_6;
	unmarshaled.set__extraSize_6(unmarshaled__extraSize_temp_9);
}
// Conversion method for clean up from marshalling of: CSCore.WaveFormatExtensible
IL2CPP_EXTERN_C void WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060_marshal_pinvoke_cleanup(WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: CSCore.WaveFormatExtensible
IL2CPP_EXTERN_C void WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060_marshal_com(const WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060& unmarshaled, WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060_marshaled_com& marshaled)
{
	marshaled.____samplesUnion_8 = unmarshaled.get__samplesUnion_8();
	marshaled.____channelMask_9 = unmarshaled.get__channelMask_9();
	marshaled.____subFormat_10 = unmarshaled.get__subFormat_10();
	marshaled.____encoding_0 = unmarshaled.get__encoding_0();
	marshaled.____channels_1 = unmarshaled.get__channels_1();
	marshaled.____sampleRate_2 = unmarshaled.get__sampleRate_2();
	marshaled.____bytesPerSecond_3 = unmarshaled.get__bytesPerSecond_3();
	marshaled.____blockAlign_4 = unmarshaled.get__blockAlign_4();
	marshaled.____bitsPerSample_5 = unmarshaled.get__bitsPerSample_5();
	marshaled.____extraSize_6 = unmarshaled.get__extraSize_6();
}
IL2CPP_EXTERN_C void WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060_marshal_com_back(const WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060_marshaled_com& marshaled, WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060& unmarshaled)
{
	int16_t unmarshaled__samplesUnion_temp_0 = 0;
	unmarshaled__samplesUnion_temp_0 = marshaled.____samplesUnion_8;
	unmarshaled.set__samplesUnion_8(unmarshaled__samplesUnion_temp_0);
	int32_t unmarshaled__channelMask_temp_1 = 0;
	unmarshaled__channelMask_temp_1 = marshaled.____channelMask_9;
	unmarshaled.set__channelMask_9(unmarshaled__channelMask_temp_1);
	Guid_t  unmarshaled__subFormat_temp_2;
	memset((&unmarshaled__subFormat_temp_2), 0, sizeof(unmarshaled__subFormat_temp_2));
	unmarshaled__subFormat_temp_2 = marshaled.____subFormat_10;
	unmarshaled.set__subFormat_10(unmarshaled__subFormat_temp_2);
	int16_t unmarshaled__encoding_temp_3 = 0;
	unmarshaled__encoding_temp_3 = marshaled.____encoding_0;
	unmarshaled.set__encoding_0(unmarshaled__encoding_temp_3);
	int16_t unmarshaled__channels_temp_4 = 0;
	unmarshaled__channels_temp_4 = marshaled.____channels_1;
	unmarshaled.set__channels_1(unmarshaled__channels_temp_4);
	int32_t unmarshaled__sampleRate_temp_5 = 0;
	unmarshaled__sampleRate_temp_5 = marshaled.____sampleRate_2;
	unmarshaled.set__sampleRate_2(unmarshaled__sampleRate_temp_5);
	int32_t unmarshaled__bytesPerSecond_temp_6 = 0;
	unmarshaled__bytesPerSecond_temp_6 = marshaled.____bytesPerSecond_3;
	unmarshaled.set__bytesPerSecond_3(unmarshaled__bytesPerSecond_temp_6);
	int16_t unmarshaled__blockAlign_temp_7 = 0;
	unmarshaled__blockAlign_temp_7 = marshaled.____blockAlign_4;
	unmarshaled.set__blockAlign_4(unmarshaled__blockAlign_temp_7);
	int16_t unmarshaled__bitsPerSample_temp_8 = 0;
	unmarshaled__bitsPerSample_temp_8 = marshaled.____bitsPerSample_5;
	unmarshaled.set__bitsPerSample_5(unmarshaled__bitsPerSample_temp_8);
	int16_t unmarshaled__extraSize_temp_9 = 0;
	unmarshaled__extraSize_temp_9 = marshaled.____extraSize_6;
	unmarshaled.set__extraSize_6(unmarshaled__extraSize_temp_9);
}
// Conversion method for clean up from marshalling of: CSCore.WaveFormatExtensible
IL2CPP_EXTERN_C void WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060_marshal_com_cleanup(WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060_marshaled_com& marshaled)
{
}
// System.Guid CSCore.WaveFormatExtensible::SubTypeFromWaveFormat(CSCore.WaveFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  WaveFormatExtensible_SubTypeFromWaveFormat_m5DFEF3FC8B8BDBBCC6AD8D48FF832E2C4652B512 (WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * ___waveFormat0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSubTypes_t387587BBC24943E82D65376FE3B0AD113C91B229_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (waveFormat == null)
		WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * L_0 = ___waveFormat0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException("waveFormat");
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral02316F6BA3F570660161B4E617F41DF7B1FD4C70)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WaveFormatExtensible_SubTypeFromWaveFormat_m5DFEF3FC8B8BDBBCC6AD8D48FF832E2C4652B512_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (waveFormat is WaveFormatExtensible)
		WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * L_2 = ___waveFormat0;
		if (!((WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060 *)IsInstClass((RuntimeObject*)L_2, WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060_il2cpp_TypeInfo_var)))
		{
			goto IL_0022;
		}
	}
	{
		// return ((WaveFormatExtensible) waveFormat).SubFormat;
		WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * L_3 = ___waveFormat0;
		NullCheck(((WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060 *)CastclassClass((RuntimeObject*)L_3, WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060_il2cpp_TypeInfo_var)));
		Guid_t  L_4;
		L_4 = WaveFormatExtensible_get_SubFormat_m3282EB3D7CD99F7A01F36150AD1FEB3548589D07_inline(((WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060 *)CastclassClass((RuntimeObject*)L_3, WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_4;
	}

IL_0022:
	{
		// return AudioSubTypes.SubTypeFromEncoding(waveFormat.WaveFormatTag);
		WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * L_5 = ___waveFormat0;
		NullCheck(L_5);
		int16_t L_6;
		L_6 = VirtFuncInvoker0< int16_t >::Invoke(20 /* CSCore.AudioEncoding CSCore.WaveFormat::get_WaveFormatTag() */, L_5);
		IL2CPP_RUNTIME_CLASS_INIT(AudioSubTypes_t387587BBC24943E82D65376FE3B0AD113C91B229_il2cpp_TypeInfo_var);
		Guid_t  L_7;
		L_7 = AudioSubTypes_SubTypeFromEncoding_m0EF7F0CA90E39C8E526537F46A817EDB1751C1F4(L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Int32 CSCore.WaveFormatExtensible::get_ValidBitsPerSample()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaveFormatExtensible_get_ValidBitsPerSample_m31DFB777E0545B161DF2190A0944E977CEC64518 (WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060 * __this, const RuntimeMethod* method)
{
	{
		// get { return _samplesUnion; }
		int16_t L_0 = __this->get__samplesUnion_8();
		return L_0;
	}
}
// System.Void CSCore.WaveFormatExtensible::set_ValidBitsPerSample(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFormatExtensible_set_ValidBitsPerSample_m80B312D341014B71736A0E43369B863FC7FDAF6E (WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal protected set { _samplesUnion = (short) value; }
		int32_t L_0 = ___value0;
		__this->set__samplesUnion_8(((int16_t)((int16_t)L_0)));
		// internal protected set { _samplesUnion = (short) value; }
		return;
	}
}
// System.Int32 CSCore.WaveFormatExtensible::get_SamplesPerBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaveFormatExtensible_get_SamplesPerBlock_m4E4DBA5E82F93124A3B7A28B4AE0500E3377D6ED (WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060 * __this, const RuntimeMethod* method)
{
	{
		// get { return _samplesUnion; }
		int16_t L_0 = __this->get__samplesUnion_8();
		return L_0;
	}
}
// System.Void CSCore.WaveFormatExtensible::set_SamplesPerBlock(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFormatExtensible_set_SamplesPerBlock_m4B22D6CF8E5265EBCF7A4D31873C66EA8E192E9A (WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal protected set { _samplesUnion = (short) value; }
		int32_t L_0 = ___value0;
		__this->set__samplesUnion_8(((int16_t)((int16_t)L_0)));
		// internal protected set { _samplesUnion = (short) value; }
		return;
	}
}
// CSCore.ChannelMask CSCore.WaveFormatExtensible::get_ChannelMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaveFormatExtensible_get_ChannelMask_mEAD03CAED3116F947D91053F279EDA08B2371E7A (WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060 * __this, const RuntimeMethod* method)
{
	{
		// get { return _channelMask; }
		int32_t L_0 = __this->get__channelMask_9();
		return L_0;
	}
}
// System.Void CSCore.WaveFormatExtensible::set_ChannelMask(CSCore.ChannelMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFormatExtensible_set_ChannelMask_m7D1FA6FEE5986CA9476903B4194A8F8F3B3A48C6 (WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal protected set { _channelMask = value; }
		int32_t L_0 = ___value0;
		__this->set__channelMask_9(L_0);
		// internal protected set { _channelMask = value; }
		return;
	}
}
// System.Guid CSCore.WaveFormatExtensible::get_SubFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  WaveFormatExtensible_get_SubFormat_m3282EB3D7CD99F7A01F36150AD1FEB3548589D07 (WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060 * __this, const RuntimeMethod* method)
{
	{
		// get { return _subFormat; }
		Guid_t  L_0 = __this->get__subFormat_10();
		return L_0;
	}
}
// System.Void CSCore.WaveFormatExtensible::set_SubFormat(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFormatExtensible_set_SubFormat_m2106408D1EC65526B6AD07A19472CC2AFD1ECB96 (WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060 * __this, Guid_t  ___value0, const RuntimeMethod* method)
{
	{
		// internal protected set { _subFormat = value; }
		Guid_t  L_0 = ___value0;
		__this->set__subFormat_10(L_0);
		// internal protected set { _subFormat = value; }
		return;
	}
}
// System.Void CSCore.WaveFormatExtensible::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFormatExtensible__ctor_m996804D76B8B97752146A0EF1D348299C44905B3 (WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060 * __this, const RuntimeMethod* method)
{
	{
		// internal WaveFormatExtensible()
		WaveFormat__ctor_m4342B46096B1716225DB399CBA320A733F864AA3(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CSCore.WaveFormatExtensible::.ctor(System.Int32,System.Int32,System.Int32,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFormatExtensible__ctor_m604EA2239408140E0359C350711868FC2A3C31B9 (WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060 * __this, int32_t ___sampleRate0, int32_t ___bits1, int32_t ___channels2, Guid_t  ___subFormat3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// : base(sampleRate, bits, channels, AudioEncoding.Extensible, WaveFormatExtensibleExtraSize)
		int32_t L_0 = ___sampleRate0;
		int32_t L_1 = ___bits1;
		int32_t L_2 = ___channels2;
		WaveFormat__ctor_m5742AED9549B88D5DB64F46D84FB01D4A96195E2(__this, L_0, L_1, L_2, ((int32_t)-2), ((int32_t)22), /*hidden argument*/NULL);
		// _samplesUnion = (short) bits;
		int32_t L_3 = ___bits1;
		__this->set__samplesUnion_8(((int16_t)((int16_t)L_3)));
		// _subFormat = SubTypeFromWaveFormat(this);
		Guid_t  L_4;
		L_4 = WaveFormatExtensible_SubTypeFromWaveFormat_m5DFEF3FC8B8BDBBCC6AD8D48FF832E2C4652B512(__this, /*hidden argument*/NULL);
		__this->set__subFormat_10(L_4);
		// int cm = 0;
		V_0 = 0;
		// for (int i = 0; i < channels; i++)
		V_1 = 0;
		goto IL_0034;
	}

IL_0027:
	{
		// cm |= (1 << i);
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		V_0 = ((int32_t)((int32_t)L_5|(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)31)))))));
		// for (int i = 0; i < channels; i++)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0034:
	{
		// for (int i = 0; i < channels; i++)
		int32_t L_8 = V_1;
		int32_t L_9 = ___channels2;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0027;
		}
	}
	{
		// _channelMask = (ChannelMask) cm;
		int32_t L_10 = V_0;
		__this->set__channelMask_9(L_10);
		// _subFormat = subFormat;
		Guid_t  L_11 = ___subFormat3;
		__this->set__subFormat_10(L_11);
		// }
		return;
	}
}
// System.Void CSCore.WaveFormatExtensible::.ctor(System.Int32,System.Int32,System.Int32,System.Guid,CSCore.ChannelMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFormatExtensible__ctor_mBE493CE24C95236FE8F4D08CDBB676448450ADCE (WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060 * __this, int32_t ___sampleRate0, int32_t ___bits1, int32_t ___channels2, Guid_t  ___subFormat3, int32_t ___channelMask4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChannelMask_t66A7F964A2DB39B1BF8D737BD920E7D5E7D01389_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChannelMask_t66A7F964A2DB39B1BF8D737BD920E7D5E7D01389_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeArray * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// : this(sampleRate, bits, channels, subFormat)
		int32_t L_0 = ___sampleRate0;
		int32_t L_1 = ___bits1;
		int32_t L_2 = ___channels2;
		Guid_t  L_3 = ___subFormat3;
		WaveFormatExtensible__ctor_m604EA2239408140E0359C350711868FC2A3C31B9(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// Array totalChannelMaskValues = Enum.GetValues(typeof (ChannelMask));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (ChannelMask_t66A7F964A2DB39B1BF8D737BD920E7D5E7D01389_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeArray * L_6;
		L_6 = Enum_GetValues_m8EEC6B32F297FDB2F7375DC8B197E0E1AB8643BD(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// int valuesSet = 0;
		V_1 = 0;
		// for (int i = 0; i < totalChannelMaskValues.Length; i++)
		V_2 = 0;
		goto IL_0046;
	}

IL_0021:
	{
		// if ((channelMask & (ChannelMask) totalChannelMaskValues.GetValue(i)) ==
		//     (ChannelMask) totalChannelMaskValues.GetValue(i))
		int32_t L_7 = ___channelMask4;
		RuntimeArray * L_8 = V_0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		RuntimeObject * L_10;
		L_10 = Array_GetValue_m6E4274D23FFD6089882CD12B2F2EA615206792E1(L_8, L_9, /*hidden argument*/NULL);
		RuntimeArray * L_11 = V_0;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		RuntimeObject * L_13;
		L_13 = Array_GetValue_m6E4274D23FFD6089882CD12B2F2EA615206792E1(L_11, L_12, /*hidden argument*/NULL);
		if ((!(((uint32_t)((int32_t)((int32_t)L_7&(int32_t)((*(int32_t*)((int32_t*)UnBox(L_10, ChannelMask_t66A7F964A2DB39B1BF8D737BD920E7D5E7D01389_il2cpp_TypeInfo_var))))))) == ((uint32_t)((*(int32_t*)((int32_t*)UnBox(L_13, ChannelMask_t66A7F964A2DB39B1BF8D737BD920E7D5E7D01389_il2cpp_TypeInfo_var))))))))
		{
			goto IL_0042;
		}
	}
	{
		// valuesSet++;
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0042:
	{
		// for (int i = 0; i < totalChannelMaskValues.Length; i++)
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0046:
	{
		// for (int i = 0; i < totalChannelMaskValues.Length; i++)
		int32_t L_16 = V_2;
		RuntimeArray * L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10(L_17, /*hidden argument*/NULL);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_0021;
		}
	}
	{
		// if (channels != valuesSet)
		int32_t L_19 = ___channels2;
		int32_t L_20 = V_1;
		if ((((int32_t)L_19) == ((int32_t)L_20)))
		{
			goto IL_005e;
		}
	}
	{
		// throw new ArgumentException("Channels has to equal the set flags in the channelmask.");
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_21 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0D5816CFAD35A71BB357117A3AA685F04603FEEA)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WaveFormatExtensible__ctor_mBE493CE24C95236FE8F4D08CDBB676448450ADCE_RuntimeMethod_var)));
	}

IL_005e:
	{
		// _channelMask = channelMask;
		int32_t L_22 = ___channelMask4;
		__this->set__channelMask_9(L_22);
		// }
		return;
	}
}
// CSCore.WaveFormat CSCore.WaveFormatExtensible::ToWaveFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * WaveFormatExtensible_ToWaveFormat_mE90FBC1D9598EB1A247D2B2BA16DCAD5B1765790 (WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSubTypes_t387587BBC24943E82D65376FE3B0AD113C91B229_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new WaveFormat(SampleRate, BitsPerSample, Channels, AudioSubTypes.EncodingFromSubType(SubFormat));
		int32_t L_0;
		L_0 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 CSCore.WaveFormat::get_SampleRate() */, __this);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 CSCore.WaveFormat::get_BitsPerSample() */, __this);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 CSCore.WaveFormat::get_Channels() */, __this);
		Guid_t  L_3;
		L_3 = WaveFormatExtensible_get_SubFormat_m3282EB3D7CD99F7A01F36150AD1FEB3548589D07_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AudioSubTypes_t387587BBC24943E82D65376FE3B0AD113C91B229_il2cpp_TypeInfo_var);
		int16_t L_4;
		L_4 = AudioSubTypes_EncodingFromSubType_m73B32DC208BC8D72140497BB2951805B0A432A64(L_3, /*hidden argument*/NULL);
		WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * L_5 = (WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE *)il2cpp_codegen_object_new(WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE_il2cpp_TypeInfo_var);
		WaveFormat__ctor_mBD06560A25EC9905D7B8804C30F48FD6F84E50B2(L_5, L_0, L_1, L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Object CSCore.WaveFormatExtensible::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * WaveFormatExtensible_Clone_m5B862BDFE10E9E6C7D582BA59718C4F41D98C523 (WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060 * __this, const RuntimeMethod* method)
{
	{
		// return MemberwiseClone();
		RuntimeObject * L_0;
		L_0 = Object_MemberwiseClone_m0AEE84C38E9A87C372139B4C342454553F0F6392(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void CSCore.WaveFormatExtensible::SetWaveFormatTagInternal(CSCore.AudioEncoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFormatExtensible_SetWaveFormatTagInternal_m0C612717AB1269011E27A610EBA67EF65006A836 (WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060 * __this, int16_t ___waveFormatTag0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSubTypes_t387587BBC24943E82D65376FE3B0AD113C91B229_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SubFormat = AudioSubTypes.SubTypeFromEncoding(waveFormatTag);
		int16_t L_0 = ___waveFormatTag0;
		IL2CPP_RUNTIME_CLASS_INIT(AudioSubTypes_t387587BBC24943E82D65376FE3B0AD113C91B229_il2cpp_TypeInfo_var);
		Guid_t  L_1;
		L_1 = AudioSubTypes_SubTypeFromEncoding_m0EF7F0CA90E39C8E526537F46A817EDB1751C1F4(L_0, /*hidden argument*/NULL);
		WaveFormatExtensible_set_SubFormat_m2106408D1EC65526B6AD07A19472CC2AFD1ECB96_inline(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String CSCore.WaveFormatExtensible::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WaveFormatExtensible_ToString_m06FAD810E136F1219E4783E27EC26A3AA464D42A (WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChannelMask_t66A7F964A2DB39B1BF8D737BD920E7D5E7D01389_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B519CDC6C719D463940FD073BD6C713502A4F90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC578F65B252B242D91B25BE24D37A176FB2C804);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// var stringBuilder = new StringBuilder(base.ToString());
		String_t* L_0;
		L_0 = WaveFormat_ToString_mAC2F9A655621729C0E10710BB2854A61E3E56538(__this, /*hidden argument*/NULL);
		StringBuilder_t * L_1 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m9305A36F9CF53EDD80D132428999934C68904C77(L_1, L_0, /*hidden argument*/NULL);
		// stringBuilder.Append("|SubFormat: " + SubFormat);
		StringBuilder_t * L_2 = L_1;
		Guid_t  L_3;
		L_3 = WaveFormatExtensible_get_SubFormat_m3282EB3D7CD99F7A01F36150AD1FEB3548589D07_inline(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4;
		L_4 = Guid_ToString_mA3AB7742FB0E04808F580868E82BDEB93187FB75((Guid_t *)(&V_0), /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral8B519CDC6C719D463940FD073BD6C713502A4F90, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		StringBuilder_t * L_6;
		L_6 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_2, L_5, /*hidden argument*/NULL);
		// stringBuilder.Append("|ChannelMask: " + ChannelMask);
		StringBuilder_t * L_7 = L_2;
		int32_t L_8;
		L_8 = WaveFormatExtensible_get_ChannelMask_mEAD03CAED3116F947D91053F279EDA08B2371E7A_inline(__this, /*hidden argument*/NULL);
		V_1 = L_8;
		RuntimeObject * L_9 = Box(ChannelMask_t66A7F964A2DB39B1BF8D737BD920E7D5E7D01389_il2cpp_TypeInfo_var, (&V_1));
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		V_1 = *(int32_t*)UnBox(L_9);
		String_t* L_11;
		L_11 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralDC578F65B252B242D91B25BE24D37A176FB2C804, L_10, /*hidden argument*/NULL);
		NullCheck(L_7);
		StringBuilder_t * L_12;
		L_12 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_7, L_11, /*hidden argument*/NULL);
		// return stringBuilder.ToString();
		NullCheck(L_7);
		String_t* L_13;
		L_13 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		return L_13;
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
// System.Boolean CSCore.Codecs.WAV.WaveWriter::get_IsDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaveWriter_get_IsDisposed_mC1B18F40EC42CE956B37765010471C5E4C147B05 (WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * __this, const RuntimeMethod* method)
{
	{
		// return _isDisposed;
		bool L_0 = __this->get__isDisposed_3();
		return L_0;
	}
}
// System.Boolean CSCore.Codecs.WAV.WaveWriter::get_IsDisposing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaveWriter_get_IsDisposing_mC116F5601CC3B05AE713FCDEA75A10F7760F9385 (WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * __this, const RuntimeMethod* method)
{
	{
		// return _isDisposing;
		bool L_0 = __this->get__isDisposing_6();
		return L_0;
	}
}
// System.Void CSCore.Codecs.WAV.WaveWriter::.ctor(System.String,CSCore.WaveFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveWriter__ctor_m84F597546749A95853CFD14A85D858CA67897200 (WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * __this, String_t* ___fileName0, WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * ___waveFormat1, const RuntimeMethod* method)
{
	{
		// : this(File.OpenWrite(fileName), waveFormat)
		String_t* L_0 = ___fileName0;
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_1;
		L_1 = File_OpenWrite_mA2DA8B05D02F9D0EC99EA6E8FB8E35E7301883B9(L_0, /*hidden argument*/NULL);
		WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * L_2 = ___waveFormat1;
		WaveWriter__ctor_mB0B2E6BBE94B3F87EA06A42C7405E1E0683CEA6F(__this, L_1, L_2, /*hidden argument*/NULL);
		// _closeStream = true;
		__this->set__closeStream_7((bool)1);
		// }
		return;
	}
}
// System.Void CSCore.Codecs.WAV.WaveWriter::.ctor(System.IO.Stream,CSCore.WaveFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveWriter__ctor_mB0B2E6BBE94B3F87EA06A42C7405E1E0683CEA6F (WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * ___waveFormat1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// public WaveWriter(Stream stream, WaveFormat waveFormat)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// if (stream == null)
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___stream0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentNullException("stream");
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WaveWriter__ctor_mB0B2E6BBE94B3F87EA06A42C7405E1E0683CEA6F_RuntimeMethod_var)));
	}

IL_0014:
	{
		// if (!stream.CanWrite)
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_2 = ___stream0;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_2);
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		// throw new ArgumentException("Stream not writeable.", "stream");
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_4 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral771A48117FF23886751EC4BE3075F2141F749544)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WaveWriter__ctor_mB0B2E6BBE94B3F87EA06A42C7405E1E0683CEA6F_RuntimeMethod_var)));
	}

IL_002c:
	{
		// if (!stream.CanSeek)
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_5 = ___stream0;
		NullCheck(L_5);
		bool L_6;
		L_6 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.IO.Stream::get_CanSeek() */, L_5);
		if (L_6)
		{
			goto IL_0044;
		}
	}
	{
		// throw new ArgumentException("Stream not seekable.", "stream");
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_7 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE39D8CC3E8E775A8BB56DBC15581E59186F6D1DC)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WaveWriter__ctor_mB0B2E6BBE94B3F87EA06A42C7405E1E0683CEA6F_RuntimeMethod_var)));
	}

IL_0044:
	{
		// _isDisposing = false;
		__this->set__isDisposing_6((bool)0);
		// _isDisposed = false;
		__this->set__isDisposed_3((bool)0);
		// _stream = stream;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_8 = ___stream0;
		__this->set__stream_4(L_8);
		// _waveStartPosition = stream.Position;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_9 = ___stream0;
		NullCheck(L_9);
		int64_t L_10;
		L_10 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_9);
		__this->set__waveStartPosition_1(L_10);
		// _writer = new BinaryWriter(stream);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_11 = ___stream0;
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_12 = (BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F *)il2cpp_codegen_object_new(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F_il2cpp_TypeInfo_var);
		BinaryWriter__ctor_mC6F89939E04734FBEEA375D7E0FF9C042E4AB71A(L_12, L_11, /*hidden argument*/NULL);
		__this->set__writer_5(L_12);
		// for (int i = 0; i < 44; i++)
		V_0 = 0;
		goto IL_0085;
	}

IL_0075:
	{
		// _writer.Write((byte) 0);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_13 = __this->get__writer_5();
		NullCheck(L_13);
		VirtActionInvoker1< uint8_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_13, (uint8_t)0);
		// for (int i = 0; i < 44; i++)
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0085:
	{
		// for (int i = 0; i < 44; i++)
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) < ((int32_t)((int32_t)44))))
		{
			goto IL_0075;
		}
	}
	{
		// _waveFormat = waveFormat;
		WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * L_16 = ___waveFormat1;
		__this->set__waveFormat_0(L_16);
		// WriteHeader();
		WaveWriter_WriteHeader_m0D77D86D414439F0AC482FBA9BFF5F59FDE4B4FD(__this, /*hidden argument*/NULL);
		// _closeStream = false;
		__this->set__closeStream_7((bool)0);
		// }
		return;
	}
}
// System.Void CSCore.Codecs.WAV.WaveWriter::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveWriter_Dispose_m49F4BFC506F5694D660BB4CF083490143E1F73B3 (WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Dispose(true);
		VirtActionInvoker1< bool >::Invoke(6 /* System.Void CSCore.Codecs.WAV.WaveWriter::Dispose(System.Boolean) */, __this, (bool)1);
		// GC.SuppressFinalize(this);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CSCore.Codecs.WAV.WaveWriter::WriteToFile(System.String,CSCore.IWaveSource,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveWriter_WriteToFile_m36AFAEFD736F0DFC233FB72FC8AA5C9FB0526676 (String_t* ___filename0, RuntimeObject* ___source1, bool ___deleteFileIfAlreadyExists2, int32_t ___maxlength3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAudioSource_t614D659753A3C9AA889C1B33994515286A51D394_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadableAudioSource_1_tD492BCC588A82C5DA9F030AAF579ACDBEBA475D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * V_2 = NULL;
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// if (deleteFileIfAlreadyExists && File.Exists(filename))
		bool L_0 = ___deleteFileIfAlreadyExists2;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = ___filename0;
		bool L_2;
		L_2 = File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		// File.Delete(filename);
		String_t* L_3 = ___filename0;
		File_Delete_m82FE53535A3911380F7E4C8AD44D77FAB330FD77(L_3, /*hidden argument*/NULL);
	}

IL_0011:
	{
		// int r = 0;
		V_0 = 0;
		// var buffer = new byte[source.WaveFormat.BytesPerSecond];
		RuntimeObject* L_4 = ___source1;
		NullCheck(L_4);
		WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * L_5;
		L_5 = InterfaceFuncInvoker0< WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * >::Invoke(1 /* CSCore.WaveFormat CSCore.IAudioSource::get_WaveFormat() */, IAudioSource_t614D659753A3C9AA889C1B33994515286A51D394_il2cpp_TypeInfo_var, L_4);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 CSCore.WaveFormat::get_BytesPerSecond() */, L_5);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_1 = L_7;
		// using (var w = new WaveWriter(filename, source.WaveFormat))
		String_t* L_8 = ___filename0;
		RuntimeObject* L_9 = ___source1;
		NullCheck(L_9);
		WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * L_10;
		L_10 = InterfaceFuncInvoker0< WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * >::Invoke(1 /* CSCore.WaveFormat CSCore.IAudioSource::get_WaveFormat() */, IAudioSource_t614D659753A3C9AA889C1B33994515286A51D394_il2cpp_TypeInfo_var, L_9);
		WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * L_11 = (WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD *)il2cpp_codegen_object_new(WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD_il2cpp_TypeInfo_var);
		WaveWriter__ctor_m84F597546749A95853CFD14A85D858CA67897200(L_11, L_8, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
	}

IL_0031:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004a;
		}

IL_0033:
		{
			// w.Write(buffer, 0, read);
			WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * L_12 = V_2;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = V_1;
			int32_t L_14 = V_3;
			NullCheck(L_12);
			WaveWriter_Write_m6921A0C01B62C67E2CC4FA7B01D987DE8AF505EF(L_12, L_13, 0, L_14, /*hidden argument*/NULL);
			// r += read;
			int32_t L_15 = V_0;
			int32_t L_16 = V_3;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_16));
			// if (maxlength != -1 && r > maxlength)
			int32_t L_17 = ___maxlength3;
			if ((((int32_t)L_17) == ((int32_t)(-1))))
			{
				goto IL_004a;
			}
		}

IL_0044:
		{
			int32_t L_18 = V_0;
			int32_t L_19 = ___maxlength3;
			if ((((int32_t)L_18) <= ((int32_t)L_19)))
			{
				goto IL_004a;
			}
		}

IL_0048:
		{
			// break;
			IL2CPP_LEAVE(0x66, FINALLY_005c);
		}

IL_004a:
		{
			// while ((read = source.Read(buffer, 0, buffer.Length)) > 0)
			RuntimeObject* L_20 = ___source1;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21 = V_1;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22 = V_1;
			NullCheck(L_22);
			NullCheck(L_20);
			int32_t L_23;
			L_23 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(0 /* System.Int32 CSCore.IReadableAudioSource`1<System.Byte>::Read(T[],System.Int32,System.Int32) */, IReadableAudioSource_1_tD492BCC588A82C5DA9F030AAF579ACDBEBA475D9_il2cpp_TypeInfo_var, L_20, L_21, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))));
			int32_t L_24 = L_23;
			V_3 = L_24;
			if ((((int32_t)L_24) > ((int32_t)0)))
			{
				goto IL_0033;
			}
		}

IL_005a:
		{
			// }
			IL2CPP_LEAVE(0x66, FINALLY_005c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005c;
	}

FINALLY_005c:
	{ // begin finally (depth: 1)
		{
			WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * L_25 = V_2;
			if (!L_25)
			{
				goto IL_0065;
			}
		}

IL_005f:
		{
			WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * L_26 = V_2;
			NullCheck(L_26);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_26);
		}

IL_0065:
		{
			IL2CPP_END_FINALLY(92)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(92)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x66, IL_0066)
	}

IL_0066:
	{
		// }
		return;
	}
}
// System.Void CSCore.Codecs.WAV.WaveWriter::WriteSample(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveWriter_WriteSample_mE7202510A15BF7A5DA68BF293A0F8828801A2205 (WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * __this, float ___sample0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// CheckObjectDisposed();
		WaveWriter_CheckObjectDisposed_mC899FA05AA92BD9B0D95D55F87BD728A2F5AF579(__this, /*hidden argument*/NULL);
		// if (sample < -1 || sample > 1)
		float L_0 = ___sample0;
		if ((((float)L_0) < ((float)(-1.0f))))
		{
			goto IL_0016;
		}
	}
	{
		float L_1 = ___sample0;
		if ((!(((float)L_1) > ((float)(1.0f)))))
		{
			goto IL_002d;
		}
	}

IL_0016:
	{
		// sample = Math.Max(-1, Math.Min(1, sample));
		float L_2 = ___sample0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		float L_3;
		L_3 = Math_Min_mED21323DC72FBF9A825FD4210D4B9D693CE87FCF((1.0f), L_2, /*hidden argument*/NULL);
		float L_4;
		L_4 = Math_Max_mEB87839DA28310AE4CB81A94D551874CFC2B1247((-1.0f), L_3, /*hidden argument*/NULL);
		___sample0 = L_4;
	}

IL_002d:
	{
		// if (_waveFormat.IsPCM())
		WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * L_5 = __this->get__waveFormat_0();
		bool L_6;
		L_6 = Extensions_IsPCM_m6045C7EA221CA3CB8CC26900DC1274B43B92367D(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_00d6;
		}
	}
	{
		// switch (_waveFormat.BitsPerSample)
		WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * L_7 = __this->get__waveFormat_0();
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 CSCore.WaveFormat::get_BitsPerSample() */, L_7);
		V_1 = L_8;
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) > ((int32_t)((int32_t)16))))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) == ((int32_t)8)))
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)16))))
		{
			goto IL_0074;
		}
	}
	{
		goto IL_00c1;
	}

IL_0059:
	{
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)24))))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)32))))
		{
			goto IL_00b2;
		}
	}
	{
		goto IL_00c1;
	}

IL_0065:
	{
		// Write((byte) (byte.MaxValue * sample));
		float L_14 = ___sample0;
		WaveWriter_Write_m7A083A4C06BDA88D4339546C75792CE4E181B5B2(__this, (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(((float)il2cpp_codegen_multiply((float)(255.0f), (float)L_14))), /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0074:
	{
		// Write((short) (short.MaxValue * sample));
		float L_15 = ___sample0;
		WaveWriter_Write_m0C3F4999A31F6012D211E434B4C18206343B41E0(__this, il2cpp_codegen_cast_double_to_int<int16_t>(((float)il2cpp_codegen_multiply((float)(32767.0f), (float)L_15))), /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0083:
	{
		// byte[] buffer = BitConverter.GetBytes((int)(0x7fffff * sample));
		float L_16 = ___sample0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17;
		L_17 = BitConverter_GetBytes_m5C926FE938C878F7E4E95A5DED46C34DB1431D39(il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply((float)(8388607.0f), (float)L_16))), /*hidden argument*/NULL);
		V_0 = L_17;
		// Write(new[] {buffer[0], buffer[1], buffer[2]}, 0, 3);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)3);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19 = L_18;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = 0;
		uint8_t L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_22);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23 = L_19;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_24 = V_0;
		NullCheck(L_24);
		int32_t L_25 = 1;
		uint8_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_26);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_27 = L_23;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_28 = V_0;
		NullCheck(L_28);
		int32_t L_29 = 2;
		uint8_t L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)L_30);
		WaveWriter_Write_m6921A0C01B62C67E2CC4FA7B01D987DE8AF505EF(__this, L_27, 0, 3, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00b2:
	{
		// Write((int) (int.MaxValue * sample));
		float L_31 = ___sample0;
		WaveWriter_Write_mBA12FC21CDCE1670EF461F7D9B3804860DADF81B(__this, il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply((float)(2.14748365E+09f), (float)L_31))), /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00c1:
	{
		// throw new InvalidOperationException("Invalid Waveformat",
		//     new InvalidOperationException("Invalid BitsPerSample while using PCM encoding."));
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_32 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_32, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8470C2083203D560B1F16CEFEA1D5201D87A52ED)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_33 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m4A65916B1316FBF45ECDF1FF7FAC9E3CA30C112C(L_33, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral279C64F70016117918AA0B635FDA988508E0BC1F)), L_32, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WaveWriter_WriteSample_mE7202510A15BF7A5DA68BF293A0F8828801A2205_RuntimeMethod_var)));
	}

IL_00d6:
	{
		// else if (_waveFormat.IsIeeeFloat())
		WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * L_34 = __this->get__waveFormat_0();
		bool L_35;
		L_35 = Extensions_IsIeeeFloat_m6C225166D896FE9206B3EF952427E7A3D085401C(L_34, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_00eb;
		}
	}
	{
		// Write(sample);
		float L_36 = ___sample0;
		WaveWriter_Write_mEB1E44B5E7118E85D542AFFE8755858A5A6C5F63(__this, L_36, /*hidden argument*/NULL);
		return;
	}

IL_00eb:
	{
		// else if (_waveFormat.WaveFormatTag == AudioEncoding.Extensible && _waveFormat.BitsPerSample == 32)
		WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * L_37 = __this->get__waveFormat_0();
		NullCheck(L_37);
		int16_t L_38;
		L_38 = VirtFuncInvoker0< int16_t >::Invoke(20 /* CSCore.AudioEncoding CSCore.WaveFormat::get_WaveFormatTag() */, L_37);
		if ((!(((uint32_t)L_38) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0118;
		}
	}
	{
		WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * L_39 = __this->get__waveFormat_0();
		NullCheck(L_39);
		int32_t L_40;
		L_40 = VirtFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 CSCore.WaveFormat::get_BitsPerSample() */, L_39);
		if ((!(((uint32_t)L_40) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_0118;
		}
	}
	{
		// Write(UInt16.MaxValue * (int)sample);
		float L_41 = ___sample0;
		WaveWriter_Write_mBA12FC21CDCE1670EF461F7D9B3804860DADF81B(__this, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)65535), (int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_41))), /*hidden argument*/NULL);
		return;
	}

IL_0118:
	{
		// throw new InvalidOperationException(
		//     "Invalid Waveformat: Waveformat has to be PCM[8, 16, 24, 32] or IeeeFloat[32]");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_42 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_42, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral92264EC1F57B9175A6DA68C478CB03DBE2C7BB71)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WaveWriter_WriteSample_mE7202510A15BF7A5DA68BF293A0F8828801A2205_RuntimeMethod_var)));
	}
}
// System.Void CSCore.Codecs.WAV.WaveWriter::WriteSamples(System.Single[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveWriter_WriteSamples_m467B2747EFDB5F7FDDEA8DED1520DE0CA1AC01BF (WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___samples0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// CheckObjectDisposed();
		WaveWriter_CheckObjectDisposed_mC899FA05AA92BD9B0D95D55F87BD728A2F5AF579(__this, /*hidden argument*/NULL);
		// for (int i = offset; i < offset + count; i++)
		int32_t L_0 = ___offset1;
		V_0 = L_0;
		goto IL_0017;
	}

IL_000a:
	{
		// WriteSample(samples[i]);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = ___samples0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		float L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		WaveWriter_WriteSample_mE7202510A15BF7A5DA68BF293A0F8828801A2205(__this, L_4, /*hidden argument*/NULL);
		// for (int i = offset; i < offset + count; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0017:
	{
		// for (int i = offset; i < offset + count; i++)
		int32_t L_6 = V_0;
		int32_t L_7 = ___offset1;
		int32_t L_8 = ___count2;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8)))))
		{
			goto IL_000a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CSCore.Codecs.WAV.WaveWriter::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveWriter_Write_m6921A0C01B62C67E2CC4FA7B01D987DE8AF505EF (WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		// CheckObjectDisposed();
		WaveWriter_CheckObjectDisposed_mC899FA05AA92BD9B0D95D55F87BD728A2F5AF579(__this, /*hidden argument*/NULL);
		// _stream.Write(buffer, offset, count);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get__stream_4();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___buffer0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___count2;
		NullCheck(L_0);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(30 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		// _dataLength += count;
		int32_t L_4 = __this->get__dataLength_2();
		int32_t L_5 = ___count2;
		__this->set__dataLength_2(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5)));
		// }
		return;
	}
}
// System.Void CSCore.Codecs.WAV.WaveWriter::Write(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveWriter_Write_m7A083A4C06BDA88D4339546C75792CE4E181B5B2 (WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		// CheckObjectDisposed();
		WaveWriter_CheckObjectDisposed_mC899FA05AA92BD9B0D95D55F87BD728A2F5AF579(__this, /*hidden argument*/NULL);
		// _writer.Write(value);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_0 = __this->get__writer_5();
		uint8_t L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< uint8_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_0, L_1);
		// _dataLength++;
		int32_t L_2 = __this->get__dataLength_2();
		__this->set__dataLength_2(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		// }
		return;
	}
}
// System.Void CSCore.Codecs.WAV.WaveWriter::Write(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveWriter_Write_m0C3F4999A31F6012D211E434B4C18206343B41E0 (WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * __this, int16_t ___value0, const RuntimeMethod* method)
{
	{
		// CheckObjectDisposed();
		WaveWriter_CheckObjectDisposed_mC899FA05AA92BD9B0D95D55F87BD728A2F5AF579(__this, /*hidden argument*/NULL);
		// _writer.Write(value);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_0 = __this->get__writer_5();
		int16_t L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< int16_t >::Invoke(15 /* System.Void System.IO.BinaryWriter::Write(System.Int16) */, L_0, L_1);
		// _dataLength += 2;
		int32_t L_2 = __this->get__dataLength_2();
		__this->set__dataLength_2(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)2)));
		// }
		return;
	}
}
// System.Void CSCore.Codecs.WAV.WaveWriter::Write(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveWriter_Write_mBA12FC21CDCE1670EF461F7D9B3804860DADF81B (WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// CheckObjectDisposed();
		WaveWriter_CheckObjectDisposed_mC899FA05AA92BD9B0D95D55F87BD728A2F5AF579(__this, /*hidden argument*/NULL);
		// _writer.Write(value);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_0 = __this->get__writer_5();
		int32_t L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< int32_t >::Invoke(17 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_0, L_1);
		// _dataLength += 4;
		int32_t L_2 = __this->get__dataLength_2();
		__this->set__dataLength_2(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)4)));
		// }
		return;
	}
}
// System.Void CSCore.Codecs.WAV.WaveWriter::Write(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveWriter_Write_mEB1E44B5E7118E85D542AFFE8755858A5A6C5F63 (WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// CheckObjectDisposed();
		WaveWriter_CheckObjectDisposed_mC899FA05AA92BD9B0D95D55F87BD728A2F5AF579(__this, /*hidden argument*/NULL);
		// _writer.Write(value);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_0 = __this->get__writer_5();
		float L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< float >::Invoke(21 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_0, L_1);
		// _dataLength += 4;
		int32_t L_2 = __this->get__dataLength_2();
		__this->set__dataLength_2(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)4)));
		// }
		return;
	}
}
// System.Void CSCore.Codecs.WAV.WaveWriter::WriteHeader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveWriter_WriteHeader_m0D77D86D414439F0AC482FBA9BFF5F59FDE4B4FD (WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * __this, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	{
		// _writer.Flush();
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_0 = __this->get__writer_5();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(7 /* System.Void System.IO.BinaryWriter::Flush() */, L_0);
		// long currentPosition = _stream.Position;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_1 = __this->get__stream_4();
		NullCheck(L_1);
		int64_t L_2;
		L_2 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_1);
		V_0 = L_2;
		// _stream.Position = _waveStartPosition;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_3 = __this->get__stream_4();
		int64_t L_4 = __this->get__waveStartPosition_1();
		NullCheck(L_3);
		VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_3, L_4);
		// WriteRiffHeader();
		WaveWriter_WriteRiffHeader_m2A8F407ABDBA6C595818EF5C1C37FCAFC63A6DB9(__this, /*hidden argument*/NULL);
		// WriteFmtChunk();
		WaveWriter_WriteFmtChunk_mD03D8A4213DA8BC5B56B78C7FC7EFDE25506C790(__this, /*hidden argument*/NULL);
		// WriteDataChunk();
		WaveWriter_WriteDataChunk_m984A0576E71B28E5EB170A6AC912D7D4D20AB8D8(__this, /*hidden argument*/NULL);
		// _writer.Flush();
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_5 = __this->get__writer_5();
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(7 /* System.Void System.IO.BinaryWriter::Flush() */, L_5);
		// _stream.Position = currentPosition;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_6 = __this->get__stream_4();
		int64_t L_7 = V_0;
		NullCheck(L_6);
		VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_6, L_7);
		// }
		return;
	}
}
// System.Void CSCore.Codecs.WAV.WaveWriter::WriteRiffHeader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveWriter_WriteRiffHeader_m2A8F407ABDBA6C595818EF5C1C37FCAFC63A6DB9 (WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54E6A56386072FAEC10025F380D0CC554BAC0758);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA77FDC67CD3D8A6113B858540BA409191CDF979E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _writer.Write(Encoding.UTF8.GetBytes("RIFF"));
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_0 = __this->get__writer_5();
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_1;
		L_1 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		NullCheck(L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_1, _stringLiteral54E6A56386072FAEC10025F380D0CC554BAC0758);
		NullCheck(L_0);
		VirtActionInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.Byte[]) */, L_0, L_2);
		// _writer.Write((int) (_stream.Length - 8));
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_3 = __this->get__writer_5();
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_4 = __this->get__stream_4();
		NullCheck(L_4);
		int64_t L_5;
		L_5 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_4);
		NullCheck(L_3);
		VirtActionInvoker1< int32_t >::Invoke(17 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_3, ((int32_t)((int32_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_5, (int64_t)((int64_t)((int64_t)8)))))));
		// _writer.Write(Encoding.UTF8.GetBytes("WAVE"));
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_6 = __this->get__writer_5();
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_7;
		L_7 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		NullCheck(L_7);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8;
		L_8 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_7, _stringLiteralA77FDC67CD3D8A6113B858540BA409191CDF979E);
		NullCheck(L_6);
		VirtActionInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.Byte[]) */, L_6, L_8);
		// }
		return;
	}
}
// System.Void CSCore.Codecs.WAV.WaveWriter::WriteFmtChunk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveWriter_WriteFmtChunk_mD03D8A4213DA8BC5B56B78C7FC7EFDE25506C790 (WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSubTypes_t387587BBC24943E82D65376FE3B0AD113C91B229_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6894A493D9B16556A8AF2157FE4DFA1C4747B3F);
		s_Il2CppMethodInitialized = true;
	}
	int16_t V_0 = 0;
	{
		// AudioEncoding tag = _waveFormat.WaveFormatTag;
		WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * L_0 = __this->get__waveFormat_0();
		NullCheck(L_0);
		int16_t L_1;
		L_1 = VirtFuncInvoker0< int16_t >::Invoke(20 /* CSCore.AudioEncoding CSCore.WaveFormat::get_WaveFormatTag() */, L_0);
		V_0 = L_1;
		// if (tag == AudioEncoding.Extensible && _waveFormat is WaveFormatExtensible)
		int16_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0034;
		}
	}
	{
		WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * L_3 = __this->get__waveFormat_0();
		if (!((WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060 *)IsInstClass((RuntimeObject*)L_3, WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060_il2cpp_TypeInfo_var)))
		{
			goto IL_0034;
		}
	}
	{
		// tag = AudioSubTypes.EncodingFromSubType((_waveFormat as WaveFormatExtensible).SubFormat);
		WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * L_4 = __this->get__waveFormat_0();
		NullCheck(((WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060 *)IsInstClass((RuntimeObject*)L_4, WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060_il2cpp_TypeInfo_var)));
		Guid_t  L_5;
		L_5 = WaveFormatExtensible_get_SubFormat_m3282EB3D7CD99F7A01F36150AD1FEB3548589D07_inline(((WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060 *)IsInstClass((RuntimeObject*)L_4, WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AudioSubTypes_t387587BBC24943E82D65376FE3B0AD113C91B229_il2cpp_TypeInfo_var);
		int16_t L_6;
		L_6 = AudioSubTypes_EncodingFromSubType_m73B32DC208BC8D72140497BB2951805B0A432A64(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
	}

IL_0034:
	{
		// _writer.Write(Encoding.UTF8.GetBytes("fmt "));
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_7 = __this->get__writer_5();
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_8;
		L_8 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		NullCheck(L_8);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9;
		L_9 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_8, _stringLiteralB6894A493D9B16556A8AF2157FE4DFA1C4747B3F);
		NullCheck(L_7);
		VirtActionInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.Byte[]) */, L_7, L_9);
		// _writer.Write((int)16);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_10 = __this->get__writer_5();
		NullCheck(L_10);
		VirtActionInvoker1< int32_t >::Invoke(17 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_10, ((int32_t)16));
		// _writer.Write((short) tag);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_11 = __this->get__writer_5();
		int16_t L_12 = V_0;
		NullCheck(L_11);
		VirtActionInvoker1< int16_t >::Invoke(15 /* System.Void System.IO.BinaryWriter::Write(System.Int16) */, L_11, L_12);
		// _writer.Write((short)_waveFormat.Channels);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_13 = __this->get__writer_5();
		WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * L_14 = __this->get__waveFormat_0();
		NullCheck(L_14);
		int32_t L_15;
		L_15 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 CSCore.WaveFormat::get_Channels() */, L_14);
		NullCheck(L_13);
		VirtActionInvoker1< int16_t >::Invoke(15 /* System.Void System.IO.BinaryWriter::Write(System.Int16) */, L_13, ((int16_t)((int16_t)L_15)));
		// _writer.Write((int)_waveFormat.SampleRate);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_16 = __this->get__writer_5();
		WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * L_17 = __this->get__waveFormat_0();
		NullCheck(L_17);
		int32_t L_18;
		L_18 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 CSCore.WaveFormat::get_SampleRate() */, L_17);
		NullCheck(L_16);
		VirtActionInvoker1< int32_t >::Invoke(17 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_16, L_18);
		// _writer.Write((int)_waveFormat.BytesPerSecond);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_19 = __this->get__writer_5();
		WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * L_20 = __this->get__waveFormat_0();
		NullCheck(L_20);
		int32_t L_21;
		L_21 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 CSCore.WaveFormat::get_BytesPerSecond() */, L_20);
		NullCheck(L_19);
		VirtActionInvoker1< int32_t >::Invoke(17 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_19, L_21);
		// _writer.Write((short) _waveFormat.BlockAlign);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_22 = __this->get__writer_5();
		WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * L_23 = __this->get__waveFormat_0();
		NullCheck(L_23);
		int32_t L_24;
		L_24 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 CSCore.WaveFormat::get_BlockAlign() */, L_23);
		NullCheck(L_22);
		VirtActionInvoker1< int16_t >::Invoke(15 /* System.Void System.IO.BinaryWriter::Write(System.Int16) */, L_22, ((int16_t)((int16_t)L_24)));
		// _writer.Write((short)_waveFormat.BitsPerSample);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_25 = __this->get__writer_5();
		WaveFormat_t02A17A03A0943544DF757584B63D70F78FF167FE * L_26 = __this->get__waveFormat_0();
		NullCheck(L_26);
		int32_t L_27;
		L_27 = VirtFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 CSCore.WaveFormat::get_BitsPerSample() */, L_26);
		NullCheck(L_25);
		VirtActionInvoker1< int16_t >::Invoke(15 /* System.Void System.IO.BinaryWriter::Write(System.Int16) */, L_25, ((int16_t)((int16_t)L_27)));
		// }
		return;
	}
}
// System.Void CSCore.Codecs.WAV.WaveWriter::WriteDataChunk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveWriter_WriteDataChunk_m984A0576E71B28E5EB170A6AC912D7D4D20AB8D8 (WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _writer.Write(Encoding.UTF8.GetBytes("data"));
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_0 = __this->get__writer_5();
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_1;
		L_1 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		NullCheck(L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_1, _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
		NullCheck(L_0);
		VirtActionInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.Byte[]) */, L_0, L_2);
		// _writer.Write(_dataLength);
		BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_3 = __this->get__writer_5();
		int32_t L_4 = __this->get__dataLength_2();
		NullCheck(L_3);
		VirtActionInvoker1< int32_t >::Invoke(17 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_3, L_4);
		// }
		return;
	}
}
// System.Void CSCore.Codecs.WAV.WaveWriter::CheckObjectDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveWriter_CheckObjectDisposed_mC899FA05AA92BD9B0D95D55F87BD728A2F5AF579 (WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * __this, const RuntimeMethod* method)
{
	{
		// if (_isDisposed)
		bool L_0 = __this->get__isDisposed_3();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ObjectDisposedException("WaveWriter");
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_1 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE4A4D7212490C3C6A621271276B8C26EBBBFC3A5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WaveWriter_CheckObjectDisposed_mC899FA05AA92BD9B0D95D55F87BD728A2F5AF579_RuntimeMethod_var)));
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void CSCore.Codecs.WAV.WaveWriter::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveWriter_Dispose_mF77BCE6EDA0C981EA9D6BC36E465FD21AAB670C4 (WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * __this, bool ___disposing0, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// if (_isDisposed) return;
		bool L_0 = __this->get__isDisposed_3();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (_isDisposed) return;
		return;
	}

IL_0009:
	{
		// if (!disposing) return;
		bool L_1 = ___disposing0;
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		// if (!disposing) return;
		return;
	}

IL_000d:
	{
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			// _isDisposing = true;
			__this->set__isDisposing_6((bool)1);
			// WriteHeader();
			WaveWriter_WriteHeader_m0D77D86D414439F0AC482FBA9BFF5F59FDE4B4FD(__this, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0x64, FINALLY_0020);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_001d;
			}
			throw e;
		}

CATCH_001d:
		{ // begin catch(System.Exception)
			// catch (Exception ex)
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			IL2CPP_LEAVE(0x64, FINALLY_0020);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0020;
	}

FINALLY_0020:
	{ // begin finally (depth: 1)
		{
			// if (_closeStream)
			bool L_2 = __this->get__closeStream_7();
			if (!L_2)
			{
				goto IL_005c;
			}
		}

IL_0028:
		{
			// if (_writer != null)
			BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_3 = __this->get__writer_5();
			if (!L_3)
			{
				goto IL_0042;
			}
		}

IL_0030:
		{
			// _writer.Close();
			BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_4 = __this->get__writer_5();
			NullCheck(L_4);
			VirtActionInvoker0::Invoke(5 /* System.Void System.IO.BinaryWriter::Close() */, L_4);
			// _writer = null;
			__this->set__writer_5((BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F *)NULL);
		}

IL_0042:
		{
			// if (_stream != null)
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_5 = __this->get__stream_4();
			if (!L_5)
			{
				goto IL_005c;
			}
		}

IL_004a:
		{
			// _stream.Dispose();
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_6 = __this->get__stream_4();
			NullCheck(L_6);
			Stream_Dispose_m117324084DDAD414761AD29FB17A419840BA6EA0(L_6, /*hidden argument*/NULL);
			// _stream = null;
			__this->set__stream_4((Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *)NULL);
		}

IL_005c:
		{
			// _isDisposing = false;
			__this->set__isDisposing_6((bool)0);
			// }
			IL2CPP_END_FINALLY(32)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(32)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x64, IL_0064)
	}

IL_0064:
	{
		// _isDisposed = true;
		__this->set__isDisposed_3((bool)1);
		// }
		return;
	}
}
// System.Void CSCore.Codecs.WAV.WaveWriter::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveWriter_Finalize_mBEAE47CA117462EBC50290D84C7F7EB4B70C019D (WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// Dispose(false);
		VirtActionInvoker1< bool >::Invoke(6 /* System.Void CSCore.Codecs.WAV.WaveWriter::Dispose(System.Boolean) */, __this, (bool)0);
		IL2CPP_LEAVE(0x10, FINALLY_0009);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0009;
	}

FINALLY_0009:
	{ // begin finally (depth: 1)
		// }
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(9)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(9)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x10, IL_0010)
	}

IL_0010:
	{
		// }
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
// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::get_AEC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_get_AEC_mB05CF42BFE79EAA373A27A24D1A6691546B9FA16 (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, const RuntimeMethod* method)
{
	{
		// get { return this.aec; }
		bool L_0 = __this->get_aec_8();
		return L_0;
	}
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::set_AEC(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_set_AEC_m3C9A4C44308635C406DECCEFEEB6838166469384 (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value == this.aec)
		bool L_0 = ___value0;
		bool L_1 = __this->get_aec_8();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// this.aec = value;
		bool L_2 = ___value0;
		__this->set_aec_8(L_2);
		// if (this.proc != null)
		WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * L_3 = __this->get_proc_18();
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// this.proc.AEC = this.aec;
		WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * L_4 = __this->get_proc_18();
		bool L_5 = __this->get_aec_8();
		NullCheck(L_4);
		WebRTCAudioProcessor_set_AEC_m51F1E3C68B0A48FE5F779726E5532FB5A4F08101(L_4, L_5, /*hidden argument*/NULL);
		// this.SetOutputListener();
		WebRtcAudioDsp_SetOutputListener_mC4F764E3FA8349BC825C69E7E3563C65A0AF84DC(__this, /*hidden argument*/NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::get_AECMobile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_get_AECMobile_m6DBCF7EA529FF6D7731F738DD4E2CEA8277B6343 (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, const RuntimeMethod* method)
{
	{
		// get { return this.AEC; }
		bool L_0;
		L_0 = WebRtcAudioDsp_get_AEC_mB05CF42BFE79EAA373A27A24D1A6691546B9FA16_inline(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::set_AECMobile(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_set_AECMobile_m437F95048412FEB7CCF5B4A066686730AE828771 (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// this.AEC = value;
		bool L_0 = ___value0;
		WebRtcAudioDsp_set_AEC_m3C9A4C44308635C406DECCEFEEB6838166469384(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::get_AecHighPass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_get_AecHighPass_m585B53C43189830D0D53CC6D83A0D83921A31899 (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, const RuntimeMethod* method)
{
	{
		// get { return this.aecHighPass; }
		bool L_0 = __this->get_aecHighPass_9();
		return L_0;
	}
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::set_AecHighPass(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_set_AecHighPass_m34F73C7085E53C15C93E138E9618B373336AD853 (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value == this.aecHighPass)
		bool L_0 = ___value0;
		bool L_1 = __this->get_aecHighPass_9();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// this.aecHighPass = value;
		bool L_2 = ___value0;
		__this->set_aecHighPass_9(L_2);
		// if (this.proc != null)
		WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * L_3 = __this->get_proc_18();
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// this.proc.AECHighPass = this.aecHighPass;
		WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * L_4 = __this->get_proc_18();
		bool L_5 = __this->get_aecHighPass_9();
		NullCheck(L_4);
		WebRTCAudioProcessor_set_AECHighPass_m3DCA68120D367AF8DB61DF7CA9E9F76BDC670151(L_4, L_5, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Int32 Photon.Voice.Unity.WebRtcAudioDsp::get_ReverseStreamDelayMs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebRtcAudioDsp_get_ReverseStreamDelayMs_mFDCE64215636A31CC5F2BF1F22B2628187F2DBF2 (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, const RuntimeMethod* method)
{
	{
		// get { return this.reverseStreamDelayMs; }
		int32_t L_0 = __this->get_reverseStreamDelayMs_16();
		return L_0;
	}
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::set_ReverseStreamDelayMs(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_set_ReverseStreamDelayMs_m146B739EE40CCF569AB40981EF47A36A9D5EEE8D (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// if (this.reverseStreamDelayMs == value)
		int32_t L_0 = __this->get_reverseStreamDelayMs_16();
		int32_t L_1 = ___value0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// this.reverseStreamDelayMs = value;
		int32_t L_2 = ___value0;
		__this->set_reverseStreamDelayMs_16(L_2);
		// if (this.proc != null)
		WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * L_3 = __this->get_proc_18();
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// this.proc.AECStreamDelayMs = this.reverseStreamDelayMs;
		WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * L_4 = __this->get_proc_18();
		int32_t L_5 = __this->get_reverseStreamDelayMs_16();
		NullCheck(L_4);
		WebRTCAudioProcessor_set_AECStreamDelayMs_m0DEEC01E48882EC49754890EA2E5B4092F61696C(L_4, L_5, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::get_NoiseSuppression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_get_NoiseSuppression_mC268C33BC569E226F63FBBB5F4D8B3F9D577E4D0 (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, const RuntimeMethod* method)
{
	{
		// get { return this.noiseSuppression; }
		bool L_0 = __this->get_noiseSuppression_15();
		return L_0;
	}
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::set_NoiseSuppression(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_set_NoiseSuppression_m0EC1DE10417E892B28F5A77777E8371E04EC4860 (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value == this.noiseSuppression)
		bool L_0 = ___value0;
		bool L_1 = __this->get_noiseSuppression_15();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// this.noiseSuppression = value;
		bool L_2 = ___value0;
		__this->set_noiseSuppression_15(L_2);
		// if (this.proc != null)
		WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * L_3 = __this->get_proc_18();
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// this.proc.NoiseSuppression = this.noiseSuppression;
		WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * L_4 = __this->get_proc_18();
		bool L_5 = __this->get_noiseSuppression_15();
		NullCheck(L_4);
		WebRTCAudioProcessor_set_NoiseSuppression_m598056A57F709D929138D33246350C7F2C063C5C(L_4, L_5, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::get_HighPass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_get_HighPass_m98DBA4096D359097A33A39CEC6EC6B3B823BAC75 (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, const RuntimeMethod* method)
{
	{
		// get { return this.highPass; }
		bool L_0 = __this->get_highPass_13();
		return L_0;
	}
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::set_HighPass(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_set_HighPass_m837639BF8BE650A97FA3158FD06AF3562E532F15 (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value == this.highPass)
		bool L_0 = ___value0;
		bool L_1 = __this->get_highPass_13();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// this.highPass = value;
		bool L_2 = ___value0;
		__this->set_highPass_13(L_2);
		// if (this.proc != null)
		WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * L_3 = __this->get_proc_18();
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// this.proc.HighPass = this.highPass;
		WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * L_4 = __this->get_proc_18();
		bool L_5 = __this->get_highPass_13();
		NullCheck(L_4);
		WebRTCAudioProcessor_set_HighPass_mBF7F380CC3315AD8263B1009CDC540E0D27885A1(L_4, L_5, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::get_Bypass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_get_Bypass_m4D858D3E455AB4FE00C4D2E63D41C51EC1B62FE9 (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, const RuntimeMethod* method)
{
	{
		// get { return this.bypass; }
		bool L_0 = __this->get_bypass_14();
		return L_0;
	}
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::set_Bypass(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_set_Bypass_m6AD1CDDC2496DBE2BB0D2E472C3F73C0C28D464C (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value == this.bypass)
		bool L_0 = ___value0;
		bool L_1 = __this->get_bypass_14();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// this.bypass = value;
		bool L_2 = ___value0;
		__this->set_bypass_14(L_2);
		// if (this.proc != null)
		WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * L_3 = __this->get_proc_18();
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// this.proc.Bypass = this.bypass;
		WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * L_4 = __this->get_proc_18();
		bool L_5 = __this->get_bypass_14();
		NullCheck(L_4);
		WebRTCAudioProcessor_set_Bypass_m07BC2EC73ABFF4701F80E4F585CF570129258394(L_4, L_5, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::get_AGC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_get_AGC_m60269155FC6F390E1E17F097B6D3526C5BA91EEF (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, const RuntimeMethod* method)
{
	{
		// get { return this.agc; }
		bool L_0 = __this->get_agc_10();
		return L_0;
	}
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::set_AGC(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_set_AGC_mC284C5E752CC6CA8AA5080C91F01FAA9430E55E4 (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value == this.agc)
		bool L_0 = ___value0;
		bool L_1 = __this->get_agc_10();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// this.agc = value;
		bool L_2 = ___value0;
		__this->set_agc_10(L_2);
		// if (this.proc != null)
		WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * L_3 = __this->get_proc_18();
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// this.proc.AGC = this.agc;
		WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * L_4 = __this->get_proc_18();
		bool L_5 = __this->get_agc_10();
		NullCheck(L_4);
		WebRTCAudioProcessor_set_AGC_m52E96C7FC547804777BE7EB469EB20B85C141C70(L_4, L_5, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Int32 Photon.Voice.Unity.WebRtcAudioDsp::get_AgcCompressionGain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebRtcAudioDsp_get_AgcCompressionGain_mCA185CB9FBCDC1B4B9DE6F2A49FFFF0C6D0D382D (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, const RuntimeMethod* method)
{
	{
		// return this.agcCompressionGain;
		int32_t L_0 = __this->get_agcCompressionGain_11();
		return L_0;
	}
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::set_AgcCompressionGain(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_set_AgcCompressionGain_m157E4F672F8934478C84EE878F3738D736EE83F7 (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA675FD7E084C60149090EA0F7581C546D1CFFF3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.agcCompressionGain == value)
		int32_t L_0 = __this->get_agcCompressionGain_11();
		int32_t L_1 = ___value0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// if (value < 0 || value > 90)
		int32_t L_2 = ___value0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_3 = ___value0;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)90))))
		{
			goto IL_0040;
		}
	}

IL_0013:
	{
		// if (this.Logger.IsErrorEnabled)
		VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * L_4;
		L_4 = VoiceComponent_get_Logger_m717530977455A514654497216C9B16FA3A2CA8F9(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = VoiceLogger_get_IsErrorEnabled_m9DDE69FBB3AC4741138E105DB300F25CAD60FEE4(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		// this.Logger.LogError("AgcCompressionGain value {0} not in range [0..90]", value);
		VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * L_6;
		L_6 = VoiceComponent_get_Logger_m717530977455A514654497216C9B16FA3A2CA8F9(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_7;
		int32_t L_9 = ___value0;
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_11);
		NullCheck(L_6);
		VoiceLogger_LogError_m4E551D12B4D33B783B15EA33B7646B8905FC4DFA(L_6, _stringLiteralAA675FD7E084C60149090EA0F7581C546D1CFFF3, L_8, /*hidden argument*/NULL);
	}

IL_003f:
	{
		// return;
		return;
	}

IL_0040:
	{
		// this.agcCompressionGain = value;
		int32_t L_12 = ___value0;
		__this->set_agcCompressionGain_11(L_12);
		// if (this.proc != null)
		WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * L_13 = __this->get_proc_18();
		if (!L_13)
		{
			goto IL_0060;
		}
	}
	{
		// this.proc.AGCCompressionGain = this.agcCompressionGain;
		WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * L_14 = __this->get_proc_18();
		int32_t L_15 = __this->get_agcCompressionGain_11();
		NullCheck(L_14);
		WebRTCAudioProcessor_set_AGCCompressionGain_mCEB0F606CF30A7F4E2E4F7D600DE8392378DA1AC(L_14, L_15, /*hidden argument*/NULL);
	}

IL_0060:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::get_VAD()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_get_VAD_m625955D0357E4CEF72FA553B0CC04F2C45E3D408 (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, const RuntimeMethod* method)
{
	{
		// get { return this.vad; }
		bool L_0 = __this->get_vad_12();
		return L_0;
	}
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::set_VAD(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_set_VAD_m64BB9E2B82B4A5ECBFC6A60CABC04EABB3C89794 (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value == this.vad)
		bool L_0 = ___value0;
		bool L_1 = __this->get_vad_12();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// this.vad = value;
		bool L_2 = ___value0;
		__this->set_vad_12(L_2);
		// if (this.proc != null)
		WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * L_3 = __this->get_proc_18();
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// this.proc.VAD = this.vad;
		WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * L_4 = __this->get_proc_18();
		bool L_5 = __this->get_vad_12();
		NullCheck(L_4);
		WebRTCAudioProcessor_set_VAD_m39E6515DC42CBA9AB3178799133AA81725C14941(L_4, L_5, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::get_ForceNormalAecInMobile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_get_ForceNormalAecInMobile_m6C27252EE0C71F90C126102D5C75FE409B3714E0 (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, const RuntimeMethod* method)
{
	{
		// get { return this.forceNormalAecInMobile; }
		bool L_0 = __this->get_forceNormalAecInMobile_25();
		return L_0;
	}
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::set_ForceNormalAecInMobile(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_set_ForceNormalAecInMobile_mF207773988945C7C1F6D2344FFD00DDDA1125076 (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { this.forceNormalAecInMobile = value; }
		bool L_0 = ___value0;
		__this->set_forceNormalAecInMobile_25(L_0);
		// set { this.forceNormalAecInMobile = value; }
		return;
	}
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_Awake_mFCD18740DE0BFAA143CC56854F2E0B3F930ACC30 (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRecorder_t13D849D3581771415EF2D39F877106A1AC72C6C5_m96A9AD1EED671D74A2A953BBFFA2D59C945D1A50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisAudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3_mE26B0252D015A176BAFBCF1462E9EC486096B077_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54C4B482D4C19821F25A06409CAE0DE30F08A0DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8B0691EAD0DB78080EF44293EC0B1062BAA699B);
		s_Il2CppMethodInitialized = true;
	}
	AudioListenerU5BU5D_t2A138F4AC29631456727A4F715E9917778D250BF* V_0 = NULL;
	AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		// base.Awake();
		VoiceComponent_Awake_m532120EDDDE534D65DFB49F9E2024A73F081F8E8(__this, /*hidden argument*/NULL);
		// if (this.SupportedPlatformCheck())
		bool L_0;
		L_0 = WebRtcAudioDsp_SupportedPlatformCheck_m81B45ED0E9BEF0E785B7316110E89F3CB3B3AA3D(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_00d6;
		}
	}
	{
		// this.recorder = this.GetComponent<Recorder>();
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_1;
		L_1 = Component_GetComponent_TisRecorder_t13D849D3581771415EF2D39F877106A1AC72C6C5_m96A9AD1EED671D74A2A953BBFFA2D59C945D1A50(__this, /*hidden argument*/Component_GetComponent_TisRecorder_t13D849D3581771415EF2D39F877106A1AC72C6C5_m96A9AD1EED671D74A2A953BBFFA2D59C945D1A50_RuntimeMethod_var);
		__this->set_recorder_24(L_1);
		// if (this.recorder == null)
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_2 = __this->get_recorder_24();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0055;
		}
	}
	{
		// if (this.Logger.IsErrorEnabled)
		VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * L_4;
		L_4 = VoiceComponent_get_Logger_m717530977455A514654497216C9B16FA3A2CA8F9(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = VoiceLogger_get_IsErrorEnabled_m9DDE69FBB3AC4741138E105DB300F25CAD60FEE4(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004d;
		}
	}
	{
		// this.Logger.LogError("A Recorder component needs to be attached to the same GameObject");
		VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * L_6;
		L_6 = VoiceComponent_get_Logger_m717530977455A514654497216C9B16FA3A2CA8F9(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7;
		L_7 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_6);
		VoiceLogger_LogError_m4E551D12B4D33B783B15EA33B7646B8905FC4DFA(L_6, _stringLiteralC8B0691EAD0DB78080EF44293EC0B1062BAA699B, L_7, /*hidden argument*/NULL);
	}

IL_004d:
	{
		// this.enabled = false;
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(__this, (bool)0, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0055:
	{
		// if (!this.IgnoreGlobalLogLevel)
		bool L_8;
		L_8 = VoiceComponent_get_IgnoreGlobalLogLevel_mF798F8DE0F44EEB28F26A518299A7E4FA80DF80F_inline(__this, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_006e;
		}
	}
	{
		// this.LogLevel = this.recorder.LogLevel;
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_9 = __this->get_recorder_24();
		NullCheck(L_9);
		uint8_t L_10;
		L_10 = VoiceComponent_get_LogLevel_m1BCCBB696F14AB1F61A8A046D1F04EF04BFC58BA(L_9, /*hidden argument*/NULL);
		VoiceComponent_set_LogLevel_m7762AAD3521A2852C266F724F2A675E93691DEAC(__this, L_10, /*hidden argument*/NULL);
	}

IL_006e:
	{
		// AudioListener[] audioListeners = FindObjectsOfType<AudioListener>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		AudioListenerU5BU5D_t2A138F4AC29631456727A4F715E9917778D250BF* L_11;
		L_11 = Object_FindObjectsOfType_TisAudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3_mE26B0252D015A176BAFBCF1462E9EC486096B077(/*hidden argument*/Object_FindObjectsOfType_TisAudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3_mE26B0252D015A176BAFBCF1462E9EC486096B077_RuntimeMethod_var);
		V_0 = L_11;
		// AudioListener audioListener = null;
		V_1 = (AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3 *)NULL;
		// for(int i=0; i < audioListeners.Length; i++)
		V_2 = 0;
		goto IL_009d;
	}

IL_007a:
	{
		// if (audioListeners[i].gameObject.activeInHierarchy && audioListeners[i].enabled)
		AudioListenerU5BU5D_t2A138F4AC29631456727A4F715E9917778D250BF* L_12 = V_0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3 * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		bool L_17;
		L_17 = GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B(L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0099;
		}
	}
	{
		AudioListenerU5BU5D_t2A138F4AC29631456727A4F715E9917778D250BF* L_18 = V_0;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3 * L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		bool L_22;
		L_22 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0099;
		}
	}
	{
		// audioListener = audioListeners[i];
		AudioListenerU5BU5D_t2A138F4AC29631456727A4F715E9917778D250BF* L_23 = V_0;
		int32_t L_24 = V_2;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3 * L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_1 = L_26;
		// break;
		goto IL_00a3;
	}

IL_0099:
	{
		// for(int i=0; i < audioListeners.Length; i++)
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_009d:
	{
		// for(int i=0; i < audioListeners.Length; i++)
		int32_t L_28 = V_2;
		AudioListenerU5BU5D_t2A138F4AC29631456727A4F715E9917778D250BF* L_29 = V_0;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length))))))
		{
			goto IL_007a;
		}
	}

IL_00a3:
	{
		// if (!this.SetOrSwitchAudioListener(audioListener, false))
		AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3 * L_30 = V_1;
		bool L_31;
		L_31 = WebRtcAudioDsp_SetOrSwitchAudioListener_m9E16F90EF10546AB436D4F7ABB1C174E35CAA116(__this, L_30, (bool)0, /*hidden argument*/NULL);
		if (L_31)
		{
			goto IL_00d6;
		}
	}
	{
		// if (this.Logger.IsErrorEnabled)
		VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * L_32;
		L_32 = VoiceComponent_get_Logger_m717530977455A514654497216C9B16FA3A2CA8F9(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = VoiceLogger_get_IsErrorEnabled_m9DDE69FBB3AC4741138E105DB300F25CAD60FEE4(L_32, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_00cf;
		}
	}
	{
		// this.Logger.LogError("AudioListener and AudioOutCapture components are required");
		VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * L_34;
		L_34 = VoiceComponent_get_Logger_m717530977455A514654497216C9B16FA3A2CA8F9(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_35;
		L_35 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_34);
		VoiceLogger_LogError_m4E551D12B4D33B783B15EA33B7646B8905FC4DFA(L_34, _stringLiteral54C4B482D4C19821F25A06409CAE0DE30F08A0DF, L_35, /*hidden argument*/NULL);
	}

IL_00cf:
	{
		// this.enabled = false;
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_00d6:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_OnEnable_mE6F1E5BC4865101AA09E5B5B856F05FB60418BCB (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral810BD0BFF6AD23CFDD7460BDEB72ABFF8D703521);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.SupportedPlatformCheck() && this.recorder.IsRecording && this.proc == null)
		bool L_0;
		L_0 = WebRtcAudioDsp_SupportedPlatformCheck_m81B45ED0E9BEF0E785B7316110E89F3CB3B3AA3D(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0051;
		}
	}
	{
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_1 = __this->get_recorder_24();
		NullCheck(L_1);
		bool L_2;
		L_2 = Recorder_get_IsRecording_mAD773CEB5B194C4A1C22FE2B468EF4528759B2BF_inline(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0051;
		}
	}
	{
		WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * L_3 = __this->get_proc_18();
		if (L_3)
		{
			goto IL_0051;
		}
	}
	{
		// if (this.Logger.IsWarningEnabled)
		VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * L_4;
		L_4 = VoiceComponent_get_Logger_m717530977455A514654497216C9B16FA3A2CA8F9(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = VoiceLogger_get_IsWarningEnabled_m21C2819F64E3855C798E61E777904E77A0BC2560(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		// this.Logger.LogWarning("WebRtcAudioDsp is added after recording has started, restarting recording to take effect");
		VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * L_6;
		L_6 = VoiceComponent_get_Logger_m717530977455A514654497216C9B16FA3A2CA8F9(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7;
		L_7 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_6);
		VoiceLogger_LogWarning_mED72C8846BB2AEF1CF9FA9F78E4EFD39DE7BABAB(L_6, _stringLiteral810BD0BFF6AD23CFDD7460BDEB72ABFF8D703521, L_7, /*hidden argument*/NULL);
	}

IL_003f:
	{
		// this.recorder.RestartRecording(true);
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_8 = __this->get_recorder_24();
		NullCheck(L_8);
		Recorder_RestartRecording_m3AE814FC469914FCEBC90D18713DE5AAC1FAF75D(L_8, (bool)1, /*hidden argument*/NULL);
		// this.SetOutputListener();
		WebRtcAudioDsp_SetOutputListener_mC4F764E3FA8349BC825C69E7E3563C65A0AF84DC(__this, /*hidden argument*/NULL);
	}

IL_0051:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_OnDisable_m78B7D9576F123D3F1E53329D2299002AD2A50319 (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, const RuntimeMethod* method)
{
	{
		// this.SetOutputListener(false);
		WebRtcAudioDsp_SetOutputListener_m3928F9126CF47FFE4D1942E34763F64B9664693E(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::SupportedPlatformCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_SupportedPlatformCheck_m81B45ED0E9BEF0E785B7316110E89F3CB3B3AA3D (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, const RuntimeMethod* method)
{
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::SetOutputListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_SetOutputListener_mC4F764E3FA8349BC825C69E7E3563C65A0AF84DC (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, const RuntimeMethod* method)
{
	{
		// this.SetOutputListener(this.AEC);
		bool L_0;
		L_0 = WebRtcAudioDsp_get_AEC_mB05CF42BFE79EAA373A27A24D1A6691546B9FA16_inline(__this, /*hidden argument*/NULL);
		WebRtcAudioDsp_SetOutputListener_m3928F9126CF47FFE4D1942E34763F64B9664693E(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::SetOutputListener(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_SetOutputListener_m3928F9126CF47FFE4D1942E34763F64B9664693E (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, bool ___on0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2__ctor_mAA299B31188542B6B8B367176DD466B67AE94C2C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t8D838F0E0114B7032B25FE8B8E8AE4CE85AB106E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRtcAudioDsp_OnAudioOutFrameFloat_m095C4BFF6571F02764D7C4318AB7B08D8C650C83_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.ac != null && this.started != on && this.proc != null)
		AudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA * L_0 = __this->get_ac_19();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_005f;
		}
	}
	{
		bool L_2 = __this->get_started_20();
		bool L_3 = ___on0;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_005f;
		}
	}
	{
		WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * L_4 = __this->get_proc_18();
		if (!L_4)
		{
			goto IL_005f;
		}
	}
	{
		// if (on)
		bool L_5 = ___on0;
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		// this.started = true;
		__this->set_started_20((bool)1);
		// this.ac.OnAudioFrame += this.OnAudioOutFrameFloat;
		AudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA * L_6 = __this->get_ac_19();
		Action_2_t8D838F0E0114B7032B25FE8B8E8AE4CE85AB106E * L_7 = (Action_2_t8D838F0E0114B7032B25FE8B8E8AE4CE85AB106E *)il2cpp_codegen_object_new(Action_2_t8D838F0E0114B7032B25FE8B8E8AE4CE85AB106E_il2cpp_TypeInfo_var);
		Action_2__ctor_mAA299B31188542B6B8B367176DD466B67AE94C2C(L_7, __this, (intptr_t)((intptr_t)WebRtcAudioDsp_OnAudioOutFrameFloat_m095C4BFF6571F02764D7C4318AB7B08D8C650C83_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mAA299B31188542B6B8B367176DD466B67AE94C2C_RuntimeMethod_var);
		NullCheck(L_6);
		AudioOutCapture_add_OnAudioFrame_mE26209A50707DD43410526EDB84147C01A596CFA(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0041:
	{
		// this.started = false;
		__this->set_started_20((bool)0);
		// this.ac.OnAudioFrame -= this.OnAudioOutFrameFloat;
		AudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA * L_8 = __this->get_ac_19();
		Action_2_t8D838F0E0114B7032B25FE8B8E8AE4CE85AB106E * L_9 = (Action_2_t8D838F0E0114B7032B25FE8B8E8AE4CE85AB106E *)il2cpp_codegen_object_new(Action_2_t8D838F0E0114B7032B25FE8B8E8AE4CE85AB106E_il2cpp_TypeInfo_var);
		Action_2__ctor_mAA299B31188542B6B8B367176DD466B67AE94C2C(L_9, __this, (intptr_t)((intptr_t)WebRtcAudioDsp_OnAudioOutFrameFloat_m095C4BFF6571F02764D7C4318AB7B08D8C650C83_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mAA299B31188542B6B8B367176DD466B67AE94C2C_RuntimeMethod_var);
		NullCheck(L_8);
		AudioOutCapture_remove_OnAudioFrame_m98DDEBB14D6B9E3CA09320073621C12C72946AC2(L_8, L_9, /*hidden argument*/NULL);
	}

IL_005f:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::OnAudioOutFrameFloat(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_OnAudioOutFrameFloat_m095C4BFF6571F02764D7C4318AB7B08D8C650C83 (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___data0, int32_t ___outChannels1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B36E90C0F7A5F8FCD9EFA472B91764EA02AF55B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (outChannels != this.reverseChannels)
		int32_t L_0 = ___outChannels1;
		int32_t L_1 = __this->get_reverseChannels_17();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0050;
		}
	}
	{
		// if (this.Logger.IsErrorEnabled)
		VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * L_2;
		L_2 = VoiceComponent_get_Logger_m717530977455A514654497216C9B16FA3A2CA8F9(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = VoiceLogger_get_IsErrorEnabled_m9DDE69FBB3AC4741138E105DB300F25CAD60FEE4(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0043;
		}
	}
	{
		// this.Logger.LogError("OnAudioOutFrame channel count {0} != initialized {1}.  Switching channels and restarting.", outChannels, this.reverseChannels);
		VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * L_4;
		L_4 = VoiceComponent_get_Logger_m717530977455A514654497216C9B16FA3A2CA8F9(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_5;
		int32_t L_7 = ___outChannels1;
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_9);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = L_6;
		int32_t L_11 = __this->get_reverseChannels_17();
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_13);
		NullCheck(L_4);
		VoiceLogger_LogError_m4E551D12B4D33B783B15EA33B7646B8905FC4DFA(L_4, _stringLiteral9B36E90C0F7A5F8FCD9EFA472B91764EA02AF55B, L_10, /*hidden argument*/NULL);
	}

IL_0043:
	{
		// this.reverseChannels = outChannels;
		int32_t L_14 = ___outChannels1;
		__this->set_reverseChannels_17(L_14);
		// this.Restart();
		WebRtcAudioDsp_Restart_mA476BFEF6F215580288766C858A8387AB636C376(__this, /*hidden argument*/NULL);
	}

IL_0050:
	{
		// this.proc.OnAudioOutFrameFloat(data);
		WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * L_15 = __this->get_proc_18();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_16 = ___data0;
		NullCheck(L_15);
		WebRTCAudioProcessor_OnAudioOutFrameFloat_mB2168A5FE9231C28E94816FDC5A239F0C7BAD23D(L_15, L_16, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::PhotonVoiceCreated(Photon.Voice.Unity.PhotonVoiceCreatedParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_PhotonVoiceCreated_m06C2B9D0AB0EA2FE0AB4A23C5CABB53D9A396BED (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, PhotonVoiceCreatedParams_t2016E70662CD6C4DC00630565940783AC2469E7D * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m6957DC2E75D0B9CE32C3DC32C6E17827900A60A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProcessor_1U5BU5D_t2656DF3002F88FC13E29BAAAFCA22E66CD9C6A89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalVoiceAudioShort_t56CE89CCE80B89C0BAD1A35C1F5A5DC847C5068B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalVoiceFramed_1_AddPostProcessor_mEE8DCCE80B216507E7DD7991B440642B406854EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12DB585CD7C58149D9E30B1F88C95AA55FCFC680);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral372D14DC592FE769508A94BB7820383A49392C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E1EA8DBE5828E8E17967D6D09A2C48972EF05BB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF608C0DDC1F21E4E864F9E091CE20228D79F93B2);
		s_Il2CppMethodInitialized = true;
	}
	VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!this.enabled)
		bool L_0;
		L_0 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(__this, /*hidden argument*/NULL);
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
		// if (this.recorder != null && this.recorder.SourceType != Recorder.InputSourceType.Microphone)
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_1 = __this->get_recorder_24();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0046;
		}
	}
	{
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_3 = __this->get_recorder_24();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Recorder_get_SourceType_m53055CFC105940ED013D9008DB0F3E68A8ED858A_inline(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0046;
		}
	}
	{
		// if (this.Logger.IsWarningEnabled)
		VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * L_5;
		L_5 = VoiceComponent_get_Logger_m717530977455A514654497216C9B16FA3A2CA8F9(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = VoiceLogger_get_IsWarningEnabled_m21C2819F64E3855C798E61E777904E77A0BC2560(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		// this.Logger.LogWarning("WebRtcAudioDsp is better suited to be used with Microphone as Recorder Input Source Type.");
		VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * L_7;
		L_7 = VoiceComponent_get_Logger_m717530977455A514654497216C9B16FA3A2CA8F9(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8;
		L_8 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_7);
		VoiceLogger_LogWarning_mED72C8846BB2AEF1CF9FA9F78E4EFD39DE7BABAB(L_7, _stringLiteral372D14DC592FE769508A94BB7820383A49392C30, L_8, /*hidden argument*/NULL);
	}

IL_0046:
	{
		// this.localVoice = p.Voice;
		PhotonVoiceCreatedParams_t2016E70662CD6C4DC00630565940783AC2469E7D * L_9 = ___p0;
		NullCheck(L_9);
		LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * L_10;
		L_10 = PhotonVoiceCreatedParams_get_Voice_mDCDA2C8A276052F03DAADA4A0EBF17A132865EF0_inline(L_9, /*hidden argument*/NULL);
		__this->set_localVoice_22(L_10);
		// if (this.localVoice.Info.Channels != 1)
		LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * L_11 = __this->get_localVoice_22();
		NullCheck(L_11);
		VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  L_12;
		L_12 = LocalVoice_get_Info_m1996B4F7A27EF2E408C0C0DE7BAED51524FA477B_inline(L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		int32_t L_13;
		L_13 = VoiceInfo_get_Channels_m0631BE3D0B3BB065D07F43C8F093935B5CBBA419_inline((VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 *)(&V_0), /*hidden argument*/NULL);
		if ((((int32_t)L_13) == ((int32_t)1)))
		{
			goto IL_0092;
		}
	}
	{
		// if (this.Logger.IsErrorEnabled)
		VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * L_14;
		L_14 = VoiceComponent_get_Logger_m717530977455A514654497216C9B16FA3A2CA8F9(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		bool L_15;
		L_15 = VoiceLogger_get_IsErrorEnabled_m9DDE69FBB3AC4741138E105DB300F25CAD60FEE4(L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_008a;
		}
	}
	{
		// this.Logger.LogError("Only mono audio signals supported.");
		VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * L_16;
		L_16 = VoiceComponent_get_Logger_m717530977455A514654497216C9B16FA3A2CA8F9(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17;
		L_17 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_16);
		VoiceLogger_LogError_m4E551D12B4D33B783B15EA33B7646B8905FC4DFA(L_16, _stringLiteral6E1EA8DBE5828E8E17967D6D09A2C48972EF05BB, L_17, /*hidden argument*/NULL);
	}

IL_008a:
	{
		// this.enabled = false;
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(__this, (bool)0, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0092:
	{
		// if (!(this.localVoice is LocalVoiceAudioShort))
		LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * L_18 = __this->get_localVoice_22();
		if (((LocalVoiceAudioShort_t56CE89CCE80B89C0BAD1A35C1F5A5DC847C5068B *)IsInstClass((RuntimeObject*)L_18, LocalVoiceAudioShort_t56CE89CCE80B89C0BAD1A35C1F5A5DC847C5068B_il2cpp_TypeInfo_var)))
		{
			goto IL_00c9;
		}
	}
	{
		// if (this.Logger.IsErrorEnabled)
		VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * L_19;
		L_19 = VoiceComponent_get_Logger_m717530977455A514654497216C9B16FA3A2CA8F9(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		bool L_20;
		L_20 = VoiceLogger_get_IsErrorEnabled_m9DDE69FBB3AC4741138E105DB300F25CAD60FEE4(L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00c1;
		}
	}
	{
		// this.Logger.LogError("Only short audio voice supported.");
		VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * L_21;
		L_21 = VoiceComponent_get_Logger_m717530977455A514654497216C9B16FA3A2CA8F9(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_22;
		L_22 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_21);
		VoiceLogger_LogError_m4E551D12B4D33B783B15EA33B7646B8905FC4DFA(L_21, _stringLiteralF608C0DDC1F21E4E864F9E091CE20228D79F93B2, L_22, /*hidden argument*/NULL);
	}

IL_00c1:
	{
		// this.enabled = false;
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(__this, (bool)0, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_00c9:
	{
		// this.reverseChannels = channelsMap[AudioSettings.speakerMode];
		IL2CPP_RUNTIME_CLASS_INIT(WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016_il2cpp_TypeInfo_var);
		Dictionary_2_tD85316D462101B4F7AD52B74B47D50D1A8CC0DBC * L_23 = ((WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016_StaticFields*)il2cpp_codegen_static_fields_for(WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016_il2cpp_TypeInfo_var))->get_channelsMap_21();
		int32_t L_24;
		L_24 = AudioSettings_get_speakerMode_m370CC6ACE985EBC0DF2023D6F05C4D9FFF7747AD(/*hidden argument*/NULL);
		NullCheck(L_23);
		int32_t L_25;
		L_25 = Dictionary_2_get_Item_m6957DC2E75D0B9CE32C3DC32C6E17827900A60A8(L_23, L_24, /*hidden argument*/Dictionary_2_get_Item_m6957DC2E75D0B9CE32C3DC32C6E17827900A60A8_RuntimeMethod_var);
		__this->set_reverseChannels_17(L_25);
		// this.outputSampleRate = AudioSettings.outputSampleRate;
		int32_t L_26;
		L_26 = AudioSettings_get_outputSampleRate_mF694C528E77284914F1F8F7CA804BD9ECD0D33BE(/*hidden argument*/NULL);
		__this->set_outputSampleRate_23(L_26);
		// this.Init();
		WebRtcAudioDsp_Init_m3FE00D6A67E56C6A007970C72EA2E63AB9A713C7(__this, /*hidden argument*/NULL);
		// LocalVoiceAudioShort v = this.localVoice as LocalVoiceAudioShort;
		LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * L_27 = __this->get_localVoice_22();
		// v.AddPostProcessor(this.proc);
		IProcessor_1U5BU5D_t2656DF3002F88FC13E29BAAAFCA22E66CD9C6A89* L_28 = (IProcessor_1U5BU5D_t2656DF3002F88FC13E29BAAAFCA22E66CD9C6A89*)(IProcessor_1U5BU5D_t2656DF3002F88FC13E29BAAAFCA22E66CD9C6A89*)SZArrayNew(IProcessor_1U5BU5D_t2656DF3002F88FC13E29BAAAFCA22E66CD9C6A89_il2cpp_TypeInfo_var, (uint32_t)1);
		IProcessor_1U5BU5D_t2656DF3002F88FC13E29BAAAFCA22E66CD9C6A89* L_29 = L_28;
		WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * L_30 = __this->get_proc_18();
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_30);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_30);
		NullCheck(((LocalVoiceAudioShort_t56CE89CCE80B89C0BAD1A35C1F5A5DC847C5068B *)IsInstClass((RuntimeObject*)L_27, LocalVoiceAudioShort_t56CE89CCE80B89C0BAD1A35C1F5A5DC847C5068B_il2cpp_TypeInfo_var)));
		LocalVoiceFramed_1_AddPostProcessor_mEE8DCCE80B216507E7DD7991B440642B406854EF(((LocalVoiceAudioShort_t56CE89CCE80B89C0BAD1A35C1F5A5DC847C5068B *)IsInstClass((RuntimeObject*)L_27, LocalVoiceAudioShort_t56CE89CCE80B89C0BAD1A35C1F5A5DC847C5068B_il2cpp_TypeInfo_var)), L_29, /*hidden argument*/LocalVoiceFramed_1_AddPostProcessor_mEE8DCCE80B216507E7DD7991B440642B406854EF_RuntimeMethod_var);
		// this.SetOutputListener();
		WebRtcAudioDsp_SetOutputListener_mC4F764E3FA8349BC825C69E7E3563C65A0AF84DC(__this, /*hidden argument*/NULL);
		// if (this.Logger.IsInfoEnabled)
		VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * L_31;
		L_31 = VoiceComponent_get_Logger_m717530977455A514654497216C9B16FA3A2CA8F9(__this, /*hidden argument*/NULL);
		NullCheck(L_31);
		bool L_32;
		L_32 = VoiceLogger_get_IsInfoEnabled_m52B5D37169FC5BF02A2774BB613DD4A38D900D27(L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_0136;
		}
	}
	{
		// this.Logger.LogInfo("Initialized");
		VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * L_33;
		L_33 = VoiceComponent_get_Logger_m717530977455A514654497216C9B16FA3A2CA8F9(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_34;
		L_34 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_33);
		VoiceLogger_LogInfo_m3D6FA0F59D97160A234007D624F8A002ECE56E1D(L_33, _stringLiteral12DB585CD7C58149D9E30B1F88C95AA55FCFC680, L_34, /*hidden argument*/NULL);
	}

IL_0136:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::PhotonVoiceRemoved()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_PhotonVoiceRemoved_m8CC1FB298E28AD6DB7AE05247EFA5D70798B91CF (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, const RuntimeMethod* method)
{
	{
		// this.Reset();
		WebRtcAudioDsp_Reset_m57939F0EAFE9B290436EB95C8EC890F36A974459(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_OnDestroy_m7EED72931C6109F9CB959AA0A8401F698E1F6C6C (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, const RuntimeMethod* method)
{
	{
		// this.Reset();
		WebRtcAudioDsp_Reset_m57939F0EAFE9B290436EB95C8EC890F36A974459(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_Reset_m57939F0EAFE9B290436EB95C8EC890F36A974459 (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, const RuntimeMethod* method)
{
	{
		// this.SetOutputListener(false);
		WebRtcAudioDsp_SetOutputListener_m3928F9126CF47FFE4D1942E34763F64B9664693E(__this, (bool)0, /*hidden argument*/NULL);
		// if (this.proc != null)
		WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * L_0 = __this->get_proc_18();
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		// this.proc.Dispose();
		WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * L_1 = __this->get_proc_18();
		NullCheck(L_1);
		WebRTCAudioProcessor_Dispose_mA3E9451B13684077CD4A61BB76A6863CC9B9DBCA(L_1, /*hidden argument*/NULL);
		// this.proc = null;
		__this->set_proc_18((WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 *)NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_Restart_mA476BFEF6F215580288766C858A8387AB636C376 (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, const RuntimeMethod* method)
{
	{
		// this.Reset();
		WebRtcAudioDsp_Reset_m57939F0EAFE9B290436EB95C8EC890F36A974459(__this, /*hidden argument*/NULL);
		// this.Init();
		WebRtcAudioDsp_Init_m3FE00D6A67E56C6A007970C72EA2E63AB9A713C7(__this, /*hidden argument*/NULL);
		// this.SetOutputListener();
		WebRtcAudioDsp_SetOutputListener_mC4F764E3FA8349BC825C69E7E3563C65A0AF84DC(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_Init_m3FE00D6A67E56C6A007970C72EA2E63AB9A713C7 (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * G_B2_0 = NULL;
	WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * G_B3_1 = NULL;
	WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * G_B5_0 = NULL;
	WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * G_B6_1 = NULL;
	{
		// this.proc = new WebRTCAudioProcessor(this.Logger, this.localVoice.Info.FrameSize, this.localVoice.Info.SamplingRate,
		//     this.localVoice.Info.Channels, this.outputSampleRate, this.reverseChannels);
		VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * L_0;
		L_0 = VoiceComponent_get_Logger_m717530977455A514654497216C9B16FA3A2CA8F9(__this, /*hidden argument*/NULL);
		LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * L_1 = __this->get_localVoice_22();
		NullCheck(L_1);
		VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  L_2;
		L_2 = LocalVoice_get_Info_m1996B4F7A27EF2E408C0C0DE7BAED51524FA477B_inline(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = VoiceInfo_get_FrameSize_m93A2DEC1EA3ED80425BBB6D367972B01BA003E2F((VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 *)(&V_0), /*hidden argument*/NULL);
		LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * L_4 = __this->get_localVoice_22();
		NullCheck(L_4);
		VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  L_5;
		L_5 = LocalVoice_get_Info_m1996B4F7A27EF2E408C0C0DE7BAED51524FA477B_inline(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		int32_t L_6;
		L_6 = VoiceInfo_get_SamplingRate_mC690C2685B6000B833F54CDA779A9933E3A2D293_inline((VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 *)(&V_0), /*hidden argument*/NULL);
		LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * L_7 = __this->get_localVoice_22();
		NullCheck(L_7);
		VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  L_8;
		L_8 = LocalVoice_get_Info_m1996B4F7A27EF2E408C0C0DE7BAED51524FA477B_inline(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		int32_t L_9;
		L_9 = VoiceInfo_get_Channels_m0631BE3D0B3BB065D07F43C8F093935B5CBBA419_inline((VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 *)(&V_0), /*hidden argument*/NULL);
		int32_t L_10 = __this->get_outputSampleRate_23();
		int32_t L_11 = __this->get_reverseChannels_17();
		WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * L_12 = (WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 *)il2cpp_codegen_object_new(WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6_il2cpp_TypeInfo_var);
		WebRTCAudioProcessor__ctor_mC1E2BE584E411536233FB09F5B519BD5E4ADD4CB(L_12, L_0, L_3, L_6, L_9, L_10, L_11, /*hidden argument*/NULL);
		__this->set_proc_18(L_12);
		// this.proc.AEC = this.AEC && this.ForceNormalAecInMobile;
		WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * L_13 = __this->get_proc_18();
		bool L_14;
		L_14 = WebRtcAudioDsp_get_AEC_mB05CF42BFE79EAA373A27A24D1A6691546B9FA16_inline(__this, /*hidden argument*/NULL);
		G_B1_0 = L_13;
		if (!L_14)
		{
			G_B2_0 = L_13;
			goto IL_006c;
		}
	}
	{
		bool L_15;
		L_15 = WebRtcAudioDsp_get_ForceNormalAecInMobile_m6C27252EE0C71F90C126102D5C75FE409B3714E0_inline(__this, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_15));
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
		WebRTCAudioProcessor_set_AEC_m51F1E3C68B0A48FE5F779726E5532FB5A4F08101(G_B3_1, (bool)G_B3_0, /*hidden argument*/NULL);
		// this.proc.AECMobile = this.AEC && !this.ForceNormalAecInMobile;
		WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * L_16 = __this->get_proc_18();
		bool L_17;
		L_17 = WebRtcAudioDsp_get_AEC_mB05CF42BFE79EAA373A27A24D1A6691546B9FA16_inline(__this, /*hidden argument*/NULL);
		G_B4_0 = L_16;
		if (!L_17)
		{
			G_B5_0 = L_16;
			goto IL_008b;
		}
	}
	{
		bool L_18;
		L_18 = WebRtcAudioDsp_get_ForceNormalAecInMobile_m6C27252EE0C71F90C126102D5C75FE409B3714E0_inline(__this, /*hidden argument*/NULL);
		G_B6_0 = ((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
		G_B6_1 = G_B4_0;
		goto IL_008c;
	}

IL_008b:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_008c:
	{
		NullCheck(G_B6_1);
		WebRTCAudioProcessor_set_AECMobile_m2BC04C193DA46E8A5E65BF6FBDA0EF4C664A7788(G_B6_1, (bool)G_B6_0, /*hidden argument*/NULL);
		// this.proc.AECStreamDelayMs = this.ReverseStreamDelayMs;
		WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * L_19 = __this->get_proc_18();
		int32_t L_20;
		L_20 = WebRtcAudioDsp_get_ReverseStreamDelayMs_mFDCE64215636A31CC5F2BF1F22B2628187F2DBF2_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		WebRTCAudioProcessor_set_AECStreamDelayMs_m0DEEC01E48882EC49754890EA2E5B4092F61696C(L_19, L_20, /*hidden argument*/NULL);
		// this.proc.AECHighPass = this.AecHighPass;
		WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * L_21 = __this->get_proc_18();
		bool L_22;
		L_22 = WebRtcAudioDsp_get_AecHighPass_m585B53C43189830D0D53CC6D83A0D83921A31899_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		WebRTCAudioProcessor_set_AECHighPass_m3DCA68120D367AF8DB61DF7CA9E9F76BDC670151(L_21, L_22, /*hidden argument*/NULL);
		// this.proc.HighPass = this.HighPass;
		WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * L_23 = __this->get_proc_18();
		bool L_24;
		L_24 = WebRtcAudioDsp_get_HighPass_m98DBA4096D359097A33A39CEC6EC6B3B823BAC75_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		WebRTCAudioProcessor_set_HighPass_mBF7F380CC3315AD8263B1009CDC540E0D27885A1(L_23, L_24, /*hidden argument*/NULL);
		// this.proc.NoiseSuppression = this.NoiseSuppression;
		WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * L_25 = __this->get_proc_18();
		bool L_26;
		L_26 = WebRtcAudioDsp_get_NoiseSuppression_mC268C33BC569E226F63FBBB5F4D8B3F9D577E4D0_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		WebRTCAudioProcessor_set_NoiseSuppression_m598056A57F709D929138D33246350C7F2C063C5C(L_25, L_26, /*hidden argument*/NULL);
		// this.proc.AGC = this.AGC;
		WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * L_27 = __this->get_proc_18();
		bool L_28;
		L_28 = WebRtcAudioDsp_get_AGC_m60269155FC6F390E1E17F097B6D3526C5BA91EEF_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_27);
		WebRTCAudioProcessor_set_AGC_m52E96C7FC547804777BE7EB469EB20B85C141C70(L_27, L_28, /*hidden argument*/NULL);
		// this.proc.AGCCompressionGain = this.AgcCompressionGain;
		WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * L_29 = __this->get_proc_18();
		int32_t L_30;
		L_30 = WebRtcAudioDsp_get_AgcCompressionGain_mCA185CB9FBCDC1B4B9DE6F2A49FFFF0C6D0D382D_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		WebRTCAudioProcessor_set_AGCCompressionGain_mCEB0F606CF30A7F4E2E4F7D600DE8392378DA1AC(L_29, L_30, /*hidden argument*/NULL);
		// this.proc.VAD = this.VAD;
		WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * L_31 = __this->get_proc_18();
		bool L_32;
		L_32 = WebRtcAudioDsp_get_VAD_m625955D0357E4CEF72FA553B0CC04F2C45E3D408_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_31);
		WebRTCAudioProcessor_set_VAD_m39E6515DC42CBA9AB3178799133AA81725C14941(L_31, L_32, /*hidden argument*/NULL);
		// this.proc.Bypass = this.Bypass;
		WebRTCAudioProcessor_t672EEA6F17074670F3C86AF64F3BE7A8628C38E6 * L_33 = __this->get_proc_18();
		bool L_34;
		L_34 = WebRtcAudioDsp_get_Bypass_m4D858D3E455AB4FE00C4D2E63D41C51EC1B62FE9_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_33);
		WebRTCAudioProcessor_set_Bypass_m07BC2EC73ABFF4701F80E4F585CF570129258394(L_33, L_34, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::SetOrSwitchAudioListener(UnityEngine.AudioListener,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_SetOrSwitchAudioListener_m9E16F90EF10546AB436D4F7ABB1C174E35CAA116 (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3 * ___audioListener0, bool ___extraChecks1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA_m67B1E71DAC0FC1558C3BCFEF0E46853CC95EC31C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA_m26DD042294EBDC455889417283686971AC94160E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F2CADDC26AAA464E4CB800503EC32489D484EA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C5EA909C6FCC83A7D534E3144C30AB3DB2CF907);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49E44068A7829FAB864D8C4A49A2807645A86799);
		s_Il2CppMethodInitialized = true;
	}
	AudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA * V_0 = NULL;
	{
		// if (audioListener == null)
		AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3 * L_0 = ___audioListener0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		// if (this.Logger.IsErrorEnabled)
		VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * L_2;
		L_2 = VoiceComponent_get_Logger_m717530977455A514654497216C9B16FA3A2CA8F9(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = VoiceLogger_get_IsErrorEnabled_m9DDE69FBB3AC4741138E105DB300F25CAD60FEE4(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// this.Logger.LogError("audioListener passed is null or is being destroyed");
		VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * L_4;
		L_4 = VoiceComponent_get_Logger_m717530977455A514654497216C9B16FA3A2CA8F9(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5;
		L_5 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_4);
		VoiceLogger_LogError_m4E551D12B4D33B783B15EA33B7646B8905FC4DFA(L_4, _stringLiteral0F2CADDC26AAA464E4CB800503EC32489D484EA5, L_5, /*hidden argument*/NULL);
	}

IL_002b:
	{
		// return false;
		return (bool)0;
	}

IL_002d:
	{
		// if (extraChecks)
		bool L_6 = ___extraChecks1;
		if (!L_6)
		{
			goto IL_008d;
		}
	}
	{
		// if (!audioListener.gameObject.activeInHierarchy)
		AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3 * L_7 = ___audioListener0;
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		bool L_9;
		L_9 = GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0061;
		}
	}
	{
		// if (this.Logger.IsErrorEnabled)
		VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * L_10;
		L_10 = VoiceComponent_get_Logger_m717530977455A514654497216C9B16FA3A2CA8F9(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		bool L_11;
		L_11 = VoiceLogger_get_IsErrorEnabled_m9DDE69FBB3AC4741138E105DB300F25CAD60FEE4(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_005f;
		}
	}
	{
		// this.Logger.LogError("The GameObject to which the audioListener is attached is not active in hierarchy");
		VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * L_12;
		L_12 = VoiceComponent_get_Logger_m717530977455A514654497216C9B16FA3A2CA8F9(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13;
		L_13 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_12);
		VoiceLogger_LogError_m4E551D12B4D33B783B15EA33B7646B8905FC4DFA(L_12, _stringLiteral1C5EA909C6FCC83A7D534E3144C30AB3DB2CF907, L_13, /*hidden argument*/NULL);
	}

IL_005f:
	{
		// return false;
		return (bool)0;
	}

IL_0061:
	{
		// if (!audioListener.enabled)
		AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3 * L_14 = ___audioListener0;
		NullCheck(L_14);
		bool L_15;
		L_15 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_008d;
		}
	}
	{
		// if (this.Logger.IsErrorEnabled)
		VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * L_16;
		L_16 = VoiceComponent_get_Logger_m717530977455A514654497216C9B16FA3A2CA8F9(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		bool L_17;
		L_17 = VoiceLogger_get_IsErrorEnabled_m9DDE69FBB3AC4741138E105DB300F25CAD60FEE4(L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_008b;
		}
	}
	{
		// this.Logger.LogError("audioListener passed is disabled");
		VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * L_18;
		L_18 = VoiceComponent_get_Logger_m717530977455A514654497216C9B16FA3A2CA8F9(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19;
		L_19 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_18);
		VoiceLogger_LogError_m4E551D12B4D33B783B15EA33B7646B8905FC4DFA(L_18, _stringLiteral49E44068A7829FAB864D8C4A49A2807645A86799, L_19, /*hidden argument*/NULL);
	}

IL_008b:
	{
		// return false;
		return (bool)0;
	}

IL_008d:
	{
		// AudioOutCapture audioOutCapture = audioListener.GetComponent<AudioOutCapture>();
		AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3 * L_20 = ___audioListener0;
		NullCheck(L_20);
		AudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA * L_21;
		L_21 = Component_GetComponent_TisAudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA_m67B1E71DAC0FC1558C3BCFEF0E46853CC95EC31C(L_20, /*hidden argument*/Component_GetComponent_TisAudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA_m67B1E71DAC0FC1558C3BCFEF0E46853CC95EC31C_RuntimeMethod_var);
		V_0 = L_21;
		// if (audioOutCapture == null)
		AudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA * L_22 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_22, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00a9;
		}
	}
	{
		// audioOutCapture = audioListener.gameObject.AddComponent<AudioOutCapture>();
		AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3 * L_24 = ___audioListener0;
		NullCheck(L_24);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		AudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA * L_26;
		L_26 = GameObject_AddComponent_TisAudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA_m26DD042294EBDC455889417283686971AC94160E(L_25, /*hidden argument*/GameObject_AddComponent_TisAudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA_m26DD042294EBDC455889417283686971AC94160E_RuntimeMethod_var);
		V_0 = L_26;
	}

IL_00a9:
	{
		// return this.SetOrSwitchAudioOutCapture(audioOutCapture, false);
		AudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA * L_27 = V_0;
		bool L_28;
		L_28 = WebRtcAudioDsp_SetOrSwitchAudioOutCapture_m5D40350304AD6E95AAE144DB5BE908B6ED867DAB(__this, L_27, (bool)0, /*hidden argument*/NULL);
		return L_28;
	}
}
// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::SetOrSwitchAudioOutCapture(Photon.Voice.Unity.AudioOutCapture,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_SetOrSwitchAudioOutCapture_m5D40350304AD6E95AAE144DB5BE908B6ED867DAB (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, AudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA * ___audioOutCapture0, bool ___extraChecks1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2__ctor_mAA299B31188542B6B8B367176DD466B67AE94C2C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t8D838F0E0114B7032B25FE8B8E8AE4CE85AB106E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3_m0DA4C699234A3DCDAC948DDC6763AE79C2FB5E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRtcAudioDsp_OnAudioOutFrameFloat_m095C4BFF6571F02764D7C4318AB7B08D8C650C83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F79FE1A1A9F05D5FBAD59214CAFCBC50B925569);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73317C0A90D6E5798833310EDB4C9F1979A7E244);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91E267506A9B484F152026374AAA3996E55D02B4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B53FF12E0C154CCD88205DA90FA2B8B255724D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8FC43AD420EED008DAAC92D79D849F5E0EDD84F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAA3CD251E920C89B6FA6674EB4DC273AFECC284);
		s_Il2CppMethodInitialized = true;
	}
	AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3 * V_0 = NULL;
	{
		// if (audioOutCapture == null)
		AudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA * L_0 = ___audioOutCapture0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		// if (this.Logger.IsErrorEnabled)
		VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * L_2;
		L_2 = VoiceComponent_get_Logger_m717530977455A514654497216C9B16FA3A2CA8F9(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = VoiceLogger_get_IsErrorEnabled_m9DDE69FBB3AC4741138E105DB300F25CAD60FEE4(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// this.Logger.LogError("audioOutCapture passed is null or is being destroyed");
		VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * L_4;
		L_4 = VoiceComponent_get_Logger_m717530977455A514654497216C9B16FA3A2CA8F9(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5;
		L_5 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_4);
		VoiceLogger_LogError_m4E551D12B4D33B783B15EA33B7646B8905FC4DFA(L_4, _stringLiteral91E267506A9B484F152026374AAA3996E55D02B4, L_5, /*hidden argument*/NULL);
	}

IL_002b:
	{
		// return false;
		return (bool)0;
	}

IL_002d:
	{
		// if (!audioOutCapture.enabled)
		AudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA * L_6 = ___audioOutCapture0;
		NullCheck(L_6);
		bool L_7;
		L_7 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0059;
		}
	}
	{
		// if (this.Logger.IsErrorEnabled)
		VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * L_8;
		L_8 = VoiceComponent_get_Logger_m717530977455A514654497216C9B16FA3A2CA8F9(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		bool L_9;
		L_9 = VoiceLogger_get_IsErrorEnabled_m9DDE69FBB3AC4741138E105DB300F25CAD60FEE4(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0057;
		}
	}
	{
		// this.Logger.LogError("audioOutCapture passed is disabled");
		VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * L_10;
		L_10 = VoiceComponent_get_Logger_m717530977455A514654497216C9B16FA3A2CA8F9(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11;
		L_11 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_10);
		VoiceLogger_LogError_m4E551D12B4D33B783B15EA33B7646B8905FC4DFA(L_10, _stringLiteral9B53FF12E0C154CCD88205DA90FA2B8B255724D0, L_11, /*hidden argument*/NULL);
	}

IL_0057:
	{
		// return false;
		return (bool)0;
	}

IL_0059:
	{
		// if (extraChecks)
		bool L_12 = ___extraChecks1;
		if (!L_12)
		{
			goto IL_00f0;
		}
	}
	{
		// if (!audioOutCapture.gameObject.activeInHierarchy)
		AudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA * L_13 = ___audioOutCapture0;
		NullCheck(L_13);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		bool L_15;
		L_15 = GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B(L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0090;
		}
	}
	{
		// if (this.Logger.IsErrorEnabled)
		VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * L_16;
		L_16 = VoiceComponent_get_Logger_m717530977455A514654497216C9B16FA3A2CA8F9(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		bool L_17;
		L_17 = VoiceLogger_get_IsErrorEnabled_m9DDE69FBB3AC4741138E105DB300F25CAD60FEE4(L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_008e;
		}
	}
	{
		// this.Logger.LogError("The GameObject to which the audioOutCapture is attached is not active in hierarchy");
		VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * L_18;
		L_18 = VoiceComponent_get_Logger_m717530977455A514654497216C9B16FA3A2CA8F9(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19;
		L_19 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_18);
		VoiceLogger_LogError_m4E551D12B4D33B783B15EA33B7646B8905FC4DFA(L_18, _stringLiteralA8FC43AD420EED008DAAC92D79D849F5E0EDD84F, L_19, /*hidden argument*/NULL);
	}

IL_008e:
	{
		// return false;
		return (bool)0;
	}

IL_0090:
	{
		// AudioListener audioListener = audioOutCapture.GetComponent<AudioListener>();
		AudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA * L_20 = ___audioOutCapture0;
		NullCheck(L_20);
		AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3 * L_21;
		L_21 = Component_GetComponent_TisAudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3_m0DA4C699234A3DCDAC948DDC6763AE79C2FB5E83(L_20, /*hidden argument*/Component_GetComponent_TisAudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3_m0DA4C699234A3DCDAC948DDC6763AE79C2FB5E83_RuntimeMethod_var);
		V_0 = L_21;
		// if (audioListener == null)
		AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3 * L_22 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_22, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00c4;
		}
	}
	{
		// if (this.Logger.IsErrorEnabled)
		VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * L_24;
		L_24 = VoiceComponent_get_Logger_m717530977455A514654497216C9B16FA3A2CA8F9(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		bool L_25;
		L_25 = VoiceLogger_get_IsErrorEnabled_m9DDE69FBB3AC4741138E105DB300F25CAD60FEE4(L_24, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00c2;
		}
	}
	{
		// this.Logger.LogError("The AudioListener attached to the same GameObject as the audioOutCapture is null or being destroyed");
		VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * L_26;
		L_26 = VoiceComponent_get_Logger_m717530977455A514654497216C9B16FA3A2CA8F9(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_27;
		L_27 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_26);
		VoiceLogger_LogError_m4E551D12B4D33B783B15EA33B7646B8905FC4DFA(L_26, _stringLiteral4F79FE1A1A9F05D5FBAD59214CAFCBC50B925569, L_27, /*hidden argument*/NULL);
	}

IL_00c2:
	{
		// return false;
		return (bool)0;
	}

IL_00c4:
	{
		// if (!audioListener.enabled)
		AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3 * L_28 = V_0;
		NullCheck(L_28);
		bool L_29;
		L_29 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(L_28, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_00f0;
		}
	}
	{
		// if (this.Logger.IsErrorEnabled)
		VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * L_30;
		L_30 = VoiceComponent_get_Logger_m717530977455A514654497216C9B16FA3A2CA8F9(__this, /*hidden argument*/NULL);
		NullCheck(L_30);
		bool L_31;
		L_31 = VoiceLogger_get_IsErrorEnabled_m9DDE69FBB3AC4741138E105DB300F25CAD60FEE4(L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_00ee;
		}
	}
	{
		// this.Logger.LogError("The AudioListener attached to the same GameObject as the audioOutCapture is disabled");
		VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * L_32;
		L_32 = VoiceComponent_get_Logger_m717530977455A514654497216C9B16FA3A2CA8F9(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_33;
		L_33 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_32);
		VoiceLogger_LogError_m4E551D12B4D33B783B15EA33B7646B8905FC4DFA(L_32, _stringLiteral73317C0A90D6E5798833310EDB4C9F1979A7E244, L_33, /*hidden argument*/NULL);
	}

IL_00ee:
	{
		// return false;
		return (bool)0;
	}

IL_00f0:
	{
		// if (this.ac != null)
		AudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA * L_34 = __this->get_ac_19();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_34, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_0151;
		}
	}
	{
		// if (this.ac != audioOutCapture)
		AudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA * L_36 = __this->get_ac_19();
		AudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA * L_37 = ___audioOutCapture0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_36, L_37, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_012d;
		}
	}
	{
		// if (this.started)
		bool L_39 = __this->get_started_20();
		if (!L_39)
		{
			goto IL_0151;
		}
	}
	{
		// this.ac.OnAudioFrame -= this.OnAudioOutFrameFloat;
		AudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA * L_40 = __this->get_ac_19();
		Action_2_t8D838F0E0114B7032B25FE8B8E8AE4CE85AB106E * L_41 = (Action_2_t8D838F0E0114B7032B25FE8B8E8AE4CE85AB106E *)il2cpp_codegen_object_new(Action_2_t8D838F0E0114B7032B25FE8B8E8AE4CE85AB106E_il2cpp_TypeInfo_var);
		Action_2__ctor_mAA299B31188542B6B8B367176DD466B67AE94C2C(L_41, __this, (intptr_t)((intptr_t)WebRtcAudioDsp_OnAudioOutFrameFloat_m095C4BFF6571F02764D7C4318AB7B08D8C650C83_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mAA299B31188542B6B8B367176DD466B67AE94C2C_RuntimeMethod_var);
		NullCheck(L_40);
		AudioOutCapture_remove_OnAudioFrame_m98DDEBB14D6B9E3CA09320073621C12C72946AC2(L_40, L_41, /*hidden argument*/NULL);
		// }
		goto IL_0151;
	}

IL_012d:
	{
		// if (this.Logger.IsErrorEnabled)
		VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * L_42;
		L_42 = VoiceComponent_get_Logger_m717530977455A514654497216C9B16FA3A2CA8F9(__this, /*hidden argument*/NULL);
		NullCheck(L_42);
		bool L_43;
		L_43 = VoiceLogger_get_IsErrorEnabled_m9DDE69FBB3AC4741138E105DB300F25CAD60FEE4(L_42, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_014f;
		}
	}
	{
		// this.Logger.LogError("The same audioOutCapture is being used already");
		VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * L_44;
		L_44 = VoiceComponent_get_Logger_m717530977455A514654497216C9B16FA3A2CA8F9(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_45;
		L_45 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_44);
		VoiceLogger_LogError_m4E551D12B4D33B783B15EA33B7646B8905FC4DFA(L_44, _stringLiteralCAA3CD251E920C89B6FA6674EB4DC273AFECC284, L_45, /*hidden argument*/NULL);
	}

IL_014f:
	{
		// return false;
		return (bool)0;
	}

IL_0151:
	{
		// this.ac = audioOutCapture;
		AudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA * L_46 = ___audioOutCapture0;
		__this->set_ac_19(L_46);
		// if (this.started)
		bool L_47 = __this->get_started_20();
		if (!L_47)
		{
			goto IL_0177;
		}
	}
	{
		// this.ac.OnAudioFrame += this.OnAudioOutFrameFloat;
		AudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA * L_48 = __this->get_ac_19();
		Action_2_t8D838F0E0114B7032B25FE8B8E8AE4CE85AB106E * L_49 = (Action_2_t8D838F0E0114B7032B25FE8B8E8AE4CE85AB106E *)il2cpp_codegen_object_new(Action_2_t8D838F0E0114B7032B25FE8B8E8AE4CE85AB106E_il2cpp_TypeInfo_var);
		Action_2__ctor_mAA299B31188542B6B8B367176DD466B67AE94C2C(L_49, __this, (intptr_t)((intptr_t)WebRtcAudioDsp_OnAudioOutFrameFloat_m095C4BFF6571F02764D7C4318AB7B08D8C650C83_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mAA299B31188542B6B8B367176DD466B67AE94C2C_RuntimeMethod_var);
		NullCheck(L_48);
		AudioOutCapture_add_OnAudioFrame_mE26209A50707DD43410526EDB84147C01A596CFA(L_48, L_49, /*hidden argument*/NULL);
	}

IL_0177:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::SetOrSwitchAudioListener(UnityEngine.AudioListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_SetOrSwitchAudioListener_m2A82F2B5533FCA106C26BF8313DEFD458B518086 (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3 * ___audioListener0, const RuntimeMethod* method)
{
	{
		// return this.SetOrSwitchAudioListener(audioListener, true);
		AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3 * L_0 = ___audioListener0;
		bool L_1;
		L_1 = WebRtcAudioDsp_SetOrSwitchAudioListener_m9E16F90EF10546AB436D4F7ABB1C174E35CAA116(__this, L_0, (bool)1, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::SetOrSwitchAudioOutCapture(Photon.Voice.Unity.AudioOutCapture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_SetOrSwitchAudioOutCapture_mADA7DCA40083A873CC13045EF8D8B9D7B0DD0900 (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, AudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA * ___audioOutCapture0, const RuntimeMethod* method)
{
	{
		// return this.SetOrSwitchAudioOutCapture(audioOutCapture, true);
		AudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA * L_0 = ___audioOutCapture0;
		bool L_1;
		L_1 = WebRtcAudioDsp_SetOrSwitchAudioOutCapture_m5D40350304AD6E95AAE144DB5BE908B6ED867DAB(__this, L_0, (bool)1, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp__ctor_m4E42DC9947A49BF95C0ED380AD1B1032FF5A4DBC (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, const RuntimeMethod* method)
{
	{
		// private bool aec = true;
		__this->set_aec_8((bool)1);
		// private bool agc = true;
		__this->set_agc_10((bool)1);
		// private int agcCompressionGain = 9;
		__this->set_agcCompressionGain_11(((int32_t)9));
		// private bool vad = true;
		__this->set_vad_12((bool)1);
		// private int reverseStreamDelayMs = 120;
		__this->set_reverseStreamDelayMs_16(((int32_t)120));
		VoiceComponent__ctor_m3DF5DEFE3A274DF21944E2F9EC9DE462B105E8A4(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp__cctor_m356DA1ED37CC8C12568838222C5FDF9F1508DA1A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mD3EBFDE882930A03A83E80E8D443433165590D5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mBF0DB9DC3119010625F8507F04981F6306C3AC76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tD85316D462101B4F7AD52B74B47D50D1A8CC0DBC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Dictionary<AudioSpeakerMode, int> channelsMap = new Dictionary<AudioSpeakerMode, int>
		// {
		//     #if !UNITY_2019_2_OR_NEWER
		//     {AudioSpeakerMode.Raw, 0},
		//     #endif
		//     {AudioSpeakerMode.Mono, 1},
		//     {AudioSpeakerMode.Stereo, 2},
		//     {AudioSpeakerMode.Quad, 4},
		//     {AudioSpeakerMode.Surround, 5},
		//     {AudioSpeakerMode.Mode5point1, 6},
		//     {AudioSpeakerMode.Mode7point1, 8},
		//     {AudioSpeakerMode.Prologic, 2}
		// };
		Dictionary_2_tD85316D462101B4F7AD52B74B47D50D1A8CC0DBC * L_0 = (Dictionary_2_tD85316D462101B4F7AD52B74B47D50D1A8CC0DBC *)il2cpp_codegen_object_new(Dictionary_2_tD85316D462101B4F7AD52B74B47D50D1A8CC0DBC_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mBF0DB9DC3119010625F8507F04981F6306C3AC76(L_0, /*hidden argument*/Dictionary_2__ctor_mBF0DB9DC3119010625F8507F04981F6306C3AC76_RuntimeMethod_var);
		Dictionary_2_tD85316D462101B4F7AD52B74B47D50D1A8CC0DBC * L_1 = L_0;
		NullCheck(L_1);
		Dictionary_2_Add_mD3EBFDE882930A03A83E80E8D443433165590D5C(L_1, 1, 1, /*hidden argument*/Dictionary_2_Add_mD3EBFDE882930A03A83E80E8D443433165590D5C_RuntimeMethod_var);
		Dictionary_2_tD85316D462101B4F7AD52B74B47D50D1A8CC0DBC * L_2 = L_1;
		NullCheck(L_2);
		Dictionary_2_Add_mD3EBFDE882930A03A83E80E8D443433165590D5C(L_2, 2, 2, /*hidden argument*/Dictionary_2_Add_mD3EBFDE882930A03A83E80E8D443433165590D5C_RuntimeMethod_var);
		Dictionary_2_tD85316D462101B4F7AD52B74B47D50D1A8CC0DBC * L_3 = L_2;
		NullCheck(L_3);
		Dictionary_2_Add_mD3EBFDE882930A03A83E80E8D443433165590D5C(L_3, 3, 4, /*hidden argument*/Dictionary_2_Add_mD3EBFDE882930A03A83E80E8D443433165590D5C_RuntimeMethod_var);
		Dictionary_2_tD85316D462101B4F7AD52B74B47D50D1A8CC0DBC * L_4 = L_3;
		NullCheck(L_4);
		Dictionary_2_Add_mD3EBFDE882930A03A83E80E8D443433165590D5C(L_4, 4, 5, /*hidden argument*/Dictionary_2_Add_mD3EBFDE882930A03A83E80E8D443433165590D5C_RuntimeMethod_var);
		Dictionary_2_tD85316D462101B4F7AD52B74B47D50D1A8CC0DBC * L_5 = L_4;
		NullCheck(L_5);
		Dictionary_2_Add_mD3EBFDE882930A03A83E80E8D443433165590D5C(L_5, 5, 6, /*hidden argument*/Dictionary_2_Add_mD3EBFDE882930A03A83E80E8D443433165590D5C_RuntimeMethod_var);
		Dictionary_2_tD85316D462101B4F7AD52B74B47D50D1A8CC0DBC * L_6 = L_5;
		NullCheck(L_6);
		Dictionary_2_Add_mD3EBFDE882930A03A83E80E8D443433165590D5C(L_6, 6, 8, /*hidden argument*/Dictionary_2_Add_mD3EBFDE882930A03A83E80E8D443433165590D5C_RuntimeMethod_var);
		Dictionary_2_tD85316D462101B4F7AD52B74B47D50D1A8CC0DBC * L_7 = L_6;
		NullCheck(L_7);
		Dictionary_2_Add_mD3EBFDE882930A03A83E80E8D443433165590D5C(L_7, 7, 2, /*hidden argument*/Dictionary_2_Add_mD3EBFDE882930A03A83E80E8D443433165590D5C_RuntimeMethod_var);
		((WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016_StaticFields*)il2cpp_codegen_static_fields_for(WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016_il2cpp_TypeInfo_var))->set_channelsMap_21(L_7);
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
// System.Void Photon.Voice.Unity.Recorder/<>c__DisplayClass169_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass169_0__ctor_m8E883925330770BCD702D1E5B78FE90707B67EC7 (U3CU3Ec__DisplayClass169_0_t38A92BB229F58824432EAC644C1169EF297A8B01 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Photon.Voice.Unity.Recorder/<>c__DisplayClass169_0::<VoiceDetectorCalibrate>b__0(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass169_0_U3CVoiceDetectorCalibrateU3Eb__0_m4CC1587F4E532534AB4F68BBA20256C873A69E75 (U3CU3Ec__DisplayClass169_0_t38A92BB229F58824432EAC644C1169EF297A8B01 * __this, float ___newThreshold0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.GetThresholdFromDetector();
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		Recorder_GetThresholdFromDetector_m241DF1E4F51A98081E42E1D02F091F2D2D2C2F64(L_0, /*hidden argument*/NULL);
		// if (detectionEndedCallback != null)
		Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * L_1 = __this->get_detectionEndedCallback_1();
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// detectionEndedCallback(this.voiceDetectionThreshold);
		Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * L_2 = __this->get_detectionEndedCallback_1();
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_3 = __this->get_U3CU3E4__this_0();
		NullCheck(L_3);
		float L_4 = L_3->get_voiceDetectionThreshold_12();
		NullCheck(L_2);
		Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E(L_2, L_4, /*hidden argument*/Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E_RuntimeMethod_var);
	}

IL_0029:
	{
		// });
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
// System.Void Photon.Voice.Unity.Recorder/PhotonVoiceCreatedParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceCreatedParams__ctor_mC1F5F70DF2F839065758C6D90D400EF2F43A2632 (PhotonVoiceCreatedParams_t144861E5442693D3593C0DD733A7368F69DF7279 * __this, const RuntimeMethod* method)
{
	{
		PhotonVoiceCreatedParams__ctor_m3FE6361DA483D21121E7B0A0A91E08282FA96114(__this, /*hidden argument*/NULL);
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
// System.Void Photon.Voice.Unity.UtilityScripts.SaveIncomingStreamToFile/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m508A8F6922A9AADAC3655C5164BF5CD46D910B08 (U3CU3Ec__DisplayClass5_0_tD5F43EC071A58F08F67AE864E90EC5E4A75B2D99 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.SaveIncomingStreamToFile/<>c__DisplayClass5_0::<OnRemoteVoiceAdded>b__0(Photon.Voice.FrameOut`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3COnRemoteVoiceAddedU3Eb__0_m9165FFC959FE3DC53096624BE290A5A093BF6FB1 (U3CU3Ec__DisplayClass5_0_tD5F43EC071A58F08F67AE864E90EC5E4A75B2D99 * __this, FrameOut_1_t2E75A31E49C5BB56BEAA73766430E3B7F2167044 * ___f0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrameOut_1_get_Buf_m11751F803C38A493838A70F3A94EA6AE22EF761A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// remoteVoiceLink.FloatFrameDecoded += f => { waveWriter.WriteSamples(f.Buf, 0, f.Buf.Length); };
		WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * L_0 = __this->get_waveWriter_0();
		FrameOut_1_t2E75A31E49C5BB56BEAA73766430E3B7F2167044 * L_1 = ___f0;
		NullCheck(L_1);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2;
		L_2 = FrameOut_1_get_Buf_m11751F803C38A493838A70F3A94EA6AE22EF761A_inline(L_1, /*hidden argument*/FrameOut_1_get_Buf_m11751F803C38A493838A70F3A94EA6AE22EF761A_RuntimeMethod_var);
		FrameOut_1_t2E75A31E49C5BB56BEAA73766430E3B7F2167044 * L_3 = ___f0;
		NullCheck(L_3);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4;
		L_4 = FrameOut_1_get_Buf_m11751F803C38A493838A70F3A94EA6AE22EF761A_inline(L_3, /*hidden argument*/FrameOut_1_get_Buf_m11751F803C38A493838A70F3A94EA6AE22EF761A_RuntimeMethod_var);
		NullCheck(L_4);
		NullCheck(L_0);
		WaveWriter_WriteSamples_m467B2747EFDB5F7FDDEA8DED1520DE0CA1AC01BF(L_0, L_2, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))), /*hidden argument*/NULL);
		// remoteVoiceLink.FloatFrameDecoded += f => { waveWriter.WriteSamples(f.Buf, 0, f.Buf.Length); };
		return;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.SaveIncomingStreamToFile/<>c__DisplayClass5_0::<OnRemoteVoiceAdded>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3COnRemoteVoiceAddedU3Eb__1_m41EFA14597F26CFD9C83B7F85E376F1044D782D8 (U3CU3Ec__DisplayClass5_0_tD5F43EC071A58F08F67AE864E90EC5E4A75B2D99 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F3A60FB7BA6A81ED481C7195C4CF91C4F128A3F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.Logger.IsInfoEnabled)
		SaveIncomingStreamToFile_tF1D61ADFBEC004703068B6348E33B13FBD49019E * L_0 = __this->get_U3CU3E4__this_1();
		NullCheck(L_0);
		VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * L_1;
		L_1 = VoiceComponent_get_Logger_m717530977455A514654497216C9B16FA3A2CA8F9(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = VoiceLogger_get_IsInfoEnabled_m52B5D37169FC5BF02A2774BB613DD4A38D900D27(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// this.Logger.LogInfo("Remote voice stream removed: Saving wav file.");
		SaveIncomingStreamToFile_tF1D61ADFBEC004703068B6348E33B13FBD49019E * L_3 = __this->get_U3CU3E4__this_1();
		NullCheck(L_3);
		VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * L_4;
		L_4 = VoiceComponent_get_Logger_m717530977455A514654497216C9B16FA3A2CA8F9(L_3, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5;
		L_5 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_4);
		VoiceLogger_LogInfo_m3D6FA0F59D97160A234007D624F8A002ECE56E1D(L_4, _stringLiteral2F3A60FB7BA6A81ED481C7195C4CF91C4F128A3F, L_5, /*hidden argument*/NULL);
	}

IL_002c:
	{
		// waveWriter.Dispose();
		WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * L_6 = __this->get_waveWriter_0();
		NullCheck(L_6);
		WaveWriter_Dispose_m49F4BFC506F5694D660BB4CF083490143E1F73B3(L_6, /*hidden argument*/NULL);
		// };
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
// System.Void Photon.Voice.Unity.UtilityScripts.SaveOutgoingStreamToFile/OutgoingStreamSaverFloat::.ctor(CSCore.Codecs.WAV.WaveWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutgoingStreamSaverFloat__ctor_m5B10C5A0DA1AF8952534915FCA13D2D9E022D7C5 (OutgoingStreamSaverFloat_t4FBDC560128785F1310E576A2F007575F9A8682D * __this, WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * ___waveWriter0, const RuntimeMethod* method)
{
	{
		// public OutgoingStreamSaverFloat(WaveWriter waveWriter)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.wavWriter = waveWriter;
		WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * L_0 = ___waveWriter0;
		__this->set_wavWriter_0(L_0);
		// }
		return;
	}
}
// System.Single[] Photon.Voice.Unity.UtilityScripts.SaveOutgoingStreamToFile/OutgoingStreamSaverFloat::Process(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* OutgoingStreamSaverFloat_Process_m130EC4636E9C1D74E1564166370AE8B19AACE93E (OutgoingStreamSaverFloat_t4FBDC560128785F1310E576A2F007575F9A8682D * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___buf0, const RuntimeMethod* method)
{
	{
		// this.wavWriter.WriteSamples(buf, 0, buf.Length);
		WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * L_0 = __this->get_wavWriter_0();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = ___buf0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = ___buf0;
		NullCheck(L_2);
		NullCheck(L_0);
		WaveWriter_WriteSamples_m467B2747EFDB5F7FDDEA8DED1520DE0CA1AC01BF(L_0, L_1, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), /*hidden argument*/NULL);
		// return buf;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = ___buf0;
		return L_3;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.SaveOutgoingStreamToFile/OutgoingStreamSaverFloat::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutgoingStreamSaverFloat_Dispose_m5860D8E4856237E7FD81361DE1F841471932A447 (OutgoingStreamSaverFloat_t4FBDC560128785F1310E576A2F007575F9A8682D * __this, const RuntimeMethod* method)
{
	{
		// if (!this.wavWriter.IsDisposed && !this.wavWriter.IsDisposing)
		WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * L_0 = __this->get_wavWriter_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = WaveWriter_get_IsDisposed_mC1B18F40EC42CE956B37765010471C5E4C147B05_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * L_2 = __this->get_wavWriter_0();
		NullCheck(L_2);
		bool L_3;
		L_3 = WaveWriter_get_IsDisposing_mC116F5601CC3B05AE713FCDEA75A10F7760F9385_inline(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		// this.wavWriter.Dispose();
		WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * L_4 = __this->get_wavWriter_0();
		NullCheck(L_4);
		WaveWriter_Dispose_m49F4BFC506F5694D660BB4CF083490143E1F73B3(L_4, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// }
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
// System.Void Photon.Voice.Unity.UtilityScripts.SaveOutgoingStreamToFile/OutgoingStreamSaverShort::.ctor(CSCore.Codecs.WAV.WaveWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutgoingStreamSaverShort__ctor_m4BA7AE8895DE7D413B1AAA393B83CF1BE2378F61 (OutgoingStreamSaverShort_t53EDC7411304DFEEB7B9619029973B8C893234DA * __this, WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * ___waveWriter0, const RuntimeMethod* method)
{
	{
		// public OutgoingStreamSaverShort(WaveWriter waveWriter)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.wavWriter = waveWriter;
		WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * L_0 = ___waveWriter0;
		__this->set_wavWriter_0(L_0);
		// }
		return;
	}
}
// System.Int16[] Photon.Voice.Unity.UtilityScripts.SaveOutgoingStreamToFile/OutgoingStreamSaverShort::Process(System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* OutgoingStreamSaverShort_Process_m7CE7B8393664E89D38B737983744F82890867FD9 (OutgoingStreamSaverShort_t53EDC7411304DFEEB7B9619029973B8C893234DA * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___buf0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < buf.Length; i++)
		V_0 = 0;
		goto IL_0016;
	}

IL_0004:
	{
		// this.wavWriter.Write(buf[i]);
		WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * L_0 = __this->get_wavWriter_0();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_1 = ___buf0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int16_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_0);
		WaveWriter_Write_m0C3F4999A31F6012D211E434B4C18206343B41E0(L_0, L_4, /*hidden argument*/NULL);
		// for (int i = 0; i < buf.Length; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0016:
	{
		// for (int i = 0; i < buf.Length; i++)
		int32_t L_6 = V_0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_7 = ___buf0;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		// return buf;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_8 = ___buf0;
		return L_8;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.SaveOutgoingStreamToFile/OutgoingStreamSaverShort::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutgoingStreamSaverShort_Dispose_mA65F98EBA19E2F90481E025A6574BA5CB8E12472 (OutgoingStreamSaverShort_t53EDC7411304DFEEB7B9619029973B8C893234DA * __this, const RuntimeMethod* method)
{
	{
		// if (!this.wavWriter.IsDisposed && !this.wavWriter.IsDisposing)
		WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * L_0 = __this->get_wavWriter_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = WaveWriter_get_IsDisposed_mC1B18F40EC42CE956B37765010471C5E4C147B05_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * L_2 = __this->get_wavWriter_0();
		NullCheck(L_2);
		bool L_3;
		L_3 = WaveWriter_get_IsDisposing_mC116F5601CC3B05AE713FCDEA75A10F7760F9385_inline(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		// this.wavWriter.Dispose();
		WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * L_4 = __this->get_wavWriter_0();
		NullCheck(L_4);
		WaveWriter_Dispose_m49F4BFC506F5694D660BB4CF083490143E1F73B3(L_4, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// }
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
// System.Void Photon.Voice.Unity.Speaker/<>c__DisplayClass40_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass40_0__ctor_m71E960745E94BF4C936E79257C20F0B6AC28655D (U3CU3Ec__DisplayClass40_0_t4A098DC7D5D9E1A05EC68630190A3C15A2226D6C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Photon.Voice.IAudioOut`1<System.Single> Photon.Voice.Unity.Speaker/<>c__DisplayClass40_0::<Initialize>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass40_0_U3CInitializeU3Eb__0_mADB2339B767E5D093147DD5DBCB5AB4D2F024597 (U3CU3Ec__DisplayClass40_0_t4A098DC7D5D9E1A05EC68630190A3C15A2226D6C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAudioOut_t137B3BB0274927C067BEC30C1F74F382240BD3BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Func<IAudioOut<float>> factory = () => new UnityAudioOut(this.GetComponent<AudioSource>(), pdc, this.Logger, string.Empty, this.Logger.IsInfoEnabled);
		Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1;
		L_1 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(L_0, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7 * L_2 = __this->get_pdc_1();
		Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * L_3 = __this->get_U3CU3E4__this_0();
		NullCheck(L_3);
		VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * L_4;
		L_4 = VoiceComponent_get_Logger_m717530977455A514654497216C9B16FA3A2CA8F9(L_3, /*hidden argument*/NULL);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * L_6 = __this->get_U3CU3E4__this_0();
		NullCheck(L_6);
		VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * L_7;
		L_7 = VoiceComponent_get_Logger_m717530977455A514654497216C9B16FA3A2CA8F9(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		bool L_8;
		L_8 = VoiceLogger_get_IsInfoEnabled_m52B5D37169FC5BF02A2774BB613DD4A38D900D27(L_7, /*hidden argument*/NULL);
		UnityAudioOut_t137B3BB0274927C067BEC30C1F74F382240BD3BA * L_9 = (UnityAudioOut_t137B3BB0274927C067BEC30C1F74F382240BD3BA *)il2cpp_codegen_object_new(UnityAudioOut_t137B3BB0274927C067BEC30C1F74F382240BD3BA_il2cpp_TypeInfo_var);
		UnityAudioOut__ctor_mAFBA116E3B426A120E5796AB7BA97C2BFF008CE6(L_9, L_1, L_2, L_4, L_5, L_8, /*hidden argument*/NULL);
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
// System.Void Photon.Voice.Unity.UtilityScripts.TestTone/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m30A9237DAF7BF764C1C2983717F3B30476E2F7DC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t6D85E6278D22C528CBA18A7B1588B7D4F5B28943_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t6D85E6278D22C528CBA18A7B1588B7D4F5B28943 * L_0 = (U3CU3Ec_t6D85E6278D22C528CBA18A7B1588B7D4F5B28943 *)il2cpp_codegen_object_new(U3CU3Ec_t6D85E6278D22C528CBA18A7B1588B7D4F5B28943_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m4AA6E1EADDDEA041D83C4B87227D374BC2AB59AF(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t6D85E6278D22C528CBA18A7B1588B7D4F5B28943_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6D85E6278D22C528CBA18A7B1588B7D4F5B28943_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Photon.Voice.Unity.UtilityScripts.TestTone/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4AA6E1EADDDEA041D83C4B87227D374BC2AB59AF (U3CU3Ec_t6D85E6278D22C528CBA18A7B1588B7D4F5B28943 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Photon.Voice.IAudioDesc Photon.Voice.Unity.UtilityScripts.TestTone/<>c::<Start>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CStartU3Eb__0_0_m49F9CBD508D1B4597B99A7BC6A466A231EFFF45C (U3CU3Ec_t6D85E6278D22C528CBA18A7B1588B7D4F5B28943 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ToneAudioReader_tC1C56D849C3C642C3E485DDEB70F7CA17120045A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new ToneAudioReader();
		ToneAudioReader_tC1C56D849C3C642C3E485DDEB70F7CA17120045A * L_0 = (ToneAudioReader_tC1C56D849C3C642C3E485DDEB70F7CA17120045A *)il2cpp_codegen_object_new(ToneAudioReader_tC1C56D849C3C642C3E485DDEB70F7CA17120045A_il2cpp_TypeInfo_var);
		ToneAudioReader__ctor_mFD8D02E605A82A229D667DA7D72C7F8E238291CF(L_0, /*hidden argument*/NULL);
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
// System.Void Photon.Voice.Unity.VoiceConnection/<>c__DisplayClass95_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass95_0__ctor_mCACC7DC2C8CF6F1E5FDF5D6974A322D75F5B4783 (U3CU3Ec__DisplayClass95_0_t5513DB87EFC7B8F304090AF0A7F96AC05190245A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Photon.Voice.Unity.VoiceConnection/<>c__DisplayClass95_0::<OnRemoteVoiceInfo>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass95_0_U3COnRemoteVoiceInfoU3Eb__0_m16A6133CB0D8C7440DAED9125ADEB6556761FBA7 (U3CU3Ec__DisplayClass95_0_t5513DB87EFC7B8F304090AF0A7F96AC05190245A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m48952F6172D8ED3266FC3FF1BBD28D3CFCBAF7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C306B25AE6D78D44C7AD9A9537E1CFD950D6F3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98F5D35920B79C0A6AE1F8D2A6EE33847D8C99CC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.Logger.IsInfoEnabled)
		VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * L_1;
		L_1 = VoiceConnection_get_Logger_m7C33561D5CE7EDC8ABAE8BD7D0C75A998387E222(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = VoiceLogger_get_IsInfoEnabled_m52B5D37169FC5BF02A2774BB613DD4A38D900D27(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0065;
		}
	}
	{
		// this.Logger.LogInfo("RemoteVoiceRemoved channel {0} player {1} voice #{2} userData {3}", channelId, playerId, voiceId, voiceInfo.UserData);
		VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704 * L_3 = __this->get_U3CU3E4__this_0();
		NullCheck(L_3);
		VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * L_4;
		L_4 = VoiceConnection_get_Logger_m7C33561D5CE7EDC8ABAE8BD7D0C75A998387E222(L_3, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_5;
		int32_t L_7 = __this->get_channelId_1();
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_9);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = L_6;
		int32_t L_11 = __this->get_playerId_2();
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_13);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = L_10;
		uint8_t L_15 = __this->get_voiceId_3();
		uint8_t L_16 = L_15;
		RuntimeObject * L_17 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_17);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_18 = L_14;
		VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 * L_19 = __this->get_address_of_voiceInfo_4();
		RuntimeObject * L_20;
		L_20 = VoiceInfo_get_UserData_mFF0F8364FAE94F39613F8C646BC233967EDF45AA_inline((VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 *)L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_20);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_20);
		NullCheck(L_4);
		VoiceLogger_LogInfo_m3D6FA0F59D97160A234007D624F8A002ECE56E1D(L_4, _stringLiteral98F5D35920B79C0A6AE1F8D2A6EE33847D8C99CC, L_18, /*hidden argument*/NULL);
	}

IL_0065:
	{
		// if (!this.cachedRemoteVoices.Remove(remoteVoice) && this.Logger.IsWarningEnabled)
		VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704 * L_21 = __this->get_U3CU3E4__this_0();
		NullCheck(L_21);
		List_1_tB0C131F9DB7AC689F5A2BA8945F3FDA7555F7CEE * L_22 = L_21->get_cachedRemoteVoices_28();
		RemoteVoiceLink_tDDD70AB15B70170AF282B017A3BCE94DB80E9CBC * L_23 = __this->get_remoteVoice_5();
		NullCheck(L_22);
		bool L_24;
		L_24 = List_1_Remove_m48952F6172D8ED3266FC3FF1BBD28D3CFCBAF7BC(L_22, L_23, /*hidden argument*/List_1_Remove_m48952F6172D8ED3266FC3FF1BBD28D3CFCBAF7BC_RuntimeMethod_var);
		if (L_24)
		{
			goto IL_00e2;
		}
	}
	{
		VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704 * L_25 = __this->get_U3CU3E4__this_0();
		NullCheck(L_25);
		VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * L_26;
		L_26 = VoiceConnection_get_Logger_m7C33561D5CE7EDC8ABAE8BD7D0C75A998387E222(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		bool L_27;
		L_27 = VoiceLogger_get_IsWarningEnabled_m21C2819F64E3855C798E61E777904E77A0BC2560(L_26, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00e2;
		}
	}
	{
		// this.Logger.LogWarning("Cached remote voice info not removed for channel {0} player {1} voice #{2} userData {3}", channelId, playerId, voiceId, voiceInfo.UserData);
		VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704 * L_28 = __this->get_U3CU3E4__this_0();
		NullCheck(L_28);
		VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * L_29;
		L_29 = VoiceConnection_get_Logger_m7C33561D5CE7EDC8ABAE8BD7D0C75A998387E222(L_28, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_30 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_31 = L_30;
		int32_t L_32 = __this->get_channelId_1();
		int32_t L_33 = L_32;
		RuntimeObject * L_34 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_33);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_34);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_34);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_35 = L_31;
		int32_t L_36 = __this->get_playerId_2();
		int32_t L_37 = L_36;
		RuntimeObject * L_38 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_37);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_38);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_38);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_39 = L_35;
		uint8_t L_40 = __this->get_voiceId_3();
		uint8_t L_41 = L_40;
		RuntimeObject * L_42 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_41);
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_42);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_42);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_43 = L_39;
		VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 * L_44 = __this->get_address_of_voiceInfo_4();
		RuntimeObject * L_45;
		L_45 = VoiceInfo_get_UserData_mFF0F8364FAE94F39613F8C646BC233967EDF45AA_inline((VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 *)L_44, /*hidden argument*/NULL);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_45);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_45);
		NullCheck(L_29);
		VoiceLogger_LogWarning_mED72C8846BB2AEF1CF9FA9F78E4EFD39DE7BABAB(L_29, _stringLiteral2C306B25AE6D78D44C7AD9A9537E1CFD950D6F3D, L_43, /*hidden argument*/NULL);
	}

IL_00e2:
	{
		// };
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
// System.Void Photon.Voice.Unity.VoiceConnection/<>c__DisplayClass99_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass99_0__ctor_m67C76713C669FD3D1BD433059D566B96269BB3AB (U3CU3Ec__DisplayClass99_0_tB8557F155B3EE52C474126E588912859E7FF606D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Photon.Voice.Unity.VoiceConnection/<>c__DisplayClass99_0::<LinkSpeaker>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass99_0_U3CLinkSpeakerU3Eb__0_mD1AE0EECCC6AEE6B2366ECE8D561AE57A6182FB4 (U3CU3Ec__DisplayClass99_0_tB8557F155B3EE52C474126E588912859E7FF606D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mD891476ADE6ACE5DE3F0EE490B901BA200728D98_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.linkedSpeakers.Remove(speaker);
		VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		List_1_t89AF99FADC7E48891C45020A7D9A15E0EB1BB89F * L_1 = L_0->get_linkedSpeakers_35();
		Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * L_2 = __this->get_speaker_1();
		NullCheck(L_1);
		bool L_3;
		L_3 = List_1_Remove_mD891476ADE6ACE5DE3F0EE490B901BA200728D98(L_1, L_2, /*hidden argument*/List_1_Remove_mD891476ADE6ACE5DE3F0EE490B901BA200728D98_RuntimeMethod_var);
		// };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VoiceLogger_set_Tag_mCE716ED6FE8B5BEDE59A36F5E8B1CE3FA0DF46DA_inline (VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Tag { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CTagU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VoiceLogger_set_LogLevel_m01929A0DDE740360CBE51608BE9B9B9552082F59_inline (VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		// public DebugLevel LogLevel { get; set; }
		uint8_t L_0 = ___value0;
		__this->set_U3CLogLevelU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t VoiceLogger_get_LogLevel_m599ECF8F4C6DAE502379BC9CA0E3BF44EE475A46_inline (VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * __this, const RuntimeMethod* method)
{
	{
		// public DebugLevel LogLevel { get; set; }
		uint8_t L_0 = __this->get_U3CLogLevelU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VoiceLogger_get_Tag_m00B2E404A49D216DDBB88D0CE3325C959C0EF26F_inline (VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * __this, const RuntimeMethod* method)
{
	{
		// public string Tag { get; set; }
		String_t* L_0 = __this->get_U3CTagU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t  WaveFormatExtensible_get_SubFormat_m3282EB3D7CD99F7A01F36150AD1FEB3548589D07_inline (WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060 * __this, const RuntimeMethod* method)
{
	{
		// get { return _subFormat; }
		Guid_t  L_0 = __this->get__subFormat_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WaveFormatExtensible_set_SubFormat_m2106408D1EC65526B6AD07A19472CC2AFD1ECB96_inline (WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060 * __this, Guid_t  ___value0, const RuntimeMethod* method)
{
	{
		// internal protected set { _subFormat = value; }
		Guid_t  L_0 = ___value0;
		__this->set__subFormat_10(L_0);
		// internal protected set { _subFormat = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WaveFormatExtensible_get_ChannelMask_mEAD03CAED3116F947D91053F279EDA08B2371E7A_inline (WaveFormatExtensible_tC1D5F325FAF90F4D6254DFB34F9161C097B4F060 * __this, const RuntimeMethod* method)
{
	{
		// get { return _channelMask; }
		int32_t L_0 = __this->get__channelMask_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_get_AEC_mB05CF42BFE79EAA373A27A24D1A6691546B9FA16_inline (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, const RuntimeMethod* method)
{
	{
		// get { return this.aec; }
		bool L_0 = __this->get_aec_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VoiceComponent_get_IgnoreGlobalLogLevel_mF798F8DE0F44EEB28F26A518299A7E4FA80DF80F_inline (VoiceComponent_tCE3547F23B76A6B42D3BD5158F110EFD8044E88C * __this, const RuntimeMethod* method)
{
	{
		// get { return this.ignoreGlobalLogLevel; }
		bool L_0 = __this->get_ignoreGlobalLogLevel_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Recorder_get_IsRecording_mAD773CEB5B194C4A1C22FE2B468EF4528759B2BF_inline (Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * __this, const RuntimeMethod* method)
{
	{
		// return this.isRecording;
		bool L_0 = __this->get_isRecording_33();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Recorder_get_SourceType_m53055CFC105940ED013D9008DB0F3E68A8ED858A_inline (Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * __this, const RuntimeMethod* method)
{
	{
		// get { return this.sourceType; }
		int32_t L_0 = __this->get_sourceType_29();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * PhotonVoiceCreatedParams_get_Voice_mDCDA2C8A276052F03DAADA4A0EBF17A132865EF0_inline (PhotonVoiceCreatedParams_t2016E70662CD6C4DC00630565940783AC2469E7D * __this, const RuntimeMethod* method)
{
	{
		// public Voice.LocalVoice Voice { get; set; }
		LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * L_0 = __this->get_U3CVoiceU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  LocalVoice_get_Info_m1996B4F7A27EF2E408C0C0DE7BAED51524FA477B_inline (LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * __this, const RuntimeMethod* method)
{
	{
		// public VoiceInfo Info { get { return info; } }
		VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  L_0 = __this->get_info_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_Channels_m0631BE3D0B3BB065D07F43C8F093935B5CBBA419_inline (VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 * __this, const RuntimeMethod* method)
{
	{
		// public int Channels { get; set; }
		int32_t L_0 = __this->get_U3CChannelsU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_SamplingRate_mC690C2685B6000B833F54CDA779A9933E3A2D293_inline (VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 * __this, const RuntimeMethod* method)
{
	{
		// public int SamplingRate { get; set; }
		int32_t L_0 = __this->get_U3CSamplingRateU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_get_ForceNormalAecInMobile_m6C27252EE0C71F90C126102D5C75FE409B3714E0_inline (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, const RuntimeMethod* method)
{
	{
		// get { return this.forceNormalAecInMobile; }
		bool L_0 = __this->get_forceNormalAecInMobile_25();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WebRtcAudioDsp_get_ReverseStreamDelayMs_mFDCE64215636A31CC5F2BF1F22B2628187F2DBF2_inline (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, const RuntimeMethod* method)
{
	{
		// get { return this.reverseStreamDelayMs; }
		int32_t L_0 = __this->get_reverseStreamDelayMs_16();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_get_AecHighPass_m585B53C43189830D0D53CC6D83A0D83921A31899_inline (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, const RuntimeMethod* method)
{
	{
		// get { return this.aecHighPass; }
		bool L_0 = __this->get_aecHighPass_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_get_HighPass_m98DBA4096D359097A33A39CEC6EC6B3B823BAC75_inline (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, const RuntimeMethod* method)
{
	{
		// get { return this.highPass; }
		bool L_0 = __this->get_highPass_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_get_NoiseSuppression_mC268C33BC569E226F63FBBB5F4D8B3F9D577E4D0_inline (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, const RuntimeMethod* method)
{
	{
		// get { return this.noiseSuppression; }
		bool L_0 = __this->get_noiseSuppression_15();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_get_AGC_m60269155FC6F390E1E17F097B6D3526C5BA91EEF_inline (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, const RuntimeMethod* method)
{
	{
		// get { return this.agc; }
		bool L_0 = __this->get_agc_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WebRtcAudioDsp_get_AgcCompressionGain_mCA185CB9FBCDC1B4B9DE6F2A49FFFF0C6D0D382D_inline (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, const RuntimeMethod* method)
{
	{
		// return this.agcCompressionGain;
		int32_t L_0 = __this->get_agcCompressionGain_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_get_VAD_m625955D0357E4CEF72FA553B0CC04F2C45E3D408_inline (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, const RuntimeMethod* method)
{
	{
		// get { return this.vad; }
		bool L_0 = __this->get_vad_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_get_Bypass_m4D858D3E455AB4FE00C4D2E63D41C51EC1B62FE9_inline (WebRtcAudioDsp_t665BBE67A5E6E69C5E3C2B775090D9CC12629016 * __this, const RuntimeMethod* method)
{
	{
		// get { return this.bypass; }
		bool L_0 = __this->get_bypass_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WaveWriter_get_IsDisposed_mC1B18F40EC42CE956B37765010471C5E4C147B05_inline (WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * __this, const RuntimeMethod* method)
{
	{
		// return _isDisposed;
		bool L_0 = __this->get__isDisposed_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WaveWriter_get_IsDisposing_mC116F5601CC3B05AE713FCDEA75A10F7760F9385_inline (WaveWriter_t7FAB2D40028EF95159A21C9E0D594C468AF963BD * __this, const RuntimeMethod* method)
{
	{
		// return _isDisposing;
		bool L_0 = __this->get__isDisposing_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * VoiceInfo_get_UserData_mFF0F8364FAE94F39613F8C646BC233967EDF45AA_inline (VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 * __this, const RuntimeMethod* method)
{
	{
		// public object UserData { get; set; }
		RuntimeObject * L_0 = __this->get_U3CUserDataU3Ek__BackingField_9();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* FrameOut_1_get_Buf_m11751F803C38A493838A70F3A94EA6AE22EF761A_gshared_inline (FrameOut_1_t2E75A31E49C5BB56BEAA73766430E3B7F2167044 * __this, const RuntimeMethod* method)
{
	{
		// public T[] Buf { get; private set; }
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_U3CBufU3Ek__BackingField_0();
		return (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)L_0;
	}
}
